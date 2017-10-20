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
#include <stdio.h>

int16 coordx,coordy;
int16 cuentx,cuenty;
float datax,datay,ex=0,ey=0,adx=0,ady=0,accx=0,accy=0,accx1=0,accy1=0,accx2=0,accy2=0,ex1=0,ey1=0;
const float cruce=0, ref=0, Ts=0.0125,escx=0.075,escy=0.091,adc=(5/65536);
const float Kpx=0.0813,Kdx=0.0456,Nx=59.1,Kpy=0.06188,Kdy=0.018121,Ny=95.1926;
char8 str1[12],str2[12],str3[12];

void Control(){
    ResistiveTouch_ActivateX();//Configura los pines para medir x
    coordx=ResistiveTouch_Measure();//toma los datos de la placa
    
    ResistiveTouch_ActivateY();//Configura los pines para medir y
    coordy=ResistiveTouch_Measure();//toma los datos de la placa
    
    //Calculo en X
    datax=(adc*coordx)-cruce;//linealiza el valor
    ex=ref-datax;//calcula el error segun la referencia dada
    adx=-(Nx*Ts-1)*accx1+Kdx*Nx*(ex-ex1);//calculo de la parte derivativa
    accx=escx*(Kpx*ex+adx);//calculo de la accion de control
    //accx2=accx*1.571;
    
    cuentx=318.31*accx+1500;
    if (cuentx <= 1000){
        cuentx = 1000;
    }
    if (cuentx >= 2000){
        cuentx = 2000;
    }
    
    //Calculo en Y
    datay=(adc*coordy)-cruce;//toma los datos de la placa y linealiza el valor
    ey=ref-datay;//calcula el error segun la referencia dada
    ady=-(Ny*Ts-1)*accy1+Kdy*Ny*(ey-ey1);//calculo de la parte derivativa
    accy=escy*(Kpy*ey+ady);//calculo de la accion de control
    //accy2=accy*1.571;
    
    cuenty=318.31*accy+1500;
    if (cuenty <= 1000){
        cuenty = 1000;
    }
    if (cuenty >= 2000){
        cuenty = 2000;
    }
    
    //Escribe las cuentas en los PWM
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
        sprintf(str1,"%.7f ",datax);
        sprintf(str2,"%d",coordx);
        //sprintf(str3,"%.7f ",accx);
        LCD_Char_Position(0u,0u);
        LCD_Char_PrintString(str1);
        LCD_Char_Position(1u,0u);
        LCD_Char_PrintString(str2);
        //LCD_Char_Position(1u,5u);
        //LCD_Char_PrintString(str3);
        CyDelay(500u);
    }
}

/* [] END OF FILE */
