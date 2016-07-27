#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/mman.h>
#include <stdio.h>

#include <libvmi/libvmi.h>

int main(int argc,char **argv)
{
    vmi_instance_t vmi;
    uint32_t offset;
    addr_t next_module, list_head;

    //输入虚拟机名称
    char *name = argv[1];

    //初始化libvmi库
    if (vmi_init(&vmi, VMI_AUTO | VMI_INIT_COMPLETE, name) ==
        VMI_FAILURE) {
        printf("Failed to init LibVMI library.\n");
        return 1;
    }

    //暂停虚拟机
    vmi_pause_vm(vmi);
    //根据操作系统种类进行分析，找到内核模块全局链表头部
    switch(vmi_get_ostype(vmi))
    {
    case VMI_OS_LINUX:
        vmi_read_addr_ksym(vmi, "modules", &next_module);
        break;
    case VMI_OS_WINDOWS:
        vmi_read_addr_ksym(vmi, "PsLoadedModuleList", &next_module);
        break;
    default:
        goto error_exit;
    }
    //定义next链表头
    list_head = next_module;

    //遍历模块列表
    while (1) {

        //找到下一个模块结构体的地址
        addr_t tmp_next = 0;

        vmi_read_addr_va(vmi, next_module, 0, &tmp_next);

        //如果下一个结构体为链表头部，则循环结束
        if (list_head == tmp_next) {
            break;
        }

        //打印模块名称

        //在linux操作系统下，模块名称域的偏移量根据32位或者64位系统而有所不同，偏移量为两个指针域，分别指向下一个结构体和上一个结构体，因此64位系统下偏移量为16个字节，32位系统下偏移量为8个字节
        if (VMI_OS_LINUX == vmi_get_ostype(vmi)) {
            char *modname = NULL;

            if (VMI_PM_IA32E == vmi_get_page_mode(vmi)) {   //64位系统，偏移量为16个字节
                modname = vmi_read_str_va(vmi, next_module + 16, 0);
            }
            else {
                modname = vmi_read_str_va(vmi, next_module + 8, 0);//32位系统，偏移量为8个字节
            }
            printf("%s\n", modname);
            free(modname);
        }
        //在windows操作系统下，模块名称域的偏移量固定，64位系统下偏移量为0x58,32位系统下偏移量为0x2c
        else if (VMI_OS_WINDOWS == vmi_get_ostype(vmi)) {

            unicode_string_t *us = NULL;

            //unicode_string_t为一种数据结构，拥有contents内容域，vmi_read_unicode_str_va为返回unicode码的字符串，因此还需要vmi_convert_str_encoding进行编码，&out为unicode_string_t结构
            //注意，vmi_read_unicode_str_va返回值必须由vmi_free_unicode_str进行释放，此点与vmi_read_str_va类似，返回的字符串必须释放。另外vmi_read_unicode_str_va只支持windows操作系统，对linux系统不提供支持

            if (VMI_PM_IA32E == vmi_get_page_mode(vmi)) {
                us = vmi_read_unicode_str_va(vmi, next_module + 0x58, 0);
            } else {
                us = vmi_read_unicode_str_va(vmi, next_module + 0x2c, 0);
            }

            unicode_string_t out = { 0 };

            if (us &&
                VMI_SUCCESS == vmi_convert_str_encoding(us, &out,
                                                        "UTF-8")) {
                printf("%s\n", out.contents);
                free(out.contents);
            }
            if (us)
                vmi_free_unicode_str(us);
        }
        next_module = tmp_next;
    }

error_exit:
    //继续运行虚拟机(和前面暂停操作对应)
    vmi_resume_vm(vmi);

    //销毁虚拟机
    vmi_destroy(vmi);

    return 0;
}