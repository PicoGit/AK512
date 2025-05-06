
#ifndef INTERRUPT_USER_H
#define	INTERRUPT_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "interrupt_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/


#if 0


#define IRPT_USER_ENABLE_IVTCIE		IRPT_DISABLE	/* CPUFPU割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CPUFPUIE	IRPT_DISABLE	/* CPUFPU割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_XRAMECCIE	IRPT_DISABLE	/* XRAMECC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_YRAMECCIE	IRPT_DISABLE	/* YRAMECC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PBERRIE	IRPT_DISABLE	/* PBERR割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_NVMECCIE	IRPT_DISABLE	/* NVMECC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_NVMIE		IRPT_DISABLE	/* NVM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_NVMCRCIE	IRPT_DISABLE	/* NVMCRC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLKFAILIE	IRPT_DISABLE	/* CLKFAILIE割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLKERRIE	IRPT_DISABLE	/* CLKERR割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1FAILIE	IRPT_DISABLE	/* C1FAIL割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1MONIE	IRPT_DISABLE	/* C1MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1RDYIE	IRPT_DISABLE	/* C1RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1WARNIE	IRPT_DISABLE	/* C1WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2FAILIE	IRPT_DISABLE	/* C2FAIL割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2WARMIE	IRPT_DISABLE	/* C2WARM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2MONIE	IRPT_DISABLE	/* C2MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2RDYIE	IRPT_DISABLE	/* C2RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C2WARNIE	IRPT_DISABLE	/* C2WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3FAILIE	IRPT_DISABLE	/* C3FAIL3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3WARMIE	IRPT_DISABLE	/* C3WARM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3MONIE	IRPT_DISABLE	/* C3MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3RDYIE	IRPT_DISABLE	/* C3RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C3WARNIE	IRPT_DISABLE	/* C3WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4FAILIE	IRPT_DISABLE	/* C4FAIL割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4WARMIE	IRPT_DISABLE	/* C4WARM割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4MONIE	IRPT_DISABLE	/* C4MON割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4RDYIE	IRPT_DISABLE	/* C4RDY割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C4WARNIE	IRPT_DISABLE	/* C4WARN割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_WDTIE		IRPT_DISABLE	/* WDT割り込み有効化レジスタ */


/*----------------------------------------------------------------------------*/
/* INT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_INT0IE		IRPT_DISABLE	/* INT0割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT1IE		IRPT_DISABLE	/* INT1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT2IE		IRPT_DISABLE	/* INT2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT3IE		IRPT_DISABLE	/* INT3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_INT4IE		IRPT_DISABLE	/* INT4割り込み有効化レジスタ */

#define IRPT_USER_ENABLE_PEVTAIE	IRPT_DISABLE	/* PEVTA割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTBIE	IRPT_DISABLE	/* PEVTB割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTCIE	IRPT_DISABLE	/* PEVTC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTDIE	IRPT_DISABLE	/* PEVTD割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTEIE	IRPT_DISABLE	/* PEVTE割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTFIE	IRPT_DISABLE	/* PEVTF割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* Timer割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_T1IE     IRPT_DISABLE	/* T1割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CN割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CNAIE	IRPT_DISABLE	/* CNA割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNBIE	IRPT_DISABLE	/* CNB割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNCIE	IRPT_DISABLE	/* CNC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNDIE	IRPT_DISABLE	/* CND割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CNEIE	IRPT_DISABLE	/* CNE割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* DMA割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_DMA0IE	IRPT_DISABLE	/* DMA0割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA1IE	IRPT_DISABLE	/* DMA1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA2IE	IRPT_DISABLE	/* DMA2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA3IE	IRPT_DISABLE	/* DMA3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA4IE	IRPT_DISABLE	/* DMA4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_DMA5IE	IRPT_DISABLE	/* DMA5割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CCT,CCP割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CCP1IE	IRPT_DISABLE	/* CCP1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT1IE	IRPT_DISABLE	/* CCT1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP2IE	IRPT_DISABLE	/* CCP2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT2IE	IRPT_DISABLE	/* CCT2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP3IE	IRPT_DISABLE	/* CCP3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT3IE	IRPT_DISABLE	/* CCT3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP4IE	IRPT_DISABLE	/* CCP4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT4IE	IRPT_DISABLE	/* CCT4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP5IE	IRPT_DISABLE	/* CCP5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT5IE	IRPT_DISABLE	/* CCT5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP6IE	IRPT_DISABLE	/* CCP6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT6IE	IRPT_DISABLE	/* CCT6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP7IE	IRPT_DISABLE	/* CCP7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT7IE	IRPT_DISABLE	/* CCT7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCP8IE	IRPT_DISABLE	/* CCP8割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CCT8IE	IRPT_DISABLE	/* CCT8割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* SPI割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_SPI1EIE	IRPT_DISABLE	/* SPI1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI1RXIE	IRPT_DISABLE	/* SPI1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI1TXIE	IRPT_DISABLE	/* SPI1TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI2EIE	IRPT_DISABLE	/* SPI2E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI2RXIE	IRPT_DISABLE	/* SPI2RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI2TXIE	IRPT_DISABLE	/* SPI2TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI3EIE	IRPT_DISABLE	/* SPI3E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI3RXIE	IRPT_DISABLE	/* SPI3RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SPI3TXIE	IRPT_DISABLE	/* SPI3TX割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* UART割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_U1EVTIE	IRPT_DISABLE	/* U1EVT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U1RXIE		IRPT_DISABLE	/* U1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U1TXIE		IRPT_DISABLE	/* U1TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U1EIE		IRPT_DISABLE	/* U1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U2EVTIE	IRPT_DISABLE	/* U2EVT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U2RXIE		IRPT_DISABLE	/* U2RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U2TXIE		IRPT_DISABLE	/* U2TX割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_U2EIE		IRPT_DISABLE	/* U2E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U3EVTIE	IRPT_DISABLE	/* U3EVT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U3RXIE		IRPT_DISABLE	/* U3RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_U3TXIE		IRPT_DISABLE	/* U3TX割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_U3EIE		IRPT_DISABLE	/* U3E割り込み有効化レジスタ */
/*----------------------------------------------------------------------------*/
/* ECC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_ECCSBEIE	IRPT_DISABLE	/* ECCSBE割り込み有効化レジスタ */


/*----------------------------------------------------------------------------*/
/* BIss割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_BISS1IE	IRPT_DISABLE	/* BISS1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_BISS1EIE	IRPT_DISABLE	/* BISSE1割り込み有効化レジスタ */
		
/*----------------------------------------------------------------------------*/
/* I2C割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_I2C1IE	IRPT_DISABLE	/* I2C1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C1EIE	IRPT_DISABLE	/* I2C1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C1RXIE	IRPT_DISABLE	/* I2C1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C1TXIE	IRPT_DISABLE	/* I2C1TX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2IE	IRPT_DISABLE	/* I2C2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2EIE	IRPT_DISABLE	/* I2C2E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2RXIE	IRPT_DISABLE	/* I2C2RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_I2C2TXIE	IRPT_DISABLE	/* I2C2TX割り込み有効化レジスタ */
/*----------------------------------------------------------------------------*/
/* CAN割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_C1IE     IRPT_DISABLE	/* C1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1RXIE	IRPT_DISABLE	/* C1RX割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_C1TXIE	IRPT_DISABLE	/* C1TX割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* DMT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_DMTIE	IRPT_DISABLE	/* DMT割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* QEI割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_QEI1IE	IRPT_DISABLE	/* QEI1割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CRC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CRCIE	IRPT_DISABLE	/* CRC割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* Debug割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_ICDIE	IRPT_DISABLE	/* ICD割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_JTAGIE	IRPT_DISABLE	/* JTAG割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* PWM割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_PWM1IE	IRPT_DISABLE	/* PWM1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM2IE	IRPT_DISABLE	/* PWM2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM3IE	IRPT_DISABLE	/* PWM3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM4IE	IRPT_DISABLE	/* PWM4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM5IE	IRPT_DISABLE	/* PWM5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM6IE	IRPT_DISABLE	/* PWM6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM7IE	IRPT_DISABLE	/* PWM7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PWM8IE	IRPT_DISABLE	/* PWM8割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* CMP割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CMP1IE	IRPT_DISABLE	/* CMP1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CMP2IE	IRPT_DISABLE	/* CMP2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CMP3IE	IRPT_DISABLE	/* CMP3割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* PTG割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_PTGWDTIE	IRPT_DISABLE	/* PTGWDT割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG0IE		IRPT_DISABLE	/* PTG0割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG1IE		IRPT_DISABLE	/* PTG1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG2IE		IRPT_DISABLE	/* PTG2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG3IE		IRPT_DISABLE	/* PTG3割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG4IE		IRPT_DISABLE	/* PTG4割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG5IE		IRPT_DISABLE	/* PTG5割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG6IE		IRPT_DISABLE	/* PTG6割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTG7IE		IRPT_DISABLE	/* PTG7割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PTGSTEPIE	IRPT_DISABLE	/* PTGSTEP割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* SENT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_SENT1IE	IRPT_DISABLE	/* SENT1割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SENT1EIE	IRPT_DISABLE	/* SENT1E割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SENT2IE	IRPT_DISABLE	/* SENT2割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_SENT2EIE	IRPT_DISABLE	/* SENT2E割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* ADC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define	IRPT_USER_ENABLE_AD1CH0IE	IRPT_DISABLE	/* AD1CH0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP0IE	IRPT_DISABLE	/* AD1CMP0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH1IE	IRPT_DISABLE	/* AD1CH1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP1IE	IRPT_DISABLE	/* AD1CMP1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH2IE	IRPT_DISABLE	/* AD1CH2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP2IE	IRPT_DISABLE	/* AD1CMP2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH3IE	IRPT_DISABLE	/* AD1CH3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP3IE	IRPT_DISABLE	/* AD1CMP3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH4IE	IRPT_DISABLE	/* AD1CH4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP4IE	IRPT_DISABLE	/* AD1CMP4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH5IE	IRPT_DISABLE	/* AD1CH5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP5IE	IRPT_DISABLE	/* AD1CMP5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH6IE	IRPT_DISABLE	/* AD1CH6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP6IE	IRPT_DISABLE	/* AD1CMP6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH7IE	IRPT_DISABLE	/* AD1CH7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP7IE	IRPT_DISABLE	/* AD1CMP7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH8IE	IRPT_DISABLE	/* AD1CH8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP8IE	IRPT_DISABLE	/* AD1CMP8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH9IE	IRPT_DISABLE	/* AD1CH9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP9IE	IRPT_DISABLE	/* AD1CMP9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH10IE	IRPT_DISABLE	/* AD1CH10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP10IE	IRPT_DISABLE	/* AD1CMP10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH11IE	IRPT_DISABLE	/* AD1CH11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP11IE	IRPT_DISABLE	/* AD1CMP11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH12IE	IRPT_DISABLE	/* AD1CH12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP12IE	IRPT_DISABLE	/* AD1CMP12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH13IE	IRPT_DISABLE	/* AD1CH13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP13IE	IRPT_DISABLE	/* AD1CMP13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH14IE	IRPT_DISABLE	/* AD1CH14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP14IE	IRPT_DISABLE	/* AD1CMP14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH15IE	IRPT_DISABLE	/* AD1CH15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP15IE	IRPT_DISABLE	/* AD1CMP15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH16IE	IRPT_DISABLE	/* AD1CH16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP16IE	IRPT_DISABLE	/* AD1CMP16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH17IE	IRPT_DISABLE	/* AD1CH17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP17IE	IRPT_DISABLE	/* AD1CMP17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH18IE	IRPT_DISABLE	/* AD1CH18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP18IE	IRPT_DISABLE	/* AD1CMP18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CH19IE	IRPT_DISABLE	/* AD1CH19IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD1CMP19IE	IRPT_DISABLE	/* AD1CMP19IE割り込み有効化レジスタ */

#define	IRPT_USER_ENABLE_AD2CH0IE	IRPT_DISABLE	/* AD2CH0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP0IE	IRPT_DISABLE	/* AD2CMP0IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH1IE	IRPT_DISABLE	/* AD2CH1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP1IE	IRPT_DISABLE	/* AD2CMP1IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH2IE	IRPT_DISABLE	/* AD2CH2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP2IE	IRPT_DISABLE	/* AD2CMP2IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH3IE	IRPT_DISABLE	/* AD2CH3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP3IE	IRPT_DISABLE	/* AD2CMP3IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH4IE	IRPT_DISABLE	/* AD2CH4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP4IE	IRPT_DISABLE	/* AD2CMP4IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH5IE	IRPT_DISABLE	/* AD2CH5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP5IE	IRPT_DISABLE	/* AD2CMP5IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH6IE	IRPT_DISABLE	/* AD2CH6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP6IE	IRPT_DISABLE	/* AD2CMP6IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH7IE	IRPT_DISABLE	/* AD2CH7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP7IE	IRPT_DISABLE	/* AD2CMP7IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH8IE	IRPT_DISABLE	/* AD2CH8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP8IE	IRPT_DISABLE	/* AD2CMP8IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH9IE	IRPT_DISABLE	/* AD2CH9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP9IE	IRPT_DISABLE	/* AD2CMP9IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH10IE	IRPT_DISABLE	/* AD2CH10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP10IE	IRPT_DISABLE	/* AD2CMP10IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH11IE	IRPT_DISABLE	/* AD2CH11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP11IE	IRPT_DISABLE	/* AD2CMP11IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH12IE	IRPT_DISABLE	/* AD2CH12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP12IE	IRPT_DISABLE	/* AD2CMP12IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH13IE	IRPT_DISABLE	/* AD2CH13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP13IE	IRPT_DISABLE	/* AD2CMP13IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH14IE	IRPT_DISABLE	/* AD2CH14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP14IE	IRPT_DISABLE	/* AD2CMP14IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH15IE	IRPT_DISABLE	/* AD2CH15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP15IE	IRPT_DISABLE	/* AD2CMP15IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH16IE	IRPT_DISABLE	/* AD2CH16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP16IE	IRPT_DISABLE	/* AD2CMP16IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH17IE	IRPT_DISABLE	/* AD2CH17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP17IE	IRPT_DISABLE	/* AD2CMP17IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH18IE	IRPT_DISABLE	/* AD2CH18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP18IE	IRPT_DISABLE	/* AD2CMP18IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CH19IE	IRPT_DISABLE	/* AD2CH19IE割り込み有効化レジスタ */
#define	IRPT_USER_ENABLE_AD2CMP19IE	IRPT_DISABLE	/* AD2CMP19IE割り込み有効化レジスタ */
/*----------------------------------------------------------------------------*/
/* CLC割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_CLC1PIE	IRPT_DISABLE	/* CLC1P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC2PIE	IRPT_DISABLE	/* CLC2P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC3PIE	IRPT_DISABLE	/* CLC3P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC4PIE	IRPT_DISABLE	/* CLC4P割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC1NIE	IRPT_DISABLE	/* CLC1N割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC2NIE	IRPT_DISABLE	/* CLC2N割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC3NIE	IRPT_DISABLE	/* CLC3N割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_CLC4NIE	IRPT_DISABLE	/* CLC4N割り込み有効化レジスタ */

/*----------------------------------------------------------------------------*/
/* IOMON有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_IOM1IE		IRPT_DISABLE	/* IOM1IE割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_IOM2IE		IRPT_DISABLE	/* IOM2IE割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_IOM3IE		IRPT_DISABLE	/* IOM3IE割り込み有効化レジスタ*/
#define IRPT_USER_ENABLE_IOM4IE		IRPT_DISABLE	/* IOM4IE割り込み有効化レジスタ*/
/*----------------------------------------------------------------------------*/
/* PEVT割り込み有効化 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_ENABLE_PEVTAIE	IRPT_DISABLE	/* PEVTA割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTBIE	IRPT_DISABLE	/* PEVTB割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTCIE	IRPT_DISABLE	/* PEVTC割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTDIE	IRPT_DISABLE	/* PEVTD割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTEIE	IRPT_DISABLE	/* PEVTE割り込み有効化レジスタ */
#define IRPT_USER_ENABLE_PEVTFIE	IRPT_DISABLE	/* PEVTF割り込み有効化レジスタ */





#define IRPT_USER_PRIORITY_IVTCIP		IRPT_PRIORITY_0	/* CPUFPU割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CPUFPUIP		IRPT_PRIORITY_0	/* CPUFPU割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_XRAMECCIP	IRPT_PRIORITY_0	/* XRAMECC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_YRAMECCIP	IRPT_PRIORITY_0	/* YRAMECC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PBERRIP		IRPT_PRIORITY_0	/* PBERR割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_NVMECCIP		IRPT_PRIORITY_0	/* NVMECC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_NVMIP		IRPT_PRIORITY_0	/* NVM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_NVMCRCIP		IRPT_PRIORITY_0	/* NVMCRC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLKFAILIP	IRPT_PRIORITY_0	/* CLKFAILIP割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLKERRIP		IRPT_PRIORITY_0	/* CLKERR割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1FAILIP		IRPT_PRIORITY_0	/* C1FAIL割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1MONIP		IRPT_PRIORITY_0	/* C1MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1RDYIP		IRPT_PRIORITY_0	/* C1RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1WARNIP		IRPT_PRIORITY_0	/* C1WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2FAILIP		IRPT_PRIORITY_0	/* C2FAIL割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2WARMIP		IRPT_PRIORITY_0	/* C2WARM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2MONIP		IRPT_PRIORITY_0	/* C2MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2RDYIP		IRPT_PRIORITY_0	/* C2RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C2WARNIP		IRPT_PRIORITY_0	/* C2WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3FAILIP		IRPT_PRIORITY_0	/* C3FAIL3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3WARMIP		IRPT_PRIORITY_0	/* C3WARM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3MONIP		IRPT_PRIORITY_0	/* C3MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3RDYIP		IRPT_PRIORITY_0	/* C3RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C3WARNIP		IRPT_PRIORITY_0	/* C3WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4FAILIP		IRPT_PRIORITY_0	/* C4FAIL割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4WARMIP		IRPT_PRIORITY_0	/* C4WARM割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4MONIP		IRPT_PRIORITY_0	/* C4MON割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4RDYIP		IRPT_PRIORITY_0	/* C4RDY割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C4WARNIP		IRPT_PRIORITY_0	/* C4WARN割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_WDTIP		IRPT_PRIORITY_0	/* WDT割り込み優先度レジスタ */


/*----------------------------------------------------------------------------*/
/* INT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_INT0IP	IRPT_PRIORITY_0	/* INT0割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT1IP	IRPT_PRIORITY_0	/* INT1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT2IP	IRPT_PRIORITY_0	/* INT2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT3IP	IRPT_PRIORITY_0	/* INT3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_INT4IP	IRPT_PRIORITY_0	/* INT4割り込み優先度レジスタ */

#define IRPT_USER_PRIORITY_PEVTAIP	IRPT_PRIORITY_0	/* PEVTA割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTBIP	IRPT_PRIORITY_0	/* PEVTB割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTCIP	IRPT_PRIORITY_0	/* PEVTC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTDIP	IRPT_PRIORITY_0	/* PEVTD割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTEIP	IRPT_PRIORITY_0	/* PEVTE割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTFIP	IRPT_PRIORITY_0	/* PEVTF割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* Timer割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_T1IP     IRPT_PRIORITY_2	/* T1割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CN割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CNAIP	IRPT_PRIORITY_1	/* CNA割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNBIP	IRPT_PRIORITY_1	/* CNB割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNCIP	IRPT_PRIORITY_0	/* CNC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNDIP	IRPT_PRIORITY_0	/* CND割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CNEIP	IRPT_PRIORITY_0	/* CNE割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* DMA割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_DMA0IP	IRPT_PRIORITY_0	/* DMA0割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA1IP	IRPT_PRIORITY_0	/* DMA1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA2IP	IRPT_PRIORITY_0	/* DMA2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA3IP	IRPT_PRIORITY_0	/* DMA3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA4IP	IRPT_PRIORITY_0	/* DMA4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_DMA5IP	IRPT_PRIORITY_0	/* DMA5割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CCT,CCP割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CCP1IP	IRPT_PRIORITY_0	/* CCP1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT1IP	IRPT_PRIORITY_0	/* CCT1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP2IP	IRPT_PRIORITY_0	/* CCP2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT2IP	IRPT_PRIORITY_0	/* CCT2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP3IP	IRPT_PRIORITY_0	/* CCP3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT3IP	IRPT_PRIORITY_0	/* CCT3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP4IP	IRPT_PRIORITY_0	/* CCP4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT4IP	IRPT_PRIORITY_0	/* CCT4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP5IP	IRPT_PRIORITY_0	/* CCP5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT5IP	IRPT_PRIORITY_0	/* CCT5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP6IP	IRPT_PRIORITY_0	/* CCP6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT6IP	IRPT_PRIORITY_0	/* CCT6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP7IP	IRPT_PRIORITY_0	/* CCP7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT7IP	IRPT_PRIORITY_0	/* CCT7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCP8IP	IRPT_PRIORITY_0	/* CCP8割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CCT8IP	IRPT_PRIORITY_0	/* CCT8割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* SPI割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_SPI1EIP	IRPT_PRIORITY_0	/* SPI1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI1RXIP	IRPT_PRIORITY_0	/* SPI1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI1TXIP	IRPT_PRIORITY_0	/* SPI1TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI2EIP	IRPT_PRIORITY_0	/* SPI2E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI2RXIP	IRPT_PRIORITY_0	/* SPI2RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI2TXIP	IRPT_PRIORITY_0	/* SPI2TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI3EIP	IRPT_PRIORITY_0	/* SPI3E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI3RXIP	IRPT_PRIORITY_0	/* SPI3RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SPI3TXIP	IRPT_PRIORITY_0	/* SPI3TX割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* UART割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_U1EVTIP	IRPT_PRIORITY_0	/* U1EVT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U1RXIP	IRPT_PRIORITY_0	/* U1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U1TXIP	IRPT_PRIORITY_0	/* U1TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U1EIP	IRPT_PRIORITY_0	/* U1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U2EVTIP	IRPT_PRIORITY_0	/* U2EVT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U2RXIP	IRPT_PRIORITY_0	/* U2RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U2TXIP	IRPT_PRIORITY_0	/* U2TX割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_U2EIP	IRPT_PRIORITY_0	/* U2E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U3EVTIP	IRPT_PRIORITY_0	/* U3EVT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U3RXIP	IRPT_PRIORITY_0	/* U3RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_U3TXIP	IRPT_PRIORITY_0	/* U3TX割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_U3EIP	IRPT_PRIORITY_0	/* U3E割り込み優先度レジスタ */
/*----------------------------------------------------------------------------*/
/* ECC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_ECCSBEIP	IRPT_PRIORITY_0	/* ECCSBE割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* NVM割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_NVMIP	IRPT_PRIORITY_0	/* NVM割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* BIss割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_BISS1IP	IRPT_PRIORITY_0	/* BISS1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_BISSE1IP	IRPT_PRIORITY_0	/* BISSE1割り込み優先度レジスタ */
		
/*----------------------------------------------------------------------------*/
/* I2C割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_I2C1IP	IRPT_PRIORITY_0	/* I2C1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C1EIP	IRPT_PRIORITY_0	/* I2C1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C1RXIP	IRPT_PRIORITY_0	/* I2C1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C1TXIP	IRPT_PRIORITY_0	/* I2C1TX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2IP	IRPT_PRIORITY_0	/* I2C2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2EIP	IRPT_PRIORITY_0	/* I2C2E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2RXIP	IRPT_PRIORITY_0	/* I2C2RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_I2C2TXIP	IRPT_PRIORITY_0	/* I2C2TX割り込み優先度レジスタ */
/*----------------------------------------------------------------------------*/
/* CAN割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_C1IP     IRPT_PRIORITY_0	/* C1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1RXIP	IRPT_PRIORITY_0	/* C1RX割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_C1TXIP	IRPT_PRIORITY_0	/* C1TX割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* DMT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_DMTIP	IRPT_PRIORITY_0	/* DMT割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* QEI割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_QEI1IP	IRPT_PRIORITY_0	/* QEI1割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CRC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CRCIP	IRPT_PRIORITY_0	/* CRC割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* Debug割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_ICDIP	IRPT_PRIORITY_0	/* ICD割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_JTAGIP	IRPT_PRIORITY_0	/* JTAG割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* PWM割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_PWM1IP	IRPT_PRIORITY_0	/* PWM1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM2IP	IRPT_PRIORITY_0	/* PWM2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM3IP	IRPT_PRIORITY_0	/* PWM3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM4IP	IRPT_PRIORITY_0	/* PWM4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM5IP	IRPT_PRIORITY_0	/* PWM5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM6IP	IRPT_PRIORITY_0	/* PWM6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM7IP	IRPT_PRIORITY_0	/* PWM7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PWM8IP	IRPT_PRIORITY_0	/* PWM8割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* CMP割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CMP1IP	IRPT_PRIORITY_0	/* CMP1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CMP2IP	IRPT_PRIORITY_0	/* CMP2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CMP3IP	IRPT_PRIORITY_0	/* CMP3割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* PTG割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_PTGWDTIP	IRPT_PRIORITY_0	/* PTGWDT割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG0IP	IRPT_PRIORITY_0	/* PTG0割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG1IP	IRPT_PRIORITY_0	/* PTG1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG2IP	IRPT_PRIORITY_0	/* PTG2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG3IP	IRPT_PRIORITY_0	/* PTG3割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG4IP	IRPT_PRIORITY_0	/* PTG4割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG5IP	IRPT_PRIORITY_0	/* PTG5割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG6IP	IRPT_PRIORITY_0	/* PTG6割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTG7IP	IRPT_PRIORITY_0	/* PTG7割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PTGSTPIP	IRPT_PRIORITY_0	/* PTGSTEP割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* SENT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_SENT1IP	IRPT_PRIORITY_0	/* SENT1割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SENT1EIP	IRPT_PRIORITY_0	/* SENT1E割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SENT2IP	IRPT_PRIORITY_0	/* SENT2割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_SENT2EIP	IRPT_PRIORITY_0	/* SENT2E割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* ADC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define	IRPT_USER_PRIORITY_AD1CH0IP		IRPT_PRIORITY_0	/* AD1CH0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP0IP	IRPT_PRIORITY_0	/* AD1CMP0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH1IP		IRPT_PRIORITY_0	/* AD1CH1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP1IP	IRPT_PRIORITY_0	/* AD1CMP1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH2IP		IRPT_PRIORITY_0	/* AD1CH2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP2IP	IRPT_PRIORITY_0	/* AD1CMP2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH3IP		IRPT_PRIORITY_0	/* AD1CH3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP3IP	IRPT_PRIORITY_0	/* AD1CMP3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH4IP		IRPT_PRIORITY_0	/* AD1CH4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP4IP	IRPT_PRIORITY_0	/* AD1CMP4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH5IP		IRPT_PRIORITY_0	/* AD1CH5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP5IP	IRPT_PRIORITY_0	/* AD1CMP5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH6IP		IRPT_PRIORITY_0	/* AD1CH6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP6IP	IRPT_PRIORITY_0	/* AD1CMP6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH7IP		IRPT_PRIORITY_0	/* AD1CH7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP7IP	IRPT_PRIORITY_0	/* AD1CMP7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH8IP		IRPT_PRIORITY_0	/* AD1CH8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP8IP	IRPT_PRIORITY_0	/* AD1CMP8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH9IP		IRPT_PRIORITY_0	/* AD1CH9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP9IP	IRPT_PRIORITY_0	/* AD1CMP9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH10IP	IRPT_PRIORITY_0	/* AD1CH10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP10IP	IRPT_PRIORITY_0	/* AD1CMP10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH11IP	IRPT_PRIORITY_0	/* AD1CH11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP11IP	IRPT_PRIORITY_0	/* AD1CMP11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH12IP	IRPT_PRIORITY_0	/* AD1CH12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP12IP	IRPT_PRIORITY_0	/* AD1CMP12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH13IP	IRPT_PRIORITY_0	/* AD1CH13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP13IP	IRPT_PRIORITY_0	/* AD1CMP13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH14IP	IRPT_PRIORITY_0	/* AD1CH14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP14IP	IRPT_PRIORITY_0	/* AD1CMP14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH15IP	IRPT_PRIORITY_0	/* AD1CH15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP15IP	IRPT_PRIORITY_0	/* AD1CMP15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH16IP	IRPT_PRIORITY_0	/* AD1CH16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP16IP	IRPT_PRIORITY_0	/* AD1CMP16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH17IP	IRPT_PRIORITY_0	/* AD1CH17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP17IP	IRPT_PRIORITY_0	/* AD1CMP17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH18IP	IRPT_PRIORITY_0	/* AD1CH18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP18IP	IRPT_PRIORITY_0	/* AD1CMP18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CH19IP	IRPT_PRIORITY_0	/* AD1CH19IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD1CMP19IP	IRPT_PRIORITY_0	/* AD1CMP19IP割り込み優先度レジスタ */

#define	IRPT_USER_PRIORITY_AD2CH0IP		IRPT_PRIORITY_0	/* AD2CH0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP0IP	IRPT_PRIORITY_0	/* AD2CMP0IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH1IP		IRPT_PRIORITY_0	/* AD2CH1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP1IP	IRPT_PRIORITY_0	/* AD2CMP1IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH2IP		IRPT_PRIORITY_0	/* AD2CH2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP2IP	IRPT_PRIORITY_0	/* AD2CMP2IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH3IP		IRPT_PRIORITY_0	/* AD2CH3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP3IP	IRPT_PRIORITY_0	/* AD2CMP3IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH4IP		IRPT_PRIORITY_0	/* AD2CH4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP4IP	IRPT_PRIORITY_0	/* AD2CMP4IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH5IP		IRPT_PRIORITY_0	/* AD2CH5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP5IP	IRPT_PRIORITY_0	/* AD2CMP5IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH6IP		IRPT_PRIORITY_0	/* AD2CH6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP6IP	IRPT_PRIORITY_0	/* AD2CMP6IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH7IP		IRPT_PRIORITY_0	/* AD2CH7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP7IP	IRPT_PRIORITY_0	/* AD2CMP7IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH8IP		IRPT_PRIORITY_0	/* AD2CH8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP8IP	IRPT_PRIORITY_0	/* AD2CMP8IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH9IP		IRPT_PRIORITY_0	/* AD2CH9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP9IP	IRPT_PRIORITY_0	/* AD2CMP9IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH10IP	IRPT_PRIORITY_0	/* AD2CH10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP10IP	IRPT_PRIORITY_0	/* AD2CMP10IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH11IP	IRPT_PRIORITY_0	/* AD2CH11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP11IP	IRPT_PRIORITY_0	/* AD2CMP11IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH12IP	IRPT_PRIORITY_0	/* AD2CH12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP12IP	IRPT_PRIORITY_0	/* AD2CMP12IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH13IP	IRPT_PRIORITY_0	/* AD2CH13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP13IP	IRPT_PRIORITY_0	/* AD2CMP13IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH14IP	IRPT_PRIORITY_0	/* AD2CH14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP14IP	IRPT_PRIORITY_0	/* AD2CMP14IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH15IP	IRPT_PRIORITY_0	/* AD2CH15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP15IP	IRPT_PRIORITY_0	/* AD2CMP15IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH16IP	IRPT_PRIORITY_0	/* AD2CH16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP16IP	IRPT_PRIORITY_0	/* AD2CMP16IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH17IP	IRPT_PRIORITY_0	/* AD2CH17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP17IP	IRPT_PRIORITY_0	/* AD2CMP17IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH18IP	IRPT_PRIORITY_0	/* AD2CH18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP18IP	IRPT_PRIORITY_0	/* AD2CMP18IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CH19IP	IRPT_PRIORITY_0	/* AD2CH19IP割り込み優先度レジスタ */
#define	IRPT_USER_PRIORITY_AD2CMP19IP	IRPT_PRIORITY_0	/* AD2CMP19IP割り込み優先度レジスタ */
/*----------------------------------------------------------------------------*/
/* CLC割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_CLC1PIP		IRPT_PRIORITY_0	/* CLC1P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC2PIP		IRPT_PRIORITY_0	/* CLC2P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC3PIP		IRPT_PRIORITY_0	/* CLC3P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC4PIP		IRPT_PRIORITY_0	/* CLC4P割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC1NIP		IRPT_PRIORITY_0	/* CLC1N割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC2NIP		IRPT_PRIORITY_0	/* CLC2N割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC3NIP		IRPT_PRIORITY_0	/* CLC3N割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_CLC4NIP		IRPT_PRIORITY_0	/* CLC4N割り込み優先度レジスタ */

/*----------------------------------------------------------------------------*/
/* IOMON優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_IOM1IP	IRPT_PRIORITY_0	/* IOM1IP割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_IOM2IP	IRPT_PRIORITY_0	/* IOM2IP割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_IOM3IP	IRPT_PRIORITY_0	/* IOM3IP割り込み優先度レジスタ*/
#define IRPT_USER_PRIORITY_IOM4IP	IRPT_PRIORITY_0	/* IOM4IP割り込み優先度レジスタ*/
/*----------------------------------------------------------------------------*/
/* PEVT割り込み優先度 */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_PRIORITY_PEVTAIP	IRPT_PRIORITY_0	/* PEVTA割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTBIP	IRPT_PRIORITY_0	/* PEVTB割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTCIP	IRPT_PRIORITY_0	/* PEVTC割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTDIP	IRPT_PRIORITY_0	/* PEVTD割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTEIP	IRPT_PRIORITY_0	/* PEVTE割り込み優先度レジスタ */
#define IRPT_USER_PRIORITY_PEVTFIP	IRPT_PRIORITY_0	/* PEVTF割り込み優先度レジスタ */

#endif

/*----------------------------------------------------------------------------*/
/* IFS0レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS0	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS0レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS0_CPUFPUIF	( 0U )
#define IRPT_USER_IFS0_XRAMECCIF	( 0U )
#define IRPT_USER_IFS0_YRAMECCIF	( 0U )
#define IRPT_USER_IFS0_PBERRIF	( 0U )
#define IRPT_USER_IFS0_NVMECCIF	( 0U )
#define IRPT_USER_IFS0_NVMIF	( 0U )
#define IRPT_USER_IFS0_NVMCRCIF	( 0U )
#define IRPT_USER_IFS0_CLKFAILIF	( 0U )
#define IRPT_USER_IFS0_CLKERRIF	( 0U )
#define IRPT_USER_IFS0_C1FAILIF	( 0U )
#define IRPT_USER_IFS0_C1WARNIF	( 0U )
#define IRPT_USER_IFS0_C1MONIF	( 0U )
#define IRPT_USER_IFS0_C1RDYIF	( 0U )
#define IRPT_USER_IFS0_C2FAILIF	( 0U )
#define IRPT_USER_IFS0_C2WARNIF	( 0U )
#define IRPT_USER_IFS0_C2MONIF	( 0U )
#define IRPT_USER_IFS0_C2RDYIF	( 0U )
#define IRPT_USER_IFS0_C3FAILIF	( 0U )
#define IRPT_USER_IFS0_C3WARNIF	( 0U )
#define IRPT_USER_IFS0_C3MONIF	( 0U )
#define IRPT_USER_IFS0_C3RDYIF	( 0U )
#define IRPT_USER_IFS0_C4FAILIF	( 0U )
#define IRPT_USER_IFS0_C4WARNIF	( 0U )
#define IRPT_USER_IFS0_C4MONIF	( 0U )
#define IRPT_USER_IFS0_C4RDYIF	( 0U )
#define IRPT_USER_IFS0_WDTIF	( 0U )
#define IRPT_USER_IFS0_CRYPT1IF	( 0U )
#define IRPT_USER_IFS0_CRYPT2IF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS1レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS1	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS1レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS1_CRYPT3IF	( 0U )
#define IRPT_USER_IFS1_INT0IF	( 0U )
#define IRPT_USER_IFS1_INT1IF	( 0U )
#define IRPT_USER_IFS1_INT2IF	( 0U )
#define IRPT_USER_IFS1_INT3IF	( 0U )
#define IRPT_USER_IFS1_INT4IF	( 0U )
#define IRPT_USER_IFS1_PEVTAIF	( 0U )
#define IRPT_USER_IFS1_PEVTBIF	( 0U )
#define IRPT_USER_IFS1_PEVTCIF	( 0U )
#define IRPT_USER_IFS1_PEVTDIF	( 0U )
#define IRPT_USER_IFS1_PEVTEIF	( 0U )
#define IRPT_USER_IFS1_PEVTFIF	( 0U )
#define IRPT_USER_IFS1_PWM1IF	( 0U )
#define IRPT_USER_IFS1_PWM2IF	( 0U )
#define IRPT_USER_IFS1_PWM3IF	( 0U )
#define IRPT_USER_IFS1_PWM4IF	( 0U )
#define IRPT_USER_IFS1_T1IF	( 0U )
#define IRPT_USER_IFS1_T2IF	( 0U )
#define IRPT_USER_IFS1_T3IF	( 0U )
#define IRPT_USER_IFS1_CCT1IF	( 0U )
#define IRPT_USER_IFS1_CCP1IF	( 0U )
#define IRPT_USER_IFS1_CCT2IF	( 0U )
#define IRPT_USER_IFS1_CCP2IF	( 0U )
#define IRPT_USER_IFS1_CCT3IF	( 0U )
#define IRPT_USER_IFS1_CCP3IF	( 0U )
#define IRPT_USER_IFS1_CCT4IF	( 0U )
#define IRPT_USER_IFS1_CCP4IF	( 0U )
#define IRPT_USER_IFS1_C1RXIF	( 0U )
#define IRPT_USER_IFS1_C1TXIF	( 0U )
#define IRPT_USER_IFS1_C1IF	( 0U )
#define IRPT_USER_IFS1_C2RXIF	( 0U )
#define IRPT_USER_IFS1_C2TXIF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS2レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS2	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS2レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS2_C2IF	( 0U )
#define IRPT_USER_IFS2_SPI1RXIF	( 0U )
#define IRPT_USER_IFS2_SPI1TXIF	( 0U )
#define IRPT_USER_IFS2_SPI1EIF	( 0U )
#define IRPT_USER_IFS2_SPI2RXIF	( 0U )
#define IRPT_USER_IFS2_SPI2TXIF	( 0U )
#define IRPT_USER_IFS2_SPI2EIF	( 0U )
#define IRPT_USER_IFS2_SPI3RXIF	( 0U )
#define IRPT_USER_IFS2_SPI3TXIF	( 0U )
#define IRPT_USER_IFS2_SPI3EIF	( 0U )
#define IRPT_USER_IFS2_SPI4RXIF	( 0U )
#define IRPT_USER_IFS2_SPI4TXIF	( 0U )
#define IRPT_USER_IFS2_SPI4EIF	( 0U )
#define IRPT_USER_IFS2_DMA0IF	( 0U )
#define IRPT_USER_IFS2_DMA1IF	( 0U )
#define IRPT_USER_IFS2_DMA2IF	( 0U )
#define IRPT_USER_IFS2_DMA3IF	( 0U )
#define IRPT_USER_IFS2_CMP1IF	( 0U )
#define IRPT_USER_IFS2_CMP2IF	( 0U )
#define IRPT_USER_IFS2_CMP3IF	( 0U )
#define IRPT_USER_IFS2_CMP4IF	( 0U )
#define IRPT_USER_IFS2_I2C1EIF	( 0U )
#define IRPT_USER_IFS2_I2C1IF	( 0U )
#define IRPT_USER_IFS2_I2C1RXIF	( 0U )
#define IRPT_USER_IFS2_I2C1TXIF	( 0U )
#define IRPT_USER_IFS2_I2C2EIF	( 0U )
#define IRPT_USER_IFS2_I2C2IF	( 0U )
#define IRPT_USER_IFS2_I2C2RXIF	( 0U )
#define IRPT_USER_IFS2_I2C2TXIF	( 0U )
#define IRPT_USER_IFS2_I2C3EIF	( 0U )
#define IRPT_USER_IFS2_I2C3IF	( 0U )
#define IRPT_USER_IFS2_I2C3RXIF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS3レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS3	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS3レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS3_I2C3TXIF	( 0U )
#define IRPT_USER_IFS3_U1RXIF	( 0U )
#define IRPT_USER_IFS3_U1TXIF	( 0U )
#define IRPT_USER_IFS3_U1EIF	( 0U )
#define IRPT_USER_IFS3_U1EVTIF	( 0U )
#define IRPT_USER_IFS3_U2RXIF	( 0U )
#define IRPT_USER_IFS3_U2TXIF	( 0U )
#define IRPT_USER_IFS3_U2EIF	( 0U )
#define IRPT_USER_IFS3_U2EVTIF	( 0U )
#define IRPT_USER_IFS3_U3RXIF	( 0U )
#define IRPT_USER_IFS3_U3TXIF	( 0U )
#define IRPT_USER_IFS3_U3EIF	( 0U )
#define IRPT_USER_IFS3_U3EVTIF	( 0U )
#define IRPT_USER_IFS3_SENT1IF	( 0U )
#define IRPT_USER_IFS3_SENT1EIF	( 0U )
#define IRPT_USER_IFS3_SENT2IF	( 0U )
#define IRPT_USER_IFS3_SENT2EIF	( 0U )
#define IRPT_USER_IFS3_DMA4IF	( 0U )
#define IRPT_USER_IFS3_DMA5IF	( 0U )
#define IRPT_USER_IFS3_DMA6IF	( 0U )
#define IRPT_USER_IFS3_DMA7IF	( 0U )
#define IRPT_USER_IFS3_CNAIF	( 0U )
#define IRPT_USER_IFS3_CNBIF	( 0U )
#define IRPT_USER_IFS3_CNCIF	( 0U )
#define IRPT_USER_IFS3_CNDIF	( 0U )
#define IRPT_USER_IFS3_CCT5IF	( 0U )
#define IRPT_USER_IFS3_CCP5IF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS4レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS4	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS4レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS4_CCT6IF	( 0U )
#define IRPT_USER_IFS4_CCP6IF	( 0U )
#define IRPT_USER_IFS4_CCT7IF	( 0U )
#define IRPT_USER_IFS4_CCP7IF	( 0U )
#define IRPT_USER_IFS4_CCT8IF	( 0U )
#define IRPT_USER_IFS4_CCP8IF	( 0U )
#define IRPT_USER_IFS4_CCT9IF	( 0U )
#define IRPT_USER_IFS4_CCP9IF	( 0U )
#define IRPT_USER_IFS4_QEI1IF	( 0U )
#define IRPT_USER_IFS4_QEI2IF	( 0U )
#define IRPT_USER_IFS4_QEI3IF	( 0U )
#define IRPT_USER_IFS4_QEI4IF	( 0U )
#define IRPT_USER_IFS4_BISS1EIF	( 0U )
#define IRPT_USER_IFS4_BISS1IF	( 0U )
#define IRPT_USER_IFS4_CRCIF	( 0U )
#define IRPT_USER_IFS4_ICDIF	( 0U )
#define IRPT_USER_IFS4_PTGSTEPIF	( 0U )
#define IRPT_USER_IFS4_PTGWDTIF	( 0U )
#define IRPT_USER_IFS4_PTG0IF	( 0U )
#define IRPT_USER_IFS4_PTG1IF	( 0U )
#define IRPT_USER_IFS4_PTG2IF	( 0U )
#define IRPT_USER_IFS4_PTG3IF	( 0U )
#define IRPT_USER_IFS4_PWM5IF	( 0U )
#define IRPT_USER_IFS4_PWM6IF	( 0U )
#define IRPT_USER_IFS4_PWM7IF	( 0U )
#define IRPT_USER_IFS4_PWM8IF	( 0U )
#define IRPT_USER_IFS4_AD1CH0IF	( 0U )
#define IRPT_USER_IFS4_AD1CMP0IF	( 0U )
#define IRPT_USER_IFS4_AD1CH1IF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS5レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS5	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS5レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS5_AD1CMP1IF	( 0U )
#define IRPT_USER_IFS5_AD1CH2IF	( 0U )
#define IRPT_USER_IFS5_AD1CMP2IF	( 0U )
#define IRPT_USER_IFS5_AD1CH3IF	( 0U )
#define IRPT_USER_IFS5_AD1CMP3IF	( 0U )
#define IRPT_USER_IFS5_AD1CH4IF	( 0U )
#define IRPT_USER_IFS5_AD1CMP4IF	( 0U )
#define IRPT_USER_IFS5_AD1CH5IF	( 0U )
#define IRPT_USER_IFS5_AD1CMP5IF	( 0U )
#define IRPT_USER_IFS5_AD1CH6IF	( 0U )
#define IRPT_USER_IFS5_AD1CMP6IF	( 0U )
#define IRPT_USER_IFS5_AD1CH7IF	( 0U )
#define IRPT_USER_IFS5_AD1CMP7IF	( 0U )
#define IRPT_USER_IFS5_AD2CH0IF	( 0U )
#define IRPT_USER_IFS5_AD2CMP0IF	( 0U )
#define IRPT_USER_IFS5_AD2CH1IF	( 0U )
#define IRPT_USER_IFS5_AD2CMP1IF	( 0U )
#define IRPT_USER_IFS5_AD2CH2IF	( 0U )
#define IRPT_USER_IFS5_AD2CMP2IF	( 0U )
#define IRPT_USER_IFS5_AD2CH3IF	( 0U )
#define IRPT_USER_IFS5_AD2CMP3IF	( 0U )
#define IRPT_USER_IFS5_AD2CH4IF	( 0U )
#define IRPT_USER_IFS5_AD2CMP4IF	( 0U )
#define IRPT_USER_IFS5_AD2CH5IF	( 0U )
#define IRPT_USER_IFS5_AD2CMP5IF	( 0U )
#define IRPT_USER_IFS5_AD2CH6IF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS6レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS6	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS6レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS6_AD2CMP6IF	( 0U )
#define IRPT_USER_IFS6_AD2CH7IF	( 0U )
#define IRPT_USER_IFS6_AD2CMP7IF	( 0U )
#define IRPT_USER_IFS6_AD3CH0IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP0IF	( 0U )
#define IRPT_USER_IFS6_AD3CH1IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP1IF	( 0U )
#define IRPT_USER_IFS6_AD3CH2IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP2IF	( 0U )
#define IRPT_USER_IFS6_AD3CH3IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP3IF	( 0U )
#define IRPT_USER_IFS6_AD3CH4IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP4IF	( 0U )
#define IRPT_USER_IFS6_AD3CH5IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP5IF	( 0U )
#define IRPT_USER_IFS6_AD3CH6IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP6IF	( 0U )
#define IRPT_USER_IFS6_AD3CH7IF	( 0U )
#define IRPT_USER_IFS6_AD3CMP7IF	( 0U )
#define IRPT_USER_IFS6_AD4CH0IF	( 0U )
#define IRPT_USER_IFS6_AD4CMP0IF	( 0U )
#define IRPT_USER_IFS6_AD4CH1IF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS7レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS7	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS7レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS7_AD4CMP1IF	( 0U )
#define IRPT_USER_IFS7_AD4CH2IF	( 0U )
#define IRPT_USER_IFS7_AD4CMP2IF	( 0U )
#define IRPT_USER_IFS7_AD4CH3IF	( 0U )
#define IRPT_USER_IFS7_AD4CMP3IF	( 0U )
#define IRPT_USER_IFS7_AD4CH4IF	( 0U )
#define IRPT_USER_IFS7_AD4CMP4IF	( 0U )
#define IRPT_USER_IFS7_AD4CH5IF	( 0U )
#define IRPT_USER_IFS7_AD4CMP5IF	( 0U )
#define IRPT_USER_IFS7_AD4CH6IF	( 0U )
#define IRPT_USER_IFS7_AD4CMP6IF	( 0U )
#define IRPT_USER_IFS7_AD4CH7IF		( 0U )
#define IRPT_USER_IFS7_AD4CMP7IF	( 0U )
#define IRPT_USER_IFS7_AD5CH0IF	( 0U )
#define IRPT_USER_IFS7_AD5CMP0IF	( 0U )
#define IRPT_USER_IFS7_AD5CH1IF	( 0U )
#define IRPT_USER_IFS7_AD5CMP1IF	( 0U )
#define IRPT_USER_IFS7_AD5CH2IF	( 0U )
#define IRPT_USER_IFS7_AD5CMP2IF	( 0U )
#define IRPT_USER_IFS7_AD5CH3IF	( 0U )
#define IRPT_USER_IFS7_AD5CMP3IF	( 0U )
#define IRPT_USER_IFS7_AD5CH4IF	( 0U )
#define IRPT_USER_IFS7_AD5CMP4IF	( 0U )
#define IRPT_USER_IFS7_AD5CH5IF	( 0U )
#define IRPT_USER_IFS7_AD5CMP5IF	( 0U )
#define IRPT_USER_IFS7_AD5CH6IF	( 0U )
#define IRPT_USER_IFS7_AD5CMP6IF	( 0U )
#define IRPT_USER_IFS7_AD5CH7IF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS8レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS8	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS8レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS8_AD5CMP7IF	( 0U )
#define IRPT_USER_IFS8_AD5CH8IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP8IF	( 0U )
#define IRPT_USER_IFS8_AD5CH9IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP9IF	( 0U )
#define IRPT_USER_IFS8_AD5CH10IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP10IF	( 0U )
#define IRPT_USER_IFS8_AD5CH11IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP11IF	( 0U )
#define IRPT_USER_IFS8_AD5CH12IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP12IF	( 0U )
#define IRPT_USER_IFS8_AD5CH13IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP13IF	( 0U )
#define IRPT_USER_IFS8_AD5CH14IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP14IF	( 0U )
#define IRPT_USER_IFS8_AD5CH15IF	( 0U )
#define IRPT_USER_IFS8_AD5CMP15IF	( 0U )
#define IRPT_USER_IFS8_CMP5IF	( 0U )
#define IRPT_USER_IFS8_CMP6IF	( 0U )
#define IRPT_USER_IFS8_CMP7IF	( 0U )
#define IRPT_USER_IFS8_CMP8IF	( 0U )
#define IRPT_USER_IFS8_CLC1PIF	( 0U )
#define IRPT_USER_IFS8_CLC1NIF	( 0U )
#define IRPT_USER_IFS8_CLC2PIF	( 0U )
#define IRPT_USER_IFS8_CLC2NIF	( 0U )
#define IRPT_USER_IFS8_CLC3PIF	( 0U )
#define IRPT_USER_IFS8_CLC3NIF	( 0U )
#define IRPT_USER_IFS8_CLC4PIF	( 0U )
#define IRPT_USER_IFS8_CLC4NIF	( 0U )
#define IRPT_USER_IFS8_CLC5PIF	( 0U )
#define IRPT_USER_IFS8_CLC5NIF	( 0U )
#define IRPT_USER_IFS8_CLC6PIF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS9レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS9	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS9レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS9_CLC6NIF	( 0U )
#define IRPT_USER_IFS9_CLC7PIF	( 0U )
#define IRPT_USER_IFS9_CLC7NIF	( 0U )
#define IRPT_USER_IFS9_CLC8PIF	( 0U )
#define IRPT_USER_IFS9_CLC8NIF	( 0U )
#define IRPT_USER_IFS9_CLC9PIF	( 0U )
#define IRPT_USER_IFS9_CLC9NIF	( 0U )
#define IRPT_USER_IFS9_CLC10PIF	( 0U )
#define IRPT_USER_IFS9_CLC10NIF	( 0U )
#define IRPT_USER_IFS9_CNEIF	( 0U )
#define IRPT_USER_IFS9_CNFIF	( 0U )
#define IRPT_USER_IFS9_CNGIF	( 0U )
#define IRPT_USER_IFS9_CNHIF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS10レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS10	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS10レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS10_ITCIF	( 0U )
#define IRPT_USER_IFS10_IOM1IF	( 0U )
#define IRPT_USER_IFS10_IOM2IF	( 0U )
#define IRPT_USER_IFS10_IOM3IF	( 0U )
#define IRPT_USER_IFS10_IOM4IF	( 0U )
#define IRPT_USER_IFS10_IOM5IF	( 0U )
#define IRPT_USER_IFS10_IOM6IF	( 0U )
#define IRPT_USER_IFS10_IOM7IF	( 0U )
#define IRPT_USER_IFS10_IOM8IF	( 0U )
#define IRPT_USER_IFS10_IOM9IF	( 0U )
#define IRPT_USER_IFS10_IOM10IF	( 0U )
#define IRPT_USER_IFS10_IOM11IF	( 0U )
#define IRPT_USER_IFS10_IOM12IF	( 0U )
#define IRPT_USER_IFS10_IOM13IF	( 0U )
#define IRPT_USER_IFS10_IOM14IF	( 0U )
#define IRPT_USER_IFS10_IOM15IF	( 0U )
#define IRPT_USER_IFS10_IOM16IF	( 0U )
#define IRPT_USER_IFS10_APWM1IF	( 0U )
#define IRPT_USER_IFS10_APWM2IF	( 0U )
#define IRPT_USER_IFS10_APWM3IF	( 0U )
#define IRPT_USER_IFS10_APWM4IF	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS11レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS11	( 0U )
/*----------------------------------------------------------------------------*/
/* IFS11レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IFS11_APEVTAIF	( 0U )
#define IRPT_USER_IFS11_APEVTBIF	( 0U )
#define IRPT_USER_IFS11_APEVTCIF	( 0U )
#define IRPT_USER_IFS11_APEVTDIF	( 0U )

/*----------------------------------------------------------------------------*/
/* IEC0レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC0_CPUFPUIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_XRAMECCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_YRAMECCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_PBERRIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_NVMECCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_NVMIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_NVMCRCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_CLKFAILIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_CLKERRIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C1FAILIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C1WARNIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C1MONIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C1RDYIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C2FAILIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C2WARNIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C2MONIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C2RDYIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C3FAILIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C3WARNIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C3MONIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C3RDYIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C4FAILIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C4WARNIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C4MONIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_C4RDYIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_WDTIE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_CRYPT1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC0_CRYPT2IE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC1レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC1_CRYPT3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_INT0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_INT1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_INT2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_INT3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_INT4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PEVTAIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PEVTBIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PEVTCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PEVTDIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PEVTEIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PEVTFIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PWM1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PWM2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PWM3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_PWM4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_T1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_T2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_T3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCT1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCP1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCT2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCP2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCT3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCP3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCT4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_CCP4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_C1RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_C1TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_C1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_C2RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC1_C2TXIE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC2レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC2_C2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI1RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI1TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI1EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI2RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI2TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI2EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI3RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI3TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI3EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI4RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI4TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_SPI4EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_DMA0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_DMA1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_DMA2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_DMA3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_CMP1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_CMP2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_CMP3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_CMP4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C1EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C1RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C1TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C2EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C2RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C2TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C3EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC2_I2C3RXIE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC3レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC3_I2C3TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U1RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U1TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U1EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U1EVTIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U2RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U2TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U2EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U2EVTIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U3RXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U3TXIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U3EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_U3EVTIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_SENT1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_SENT1EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_SENT2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_SENT2EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_DMA4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_DMA5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_DMA6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_DMA7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_CNAIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_CNBIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_CNCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_CNDIE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_CCT5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC3_CCP5IE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC4レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC4_CCT6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CCP6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CCT7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CCP7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CCT8IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CCP8IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CCT9IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CCP9IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_QEI1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_QEI2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_QEI3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_QEI4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_BISS1EIE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_BISS1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_CRCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_ICDIE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PTGSTEPIE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PTGWDTIE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PTG0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PTG1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PTG2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PTG3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PWM5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PWM6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PWM7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_PWM8IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_AD1CH0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_AD1CMP0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC4_AD1CH1IE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC5レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC5_AD1CMP1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CH2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CMP2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CH3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CMP3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CH4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CMP4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CH5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CMP5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CH6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CMP6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CH7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD1CMP7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CH0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CMP0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CH1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CMP1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CH2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CMP2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CH3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CMP3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CH4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CMP4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CH5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CMP5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC5_AD2CH6IE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC6レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC6_AD2CMP6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD2CH7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD2CMP7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CH7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD3CMP7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD4CH0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD4CMP0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC6_AD4CH1IE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC7レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC7_AD4CMP1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CH2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CMP2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CH3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CMP3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CH4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CMP4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CH5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CMP5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CH6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CMP6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CH7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD4CMP7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CMP0IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CMP1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CMP2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CMP3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CMP4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CMP5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CMP6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC7_AD5CH7IE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC8レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC8_AD5CMP7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH8IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP8IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH9IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP9IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH10IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP10IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH11IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP11IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH12IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP12IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH13IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP13IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH14IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP14IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CH15IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_AD5CMP15IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CMP5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CMP6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CMP7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CMP8IE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC1PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC1NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC2PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC2NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC3PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC3NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC4PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC4NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC5PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC5NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC8_CLC6PIE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC9レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC9_CLC6NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC7PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC7NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC8PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC8NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC9PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC9NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC10PIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CLC10NIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CNEIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CNFIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CNGIE	( IRPT_DISABLE )
#define IRPT_USER_IEC9_CNHIE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC10レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC10_ITCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM4IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM5IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM6IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM7IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM8IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM9IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM10IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM11IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM12IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM13IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM14IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM15IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_IOM16IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_APWM1IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_APWM2IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_APWM3IE	( IRPT_DISABLE )
#define IRPT_USER_IEC10_APWM4IE	( IRPT_DISABLE )

/*----------------------------------------------------------------------------*/
/* IEC11レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IEC11_APEVTAIE	( IRPT_DISABLE )
#define IRPT_USER_IEC11_APEVTBIE	( IRPT_DISABLE )
#define IRPT_USER_IEC11_APEVTCIE	( IRPT_DISABLE )
#define IRPT_USER_IEC11_APEVTDIE	( IRPT_DISABLE )
/*----------------------------------------------------------------------------*/
/* IPC0レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC0	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC0レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC0_CPUFPUIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC0_XRAMECCIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC0_YRAMECCIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC0_PBERRIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC0_NVMECCIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC0_NVMIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC0_NVMCRCIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC1レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC1	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC1レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC1_CLKFAILIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC1_CLKERRIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC1_C1FAILIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC1_C1WARNIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC1_C1MONIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC1_C1RDYIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC1_C2FAILIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC2レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC2	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC2レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC2_C2WARNIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC2_C2MONIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC2_C2RDYIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC2_C3FAILIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC2_C3WARNIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC2_C3MONIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC2_C3RDYIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC2_C4FAILIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC3レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC3	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC3レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC3_C4WARNIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC3_C4MONIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC3_C4RDYIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC3_WDTIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC3_CRYPT1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC3_CRYPT2IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC4レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC4	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC4レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC4_CRYPT3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC4_INT0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC4_INT1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC4_INT2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC4_INT3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC4_INT4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC4_PEVTAIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC4_PEVTBIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC5レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC5	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC5レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC5_PEVTCIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC5_PEVTDIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC5_PEVTEIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC5_PEVTFIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC5_PWM1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC5_PWM2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC5_PWM3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC5_PWM4IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC6レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC6	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC6レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC6_T1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC6_T2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC6_T3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC6_CCT1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC6_CCP1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC6_CCT2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC6_CCP2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC6_CCT3IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC7レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC7	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC7レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC7_CCP3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC7_CCT4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC7_CCP4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC7_C1RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC7_C1TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC7_C1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC7_C2RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC7_C2TXIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC8レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC8	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC8レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC8_C2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC8_SPI1RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC8_SPI1TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC8_SPI1EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC8_SPI2RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC8_SPI2TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC8_SPI2EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC8_SPI3RXIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC9レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC9	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC9レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC9_SPI3TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC9_SPI3EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC9_SPI4RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC9_SPI4TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC9_SPI4EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC9_DMA0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC9_DMA1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC9_DMA2IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC10レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC10	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC10レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC10_DMA3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC10_CMP1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC10_CMP2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC10_CMP3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC10_CMP4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC10_I2C1EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC10_I2C1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC10_I2C1RXIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC11レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC11	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC11レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC11_I2C1TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC11_I2C2EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC11_I2C2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC11_I2C2RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC11_I2C2TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC11_I2C3EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC11_I2C3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC11_I2C3RXIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC12レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC12	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC12レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC12_I2C3TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC12_U1RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC12_U1TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC12_U1EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC12_U1EVTIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC12_U2RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC12_U2TXIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC13レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC13	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC13レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC13_U2EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC13_U2EVTIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC13_U3RXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC13_U3TXIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC13_U3EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC13_U3EVTIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC14レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC14	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC14レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC14_SENT1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC14_SENT1EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC14_SENT2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC14_SENT2EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC14_DMA4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC14_DMA5IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC15レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC15	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC15レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC15_DMA6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC15_DMA7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC15_CNAIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC15_CNBIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC15_CNCIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC15_CNDIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC15_CCT5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC15_CCP5IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC16レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC16	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC16レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC16_CCT6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC16_CCP6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC16_CCT7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC16_CCP7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC16_CCT8IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC16_CCP8IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC16_CCT9IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC16_CCP9IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC17レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC17	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC17レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC17_QEI1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC17_QEI2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC17_QEI3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC17_QEI4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC17_BISS1EIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC17_BISS1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC17_CRCIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC17_ICDIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC18レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC18	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC18レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC18_PTGSTEPIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC18_PTGWDTIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC18_PTG0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC18_PTG1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC18_PTG2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC18_PTG3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC18_PWM5IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC19レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC19	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC19レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC19_PWM6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC19_PWM7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC19_PWM8IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC19_AD1CH0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC19_AD1CMP0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC19_AD1CH1IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC20レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC20	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC20レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC20_AD1CMP1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC20_AD1CH2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC20_AD1CMP2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC20_AD1CH3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC20_AD1CMP3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC20_AD1CH4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC20_AD1CMP4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC20_AD1CH5IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC21レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC21	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC21レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC21_AD1CMP5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC21_AD1CH6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC21_AD1CMP6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC21_AD1CH7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC21_AD1CMP7IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC22レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC22	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC22レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC22_AD2CH0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC22_AD2CMP0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC22_AD2CH1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC22_AD2CMP1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC22_AD2CH2IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC23レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC23	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC23レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC23_AD2CMP2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC23_AD2CH3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC23_AD2CMP3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC23_AD2CH4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC23_AD2CMP4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC23_AD2CH5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC23_AD2CMP5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC23_AD2CH6IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC24レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC24	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC24レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC24_AD2CMP6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC24_AD2CH7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC24_AD2CMP7IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC25レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC25	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC25レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC25_AD3CH0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC25_AD3CMP0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC25_AD3CH1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC25_AD3CMP1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC25_AD3CH2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC25_AD3CMP2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC25_AD3CH3IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC26レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC26	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC26レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC26_AD3CMP3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC26_AD3CH4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC26_AD3CMP4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC26_AD3CH5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC26_AD3CMP5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC26_AD3CH6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC26_AD3CMP6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC26_AD3CH7IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC27レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC27	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC27レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC27_AD3CMP7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC27_AD4CH0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC27_AD4CMP0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC27_AD4CH1IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC28レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC28	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC28レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC28_AD4CMP1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC28_AD4CH2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC28_AD4CMP2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC28_AD4CH3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC28_AD4CMP3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC28_AD4CH4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC28_AD4CMP4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC28_AD4CH5IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC29レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC29	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC29レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC29_AD4CMP5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC29_AD4CH6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC29_AD4CMP6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC29_AD4CH7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC29_AD4CMP7IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC30レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC30	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC30レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC30_AD5CH0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC30_AD5CMP0IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC30_AD5CH1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC30_AD5CMP1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC30_AD5CH2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC30_AD5CMP2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC30_AD5CH3IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC31レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC31	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC31レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC31_AD5CMP3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC31_AD5CH4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC31_AD5CMP4IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC31_AD5CH5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC31_AD5CMP5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC31_AD5CH6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC31_AD5CMP6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC31_AD5CH7IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC32レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC32	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC32レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC32_AD5CMP7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC32_AD5CH8IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC32_AD5CMP8IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC32_AD5CH9IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC32_AD5CMP9IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC32_AD5CH10IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC32_AD5CMP10IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC32_AD5CH11IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC33レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC33	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC33レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC33_AD5CMP11IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC33_AD5CH12IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC33_AD5CMP12IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC33_AD5CH13IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC33_AD5CMP13IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC33_AD5CH14IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC33_AD5CMP14IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC33_AD5CH15IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC34レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC34	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC34レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC34_AD5CMP15IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC34_CMP5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC34_CMP6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC34_CMP7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC34_CMP8IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC34_CLC1PIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC34_CLC1NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC34_CLC2PIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC35レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC35	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC35レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC35_CLC2NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC35_CLC3PIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC35_CLC3NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC35_CLC4PIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC35_CLC4NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC35_CLC5PIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC35_CLC5NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC35_CLC6PIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC36レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC36	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC36レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC36_CLC6NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC36_CLC7PIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC36_CLC7NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC36_CLC8PIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC36_CLC8NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC36_CLC9PIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC36_CLC9NIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC36_CLC10PIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC37レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC37	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC37レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC37_CLC10NIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC39レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC39	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC39レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC39_CNEIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC39_CNFIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC39_CNGIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC39_CNHIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC40レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC40	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC40レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC40_ITCIP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC41レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC41	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC41レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC41_IOM1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC41_IOM2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC41_IOM3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC41_IOM4IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC42レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC42	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC42レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC42_IOM5IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC42_IOM6IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC42_IOM7IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC42_IOM8IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC42_IOM9IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC42_IOM10IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC42_IOM11IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC42_IOM12IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC43レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC43	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC43レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC43_IOM13IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC43_IOM14IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC43_IOM15IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC43_IOM16IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC43_APWM1IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC43_APWM2IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC43_APWM3IP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC43_APWM4IP	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC44レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC44	( IRPT_PRIORITY_0 )
/*----------------------------------------------------------------------------*/
/* IPC44レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IPC44_APEVTAIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC44_APEVTBIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC44_APEVTCIP	( IRPT_PRIORITY_0 )
#define IRPT_USER_IPC44_APEVTDIP	( IRPT_PRIORITY_0 )



/*----------------------------------------------------------------------------*/
/* INTCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_INTCON1_BADOPERR	( 0U )
#define IRPT_USER_INTCON1_ADDRERR	( 0U )
#define IRPT_USER_INTCON1_STKERR	( 0U )
#define IRPT_USER_INTCON1_GIE	( 0U )
#define IRPT_USER_INTCON1_NSTDIS	( 0U )

/*----------------------------------------------------------------------------*/
/* INTCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_INTCON2_INT0EP	( 0U )
#define IRPT_USER_INTCON2_INT1EP	( 0U )
#define IRPT_USER_INTCON2_INT2EP	( 0U )
#define IRPT_USER_INTCON2_INT3EP	( 0U )
#define IRPT_USER_INTCON2_INT4EP	( 0U )

/*----------------------------------------------------------------------------*/
/* INTCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_INTCON3_XRAMBET	( 0U )
#define IRPT_USER_INTCON3_YRAMBET	( 0U )
#define IRPT_USER_INTCON3_DMABET	( 0U )
#define IRPT_USER_INTCON3_CPUBET	( 0U )

/*----------------------------------------------------------------------------*/
/* INTCON4レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_INTCON4_DIV0ERR	( 0U )
#define IRPT_USER_INTCON4_SFTACERR	( 0U )
#define IRPT_USER_INTCON4_COVBERR	( 0U )
#define IRPT_USER_INTCON4_COVAERR	( 0U )
#define IRPT_USER_INTCON4_OVBERR	( 0U )
#define IRPT_USER_INTCON4_OVAERR	( 0U )
#define IRPT_USER_INTCON4_COVTE	( 0U )
#define IRPT_USER_INTCON4_OVBTE	( 0U )
#define IRPT_USER_INTCON4_OVATE	( 0U )

/*----------------------------------------------------------------------------*/
/* INTCON5レジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_INTCON5_DMTE	( 0U )
#define IRPT_USER_INTCON5_WDTE	( 0U )
#define IRPT_USER_INTCON5_XPWBDED	( 0U )
#define IRPT_USER_INTCON5_YPWBDED	( 0U )
#define IRPT_USER_INTCON5_SOFT	( 0U )

/*----------------------------------------------------------------------------*/
/* INTTREGレジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_INTTREG_VECNUM	( 0U )
#define IRPT_USER_INTTREG_ILR	( 0U )
#define IRPT_USER_INTTREG_VHOLD	( 0U )
/*----------------------------------------------------------------------------*/
/* IVTBASEレジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IVTBASE	( 0U )
/*----------------------------------------------------------------------------*/
/* IVTBASEレジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IVTBASE_IVTBASE	( 0U )

/*----------------------------------------------------------------------------*/
/* IVTCREGレジスタ */
/*----------------------------------------------------------------------------*/
#define IRPT_USER_IVTCREG_IVTC	( 0U )

#endif	/* INTERRUPT_USER_H */

