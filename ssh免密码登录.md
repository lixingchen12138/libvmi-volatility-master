##主机A想要免密码远程登录主机B:<br>
#主机A：<br>
cd ~/.ssh<br>
ssh-keygen -t rsa -P ''  ps：该命令生成idrsa和idrsa.pub<br>
scp idrsa.pub root@主机B IP：~/.ssh/authorized_keys<br>

#主机B：
cd ~/.ssh<br>
chmod 600 authorized_keys<br>


ps:
1.主机B重设root密码：
sudo passwd

2.更改允许自动登录配置：
cd /etc/ssh
vim sshd_config
将以下三行的注释去除：
RSAAuthentication yes
PubkeyAuthentication yes
AuthorizedKeysFile      %h/.ssh/authorized_keys
重启ssh服务
service ssh restart
