#1.libvirt搭建<br>
##依赖库：<br>
sudo apt-get install libxml++2.6-2  libxml++2.6-dev  <br>
sudo apt-get install libdevmapper-dev<br>
sudo apt-get install libpciaccess-dev<br>
sudo apt-get install python-dev<br>
sudo apt-get install libnl-dev<br>

sudo apt-get install libyajl-dev<br><br>

./autogen.sh --system --enable-compile-warnings=error<br>
make<br>
sudo make install<br>

#2.安装KVM<br>
##依赖库：<br>
apt-get install qemu-kvm virt-manager bridge-utils<br>

#3.创建虚拟机：
sudo virt-manager 进入可视化界面安装<br>

virsh list --all 显示所有虚拟机<br>

#4.配置libvmi<br>
##(1)windows配置<br>

###安装依赖库：<br>
sudo apt-get install python-pefile   //安装python-pefile<br>
sudo apt-get install mscompress      //安装mscompress<br>
sudo apt-get install cabextract      //安装cabextract<br>

sudo apt-get install python-pip        //安装construct<br>
sudo pip install construct<br>

svn checkout http://pdbparse.googlecode.com/svn/trunk/pdbparse-read-only<br>
cd pdbparse-read-only/<br>
sudo python setup.py install           //安装pdbparse(需翻墙)<br>

###运行工具：<br>
cd libvmi/examples<br>
sudo ./dump-memory win-xp win-xp.dd<br>
cd libvmi/tools/windows-offset-finder<br>
将win-xp.dd复制到该目录下<br>
g++ -o getGUID getGUID.cpp<br>
./getGUID win-xp.dd |python ./downloadPDB.py |python ./dumpPDB.py -o debugSymbols.txt<br>
./createConfig.py -f debugSymbols.txt <br>
控制台上打印出结果，修改虚拟机名<br>

##(2)linux配置<br>
###运行工具：<br>
进入domU,切换root用户<br>
cd libvmi/tools/linux-offset-finder<br>
make<br>
insmod findoffsets.ko<br>
rmmod findoffsets<br>
dmesg调试，控制台上打印出结果，修改虚拟机名和sysmap路径，找到boot目录下的System.map作为sysmap路径
