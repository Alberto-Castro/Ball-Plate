/*******************************************************************************
* File Name: LCD_SegStat_PM.c
* Version 2.30
*
* Description:
*  This file provides the API source code for Power Management of the Static
*  Segment LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "LCD_SegStat.h"


static LCD_SegStat_BACKUP_STRUCT LCD_SegStat_backup;


/*******************************************************************************
* Function Name: LCD_SegStat_SaveConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_SegStat_SaveConfig(void) 
{
    /* Nothing to save in current version */
}


/*******************************************************************************
* Function Name: LCD_SegStat_RestoreConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_SegStat_RestoreConfig(void) 
{
    /* Nothing to restore in current version */
}


/*******************************************************************************
* Function Name: LCD_SegStat_Sleep
********************************************************************************
*
* Summary:
*  Prepares component for entering the sleep mode.
*
* Parameters:
*  None.

*
* Return:
*  None.
*
* Global variables:
*  LCD_SegStat_enableState - holds a state of the component that will be
*  stored in LCD_SegStat_backup.
*
*  LCD_SegStat_backup - stores the state of the component.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void LCD_SegStat_Sleep(void) 
{
    LCD_SegStat_backup.enableState = LCD_SegStat_enableState;
    LCD_SegStat_SaveConfig();
    LCD_SegStat_Stop();
}


/*******************************************************************************
* Function Name: LCD_SegStat_Wakeup
********************************************************************************
*
* Summary:
*  Wakes component from sleep mode. Configures DMA and enables the component for
*  normal operation.
*
* Parameters:
*  LCD_SegStat_enableState - Global variable.
*
* Global variables:
*  LCD_SegStat_backup - this API fetch the component state from the
*  structure to analyze and decide if the component should be enabled or not.
*
* Return:
*  Status one of standard status for PSoC3 Component:
*       CYRET_SUCCESS - Function completed successfully.
*       CYRET_LOCKED - The object was locked, already in use. Some of TDs or
*                      a channel already in use or the component was turned
*                      off by the user before entering to a sleep.
*
* Reentrant:
*  No.
*
*******************************************************************************/
uint8 LCD_SegStat_Wakeup(void) 
{
    uint8 status;

    LCD_SegStat_RestoreConfig();

    if(LCD_SegStat_backup.enableState == 1u)
    {
       status = LCD_SegStat_Enable();
    }
    else
    {
        status = CYRET_LOCKED;
    }

    return(status);
}


/* [] END OF FILE */
