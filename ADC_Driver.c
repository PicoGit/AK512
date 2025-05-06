/*----------------------------------------------------------------------------*/
/**
 * @file	ADC_Driver.c
 * @brief	ADCモジュールに関するドライバ関数
 * @details 
 */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "adc_user.h"
#include "adc_driver.h"
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
* @fn        vdg_ADC1_Set_All_Register(void) 
* @brief        ADC1レジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC1_Set_All_Register(void)
{
#if ( PMD_ADC1MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* AD1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CON = 
			( ADC_USER_AD1CON_CALCNT << _AD1CON_CALCNT_POSITION ) |
			( ADC_USER_AD1CON_BUFEN << _AD1CON_BUFEN_POSITION ) |
			( ADC_USER_AD1CON_TSTEN << _AD1CON_TSTEN_POSITION ) |
			( ADC_USER_AD1CON_TSTLOCK << _AD1CON_TSTLOCK_POSITION ) |
			( ADC_USER_AD1CON_ON << _AD1CON_ON_POSITION ) |
			( ADC_USER_AD1CON_STNDBY << _AD1CON_STNDBY_POSITION ) |
			( ADC_USER_AD1CON_RPTCNT << _AD1CON_RPTCNT_POSITION ) |
			( ADC_USER_AD1CON_MODE << _AD1CON_MODE_POSITION ) |
			( ADC_USER_AD1CON_CALRATE << _AD1CON_CALRATE_POSITION ) |
			( ADC_USER_AD1CON_ACALEN << _AD1CON_ACALEN_POSITION ) |
			( ADC_USER_AD1CON_CALREQ << _AD1CON_CALREQ_POSITION ) |
			( ADC_USER_AD1CON_CALRDY << _AD1CON_CALRDY_POSITION ) |
			( ADC_USER_AD1CON_ADRDY << _AD1CON_ADRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CONbits.CALCNT = ADC_USER_AD1CON_CALCNT;
			AD1CONbits.BUFEN = ADC_USER_AD1CON_BUFEN;
			AD1CONbits.TSTEN = ADC_USER_AD1CON_TSTEN;
			AD1CONbits.TSTLOCK = ADC_USER_AD1CON_TSTLOCK;
			AD1CONbits.ON = ADC_USER_AD1CON_ON;
			AD1CONbits.STNDBY = ADC_USER_AD1CON_STNDBY;
			AD1CONbits.RPTCNT = ADC_USER_AD1CON_RPTCNT;
			AD1CONbits.MODE = ADC_USER_AD1CON_MODE;
			AD1CONbits.CALRATE = ADC_USER_AD1CON_CALRATE;
			AD1CONbits.ACALEN = ADC_USER_AD1CON_ACALEN;
			AD1CONbits.CALREQ = ADC_USER_AD1CON_CALREQ;
			AD1CONbits.CALRDY = ADC_USER_AD1CON_CALRDY;
			AD1CONbits.ADRDY = ADC_USER_AD1CON_ADRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1DATAOVRレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1DATAOVR = ADC_USER_AD1DATAOVR;
	/*-----------------------------------------------------------------------*/
	/* AD1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1STAT = 
			( ADC_USER_AD1STAT_CH0RDY << _AD1STAT_CH0RDY_POSITION ) |
			( ADC_USER_AD1STAT_CH1RDY << _AD1STAT_CH1RDY_POSITION ) |
			( ADC_USER_AD1STAT_CH2RDY << _AD1STAT_CH2RDY_POSITION ) |
			( ADC_USER_AD1STAT_CH3RDY << _AD1STAT_CH3RDY_POSITION ) |
			( ADC_USER_AD1STAT_CH4RDY << _AD1STAT_CH4RDY_POSITION ) |
			( ADC_USER_AD1STAT_CH5RDY << _AD1STAT_CH5RDY_POSITION ) |
			( ADC_USER_AD1STAT_CH6RDY << _AD1STAT_CH6RDY_POSITION ) |
			( ADC_USER_AD1STAT_CH7RDY << _AD1STAT_CH7RDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1STATbits.CH0RDY = ADC_USER_AD1STAT_CH0RDY;
			AD1STATbits.CH1RDY = ADC_USER_AD1STAT_CH1RDY;
			AD1STATbits.CH2RDY = ADC_USER_AD1STAT_CH2RDY;
			AD1STATbits.CH3RDY = ADC_USER_AD1STAT_CH3RDY;
			AD1STATbits.CH4RDY = ADC_USER_AD1STAT_CH4RDY;
			AD1STATbits.CH5RDY = ADC_USER_AD1STAT_CH5RDY;
			AD1STATbits.CH6RDY = ADC_USER_AD1STAT_CH6RDY;
			AD1STATbits.CH7RDY = ADC_USER_AD1STAT_CH7RDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1RSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1RSTAT = 
			( ADC_USER_AD1RSTAT_CH0RRDY << _AD1RSTAT_CH0RRDY_POSITION ) |
			( ADC_USER_AD1RSTAT_CH1RRDY << _AD1RSTAT_CH1RRDY_POSITION ) |
			( ADC_USER_AD1RSTAT_CH2RRDY << _AD1RSTAT_CH2RRDY_POSITION ) |
			( ADC_USER_AD1RSTAT_CH3RRDY << _AD1RSTAT_CH3RRDY_POSITION ) |
			( ADC_USER_AD1RSTAT_CH4RRDY << _AD1RSTAT_CH4RRDY_POSITION ) |
			( ADC_USER_AD1RSTAT_CH5RRDY << _AD1RSTAT_CH5RRDY_POSITION ) |
			( ADC_USER_AD1RSTAT_CH6RRDY << _AD1RSTAT_CH6RRDY_POSITION ) |
			( ADC_USER_AD1RSTAT_CH7RRDY << _AD1RSTAT_CH7RRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1RSTATbits.CH0RRDY = ADC_USER_AD1RSTAT_CH0RRDY;
			AD1RSTATbits.CH1RRDY = ADC_USER_AD1RSTAT_CH1RRDY;
			AD1RSTATbits.CH2RRDY = ADC_USER_AD1RSTAT_CH2RRDY;
			AD1RSTATbits.CH3RRDY = ADC_USER_AD1RSTAT_CH3RRDY;
			AD1RSTATbits.CH4RRDY = ADC_USER_AD1RSTAT_CH4RRDY;
			AD1RSTATbits.CH5RRDY = ADC_USER_AD1RSTAT_CH5RRDY;
			AD1RSTATbits.CH6RRDY = ADC_USER_AD1RSTAT_CH6RRDY;
			AD1RSTATbits.CH7RRDY = ADC_USER_AD1RSTAT_CH7RRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CMPSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CMPSTAT = 
			( ADC_USER_AD1CMPSTAT_CH0FLG << _AD1CMPSTAT_CH0FLG_POSITION ) |
			( ADC_USER_AD1CMPSTAT_CH1FLG << _AD1CMPSTAT_CH1FLG_POSITION ) |
			( ADC_USER_AD1CMPSTAT_CH2FLG << _AD1CMPSTAT_CH2FLG_POSITION ) |
			( ADC_USER_AD1CMPSTAT_CH3FLG << _AD1CMPSTAT_CH3FLG_POSITION ) |
			( ADC_USER_AD1CMPSTAT_CH4FLG << _AD1CMPSTAT_CH4FLG_POSITION ) |
			( ADC_USER_AD1CMPSTAT_CH5FLG << _AD1CMPSTAT_CH5FLG_POSITION ) |
			( ADC_USER_AD1CMPSTAT_CH6FLG << _AD1CMPSTAT_CH6FLG_POSITION ) |
			( ADC_USER_AD1CMPSTAT_CH7FLG << _AD1CMPSTAT_CH7FLG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CMPSTATbits.CH0FLG = ADC_USER_AD1CMPSTAT_CH0FLG;
			AD1CMPSTATbits.CH1FLG = ADC_USER_AD1CMPSTAT_CH1FLG;
			AD1CMPSTATbits.CH2FLG = ADC_USER_AD1CMPSTAT_CH2FLG;
			AD1CMPSTATbits.CH3FLG = ADC_USER_AD1CMPSTAT_CH3FLG;
			AD1CMPSTATbits.CH4FLG = ADC_USER_AD1CMPSTAT_CH4FLG;
			AD1CMPSTATbits.CH5FLG = ADC_USER_AD1CMPSTAT_CH5FLG;
			AD1CMPSTATbits.CH6FLG = ADC_USER_AD1CMPSTAT_CH6FLG;
			AD1CMPSTATbits.CH7FLG = ADC_USER_AD1CMPSTAT_CH7FLG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1SWTRGレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1SWTRG = 
			( ADC_USER_AD1SWTRG_CH0TRG << _AD1SWTRG_CH0TRG_POSITION ) |
			( ADC_USER_AD1SWTRG_CH1TRG << _AD1SWTRG_CH1TRG_POSITION ) |
			( ADC_USER_AD1SWTRG_CH2TRG << _AD1SWTRG_CH2TRG_POSITION ) |
			( ADC_USER_AD1SWTRG_CH3TRG << _AD1SWTRG_CH3TRG_POSITION ) |
			( ADC_USER_AD1SWTRG_CH4TRG << _AD1SWTRG_CH4TRG_POSITION ) |
			( ADC_USER_AD1SWTRG_CH5TRG << _AD1SWTRG_CH5TRG_POSITION ) |
			( ADC_USER_AD1SWTRG_CH6TRG << _AD1SWTRG_CH6TRG_POSITION ) |
			( ADC_USER_AD1SWTRG_CH7TRG << _AD1SWTRG_CH7TRG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1SWTRGbits.CH0TRG = ADC_USER_AD1SWTRG_CH0TRG;
			AD1SWTRGbits.CH1TRG = ADC_USER_AD1SWTRG_CH1TRG;
			AD1SWTRGbits.CH2TRG = ADC_USER_AD1SWTRG_CH2TRG;
			AD1SWTRGbits.CH3TRG = ADC_USER_AD1SWTRG_CH3TRG;
			AD1SWTRGbits.CH4TRG = ADC_USER_AD1SWTRG_CH4TRG;
			AD1SWTRGbits.CH5TRG = ADC_USER_AD1SWTRG_CH5TRG;
			AD1SWTRGbits.CH6TRG = ADC_USER_AD1SWTRG_CH6TRG;
			AD1SWTRGbits.CH7TRG = ADC_USER_AD1SWTRG_CH7TRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH0CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CON1 = 
			( ADC_USER_AD1CH0CON1_TRG1SRC << _AD1CH0CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH0CON1_MODE << _AD1CH0CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH0CON1_TRG2SRC << _AD1CH0CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH0CON1_ACCNUM << _AD1CH0CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH0CON1_SAMC << _AD1CH0CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH0CON1_IRQSEL << _AD1CH0CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH0CON1_EIEN << _AD1CH0CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH0CON1_TRG1POL << _AD1CH0CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH0CON1_PINSEL << _AD1CH0CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH0CON1_NINSEL << _AD1CH0CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH0CON1_FRAC << _AD1CH0CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH0CON1_DIFF << _AD1CH0CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH0CON1bits.TRG1SRC = ADC_USER_AD1CH0CON1_TRG1SRC;
			AD1CH0CON1bits.MODE = ADC_USER_AD1CH0CON1_MODE;
			AD1CH0CON1bits.TRG2SRC = ADC_USER_AD1CH0CON1_TRG2SRC;
			AD1CH0CON1bits.ACCNUM = ADC_USER_AD1CH0CON1_ACCNUM;
			AD1CH0CON1bits.SAMC = ADC_USER_AD1CH0CON1_SAMC;
			AD1CH0CON1bits.IRQSEL = ADC_USER_AD1CH0CON1_IRQSEL;
			AD1CH0CON1bits.EIEN = ADC_USER_AD1CH0CON1_EIEN;
			AD1CH0CON1bits.TRG1POL = ADC_USER_AD1CH0CON1_TRG1POL;
			AD1CH0CON1bits.PINSEL = ADC_USER_AD1CH0CON1_PINSEL;
			AD1CH0CON1bits.NINSEL = ADC_USER_AD1CH0CON1_NINSEL;
			AD1CH0CON1bits.FRAC = ADC_USER_AD1CH0CON1_FRAC;
			AD1CH0CON1bits.DIFF = ADC_USER_AD1CH0CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH0CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CON2 = 
			( ADC_USER_AD1CH0CON2_ADCMPCNT << _AD1CH0CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH0CON2_CMPMOD << _AD1CH0CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH0CON2_ADCMPSTAT << _AD1CH0CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH0CON2_CMPCNTMOD << _AD1CH0CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH0CON2_CMPVAL << _AD1CH0CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH0CON2_ACCBRST << _AD1CH0CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH0CON2_ACCRO << _AD1CH0CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH0CON2bits.ADCMPCNT = ADC_USER_AD1CH0CON2_ADCMPCNT;
			AD1CH0CON2bits.CMPMOD = ADC_USER_AD1CH0CON2_CMPMOD;
			AD1CH0CON2bits.ADCMPSTAT = ADC_USER_AD1CH0CON2_ADCMPSTAT;
			AD1CH0CON2bits.CMPCNTMOD = ADC_USER_AD1CH0CON2_CMPCNTMOD;
			AD1CH0CON2bits.CMPVAL = ADC_USER_AD1CH0CON2_CMPVAL;
			AD1CH0CON2bits.ACCBRST = ADC_USER_AD1CH0CON2_ACCBRST;
			AD1CH0CON2bits.ACCRO = ADC_USER_AD1CH0CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH0DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0DATA = ADC_USER_AD1CH0DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH0RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0RES = 
			( ADC_USER_AD1CH0RES_RES << _AD1CH0RES_RES_POSITION ) |
			( ADC_USER_AD1CH0RES_RESF << _AD1CH0RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH0RESbits.RES = ADC_USER_AD1CH0RES_RES;
			AD1CH0RESbits.RESF = ADC_USER_AD1CH0RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CNT = 
			( ADC_USER_AD1CH0CNT_CNT << _AD1CH0CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH0CNT_CNTSTAT << _AD1CH0CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH0CNTbits.CNT = ADC_USER_AD1CH0CNT_CNT;
			AD1CH0CNTbits.CNTSTAT = ADC_USER_AD1CH0CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH0CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CMPLO = ADC_USER_AD1CH0CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH0CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH0CMPHI = ADC_USER_AD1CH0CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CON1 = 
			( ADC_USER_AD1CH1CON1_TRG1SRC << _AD1CH1CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH1CON1_MODE << _AD1CH1CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH1CON1_TRG2SRC << _AD1CH1CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH1CON1_ACCNUM << _AD1CH1CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH1CON1_SAMC << _AD1CH1CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH1CON1_IRQSEL << _AD1CH1CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH1CON1_EIEN << _AD1CH1CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH1CON1_TRG1POL << _AD1CH1CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH1CON1_PINSEL << _AD1CH1CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH1CON1_NINSEL << _AD1CH1CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH1CON1_FRAC << _AD1CH1CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH1CON1_DIFF << _AD1CH1CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH1CON1bits.TRG1SRC = ADC_USER_AD1CH1CON1_TRG1SRC;
			AD1CH1CON1bits.MODE = ADC_USER_AD1CH1CON1_MODE;
			AD1CH1CON1bits.TRG2SRC = ADC_USER_AD1CH1CON1_TRG2SRC;
			AD1CH1CON1bits.ACCNUM = ADC_USER_AD1CH1CON1_ACCNUM;
			AD1CH1CON1bits.SAMC = ADC_USER_AD1CH1CON1_SAMC;
			AD1CH1CON1bits.IRQSEL = ADC_USER_AD1CH1CON1_IRQSEL;
			AD1CH1CON1bits.EIEN = ADC_USER_AD1CH1CON1_EIEN;
			AD1CH1CON1bits.TRG1POL = ADC_USER_AD1CH1CON1_TRG1POL;
			AD1CH1CON1bits.PINSEL = ADC_USER_AD1CH1CON1_PINSEL;
			AD1CH1CON1bits.NINSEL = ADC_USER_AD1CH1CON1_NINSEL;
			AD1CH1CON1bits.FRAC = ADC_USER_AD1CH1CON1_FRAC;
			AD1CH1CON1bits.DIFF = ADC_USER_AD1CH1CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CON2 = 
			( ADC_USER_AD1CH1CON2_ADCMPCNT << _AD1CH1CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH1CON2_CMPMOD << _AD1CH1CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH1CON2_ADCMPSTAT << _AD1CH1CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH1CON2_CMPCNTMOD << _AD1CH1CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH1CON2_CMPVAL << _AD1CH1CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH1CON2_ACCBRST << _AD1CH1CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH1CON2_ACCRO << _AD1CH1CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH1CON2bits.ADCMPCNT = ADC_USER_AD1CH1CON2_ADCMPCNT;
			AD1CH1CON2bits.CMPMOD = ADC_USER_AD1CH1CON2_CMPMOD;
			AD1CH1CON2bits.ADCMPSTAT = ADC_USER_AD1CH1CON2_ADCMPSTAT;
			AD1CH1CON2bits.CMPCNTMOD = ADC_USER_AD1CH1CON2_CMPCNTMOD;
			AD1CH1CON2bits.CMPVAL = ADC_USER_AD1CH1CON2_CMPVAL;
			AD1CH1CON2bits.ACCBRST = ADC_USER_AD1CH1CON2_ACCBRST;
			AD1CH1CON2bits.ACCRO = ADC_USER_AD1CH1CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH1DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1DATA = ADC_USER_AD1CH1DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH1RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1RES = 
			( ADC_USER_AD1CH1RES_RES << _AD1CH1RES_RES_POSITION ) |
			( ADC_USER_AD1CH1RES_RESF << _AD1CH1RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH1RESbits.RES = ADC_USER_AD1CH1RES_RES;
			AD1CH1RESbits.RESF = ADC_USER_AD1CH1RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CNT = 
			( ADC_USER_AD1CH1CNT_CNT << _AD1CH1CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH1CNT_CNTSTAT << _AD1CH1CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH1CNTbits.CNT = ADC_USER_AD1CH1CNT_CNT;
			AD1CH1CNTbits.CNTSTAT = ADC_USER_AD1CH1CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH1CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CMPLO = ADC_USER_AD1CH1CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH1CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH1CMPHI = ADC_USER_AD1CH1CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CON1 = 
			( ADC_USER_AD1CH2CON1_TRG1SRC << _AD1CH2CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH2CON1_MODE << _AD1CH2CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH2CON1_TRG2SRC << _AD1CH2CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH2CON1_ACCNUM << _AD1CH2CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH2CON1_SAMC << _AD1CH2CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH2CON1_IRQSEL << _AD1CH2CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH2CON1_EIEN << _AD1CH2CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH2CON1_TRG1POL << _AD1CH2CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH2CON1_PINSEL << _AD1CH2CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH2CON1_NINSEL << _AD1CH2CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH2CON1_FRAC << _AD1CH2CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH2CON1_DIFF << _AD1CH2CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH2CON1bits.TRG1SRC = ADC_USER_AD1CH2CON1_TRG1SRC;
			AD1CH2CON1bits.MODE = ADC_USER_AD1CH2CON1_MODE;
			AD1CH2CON1bits.TRG2SRC = ADC_USER_AD1CH2CON1_TRG2SRC;
			AD1CH2CON1bits.ACCNUM = ADC_USER_AD1CH2CON1_ACCNUM;
			AD1CH2CON1bits.SAMC = ADC_USER_AD1CH2CON1_SAMC;
			AD1CH2CON1bits.IRQSEL = ADC_USER_AD1CH2CON1_IRQSEL;
			AD1CH2CON1bits.EIEN = ADC_USER_AD1CH2CON1_EIEN;
			AD1CH2CON1bits.TRG1POL = ADC_USER_AD1CH2CON1_TRG1POL;
			AD1CH2CON1bits.PINSEL = ADC_USER_AD1CH2CON1_PINSEL;
			AD1CH2CON1bits.NINSEL = ADC_USER_AD1CH2CON1_NINSEL;
			AD1CH2CON1bits.FRAC = ADC_USER_AD1CH2CON1_FRAC;
			AD1CH2CON1bits.DIFF = ADC_USER_AD1CH2CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CON2 = 
			( ADC_USER_AD1CH2CON2_ADCMPCNT << _AD1CH2CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH2CON2_CMPMOD << _AD1CH2CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH2CON2_ADCMPSTAT << _AD1CH2CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH2CON2_CMPCNTMOD << _AD1CH2CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH2CON2_CMPVAL << _AD1CH2CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH2CON2_ACCBRST << _AD1CH2CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH2CON2_ACCRO << _AD1CH2CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH2CON2bits.ADCMPCNT = ADC_USER_AD1CH2CON2_ADCMPCNT;
			AD1CH2CON2bits.CMPMOD = ADC_USER_AD1CH2CON2_CMPMOD;
			AD1CH2CON2bits.ADCMPSTAT = ADC_USER_AD1CH2CON2_ADCMPSTAT;
			AD1CH2CON2bits.CMPCNTMOD = ADC_USER_AD1CH2CON2_CMPCNTMOD;
			AD1CH2CON2bits.CMPVAL = ADC_USER_AD1CH2CON2_CMPVAL;
			AD1CH2CON2bits.ACCBRST = ADC_USER_AD1CH2CON2_ACCBRST;
			AD1CH2CON2bits.ACCRO = ADC_USER_AD1CH2CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH2DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2DATA = ADC_USER_AD1CH2DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH2RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2RES = 
			( ADC_USER_AD1CH2RES_RES << _AD1CH2RES_RES_POSITION ) |
			( ADC_USER_AD1CH2RES_RESF << _AD1CH2RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH2RESbits.RES = ADC_USER_AD1CH2RES_RES;
			AD1CH2RESbits.RESF = ADC_USER_AD1CH2RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CNT = 
			( ADC_USER_AD1CH2CNT_CNT << _AD1CH2CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH2CNT_CNTSTAT << _AD1CH2CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH2CNTbits.CNT = ADC_USER_AD1CH2CNT_CNT;
			AD1CH2CNTbits.CNTSTAT = ADC_USER_AD1CH2CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH2CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CMPLO = ADC_USER_AD1CH2CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH2CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH2CMPHI = ADC_USER_AD1CH2CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CON1 = 
			( ADC_USER_AD1CH3CON1_TRG1SRC << _AD1CH3CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH3CON1_MODE << _AD1CH3CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH3CON1_TRG2SRC << _AD1CH3CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH3CON1_ACCNUM << _AD1CH3CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH3CON1_SAMC << _AD1CH3CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH3CON1_IRQSEL << _AD1CH3CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH3CON1_EIEN << _AD1CH3CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH3CON1_TRG1POL << _AD1CH3CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH3CON1_PINSEL << _AD1CH3CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH3CON1_NINSEL << _AD1CH3CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH3CON1_FRAC << _AD1CH3CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH3CON1_DIFF << _AD1CH3CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH3CON1bits.TRG1SRC = ADC_USER_AD1CH3CON1_TRG1SRC;
			AD1CH3CON1bits.MODE = ADC_USER_AD1CH3CON1_MODE;
			AD1CH3CON1bits.TRG2SRC = ADC_USER_AD1CH3CON1_TRG2SRC;
			AD1CH3CON1bits.ACCNUM = ADC_USER_AD1CH3CON1_ACCNUM;
			AD1CH3CON1bits.SAMC = ADC_USER_AD1CH3CON1_SAMC;
			AD1CH3CON1bits.IRQSEL = ADC_USER_AD1CH3CON1_IRQSEL;
			AD1CH3CON1bits.EIEN = ADC_USER_AD1CH3CON1_EIEN;
			AD1CH3CON1bits.TRG1POL = ADC_USER_AD1CH3CON1_TRG1POL;
			AD1CH3CON1bits.PINSEL = ADC_USER_AD1CH3CON1_PINSEL;
			AD1CH3CON1bits.NINSEL = ADC_USER_AD1CH3CON1_NINSEL;
			AD1CH3CON1bits.FRAC = ADC_USER_AD1CH3CON1_FRAC;
			AD1CH3CON1bits.DIFF = ADC_USER_AD1CH3CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CON2 = 
			( ADC_USER_AD1CH3CON2_ADCMPCNT << _AD1CH3CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH3CON2_CMPMOD << _AD1CH3CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH3CON2_ADCMPSTAT << _AD1CH3CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH3CON2_CMPCNTMOD << _AD1CH3CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH3CON2_CMPVAL << _AD1CH3CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH3CON2_ACCBRST << _AD1CH3CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH3CON2_ACCRO << _AD1CH3CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH3CON2bits.ADCMPCNT = ADC_USER_AD1CH3CON2_ADCMPCNT;
			AD1CH3CON2bits.CMPMOD = ADC_USER_AD1CH3CON2_CMPMOD;
			AD1CH3CON2bits.ADCMPSTAT = ADC_USER_AD1CH3CON2_ADCMPSTAT;
			AD1CH3CON2bits.CMPCNTMOD = ADC_USER_AD1CH3CON2_CMPCNTMOD;
			AD1CH3CON2bits.CMPVAL = ADC_USER_AD1CH3CON2_CMPVAL;
			AD1CH3CON2bits.ACCBRST = ADC_USER_AD1CH3CON2_ACCBRST;
			AD1CH3CON2bits.ACCRO = ADC_USER_AD1CH3CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH3DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3DATA = ADC_USER_AD1CH3DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH3RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3RES = 
			( ADC_USER_AD1CH3RES_RES << _AD1CH3RES_RES_POSITION ) |
			( ADC_USER_AD1CH3RES_RESF << _AD1CH3RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH3RESbits.RES = ADC_USER_AD1CH3RES_RES;
			AD1CH3RESbits.RESF = ADC_USER_AD1CH3RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CNT = 
			( ADC_USER_AD1CH3CNT_CNT << _AD1CH3CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH3CNT_CNTSTAT << _AD1CH3CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH3CNTbits.CNT = ADC_USER_AD1CH3CNT_CNT;
			AD1CH3CNTbits.CNTSTAT = ADC_USER_AD1CH3CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH3CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CMPLO = ADC_USER_AD1CH3CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH3CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH3CMPHI = ADC_USER_AD1CH3CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CON1 = 
			( ADC_USER_AD1CH4CON1_TRG1SRC << _AD1CH4CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH4CON1_MODE << _AD1CH4CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH4CON1_TRG2SRC << _AD1CH4CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH4CON1_ACCNUM << _AD1CH4CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH4CON1_SAMC << _AD1CH4CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH4CON1_IRQSEL << _AD1CH4CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH4CON1_EIEN << _AD1CH4CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH4CON1_TRG1POL << _AD1CH4CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH4CON1_PINSEL << _AD1CH4CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH4CON1_NINSEL << _AD1CH4CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH4CON1_FRAC << _AD1CH4CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH4CON1_DIFF << _AD1CH4CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH4CON1bits.TRG1SRC = ADC_USER_AD1CH4CON1_TRG1SRC;
			AD1CH4CON1bits.MODE = ADC_USER_AD1CH4CON1_MODE;
			AD1CH4CON1bits.TRG2SRC = ADC_USER_AD1CH4CON1_TRG2SRC;
			AD1CH4CON1bits.ACCNUM = ADC_USER_AD1CH4CON1_ACCNUM;
			AD1CH4CON1bits.SAMC = ADC_USER_AD1CH4CON1_SAMC;
			AD1CH4CON1bits.IRQSEL = ADC_USER_AD1CH4CON1_IRQSEL;
			AD1CH4CON1bits.EIEN = ADC_USER_AD1CH4CON1_EIEN;
			AD1CH4CON1bits.TRG1POL = ADC_USER_AD1CH4CON1_TRG1POL;
			AD1CH4CON1bits.PINSEL = ADC_USER_AD1CH4CON1_PINSEL;
			AD1CH4CON1bits.NINSEL = ADC_USER_AD1CH4CON1_NINSEL;
			AD1CH4CON1bits.FRAC = ADC_USER_AD1CH4CON1_FRAC;
			AD1CH4CON1bits.DIFF = ADC_USER_AD1CH4CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CON2 = 
			( ADC_USER_AD1CH4CON2_ADCMPCNT << _AD1CH4CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH4CON2_CMPMOD << _AD1CH4CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH4CON2_ADCMPSTAT << _AD1CH4CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH4CON2_CMPCNTMOD << _AD1CH4CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH4CON2_CMPVAL << _AD1CH4CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH4CON2_ACCBRST << _AD1CH4CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH4CON2_ACCRO << _AD1CH4CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH4CON2bits.ADCMPCNT = ADC_USER_AD1CH4CON2_ADCMPCNT;
			AD1CH4CON2bits.CMPMOD = ADC_USER_AD1CH4CON2_CMPMOD;
			AD1CH4CON2bits.ADCMPSTAT = ADC_USER_AD1CH4CON2_ADCMPSTAT;
			AD1CH4CON2bits.CMPCNTMOD = ADC_USER_AD1CH4CON2_CMPCNTMOD;
			AD1CH4CON2bits.CMPVAL = ADC_USER_AD1CH4CON2_CMPVAL;
			AD1CH4CON2bits.ACCBRST = ADC_USER_AD1CH4CON2_ACCBRST;
			AD1CH4CON2bits.ACCRO = ADC_USER_AD1CH4CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH4DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4DATA = ADC_USER_AD1CH4DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH4RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4RES = 
			( ADC_USER_AD1CH4RES_RES << _AD1CH4RES_RES_POSITION ) |
			( ADC_USER_AD1CH4RES_RESF << _AD1CH4RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH4RESbits.RES = ADC_USER_AD1CH4RES_RES;
			AD1CH4RESbits.RESF = ADC_USER_AD1CH4RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CNT = 
			( ADC_USER_AD1CH4CNT_CNT << _AD1CH4CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH4CNT_CNTSTAT << _AD1CH4CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH4CNTbits.CNT = ADC_USER_AD1CH4CNT_CNT;
			AD1CH4CNTbits.CNTSTAT = ADC_USER_AD1CH4CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH4CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CMPLO = ADC_USER_AD1CH4CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH4CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH4CMPHI = ADC_USER_AD1CH4CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH5CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CON1 = 
			( ADC_USER_AD1CH5CON1_TRG1SRC << _AD1CH5CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH5CON1_MODE << _AD1CH5CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH5CON1_TRG2SRC << _AD1CH5CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH5CON1_ACCNUM << _AD1CH5CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH5CON1_SAMC << _AD1CH5CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH5CON1_IRQSEL << _AD1CH5CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH5CON1_EIEN << _AD1CH5CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH5CON1_TRG1POL << _AD1CH5CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH5CON1_PINSEL << _AD1CH5CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH5CON1_NINSEL << _AD1CH5CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH5CON1_FRAC << _AD1CH5CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH5CON1_DIFF << _AD1CH5CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH5CON1bits.TRG1SRC = ADC_USER_AD1CH5CON1_TRG1SRC;
			AD1CH5CON1bits.MODE = ADC_USER_AD1CH5CON1_MODE;
			AD1CH5CON1bits.TRG2SRC = ADC_USER_AD1CH5CON1_TRG2SRC;
			AD1CH5CON1bits.ACCNUM = ADC_USER_AD1CH5CON1_ACCNUM;
			AD1CH5CON1bits.SAMC = ADC_USER_AD1CH5CON1_SAMC;
			AD1CH5CON1bits.IRQSEL = ADC_USER_AD1CH5CON1_IRQSEL;
			AD1CH5CON1bits.EIEN = ADC_USER_AD1CH5CON1_EIEN;
			AD1CH5CON1bits.TRG1POL = ADC_USER_AD1CH5CON1_TRG1POL;
			AD1CH5CON1bits.PINSEL = ADC_USER_AD1CH5CON1_PINSEL;
			AD1CH5CON1bits.NINSEL = ADC_USER_AD1CH5CON1_NINSEL;
			AD1CH5CON1bits.FRAC = ADC_USER_AD1CH5CON1_FRAC;
			AD1CH5CON1bits.DIFF = ADC_USER_AD1CH5CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH5CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CON2 = 
			( ADC_USER_AD1CH5CON2_ADCMPCNT << _AD1CH5CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH5CON2_CMPMOD << _AD1CH5CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH5CON2_ADCMPSTAT << _AD1CH5CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH5CON2_CMPCNTMOD << _AD1CH5CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH5CON2_CMPVAL << _AD1CH5CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH5CON2_ACCBRST << _AD1CH5CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH5CON2_ACCRO << _AD1CH5CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH5CON2bits.ADCMPCNT = ADC_USER_AD1CH5CON2_ADCMPCNT;
			AD1CH5CON2bits.CMPMOD = ADC_USER_AD1CH5CON2_CMPMOD;
			AD1CH5CON2bits.ADCMPSTAT = ADC_USER_AD1CH5CON2_ADCMPSTAT;
			AD1CH5CON2bits.CMPCNTMOD = ADC_USER_AD1CH5CON2_CMPCNTMOD;
			AD1CH5CON2bits.CMPVAL = ADC_USER_AD1CH5CON2_CMPVAL;
			AD1CH5CON2bits.ACCBRST = ADC_USER_AD1CH5CON2_ACCBRST;
			AD1CH5CON2bits.ACCRO = ADC_USER_AD1CH5CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH5DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5DATA = ADC_USER_AD1CH5DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH5RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5RES = 
			( ADC_USER_AD1CH5RES_RES << _AD1CH5RES_RES_POSITION ) |
			( ADC_USER_AD1CH5RES_RESF << _AD1CH5RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH5RESbits.RES = ADC_USER_AD1CH5RES_RES;
			AD1CH5RESbits.RESF = ADC_USER_AD1CH5RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CNT = 
			( ADC_USER_AD1CH5CNT_CNT << _AD1CH5CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH5CNT_CNTSTAT << _AD1CH5CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH5CNTbits.CNT = ADC_USER_AD1CH5CNT_CNT;
			AD1CH5CNTbits.CNTSTAT = ADC_USER_AD1CH5CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH5CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CMPLO = ADC_USER_AD1CH5CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH5CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH5CMPHI = ADC_USER_AD1CH5CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH6CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CON1 = 
			( ADC_USER_AD1CH6CON1_TRG1SRC << _AD1CH6CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH6CON1_MODE << _AD1CH6CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH6CON1_TRG2SRC << _AD1CH6CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH6CON1_ACCNUM << _AD1CH6CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH6CON1_SAMC << _AD1CH6CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH6CON1_IRQSEL << _AD1CH6CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH6CON1_EIEN << _AD1CH6CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH6CON1_TRG1POL << _AD1CH6CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH6CON1_PINSEL << _AD1CH6CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH6CON1_NINSEL << _AD1CH6CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH6CON1_FRAC << _AD1CH6CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH6CON1_DIFF << _AD1CH6CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH6CON1bits.TRG1SRC = ADC_USER_AD1CH6CON1_TRG1SRC;
			AD1CH6CON1bits.MODE = ADC_USER_AD1CH6CON1_MODE;
			AD1CH6CON1bits.TRG2SRC = ADC_USER_AD1CH6CON1_TRG2SRC;
			AD1CH6CON1bits.ACCNUM = ADC_USER_AD1CH6CON1_ACCNUM;
			AD1CH6CON1bits.SAMC = ADC_USER_AD1CH6CON1_SAMC;
			AD1CH6CON1bits.IRQSEL = ADC_USER_AD1CH6CON1_IRQSEL;
			AD1CH6CON1bits.EIEN = ADC_USER_AD1CH6CON1_EIEN;
			AD1CH6CON1bits.TRG1POL = ADC_USER_AD1CH6CON1_TRG1POL;
			AD1CH6CON1bits.PINSEL = ADC_USER_AD1CH6CON1_PINSEL;
			AD1CH6CON1bits.NINSEL = ADC_USER_AD1CH6CON1_NINSEL;
			AD1CH6CON1bits.FRAC = ADC_USER_AD1CH6CON1_FRAC;
			AD1CH6CON1bits.DIFF = ADC_USER_AD1CH6CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH6CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CON2 = 
			( ADC_USER_AD1CH6CON2_ADCMPCNT << _AD1CH6CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH6CON2_CMPMOD << _AD1CH6CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH6CON2_ADCMPSTAT << _AD1CH6CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH6CON2_CMPCNTMOD << _AD1CH6CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH6CON2_CMPVAL << _AD1CH6CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH6CON2_ACCBRST << _AD1CH6CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH6CON2_ACCRO << _AD1CH6CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH6CON2bits.ADCMPCNT = ADC_USER_AD1CH6CON2_ADCMPCNT;
			AD1CH6CON2bits.CMPMOD = ADC_USER_AD1CH6CON2_CMPMOD;
			AD1CH6CON2bits.ADCMPSTAT = ADC_USER_AD1CH6CON2_ADCMPSTAT;
			AD1CH6CON2bits.CMPCNTMOD = ADC_USER_AD1CH6CON2_CMPCNTMOD;
			AD1CH6CON2bits.CMPVAL = ADC_USER_AD1CH6CON2_CMPVAL;
			AD1CH6CON2bits.ACCBRST = ADC_USER_AD1CH6CON2_ACCBRST;
			AD1CH6CON2bits.ACCRO = ADC_USER_AD1CH6CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH6DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6DATA = ADC_USER_AD1CH6DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH6RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6RES = 
			( ADC_USER_AD1CH6RES_RES << _AD1CH6RES_RES_POSITION ) |
			( ADC_USER_AD1CH6RES_RESF << _AD1CH6RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH6RESbits.RES = ADC_USER_AD1CH6RES_RES;
			AD1CH6RESbits.RESF = ADC_USER_AD1CH6RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CNT = 
			( ADC_USER_AD1CH6CNT_CNT << _AD1CH6CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH6CNT_CNTSTAT << _AD1CH6CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH6CNTbits.CNT = ADC_USER_AD1CH6CNT_CNT;
			AD1CH6CNTbits.CNTSTAT = ADC_USER_AD1CH6CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH6CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CMPLO = ADC_USER_AD1CH6CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH6CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6CMPHI = ADC_USER_AD1CH6CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH6ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH6ACC = ADC_USER_AD1CH6ACC;
	/*-----------------------------------------------------------------------*/
	/* AD1CH7CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CON1 = 
			( ADC_USER_AD1CH7CON1_TRG1SRC << _AD1CH7CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD1CH7CON1_MODE << _AD1CH7CON1_MODE_POSITION ) |
			( ADC_USER_AD1CH7CON1_TRG2SRC << _AD1CH7CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD1CH7CON1_ACCNUM << _AD1CH7CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD1CH7CON1_SAMC << _AD1CH7CON1_SAMC_POSITION ) |
			( ADC_USER_AD1CH7CON1_IRQSEL << _AD1CH7CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD1CH7CON1_EIEN << _AD1CH7CON1_EIEN_POSITION ) |
			( ADC_USER_AD1CH7CON1_TRG1POL << _AD1CH7CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD1CH7CON1_PINSEL << _AD1CH7CON1_PINSEL_POSITION ) |
			( ADC_USER_AD1CH7CON1_NINSEL << _AD1CH7CON1_NINSEL_POSITION ) |
			( ADC_USER_AD1CH7CON1_FRAC << _AD1CH7CON1_FRAC_POSITION ) |
			( ADC_USER_AD1CH7CON1_DIFF << _AD1CH7CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH7CON1bits.TRG1SRC = ADC_USER_AD1CH7CON1_TRG1SRC;
			AD1CH7CON1bits.MODE = ADC_USER_AD1CH7CON1_MODE;
			AD1CH7CON1bits.TRG2SRC = ADC_USER_AD1CH7CON1_TRG2SRC;
			AD1CH7CON1bits.ACCNUM = ADC_USER_AD1CH7CON1_ACCNUM;
			AD1CH7CON1bits.SAMC = ADC_USER_AD1CH7CON1_SAMC;
			AD1CH7CON1bits.IRQSEL = ADC_USER_AD1CH7CON1_IRQSEL;
			AD1CH7CON1bits.EIEN = ADC_USER_AD1CH7CON1_EIEN;
			AD1CH7CON1bits.TRG1POL = ADC_USER_AD1CH7CON1_TRG1POL;
			AD1CH7CON1bits.PINSEL = ADC_USER_AD1CH7CON1_PINSEL;
			AD1CH7CON1bits.NINSEL = ADC_USER_AD1CH7CON1_NINSEL;
			AD1CH7CON1bits.FRAC = ADC_USER_AD1CH7CON1_FRAC;
			AD1CH7CON1bits.DIFF = ADC_USER_AD1CH7CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH7CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CON2 = 
			( ADC_USER_AD1CH7CON2_ADCMPCNT << _AD1CH7CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD1CH7CON2_CMPMOD << _AD1CH7CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD1CH7CON2_ADCMPSTAT << _AD1CH7CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD1CH7CON2_CMPCNTMOD << _AD1CH7CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD1CH7CON2_CMPVAL << _AD1CH7CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD1CH7CON2_ACCBRST << _AD1CH7CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD1CH7CON2_ACCRO << _AD1CH7CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH7CON2bits.ADCMPCNT = ADC_USER_AD1CH7CON2_ADCMPCNT;
			AD1CH7CON2bits.CMPMOD = ADC_USER_AD1CH7CON2_CMPMOD;
			AD1CH7CON2bits.ADCMPSTAT = ADC_USER_AD1CH7CON2_ADCMPSTAT;
			AD1CH7CON2bits.CMPCNTMOD = ADC_USER_AD1CH7CON2_CMPCNTMOD;
			AD1CH7CON2bits.CMPVAL = ADC_USER_AD1CH7CON2_CMPVAL;
			AD1CH7CON2bits.ACCBRST = ADC_USER_AD1CH7CON2_ACCBRST;
			AD1CH7CON2bits.ACCRO = ADC_USER_AD1CH7CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH7DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7DATA = ADC_USER_AD1CH7DATA;
	/*-----------------------------------------------------------------------*/
	/* AD1CH7RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7RES = 
			( ADC_USER_AD1CH7RES_RES << _AD1CH7RES_RES_POSITION ) |
			( ADC_USER_AD1CH7RES_RESF << _AD1CH7RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH7RESbits.RES = ADC_USER_AD1CH7RES_RES;
			AD1CH7RESbits.RESF = ADC_USER_AD1CH7RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CNT = 
			( ADC_USER_AD1CH7CNT_CNT << _AD1CH7CNT_CNT_POSITION ) |
			( ADC_USER_AD1CH7CNT_CNTSTAT << _AD1CH7CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD1CH7CNTbits.CNT = ADC_USER_AD1CH7CNT_CNT;
			AD1CH7CNTbits.CNTSTAT = ADC_USER_AD1CH7CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD1CH7CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CMPLO = ADC_USER_AD1CH7CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD1CH7CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7CMPHI = ADC_USER_AD1CH7CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD1CH7ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD1CH7ACC = ADC_USER_AD1CH7ACC;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC2_Set_All_Register(void)
* @brief     ADC2レジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC2_Set_All_Register(void)
{
#if ( PMD_ADC2MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* AD2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CON = 
			( ADC_USER_AD2CON_CALCNT << _AD2CON_CALCNT_POSITION ) |
			( ADC_USER_AD2CON_BUFEN << _AD2CON_BUFEN_POSITION ) |
			( ADC_USER_AD2CON_TSTEN << _AD2CON_TSTEN_POSITION ) |
			( ADC_USER_AD2CON_TSTLOCK << _AD2CON_TSTLOCK_POSITION ) |
			( ADC_USER_AD2CON_ON << _AD2CON_ON_POSITION ) |
			( ADC_USER_AD2CON_STNDBY << _AD2CON_STNDBY_POSITION ) |
			( ADC_USER_AD2CON_RPTCNT << _AD2CON_RPTCNT_POSITION ) |
			( ADC_USER_AD2CON_MODE << _AD2CON_MODE_POSITION ) |
			( ADC_USER_AD2CON_CALRATE << _AD2CON_CALRATE_POSITION ) |
			( ADC_USER_AD2CON_ACALEN << _AD2CON_ACALEN_POSITION ) |
			( ADC_USER_AD2CON_CALREQ << _AD2CON_CALREQ_POSITION ) |
			( ADC_USER_AD2CON_CALRDY << _AD2CON_CALRDY_POSITION ) |
			( ADC_USER_AD2CON_ADRDY << _AD2CON_ADRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CONbits.CALCNT = ADC_USER_AD2CON_CALCNT;
			AD2CONbits.BUFEN = ADC_USER_AD2CON_BUFEN;
			AD2CONbits.TSTEN = ADC_USER_AD2CON_TSTEN;
			AD2CONbits.TSTLOCK = ADC_USER_AD2CON_TSTLOCK;
			AD2CONbits.ON = ADC_USER_AD2CON_ON;
			AD2CONbits.STNDBY = ADC_USER_AD2CON_STNDBY;
			AD2CONbits.RPTCNT = ADC_USER_AD2CON_RPTCNT;
			AD2CONbits.MODE = ADC_USER_AD2CON_MODE;
			AD2CONbits.CALRATE = ADC_USER_AD2CON_CALRATE;
			AD2CONbits.ACALEN = ADC_USER_AD2CON_ACALEN;
			AD2CONbits.CALREQ = ADC_USER_AD2CON_CALREQ;
			AD2CONbits.CALRDY = ADC_USER_AD2CON_CALRDY;
			AD2CONbits.ADRDY = ADC_USER_AD2CON_ADRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2DATAOVRレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2DATAOVR = ADC_USER_AD2DATAOVR;
	/*-----------------------------------------------------------------------*/
	/* AD2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2STAT = 
			( ADC_USER_AD2STAT_CH0RDY << _AD2STAT_CH0RDY_POSITION ) |
			( ADC_USER_AD2STAT_CH1RDY << _AD2STAT_CH1RDY_POSITION ) |
			( ADC_USER_AD2STAT_CH2RDY << _AD2STAT_CH2RDY_POSITION ) |
			( ADC_USER_AD2STAT_CH3RDY << _AD2STAT_CH3RDY_POSITION ) |
			( ADC_USER_AD2STAT_CH4RDY << _AD2STAT_CH4RDY_POSITION ) |
			( ADC_USER_AD2STAT_CH5RDY << _AD2STAT_CH5RDY_POSITION ) |
			( ADC_USER_AD2STAT_CH6RDY << _AD2STAT_CH6RDY_POSITION ) |
			( ADC_USER_AD2STAT_CH7RDY << _AD2STAT_CH7RDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2STATbits.CH0RDY = ADC_USER_AD2STAT_CH0RDY;
			AD2STATbits.CH1RDY = ADC_USER_AD2STAT_CH1RDY;
			AD2STATbits.CH2RDY = ADC_USER_AD2STAT_CH2RDY;
			AD2STATbits.CH3RDY = ADC_USER_AD2STAT_CH3RDY;
			AD2STATbits.CH4RDY = ADC_USER_AD2STAT_CH4RDY;
			AD2STATbits.CH5RDY = ADC_USER_AD2STAT_CH5RDY;
			AD2STATbits.CH6RDY = ADC_USER_AD2STAT_CH6RDY;
			AD2STATbits.CH7RDY = ADC_USER_AD2STAT_CH7RDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2RSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2RSTAT = 
			( ADC_USER_AD2RSTAT_CH0RRDY << _AD2RSTAT_CH0RRDY_POSITION ) |
			( ADC_USER_AD2RSTAT_CH1RRDY << _AD2RSTAT_CH1RRDY_POSITION ) |
			( ADC_USER_AD2RSTAT_CH2RRDY << _AD2RSTAT_CH2RRDY_POSITION ) |
			( ADC_USER_AD2RSTAT_CH3RRDY << _AD2RSTAT_CH3RRDY_POSITION ) |
			( ADC_USER_AD2RSTAT_CH4RRDY << _AD2RSTAT_CH4RRDY_POSITION ) |
			( ADC_USER_AD2RSTAT_CH5RRDY << _AD2RSTAT_CH5RRDY_POSITION ) |
			( ADC_USER_AD2RSTAT_CH6RRDY << _AD2RSTAT_CH6RRDY_POSITION ) |
			( ADC_USER_AD2RSTAT_CH7RRDY << _AD2RSTAT_CH7RRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2RSTATbits.CH0RRDY = ADC_USER_AD2RSTAT_CH0RRDY;
			AD2RSTATbits.CH1RRDY = ADC_USER_AD2RSTAT_CH1RRDY;
			AD2RSTATbits.CH2RRDY = ADC_USER_AD2RSTAT_CH2RRDY;
			AD2RSTATbits.CH3RRDY = ADC_USER_AD2RSTAT_CH3RRDY;
			AD2RSTATbits.CH4RRDY = ADC_USER_AD2RSTAT_CH4RRDY;
			AD2RSTATbits.CH5RRDY = ADC_USER_AD2RSTAT_CH5RRDY;
			AD2RSTATbits.CH6RRDY = ADC_USER_AD2RSTAT_CH6RRDY;
			AD2RSTATbits.CH7RRDY = ADC_USER_AD2RSTAT_CH7RRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CMPSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CMPSTAT = 
			( ADC_USER_AD2CMPSTAT_CH0FLG << _AD2CMPSTAT_CH0FLG_POSITION ) |
			( ADC_USER_AD2CMPSTAT_CH1FLG << _AD2CMPSTAT_CH1FLG_POSITION ) |
			( ADC_USER_AD2CMPSTAT_CH2FLG << _AD2CMPSTAT_CH2FLG_POSITION ) |
			( ADC_USER_AD2CMPSTAT_CH3FLG << _AD2CMPSTAT_CH3FLG_POSITION ) |
			( ADC_USER_AD2CMPSTAT_CH4FLG << _AD2CMPSTAT_CH4FLG_POSITION ) |
			( ADC_USER_AD2CMPSTAT_CH5FLG << _AD2CMPSTAT_CH5FLG_POSITION ) |
			( ADC_USER_AD2CMPSTAT_CH6FLG << _AD2CMPSTAT_CH6FLG_POSITION ) |
			( ADC_USER_AD2CMPSTAT_CH7FLG << _AD2CMPSTAT_CH7FLG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CMPSTATbits.CH0FLG = ADC_USER_AD2CMPSTAT_CH0FLG;
			AD2CMPSTATbits.CH1FLG = ADC_USER_AD2CMPSTAT_CH1FLG;
			AD2CMPSTATbits.CH2FLG = ADC_USER_AD2CMPSTAT_CH2FLG;
			AD2CMPSTATbits.CH3FLG = ADC_USER_AD2CMPSTAT_CH3FLG;
			AD2CMPSTATbits.CH4FLG = ADC_USER_AD2CMPSTAT_CH4FLG;
			AD2CMPSTATbits.CH5FLG = ADC_USER_AD2CMPSTAT_CH5FLG;
			AD2CMPSTATbits.CH6FLG = ADC_USER_AD2CMPSTAT_CH6FLG;
			AD2CMPSTATbits.CH7FLG = ADC_USER_AD2CMPSTAT_CH7FLG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2SWTRGレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2SWTRG = 
			( ADC_USER_AD2SWTRG_CH0TRG << _AD2SWTRG_CH0TRG_POSITION ) |
			( ADC_USER_AD2SWTRG_CH1TRG << _AD2SWTRG_CH1TRG_POSITION ) |
			( ADC_USER_AD2SWTRG_CH2TRG << _AD2SWTRG_CH2TRG_POSITION ) |
			( ADC_USER_AD2SWTRG_CH3TRG << _AD2SWTRG_CH3TRG_POSITION ) |
			( ADC_USER_AD2SWTRG_CH4TRG << _AD2SWTRG_CH4TRG_POSITION ) |
			( ADC_USER_AD2SWTRG_CH5TRG << _AD2SWTRG_CH5TRG_POSITION ) |
			( ADC_USER_AD2SWTRG_CH6TRG << _AD2SWTRG_CH6TRG_POSITION ) |
			( ADC_USER_AD2SWTRG_CH7TRG << _AD2SWTRG_CH7TRG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2SWTRGbits.CH0TRG = ADC_USER_AD2SWTRG_CH0TRG;
			AD2SWTRGbits.CH1TRG = ADC_USER_AD2SWTRG_CH1TRG;
			AD2SWTRGbits.CH2TRG = ADC_USER_AD2SWTRG_CH2TRG;
			AD2SWTRGbits.CH3TRG = ADC_USER_AD2SWTRG_CH3TRG;
			AD2SWTRGbits.CH4TRG = ADC_USER_AD2SWTRG_CH4TRG;
			AD2SWTRGbits.CH5TRG = ADC_USER_AD2SWTRG_CH5TRG;
			AD2SWTRGbits.CH6TRG = ADC_USER_AD2SWTRG_CH6TRG;
			AD2SWTRGbits.CH7TRG = ADC_USER_AD2SWTRG_CH7TRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH0CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CON1 = 
			( ADC_USER_AD2CH0CON1_TRG1SRC << _AD2CH0CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH0CON1_MODE << _AD2CH0CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH0CON1_TRG2SRC << _AD2CH0CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH0CON1_ACCNUM << _AD2CH0CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH0CON1_SAMC << _AD2CH0CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH0CON1_IRQSEL << _AD2CH0CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH0CON1_EIEN << _AD2CH0CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH0CON1_TRG1POL << _AD2CH0CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH0CON1_PINSEL << _AD2CH0CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH0CON1_NINSEL << _AD2CH0CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH0CON1_FRAC << _AD2CH0CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH0CON1_DIFF << _AD2CH0CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH0CON1bits.TRG1SRC = ADC_USER_AD2CH0CON1_TRG1SRC;
			AD2CH0CON1bits.MODE = ADC_USER_AD2CH0CON1_MODE;
			AD2CH0CON1bits.TRG2SRC = ADC_USER_AD2CH0CON1_TRG2SRC;
			AD2CH0CON1bits.ACCNUM = ADC_USER_AD2CH0CON1_ACCNUM;
			AD2CH0CON1bits.SAMC = ADC_USER_AD2CH0CON1_SAMC;
			AD2CH0CON1bits.IRQSEL = ADC_USER_AD2CH0CON1_IRQSEL;
			AD2CH0CON1bits.EIEN = ADC_USER_AD2CH0CON1_EIEN;
			AD2CH0CON1bits.TRG1POL = ADC_USER_AD2CH0CON1_TRG1POL;
			AD2CH0CON1bits.PINSEL = ADC_USER_AD2CH0CON1_PINSEL;
			AD2CH0CON1bits.NINSEL = ADC_USER_AD2CH0CON1_NINSEL;
			AD2CH0CON1bits.FRAC = ADC_USER_AD2CH0CON1_FRAC;
			AD2CH0CON1bits.DIFF = ADC_USER_AD2CH0CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH0CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CON2 = 
			( ADC_USER_AD2CH0CON2_ADCMPCNT << _AD2CH0CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH0CON2_CMPMOD << _AD2CH0CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH0CON2_ADCMPSTAT << _AD2CH0CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH0CON2_CMPCNTMOD << _AD2CH0CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH0CON2_CMPVAL << _AD2CH0CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH0CON2_ACCBRST << _AD2CH0CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH0CON2_ACCRO << _AD2CH0CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH0CON2bits.ADCMPCNT = ADC_USER_AD2CH0CON2_ADCMPCNT;
			AD2CH0CON2bits.CMPMOD = ADC_USER_AD2CH0CON2_CMPMOD;
			AD2CH0CON2bits.ADCMPSTAT = ADC_USER_AD2CH0CON2_ADCMPSTAT;
			AD2CH0CON2bits.CMPCNTMOD = ADC_USER_AD2CH0CON2_CMPCNTMOD;
			AD2CH0CON2bits.CMPVAL = ADC_USER_AD2CH0CON2_CMPVAL;
			AD2CH0CON2bits.ACCBRST = ADC_USER_AD2CH0CON2_ACCBRST;
			AD2CH0CON2bits.ACCRO = ADC_USER_AD2CH0CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH0DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0DATA = ADC_USER_AD2CH0DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH0RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0RES = 
			( ADC_USER_AD2CH0RES_RES << _AD2CH0RES_RES_POSITION ) |
			( ADC_USER_AD2CH0RES_RESF << _AD2CH0RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH0RESbits.RES = ADC_USER_AD2CH0RES_RES;
			AD2CH0RESbits.RESF = ADC_USER_AD2CH0RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CNT = 
			( ADC_USER_AD2CH0CNT_CNT << _AD2CH0CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH0CNT_CNTSTAT << _AD2CH0CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH0CNTbits.CNT = ADC_USER_AD2CH0CNT_CNT;
			AD2CH0CNTbits.CNTSTAT = ADC_USER_AD2CH0CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH0CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CMPLO = ADC_USER_AD2CH0CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH0CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH0CMPHI = ADC_USER_AD2CH0CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CON1 = 
			( ADC_USER_AD2CH1CON1_TRG1SRC << _AD2CH1CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH1CON1_MODE << _AD2CH1CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH1CON1_TRG2SRC << _AD2CH1CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH1CON1_ACCNUM << _AD2CH1CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH1CON1_SAMC << _AD2CH1CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH1CON1_IRQSEL << _AD2CH1CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH1CON1_EIEN << _AD2CH1CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH1CON1_TRG1POL << _AD2CH1CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH1CON1_PINSEL << _AD2CH1CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH1CON1_NINSEL << _AD2CH1CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH1CON1_FRAC << _AD2CH1CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH1CON1_DIFF << _AD2CH1CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH1CON1bits.TRG1SRC = ADC_USER_AD2CH1CON1_TRG1SRC;
			AD2CH1CON1bits.MODE = ADC_USER_AD2CH1CON1_MODE;
			AD2CH1CON1bits.TRG2SRC = ADC_USER_AD2CH1CON1_TRG2SRC;
			AD2CH1CON1bits.ACCNUM = ADC_USER_AD2CH1CON1_ACCNUM;
			AD2CH1CON1bits.SAMC = ADC_USER_AD2CH1CON1_SAMC;
			AD2CH1CON1bits.IRQSEL = ADC_USER_AD2CH1CON1_IRQSEL;
			AD2CH1CON1bits.EIEN = ADC_USER_AD2CH1CON1_EIEN;
			AD2CH1CON1bits.TRG1POL = ADC_USER_AD2CH1CON1_TRG1POL;
			AD2CH1CON1bits.PINSEL = ADC_USER_AD2CH1CON1_PINSEL;
			AD2CH1CON1bits.NINSEL = ADC_USER_AD2CH1CON1_NINSEL;
			AD2CH1CON1bits.FRAC = ADC_USER_AD2CH1CON1_FRAC;
			AD2CH1CON1bits.DIFF = ADC_USER_AD2CH1CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CON2 = 
			( ADC_USER_AD2CH1CON2_ADCMPCNT << _AD2CH1CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH1CON2_CMPMOD << _AD2CH1CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH1CON2_ADCMPSTAT << _AD2CH1CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH1CON2_CMPCNTMOD << _AD2CH1CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH1CON2_CMPVAL << _AD2CH1CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH1CON2_ACCBRST << _AD2CH1CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH1CON2_ACCRO << _AD2CH1CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH1CON2bits.ADCMPCNT = ADC_USER_AD2CH1CON2_ADCMPCNT;
			AD2CH1CON2bits.CMPMOD = ADC_USER_AD2CH1CON2_CMPMOD;
			AD2CH1CON2bits.ADCMPSTAT = ADC_USER_AD2CH1CON2_ADCMPSTAT;
			AD2CH1CON2bits.CMPCNTMOD = ADC_USER_AD2CH1CON2_CMPCNTMOD;
			AD2CH1CON2bits.CMPVAL = ADC_USER_AD2CH1CON2_CMPVAL;
			AD2CH1CON2bits.ACCBRST = ADC_USER_AD2CH1CON2_ACCBRST;
			AD2CH1CON2bits.ACCRO = ADC_USER_AD2CH1CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH1DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1DATA = ADC_USER_AD2CH1DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH1RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1RES = 
			( ADC_USER_AD2CH1RES_RES << _AD2CH1RES_RES_POSITION ) |
			( ADC_USER_AD2CH1RES_RESF << _AD2CH1RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH1RESbits.RES = ADC_USER_AD2CH1RES_RES;
			AD2CH1RESbits.RESF = ADC_USER_AD2CH1RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CNT = 
			( ADC_USER_AD2CH1CNT_CNT << _AD2CH1CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH1CNT_CNTSTAT << _AD2CH1CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH1CNTbits.CNT = ADC_USER_AD2CH1CNT_CNT;
			AD2CH1CNTbits.CNTSTAT = ADC_USER_AD2CH1CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH1CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CMPLO = ADC_USER_AD2CH1CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH1CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH1CMPHI = ADC_USER_AD2CH1CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CON1 = 
			( ADC_USER_AD2CH2CON1_TRG1SRC << _AD2CH2CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH2CON1_MODE << _AD2CH2CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH2CON1_TRG2SRC << _AD2CH2CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH2CON1_ACCNUM << _AD2CH2CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH2CON1_SAMC << _AD2CH2CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH2CON1_IRQSEL << _AD2CH2CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH2CON1_EIEN << _AD2CH2CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH2CON1_TRG1POL << _AD2CH2CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH2CON1_PINSEL << _AD2CH2CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH2CON1_NINSEL << _AD2CH2CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH2CON1_FRAC << _AD2CH2CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH2CON1_DIFF << _AD2CH2CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH2CON1bits.TRG1SRC = ADC_USER_AD2CH2CON1_TRG1SRC;
			AD2CH2CON1bits.MODE = ADC_USER_AD2CH2CON1_MODE;
			AD2CH2CON1bits.TRG2SRC = ADC_USER_AD2CH2CON1_TRG2SRC;
			AD2CH2CON1bits.ACCNUM = ADC_USER_AD2CH2CON1_ACCNUM;
			AD2CH2CON1bits.SAMC = ADC_USER_AD2CH2CON1_SAMC;
			AD2CH2CON1bits.IRQSEL = ADC_USER_AD2CH2CON1_IRQSEL;
			AD2CH2CON1bits.EIEN = ADC_USER_AD2CH2CON1_EIEN;
			AD2CH2CON1bits.TRG1POL = ADC_USER_AD2CH2CON1_TRG1POL;
			AD2CH2CON1bits.PINSEL = ADC_USER_AD2CH2CON1_PINSEL;
			AD2CH2CON1bits.NINSEL = ADC_USER_AD2CH2CON1_NINSEL;
			AD2CH2CON1bits.FRAC = ADC_USER_AD2CH2CON1_FRAC;
			AD2CH2CON1bits.DIFF = ADC_USER_AD2CH2CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CON2 = 
			( ADC_USER_AD2CH2CON2_ADCMPCNT << _AD2CH2CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH2CON2_CMPMOD << _AD2CH2CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH2CON2_ADCMPSTAT << _AD2CH2CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH2CON2_CMPCNTMOD << _AD2CH2CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH2CON2_CMPVAL << _AD2CH2CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH2CON2_ACCBRST << _AD2CH2CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH2CON2_ACCRO << _AD2CH2CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH2CON2bits.ADCMPCNT = ADC_USER_AD2CH2CON2_ADCMPCNT;
			AD2CH2CON2bits.CMPMOD = ADC_USER_AD2CH2CON2_CMPMOD;
			AD2CH2CON2bits.ADCMPSTAT = ADC_USER_AD2CH2CON2_ADCMPSTAT;
			AD2CH2CON2bits.CMPCNTMOD = ADC_USER_AD2CH2CON2_CMPCNTMOD;
			AD2CH2CON2bits.CMPVAL = ADC_USER_AD2CH2CON2_CMPVAL;
			AD2CH2CON2bits.ACCBRST = ADC_USER_AD2CH2CON2_ACCBRST;
			AD2CH2CON2bits.ACCRO = ADC_USER_AD2CH2CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH2DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2DATA = ADC_USER_AD2CH2DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH2RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2RES = 
			( ADC_USER_AD2CH2RES_RES << _AD2CH2RES_RES_POSITION ) |
			( ADC_USER_AD2CH2RES_RESF << _AD2CH2RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH2RESbits.RES = ADC_USER_AD2CH2RES_RES;
			AD2CH2RESbits.RESF = ADC_USER_AD2CH2RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CNT = 
			( ADC_USER_AD2CH2CNT_CNT << _AD2CH2CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH2CNT_CNTSTAT << _AD2CH2CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH2CNTbits.CNT = ADC_USER_AD2CH2CNT_CNT;
			AD2CH2CNTbits.CNTSTAT = ADC_USER_AD2CH2CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH2CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CMPLO = ADC_USER_AD2CH2CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH2CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH2CMPHI = ADC_USER_AD2CH2CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CON1 = 
			( ADC_USER_AD2CH3CON1_TRG1SRC << _AD2CH3CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH3CON1_MODE << _AD2CH3CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH3CON1_TRG2SRC << _AD2CH3CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH3CON1_ACCNUM << _AD2CH3CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH3CON1_SAMC << _AD2CH3CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH3CON1_IRQSEL << _AD2CH3CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH3CON1_EIEN << _AD2CH3CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH3CON1_TRG1POL << _AD2CH3CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH3CON1_PINSEL << _AD2CH3CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH3CON1_NINSEL << _AD2CH3CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH3CON1_FRAC << _AD2CH3CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH3CON1_DIFF << _AD2CH3CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH3CON1bits.TRG1SRC = ADC_USER_AD2CH3CON1_TRG1SRC;
			AD2CH3CON1bits.MODE = ADC_USER_AD2CH3CON1_MODE;
			AD2CH3CON1bits.TRG2SRC = ADC_USER_AD2CH3CON1_TRG2SRC;
			AD2CH3CON1bits.ACCNUM = ADC_USER_AD2CH3CON1_ACCNUM;
			AD2CH3CON1bits.SAMC = ADC_USER_AD2CH3CON1_SAMC;
			AD2CH3CON1bits.IRQSEL = ADC_USER_AD2CH3CON1_IRQSEL;
			AD2CH3CON1bits.EIEN = ADC_USER_AD2CH3CON1_EIEN;
			AD2CH3CON1bits.TRG1POL = ADC_USER_AD2CH3CON1_TRG1POL;
			AD2CH3CON1bits.PINSEL = ADC_USER_AD2CH3CON1_PINSEL;
			AD2CH3CON1bits.NINSEL = ADC_USER_AD2CH3CON1_NINSEL;
			AD2CH3CON1bits.FRAC = ADC_USER_AD2CH3CON1_FRAC;
			AD2CH3CON1bits.DIFF = ADC_USER_AD2CH3CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CON2 = 
			( ADC_USER_AD2CH3CON2_ADCMPCNT << _AD2CH3CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH3CON2_CMPMOD << _AD2CH3CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH3CON2_ADCMPSTAT << _AD2CH3CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH3CON2_CMPCNTMOD << _AD2CH3CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH3CON2_CMPVAL << _AD2CH3CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH3CON2_ACCBRST << _AD2CH3CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH3CON2_ACCRO << _AD2CH3CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH3CON2bits.ADCMPCNT = ADC_USER_AD2CH3CON2_ADCMPCNT;
			AD2CH3CON2bits.CMPMOD = ADC_USER_AD2CH3CON2_CMPMOD;
			AD2CH3CON2bits.ADCMPSTAT = ADC_USER_AD2CH3CON2_ADCMPSTAT;
			AD2CH3CON2bits.CMPCNTMOD = ADC_USER_AD2CH3CON2_CMPCNTMOD;
			AD2CH3CON2bits.CMPVAL = ADC_USER_AD2CH3CON2_CMPVAL;
			AD2CH3CON2bits.ACCBRST = ADC_USER_AD2CH3CON2_ACCBRST;
			AD2CH3CON2bits.ACCRO = ADC_USER_AD2CH3CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH3DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3DATA = ADC_USER_AD2CH3DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH3RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3RES = 
			( ADC_USER_AD2CH3RES_RES << _AD2CH3RES_RES_POSITION ) |
			( ADC_USER_AD2CH3RES_RESF << _AD2CH3RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH3RESbits.RES = ADC_USER_AD2CH3RES_RES;
			AD2CH3RESbits.RESF = ADC_USER_AD2CH3RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CNT = 
			( ADC_USER_AD2CH3CNT_CNT << _AD2CH3CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH3CNT_CNTSTAT << _AD2CH3CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH3CNTbits.CNT = ADC_USER_AD2CH3CNT_CNT;
			AD2CH3CNTbits.CNTSTAT = ADC_USER_AD2CH3CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH3CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CMPLO = ADC_USER_AD2CH3CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH3CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH3CMPHI = ADC_USER_AD2CH3CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CON1 = 
			( ADC_USER_AD2CH4CON1_TRG1SRC << _AD2CH4CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH4CON1_MODE << _AD2CH4CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH4CON1_TRG2SRC << _AD2CH4CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH4CON1_ACCNUM << _AD2CH4CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH4CON1_SAMC << _AD2CH4CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH4CON1_IRQSEL << _AD2CH4CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH4CON1_EIEN << _AD2CH4CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH4CON1_TRG1POL << _AD2CH4CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH4CON1_PINSEL << _AD2CH4CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH4CON1_NINSEL << _AD2CH4CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH4CON1_FRAC << _AD2CH4CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH4CON1_DIFF << _AD2CH4CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH4CON1bits.TRG1SRC = ADC_USER_AD2CH4CON1_TRG1SRC;
			AD2CH4CON1bits.MODE = ADC_USER_AD2CH4CON1_MODE;
			AD2CH4CON1bits.TRG2SRC = ADC_USER_AD2CH4CON1_TRG2SRC;
			AD2CH4CON1bits.ACCNUM = ADC_USER_AD2CH4CON1_ACCNUM;
			AD2CH4CON1bits.SAMC = ADC_USER_AD2CH4CON1_SAMC;
			AD2CH4CON1bits.IRQSEL = ADC_USER_AD2CH4CON1_IRQSEL;
			AD2CH4CON1bits.EIEN = ADC_USER_AD2CH4CON1_EIEN;
			AD2CH4CON1bits.TRG1POL = ADC_USER_AD2CH4CON1_TRG1POL;
			AD2CH4CON1bits.PINSEL = ADC_USER_AD2CH4CON1_PINSEL;
			AD2CH4CON1bits.NINSEL = ADC_USER_AD2CH4CON1_NINSEL;
			AD2CH4CON1bits.FRAC = ADC_USER_AD2CH4CON1_FRAC;
			AD2CH4CON1bits.DIFF = ADC_USER_AD2CH4CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CON2 = 
			( ADC_USER_AD2CH4CON2_ADCMPCNT << _AD2CH4CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH4CON2_CMPMOD << _AD2CH4CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH4CON2_ADCMPSTAT << _AD2CH4CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH4CON2_CMPCNTMOD << _AD2CH4CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH4CON2_CMPVAL << _AD2CH4CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH4CON2_ACCBRST << _AD2CH4CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH4CON2_ACCRO << _AD2CH4CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH4CON2bits.ADCMPCNT = ADC_USER_AD2CH4CON2_ADCMPCNT;
			AD2CH4CON2bits.CMPMOD = ADC_USER_AD2CH4CON2_CMPMOD;
			AD2CH4CON2bits.ADCMPSTAT = ADC_USER_AD2CH4CON2_ADCMPSTAT;
			AD2CH4CON2bits.CMPCNTMOD = ADC_USER_AD2CH4CON2_CMPCNTMOD;
			AD2CH4CON2bits.CMPVAL = ADC_USER_AD2CH4CON2_CMPVAL;
			AD2CH4CON2bits.ACCBRST = ADC_USER_AD2CH4CON2_ACCBRST;
			AD2CH4CON2bits.ACCRO = ADC_USER_AD2CH4CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH4DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4DATA = ADC_USER_AD2CH4DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH4RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4RES = 
			( ADC_USER_AD2CH4RES_RES << _AD2CH4RES_RES_POSITION ) |
			( ADC_USER_AD2CH4RES_RESF << _AD2CH4RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH4RESbits.RES = ADC_USER_AD2CH4RES_RES;
			AD2CH4RESbits.RESF = ADC_USER_AD2CH4RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CNT = 
			( ADC_USER_AD2CH4CNT_CNT << _AD2CH4CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH4CNT_CNTSTAT << _AD2CH4CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH4CNTbits.CNT = ADC_USER_AD2CH4CNT_CNT;
			AD2CH4CNTbits.CNTSTAT = ADC_USER_AD2CH4CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH4CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CMPLO = ADC_USER_AD2CH4CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH4CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH4CMPHI = ADC_USER_AD2CH4CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH5CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CON1 = 
			( ADC_USER_AD2CH5CON1_TRG1SRC << _AD2CH5CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH5CON1_MODE << _AD2CH5CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH5CON1_TRG2SRC << _AD2CH5CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH5CON1_ACCNUM << _AD2CH5CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH5CON1_SAMC << _AD2CH5CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH5CON1_IRQSEL << _AD2CH5CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH5CON1_EIEN << _AD2CH5CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH5CON1_TRG1POL << _AD2CH5CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH5CON1_PINSEL << _AD2CH5CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH5CON1_NINSEL << _AD2CH5CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH5CON1_FRAC << _AD2CH5CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH5CON1_DIFF << _AD2CH5CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH5CON1bits.TRG1SRC = ADC_USER_AD2CH5CON1_TRG1SRC;
			AD2CH5CON1bits.MODE = ADC_USER_AD2CH5CON1_MODE;
			AD2CH5CON1bits.TRG2SRC = ADC_USER_AD2CH5CON1_TRG2SRC;
			AD2CH5CON1bits.ACCNUM = ADC_USER_AD2CH5CON1_ACCNUM;
			AD2CH5CON1bits.SAMC = ADC_USER_AD2CH5CON1_SAMC;
			AD2CH5CON1bits.IRQSEL = ADC_USER_AD2CH5CON1_IRQSEL;
			AD2CH5CON1bits.EIEN = ADC_USER_AD2CH5CON1_EIEN;
			AD2CH5CON1bits.TRG1POL = ADC_USER_AD2CH5CON1_TRG1POL;
			AD2CH5CON1bits.PINSEL = ADC_USER_AD2CH5CON1_PINSEL;
			AD2CH5CON1bits.NINSEL = ADC_USER_AD2CH5CON1_NINSEL;
			AD2CH5CON1bits.FRAC = ADC_USER_AD2CH5CON1_FRAC;
			AD2CH5CON1bits.DIFF = ADC_USER_AD2CH5CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH5CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CON2 = 
			( ADC_USER_AD2CH5CON2_ADCMPCNT << _AD2CH5CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH5CON2_CMPMOD << _AD2CH5CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH5CON2_ADCMPSTAT << _AD2CH5CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH5CON2_CMPCNTMOD << _AD2CH5CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH5CON2_CMPVAL << _AD2CH5CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH5CON2_ACCBRST << _AD2CH5CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH5CON2_ACCRO << _AD2CH5CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH5CON2bits.ADCMPCNT = ADC_USER_AD2CH5CON2_ADCMPCNT;
			AD2CH5CON2bits.CMPMOD = ADC_USER_AD2CH5CON2_CMPMOD;
			AD2CH5CON2bits.ADCMPSTAT = ADC_USER_AD2CH5CON2_ADCMPSTAT;
			AD2CH5CON2bits.CMPCNTMOD = ADC_USER_AD2CH5CON2_CMPCNTMOD;
			AD2CH5CON2bits.CMPVAL = ADC_USER_AD2CH5CON2_CMPVAL;
			AD2CH5CON2bits.ACCBRST = ADC_USER_AD2CH5CON2_ACCBRST;
			AD2CH5CON2bits.ACCRO = ADC_USER_AD2CH5CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH5DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5DATA = ADC_USER_AD2CH5DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH5RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5RES = 
			( ADC_USER_AD2CH5RES_RES << _AD2CH5RES_RES_POSITION ) |
			( ADC_USER_AD2CH5RES_RESF << _AD2CH5RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH5RESbits.RES = ADC_USER_AD2CH5RES_RES;
			AD2CH5RESbits.RESF = ADC_USER_AD2CH5RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CNT = 
			( ADC_USER_AD2CH5CNT_CNT << _AD2CH5CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH5CNT_CNTSTAT << _AD2CH5CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH5CNTbits.CNT = ADC_USER_AD2CH5CNT_CNT;
			AD2CH5CNTbits.CNTSTAT = ADC_USER_AD2CH5CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH5CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CMPLO = ADC_USER_AD2CH5CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH5CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH5CMPHI = ADC_USER_AD2CH5CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH6CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CON1 = 
			( ADC_USER_AD2CH6CON1_TRG1SRC << _AD2CH6CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH6CON1_MODE << _AD2CH6CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH6CON1_TRG2SRC << _AD2CH6CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH6CON1_ACCNUM << _AD2CH6CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH6CON1_SAMC << _AD2CH6CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH6CON1_IRQSEL << _AD2CH6CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH6CON1_EIEN << _AD2CH6CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH6CON1_TRG1POL << _AD2CH6CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH6CON1_PINSEL << _AD2CH6CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH6CON1_NINSEL << _AD2CH6CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH6CON1_FRAC << _AD2CH6CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH6CON1_DIFF << _AD2CH6CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH6CON1bits.TRG1SRC = ADC_USER_AD2CH6CON1_TRG1SRC;
			AD2CH6CON1bits.MODE = ADC_USER_AD2CH6CON1_MODE;
			AD2CH6CON1bits.TRG2SRC = ADC_USER_AD2CH6CON1_TRG2SRC;
			AD2CH6CON1bits.ACCNUM = ADC_USER_AD2CH6CON1_ACCNUM;
			AD2CH6CON1bits.SAMC = ADC_USER_AD2CH6CON1_SAMC;
			AD2CH6CON1bits.IRQSEL = ADC_USER_AD2CH6CON1_IRQSEL;
			AD2CH6CON1bits.EIEN = ADC_USER_AD2CH6CON1_EIEN;
			AD2CH6CON1bits.TRG1POL = ADC_USER_AD2CH6CON1_TRG1POL;
			AD2CH6CON1bits.PINSEL = ADC_USER_AD2CH6CON1_PINSEL;
			AD2CH6CON1bits.NINSEL = ADC_USER_AD2CH6CON1_NINSEL;
			AD2CH6CON1bits.FRAC = ADC_USER_AD2CH6CON1_FRAC;
			AD2CH6CON1bits.DIFF = ADC_USER_AD2CH6CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH6CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CON2 = 
			( ADC_USER_AD2CH6CON2_ADCMPCNT << _AD2CH6CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH6CON2_CMPMOD << _AD2CH6CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH6CON2_ADCMPSTAT << _AD2CH6CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH6CON2_CMPCNTMOD << _AD2CH6CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH6CON2_CMPVAL << _AD2CH6CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH6CON2_ACCBRST << _AD2CH6CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH6CON2_ACCRO << _AD2CH6CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH6CON2bits.ADCMPCNT = ADC_USER_AD2CH6CON2_ADCMPCNT;
			AD2CH6CON2bits.CMPMOD = ADC_USER_AD2CH6CON2_CMPMOD;
			AD2CH6CON2bits.ADCMPSTAT = ADC_USER_AD2CH6CON2_ADCMPSTAT;
			AD2CH6CON2bits.CMPCNTMOD = ADC_USER_AD2CH6CON2_CMPCNTMOD;
			AD2CH6CON2bits.CMPVAL = ADC_USER_AD2CH6CON2_CMPVAL;
			AD2CH6CON2bits.ACCBRST = ADC_USER_AD2CH6CON2_ACCBRST;
			AD2CH6CON2bits.ACCRO = ADC_USER_AD2CH6CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH6DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6DATA = ADC_USER_AD2CH6DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH6RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6RES = 
			( ADC_USER_AD2CH6RES_RES << _AD2CH6RES_RES_POSITION ) |
			( ADC_USER_AD2CH6RES_RESF << _AD2CH6RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH6RESbits.RES = ADC_USER_AD2CH6RES_RES;
			AD2CH6RESbits.RESF = ADC_USER_AD2CH6RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CNT = 
			( ADC_USER_AD2CH6CNT_CNT << _AD2CH6CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH6CNT_CNTSTAT << _AD2CH6CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH6CNTbits.CNT = ADC_USER_AD2CH6CNT_CNT;
			AD2CH6CNTbits.CNTSTAT = ADC_USER_AD2CH6CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH6CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CMPLO = ADC_USER_AD2CH6CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH6CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6CMPHI = ADC_USER_AD2CH6CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH6ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH6ACC = ADC_USER_AD2CH6ACC;
	/*-----------------------------------------------------------------------*/
	/* AD2CH7CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CON1 = 
			( ADC_USER_AD2CH7CON1_TRG1SRC << _AD2CH7CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD2CH7CON1_MODE << _AD2CH7CON1_MODE_POSITION ) |
			( ADC_USER_AD2CH7CON1_TRG2SRC << _AD2CH7CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD2CH7CON1_ACCNUM << _AD2CH7CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD2CH7CON1_SAMC << _AD2CH7CON1_SAMC_POSITION ) |
			( ADC_USER_AD2CH7CON1_IRQSEL << _AD2CH7CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD2CH7CON1_EIEN << _AD2CH7CON1_EIEN_POSITION ) |
			( ADC_USER_AD2CH7CON1_TRG1POL << _AD2CH7CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD2CH7CON1_PINSEL << _AD2CH7CON1_PINSEL_POSITION ) |
			( ADC_USER_AD2CH7CON1_NINSEL << _AD2CH7CON1_NINSEL_POSITION ) |
			( ADC_USER_AD2CH7CON1_FRAC << _AD2CH7CON1_FRAC_POSITION ) |
			( ADC_USER_AD2CH7CON1_DIFF << _AD2CH7CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH7CON1bits.TRG1SRC = ADC_USER_AD2CH7CON1_TRG1SRC;
			AD2CH7CON1bits.MODE = ADC_USER_AD2CH7CON1_MODE;
			AD2CH7CON1bits.TRG2SRC = ADC_USER_AD2CH7CON1_TRG2SRC;
			AD2CH7CON1bits.ACCNUM = ADC_USER_AD2CH7CON1_ACCNUM;
			AD2CH7CON1bits.SAMC = ADC_USER_AD2CH7CON1_SAMC;
			AD2CH7CON1bits.IRQSEL = ADC_USER_AD2CH7CON1_IRQSEL;
			AD2CH7CON1bits.EIEN = ADC_USER_AD2CH7CON1_EIEN;
			AD2CH7CON1bits.TRG1POL = ADC_USER_AD2CH7CON1_TRG1POL;
			AD2CH7CON1bits.PINSEL = ADC_USER_AD2CH7CON1_PINSEL;
			AD2CH7CON1bits.NINSEL = ADC_USER_AD2CH7CON1_NINSEL;
			AD2CH7CON1bits.FRAC = ADC_USER_AD2CH7CON1_FRAC;
			AD2CH7CON1bits.DIFF = ADC_USER_AD2CH7CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH7CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CON2 = 
			( ADC_USER_AD2CH7CON2_ADCMPCNT << _AD2CH7CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD2CH7CON2_CMPMOD << _AD2CH7CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD2CH7CON2_ADCMPSTAT << _AD2CH7CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD2CH7CON2_CMPCNTMOD << _AD2CH7CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD2CH7CON2_CMPVAL << _AD2CH7CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD2CH7CON2_ACCBRST << _AD2CH7CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD2CH7CON2_ACCRO << _AD2CH7CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH7CON2bits.ADCMPCNT = ADC_USER_AD2CH7CON2_ADCMPCNT;
			AD2CH7CON2bits.CMPMOD = ADC_USER_AD2CH7CON2_CMPMOD;
			AD2CH7CON2bits.ADCMPSTAT = ADC_USER_AD2CH7CON2_ADCMPSTAT;
			AD2CH7CON2bits.CMPCNTMOD = ADC_USER_AD2CH7CON2_CMPCNTMOD;
			AD2CH7CON2bits.CMPVAL = ADC_USER_AD2CH7CON2_CMPVAL;
			AD2CH7CON2bits.ACCBRST = ADC_USER_AD2CH7CON2_ACCBRST;
			AD2CH7CON2bits.ACCRO = ADC_USER_AD2CH7CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH7DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7DATA = ADC_USER_AD2CH7DATA;
	/*-----------------------------------------------------------------------*/
	/* AD2CH7RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7RES = 
			( ADC_USER_AD2CH7RES_RES << _AD2CH7RES_RES_POSITION ) |
			( ADC_USER_AD2CH7RES_RESF << _AD2CH7RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH7RESbits.RES = ADC_USER_AD2CH7RES_RES;
			AD2CH7RESbits.RESF = ADC_USER_AD2CH7RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CNT = 
			( ADC_USER_AD2CH7CNT_CNT << _AD2CH7CNT_CNT_POSITION ) |
			( ADC_USER_AD2CH7CNT_CNTSTAT << _AD2CH7CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD2CH7CNTbits.CNT = ADC_USER_AD2CH7CNT_CNT;
			AD2CH7CNTbits.CNTSTAT = ADC_USER_AD2CH7CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD2CH7CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CMPLO = ADC_USER_AD2CH7CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD2CH7CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7CMPHI = ADC_USER_AD2CH7CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD2CH7ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD2CH7ACC = ADC_USER_AD2CH7ACC;

#endif	
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC3_Set_All_Register(void)
* @brief     ADC3レジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC3_Set_All_Register(void)
{
#if ( PMD_ADC3MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* AD3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CON = 
			( ADC_USER_AD3CON_CALCNT << _AD3CON_CALCNT_POSITION ) |
			( ADC_USER_AD3CON_BUFEN << _AD3CON_BUFEN_POSITION ) |
			( ADC_USER_AD3CON_TSTEN << _AD3CON_TSTEN_POSITION ) |
			( ADC_USER_AD3CON_TSTLOCK << _AD3CON_TSTLOCK_POSITION ) |
			( ADC_USER_AD3CON_ON << _AD3CON_ON_POSITION ) |
			( ADC_USER_AD3CON_STNDBY << _AD3CON_STNDBY_POSITION ) |
			( ADC_USER_AD3CON_RPTCNT << _AD3CON_RPTCNT_POSITION ) |
			( ADC_USER_AD3CON_MODE << _AD3CON_MODE_POSITION ) |
			( ADC_USER_AD3CON_CALRATE << _AD3CON_CALRATE_POSITION ) |
			( ADC_USER_AD3CON_ACALEN << _AD3CON_ACALEN_POSITION ) |
			( ADC_USER_AD3CON_CALREQ << _AD3CON_CALREQ_POSITION ) |
			( ADC_USER_AD3CON_CALRDY << _AD3CON_CALRDY_POSITION ) |
			( ADC_USER_AD3CON_ADRDY << _AD3CON_ADRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CONbits.CALCNT = ADC_USER_AD3CON_CALCNT;
			AD3CONbits.BUFEN = ADC_USER_AD3CON_BUFEN;
			AD3CONbits.TSTEN = ADC_USER_AD3CON_TSTEN;
			AD3CONbits.TSTLOCK = ADC_USER_AD3CON_TSTLOCK;
			AD3CONbits.ON = ADC_USER_AD3CON_ON;
			AD3CONbits.STNDBY = ADC_USER_AD3CON_STNDBY;
			AD3CONbits.RPTCNT = ADC_USER_AD3CON_RPTCNT;
			AD3CONbits.MODE = ADC_USER_AD3CON_MODE;
			AD3CONbits.CALRATE = ADC_USER_AD3CON_CALRATE;
			AD3CONbits.ACALEN = ADC_USER_AD3CON_ACALEN;
			AD3CONbits.CALREQ = ADC_USER_AD3CON_CALREQ;
			AD3CONbits.CALRDY = ADC_USER_AD3CON_CALRDY;
			AD3CONbits.ADRDY = ADC_USER_AD3CON_ADRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3DATAOVRレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3DATAOVR = ADC_USER_AD3DATAOVR;
	/*-----------------------------------------------------------------------*/
	/* AD3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3STAT = 
			( ADC_USER_AD3STAT_CH0RDY << _AD3STAT_CH0RDY_POSITION ) |
			( ADC_USER_AD3STAT_CH1RDY << _AD3STAT_CH1RDY_POSITION ) |
			( ADC_USER_AD3STAT_CH2RDY << _AD3STAT_CH2RDY_POSITION ) |
			( ADC_USER_AD3STAT_CH3RDY << _AD3STAT_CH3RDY_POSITION ) |
			( ADC_USER_AD3STAT_CH4RDY << _AD3STAT_CH4RDY_POSITION ) |
			( ADC_USER_AD3STAT_CH5RDY << _AD3STAT_CH5RDY_POSITION ) |
			( ADC_USER_AD3STAT_CH6RDY << _AD3STAT_CH6RDY_POSITION ) |
			( ADC_USER_AD3STAT_CH7RDY << _AD3STAT_CH7RDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3STATbits.CH0RDY = ADC_USER_AD3STAT_CH0RDY;
			AD3STATbits.CH1RDY = ADC_USER_AD3STAT_CH1RDY;
			AD3STATbits.CH2RDY = ADC_USER_AD3STAT_CH2RDY;
			AD3STATbits.CH3RDY = ADC_USER_AD3STAT_CH3RDY;
			AD3STATbits.CH4RDY = ADC_USER_AD3STAT_CH4RDY;
			AD3STATbits.CH5RDY = ADC_USER_AD3STAT_CH5RDY;
			AD3STATbits.CH6RDY = ADC_USER_AD3STAT_CH6RDY;
			AD3STATbits.CH7RDY = ADC_USER_AD3STAT_CH7RDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3RSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3RSTAT = 
			( ADC_USER_AD3RSTAT_CH0RRDY << _AD3RSTAT_CH0RRDY_POSITION ) |
			( ADC_USER_AD3RSTAT_CH1RRDY << _AD3RSTAT_CH1RRDY_POSITION ) |
			( ADC_USER_AD3RSTAT_CH2RRDY << _AD3RSTAT_CH2RRDY_POSITION ) |
			( ADC_USER_AD3RSTAT_CH3RRDY << _AD3RSTAT_CH3RRDY_POSITION ) |
			( ADC_USER_AD3RSTAT_CH4RRDY << _AD3RSTAT_CH4RRDY_POSITION ) |
			( ADC_USER_AD3RSTAT_CH5RRDY << _AD3RSTAT_CH5RRDY_POSITION ) |
			( ADC_USER_AD3RSTAT_CH6RRDY << _AD3RSTAT_CH6RRDY_POSITION ) |
			( ADC_USER_AD3RSTAT_CH7RRDY << _AD3RSTAT_CH7RRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3RSTATbits.CH0RRDY = ADC_USER_AD3RSTAT_CH0RRDY;
			AD3RSTATbits.CH1RRDY = ADC_USER_AD3RSTAT_CH1RRDY;
			AD3RSTATbits.CH2RRDY = ADC_USER_AD3RSTAT_CH2RRDY;
			AD3RSTATbits.CH3RRDY = ADC_USER_AD3RSTAT_CH3RRDY;
			AD3RSTATbits.CH4RRDY = ADC_USER_AD3RSTAT_CH4RRDY;
			AD3RSTATbits.CH5RRDY = ADC_USER_AD3RSTAT_CH5RRDY;
			AD3RSTATbits.CH6RRDY = ADC_USER_AD3RSTAT_CH6RRDY;
			AD3RSTATbits.CH7RRDY = ADC_USER_AD3RSTAT_CH7RRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CMPSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CMPSTAT = 
			( ADC_USER_AD3CMPSTAT_CH0FLG << _AD3CMPSTAT_CH0FLG_POSITION ) |
			( ADC_USER_AD3CMPSTAT_CH1FLG << _AD3CMPSTAT_CH1FLG_POSITION ) |
			( ADC_USER_AD3CMPSTAT_CH2FLG << _AD3CMPSTAT_CH2FLG_POSITION ) |
			( ADC_USER_AD3CMPSTAT_CH3FLG << _AD3CMPSTAT_CH3FLG_POSITION ) |
			( ADC_USER_AD3CMPSTAT_CH4FLG << _AD3CMPSTAT_CH4FLG_POSITION ) |
			( ADC_USER_AD3CMPSTAT_CH5FLG << _AD3CMPSTAT_CH5FLG_POSITION ) |
			( ADC_USER_AD3CMPSTAT_CH6FLG << _AD3CMPSTAT_CH6FLG_POSITION ) |
			( ADC_USER_AD3CMPSTAT_CH7FLG << _AD3CMPSTAT_CH7FLG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CMPSTATbits.CH0FLG = ADC_USER_AD3CMPSTAT_CH0FLG;
			AD3CMPSTATbits.CH1FLG = ADC_USER_AD3CMPSTAT_CH1FLG;
			AD3CMPSTATbits.CH2FLG = ADC_USER_AD3CMPSTAT_CH2FLG;
			AD3CMPSTATbits.CH3FLG = ADC_USER_AD3CMPSTAT_CH3FLG;
			AD3CMPSTATbits.CH4FLG = ADC_USER_AD3CMPSTAT_CH4FLG;
			AD3CMPSTATbits.CH5FLG = ADC_USER_AD3CMPSTAT_CH5FLG;
			AD3CMPSTATbits.CH6FLG = ADC_USER_AD3CMPSTAT_CH6FLG;
			AD3CMPSTATbits.CH7FLG = ADC_USER_AD3CMPSTAT_CH7FLG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3SWTRGレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3SWTRG = 
			( ADC_USER_AD3SWTRG_CH0TRG << _AD3SWTRG_CH0TRG_POSITION ) |
			( ADC_USER_AD3SWTRG_CH1TRG << _AD3SWTRG_CH1TRG_POSITION ) |
			( ADC_USER_AD3SWTRG_CH2TRG << _AD3SWTRG_CH2TRG_POSITION ) |
			( ADC_USER_AD3SWTRG_CH3TRG << _AD3SWTRG_CH3TRG_POSITION ) |
			( ADC_USER_AD3SWTRG_CH4TRG << _AD3SWTRG_CH4TRG_POSITION ) |
			( ADC_USER_AD3SWTRG_CH5TRG << _AD3SWTRG_CH5TRG_POSITION ) |
			( ADC_USER_AD3SWTRG_CH6TRG << _AD3SWTRG_CH6TRG_POSITION ) |
			( ADC_USER_AD3SWTRG_CH7TRG << _AD3SWTRG_CH7TRG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3SWTRGbits.CH0TRG = ADC_USER_AD3SWTRG_CH0TRG;
			AD3SWTRGbits.CH1TRG = ADC_USER_AD3SWTRG_CH1TRG;
			AD3SWTRGbits.CH2TRG = ADC_USER_AD3SWTRG_CH2TRG;
			AD3SWTRGbits.CH3TRG = ADC_USER_AD3SWTRG_CH3TRG;
			AD3SWTRGbits.CH4TRG = ADC_USER_AD3SWTRG_CH4TRG;
			AD3SWTRGbits.CH5TRG = ADC_USER_AD3SWTRG_CH5TRG;
			AD3SWTRGbits.CH6TRG = ADC_USER_AD3SWTRG_CH6TRG;
			AD3SWTRGbits.CH7TRG = ADC_USER_AD3SWTRG_CH7TRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH0CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH0CON1 = 
			( ADC_USER_AD3CH0CON1_TRG1SRC << _AD3CH0CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH0CON1_MODE << _AD3CH0CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH0CON1_TRG2SRC << _AD3CH0CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH0CON1_ACCNUM << _AD3CH0CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH0CON1_SAMC << _AD3CH0CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH0CON1_IRQSEL << _AD3CH0CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH0CON1_EIEN << _AD3CH0CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH0CON1_TRG1POL << _AD3CH0CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH0CON1_PINSEL << _AD3CH0CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH0CON1_NINSEL << _AD3CH0CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH0CON1_FRAC << _AD3CH0CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH0CON1_DIFF << _AD3CH0CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH0CON1bits.TRG1SRC = ADC_USER_AD3CH0CON1_TRG1SRC;
			AD3CH0CON1bits.MODE = ADC_USER_AD3CH0CON1_MODE;
			AD3CH0CON1bits.TRG2SRC = ADC_USER_AD3CH0CON1_TRG2SRC;
			AD3CH0CON1bits.ACCNUM = ADC_USER_AD3CH0CON1_ACCNUM;
			AD3CH0CON1bits.SAMC = ADC_USER_AD3CH0CON1_SAMC;
			AD3CH0CON1bits.IRQSEL = ADC_USER_AD3CH0CON1_IRQSEL;
			AD3CH0CON1bits.EIEN = ADC_USER_AD3CH0CON1_EIEN;
			AD3CH0CON1bits.TRG1POL = ADC_USER_AD3CH0CON1_TRG1POL;
			AD3CH0CON1bits.PINSEL = ADC_USER_AD3CH0CON1_PINSEL;
			AD3CH0CON1bits.NINSEL = ADC_USER_AD3CH0CON1_NINSEL;
			AD3CH0CON1bits.FRAC = ADC_USER_AD3CH0CON1_FRAC;
			AD3CH0CON1bits.DIFF = ADC_USER_AD3CH0CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH0CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH0CON2 = 
			( ADC_USER_AD3CH0CON2_ADCMPCNT << _AD3CH0CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH0CON2_CMPMOD << _AD3CH0CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH0CON2_ADCMPSTAT << _AD3CH0CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH0CON2_CMPCNTMOD << _AD3CH0CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH0CON2_CMPVAL << _AD3CH0CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH0CON2_ACCBRST << _AD3CH0CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH0CON2_ACCRO << _AD3CH0CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH0CON2bits.ADCMPCNT = ADC_USER_AD3CH0CON2_ADCMPCNT;
			AD3CH0CON2bits.CMPMOD = ADC_USER_AD3CH0CON2_CMPMOD;
			AD3CH0CON2bits.ADCMPSTAT = ADC_USER_AD3CH0CON2_ADCMPSTAT;
			AD3CH0CON2bits.CMPCNTMOD = ADC_USER_AD3CH0CON2_CMPCNTMOD;
			AD3CH0CON2bits.CMPVAL = ADC_USER_AD3CH0CON2_CMPVAL;
			AD3CH0CON2bits.ACCBRST = ADC_USER_AD3CH0CON2_ACCBRST;
			AD3CH0CON2bits.ACCRO = ADC_USER_AD3CH0CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH0DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH0DATA = ADC_USER_AD3CH0DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH0RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH0RES = 
			( ADC_USER_AD3CH0RES_RES << _AD3CH0RES_RES_POSITION ) |
			( ADC_USER_AD3CH0RES_RESF << _AD3CH0RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH0RESbits.RES = ADC_USER_AD3CH0RES_RES;
			AD3CH0RESbits.RESF = ADC_USER_AD3CH0RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH0CNT = 
			( ADC_USER_AD3CH0CNT_CNT << _AD3CH0CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH0CNT_CNTSTAT << _AD3CH0CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH0CNTbits.CNT = ADC_USER_AD3CH0CNT_CNT;
			AD3CH0CNTbits.CNTSTAT = ADC_USER_AD3CH0CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH0CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH0CMPLO = ADC_USER_AD3CH0CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH0CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH0CMPHI = ADC_USER_AD3CH0CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH1CON1 = 
			( ADC_USER_AD3CH1CON1_TRG1SRC << _AD3CH1CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH1CON1_MODE << _AD3CH1CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH1CON1_TRG2SRC << _AD3CH1CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH1CON1_ACCNUM << _AD3CH1CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH1CON1_SAMC << _AD3CH1CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH1CON1_IRQSEL << _AD3CH1CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH1CON1_EIEN << _AD3CH1CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH1CON1_TRG1POL << _AD3CH1CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH1CON1_PINSEL << _AD3CH1CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH1CON1_NINSEL << _AD3CH1CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH1CON1_FRAC << _AD3CH1CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH1CON1_DIFF << _AD3CH1CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH1CON1bits.TRG1SRC = ADC_USER_AD3CH1CON1_TRG1SRC;
			AD3CH1CON1bits.MODE = ADC_USER_AD3CH1CON1_MODE;
			AD3CH1CON1bits.TRG2SRC = ADC_USER_AD3CH1CON1_TRG2SRC;
			AD3CH1CON1bits.ACCNUM = ADC_USER_AD3CH1CON1_ACCNUM;
			AD3CH1CON1bits.SAMC = ADC_USER_AD3CH1CON1_SAMC;
			AD3CH1CON1bits.IRQSEL = ADC_USER_AD3CH1CON1_IRQSEL;
			AD3CH1CON1bits.EIEN = ADC_USER_AD3CH1CON1_EIEN;
			AD3CH1CON1bits.TRG1POL = ADC_USER_AD3CH1CON1_TRG1POL;
			AD3CH1CON1bits.PINSEL = ADC_USER_AD3CH1CON1_PINSEL;
			AD3CH1CON1bits.NINSEL = ADC_USER_AD3CH1CON1_NINSEL;
			AD3CH1CON1bits.FRAC = ADC_USER_AD3CH1CON1_FRAC;
			AD3CH1CON1bits.DIFF = ADC_USER_AD3CH1CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH1CON2 = 
			( ADC_USER_AD3CH1CON2_ADCMPCNT << _AD3CH1CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH1CON2_CMPMOD << _AD3CH1CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH1CON2_ADCMPSTAT << _AD3CH1CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH1CON2_CMPCNTMOD << _AD3CH1CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH1CON2_CMPVAL << _AD3CH1CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH1CON2_ACCBRST << _AD3CH1CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH1CON2_ACCRO << _AD3CH1CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH1CON2bits.ADCMPCNT = ADC_USER_AD3CH1CON2_ADCMPCNT;
			AD3CH1CON2bits.CMPMOD = ADC_USER_AD3CH1CON2_CMPMOD;
			AD3CH1CON2bits.ADCMPSTAT = ADC_USER_AD3CH1CON2_ADCMPSTAT;
			AD3CH1CON2bits.CMPCNTMOD = ADC_USER_AD3CH1CON2_CMPCNTMOD;
			AD3CH1CON2bits.CMPVAL = ADC_USER_AD3CH1CON2_CMPVAL;
			AD3CH1CON2bits.ACCBRST = ADC_USER_AD3CH1CON2_ACCBRST;
			AD3CH1CON2bits.ACCRO = ADC_USER_AD3CH1CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH1DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH1DATA = ADC_USER_AD3CH1DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH1RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH1RES = 
			( ADC_USER_AD3CH1RES_RES << _AD3CH1RES_RES_POSITION ) |
			( ADC_USER_AD3CH1RES_RESF << _AD3CH1RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH1RESbits.RES = ADC_USER_AD3CH1RES_RES;
			AD3CH1RESbits.RESF = ADC_USER_AD3CH1RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH1CNT = 
			( ADC_USER_AD3CH1CNT_CNT << _AD3CH1CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH1CNT_CNTSTAT << _AD3CH1CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH1CNTbits.CNT = ADC_USER_AD3CH1CNT_CNT;
			AD3CH1CNTbits.CNTSTAT = ADC_USER_AD3CH1CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH1CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH1CMPLO = ADC_USER_AD3CH1CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH1CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH1CMPHI = ADC_USER_AD3CH1CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH2CON1 = 
			( ADC_USER_AD3CH2CON1_TRG1SRC << _AD3CH2CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH2CON1_MODE << _AD3CH2CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH2CON1_TRG2SRC << _AD3CH2CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH2CON1_ACCNUM << _AD3CH2CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH2CON1_SAMC << _AD3CH2CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH2CON1_IRQSEL << _AD3CH2CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH2CON1_EIEN << _AD3CH2CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH2CON1_TRG1POL << _AD3CH2CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH2CON1_PINSEL << _AD3CH2CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH2CON1_NINSEL << _AD3CH2CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH2CON1_FRAC << _AD3CH2CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH2CON1_DIFF << _AD3CH2CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH2CON1bits.TRG1SRC = ADC_USER_AD3CH2CON1_TRG1SRC;
			AD3CH2CON1bits.MODE = ADC_USER_AD3CH2CON1_MODE;
			AD3CH2CON1bits.TRG2SRC = ADC_USER_AD3CH2CON1_TRG2SRC;
			AD3CH2CON1bits.ACCNUM = ADC_USER_AD3CH2CON1_ACCNUM;
			AD3CH2CON1bits.SAMC = ADC_USER_AD3CH2CON1_SAMC;
			AD3CH2CON1bits.IRQSEL = ADC_USER_AD3CH2CON1_IRQSEL;
			AD3CH2CON1bits.EIEN = ADC_USER_AD3CH2CON1_EIEN;
			AD3CH2CON1bits.TRG1POL = ADC_USER_AD3CH2CON1_TRG1POL;
			AD3CH2CON1bits.PINSEL = ADC_USER_AD3CH2CON1_PINSEL;
			AD3CH2CON1bits.NINSEL = ADC_USER_AD3CH2CON1_NINSEL;
			AD3CH2CON1bits.FRAC = ADC_USER_AD3CH2CON1_FRAC;
			AD3CH2CON1bits.DIFF = ADC_USER_AD3CH2CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH2CON2 = 
			( ADC_USER_AD3CH2CON2_ADCMPCNT << _AD3CH2CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH2CON2_CMPMOD << _AD3CH2CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH2CON2_ADCMPSTAT << _AD3CH2CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH2CON2_CMPCNTMOD << _AD3CH2CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH2CON2_CMPVAL << _AD3CH2CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH2CON2_ACCBRST << _AD3CH2CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH2CON2_ACCRO << _AD3CH2CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH2CON2bits.ADCMPCNT = ADC_USER_AD3CH2CON2_ADCMPCNT;
			AD3CH2CON2bits.CMPMOD = ADC_USER_AD3CH2CON2_CMPMOD;
			AD3CH2CON2bits.ADCMPSTAT = ADC_USER_AD3CH2CON2_ADCMPSTAT;
			AD3CH2CON2bits.CMPCNTMOD = ADC_USER_AD3CH2CON2_CMPCNTMOD;
			AD3CH2CON2bits.CMPVAL = ADC_USER_AD3CH2CON2_CMPVAL;
			AD3CH2CON2bits.ACCBRST = ADC_USER_AD3CH2CON2_ACCBRST;
			AD3CH2CON2bits.ACCRO = ADC_USER_AD3CH2CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH2DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH2DATA = ADC_USER_AD3CH2DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH2RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH2RES = 
			( ADC_USER_AD3CH2RES_RES << _AD3CH2RES_RES_POSITION ) |
			( ADC_USER_AD3CH2RES_RESF << _AD3CH2RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH2RESbits.RES = ADC_USER_AD3CH2RES_RES;
			AD3CH2RESbits.RESF = ADC_USER_AD3CH2RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH2CNT = 
			( ADC_USER_AD3CH2CNT_CNT << _AD3CH2CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH2CNT_CNTSTAT << _AD3CH2CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH2CNTbits.CNT = ADC_USER_AD3CH2CNT_CNT;
			AD3CH2CNTbits.CNTSTAT = ADC_USER_AD3CH2CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH2CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH2CMPLO = ADC_USER_AD3CH2CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH2CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH2CMPHI = ADC_USER_AD3CH2CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH3CON1 = 
			( ADC_USER_AD3CH3CON1_TRG1SRC << _AD3CH3CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH3CON1_MODE << _AD3CH3CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH3CON1_TRG2SRC << _AD3CH3CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH3CON1_ACCNUM << _AD3CH3CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH3CON1_SAMC << _AD3CH3CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH3CON1_IRQSEL << _AD3CH3CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH3CON1_EIEN << _AD3CH3CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH3CON1_TRG1POL << _AD3CH3CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH3CON1_PINSEL << _AD3CH3CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH3CON1_NINSEL << _AD3CH3CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH3CON1_FRAC << _AD3CH3CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH3CON1_DIFF << _AD3CH3CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH3CON1bits.TRG1SRC = ADC_USER_AD3CH3CON1_TRG1SRC;
			AD3CH3CON1bits.MODE = ADC_USER_AD3CH3CON1_MODE;
			AD3CH3CON1bits.TRG2SRC = ADC_USER_AD3CH3CON1_TRG2SRC;
			AD3CH3CON1bits.ACCNUM = ADC_USER_AD3CH3CON1_ACCNUM;
			AD3CH3CON1bits.SAMC = ADC_USER_AD3CH3CON1_SAMC;
			AD3CH3CON1bits.IRQSEL = ADC_USER_AD3CH3CON1_IRQSEL;
			AD3CH3CON1bits.EIEN = ADC_USER_AD3CH3CON1_EIEN;
			AD3CH3CON1bits.TRG1POL = ADC_USER_AD3CH3CON1_TRG1POL;
			AD3CH3CON1bits.PINSEL = ADC_USER_AD3CH3CON1_PINSEL;
			AD3CH3CON1bits.NINSEL = ADC_USER_AD3CH3CON1_NINSEL;
			AD3CH3CON1bits.FRAC = ADC_USER_AD3CH3CON1_FRAC;
			AD3CH3CON1bits.DIFF = ADC_USER_AD3CH3CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH3CON2 = 
			( ADC_USER_AD3CH3CON2_ADCMPCNT << _AD3CH3CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH3CON2_CMPMOD << _AD3CH3CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH3CON2_ADCMPSTAT << _AD3CH3CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH3CON2_CMPCNTMOD << _AD3CH3CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH3CON2_CMPVAL << _AD3CH3CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH3CON2_ACCBRST << _AD3CH3CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH3CON2_ACCRO << _AD3CH3CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH3CON2bits.ADCMPCNT = ADC_USER_AD3CH3CON2_ADCMPCNT;
			AD3CH3CON2bits.CMPMOD = ADC_USER_AD3CH3CON2_CMPMOD;
			AD3CH3CON2bits.ADCMPSTAT = ADC_USER_AD3CH3CON2_ADCMPSTAT;
			AD3CH3CON2bits.CMPCNTMOD = ADC_USER_AD3CH3CON2_CMPCNTMOD;
			AD3CH3CON2bits.CMPVAL = ADC_USER_AD3CH3CON2_CMPVAL;
			AD3CH3CON2bits.ACCBRST = ADC_USER_AD3CH3CON2_ACCBRST;
			AD3CH3CON2bits.ACCRO = ADC_USER_AD3CH3CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH3DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH3DATA = ADC_USER_AD3CH3DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH3RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH3RES = 
			( ADC_USER_AD3CH3RES_RES << _AD3CH3RES_RES_POSITION ) |
			( ADC_USER_AD3CH3RES_RESF << _AD3CH3RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH3RESbits.RES = ADC_USER_AD3CH3RES_RES;
			AD3CH3RESbits.RESF = ADC_USER_AD3CH3RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH3CNT = 
			( ADC_USER_AD3CH3CNT_CNT << _AD3CH3CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH3CNT_CNTSTAT << _AD3CH3CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH3CNTbits.CNT = ADC_USER_AD3CH3CNT_CNT;
			AD3CH3CNTbits.CNTSTAT = ADC_USER_AD3CH3CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH3CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH3CMPLO = ADC_USER_AD3CH3CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH3CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH3CMPHI = ADC_USER_AD3CH3CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH4CON1 = 
			( ADC_USER_AD3CH4CON1_TRG1SRC << _AD3CH4CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH4CON1_MODE << _AD3CH4CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH4CON1_TRG2SRC << _AD3CH4CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH4CON1_ACCNUM << _AD3CH4CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH4CON1_SAMC << _AD3CH4CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH4CON1_IRQSEL << _AD3CH4CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH4CON1_EIEN << _AD3CH4CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH4CON1_TRG1POL << _AD3CH4CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH4CON1_PINSEL << _AD3CH4CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH4CON1_NINSEL << _AD3CH4CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH4CON1_FRAC << _AD3CH4CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH4CON1_DIFF << _AD3CH4CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH4CON1bits.TRG1SRC = ADC_USER_AD3CH4CON1_TRG1SRC;
			AD3CH4CON1bits.MODE = ADC_USER_AD3CH4CON1_MODE;
			AD3CH4CON1bits.TRG2SRC = ADC_USER_AD3CH4CON1_TRG2SRC;
			AD3CH4CON1bits.ACCNUM = ADC_USER_AD3CH4CON1_ACCNUM;
			AD3CH4CON1bits.SAMC = ADC_USER_AD3CH4CON1_SAMC;
			AD3CH4CON1bits.IRQSEL = ADC_USER_AD3CH4CON1_IRQSEL;
			AD3CH4CON1bits.EIEN = ADC_USER_AD3CH4CON1_EIEN;
			AD3CH4CON1bits.TRG1POL = ADC_USER_AD3CH4CON1_TRG1POL;
			AD3CH4CON1bits.PINSEL = ADC_USER_AD3CH4CON1_PINSEL;
			AD3CH4CON1bits.NINSEL = ADC_USER_AD3CH4CON1_NINSEL;
			AD3CH4CON1bits.FRAC = ADC_USER_AD3CH4CON1_FRAC;
			AD3CH4CON1bits.DIFF = ADC_USER_AD3CH4CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH4CON2 = 
			( ADC_USER_AD3CH4CON2_ADCMPCNT << _AD3CH4CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH4CON2_CMPMOD << _AD3CH4CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH4CON2_ADCMPSTAT << _AD3CH4CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH4CON2_CMPCNTMOD << _AD3CH4CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH4CON2_CMPVAL << _AD3CH4CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH4CON2_ACCBRST << _AD3CH4CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH4CON2_ACCRO << _AD3CH4CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH4CON2bits.ADCMPCNT = ADC_USER_AD3CH4CON2_ADCMPCNT;
			AD3CH4CON2bits.CMPMOD = ADC_USER_AD3CH4CON2_CMPMOD;
			AD3CH4CON2bits.ADCMPSTAT = ADC_USER_AD3CH4CON2_ADCMPSTAT;
			AD3CH4CON2bits.CMPCNTMOD = ADC_USER_AD3CH4CON2_CMPCNTMOD;
			AD3CH4CON2bits.CMPVAL = ADC_USER_AD3CH4CON2_CMPVAL;
			AD3CH4CON2bits.ACCBRST = ADC_USER_AD3CH4CON2_ACCBRST;
			AD3CH4CON2bits.ACCRO = ADC_USER_AD3CH4CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH4DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH4DATA = ADC_USER_AD3CH4DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH4RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH4RES = 
			( ADC_USER_AD3CH4RES_RES << _AD3CH4RES_RES_POSITION ) |
			( ADC_USER_AD3CH4RES_RESF << _AD3CH4RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH4RESbits.RES = ADC_USER_AD3CH4RES_RES;
			AD3CH4RESbits.RESF = ADC_USER_AD3CH4RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH4CNT = 
			( ADC_USER_AD3CH4CNT_CNT << _AD3CH4CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH4CNT_CNTSTAT << _AD3CH4CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH4CNTbits.CNT = ADC_USER_AD3CH4CNT_CNT;
			AD3CH4CNTbits.CNTSTAT = ADC_USER_AD3CH4CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH4CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH4CMPLO = ADC_USER_AD3CH4CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH4CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH4CMPHI = ADC_USER_AD3CH4CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH5CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH5CON1 = 
			( ADC_USER_AD3CH5CON1_TRG1SRC << _AD3CH5CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH5CON1_MODE << _AD3CH5CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH5CON1_TRG2SRC << _AD3CH5CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH5CON1_ACCNUM << _AD3CH5CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH5CON1_SAMC << _AD3CH5CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH5CON1_IRQSEL << _AD3CH5CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH5CON1_EIEN << _AD3CH5CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH5CON1_TRG1POL << _AD3CH5CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH5CON1_PINSEL << _AD3CH5CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH5CON1_NINSEL << _AD3CH5CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH5CON1_FRAC << _AD3CH5CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH5CON1_DIFF << _AD3CH5CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH5CON1bits.TRG1SRC = ADC_USER_AD3CH5CON1_TRG1SRC;
			AD3CH5CON1bits.MODE = ADC_USER_AD3CH5CON1_MODE;
			AD3CH5CON1bits.TRG2SRC = ADC_USER_AD3CH5CON1_TRG2SRC;
			AD3CH5CON1bits.ACCNUM = ADC_USER_AD3CH5CON1_ACCNUM;
			AD3CH5CON1bits.SAMC = ADC_USER_AD3CH5CON1_SAMC;
			AD3CH5CON1bits.IRQSEL = ADC_USER_AD3CH5CON1_IRQSEL;
			AD3CH5CON1bits.EIEN = ADC_USER_AD3CH5CON1_EIEN;
			AD3CH5CON1bits.TRG1POL = ADC_USER_AD3CH5CON1_TRG1POL;
			AD3CH5CON1bits.PINSEL = ADC_USER_AD3CH5CON1_PINSEL;
			AD3CH5CON1bits.NINSEL = ADC_USER_AD3CH5CON1_NINSEL;
			AD3CH5CON1bits.FRAC = ADC_USER_AD3CH5CON1_FRAC;
			AD3CH5CON1bits.DIFF = ADC_USER_AD3CH5CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH5CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH5CON2 = 
			( ADC_USER_AD3CH5CON2_ADCMPCNT << _AD3CH5CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH5CON2_CMPMOD << _AD3CH5CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH5CON2_ADCMPSTAT << _AD3CH5CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH5CON2_CMPCNTMOD << _AD3CH5CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH5CON2_CMPVAL << _AD3CH5CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH5CON2_ACCBRST << _AD3CH5CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH5CON2_ACCRO << _AD3CH5CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH5CON2bits.ADCMPCNT = ADC_USER_AD3CH5CON2_ADCMPCNT;
			AD3CH5CON2bits.CMPMOD = ADC_USER_AD3CH5CON2_CMPMOD;
			AD3CH5CON2bits.ADCMPSTAT = ADC_USER_AD3CH5CON2_ADCMPSTAT;
			AD3CH5CON2bits.CMPCNTMOD = ADC_USER_AD3CH5CON2_CMPCNTMOD;
			AD3CH5CON2bits.CMPVAL = ADC_USER_AD3CH5CON2_CMPVAL;
			AD3CH5CON2bits.ACCBRST = ADC_USER_AD3CH5CON2_ACCBRST;
			AD3CH5CON2bits.ACCRO = ADC_USER_AD3CH5CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH5DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH5DATA = ADC_USER_AD3CH5DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH5RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH5RES = 
			( ADC_USER_AD3CH5RES_RES << _AD3CH5RES_RES_POSITION ) |
			( ADC_USER_AD3CH5RES_RESF << _AD3CH5RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH5RESbits.RES = ADC_USER_AD3CH5RES_RES;
			AD3CH5RESbits.RESF = ADC_USER_AD3CH5RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH5CNT = 
			( ADC_USER_AD3CH5CNT_CNT << _AD3CH5CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH5CNT_CNTSTAT << _AD3CH5CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH5CNTbits.CNT = ADC_USER_AD3CH5CNT_CNT;
			AD3CH5CNTbits.CNTSTAT = ADC_USER_AD3CH5CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH5CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH5CMPLO = ADC_USER_AD3CH5CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH5CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH5CMPHI = ADC_USER_AD3CH5CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH6CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6CON1 = 
			( ADC_USER_AD3CH6CON1_TRG1SRC << _AD3CH6CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH6CON1_MODE << _AD3CH6CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH6CON1_TRG2SRC << _AD3CH6CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH6CON1_ACCNUM << _AD3CH6CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH6CON1_SAMC << _AD3CH6CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH6CON1_IRQSEL << _AD3CH6CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH6CON1_EIEN << _AD3CH6CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH6CON1_TRG1POL << _AD3CH6CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH6CON1_PINSEL << _AD3CH6CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH6CON1_NINSEL << _AD3CH6CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH6CON1_FRAC << _AD3CH6CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH6CON1_DIFF << _AD3CH6CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH6CON1bits.TRG1SRC = ADC_USER_AD3CH6CON1_TRG1SRC;
			AD3CH6CON1bits.MODE = ADC_USER_AD3CH6CON1_MODE;
			AD3CH6CON1bits.TRG2SRC = ADC_USER_AD3CH6CON1_TRG2SRC;
			AD3CH6CON1bits.ACCNUM = ADC_USER_AD3CH6CON1_ACCNUM;
			AD3CH6CON1bits.SAMC = ADC_USER_AD3CH6CON1_SAMC;
			AD3CH6CON1bits.IRQSEL = ADC_USER_AD3CH6CON1_IRQSEL;
			AD3CH6CON1bits.EIEN = ADC_USER_AD3CH6CON1_EIEN;
			AD3CH6CON1bits.TRG1POL = ADC_USER_AD3CH6CON1_TRG1POL;
			AD3CH6CON1bits.PINSEL = ADC_USER_AD3CH6CON1_PINSEL;
			AD3CH6CON1bits.NINSEL = ADC_USER_AD3CH6CON1_NINSEL;
			AD3CH6CON1bits.FRAC = ADC_USER_AD3CH6CON1_FRAC;
			AD3CH6CON1bits.DIFF = ADC_USER_AD3CH6CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH6CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6CON2 = 
			( ADC_USER_AD3CH6CON2_ADCMPCNT << _AD3CH6CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH6CON2_CMPMOD << _AD3CH6CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH6CON2_ADCMPSTAT << _AD3CH6CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH6CON2_CMPCNTMOD << _AD3CH6CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH6CON2_CMPVAL << _AD3CH6CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH6CON2_ACCBRST << _AD3CH6CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH6CON2_ACCRO << _AD3CH6CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH6CON2bits.ADCMPCNT = ADC_USER_AD3CH6CON2_ADCMPCNT;
			AD3CH6CON2bits.CMPMOD = ADC_USER_AD3CH6CON2_CMPMOD;
			AD3CH6CON2bits.ADCMPSTAT = ADC_USER_AD3CH6CON2_ADCMPSTAT;
			AD3CH6CON2bits.CMPCNTMOD = ADC_USER_AD3CH6CON2_CMPCNTMOD;
			AD3CH6CON2bits.CMPVAL = ADC_USER_AD3CH6CON2_CMPVAL;
			AD3CH6CON2bits.ACCBRST = ADC_USER_AD3CH6CON2_ACCBRST;
			AD3CH6CON2bits.ACCRO = ADC_USER_AD3CH6CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH6DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6DATA = ADC_USER_AD3CH6DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH6RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6RES = 
			( ADC_USER_AD3CH6RES_RES << _AD3CH6RES_RES_POSITION ) |
			( ADC_USER_AD3CH6RES_RESF << _AD3CH6RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH6RESbits.RES = ADC_USER_AD3CH6RES_RES;
			AD3CH6RESbits.RESF = ADC_USER_AD3CH6RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6CNT = 
			( ADC_USER_AD3CH6CNT_CNT << _AD3CH6CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH6CNT_CNTSTAT << _AD3CH6CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH6CNTbits.CNT = ADC_USER_AD3CH6CNT_CNT;
			AD3CH6CNTbits.CNTSTAT = ADC_USER_AD3CH6CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH6CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6CMPLO = ADC_USER_AD3CH6CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH6CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6CMPHI = ADC_USER_AD3CH6CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH6ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH6ACC = ADC_USER_AD3CH6ACC;
	/*-----------------------------------------------------------------------*/
	/* AD3CH7CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7CON1 = 
			( ADC_USER_AD3CH7CON1_TRG1SRC << _AD3CH7CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD3CH7CON1_MODE << _AD3CH7CON1_MODE_POSITION ) |
			( ADC_USER_AD3CH7CON1_TRG2SRC << _AD3CH7CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD3CH7CON1_ACCNUM << _AD3CH7CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD3CH7CON1_SAMC << _AD3CH7CON1_SAMC_POSITION ) |
			( ADC_USER_AD3CH7CON1_IRQSEL << _AD3CH7CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD3CH7CON1_EIEN << _AD3CH7CON1_EIEN_POSITION ) |
			( ADC_USER_AD3CH7CON1_TRG1POL << _AD3CH7CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD3CH7CON1_PINSEL << _AD3CH7CON1_PINSEL_POSITION ) |
			( ADC_USER_AD3CH7CON1_NINSEL << _AD3CH7CON1_NINSEL_POSITION ) |
			( ADC_USER_AD3CH7CON1_FRAC << _AD3CH7CON1_FRAC_POSITION ) |
			( ADC_USER_AD3CH7CON1_DIFF << _AD3CH7CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH7CON1bits.TRG1SRC = ADC_USER_AD3CH7CON1_TRG1SRC;
			AD3CH7CON1bits.MODE = ADC_USER_AD3CH7CON1_MODE;
			AD3CH7CON1bits.TRG2SRC = ADC_USER_AD3CH7CON1_TRG2SRC;
			AD3CH7CON1bits.ACCNUM = ADC_USER_AD3CH7CON1_ACCNUM;
			AD3CH7CON1bits.SAMC = ADC_USER_AD3CH7CON1_SAMC;
			AD3CH7CON1bits.IRQSEL = ADC_USER_AD3CH7CON1_IRQSEL;
			AD3CH7CON1bits.EIEN = ADC_USER_AD3CH7CON1_EIEN;
			AD3CH7CON1bits.TRG1POL = ADC_USER_AD3CH7CON1_TRG1POL;
			AD3CH7CON1bits.PINSEL = ADC_USER_AD3CH7CON1_PINSEL;
			AD3CH7CON1bits.NINSEL = ADC_USER_AD3CH7CON1_NINSEL;
			AD3CH7CON1bits.FRAC = ADC_USER_AD3CH7CON1_FRAC;
			AD3CH7CON1bits.DIFF = ADC_USER_AD3CH7CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH7CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7CON2 = 
			( ADC_USER_AD3CH7CON2_ADCMPCNT << _AD3CH7CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD3CH7CON2_CMPMOD << _AD3CH7CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD3CH7CON2_ADCMPSTAT << _AD3CH7CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD3CH7CON2_CMPCNTMOD << _AD3CH7CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD3CH7CON2_CMPVAL << _AD3CH7CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD3CH7CON2_ACCBRST << _AD3CH7CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD3CH7CON2_ACCRO << _AD3CH7CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH7CON2bits.ADCMPCNT = ADC_USER_AD3CH7CON2_ADCMPCNT;
			AD3CH7CON2bits.CMPMOD = ADC_USER_AD3CH7CON2_CMPMOD;
			AD3CH7CON2bits.ADCMPSTAT = ADC_USER_AD3CH7CON2_ADCMPSTAT;
			AD3CH7CON2bits.CMPCNTMOD = ADC_USER_AD3CH7CON2_CMPCNTMOD;
			AD3CH7CON2bits.CMPVAL = ADC_USER_AD3CH7CON2_CMPVAL;
			AD3CH7CON2bits.ACCBRST = ADC_USER_AD3CH7CON2_ACCBRST;
			AD3CH7CON2bits.ACCRO = ADC_USER_AD3CH7CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH7DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7DATA = ADC_USER_AD3CH7DATA;
	/*-----------------------------------------------------------------------*/
	/* AD3CH7RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7RES = 
			( ADC_USER_AD3CH7RES_RES << _AD3CH7RES_RES_POSITION ) |
			( ADC_USER_AD3CH7RES_RESF << _AD3CH7RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH7RESbits.RES = ADC_USER_AD3CH7RES_RES;
			AD3CH7RESbits.RESF = ADC_USER_AD3CH7RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7CNT = 
			( ADC_USER_AD3CH7CNT_CNT << _AD3CH7CNT_CNT_POSITION ) |
			( ADC_USER_AD3CH7CNT_CNTSTAT << _AD3CH7CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD3CH7CNTbits.CNT = ADC_USER_AD3CH7CNT_CNT;
			AD3CH7CNTbits.CNTSTAT = ADC_USER_AD3CH7CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD3CH7CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7CMPLO = ADC_USER_AD3CH7CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD3CH7CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7CMPHI = ADC_USER_AD3CH7CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD3CH7ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD3CH7ACC = ADC_USER_AD3CH7ACC;
#endif
}


/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC4_Set_All_Register(void)
* @brief     ADC4レジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC4_Set_All_Register(void)
{
#if ( PMD_ADC4MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* AD4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CON = 
			( ADC_USER_AD4CON_CALCNT << _AD4CON_CALCNT_POSITION ) |
			( ADC_USER_AD4CON_BUFEN << _AD4CON_BUFEN_POSITION ) |
			( ADC_USER_AD4CON_TSTEN << _AD4CON_TSTEN_POSITION ) |
			( ADC_USER_AD4CON_TSTLOCK << _AD4CON_TSTLOCK_POSITION ) |
			( ADC_USER_AD4CON_ON << _AD4CON_ON_POSITION ) |
			( ADC_USER_AD4CON_STNDBY << _AD4CON_STNDBY_POSITION ) |
			( ADC_USER_AD4CON_RPTCNT << _AD4CON_RPTCNT_POSITION ) |
			( ADC_USER_AD4CON_MODE << _AD4CON_MODE_POSITION ) |
			( ADC_USER_AD4CON_CALRATE << _AD4CON_CALRATE_POSITION ) |
			( ADC_USER_AD4CON_ACALEN << _AD4CON_ACALEN_POSITION ) |
			( ADC_USER_AD4CON_CALREQ << _AD4CON_CALREQ_POSITION ) |
			( ADC_USER_AD4CON_CALRDY << _AD4CON_CALRDY_POSITION ) |
			( ADC_USER_AD4CON_ADRDY << _AD4CON_ADRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CONbits.CALCNT = ADC_USER_AD4CON_CALCNT;
			AD4CONbits.BUFEN = ADC_USER_AD4CON_BUFEN;
			AD4CONbits.TSTEN = ADC_USER_AD4CON_TSTEN;
			AD4CONbits.TSTLOCK = ADC_USER_AD4CON_TSTLOCK;
			AD4CONbits.ON = ADC_USER_AD4CON_ON;
			AD4CONbits.STNDBY = ADC_USER_AD4CON_STNDBY;
			AD4CONbits.RPTCNT = ADC_USER_AD4CON_RPTCNT;
			AD4CONbits.MODE = ADC_USER_AD4CON_MODE;
			AD4CONbits.CALRATE = ADC_USER_AD4CON_CALRATE;
			AD4CONbits.ACALEN = ADC_USER_AD4CON_ACALEN;
			AD4CONbits.CALREQ = ADC_USER_AD4CON_CALREQ;
			AD4CONbits.CALRDY = ADC_USER_AD4CON_CALRDY;
			AD4CONbits.ADRDY = ADC_USER_AD4CON_ADRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4DATAOVRレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4DATAOVR = ADC_USER_AD4DATAOVR;
	/*-----------------------------------------------------------------------*/
	/* AD4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4STAT = 
			( ADC_USER_AD4STAT_CH0RDY << _AD4STAT_CH0RDY_POSITION ) |
			( ADC_USER_AD4STAT_CH1RDY << _AD4STAT_CH1RDY_POSITION ) |
			( ADC_USER_AD4STAT_CH2RDY << _AD4STAT_CH2RDY_POSITION ) |
			( ADC_USER_AD4STAT_CH3RDY << _AD4STAT_CH3RDY_POSITION ) |
			( ADC_USER_AD4STAT_CH4RDY << _AD4STAT_CH4RDY_POSITION ) |
			( ADC_USER_AD4STAT_CH5RDY << _AD4STAT_CH5RDY_POSITION ) |
			( ADC_USER_AD4STAT_CH6RDY << _AD4STAT_CH6RDY_POSITION ) |
			( ADC_USER_AD4STAT_CH7RDY << _AD4STAT_CH7RDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4STATbits.CH0RDY = ADC_USER_AD4STAT_CH0RDY;
			AD4STATbits.CH1RDY = ADC_USER_AD4STAT_CH1RDY;
			AD4STATbits.CH2RDY = ADC_USER_AD4STAT_CH2RDY;
			AD4STATbits.CH3RDY = ADC_USER_AD4STAT_CH3RDY;
			AD4STATbits.CH4RDY = ADC_USER_AD4STAT_CH4RDY;
			AD4STATbits.CH5RDY = ADC_USER_AD4STAT_CH5RDY;
			AD4STATbits.CH6RDY = ADC_USER_AD4STAT_CH6RDY;
			AD4STATbits.CH7RDY = ADC_USER_AD4STAT_CH7RDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4RSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4RSTAT = 
			( ADC_USER_AD4RSTAT_CH0RRDY << _AD4RSTAT_CH0RRDY_POSITION ) |
			( ADC_USER_AD4RSTAT_CH1RRDY << _AD4RSTAT_CH1RRDY_POSITION ) |
			( ADC_USER_AD4RSTAT_CH2RRDY << _AD4RSTAT_CH2RRDY_POSITION ) |
			( ADC_USER_AD4RSTAT_CH3RRDY << _AD4RSTAT_CH3RRDY_POSITION ) |
			( ADC_USER_AD4RSTAT_CH4RRDY << _AD4RSTAT_CH4RRDY_POSITION ) |
			( ADC_USER_AD4RSTAT_CH5RRDY << _AD4RSTAT_CH5RRDY_POSITION ) |
			( ADC_USER_AD4RSTAT_CH6RRDY << _AD4RSTAT_CH6RRDY_POSITION ) |
			( ADC_USER_AD4RSTAT_CH7RRDY << _AD4RSTAT_CH7RRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4RSTATbits.CH0RRDY = ADC_USER_AD4RSTAT_CH0RRDY;
			AD4RSTATbits.CH1RRDY = ADC_USER_AD4RSTAT_CH1RRDY;
			AD4RSTATbits.CH2RRDY = ADC_USER_AD4RSTAT_CH2RRDY;
			AD4RSTATbits.CH3RRDY = ADC_USER_AD4RSTAT_CH3RRDY;
			AD4RSTATbits.CH4RRDY = ADC_USER_AD4RSTAT_CH4RRDY;
			AD4RSTATbits.CH5RRDY = ADC_USER_AD4RSTAT_CH5RRDY;
			AD4RSTATbits.CH6RRDY = ADC_USER_AD4RSTAT_CH6RRDY;
			AD4RSTATbits.CH7RRDY = ADC_USER_AD4RSTAT_CH7RRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CMPSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CMPSTAT = 
			( ADC_USER_AD4CMPSTAT_CH0FLG << _AD4CMPSTAT_CH0FLG_POSITION ) |
			( ADC_USER_AD4CMPSTAT_CH1FLG << _AD4CMPSTAT_CH1FLG_POSITION ) |
			( ADC_USER_AD4CMPSTAT_CH2FLG << _AD4CMPSTAT_CH2FLG_POSITION ) |
			( ADC_USER_AD4CMPSTAT_CH3FLG << _AD4CMPSTAT_CH3FLG_POSITION ) |
			( ADC_USER_AD4CMPSTAT_CH4FLG << _AD4CMPSTAT_CH4FLG_POSITION ) |
			( ADC_USER_AD4CMPSTAT_CH5FLG << _AD4CMPSTAT_CH5FLG_POSITION ) |
			( ADC_USER_AD4CMPSTAT_CH6FLG << _AD4CMPSTAT_CH6FLG_POSITION ) |
			( ADC_USER_AD4CMPSTAT_CH7FLG << _AD4CMPSTAT_CH7FLG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CMPSTATbits.CH0FLG = ADC_USER_AD4CMPSTAT_CH0FLG;
			AD4CMPSTATbits.CH1FLG = ADC_USER_AD4CMPSTAT_CH1FLG;
			AD4CMPSTATbits.CH2FLG = ADC_USER_AD4CMPSTAT_CH2FLG;
			AD4CMPSTATbits.CH3FLG = ADC_USER_AD4CMPSTAT_CH3FLG;
			AD4CMPSTATbits.CH4FLG = ADC_USER_AD4CMPSTAT_CH4FLG;
			AD4CMPSTATbits.CH5FLG = ADC_USER_AD4CMPSTAT_CH5FLG;
			AD4CMPSTATbits.CH6FLG = ADC_USER_AD4CMPSTAT_CH6FLG;
			AD4CMPSTATbits.CH7FLG = ADC_USER_AD4CMPSTAT_CH7FLG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4SWTRGレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4SWTRG = 
			( ADC_USER_AD4SWTRG_CH0TRG << _AD4SWTRG_CH0TRG_POSITION ) |
			( ADC_USER_AD4SWTRG_CH1TRG << _AD4SWTRG_CH1TRG_POSITION ) |
			( ADC_USER_AD4SWTRG_CH2TRG << _AD4SWTRG_CH2TRG_POSITION ) |
			( ADC_USER_AD4SWTRG_CH3TRG << _AD4SWTRG_CH3TRG_POSITION ) |
			( ADC_USER_AD4SWTRG_CH4TRG << _AD4SWTRG_CH4TRG_POSITION ) |
			( ADC_USER_AD4SWTRG_CH5TRG << _AD4SWTRG_CH5TRG_POSITION ) |
			( ADC_USER_AD4SWTRG_CH6TRG << _AD4SWTRG_CH6TRG_POSITION ) |
			( ADC_USER_AD4SWTRG_CH7TRG << _AD4SWTRG_CH7TRG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4SWTRGbits.CH0TRG = ADC_USER_AD4SWTRG_CH0TRG;
			AD4SWTRGbits.CH1TRG = ADC_USER_AD4SWTRG_CH1TRG;
			AD4SWTRGbits.CH2TRG = ADC_USER_AD4SWTRG_CH2TRG;
			AD4SWTRGbits.CH3TRG = ADC_USER_AD4SWTRG_CH3TRG;
			AD4SWTRGbits.CH4TRG = ADC_USER_AD4SWTRG_CH4TRG;
			AD4SWTRGbits.CH5TRG = ADC_USER_AD4SWTRG_CH5TRG;
			AD4SWTRGbits.CH6TRG = ADC_USER_AD4SWTRG_CH6TRG;
			AD4SWTRGbits.CH7TRG = ADC_USER_AD4SWTRG_CH7TRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH0CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH0CON1 = 
			( ADC_USER_AD4CH0CON1_TRG1SRC << _AD4CH0CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH0CON1_MODE << _AD4CH0CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH0CON1_TRG2SRC << _AD4CH0CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH0CON1_ACCNUM << _AD4CH0CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH0CON1_SAMC << _AD4CH0CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH0CON1_IRQSEL << _AD4CH0CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH0CON1_EIEN << _AD4CH0CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH0CON1_TRG1POL << _AD4CH0CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH0CON1_PINSEL << _AD4CH0CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH0CON1_NINSEL << _AD4CH0CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH0CON1_FRAC << _AD4CH0CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH0CON1_DIFF << _AD4CH0CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH0CON1bits.TRG1SRC = ADC_USER_AD4CH0CON1_TRG1SRC;
			AD4CH0CON1bits.MODE = ADC_USER_AD4CH0CON1_MODE;
			AD4CH0CON1bits.TRG2SRC = ADC_USER_AD4CH0CON1_TRG2SRC;
			AD4CH0CON1bits.ACCNUM = ADC_USER_AD4CH0CON1_ACCNUM;
			AD4CH0CON1bits.SAMC = ADC_USER_AD4CH0CON1_SAMC;
			AD4CH0CON1bits.IRQSEL = ADC_USER_AD4CH0CON1_IRQSEL;
			AD4CH0CON1bits.EIEN = ADC_USER_AD4CH0CON1_EIEN;
			AD4CH0CON1bits.TRG1POL = ADC_USER_AD4CH0CON1_TRG1POL;
			AD4CH0CON1bits.PINSEL = ADC_USER_AD4CH0CON1_PINSEL;
			AD4CH0CON1bits.NINSEL = ADC_USER_AD4CH0CON1_NINSEL;
			AD4CH0CON1bits.FRAC = ADC_USER_AD4CH0CON1_FRAC;
			AD4CH0CON1bits.DIFF = ADC_USER_AD4CH0CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH0CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH0CON2 = 
			( ADC_USER_AD4CH0CON2_ADCMPCNT << _AD4CH0CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH0CON2_CMPMOD << _AD4CH0CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH0CON2_ADCMPSTAT << _AD4CH0CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH0CON2_CMPCNTMOD << _AD4CH0CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH0CON2_CMPVAL << _AD4CH0CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH0CON2_ACCBRST << _AD4CH0CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH0CON2_ACCRO << _AD4CH0CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH0CON2bits.ADCMPCNT = ADC_USER_AD4CH0CON2_ADCMPCNT;
			AD4CH0CON2bits.CMPMOD = ADC_USER_AD4CH0CON2_CMPMOD;
			AD4CH0CON2bits.ADCMPSTAT = ADC_USER_AD4CH0CON2_ADCMPSTAT;
			AD4CH0CON2bits.CMPCNTMOD = ADC_USER_AD4CH0CON2_CMPCNTMOD;
			AD4CH0CON2bits.CMPVAL = ADC_USER_AD4CH0CON2_CMPVAL;
			AD4CH0CON2bits.ACCBRST = ADC_USER_AD4CH0CON2_ACCBRST;
			AD4CH0CON2bits.ACCRO = ADC_USER_AD4CH0CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH0DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH0DATA = ADC_USER_AD4CH0DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH0RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH0RES = 
			( ADC_USER_AD4CH0RES_RES << _AD4CH0RES_RES_POSITION ) |
			( ADC_USER_AD4CH0RES_RESF << _AD4CH0RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH0RESbits.RES = ADC_USER_AD4CH0RES_RES;
			AD4CH0RESbits.RESF = ADC_USER_AD4CH0RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH0CNT = 
			( ADC_USER_AD4CH0CNT_CNT << _AD4CH0CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH0CNT_CNTSTAT << _AD4CH0CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH0CNTbits.CNT = ADC_USER_AD4CH0CNT_CNT;
			AD4CH0CNTbits.CNTSTAT = ADC_USER_AD4CH0CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH0CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH0CMPLO = ADC_USER_AD4CH0CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH0CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH0CMPHI = ADC_USER_AD4CH0CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH1CON1 = 
			( ADC_USER_AD4CH1CON1_TRG1SRC << _AD4CH1CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH1CON1_MODE << _AD4CH1CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH1CON1_TRG2SRC << _AD4CH1CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH1CON1_ACCNUM << _AD4CH1CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH1CON1_SAMC << _AD4CH1CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH1CON1_IRQSEL << _AD4CH1CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH1CON1_EIEN << _AD4CH1CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH1CON1_TRG1POL << _AD4CH1CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH1CON1_PINSEL << _AD4CH1CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH1CON1_NINSEL << _AD4CH1CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH1CON1_FRAC << _AD4CH1CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH1CON1_DIFF << _AD4CH1CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH1CON1bits.TRG1SRC = ADC_USER_AD4CH1CON1_TRG1SRC;
			AD4CH1CON1bits.MODE = ADC_USER_AD4CH1CON1_MODE;
			AD4CH1CON1bits.TRG2SRC = ADC_USER_AD4CH1CON1_TRG2SRC;
			AD4CH1CON1bits.ACCNUM = ADC_USER_AD4CH1CON1_ACCNUM;
			AD4CH1CON1bits.SAMC = ADC_USER_AD4CH1CON1_SAMC;
			AD4CH1CON1bits.IRQSEL = ADC_USER_AD4CH1CON1_IRQSEL;
			AD4CH1CON1bits.EIEN = ADC_USER_AD4CH1CON1_EIEN;
			AD4CH1CON1bits.TRG1POL = ADC_USER_AD4CH1CON1_TRG1POL;
			AD4CH1CON1bits.PINSEL = ADC_USER_AD4CH1CON1_PINSEL;
			AD4CH1CON1bits.NINSEL = ADC_USER_AD4CH1CON1_NINSEL;
			AD4CH1CON1bits.FRAC = ADC_USER_AD4CH1CON1_FRAC;
			AD4CH1CON1bits.DIFF = ADC_USER_AD4CH1CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH1CON2 = 
			( ADC_USER_AD4CH1CON2_ADCMPCNT << _AD4CH1CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH1CON2_CMPMOD << _AD4CH1CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH1CON2_ADCMPSTAT << _AD4CH1CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH1CON2_CMPCNTMOD << _AD4CH1CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH1CON2_CMPVAL << _AD4CH1CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH1CON2_ACCBRST << _AD4CH1CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH1CON2_ACCRO << _AD4CH1CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH1CON2bits.ADCMPCNT = ADC_USER_AD4CH1CON2_ADCMPCNT;
			AD4CH1CON2bits.CMPMOD = ADC_USER_AD4CH1CON2_CMPMOD;
			AD4CH1CON2bits.ADCMPSTAT = ADC_USER_AD4CH1CON2_ADCMPSTAT;
			AD4CH1CON2bits.CMPCNTMOD = ADC_USER_AD4CH1CON2_CMPCNTMOD;
			AD4CH1CON2bits.CMPVAL = ADC_USER_AD4CH1CON2_CMPVAL;
			AD4CH1CON2bits.ACCBRST = ADC_USER_AD4CH1CON2_ACCBRST;
			AD4CH1CON2bits.ACCRO = ADC_USER_AD4CH1CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH1DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH1DATA = ADC_USER_AD4CH1DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH1RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH1RES = 
			( ADC_USER_AD4CH1RES_RES << _AD4CH1RES_RES_POSITION ) |
			( ADC_USER_AD4CH1RES_RESF << _AD4CH1RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH1RESbits.RES = ADC_USER_AD4CH1RES_RES;
			AD4CH1RESbits.RESF = ADC_USER_AD4CH1RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH1CNT = 
			( ADC_USER_AD4CH1CNT_CNT << _AD4CH1CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH1CNT_CNTSTAT << _AD4CH1CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH1CNTbits.CNT = ADC_USER_AD4CH1CNT_CNT;
			AD4CH1CNTbits.CNTSTAT = ADC_USER_AD4CH1CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH1CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH1CMPLO = ADC_USER_AD4CH1CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH1CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH1CMPHI = ADC_USER_AD4CH1CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH2CON1 = 
			( ADC_USER_AD4CH2CON1_TRG1SRC << _AD4CH2CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH2CON1_MODE << _AD4CH2CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH2CON1_TRG2SRC << _AD4CH2CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH2CON1_ACCNUM << _AD4CH2CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH2CON1_SAMC << _AD4CH2CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH2CON1_IRQSEL << _AD4CH2CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH2CON1_EIEN << _AD4CH2CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH2CON1_TRG1POL << _AD4CH2CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH2CON1_PINSEL << _AD4CH2CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH2CON1_NINSEL << _AD4CH2CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH2CON1_FRAC << _AD4CH2CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH2CON1_DIFF << _AD4CH2CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH2CON1bits.TRG1SRC = ADC_USER_AD4CH2CON1_TRG1SRC;
			AD4CH2CON1bits.MODE = ADC_USER_AD4CH2CON1_MODE;
			AD4CH2CON1bits.TRG2SRC = ADC_USER_AD4CH2CON1_TRG2SRC;
			AD4CH2CON1bits.ACCNUM = ADC_USER_AD4CH2CON1_ACCNUM;
			AD4CH2CON1bits.SAMC = ADC_USER_AD4CH2CON1_SAMC;
			AD4CH2CON1bits.IRQSEL = ADC_USER_AD4CH2CON1_IRQSEL;
			AD4CH2CON1bits.EIEN = ADC_USER_AD4CH2CON1_EIEN;
			AD4CH2CON1bits.TRG1POL = ADC_USER_AD4CH2CON1_TRG1POL;
			AD4CH2CON1bits.PINSEL = ADC_USER_AD4CH2CON1_PINSEL;
			AD4CH2CON1bits.NINSEL = ADC_USER_AD4CH2CON1_NINSEL;
			AD4CH2CON1bits.FRAC = ADC_USER_AD4CH2CON1_FRAC;
			AD4CH2CON1bits.DIFF = ADC_USER_AD4CH2CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH2CON2 = 
			( ADC_USER_AD4CH2CON2_ADCMPCNT << _AD4CH2CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH2CON2_CMPMOD << _AD4CH2CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH2CON2_ADCMPSTAT << _AD4CH2CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH2CON2_CMPCNTMOD << _AD4CH2CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH2CON2_CMPVAL << _AD4CH2CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH2CON2_ACCBRST << _AD4CH2CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH2CON2_ACCRO << _AD4CH2CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH2CON2bits.ADCMPCNT = ADC_USER_AD4CH2CON2_ADCMPCNT;
			AD4CH2CON2bits.CMPMOD = ADC_USER_AD4CH2CON2_CMPMOD;
			AD4CH2CON2bits.ADCMPSTAT = ADC_USER_AD4CH2CON2_ADCMPSTAT;
			AD4CH2CON2bits.CMPCNTMOD = ADC_USER_AD4CH2CON2_CMPCNTMOD;
			AD4CH2CON2bits.CMPVAL = ADC_USER_AD4CH2CON2_CMPVAL;
			AD4CH2CON2bits.ACCBRST = ADC_USER_AD4CH2CON2_ACCBRST;
			AD4CH2CON2bits.ACCRO = ADC_USER_AD4CH2CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH2DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH2DATA = ADC_USER_AD4CH2DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH2RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH2RES = 
			( ADC_USER_AD4CH2RES_RES << _AD4CH2RES_RES_POSITION ) |
			( ADC_USER_AD4CH2RES_RESF << _AD4CH2RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH2RESbits.RES = ADC_USER_AD4CH2RES_RES;
			AD4CH2RESbits.RESF = ADC_USER_AD4CH2RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH2CNT = 
			( ADC_USER_AD4CH2CNT_CNT << _AD4CH2CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH2CNT_CNTSTAT << _AD4CH2CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH2CNTbits.CNT = ADC_USER_AD4CH2CNT_CNT;
			AD4CH2CNTbits.CNTSTAT = ADC_USER_AD4CH2CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH2CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH2CMPLO = ADC_USER_AD4CH2CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH2CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH2CMPHI = ADC_USER_AD4CH2CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH3CON1 = 
			( ADC_USER_AD4CH3CON1_TRG1SRC << _AD4CH3CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH3CON1_MODE << _AD4CH3CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH3CON1_TRG2SRC << _AD4CH3CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH3CON1_ACCNUM << _AD4CH3CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH3CON1_SAMC << _AD4CH3CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH3CON1_IRQSEL << _AD4CH3CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH3CON1_EIEN << _AD4CH3CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH3CON1_TRG1POL << _AD4CH3CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH3CON1_PINSEL << _AD4CH3CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH3CON1_NINSEL << _AD4CH3CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH3CON1_FRAC << _AD4CH3CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH3CON1_DIFF << _AD4CH3CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH3CON1bits.TRG1SRC = ADC_USER_AD4CH3CON1_TRG1SRC;
			AD4CH3CON1bits.MODE = ADC_USER_AD4CH3CON1_MODE;
			AD4CH3CON1bits.TRG2SRC = ADC_USER_AD4CH3CON1_TRG2SRC;
			AD4CH3CON1bits.ACCNUM = ADC_USER_AD4CH3CON1_ACCNUM;
			AD4CH3CON1bits.SAMC = ADC_USER_AD4CH3CON1_SAMC;
			AD4CH3CON1bits.IRQSEL = ADC_USER_AD4CH3CON1_IRQSEL;
			AD4CH3CON1bits.EIEN = ADC_USER_AD4CH3CON1_EIEN;
			AD4CH3CON1bits.TRG1POL = ADC_USER_AD4CH3CON1_TRG1POL;
			AD4CH3CON1bits.PINSEL = ADC_USER_AD4CH3CON1_PINSEL;
			AD4CH3CON1bits.NINSEL = ADC_USER_AD4CH3CON1_NINSEL;
			AD4CH3CON1bits.FRAC = ADC_USER_AD4CH3CON1_FRAC;
			AD4CH3CON1bits.DIFF = ADC_USER_AD4CH3CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH3CON2 = 
			( ADC_USER_AD4CH3CON2_ADCMPCNT << _AD4CH3CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH3CON2_CMPMOD << _AD4CH3CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH3CON2_ADCMPSTAT << _AD4CH3CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH3CON2_CMPCNTMOD << _AD4CH3CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH3CON2_CMPVAL << _AD4CH3CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH3CON2_ACCBRST << _AD4CH3CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH3CON2_ACCRO << _AD4CH3CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH3CON2bits.ADCMPCNT = ADC_USER_AD4CH3CON2_ADCMPCNT;
			AD4CH3CON2bits.CMPMOD = ADC_USER_AD4CH3CON2_CMPMOD;
			AD4CH3CON2bits.ADCMPSTAT = ADC_USER_AD4CH3CON2_ADCMPSTAT;
			AD4CH3CON2bits.CMPCNTMOD = ADC_USER_AD4CH3CON2_CMPCNTMOD;
			AD4CH3CON2bits.CMPVAL = ADC_USER_AD4CH3CON2_CMPVAL;
			AD4CH3CON2bits.ACCBRST = ADC_USER_AD4CH3CON2_ACCBRST;
			AD4CH3CON2bits.ACCRO = ADC_USER_AD4CH3CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH3DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH3DATA = ADC_USER_AD4CH3DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH3RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH3RES = 
			( ADC_USER_AD4CH3RES_RES << _AD4CH3RES_RES_POSITION ) |
			( ADC_USER_AD4CH3RES_RESF << _AD4CH3RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH3RESbits.RES = ADC_USER_AD4CH3RES_RES;
			AD4CH3RESbits.RESF = ADC_USER_AD4CH3RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH3CNT = 
			( ADC_USER_AD4CH3CNT_CNT << _AD4CH3CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH3CNT_CNTSTAT << _AD4CH3CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH3CNTbits.CNT = ADC_USER_AD4CH3CNT_CNT;
			AD4CH3CNTbits.CNTSTAT = ADC_USER_AD4CH3CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH3CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH3CMPLO = ADC_USER_AD4CH3CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH3CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH3CMPHI = ADC_USER_AD4CH3CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH4CON1 = 
			( ADC_USER_AD4CH4CON1_TRG1SRC << _AD4CH4CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH4CON1_MODE << _AD4CH4CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH4CON1_TRG2SRC << _AD4CH4CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH4CON1_ACCNUM << _AD4CH4CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH4CON1_SAMC << _AD4CH4CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH4CON1_IRQSEL << _AD4CH4CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH4CON1_EIEN << _AD4CH4CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH4CON1_TRG1POL << _AD4CH4CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH4CON1_PINSEL << _AD4CH4CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH4CON1_NINSEL << _AD4CH4CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH4CON1_FRAC << _AD4CH4CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH4CON1_DIFF << _AD4CH4CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH4CON1bits.TRG1SRC = ADC_USER_AD4CH4CON1_TRG1SRC;
			AD4CH4CON1bits.MODE = ADC_USER_AD4CH4CON1_MODE;
			AD4CH4CON1bits.TRG2SRC = ADC_USER_AD4CH4CON1_TRG2SRC;
			AD4CH4CON1bits.ACCNUM = ADC_USER_AD4CH4CON1_ACCNUM;
			AD4CH4CON1bits.SAMC = ADC_USER_AD4CH4CON1_SAMC;
			AD4CH4CON1bits.IRQSEL = ADC_USER_AD4CH4CON1_IRQSEL;
			AD4CH4CON1bits.EIEN = ADC_USER_AD4CH4CON1_EIEN;
			AD4CH4CON1bits.TRG1POL = ADC_USER_AD4CH4CON1_TRG1POL;
			AD4CH4CON1bits.PINSEL = ADC_USER_AD4CH4CON1_PINSEL;
			AD4CH4CON1bits.NINSEL = ADC_USER_AD4CH4CON1_NINSEL;
			AD4CH4CON1bits.FRAC = ADC_USER_AD4CH4CON1_FRAC;
			AD4CH4CON1bits.DIFF = ADC_USER_AD4CH4CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH4CON2 = 
			( ADC_USER_AD4CH4CON2_ADCMPCNT << _AD4CH4CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH4CON2_CMPMOD << _AD4CH4CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH4CON2_ADCMPSTAT << _AD4CH4CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH4CON2_CMPCNTMOD << _AD4CH4CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH4CON2_CMPVAL << _AD4CH4CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH4CON2_ACCBRST << _AD4CH4CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH4CON2_ACCRO << _AD4CH4CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH4CON2bits.ADCMPCNT = ADC_USER_AD4CH4CON2_ADCMPCNT;
			AD4CH4CON2bits.CMPMOD = ADC_USER_AD4CH4CON2_CMPMOD;
			AD4CH4CON2bits.ADCMPSTAT = ADC_USER_AD4CH4CON2_ADCMPSTAT;
			AD4CH4CON2bits.CMPCNTMOD = ADC_USER_AD4CH4CON2_CMPCNTMOD;
			AD4CH4CON2bits.CMPVAL = ADC_USER_AD4CH4CON2_CMPVAL;
			AD4CH4CON2bits.ACCBRST = ADC_USER_AD4CH4CON2_ACCBRST;
			AD4CH4CON2bits.ACCRO = ADC_USER_AD4CH4CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH4DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH4DATA = ADC_USER_AD4CH4DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH4RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH4RES = 
			( ADC_USER_AD4CH4RES_RES << _AD4CH4RES_RES_POSITION ) |
			( ADC_USER_AD4CH4RES_RESF << _AD4CH4RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH4RESbits.RES = ADC_USER_AD4CH4RES_RES;
			AD4CH4RESbits.RESF = ADC_USER_AD4CH4RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH4CNT = 
			( ADC_USER_AD4CH4CNT_CNT << _AD4CH4CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH4CNT_CNTSTAT << _AD4CH4CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH4CNTbits.CNT = ADC_USER_AD4CH4CNT_CNT;
			AD4CH4CNTbits.CNTSTAT = ADC_USER_AD4CH4CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH4CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH4CMPLO = ADC_USER_AD4CH4CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH4CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH4CMPHI = ADC_USER_AD4CH4CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH5CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH5CON1 = 
			( ADC_USER_AD4CH5CON1_TRG1SRC << _AD4CH5CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH5CON1_MODE << _AD4CH5CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH5CON1_TRG2SRC << _AD4CH5CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH5CON1_ACCNUM << _AD4CH5CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH5CON1_SAMC << _AD4CH5CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH5CON1_IRQSEL << _AD4CH5CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH5CON1_EIEN << _AD4CH5CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH5CON1_TRG1POL << _AD4CH5CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH5CON1_PINSEL << _AD4CH5CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH5CON1_NINSEL << _AD4CH5CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH5CON1_FRAC << _AD4CH5CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH5CON1_DIFF << _AD4CH5CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH5CON1bits.TRG1SRC = ADC_USER_AD4CH5CON1_TRG1SRC;
			AD4CH5CON1bits.MODE = ADC_USER_AD4CH5CON1_MODE;
			AD4CH5CON1bits.TRG2SRC = ADC_USER_AD4CH5CON1_TRG2SRC;
			AD4CH5CON1bits.ACCNUM = ADC_USER_AD4CH5CON1_ACCNUM;
			AD4CH5CON1bits.SAMC = ADC_USER_AD4CH5CON1_SAMC;
			AD4CH5CON1bits.IRQSEL = ADC_USER_AD4CH5CON1_IRQSEL;
			AD4CH5CON1bits.EIEN = ADC_USER_AD4CH5CON1_EIEN;
			AD4CH5CON1bits.TRG1POL = ADC_USER_AD4CH5CON1_TRG1POL;
			AD4CH5CON1bits.PINSEL = ADC_USER_AD4CH5CON1_PINSEL;
			AD4CH5CON1bits.NINSEL = ADC_USER_AD4CH5CON1_NINSEL;
			AD4CH5CON1bits.FRAC = ADC_USER_AD4CH5CON1_FRAC;
			AD4CH5CON1bits.DIFF = ADC_USER_AD4CH5CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH5CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH5CON2 = 
			( ADC_USER_AD4CH5CON2_ADCMPCNT << _AD4CH5CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH5CON2_CMPMOD << _AD4CH5CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH5CON2_ADCMPSTAT << _AD4CH5CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH5CON2_CMPCNTMOD << _AD4CH5CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH5CON2_CMPVAL << _AD4CH5CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH5CON2_ACCBRST << _AD4CH5CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH5CON2_ACCRO << _AD4CH5CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH5CON2bits.ADCMPCNT = ADC_USER_AD4CH5CON2_ADCMPCNT;
			AD4CH5CON2bits.CMPMOD = ADC_USER_AD4CH5CON2_CMPMOD;
			AD4CH5CON2bits.ADCMPSTAT = ADC_USER_AD4CH5CON2_ADCMPSTAT;
			AD4CH5CON2bits.CMPCNTMOD = ADC_USER_AD4CH5CON2_CMPCNTMOD;
			AD4CH5CON2bits.CMPVAL = ADC_USER_AD4CH5CON2_CMPVAL;
			AD4CH5CON2bits.ACCBRST = ADC_USER_AD4CH5CON2_ACCBRST;
			AD4CH5CON2bits.ACCRO = ADC_USER_AD4CH5CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH5DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH5DATA = ADC_USER_AD4CH5DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH5RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH5RES = 
			( ADC_USER_AD4CH5RES_RES << _AD4CH5RES_RES_POSITION ) |
			( ADC_USER_AD4CH5RES_RESF << _AD4CH5RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH5RESbits.RES = ADC_USER_AD4CH5RES_RES;
			AD4CH5RESbits.RESF = ADC_USER_AD4CH5RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH5CNT = 
			( ADC_USER_AD4CH5CNT_CNT << _AD4CH5CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH5CNT_CNTSTAT << _AD4CH5CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH5CNTbits.CNT = ADC_USER_AD4CH5CNT_CNT;
			AD4CH5CNTbits.CNTSTAT = ADC_USER_AD4CH5CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH5CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH5CMPLO = ADC_USER_AD4CH5CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH5CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH5CMPHI = ADC_USER_AD4CH5CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH6CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6CON1 = 
			( ADC_USER_AD4CH6CON1_TRG1SRC << _AD4CH6CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH6CON1_MODE << _AD4CH6CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH6CON1_TRG2SRC << _AD4CH6CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH6CON1_ACCNUM << _AD4CH6CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH6CON1_SAMC << _AD4CH6CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH6CON1_IRQSEL << _AD4CH6CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH6CON1_EIEN << _AD4CH6CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH6CON1_TRG1POL << _AD4CH6CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH6CON1_PINSEL << _AD4CH6CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH6CON1_NINSEL << _AD4CH6CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH6CON1_FRAC << _AD4CH6CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH6CON1_DIFF << _AD4CH6CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH6CON1bits.TRG1SRC = ADC_USER_AD4CH6CON1_TRG1SRC;
			AD4CH6CON1bits.MODE = ADC_USER_AD4CH6CON1_MODE;
			AD4CH6CON1bits.TRG2SRC = ADC_USER_AD4CH6CON1_TRG2SRC;
			AD4CH6CON1bits.ACCNUM = ADC_USER_AD4CH6CON1_ACCNUM;
			AD4CH6CON1bits.SAMC = ADC_USER_AD4CH6CON1_SAMC;
			AD4CH6CON1bits.IRQSEL = ADC_USER_AD4CH6CON1_IRQSEL;
			AD4CH6CON1bits.EIEN = ADC_USER_AD4CH6CON1_EIEN;
			AD4CH6CON1bits.TRG1POL = ADC_USER_AD4CH6CON1_TRG1POL;
			AD4CH6CON1bits.PINSEL = ADC_USER_AD4CH6CON1_PINSEL;
			AD4CH6CON1bits.NINSEL = ADC_USER_AD4CH6CON1_NINSEL;
			AD4CH6CON1bits.FRAC = ADC_USER_AD4CH6CON1_FRAC;
			AD4CH6CON1bits.DIFF = ADC_USER_AD4CH6CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH6CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6CON2 = 
			( ADC_USER_AD4CH6CON2_ADCMPCNT << _AD4CH6CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH6CON2_CMPMOD << _AD4CH6CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH6CON2_ADCMPSTAT << _AD4CH6CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH6CON2_CMPCNTMOD << _AD4CH6CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH6CON2_CMPVAL << _AD4CH6CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH6CON2_ACCBRST << _AD4CH6CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH6CON2_ACCRO << _AD4CH6CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH6CON2bits.ADCMPCNT = ADC_USER_AD4CH6CON2_ADCMPCNT;
			AD4CH6CON2bits.CMPMOD = ADC_USER_AD4CH6CON2_CMPMOD;
			AD4CH6CON2bits.ADCMPSTAT = ADC_USER_AD4CH6CON2_ADCMPSTAT;
			AD4CH6CON2bits.CMPCNTMOD = ADC_USER_AD4CH6CON2_CMPCNTMOD;
			AD4CH6CON2bits.CMPVAL = ADC_USER_AD4CH6CON2_CMPVAL;
			AD4CH6CON2bits.ACCBRST = ADC_USER_AD4CH6CON2_ACCBRST;
			AD4CH6CON2bits.ACCRO = ADC_USER_AD4CH6CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH6DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6DATA = ADC_USER_AD4CH6DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH6RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6RES = 
			( ADC_USER_AD4CH6RES_RES << _AD4CH6RES_RES_POSITION ) |
			( ADC_USER_AD4CH6RES_RESF << _AD4CH6RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH6RESbits.RES = ADC_USER_AD4CH6RES_RES;
			AD4CH6RESbits.RESF = ADC_USER_AD4CH6RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6CNT = 
			( ADC_USER_AD4CH6CNT_CNT << _AD4CH6CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH6CNT_CNTSTAT << _AD4CH6CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH6CNTbits.CNT = ADC_USER_AD4CH6CNT_CNT;
			AD4CH6CNTbits.CNTSTAT = ADC_USER_AD4CH6CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH6CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6CMPLO = ADC_USER_AD4CH6CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH6CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6CMPHI = ADC_USER_AD4CH6CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH6ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH6ACC = ADC_USER_AD4CH6ACC;
	/*-----------------------------------------------------------------------*/
	/* AD4CH7CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7CON1 = 
			( ADC_USER_AD4CH7CON1_TRG1SRC << _AD4CH7CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD4CH7CON1_MODE << _AD4CH7CON1_MODE_POSITION ) |
			( ADC_USER_AD4CH7CON1_TRG2SRC << _AD4CH7CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD4CH7CON1_ACCNUM << _AD4CH7CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD4CH7CON1_SAMC << _AD4CH7CON1_SAMC_POSITION ) |
			( ADC_USER_AD4CH7CON1_IRQSEL << _AD4CH7CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD4CH7CON1_EIEN << _AD4CH7CON1_EIEN_POSITION ) |
			( ADC_USER_AD4CH7CON1_TRG1POL << _AD4CH7CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD4CH7CON1_PINSEL << _AD4CH7CON1_PINSEL_POSITION ) |
			( ADC_USER_AD4CH7CON1_NINSEL << _AD4CH7CON1_NINSEL_POSITION ) |
			( ADC_USER_AD4CH7CON1_FRAC << _AD4CH7CON1_FRAC_POSITION ) |
			( ADC_USER_AD4CH7CON1_DIFF << _AD4CH7CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH7CON1bits.TRG1SRC = ADC_USER_AD4CH7CON1_TRG1SRC;
			AD4CH7CON1bits.MODE = ADC_USER_AD4CH7CON1_MODE;
			AD4CH7CON1bits.TRG2SRC = ADC_USER_AD4CH7CON1_TRG2SRC;
			AD4CH7CON1bits.ACCNUM = ADC_USER_AD4CH7CON1_ACCNUM;
			AD4CH7CON1bits.SAMC = ADC_USER_AD4CH7CON1_SAMC;
			AD4CH7CON1bits.IRQSEL = ADC_USER_AD4CH7CON1_IRQSEL;
			AD4CH7CON1bits.EIEN = ADC_USER_AD4CH7CON1_EIEN;
			AD4CH7CON1bits.TRG1POL = ADC_USER_AD4CH7CON1_TRG1POL;
			AD4CH7CON1bits.PINSEL = ADC_USER_AD4CH7CON1_PINSEL;
			AD4CH7CON1bits.NINSEL = ADC_USER_AD4CH7CON1_NINSEL;
			AD4CH7CON1bits.FRAC = ADC_USER_AD4CH7CON1_FRAC;
			AD4CH7CON1bits.DIFF = ADC_USER_AD4CH7CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH7CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7CON2 = 
			( ADC_USER_AD4CH7CON2_ADCMPCNT << _AD4CH7CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD4CH7CON2_CMPMOD << _AD4CH7CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD4CH7CON2_ADCMPSTAT << _AD4CH7CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD4CH7CON2_CMPCNTMOD << _AD4CH7CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD4CH7CON2_CMPVAL << _AD4CH7CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD4CH7CON2_ACCBRST << _AD4CH7CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD4CH7CON2_ACCRO << _AD4CH7CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH7CON2bits.ADCMPCNT = ADC_USER_AD4CH7CON2_ADCMPCNT;
			AD4CH7CON2bits.CMPMOD = ADC_USER_AD4CH7CON2_CMPMOD;
			AD4CH7CON2bits.ADCMPSTAT = ADC_USER_AD4CH7CON2_ADCMPSTAT;
			AD4CH7CON2bits.CMPCNTMOD = ADC_USER_AD4CH7CON2_CMPCNTMOD;
			AD4CH7CON2bits.CMPVAL = ADC_USER_AD4CH7CON2_CMPVAL;
			AD4CH7CON2bits.ACCBRST = ADC_USER_AD4CH7CON2_ACCBRST;
			AD4CH7CON2bits.ACCRO = ADC_USER_AD4CH7CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH7DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7DATA = ADC_USER_AD4CH7DATA;
	/*-----------------------------------------------------------------------*/
	/* AD4CH7RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7RES = 
			( ADC_USER_AD4CH7RES_RES << _AD4CH7RES_RES_POSITION ) |
			( ADC_USER_AD4CH7RES_RESF << _AD4CH7RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH7RESbits.RES = ADC_USER_AD4CH7RES_RES;
			AD4CH7RESbits.RESF = ADC_USER_AD4CH7RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7CNT = 
			( ADC_USER_AD4CH7CNT_CNT << _AD4CH7CNT_CNT_POSITION ) |
			( ADC_USER_AD4CH7CNT_CNTSTAT << _AD4CH7CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD4CH7CNTbits.CNT = ADC_USER_AD4CH7CNT_CNT;
			AD4CH7CNTbits.CNTSTAT = ADC_USER_AD4CH7CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD4CH7CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7CMPLO = ADC_USER_AD4CH7CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD4CH7CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7CMPHI = ADC_USER_AD4CH7CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD4CH7ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD4CH7ACC = ADC_USER_AD4CH7ACC;

#endif
}


/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC5_Set_All_Register(void)
* @brief     ADC5レジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC5_Set_All_Register(void)
{
#if ( PMD_ADC5MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* AD5CONレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CON = 
			( ADC_USER_AD5CON_CALCNT << _AD5CON_CALCNT_POSITION ) |
			( ADC_USER_AD5CON_BUFEN << _AD5CON_BUFEN_POSITION ) |
			( ADC_USER_AD5CON_TSTEN << _AD5CON_TSTEN_POSITION ) |
			( ADC_USER_AD5CON_TSTLOCK << _AD5CON_TSTLOCK_POSITION ) |
			( ADC_USER_AD5CON_ON << _AD5CON_ON_POSITION ) |
			( ADC_USER_AD5CON_STNDBY << _AD5CON_STNDBY_POSITION ) |
			( ADC_USER_AD5CON_RPTCNT << _AD5CON_RPTCNT_POSITION ) |
			( ADC_USER_AD5CON_MODE << _AD5CON_MODE_POSITION ) |
			( ADC_USER_AD5CON_CALRATE << _AD5CON_CALRATE_POSITION ) |
			( ADC_USER_AD5CON_ACALEN << _AD5CON_ACALEN_POSITION ) |
			( ADC_USER_AD5CON_CALREQ << _AD5CON_CALREQ_POSITION ) |
			( ADC_USER_AD5CON_CALRDY << _AD5CON_CALRDY_POSITION ) |
			( ADC_USER_AD5CON_ADRDY << _AD5CON_ADRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CONbits.CALCNT = ADC_USER_AD5CON_CALCNT;
			AD5CONbits.BUFEN = ADC_USER_AD5CON_BUFEN;
			AD5CONbits.TSTEN = ADC_USER_AD5CON_TSTEN;
			AD5CONbits.TSTLOCK = ADC_USER_AD5CON_TSTLOCK;
			AD5CONbits.ON = ADC_USER_AD5CON_ON;
			AD5CONbits.STNDBY = ADC_USER_AD5CON_STNDBY;
			AD5CONbits.RPTCNT = ADC_USER_AD5CON_RPTCNT;
			AD5CONbits.MODE = ADC_USER_AD5CON_MODE;
			AD5CONbits.CALRATE = ADC_USER_AD5CON_CALRATE;
			AD5CONbits.ACALEN = ADC_USER_AD5CON_ACALEN;
			AD5CONbits.CALREQ = ADC_USER_AD5CON_CALREQ;
			AD5CONbits.CALRDY = ADC_USER_AD5CON_CALRDY;
			AD5CONbits.ADRDY = ADC_USER_AD5CON_ADRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5DATAOVRレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5DATAOVR = ADC_USER_AD5DATAOVR;
	/*-----------------------------------------------------------------------*/
	/* AD5STATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5STAT = 
			( ADC_USER_AD5STAT_CH0RDY << _AD5STAT_CH0RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH1RDY << _AD5STAT_CH1RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH2RDY << _AD5STAT_CH2RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH3RDY << _AD5STAT_CH3RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH4RDY << _AD5STAT_CH4RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH5RDY << _AD5STAT_CH5RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH6RDY << _AD5STAT_CH6RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH7RDY << _AD5STAT_CH7RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH8RDY << _AD5STAT_CH8RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH9RDY << _AD5STAT_CH9RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH10RDY << _AD5STAT_CH10RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH11RDY << _AD5STAT_CH11RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH12RDY << _AD5STAT_CH12RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH13RDY << _AD5STAT_CH13RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH14RDY << _AD5STAT_CH14RDY_POSITION ) |
			( ADC_USER_AD5STAT_CH15RDY << _AD5STAT_CH15RDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5STATbits.CH0RDY = ADC_USER_AD5STAT_CH0RDY;
			AD5STATbits.CH1RDY = ADC_USER_AD5STAT_CH1RDY;
			AD5STATbits.CH2RDY = ADC_USER_AD5STAT_CH2RDY;
			AD5STATbits.CH3RDY = ADC_USER_AD5STAT_CH3RDY;
			AD5STATbits.CH4RDY = ADC_USER_AD5STAT_CH4RDY;
			AD5STATbits.CH5RDY = ADC_USER_AD5STAT_CH5RDY;
			AD5STATbits.CH6RDY = ADC_USER_AD5STAT_CH6RDY;
			AD5STATbits.CH7RDY = ADC_USER_AD5STAT_CH7RDY;
			AD5STATbits.CH8RDY = ADC_USER_AD5STAT_CH8RDY;
			AD5STATbits.CH9RDY = ADC_USER_AD5STAT_CH9RDY;
			AD5STATbits.CH10RDY = ADC_USER_AD5STAT_CH10RDY;
			AD5STATbits.CH11RDY = ADC_USER_AD5STAT_CH11RDY;
			AD5STATbits.CH12RDY = ADC_USER_AD5STAT_CH12RDY;
			AD5STATbits.CH13RDY = ADC_USER_AD5STAT_CH13RDY;
			AD5STATbits.CH14RDY = ADC_USER_AD5STAT_CH14RDY;
			AD5STATbits.CH15RDY = ADC_USER_AD5STAT_CH15RDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5RSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5RSTAT = 
			( ADC_USER_AD5RSTAT_CH0RRDY << _AD5RSTAT_CH0RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH1RRDY << _AD5RSTAT_CH1RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH2RRDY << _AD5RSTAT_CH2RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH3RRDY << _AD5RSTAT_CH3RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH4RRDY << _AD5RSTAT_CH4RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH5RRDY << _AD5RSTAT_CH5RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH6RRDY << _AD5RSTAT_CH6RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH7RRDY << _AD5RSTAT_CH7RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH8RRDY << _AD5RSTAT_CH8RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH9RRDY << _AD5RSTAT_CH9RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH10RRDY << _AD5RSTAT_CH10RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH11RRDY << _AD5RSTAT_CH11RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH12RRDY << _AD5RSTAT_CH12RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH13RRDY << _AD5RSTAT_CH13RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH14RRDY << _AD5RSTAT_CH14RRDY_POSITION ) |
			( ADC_USER_AD5RSTAT_CH15RRDY << _AD5RSTAT_CH15RRDY_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5RSTATbits.CH0RRDY = ADC_USER_AD5RSTAT_CH0RRDY;
			AD5RSTATbits.CH1RRDY = ADC_USER_AD5RSTAT_CH1RRDY;
			AD5RSTATbits.CH2RRDY = ADC_USER_AD5RSTAT_CH2RRDY;
			AD5RSTATbits.CH3RRDY = ADC_USER_AD5RSTAT_CH3RRDY;
			AD5RSTATbits.CH4RRDY = ADC_USER_AD5RSTAT_CH4RRDY;
			AD5RSTATbits.CH5RRDY = ADC_USER_AD5RSTAT_CH5RRDY;
			AD5RSTATbits.CH6RRDY = ADC_USER_AD5RSTAT_CH6RRDY;
			AD5RSTATbits.CH7RRDY = ADC_USER_AD5RSTAT_CH7RRDY;
			AD5RSTATbits.CH8RRDY = ADC_USER_AD5RSTAT_CH8RRDY;
			AD5RSTATbits.CH9RRDY = ADC_USER_AD5RSTAT_CH9RRDY;
			AD5RSTATbits.CH10RRDY = ADC_USER_AD5RSTAT_CH10RRDY;
			AD5RSTATbits.CH11RRDY = ADC_USER_AD5RSTAT_CH11RRDY;
			AD5RSTATbits.CH12RRDY = ADC_USER_AD5RSTAT_CH12RRDY;
			AD5RSTATbits.CH13RRDY = ADC_USER_AD5RSTAT_CH13RRDY;
			AD5RSTATbits.CH14RRDY = ADC_USER_AD5RSTAT_CH14RRDY;
			AD5RSTATbits.CH15RRDY = ADC_USER_AD5RSTAT_CH15RRDY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CMPSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CMPSTAT = 
			( ADC_USER_AD5CMPSTAT_CH0FLG << _AD5CMPSTAT_CH0FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH1FLG << _AD5CMPSTAT_CH1FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH2FLG << _AD5CMPSTAT_CH2FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH3FLG << _AD5CMPSTAT_CH3FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH4FLG << _AD5CMPSTAT_CH4FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH5FLG << _AD5CMPSTAT_CH5FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH6FLG << _AD5CMPSTAT_CH6FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH7FLG << _AD5CMPSTAT_CH7FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH8FLG << _AD5CMPSTAT_CH8FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH9FLG << _AD5CMPSTAT_CH9FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH10FLG << _AD5CMPSTAT_CH10FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH11FLG << _AD5CMPSTAT_CH11FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH12FLG << _AD5CMPSTAT_CH12FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH13FLG << _AD5CMPSTAT_CH13FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH14FLG << _AD5CMPSTAT_CH14FLG_POSITION ) |
			( ADC_USER_AD5CMPSTAT_CH15FLG << _AD5CMPSTAT_CH15FLG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CMPSTATbits.CH0FLG = ADC_USER_AD5CMPSTAT_CH0FLG;
			AD5CMPSTATbits.CH1FLG = ADC_USER_AD5CMPSTAT_CH1FLG;
			AD5CMPSTATbits.CH2FLG = ADC_USER_AD5CMPSTAT_CH2FLG;
			AD5CMPSTATbits.CH3FLG = ADC_USER_AD5CMPSTAT_CH3FLG;
			AD5CMPSTATbits.CH4FLG = ADC_USER_AD5CMPSTAT_CH4FLG;
			AD5CMPSTATbits.CH5FLG = ADC_USER_AD5CMPSTAT_CH5FLG;
			AD5CMPSTATbits.CH6FLG = ADC_USER_AD5CMPSTAT_CH6FLG;
			AD5CMPSTATbits.CH7FLG = ADC_USER_AD5CMPSTAT_CH7FLG;
			AD5CMPSTATbits.CH8FLG = ADC_USER_AD5CMPSTAT_CH8FLG;
			AD5CMPSTATbits.CH9FLG = ADC_USER_AD5CMPSTAT_CH9FLG;
			AD5CMPSTATbits.CH10FLG = ADC_USER_AD5CMPSTAT_CH10FLG;
			AD5CMPSTATbits.CH11FLG = ADC_USER_AD5CMPSTAT_CH11FLG;
			AD5CMPSTATbits.CH12FLG = ADC_USER_AD5CMPSTAT_CH12FLG;
			AD5CMPSTATbits.CH13FLG = ADC_USER_AD5CMPSTAT_CH13FLG;
			AD5CMPSTATbits.CH14FLG = ADC_USER_AD5CMPSTAT_CH14FLG;
			AD5CMPSTATbits.CH15FLG = ADC_USER_AD5CMPSTAT_CH15FLG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5SWTRGレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5SWTRG = 
			( ADC_USER_AD5SWTRG_CH0TRG << _AD5SWTRG_CH0TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH1TRG << _AD5SWTRG_CH1TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH2TRG << _AD5SWTRG_CH2TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH3TRG << _AD5SWTRG_CH3TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH4TRG << _AD5SWTRG_CH4TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH5TRG << _AD5SWTRG_CH5TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH6TRG << _AD5SWTRG_CH6TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH7TRG << _AD5SWTRG_CH7TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH8TRG << _AD5SWTRG_CH8TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH9TRG << _AD5SWTRG_CH9TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH10TRG << _AD5SWTRG_CH10TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH11TRG << _AD5SWTRG_CH11TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH12TRG << _AD5SWTRG_CH12TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH13TRG << _AD5SWTRG_CH13TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH14TRG << _AD5SWTRG_CH14TRG_POSITION ) |
			( ADC_USER_AD5SWTRG_CH15TRG << _AD5SWTRG_CH15TRG_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5SWTRGbits.CH0TRG = ADC_USER_AD5SWTRG_CH0TRG;
			AD5SWTRGbits.CH1TRG = ADC_USER_AD5SWTRG_CH1TRG;
			AD5SWTRGbits.CH2TRG = ADC_USER_AD5SWTRG_CH2TRG;
			AD5SWTRGbits.CH3TRG = ADC_USER_AD5SWTRG_CH3TRG;
			AD5SWTRGbits.CH4TRG = ADC_USER_AD5SWTRG_CH4TRG;
			AD5SWTRGbits.CH5TRG = ADC_USER_AD5SWTRG_CH5TRG;
			AD5SWTRGbits.CH6TRG = ADC_USER_AD5SWTRG_CH6TRG;
			AD5SWTRGbits.CH7TRG = ADC_USER_AD5SWTRG_CH7TRG;
			AD5SWTRGbits.CH8TRG = ADC_USER_AD5SWTRG_CH8TRG;
			AD5SWTRGbits.CH9TRG = ADC_USER_AD5SWTRG_CH9TRG;
			AD5SWTRGbits.CH10TRG = ADC_USER_AD5SWTRG_CH10TRG;
			AD5SWTRGbits.CH11TRG = ADC_USER_AD5SWTRG_CH11TRG;
			AD5SWTRGbits.CH12TRG = ADC_USER_AD5SWTRG_CH12TRG;
			AD5SWTRGbits.CH13TRG = ADC_USER_AD5SWTRG_CH13TRG;
			AD5SWTRGbits.CH14TRG = ADC_USER_AD5SWTRG_CH14TRG;
			AD5SWTRGbits.CH15TRG = ADC_USER_AD5SWTRG_CH15TRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH0CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH0CON1 = 
			( ADC_USER_AD5CH0CON1_TRG1SRC << _AD5CH0CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH0CON1_MODE << _AD5CH0CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH0CON1_TRG2SRC << _AD5CH0CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH0CON1_ACCNUM << _AD5CH0CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH0CON1_SAMC << _AD5CH0CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH0CON1_IRQSEL << _AD5CH0CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH0CON1_EIEN << _AD5CH0CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH0CON1_TRG1POL << _AD5CH0CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH0CON1_PINSEL << _AD5CH0CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH0CON1_NINSEL << _AD5CH0CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH0CON1_FRAC << _AD5CH0CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH0CON1_DIFF << _AD5CH0CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH0CON1bits.TRG1SRC = ADC_USER_AD5CH0CON1_TRG1SRC;
			AD5CH0CON1bits.MODE = ADC_USER_AD5CH0CON1_MODE;
			AD5CH0CON1bits.TRG2SRC = ADC_USER_AD5CH0CON1_TRG2SRC;
			AD5CH0CON1bits.ACCNUM = ADC_USER_AD5CH0CON1_ACCNUM;
			AD5CH0CON1bits.SAMC = ADC_USER_AD5CH0CON1_SAMC;
			AD5CH0CON1bits.IRQSEL = ADC_USER_AD5CH0CON1_IRQSEL;
			AD5CH0CON1bits.EIEN = ADC_USER_AD5CH0CON1_EIEN;
			AD5CH0CON1bits.TRG1POL = ADC_USER_AD5CH0CON1_TRG1POL;
			AD5CH0CON1bits.PINSEL = ADC_USER_AD5CH0CON1_PINSEL;
			AD5CH0CON1bits.NINSEL = ADC_USER_AD5CH0CON1_NINSEL;
			AD5CH0CON1bits.FRAC = ADC_USER_AD5CH0CON1_FRAC;
			AD5CH0CON1bits.DIFF = ADC_USER_AD5CH0CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH0CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH0CON2 = 
			( ADC_USER_AD5CH0CON2_ADCMPCNT << _AD5CH0CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH0CON2_CMPMOD << _AD5CH0CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH0CON2_ADCMPSTAT << _AD5CH0CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH0CON2_CMPCNTMOD << _AD5CH0CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH0CON2_CMPVAL << _AD5CH0CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH0CON2_ACCBRST << _AD5CH0CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH0CON2_ACCRO << _AD5CH0CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH0CON2bits.ADCMPCNT = ADC_USER_AD5CH0CON2_ADCMPCNT;
			AD5CH0CON2bits.CMPMOD = ADC_USER_AD5CH0CON2_CMPMOD;
			AD5CH0CON2bits.ADCMPSTAT = ADC_USER_AD5CH0CON2_ADCMPSTAT;
			AD5CH0CON2bits.CMPCNTMOD = ADC_USER_AD5CH0CON2_CMPCNTMOD;
			AD5CH0CON2bits.CMPVAL = ADC_USER_AD5CH0CON2_CMPVAL;
			AD5CH0CON2bits.ACCBRST = ADC_USER_AD5CH0CON2_ACCBRST;
			AD5CH0CON2bits.ACCRO = ADC_USER_AD5CH0CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH0DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH0DATA = ADC_USER_AD5CH0DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH0RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH0RES = 
			( ADC_USER_AD5CH0RES_RES << _AD5CH0RES_RES_POSITION ) |
			( ADC_USER_AD5CH0RES_RESF << _AD5CH0RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH0RESbits.RES = ADC_USER_AD5CH0RES_RES;
			AD5CH0RESbits.RESF = ADC_USER_AD5CH0RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH0CNT = 
			( ADC_USER_AD5CH0CNT_CNT << _AD5CH0CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH0CNT_CNTSTAT << _AD5CH0CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH0CNTbits.CNT = ADC_USER_AD5CH0CNT_CNT;
			AD5CH0CNTbits.CNTSTAT = ADC_USER_AD5CH0CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH0CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH0CMPLO = ADC_USER_AD5CH0CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH0CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH0CMPHI = ADC_USER_AD5CH0CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH1CON1 = 
			( ADC_USER_AD5CH1CON1_TRG1SRC << _AD5CH1CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH1CON1_MODE << _AD5CH1CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH1CON1_TRG2SRC << _AD5CH1CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH1CON1_ACCNUM << _AD5CH1CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH1CON1_SAMC << _AD5CH1CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH1CON1_IRQSEL << _AD5CH1CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH1CON1_EIEN << _AD5CH1CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH1CON1_TRG1POL << _AD5CH1CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH1CON1_PINSEL << _AD5CH1CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH1CON1_NINSEL << _AD5CH1CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH1CON1_FRAC << _AD5CH1CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH1CON1_DIFF << _AD5CH1CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH1CON1bits.TRG1SRC = ADC_USER_AD5CH1CON1_TRG1SRC;
			AD5CH1CON1bits.MODE = ADC_USER_AD5CH1CON1_MODE;
			AD5CH1CON1bits.TRG2SRC = ADC_USER_AD5CH1CON1_TRG2SRC;
			AD5CH1CON1bits.ACCNUM = ADC_USER_AD5CH1CON1_ACCNUM;
			AD5CH1CON1bits.SAMC = ADC_USER_AD5CH1CON1_SAMC;
			AD5CH1CON1bits.IRQSEL = ADC_USER_AD5CH1CON1_IRQSEL;
			AD5CH1CON1bits.EIEN = ADC_USER_AD5CH1CON1_EIEN;
			AD5CH1CON1bits.TRG1POL = ADC_USER_AD5CH1CON1_TRG1POL;
			AD5CH1CON1bits.PINSEL = ADC_USER_AD5CH1CON1_PINSEL;
			AD5CH1CON1bits.NINSEL = ADC_USER_AD5CH1CON1_NINSEL;
			AD5CH1CON1bits.FRAC = ADC_USER_AD5CH1CON1_FRAC;
			AD5CH1CON1bits.DIFF = ADC_USER_AD5CH1CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH1CON2 = 
			( ADC_USER_AD5CH1CON2_ADCMPCNT << _AD5CH1CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH1CON2_CMPMOD << _AD5CH1CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH1CON2_ADCMPSTAT << _AD5CH1CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH1CON2_CMPCNTMOD << _AD5CH1CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH1CON2_CMPVAL << _AD5CH1CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH1CON2_ACCBRST << _AD5CH1CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH1CON2_ACCRO << _AD5CH1CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH1CON2bits.ADCMPCNT = ADC_USER_AD5CH1CON2_ADCMPCNT;
			AD5CH1CON2bits.CMPMOD = ADC_USER_AD5CH1CON2_CMPMOD;
			AD5CH1CON2bits.ADCMPSTAT = ADC_USER_AD5CH1CON2_ADCMPSTAT;
			AD5CH1CON2bits.CMPCNTMOD = ADC_USER_AD5CH1CON2_CMPCNTMOD;
			AD5CH1CON2bits.CMPVAL = ADC_USER_AD5CH1CON2_CMPVAL;
			AD5CH1CON2bits.ACCBRST = ADC_USER_AD5CH1CON2_ACCBRST;
			AD5CH1CON2bits.ACCRO = ADC_USER_AD5CH1CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH1DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH1DATA = ADC_USER_AD5CH1DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH1RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH1RES = 
			( ADC_USER_AD5CH1RES_RES << _AD5CH1RES_RES_POSITION ) |
			( ADC_USER_AD5CH1RES_RESF << _AD5CH1RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH1RESbits.RES = ADC_USER_AD5CH1RES_RES;
			AD5CH1RESbits.RESF = ADC_USER_AD5CH1RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH1CNT = 
			( ADC_USER_AD5CH1CNT_CNT << _AD5CH1CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH1CNT_CNTSTAT << _AD5CH1CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH1CNTbits.CNT = ADC_USER_AD5CH1CNT_CNT;
			AD5CH1CNTbits.CNTSTAT = ADC_USER_AD5CH1CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH1CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH1CMPLO = ADC_USER_AD5CH1CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH1CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH1CMPHI = ADC_USER_AD5CH1CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH2CON1 = 
			( ADC_USER_AD5CH2CON1_TRG1SRC << _AD5CH2CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH2CON1_MODE << _AD5CH2CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH2CON1_TRG2SRC << _AD5CH2CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH2CON1_ACCNUM << _AD5CH2CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH2CON1_SAMC << _AD5CH2CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH2CON1_IRQSEL << _AD5CH2CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH2CON1_EIEN << _AD5CH2CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH2CON1_TRG1POL << _AD5CH2CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH2CON1_PINSEL << _AD5CH2CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH2CON1_NINSEL << _AD5CH2CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH2CON1_FRAC << _AD5CH2CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH2CON1_DIFF << _AD5CH2CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH2CON1bits.TRG1SRC = ADC_USER_AD5CH2CON1_TRG1SRC;
			AD5CH2CON1bits.MODE = ADC_USER_AD5CH2CON1_MODE;
			AD5CH2CON1bits.TRG2SRC = ADC_USER_AD5CH2CON1_TRG2SRC;
			AD5CH2CON1bits.ACCNUM = ADC_USER_AD5CH2CON1_ACCNUM;
			AD5CH2CON1bits.SAMC = ADC_USER_AD5CH2CON1_SAMC;
			AD5CH2CON1bits.IRQSEL = ADC_USER_AD5CH2CON1_IRQSEL;
			AD5CH2CON1bits.EIEN = ADC_USER_AD5CH2CON1_EIEN;
			AD5CH2CON1bits.TRG1POL = ADC_USER_AD5CH2CON1_TRG1POL;
			AD5CH2CON1bits.PINSEL = ADC_USER_AD5CH2CON1_PINSEL;
			AD5CH2CON1bits.NINSEL = ADC_USER_AD5CH2CON1_NINSEL;
			AD5CH2CON1bits.FRAC = ADC_USER_AD5CH2CON1_FRAC;
			AD5CH2CON1bits.DIFF = ADC_USER_AD5CH2CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH2CON2 = 
			( ADC_USER_AD5CH2CON2_ADCMPCNT << _AD5CH2CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH2CON2_CMPMOD << _AD5CH2CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH2CON2_ADCMPSTAT << _AD5CH2CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH2CON2_CMPCNTMOD << _AD5CH2CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH2CON2_CMPVAL << _AD5CH2CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH2CON2_ACCBRST << _AD5CH2CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH2CON2_ACCRO << _AD5CH2CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH2CON2bits.ADCMPCNT = ADC_USER_AD5CH2CON2_ADCMPCNT;
			AD5CH2CON2bits.CMPMOD = ADC_USER_AD5CH2CON2_CMPMOD;
			AD5CH2CON2bits.ADCMPSTAT = ADC_USER_AD5CH2CON2_ADCMPSTAT;
			AD5CH2CON2bits.CMPCNTMOD = ADC_USER_AD5CH2CON2_CMPCNTMOD;
			AD5CH2CON2bits.CMPVAL = ADC_USER_AD5CH2CON2_CMPVAL;
			AD5CH2CON2bits.ACCBRST = ADC_USER_AD5CH2CON2_ACCBRST;
			AD5CH2CON2bits.ACCRO = ADC_USER_AD5CH2CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH2DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH2DATA = ADC_USER_AD5CH2DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH2RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH2RES = 
			( ADC_USER_AD5CH2RES_RES << _AD5CH2RES_RES_POSITION ) |
			( ADC_USER_AD5CH2RES_RESF << _AD5CH2RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH2RESbits.RES = ADC_USER_AD5CH2RES_RES;
			AD5CH2RESbits.RESF = ADC_USER_AD5CH2RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH2CNT = 
			( ADC_USER_AD5CH2CNT_CNT << _AD5CH2CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH2CNT_CNTSTAT << _AD5CH2CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH2CNTbits.CNT = ADC_USER_AD5CH2CNT_CNT;
			AD5CH2CNTbits.CNTSTAT = ADC_USER_AD5CH2CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH2CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH2CMPLO = ADC_USER_AD5CH2CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH2CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH2CMPHI = ADC_USER_AD5CH2CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH3CON1 = 
			( ADC_USER_AD5CH3CON1_TRG1SRC << _AD5CH3CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH3CON1_MODE << _AD5CH3CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH3CON1_TRG2SRC << _AD5CH3CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH3CON1_ACCNUM << _AD5CH3CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH3CON1_SAMC << _AD5CH3CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH3CON1_IRQSEL << _AD5CH3CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH3CON1_EIEN << _AD5CH3CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH3CON1_TRG1POL << _AD5CH3CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH3CON1_PINSEL << _AD5CH3CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH3CON1_NINSEL << _AD5CH3CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH3CON1_FRAC << _AD5CH3CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH3CON1_DIFF << _AD5CH3CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH3CON1bits.TRG1SRC = ADC_USER_AD5CH3CON1_TRG1SRC;
			AD5CH3CON1bits.MODE = ADC_USER_AD5CH3CON1_MODE;
			AD5CH3CON1bits.TRG2SRC = ADC_USER_AD5CH3CON1_TRG2SRC;
			AD5CH3CON1bits.ACCNUM = ADC_USER_AD5CH3CON1_ACCNUM;
			AD5CH3CON1bits.SAMC = ADC_USER_AD5CH3CON1_SAMC;
			AD5CH3CON1bits.IRQSEL = ADC_USER_AD5CH3CON1_IRQSEL;
			AD5CH3CON1bits.EIEN = ADC_USER_AD5CH3CON1_EIEN;
			AD5CH3CON1bits.TRG1POL = ADC_USER_AD5CH3CON1_TRG1POL;
			AD5CH3CON1bits.PINSEL = ADC_USER_AD5CH3CON1_PINSEL;
			AD5CH3CON1bits.NINSEL = ADC_USER_AD5CH3CON1_NINSEL;
			AD5CH3CON1bits.FRAC = ADC_USER_AD5CH3CON1_FRAC;
			AD5CH3CON1bits.DIFF = ADC_USER_AD5CH3CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH3CON2 = 
			( ADC_USER_AD5CH3CON2_ADCMPCNT << _AD5CH3CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH3CON2_CMPMOD << _AD5CH3CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH3CON2_ADCMPSTAT << _AD5CH3CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH3CON2_CMPCNTMOD << _AD5CH3CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH3CON2_CMPVAL << _AD5CH3CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH3CON2_ACCBRST << _AD5CH3CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH3CON2_ACCRO << _AD5CH3CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH3CON2bits.ADCMPCNT = ADC_USER_AD5CH3CON2_ADCMPCNT;
			AD5CH3CON2bits.CMPMOD = ADC_USER_AD5CH3CON2_CMPMOD;
			AD5CH3CON2bits.ADCMPSTAT = ADC_USER_AD5CH3CON2_ADCMPSTAT;
			AD5CH3CON2bits.CMPCNTMOD = ADC_USER_AD5CH3CON2_CMPCNTMOD;
			AD5CH3CON2bits.CMPVAL = ADC_USER_AD5CH3CON2_CMPVAL;
			AD5CH3CON2bits.ACCBRST = ADC_USER_AD5CH3CON2_ACCBRST;
			AD5CH3CON2bits.ACCRO = ADC_USER_AD5CH3CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH3DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH3DATA = ADC_USER_AD5CH3DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH3RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH3RES = 
			( ADC_USER_AD5CH3RES_RES << _AD5CH3RES_RES_POSITION ) |
			( ADC_USER_AD5CH3RES_RESF << _AD5CH3RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH3RESbits.RES = ADC_USER_AD5CH3RES_RES;
			AD5CH3RESbits.RESF = ADC_USER_AD5CH3RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH3CNT = 
			( ADC_USER_AD5CH3CNT_CNT << _AD5CH3CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH3CNT_CNTSTAT << _AD5CH3CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH3CNTbits.CNT = ADC_USER_AD5CH3CNT_CNT;
			AD5CH3CNTbits.CNTSTAT = ADC_USER_AD5CH3CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH3CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH3CMPLO = ADC_USER_AD5CH3CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH3CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH3CMPHI = ADC_USER_AD5CH3CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH4CON1 = 
			( ADC_USER_AD5CH4CON1_TRG1SRC << _AD5CH4CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH4CON1_MODE << _AD5CH4CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH4CON1_TRG2SRC << _AD5CH4CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH4CON1_ACCNUM << _AD5CH4CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH4CON1_SAMC << _AD5CH4CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH4CON1_IRQSEL << _AD5CH4CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH4CON1_EIEN << _AD5CH4CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH4CON1_TRG1POL << _AD5CH4CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH4CON1_PINSEL << _AD5CH4CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH4CON1_NINSEL << _AD5CH4CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH4CON1_FRAC << _AD5CH4CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH4CON1_DIFF << _AD5CH4CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH4CON1bits.TRG1SRC = ADC_USER_AD5CH4CON1_TRG1SRC;
			AD5CH4CON1bits.MODE = ADC_USER_AD5CH4CON1_MODE;
			AD5CH4CON1bits.TRG2SRC = ADC_USER_AD5CH4CON1_TRG2SRC;
			AD5CH4CON1bits.ACCNUM = ADC_USER_AD5CH4CON1_ACCNUM;
			AD5CH4CON1bits.SAMC = ADC_USER_AD5CH4CON1_SAMC;
			AD5CH4CON1bits.IRQSEL = ADC_USER_AD5CH4CON1_IRQSEL;
			AD5CH4CON1bits.EIEN = ADC_USER_AD5CH4CON1_EIEN;
			AD5CH4CON1bits.TRG1POL = ADC_USER_AD5CH4CON1_TRG1POL;
			AD5CH4CON1bits.PINSEL = ADC_USER_AD5CH4CON1_PINSEL;
			AD5CH4CON1bits.NINSEL = ADC_USER_AD5CH4CON1_NINSEL;
			AD5CH4CON1bits.FRAC = ADC_USER_AD5CH4CON1_FRAC;
			AD5CH4CON1bits.DIFF = ADC_USER_AD5CH4CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH4CON2 = 
			( ADC_USER_AD5CH4CON2_ADCMPCNT << _AD5CH4CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH4CON2_CMPMOD << _AD5CH4CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH4CON2_ADCMPSTAT << _AD5CH4CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH4CON2_CMPCNTMOD << _AD5CH4CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH4CON2_CMPVAL << _AD5CH4CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH4CON2_ACCBRST << _AD5CH4CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH4CON2_ACCRO << _AD5CH4CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH4CON2bits.ADCMPCNT = ADC_USER_AD5CH4CON2_ADCMPCNT;
			AD5CH4CON2bits.CMPMOD = ADC_USER_AD5CH4CON2_CMPMOD;
			AD5CH4CON2bits.ADCMPSTAT = ADC_USER_AD5CH4CON2_ADCMPSTAT;
			AD5CH4CON2bits.CMPCNTMOD = ADC_USER_AD5CH4CON2_CMPCNTMOD;
			AD5CH4CON2bits.CMPVAL = ADC_USER_AD5CH4CON2_CMPVAL;
			AD5CH4CON2bits.ACCBRST = ADC_USER_AD5CH4CON2_ACCBRST;
			AD5CH4CON2bits.ACCRO = ADC_USER_AD5CH4CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH4DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH4DATA = ADC_USER_AD5CH4DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH4RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH4RES = 
			( ADC_USER_AD5CH4RES_RES << _AD5CH4RES_RES_POSITION ) |
			( ADC_USER_AD5CH4RES_RESF << _AD5CH4RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH4RESbits.RES = ADC_USER_AD5CH4RES_RES;
			AD5CH4RESbits.RESF = ADC_USER_AD5CH4RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH4CNT = 
			( ADC_USER_AD5CH4CNT_CNT << _AD5CH4CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH4CNT_CNTSTAT << _AD5CH4CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH4CNTbits.CNT = ADC_USER_AD5CH4CNT_CNT;
			AD5CH4CNTbits.CNTSTAT = ADC_USER_AD5CH4CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH4CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH4CMPLO = ADC_USER_AD5CH4CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH4CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH4CMPHI = ADC_USER_AD5CH4CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH5CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH5CON1 = 
			( ADC_USER_AD5CH5CON1_TRG1SRC << _AD5CH5CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH5CON1_MODE << _AD5CH5CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH5CON1_TRG2SRC << _AD5CH5CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH5CON1_ACCNUM << _AD5CH5CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH5CON1_SAMC << _AD5CH5CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH5CON1_IRQSEL << _AD5CH5CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH5CON1_EIEN << _AD5CH5CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH5CON1_TRG1POL << _AD5CH5CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH5CON1_PINSEL << _AD5CH5CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH5CON1_NINSEL << _AD5CH5CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH5CON1_FRAC << _AD5CH5CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH5CON1_DIFF << _AD5CH5CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH5CON1bits.TRG1SRC = ADC_USER_AD5CH5CON1_TRG1SRC;
			AD5CH5CON1bits.MODE = ADC_USER_AD5CH5CON1_MODE;
			AD5CH5CON1bits.TRG2SRC = ADC_USER_AD5CH5CON1_TRG2SRC;
			AD5CH5CON1bits.ACCNUM = ADC_USER_AD5CH5CON1_ACCNUM;
			AD5CH5CON1bits.SAMC = ADC_USER_AD5CH5CON1_SAMC;
			AD5CH5CON1bits.IRQSEL = ADC_USER_AD5CH5CON1_IRQSEL;
			AD5CH5CON1bits.EIEN = ADC_USER_AD5CH5CON1_EIEN;
			AD5CH5CON1bits.TRG1POL = ADC_USER_AD5CH5CON1_TRG1POL;
			AD5CH5CON1bits.PINSEL = ADC_USER_AD5CH5CON1_PINSEL;
			AD5CH5CON1bits.NINSEL = ADC_USER_AD5CH5CON1_NINSEL;
			AD5CH5CON1bits.FRAC = ADC_USER_AD5CH5CON1_FRAC;
			AD5CH5CON1bits.DIFF = ADC_USER_AD5CH5CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH5CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH5CON2 = 
			( ADC_USER_AD5CH5CON2_ADCMPCNT << _AD5CH5CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH5CON2_CMPMOD << _AD5CH5CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH5CON2_ADCMPSTAT << _AD5CH5CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH5CON2_CMPCNTMOD << _AD5CH5CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH5CON2_CMPVAL << _AD5CH5CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH5CON2_ACCBRST << _AD5CH5CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH5CON2_ACCRO << _AD5CH5CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH5CON2bits.ADCMPCNT = ADC_USER_AD5CH5CON2_ADCMPCNT;
			AD5CH5CON2bits.CMPMOD = ADC_USER_AD5CH5CON2_CMPMOD;
			AD5CH5CON2bits.ADCMPSTAT = ADC_USER_AD5CH5CON2_ADCMPSTAT;
			AD5CH5CON2bits.CMPCNTMOD = ADC_USER_AD5CH5CON2_CMPCNTMOD;
			AD5CH5CON2bits.CMPVAL = ADC_USER_AD5CH5CON2_CMPVAL;
			AD5CH5CON2bits.ACCBRST = ADC_USER_AD5CH5CON2_ACCBRST;
			AD5CH5CON2bits.ACCRO = ADC_USER_AD5CH5CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH5DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH5DATA = ADC_USER_AD5CH5DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH5RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH5RES = 
			( ADC_USER_AD5CH5RES_RES << _AD5CH5RES_RES_POSITION ) |
			( ADC_USER_AD5CH5RES_RESF << _AD5CH5RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH5RESbits.RES = ADC_USER_AD5CH5RES_RES;
			AD5CH5RESbits.RESF = ADC_USER_AD5CH5RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH5CNT = 
			( ADC_USER_AD5CH5CNT_CNT << _AD5CH5CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH5CNT_CNTSTAT << _AD5CH5CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH5CNTbits.CNT = ADC_USER_AD5CH5CNT_CNT;
			AD5CH5CNTbits.CNTSTAT = ADC_USER_AD5CH5CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH5CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH5CMPLO = ADC_USER_AD5CH5CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH5CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH5CMPHI = ADC_USER_AD5CH5CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH6CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH6CON1 = 
			( ADC_USER_AD5CH6CON1_TRG1SRC << _AD5CH6CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH6CON1_MODE << _AD5CH6CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH6CON1_TRG2SRC << _AD5CH6CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH6CON1_ACCNUM << _AD5CH6CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH6CON1_SAMC << _AD5CH6CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH6CON1_IRQSEL << _AD5CH6CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH6CON1_EIEN << _AD5CH6CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH6CON1_TRG1POL << _AD5CH6CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH6CON1_PINSEL << _AD5CH6CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH6CON1_NINSEL << _AD5CH6CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH6CON1_FRAC << _AD5CH6CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH6CON1_DIFF << _AD5CH6CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH6CON1bits.TRG1SRC = ADC_USER_AD5CH6CON1_TRG1SRC;
			AD5CH6CON1bits.MODE = ADC_USER_AD5CH6CON1_MODE;
			AD5CH6CON1bits.TRG2SRC = ADC_USER_AD5CH6CON1_TRG2SRC;
			AD5CH6CON1bits.ACCNUM = ADC_USER_AD5CH6CON1_ACCNUM;
			AD5CH6CON1bits.SAMC = ADC_USER_AD5CH6CON1_SAMC;
			AD5CH6CON1bits.IRQSEL = ADC_USER_AD5CH6CON1_IRQSEL;
			AD5CH6CON1bits.EIEN = ADC_USER_AD5CH6CON1_EIEN;
			AD5CH6CON1bits.TRG1POL = ADC_USER_AD5CH6CON1_TRG1POL;
			AD5CH6CON1bits.PINSEL = ADC_USER_AD5CH6CON1_PINSEL;
			AD5CH6CON1bits.NINSEL = ADC_USER_AD5CH6CON1_NINSEL;
			AD5CH6CON1bits.FRAC = ADC_USER_AD5CH6CON1_FRAC;
			AD5CH6CON1bits.DIFF = ADC_USER_AD5CH6CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH6CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH6CON2 = 
			( ADC_USER_AD5CH6CON2_ADCMPCNT << _AD5CH6CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH6CON2_CMPMOD << _AD5CH6CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH6CON2_ADCMPSTAT << _AD5CH6CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH6CON2_CMPCNTMOD << _AD5CH6CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH6CON2_CMPVAL << _AD5CH6CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH6CON2_ACCBRST << _AD5CH6CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH6CON2_ACCRO << _AD5CH6CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH6CON2bits.ADCMPCNT = ADC_USER_AD5CH6CON2_ADCMPCNT;
			AD5CH6CON2bits.CMPMOD = ADC_USER_AD5CH6CON2_CMPMOD;
			AD5CH6CON2bits.ADCMPSTAT = ADC_USER_AD5CH6CON2_ADCMPSTAT;
			AD5CH6CON2bits.CMPCNTMOD = ADC_USER_AD5CH6CON2_CMPCNTMOD;
			AD5CH6CON2bits.CMPVAL = ADC_USER_AD5CH6CON2_CMPVAL;
			AD5CH6CON2bits.ACCBRST = ADC_USER_AD5CH6CON2_ACCBRST;
			AD5CH6CON2bits.ACCRO = ADC_USER_AD5CH6CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH6DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH6DATA = ADC_USER_AD5CH6DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH6RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH6RES = 
			( ADC_USER_AD5CH6RES_RES << _AD5CH6RES_RES_POSITION ) |
			( ADC_USER_AD5CH6RES_RESF << _AD5CH6RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH6RESbits.RES = ADC_USER_AD5CH6RES_RES;
			AD5CH6RESbits.RESF = ADC_USER_AD5CH6RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH6CNT = 
			( ADC_USER_AD5CH6CNT_CNT << _AD5CH6CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH6CNT_CNTSTAT << _AD5CH6CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH6CNTbits.CNT = ADC_USER_AD5CH6CNT_CNT;
			AD5CH6CNTbits.CNTSTAT = ADC_USER_AD5CH6CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH6CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH6CMPLO = ADC_USER_AD5CH6CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH6CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH6CMPHI = ADC_USER_AD5CH6CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH7CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH7CON1 = 
			( ADC_USER_AD5CH7CON1_TRG1SRC << _AD5CH7CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH7CON1_MODE << _AD5CH7CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH7CON1_TRG2SRC << _AD5CH7CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH7CON1_ACCNUM << _AD5CH7CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH7CON1_SAMC << _AD5CH7CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH7CON1_IRQSEL << _AD5CH7CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH7CON1_EIEN << _AD5CH7CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH7CON1_TRG1POL << _AD5CH7CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH7CON1_PINSEL << _AD5CH7CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH7CON1_NINSEL << _AD5CH7CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH7CON1_FRAC << _AD5CH7CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH7CON1_DIFF << _AD5CH7CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH7CON1bits.TRG1SRC = ADC_USER_AD5CH7CON1_TRG1SRC;
			AD5CH7CON1bits.MODE = ADC_USER_AD5CH7CON1_MODE;
			AD5CH7CON1bits.TRG2SRC = ADC_USER_AD5CH7CON1_TRG2SRC;
			AD5CH7CON1bits.ACCNUM = ADC_USER_AD5CH7CON1_ACCNUM;
			AD5CH7CON1bits.SAMC = ADC_USER_AD5CH7CON1_SAMC;
			AD5CH7CON1bits.IRQSEL = ADC_USER_AD5CH7CON1_IRQSEL;
			AD5CH7CON1bits.EIEN = ADC_USER_AD5CH7CON1_EIEN;
			AD5CH7CON1bits.TRG1POL = ADC_USER_AD5CH7CON1_TRG1POL;
			AD5CH7CON1bits.PINSEL = ADC_USER_AD5CH7CON1_PINSEL;
			AD5CH7CON1bits.NINSEL = ADC_USER_AD5CH7CON1_NINSEL;
			AD5CH7CON1bits.FRAC = ADC_USER_AD5CH7CON1_FRAC;
			AD5CH7CON1bits.DIFF = ADC_USER_AD5CH7CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH7CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH7CON2 = 
			( ADC_USER_AD5CH7CON2_ADCMPCNT << _AD5CH7CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH7CON2_CMPMOD << _AD5CH7CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH7CON2_ADCMPSTAT << _AD5CH7CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH7CON2_CMPCNTMOD << _AD5CH7CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH7CON2_CMPVAL << _AD5CH7CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH7CON2_ACCBRST << _AD5CH7CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH7CON2_ACCRO << _AD5CH7CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH7CON2bits.ADCMPCNT = ADC_USER_AD5CH7CON2_ADCMPCNT;
			AD5CH7CON2bits.CMPMOD = ADC_USER_AD5CH7CON2_CMPMOD;
			AD5CH7CON2bits.ADCMPSTAT = ADC_USER_AD5CH7CON2_ADCMPSTAT;
			AD5CH7CON2bits.CMPCNTMOD = ADC_USER_AD5CH7CON2_CMPCNTMOD;
			AD5CH7CON2bits.CMPVAL = ADC_USER_AD5CH7CON2_CMPVAL;
			AD5CH7CON2bits.ACCBRST = ADC_USER_AD5CH7CON2_ACCBRST;
			AD5CH7CON2bits.ACCRO = ADC_USER_AD5CH7CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH7DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH7DATA = ADC_USER_AD5CH7DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH7RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH7RES = 
			( ADC_USER_AD5CH7RES_RES << _AD5CH7RES_RES_POSITION ) |
			( ADC_USER_AD5CH7RES_RESF << _AD5CH7RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH7RESbits.RES = ADC_USER_AD5CH7RES_RES;
			AD5CH7RESbits.RESF = ADC_USER_AD5CH7RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH7CNT = 
			( ADC_USER_AD5CH7CNT_CNT << _AD5CH7CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH7CNT_CNTSTAT << _AD5CH7CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH7CNTbits.CNT = ADC_USER_AD5CH7CNT_CNT;
			AD5CH7CNTbits.CNTSTAT = ADC_USER_AD5CH7CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH7CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH7CMPLO = ADC_USER_AD5CH7CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH7CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH7CMPHI = ADC_USER_AD5CH7CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH8CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH8CON1 = 
			( ADC_USER_AD5CH8CON1_TRG1SRC << _AD5CH8CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH8CON1_MODE << _AD5CH8CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH8CON1_TRG2SRC << _AD5CH8CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH8CON1_ACCNUM << _AD5CH8CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH8CON1_SAMC << _AD5CH8CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH8CON1_IRQSEL << _AD5CH8CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH8CON1_EIEN << _AD5CH8CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH8CON1_TRG1POL << _AD5CH8CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH8CON1_PINSEL << _AD5CH8CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH8CON1_NINSEL << _AD5CH8CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH8CON1_FRAC << _AD5CH8CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH8CON1_DIFF << _AD5CH8CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH8CON1bits.TRG1SRC = ADC_USER_AD5CH8CON1_TRG1SRC;
			AD5CH8CON1bits.MODE = ADC_USER_AD5CH8CON1_MODE;
			AD5CH8CON1bits.TRG2SRC = ADC_USER_AD5CH8CON1_TRG2SRC;
			AD5CH8CON1bits.ACCNUM = ADC_USER_AD5CH8CON1_ACCNUM;
			AD5CH8CON1bits.SAMC = ADC_USER_AD5CH8CON1_SAMC;
			AD5CH8CON1bits.IRQSEL = ADC_USER_AD5CH8CON1_IRQSEL;
			AD5CH8CON1bits.EIEN = ADC_USER_AD5CH8CON1_EIEN;
			AD5CH8CON1bits.TRG1POL = ADC_USER_AD5CH8CON1_TRG1POL;
			AD5CH8CON1bits.PINSEL = ADC_USER_AD5CH8CON1_PINSEL;
			AD5CH8CON1bits.NINSEL = ADC_USER_AD5CH8CON1_NINSEL;
			AD5CH8CON1bits.FRAC = ADC_USER_AD5CH8CON1_FRAC;
			AD5CH8CON1bits.DIFF = ADC_USER_AD5CH8CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH8CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH8CON2 = 
			( ADC_USER_AD5CH8CON2_ADCMPCNT << _AD5CH8CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH8CON2_CMPMOD << _AD5CH8CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH8CON2_ADCMPSTAT << _AD5CH8CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH8CON2_CMPCNTMOD << _AD5CH8CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH8CON2_CMPVAL << _AD5CH8CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH8CON2_ACCBRST << _AD5CH8CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH8CON2_ACCRO << _AD5CH8CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH8CON2bits.ADCMPCNT = ADC_USER_AD5CH8CON2_ADCMPCNT;
			AD5CH8CON2bits.CMPMOD = ADC_USER_AD5CH8CON2_CMPMOD;
			AD5CH8CON2bits.ADCMPSTAT = ADC_USER_AD5CH8CON2_ADCMPSTAT;
			AD5CH8CON2bits.CMPCNTMOD = ADC_USER_AD5CH8CON2_CMPCNTMOD;
			AD5CH8CON2bits.CMPVAL = ADC_USER_AD5CH8CON2_CMPVAL;
			AD5CH8CON2bits.ACCBRST = ADC_USER_AD5CH8CON2_ACCBRST;
			AD5CH8CON2bits.ACCRO = ADC_USER_AD5CH8CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH8DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH8DATA = ADC_USER_AD5CH8DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH8RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH8RES = 
			( ADC_USER_AD5CH8RES_RES << _AD5CH8RES_RES_POSITION ) |
			( ADC_USER_AD5CH8RES_RESF << _AD5CH8RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH8RESbits.RES = ADC_USER_AD5CH8RES_RES;
			AD5CH8RESbits.RESF = ADC_USER_AD5CH8RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH8CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH8CNT = 
			( ADC_USER_AD5CH8CNT_CNT << _AD5CH8CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH8CNT_CNTSTAT << _AD5CH8CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH8CNTbits.CNT = ADC_USER_AD5CH8CNT_CNT;
			AD5CH8CNTbits.CNTSTAT = ADC_USER_AD5CH8CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH8CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH8CMPLO = ADC_USER_AD5CH8CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH8CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH8CMPHI = ADC_USER_AD5CH8CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH9CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH9CON1 = 
			( ADC_USER_AD5CH9CON1_TRG1SRC << _AD5CH9CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH9CON1_MODE << _AD5CH9CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH9CON1_TRG2SRC << _AD5CH9CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH9CON1_ACCNUM << _AD5CH9CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH9CON1_SAMC << _AD5CH9CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH9CON1_IRQSEL << _AD5CH9CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH9CON1_EIEN << _AD5CH9CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH9CON1_TRG1POL << _AD5CH9CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH9CON1_PINSEL << _AD5CH9CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH9CON1_NINSEL << _AD5CH9CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH9CON1_FRAC << _AD5CH9CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH9CON1_DIFF << _AD5CH9CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH9CON1bits.TRG1SRC = ADC_USER_AD5CH9CON1_TRG1SRC;
			AD5CH9CON1bits.MODE = ADC_USER_AD5CH9CON1_MODE;
			AD5CH9CON1bits.TRG2SRC = ADC_USER_AD5CH9CON1_TRG2SRC;
			AD5CH9CON1bits.ACCNUM = ADC_USER_AD5CH9CON1_ACCNUM;
			AD5CH9CON1bits.SAMC = ADC_USER_AD5CH9CON1_SAMC;
			AD5CH9CON1bits.IRQSEL = ADC_USER_AD5CH9CON1_IRQSEL;
			AD5CH9CON1bits.EIEN = ADC_USER_AD5CH9CON1_EIEN;
			AD5CH9CON1bits.TRG1POL = ADC_USER_AD5CH9CON1_TRG1POL;
			AD5CH9CON1bits.PINSEL = ADC_USER_AD5CH9CON1_PINSEL;
			AD5CH9CON1bits.NINSEL = ADC_USER_AD5CH9CON1_NINSEL;
			AD5CH9CON1bits.FRAC = ADC_USER_AD5CH9CON1_FRAC;
			AD5CH9CON1bits.DIFF = ADC_USER_AD5CH9CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH9CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH9CON2 = 
			( ADC_USER_AD5CH9CON2_ADCMPCNT << _AD5CH9CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH9CON2_CMPMOD << _AD5CH9CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH9CON2_ADCMPSTAT << _AD5CH9CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH9CON2_CMPCNTMOD << _AD5CH9CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH9CON2_CMPVAL << _AD5CH9CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH9CON2_ACCBRST << _AD5CH9CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH9CON2_ACCRO << _AD5CH9CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH9CON2bits.ADCMPCNT = ADC_USER_AD5CH9CON2_ADCMPCNT;
			AD5CH9CON2bits.CMPMOD = ADC_USER_AD5CH9CON2_CMPMOD;
			AD5CH9CON2bits.ADCMPSTAT = ADC_USER_AD5CH9CON2_ADCMPSTAT;
			AD5CH9CON2bits.CMPCNTMOD = ADC_USER_AD5CH9CON2_CMPCNTMOD;
			AD5CH9CON2bits.CMPVAL = ADC_USER_AD5CH9CON2_CMPVAL;
			AD5CH9CON2bits.ACCBRST = ADC_USER_AD5CH9CON2_ACCBRST;
			AD5CH9CON2bits.ACCRO = ADC_USER_AD5CH9CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH9DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH9DATA = ADC_USER_AD5CH9DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH9RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH9RES = 
			( ADC_USER_AD5CH9RES_RES << _AD5CH9RES_RES_POSITION ) |
			( ADC_USER_AD5CH9RES_RESF << _AD5CH9RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH9RESbits.RES = ADC_USER_AD5CH9RES_RES;
			AD5CH9RESbits.RESF = ADC_USER_AD5CH9RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH9CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH9CNT = 
			( ADC_USER_AD5CH9CNT_CNT << _AD5CH9CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH9CNT_CNTSTAT << _AD5CH9CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH9CNTbits.CNT = ADC_USER_AD5CH9CNT_CNT;
			AD5CH9CNTbits.CNTSTAT = ADC_USER_AD5CH9CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH9CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH9CMPLO = ADC_USER_AD5CH9CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH9CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH9CMPHI = ADC_USER_AD5CH9CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH10CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH10CON1 = 
			( ADC_USER_AD5CH10CON1_TRG1SRC << _AD5CH10CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH10CON1_MODE << _AD5CH10CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH10CON1_TRG2SRC << _AD5CH10CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH10CON1_ACCNUM << _AD5CH10CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH10CON1_SAMC << _AD5CH10CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH10CON1_IRQSEL << _AD5CH10CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH10CON1_EIEN << _AD5CH10CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH10CON1_TRG1POL << _AD5CH10CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH10CON1_PINSEL << _AD5CH10CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH10CON1_NINSEL << _AD5CH10CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH10CON1_FRAC << _AD5CH10CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH10CON1_DIFF << _AD5CH10CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH10CON1bits.TRG1SRC = ADC_USER_AD5CH10CON1_TRG1SRC;
			AD5CH10CON1bits.MODE = ADC_USER_AD5CH10CON1_MODE;
			AD5CH10CON1bits.TRG2SRC = ADC_USER_AD5CH10CON1_TRG2SRC;
			AD5CH10CON1bits.ACCNUM = ADC_USER_AD5CH10CON1_ACCNUM;
			AD5CH10CON1bits.SAMC = ADC_USER_AD5CH10CON1_SAMC;
			AD5CH10CON1bits.IRQSEL = ADC_USER_AD5CH10CON1_IRQSEL;
			AD5CH10CON1bits.EIEN = ADC_USER_AD5CH10CON1_EIEN;
			AD5CH10CON1bits.TRG1POL = ADC_USER_AD5CH10CON1_TRG1POL;
			AD5CH10CON1bits.PINSEL = ADC_USER_AD5CH10CON1_PINSEL;
			AD5CH10CON1bits.NINSEL = ADC_USER_AD5CH10CON1_NINSEL;
			AD5CH10CON1bits.FRAC = ADC_USER_AD5CH10CON1_FRAC;
			AD5CH10CON1bits.DIFF = ADC_USER_AD5CH10CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH10CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH10CON2 = 
			( ADC_USER_AD5CH10CON2_ADCMPCNT << _AD5CH10CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH10CON2_CMPMOD << _AD5CH10CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH10CON2_ADCMPSTAT << _AD5CH10CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH10CON2_CMPCNTMOD << _AD5CH10CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH10CON2_CMPVAL << _AD5CH10CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH10CON2_ACCBRST << _AD5CH10CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH10CON2_ACCRO << _AD5CH10CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH10CON2bits.ADCMPCNT = ADC_USER_AD5CH10CON2_ADCMPCNT;
			AD5CH10CON2bits.CMPMOD = ADC_USER_AD5CH10CON2_CMPMOD;
			AD5CH10CON2bits.ADCMPSTAT = ADC_USER_AD5CH10CON2_ADCMPSTAT;
			AD5CH10CON2bits.CMPCNTMOD = ADC_USER_AD5CH10CON2_CMPCNTMOD;
			AD5CH10CON2bits.CMPVAL = ADC_USER_AD5CH10CON2_CMPVAL;
			AD5CH10CON2bits.ACCBRST = ADC_USER_AD5CH10CON2_ACCBRST;
			AD5CH10CON2bits.ACCRO = ADC_USER_AD5CH10CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH10DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH10DATA = ADC_USER_AD5CH10DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH10RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH10RES = 
			( ADC_USER_AD5CH10RES_RES << _AD5CH10RES_RES_POSITION ) |
			( ADC_USER_AD5CH10RES_RESF << _AD5CH10RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH10RESbits.RES = ADC_USER_AD5CH10RES_RES;
			AD5CH10RESbits.RESF = ADC_USER_AD5CH10RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH10CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH10CNT = 
			( ADC_USER_AD5CH10CNT_CNT << _AD5CH10CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH10CNT_CNTSTAT << _AD5CH10CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH10CNTbits.CNT = ADC_USER_AD5CH10CNT_CNT;
			AD5CH10CNTbits.CNTSTAT = ADC_USER_AD5CH10CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH10CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH10CMPLO = ADC_USER_AD5CH10CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH10CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH10CMPHI = ADC_USER_AD5CH10CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH11CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH11CON1 = 
			( ADC_USER_AD5CH11CON1_TRG1SRC << _AD5CH11CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH11CON1_MODE << _AD5CH11CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH11CON1_TRG2SRC << _AD5CH11CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH11CON1_ACCNUM << _AD5CH11CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH11CON1_SAMC << _AD5CH11CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH11CON1_IRQSEL << _AD5CH11CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH11CON1_EIEN << _AD5CH11CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH11CON1_TRG1POL << _AD5CH11CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH11CON1_PINSEL << _AD5CH11CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH11CON1_NINSEL << _AD5CH11CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH11CON1_FRAC << _AD5CH11CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH11CON1_DIFF << _AD5CH11CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH11CON1bits.TRG1SRC = ADC_USER_AD5CH11CON1_TRG1SRC;
			AD5CH11CON1bits.MODE = ADC_USER_AD5CH11CON1_MODE;
			AD5CH11CON1bits.TRG2SRC = ADC_USER_AD5CH11CON1_TRG2SRC;
			AD5CH11CON1bits.ACCNUM = ADC_USER_AD5CH11CON1_ACCNUM;
			AD5CH11CON1bits.SAMC = ADC_USER_AD5CH11CON1_SAMC;
			AD5CH11CON1bits.IRQSEL = ADC_USER_AD5CH11CON1_IRQSEL;
			AD5CH11CON1bits.EIEN = ADC_USER_AD5CH11CON1_EIEN;
			AD5CH11CON1bits.TRG1POL = ADC_USER_AD5CH11CON1_TRG1POL;
			AD5CH11CON1bits.PINSEL = ADC_USER_AD5CH11CON1_PINSEL;
			AD5CH11CON1bits.NINSEL = ADC_USER_AD5CH11CON1_NINSEL;
			AD5CH11CON1bits.FRAC = ADC_USER_AD5CH11CON1_FRAC;
			AD5CH11CON1bits.DIFF = ADC_USER_AD5CH11CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH11CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH11CON2 = 
			( ADC_USER_AD5CH11CON2_ADCMPCNT << _AD5CH11CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH11CON2_CMPMOD << _AD5CH11CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH11CON2_ADCMPSTAT << _AD5CH11CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH11CON2_CMPCNTMOD << _AD5CH11CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH11CON2_CMPVAL << _AD5CH11CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH11CON2_ACCBRST << _AD5CH11CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH11CON2_ACCRO << _AD5CH11CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH11CON2bits.ADCMPCNT = ADC_USER_AD5CH11CON2_ADCMPCNT;
			AD5CH11CON2bits.CMPMOD = ADC_USER_AD5CH11CON2_CMPMOD;
			AD5CH11CON2bits.ADCMPSTAT = ADC_USER_AD5CH11CON2_ADCMPSTAT;
			AD5CH11CON2bits.CMPCNTMOD = ADC_USER_AD5CH11CON2_CMPCNTMOD;
			AD5CH11CON2bits.CMPVAL = ADC_USER_AD5CH11CON2_CMPVAL;
			AD5CH11CON2bits.ACCBRST = ADC_USER_AD5CH11CON2_ACCBRST;
			AD5CH11CON2bits.ACCRO = ADC_USER_AD5CH11CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH11DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH11DATA = ADC_USER_AD5CH11DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH11RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH11RES = 
			( ADC_USER_AD5CH11RES_RES << _AD5CH11RES_RES_POSITION ) |
			( ADC_USER_AD5CH11RES_RESF << _AD5CH11RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH11RESbits.RES = ADC_USER_AD5CH11RES_RES;
			AD5CH11RESbits.RESF = ADC_USER_AD5CH11RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH11CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH11CNT = 
			( ADC_USER_AD5CH11CNT_CNT << _AD5CH11CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH11CNT_CNTSTAT << _AD5CH11CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH11CNTbits.CNT = ADC_USER_AD5CH11CNT_CNT;
			AD5CH11CNTbits.CNTSTAT = ADC_USER_AD5CH11CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH11CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH11CMPLO = ADC_USER_AD5CH11CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH11CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH11CMPHI = ADC_USER_AD5CH11CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH12CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH12CON1 = 
			( ADC_USER_AD5CH12CON1_TRG1SRC << _AD5CH12CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH12CON1_MODE << _AD5CH12CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH12CON1_TRG2SRC << _AD5CH12CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH12CON1_ACCNUM << _AD5CH12CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH12CON1_SAMC << _AD5CH12CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH12CON1_IRQSEL << _AD5CH12CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH12CON1_EIEN << _AD5CH12CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH12CON1_TRG1POL << _AD5CH12CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH12CON1_PINSEL << _AD5CH12CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH12CON1_NINSEL << _AD5CH12CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH12CON1_FRAC << _AD5CH12CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH12CON1_DIFF << _AD5CH12CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH12CON1bits.TRG1SRC = ADC_USER_AD5CH12CON1_TRG1SRC;
			AD5CH12CON1bits.MODE = ADC_USER_AD5CH12CON1_MODE;
			AD5CH12CON1bits.TRG2SRC = ADC_USER_AD5CH12CON1_TRG2SRC;
			AD5CH12CON1bits.ACCNUM = ADC_USER_AD5CH12CON1_ACCNUM;
			AD5CH12CON1bits.SAMC = ADC_USER_AD5CH12CON1_SAMC;
			AD5CH12CON1bits.IRQSEL = ADC_USER_AD5CH12CON1_IRQSEL;
			AD5CH12CON1bits.EIEN = ADC_USER_AD5CH12CON1_EIEN;
			AD5CH12CON1bits.TRG1POL = ADC_USER_AD5CH12CON1_TRG1POL;
			AD5CH12CON1bits.PINSEL = ADC_USER_AD5CH12CON1_PINSEL;
			AD5CH12CON1bits.NINSEL = ADC_USER_AD5CH12CON1_NINSEL;
			AD5CH12CON1bits.FRAC = ADC_USER_AD5CH12CON1_FRAC;
			AD5CH12CON1bits.DIFF = ADC_USER_AD5CH12CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH12CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH12CON2 = 
			( ADC_USER_AD5CH12CON2_ADCMPCNT << _AD5CH12CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH12CON2_CMPMOD << _AD5CH12CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH12CON2_ADCMPSTAT << _AD5CH12CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH12CON2_CMPCNTMOD << _AD5CH12CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH12CON2_CMPVAL << _AD5CH12CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH12CON2_ACCBRST << _AD5CH12CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH12CON2_ACCRO << _AD5CH12CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH12CON2bits.ADCMPCNT = ADC_USER_AD5CH12CON2_ADCMPCNT;
			AD5CH12CON2bits.CMPMOD = ADC_USER_AD5CH12CON2_CMPMOD;
			AD5CH12CON2bits.ADCMPSTAT = ADC_USER_AD5CH12CON2_ADCMPSTAT;
			AD5CH12CON2bits.CMPCNTMOD = ADC_USER_AD5CH12CON2_CMPCNTMOD;
			AD5CH12CON2bits.CMPVAL = ADC_USER_AD5CH12CON2_CMPVAL;
			AD5CH12CON2bits.ACCBRST = ADC_USER_AD5CH12CON2_ACCBRST;
			AD5CH12CON2bits.ACCRO = ADC_USER_AD5CH12CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH12DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH12DATA = ADC_USER_AD5CH12DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH12RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH12RES = 
			( ADC_USER_AD5CH12RES_RES << _AD5CH12RES_RES_POSITION ) |
			( ADC_USER_AD5CH12RES_RESF << _AD5CH12RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH12RESbits.RES = ADC_USER_AD5CH12RES_RES;
			AD5CH12RESbits.RESF = ADC_USER_AD5CH12RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH12CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH12CNT = 
			( ADC_USER_AD5CH12CNT_CNT << _AD5CH12CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH12CNT_CNTSTAT << _AD5CH12CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH12CNTbits.CNT = ADC_USER_AD5CH12CNT_CNT;
			AD5CH12CNTbits.CNTSTAT = ADC_USER_AD5CH12CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH12CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH12CMPLO = ADC_USER_AD5CH12CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH12CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH12CMPHI = ADC_USER_AD5CH12CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH13CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH13CON1 = 
			( ADC_USER_AD5CH13CON1_TRG1SRC << _AD5CH13CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH13CON1_MODE << _AD5CH13CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH13CON1_TRG2SRC << _AD5CH13CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH13CON1_ACCNUM << _AD5CH13CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH13CON1_SAMC << _AD5CH13CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH13CON1_IRQSEL << _AD5CH13CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH13CON1_EIEN << _AD5CH13CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH13CON1_TRG1POL << _AD5CH13CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH13CON1_PINSEL << _AD5CH13CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH13CON1_NINSEL << _AD5CH13CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH13CON1_FRAC << _AD5CH13CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH13CON1_DIFF << _AD5CH13CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH13CON1bits.TRG1SRC = ADC_USER_AD5CH13CON1_TRG1SRC;
			AD5CH13CON1bits.MODE = ADC_USER_AD5CH13CON1_MODE;
			AD5CH13CON1bits.TRG2SRC = ADC_USER_AD5CH13CON1_TRG2SRC;
			AD5CH13CON1bits.ACCNUM = ADC_USER_AD5CH13CON1_ACCNUM;
			AD5CH13CON1bits.SAMC = ADC_USER_AD5CH13CON1_SAMC;
			AD5CH13CON1bits.IRQSEL = ADC_USER_AD5CH13CON1_IRQSEL;
			AD5CH13CON1bits.EIEN = ADC_USER_AD5CH13CON1_EIEN;
			AD5CH13CON1bits.TRG1POL = ADC_USER_AD5CH13CON1_TRG1POL;
			AD5CH13CON1bits.PINSEL = ADC_USER_AD5CH13CON1_PINSEL;
			AD5CH13CON1bits.NINSEL = ADC_USER_AD5CH13CON1_NINSEL;
			AD5CH13CON1bits.FRAC = ADC_USER_AD5CH13CON1_FRAC;
			AD5CH13CON1bits.DIFF = ADC_USER_AD5CH13CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH13CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH13CON2 = 
			( ADC_USER_AD5CH13CON2_ADCMPCNT << _AD5CH13CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH13CON2_CMPMOD << _AD5CH13CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH13CON2_ADCMPSTAT << _AD5CH13CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH13CON2_CMPCNTMOD << _AD5CH13CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH13CON2_CMPVAL << _AD5CH13CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH13CON2_ACCBRST << _AD5CH13CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH13CON2_ACCRO << _AD5CH13CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH13CON2bits.ADCMPCNT = ADC_USER_AD5CH13CON2_ADCMPCNT;
			AD5CH13CON2bits.CMPMOD = ADC_USER_AD5CH13CON2_CMPMOD;
			AD5CH13CON2bits.ADCMPSTAT = ADC_USER_AD5CH13CON2_ADCMPSTAT;
			AD5CH13CON2bits.CMPCNTMOD = ADC_USER_AD5CH13CON2_CMPCNTMOD;
			AD5CH13CON2bits.CMPVAL = ADC_USER_AD5CH13CON2_CMPVAL;
			AD5CH13CON2bits.ACCBRST = ADC_USER_AD5CH13CON2_ACCBRST;
			AD5CH13CON2bits.ACCRO = ADC_USER_AD5CH13CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH13DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH13DATA = ADC_USER_AD5CH13DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH13RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH13RES = 
			( ADC_USER_AD5CH13RES_RES << _AD5CH13RES_RES_POSITION ) |
			( ADC_USER_AD5CH13RES_RESF << _AD5CH13RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH13RESbits.RES = ADC_USER_AD5CH13RES_RES;
			AD5CH13RESbits.RESF = ADC_USER_AD5CH13RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH13CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH13CNT = 
			( ADC_USER_AD5CH13CNT_CNT << _AD5CH13CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH13CNT_CNTSTAT << _AD5CH13CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH13CNTbits.CNT = ADC_USER_AD5CH13CNT_CNT;
			AD5CH13CNTbits.CNTSTAT = ADC_USER_AD5CH13CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH13CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH13CMPLO = ADC_USER_AD5CH13CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH13CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH13CMPHI = ADC_USER_AD5CH13CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH14CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14CON1 = 
			( ADC_USER_AD5CH14CON1_TRG1SRC << _AD5CH14CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH14CON1_MODE << _AD5CH14CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH14CON1_TRG2SRC << _AD5CH14CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH14CON1_ACCNUM << _AD5CH14CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH14CON1_SAMC << _AD5CH14CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH14CON1_IRQSEL << _AD5CH14CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH14CON1_EIEN << _AD5CH14CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH14CON1_TRG1POL << _AD5CH14CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH14CON1_PINSEL << _AD5CH14CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH14CON1_NINSEL << _AD5CH14CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH14CON1_FRAC << _AD5CH14CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH14CON1_DIFF << _AD5CH14CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH14CON1bits.TRG1SRC = ADC_USER_AD5CH14CON1_TRG1SRC;
			AD5CH14CON1bits.MODE = ADC_USER_AD5CH14CON1_MODE;
			AD5CH14CON1bits.TRG2SRC = ADC_USER_AD5CH14CON1_TRG2SRC;
			AD5CH14CON1bits.ACCNUM = ADC_USER_AD5CH14CON1_ACCNUM;
			AD5CH14CON1bits.SAMC = ADC_USER_AD5CH14CON1_SAMC;
			AD5CH14CON1bits.IRQSEL = ADC_USER_AD5CH14CON1_IRQSEL;
			AD5CH14CON1bits.EIEN = ADC_USER_AD5CH14CON1_EIEN;
			AD5CH14CON1bits.TRG1POL = ADC_USER_AD5CH14CON1_TRG1POL;
			AD5CH14CON1bits.PINSEL = ADC_USER_AD5CH14CON1_PINSEL;
			AD5CH14CON1bits.NINSEL = ADC_USER_AD5CH14CON1_NINSEL;
			AD5CH14CON1bits.FRAC = ADC_USER_AD5CH14CON1_FRAC;
			AD5CH14CON1bits.DIFF = ADC_USER_AD5CH14CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH14CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14CON2 = 
			( ADC_USER_AD5CH14CON2_ADCMPCNT << _AD5CH14CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH14CON2_CMPMOD << _AD5CH14CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH14CON2_ADCMPSTAT << _AD5CH14CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH14CON2_CMPCNTMOD << _AD5CH14CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH14CON2_CMPVAL << _AD5CH14CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH14CON2_ACCBRST << _AD5CH14CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH14CON2_ACCRO << _AD5CH14CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH14CON2bits.ADCMPCNT = ADC_USER_AD5CH14CON2_ADCMPCNT;
			AD5CH14CON2bits.CMPMOD = ADC_USER_AD5CH14CON2_CMPMOD;
			AD5CH14CON2bits.ADCMPSTAT = ADC_USER_AD5CH14CON2_ADCMPSTAT;
			AD5CH14CON2bits.CMPCNTMOD = ADC_USER_AD5CH14CON2_CMPCNTMOD;
			AD5CH14CON2bits.CMPVAL = ADC_USER_AD5CH14CON2_CMPVAL;
			AD5CH14CON2bits.ACCBRST = ADC_USER_AD5CH14CON2_ACCBRST;
			AD5CH14CON2bits.ACCRO = ADC_USER_AD5CH14CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH14DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14DATA = ADC_USER_AD5CH14DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH14RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14RES = 
			( ADC_USER_AD5CH14RES_RES << _AD5CH14RES_RES_POSITION ) |
			( ADC_USER_AD5CH14RES_RESF << _AD5CH14RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH14RESbits.RES = ADC_USER_AD5CH14RES_RES;
			AD5CH14RESbits.RESF = ADC_USER_AD5CH14RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH14CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14CNT = 
			( ADC_USER_AD5CH14CNT_CNT << _AD5CH14CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH14CNT_CNTSTAT << _AD5CH14CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH14CNTbits.CNT = ADC_USER_AD5CH14CNT_CNT;
			AD5CH14CNTbits.CNTSTAT = ADC_USER_AD5CH14CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH14CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14CMPLO = ADC_USER_AD5CH14CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH14CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14CMPHI = ADC_USER_AD5CH14CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH14ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH14ACC = ADC_USER_AD5CH14ACC;
	/*-----------------------------------------------------------------------*/
	/* AD5CH15CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15CON1 = 
			( ADC_USER_AD5CH15CON1_TRG1SRC << _AD5CH15CON1_TRG1SRC_POSITION ) |
			( ADC_USER_AD5CH15CON1_MODE << _AD5CH15CON1_MODE_POSITION ) |
			( ADC_USER_AD5CH15CON1_TRG2SRC << _AD5CH15CON1_TRG2SRC_POSITION ) |
			( ADC_USER_AD5CH15CON1_ACCNUM << _AD5CH15CON1_ACCNUM_POSITION ) |
			( ADC_USER_AD5CH15CON1_SAMC << _AD5CH15CON1_SAMC_POSITION ) |
			( ADC_USER_AD5CH15CON1_IRQSEL << _AD5CH15CON1_IRQSEL_POSITION ) |
			( ADC_USER_AD5CH15CON1_EIEN << _AD5CH15CON1_EIEN_POSITION ) |
			( ADC_USER_AD5CH15CON1_TRG1POL << _AD5CH15CON1_TRG1POL_POSITION ) |
			( ADC_USER_AD5CH15CON1_PINSEL << _AD5CH15CON1_PINSEL_POSITION ) |
			( ADC_USER_AD5CH15CON1_NINSEL << _AD5CH15CON1_NINSEL_POSITION ) |
			( ADC_USER_AD5CH15CON1_FRAC << _AD5CH15CON1_FRAC_POSITION ) |
			( ADC_USER_AD5CH15CON1_DIFF << _AD5CH15CON1_DIFF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH15CON1bits.TRG1SRC = ADC_USER_AD5CH15CON1_TRG1SRC;
			AD5CH15CON1bits.MODE = ADC_USER_AD5CH15CON1_MODE;
			AD5CH15CON1bits.TRG2SRC = ADC_USER_AD5CH15CON1_TRG2SRC;
			AD5CH15CON1bits.ACCNUM = ADC_USER_AD5CH15CON1_ACCNUM;
			AD5CH15CON1bits.SAMC = ADC_USER_AD5CH15CON1_SAMC;
			AD5CH15CON1bits.IRQSEL = ADC_USER_AD5CH15CON1_IRQSEL;
			AD5CH15CON1bits.EIEN = ADC_USER_AD5CH15CON1_EIEN;
			AD5CH15CON1bits.TRG1POL = ADC_USER_AD5CH15CON1_TRG1POL;
			AD5CH15CON1bits.PINSEL = ADC_USER_AD5CH15CON1_PINSEL;
			AD5CH15CON1bits.NINSEL = ADC_USER_AD5CH15CON1_NINSEL;
			AD5CH15CON1bits.FRAC = ADC_USER_AD5CH15CON1_FRAC;
			AD5CH15CON1bits.DIFF = ADC_USER_AD5CH15CON1_DIFF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH15CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15CON2 = 
			( ADC_USER_AD5CH15CON2_ADCMPCNT << _AD5CH15CON2_ADCMPCNT_POSITION ) |
			( ADC_USER_AD5CH15CON2_CMPMOD << _AD5CH15CON2_CMPMOD_POSITION ) |
			( ADC_USER_AD5CH15CON2_ADCMPSTAT << _AD5CH15CON2_ADCMPSTAT_POSITION ) |
			( ADC_USER_AD5CH15CON2_CMPCNTMOD << _AD5CH15CON2_CMPCNTMOD_POSITION ) |
			( ADC_USER_AD5CH15CON2_CMPVAL << _AD5CH15CON2_CMPVAL_POSITION ) |
			( ADC_USER_AD5CH15CON2_ACCBRST << _AD5CH15CON2_ACCBRST_POSITION ) |
			( ADC_USER_AD5CH15CON2_ACCRO << _AD5CH15CON2_ACCRO_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH15CON2bits.ADCMPCNT = ADC_USER_AD5CH15CON2_ADCMPCNT;
			AD5CH15CON2bits.CMPMOD = ADC_USER_AD5CH15CON2_CMPMOD;
			AD5CH15CON2bits.ADCMPSTAT = ADC_USER_AD5CH15CON2_ADCMPSTAT;
			AD5CH15CON2bits.CMPCNTMOD = ADC_USER_AD5CH15CON2_CMPCNTMOD;
			AD5CH15CON2bits.CMPVAL = ADC_USER_AD5CH15CON2_CMPVAL;
			AD5CH15CON2bits.ACCBRST = ADC_USER_AD5CH15CON2_ACCBRST;
			AD5CH15CON2bits.ACCRO = ADC_USER_AD5CH15CON2_ACCRO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH15DATAレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15DATA = ADC_USER_AD5CH15DATA;
	/*-----------------------------------------------------------------------*/
	/* AD5CH15RESレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15RES = 
			( ADC_USER_AD5CH15RES_RES << _AD5CH15RES_RES_POSITION ) |
			( ADC_USER_AD5CH15RES_RESF << _AD5CH15RES_RESF_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH15RESbits.RES = ADC_USER_AD5CH15RES_RES;
			AD5CH15RESbits.RESF = ADC_USER_AD5CH15RES_RESF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH15CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15CNT = 
			( ADC_USER_AD5CH15CNT_CNT << _AD5CH15CNT_CNT_POSITION ) |
			( ADC_USER_AD5CH15CNT_CNTSTAT << _AD5CH15CNT_CNTSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			AD5CH15CNTbits.CNT = ADC_USER_AD5CH15CNT_CNT;
			AD5CH15CNTbits.CNTSTAT = ADC_USER_AD5CH15CNT_CNTSTAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AD5CH15CMPLOレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15CMPLO = ADC_USER_AD5CH15CMPLO;
	/*-----------------------------------------------------------------------*/
	/* AD5CH15CMPHIレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15CMPHI = ADC_USER_AD5CH15CMPHI;
	/*-----------------------------------------------------------------------*/
	/* AD5CH15ACCレジスタ */
	/*-----------------------------------------------------------------------*/
		AD5CH15ACC = ADC_USER_AD5CH15ACC;

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC1_Set_Power(uint16_t u4a_Enable)
* @brief     ADC1レジスタのパワーをセットします。
* @param	 0以外 = Off , 1 = On
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC1_Set_Power(uint16_t u4a_Enable)
{
	if (u4a_Enable == 1U)
	{
		AD1CONbits.ON = 1U;   
		while(AD1CONbits.ADRDY == 0U)
		{
			;
		}
	}
	else
	{
		AD1CONbits.ON = 0U;
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC1_Calibrate(void) 
* @brief     ADC1のキャリブレーションを実行します。
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC1_Calibrate(void)
{
    AD1CONbits.CALREQ = 1U;    
    while(AD1CONbits.CALRDY == 0U)
    {
    }  
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC2_Set_Power(uint16_t u4a_Enable)
* @brief     ADC2レジスタのパワーをセットします。
* @param	 0以外 = Off , 1 = On
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC2_Set_Power(uint16_t u4a_Enable)
{
	if (u4a_Enable == 1U)
	{
		AD2CONbits.ON = 1U;   
		while(AD2CONbits.ADRDY == 0U)
		{
			;
		}
	}
	else
	{
		AD2CONbits.ON = 0U;
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC2_Calibrate(void) 
* @brief     ADC2のキャリブレーションを実行します。
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC2_Calibrate(void)
{
    AD2CONbits.CALREQ = 1U;    
    while(AD2CONbits.CALRDY == 0U)
    {
    }  
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC3_Set_Power(uint16_t u4a_Enable)
* @brief     ADC3レジスタのパワーをセットします。
* @param	 0以外 = Off , 1 = On
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC3_Set_Power(uint16_t u4a_Enable)
{
	if (u4a_Enable == 1U)
	{
		AD2CONbits.ON = 1U;   
		while(AD3CONbits.ADRDY == 0U)
		{
			;
		}
	}
	else
	{
		AD3CONbits.ON = 0U;
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC3_Calibrate(void) 
* @brief     ADC3のキャリブレーションを実行します。
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC3_Calibrate(void)
{
    AD3CONbits.CALREQ = 1U;    
    while(AD3CONbits.CALRDY == 0U)
    {
    }  
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC4_Set_Power(uint16_t u4a_Enable)
* @brief     ADC4レジスタのパワーをセットします。
* @param	 0以外 = Off , 1 = On
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC4_Set_Power(uint16_t u4a_Enable)
{
	if (u4a_Enable == 1U)
	{
		AD4CONbits.ON = 1U;   
		while(AD4CONbits.ADRDY == 0U)
		{
			;
		}
	}
	else
	{
		AD4CONbits.ON = 0U;
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC4_Calibrate(void) 
* @brief     ADC4のキャリブレーションを実行します。
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC4_Calibrate(void)
{
    AD4CONbits.CALREQ = 1U;    
    while(AD4CONbits.CALRDY == 0U)
    {
    }  
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC5_Set_Power(uint16_t u4a_Enable)
* @brief     ADC5レジスタのパワーをセットします。
* @param	 0以外 = Off , 1 = On
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC5_Set_Power(uint16_t u4a_Enable)
{
	if (u4a_Enable == 1U)
	{
		AD5CONbits.ON = 1U;   
		while(AD5CONbits.ADRDY == 0U)
		{
			;
		}
	}
	else
	{
		AD5CONbits.ON = 0U;
	}
	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC5_Calibrate(void) 
* @brief     ADC5のキャリブレーションを実行します。
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC5_Calibrate(void)
{
    AD5CONbits.CALREQ = 1U;    
    while(AD5CONbits.CALRDY == 0U)
    {
    }  
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_ADC_Set_Register(void) 
* @brief     全てのADCレジスタを初期化します 
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_ADC_Set_Register(void)
{
#if ( PMD_ADC1MD == PMD_MODULE_ENABLE )
    vdg_ADC1_Set_All_Register();
	
	vdg_ADC1_Set_Power(ADC_USER_AD1CON_ON);
	if (ADC_USER_AD1CON_ON == 1U)
	{
		vdg_ADC1_Calibrate();
	}

	
#endif
#if ( PMD_ADC2MD == PMD_MODULE_ENABLE )
    vdg_ADC2_Set_All_Register();
	
	vdg_ADC2_Set_Power(ADC_USER_AD2CON_ON);
	if (ADC_USER_AD2CON_ON == 1U)
	{
		vdg_ADC2_Calibrate();
	}
#endif
#if ( PMD_ADC3MD == PMD_MODULE_ENABLE )
    vdg_ADC3_Set_All_Register();
	vdg_ADC3_Set_Power(ADC_USER_AD3CON_ON);
	if (ADC_USER_AD3CON_ON == 1U)
	{
		vdg_ADC3_Calibrate();
	}
#endif
#if ( PMD_ADC4MD == PMD_MODULE_ENABLE )
    vdg_ADC4_Set_All_Register();
	vdg_ADC4_Set_Power(ADC_USER_AD4CON_ON);
	if (ADC_USER_AD4CON_ON == 1U)
	{
		vdg_ADC4_Calibrate();
	}
#endif
#if ( PMD_ADC5MD == PMD_MODULE_ENABLE )
    vdg_ADC5_Set_All_Register();
	vdg_ADC5_Set_Power(ADC_USER_AD5CON_ON);
	if (ADC_USER_AD5CON_ON == 1U)
	{
		vdg_ADC5_Calibrate();
	}
#endif
}