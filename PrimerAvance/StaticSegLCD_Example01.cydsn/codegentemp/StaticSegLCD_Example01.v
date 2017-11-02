// ======================================================================
// StaticSegLCD_Example01.v generated from TopDesign.cysch
// 11/02/2017 at 10:10
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 0
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 7
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 8
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 9
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 10
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 11
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 12
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 13
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 14
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 15
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 16
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 17
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 18
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 19
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 20
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 21
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 22
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 0
`define CYDEV_CHIP_REVISION_6A_NO_UDB 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 23
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 24
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 25
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 26
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 27
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// StaticSegLCD_v2_30(FrameRate=50, Gang=false, Helpers=<?xml version="1.0" encoding="utf-16"?> <ArrayOfAnyType xmlns:CustomizerVersion="CyComponentLibrary_9488ba586e6544d851b74a19d90f7aa4_77d449603a1e72a7f9db927cf3819f59, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null">   <anyType d2p1:type="HelperInfo" xmlns:d2p1="http://www.w3.org/2001/XMLSchema-instance">     <Name>Empty</Name>     <Color>0</Color>     <GlobalHelperIndex>0</GlobalHelperIndex>     <HelpSegInfoArray>       <HelperSegmentInfo Name="PIX0" Com="0" Seg="0" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX1" Com="0" Seg="1" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX2" Com="0" Seg="2" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX3" Com="0" Seg="3" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX4" Com="0" Seg="4" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX5" Com="0" Seg="5" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX6" Com="0" Seg="6" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX7" Com="0" Seg="7" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX8" Com="0" Seg="8" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX9" Com="0" Seg="9" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX10" Com="0" Seg="10" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX11" Com="0" Seg="11" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX12" Com="0" Seg="12" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX13" Com="0" Seg="13" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX14" Com="0" Seg="14" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX15" Com="0" Seg="15" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX16" Com="0" Seg="16" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX17" Com="0" Seg="17" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX18" Com="0" Seg="18" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX19" Com="0" Seg="19" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX20" Com="0" Seg="20" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX21" Com="0" Seg="21" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX22" Com="0" Seg="22" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX23" Com="0" Seg="23" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX24" Com="0" Seg="24" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX25" Com="0" Seg="25" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX26" Com="0" Seg="26" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX27" Com="0" Seg="27" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX28" Com="0" Seg="28" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX29" Com="0" Seg="29" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX30" Com="0" Seg="30" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="PIX31" Com="0" Seg="31" Display="-1" Digit="-1" Helper="Empty" RelPos="-1">         <GlobalDigitNum>-1</GlobalDigitNum>       </HelperSegmentInfo>     </HelpSegInfoArray>     <Kind>Empty</Kind>     <MaxSymbolsCount>0</MaxSymbolsCount>     <SegmentCount>0</SegmentCount>     <DisplayNum>-1</DisplayNum>     <SymbolsCount>0</SymbolsCount>   </anyType>   <anyType d2p1:type="HelperInfo" xmlns:d2p1="http://www.w3.org/2001/XMLSchema-instance">     <Name>Helper_7Segment_0</Name>     <Color>-1928248</Color>     <GlobalHelperIndex>0</GlobalHelperIndex>     <HelpSegInfoArray>       <HelperSegmentInfo Name="H7SEG0_A" Com="0" Seg="29" Display="0" Digit="0" Helper="Segment7" RelPos="0">         <GlobalDigitNum>0</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG0_B" Com="0" Seg="28" Display="0" Digit="0" Helper="Segment7" RelPos="1">         <GlobalDigitNum>0</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG0_C" Com="0" Seg="2" Display="0" Digit="0" Helper="Segment7" RelPos="2">         <GlobalDigitNum>0</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG0_D" Com="0" Seg="1" Display="0" Digit="0" Helper="Segment7" RelPos="3">         <GlobalDigitNum>0</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG0_E" Com="0" Seg="0" Display="0" Digit="0" Helper="Segment7" RelPos="4">         <GlobalDigitNum>0</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG0_F" Com="0" Seg="30" Display="0" Digit="0" Helper="Segment7" RelPos="5">         <GlobalDigitNum>0</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG0_G" Com="0" Seg="31" Display="0" Digit="0" Helper="Segment7" RelPos="6">         <GlobalDigitNum>0</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG1_A" Com="0" Seg="25" Display="0" Digit="1" Helper="Segment7" RelPos="0">         <GlobalDigitNum>1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG1_B" Com="0" Seg="24" Display="0" Digit="1" Helper="Segment7" RelPos="1">         <GlobalDigitNum>1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG1_C" Com="0" Seg="6" Display="0" Digit="1" Helper="Segment7" RelPos="2">         <GlobalDigitNum>1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG1_D" Com="0" Seg="5" Display="0" Digit="1" Helper="Segment7" RelPos="3">         <GlobalDigitNum>1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG1_E" Com="0" Seg="4" Display="0" Digit="1" Helper="Segment7" RelPos="4">         <GlobalDigitNum>1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG1_F" Com="0" Seg="26" Display="0" Digit="1" Helper="Segment7" RelPos="5">         <GlobalDigitNum>1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG1_G" Com="0" Seg="27" Display="0" Digit="1" Helper="Segment7" RelPos="6">         <GlobalDigitNum>1</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG2_A" Com="0" Seg="20" Display="0" Digit="2" Helper="Segment7" RelPos="0">         <GlobalDigitNum>2</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG2_B" Com="0" Seg="19" Display="0" Digit="2" Helper="Segment7" RelPos="1">         <GlobalDigitNum>2</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG2_C" Com="0" Seg="10" Display="0" Digit="2" Helper="Segment7" RelPos="2">         <GlobalDigitNum>2</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG2_D" Com="0" Seg="9" Display="0" Digit="2" Helper="Segment7" RelPos="3">         <GlobalDigitNum>2</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG2_E" Com="0" Seg="8" Display="0" Digit="2" Helper="Segment7" RelPos="4">         <GlobalDigitNum>2</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG2_F" Com="0" Seg="21" Display="0" Digit="2" Helper="Segment7" RelPos="5">         <GlobalDigitNum>2</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG2_G" Com="0" Seg="22" Display="0" Digit="2" Helper="Segment7" RelPos="6">         <GlobalDigitNum>2</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG3_A" Com="0" Seg="16" Display="0" Digit="3" Helper="Segment7" RelPos="0">         <GlobalDigitNum>3</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG3_B" Com="0" Seg="15" Display="0" Digit="3" Helper="Segment7" RelPos="1">         <GlobalDigitNum>3</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG3_C" Com="0" Seg="14" Display="0" Digit="3" Helper="Segment7" RelPos="2">         <GlobalDigitNum>3</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG3_D" Com="0" Seg="13" Display="0" Digit="3" Helper="Segment7" RelPos="3">         <GlobalDigitNum>3</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG3_E" Com="0" Seg="12" Display="0" Digit="3" Helper="Segment7" RelPos="4">         <GlobalDigitNum>3</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG3_F" Com="0" Seg="17" Display="0" Digit="3" Helper="Segment7" RelPos="5">         <GlobalDigitNum>3</GlobalDigitNum>       </HelperSegmentInfo>       <HelperSegmentInfo Name="H7SEG3_G" Com="0" Seg="18" Display="0" Digit="3" Helper="Segment7" RelPos="6">         <GlobalDigitNum>3</GlobalDigitNum>       </HelperSegmentInfo>     </HelpSegInfoArray>     <Kind>Segment7</Kind>     <MaxSymbolsCount>5</MaxSymbolsCount>     <SegmentCount>7</SegmentCount>     <DisplayNum>0</DisplayNum>     <SymbolsCount>4</SymbolsCount>   </anyType> </ArrayOfAnyType>, NumSegmentLines=32, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=StaticSegLCD_v2_30, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LCD_SegStat, CY_INSTANCE_SHORT_NAME=LCD_SegStat, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=LCD_SegStat, )
module StaticSegLCD_v2_30_0 ;


          wire  Net_55;
          wire  Net_59;
          wire  Net_23;
          wire  Net_56;


	cy_clock_v1_0
		#(.id("b3c1f733-c81e-4637-ac28-596be8d8f9b0/53167af2-7bf8-4add-9b83-69d9d366d103"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("10000000000000"),
		  .is_direct(0),
		  .is_digital(1))
		InClock
		 (.clock_out(Net_23));


	wire [0:0] tmpOE__Com_net;

	cy_psoc3_port_v1_0
		#(.width(1),
		  .siorefwidth(1),
		  .id("b3c1f733-c81e-4637-ac28-596be8d8f9b0/02ec008e-dca2-4442-8547-7df0c1ba4d7b"),
		  .pin_aliases({""}),
		  .access_mode("LCD"),
		  .layout_mode("NONCONTIGUOUS"),
		  .port_mode("OUTPUT"),
		  .intr_mode(2'b00),
		  .drive_mode(3'b110),
		  .lcd_com_seg(1'b0),
		  .lcd_sw_drive(1),
		  .por_state(0),
		  .port_alias_required(1),
		  .port_alias_group("StSegLcdPort"))
		Com
		 (.oe(tmpOE__Com_net),
		  .y(1'b0));

	assign tmpOE__Com_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? 1'b1 : 1'b0;

	wire [0:0] tmpOE__Seg_net;

	cy_psoc3_port_v1_0
		#(.width(32),
		  .siorefwidth(16),
		  .id("b3c1f733-c81e-4637-ac28-596be8d8f9b0/0b265fdd-802c-4c4e-8739-e60f9302a50b"),
		  .pin_aliases({",,,,,,,,,,,,,,,,",",,,,,,,,,,,,,,,"}),
		  .access_mode("LCD"),
		  .layout_mode("NONCONTIGUOUS"),
		  .port_mode("OUTPUT"),
		  .intr_mode(64'b0000000000000000000000000000000000000000000000000000000000000000),
		  .drive_mode(96'b110110110110110110110110110110110110110110110110110110110110110110110110110110110110110110110110),
		  .lcd_com_seg(32'b11111111111111111111111111111111),
		  .lcd_sw_drive(1),
		  .por_state(0),
		  .port_alias_required(1),
		  .port_alias_group("StSegLcdPort"))
		Seg
		 (.oe(tmpOE__Seg_net),
		  .y(32'b0));

	assign tmpOE__Seg_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? 1'b1 : 1'b0;


	cy_isr_v1_0
		#(.int_type(2'b10))
		LCD_ISR
		 (.int_signal(Net_56));



	cy_dma_v1_0
		#(.drq_type(2'b10))
		Lcd_Dma
		 (.drq(Net_23),
		  .trq(1'b0),
		  .nrq(Net_56));




endmodule

// CharLCD_v2_20(ConversionRoutines=true, CUSTOM0=0,E,8,8,8,E,0, CUSTOM1=0,A,A,4,4,4,0, CUSTOM2=0,E,A,E,8,8,0, CUSTOM3=0,E,A,C,A,A,0, CUSTOM4=0,E,8,C,8,E,0, CUSTOM5=0,E,8,E,2,E,0, CUSTOM6=0,E,8,E,2,E,0, CUSTOM7=0,4,4,4,0,4,0, CustomCharacterSet=0, TypeReplacementString=uint8, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=CharLCD_v2_20, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=LCD_Char, CY_INSTANCE_SHORT_NAME=LCD_Char, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=20, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.1 Update 1, INSTANCE_NAME=LCD_Char, )
module CharLCD_v2_20_1 ;



	wire [6:0] tmpOE__LCDPort_net;
	wire [6:0] tmpFB_6__LCDPort_net;
	wire [6:0] tmpIO_6__LCDPort_net;
	wire [0:0] tmpINTERRUPT_0__LCDPort_net;
	electrical [0:0] tmpSIOVREF__LCDPort_net;

	cy_psoc3_pins_v1_10
		#(.id("5ddca583-bd91-4f78-b375-fc16a397d4e2/ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(21'b110_110_110_110_110_110_110),
		  .ibuf_enabled(7'b1_1_1_1_1_1_1),
		  .init_dr_st(7'b0_0_0_0_0_0_0),
		  .input_clk_en(0),
		  .input_sync(7'b1_1_1_1_1_1_1),
		  .input_sync_mode(7'b0_0_0_0_0_0_0),
		  .intr_mode(14'b00_00_00_00_00_00_00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(",,,,,,"),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(7'b0_0_0_0_0_0_0),
		  .oe_reset(0),
		  .oe_sync(7'b0_0_0_0_0_0_0),
		  .output_clk_en(0),
		  .output_clock_mode(7'b0_0_0_0_0_0_0),
		  .output_conn(7'b0_0_0_0_0_0_0),
		  .output_mode(7'b0_0_0_0_0_0_0),
		  .output_reset(0),
		  .output_sync(7'b0_0_0_0_0_0_0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(",,,,,,"),
		  .pin_mode("OOOOOOO"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(7'b1_1_1_1_1_1_1),
		  .sio_ibuf(""),
		  .sio_info(14'b00_00_00_00_00_00_00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(7'b0_0_0_0_0_0_0),
		  .spanning(0),
		  .use_annotation(7'b0_0_0_0_0_0_0),
		  .vtrip(14'b10_10_10_10_10_10_10),
		  .width(7),
		  .ovt_hyst_trim(7'b0_0_0_0_0_0_0),
		  .ovt_needed(7'b0_0_0_0_0_0_0),
		  .ovt_slew_control(14'b00_00_00_00_00_00_00),
		  .input_buffer_sel(14'b00_00_00_00_00_00_00))
		LCDPort
		 (.oe(tmpOE__LCDPort_net),
		  .y({7'b0}),
		  .fb({tmpFB_6__LCDPort_net[6:0]}),
		  .io({tmpIO_6__LCDPort_net[6:0]}),
		  .siovref(tmpSIOVREF__LCDPort_net),
		  .interrupt({tmpINTERRUPT_0__LCDPort_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LCDPort_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{7'b1111111} : {7'b1111111};



endmodule

// top
module top ;

          wire  Net_4;

    StaticSegLCD_v2_30_0 LCD_SegStat ();


	cy_isr_v1_0
		#(.int_type(2'b10))
		WakeUpIsr
		 (.int_signal(Net_4));


	wire [0:0] tmpOE__Pin_wakeup_net;
	wire [0:0] tmpFB_0__Pin_wakeup_net;
	wire [0:0] tmpIO_0__Pin_wakeup_net;
	electrical [0:0] tmpSIOVREF__Pin_wakeup_net;

	cy_psoc3_pins_v1_10
		#(.id("1425177d-0d0e-4468-8bcc-e638e5509a9b"),
		  .drive_mode(3'b010),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b10),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Pin_wakeup
		 (.oe(tmpOE__Pin_wakeup_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Pin_wakeup_net[0:0]}),
		  .io({tmpIO_0__Pin_wakeup_net[0:0]}),
		  .siovref(tmpSIOVREF__Pin_wakeup_net),
		  .interrupt({Net_4}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Pin_wakeup_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    CharLCD_v2_20_1 LCD_Char ();



endmodule

