1.配置文件/etc/libvmi.conf

ubuntu {
     ostype = "Linux";
     sysmap = "/boot/System.map-3.19.0-25-generic";
     linux_name = 0x5a0;
     linux_tasks = 0x338;
     linux_mm = 0x388;
     linux_pid = 0x3f8;
     linux_pgd = 0x40;
}

2.源代码(c语言)
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/mman.h>
#include <stdio.h>
#include <inttypes.h>

#include <libvmi/libvmi.h>

int main ()
{
    vmi_instance_t vmi;
    unsigned char *memory = NULL;
    uint32_t offset;
    addr_t list_head = 0, next_list_entry = 0;
    addr_t current_process = 0;
    addr_t tmp_next = 0;
    char *procname = NULL;
    vmi_pid_t pid = 0;
    unsigned long tasks_offset = 0, pid_offset = 0, name_offset = 0;
    status_t status;

    char *name = "ubuntu";

    //初始化libvmi库
    if (vmi_init(&vmi, VMI_AUTO | VMI_INIT_COMPLETE, name) == VMI_FAILURE) {
        printf("Failed to init LibVMI library.\n");
        return 1;
    }

    //根据操作系统种类获取各偏移量
    if (VMI_OS_LINUX == vmi_get_ostype(vmi)) {
        tasks_offset = vmi_get_offset(vmi, "linux_tasks");
        name_offset = vmi_get_offset(vmi, "linux_name");
        pid_offset = vmi_get_offset(vmi, "linux_pid");
    }
    else if (VMI_OS_WINDOWS == vmi_get_ostype(vmi)) {
        tasks_offset = vmi_get_offset(vmi, "win_tasks");
        name_offset = vmi_get_offset(vmi, "win_pname");
        pid_offset = vmi_get_offset(vmi, "win_pid");
    }

    //判断偏移量是否获取到
    if (0 == tasks_offset) {
        printf("Failed to find win_tasks\n");
        goto error_exit;
    }
    if (0 == pid_offset) {
        printf("Failed to find win_pid\n");
        goto error_exit;
    }
    if (0 == name_offset) {
        printf("Failed to find win_pname\n");
        goto error_exit;
    }

    //暂停虚拟机以进行内存读取
    if (vmi_pause_vm(vmi) != VMI_SUCCESS) {
        printf("Failed to pause VM\n");
        goto error_exit;
    }

    //获取虚拟机的名字和id号，name2为名字，id为id号
    char *name2 = vmi_get_name(vmi);

    if (VMI_FILE != vmi_get_access_mode(vmi)) {
        uint64_t id = vmi_get_vmid(vmi);

        printf("Process listing for VM %s (id=%"PRIu64")\n", name2, id);
    }
    else {
        printf("Process listing for file %s\n", name2);
    }
    free(name2);

    //获取进程链表头部
    if (VMI_OS_LINUX == vmi_get_ostype(vmi)) {
        //linux操作系统进程首部描述符为"init_task"
        list_head = vmi_translate_ksym2v(vmi, "init_task") + tasks_offset;
    }
    else if (VMI_OS_WINDOWS == vmi_get_ostype(vmi)) {

        // windows操作系统找到PsActiveProcessHead作为进程链表头部
        if(VMI_FAILURE == vmi_read_addr_ksym(vmi, "PsActiveProcessHead", &list_head)) {
            printf("Failed to find PsActiveProcessHead\n");
            goto error_exit;
        }
    }

    //初始化next_list_entry，用于遍历链表
    next_list_entry = list_head;

    //遍历进程链表
    do {
        //定义当前进程
        current_process = next_list_entry - tasks_offset;
        //获取当前进程号
        vmi_read_32_va(vmi, current_process + pid_offset, 0, (uint32_t*)&pid);
        //获取当前进程名称
        procname = vmi_read_str_va(vmi, current_process + name_offset, 0);
        //判断名称是否得到
        if (!procname) {
            printf("Failed to find procname\n");
            goto error_exit;
        }

        //打印进程号，进程名和当前进程地址
        printf("[%5d] %s (struct addr:%"PRIx64")\n", pid, procname, current_process);
        if (procname) {
            free(procname);
            procname = NULL;
        }

        //遍历下一个进程结构体

        status = vmi_read_addr_va(vmi, next_list_entry, 0, &next_list_entry);
        if (status == VMI_FAILURE) {
            printf("Failed to read next pointer in loop at %"PRIx64"\n", next_list_entry);
            goto error_exit;
        }

    } while(next_list_entry != list_head); //结束循环判断条件

//异常处理
error_exit:
    //继续运行虚拟机(和前面暂停操作对应)
    vmi_resume_vm(vmi);

    //销毁虚拟机
    vmi_destroy(vmi);

    return 0;
}



进程链表结构：(双向链表)
swapper(即init_task)-init-用户进程1-用户进程2........-用户进程N-(swapper)