/*----------------------------------------------------------------------------*/
/**
* @file		CCP_Driver.c
* @brief	CCPモジュールに関するドライバ関数
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
#include "ccp_user.h"
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
* @fn        vdg_CCP1_Set_Register(void)
* @brief     CCP1レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP1_Set_Register(void)
{
#if ( PMD_CCP1MD == PMD_MODULE_ENABLE )
  	/*-----------------------------------------------------------------------*/
	/* CCP1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1CON1 = 
			( CCP_USER_CCP1CON1_MOD << _CCP1CON1_MOD_POSITION ) |
			( CCP_USER_CCP1CON1_CCSEL << _CCP1CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP1CON1_T32 << _CCP1CON1_T32_POSITION ) |
			( CCP_USER_CCP1CON1_TMRPS << _CCP1CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP1CON1_CLKSEL << _CCP1CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP1CON1_TMRSYNC << _CCP1CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP1CON1_SLPEN << _CCP1CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP1CON1_SIDL << _CCP1CON1_SIDL_POSITION ) |
			( CCP_USER_CCP1CON1_ON << _CCP1CON1_ON_POSITION ) |
			( CCP_USER_CCP1CON1_SYNC << _CCP1CON1_SYNC_POSITION ) |
			( CCP_USER_CCP1CON1_ALTSYNC << _CCP1CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP1CON1_ONESHOT << _CCP1CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP1CON1_TRIGEN << _CCP1CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP1CON1_OPS << _CCP1CON1_OPS_POSITION ) |
			( CCP_USER_CCP1CON1_RTRGEN << _CCP1CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP1CON1_OPSSRC << _CCP1CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1CON1bits.MOD = CCP_USER_CCP1CON1_MOD;
			CCP1CON1bits.CCSEL = CCP_USER_CCP1CON1_CCSEL;
			CCP1CON1bits.T32 = CCP_USER_CCP1CON1_T32;
			CCP1CON1bits.TMRPS = CCP_USER_CCP1CON1_TMRPS;
			CCP1CON1bits.CLKSEL = CCP_USER_CCP1CON1_CLKSEL;
			CCP1CON1bits.TMRSYNC = CCP_USER_CCP1CON1_TMRSYNC;
			CCP1CON1bits.SLPEN = CCP_USER_CCP1CON1_SLPEN;
			CCP1CON1bits.SIDL = CCP_USER_CCP1CON1_SIDL;
			CCP1CON1bits.ON = CCP_USER_CCP1CON1_ON;
			CCP1CON1bits.SYNC = CCP_USER_CCP1CON1_SYNC;
			CCP1CON1bits.ALTSYNC = CCP_USER_CCP1CON1_ALTSYNC;
			CCP1CON1bits.ONESHOT = CCP_USER_CCP1CON1_ONESHOT;
			CCP1CON1bits.TRIGEN = CCP_USER_CCP1CON1_TRIGEN;
			CCP1CON1bits.OPS = CCP_USER_CCP1CON1_OPS;
			CCP1CON1bits.RTRGEN = CCP_USER_CCP1CON1_RTRGEN;
			CCP1CON1bits.OPSSRC = CCP_USER_CCP1CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1CON2 = 
			( CCP_USER_CCP1CON2_ASDG << _CCP1CON2_ASDG_POSITION ) |
			( CCP_USER_CCP1CON2_SSDG << _CCP1CON2_SSDG_POSITION ) |
			( CCP_USER_CCP1CON2_ASDGM << _CCP1CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP1CON2_PWMRSEN << _CCP1CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP1CON2_ICS << _CCP1CON2_ICS_POSITION ) |
			( CCP_USER_CCP1CON2_AUXOUT << _CCP1CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP1CON2_ICGSM << _CCP1CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP1CON2_OCAEN << _CCP1CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP1CON2_OENSYNC << _CCP1CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1CON2bits.ASDG = CCP_USER_CCP1CON2_ASDG;
			CCP1CON2bits.SSDG = CCP_USER_CCP1CON2_SSDG;
			CCP1CON2bits.ASDGM = CCP_USER_CCP1CON2_ASDGM;
			CCP1CON2bits.PWMRSEN = CCP_USER_CCP1CON2_PWMRSEN;
			CCP1CON2bits.ICS = CCP_USER_CCP1CON2_ICS;
			CCP1CON2bits.AUXOUT = CCP_USER_CCP1CON2_AUXOUT;
			CCP1CON2bits.ICGSM = CCP_USER_CCP1CON2_ICGSM;
			CCP1CON2bits.OCAEN = CCP_USER_CCP1CON2_OCAEN;
			CCP1CON2bits.OENSYNC = CCP_USER_CCP1CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1CON3 = 
			( CCP_USER_CCP1CON3_DT << _CCP1CON3_DT_POSITION ) |
			( CCP_USER_CCP1CON3_PSSBDF << _CCP1CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP1CON3_PSSACE << _CCP1CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP1CON3_POLBDF << _CCP1CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP1CON3_POLACE << _CCP1CON3_POLACE_POSITION ) |
			( CCP_USER_CCP1CON3_OUTM << _CCP1CON3_OUTM_POSITION ) |
			( CCP_USER_CCP1CON3_OSCNT << _CCP1CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP1CON3_OETRIG << _CCP1CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1CON3bits.DT = CCP_USER_CCP1CON3_DT;
			CCP1CON3bits.PSSBDF = CCP_USER_CCP1CON3_PSSBDF;
			CCP1CON3bits.PSSACE = CCP_USER_CCP1CON3_PSSACE;
			CCP1CON3bits.POLBDF = CCP_USER_CCP1CON3_POLBDF;
			CCP1CON3bits.POLACE = CCP_USER_CCP1CON3_POLACE;
			CCP1CON3bits.OUTM = CCP_USER_CCP1CON3_OUTM;
			CCP1CON3bits.OSCNT = CCP_USER_CCP1CON3_OSCNT;
			CCP1CON3bits.OETRIG = CCP_USER_CCP1CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1STAT = 
			( CCP_USER_CCP1STAT_ICBNE << _CCP1STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP1STAT_ICOV << _CCP1STAT_ICOV_POSITION ) |
			( CCP_USER_CCP1STAT_ICDIS << _CCP1STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP1STAT_SCEVT << _CCP1STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP1STAT_ASEVT << _CCP1STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP1STAT_TRCLR << _CCP1STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP1STAT_TRSET << _CCP1STAT_TRSET_POSITION ) |
			( CCP_USER_CCP1STAT_CCPTRIG << _CCP1STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP1STAT_ICGARM << _CCP1STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP1STAT_RAWIP << _CCP1STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP1STAT_RBWIP << _CCP1STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP1STAT_TMRLWIP << _CCP1STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP1STAT_TMRHWIP << _CCP1STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP1STAT_PRLWIP << _CCP1STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1STATbits.ICBNE = CCP_USER_CCP1STAT_ICBNE;
			CCP1STATbits.ICOV = CCP_USER_CCP1STAT_ICOV;
			CCP1STATbits.ICDIS = CCP_USER_CCP1STAT_ICDIS;
			CCP1STATbits.SCEVT = CCP_USER_CCP1STAT_SCEVT;
			CCP1STATbits.ASEVT = CCP_USER_CCP1STAT_ASEVT;
			CCP1STATbits.TRCLR = CCP_USER_CCP1STAT_TRCLR;
			CCP1STATbits.TRSET = CCP_USER_CCP1STAT_TRSET;
			CCP1STATbits.CCPTRIG = CCP_USER_CCP1STAT_CCPTRIG;
			CCP1STATbits.ICGARM = CCP_USER_CCP1STAT_ICGARM;
			CCP1STATbits.RAWIP = CCP_USER_CCP1STAT_RAWIP;
			CCP1STATbits.RBWIP = CCP_USER_CCP1STAT_RBWIP;
			CCP1STATbits.TMRLWIP = CCP_USER_CCP1STAT_TMRLWIP;
			CCP1STATbits.TMRHWIP = CCP_USER_CCP1STAT_TMRHWIP;
			CCP1STATbits.PRLWIP = CCP_USER_CCP1STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1TMR = 
			( CCP_USER_CCP1TMR_TMRL << _CCP1TMR_TMRL_POSITION ) |
			( CCP_USER_CCP1TMR_TMRH << _CCP1TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1TMRbits.TMRL = CCP_USER_CCP1TMR_TMRL;
			CCP1TMRbits.TMRH = CCP_USER_CCP1TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1PR = 
			( CCP_USER_CCP1PR_PRL << _CCP1PR_PRL_POSITION ) |
			( CCP_USER_CCP1PR_PRH << _CCP1PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1PRbits.PRL = CCP_USER_CCP1PR_PRL;
			CCP1PRbits.PRH = CCP_USER_CCP1PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1RA = 
			( CCP_USER_CCP1RA_CMPA << _CCP1RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1RAbits.CMPA = CCP_USER_CCP1RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1RB = 
			( CCP_USER_CCP1RB_CMPB << _CCP1RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1RBbits.CMPB = CCP_USER_CCP1RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP1BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP1BUF = 
			( CCP_USER_CCP1BUF_BUFL << _CCP1BUF_BUFL_POSITION ) |
			( CCP_USER_CCP1BUF_BUFH << _CCP1BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP1BUFbits.BUFL = CCP_USER_CCP1BUF_BUFL;
			CCP1BUFbits.BUFH = CCP_USER_CCP1BUF_BUFH;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP2_Set_Register(void)
* @brief        CCP2レジスタを初期化します 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP2_Set_Register(void)
{
#if ( PMD_CCP2MD == PMD_MODULE_ENABLE )
  	
	/*-----------------------------------------------------------------------*/
	/* CCP2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2CON1 = 
			( CCP_USER_CCP2CON1_MOD << _CCP2CON1_MOD_POSITION ) |
			( CCP_USER_CCP2CON1_CCSEL << _CCP2CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP2CON1_T32 << _CCP2CON1_T32_POSITION ) |
			( CCP_USER_CCP2CON1_TMRPS << _CCP2CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP2CON1_CLKSEL << _CCP2CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP2CON1_TMRSYNC << _CCP2CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP2CON1_SLPEN << _CCP2CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP2CON1_SIDL << _CCP2CON1_SIDL_POSITION ) |
			( CCP_USER_CCP2CON1_ON << _CCP2CON1_ON_POSITION ) |
			( CCP_USER_CCP2CON1_SYNC << _CCP2CON1_SYNC_POSITION ) |
			( CCP_USER_CCP2CON1_ALTSYNC << _CCP2CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP2CON1_ONESHOT << _CCP2CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP2CON1_TRIGEN << _CCP2CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP2CON1_OPS << _CCP2CON1_OPS_POSITION ) |
			( CCP_USER_CCP2CON1_RTRGEN << _CCP2CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP2CON1_OPSSRC << _CCP2CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2CON1bits.MOD = CCP_USER_CCP2CON1_MOD;
			CCP2CON1bits.CCSEL = CCP_USER_CCP2CON1_CCSEL;
			CCP2CON1bits.T32 = CCP_USER_CCP2CON1_T32;
			CCP2CON1bits.TMRPS = CCP_USER_CCP2CON1_TMRPS;
			CCP2CON1bits.CLKSEL = CCP_USER_CCP2CON1_CLKSEL;
			CCP2CON1bits.TMRSYNC = CCP_USER_CCP2CON1_TMRSYNC;
			CCP2CON1bits.SLPEN = CCP_USER_CCP2CON1_SLPEN;
			CCP2CON1bits.SIDL = CCP_USER_CCP2CON1_SIDL;
			CCP2CON1bits.ON = CCP_USER_CCP2CON1_ON;
			CCP2CON1bits.SYNC = CCP_USER_CCP2CON1_SYNC;
			CCP2CON1bits.ALTSYNC = CCP_USER_CCP2CON1_ALTSYNC;
			CCP2CON1bits.ONESHOT = CCP_USER_CCP2CON1_ONESHOT;
			CCP2CON1bits.TRIGEN = CCP_USER_CCP2CON1_TRIGEN;
			CCP2CON1bits.OPS = CCP_USER_CCP2CON1_OPS;
			CCP2CON1bits.RTRGEN = CCP_USER_CCP2CON1_RTRGEN;
			CCP2CON1bits.OPSSRC = CCP_USER_CCP2CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2CON2 = 
			( CCP_USER_CCP2CON2_ASDG << _CCP2CON2_ASDG_POSITION ) |
			( CCP_USER_CCP2CON2_SSDG << _CCP2CON2_SSDG_POSITION ) |
			( CCP_USER_CCP2CON2_ASDGM << _CCP2CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP2CON2_PWMRSEN << _CCP2CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP2CON2_ICS << _CCP2CON2_ICS_POSITION ) |
			( CCP_USER_CCP2CON2_AUXOUT << _CCP2CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP2CON2_ICGSM << _CCP2CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP2CON2_OCAEN << _CCP2CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP2CON2_OENSYNC << _CCP2CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2CON2bits.ASDG = CCP_USER_CCP2CON2_ASDG;
			CCP2CON2bits.SSDG = CCP_USER_CCP2CON2_SSDG;
			CCP2CON2bits.ASDGM = CCP_USER_CCP2CON2_ASDGM;
			CCP2CON2bits.PWMRSEN = CCP_USER_CCP2CON2_PWMRSEN;
			CCP2CON2bits.ICS = CCP_USER_CCP2CON2_ICS;
			CCP2CON2bits.AUXOUT = CCP_USER_CCP2CON2_AUXOUT;
			CCP2CON2bits.ICGSM = CCP_USER_CCP2CON2_ICGSM;
			CCP2CON2bits.OCAEN = CCP_USER_CCP2CON2_OCAEN;
			CCP2CON2bits.OENSYNC = CCP_USER_CCP2CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2CON3 = 
			( CCP_USER_CCP2CON3_DT << _CCP2CON3_DT_POSITION ) |
			( CCP_USER_CCP2CON3_PSSBDF << _CCP2CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP2CON3_PSSACE << _CCP2CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP2CON3_POLBDF << _CCP2CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP2CON3_POLACE << _CCP2CON3_POLACE_POSITION ) |
			( CCP_USER_CCP2CON3_OUTM << _CCP2CON3_OUTM_POSITION ) |
			( CCP_USER_CCP2CON3_OSCNT << _CCP2CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP2CON3_OETRIG << _CCP2CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2CON3bits.DT = CCP_USER_CCP2CON3_DT;
			CCP2CON3bits.PSSBDF = CCP_USER_CCP2CON3_PSSBDF;
			CCP2CON3bits.PSSACE = CCP_USER_CCP2CON3_PSSACE;
			CCP2CON3bits.POLBDF = CCP_USER_CCP2CON3_POLBDF;
			CCP2CON3bits.POLACE = CCP_USER_CCP2CON3_POLACE;
			CCP2CON3bits.OUTM = CCP_USER_CCP2CON3_OUTM;
			CCP2CON3bits.OSCNT = CCP_USER_CCP2CON3_OSCNT;
			CCP2CON3bits.OETRIG = CCP_USER_CCP2CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2STAT = 
			( CCP_USER_CCP2STAT_ICBNE << _CCP2STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP2STAT_ICOV << _CCP2STAT_ICOV_POSITION ) |
			( CCP_USER_CCP2STAT_ICDIS << _CCP2STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP2STAT_SCEVT << _CCP2STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP2STAT_ASEVT << _CCP2STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP2STAT_TRCLR << _CCP2STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP2STAT_TRSET << _CCP2STAT_TRSET_POSITION ) |
			( CCP_USER_CCP2STAT_CCPTRIG << _CCP2STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP2STAT_ICGARM << _CCP2STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP2STAT_RAWIP << _CCP2STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP2STAT_RBWIP << _CCP2STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP2STAT_TMRLWIP << _CCP2STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP2STAT_TMRHWIP << _CCP2STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP2STAT_PRLWIP << _CCP2STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2STATbits.ICBNE = CCP_USER_CCP2STAT_ICBNE;
			CCP2STATbits.ICOV = CCP_USER_CCP2STAT_ICOV;
			CCP2STATbits.ICDIS = CCP_USER_CCP2STAT_ICDIS;
			CCP2STATbits.SCEVT = CCP_USER_CCP2STAT_SCEVT;
			CCP2STATbits.ASEVT = CCP_USER_CCP2STAT_ASEVT;
			CCP2STATbits.TRCLR = CCP_USER_CCP2STAT_TRCLR;
			CCP2STATbits.TRSET = CCP_USER_CCP2STAT_TRSET;
			CCP2STATbits.CCPTRIG = CCP_USER_CCP2STAT_CCPTRIG;
			CCP2STATbits.ICGARM = CCP_USER_CCP2STAT_ICGARM;
			CCP2STATbits.RAWIP = CCP_USER_CCP2STAT_RAWIP;
			CCP2STATbits.RBWIP = CCP_USER_CCP2STAT_RBWIP;
			CCP2STATbits.TMRLWIP = CCP_USER_CCP2STAT_TMRLWIP;
			CCP2STATbits.TMRHWIP = CCP_USER_CCP2STAT_TMRHWIP;
			CCP2STATbits.PRLWIP = CCP_USER_CCP2STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2TMR = 
			( CCP_USER_CCP2TMR_TMRL << _CCP2TMR_TMRL_POSITION ) |
			( CCP_USER_CCP2TMR_TMRH << _CCP2TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2TMRbits.TMRL = CCP_USER_CCP2TMR_TMRL;
			CCP2TMRbits.TMRH = CCP_USER_CCP2TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2PR = 
			( CCP_USER_CCP2PR_PRL << _CCP2PR_PRL_POSITION ) |
			( CCP_USER_CCP2PR_PRH << _CCP2PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2PRbits.PRL = CCP_USER_CCP2PR_PRL;
			CCP2PRbits.PRH = CCP_USER_CCP2PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2RA = 
			( CCP_USER_CCP2RA_CMPA << _CCP2RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2RAbits.CMPA = CCP_USER_CCP2RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2RB = 
			( CCP_USER_CCP2RB_CMPB << _CCP2RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2RBbits.CMPB = CCP_USER_CCP2RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP2BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP2BUF = 
			( CCP_USER_CCP2BUF_BUFL << _CCP2BUF_BUFL_POSITION ) |
			( CCP_USER_CCP2BUF_BUFH << _CCP2BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP2BUFbits.BUFL = CCP_USER_CCP2BUF_BUFL;
			CCP2BUFbits.BUFH = CCP_USER_CCP2BUF_BUFH;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP3_Set_Register(void)
* @brief     CCP3レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP3_Set_Register(void)
{
#if ( PMD_CCP3MD == PMD_MODULE_ENABLE )
 	
	/*-----------------------------------------------------------------------*/
	/* CCP3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3CON1 = 
			( CCP_USER_CCP3CON1_MOD << _CCP3CON1_MOD_POSITION ) |
			( CCP_USER_CCP3CON1_CCSEL << _CCP3CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP3CON1_T32 << _CCP3CON1_T32_POSITION ) |
			( CCP_USER_CCP3CON1_TMRPS << _CCP3CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP3CON1_CLKSEL << _CCP3CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP3CON1_TMRSYNC << _CCP3CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP3CON1_SLPEN << _CCP3CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP3CON1_SIDL << _CCP3CON1_SIDL_POSITION ) |
			( CCP_USER_CCP3CON1_ON << _CCP3CON1_ON_POSITION ) |
			( CCP_USER_CCP3CON1_SYNC << _CCP3CON1_SYNC_POSITION ) |
			( CCP_USER_CCP3CON1_ALTSYNC << _CCP3CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP3CON1_ONESHOT << _CCP3CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP3CON1_TRIGEN << _CCP3CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP3CON1_OPS << _CCP3CON1_OPS_POSITION ) |
			( CCP_USER_CCP3CON1_RTRGEN << _CCP3CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP3CON1_OPSSRC << _CCP3CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3CON1bits.MOD = CCP_USER_CCP3CON1_MOD;
			CCP3CON1bits.CCSEL = CCP_USER_CCP3CON1_CCSEL;
			CCP3CON1bits.T32 = CCP_USER_CCP3CON1_T32;
			CCP3CON1bits.TMRPS = CCP_USER_CCP3CON1_TMRPS;
			CCP3CON1bits.CLKSEL = CCP_USER_CCP3CON1_CLKSEL;
			CCP3CON1bits.TMRSYNC = CCP_USER_CCP3CON1_TMRSYNC;
			CCP3CON1bits.SLPEN = CCP_USER_CCP3CON1_SLPEN;
			CCP3CON1bits.SIDL = CCP_USER_CCP3CON1_SIDL;
			CCP3CON1bits.ON = CCP_USER_CCP3CON1_ON;
			CCP3CON1bits.SYNC = CCP_USER_CCP3CON1_SYNC;
			CCP3CON1bits.ALTSYNC = CCP_USER_CCP3CON1_ALTSYNC;
			CCP3CON1bits.ONESHOT = CCP_USER_CCP3CON1_ONESHOT;
			CCP3CON1bits.TRIGEN = CCP_USER_CCP3CON1_TRIGEN;
			CCP3CON1bits.OPS = CCP_USER_CCP3CON1_OPS;
			CCP3CON1bits.RTRGEN = CCP_USER_CCP3CON1_RTRGEN;
			CCP3CON1bits.OPSSRC = CCP_USER_CCP3CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3CON2 = 
			( CCP_USER_CCP3CON2_ASDG << _CCP3CON2_ASDG_POSITION ) |
			( CCP_USER_CCP3CON2_SSDG << _CCP3CON2_SSDG_POSITION ) |
			( CCP_USER_CCP3CON2_ASDGM << _CCP3CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP3CON2_PWMRSEN << _CCP3CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP3CON2_ICS << _CCP3CON2_ICS_POSITION ) |
			( CCP_USER_CCP3CON2_AUXOUT << _CCP3CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP3CON2_ICGSM << _CCP3CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP3CON2_OCAEN << _CCP3CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP3CON2_OENSYNC << _CCP3CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3CON2bits.ASDG = CCP_USER_CCP3CON2_ASDG;
			CCP3CON2bits.SSDG = CCP_USER_CCP3CON2_SSDG;
			CCP3CON2bits.ASDGM = CCP_USER_CCP3CON2_ASDGM;
			CCP3CON2bits.PWMRSEN = CCP_USER_CCP3CON2_PWMRSEN;
			CCP3CON2bits.ICS = CCP_USER_CCP3CON2_ICS;
			CCP3CON2bits.AUXOUT = CCP_USER_CCP3CON2_AUXOUT;
			CCP3CON2bits.ICGSM = CCP_USER_CCP3CON2_ICGSM;
			CCP3CON2bits.OCAEN = CCP_USER_CCP3CON2_OCAEN;
			CCP3CON2bits.OENSYNC = CCP_USER_CCP3CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3CON3 = 
			( CCP_USER_CCP3CON3_DT << _CCP3CON3_DT_POSITION ) |
			( CCP_USER_CCP3CON3_PSSBDF << _CCP3CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP3CON3_PSSACE << _CCP3CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP3CON3_POLBDF << _CCP3CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP3CON3_POLACE << _CCP3CON3_POLACE_POSITION ) |
			( CCP_USER_CCP3CON3_OUTM << _CCP3CON3_OUTM_POSITION ) |
			( CCP_USER_CCP3CON3_OSCNT << _CCP3CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP3CON3_OETRIG << _CCP3CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3CON3bits.DT = CCP_USER_CCP3CON3_DT;
			CCP3CON3bits.PSSBDF = CCP_USER_CCP3CON3_PSSBDF;
			CCP3CON3bits.PSSACE = CCP_USER_CCP3CON3_PSSACE;
			CCP3CON3bits.POLBDF = CCP_USER_CCP3CON3_POLBDF;
			CCP3CON3bits.POLACE = CCP_USER_CCP3CON3_POLACE;
			CCP3CON3bits.OUTM = CCP_USER_CCP3CON3_OUTM;
			CCP3CON3bits.OSCNT = CCP_USER_CCP3CON3_OSCNT;
			CCP3CON3bits.OETRIG = CCP_USER_CCP3CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3STAT = 
			( CCP_USER_CCP3STAT_ICBNE << _CCP3STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP3STAT_ICOV << _CCP3STAT_ICOV_POSITION ) |
			( CCP_USER_CCP3STAT_ICDIS << _CCP3STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP3STAT_SCEVT << _CCP3STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP3STAT_ASEVT << _CCP3STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP3STAT_TRCLR << _CCP3STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP3STAT_TRSET << _CCP3STAT_TRSET_POSITION ) |
			( CCP_USER_CCP3STAT_CCPTRIG << _CCP3STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP3STAT_ICGARM << _CCP3STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP3STAT_RAWIP << _CCP3STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP3STAT_RBWIP << _CCP3STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP3STAT_TMRLWIP << _CCP3STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP3STAT_TMRHWIP << _CCP3STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP3STAT_PRLWIP << _CCP3STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3STATbits.ICBNE = CCP_USER_CCP3STAT_ICBNE;
			CCP3STATbits.ICOV = CCP_USER_CCP3STAT_ICOV;
			CCP3STATbits.ICDIS = CCP_USER_CCP3STAT_ICDIS;
			CCP3STATbits.SCEVT = CCP_USER_CCP3STAT_SCEVT;
			CCP3STATbits.ASEVT = CCP_USER_CCP3STAT_ASEVT;
			CCP3STATbits.TRCLR = CCP_USER_CCP3STAT_TRCLR;
			CCP3STATbits.TRSET = CCP_USER_CCP3STAT_TRSET;
			CCP3STATbits.CCPTRIG = CCP_USER_CCP3STAT_CCPTRIG;
			CCP3STATbits.ICGARM = CCP_USER_CCP3STAT_ICGARM;
			CCP3STATbits.RAWIP = CCP_USER_CCP3STAT_RAWIP;
			CCP3STATbits.RBWIP = CCP_USER_CCP3STAT_RBWIP;
			CCP3STATbits.TMRLWIP = CCP_USER_CCP3STAT_TMRLWIP;
			CCP3STATbits.TMRHWIP = CCP_USER_CCP3STAT_TMRHWIP;
			CCP3STATbits.PRLWIP = CCP_USER_CCP3STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3TMR = 
			( CCP_USER_CCP3TMR_TMRL << _CCP3TMR_TMRL_POSITION ) |
			( CCP_USER_CCP3TMR_TMRH << _CCP3TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3TMRbits.TMRL = CCP_USER_CCP3TMR_TMRL;
			CCP3TMRbits.TMRH = CCP_USER_CCP3TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3PR = 
			( CCP_USER_CCP3PR_PRL << _CCP3PR_PRL_POSITION ) |
			( CCP_USER_CCP3PR_PRH << _CCP3PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3PRbits.PRL = CCP_USER_CCP3PR_PRL;
			CCP3PRbits.PRH = CCP_USER_CCP3PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3RA = 
			( CCP_USER_CCP3RA_CMPA << _CCP3RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3RAbits.CMPA = CCP_USER_CCP3RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3RB = 
			( CCP_USER_CCP3RB_CMPB << _CCP3RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3RBbits.CMPB = CCP_USER_CCP3RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP3BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP3BUF = 
			( CCP_USER_CCP3BUF_BUFL << _CCP3BUF_BUFL_POSITION ) |
			( CCP_USER_CCP3BUF_BUFH << _CCP3BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP3BUFbits.BUFL = CCP_USER_CCP3BUF_BUFL;
			CCP3BUFbits.BUFH = CCP_USER_CCP3BUF_BUFH;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP4_Set_Register(void)
* @brief        CCP4レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP4_Set_Register(void)
{
#if ( PMD_CCP4MD == PMD_MODULE_ENABLE )
 	/*-----------------------------------------------------------------------*/
	/* CCP4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4CON1 = 
			( CCP_USER_CCP4CON1_MOD << _CCP4CON1_MOD_POSITION ) |
			( CCP_USER_CCP4CON1_CCSEL << _CCP4CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP4CON1_T32 << _CCP4CON1_T32_POSITION ) |
			( CCP_USER_CCP4CON1_TMRPS << _CCP4CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP4CON1_CLKSEL << _CCP4CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP4CON1_TMRSYNC << _CCP4CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP4CON1_SLPEN << _CCP4CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP4CON1_SIDL << _CCP4CON1_SIDL_POSITION ) |
			( CCP_USER_CCP4CON1_ON << _CCP4CON1_ON_POSITION ) |
			( CCP_USER_CCP4CON1_SYNC << _CCP4CON1_SYNC_POSITION ) |
			( CCP_USER_CCP4CON1_ALTSYNC << _CCP4CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP4CON1_ONESHOT << _CCP4CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP4CON1_TRIGEN << _CCP4CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP4CON1_OPS << _CCP4CON1_OPS_POSITION ) |
			( CCP_USER_CCP4CON1_RTRGEN << _CCP4CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP4CON1_OPSSRC << _CCP4CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4CON1bits.MOD = CCP_USER_CCP4CON1_MOD;
			CCP4CON1bits.CCSEL = CCP_USER_CCP4CON1_CCSEL;
			CCP4CON1bits.T32 = CCP_USER_CCP4CON1_T32;
			CCP4CON1bits.TMRPS = CCP_USER_CCP4CON1_TMRPS;
			CCP4CON1bits.CLKSEL = CCP_USER_CCP4CON1_CLKSEL;
			CCP4CON1bits.TMRSYNC = CCP_USER_CCP4CON1_TMRSYNC;
			CCP4CON1bits.SLPEN = CCP_USER_CCP4CON1_SLPEN;
			CCP4CON1bits.SIDL = CCP_USER_CCP4CON1_SIDL;
			CCP4CON1bits.ON = CCP_USER_CCP4CON1_ON;
			CCP4CON1bits.SYNC = CCP_USER_CCP4CON1_SYNC;
			CCP4CON1bits.ALTSYNC = CCP_USER_CCP4CON1_ALTSYNC;
			CCP4CON1bits.ONESHOT = CCP_USER_CCP4CON1_ONESHOT;
			CCP4CON1bits.TRIGEN = CCP_USER_CCP4CON1_TRIGEN;
			CCP4CON1bits.OPS = CCP_USER_CCP4CON1_OPS;
			CCP4CON1bits.RTRGEN = CCP_USER_CCP4CON1_RTRGEN;
			CCP4CON1bits.OPSSRC = CCP_USER_CCP4CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4CON2 = 
			( CCP_USER_CCP4CON2_ASDG << _CCP4CON2_ASDG_POSITION ) |
			( CCP_USER_CCP4CON2_SSDG << _CCP4CON2_SSDG_POSITION ) |
			( CCP_USER_CCP4CON2_ASDGM << _CCP4CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP4CON2_PWMRSEN << _CCP4CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP4CON2_ICS << _CCP4CON2_ICS_POSITION ) |
			( CCP_USER_CCP4CON2_AUXOUT << _CCP4CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP4CON2_ICGSM << _CCP4CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP4CON2_OCAEN << _CCP4CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP4CON2_OENSYNC << _CCP4CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4CON2bits.ASDG = CCP_USER_CCP4CON2_ASDG;
			CCP4CON2bits.SSDG = CCP_USER_CCP4CON2_SSDG;
			CCP4CON2bits.ASDGM = CCP_USER_CCP4CON2_ASDGM;
			CCP4CON2bits.PWMRSEN = CCP_USER_CCP4CON2_PWMRSEN;
			CCP4CON2bits.ICS = CCP_USER_CCP4CON2_ICS;
			CCP4CON2bits.AUXOUT = CCP_USER_CCP4CON2_AUXOUT;
			CCP4CON2bits.ICGSM = CCP_USER_CCP4CON2_ICGSM;
			CCP4CON2bits.OCAEN = CCP_USER_CCP4CON2_OCAEN;
			CCP4CON2bits.OENSYNC = CCP_USER_CCP4CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4CON3 = 
			( CCP_USER_CCP4CON3_DT << _CCP4CON3_DT_POSITION ) |
			( CCP_USER_CCP4CON3_PSSBDF << _CCP4CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP4CON3_PSSACE << _CCP4CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP4CON3_POLBDF << _CCP4CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP4CON3_POLACE << _CCP4CON3_POLACE_POSITION ) |
			( CCP_USER_CCP4CON3_OUTM << _CCP4CON3_OUTM_POSITION ) |
			( CCP_USER_CCP4CON3_OSCNT << _CCP4CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP4CON3_OETRIG << _CCP4CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4CON3bits.DT = CCP_USER_CCP4CON3_DT;
			CCP4CON3bits.PSSBDF = CCP_USER_CCP4CON3_PSSBDF;
			CCP4CON3bits.PSSACE = CCP_USER_CCP4CON3_PSSACE;
			CCP4CON3bits.POLBDF = CCP_USER_CCP4CON3_POLBDF;
			CCP4CON3bits.POLACE = CCP_USER_CCP4CON3_POLACE;
			CCP4CON3bits.OUTM = CCP_USER_CCP4CON3_OUTM;
			CCP4CON3bits.OSCNT = CCP_USER_CCP4CON3_OSCNT;
			CCP4CON3bits.OETRIG = CCP_USER_CCP4CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4STAT = 
			( CCP_USER_CCP4STAT_ICBNE << _CCP4STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP4STAT_ICOV << _CCP4STAT_ICOV_POSITION ) |
			( CCP_USER_CCP4STAT_ICDIS << _CCP4STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP4STAT_SCEVT << _CCP4STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP4STAT_ASEVT << _CCP4STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP4STAT_TRCLR << _CCP4STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP4STAT_TRSET << _CCP4STAT_TRSET_POSITION ) |
			( CCP_USER_CCP4STAT_CCPTRIG << _CCP4STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP4STAT_ICGARM << _CCP4STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP4STAT_RAWIP << _CCP4STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP4STAT_RBWIP << _CCP4STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP4STAT_TMRLWIP << _CCP4STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP4STAT_TMRHWIP << _CCP4STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP4STAT_PRLWIP << _CCP4STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4STATbits.ICBNE = CCP_USER_CCP4STAT_ICBNE;
			CCP4STATbits.ICOV = CCP_USER_CCP4STAT_ICOV;
			CCP4STATbits.ICDIS = CCP_USER_CCP4STAT_ICDIS;
			CCP4STATbits.SCEVT = CCP_USER_CCP4STAT_SCEVT;
			CCP4STATbits.ASEVT = CCP_USER_CCP4STAT_ASEVT;
			CCP4STATbits.TRCLR = CCP_USER_CCP4STAT_TRCLR;
			CCP4STATbits.TRSET = CCP_USER_CCP4STAT_TRSET;
			CCP4STATbits.CCPTRIG = CCP_USER_CCP4STAT_CCPTRIG;
			CCP4STATbits.ICGARM = CCP_USER_CCP4STAT_ICGARM;
			CCP4STATbits.RAWIP = CCP_USER_CCP4STAT_RAWIP;
			CCP4STATbits.RBWIP = CCP_USER_CCP4STAT_RBWIP;
			CCP4STATbits.TMRLWIP = CCP_USER_CCP4STAT_TMRLWIP;
			CCP4STATbits.TMRHWIP = CCP_USER_CCP4STAT_TMRHWIP;
			CCP4STATbits.PRLWIP = CCP_USER_CCP4STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4TMR = 
			( CCP_USER_CCP4TMR_TMRL << _CCP4TMR_TMRL_POSITION ) |
			( CCP_USER_CCP4TMR_TMRH << _CCP4TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4TMRbits.TMRL = CCP_USER_CCP4TMR_TMRL;
			CCP4TMRbits.TMRH = CCP_USER_CCP4TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4PR = 
			( CCP_USER_CCP4PR_PRL << _CCP4PR_PRL_POSITION ) |
			( CCP_USER_CCP4PR_PRH << _CCP4PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4PRbits.PRL = CCP_USER_CCP4PR_PRL;
			CCP4PRbits.PRH = CCP_USER_CCP4PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4RA = 
			( CCP_USER_CCP4RA_CMPA << _CCP4RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4RAbits.CMPA = CCP_USER_CCP4RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4RB = 
			( CCP_USER_CCP4RB_CMPB << _CCP4RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4RBbits.CMPB = CCP_USER_CCP4RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP4BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP4BUF = 
			( CCP_USER_CCP4BUF_BUFL << _CCP4BUF_BUFL_POSITION ) |
			( CCP_USER_CCP4BUF_BUFH << _CCP4BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP4BUFbits.BUFL = CCP_USER_CCP4BUF_BUFL;
			CCP4BUFbits.BUFH = CCP_USER_CCP4BUF_BUFH;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP5_Set_Register(void)
* @brief        CCP5レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP5_Set_Register(void)
{
#if ( PMD_CCP5MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP5CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5CON1 = 
			( CCP_USER_CCP5CON1_MOD << _CCP5CON1_MOD_POSITION ) |
			( CCP_USER_CCP5CON1_CCSEL << _CCP5CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP5CON1_T32 << _CCP5CON1_T32_POSITION ) |
			( CCP_USER_CCP5CON1_TMRPS << _CCP5CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP5CON1_CLKSEL << _CCP5CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP5CON1_TMRSYNC << _CCP5CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP5CON1_SLPEN << _CCP5CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP5CON1_SIDL << _CCP5CON1_SIDL_POSITION ) |
			( CCP_USER_CCP5CON1_ON << _CCP5CON1_ON_POSITION ) |
			( CCP_USER_CCP5CON1_SYNC << _CCP5CON1_SYNC_POSITION ) |
			( CCP_USER_CCP5CON1_ALTSYNC << _CCP5CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP5CON1_ONESHOT << _CCP5CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP5CON1_TRIGEN << _CCP5CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP5CON1_OPS << _CCP5CON1_OPS_POSITION ) |
			( CCP_USER_CCP5CON1_RTRGEN << _CCP5CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP5CON1_OPSSRC << _CCP5CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5CON1bits.MOD = CCP_USER_CCP5CON1_MOD;
			CCP5CON1bits.CCSEL = CCP_USER_CCP5CON1_CCSEL;
			CCP5CON1bits.T32 = CCP_USER_CCP5CON1_T32;
			CCP5CON1bits.TMRPS = CCP_USER_CCP5CON1_TMRPS;
			CCP5CON1bits.CLKSEL = CCP_USER_CCP5CON1_CLKSEL;
			CCP5CON1bits.TMRSYNC = CCP_USER_CCP5CON1_TMRSYNC;
			CCP5CON1bits.SLPEN = CCP_USER_CCP5CON1_SLPEN;
			CCP5CON1bits.SIDL = CCP_USER_CCP5CON1_SIDL;
			CCP5CON1bits.ON = CCP_USER_CCP5CON1_ON;
			CCP5CON1bits.SYNC = CCP_USER_CCP5CON1_SYNC;
			CCP5CON1bits.ALTSYNC = CCP_USER_CCP5CON1_ALTSYNC;
			CCP5CON1bits.ONESHOT = CCP_USER_CCP5CON1_ONESHOT;
			CCP5CON1bits.TRIGEN = CCP_USER_CCP5CON1_TRIGEN;
			CCP5CON1bits.OPS = CCP_USER_CCP5CON1_OPS;
			CCP5CON1bits.RTRGEN = CCP_USER_CCP5CON1_RTRGEN;
			CCP5CON1bits.OPSSRC = CCP_USER_CCP5CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5CON2 = 
			( CCP_USER_CCP5CON2_ASDG << _CCP5CON2_ASDG_POSITION ) |
			( CCP_USER_CCP5CON2_SSDG << _CCP5CON2_SSDG_POSITION ) |
			( CCP_USER_CCP5CON2_ASDGM << _CCP5CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP5CON2_PWMRSEN << _CCP5CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP5CON2_ICS << _CCP5CON2_ICS_POSITION ) |
			( CCP_USER_CCP5CON2_AUXOUT << _CCP5CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP5CON2_ICGSM << _CCP5CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP5CON2_OCAEN << _CCP5CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP5CON2_OENSYNC << _CCP5CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5CON2bits.ASDG = CCP_USER_CCP5CON2_ASDG;
			CCP5CON2bits.SSDG = CCP_USER_CCP5CON2_SSDG;
			CCP5CON2bits.ASDGM = CCP_USER_CCP5CON2_ASDGM;
			CCP5CON2bits.PWMRSEN = CCP_USER_CCP5CON2_PWMRSEN;
			CCP5CON2bits.ICS = CCP_USER_CCP5CON2_ICS;
			CCP5CON2bits.AUXOUT = CCP_USER_CCP5CON2_AUXOUT;
			CCP5CON2bits.ICGSM = CCP_USER_CCP5CON2_ICGSM;
			CCP5CON2bits.OCAEN = CCP_USER_CCP5CON2_OCAEN;
			CCP5CON2bits.OENSYNC = CCP_USER_CCP5CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5CON3 = 
			( CCP_USER_CCP5CON3_DT << _CCP5CON3_DT_POSITION ) |
			( CCP_USER_CCP5CON3_PSSBDF << _CCP5CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP5CON3_PSSACE << _CCP5CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP5CON3_POLBDF << _CCP5CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP5CON3_POLACE << _CCP5CON3_POLACE_POSITION ) |
			( CCP_USER_CCP5CON3_OUTM << _CCP5CON3_OUTM_POSITION ) |
			( CCP_USER_CCP5CON3_OSCNT << _CCP5CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP5CON3_OETRIG << _CCP5CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5CON3bits.DT = CCP_USER_CCP5CON3_DT;
			CCP5CON3bits.PSSBDF = CCP_USER_CCP5CON3_PSSBDF;
			CCP5CON3bits.PSSACE = CCP_USER_CCP5CON3_PSSACE;
			CCP5CON3bits.POLBDF = CCP_USER_CCP5CON3_POLBDF;
			CCP5CON3bits.POLACE = CCP_USER_CCP5CON3_POLACE;
			CCP5CON3bits.OUTM = CCP_USER_CCP5CON3_OUTM;
			CCP5CON3bits.OSCNT = CCP_USER_CCP5CON3_OSCNT;
			CCP5CON3bits.OETRIG = CCP_USER_CCP5CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5STAT = 
			( CCP_USER_CCP5STAT_ICBNE << _CCP5STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP5STAT_ICOV << _CCP5STAT_ICOV_POSITION ) |
			( CCP_USER_CCP5STAT_ICDIS << _CCP5STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP5STAT_SCEVT << _CCP5STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP5STAT_ASEVT << _CCP5STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP5STAT_TRCLR << _CCP5STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP5STAT_TRSET << _CCP5STAT_TRSET_POSITION ) |
			( CCP_USER_CCP5STAT_CCPTRIG << _CCP5STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP5STAT_ICGARM << _CCP5STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP5STAT_RAWIP << _CCP5STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP5STAT_RBWIP << _CCP5STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP5STAT_TMRLWIP << _CCP5STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP5STAT_TMRHWIP << _CCP5STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP5STAT_PRLWIP << _CCP5STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5STATbits.ICBNE = CCP_USER_CCP5STAT_ICBNE;
			CCP5STATbits.ICOV = CCP_USER_CCP5STAT_ICOV;
			CCP5STATbits.ICDIS = CCP_USER_CCP5STAT_ICDIS;
			CCP5STATbits.SCEVT = CCP_USER_CCP5STAT_SCEVT;
			CCP5STATbits.ASEVT = CCP_USER_CCP5STAT_ASEVT;
			CCP5STATbits.TRCLR = CCP_USER_CCP5STAT_TRCLR;
			CCP5STATbits.TRSET = CCP_USER_CCP5STAT_TRSET;
			CCP5STATbits.CCPTRIG = CCP_USER_CCP5STAT_CCPTRIG;
			CCP5STATbits.ICGARM = CCP_USER_CCP5STAT_ICGARM;
			CCP5STATbits.RAWIP = CCP_USER_CCP5STAT_RAWIP;
			CCP5STATbits.RBWIP = CCP_USER_CCP5STAT_RBWIP;
			CCP5STATbits.TMRLWIP = CCP_USER_CCP5STAT_TMRLWIP;
			CCP5STATbits.TMRHWIP = CCP_USER_CCP5STAT_TMRHWIP;
			CCP5STATbits.PRLWIP = CCP_USER_CCP5STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5TMR = 
			( CCP_USER_CCP5TMR_TMRL << _CCP5TMR_TMRL_POSITION ) |
			( CCP_USER_CCP5TMR_TMRH << _CCP5TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5TMRbits.TMRL = CCP_USER_CCP5TMR_TMRL;
			CCP5TMRbits.TMRH = CCP_USER_CCP5TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5PR = 
			( CCP_USER_CCP5PR_PRL << _CCP5PR_PRL_POSITION ) |
			( CCP_USER_CCP5PR_PRH << _CCP5PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5PRbits.PRL = CCP_USER_CCP5PR_PRL;
			CCP5PRbits.PRH = CCP_USER_CCP5PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5RA = 
			( CCP_USER_CCP5RA_CMPA << _CCP5RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5RAbits.CMPA = CCP_USER_CCP5RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5RB = 
			( CCP_USER_CCP5RB_CMPB << _CCP5RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5RBbits.CMPB = CCP_USER_CCP5RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP5BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP5BUF = 
			( CCP_USER_CCP5BUF_BUFL << _CCP5BUF_BUFL_POSITION ) |
			( CCP_USER_CCP5BUF_BUFH << _CCP5BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP5BUFbits.BUFL = CCP_USER_CCP5BUF_BUFL;
			CCP5BUFbits.BUFH = CCP_USER_CCP5BUF_BUFH;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP6_Set_Register(void)
* @brief        CCP6レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP6_Set_Register(void)
{
#if ( PMD_CCP6MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP6CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6CON1 = 
			( CCP_USER_CCP6CON1_MOD << _CCP6CON1_MOD_POSITION ) |
			( CCP_USER_CCP6CON1_CCSEL << _CCP6CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP6CON1_T32 << _CCP6CON1_T32_POSITION ) |
			( CCP_USER_CCP6CON1_TMRPS << _CCP6CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP6CON1_CLKSEL << _CCP6CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP6CON1_TMRSYNC << _CCP6CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP6CON1_SLPEN << _CCP6CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP6CON1_SIDL << _CCP6CON1_SIDL_POSITION ) |
			( CCP_USER_CCP6CON1_ON << _CCP6CON1_ON_POSITION ) |
			( CCP_USER_CCP6CON1_SYNC << _CCP6CON1_SYNC_POSITION ) |
			( CCP_USER_CCP6CON1_ALTSYNC << _CCP6CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP6CON1_ONESHOT << _CCP6CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP6CON1_TRIGEN << _CCP6CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP6CON1_OPS << _CCP6CON1_OPS_POSITION ) |
			( CCP_USER_CCP6CON1_RTRGEN << _CCP6CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP6CON1_OPSSRC << _CCP6CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6CON1bits.MOD = CCP_USER_CCP6CON1_MOD;
			CCP6CON1bits.CCSEL = CCP_USER_CCP6CON1_CCSEL;
			CCP6CON1bits.T32 = CCP_USER_CCP6CON1_T32;
			CCP6CON1bits.TMRPS = CCP_USER_CCP6CON1_TMRPS;
			CCP6CON1bits.CLKSEL = CCP_USER_CCP6CON1_CLKSEL;
			CCP6CON1bits.TMRSYNC = CCP_USER_CCP6CON1_TMRSYNC;
			CCP6CON1bits.SLPEN = CCP_USER_CCP6CON1_SLPEN;
			CCP6CON1bits.SIDL = CCP_USER_CCP6CON1_SIDL;
			CCP6CON1bits.ON = CCP_USER_CCP6CON1_ON;
			CCP6CON1bits.SYNC = CCP_USER_CCP6CON1_SYNC;
			CCP6CON1bits.ALTSYNC = CCP_USER_CCP6CON1_ALTSYNC;
			CCP6CON1bits.ONESHOT = CCP_USER_CCP6CON1_ONESHOT;
			CCP6CON1bits.TRIGEN = CCP_USER_CCP6CON1_TRIGEN;
			CCP6CON1bits.OPS = CCP_USER_CCP6CON1_OPS;
			CCP6CON1bits.RTRGEN = CCP_USER_CCP6CON1_RTRGEN;
			CCP6CON1bits.OPSSRC = CCP_USER_CCP6CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6CON2 = 
			( CCP_USER_CCP6CON2_ASDG << _CCP6CON2_ASDG_POSITION ) |
			( CCP_USER_CCP6CON2_SSDG << _CCP6CON2_SSDG_POSITION ) |
			( CCP_USER_CCP6CON2_ASDGM << _CCP6CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP6CON2_PWMRSEN << _CCP6CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP6CON2_ICS << _CCP6CON2_ICS_POSITION ) |
			( CCP_USER_CCP6CON2_AUXOUT << _CCP6CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP6CON2_ICGSM << _CCP6CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP6CON2_OCAEN << _CCP6CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP6CON2_OENSYNC << _CCP6CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6CON2bits.ASDG = CCP_USER_CCP6CON2_ASDG;
			CCP6CON2bits.SSDG = CCP_USER_CCP6CON2_SSDG;
			CCP6CON2bits.ASDGM = CCP_USER_CCP6CON2_ASDGM;
			CCP6CON2bits.PWMRSEN = CCP_USER_CCP6CON2_PWMRSEN;
			CCP6CON2bits.ICS = CCP_USER_CCP6CON2_ICS;
			CCP6CON2bits.AUXOUT = CCP_USER_CCP6CON2_AUXOUT;
			CCP6CON2bits.ICGSM = CCP_USER_CCP6CON2_ICGSM;
			CCP6CON2bits.OCAEN = CCP_USER_CCP6CON2_OCAEN;
			CCP6CON2bits.OENSYNC = CCP_USER_CCP6CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6CON3 = 
			( CCP_USER_CCP6CON3_DT << _CCP6CON3_DT_POSITION ) |
			( CCP_USER_CCP6CON3_PSSBDF << _CCP6CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP6CON3_PSSACE << _CCP6CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP6CON3_POLBDF << _CCP6CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP6CON3_POLACE << _CCP6CON3_POLACE_POSITION ) |
			( CCP_USER_CCP6CON3_OUTM << _CCP6CON3_OUTM_POSITION ) |
			( CCP_USER_CCP6CON3_OSCNT << _CCP6CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP6CON3_OETRIG << _CCP6CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6CON3bits.DT = CCP_USER_CCP6CON3_DT;
			CCP6CON3bits.PSSBDF = CCP_USER_CCP6CON3_PSSBDF;
			CCP6CON3bits.PSSACE = CCP_USER_CCP6CON3_PSSACE;
			CCP6CON3bits.POLBDF = CCP_USER_CCP6CON3_POLBDF;
			CCP6CON3bits.POLACE = CCP_USER_CCP6CON3_POLACE;
			CCP6CON3bits.OUTM = CCP_USER_CCP6CON3_OUTM;
			CCP6CON3bits.OSCNT = CCP_USER_CCP6CON3_OSCNT;
			CCP6CON3bits.OETRIG = CCP_USER_CCP6CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6STAT = 
			( CCP_USER_CCP6STAT_ICBNE << _CCP6STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP6STAT_ICOV << _CCP6STAT_ICOV_POSITION ) |
			( CCP_USER_CCP6STAT_ICDIS << _CCP6STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP6STAT_SCEVT << _CCP6STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP6STAT_ASEVT << _CCP6STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP6STAT_TRCLR << _CCP6STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP6STAT_TRSET << _CCP6STAT_TRSET_POSITION ) |
			( CCP_USER_CCP6STAT_CCPTRIG << _CCP6STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP6STAT_ICGARM << _CCP6STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP6STAT_RAWIP << _CCP6STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP6STAT_RBWIP << _CCP6STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP6STAT_TMRLWIP << _CCP6STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP6STAT_TMRHWIP << _CCP6STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP6STAT_PRLWIP << _CCP6STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6STATbits.ICBNE = CCP_USER_CCP6STAT_ICBNE;
			CCP6STATbits.ICOV = CCP_USER_CCP6STAT_ICOV;
			CCP6STATbits.ICDIS = CCP_USER_CCP6STAT_ICDIS;
			CCP6STATbits.SCEVT = CCP_USER_CCP6STAT_SCEVT;
			CCP6STATbits.ASEVT = CCP_USER_CCP6STAT_ASEVT;
			CCP6STATbits.TRCLR = CCP_USER_CCP6STAT_TRCLR;
			CCP6STATbits.TRSET = CCP_USER_CCP6STAT_TRSET;
			CCP6STATbits.CCPTRIG = CCP_USER_CCP6STAT_CCPTRIG;
			CCP6STATbits.ICGARM = CCP_USER_CCP6STAT_ICGARM;
			CCP6STATbits.RAWIP = CCP_USER_CCP6STAT_RAWIP;
			CCP6STATbits.RBWIP = CCP_USER_CCP6STAT_RBWIP;
			CCP6STATbits.TMRLWIP = CCP_USER_CCP6STAT_TMRLWIP;
			CCP6STATbits.TMRHWIP = CCP_USER_CCP6STAT_TMRHWIP;
			CCP6STATbits.PRLWIP = CCP_USER_CCP6STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6TMR = 
			( CCP_USER_CCP6TMR_TMRL << _CCP6TMR_TMRL_POSITION ) |
			( CCP_USER_CCP6TMR_TMRH << _CCP6TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6TMRbits.TMRL = CCP_USER_CCP6TMR_TMRL;
			CCP6TMRbits.TMRH = CCP_USER_CCP6TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6PR = 
			( CCP_USER_CCP6PR_PRL << _CCP6PR_PRL_POSITION ) |
			( CCP_USER_CCP6PR_PRH << _CCP6PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6PRbits.PRL = CCP_USER_CCP6PR_PRL;
			CCP6PRbits.PRH = CCP_USER_CCP6PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6RA = 
			( CCP_USER_CCP6RA_CMPA << _CCP6RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6RAbits.CMPA = CCP_USER_CCP6RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6RB = 
			( CCP_USER_CCP6RB_CMPB << _CCP6RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6RBbits.CMPB = CCP_USER_CCP6RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP6BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP6BUF = 
			( CCP_USER_CCP6BUF_BUFL << _CCP6BUF_BUFL_POSITION ) |
			( CCP_USER_CCP6BUF_BUFH << _CCP6BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP6BUFbits.BUFL = CCP_USER_CCP6BUF_BUFL;
			CCP6BUFbits.BUFH = CCP_USER_CCP6BUF_BUFH;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP7_Set_Register(void)
* @brief        CCP7レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP7_Set_Register(void)
{
#if ( PMD_CCP7MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP7CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7CON1 = 
			( CCP_USER_CCP7CON1_MOD << _CCP7CON1_MOD_POSITION ) |
			( CCP_USER_CCP7CON1_CCSEL << _CCP7CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP7CON1_T32 << _CCP7CON1_T32_POSITION ) |
			( CCP_USER_CCP7CON1_TMRPS << _CCP7CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP7CON1_CLKSEL << _CCP7CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP7CON1_TMRSYNC << _CCP7CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP7CON1_SLPEN << _CCP7CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP7CON1_SIDL << _CCP7CON1_SIDL_POSITION ) |
			( CCP_USER_CCP7CON1_ON << _CCP7CON1_ON_POSITION ) |
			( CCP_USER_CCP7CON1_SYNC << _CCP7CON1_SYNC_POSITION ) |
			( CCP_USER_CCP7CON1_ALTSYNC << _CCP7CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP7CON1_ONESHOT << _CCP7CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP7CON1_TRIGEN << _CCP7CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP7CON1_OPS << _CCP7CON1_OPS_POSITION ) |
			( CCP_USER_CCP7CON1_RTRGEN << _CCP7CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP7CON1_OPSSRC << _CCP7CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7CON1bits.MOD = CCP_USER_CCP7CON1_MOD;
			CCP7CON1bits.CCSEL = CCP_USER_CCP7CON1_CCSEL;
			CCP7CON1bits.T32 = CCP_USER_CCP7CON1_T32;
			CCP7CON1bits.TMRPS = CCP_USER_CCP7CON1_TMRPS;
			CCP7CON1bits.CLKSEL = CCP_USER_CCP7CON1_CLKSEL;
			CCP7CON1bits.TMRSYNC = CCP_USER_CCP7CON1_TMRSYNC;
			CCP7CON1bits.SLPEN = CCP_USER_CCP7CON1_SLPEN;
			CCP7CON1bits.SIDL = CCP_USER_CCP7CON1_SIDL;
			CCP7CON1bits.ON = CCP_USER_CCP7CON1_ON;
			CCP7CON1bits.SYNC = CCP_USER_CCP7CON1_SYNC;
			CCP7CON1bits.ALTSYNC = CCP_USER_CCP7CON1_ALTSYNC;
			CCP7CON1bits.ONESHOT = CCP_USER_CCP7CON1_ONESHOT;
			CCP7CON1bits.TRIGEN = CCP_USER_CCP7CON1_TRIGEN;
			CCP7CON1bits.OPS = CCP_USER_CCP7CON1_OPS;
			CCP7CON1bits.RTRGEN = CCP_USER_CCP7CON1_RTRGEN;
			CCP7CON1bits.OPSSRC = CCP_USER_CCP7CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7CON2 = 
			( CCP_USER_CCP7CON2_ASDG << _CCP7CON2_ASDG_POSITION ) |
			( CCP_USER_CCP7CON2_SSDG << _CCP7CON2_SSDG_POSITION ) |
			( CCP_USER_CCP7CON2_ASDGM << _CCP7CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP7CON2_PWMRSEN << _CCP7CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP7CON2_ICS << _CCP7CON2_ICS_POSITION ) |
			( CCP_USER_CCP7CON2_AUXOUT << _CCP7CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP7CON2_ICGSM << _CCP7CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP7CON2_OCAEN << _CCP7CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP7CON2_OENSYNC << _CCP7CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7CON2bits.ASDG = CCP_USER_CCP7CON2_ASDG;
			CCP7CON2bits.SSDG = CCP_USER_CCP7CON2_SSDG;
			CCP7CON2bits.ASDGM = CCP_USER_CCP7CON2_ASDGM;
			CCP7CON2bits.PWMRSEN = CCP_USER_CCP7CON2_PWMRSEN;
			CCP7CON2bits.ICS = CCP_USER_CCP7CON2_ICS;
			CCP7CON2bits.AUXOUT = CCP_USER_CCP7CON2_AUXOUT;
			CCP7CON2bits.ICGSM = CCP_USER_CCP7CON2_ICGSM;
			CCP7CON2bits.OCAEN = CCP_USER_CCP7CON2_OCAEN;
			CCP7CON2bits.OENSYNC = CCP_USER_CCP7CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7CON3 = 
			( CCP_USER_CCP7CON3_DT << _CCP7CON3_DT_POSITION ) |
			( CCP_USER_CCP7CON3_PSSBDF << _CCP7CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP7CON3_PSSACE << _CCP7CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP7CON3_POLBDF << _CCP7CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP7CON3_POLACE << _CCP7CON3_POLACE_POSITION ) |
			( CCP_USER_CCP7CON3_OUTM << _CCP7CON3_OUTM_POSITION ) |
			( CCP_USER_CCP7CON3_OSCNT << _CCP7CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP7CON3_OETRIG << _CCP7CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7CON3bits.DT = CCP_USER_CCP7CON3_DT;
			CCP7CON3bits.PSSBDF = CCP_USER_CCP7CON3_PSSBDF;
			CCP7CON3bits.PSSACE = CCP_USER_CCP7CON3_PSSACE;
			CCP7CON3bits.POLBDF = CCP_USER_CCP7CON3_POLBDF;
			CCP7CON3bits.POLACE = CCP_USER_CCP7CON3_POLACE;
			CCP7CON3bits.OUTM = CCP_USER_CCP7CON3_OUTM;
			CCP7CON3bits.OSCNT = CCP_USER_CCP7CON3_OSCNT;
			CCP7CON3bits.OETRIG = CCP_USER_CCP7CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7STAT = 
			( CCP_USER_CCP7STAT_ICBNE << _CCP7STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP7STAT_ICOV << _CCP7STAT_ICOV_POSITION ) |
			( CCP_USER_CCP7STAT_ICDIS << _CCP7STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP7STAT_SCEVT << _CCP7STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP7STAT_ASEVT << _CCP7STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP7STAT_TRCLR << _CCP7STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP7STAT_TRSET << _CCP7STAT_TRSET_POSITION ) |
			( CCP_USER_CCP7STAT_CCPTRIG << _CCP7STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP7STAT_ICGARM << _CCP7STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP7STAT_RAWIP << _CCP7STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP7STAT_RBWIP << _CCP7STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP7STAT_TMRLWIP << _CCP7STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP7STAT_TMRHWIP << _CCP7STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP7STAT_PRLWIP << _CCP7STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7STATbits.ICBNE = CCP_USER_CCP7STAT_ICBNE;
			CCP7STATbits.ICOV = CCP_USER_CCP7STAT_ICOV;
			CCP7STATbits.ICDIS = CCP_USER_CCP7STAT_ICDIS;
			CCP7STATbits.SCEVT = CCP_USER_CCP7STAT_SCEVT;
			CCP7STATbits.ASEVT = CCP_USER_CCP7STAT_ASEVT;
			CCP7STATbits.TRCLR = CCP_USER_CCP7STAT_TRCLR;
			CCP7STATbits.TRSET = CCP_USER_CCP7STAT_TRSET;
			CCP7STATbits.CCPTRIG = CCP_USER_CCP7STAT_CCPTRIG;
			CCP7STATbits.ICGARM = CCP_USER_CCP7STAT_ICGARM;
			CCP7STATbits.RAWIP = CCP_USER_CCP7STAT_RAWIP;
			CCP7STATbits.RBWIP = CCP_USER_CCP7STAT_RBWIP;
			CCP7STATbits.TMRLWIP = CCP_USER_CCP7STAT_TMRLWIP;
			CCP7STATbits.TMRHWIP = CCP_USER_CCP7STAT_TMRHWIP;
			CCP7STATbits.PRLWIP = CCP_USER_CCP7STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7TMR = 
			( CCP_USER_CCP7TMR_TMRL << _CCP7TMR_TMRL_POSITION ) |
			( CCP_USER_CCP7TMR_TMRH << _CCP7TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7TMRbits.TMRL = CCP_USER_CCP7TMR_TMRL;
			CCP7TMRbits.TMRH = CCP_USER_CCP7TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7PR = 
			( CCP_USER_CCP7PR_PRL << _CCP7PR_PRL_POSITION ) |
			( CCP_USER_CCP7PR_PRH << _CCP7PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7PRbits.PRL = CCP_USER_CCP7PR_PRL;
			CCP7PRbits.PRH = CCP_USER_CCP7PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7RA = 
			( CCP_USER_CCP7RA_CMPA << _CCP7RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7RAbits.CMPA = CCP_USER_CCP7RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7RB = 
			( CCP_USER_CCP7RB_CMPB << _CCP7RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7RBbits.CMPB = CCP_USER_CCP7RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP7BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP7BUF = 
			( CCP_USER_CCP7BUF_BUFL << _CCP7BUF_BUFL_POSITION ) |
			( CCP_USER_CCP7BUF_BUFH << _CCP7BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP7BUFbits.BUFL = CCP_USER_CCP7BUF_BUFL;
			CCP7BUFbits.BUFH = CCP_USER_CCP7BUF_BUFH;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP8_Set_Register(void)
* @brief     CCP8レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP8_Set_Register(void)
{
#if ( PMD_CCP8MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* CCP8CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8CON1 = 
			( CCP_USER_CCP8CON1_MOD << _CCP8CON1_MOD_POSITION ) |
			( CCP_USER_CCP8CON1_CCSEL << _CCP8CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP8CON1_T32 << _CCP8CON1_T32_POSITION ) |
			( CCP_USER_CCP8CON1_TMRPS << _CCP8CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP8CON1_CLKSEL << _CCP8CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP8CON1_TMRSYNC << _CCP8CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP8CON1_SLPEN << _CCP8CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP8CON1_SIDL << _CCP8CON1_SIDL_POSITION ) |
			( CCP_USER_CCP8CON1_ON << _CCP8CON1_ON_POSITION ) |
			( CCP_USER_CCP8CON1_SYNC << _CCP8CON1_SYNC_POSITION ) |
			( CCP_USER_CCP8CON1_ALTSYNC << _CCP8CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP8CON1_ONESHOT << _CCP8CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP8CON1_TRIGEN << _CCP8CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP8CON1_OPS << _CCP8CON1_OPS_POSITION ) |
			( CCP_USER_CCP8CON1_RTRGEN << _CCP8CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP8CON1_OPSSRC << _CCP8CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8CON1bits.MOD = CCP_USER_CCP8CON1_MOD;
			CCP8CON1bits.CCSEL = CCP_USER_CCP8CON1_CCSEL;
			CCP8CON1bits.T32 = CCP_USER_CCP8CON1_T32;
			CCP8CON1bits.TMRPS = CCP_USER_CCP8CON1_TMRPS;
			CCP8CON1bits.CLKSEL = CCP_USER_CCP8CON1_CLKSEL;
			CCP8CON1bits.TMRSYNC = CCP_USER_CCP8CON1_TMRSYNC;
			CCP8CON1bits.SLPEN = CCP_USER_CCP8CON1_SLPEN;
			CCP8CON1bits.SIDL = CCP_USER_CCP8CON1_SIDL;
			CCP8CON1bits.ON = CCP_USER_CCP8CON1_ON;
			CCP8CON1bits.SYNC = CCP_USER_CCP8CON1_SYNC;
			CCP8CON1bits.ALTSYNC = CCP_USER_CCP8CON1_ALTSYNC;
			CCP8CON1bits.ONESHOT = CCP_USER_CCP8CON1_ONESHOT;
			CCP8CON1bits.TRIGEN = CCP_USER_CCP8CON1_TRIGEN;
			CCP8CON1bits.OPS = CCP_USER_CCP8CON1_OPS;
			CCP8CON1bits.RTRGEN = CCP_USER_CCP8CON1_RTRGEN;
			CCP8CON1bits.OPSSRC = CCP_USER_CCP8CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8CON2 = 
			( CCP_USER_CCP8CON2_ASDG << _CCP8CON2_ASDG_POSITION ) |
			( CCP_USER_CCP8CON2_SSDG << _CCP8CON2_SSDG_POSITION ) |
			( CCP_USER_CCP8CON2_ASDGM << _CCP8CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP8CON2_PWMRSEN << _CCP8CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP8CON2_ICS << _CCP8CON2_ICS_POSITION ) |
			( CCP_USER_CCP8CON2_AUXOUT << _CCP8CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP8CON2_ICGSM << _CCP8CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP8CON2_OCAEN << _CCP8CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP8CON2_OENSYNC << _CCP8CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8CON2bits.ASDG = CCP_USER_CCP8CON2_ASDG;
			CCP8CON2bits.SSDG = CCP_USER_CCP8CON2_SSDG;
			CCP8CON2bits.ASDGM = CCP_USER_CCP8CON2_ASDGM;
			CCP8CON2bits.PWMRSEN = CCP_USER_CCP8CON2_PWMRSEN;
			CCP8CON2bits.ICS = CCP_USER_CCP8CON2_ICS;
			CCP8CON2bits.AUXOUT = CCP_USER_CCP8CON2_AUXOUT;
			CCP8CON2bits.ICGSM = CCP_USER_CCP8CON2_ICGSM;
			CCP8CON2bits.OCAEN = CCP_USER_CCP8CON2_OCAEN;
			CCP8CON2bits.OENSYNC = CCP_USER_CCP8CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8CON3 = 
			( CCP_USER_CCP8CON3_DT << _CCP8CON3_DT_POSITION ) |
			( CCP_USER_CCP8CON3_PSSBDF << _CCP8CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP8CON3_PSSACE << _CCP8CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP8CON3_POLBDF << _CCP8CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP8CON3_POLACE << _CCP8CON3_POLACE_POSITION ) |
			( CCP_USER_CCP8CON3_OUTM << _CCP8CON3_OUTM_POSITION ) |
			( CCP_USER_CCP8CON3_OSCNT << _CCP8CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP8CON3_OETRIG << _CCP8CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8CON3bits.DT = CCP_USER_CCP8CON3_DT;
			CCP8CON3bits.PSSBDF = CCP_USER_CCP8CON3_PSSBDF;
			CCP8CON3bits.PSSACE = CCP_USER_CCP8CON3_PSSACE;
			CCP8CON3bits.POLBDF = CCP_USER_CCP8CON3_POLBDF;
			CCP8CON3bits.POLACE = CCP_USER_CCP8CON3_POLACE;
			CCP8CON3bits.OUTM = CCP_USER_CCP8CON3_OUTM;
			CCP8CON3bits.OSCNT = CCP_USER_CCP8CON3_OSCNT;
			CCP8CON3bits.OETRIG = CCP_USER_CCP8CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8STAT = 
			( CCP_USER_CCP8STAT_ICBNE << _CCP8STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP8STAT_ICOV << _CCP8STAT_ICOV_POSITION ) |
			( CCP_USER_CCP8STAT_ICDIS << _CCP8STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP8STAT_SCEVT << _CCP8STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP8STAT_ASEVT << _CCP8STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP8STAT_TRCLR << _CCP8STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP8STAT_TRSET << _CCP8STAT_TRSET_POSITION ) |
			( CCP_USER_CCP8STAT_CCPTRIG << _CCP8STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP8STAT_ICGARM << _CCP8STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP8STAT_RAWIP << _CCP8STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP8STAT_RBWIP << _CCP8STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP8STAT_TMRLWIP << _CCP8STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP8STAT_TMRHWIP << _CCP8STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP8STAT_PRLWIP << _CCP8STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8STATbits.ICBNE = CCP_USER_CCP8STAT_ICBNE;
			CCP8STATbits.ICOV = CCP_USER_CCP8STAT_ICOV;
			CCP8STATbits.ICDIS = CCP_USER_CCP8STAT_ICDIS;
			CCP8STATbits.SCEVT = CCP_USER_CCP8STAT_SCEVT;
			CCP8STATbits.ASEVT = CCP_USER_CCP8STAT_ASEVT;
			CCP8STATbits.TRCLR = CCP_USER_CCP8STAT_TRCLR;
			CCP8STATbits.TRSET = CCP_USER_CCP8STAT_TRSET;
			CCP8STATbits.CCPTRIG = CCP_USER_CCP8STAT_CCPTRIG;
			CCP8STATbits.ICGARM = CCP_USER_CCP8STAT_ICGARM;
			CCP8STATbits.RAWIP = CCP_USER_CCP8STAT_RAWIP;
			CCP8STATbits.RBWIP = CCP_USER_CCP8STAT_RBWIP;
			CCP8STATbits.TMRLWIP = CCP_USER_CCP8STAT_TMRLWIP;
			CCP8STATbits.TMRHWIP = CCP_USER_CCP8STAT_TMRHWIP;
			CCP8STATbits.PRLWIP = CCP_USER_CCP8STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8TMR = 
			( CCP_USER_CCP8TMR_TMRL << _CCP8TMR_TMRL_POSITION ) |
			( CCP_USER_CCP8TMR_TMRH << _CCP8TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8TMRbits.TMRL = CCP_USER_CCP8TMR_TMRL;
			CCP8TMRbits.TMRH = CCP_USER_CCP8TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8PR = 
			( CCP_USER_CCP8PR_PRL << _CCP8PR_PRL_POSITION ) |
			( CCP_USER_CCP8PR_PRH << _CCP8PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8PRbits.PRL = CCP_USER_CCP8PR_PRL;
			CCP8PRbits.PRH = CCP_USER_CCP8PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8RA = 
			( CCP_USER_CCP8RA_CMPA << _CCP8RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8RAbits.CMPA = CCP_USER_CCP8RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8RB = 
			( CCP_USER_CCP8RB_CMPB << _CCP8RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8RBbits.CMPB = CCP_USER_CCP8RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP8BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP8BUF = 
			( CCP_USER_CCP8BUF_BUFL << _CCP8BUF_BUFL_POSITION ) |
			( CCP_USER_CCP8BUF_BUFH << _CCP8BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP8BUFbits.BUFL = CCP_USER_CCP8BUF_BUFL;
			CCP8BUFbits.BUFH = CCP_USER_CCP8BUF_BUFH;
		#endif 

#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP9_Set_Register(void)
* @brief     CCP9レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP9_Set_Register(void)
{
#if ( PMD_CCP9MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* CCP9CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9CON1 = 
			( CCP_USER_CCP9CON1_MOD << _CCP9CON1_MOD_POSITION ) |
			( CCP_USER_CCP9CON1_CCSEL << _CCP9CON1_CCSEL_POSITION ) |
			( CCP_USER_CCP9CON1_T32 << _CCP9CON1_T32_POSITION ) |
			( CCP_USER_CCP9CON1_TMRPS << _CCP9CON1_TMRPS_POSITION ) |
			( CCP_USER_CCP9CON1_CLKSEL << _CCP9CON1_CLKSEL_POSITION ) |
			( CCP_USER_CCP9CON1_TMRSYNC << _CCP9CON1_TMRSYNC_POSITION ) |
			( CCP_USER_CCP9CON1_SLPEN << _CCP9CON1_SLPEN_POSITION ) |
			( CCP_USER_CCP9CON1_SIDL << _CCP9CON1_SIDL_POSITION ) |
			( CCP_USER_CCP9CON1_ON << _CCP9CON1_ON_POSITION ) |
			( CCP_USER_CCP9CON1_SYNC << _CCP9CON1_SYNC_POSITION ) |
			( CCP_USER_CCP9CON1_ALTSYNC << _CCP9CON1_ALTSYNC_POSITION ) |
			( CCP_USER_CCP9CON1_ONESHOT << _CCP9CON1_ONESHOT_POSITION ) |
			( CCP_USER_CCP9CON1_TRIGEN << _CCP9CON1_TRIGEN_POSITION ) |
			( CCP_USER_CCP9CON1_OPS << _CCP9CON1_OPS_POSITION ) |
			( CCP_USER_CCP9CON1_RTRGEN << _CCP9CON1_RTRGEN_POSITION ) |
			( CCP_USER_CCP9CON1_OPSSRC << _CCP9CON1_OPSSRC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9CON1bits.MOD = CCP_USER_CCP9CON1_MOD;
			CCP9CON1bits.CCSEL = CCP_USER_CCP9CON1_CCSEL;
			CCP9CON1bits.T32 = CCP_USER_CCP9CON1_T32;
			CCP9CON1bits.TMRPS = CCP_USER_CCP9CON1_TMRPS;
			CCP9CON1bits.CLKSEL = CCP_USER_CCP9CON1_CLKSEL;
			CCP9CON1bits.TMRSYNC = CCP_USER_CCP9CON1_TMRSYNC;
			CCP9CON1bits.SLPEN = CCP_USER_CCP9CON1_SLPEN;
			CCP9CON1bits.SIDL = CCP_USER_CCP9CON1_SIDL;
			CCP9CON1bits.ON = CCP_USER_CCP9CON1_ON;
			CCP9CON1bits.SYNC = CCP_USER_CCP9CON1_SYNC;
			CCP9CON1bits.ALTSYNC = CCP_USER_CCP9CON1_ALTSYNC;
			CCP9CON1bits.ONESHOT = CCP_USER_CCP9CON1_ONESHOT;
			CCP9CON1bits.TRIGEN = CCP_USER_CCP9CON1_TRIGEN;
			CCP9CON1bits.OPS = CCP_USER_CCP9CON1_OPS;
			CCP9CON1bits.RTRGEN = CCP_USER_CCP9CON1_RTRGEN;
			CCP9CON1bits.OPSSRC = CCP_USER_CCP9CON1_OPSSRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9CON2 = 
			( CCP_USER_CCP9CON2_ASDG << _CCP9CON2_ASDG_POSITION ) |
			( CCP_USER_CCP9CON2_SSDG << _CCP9CON2_SSDG_POSITION ) |
			( CCP_USER_CCP9CON2_ASDGM << _CCP9CON2_ASDGM_POSITION ) |
			( CCP_USER_CCP9CON2_PWMRSEN << _CCP9CON2_PWMRSEN_POSITION ) |
			( CCP_USER_CCP9CON2_ICS << _CCP9CON2_ICS_POSITION ) |
			( CCP_USER_CCP9CON2_AUXOUT << _CCP9CON2_AUXOUT_POSITION ) |
			( CCP_USER_CCP9CON2_ICGSM << _CCP9CON2_ICGSM_POSITION ) |
			( CCP_USER_CCP9CON2_OCAEN << _CCP9CON2_OCAEN_POSITION ) |
			( CCP_USER_CCP9CON2_OCBEN << _CCP9CON2_OCBEN_POSITION ) |
			( CCP_USER_CCP9CON2_OCCEN << _CCP9CON2_OCCEN_POSITION ) |
			( CCP_USER_CCP9CON2_OCDEN << _CCP9CON2_OCDEN_POSITION ) |
			( CCP_USER_CCP9CON2_OCEEN << _CCP9CON2_OCEEN_POSITION ) |
			( CCP_USER_CCP9CON2_OCFEN << _CCP9CON2_OCFEN_POSITION ) |
			( CCP_USER_CCP9CON2_OENSYNC << _CCP9CON2_OENSYNC_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9CON2bits.ASDG = CCP_USER_CCP9CON2_ASDG;
			CCP9CON2bits.SSDG = CCP_USER_CCP9CON2_SSDG;
			CCP9CON2bits.ASDGM = CCP_USER_CCP9CON2_ASDGM;
			CCP9CON2bits.PWMRSEN = CCP_USER_CCP9CON2_PWMRSEN;
			CCP9CON2bits.ICS = CCP_USER_CCP9CON2_ICS;
			CCP9CON2bits.AUXOUT = CCP_USER_CCP9CON2_AUXOUT;
			CCP9CON2bits.ICGSM = CCP_USER_CCP9CON2_ICGSM;
			CCP9CON2bits.OCAEN = CCP_USER_CCP9CON2_OCAEN;
			CCP9CON2bits.OCBEN = CCP_USER_CCP9CON2_OCBEN;
			CCP9CON2bits.OCCEN = CCP_USER_CCP9CON2_OCCEN;
			CCP9CON2bits.OCDEN = CCP_USER_CCP9CON2_OCDEN;
			CCP9CON2bits.OCEEN = CCP_USER_CCP9CON2_OCEEN;
			CCP9CON2bits.OCFEN = CCP_USER_CCP9CON2_OCFEN;
			CCP9CON2bits.OENSYNC = CCP_USER_CCP9CON2_OENSYNC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9CON3レジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9CON3 = 
			( CCP_USER_CCP9CON3_DT << _CCP9CON3_DT_POSITION ) |
			( CCP_USER_CCP9CON3_PSSBDF << _CCP9CON3_PSSBDF_POSITION ) |
			( CCP_USER_CCP9CON3_PSSACE << _CCP9CON3_PSSACE_POSITION ) |
			( CCP_USER_CCP9CON3_POLBDF << _CCP9CON3_POLBDF_POSITION ) |
			( CCP_USER_CCP9CON3_POLACE << _CCP9CON3_POLACE_POSITION ) |
			( CCP_USER_CCP9CON3_OUTM << _CCP9CON3_OUTM_POSITION ) |
			( CCP_USER_CCP9CON3_OSCNT << _CCP9CON3_OSCNT_POSITION ) |
			( CCP_USER_CCP9CON3_OETRIG << _CCP9CON3_OETRIG_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9CON3bits.DT = CCP_USER_CCP9CON3_DT;
			CCP9CON3bits.PSSBDF = CCP_USER_CCP9CON3_PSSBDF;
			CCP9CON3bits.PSSACE = CCP_USER_CCP9CON3_PSSACE;
			CCP9CON3bits.POLBDF = CCP_USER_CCP9CON3_POLBDF;
			CCP9CON3bits.POLACE = CCP_USER_CCP9CON3_POLACE;
			CCP9CON3bits.OUTM = CCP_USER_CCP9CON3_OUTM;
			CCP9CON3bits.OSCNT = CCP_USER_CCP9CON3_OSCNT;
			CCP9CON3bits.OETRIG = CCP_USER_CCP9CON3_OETRIG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9STAT = 
			( CCP_USER_CCP9STAT_ICBNE << _CCP9STAT_ICBNE_POSITION ) |
			( CCP_USER_CCP9STAT_ICOV << _CCP9STAT_ICOV_POSITION ) |
			( CCP_USER_CCP9STAT_ICDIS << _CCP9STAT_ICDIS_POSITION ) |
			( CCP_USER_CCP9STAT_SCEVT << _CCP9STAT_SCEVT_POSITION ) |
			( CCP_USER_CCP9STAT_ASEVT << _CCP9STAT_ASEVT_POSITION ) |
			( CCP_USER_CCP9STAT_TRCLR << _CCP9STAT_TRCLR_POSITION ) |
			( CCP_USER_CCP9STAT_TRSET << _CCP9STAT_TRSET_POSITION ) |
			( CCP_USER_CCP9STAT_CCPTRIG << _CCP9STAT_CCPTRIG_POSITION ) |
			( CCP_USER_CCP9STAT_ICGARM << _CCP9STAT_ICGARM_POSITION ) |
			( CCP_USER_CCP9STAT_RAWIP << _CCP9STAT_RAWIP_POSITION ) |
			( CCP_USER_CCP9STAT_RBWIP << _CCP9STAT_RBWIP_POSITION ) |
			( CCP_USER_CCP9STAT_TMRLWIP << _CCP9STAT_TMRLWIP_POSITION ) |
			( CCP_USER_CCP9STAT_TMRHWIP << _CCP9STAT_TMRHWIP_POSITION ) |
			( CCP_USER_CCP9STAT_PRLWIP << _CCP9STAT_PRLWIP_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9STATbits.ICBNE = CCP_USER_CCP9STAT_ICBNE;
			CCP9STATbits.ICOV = CCP_USER_CCP9STAT_ICOV;
			CCP9STATbits.ICDIS = CCP_USER_CCP9STAT_ICDIS;
			CCP9STATbits.SCEVT = CCP_USER_CCP9STAT_SCEVT;
			CCP9STATbits.ASEVT = CCP_USER_CCP9STAT_ASEVT;
			CCP9STATbits.TRCLR = CCP_USER_CCP9STAT_TRCLR;
			CCP9STATbits.TRSET = CCP_USER_CCP9STAT_TRSET;
			CCP9STATbits.CCPTRIG = CCP_USER_CCP9STAT_CCPTRIG;
			CCP9STATbits.ICGARM = CCP_USER_CCP9STAT_ICGARM;
			CCP9STATbits.RAWIP = CCP_USER_CCP9STAT_RAWIP;
			CCP9STATbits.RBWIP = CCP_USER_CCP9STAT_RBWIP;
			CCP9STATbits.TMRLWIP = CCP_USER_CCP9STAT_TMRLWIP;
			CCP9STATbits.TMRHWIP = CCP_USER_CCP9STAT_TMRHWIP;
			CCP9STATbits.PRLWIP = CCP_USER_CCP9STAT_PRLWIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9TMR = 
			( CCP_USER_CCP9TMR_TMRL << _CCP9TMR_TMRL_POSITION ) |
			( CCP_USER_CCP9TMR_TMRH << _CCP9TMR_TMRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9TMRbits.TMRL = CCP_USER_CCP9TMR_TMRL;
			CCP9TMRbits.TMRH = CCP_USER_CCP9TMR_TMRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9PRレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9PR = 
			( CCP_USER_CCP9PR_PRL << _CCP9PR_PRL_POSITION ) |
			( CCP_USER_CCP9PR_PRH << _CCP9PR_PRH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9PRbits.PRL = CCP_USER_CCP9PR_PRL;
			CCP9PRbits.PRH = CCP_USER_CCP9PR_PRH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9RAレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9RA = 
			( CCP_USER_CCP9RA_CMPA << _CCP9RA_CMPA_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9RAbits.CMPA = CCP_USER_CCP9RA_CMPA;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9RBレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9RB = 
			( CCP_USER_CCP9RB_CMPB << _CCP9RB_CMPB_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9RBbits.CMPB = CCP_USER_CCP9RB_CMPB;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CCP9BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CCP9BUF = 
			( CCP_USER_CCP9BUF_BUFL << _CCP9BUF_BUFL_POSITION ) |
			( CCP_USER_CCP9BUF_BUFH << _CCP9BUF_BUFH_POSITION ) ;
		#ifdef DEF_BITNAME
			CCP9BUFbits.BUFL = CCP_USER_CCP9BUF_BUFL;
			CCP9BUFbits.BUFH = CCP_USER_CCP9BUF_BUFH;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CCP_Set_Register(void) 
* @brief        全てのCCPレジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CCP_Set_Register(void)
{
#if ( PMD_CCP1MD == PMD_MODULE_ENABLE )
    vdg_CCP1_Set_Register();
#endif
#if ( PMD_CCP2MD == PMD_MODULE_ENABLE )
    vdg_CCP2_Set_Register();
#endif
#if ( PMD_CCP3MD == PMD_MODULE_ENABLE )
    vdg_CCP3_Set_Register();
#endif
#if ( PMD_CCP4MD == PMD_MODULE_ENABLE )
    vdg_CCP4_Set_Register();
#endif
#if ( PMD_CCP5MD == PMD_MODULE_ENABLE )
    vdg_CCP5_Set_Register();
#endif
#if ( PMD_CCP6MD == PMD_MODULE_ENABLE )
    vdg_CCP6_Set_Register();
#endif
#if ( PMD_CCP7MD == PMD_MODULE_ENABLE )
    vdg_CCP7_Set_Register();
#endif
#if ( PMD_CCP8MD == PMD_MODULE_ENABLE )
    vdg_CCP8_Set_Register();
#endif
#if ( PMD_CCP9MD == PMD_MODULE_ENABLE )
    vdg_CCP9_Set_Register();
#endif
}