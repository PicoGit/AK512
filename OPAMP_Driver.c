/*----------------------------------------------------------------------------*/
/**
* @file		OPANP_Driver.c
* @brief	OPAMPモジュールに関するドライバ関数
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
#include "opamp_user.h"
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
* @fn           vdg_OPAMP_Set_Register(void)
* @brief        オペアンプレジスタを初期化します 
* @param        無し
* @return
* @detail		無し
 */ 
/*----------------------------------------------------------------------------*/
void vdg_OPAMP_Set_Register(void)
{
#if ( PMD_OPAMPMD == PMD_MODULE_ENABLE )	
   /*-----------------------------------------------------------------------*/
	/* AMP1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP1CON1 = 
			( OPAMP_USER_AMP1CON1_REFEN << _AMP1CON1_REFEN_POSITION ) |
			( OPAMP_USER_AMP1CON1_DIFFCON << _AMP1CON1_DIFFCON_POSITION ) |
			( OPAMP_USER_AMP1CON1_UGE << _AMP1CON1_UGE_POSITION ) |
			( OPAMP_USER_AMP1CON1_HPEN << _AMP1CON1_HPEN_POSITION ) |
			( OPAMP_USER_AMP1CON1_AMPEN << _AMP1CON1_AMPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			AMP1CON1bits.REFEN = OPAMP_USER_AMP1CON1_REFEN;
			AMP1CON1bits.DIFFCON = OPAMP_USER_AMP1CON1_DIFFCON;
			AMP1CON1bits.UGE = OPAMP_USER_AMP1CON1_UGE;
			AMP1CON1bits.HPEN = OPAMP_USER_AMP1CON1_HPEN;
			AMP1CON1bits.AMPEN = OPAMP_USER_AMP1CON1_AMPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AMP1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP1CON2 = 
			( OPAMP_USER_AMP1CON2_NOFFSETLP << _AMP1CON2_NOFFSETLP_POSITION ) |
			( OPAMP_USER_AMP1CON2_POFFSETLP << _AMP1CON2_POFFSETLP_POSITION ) |
			( OPAMP_USER_AMP1CON2_NOFFSETHP << _AMP1CON2_NOFFSETHP_POSITION ) |
			( OPAMP_USER_AMP1CON2_POFFSETHP << _AMP1CON2_POFFSETHP_POSITION ) ;
		#ifdef DEF_BITNAME
			AMP1CON2bits.NOFFSETLP = OPAMP_USER_AMP1CON2_NOFFSETLP;
			AMP1CON2bits.POFFSETLP = OPAMP_USER_AMP1CON2_POFFSETLP;
			AMP1CON2bits.NOFFSETHP = OPAMP_USER_AMP1CON2_NOFFSETHP;
			AMP1CON2bits.POFFSETHP = OPAMP_USER_AMP1CON2_POFFSETHP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AMP2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP2CON1 = 
			( OPAMP_USER_AMP2CON1_REFEN << _AMP2CON1_REFEN_POSITION ) |
			( OPAMP_USER_AMP2CON1_DIFFCON << _AMP2CON1_DIFFCON_POSITION ) |
			( OPAMP_USER_AMP2CON1_UGE << _AMP2CON1_UGE_POSITION ) |
			( OPAMP_USER_AMP2CON1_HPEN << _AMP2CON1_HPEN_POSITION ) |
			( OPAMP_USER_AMP2CON1_AMPEN << _AMP2CON1_AMPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			AMP2CON1bits.REFEN = OPAMP_USER_AMP2CON1_REFEN;
			AMP2CON1bits.DIFFCON = OPAMP_USER_AMP2CON1_DIFFCON;
			AMP2CON1bits.UGE = OPAMP_USER_AMP2CON1_UGE;
			AMP2CON1bits.HPEN = OPAMP_USER_AMP2CON1_HPEN;
			AMP2CON1bits.AMPEN = OPAMP_USER_AMP2CON1_AMPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AMP2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP2CON2 = 
			( OPAMP_USER_AMP2CON2_NOFFSETLP << _AMP2CON2_NOFFSETLP_POSITION ) |
			( OPAMP_USER_AMP2CON2_POFFSETLP << _AMP2CON2_POFFSETLP_POSITION ) |
			( OPAMP_USER_AMP2CON2_NOFFSETHP << _AMP2CON2_NOFFSETHP_POSITION ) |
			( OPAMP_USER_AMP2CON2_POFFSETHP << _AMP2CON2_POFFSETHP_POSITION ) ;
		#ifdef DEF_BITNAME
			AMP2CON2bits.NOFFSETLP = OPAMP_USER_AMP2CON2_NOFFSETLP;
			AMP2CON2bits.POFFSETLP = OPAMP_USER_AMP2CON2_POFFSETLP;
			AMP2CON2bits.NOFFSETHP = OPAMP_USER_AMP2CON2_NOFFSETHP;
			AMP2CON2bits.POFFSETHP = OPAMP_USER_AMP2CON2_POFFSETHP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AMP3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP3CON1 = 
			( OPAMP_USER_AMP3CON1_REFEN << _AMP3CON1_REFEN_POSITION ) |
			( OPAMP_USER_AMP3CON1_DIFFCON << _AMP3CON1_DIFFCON_POSITION ) |
			( OPAMP_USER_AMP3CON1_UGE << _AMP3CON1_UGE_POSITION ) |
			( OPAMP_USER_AMP3CON1_HPEN << _AMP3CON1_HPEN_POSITION ) |
			( OPAMP_USER_AMP3CON1_AMPEN << _AMP3CON1_AMPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			AMP3CON1bits.REFEN = OPAMP_USER_AMP3CON1_REFEN;
			AMP3CON1bits.DIFFCON = OPAMP_USER_AMP3CON1_DIFFCON;
			AMP3CON1bits.UGE = OPAMP_USER_AMP3CON1_UGE;
			AMP3CON1bits.HPEN = OPAMP_USER_AMP3CON1_HPEN;
			AMP3CON1bits.AMPEN = OPAMP_USER_AMP3CON1_AMPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* AMP3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		AMP3CON2 = 
			( OPAMP_USER_AMP3CON2_NOFFSETLP << _AMP3CON2_NOFFSETLP_POSITION ) |
			( OPAMP_USER_AMP3CON2_POFFSETLP << _AMP3CON2_POFFSETLP_POSITION ) |
			( OPAMP_USER_AMP3CON2_NOFFSETHP << _AMP3CON2_NOFFSETHP_POSITION ) |
			( OPAMP_USER_AMP3CON2_POFFSETHP << _AMP3CON2_POFFSETHP_POSITION ) ;
		#ifdef DEF_BITNAME
			AMP3CON2bits.NOFFSETLP = OPAMP_USER_AMP3CON2_NOFFSETLP;
			AMP3CON2bits.POFFSETLP = OPAMP_USER_AMP3CON2_POFFSETLP;
			AMP3CON2bits.NOFFSETHP = OPAMP_USER_AMP3CON2_NOFFSETHP;
			AMP3CON2bits.POFFSETHP = OPAMP_USER_AMP3CON2_POFFSETHP;
		#endif 
#endif
}
