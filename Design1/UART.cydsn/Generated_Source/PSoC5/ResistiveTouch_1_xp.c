/*******************************************************************************
* File Name: ResistiveTouch_1_xp.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "ResistiveTouch_1_xp.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 ResistiveTouch_1_xp__PORT == 15 && ((ResistiveTouch_1_xp__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: ResistiveTouch_1_xp_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void ResistiveTouch_1_xp_Write(uint8 value) 
{
    uint8 staticBits = (ResistiveTouch_1_xp_DR & (uint8)(~ResistiveTouch_1_xp_MASK));
    ResistiveTouch_1_xp_DR = staticBits | ((uint8)(value << ResistiveTouch_1_xp_SHIFT) & ResistiveTouch_1_xp_MASK);
}


/*******************************************************************************
* Function Name: ResistiveTouch_1_xp_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  ResistiveTouch_1_xp_DM_STRONG     Strong Drive 
*  ResistiveTouch_1_xp_DM_OD_HI      Open Drain, Drives High 
*  ResistiveTouch_1_xp_DM_OD_LO      Open Drain, Drives Low 
*  ResistiveTouch_1_xp_DM_RES_UP     Resistive Pull Up 
*  ResistiveTouch_1_xp_DM_RES_DWN    Resistive Pull Down 
*  ResistiveTouch_1_xp_DM_RES_UPDWN  Resistive Pull Up/Down 
*  ResistiveTouch_1_xp_DM_DIG_HIZ    High Impedance Digital 
*  ResistiveTouch_1_xp_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void ResistiveTouch_1_xp_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(ResistiveTouch_1_xp_0, mode);
}


/*******************************************************************************
* Function Name: ResistiveTouch_1_xp_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro ResistiveTouch_1_xp_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 ResistiveTouch_1_xp_Read(void) 
{
    return (ResistiveTouch_1_xp_PS & ResistiveTouch_1_xp_MASK) >> ResistiveTouch_1_xp_SHIFT;
}


/*******************************************************************************
* Function Name: ResistiveTouch_1_xp_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 ResistiveTouch_1_xp_ReadDataReg(void) 
{
    return (ResistiveTouch_1_xp_DR & ResistiveTouch_1_xp_MASK) >> ResistiveTouch_1_xp_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(ResistiveTouch_1_xp_INTSTAT) 

    /*******************************************************************************
    * Function Name: ResistiveTouch_1_xp_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 ResistiveTouch_1_xp_ClearInterrupt(void) 
    {
        return (ResistiveTouch_1_xp_INTSTAT & ResistiveTouch_1_xp_MASK) >> ResistiveTouch_1_xp_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
