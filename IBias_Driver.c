/*----------------------------------------------------------------------------*/
/**
* @file		IBias_Driver.c
* @brief	定電流源に関するドライバ関数
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
#include "ibias_user.h"
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
* @fn        vdg_IBias_Set_Register(void)
* @brief     BIASレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IBias_Set_Register(void)
{
#if ( PMD_BIASMD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IBIASCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IBIASCON = 
			( IBIAS_USER_IBIASCON_ISELOUT0 << _IBIASCON_ISELOUT0_POSITION ) |
			( IBIAS_USER_IBIASCON_ISELOUT1 << _IBIASCON_ISELOUT1_POSITION ) |
			( IBIAS_USER_IBIASCON_I10EN0 << _IBIASCON_I10EN0_POSITION ) |
			( IBIAS_USER_IBIASCON_I10EN1 << _IBIASCON_I10EN1_POSITION ) |
			( IBIAS_USER_IBIASCON_ISELOUT2 << _IBIASCON_ISELOUT2_POSITION ) |
			( IBIAS_USER_IBIASCON_ISELOUT3 << _IBIASCON_ISELOUT3_POSITION ) |
			( IBIAS_USER_IBIASCON_I10EN2 << _IBIASCON_I10EN2_POSITION ) |
			( IBIAS_USER_IBIASCON_I10EN3 << _IBIASCON_I10EN3_POSITION ) ;
		#ifdef DEF_BITNAME
			IBIASCONbits.ISELOUT0 = IBIAS_USER_IBIASCON_ISELOUT0;
			IBIASCONbits.ISELOUT1 = IBIAS_USER_IBIASCON_ISELOUT1;
			IBIASCONbits.I10EN0 = IBIAS_USER_IBIASCON_I10EN0;
			IBIASCONbits.I10EN1 = IBIAS_USER_IBIASCON_I10EN1;
			IBIASCONbits.ISELOUT2 = IBIAS_USER_IBIASCON_ISELOUT2;
			IBIASCONbits.ISELOUT3 = IBIAS_USER_IBIASCON_ISELOUT3;
			IBIASCONbits.I10EN2 = IBIAS_USER_IBIASCON_I10EN2;
			IBIASCONbits.I10EN3 = IBIAS_USER_IBIASCON_I10EN3;
		#endif 
#endif		
 
}
