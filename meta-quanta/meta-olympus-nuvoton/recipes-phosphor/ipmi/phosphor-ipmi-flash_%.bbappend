NUVOTON_FLASH_PCIMBOX = "0xF0848000"
NUVOTON_FLASH_LPC     = "0xC0008000"

PACKAGECONFIG:append:olympus-nuvoton = " nuvoton-lpc"
#EXTRA_OECONF:append:olympus-nuvoton = " --enable-nuvoton-p2a-mbox"

IPMI_FLASH_BMC_ADDRESS_olympus-nuvoton = "${NUVOTON_FLASH_LPC}"