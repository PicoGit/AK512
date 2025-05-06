/*----------------------------------------------------------------------------*/
/**
* @file		Cache_Driver.c
* @brief	Cacheモジュールに関するドライバ関数
* @date		25/05/05
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
#include "cache_user.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Cache_Set_Register(void)
* @brief     キャッシュの設定をします
* @param
* @return
* @detail       
*/
/*----------------------------------------------------------------------------*/
void vdg_Cache_Set_Register(void)
{

	/*-----------------------------------------------------------------------*/
	/* CHECONレジスタ */
	/*-----------------------------------------------------------------------*/
		CHECON = 
			( CACHE_USER_CHECON_FLTINJ << _CHECON_FLTINJ_POSITION ) |
			( CACHE_USER_CHECON_CHECOH << _CHECON_CHECOH_POSITION ) |
			( CACHE_USER_CHECON_CHEINV << _CHECON_CHEINV_POSITION ) |
			( CACHE_USER_CHECON_ON << _CHECON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			CHECONbits.FLTINJ = CACHE_USER_CHECON_FLTINJ;
			CHECONbits.CHECOH = CACHE_USER_CHECON_CHECOH;
			CHECONbits.CHEINV = CACHE_USER_CHECON_CHEINV;
			CHECONbits.ON = CACHE_USER_CHECON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CHESTATレジスタ */
	/*-----------------------------------------------------------------------*/
		CHESTAT = 
			( CACHE_USER_CHESTAT_PAR << _CHESTAT_PAR_POSITION ) |
			( CACHE_USER_CHESTAT_RD << _CHESTAT_RD_POSITION ) ;
		#ifdef DEF_BITNAME
			CHESTATbits.PAR = CACHE_USER_CHESTAT_PAR;
			CHESTATbits.RD = CACHE_USER_CHESTAT_RD;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CHEFLTINJレジスタ */
	/*-----------------------------------------------------------------------*/
		CHEFLTINJ = 
			( CACHE_USER_CHEFLTINJ_FLTPTR << _CHEFLTINJ_FLTPTR_POSITION ) ;
		#ifdef DEF_BITNAME
			CHEFLTINJbits.FLTPTR = CACHE_USER_CHEFLTINJ_FLTPTR;
		#endif 
}
