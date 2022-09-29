SUMMARY = "ISO language, territory, currency, script codes and their translations"
DESCRIPTION = "Provides lists of various ISO standards (e.g. country, \
language, language scripts, and currency names) in one place, rather \
than repeated in many programs throughout the system."
HOMEPAGE = "https://salsa.debian.org/iso-codes-team/iso-codes"
BUGTRACKER = "https://salsa.debian.org/iso-codes-team/iso-codes/issues"

LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"

SRC_URI = "git://salsa.debian.org/iso-codes-team/iso-codes.git;protocol=https;branch=main;"
SRCREV = "2651d7fe65582263c57385a852b0c6d8a49f6985"

# inherit gettext cannot be used, because it adds gettext-native to BASEDEPENDS which
# are inhibited by allarch
DEPENDS = "gettext-native"

S = "${WORKDIR}/git"

inherit allarch autotools

FILES:${PN} += "${datadir}/xml/"
