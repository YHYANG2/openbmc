SUMMARY     = "eCMD plugin with pdbg backend"
DESCRIPTION = "The glue code necessary for pdbg to be used as an eCMD plugin"
PR = "r1"
PV = "1.0+git${SRCPV}"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34400b68072d710fecd0a2940a0d1658"

inherit meson
inherit pkgconfig

SRC_URI = "git://git@github.com/open-power/ecmd-pdbg.git;branch=master;protocol=https"
SRCREV = "0362725415c9529c20ada661c92b2dcfc514006e"

S = "${WORKDIR}/git"

DEPENDS = "pdbg zlib libyaml ipl"

FILES:${PN} += "${prefix}/help"

EXTRA_OEMESON = " \
        -Dchip=p10 \
        "
