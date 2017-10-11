;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.1 Update 1
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Out_X */
Out_X__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Out_X__0__MASK EQU 0x01
Out_X__0__PC EQU CYREG_PRT0_PC0
Out_X__0__PORT EQU 0
Out_X__0__SHIFT EQU 0
Out_X__AG EQU CYREG_PRT0_AG
Out_X__AMUX EQU CYREG_PRT0_AMUX
Out_X__BIE EQU CYREG_PRT0_BIE
Out_X__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Out_X__BYP EQU CYREG_PRT0_BYP
Out_X__CTL EQU CYREG_PRT0_CTL
Out_X__DM0 EQU CYREG_PRT0_DM0
Out_X__DM1 EQU CYREG_PRT0_DM1
Out_X__DM2 EQU CYREG_PRT0_DM2
Out_X__DR EQU CYREG_PRT0_DR
Out_X__INP_DIS EQU CYREG_PRT0_INP_DIS
Out_X__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Out_X__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Out_X__LCD_EN EQU CYREG_PRT0_LCD_EN
Out_X__MASK EQU 0x01
Out_X__PORT EQU 0
Out_X__PRT EQU CYREG_PRT0_PRT
Out_X__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Out_X__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Out_X__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Out_X__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Out_X__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Out_X__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Out_X__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Out_X__PS EQU CYREG_PRT0_PS
Out_X__SHIFT EQU 0
Out_X__SLW EQU CYREG_PRT0_SLW

/* Out_Y */
Out_Y__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Out_Y__0__MASK EQU 0x02
Out_Y__0__PC EQU CYREG_PRT0_PC1
Out_Y__0__PORT EQU 0
Out_Y__0__SHIFT EQU 1
Out_Y__AG EQU CYREG_PRT0_AG
Out_Y__AMUX EQU CYREG_PRT0_AMUX
Out_Y__BIE EQU CYREG_PRT0_BIE
Out_Y__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Out_Y__BYP EQU CYREG_PRT0_BYP
Out_Y__CTL EQU CYREG_PRT0_CTL
Out_Y__DM0 EQU CYREG_PRT0_DM0
Out_Y__DM1 EQU CYREG_PRT0_DM1
Out_Y__DM2 EQU CYREG_PRT0_DM2
Out_Y__DR EQU CYREG_PRT0_DR
Out_Y__INP_DIS EQU CYREG_PRT0_INP_DIS
Out_Y__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Out_Y__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Out_Y__LCD_EN EQU CYREG_PRT0_LCD_EN
Out_Y__MASK EQU 0x02
Out_Y__PORT EQU 0
Out_Y__PRT EQU CYREG_PRT0_PRT
Out_Y__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Out_Y__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Out_Y__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Out_Y__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Out_Y__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Out_Y__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Out_Y__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Out_Y__PS EQU CYREG_PRT0_PS
Out_Y__SHIFT EQU 1
Out_Y__SLW EQU CYREG_PRT0_SLW

/* PWM_X */
PWM_X_PWMHW__CAP0 EQU CYREG_TMR0_CAP0
PWM_X_PWMHW__CAP1 EQU CYREG_TMR0_CAP1
PWM_X_PWMHW__CFG0 EQU CYREG_TMR0_CFG0
PWM_X_PWMHW__CFG1 EQU CYREG_TMR0_CFG1
PWM_X_PWMHW__CFG2 EQU CYREG_TMR0_CFG2
PWM_X_PWMHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
PWM_X_PWMHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
PWM_X_PWMHW__PER0 EQU CYREG_TMR0_PER0
PWM_X_PWMHW__PER1 EQU CYREG_TMR0_PER1
PWM_X_PWMHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
PWM_X_PWMHW__PM_ACT_MSK EQU 0x01
PWM_X_PWMHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
PWM_X_PWMHW__PM_STBY_MSK EQU 0x01
PWM_X_PWMHW__RT0 EQU CYREG_TMR0_RT0
PWM_X_PWMHW__RT1 EQU CYREG_TMR0_RT1
PWM_X_PWMHW__SR0 EQU CYREG_TMR0_SR0

/* PWM_Y */
PWM_Y_PWMHW__CAP0 EQU CYREG_TMR1_CAP0
PWM_Y_PWMHW__CAP1 EQU CYREG_TMR1_CAP1
PWM_Y_PWMHW__CFG0 EQU CYREG_TMR1_CFG0
PWM_Y_PWMHW__CFG1 EQU CYREG_TMR1_CFG1
PWM_Y_PWMHW__CFG2 EQU CYREG_TMR1_CFG2
PWM_Y_PWMHW__CNT_CMP0 EQU CYREG_TMR1_CNT_CMP0
PWM_Y_PWMHW__CNT_CMP1 EQU CYREG_TMR1_CNT_CMP1
PWM_Y_PWMHW__PER0 EQU CYREG_TMR1_PER0
PWM_Y_PWMHW__PER1 EQU CYREG_TMR1_PER1
PWM_Y_PWMHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
PWM_Y_PWMHW__PM_ACT_MSK EQU 0x02
PWM_Y_PWMHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
PWM_Y_PWMHW__PM_STBY_MSK EQU 0x02
PWM_Y_PWMHW__RT0 EQU CYREG_TMR1_RT0
PWM_Y_PWMHW__RT1 EQU CYREG_TMR1_RT1
PWM_Y_PWMHW__SR0 EQU CYREG_TMR1_SR0

/* ResistiveTouch_ADC */
ResistiveTouch_ADC_DEC__COHER EQU CYREG_DEC_COHER
ResistiveTouch_ADC_DEC__CR EQU CYREG_DEC_CR
ResistiveTouch_ADC_DEC__DR1 EQU CYREG_DEC_DR1
ResistiveTouch_ADC_DEC__DR2 EQU CYREG_DEC_DR2
ResistiveTouch_ADC_DEC__DR2H EQU CYREG_DEC_DR2H
ResistiveTouch_ADC_DEC__GCOR EQU CYREG_DEC_GCOR
ResistiveTouch_ADC_DEC__GCORH EQU CYREG_DEC_GCORH
ResistiveTouch_ADC_DEC__GVAL EQU CYREG_DEC_GVAL
ResistiveTouch_ADC_DEC__OCOR EQU CYREG_DEC_OCOR
ResistiveTouch_ADC_DEC__OCORH EQU CYREG_DEC_OCORH
ResistiveTouch_ADC_DEC__OCORM EQU CYREG_DEC_OCORM
ResistiveTouch_ADC_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ResistiveTouch_ADC_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ResistiveTouch_ADC_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ResistiveTouch_ADC_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ResistiveTouch_ADC_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ResistiveTouch_ADC_DEC__PM_ACT_MSK EQU 0x01
ResistiveTouch_ADC_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ResistiveTouch_ADC_DEC__PM_STBY_MSK EQU 0x01
ResistiveTouch_ADC_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ResistiveTouch_ADC_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ResistiveTouch_ADC_DEC__SR EQU CYREG_DEC_SR
ResistiveTouch_ADC_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ResistiveTouch_ADC_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ResistiveTouch_ADC_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ResistiveTouch_ADC_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ResistiveTouch_ADC_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ResistiveTouch_ADC_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ResistiveTouch_ADC_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ResistiveTouch_ADC_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8
ResistiveTouch_ADC_DSM__BUF0 EQU CYREG_DSM0_BUF0
ResistiveTouch_ADC_DSM__BUF1 EQU CYREG_DSM0_BUF1
ResistiveTouch_ADC_DSM__BUF2 EQU CYREG_DSM0_BUF2
ResistiveTouch_ADC_DSM__BUF3 EQU CYREG_DSM0_BUF3
ResistiveTouch_ADC_DSM__CLK EQU CYREG_DSM0_CLK
ResistiveTouch_ADC_DSM__CR0 EQU CYREG_DSM0_CR0
ResistiveTouch_ADC_DSM__CR1 EQU CYREG_DSM0_CR1
ResistiveTouch_ADC_DSM__CR10 EQU CYREG_DSM0_CR10
ResistiveTouch_ADC_DSM__CR11 EQU CYREG_DSM0_CR11
ResistiveTouch_ADC_DSM__CR12 EQU CYREG_DSM0_CR12
ResistiveTouch_ADC_DSM__CR13 EQU CYREG_DSM0_CR13
ResistiveTouch_ADC_DSM__CR14 EQU CYREG_DSM0_CR14
ResistiveTouch_ADC_DSM__CR15 EQU CYREG_DSM0_CR15
ResistiveTouch_ADC_DSM__CR16 EQU CYREG_DSM0_CR16
ResistiveTouch_ADC_DSM__CR17 EQU CYREG_DSM0_CR17
ResistiveTouch_ADC_DSM__CR2 EQU CYREG_DSM0_CR2
ResistiveTouch_ADC_DSM__CR3 EQU CYREG_DSM0_CR3
ResistiveTouch_ADC_DSM__CR4 EQU CYREG_DSM0_CR4
ResistiveTouch_ADC_DSM__CR5 EQU CYREG_DSM0_CR5
ResistiveTouch_ADC_DSM__CR6 EQU CYREG_DSM0_CR6
ResistiveTouch_ADC_DSM__CR7 EQU CYREG_DSM0_CR7
ResistiveTouch_ADC_DSM__CR8 EQU CYREG_DSM0_CR8
ResistiveTouch_ADC_DSM__CR9 EQU CYREG_DSM0_CR9
ResistiveTouch_ADC_DSM__DEM0 EQU CYREG_DSM0_DEM0
ResistiveTouch_ADC_DSM__DEM1 EQU CYREG_DSM0_DEM1
ResistiveTouch_ADC_DSM__MISC EQU CYREG_DSM0_MISC
ResistiveTouch_ADC_DSM__OUT0 EQU CYREG_DSM0_OUT0
ResistiveTouch_ADC_DSM__OUT1 EQU CYREG_DSM0_OUT1
ResistiveTouch_ADC_DSM__REF0 EQU CYREG_DSM0_REF0
ResistiveTouch_ADC_DSM__REF1 EQU CYREG_DSM0_REF1
ResistiveTouch_ADC_DSM__REF2 EQU CYREG_DSM0_REF2
ResistiveTouch_ADC_DSM__REF3 EQU CYREG_DSM0_REF3
ResistiveTouch_ADC_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ResistiveTouch_ADC_DSM__SW0 EQU CYREG_DSM0_SW0
ResistiveTouch_ADC_DSM__SW2 EQU CYREG_DSM0_SW2
ResistiveTouch_ADC_DSM__SW3 EQU CYREG_DSM0_SW3
ResistiveTouch_ADC_DSM__SW4 EQU CYREG_DSM0_SW4
ResistiveTouch_ADC_DSM__SW6 EQU CYREG_DSM0_SW6
ResistiveTouch_ADC_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ResistiveTouch_ADC_DSM__TST0 EQU CYREG_DSM0_TST0
ResistiveTouch_ADC_DSM__TST1 EQU CYREG_DSM0_TST1
ResistiveTouch_ADC_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ResistiveTouch_ADC_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ResistiveTouch_ADC_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ResistiveTouch_ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ResistiveTouch_ADC_Ext_CP_Clk__INDEX EQU 0x00
ResistiveTouch_ADC_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ResistiveTouch_ADC_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ResistiveTouch_ADC_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ResistiveTouch_ADC_Ext_CP_Clk__PM_STBY_MSK EQU 0x01
ResistiveTouch_ADC_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ResistiveTouch_ADC_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ResistiveTouch_ADC_IRQ__INTC_MASK EQU 0x20000000
ResistiveTouch_ADC_IRQ__INTC_NUMBER EQU 29
ResistiveTouch_ADC_IRQ__INTC_PRIOR_NUM EQU 7
ResistiveTouch_ADC_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ResistiveTouch_ADC_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ResistiveTouch_ADC_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
ResistiveTouch_ADC_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ResistiveTouch_ADC_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ResistiveTouch_ADC_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ResistiveTouch_ADC_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ResistiveTouch_ADC_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ResistiveTouch_ADC_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ResistiveTouch_ADC_theACLK__INDEX EQU 0x00
ResistiveTouch_ADC_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ResistiveTouch_ADC_theACLK__PM_ACT_MSK EQU 0x01
ResistiveTouch_ADC_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ResistiveTouch_ADC_theACLK__PM_STBY_MSK EQU 0x01

/* ResistiveTouch_xm */
ResistiveTouch_xm__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
ResistiveTouch_xm__0__MASK EQU 0x04
ResistiveTouch_xm__0__PC EQU CYREG_PRT0_PC2
ResistiveTouch_xm__0__PORT EQU 0
ResistiveTouch_xm__0__SHIFT EQU 2
ResistiveTouch_xm__AG EQU CYREG_PRT0_AG
ResistiveTouch_xm__AMUX EQU CYREG_PRT0_AMUX
ResistiveTouch_xm__BIE EQU CYREG_PRT0_BIE
ResistiveTouch_xm__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ResistiveTouch_xm__BYP EQU CYREG_PRT0_BYP
ResistiveTouch_xm__CTL EQU CYREG_PRT0_CTL
ResistiveTouch_xm__DM0 EQU CYREG_PRT0_DM0
ResistiveTouch_xm__DM1 EQU CYREG_PRT0_DM1
ResistiveTouch_xm__DM2 EQU CYREG_PRT0_DM2
ResistiveTouch_xm__DR EQU CYREG_PRT0_DR
ResistiveTouch_xm__INP_DIS EQU CYREG_PRT0_INP_DIS
ResistiveTouch_xm__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ResistiveTouch_xm__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ResistiveTouch_xm__LCD_EN EQU CYREG_PRT0_LCD_EN
ResistiveTouch_xm__MASK EQU 0x04
ResistiveTouch_xm__PORT EQU 0
ResistiveTouch_xm__PRT EQU CYREG_PRT0_PRT
ResistiveTouch_xm__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ResistiveTouch_xm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ResistiveTouch_xm__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ResistiveTouch_xm__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ResistiveTouch_xm__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ResistiveTouch_xm__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ResistiveTouch_xm__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ResistiveTouch_xm__PS EQU CYREG_PRT0_PS
ResistiveTouch_xm__SHIFT EQU 2
ResistiveTouch_xm__SLW EQU CYREG_PRT0_SLW

/* ResistiveTouch_xp */
ResistiveTouch_xp__0__INTTYPE EQU CYREG_PICU4_INTTYPE7
ResistiveTouch_xp__0__MASK EQU 0x80
ResistiveTouch_xp__0__PC EQU CYREG_PRT4_PC7
ResistiveTouch_xp__0__PORT EQU 4
ResistiveTouch_xp__0__SHIFT EQU 7
ResistiveTouch_xp__AG EQU CYREG_PRT4_AG
ResistiveTouch_xp__AMUX EQU CYREG_PRT4_AMUX
ResistiveTouch_xp__BIE EQU CYREG_PRT4_BIE
ResistiveTouch_xp__BIT_MASK EQU CYREG_PRT4_BIT_MASK
ResistiveTouch_xp__BYP EQU CYREG_PRT4_BYP
ResistiveTouch_xp__CTL EQU CYREG_PRT4_CTL
ResistiveTouch_xp__DM0 EQU CYREG_PRT4_DM0
ResistiveTouch_xp__DM1 EQU CYREG_PRT4_DM1
ResistiveTouch_xp__DM2 EQU CYREG_PRT4_DM2
ResistiveTouch_xp__DR EQU CYREG_PRT4_DR
ResistiveTouch_xp__INP_DIS EQU CYREG_PRT4_INP_DIS
ResistiveTouch_xp__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
ResistiveTouch_xp__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
ResistiveTouch_xp__LCD_EN EQU CYREG_PRT4_LCD_EN
ResistiveTouch_xp__MASK EQU 0x80
ResistiveTouch_xp__PORT EQU 4
ResistiveTouch_xp__PRT EQU CYREG_PRT4_PRT
ResistiveTouch_xp__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
ResistiveTouch_xp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
ResistiveTouch_xp__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
ResistiveTouch_xp__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
ResistiveTouch_xp__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
ResistiveTouch_xp__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
ResistiveTouch_xp__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
ResistiveTouch_xp__PS EQU CYREG_PRT4_PS
ResistiveTouch_xp__SHIFT EQU 7
ResistiveTouch_xp__SLW EQU CYREG_PRT4_SLW

/* ResistiveTouch_ym */
ResistiveTouch_ym__0__INTTYPE EQU CYREG_PICU0_INTTYPE4
ResistiveTouch_ym__0__MASK EQU 0x10
ResistiveTouch_ym__0__PC EQU CYREG_PRT0_PC4
ResistiveTouch_ym__0__PORT EQU 0
ResistiveTouch_ym__0__SHIFT EQU 4
ResistiveTouch_ym__AG EQU CYREG_PRT0_AG
ResistiveTouch_ym__AMUX EQU CYREG_PRT0_AMUX
ResistiveTouch_ym__BIE EQU CYREG_PRT0_BIE
ResistiveTouch_ym__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ResistiveTouch_ym__BYP EQU CYREG_PRT0_BYP
ResistiveTouch_ym__CTL EQU CYREG_PRT0_CTL
ResistiveTouch_ym__DM0 EQU CYREG_PRT0_DM0
ResistiveTouch_ym__DM1 EQU CYREG_PRT0_DM1
ResistiveTouch_ym__DM2 EQU CYREG_PRT0_DM2
ResistiveTouch_ym__DR EQU CYREG_PRT0_DR
ResistiveTouch_ym__INP_DIS EQU CYREG_PRT0_INP_DIS
ResistiveTouch_ym__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ResistiveTouch_ym__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ResistiveTouch_ym__LCD_EN EQU CYREG_PRT0_LCD_EN
ResistiveTouch_ym__MASK EQU 0x10
ResistiveTouch_ym__PORT EQU 0
ResistiveTouch_ym__PRT EQU CYREG_PRT0_PRT
ResistiveTouch_ym__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ResistiveTouch_ym__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ResistiveTouch_ym__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ResistiveTouch_ym__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ResistiveTouch_ym__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ResistiveTouch_ym__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ResistiveTouch_ym__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ResistiveTouch_ym__PS EQU CYREG_PRT0_PS
ResistiveTouch_ym__SHIFT EQU 4
ResistiveTouch_ym__SLW EQU CYREG_PRT0_SLW

/* ResistiveTouch_yp */
ResistiveTouch_yp__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
ResistiveTouch_yp__0__MASK EQU 0x08
ResistiveTouch_yp__0__PC EQU CYREG_PRT0_PC3
ResistiveTouch_yp__0__PORT EQU 0
ResistiveTouch_yp__0__SHIFT EQU 3
ResistiveTouch_yp__AG EQU CYREG_PRT0_AG
ResistiveTouch_yp__AMUX EQU CYREG_PRT0_AMUX
ResistiveTouch_yp__BIE EQU CYREG_PRT0_BIE
ResistiveTouch_yp__BIT_MASK EQU CYREG_PRT0_BIT_MASK
ResistiveTouch_yp__BYP EQU CYREG_PRT0_BYP
ResistiveTouch_yp__CTL EQU CYREG_PRT0_CTL
ResistiveTouch_yp__DM0 EQU CYREG_PRT0_DM0
ResistiveTouch_yp__DM1 EQU CYREG_PRT0_DM1
ResistiveTouch_yp__DM2 EQU CYREG_PRT0_DM2
ResistiveTouch_yp__DR EQU CYREG_PRT0_DR
ResistiveTouch_yp__INP_DIS EQU CYREG_PRT0_INP_DIS
ResistiveTouch_yp__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
ResistiveTouch_yp__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
ResistiveTouch_yp__LCD_EN EQU CYREG_PRT0_LCD_EN
ResistiveTouch_yp__MASK EQU 0x08
ResistiveTouch_yp__PORT EQU 0
ResistiveTouch_yp__PRT EQU CYREG_PRT0_PRT
ResistiveTouch_yp__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
ResistiveTouch_yp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
ResistiveTouch_yp__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
ResistiveTouch_yp__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
ResistiveTouch_yp__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
ResistiveTouch_yp__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
ResistiveTouch_yp__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
ResistiveTouch_yp__PS EQU CYREG_PRT0_PS
ResistiveTouch_yp__SHIFT EQU 3
ResistiveTouch_yp__SLW EQU CYREG_PRT0_SLW

/* Timer */
Timer_TimerHW__CAP0 EQU CYREG_TMR2_CAP0
Timer_TimerHW__CAP1 EQU CYREG_TMR2_CAP1
Timer_TimerHW__CFG0 EQU CYREG_TMR2_CFG0
Timer_TimerHW__CFG1 EQU CYREG_TMR2_CFG1
Timer_TimerHW__CFG2 EQU CYREG_TMR2_CFG2
Timer_TimerHW__CNT_CMP0 EQU CYREG_TMR2_CNT_CMP0
Timer_TimerHW__CNT_CMP1 EQU CYREG_TMR2_CNT_CMP1
Timer_TimerHW__PER0 EQU CYREG_TMR2_PER0
Timer_TimerHW__PER1 EQU CYREG_TMR2_PER1
Timer_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Timer_TimerHW__PM_ACT_MSK EQU 0x04
Timer_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Timer_TimerHW__PM_STBY_MSK EQU 0x04
Timer_TimerHW__RT0 EQU CYREG_TMR2_RT0
Timer_TimerHW__RT1 EQU CYREG_TMR2_RT1
Timer_TimerHW__SR0 EQU CYREG_TMR2_SR0

/* isr_Timer */
isr_Timer__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_Timer__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_Timer__INTC_MASK EQU 0x01
isr_Timer__INTC_NUMBER EQU 0
isr_Timer__INTC_PRIOR_NUM EQU 7
isr_Timer__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_Timer__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_Timer__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* timer_clock */
timer_clock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
timer_clock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
timer_clock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
timer_clock__CFG2_SRC_SEL_MASK EQU 0x07
timer_clock__INDEX EQU 0x01
timer_clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
timer_clock__PM_ACT_MSK EQU 0x02
timer_clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
timer_clock__PM_STBY_MSK EQU 0x02

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 16
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 16
CYDEV_CHIP_MEMBER_4D EQU 12
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 17
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 15
CYDEV_CHIP_MEMBER_4I EQU 21
CYDEV_CHIP_MEMBER_4J EQU 13
CYDEV_CHIP_MEMBER_4K EQU 14
CYDEV_CHIP_MEMBER_4L EQU 20
CYDEV_CHIP_MEMBER_4M EQU 19
CYDEV_CHIP_MEMBER_4N EQU 9
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 18
CYDEV_CHIP_MEMBER_4Q EQU 11
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 22
CYDEV_CHIP_MEMBER_FM3 EQU 26
CYDEV_CHIP_MEMBER_FM4 EQU 27
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 23
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 24
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 25
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 0
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */