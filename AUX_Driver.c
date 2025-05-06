/*----------------------------------------------------------------------------*/
/**
* @file		AUX_Driver.c
* @brief	AUXモジュールに関するドライバ関数
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
#include "aux_user.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
struct
{
    _u4 u4_RCON;
}s_AUX;
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*
* @fn			u2g_AUX_Get_RCON_Register(void)
* @brief        起動時のRCONレジスタ情報を返します
* @param
* @return       起動時のRCONレジスタ
* @detail 
*/
/*----------------------------------------------------------------------------*/
_u4 u4g_AUX_Get_RCON_Register(void)
{
    return (s_AUX.u4_RCON);
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_AUX_Set_Register(void)
* @brief     クロックやリセット要因の初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_AUX_Set_Register(void)
{
	s_AUX.u4_RCON = RCON;
	/*-----------------------------------------------------------------------*/
	/* RCONレジスタ */
	/*-----------------------------------------------------------------------*/
		RCON = 
			( AUX_USER_RCON_POR << _RCON_POR_POSITION ) |
			( AUX_USER_RCON_BOR << _RCON_BOR_POSITION ) |
			( AUX_USER_RCON_IDLE << _RCON_IDLE_POSITION ) |
			( AUX_USER_RCON_SLEEP << _RCON_SLEEP_POSITION ) |
			( AUX_USER_RCON_WDTO << _RCON_WDTO_POSITION ) |
			( AUX_USER_RCON_SWR << _RCON_SWR_POSITION ) |
			( AUX_USER_RCON_EXTR << _RCON_EXTR_POSITION ) |
			( AUX_USER_RCON_CM << _RCON_CM_POSITION ) |
			( AUX_USER_RCON_BUCKR << _RCON_BUCKR_POSITION ) |
			( AUX_USER_RCON_VREG2R << _RCON_VREG2R_POSITION ) |
			( AUX_USER_RCON_VREG3R << _RCON_VREG3R_POSITION ) |
			( AUX_USER_RCON_VREG4R << _RCON_VREG4R_POSITION ) ;
		#ifdef DEF_BITNAME
			RCONbits.POR = AUX_USER_RCON_POR;
			RCONbits.BOR = AUX_USER_RCON_BOR;
			RCONbits.IDLE = AUX_USER_RCON_IDLE;
			RCONbits.SLEEP = AUX_USER_RCON_SLEEP;
			RCONbits.WDTO = AUX_USER_RCON_WDTO;
			RCONbits.SWR = AUX_USER_RCON_SWR;
			RCONbits.EXTR = AUX_USER_RCON_EXTR;
			RCONbits.CM = AUX_USER_RCON_CM;
			RCONbits.BUCKR = AUX_USER_RCON_BUCKR;
			RCONbits.VREG2R = AUX_USER_RCON_VREG2R;
			RCONbits.VREG3R = AUX_USER_RCON_VREG3R;
			RCONbits.VREG4R = AUX_USER_RCON_VREG4R;
		#endif 

}		

