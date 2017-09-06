/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    Clock_1_Start();
    PWM_1_Start();
    //uint16 pul_sub,pul_neutro; /*Valores de las cuentas del PWM*/
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    //pul_sub = 51;
    //pul_neutro = 49;
    //PWM_1_WriteCounter(pul_neutro);
    for(;;)
    {
        //PWM_1_WriteCounter(pul_sub);
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
