# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\TOSHIBA\Documents\PSoC Creator\PrimerAvance\StaticSegLCD_Example01.cydsn\StaticSegLCD_Example01.cyprj
# Date: Tue, 17 Oct 2017 17:09:47 GMT
#set_units -time ns
create_clock -name {LCD_SegStat_InClock(routed)} -period 10000000 -waveform {0 5000000} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 166.66666666666666 -waveform {0 83.3333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyMASTER_CLK} -period 166.66666666666666 -waveform {0 83.3333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {LCD_SegStat_InClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 60001 120001} [list [get_pins {ClockBlock/dclk_glb_0}]]


# Component constraints for C:\Users\TOSHIBA\Documents\PSoC Creator\PrimerAvance\StaticSegLCD_Example01.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\TOSHIBA\Documents\PSoC Creator\PrimerAvance\StaticSegLCD_Example01.cydsn\StaticSegLCD_Example01.cyprj
# Date: Tue, 17 Oct 2017 17:09:32 GMT
