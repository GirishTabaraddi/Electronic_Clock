/*******************************************************************************
* File Name: KeyLeft_Button.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_KeyLeft_Button_H) /* Pins KeyLeft_Button_H */
#define CY_PINS_KeyLeft_Button_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "KeyLeft_Button_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 KeyLeft_Button__PORT == 15 && ((KeyLeft_Button__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    KeyLeft_Button_Write(uint8 value);
void    KeyLeft_Button_SetDriveMode(uint8 mode);
uint8   KeyLeft_Button_ReadDataReg(void);
uint8   KeyLeft_Button_Read(void);
void    KeyLeft_Button_SetInterruptMode(uint16 position, uint16 mode);
uint8   KeyLeft_Button_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the KeyLeft_Button_SetDriveMode() function.
     *  @{
     */
        #define KeyLeft_Button_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define KeyLeft_Button_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define KeyLeft_Button_DM_RES_UP          PIN_DM_RES_UP
        #define KeyLeft_Button_DM_RES_DWN         PIN_DM_RES_DWN
        #define KeyLeft_Button_DM_OD_LO           PIN_DM_OD_LO
        #define KeyLeft_Button_DM_OD_HI           PIN_DM_OD_HI
        #define KeyLeft_Button_DM_STRONG          PIN_DM_STRONG
        #define KeyLeft_Button_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define KeyLeft_Button_MASK               KeyLeft_Button__MASK
#define KeyLeft_Button_SHIFT              KeyLeft_Button__SHIFT
#define KeyLeft_Button_WIDTH              1u

/* Interrupt constants */
#if defined(KeyLeft_Button__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in KeyLeft_Button_SetInterruptMode() function.
     *  @{
     */
        #define KeyLeft_Button_INTR_NONE      (uint16)(0x0000u)
        #define KeyLeft_Button_INTR_RISING    (uint16)(0x0001u)
        #define KeyLeft_Button_INTR_FALLING   (uint16)(0x0002u)
        #define KeyLeft_Button_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define KeyLeft_Button_INTR_MASK      (0x01u) 
#endif /* (KeyLeft_Button__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define KeyLeft_Button_PS                     (* (reg8 *) KeyLeft_Button__PS)
/* Data Register */
#define KeyLeft_Button_DR                     (* (reg8 *) KeyLeft_Button__DR)
/* Port Number */
#define KeyLeft_Button_PRT_NUM                (* (reg8 *) KeyLeft_Button__PRT) 
/* Connect to Analog Globals */                                                  
#define KeyLeft_Button_AG                     (* (reg8 *) KeyLeft_Button__AG)                       
/* Analog MUX bux enable */
#define KeyLeft_Button_AMUX                   (* (reg8 *) KeyLeft_Button__AMUX) 
/* Bidirectional Enable */                                                        
#define KeyLeft_Button_BIE                    (* (reg8 *) KeyLeft_Button__BIE)
/* Bit-mask for Aliased Register Access */
#define KeyLeft_Button_BIT_MASK               (* (reg8 *) KeyLeft_Button__BIT_MASK)
/* Bypass Enable */
#define KeyLeft_Button_BYP                    (* (reg8 *) KeyLeft_Button__BYP)
/* Port wide control signals */                                                   
#define KeyLeft_Button_CTL                    (* (reg8 *) KeyLeft_Button__CTL)
/* Drive Modes */
#define KeyLeft_Button_DM0                    (* (reg8 *) KeyLeft_Button__DM0) 
#define KeyLeft_Button_DM1                    (* (reg8 *) KeyLeft_Button__DM1)
#define KeyLeft_Button_DM2                    (* (reg8 *) KeyLeft_Button__DM2) 
/* Input Buffer Disable Override */
#define KeyLeft_Button_INP_DIS                (* (reg8 *) KeyLeft_Button__INP_DIS)
/* LCD Common or Segment Drive */
#define KeyLeft_Button_LCD_COM_SEG            (* (reg8 *) KeyLeft_Button__LCD_COM_SEG)
/* Enable Segment LCD */
#define KeyLeft_Button_LCD_EN                 (* (reg8 *) KeyLeft_Button__LCD_EN)
/* Slew Rate Control */
#define KeyLeft_Button_SLW                    (* (reg8 *) KeyLeft_Button__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define KeyLeft_Button_PRTDSI__CAPS_SEL       (* (reg8 *) KeyLeft_Button__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define KeyLeft_Button_PRTDSI__DBL_SYNC_IN    (* (reg8 *) KeyLeft_Button__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define KeyLeft_Button_PRTDSI__OE_SEL0        (* (reg8 *) KeyLeft_Button__PRTDSI__OE_SEL0) 
#define KeyLeft_Button_PRTDSI__OE_SEL1        (* (reg8 *) KeyLeft_Button__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define KeyLeft_Button_PRTDSI__OUT_SEL0       (* (reg8 *) KeyLeft_Button__PRTDSI__OUT_SEL0) 
#define KeyLeft_Button_PRTDSI__OUT_SEL1       (* (reg8 *) KeyLeft_Button__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define KeyLeft_Button_PRTDSI__SYNC_OUT       (* (reg8 *) KeyLeft_Button__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(KeyLeft_Button__SIO_CFG)
    #define KeyLeft_Button_SIO_HYST_EN        (* (reg8 *) KeyLeft_Button__SIO_HYST_EN)
    #define KeyLeft_Button_SIO_REG_HIFREQ     (* (reg8 *) KeyLeft_Button__SIO_REG_HIFREQ)
    #define KeyLeft_Button_SIO_CFG            (* (reg8 *) KeyLeft_Button__SIO_CFG)
    #define KeyLeft_Button_SIO_DIFF           (* (reg8 *) KeyLeft_Button__SIO_DIFF)
#endif /* (KeyLeft_Button__SIO_CFG) */

/* Interrupt Registers */
#if defined(KeyLeft_Button__INTSTAT)
    #define KeyLeft_Button_INTSTAT            (* (reg8 *) KeyLeft_Button__INTSTAT)
    #define KeyLeft_Button_SNAP               (* (reg8 *) KeyLeft_Button__SNAP)
    
	#define KeyLeft_Button_0_INTTYPE_REG 		(* (reg8 *) KeyLeft_Button__0__INTTYPE)
#endif /* (KeyLeft_Button__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_KeyLeft_Button_H */


/* [] END OF FILE */
