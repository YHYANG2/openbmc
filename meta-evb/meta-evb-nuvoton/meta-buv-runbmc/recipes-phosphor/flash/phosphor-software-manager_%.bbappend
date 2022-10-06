FILESEXTRAPATHS:prepend:buv-runbmc := "${THISDIR}/${PN}:"

SRC_URI:append:buv-runbmc = " \
    file://0001-Support-update-uboot-with-emmc-image.patch \
    "

PACKAGECONFIG:append:buv-runbmc = " verify_signature flash_bios"
EXTRA_OEMESON:append:buv-runbmc = " -Doptional-images=image-bios"
