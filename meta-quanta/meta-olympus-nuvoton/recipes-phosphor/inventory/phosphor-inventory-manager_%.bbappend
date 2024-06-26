FILESEXTRAPATHS:prepend:olympus-nuvoton := "${THISDIR}/${PN}:"
PACKAGECONFIG:append:olympus-nuvoton = " associations"

SRC_URI:append:olympus-nuvoton = " file://associations.json"
SRC_URI:append:olympus-nuvoton = " file://0001-support-type-uint64-uint16-uint8-for-smbios.patch"


DEPENDS:append:olympus-nuvoton = " olympus-nuvoton-inventory-cleanup"



do_install:append:olympus-nuvoton() {
    install -d ${D}${base_datadir}
    install -m 0755 ${WORKDIR}/associations.json ${D}${base_datadir}/associations.json
}
