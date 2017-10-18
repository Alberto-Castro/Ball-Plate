/*******************************************************************************
* File Name: LCD_SegStat.h
* Version 2.30
*
* Description:
*  This header file contains definitions associated with the Static Segment LCD
*  component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_ST_SEG_LCD_LCD_SegStat_H)
#define CY_ST_SEG_LCD_LCD_SegStat_H

#include "cytypes.h"
#include "cydevice_trm.h"
#include "cyfitter.h"
#include <LCD_SegStat_Pins.h>


/***************************************
*   Conditional Compilation Parameters
***************************************/

/* Print error if cy_boot version is below 3.0 */
#ifndef CY_PSOC5LP
    #error Component StaticSegLCD_v2_30 requires cy_boot v3.0 or later
#endif /* CY_PSOC5LP */

#define LCD_SegStat_PORT_SHIFT          (0x04u)
#define LCD_SegStat_ROW_SHIFT           (0x08u)

/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;
} LCD_SegStat_BACKUP_STRUCT;

/* DMA_PROTO_GROUP_NAME=StSegLcdPort */
struct LCD_SegStat_DMA_TD_PROTO_ENTRY
{
	uint8 offset;	/* offset of the first register in this TD */
	uint8 length;	/* length of the register block in this TD */
};


/***************************************
*        Function Prototypes
***************************************/

void   LCD_SegStat_Init(void) ;
uint8  LCD_SegStat_Enable(void) ;
uint8  LCD_SegStat_Start(void) ;
void   LCD_SegStat_Stop(void) ;
void   LCD_SegStat_EnableInt(void) ;
void   LCD_SegStat_DisableInt(void) ;
void   LCD_SegStat_ClearDisplay(void) ;
uint8  LCD_SegStat_WritePixel(uint16 pixelNumber, uint8 pixelState)
                                                                    ;
uint8  LCD_SegStat_ReadPixel(uint16 pixelNumber) ;
uint8  LCD_SegStat_WriteInvertState(uint8 invertState) ;
uint8  LCD_SegStat_ReadInvertState(void) ;
void   LCD_SegStat_Sleep(void) ;
uint8  LCD_SegStat_Wakeup(void) ;
void   LCD_SegStat_RestoreConfig(void) ;
void   LCD_SegStat_SaveConfig(void) ;
#define LCD_SegStat_7SEG
void LCD_SegStat_Write7SegDigit_0(uint8 digit, uint8 position) ;
void LCD_SegStat_Write7SegNumber_0(uint16 value, uint8 position, uint8 mode) ;

CY_ISR_PROTO(LCD_SegStat_ISR);

#define LCD_SegStat_WRITE_PIXEL(pixelNumber, pixelState)    \
                                                        ((void) LCD_SegStat_WritePixel(pixelNumber, pixelState))
#define LCD_SegStat_READ_PIXEL(pixelNumber)                 (LCD_SegStat_ReadPixel(pixelNumber))
#define LCD_SegStat_FIND_PIXEL(port, pin, row)     \
                                                ((uint16) (((uint16) (((uint16) (row)) << LCD_SegStat_ROW_SHIFT) +\
                                                    (uint16) (((uint16)(port)) << LCD_SegStat_PORT_SHIFT)) + \
                                                       ((uint16)(pin))))


/***************************************
*           Global Variables
***************************************/
extern uint8 LCD_SegStat_enableState;
extern uint8 LCD_SegStat_initVar;


/***************************************
*           API Constants
***************************************/

#if(CY_PSOC5)
    #define LCD_SegStat_DMA_ADDRESS_MASK      (0xFFFFFFFFu)
#else
    #define LCD_SegStat_DMA_ADDRESS_MASK      (0x0000FFFFu)
#endif /* (CYDEV_CHIP_DIE_EXPECT == CYDEV_CHIP_DIE_LEOPARD) */

#define LCD_SegStat_ROW_LENGTH                (0x10u)

/* Number of pixels for different kind of LCDs */
#define LCD_SegStat_7SEG_PIX_NUM              (0x07u)
#define LCD_SegStat_14SEG_PIX_NUM             (0x0Eu)
#define LCD_SegStat_16SEG_PIX_NUM             (0x10u)

/* Actually there is only one common line but we need to
* invert the signal on the common line for proper waveform generation.
*/
#define LCD_SegStat_COMM_NUM                  (0x02u)

#define LCD_SegStat_BIT_MASK                  (0x0007u)
#define LCD_SegStat_PORT_MASK                 (0x00F0u)
#define LCD_SegStat_ROW_MASK                  (0x0F00u)

#define LCD_SegStat_NORMAL_STATE              (0x00u)
#define LCD_SegStat_INVERTED_STATE            (0x01u)
#define LCD_SegStat_STATE_MASK                (0x01u)

#define LCD_SegStat_PIXEL_STATE_OFF           (0x00u)
#define LCD_SegStat_PIXEL_STATE_ON            (0x01u)
#define LCD_SegStat_PIXEL_STATE_INVERT        (0x02u)
#define LCD_SegStat_PIXEL_UNKNOWN_STATE       (0xFFu)

#define LCD_SegStat_TD_SIZE                   (0x10u)
#define LCD_SegStat_BUFFER_LENGTH             (32u)

/* 0 - No leadig zeros, 1 - leadig zeros */
#define LCD_SegStat_MODE_0                    (0x00u)
#define LCD_SegStat_MODE_1                    (0x01u)

#define LCD_SegStat_ROW_BYTE_LENGTH           (0x10u)

#define LCD_SegStat_MAX_PORTS                 (0x10u)

#define LCD_SegStat_ISR_NUMBER                (LCD_SegStat_LCD_ISR__INTC_NUMBER)
#define LCD_SegStat_ISR_PRIORITY              (LCD_SegStat_LCD_ISR__INTC_PRIOR_NUM)

/* Defines index of "blank" digit in the look-up table for 7 segment helper */
#define LCD_SegStat_7SEG_BLANK_DIG            (0x10u)

#define LCD_SegStat_DIGIT_NUM_0            (4u)

#define LCD_SegStat_COM0_PORT                LCD_SegStat_Com__LCD_COM_PORT__0
#define LCD_SegStat_COM0_PIN                LCD_SegStat_Com__LCD_COM_PIN__0

#define LCD_SegStat_Com0                LCD_SegStat_FIND_PIXEL(LCD_SegStat_COM0_PORT,  LCD_SegStat_COM0_PIN,  0u)

#define LCD_SegStat_SEG0_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__0
#define LCD_SegStat_SEG0_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__0
#define LCD_SegStat_SEG1_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__1
#define LCD_SegStat_SEG1_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__1
#define LCD_SegStat_SEG2_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__2
#define LCD_SegStat_SEG2_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__2
#define LCD_SegStat_SEG3_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__3
#define LCD_SegStat_SEG3_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__3
#define LCD_SegStat_SEG4_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__4
#define LCD_SegStat_SEG4_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__4
#define LCD_SegStat_SEG5_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__5
#define LCD_SegStat_SEG5_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__5
#define LCD_SegStat_SEG6_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__6
#define LCD_SegStat_SEG6_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__6
#define LCD_SegStat_SEG7_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__7
#define LCD_SegStat_SEG7_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__7
#define LCD_SegStat_SEG8_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__8
#define LCD_SegStat_SEG8_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__8
#define LCD_SegStat_SEG9_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__9
#define LCD_SegStat_SEG9_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__9
#define LCD_SegStat_SEG10_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__10
#define LCD_SegStat_SEG10_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__10
#define LCD_SegStat_SEG11_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__11
#define LCD_SegStat_SEG11_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__11
#define LCD_SegStat_SEG12_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__12
#define LCD_SegStat_SEG12_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__12
#define LCD_SegStat_SEG13_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__13
#define LCD_SegStat_SEG13_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__13
#define LCD_SegStat_SEG14_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__14
#define LCD_SegStat_SEG14_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__14
#define LCD_SegStat_SEG15_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__15
#define LCD_SegStat_SEG15_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__15
#define LCD_SegStat_SEG16_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__16
#define LCD_SegStat_SEG16_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__16
#define LCD_SegStat_SEG17_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__17
#define LCD_SegStat_SEG17_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__17
#define LCD_SegStat_SEG18_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__18
#define LCD_SegStat_SEG18_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__18
#define LCD_SegStat_SEG19_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__19
#define LCD_SegStat_SEG19_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__19
#define LCD_SegStat_SEG20_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__20
#define LCD_SegStat_SEG20_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__20
#define LCD_SegStat_SEG21_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__21
#define LCD_SegStat_SEG21_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__21
#define LCD_SegStat_SEG22_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__22
#define LCD_SegStat_SEG22_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__22
#define LCD_SegStat_SEG23_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__23
#define LCD_SegStat_SEG23_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__23
#define LCD_SegStat_SEG24_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__24
#define LCD_SegStat_SEG24_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__24
#define LCD_SegStat_SEG25_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__25
#define LCD_SegStat_SEG25_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__25
#define LCD_SegStat_SEG26_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__26
#define LCD_SegStat_SEG26_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__26
#define LCD_SegStat_SEG27_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__27
#define LCD_SegStat_SEG27_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__27
#define LCD_SegStat_SEG28_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__28
#define LCD_SegStat_SEG28_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__28
#define LCD_SegStat_SEG29_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__29
#define LCD_SegStat_SEG29_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__29
#define LCD_SegStat_SEG30_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__30
#define LCD_SegStat_SEG30_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__30
#define LCD_SegStat_SEG31_PORT                LCD_SegStat_Seg__LCD_SEG_PORT__31
#define LCD_SegStat_SEG31_PIN                LCD_SegStat_Seg__LCD_SEG_PIN__31

#define LCD_SegStat_H7SEG0_A                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG29_PORT,  LCD_SegStat_SEG29_PIN,  0u)
#define LCD_SegStat_H7SEG0_B                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG28_PORT,  LCD_SegStat_SEG28_PIN,  0u)
#define LCD_SegStat_H7SEG0_C                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG2_PORT,  LCD_SegStat_SEG2_PIN,  0u)
#define LCD_SegStat_H7SEG0_D                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG1_PORT,  LCD_SegStat_SEG1_PIN,  0u)
#define LCD_SegStat_H7SEG0_E                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG0_PORT,  LCD_SegStat_SEG0_PIN,  0u)
#define LCD_SegStat_H7SEG0_F                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG30_PORT,  LCD_SegStat_SEG30_PIN,  0u)
#define LCD_SegStat_H7SEG0_G                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG31_PORT,  LCD_SegStat_SEG31_PIN,  0u)
#define LCD_SegStat_H7SEG1_A                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG25_PORT,  LCD_SegStat_SEG25_PIN,  0u)
#define LCD_SegStat_H7SEG1_B                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG24_PORT,  LCD_SegStat_SEG24_PIN,  0u)
#define LCD_SegStat_H7SEG1_C                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG6_PORT,  LCD_SegStat_SEG6_PIN,  0u)
#define LCD_SegStat_H7SEG1_D                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG5_PORT,  LCD_SegStat_SEG5_PIN,  0u)
#define LCD_SegStat_H7SEG1_E                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG4_PORT,  LCD_SegStat_SEG4_PIN,  0u)
#define LCD_SegStat_H7SEG1_F                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG26_PORT,  LCD_SegStat_SEG26_PIN,  0u)
#define LCD_SegStat_H7SEG1_G                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG27_PORT,  LCD_SegStat_SEG27_PIN,  0u)
#define LCD_SegStat_H7SEG2_A                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG20_PORT,  LCD_SegStat_SEG20_PIN,  0u)
#define LCD_SegStat_H7SEG2_B                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG19_PORT,  LCD_SegStat_SEG19_PIN,  0u)
#define LCD_SegStat_H7SEG2_C                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG10_PORT,  LCD_SegStat_SEG10_PIN,  0u)
#define LCD_SegStat_H7SEG2_D                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG9_PORT,  LCD_SegStat_SEG9_PIN,  0u)
#define LCD_SegStat_H7SEG2_E                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG8_PORT,  LCD_SegStat_SEG8_PIN,  0u)
#define LCD_SegStat_H7SEG2_F                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG21_PORT,  LCD_SegStat_SEG21_PIN,  0u)
#define LCD_SegStat_H7SEG2_G                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG22_PORT,  LCD_SegStat_SEG22_PIN,  0u)
#define LCD_SegStat_H7SEG3_A                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG16_PORT,  LCD_SegStat_SEG16_PIN,  0u)
#define LCD_SegStat_H7SEG3_B                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG15_PORT,  LCD_SegStat_SEG15_PIN,  0u)
#define LCD_SegStat_H7SEG3_C                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG14_PORT,  LCD_SegStat_SEG14_PIN,  0u)
#define LCD_SegStat_H7SEG3_D                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG13_PORT,  LCD_SegStat_SEG13_PIN,  0u)
#define LCD_SegStat_H7SEG3_E                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG12_PORT,  LCD_SegStat_SEG12_PIN,  0u)
#define LCD_SegStat_H7SEG3_F                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG17_PORT,  LCD_SegStat_SEG17_PIN,  0u)
#define LCD_SegStat_H7SEG3_G                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG18_PORT,  LCD_SegStat_SEG18_PIN,  0u)

#define LCD_SegStat_PIX3                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG3_PORT,  LCD_SegStat_SEG3_PIN,  0u)
#define LCD_SegStat_PIX7                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG7_PORT,  LCD_SegStat_SEG7_PIN,  0u)
#define LCD_SegStat_PIX11                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG11_PORT,  LCD_SegStat_SEG11_PIN,  0u)
#define LCD_SegStat_PIX23                LCD_SegStat_FIND_PIXEL(LCD_SegStat_SEG23_PORT,  LCD_SegStat_SEG23_PIN,  0u)

#define LCD_SegStat_NOT_CON            ((uint8) (0xFFu))

/*
* Following definitions of the global variables are
* obsolete and which will be removed in the near future.
*/
#define LCD_SegStat_Disp0            LCD_SegStat_disp0
#define H7SEG0_A                LCD_SegStat_H7SEG0_A
#define H7SEG0_B                LCD_SegStat_H7SEG0_B
#define H7SEG0_C                LCD_SegStat_H7SEG0_C
#define H7SEG0_D                LCD_SegStat_H7SEG0_D
#define H7SEG0_E                LCD_SegStat_H7SEG0_E
#define H7SEG0_F                LCD_SegStat_H7SEG0_F
#define H7SEG0_G                LCD_SegStat_H7SEG0_G
#define H7SEG1_A                LCD_SegStat_H7SEG1_A
#define H7SEG1_B                LCD_SegStat_H7SEG1_B
#define H7SEG1_C                LCD_SegStat_H7SEG1_C
#define H7SEG1_D                LCD_SegStat_H7SEG1_D
#define H7SEG1_E                LCD_SegStat_H7SEG1_E
#define H7SEG1_F                LCD_SegStat_H7SEG1_F
#define H7SEG1_G                LCD_SegStat_H7SEG1_G
#define H7SEG2_A                LCD_SegStat_H7SEG2_A
#define H7SEG2_B                LCD_SegStat_H7SEG2_B
#define H7SEG2_C                LCD_SegStat_H7SEG2_C
#define H7SEG2_D                LCD_SegStat_H7SEG2_D
#define H7SEG2_E                LCD_SegStat_H7SEG2_E
#define H7SEG2_F                LCD_SegStat_H7SEG2_F
#define H7SEG2_G                LCD_SegStat_H7SEG2_G
#define H7SEG3_A                LCD_SegStat_H7SEG3_A
#define H7SEG3_B                LCD_SegStat_H7SEG3_B
#define H7SEG3_C                LCD_SegStat_H7SEG3_C
#define H7SEG3_D                LCD_SegStat_H7SEG3_D
#define H7SEG3_E                LCD_SegStat_H7SEG3_E
#define H7SEG3_F                LCD_SegStat_H7SEG3_F
#define H7SEG3_G                LCD_SegStat_H7SEG3_G
#define PIX3                LCD_SegStat_PIX3
#define PIX7                LCD_SegStat_PIX7
#define PIX11                LCD_SegStat_PIX11
#define PIX23                LCD_SegStat_PIX23

#define LCD_SegStat_StSegLcdPort_DMA_TD_PROTO_COUNT 2


#define LCD_SegStat_LCD_TD_SIZE               ((uint8) LCD_SegStat_StSegLcdPort_DMA_TD_PROTO_COUNT)


/***************************************
*             Registers
***************************************/

#define LCD_SegStat_ALIASED_AREA_PTR                        ((reg32) CYDEV_IO_DR_PRT0_DR_ALIAS)
#define LCD_SegStat_PORT_BASE_PTR                           ((reg8 *) CYDEV_IO_PRT_PRT0_BASE)

#endif /* CY_ST_SEG_LCD_LCD_SegStat_H */


/* [] END OF FILE */
