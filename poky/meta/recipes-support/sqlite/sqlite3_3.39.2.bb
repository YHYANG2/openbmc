require sqlite3.inc

LICENSE = "PD"
LIC_FILES_CHKSUM = "file://sqlite3.h;endline=11;md5=786d3dc581eff03f4fd9e4a77ed00c66"

SRC_URI = "http://www.sqlite.org/2022/sqlite-autoconf-${SQLITE_PV}.tar.gz"
SRC_URI[sha256sum] = "852be8a6183a17ba47cee0bbff7400b7aa5affd283bf3beefc34fcd088a239de"

# -19242 is only an issue in specific development branch commits
CVE_CHECK_IGNORE += "CVE-2019-19242"
# This is believed to be iOS specific (https://groups.google.com/g/sqlite-dev/c/U7OjAbZO6LA)
CVE_CHECK_IGNORE += "CVE-2015-3717"
# Issue in an experimental extension we don't have/use. Fixed by https://sqlite.org/src/info/b1e0c22ec981cf5f
CVE_CHECK_IGNORE += "CVE-2021-36690"
