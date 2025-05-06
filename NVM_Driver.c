/*----------------------------------------------------------------------------*/
/**
* @file		NVM_Driver.c
* @brief	NVMモジュールに関するドライバ関数
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
#include "nvm_user.h"
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
* @fn        vdg_NVM_Set_Register(void)
* @brief     NVMレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_NVM_Set_Register(void)
{
    /*-----------------------------------------------------------------------*/
	/* NVMCONレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMCON = 
			( NVM_USER_NVMCON_NVMOP << _NVMCON_NVMOP_POSITION ) |
			( NVM_USER_NVMCON_DRBV << _NVMCON_DRBV_POSITION ) |
			( NVM_USER_NVMCON_LOCK << _NVMCON_LOCK_POSITION ) |
			( NVM_USER_NVMCON_P2ACTIV << _NVMCON_P2ACTIV_POSITION ) |
			( NVM_USER_NVMCON_SFTSWP << _NVMCON_SFTSWP_POSITION ) |
			( NVM_USER_NVMCON_NVMPIDL << _NVMCON_NVMPIDL_POSITION ) |
			( NVM_USER_NVMCON_WRERR << _NVMCON_WRERR_POSITION ) |
			( NVM_USER_NVMCON_WREN << _NVMCON_WREN_POSITION ) |
			( NVM_USER_NVMCON_WR << _NVMCON_WR_POSITION ) |
			( NVM_USER_NVMCON_WREC << _NVMCON_WREC_POSITION ) |
			( NVM_USER_NVMCON_WRRE << _NVMCON_WRRE_POSITION ) ;
		#ifdef DEF_BITNAME
			NVMCONbits.NVMOP = NVM_USER_NVMCON_NVMOP;
			NVMCONbits.DRBV = NVM_USER_NVMCON_DRBV;
			NVMCONbits.LOCK = NVM_USER_NVMCON_LOCK;
			NVMCONbits.P2ACTIV = NVM_USER_NVMCON_P2ACTIV;
			NVMCONbits.SFTSWP = NVM_USER_NVMCON_SFTSWP;
			NVMCONbits.NVMPIDL = NVM_USER_NVMCON_NVMPIDL;
			NVMCONbits.WRERR = NVM_USER_NVMCON_WRERR;
			NVMCONbits.WREN = NVM_USER_NVMCON_WREN;
			NVMCONbits.WR = NVM_USER_NVMCON_WR;
			NVMCONbits.WREC = NVM_USER_NVMCON_WREC;
			NVMCONbits.WRRE = NVM_USER_NVMCON_WRRE;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* NVMADRレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMADR = NVM_USER_NVMADR;
	/*-----------------------------------------------------------------------*/
	/* NVMDATA0レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMDATA0 = NVM_USER_NVMDATA0;
	/*-----------------------------------------------------------------------*/
	/* NVMDATA1レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMDATA1 = NVM_USER_NVMDATA1;
	/*-----------------------------------------------------------------------*/
	/* NVMDATA2レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMDATA2 = NVM_USER_NVMDATA2;
	/*-----------------------------------------------------------------------*/
	/* NVMDATA3レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMDATA3 = NVM_USER_NVMDATA3;
	/*-----------------------------------------------------------------------*/
	/* NVMSRCADRレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMSRCADR = NVM_USER_NVMSRCADR;
	/*-----------------------------------------------------------------------*/
	/* NVMECCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCCON = 
			( NVM_USER_NVMECCCON_FLTINJ << _NVMECCCON_FLTINJ_POSITION ) |
			( NVM_USER_NVMECCCON_SECIE << _NVMECCCON_SECIE_POSITION ) |
			( NVM_USER_NVMECCCON_ECCLOCK << _NVMECCCON_ECCLOCK_POSITION ) ;
		#ifdef DEF_BITNAME
			NVMECCCONbits.FLTINJ = NVM_USER_NVMECCCON_FLTINJ;
			NVMECCCONbits.SECIE = NVM_USER_NVMECCCON_SECIE;
			NVMECCCONbits.ECCLOCK = NVM_USER_NVMECCCON_ECCLOCK;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* NVMECCSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCSTAT = 
			( NVM_USER_NVMECCSTAT_DED << _NVMECCSTAT_DED_POSITION ) |
			( NVM_USER_NVMECCSTAT_DEDO << _NVMECCSTAT_DEDO_POSITION ) |
			( NVM_USER_NVMECCSTAT_SEC << _NVMECCSTAT_SEC_POSITION ) |
			( NVM_USER_NVMECCSTAT_SECO << _NVMECCSTAT_SECO_POSITION ) |
			( NVM_USER_NVMECCSTAT_FLEC << _NVMECCSTAT_FLEC_POSITION ) |
			( NVM_USER_NVMECCSTAT_ESEL << _NVMECCSTAT_ESEL_POSITION ) ;
		#ifdef DEF_BITNAME
			NVMECCSTATbits.DED = NVM_USER_NVMECCSTAT_DED;
			NVMECCSTATbits.DEDO = NVM_USER_NVMECCSTAT_DEDO;
			NVMECCSTATbits.SEC = NVM_USER_NVMECCSTAT_SEC;
			NVMECCSTATbits.SECO = NVM_USER_NVMECCSTAT_SECO;
			NVMECCSTATbits.FLEC = NVM_USER_NVMECCSTAT_FLEC;
			NVMECCSTATbits.ESEL = NVM_USER_NVMECCSTAT_ESEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* NVMECCFPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCFPTR = 
			( NVM_USER_NVMECCFPTR_FLT1LPTR << _NVMECCFPTR_FLT1LPTR_POSITION ) |
			( NVM_USER_NVMECCFPTR_FLT2LPTR << _NVMECCFPTR_FLT2LPTR_POSITION ) ;
		#ifdef DEF_BITNAME
			NVMECCFPTRbits.FLT1LPTR = NVM_USER_NVMECCFPTR_FLT1LPTR;
			NVMECCFPTRbits.FLT2LPTR = NVM_USER_NVMECCFPTR_FLT2LPTR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* NVMECCFADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCFADDR = NVM_USER_NVMECCFADDR;
	/*-----------------------------------------------------------------------*/
	/* NVMECCEADDRレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCEADDR = NVM_USER_NVMECCEADDR;
	/*-----------------------------------------------------------------------*/
	/* NVMECCEDATA0レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCEDATA0 = NVM_USER_NVMECCEDATA0;
	/*-----------------------------------------------------------------------*/
	/* NVMECCEDATA1レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCEDATA1 = NVM_USER_NVMECCEDATA1;
	/*-----------------------------------------------------------------------*/
	/* NVMECCEDATA2レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCEDATA2 = NVM_USER_NVMECCEDATA2;
	/*-----------------------------------------------------------------------*/
	/* NVMECCEDATA3レジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCEDATA3 = NVM_USER_NVMECCEDATA3;
	/*-----------------------------------------------------------------------*/
	/* NVMECCVALレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCVAL =  NVM_USER_NVMECCVAL;
	/*-----------------------------------------------------------------------*/
	/* NVMECCSYNDレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMECCSYND = NVM_USER_NVMECCSYND;
	/*-----------------------------------------------------------------------*/
	/* NVMCRCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMCRCCON = 
			( NVM_USER_NVMCRCCON_CRCEC << _NVMCRCCON_CRCEC_POSITION ) |
			( NVM_USER_NVMCRCCON_OM << _NVMCRCCON_OM_POSITION ) |
			( NVM_USER_NVMCRCCON_CRCIDL << _NVMCRCCON_CRCIDL_POSITION ) |
			( NVM_USER_NVMCRCCON_START << _NVMCRCCON_START_POSITION ) |
			( NVM_USER_NVMCRCCON_ON << _NVMCRCCON_ON_POSITION ) |
			( NVM_USER_NVMCRCCON_DELAY << _NVMCRCCON_DELAY_POSITION ) ;
		#ifdef DEF_BITNAME
			NVMCRCCONbits.CRCEC = NVM_USER_NVMCRCCON_CRCEC;
			NVMCRCCONbits.OM = NVM_USER_NVMCRCCON_OM;
			NVMCRCCONbits.CRCIDL = NVM_USER_NVMCRCCON_CRCIDL;
			NVMCRCCONbits.START = NVM_USER_NVMCRCCON_START;
			NVMCRCCONbits.ON = NVM_USER_NVMCRCCON_ON;
			NVMCRCCONbits.DELAY = NVM_USER_NVMCRCCON_DELAY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* NVMCRCSTレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMCRCST = NVM_USER_NVMCRCST;
	/*-----------------------------------------------------------------------*/
	/* NVMCRCENDレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMCRCEND =  NVM_USER_NVMCRCEND;
	/*-----------------------------------------------------------------------*/
	/* NVMCRCSEEDレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMCRCSEED = NVM_USER_NVMCRCSEED;
	/*-----------------------------------------------------------------------*/
	/* NVMCRCDATAレジスタ */
	/*-----------------------------------------------------------------------*/
		NVMCRCDATA = NVM_USER_NVMCRCDATA;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u1g_NVM_Read_Byte(_u2 u2a_Adrs , _u1 *u1a_Data,_u2 u2a_Length) 
* @brief     バイトデータを読み込みます 
* @param     u2a_Adrs：先頭アドレス
* @param     *u1a_Data：格納先バイト
* @param     u2a_Length：バイト数
* @return    0 = 失敗　,1 = 成功
* @detail 
*/
/*----------------------------------------------------------------------------*/
_u1 u1g_NVM_Read_Byte(_u2 u2a_Adrs , _u1 *u1a_Data,_u2 u2a_Length)
{
    return 0;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_NVM_Write_Byte(_u2 u2a_Adrs , _u1 u1a_Data) 
* @brief      バイトデータを書き込みます 
* @param     u2a_Adrs：先頭アドレス
* @param     u1a_Data：書き込みデータ
* @return    0 = 失敗　,1 = 成功
* @detail 
*/
/*----------------------------------------------------------------------------*/
_u1 vdg_NVM_Write_Byte(_u2 u2a_Adrs , _u1 u1a_Data)
{
    return 0;
}