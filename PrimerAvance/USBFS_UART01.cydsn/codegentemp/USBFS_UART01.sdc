# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\TOSHIBA\Documents\GitHub\Ball-Plate\PrimerAvance\USBFS_UART01.cydsn\USBFS_UART01.cyprj
# Date: Tue, 31 Oct 2017 15:55:48 GMT
#set_units -time ns
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 15.625 -waveform {0 7.8125} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 15.625 -waveform {0 7.8125} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {CyScBoostClk} -period 93.75 -waveform {0 46.875} [list [get_pins {ClockBlock/aclk_glb_0}]]


# Component constraints for C:\Users\TOSHIBA\Documents\GitHub\Ball-Plate\PrimerAvance\USBFS_UART01.cydsn\TopDesign\PSoC5\TopDesign.cysch
# Project: C:\Users\TOSHIBA\Documents\GitHub\Ball-Plate\PrimerAvance\USBFS_UART01.cydsn\USBFS_UART01.cyprj
# Date: Tue, 31 Oct 2017 15:55:13 GMT
