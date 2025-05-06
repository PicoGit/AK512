/*----------------------------------------------------------------------------*/
/**
* @file		SENT_Driver.c
* @brief	Single-Edge Nibble Transmissionモジュールに関するドライバ関数
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
#include "sent_user.h"
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
* @fn        vdg_SENT1_Set_Register(void)
* @brief        SENT1のレジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_SENT1_Set_Register(void)
{
#if ( PMD_SENT1MD == PMD_MODULE_ENABLE ) 	
	/*-----------------------------------------------------------------------*/
	/* SENT1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON1 = 
			( SENT_USER_SENT1CON1_NIBCNT << _SENT1CON1_NIBCNT_POSITION ) |
			( SENT_USER_SENT1CON1_PS << _SENT1CON1_PS_POSITION ) |
			( SENT_USER_SENT1CON1_SPCEN << _SENT1CON1_SPCEN_POSITION ) |
			( SENT_USER_SENT1CON1_PPP << _SENT1CON1_PPP_POSITION ) |
			( SENT_USER_SENT1CON1_CRCEN << _SENT1CON1_CRCEN_POSITION ) |
			( SENT_USER_SENT1CON1_TXPOL << _SENT1CON1_TXPOL_POSITION ) |
			( SENT_USER_SENT1CON1_TXM << _SENT1CON1_TXM_POSITION ) |
			( SENT_USER_SENT1CON1_RCVEN << _SENT1CON1_RCVEN_POSITION ) |
			( SENT_USER_SENT1CON1_SIDL << _SENT1CON1_SIDL_POSITION ) |
			( SENT_USER_SENT1CON1_ON << _SENT1CON1_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT1CON1bits.NIBCNT = SENT_USER_SENT1CON1_NIBCNT;
			SENT1CON1bits.PS = SENT_USER_SENT1CON1_PS;
			SENT1CON1bits.SPCEN = SENT_USER_SENT1CON1_SPCEN;
			SENT1CON1bits.PPP = SENT_USER_SENT1CON1_PPP;
			SENT1CON1bits.CRCEN = SENT_USER_SENT1CON1_CRCEN;
			SENT1CON1bits.TXPOL = SENT_USER_SENT1CON1_TXPOL;
			SENT1CON1bits.TXM = SENT_USER_SENT1CON1_TXM;
			SENT1CON1bits.RCVEN = SENT_USER_SENT1CON1_RCVEN;
			SENT1CON1bits.SIDL = SENT_USER_SENT1CON1_SIDL;
			SENT1CON1bits.ON = SENT_USER_SENT1CON1_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON2 = 
			( SENT_USER_SENT1CON2_TICKTIMESYNCMAX << _SENT1CON2_TICKTIMESYNCMAX_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT1CON2bits.TICKTIMESYNCMAX = SENT_USER_SENT1CON2_TICKTIMESYNCMAX;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1CON3 = 
			( SENT_USER_SENT1CON3_FRMTIMESYNCMIN << _SENT1CON3_FRMTIMESYNCMIN_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT1CON3bits.FRMTIMESYNCMIN = SENT_USER_SENT1CON3_FRMTIMESYNCMIN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1STAT = 
			( SENT_USER_SENT1STAT_SYNCTXEN << _SENT1STAT_SYNCTXEN_POSITION ) |
			( SENT_USER_SENT1STAT_RXIDLE << _SENT1STAT_RXIDLE_POSITION ) |
			( SENT_USER_SENT1STAT_FRMERR << _SENT1STAT_FRMERR_POSITION ) |
			( SENT_USER_SENT1STAT_CRCERR << _SENT1STAT_CRCERR_POSITION ) |
			( SENT_USER_SENT1STAT_NIB << _SENT1STAT_NIB_POSITION ) |
			( SENT_USER_SENT1STAT_PAUSE << _SENT1STAT_PAUSE_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT1STATbits.SYNCTXEN = SENT_USER_SENT1STAT_SYNCTXEN;
			SENT1STATbits.RXIDLE = SENT_USER_SENT1STAT_RXIDLE;
			SENT1STATbits.FRMERR = SENT_USER_SENT1STAT_FRMERR;
			SENT1STATbits.CRCERR = SENT_USER_SENT1STAT_CRCERR;
			SENT1STATbits.NIB = SENT_USER_SENT1STAT_NIB;
			SENT1STATbits.PAUSE = SENT_USER_SENT1STAT_PAUSE;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1SYNCレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1SYNC = 
			( SENT_USER_SENT1SYNC_SENTSYNC << _SENT1SYNC_SENTSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT1SYNCbits.SENTSYNC = SENT_USER_SENT1SYNC_SENTSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT1DAT = 
			( SENT_USER_SENT1DAT_CRC << _SENT1DAT_CRC_POSITION ) |
			( SENT_USER_SENT1DAT_DATA6 << _SENT1DAT_DATA6_POSITION ) |
			( SENT_USER_SENT1DAT_DATA5 << _SENT1DAT_DATA5_POSITION ) |
			( SENT_USER_SENT1DAT_DATA4 << _SENT1DAT_DATA4_POSITION ) |
			( SENT_USER_SENT1DAT_DATA3 << _SENT1DAT_DATA3_POSITION ) |
			( SENT_USER_SENT1DAT_DATA2 << _SENT1DAT_DATA2_POSITION ) |
			( SENT_USER_SENT1DAT_DATA1 << _SENT1DAT_DATA1_POSITION ) |
			( SENT_USER_SENT1DAT_STAT << _SENT1DAT_STAT_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT1DATbits.CRC = SENT_USER_SENT1DAT_CRC;
			SENT1DATbits.DATA6 = SENT_USER_SENT1DAT_DATA6;
			SENT1DATbits.DATA5 = SENT_USER_SENT1DAT_DATA5;
			SENT1DATbits.DATA4 = SENT_USER_SENT1DAT_DATA4;
			SENT1DATbits.DATA3 = SENT_USER_SENT1DAT_DATA3;
			SENT1DATbits.DATA2 = SENT_USER_SENT1DAT_DATA2;
			SENT1DATbits.DATA1 = SENT_USER_SENT1DAT_DATA1;
			SENT1DATbits.STAT = SENT_USER_SENT1DAT_STAT;
		#endif 


#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SENT2_Set_Register(void)
* @brief        SENT2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SENT2_Set_Register(void)
{
#if ( PMD_SENT2MD == PMD_MODULE_ENABLE ) 		

		/*-----------------------------------------------------------------------*/
	/* SENT2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON1 = 
			( SENT_USER_SENT2CON1_NIBCNT << _SENT2CON1_NIBCNT_POSITION ) |
			( SENT_USER_SENT2CON1_PS << _SENT2CON1_PS_POSITION ) |
			( SENT_USER_SENT2CON1_SPCEN << _SENT2CON1_SPCEN_POSITION ) |
			( SENT_USER_SENT2CON1_PPP << _SENT2CON1_PPP_POSITION ) |
			( SENT_USER_SENT2CON1_CRCEN << _SENT2CON1_CRCEN_POSITION ) |
			( SENT_USER_SENT2CON1_TXPOL << _SENT2CON1_TXPOL_POSITION ) |
			( SENT_USER_SENT2CON1_TXM << _SENT2CON1_TXM_POSITION ) |
			( SENT_USER_SENT2CON1_RCVEN << _SENT2CON1_RCVEN_POSITION ) |
			( SENT_USER_SENT2CON1_SIDL << _SENT2CON1_SIDL_POSITION ) |
			( SENT_USER_SENT2CON1_ON << _SENT2CON1_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT2CON1bits.NIBCNT = SENT_USER_SENT2CON1_NIBCNT;
			SENT2CON1bits.PS = SENT_USER_SENT2CON1_PS;
			SENT2CON1bits.SPCEN = SENT_USER_SENT2CON1_SPCEN;
			SENT2CON1bits.PPP = SENT_USER_SENT2CON1_PPP;
			SENT2CON1bits.CRCEN = SENT_USER_SENT2CON1_CRCEN;
			SENT2CON1bits.TXPOL = SENT_USER_SENT2CON1_TXPOL;
			SENT2CON1bits.TXM = SENT_USER_SENT2CON1_TXM;
			SENT2CON1bits.RCVEN = SENT_USER_SENT2CON1_RCVEN;
			SENT2CON1bits.SIDL = SENT_USER_SENT2CON1_SIDL;
			SENT2CON1bits.ON = SENT_USER_SENT2CON1_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON2 = 
			( SENT_USER_SENT2CON2_TICKTIMESYNCMAX << _SENT2CON2_TICKTIMESYNCMAX_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT2CON2bits.TICKTIMESYNCMAX = SENT_USER_SENT2CON2_TICKTIMESYNCMAX;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2CON3 = 
			( SENT_USER_SENT2CON3_FRMTIMESYNCMIN << _SENT2CON3_FRMTIMESYNCMIN_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT2CON3bits.FRMTIMESYNCMIN = SENT_USER_SENT2CON3_FRMTIMESYNCMIN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2STAT = 
			( SENT_USER_SENT2STAT_SYNCTXEN << _SENT2STAT_SYNCTXEN_POSITION ) |
			( SENT_USER_SENT2STAT_RXIDLE << _SENT2STAT_RXIDLE_POSITION ) |
			( SENT_USER_SENT2STAT_FRMERR << _SENT2STAT_FRMERR_POSITION ) |
			( SENT_USER_SENT2STAT_CRCERR << _SENT2STAT_CRCERR_POSITION ) |
			( SENT_USER_SENT2STAT_NIB << _SENT2STAT_NIB_POSITION ) |
			( SENT_USER_SENT2STAT_PAUSE << _SENT2STAT_PAUSE_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT2STATbits.SYNCTXEN = SENT_USER_SENT2STAT_SYNCTXEN;
			SENT2STATbits.RXIDLE = SENT_USER_SENT2STAT_RXIDLE;
			SENT2STATbits.FRMERR = SENT_USER_SENT2STAT_FRMERR;
			SENT2STATbits.CRCERR = SENT_USER_SENT2STAT_CRCERR;
			SENT2STATbits.NIB = SENT_USER_SENT2STAT_NIB;
			SENT2STATbits.PAUSE = SENT_USER_SENT2STAT_PAUSE;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2SYNCレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2SYNC = 
			( SENT_USER_SENT2SYNC_SENTSYNC << _SENT2SYNC_SENTSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT2SYNCbits.SENTSYNC = SENT_USER_SENT2SYNC_SENTSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SENT2DATレジスタ */
	/*-----------------------------------------------------------------------*/
		SENT2DAT = 
			( SENT_USER_SENT2DAT_CRC << _SENT2DAT_CRC_POSITION ) |
			( SENT_USER_SENT2DAT_DATA6 << _SENT2DAT_DATA6_POSITION ) |
			( SENT_USER_SENT2DAT_DATA5 << _SENT2DAT_DATA5_POSITION ) |
			( SENT_USER_SENT2DAT_DATA4 << _SENT2DAT_DATA4_POSITION ) |
			( SENT_USER_SENT2DAT_DATA3 << _SENT2DAT_DATA3_POSITION ) |
			( SENT_USER_SENT2DAT_DATA2 << _SENT2DAT_DATA2_POSITION ) |
			( SENT_USER_SENT2DAT_DATA1 << _SENT2DAT_DATA1_POSITION ) |
			( SENT_USER_SENT2DAT_STAT << _SENT2DAT_STAT_POSITION ) ;
		#ifdef DEF_BITNAME
			SENT2DATbits.CRC = SENT_USER_SENT2DAT_CRC;
			SENT2DATbits.DATA6 = SENT_USER_SENT2DAT_DATA6;
			SENT2DATbits.DATA5 = SENT_USER_SENT2DAT_DATA5;
			SENT2DATbits.DATA4 = SENT_USER_SENT2DAT_DATA4;
			SENT2DATbits.DATA3 = SENT_USER_SENT2DAT_DATA3;
			SENT2DATbits.DATA2 = SENT_USER_SENT2DAT_DATA2;
			SENT2DATbits.DATA1 = SENT_USER_SENT2DAT_DATA1;
			SENT2DATbits.STAT = SENT_USER_SENT2DAT_STAT;
		#endif 


#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SENT_Set_Register(void) 
* @brief        SENT1,2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SENT_Set_Register(void)
{
#if ( PMD_SENT1MD == PMD_MODULE_ENABLE ) 	
    vdg_SENT1_Set_Register();
#endif
#if ( PMD_SENT2MD == PMD_MODULE_ENABLE ) 	
    vdg_SENT2_Set_Register();
#endif
}