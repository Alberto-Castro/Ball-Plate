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
#include <math.h>


int16 coordx,coordy; //Coordenadas medidas de la placa
int16 cuentx,cuenty; //Salidas al PWM
int8 touch;
float datax,datay,ex,ey,adx,ady,accx,accy,accx1,accy1,accx2,accy2,ex1,ey1,adcx,adcy,crucex,crucey; //Variables para el control
const float ref=0, Ts=0.0125,escx=2,escy=2;
const float Kpx=0.0813,Kdx=0.0456,Nx=59.1,Kpy=0.06188,Kdy=0.018121,Ny=95.1926;
char8 str1[80],str2[80],str3[80];

void Control(){
    ResistiveTouch_ActivateX();//Configura los pines para medir x
        
    //Calculo en Y
    datay=(adcy*coordy)+crucey;//Conversión (y linealiza) de coordenada a tensión
    ey=ref-datay;//calcula el error segun la referencia dada
    ady=-(Ny*Ts-1)*accy1+Kdy*Ny*(ey-ey1);//calculo de la parte derivativa
    accy=escy*(Kpy*ey+ady);//calculo de la accion de control
    
    cuenty=318.31*accy+1500;
    if (cuenty <= 1000){
        cuenty = 1000;
    }
    if (cuenty >= 2000){
        cuenty = 2000;
    }
   
    accy1=accy;//guarda la accion de control anterior de y
    ey1=ey;//guarda el error anterior de y
    
    coordx=ResistiveTouch_Measure();//toma los datos de la placa
    
    ResistiveTouch_ActivateY();//Configura los pines para medir y
    
    //Calculo en X
    datax=(adcx*coordx)+(crucex);//Conversión (y linealiza) de coordenada a tensión
    ex=ref-datax;//calcula el error segun la referencia dada
    adx=-(Nx*Ts-1)*accx1+Kdx*Nx*(ex-ex1);//calculo de la parte derivativa
    accx=escx*(Kpx*ex+adx);//calculo de la accion de control
    
    cuentx=318.31*accx+1500;
    if (cuentx <= 1000){
        cuentx = 1000;
    }
    if (cuentx >= 2000){
        cuentx = 2000;
    }
    
    accx1=accx;//guarda la accion de control anterior de x
    ex1=ex;//guarda el error anterior de x
    
    coordy=ResistiveTouch_Measure();//toma los datos de la placa
        
    
    //Escribe las cuentas en los PWM
    PWM_X_WriteCompare(cuentx);
    PWM_Y_WriteCompare(cuenty);

}

CY_ISR(isr_Muestreo){
    touch=ResistiveTouch_TouchDetect();
    if (touch==1){
        Control();
    }
    else{
        datax=0;
        datay=0;
        cuentx=1500;
        cuenty=1500;
        PWM_X_WriteCompare(cuentx);
        PWM_Y_WriteCompare(cuenty);
    }
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
    
    coordx = 0;
    coordy = 0;
    datax=0,datay=0,ex=0,ey=0,adx=0,ady=0,accx=0,accy=0,accx1=0,accy1=0,accx2=0,accy2=0,ex1=0,ey1=0,
    adcx=0.00131,adcy=0.00136,crucex = -2.53, crucey = -2.513;
    
    for(;;)
    {
        sprintf(str1,"Coord.X: %f",datax);
        sprintf(str2,"Coord.Y: %f",datay);
        LCD_Char_Position(0u,0u);
        LCD_Char_PrintString(str1);
        LCD_Char_Position(1u,0u);
        LCD_Char_PrintString(str2);
        CyDelay(500u);
    }
}

/* [] END OF FILE */
