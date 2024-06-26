#!/bin/sh

gadget_name=mmc-storage
gadget_dir=/sys/kernel/config/usb_gadget/$gadget_name
mmc_device=/dev/mmcblk0
mkdir -p $gadget_dir

version_above_5(){
  MAJOR_VERSION=$(uname -r | awk -F '.' '{print $1}')
  if [ $MAJOR_VERSION -ge 6 ]  ; then
    return 0
  else
    return 1
  fi
}

dev_name="f0833000.udc"
if version_above_5
then
  dev_name="ci_hdrc.3"
fi


cd $gadget_dir
# http://www.linux-usb.org/usb.ids
#    |-> 1d6b  Linux Foundation
#          |-> 0104  Multifunction Composite Gadget
echo "0x1d6b" > idVendor
echo "0x0104" > idProduct
mkdir -p strings/0x409
echo "OpenBMC" > strings/0x409/manufacturer
echo "MMC Storage Device" > strings/0x409/product
mkdir -p configs/c.1/strings/0x409
echo "config 1" > configs/c.1/strings/0x409/configuration
mkdir -p functions/mass_storage.usb0
ln -s functions/mass_storage.usb0 configs/c.1
echo 1 > functions/mass_storage.usb0/lun.0/removable
echo 0 > functions/mass_storage.usb0/lun.0/ro
echo 0 > functions/mass_storage.usb0/lun.0/cdrom
echo $mmc_device > functions/mass_storage.usb0/lun.0/file
echo "${dev_name}" > UDC
exit 0
