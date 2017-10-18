/*******************************************************************************
* File Name: main.c
*
* Version: 3.0
*
* Description:
*  This example project displays 4 digit decimal value, then decrements the 
*  value and displays the updated value after a small delay. Then the part goes
*  to a Sleep mode, during wich the LCD is turned off, and after a button prees
*  it wakes and continues its normal work.
*
********************************************************************************
* Copyright 2012-2014, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <project.h>


/*******************************************************************************
* Function Name: CY_ISR(WakeUpIsr_Interrupt)
********************************************************************************
*
* Summary:
*  1. Clears interrupts from Pin_wakeup pin. 
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
CY_ISR(WakeUpIsr_Int)
{
    Pin_wakeup_ClearInterrupt();
}


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  1. Enables global interrupts and starts Segment LCD, Character LCD and ISR 
*  components.
*  2. Displays a message on Char LCD if Segment LCD started successfully or not.
*  3. Decrements the 4 digit decimal value and displays it on the Segment LCD
*  glass.      
*  4. Performs a small delay and after that prepares Segment LCD for entering 
*  to a sleep mode. 
*  5. Sets Seg LCD pin drive modes to Hi-Z analog.
*  7. Puts part to a sleep mode and specifiew PICU as a wakeup source.
*  8. Wakes the part after a button press interrupt.
*  9. Restores Seg LCD pin drive modes and wakes the components.
*  10. Displays a message on Char LCD if Segment LCD waked successfully or not.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    uint8 status = 0u;
    
    /* Initialize the value to be displayed on the LCD. */
    uint16 value = 9999u;
    
    /* Enable global interrupts. */
    CyGlobalIntEnable;
    
    WakeUpIsr_StartEx(WakeUpIsr_Int);
    
    LCD_Char_Start();
    
    /* Start the SegLCD component operation. */
    status = LCD_SegStat_Start();
    
    /* Set the output position on Char LCD to row - 0, column - 0. */
    LCD_Char_Position(0u, 0u);
    
    /* Parse the status and display initialization status message. */
    if(status == CYRET_SUCCESS)
    {
        LCD_Char_PrintString("Init status: Success");
    }
    else
    {
        LCD_Char_PrintString("Init status: Failure");
    }
    
    for(;;)
    {   
        /* Decrement the value. */
        value = value - 1u;
        
        /* Display current value on the LCD. */
        LCD_SegStat_Write7SegNumber_0(value, 0u, 0u);
        
        /* Small delay */
        CyDelay(4u);
        
        /* Reset the value to 9999 if it decremented to 0. */
        if(value == 0u)
        {
            value = 9999u;        
        }
        
        /* Some delay to make image on LCD frezze for some time. */
        CyDelay(500u);
        
        /* Prepare component for entering to a Sleep mode. */
        LCD_SegStat_Sleep();
        
        /* Set component's pin mode to HiZ for both segment and common lines to 
        * decrese current consumption and to avoid LCD glaass damaging .
        */
        LCD_SegStat_SegPort_SetDriveMode(LCD_SegStat_DM_ALG_HIZ);
        LCD_SegStat_ComPort_SetDriveMode(LCD_SegStat_DM_ALG_HIZ);
        
        /* Puts entire chip excet the PICu into a sleep. */
        CyPmSleep(PM_SLEEP_TIME_NONE, PM_SLEEP_SRC_PICU);

        /* Restore pin mode back to Strong. */
        LCD_SegStat_SegPort_SetDriveMode(LCD_SegStat_DM_STRONG);
        LCD_SegStat_ComPort_SetDriveMode(LCD_SegStat_DM_STRONG);
        
        /* Wake the LCD and capture the status. */
        status = LCD_SegStat_Wakeup();
        
        LCD_Char_Position(1u, 0u);
        
        /* Parse the status and display current status message. */
        if(status == CYRET_SUCCESS)
        {
            LCD_Char_PrintString("Curr status: Success");
        }
        else
        {
            LCD_Char_PrintString("Curr status: Failure");
        }           
    }
}

/* [] END OF FILE */
