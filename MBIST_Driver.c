/*----------------------------------------------------------------------------*/
/**
* @file		MBIST_Driver.c
* @brief	RAM Memory Built-In Self-Testに関するドライバ関数
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
#include "mbist_user.h"
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
* @fn           vdg_MBIST_Set_Register(void)
* @brief        MBISTレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_MBIST_Set_Register(void)
{

	/*-----------------------------------------------------------------------*/
	/* MBISTCONレジスタ */
	/*-----------------------------------------------------------------------*/
		MBISTCON = 
			( MBIST_USER_MBISTCON_MBISTEN << _MBISTCON_MBISTEN_POSITION ) |
			( MBIST_USER_MBISTCON_MBISTSTAT << _MBISTCON_MBISTSTAT_POSITION ) |
			( MBIST_USER_MBISTCON_MBISTDONE << _MBISTCON_MBISTDONE_POSITION ) |
			( MBIST_USER_MBISTCON_FLTINJ << _MBISTCON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			MBISTCONbits.MBISTEN = MBIST_USER_MBISTCON_MBISTEN;
			MBISTCONbits.MBISTSTAT = MBIST_USER_MBISTCON_MBISTSTAT;
			MBISTCONbits.MBISTDONE = MBIST_USER_MBISTCON_MBISTDONE;
			MBISTCONbits.FLTINJ = MBIST_USER_MBISTCON_FLTINJ;
		#endif 


}
