module Test_libvirt_lockd =
  let conf = "auto_disk_leases = 0
require_lease_for_disks = 1
file_lockspace_dir = \"/var/lib/libvirt/lockd/files\"
lvm_lockspace_dir = \"/var/lib/libvirt/lockd/lvmvolumes\"
scsi_lockspace_dir = \"/var/lib/libvirt/lockd/scsivolumes\"
"

   test Libvirt_lockd.lns get conf =
{ "auto_disk_leases" = "0" }
{ "require_lease_for_disks" = "1" }
{ "file_lockspace_dir" = "/var/lib/libvirt/lockd/files" }
{ "lvm_lockspace_dir" = "/var/lib/libvirt/lockd/lvmvolumes" }
{ "scsi_lockspace_dir" = "/var/lib/libvirt/lockd/scsivolumes" }
