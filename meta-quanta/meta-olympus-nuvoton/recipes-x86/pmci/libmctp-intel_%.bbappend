FILESEXTRAPATHS_prepend_olympus-nuvoton := "${THISDIR}/${PN}:"

SRC_URI_olympus-nuvoton := "git://github.com/Nuvoton-Israel/libmctp.git"
SRCREV_olympus-nuvoton := "09a11109c694b3c690370f640e84983ae6e2db7e"

TARGET_CFLAGS += "-DMCTP_HAVE_FILEIO"

