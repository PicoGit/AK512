/*----------------------------------------------------------------------------*/
/*【FILE】WDTに関するドライバ関数*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "wdt_user.h"
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
* @fn        vdg_WDT_Set_Register(void)
* @brief     WDTレジスタを初期化します
* @param
* @return
* @detail */
/*----------------------------------------------------------------------------*/
void vdg_WDT_Set_Register(void)
{
#if ( PMD_WDTMD == PMD_MODULE_ENABLE )

	/*-----------------------------------------------------------------------*/
	/* WDTCONレジスタ */
	/*-----------------------------------------------------------------------*/
		WDTCON = 
			( WDT_USER_WDTCON_WINDIS << _WDTCON_WINDIS_POSITION ) |
			( WDT_USER_WDTCON_SMPS << _WDTCON_SMPS_POSITION ) |
			( WDT_USER_WDTCON_RMCLK << _WDTCON_RMCLK_POSITION ) |
			( WDT_USER_WDTCON_RMPS << _WDTCON_RMPS_POSITION ) |
			( WDT_USER_WDTCON_WINSIZE << _WDTCON_WINSIZE_POSITION ) |
			( WDT_USER_WDTCON_ON << _WDTCON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			WDTCONbits.WINDIS = WDT_USER_WDTCON_WINDIS;
			WDTCONbits.SMPS = WDT_USER_WDTCON_SMPS;
			WDTCONbits.RMCLK = WDT_USER_WDTCON_RMCLK;
			WDTCONbits.RMPS = WDT_USER_WDTCON_RMPS;
			WDTCONbits.WINSIZE = WDT_USER_WDTCON_WINSIZE;
			WDTCONbits.ON = WDT_USER_WDTCON_ON;
		#endif 
#endif
 
}
