主机A想要免密码远程登录主机B:<br>
主机A：
cd ~/.ssh
ssh-keygen -t rsa -P ''  ps：该命令生成idrsa和idrsa.pub
scp idrsa.pub root@主机B IP：~/.ssh/authorized_keys

主机B：
cd ~/.ssh
chmod 600 authorized_keys


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
