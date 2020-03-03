FILESEXTRAPATHS_prepend_olympus-nuvoton := "${THISDIR}/${PN}:"

SRC_URI_append_olympus-nuvoton = " file://olympus-reload-sensor.service"
SRC_URI_append_olympus-nuvoton = " file://xyz.openbmc_project.Hwmon_hostoff@.service"
SRC_URI_append_olympus-nuvoton = " file://olympus-reload-sensor.sh"

SYSTEMD_SERVICE_${PN}_append_olympus-nuvoton = " olympus-reload-sensor.service"
SYSTEMD_SERVICE_${PN}_append_olympus-nuvoton = " xyz.openbmc_project.Hwmon_hostoff@.service"

ITEMS = " \
        i2c@82000/tmp421@4c \
        i2c@82000/power-supply@58 \
        i2c@86000/tps53679@60 \
        i2c@86000/tps53659@62 \
        i2c@86000/tps53659@64 \
        i2c@86000/tps53679@70 \
        i2c@86000/tps53659@72 \
        i2c@86000/tps53659@74 \
        i2c@86000/tps53622@67 \
        i2c@86000/tps53622@77 \
        i2c@86000/ina219@40 \
        i2c@86000/ina219@41 \
        i2c@86000/ina219@44 \
        i2c@86000/ina219@45 \
        i2c@87000/tmp421@4c \
        i2c@88000/adm1278@11 \
        i2c@8d000/tmp75@4a  \
        pwm-fan-controller@103000 \
        adc@c000 \
        adc@c000_hostoff \
        "

ENVS = "obmc/hwmon/ahb/apb/{0}.conf"
SYSTEMD_ENVIRONMENT_FILE_${PN}_append_olympus-nuvoton = " ${@compose_list(d, 'ENVS', 'ITEMS')}"

# PECI
PECINAMES = " \
        peci-0/0-30/peci-cputemp.0 \
        peci-0/0-31/peci-cputemp.1\
        peci-0/0-30/peci-dimmtemp.0 \
        "
PECIITEMSFMT = "devices/platform/ahb/ahb--apb/ahb--apb--bus@100000/f0100000.peci-bus/{0}.conf"
PECIITEMS = "${@compose_list(d, 'PECIITEMSFMT', 'PECINAMES')}"
PECIENVS = "obmc/hwmon/{0}"
SYSTEMD_ENVIRONMENT_FILE_${PN}_append_olympus-nuvoton = " ${@compose_list(d, 'PECIENVS', 'PECIITEMS')}"

EXTRA_OECONF_append_olympus-nuvoton  = " --enable-update-functional-on-fail"

do_install_append_olympus-nuvoton() {
    install -d ${D}/${bindir}
    install -m 0755 ${WORKDIR}/olympus-reload-sensor.sh ${D}${bindir}/
}
