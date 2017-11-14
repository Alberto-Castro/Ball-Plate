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
const float ref=0, Ts=0.02,escx=1,escy=1;
const float Kpy=4,Kdy=3,Ny=30,Kpx=6,Kdx=3,Nx=30;/*Kpy=7,Kdy=3,Ny=30,Kpx=7,Kdx=3,Nx=30;*/
char8 str1[80],str2[80],str3[80];

//Variables filtro media móvil
const int N = 3;//Número de muestras
float xbuffer[3], ybuffer[3], skx, sky;//Variables del cálculo promediador
int ix,iy;




void Control(){
    
    coordy=ResistiveTouch_Measure();//toma los datos de la placa
    
    if(coordy > 4000)
    {coordy = coordy/10;}
    
    ResistiveTouch_ActivateX();//Configura los pines para medir x
            
    //-------------------------------------------
    //Filtro de media móvil Y
    sky = sky - ybuffer[iy] + coordy;
    coordy = sky/N;
    
    ybuffer[iy] = coordy;
    iy++;
    if (iy == N)
    {
     iy = 0;
    }
    
    //Calculo en Y
    datay=(adcy*coordy)+crucey;//Conversión (y linealiza) de coordenada a tensión
    
    //-------------------------------------------
    
    /*if ((datay<=0.01) & (datay>=-0.01)){
        datay=0;
    }*/
    
    ey=ref-datay;//calcula el error segun la referencia dada
    ady=-(pdy)*accy1+KNy*(ey-ey1);//calculo de la parte derivativa
    accy=escy*(Kpy*ey+ady);//calculo de la accion de control
    
    cuenty=318.31*accy+1105;
    
    /*if (cuenty <= 1044){
        cuenty = 1044;
    }
    if (cuenty >= 1156){
        cuenty = 1156;
    }*/
    
    
    PWM_Y_WriteCompare(cuenty);
    
    coordx=ResistiveTouch_Measure();//toma los datos de la placa
    
    ResistiveTouch_ActivateY();//Configura los pines para medir y
    
    //Calculo en X
    if(coordx > 4000)
    {coordx = coordx/10;}

    //-------------------------------------------
    //Filtro de media móvil X
    skx = skx - xbuffer[ix] + coordx;// A la suma anterior le resta la muestra más vieja y le suma la más reciente
    coordx = skx/N;
    
    xbuffer[ix] = coordx; //Remueve la muestra anterior (actualiza el buffer en el índice actual)
    ix++; //Mueve el índice
    if (ix == N) //Condición del buffer circular
    {
     ix = 0;
    }
    
    datax=(adcx*coordx)+(crucex);//Conversión (y linealiza) de coordenada a tensión
    
    //-------------------------------------------
    
    /*if ((datax<=0.01) & (datax>=-0.01)){
        datax=0;
    }*/
    
    ex=ref-datax;//calcula el error segun la referencia dada
    adx=-(pdx)*accx1+KNx*(ex-ex1);//calculo de la parte derivativa
    accx=escx*(Kpx*ex+adx);//calculo de la accion de control
    
    
    cuentx=318.31*accx+1350;
    
    /*if (cuentx <= 1294){
        cuentx = 1294;
    }
    if (cuentx >= 1405){
        cuentx = 1405;
    }*/
    
    
    //Escribe las cuentas en los PWM
    PWM_X_WriteCompare(cuentx);
       
    accx1=accx;//guarda la accion de control anterior de x
    ex1=ex;//guarda el error anterior de x
    accy1=accy;//guarda la accion de control anterior de y
    ey1=ey;//guarda el error anterior de y

    
}

CY_ISR(isr_Muestreo){
    /*touch=ResistiveTouch_TouchDetect();
    if (touch==1){*/
        Pin_1_Write(1u);
        Control();
        Pin_1_Write(0u);
    /*}
    else{
        accx=0;
        accy=0;
        datax=0;
        datay=0;
        cuentx=1350;
        cuenty=1100;
        PWM_X_WriteCompare(cuentx);
        PWM_Y_WriteCompare(cuenty);
    }*/
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
    
    ix=0, iy = 0, skx = 0, sky = 0;//Variables del filtro de media móvil
    
    coordx = 0;
    coordy = 0;
    datax=0,datay=0,ex=0,ey=0,adx=0,ady=0,accx=0,accy=0,accx1=0,accy1=0,accx2=0,accy2=0,ex1=0,ey1=0,
    adcx=0.000062162,adcy=0.000052356,crucex = -0.120783783 , crucey = -0.103141361;//-2.53,-2,91
    pdy=(Ny*Ts-1), pdx=(Nx*Ts-1), KNx=Kdx*Nx, KNy=Kdy*Ny;
    
    cuentx=1350;//1377,1322
    cuenty=1100;//1128,1072
    PWM_X_WriteCompare(cuentx);
    PWM_Y_WriteCompare(cuenty);
    
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
