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
float datax,datay,ex,ey,adx,ady,accx,accy,accx1,accy1,accx2,accy2,ex1,ey1,adcx,adcy,crucex,crucey, pdx, pdy, KNx, KNy; //Variables para el control
const float ref=0, Ts=0.02,escx=2,escy=2;
const float Kpx=0.07,Kdx=0.035,Nx=50.8753,Kpy=0.04,Kdy=0.02,Ny=50.8753;//Kpy=0.0813,Kdy=0.0456,Ny=59.1,Kpx=0.0813,Kdx=0.0456,Nx=59.1;
char8 str1[80],str2[80],str3[80];



void Control(){
    
    coordy=ResistiveTouch_Measure();//toma los datos de la placa
    
    ResistiveTouch_ActivateX();//Configura los pines para medir x
        
    //Calculo en Y
    datay=(adcy*coordy);//+crucey;//Conversión (y linealiza) de coordenada a tensión
    /*if ((datay<=0.2) & (datay>=-0.2)){
        datay=0;
    }*/
    ey=ref-datay;//calcula el error segun la referencia dada
    ady=-(pdy)*accy1+KNy*(ey-ey1);//calculo de la parte derivativa
    accy=escy*(Kpy*ey+ady);//calculo de la accion de control
    
    cuenty=318.31*accy+1100;
    /*if (cuenty <= 991){
        cuenty = 991;
    }
    if (cuenty >= 1208){
        cuenty = 1208;
    }*/
    
    
    PWM_Y_WriteCompare(cuenty);
    
    coordx=ResistiveTouch_Measure();//toma los datos de la placa
    
    ResistiveTouch_ActivateY();//Configura los pines para medir y
    
    //Calculo en X
    datax=(adcx*coordx);//+(crucex);//Conversión (y linealiza) de coordenada a tensión
    /*if ((datax<=0.2) & (datax>=-0.2)){
        datax=0;
    }*/
    ex=ref-datax;//calcula el error segun la referencia dada
    adx=-(pdx)*accx1+KNx*(ex-ex1);//calculo de la parte derivativa
    accx=escx*(Kpx*ex+adx);//calculo de la accion de control
    
    
    cuentx=318.31*accx+1350;
    /*if (cuentx <= 1205){
        cuentx = 1205;
    }
    if (cuentx >= 1490){
        cuentx = 1490;
    }*/   
    
    //Escribe las cuentas en los PWM
    PWM_X_WriteCompare(cuentx);
    
    accx1=accx;//guarda la accion de control anterior de x
    ex1=ex;//guarda el error anterior de x
    accy1=accy;//guarda la accion de control anterior de y
    ey1=ey;//guarda el error anterior de y

    
}

CY_ISR(isr_Muestreo){
    touch=ResistiveTouch_TouchDetect();
    if (touch==1){
        Control();
    }
    else{
        accx=0;
        accy=0;
        datax=0;
        datay=0;
        cuentx=1350;
        cuenty=1100;
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
    adcx=0.00131,adcy=0.00136,crucex = -2.53, crucey = -2.91;//-2.53,-2,91
    pdy=(Ny*Ts-1), pdx=(Nx*Ts-1), KNx=Kdx*Nx, KNy=Kdy*Ny;
    for(;;)
    {
        sprintf(str1,"Coord.X: %d",coordx);
        sprintf(str2,"Coord.Y: %d",coordy);
        LCD_Char_Position(0u,0u);
        LCD_Char_PrintString(str1);
        LCD_Char_Position(1u,0u);
        LCD_Char_PrintString(str2);
        CyDelay(500u);
    }
}

/* [] END OF FILE */
