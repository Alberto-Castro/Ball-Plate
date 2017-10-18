/*******************************************************************************
* File Name: LCD_SegStat.c
* Version 2.30
*
* Description:
*  This file provides the pin API source code for the Static Segment LCD
*  component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include <LCD_SegStat_Pins.h>

/*******************************************************************************
* Function Name: LCD_SegStat_SegPort_SetDriveMode 
********************************************************************************
* Summary:
*  Change the drive mode on the pins of the port.
*
* Parameters:
*  mode: Changes the pins to this drive mode.
*
* Return:
*  void
*
*******************************************************************************/
void LCD_SegStat_SegPort_SetDriveMode(uint8 mode) 
{
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_0, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_1, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_2, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_3, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_4, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_5, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_6, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_7, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_8, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_9, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_10, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_11, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_12, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_13, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_14, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_15, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_16, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_17, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_18, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_19, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_20, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_21, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_22, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_23, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_24, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_25, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_26, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_27, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_28, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_29, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_30, mode);
    CyPins_SetPinDriveMode(LCD_SegStat_SegPort_31, mode);
}

/*******************************************************************************
* Function Name: LCD_SegStat_ComPort_SetDriveMode 
********************************************************************************
* Summary:
*  Change the drive mode on the pins of the port.
*
* Parameters:
*  mode: Changes the pins to this drive mode.
*
* Return:
*  void
*
*******************************************************************************/
void LCD_SegStat_ComPort_SetDriveMode(uint8 mode) 
{
    CyPins_SetPinDriveMode(LCD_SegStat_ComPort_0, mode);
}
/* [] END OF FILE */
