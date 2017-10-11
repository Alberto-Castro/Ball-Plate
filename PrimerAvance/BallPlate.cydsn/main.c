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

float coordx, coordy, ex, ey,adx,ady,accx,accy,accx1,accy1,ex1,ey1,cuentx,cuenty;
const float cruce=2.5, ref=0, Ts=0.0125;
const float Kpx,Kdx,Nx,Kpy,Kdy,Ny;


void Control(){
    ResistiveTouch_ActivateX();//Configura los pines para medir x
    coordx=ResistiveTouch_Measure()-cruce;//toma los datos de la placa y linealiza el valor
    ex=ref-coordx;//calcula el error segun la referencia dada
    adx=-(Nx*Ts-1)*accx1+Kdx*Nx*(ex-ex1);//calculo de la parte derivativa
    accx=Kpx*ex+adx;//calculo de la accion de control
    cuentx=-(29/6)*accx+1500;
    PWM_X_WriteCompare(cuentx);
    
    ResistiveTouch_ActivateY();//Configura los pines para medir y
    coordy=ResistiveTouch_Measure()-cruce;//toma los datos de la placa y linealiza el valor
    ey=ref-coordy;//calcula el error segun la referencia dada
    ady=-(Ny*Ts-1)*accy1+Kdy*Ny*(ey-ey1);//calculo de la parte derivativa
    accy=Kpy*ey+ady;//calculo de la accion de control
    //cuenty=my*accy+1500;
    //PWM_X_WriteCompare(cuenty);
    
    
    
    
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
    isr_Timer_StartEx(isr_Muestreo);
    CyGlobalIntEnable; /* Enable global interrupts. */
    CY_ISR_PROTO(isr_Muestreo);
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
