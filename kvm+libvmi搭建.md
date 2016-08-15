#1.libvirt搭建
##依赖库：
	sudo apt-get install libxml++2.6-2  libxml++2.6-dev  
	sudo apt-get install libdevmapper-dev
	sudo apt-get install libpciaccess-dev
	sudo apt-get install python-dev
	sudo apt-get install libnl-dev
	sudo apt-get install libyajl-dev

	./autogen.sh --system --enable-compile-warnings=error
	make
	sudo make install

#2.安装KVM
##依赖库：
	apt-get install qemu-kvm virt-manager bridge-utils

#3.创建虚拟机：
	sudo virt-manager 进入可视化界面安装
	virsh list --all 显示所有虚拟机

#4.配置libvmi
##(1)windows配置
###安装依赖库：
	sudo apt-get install python-pefile   //安装python-pefile
	sudo apt-get install mscompress      //安装mscompress
	sudo apt-get install cabextract      //安装cabextract
	sudo apt-get install python-pip        //安装construct
	sudo pip install construct
	svn checkout http://pdbparse.googlecode.com/svn/trunk/pdbparse-read-only
	cd pdbparse-read-only/
	sudo python setup.py install           //安装pdbparse(需翻墙)
###运行工具：
	cd libvmi/examples
	sudo ./dump-memory win-xp win-xp.dd
	cd libvmi/tools/windows-offset-finder
	将win-xp.dd复制到该目录下
	g++ -o getGUID getGUID.cpp
	./getGUID win-xp.dd |python ./downloadPDB.py |python ./dumpPDB.py -o debugSymbols.txt
	./createConfig.py -f debugSymbols.txt 
	控制台上打印出结果，修改虚拟机名

##(2)linux配置
###运行工具：
	进入domU,切换root用户
	cd libvmi/tools/linux-offset-finder
	make
	insmod findoffsets.ko
	rmmod findoffsets
	dmesg调试，控制台上打印出结果，修改虚拟机名和各项地址
	进入dom0
	找到boot目录下的System.map作为sysmap路径
