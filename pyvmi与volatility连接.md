1.安装dwarfdump
ubuntu环境下:
sudo apt-get install dwarfdump

centos环境下（没有dwarfdump源，需手动安装）：
yum install elfutils-libelf-devel
./configure
make dd
cp dwarfdump/dwarfdump /usr/local/bin
cp dwarfdump/dwarfdump.conf /usr/local/lib

2.生成module.dwarf
cd tools/linux
make

3.制作profile(将生成的module.dwarf和system.map打包)
sudo zip volatility/volatility/plugins/overlays/linux/Ubuntu1204.zip volatility/tools/linux/module.dwarf /boot/System.map-3.19.0-25-generic

4.安装volatility
sudo python setup.py install

5.移动pyaddress.py
cd libvmi/tools/pyvmi
复制pyvmiaddress.py到volatility/volatility/addrspaces目录

6.安装distorm3
sudo python setup.py install

7.运行
cd volatility

sudo python vol.py --info|grep Linux
查看profile名

例：打印进程列表
sudo python vol.py --profile=LinuxUbuntu1204x64 -l vmi://ubuntu linux_pslist 
