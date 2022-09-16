inherit buv-entity-utils

FILESEXTRAPATHS:append:buv-runbmc := "${THISDIR}/${PN}:"

DEPENDS:append:buv-runbmc = " ${@entity_enabled(d, '', ' buv-runbmc-yaml-config')}"

EXTRA_OECONF:append:buv-runbmc = " ${@entity_enabled(d, '', 'SENSOR_YAML_GEN=${STAGING_DIR_HOST}${datadir}/buv-runbmc-yaml-config/ipmi-sensors.yaml')}"
EXTRA_OECONF:append:buv-runbmc = " ${@entity_enabled(d, '', 'FRU_YAML_GEN=${STAGING_DIR_HOST}${datadir}/buv-runbmc-yaml-config/ipmi-fru-read.yaml')}"
EXTRA_OECONF:append:buv-runbmc = " ${@entity_enabled(d, '', 'INVSENSOR_YAML_GEN=${STAGING_DIR_HOST}${datadir}/buv-runbmc-yaml-config/ipmi-inventory-sensors.yaml')}"

EXTRA_OECONF:append:buv-runbmc = " --disable-i2c-whitelist-check"
EXTRA_OECONF:append:buv-runbmc = " --enable-sel_logger_clears_sel"

SRC_URI:append:buv-runbmc = " file://0001-Add-Set-BIOS-version-support.patch"
SRC_URI:append:buv-runbmc = " file://0001-dbus-sdr-Support-NaN-thresholds.patch"
SRC_URI:append:buv-runbmc = " file://0004-Add-SEL-add-command.patch"
SRC_URI:append:buv-runbmc = " file://0006-Correct-IPMI-firmware-revision-report.patch"
SRC_URI:append:buv-runbmc = " file://0007-dbus-sdr-storagecommands-Add-option-to-use-Clear-met.patch"
SRC_URI:append:buv-runbmc = " file://0008-Add-sensor-type-command.patch"
# warm reset command may not work, but function can sync with SCM
SRC_URI:append:buv-runbmc = " file://0009-implement-warm-reset-command.patch"
SRC_URI:append:buv-runbmc = " file://0011-Add-SEL-time-set-command.patch"
SRC_URI:append:buv-runbmc = " file://0012-Force-self-test-OK.patch"
SRC_URI:append:buv-runbmc = " file://0013-Set-is-from-system-interface-return-false.patch"
SRC_URI:append:buv-runbmc = " file://0014-Add-SEL-event-after-SEL-clear.patch"
SRC_URI:append:buv-runbmc = " file://0015-Fix-seesion-handle-duplicated.patch"
SRC_URI:append:buv-runbmc = " file://0016-Add-reset-SEL.patch"
SRC_URI:append:buv-runbmc = " file://0018-Add-session-RemoteMACAddress-support.patch"
SRC_URI:append:buv-runbmc = " file://0020-fix-percentage-type-show.patch"
SRC_URI:append:buv-runbmc = " file://0021-sensor-reading-optional-zero.patch"
SRC_URI:append:buv-runbmc = " file://0022-add-sensor-reading-factory-support.patch"
SRC_URI:append:buv-runbmc = " file://0023-add-oem-sel-support.patch"
SRC_URI:append:buv-runbmc = " file://0024-update-chassishandler-from-intel-oem-ipmi.patch"
SRC_URI:append:buv-runbmc = " file://0025-save-no-supported-boot-options.patch"

# Add send/get message support
# ipmid <-> ipmb <-> i2c
SRC_URI:append:buv-runbmc = " file://0002-Support-bridging-commands.patch"

PACKAGECONFIG:append:buv-entity = " ${@entity_enabled(d, 'dynamic-sensors', '')}"

# avoid build error after remove ipmi-fru
WHITELIST_CONF:buv-runbmc = "${S}/host-ipmid-whitelist.conf"

SYSTEMD_SERVICE:${PN}:append:buv-runbmc = " phosphor-ipmi-warm-reset.target"
