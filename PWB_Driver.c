/*----------------------------------------------------------------------------*/
/**
* @file		PWB_Driver.c
* @brief	Posted Write Bufferに関するドライバ関数
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
#include "pwb_user.h"
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
* @fn           vdg_PWB_Set_Register(void)
* @brief        PWBレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_PWB_Set_Register(void)
{

	/*-----------------------------------------------------------------------*/
	/* PWBXECCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCCON = 
			( PWB_USER_PWBXECCCON_FLTINJ << _PWBXECCCON_FLTINJ_POSITION ) |
			( PWB_USER_PWBXECCCON_ON << _PWBXECCCON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			PWBXECCCONbits.FLTINJ = PWB_USER_PWBXECCCON_FLTINJ;
			PWBXECCCONbits.ON = PWB_USER_PWBXECCCON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWBXECCSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCSTAT = 
			( PWB_USER_PWBXECCSTAT_DED << _PWBXECCSTAT_DED_POSITION ) |
			( PWB_USER_PWBXECCSTAT_DEDO << _PWBXECCSTAT_DEDO_POSITION ) |
			( PWB_USER_PWBXECCSTAT_SEC << _PWBXECCSTAT_SEC_POSITION ) |
			( PWB_USER_PWBXECCSTAT_SECO << _PWBXECCSTAT_SECO_POSITION ) |
			( PWB_USER_PWBXECCSTAT_PWBNE << _PWBXECCSTAT_PWBNE_POSITION ) |
			( PWB_USER_PWBXECCSTAT_ESEL << _PWBXECCSTAT_ESEL_POSITION ) ;
		#ifdef DEF_BITNAME
			PWBXECCSTATbits.DED = PWB_USER_PWBXECCSTAT_DED;
			PWBXECCSTATbits.DEDO = PWB_USER_PWBXECCSTAT_DEDO;
			PWBXECCSTATbits.SEC = PWB_USER_PWBXECCSTAT_SEC;
			PWBXECCSTATbits.SECO = PWB_USER_PWBXECCSTAT_SECO;
			PWBXECCSTATbits.PWBNE = PWB_USER_PWBXECCSTAT_PWBNE;
			PWBXECCSTATbits.ESEL = PWB_USER_PWBXECCSTAT_ESEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWBXECCFPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCFPTR = 
			( PWB_USER_PWBXECCFPTR_FLT1LPTR << _PWBXECCFPTR_FLT1LPTR_POSITION ) |
			( PWB_USER_PWBXECCFPTR_FLT2LPTR << _PWBXECCFPTR_FLT2LPTR_POSITION ) ;
		#ifdef DEF_BITNAME
			PWBXECCFPTRbits.FLT1LPTR = PWB_USER_PWBXECCFPTR_FLT1LPTR;
			PWBXECCFPTRbits.FLT2LPTR = PWB_USER_PWBXECCFPTR_FLT2LPTR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWBXECCFADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCFADDR = PWB_USER_PWBXECCFADDR;
	/*-----------------------------------------------------------------------*/
	/* PWBXECCEADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCEADDR = PWB_USER_PWBXECCEADDR;
	/*-----------------------------------------------------------------------*/
	/* PWBXECCEDATAレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCEDATA = PWB_USER_PWBXECCEDATA;
	/*-----------------------------------------------------------------------*/
	/* PWBXECCVALレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCVAL = PWB_USER_PWBXECCVAL;
	/*-----------------------------------------------------------------------*/
	/* PWBXECCSYNDレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBXECCSYND = PWB_USER_PWBXECCSYND;
/*-----------------------------------------------------------------------*/
	/* PWBYECCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCCON = 
			( PWB_USER_PWBYECCCON_FLTINJ << _PWBYECCCON_FLTINJ_POSITION ) |
			( PWB_USER_PWBYECCCON_ON << _PWBYECCCON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			PWBYECCCONbits.FLTINJ = PWB_USER_PWBYECCCON_FLTINJ;
			PWBYECCCONbits.ON = PWB_USER_PWBYECCCON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWBYECCSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCSTAT = 
			( PWB_USER_PWBYECCSTAT_DED << _PWBYECCSTAT_DED_POSITION ) |
			( PWB_USER_PWBYECCSTAT_DEDO << _PWBYECCSTAT_DEDO_POSITION ) |
			( PWB_USER_PWBYECCSTAT_SEC << _PWBYECCSTAT_SEC_POSITION ) |
			( PWB_USER_PWBYECCSTAT_SECO << _PWBYECCSTAT_SECO_POSITION ) |
			( PWB_USER_PWBYECCSTAT_PWBNE << _PWBYECCSTAT_PWBNE_POSITION ) |
			( PWB_USER_PWBYECCSTAT_ESEL << _PWBYECCSTAT_ESEL_POSITION ) ;
		#ifdef DEF_BITNAME
			PWBYECCSTATbits.DED = PWB_USER_PWBYECCSTAT_DED;
			PWBYECCSTATbits.DEDO = PWB_USER_PWBYECCSTAT_DEDO;
			PWBYECCSTATbits.SEC = PWB_USER_PWBYECCSTAT_SEC;
			PWBYECCSTATbits.SECO = PWB_USER_PWBYECCSTAT_SECO;
			PWBYECCSTATbits.PWBNE = PWB_USER_PWBYECCSTAT_PWBNE;
			PWBYECCSTATbits.ESEL = PWB_USER_PWBYECCSTAT_ESEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWBYECCFPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCFPTR = 
			( PWB_USER_PWBYECCFPTR_FLT1LPTR << _PWBYECCFPTR_FLT1LPTR_POSITION ) |
			( PWB_USER_PWBYECCFPTR_FLT2LPTR << _PWBYECCFPTR_FLT2LPTR_POSITION ) ;
		#ifdef DEF_BITNAME
			PWBYECCFPTRbits.FLT1LPTR = PWB_USER_PWBYECCFPTR_FLT1LPTR;
			PWBYECCFPTRbits.FLT2LPTR = PWB_USER_PWBYECCFPTR_FLT2LPTR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PWBYECCFADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCFADDR = PWB_USER_PWBYECCFADDR;
	/*-----------------------------------------------------------------------*/
	/* PWBYECCEADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCEADDR = PWB_USER_PWBYECCEADDR;
	/*-----------------------------------------------------------------------*/
	/* PWBYECCEDATAレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCEDATA = PWB_USER_PWBYECCEDATA;
	/*-----------------------------------------------------------------------*/
	/* PWBYECCVALレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCVAL = PWB_USER_PWBYECCVAL;
	/*-----------------------------------------------------------------------*/
	/* PWBYECCSYNDレジスタ */
	/*-----------------------------------------------------------------------*/
		PWBYECCSYND = PWB_USER_PWBYECCSYND;
}
