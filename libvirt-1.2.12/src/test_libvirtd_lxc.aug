module Test_libvirtd_lxc =
  let conf = "log_with_libvirtd = 1
security_driver = \"selinux\"
security_default_confined = 1
security_require_confined = 1
"

   test Libvirtd_lxc.lns get conf =
{ "log_with_libvirtd" = "1" }
{ "security_driver" = "selinux" }
{ "security_default_confined" = "1" }
{ "security_require_confined" = "1" }
