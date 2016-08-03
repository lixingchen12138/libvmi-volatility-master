/^# Packages using this file: / {
  s/# Packages using this file://
  ta
  :a
  s/ libvirt / libvirt /
  tb
  s/ $/ libvirt /
  :b
  s/^/# Packages using this file:/
}
