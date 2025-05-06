/*----------------------------------------------------------------------------*/
/**
* @file		PMD_Driver.c
* @brief	Peripheral Module Disableに関するドライバ関数
* @date		24/07/16
* @details	
* @note		
*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "pmd_driver.h"
#include "pmd_user.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_PMD_Set_All_Register(void)
* @brief        PMDレジスタをセットします
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_PMD_Set_All_Register(void)
{
    /*----------------------------------------------------------------------------*/
    /* 周辺機能無効化レジスタ制御レジスタ */	
    /*----------------------------------------------------------------------------*/	

   /*-----------------------------------------------------------------------*/
	/* PMD1レジスタ */
	/*-----------------------------------------------------------------------*/
		PMD1 = 
			( PMD_USER_PMD1_CCP1MD << _PMD1_CCP1MD_POSITION ) |
			( PMD_USER_PMD1_CCP2MD << _PMD1_CCP2MD_POSITION ) |
			( PMD_USER_PMD1_CCP3MD << _PMD1_CCP3MD_POSITION ) |
			( PMD_USER_PMD1_CCP4MD << _PMD1_CCP4MD_POSITION ) |
			( PMD_USER_PMD1_CCP5MD << _PMD1_CCP5MD_POSITION ) |
			( PMD_USER_PMD1_CCP6MD << _PMD1_CCP6MD_POSITION ) |
			( PMD_USER_PMD1_CCP7MD << _PMD1_CCP7MD_POSITION ) |
			( PMD_USER_PMD1_CCP8MD << _PMD1_CCP8MD_POSITION ) |
			( PMD_USER_PMD1_CCP9MD << _PMD1_CCP9MD_POSITION ) |
			( PMD_USER_PMD1_T1MD << _PMD1_T1MD_POSITION ) |
			( PMD_USER_PMD1_T2MD << _PMD1_T2MD_POSITION ) |
			( PMD_USER_PMD1_T3MD << _PMD1_T3MD_POSITION ) |
			( PMD_USER_PMD1_U1MD << _PMD1_U1MD_POSITION ) |
			( PMD_USER_PMD1_U2MD << _PMD1_U2MD_POSITION ) |
			( PMD_USER_PMD1_U3MD << _PMD1_U3MD_POSITION ) |
			( PMD_USER_PMD1_SPI1MD << _PMD1_SPI1MD_POSITION ) |
			( PMD_USER_PMD1_SPI2MD << _PMD1_SPI2MD_POSITION ) |
			( PMD_USER_PMD1_SPI3MD << _PMD1_SPI3MD_POSITION ) |
			( PMD_USER_PMD1_SPI4MD << _PMD1_SPI4MD_POSITION ) ;
		#ifdef DEF_BITNAME
			PMD1bits.CCP1MD = PMD_USER_PMD1_CCP1MD;
			PMD1bits.CCP2MD = PMD_USER_PMD1_CCP2MD;
			PMD1bits.CCP3MD = PMD_USER_PMD1_CCP3MD;
			PMD1bits.CCP4MD = PMD_USER_PMD1_CCP4MD;
			PMD1bits.CCP5MD = PMD_USER_PMD1_CCP5MD;
			PMD1bits.CCP6MD = PMD_USER_PMD1_CCP6MD;
			PMD1bits.CCP7MD = PMD_USER_PMD1_CCP7MD;
			PMD1bits.CCP8MD = PMD_USER_PMD1_CCP8MD;
			PMD1bits.CCP9MD = PMD_USER_PMD1_CCP9MD;
			PMD1bits.T1MD = PMD_USER_PMD1_T1MD;
			PMD1bits.T2MD = PMD_USER_PMD1_T2MD;
			PMD1bits.T3MD = PMD_USER_PMD1_T3MD;
			PMD1bits.U1MD = PMD_USER_PMD1_U1MD;
			PMD1bits.U2MD = PMD_USER_PMD1_U2MD;
			PMD1bits.U3MD = PMD_USER_PMD1_U3MD;
			PMD1bits.SPI1MD = PMD_USER_PMD1_SPI1MD;
			PMD1bits.SPI2MD = PMD_USER_PMD1_SPI2MD;
			PMD1bits.SPI3MD = PMD_USER_PMD1_SPI3MD;
			PMD1bits.SPI4MD = PMD_USER_PMD1_SPI4MD;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PMD2レジスタ */
	/*-----------------------------------------------------------------------*/
		PMD2 = 
			( PMD_USER_PMD2_I2C1MD << _PMD2_I2C1MD_POSITION ) |
			( PMD_USER_PMD2_I2C2MD << _PMD2_I2C2MD_POSITION ) |
			( PMD_USER_PMD2_I2C3MD << _PMD2_I2C3MD_POSITION ) |
			( PMD_USER_PMD2_SENT1MD << _PMD2_SENT1MD_POSITION ) |
			( PMD_USER_PMD2_SENT2MD << _PMD2_SENT2MD_POSITION ) |
			( PMD_USER_PMD2_DMAMD << _PMD2_DMAMD_POSITION ) |
			( PMD_USER_PMD2_PDCMD << _PMD2_PDCMD_POSITION ) |
			( PMD_USER_PMD2_CLC1MD << _PMD2_CLC1MD_POSITION ) |
			( PMD_USER_PMD2_CLC2MD << _PMD2_CLC2MD_POSITION ) |
			( PMD_USER_PMD2_CLC3MD << _PMD2_CLC3MD_POSITION ) |
			( PMD_USER_PMD2_CLC4MD << _PMD2_CLC4MD_POSITION ) |
			( PMD_USER_PMD2_CLC5MD << _PMD2_CLC5MD_POSITION ) |
			( PMD_USER_PMD2_CLC6MD << _PMD2_CLC6MD_POSITION ) |
			( PMD_USER_PMD2_CLC7MD << _PMD2_CLC7MD_POSITION ) |
			( PMD_USER_PMD2_CLC8MD << _PMD2_CLC8MD_POSITION ) ;
		#ifdef DEF_BITNAME
			PMD2bits.I2C1MD = PMD_USER_PMD2_I2C1MD;
			PMD2bits.I2C2MD = PMD_USER_PMD2_I2C2MD;
			PMD2bits.I2C3MD = PMD_USER_PMD2_I2C3MD;
			PMD2bits.SENT1MD = PMD_USER_PMD2_SENT1MD;
			PMD2bits.SENT2MD = PMD_USER_PMD2_SENT2MD;
			PMD2bits.DMAMD = PMD_USER_PMD2_DMAMD;
			PMD2bits.PDCMD = PMD_USER_PMD2_PDCMD;
			PMD2bits.CLC1MD = PMD_USER_PMD2_CLC1MD;
			PMD2bits.CLC2MD = PMD_USER_PMD2_CLC2MD;
			PMD2bits.CLC3MD = PMD_USER_PMD2_CLC3MD;
			PMD2bits.CLC4MD = PMD_USER_PMD2_CLC4MD;
			PMD2bits.CLC5MD = PMD_USER_PMD2_CLC5MD;
			PMD2bits.CLC6MD = PMD_USER_PMD2_CLC6MD;
			PMD2bits.CLC7MD = PMD_USER_PMD2_CLC7MD;
			PMD2bits.CLC8MD = PMD_USER_PMD2_CLC8MD;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PMD3レジスタ */
	/*-----------------------------------------------------------------------*/
		PMD3 = 
			( PMD_USER_PMD3_QEI1MD << _PMD3_QEI1MD_POSITION ) |
			( PMD_USER_PMD3_QEI2MD << _PMD3_QEI2MD_POSITION ) |
			( PMD_USER_PMD3_QEI3MD << _PMD3_QEI3MD_POSITION ) |
			( PMD_USER_PMD3_QEI4MD << _PMD3_QEI4MD_POSITION ) |
			( PMD_USER_PMD3_BISS1MD << _PMD3_BISS1MD_POSITION ) |
			( PMD_USER_PMD3_OPAMD << _PMD3_OPAMD_POSITION ) |
			( PMD_USER_PMD3_ADC1MD << _PMD3_ADC1MD_POSITION ) |
			( PMD_USER_PMD3_ADC2MD << _PMD3_ADC2MD_POSITION ) |
			( PMD_USER_PMD3_ADC3MD << _PMD3_ADC3MD_POSITION ) |
			( PMD_USER_PMD3_ADC4MD << _PMD3_ADC4MD_POSITION ) |
			( PMD_USER_PMD3_ADC5MD << _PMD3_ADC5MD_POSITION ) |
			( PMD_USER_PMD3_TADCMD << _PMD3_TADCMD_POSITION ) |
			( PMD_USER_PMD3_C1MD << _PMD3_C1MD_POSITION ) |
			( PMD_USER_PMD3_C2MD << _PMD3_C2MD_POSITION ) |
			( PMD_USER_PMD3_CLC9MD << _PMD3_CLC9MD_POSITION ) |
			( PMD_USER_PMD3_CLC10MD << _PMD3_CLC10MD_POSITION ) ;
		#ifdef DEF_BITNAME
			PMD3bits.QEI1MD = PMD_USER_PMD3_QEI1MD;
			PMD3bits.QEI2MD = PMD_USER_PMD3_QEI2MD;
			PMD3bits.QEI3MD = PMD_USER_PMD3_QEI3MD;
			PMD3bits.QEI4MD = PMD_USER_PMD3_QEI4MD;
			PMD3bits.BISS1MD = PMD_USER_PMD3_BISS1MD;
			PMD3bits.OPAMD = PMD_USER_PMD3_OPAMD;
			PMD3bits.ADC1MD = PMD_USER_PMD3_ADC1MD;
			PMD3bits.ADC2MD = PMD_USER_PMD3_ADC2MD;
			PMD3bits.ADC3MD = PMD_USER_PMD3_ADC3MD;
			PMD3bits.ADC4MD = PMD_USER_PMD3_ADC4MD;
			PMD3bits.ADC5MD = PMD_USER_PMD3_ADC5MD;
			PMD3bits.TADCMD = PMD_USER_PMD3_TADCMD;
			PMD3bits.C1MD = PMD_USER_PMD3_C1MD;
			PMD3bits.C2MD = PMD_USER_PMD3_C2MD;
			PMD3bits.CLC9MD = PMD_USER_PMD3_CLC9MD;
			PMD3bits.CLC10MD = PMD_USER_PMD3_CLC10MD;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PMD4レジスタ */
	/*-----------------------------------------------------------------------*/
		PMD4 = 
			( PMD_USER_PMD4_PTGMD << _PMD4_PTGMD_POSITION ) |
			( PMD_USER_PMD4_CRCMD << _PMD4_CRCMD_POSITION ) |
			( PMD_USER_PMD4_DMTMD << _PMD4_DMTMD_POSITION ) |
			( PMD_USER_PMD4_CRYMD << _PMD4_CRYMD_POSITION ) |
			( PMD_USER_PMD4_UREFMD << _PMD4_UREFMD_POSITION ) |
			( PMD_USER_PMD4_PWM1MD << _PMD4_PWM1MD_POSITION ) |
			( PMD_USER_PMD4_PWM2MD << _PMD4_PWM2MD_POSITION ) |
			( PMD_USER_PMD4_CM1MD << _PMD4_CM1MD_POSITION ) |
			( PMD_USER_PMD4_CM2MD << _PMD4_CM2MD_POSITION ) |
			( PMD_USER_PMD4_CM3MD << _PMD4_CM3MD_POSITION ) |
			( PMD_USER_PMD4_CM4MD << _PMD4_CM4MD_POSITION ) |
			( PMD_USER_PMD4_IOM1MD << _PMD4_IOM1MD_POSITION ) |
			( PMD_USER_PMD4_IOM2MD << _PMD4_IOM2MD_POSITION ) |
			( PMD_USER_PMD4_IOM3MD << _PMD4_IOM3MD_POSITION ) |
			( PMD_USER_PMD4_IOM4MD << _PMD4_IOM4MD_POSITION ) |
			( PMD_USER_PMD4_IOM5MD << _PMD4_IOM5MD_POSITION ) |
			( PMD_USER_PMD4_IOM6MD << _PMD4_IOM6MD_POSITION ) |
			( PMD_USER_PMD4_IOM7MD << _PMD4_IOM7MD_POSITION ) |
			( PMD_USER_PMD4_IOM8MD << _PMD4_IOM8MD_POSITION ) |
			( PMD_USER_PMD4_IOM9MD << _PMD4_IOM9MD_POSITION ) |
			( PMD_USER_PMD4_IOM10MD << _PMD4_IOM10MD_POSITION ) |
			( PMD_USER_PMD4_IOM11MD << _PMD4_IOM11MD_POSITION ) |
			( PMD_USER_PMD4_IOM12MD << _PMD4_IOM12MD_POSITION ) |
			( PMD_USER_PMD4_IOM13MD << _PMD4_IOM13MD_POSITION ) |
			( PMD_USER_PMD4_IOM14MD << _PMD4_IOM14MD_POSITION ) |
			( PMD_USER_PMD4_IOM15MD << _PMD4_IOM15MD_POSITION ) |
			( PMD_USER_PMD4_IOM16MD << _PMD4_IOM16MD_POSITION ) ;
		#ifdef DEF_BITNAME
			PMD4bits.PTGMD = PMD_USER_PMD4_PTGMD;
			PMD4bits.CRCMD = PMD_USER_PMD4_CRCMD;
			PMD4bits.DMTMD = PMD_USER_PMD4_DMTMD;
			PMD4bits.CRYMD = PMD_USER_PMD4_CRYMD;
			PMD4bits.UREFMD = PMD_USER_PMD4_UREFMD;
			PMD4bits.PWM1MD = PMD_USER_PMD4_PWM1MD;
			PMD4bits.PWM2MD = PMD_USER_PMD4_PWM2MD;
			PMD4bits.CM1MD = PMD_USER_PMD4_CM1MD;
			PMD4bits.CM2MD = PMD_USER_PMD4_CM2MD;
			PMD4bits.CM3MD = PMD_USER_PMD4_CM3MD;
			PMD4bits.CM4MD = PMD_USER_PMD4_CM4MD;
			PMD4bits.IOM1MD = PMD_USER_PMD4_IOM1MD;
			PMD4bits.IOM2MD = PMD_USER_PMD4_IOM2MD;
			PMD4bits.IOM3MD = PMD_USER_PMD4_IOM3MD;
			PMD4bits.IOM4MD = PMD_USER_PMD4_IOM4MD;
			PMD4bits.IOM5MD = PMD_USER_PMD4_IOM5MD;
			PMD4bits.IOM6MD = PMD_USER_PMD4_IOM6MD;
			PMD4bits.IOM7MD = PMD_USER_PMD4_IOM7MD;
			PMD4bits.IOM8MD = PMD_USER_PMD4_IOM8MD;
			PMD4bits.IOM9MD = PMD_USER_PMD4_IOM9MD;
			PMD4bits.IOM10MD = PMD_USER_PMD4_IOM10MD;
			PMD4bits.IOM11MD = PMD_USER_PMD4_IOM11MD;
			PMD4bits.IOM12MD = PMD_USER_PMD4_IOM12MD;
			PMD4bits.IOM13MD = PMD_USER_PMD4_IOM13MD;
			PMD4bits.IOM14MD = PMD_USER_PMD4_IOM14MD;
			PMD4bits.IOM15MD = PMD_USER_PMD4_IOM15MD;
			PMD4bits.IOM16MD = PMD_USER_PMD4_IOM16MD;
		#endif 

}

