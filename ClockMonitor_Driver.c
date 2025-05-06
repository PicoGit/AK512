/*----------------------------------------------------------------------------*/
/**
* @file		ClockMonitor_Driver.c
* @brief	ClockMonitorモジュールに関するドライバ関数
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
#include "clockmonitor_user.h"
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
* @fn        vdg_CM1_Set_Register(void)
* @brief     CM1レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM1_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1CON = 
			( CM_USER_CM1CON_WIDTH << _CM1CON_WIDTH_POSITION ) |
			( CM_USER_CM1CON_FLTINJ << _CM1CON_FLTINJ_POSITION ) |
			( CM_USER_CM1CON_CNTDIV << _CM1CON_CNTDIV_POSITION ) |
			( CM_USER_CM1CON_SLPEN << _CM1CON_SLPEN_POSITION ) |
			( CM_USER_CM1CON_SIDL << _CM1CON_SIDL_POSITION ) |
			( CM_USER_CM1CON_ON << _CM1CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			CM1CONbits.WIDTH = CM_USER_CM1CON_WIDTH;
			CM1CONbits.FLTINJ = CM_USER_CM1CON_FLTINJ;
			CM1CONbits.CNTDIV = CM_USER_CM1CON_CNTDIV;
			CM1CONbits.SLPEN = CM_USER_CM1CON_SLPEN;
			CM1CONbits.SIDL = CM_USER_CM1CON_SIDL;
			CM1CONbits.ON = CM_USER_CM1CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1STAT = 
			( CM_USER_CM1STAT_BUFV << _CM1STAT_BUFV_POSITION ) |
			( CM_USER_CM1STAT_SATD << _CM1STAT_SATD_POSITION ) |
			( CM_USER_CM1STAT_TRIG << _CM1STAT_TRIG_POSITION ) |
			( CM_USER_CM1STAT_LFT << _CM1STAT_LFT_POSITION ) |
			( CM_USER_CM1STAT_HFT << _CM1STAT_HFT_POSITION ) |
			( CM_USER_CM1STAT_LWT << _CM1STAT_LWT_POSITION ) |
			( CM_USER_CM1STAT_HWT << _CM1STAT_HWT_POSITION ) ;
		#ifdef DEF_BITNAME
			CM1STATbits.BUFV = CM_USER_CM1STAT_BUFV;
			CM1STATbits.SATD = CM_USER_CM1STAT_SATD;
			CM1STATbits.TRIG = CM_USER_CM1STAT_TRIG;
			CM1STATbits.LFT = CM_USER_CM1STAT_LFT;
			CM1STATbits.HFT = CM_USER_CM1STAT_HFT;
			CM1STATbits.LWT = CM_USER_CM1STAT_LWT;
			CM1STATbits.HWT = CM_USER_CM1STAT_HWT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM1WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1WINPR = CM_USER_CM1WINPR;
	/*-----------------------------------------------------------------------*/
	/* CM1SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1SEL = 
			( CM_USER_CM1SEL_WINSEL << _CM1SEL_WINSEL_POSITION ) |
			( CM_USER_CM1SEL_CNTSEL << _CM1SEL_CNTSEL_POSITION ) ;
		#ifdef DEF_BITNAME
			CM1SELbits.WINSEL = CM_USER_CM1SEL_WINSEL;
			CM1SELbits.CNTSEL = CM_USER_CM1SEL_CNTSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM1BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1BUF = CM_USER_CM1BUF;
	/*-----------------------------------------------------------------------*/
	/* CM1SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1SAT = CM_USER_CM1SAT;
	/*-----------------------------------------------------------------------*/
	/* CM1HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1HFAIL = CM_USER_CM1HFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM1LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1LFAIL = CM_USER_CM1LFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM1HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1HWARN = CM_USER_CM1HWARN;
	/*-----------------------------------------------------------------------*/
	/* CM1LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM1LWARN = CM_USER_CM1LWARN;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM2_Set_Register(void)
* @brief     CM2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM2_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2CON = 
			( CM_USER_CM2CON_WIDTH << _CM2CON_WIDTH_POSITION ) |
			( CM_USER_CM2CON_FLTINJ << _CM2CON_FLTINJ_POSITION ) |
			( CM_USER_CM2CON_CNTDIV << _CM2CON_CNTDIV_POSITION ) |
			( CM_USER_CM2CON_SLPEN << _CM2CON_SLPEN_POSITION ) |
			( CM_USER_CM2CON_SIDL << _CM2CON_SIDL_POSITION ) |
			( CM_USER_CM2CON_ON << _CM2CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			CM2CONbits.WIDTH = CM_USER_CM2CON_WIDTH;
			CM2CONbits.FLTINJ = CM_USER_CM2CON_FLTINJ;
			CM2CONbits.CNTDIV = CM_USER_CM2CON_CNTDIV;
			CM2CONbits.SLPEN = CM_USER_CM2CON_SLPEN;
			CM2CONbits.SIDL = CM_USER_CM2CON_SIDL;
			CM2CONbits.ON = CM_USER_CM2CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2STAT = 
			( CM_USER_CM2STAT_BUFV << _CM2STAT_BUFV_POSITION ) |
			( CM_USER_CM2STAT_SATD << _CM2STAT_SATD_POSITION ) |
			( CM_USER_CM2STAT_TRIG << _CM2STAT_TRIG_POSITION ) |
			( CM_USER_CM2STAT_LFT << _CM2STAT_LFT_POSITION ) |
			( CM_USER_CM2STAT_HFT << _CM2STAT_HFT_POSITION ) |
			( CM_USER_CM2STAT_LWT << _CM2STAT_LWT_POSITION ) |
			( CM_USER_CM2STAT_HWT << _CM2STAT_HWT_POSITION ) ;
		#ifdef DEF_BITNAME
			CM2STATbits.BUFV = CM_USER_CM2STAT_BUFV;
			CM2STATbits.SATD = CM_USER_CM2STAT_SATD;
			CM2STATbits.TRIG = CM_USER_CM2STAT_TRIG;
			CM2STATbits.LFT = CM_USER_CM2STAT_LFT;
			CM2STATbits.HFT = CM_USER_CM2STAT_HFT;
			CM2STATbits.LWT = CM_USER_CM2STAT_LWT;
			CM2STATbits.HWT = CM_USER_CM2STAT_HWT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM2WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2WINPR = CM_USER_CM2WINPR;
	/*-----------------------------------------------------------------------*/
	/* CM2SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2SEL = 
			( CM_USER_CM2SEL_WINSEL << _CM2SEL_WINSEL_POSITION ) |
			( CM_USER_CM2SEL_CNTSEL << _CM2SEL_CNTSEL_POSITION ) ;
		#ifdef DEF_BITNAME
			CM2SELbits.WINSEL = CM_USER_CM2SEL_WINSEL;
			CM2SELbits.CNTSEL = CM_USER_CM2SEL_CNTSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM2BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2BUF = CM_USER_CM2BUF;
	/*-----------------------------------------------------------------------*/
	/* CM2SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2SAT = CM_USER_CM2SAT;
	/*-----------------------------------------------------------------------*/
	/* CM2HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2HFAIL = CM_USER_CM2HFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM2LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2LFAIL = CM_USER_CM2LFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM2HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2HWARN = CM_USER_CM2HWARN;
	/*-----------------------------------------------------------------------*/
	/* CM2LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM2LWARN = CM_USER_CM2LWARN;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM3_Set_Register(void)
* @brief     CM3レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM3_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3CON = 
			( CM_USER_CM3CON_WIDTH << _CM3CON_WIDTH_POSITION ) |
			( CM_USER_CM3CON_FLTINJ << _CM3CON_FLTINJ_POSITION ) |
			( CM_USER_CM3CON_CNTDIV << _CM3CON_CNTDIV_POSITION ) |
			( CM_USER_CM3CON_SLPEN << _CM3CON_SLPEN_POSITION ) |
			( CM_USER_CM3CON_SIDL << _CM3CON_SIDL_POSITION ) |
			( CM_USER_CM3CON_ON << _CM3CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			CM3CONbits.WIDTH = CM_USER_CM3CON_WIDTH;
			CM3CONbits.FLTINJ = CM_USER_CM3CON_FLTINJ;
			CM3CONbits.CNTDIV = CM_USER_CM3CON_CNTDIV;
			CM3CONbits.SLPEN = CM_USER_CM3CON_SLPEN;
			CM3CONbits.SIDL = CM_USER_CM3CON_SIDL;
			CM3CONbits.ON = CM_USER_CM3CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3STAT = 
			( CM_USER_CM3STAT_BUFV << _CM3STAT_BUFV_POSITION ) |
			( CM_USER_CM3STAT_SATD << _CM3STAT_SATD_POSITION ) |
			( CM_USER_CM3STAT_TRIG << _CM3STAT_TRIG_POSITION ) |
			( CM_USER_CM3STAT_LFT << _CM3STAT_LFT_POSITION ) |
			( CM_USER_CM3STAT_HFT << _CM3STAT_HFT_POSITION ) |
			( CM_USER_CM3STAT_LWT << _CM3STAT_LWT_POSITION ) |
			( CM_USER_CM3STAT_HWT << _CM3STAT_HWT_POSITION ) ;
		#ifdef DEF_BITNAME
			CM3STATbits.BUFV = CM_USER_CM3STAT_BUFV;
			CM3STATbits.SATD = CM_USER_CM3STAT_SATD;
			CM3STATbits.TRIG = CM_USER_CM3STAT_TRIG;
			CM3STATbits.LFT = CM_USER_CM3STAT_LFT;
			CM3STATbits.HFT = CM_USER_CM3STAT_HFT;
			CM3STATbits.LWT = CM_USER_CM3STAT_LWT;
			CM3STATbits.HWT = CM_USER_CM3STAT_HWT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM3WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3WINPR = CM_USER_CM3WINPR;
	/*-----------------------------------------------------------------------*/
	/* CM3SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3SEL = 
			( CM_USER_CM3SEL_WINSEL << _CM3SEL_WINSEL_POSITION ) |
			( CM_USER_CM3SEL_CNTSEL << _CM3SEL_CNTSEL_POSITION ) ;
		#ifdef DEF_BITNAME
			CM3SELbits.WINSEL = CM_USER_CM3SEL_WINSEL;
			CM3SELbits.CNTSEL = CM_USER_CM3SEL_CNTSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM3BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3BUF = CM_USER_CM3BUF;
	/*-----------------------------------------------------------------------*/
	/* CM3SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3SAT = CM_USER_CM3SAT;
	/*-----------------------------------------------------------------------*/
	/* CM3HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3HFAIL = CM_USER_CM3HFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM3LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3LFAIL = CM_USER_CM3LFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM3HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3HWARN = CM_USER_CM3HWARN;
	/*-----------------------------------------------------------------------*/
	/* CM3LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM3LWARN = CM_USER_CM3LWARN;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM4_Set_Register(void)
* @brief     CM4レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM4_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* CM4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4CON = 
			( CM_USER_CM4CON_WIDTH << _CM4CON_WIDTH_POSITION ) |
			( CM_USER_CM4CON_FLTINJ << _CM4CON_FLTINJ_POSITION ) |
			( CM_USER_CM4CON_CNTDIV << _CM4CON_CNTDIV_POSITION ) |
			( CM_USER_CM4CON_SLPEN << _CM4CON_SLPEN_POSITION ) |
			( CM_USER_CM4CON_SIDL << _CM4CON_SIDL_POSITION ) |
			( CM_USER_CM4CON_ON << _CM4CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			CM4CONbits.WIDTH = CM_USER_CM4CON_WIDTH;
			CM4CONbits.FLTINJ = CM_USER_CM4CON_FLTINJ;
			CM4CONbits.CNTDIV = CM_USER_CM4CON_CNTDIV;
			CM4CONbits.SLPEN = CM_USER_CM4CON_SLPEN;
			CM4CONbits.SIDL = CM_USER_CM4CON_SIDL;
			CM4CONbits.ON = CM_USER_CM4CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4STAT = 
			( CM_USER_CM4STAT_BUFV << _CM4STAT_BUFV_POSITION ) |
			( CM_USER_CM4STAT_SATD << _CM4STAT_SATD_POSITION ) |
			( CM_USER_CM4STAT_TRIG << _CM4STAT_TRIG_POSITION ) |
			( CM_USER_CM4STAT_LFT << _CM4STAT_LFT_POSITION ) |
			( CM_USER_CM4STAT_HFT << _CM4STAT_HFT_POSITION ) |
			( CM_USER_CM4STAT_LWT << _CM4STAT_LWT_POSITION ) |
			( CM_USER_CM4STAT_HWT << _CM4STAT_HWT_POSITION ) ;
		#ifdef DEF_BITNAME
			CM4STATbits.BUFV = CM_USER_CM4STAT_BUFV;
			CM4STATbits.SATD = CM_USER_CM4STAT_SATD;
			CM4STATbits.TRIG = CM_USER_CM4STAT_TRIG;
			CM4STATbits.LFT = CM_USER_CM4STAT_LFT;
			CM4STATbits.HFT = CM_USER_CM4STAT_HFT;
			CM4STATbits.LWT = CM_USER_CM4STAT_LWT;
			CM4STATbits.HWT = CM_USER_CM4STAT_HWT;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM4WINPRレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4WINPR = CM_USER_CM4WINPR;
	/*-----------------------------------------------------------------------*/
	/* CM4SELレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4SEL = 
			( CM_USER_CM4SEL_WINSEL << _CM4SEL_WINSEL_POSITION ) |
			( CM_USER_CM4SEL_CNTSEL << _CM4SEL_CNTSEL_POSITION ) ;
		#ifdef DEF_BITNAME
			CM4SELbits.WINSEL = CM_USER_CM4SEL_WINSEL;
			CM4SELbits.CNTSEL = CM_USER_CM4SEL_CNTSEL;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* CM4BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4BUF = CM_USER_CM4BUF;
	/*-----------------------------------------------------------------------*/
	/* CM4SATレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4SAT = CM_USER_CM4SAT;
	/*-----------------------------------------------------------------------*/
	/* CM4HFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4HFAIL = CM_USER_CM4HFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM4LFAILレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4LFAIL = CM_USER_CM4LFAIL;
	/*-----------------------------------------------------------------------*/
	/* CM4HWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4HWARN = CM_USER_CM4HWARN;
	/*-----------------------------------------------------------------------*/
	/* CM4LWARNレジスタ */
	/*-----------------------------------------------------------------------*/
		CM4LWARN = CM_USER_CM4LWARN;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_CM_Set_Register(void)
* @brief     CMレジスタ全てを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_CM_Set_Register(void)
{
	vdg_CM1_Set_Register();
	vdg_CM2_Set_Register();
	vdg_CM3_Set_Register();
	vdg_CM4_Set_Register();
}