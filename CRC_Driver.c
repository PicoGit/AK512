/*----------------------------------------------------------------------------*/
/**
* @file		CRC_Driver.c
* @brief	CRCモジュールに関するドライバ関数
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
#include "crc_user.h"
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
* @fn        vdg_CRC_Set_Register(void)
* @brief     CRCレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CRC_Set_Register(void)
{
		
#if ( PMD_CRCMD == PMD_MODULE_ENABLE )
		/*-----------------------------------------------------------------------*/
	/* CRCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCCON = 
			( CRC_USER_CRCCON_MOD << _CRCCON_MOD_POSITION ) |
			( CRC_USER_CRCCON_LENDIAN << _CRCCON_LENDIAN_POSITION ) |
			( CRC_USER_CRCCON_CRCGO << _CRCCON_CRCGO_POSITION ) |
			( CRC_USER_CRCCON_CRCISEL << _CRCCON_CRCISEL_POSITION ) |
			( CRC_USER_CRCCON_CRCMPT << _CRCCON_CRCMPT_POSITION ) |
			( CRC_USER_CRCCON_CRCFUL << _CRCCON_CRCFUL_POSITION ) |
			( CRC_USER_CRCCON_VWORD << _CRCCON_VWORD_POSITION ) |
			( CRC_USER_CRCCON_SIDL << _CRCCON_SIDL_POSITION ) |
			( CRC_USER_CRCCON_ON << _CRCCON_ON_POSITION ) |
			( CRC_USER_CRCCON_PLEN << _CRCCON_PLEN_POSITION ) |
			( CRC_USER_CRCCON_DWIDTH << _CRCCON_DWIDTH_POSITION ) ;
		#ifdef DEF_BITNAME
			CRCCONbits.MOD = CRC_USER_CRCCON_MOD;
			CRCCONbits.LENDIAN = CRC_USER_CRCCON_LENDIAN;
			CRCCONbits.CRCGO = CRC_USER_CRCCON_CRCGO;
			CRCCONbits.CRCISEL = CRC_USER_CRCCON_CRCISEL;
			CRCCONbits.CRCMPT = CRC_USER_CRCCON_CRCMPT;
			CRCCONbits.CRCFUL = CRC_USER_CRCCON_CRCFUL;
			CRCCONbits.VWORD = CRC_USER_CRCCON_VWORD;
			CRCCONbits.SIDL = CRC_USER_CRCCON_SIDL;
			CRCCONbits.ON = CRC_USER_CRCCON_ON;
			CRCCONbits.PLEN = CRC_USER_CRCCON_PLEN;
			CRCCONbits.DWIDTH = CRC_USER_CRCCON_DWIDTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CRCXORレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCXOR = 
			( CRC_USER_CRCXOR_X1 << _CRCXOR_X1_POSITION ) |
			( CRC_USER_CRCXOR_X2 << _CRCXOR_X2_POSITION ) |
			( CRC_USER_CRCXOR_X3 << _CRCXOR_X3_POSITION ) |
			( CRC_USER_CRCXOR_X4 << _CRCXOR_X4_POSITION ) |
			( CRC_USER_CRCXOR_X5 << _CRCXOR_X5_POSITION ) |
			( CRC_USER_CRCXOR_X6 << _CRCXOR_X6_POSITION ) |
			( CRC_USER_CRCXOR_X7 << _CRCXOR_X7_POSITION ) |
			( CRC_USER_CRCXOR_X8 << _CRCXOR_X8_POSITION ) |
			( CRC_USER_CRCXOR_X9 << _CRCXOR_X9_POSITION ) |
			( CRC_USER_CRCXOR_X10 << _CRCXOR_X10_POSITION ) |
			( CRC_USER_CRCXOR_X11 << _CRCXOR_X11_POSITION ) |
			( CRC_USER_CRCXOR_X12 << _CRCXOR_X12_POSITION ) |
			( CRC_USER_CRCXOR_X13 << _CRCXOR_X13_POSITION ) |
			( CRC_USER_CRCXOR_X14 << _CRCXOR_X14_POSITION ) |
			( CRC_USER_CRCXOR_X15 << _CRCXOR_X15_POSITION ) |
			( CRC_USER_CRCXOR_X16 << _CRCXOR_X16_POSITION ) |
			( CRC_USER_CRCXOR_X17 << _CRCXOR_X17_POSITION ) |
			( CRC_USER_CRCXOR_X18 << _CRCXOR_X18_POSITION ) |
			( CRC_USER_CRCXOR_X19 << _CRCXOR_X19_POSITION ) |
			( CRC_USER_CRCXOR_X20 << _CRCXOR_X20_POSITION ) |
			( CRC_USER_CRCXOR_X21 << _CRCXOR_X21_POSITION ) |
			( CRC_USER_CRCXOR_X22 << _CRCXOR_X22_POSITION ) |
			( CRC_USER_CRCXOR_X23 << _CRCXOR_X23_POSITION ) |
			( CRC_USER_CRCXOR_X24 << _CRCXOR_X24_POSITION ) |
			( CRC_USER_CRCXOR_X25 << _CRCXOR_X25_POSITION ) |
			( CRC_USER_CRCXOR_X26 << _CRCXOR_X26_POSITION ) |
			( CRC_USER_CRCXOR_X27 << _CRCXOR_X27_POSITION ) |
			( CRC_USER_CRCXOR_X28 << _CRCXOR_X28_POSITION ) |
			( CRC_USER_CRCXOR_X29 << _CRCXOR_X29_POSITION ) |
			( CRC_USER_CRCXOR_X30 << _CRCXOR_X30_POSITION ) |
			( CRC_USER_CRCXOR_X31 << _CRCXOR_X31_POSITION ) ;
		#ifdef DEF_BITNAME
			CRCXORbits.X1 = CRC_USER_CRCXOR_X1;
			CRCXORbits.X2 = CRC_USER_CRCXOR_X2;
			CRCXORbits.X3 = CRC_USER_CRCXOR_X3;
			CRCXORbits.X4 = CRC_USER_CRCXOR_X4;
			CRCXORbits.X5 = CRC_USER_CRCXOR_X5;
			CRCXORbits.X6 = CRC_USER_CRCXOR_X6;
			CRCXORbits.X7 = CRC_USER_CRCXOR_X7;
			CRCXORbits.X8 = CRC_USER_CRCXOR_X8;
			CRCXORbits.X9 = CRC_USER_CRCXOR_X9;
			CRCXORbits.X10 = CRC_USER_CRCXOR_X10;
			CRCXORbits.X11 = CRC_USER_CRCXOR_X11;
			CRCXORbits.X12 = CRC_USER_CRCXOR_X12;
			CRCXORbits.X13 = CRC_USER_CRCXOR_X13;
			CRCXORbits.X14 = CRC_USER_CRCXOR_X14;
			CRCXORbits.X15 = CRC_USER_CRCXOR_X15;
			CRCXORbits.X16 = CRC_USER_CRCXOR_X16;
			CRCXORbits.X17 = CRC_USER_CRCXOR_X17;
			CRCXORbits.X18 = CRC_USER_CRCXOR_X18;
			CRCXORbits.X19 = CRC_USER_CRCXOR_X19;
			CRCXORbits.X20 = CRC_USER_CRCXOR_X20;
			CRCXORbits.X21 = CRC_USER_CRCXOR_X21;
			CRCXORbits.X22 = CRC_USER_CRCXOR_X22;
			CRCXORbits.X23 = CRC_USER_CRCXOR_X23;
			CRCXORbits.X24 = CRC_USER_CRCXOR_X24;
			CRCXORbits.X25 = CRC_USER_CRCXOR_X25;
			CRCXORbits.X26 = CRC_USER_CRCXOR_X26;
			CRCXORbits.X27 = CRC_USER_CRCXOR_X27;
			CRCXORbits.X28 = CRC_USER_CRCXOR_X28;
			CRCXORbits.X29 = CRC_USER_CRCXOR_X29;
			CRCXORbits.X30 = CRC_USER_CRCXOR_X30;
			CRCXORbits.X31 = CRC_USER_CRCXOR_X31;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CRCDATレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCDAT = CRC_USER_CRCDAT;
	/*-----------------------------------------------------------------------*/
	/* CRCWDATレジスタ */
	/*-----------------------------------------------------------------------*/
		CRCWDAT = CRC_USER_CRCWDAT;
#endif		
		
}