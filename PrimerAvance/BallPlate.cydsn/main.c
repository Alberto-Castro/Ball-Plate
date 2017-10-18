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

float coordx, coordy, ex, ey,adx,ady,accx,accy,accx1,accy1,accx2,accy2,ex1,ey1,cuentx,cuenty;
const float cruce=2.5, ref=0, Ts=0.0125,escx=0.075,escy=0.091;
const float Kpx=0.0813,Kdx=0.0456,Nx=59.1,Kpy=0.06188,Kdy=0.018121,Ny=95.1926;

void Control(){
    ResistiveTouch_ActivateX();//Configura los pines para medir x
    coordx=ResistiveTouch_Measure()- cruce;//toma los datos de la placa y linealiza el valor
    ex=ref-coordx;//calcula el error segun la referencia dada
    adx=-(Nx*Ts-1)*accx1+Kdx*Nx*(ex-ex1);//calculo de la parte derivativa
    accx=escx*(Kpx*ex+adx);//calculo de la accion de control
    accx2=accx+1.571;
    cuentx=318.31*accx+1000;
    if (cuentx <= 1000){
        cuentx = 1000;
    }
    if (cuentx >= 2000){
        cuentx = 2000;
    }
    
    ResistiveTouch_ActivateY();//Configura los pines para medir y
    coordy=ResistiveTouch_Measure()- cruce;//toma los datos de la placa y linealiza el valor
    ey=ref-coordy;//calcula el error segun la referencia dada
    ady=-(Ny*Ts-1)*accy1+Kdy*Ny*(ey-ey1);//calculo de la parte derivativa
    accy=escy*(Kpy*ey+ady);//calculo de la accion de control
    accy2=accy*1.571;
    cuenty=318.31*accy+1000;
    if (cuenty <= 1000){
        cuenty = 1000;
    }
    if (cuenty >= 2000){
        cuenty = 2000;
    }
    
    PWM_X_WriteCompare(cuentx);
    PWM_X_WriteCompare(cuenty);
    
    
    accx1=accx;//guarda la accion de control anterior de x
    ex1=ex;//guarda el error anterior de x
    accy1=accy;//guarda la accion de control anterior de y
    ey1=ey;//guarda el error anterior de y
}

CY_ISR(isr_Muestreo){
    Control();
}

int main(void)
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_X_Start();
    PWM_Y_Start();
    ResistiveTouch_Start();
    Timer_Start();
    LCD_Char_Start();
    isr_Timer_StartEx(isr_Muestreo);
    CyGlobalIntEnable; /* Enable global interrupts. */
    CY_ISR_PROTO(isr_Muestreo);
    
   
    
    for(;;)
    {
        LCD_Char_Position(0u,0u);
        LCD_Char_PrintString("Hola mundo");
        CyDelay(500u);
    }
}

/* [] END OF FILE */
