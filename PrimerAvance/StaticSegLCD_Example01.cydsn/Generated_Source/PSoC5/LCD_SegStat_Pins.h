/*******************************************************************************
* File Name: LCD_SegStat.h
* Version 2.30
*
* Description:
*  This header file contains pins specific definitions associated with the
*  Static Segment LCD component .
*
* Note:
*
********************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_ST_SEG_LCD_LCD_SegStat_PINS_H)
#define CY_ST_SEG_LCD_LCD_SegStat_PINS_H

#include <cypins.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/

void LCD_SegStat_SegPort_SetDriveMode(uint8 mode) ;
void LCD_SegStat_ComPort_SetDriveMode(uint8 mode) ;


/***************************************
*              Constants
***************************************/
#define LCD_SegStat_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define LCD_SegStat_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define LCD_SegStat_DM_RES_UP          PIN_DM_RES_UP
#define LCD_SegStat_DM_RES_DWN         PIN_DM_RES_DWN
#define LCD_SegStat_DM_OD_LO           PIN_DM_OD_LO
#define LCD_SegStat_DM_OD_HI           PIN_DM_OD_HI
#define LCD_SegStat_DM_STRONG          PIN_DM_STRONG
#define LCD_SegStat_DM_RES_UPDWN       PIN_DM_RES_UPDWN

#define LCD_SegStat_SegPort_0            LCD_SegStat_Seg__0__PC
#define LCD_SegStat_SegPort_1            LCD_SegStat_Seg__1__PC
#define LCD_SegStat_SegPort_2            LCD_SegStat_Seg__2__PC
#define LCD_SegStat_SegPort_3            LCD_SegStat_Seg__3__PC
#define LCD_SegStat_SegPort_4            LCD_SegStat_Seg__4__PC
#define LCD_SegStat_SegPort_5            LCD_SegStat_Seg__5__PC
#define LCD_SegStat_SegPort_6            LCD_SegStat_Seg__6__PC
#define LCD_SegStat_SegPort_7            LCD_SegStat_Seg__7__PC
#define LCD_SegStat_SegPort_8            LCD_SegStat_Seg__8__PC
#define LCD_SegStat_SegPort_9            LCD_SegStat_Seg__9__PC
#define LCD_SegStat_SegPort_10            LCD_SegStat_Seg__10__PC
#define LCD_SegStat_SegPort_11            LCD_SegStat_Seg__11__PC
#define LCD_SegStat_SegPort_12            LCD_SegStat_Seg__12__PC
#define LCD_SegStat_SegPort_13            LCD_SegStat_Seg__13__PC
#define LCD_SegStat_SegPort_14            LCD_SegStat_Seg__14__PC
#define LCD_SegStat_SegPort_15            LCD_SegStat_Seg__15__PC
#define LCD_SegStat_SegPort_16            LCD_SegStat_Seg__16__PC
#define LCD_SegStat_SegPort_17            LCD_SegStat_Seg__17__PC
#define LCD_SegStat_SegPort_18            LCD_SegStat_Seg__18__PC
#define LCD_SegStat_SegPort_19            LCD_SegStat_Seg__19__PC
#define LCD_SegStat_SegPort_20            LCD_SegStat_Seg__20__PC
#define LCD_SegStat_SegPort_21            LCD_SegStat_Seg__21__PC
#define LCD_SegStat_SegPort_22            LCD_SegStat_Seg__22__PC
#define LCD_SegStat_SegPort_23            LCD_SegStat_Seg__23__PC
#define LCD_SegStat_SegPort_24            LCD_SegStat_Seg__24__PC
#define LCD_SegStat_SegPort_25            LCD_SegStat_Seg__25__PC
#define LCD_SegStat_SegPort_26            LCD_SegStat_Seg__26__PC
#define LCD_SegStat_SegPort_27            LCD_SegStat_Seg__27__PC
#define LCD_SegStat_SegPort_28            LCD_SegStat_Seg__28__PC
#define LCD_SegStat_SegPort_29            LCD_SegStat_Seg__29__PC
#define LCD_SegStat_SegPort_30            LCD_SegStat_Seg__30__PC
#define LCD_SegStat_SegPort_31            LCD_SegStat_Seg__31__PC
#define LCD_SegStat_ComPort_0            LCD_SegStat_Com__0__PC

#endif /* CY_ST_SEG_LCD_LCD_SegStat_PINS_H */
