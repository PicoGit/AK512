/*----------------------------------------------------------------------------*/
/**
* @file		ECC_Driver.c
* @brief	ECCモジュールに関するドライバ関数
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
#include "ecc_user.h"
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
* @fn        vdg_ECC_Set_Register(void)
* @brief        ECCレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_ECC_Set_Register(void)
{
#if ( PMD_ECCMD == PMD_MODULE_ENABLE )

	/*-----------------------------------------------------------------------*/
	/* RAMXECCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCCON = 
			( ECC_USER_RAMXECCCON_FLTINJ << _RAMXECCCON_FLTINJ_POSITION ) |
			( ECC_USER_RAMXECCCON_ON << _RAMXECCCON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			RAMXECCCONbits.FLTINJ = ECC_USER_RAMXECCCON_FLTINJ;
			RAMXECCCONbits.ON = ECC_USER_RAMXECCCON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RAMXECCSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCSTAT = 
			( ECC_USER_RAMXECCSTAT_DED << _RAMXECCSTAT_DED_POSITION ) |
			( ECC_USER_RAMXECCSTAT_DEDO << _RAMXECCSTAT_DEDO_POSITION ) |
			( ECC_USER_RAMXECCSTAT_SEC << _RAMXECCSTAT_SEC_POSITION ) |
			( ECC_USER_RAMXECCSTAT_SECO << _RAMXECCSTAT_SECO_POSITION ) |
			( ECC_USER_RAMXECCSTAT_PWBNE << _RAMXECCSTAT_PWBNE_POSITION ) |
			( ECC_USER_RAMXECCSTAT_ESEL << _RAMXECCSTAT_ESEL_POSITION ) ;
		#ifdef DEF_BITNAME
			RAMXECCSTATbits.DED = ECC_USER_RAMXECCSTAT_DED;
			RAMXECCSTATbits.DEDO = ECC_USER_RAMXECCSTAT_DEDO;
			RAMXECCSTATbits.SEC = ECC_USER_RAMXECCSTAT_SEC;
			RAMXECCSTATbits.SECO = ECC_USER_RAMXECCSTAT_SECO;
			RAMXECCSTATbits.PWBNE = ECC_USER_RAMXECCSTAT_PWBNE;
			RAMXECCSTATbits.ESEL = ECC_USER_RAMXECCSTAT_ESEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RAMXECCFPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCFPTR = 
			( ECC_USER_RAMXECCFPTR_FLT1LPTR << _RAMXECCFPTR_FLT1LPTR_POSITION ) |
			( ECC_USER_RAMXECCFPTR_FLT2LPTR << _RAMXECCFPTR_FLT2LPTR_POSITION ) ;
		#ifdef DEF_BITNAME
			RAMXECCFPTRbits.FLT1LPTR = ECC_USER_RAMXECCFPTR_FLT1LPTR;
			RAMXECCFPTRbits.FLT2LPTR = ECC_USER_RAMXECCFPTR_FLT2LPTR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RAMXECCFADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCFADDR = ECC_USER_RAMXECCFADDR;
	/*-----------------------------------------------------------------------*/
	/* RAMXECCEADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCEADDR = ECC_USER_RAMXECCEADDR;
	/*-----------------------------------------------------------------------*/
	/* RAMXECCEDATAレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCEDATA = ECC_USER_RAMXECCEDATA;
	/*-----------------------------------------------------------------------*/
	/* RAMXECCVALレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCVAL = ECC_USER_RAMXECCVAL;
	/*-----------------------------------------------------------------------*/
	/* RAMXECCSYNDレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMXECCSYND =  ECC_USER_RAMXECCSYND;
	/*-----------------------------------------------------------------------*/
	/* RAMYECCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCCON = 
			( ECC_USER_RAMYECCCON_FLTINJ << _RAMYECCCON_FLTINJ_POSITION ) |
			( ECC_USER_RAMYECCCON_ON << _RAMYECCCON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			RAMYECCCONbits.FLTINJ = ECC_USER_RAMYECCCON_FLTINJ;
			RAMYECCCONbits.ON = ECC_USER_RAMYECCCON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RAMYECCSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCSTAT = 
			( ECC_USER_RAMYECCSTAT_DED << _RAMYECCSTAT_DED_POSITION ) |
			( ECC_USER_RAMYECCSTAT_DEDO << _RAMYECCSTAT_DEDO_POSITION ) |
			( ECC_USER_RAMYECCSTAT_SEC << _RAMYECCSTAT_SEC_POSITION ) |
			( ECC_USER_RAMYECCSTAT_SECO << _RAMYECCSTAT_SECO_POSITION ) |
			( ECC_USER_RAMYECCSTAT_PWBNE << _RAMYECCSTAT_PWBNE_POSITION ) |
			( ECC_USER_RAMYECCSTAT_ESEL << _RAMYECCSTAT_ESEL_POSITION ) ;
		#ifdef DEF_BITNAME
			RAMYECCSTATbits.DED = ECC_USER_RAMYECCSTAT_DED;
			RAMYECCSTATbits.DEDO = ECC_USER_RAMYECCSTAT_DEDO;
			RAMYECCSTATbits.SEC = ECC_USER_RAMYECCSTAT_SEC;
			RAMYECCSTATbits.SECO = ECC_USER_RAMYECCSTAT_SECO;
			RAMYECCSTATbits.PWBNE = ECC_USER_RAMYECCSTAT_PWBNE;
			RAMYECCSTATbits.ESEL = ECC_USER_RAMYECCSTAT_ESEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RAMYECCFPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCFPTR = 
			( ECC_USER_RAMYECCFPTR_FLT1LPTR << _RAMYECCFPTR_FLT1LPTR_POSITION ) |
			( ECC_USER_RAMYECCFPTR_FLT2LPTR << _RAMYECCFPTR_FLT2LPTR_POSITION ) ;
		#ifdef DEF_BITNAME
			RAMYECCFPTRbits.FLT1LPTR = ECC_USER_RAMYECCFPTR_FLT1LPTR;
			RAMYECCFPTRbits.FLT2LPTR = ECC_USER_RAMYECCFPTR_FLT2LPTR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RAMYECCFADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCFADDR = ECC_USER_RAMYECCFADDR;
	/*-----------------------------------------------------------------------*/
	/* RAMYECCEADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCEADDR = ECC_USER_RAMYECCEADDR;
	/*-----------------------------------------------------------------------*/
	/* RAMYECCEDATAレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCEDATA = ECC_USER_RAMYECCEDATA;
	/*-----------------------------------------------------------------------*/
	/* RAMYECCVALレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCVAL =  ECC_USER_RAMYECCVAL;
	/*-----------------------------------------------------------------------*/
	/* RAMYECCSYNDレジスタ */
	/*-----------------------------------------------------------------------*/
		RAMYECCSYND = ECC_USER_RAMYECCSYND;
#endif
}
