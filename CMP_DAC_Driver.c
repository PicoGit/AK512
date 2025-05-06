/*----------------------------------------------------------------------------*/
/**
* @file		CMP_DAC_Driver.c
* @brief	コンパレータとDACモジュールに関するドライバ関数
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
#include "cmp_dac_user.h"
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
* @fn        vdg_CMP_DACCOM_Set_Register(void)
* @brief     CMP_DACの共通レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DACCOM_Set_Register(void)
{		
	/*-----------------------------------------------------------------------*/
	/* DACCTRL1レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL1 = 
			( CMP_USER_DACCTRL1_FCLKDIV << _DACCTRL1_FCLKDIV_POSITION ) |
			( CMP_USER_DACCTRL1_DNLADJ << _DACCTRL1_DNLADJ_POSITION ) |
			( CMP_USER_DACCTRL1_SIDL << _DACCTRL1_SIDL_POSITION ) |
			( CMP_USER_DACCTRL1_ON << _DACCTRL1_ON_POSITION ) |
			( CMP_USER_DACCTRL1_NEGINLADJ << _DACCTRL1_NEGINLADJ_POSITION ) |
			( CMP_USER_DACCTRL1_POSINLADJ << _DACCTRL1_POSINLADJ_POSITION ) |
			( CMP_USER_DACCTRL1_RREN << _DACCTRL1_RREN_POSITION ) ;
		#ifdef DEF_BITNAME
			DACCTRL1bits.FCLKDIV = CMP_USER_DACCTRL1_FCLKDIV;
			DACCTRL1bits.DNLADJ = CMP_USER_DACCTRL1_DNLADJ;
			DACCTRL1bits.SIDL = CMP_USER_DACCTRL1_SIDL;
			DACCTRL1bits.ON = CMP_USER_DACCTRL1_ON;
			DACCTRL1bits.NEGINLADJ = CMP_USER_DACCTRL1_NEGINLADJ;
			DACCTRL1bits.POSINLADJ = CMP_USER_DACCTRL1_POSINLADJ;
			DACCTRL1bits.RREN = CMP_USER_DACCTRL1_RREN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DACCTRL2レジスタ */
	/*-----------------------------------------------------------------------*/
		DACCTRL2 = 
			( CMP_USER_DACCTRL2_TMODTIME << _DACCTRL2_TMODTIME_POSITION ) |
			( CMP_USER_DACCTRL2_SSTIME << _DACCTRL2_SSTIME_POSITION ) ;
		#ifdef DEF_BITNAME
			DACCTRL2bits.TMODTIME = CMP_USER_DACCTRL2_TMODTIME;
			DACCTRL2bits.SSTIME = CMP_USER_DACCTRL2_SSTIME;
		#endif 

}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CMP_DAC1_Set_Register(void)
* @brief        CMP_DAC1レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC1_Set_Register(void)
{
#if ( PMD_CM1MD == PMD_MODULE_ENABLE )
    /*-----------------------------------------------------------------------*/
	/* DAC1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1CON = 
			( CMP_USER_DAC1CON_UPDREQ << _DAC1CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC1CON_UPDATE << _DAC1CON_UPDATE_POSITION ) |
			( CMP_USER_DAC1CON_UPDTRG << _DAC1CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC1CON_DACOEN << _DAC1CON_DACOEN_POSITION ) |
			( CMP_USER_DAC1CON_UPDTMDIS << _DAC1CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC1CON_IRQM << _DAC1CON_IRQM_POSITION ) |
			( CMP_USER_DAC1CON_DACEN << _DAC1CON_DACEN_POSITION ) |
			( CMP_USER_DAC1CON_TMCB << _DAC1CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC1CONbits.UPDREQ = CMP_USER_DAC1CON_UPDREQ;
			DAC1CONbits.UPDATE = CMP_USER_DAC1CON_UPDATE;
			DAC1CONbits.UPDTRG = CMP_USER_DAC1CON_UPDTRG;
			DAC1CONbits.DACOEN = CMP_USER_DAC1CON_DACOEN;
			DAC1CONbits.UPDTMDIS = CMP_USER_DAC1CON_UPDTMDIS;
			DAC1CONbits.IRQM = CMP_USER_DAC1CON_IRQM;
			DAC1CONbits.DACEN = CMP_USER_DAC1CON_DACEN;
			DAC1CONbits.TMCB = CMP_USER_DAC1CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC1CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1CMP = 
			( CMP_USER_DAC1CMP_INNSEL << _DAC1CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC1CMP_INPSEL << _DAC1CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC1CMP_CMPPOL << _DAC1CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC1CMP_CMPSTAT << _DAC1CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC1CMP_FLTREN << _DAC1CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC1CMP_CBE << _DAC1CMP_CBE_POSITION ) |
			( CMP_USER_DAC1CMP_HYSSEL << _DAC1CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC1CMP_HYSPOL << _DAC1CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC1CMPbits.INNSEL = CMP_USER_DAC1CMP_INNSEL;
			DAC1CMPbits.INPSEL = CMP_USER_DAC1CMP_INPSEL;
			DAC1CMPbits.CMPPOL = CMP_USER_DAC1CMP_CMPPOL;
			DAC1CMPbits.CMPSTAT = CMP_USER_DAC1CMP_CMPSTAT;
			DAC1CMPbits.FLTREN = CMP_USER_DAC1CMP_FLTREN;
			DAC1CMPbits.CBE = CMP_USER_DAC1CMP_CBE;
			DAC1CMPbits.HYSSEL = CMP_USER_DAC1CMP_HYSSEL;
			DAC1CMPbits.HYSPOL = CMP_USER_DAC1CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC1DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1DAT = 
			( CMP_USER_DAC1DAT_DACLOW << _DAC1DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC1DAT_DACDAT << _DAC1DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC1DATbits.DACLOW = CMP_USER_DAC1DAT_DACLOW;
			DAC1DATbits.DACDAT = CMP_USER_DAC1DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPCON = 
			( CMP_USER_DAC1SLPCON_SLPSTRT << _DAC1SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC1SLPCON_SLPSTOPB << _DAC1SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC1SLPCON_SLPSTOPA << _DAC1SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC1SLPCON_HCFSEL << _DAC1SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC1SLPCON_FFSEN << _DAC1SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC1SLPCON_PSE << _DAC1SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC1SLPCON_TWME << _DAC1SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC1SLPCON_HME << _DAC1SLPCON_HME_POSITION ) |
			( CMP_USER_DAC1SLPCON_SLOPEN << _DAC1SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC1SLPCONbits.SLPSTRT = CMP_USER_DAC1SLPCON_SLPSTRT;
			DAC1SLPCONbits.SLPSTOPB = CMP_USER_DAC1SLPCON_SLPSTOPB;
			DAC1SLPCONbits.SLPSTOPA = CMP_USER_DAC1SLPCON_SLPSTOPA;
			DAC1SLPCONbits.HCFSEL = CMP_USER_DAC1SLPCON_HCFSEL;
			DAC1SLPCONbits.FFSEN = CMP_USER_DAC1SLPCON_FFSEN;
			DAC1SLPCONbits.PSE = CMP_USER_DAC1SLPCON_PSE;
			DAC1SLPCONbits.TWME = CMP_USER_DAC1SLPCON_TWME;
			DAC1SLPCONbits.HME = CMP_USER_DAC1SLPCON_HME;
			DAC1SLPCONbits.SLOPEN = CMP_USER_DAC1SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC1SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC1SLPDAT = CMP_USER_DAC1SLPDAT;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC2_Set_Register(void)
* @brief        CMP_DAC2レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC2_Set_Register(void)
{
#if ( PMD_CM2MD == PMD_MODULE_ENABLE )	
   /*-----------------------------------------------------------------------*/
	/* DAC2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2CON = 
			( CMP_USER_DAC2CON_UPDREQ << _DAC2CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC2CON_UPDATE << _DAC2CON_UPDATE_POSITION ) |
			( CMP_USER_DAC2CON_UPDTRG << _DAC2CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC2CON_DACOEN << _DAC2CON_DACOEN_POSITION ) |
			( CMP_USER_DAC2CON_UPDTMDIS << _DAC2CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC2CON_IRQM << _DAC2CON_IRQM_POSITION ) |
			( CMP_USER_DAC2CON_DACEN << _DAC2CON_DACEN_POSITION ) |
			( CMP_USER_DAC2CON_TMCB << _DAC2CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC2CONbits.UPDREQ = CMP_USER_DAC2CON_UPDREQ;
			DAC2CONbits.UPDATE = CMP_USER_DAC2CON_UPDATE;
			DAC2CONbits.UPDTRG = CMP_USER_DAC2CON_UPDTRG;
			DAC2CONbits.DACOEN = CMP_USER_DAC2CON_DACOEN;
			DAC2CONbits.UPDTMDIS = CMP_USER_DAC2CON_UPDTMDIS;
			DAC2CONbits.IRQM = CMP_USER_DAC2CON_IRQM;
			DAC2CONbits.DACEN = CMP_USER_DAC2CON_DACEN;
			DAC2CONbits.TMCB = CMP_USER_DAC2CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC2CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2CMP = 
			( CMP_USER_DAC2CMP_INNSEL << _DAC2CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC2CMP_INPSEL << _DAC2CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC2CMP_CMPPOL << _DAC2CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC2CMP_CMPSTAT << _DAC2CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC2CMP_FLTREN << _DAC2CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC2CMP_CBE << _DAC2CMP_CBE_POSITION ) |
			( CMP_USER_DAC2CMP_HYSSEL << _DAC2CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC2CMP_HYSPOL << _DAC2CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC2CMPbits.INNSEL = CMP_USER_DAC2CMP_INNSEL;
			DAC2CMPbits.INPSEL = CMP_USER_DAC2CMP_INPSEL;
			DAC2CMPbits.CMPPOL = CMP_USER_DAC2CMP_CMPPOL;
			DAC2CMPbits.CMPSTAT = CMP_USER_DAC2CMP_CMPSTAT;
			DAC2CMPbits.FLTREN = CMP_USER_DAC2CMP_FLTREN;
			DAC2CMPbits.CBE = CMP_USER_DAC2CMP_CBE;
			DAC2CMPbits.HYSSEL = CMP_USER_DAC2CMP_HYSSEL;
			DAC2CMPbits.HYSPOL = CMP_USER_DAC2CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC2DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2DAT = 
			( CMP_USER_DAC2DAT_DACLOW << _DAC2DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC2DAT_DACDAT << _DAC2DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC2DATbits.DACLOW = CMP_USER_DAC2DAT_DACLOW;
			DAC2DATbits.DACDAT = CMP_USER_DAC2DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC2SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2SLPCON = 
			( CMP_USER_DAC2SLPCON_SLPSTRT << _DAC2SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC2SLPCON_SLPSTOPB << _DAC2SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC2SLPCON_SLPSTOPA << _DAC2SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC2SLPCON_HCFSEL << _DAC2SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC2SLPCON_FFSEN << _DAC2SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC2SLPCON_PSE << _DAC2SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC2SLPCON_TWME << _DAC2SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC2SLPCON_HME << _DAC2SLPCON_HME_POSITION ) |
			( CMP_USER_DAC2SLPCON_SLOPEN << _DAC2SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC2SLPCONbits.SLPSTRT = CMP_USER_DAC2SLPCON_SLPSTRT;
			DAC2SLPCONbits.SLPSTOPB = CMP_USER_DAC2SLPCON_SLPSTOPB;
			DAC2SLPCONbits.SLPSTOPA = CMP_USER_DAC2SLPCON_SLPSTOPA;
			DAC2SLPCONbits.HCFSEL = CMP_USER_DAC2SLPCON_HCFSEL;
			DAC2SLPCONbits.FFSEN = CMP_USER_DAC2SLPCON_FFSEN;
			DAC2SLPCONbits.PSE = CMP_USER_DAC2SLPCON_PSE;
			DAC2SLPCONbits.TWME = CMP_USER_DAC2SLPCON_TWME;
			DAC2SLPCONbits.HME = CMP_USER_DAC2SLPCON_HME;
			DAC2SLPCONbits.SLOPEN = CMP_USER_DAC2SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC2SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC2SLPDAT = CMP_USER_DAC2SLPDAT;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC3_Set_Register(void)
* @brief        CMP_DAC3レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC3_Set_Register(void)
{
#if ( PMD_CM3MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* DAC3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3CON = 
			( CMP_USER_DAC3CON_UPDREQ << _DAC3CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC3CON_UPDATE << _DAC3CON_UPDATE_POSITION ) |
			( CMP_USER_DAC3CON_UPDTRG << _DAC3CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC3CON_DACOEN << _DAC3CON_DACOEN_POSITION ) |
			( CMP_USER_DAC3CON_UPDTMDIS << _DAC3CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC3CON_IRQM << _DAC3CON_IRQM_POSITION ) |
			( CMP_USER_DAC3CON_DACEN << _DAC3CON_DACEN_POSITION ) |
			( CMP_USER_DAC3CON_TMCB << _DAC3CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC3CONbits.UPDREQ = CMP_USER_DAC3CON_UPDREQ;
			DAC3CONbits.UPDATE = CMP_USER_DAC3CON_UPDATE;
			DAC3CONbits.UPDTRG = CMP_USER_DAC3CON_UPDTRG;
			DAC3CONbits.DACOEN = CMP_USER_DAC3CON_DACOEN;
			DAC3CONbits.UPDTMDIS = CMP_USER_DAC3CON_UPDTMDIS;
			DAC3CONbits.IRQM = CMP_USER_DAC3CON_IRQM;
			DAC3CONbits.DACEN = CMP_USER_DAC3CON_DACEN;
			DAC3CONbits.TMCB = CMP_USER_DAC3CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC3CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3CMP = 
			( CMP_USER_DAC3CMP_INNSEL << _DAC3CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC3CMP_INPSEL << _DAC3CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC3CMP_CMPPOL << _DAC3CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC3CMP_CMPSTAT << _DAC3CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC3CMP_FLTREN << _DAC3CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC3CMP_CBE << _DAC3CMP_CBE_POSITION ) |
			( CMP_USER_DAC3CMP_HYSSEL << _DAC3CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC3CMP_HYSPOL << _DAC3CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC3CMPbits.INNSEL = CMP_USER_DAC3CMP_INNSEL;
			DAC3CMPbits.INPSEL = CMP_USER_DAC3CMP_INPSEL;
			DAC3CMPbits.CMPPOL = CMP_USER_DAC3CMP_CMPPOL;
			DAC3CMPbits.CMPSTAT = CMP_USER_DAC3CMP_CMPSTAT;
			DAC3CMPbits.FLTREN = CMP_USER_DAC3CMP_FLTREN;
			DAC3CMPbits.CBE = CMP_USER_DAC3CMP_CBE;
			DAC3CMPbits.HYSSEL = CMP_USER_DAC3CMP_HYSSEL;
			DAC3CMPbits.HYSPOL = CMP_USER_DAC3CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC3DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3DAT = 
			( CMP_USER_DAC3DAT_DACLOW << _DAC3DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC3DAT_DACDAT << _DAC3DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC3DATbits.DACLOW = CMP_USER_DAC3DAT_DACLOW;
			DAC3DATbits.DACDAT = CMP_USER_DAC3DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC3SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3SLPCON = 
			( CMP_USER_DAC3SLPCON_SLPSTRT << _DAC3SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC3SLPCON_SLPSTOPB << _DAC3SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC3SLPCON_SLPSTOPA << _DAC3SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC3SLPCON_HCFSEL << _DAC3SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC3SLPCON_FFSEN << _DAC3SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC3SLPCON_PSE << _DAC3SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC3SLPCON_TWME << _DAC3SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC3SLPCON_HME << _DAC3SLPCON_HME_POSITION ) |
			( CMP_USER_DAC3SLPCON_SLOPEN << _DAC3SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC3SLPCONbits.SLPSTRT = CMP_USER_DAC3SLPCON_SLPSTRT;
			DAC3SLPCONbits.SLPSTOPB = CMP_USER_DAC3SLPCON_SLPSTOPB;
			DAC3SLPCONbits.SLPSTOPA = CMP_USER_DAC3SLPCON_SLPSTOPA;
			DAC3SLPCONbits.HCFSEL = CMP_USER_DAC3SLPCON_HCFSEL;
			DAC3SLPCONbits.FFSEN = CMP_USER_DAC3SLPCON_FFSEN;
			DAC3SLPCONbits.PSE = CMP_USER_DAC3SLPCON_PSE;
			DAC3SLPCONbits.TWME = CMP_USER_DAC3SLPCON_TWME;
			DAC3SLPCONbits.HME = CMP_USER_DAC3SLPCON_HME;
			DAC3SLPCONbits.SLOPEN = CMP_USER_DAC3SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC3SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC3SLPDAT =  CMP_USER_DAC3SLPDAT;

#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC4_Set_Register(void)
* @brief        CMP_DAC4レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC4_Set_Register(void)
{
#if ( PMD_CM4MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* DAC4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC4CON = 
			( CMP_USER_DAC4CON_UPDREQ << _DAC4CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC4CON_UPDATE << _DAC4CON_UPDATE_POSITION ) |
			( CMP_USER_DAC4CON_UPDTRG << _DAC4CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC4CON_DACOEN << _DAC4CON_DACOEN_POSITION ) |
			( CMP_USER_DAC4CON_UPDTMDIS << _DAC4CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC4CON_IRQM << _DAC4CON_IRQM_POSITION ) |
			( CMP_USER_DAC4CON_DACEN << _DAC4CON_DACEN_POSITION ) |
			( CMP_USER_DAC4CON_TMCB << _DAC4CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC4CONbits.UPDREQ = CMP_USER_DAC4CON_UPDREQ;
			DAC4CONbits.UPDATE = CMP_USER_DAC4CON_UPDATE;
			DAC4CONbits.UPDTRG = CMP_USER_DAC4CON_UPDTRG;
			DAC4CONbits.DACOEN = CMP_USER_DAC4CON_DACOEN;
			DAC4CONbits.UPDTMDIS = CMP_USER_DAC4CON_UPDTMDIS;
			DAC4CONbits.IRQM = CMP_USER_DAC4CON_IRQM;
			DAC4CONbits.DACEN = CMP_USER_DAC4CON_DACEN;
			DAC4CONbits.TMCB = CMP_USER_DAC4CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC4CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC4CMP = 
			( CMP_USER_DAC4CMP_INNSEL << _DAC4CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC4CMP_INPSEL << _DAC4CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC4CMP_CMPPOL << _DAC4CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC4CMP_CMPSTAT << _DAC4CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC4CMP_FLTREN << _DAC4CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC4CMP_CBE << _DAC4CMP_CBE_POSITION ) |
			( CMP_USER_DAC4CMP_HYSSEL << _DAC4CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC4CMP_HYSPOL << _DAC4CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC4CMPbits.INNSEL = CMP_USER_DAC4CMP_INNSEL;
			DAC4CMPbits.INPSEL = CMP_USER_DAC4CMP_INPSEL;
			DAC4CMPbits.CMPPOL = CMP_USER_DAC4CMP_CMPPOL;
			DAC4CMPbits.CMPSTAT = CMP_USER_DAC4CMP_CMPSTAT;
			DAC4CMPbits.FLTREN = CMP_USER_DAC4CMP_FLTREN;
			DAC4CMPbits.CBE = CMP_USER_DAC4CMP_CBE;
			DAC4CMPbits.HYSSEL = CMP_USER_DAC4CMP_HYSSEL;
			DAC4CMPbits.HYSPOL = CMP_USER_DAC4CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC4DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC4DAT = 
			( CMP_USER_DAC4DAT_DACLOW << _DAC4DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC4DAT_DACDAT << _DAC4DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC4DATbits.DACLOW = CMP_USER_DAC4DAT_DACLOW;
			DAC4DATbits.DACDAT = CMP_USER_DAC4DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC4SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC4SLPCON = 
			( CMP_USER_DAC4SLPCON_SLPSTRT << _DAC4SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC4SLPCON_SLPSTOPB << _DAC4SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC4SLPCON_SLPSTOPA << _DAC4SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC4SLPCON_HCFSEL << _DAC4SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC4SLPCON_FFSEN << _DAC4SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC4SLPCON_PSE << _DAC4SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC4SLPCON_TWME << _DAC4SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC4SLPCON_HME << _DAC4SLPCON_HME_POSITION ) |
			( CMP_USER_DAC4SLPCON_SLOPEN << _DAC4SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC4SLPCONbits.SLPSTRT = CMP_USER_DAC4SLPCON_SLPSTRT;
			DAC4SLPCONbits.SLPSTOPB = CMP_USER_DAC4SLPCON_SLPSTOPB;
			DAC4SLPCONbits.SLPSTOPA = CMP_USER_DAC4SLPCON_SLPSTOPA;
			DAC4SLPCONbits.HCFSEL = CMP_USER_DAC4SLPCON_HCFSEL;
			DAC4SLPCONbits.FFSEN = CMP_USER_DAC4SLPCON_FFSEN;
			DAC4SLPCONbits.PSE = CMP_USER_DAC4SLPCON_PSE;
			DAC4SLPCONbits.TWME = CMP_USER_DAC4SLPCON_TWME;
			DAC4SLPCONbits.HME = CMP_USER_DAC4SLPCON_HME;
			DAC4SLPCONbits.SLOPEN = CMP_USER_DAC4SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC4SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC4SLPDAT = CMP_USER_DAC4SLPDAT;

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC5_Set_Register(void)
* @brief        CMP_DAC5レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC5_Set_Register(void)
{
#if ( PMD_CM5MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* DAC5CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC5CON = 
			( CMP_USER_DAC5CON_UPDREQ << _DAC5CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC5CON_UPDATE << _DAC5CON_UPDATE_POSITION ) |
			( CMP_USER_DAC5CON_UPDTRG << _DAC5CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC5CON_DACOEN << _DAC5CON_DACOEN_POSITION ) |
			( CMP_USER_DAC5CON_UPDTMDIS << _DAC5CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC5CON_IRQM << _DAC5CON_IRQM_POSITION ) |
			( CMP_USER_DAC5CON_DACEN << _DAC5CON_DACEN_POSITION ) |
			( CMP_USER_DAC5CON_TMCB << _DAC5CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC5CONbits.UPDREQ = CMP_USER_DAC5CON_UPDREQ;
			DAC5CONbits.UPDATE = CMP_USER_DAC5CON_UPDATE;
			DAC5CONbits.UPDTRG = CMP_USER_DAC5CON_UPDTRG;
			DAC5CONbits.DACOEN = CMP_USER_DAC5CON_DACOEN;
			DAC5CONbits.UPDTMDIS = CMP_USER_DAC5CON_UPDTMDIS;
			DAC5CONbits.IRQM = CMP_USER_DAC5CON_IRQM;
			DAC5CONbits.DACEN = CMP_USER_DAC5CON_DACEN;
			DAC5CONbits.TMCB = CMP_USER_DAC5CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC5CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC5CMP = 
			( CMP_USER_DAC5CMP_INNSEL << _DAC5CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC5CMP_INPSEL << _DAC5CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC5CMP_CMPPOL << _DAC5CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC5CMP_CMPSTAT << _DAC5CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC5CMP_FLTREN << _DAC5CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC5CMP_CBE << _DAC5CMP_CBE_POSITION ) |
			( CMP_USER_DAC5CMP_HYSSEL << _DAC5CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC5CMP_HYSPOL << _DAC5CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC5CMPbits.INNSEL = CMP_USER_DAC5CMP_INNSEL;
			DAC5CMPbits.INPSEL = CMP_USER_DAC5CMP_INPSEL;
			DAC5CMPbits.CMPPOL = CMP_USER_DAC5CMP_CMPPOL;
			DAC5CMPbits.CMPSTAT = CMP_USER_DAC5CMP_CMPSTAT;
			DAC5CMPbits.FLTREN = CMP_USER_DAC5CMP_FLTREN;
			DAC5CMPbits.CBE = CMP_USER_DAC5CMP_CBE;
			DAC5CMPbits.HYSSEL = CMP_USER_DAC5CMP_HYSSEL;
			DAC5CMPbits.HYSPOL = CMP_USER_DAC5CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC5DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC5DAT = 
			( CMP_USER_DAC5DAT_DACLOW << _DAC5DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC5DAT_DACDAT << _DAC5DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC5DATbits.DACLOW = CMP_USER_DAC5DAT_DACLOW;
			DAC5DATbits.DACDAT = CMP_USER_DAC5DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC5SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC5SLPCON = 
			( CMP_USER_DAC5SLPCON_SLPSTRT << _DAC5SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC5SLPCON_SLPSTOPB << _DAC5SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC5SLPCON_SLPSTOPA << _DAC5SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC5SLPCON_HCFSEL << _DAC5SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC5SLPCON_FFSEN << _DAC5SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC5SLPCON_PSE << _DAC5SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC5SLPCON_TWME << _DAC5SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC5SLPCON_HME << _DAC5SLPCON_HME_POSITION ) |
			( CMP_USER_DAC5SLPCON_SLOPEN << _DAC5SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC5SLPCONbits.SLPSTRT = CMP_USER_DAC5SLPCON_SLPSTRT;
			DAC5SLPCONbits.SLPSTOPB = CMP_USER_DAC5SLPCON_SLPSTOPB;
			DAC5SLPCONbits.SLPSTOPA = CMP_USER_DAC5SLPCON_SLPSTOPA;
			DAC5SLPCONbits.HCFSEL = CMP_USER_DAC5SLPCON_HCFSEL;
			DAC5SLPCONbits.FFSEN = CMP_USER_DAC5SLPCON_FFSEN;
			DAC5SLPCONbits.PSE = CMP_USER_DAC5SLPCON_PSE;
			DAC5SLPCONbits.TWME = CMP_USER_DAC5SLPCON_TWME;
			DAC5SLPCONbits.HME = CMP_USER_DAC5SLPCON_HME;
			DAC5SLPCONbits.SLOPEN = CMP_USER_DAC5SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC5SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC5SLPDAT = CMP_USER_DAC5SLPDAT;

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC6_Set_Register(void)
* @brief        CMP_DAC6レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC6_Set_Register(void)
{
#if ( PMD_CM6MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* DAC6CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC6CON = 
			( CMP_USER_DAC6CON_UPDREQ << _DAC6CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC6CON_UPDATE << _DAC6CON_UPDATE_POSITION ) |
			( CMP_USER_DAC6CON_UPDTRG << _DAC6CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC6CON_DACOEN << _DAC6CON_DACOEN_POSITION ) |
			( CMP_USER_DAC6CON_UPDTMDIS << _DAC6CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC6CON_IRQM << _DAC6CON_IRQM_POSITION ) |
			( CMP_USER_DAC6CON_DACEN << _DAC6CON_DACEN_POSITION ) |
			( CMP_USER_DAC6CON_TMCB << _DAC6CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC6CONbits.UPDREQ = CMP_USER_DAC6CON_UPDREQ;
			DAC6CONbits.UPDATE = CMP_USER_DAC6CON_UPDATE;
			DAC6CONbits.UPDTRG = CMP_USER_DAC6CON_UPDTRG;
			DAC6CONbits.DACOEN = CMP_USER_DAC6CON_DACOEN;
			DAC6CONbits.UPDTMDIS = CMP_USER_DAC6CON_UPDTMDIS;
			DAC6CONbits.IRQM = CMP_USER_DAC6CON_IRQM;
			DAC6CONbits.DACEN = CMP_USER_DAC6CON_DACEN;
			DAC6CONbits.TMCB = CMP_USER_DAC6CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC6CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC6CMP = 
			( CMP_USER_DAC6CMP_INNSEL << _DAC6CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC6CMP_INPSEL << _DAC6CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC6CMP_CMPPOL << _DAC6CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC6CMP_CMPSTAT << _DAC6CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC6CMP_FLTREN << _DAC6CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC6CMP_CBE << _DAC6CMP_CBE_POSITION ) |
			( CMP_USER_DAC6CMP_HYSSEL << _DAC6CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC6CMP_HYSPOL << _DAC6CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC6CMPbits.INNSEL = CMP_USER_DAC6CMP_INNSEL;
			DAC6CMPbits.INPSEL = CMP_USER_DAC6CMP_INPSEL;
			DAC6CMPbits.CMPPOL = CMP_USER_DAC6CMP_CMPPOL;
			DAC6CMPbits.CMPSTAT = CMP_USER_DAC6CMP_CMPSTAT;
			DAC6CMPbits.FLTREN = CMP_USER_DAC6CMP_FLTREN;
			DAC6CMPbits.CBE = CMP_USER_DAC6CMP_CBE;
			DAC6CMPbits.HYSSEL = CMP_USER_DAC6CMP_HYSSEL;
			DAC6CMPbits.HYSPOL = CMP_USER_DAC6CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC6DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC6DAT = 
			( CMP_USER_DAC6DAT_DACLOW << _DAC6DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC6DAT_DACDAT << _DAC6DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC6DATbits.DACLOW = CMP_USER_DAC6DAT_DACLOW;
			DAC6DATbits.DACDAT = CMP_USER_DAC6DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC6SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC6SLPCON = 
			( CMP_USER_DAC6SLPCON_SLPSTRT << _DAC6SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC6SLPCON_SLPSTOPB << _DAC6SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC6SLPCON_SLPSTOPA << _DAC6SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC6SLPCON_HCFSEL << _DAC6SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC6SLPCON_FFSEN << _DAC6SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC6SLPCON_PSE << _DAC6SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC6SLPCON_TWME << _DAC6SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC6SLPCON_HME << _DAC6SLPCON_HME_POSITION ) |
			( CMP_USER_DAC6SLPCON_SLOPEN << _DAC6SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC6SLPCONbits.SLPSTRT = CMP_USER_DAC6SLPCON_SLPSTRT;
			DAC6SLPCONbits.SLPSTOPB = CMP_USER_DAC6SLPCON_SLPSTOPB;
			DAC6SLPCONbits.SLPSTOPA = CMP_USER_DAC6SLPCON_SLPSTOPA;
			DAC6SLPCONbits.HCFSEL = CMP_USER_DAC6SLPCON_HCFSEL;
			DAC6SLPCONbits.FFSEN = CMP_USER_DAC6SLPCON_FFSEN;
			DAC6SLPCONbits.PSE = CMP_USER_DAC6SLPCON_PSE;
			DAC6SLPCONbits.TWME = CMP_USER_DAC6SLPCON_TWME;
			DAC6SLPCONbits.HME = CMP_USER_DAC6SLPCON_HME;
			DAC6SLPCONbits.SLOPEN = CMP_USER_DAC6SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC6SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC6SLPDAT = CMP_USER_DAC6SLPDAT;

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC7_Set_Register(void)
* @brief        CMP_DAC7レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC7_Set_Register(void)
{
#if ( PMD_CM7MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* DAC7CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC7CON = 
			( CMP_USER_DAC7CON_UPDREQ << _DAC7CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC7CON_UPDATE << _DAC7CON_UPDATE_POSITION ) |
			( CMP_USER_DAC7CON_UPDTRG << _DAC7CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC7CON_DACOEN << _DAC7CON_DACOEN_POSITION ) |
			( CMP_USER_DAC7CON_UPDTMDIS << _DAC7CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC7CON_IRQM << _DAC7CON_IRQM_POSITION ) |
			( CMP_USER_DAC7CON_DACEN << _DAC7CON_DACEN_POSITION ) |
			( CMP_USER_DAC7CON_TMCB << _DAC7CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC7CONbits.UPDREQ = CMP_USER_DAC7CON_UPDREQ;
			DAC7CONbits.UPDATE = CMP_USER_DAC7CON_UPDATE;
			DAC7CONbits.UPDTRG = CMP_USER_DAC7CON_UPDTRG;
			DAC7CONbits.DACOEN = CMP_USER_DAC7CON_DACOEN;
			DAC7CONbits.UPDTMDIS = CMP_USER_DAC7CON_UPDTMDIS;
			DAC7CONbits.IRQM = CMP_USER_DAC7CON_IRQM;
			DAC7CONbits.DACEN = CMP_USER_DAC7CON_DACEN;
			DAC7CONbits.TMCB = CMP_USER_DAC7CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC7CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC7CMP = 
			( CMP_USER_DAC7CMP_INNSEL << _DAC7CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC7CMP_INPSEL << _DAC7CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC7CMP_CMPPOL << _DAC7CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC7CMP_CMPSTAT << _DAC7CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC7CMP_FLTREN << _DAC7CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC7CMP_CBE << _DAC7CMP_CBE_POSITION ) |
			( CMP_USER_DAC7CMP_HYSSEL << _DAC7CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC7CMP_HYSPOL << _DAC7CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC7CMPbits.INNSEL = CMP_USER_DAC7CMP_INNSEL;
			DAC7CMPbits.INPSEL = CMP_USER_DAC7CMP_INPSEL;
			DAC7CMPbits.CMPPOL = CMP_USER_DAC7CMP_CMPPOL;
			DAC7CMPbits.CMPSTAT = CMP_USER_DAC7CMP_CMPSTAT;
			DAC7CMPbits.FLTREN = CMP_USER_DAC7CMP_FLTREN;
			DAC7CMPbits.CBE = CMP_USER_DAC7CMP_CBE;
			DAC7CMPbits.HYSSEL = CMP_USER_DAC7CMP_HYSSEL;
			DAC7CMPbits.HYSPOL = CMP_USER_DAC7CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC7DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC7DAT = 
			( CMP_USER_DAC7DAT_DACLOW << _DAC7DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC7DAT_DACDAT << _DAC7DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC7DATbits.DACLOW = CMP_USER_DAC7DAT_DACLOW;
			DAC7DATbits.DACDAT = CMP_USER_DAC7DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC7SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC7SLPCON = 
			( CMP_USER_DAC7SLPCON_SLPSTRT << _DAC7SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC7SLPCON_SLPSTOPB << _DAC7SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC7SLPCON_SLPSTOPA << _DAC7SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC7SLPCON_HCFSEL << _DAC7SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC7SLPCON_FFSEN << _DAC7SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC7SLPCON_PSE << _DAC7SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC7SLPCON_TWME << _DAC7SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC7SLPCON_HME << _DAC7SLPCON_HME_POSITION ) |
			( CMP_USER_DAC7SLPCON_SLOPEN << _DAC7SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC7SLPCONbits.SLPSTRT = CMP_USER_DAC7SLPCON_SLPSTRT;
			DAC7SLPCONbits.SLPSTOPB = CMP_USER_DAC7SLPCON_SLPSTOPB;
			DAC7SLPCONbits.SLPSTOPA = CMP_USER_DAC7SLPCON_SLPSTOPA;
			DAC7SLPCONbits.HCFSEL = CMP_USER_DAC7SLPCON_HCFSEL;
			DAC7SLPCONbits.FFSEN = CMP_USER_DAC7SLPCON_FFSEN;
			DAC7SLPCONbits.PSE = CMP_USER_DAC7SLPCON_PSE;
			DAC7SLPCONbits.TWME = CMP_USER_DAC7SLPCON_TWME;
			DAC7SLPCONbits.HME = CMP_USER_DAC7SLPCON_HME;
			DAC7SLPCONbits.SLOPEN = CMP_USER_DAC7SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC7SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC7SLPDAT =  CMP_USER_DAC7SLPDAT;

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_CMP_DAC8_Set_Register(void)
* @brief        CMP_DAC8レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC8_Set_Register(void)
{
#if ( PMD_CM8MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* DAC8CONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC8CON = 
			( CMP_USER_DAC8CON_UPDREQ << _DAC8CON_UPDREQ_POSITION ) |
			( CMP_USER_DAC8CON_UPDATE << _DAC8CON_UPDATE_POSITION ) |
			( CMP_USER_DAC8CON_UPDTRG << _DAC8CON_UPDTRG_POSITION ) |
			( CMP_USER_DAC8CON_DACOEN << _DAC8CON_DACOEN_POSITION ) |
			( CMP_USER_DAC8CON_UPDTMDIS << _DAC8CON_UPDTMDIS_POSITION ) |
			( CMP_USER_DAC8CON_IRQM << _DAC8CON_IRQM_POSITION ) |
			( CMP_USER_DAC8CON_DACEN << _DAC8CON_DACEN_POSITION ) |
			( CMP_USER_DAC8CON_TMCB << _DAC8CON_TMCB_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC8CONbits.UPDREQ = CMP_USER_DAC8CON_UPDREQ;
			DAC8CONbits.UPDATE = CMP_USER_DAC8CON_UPDATE;
			DAC8CONbits.UPDTRG = CMP_USER_DAC8CON_UPDTRG;
			DAC8CONbits.DACOEN = CMP_USER_DAC8CON_DACOEN;
			DAC8CONbits.UPDTMDIS = CMP_USER_DAC8CON_UPDTMDIS;
			DAC8CONbits.IRQM = CMP_USER_DAC8CON_IRQM;
			DAC8CONbits.DACEN = CMP_USER_DAC8CON_DACEN;
			DAC8CONbits.TMCB = CMP_USER_DAC8CON_TMCB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC8CMPレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC8CMP = 
			( CMP_USER_DAC8CMP_INNSEL << _DAC8CMP_INNSEL_POSITION ) |
			( CMP_USER_DAC8CMP_INPSEL << _DAC8CMP_INPSEL_POSITION ) |
			( CMP_USER_DAC8CMP_CMPPOL << _DAC8CMP_CMPPOL_POSITION ) |
			( CMP_USER_DAC8CMP_CMPSTAT << _DAC8CMP_CMPSTAT_POSITION ) |
			( CMP_USER_DAC8CMP_FLTREN << _DAC8CMP_FLTREN_POSITION ) |
			( CMP_USER_DAC8CMP_CBE << _DAC8CMP_CBE_POSITION ) |
			( CMP_USER_DAC8CMP_HYSSEL << _DAC8CMP_HYSSEL_POSITION ) |
			( CMP_USER_DAC8CMP_HYSPOL << _DAC8CMP_HYSPOL_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC8CMPbits.INNSEL = CMP_USER_DAC8CMP_INNSEL;
			DAC8CMPbits.INPSEL = CMP_USER_DAC8CMP_INPSEL;
			DAC8CMPbits.CMPPOL = CMP_USER_DAC8CMP_CMPPOL;
			DAC8CMPbits.CMPSTAT = CMP_USER_DAC8CMP_CMPSTAT;
			DAC8CMPbits.FLTREN = CMP_USER_DAC8CMP_FLTREN;
			DAC8CMPbits.CBE = CMP_USER_DAC8CMP_CBE;
			DAC8CMPbits.HYSSEL = CMP_USER_DAC8CMP_HYSSEL;
			DAC8CMPbits.HYSPOL = CMP_USER_DAC8CMP_HYSPOL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC8DATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC8DAT = 
			( CMP_USER_DAC8DAT_DACLOW << _DAC8DAT_DACLOW_POSITION ) |
			( CMP_USER_DAC8DAT_DACDAT << _DAC8DAT_DACDAT_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC8DATbits.DACLOW = CMP_USER_DAC8DAT_DACLOW;
			DAC8DATbits.DACDAT = CMP_USER_DAC8DAT_DACDAT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC8SLPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC8SLPCON = 
			( CMP_USER_DAC8SLPCON_SLPSTRT << _DAC8SLPCON_SLPSTRT_POSITION ) |
			( CMP_USER_DAC8SLPCON_SLPSTOPB << _DAC8SLPCON_SLPSTOPB_POSITION ) |
			( CMP_USER_DAC8SLPCON_SLPSTOPA << _DAC8SLPCON_SLPSTOPA_POSITION ) |
			( CMP_USER_DAC8SLPCON_HCFSEL << _DAC8SLPCON_HCFSEL_POSITION ) |
			( CMP_USER_DAC8SLPCON_FFSEN << _DAC8SLPCON_FFSEN_POSITION ) |
			( CMP_USER_DAC8SLPCON_PSE << _DAC8SLPCON_PSE_POSITION ) |
			( CMP_USER_DAC8SLPCON_TWME << _DAC8SLPCON_TWME_POSITION ) |
			( CMP_USER_DAC8SLPCON_HME << _DAC8SLPCON_HME_POSITION ) |
			( CMP_USER_DAC8SLPCON_SLOPEN << _DAC8SLPCON_SLOPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DAC8SLPCONbits.SLPSTRT = CMP_USER_DAC8SLPCON_SLPSTRT;
			DAC8SLPCONbits.SLPSTOPB = CMP_USER_DAC8SLPCON_SLPSTOPB;
			DAC8SLPCONbits.SLPSTOPA = CMP_USER_DAC8SLPCON_SLPSTOPA;
			DAC8SLPCONbits.HCFSEL = CMP_USER_DAC8SLPCON_HCFSEL;
			DAC8SLPCONbits.FFSEN = CMP_USER_DAC8SLPCON_FFSEN;
			DAC8SLPCONbits.PSE = CMP_USER_DAC8SLPCON_PSE;
			DAC8SLPCONbits.TWME = CMP_USER_DAC8SLPCON_TWME;
			DAC8SLPCONbits.HME = CMP_USER_DAC8SLPCON_HME;
			DAC8SLPCONbits.SLOPEN = CMP_USER_DAC8SLPCON_SLOPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DAC8SLPDATレジスタ */
	/*-----------------------------------------------------------------------*/
		DAC8SLPDAT = CMP_USER_DAC8SLPDAT;

#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CMP_DAC_Set_Register(void)
* @brief     全てのCMP_DACレジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CMP_DAC_Set_Register(void)
{
#if (( PMD_CM1MD == PMD_MODULE_ENABLE ) || ( PMD_CM2MD == PMD_MODULE_ENABLE ) || ( PMD_CM3MD == PMD_MODULE_ENABLE ) || ( PMD_CM4MD == PMD_MODULE_ENABLE ) || ( PMD_CM5MD == PMD_MODULE_ENABLE ) || ( PMD_CM6MD == PMD_MODULE_ENABLE ) || ( PMD_CM7MD == PMD_MODULE_ENABLE ) || ( PMD_CM8MD == PMD_MODULE_ENABLE ))
    vdg_CMP_DACCOM_Set_Register();
#endif
#if ( PMD_CM1MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC1_Set_Register();
#endif
#if ( PMD_CM2MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC2_Set_Register();
#endif
#if ( PMD_CM3MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC3_Set_Register();
#endif
#if ( PMD_CM4MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC4_Set_Register();
#endif
#if ( PMD_CM5MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC5_Set_Register();
#endif
#if ( PMD_CM6MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC6_Set_Register();
#endif
#if ( PMD_CM7MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC7_Set_Register();
#endif
#if ( PMD_CM8MD == PMD_MODULE_ENABLE )
    vdg_CMP_DAC8_Set_Register();
#endif
}