FILESEXTRAPATHS:prepend := "${THISDIR}/linux-nuvoton:"

SRC_URI:append:evb-npcm750 = " file://evb-npcm750.cfg"
SRC_URI:append:evb-npcm750 = " file://0001-dts-npcm750-evb-support-openbmc-partition-6.1.patch"
SRC_URI:append:evb-npcm750 = " file://0001-fru-modify-dts-for-eeprom.patch"
SRC_URI:append:evb-npcm750 = " file://0002-dts-npcm750-evb-fix-u-boot-image-and-flash-issues.patch"
SRC_URI:append:evb-npcm750 = " file://enable-configfs-hid.cfg"
SRC_URI:append:evb-npcm750 = " file://enable-configfs-mstg.cfg"
SRC_URI:append:evb-npcm750 = " file://enable-jtag-master.cfg"
SRC_URI:append:evb-npcm750 = " file://enable-slave-mqueue.cfg"
SRC_URI:append:evb-npcm750 = " file://enable-v4l2.cfg"
SRC_URI:append:evb-npcm750 = " file://enable-usb-xceiv.cfg"
