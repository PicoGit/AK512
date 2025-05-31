/*----------------------------------------------------------------------------*/
/**
* @file		UREF_Driver.c
* @brief	UREFモジュールに関するドライバ関数
* @date		25/5/4
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
#include "uref_user.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UREF_Set_Register(void)
* @brief     UREFのレジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_UREF_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* UREFCONレジスタ */
	/*-----------------------------------------------------------------------*/
		UREFCON = 
			( UREF_USER_UREFCON_OUTSEL << _UREFCON_OUTSEL_POSITION ) |
			( UREF_USER_UREFCON_INSEL << _UREFCON_INSEL_POSITION ) |
			( UREF_USER_UREFCON_ON << _UREFCON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			UREFCONbits.OUTSEL = UREF_USER_UREFCON_OUTSEL;
			UREFCONbits.INSEL = UREF_USER_UREFCON_INSEL;
			UREFCONbits.ON = UREF_USER_UREFCON_ON;
		#endif 
}

