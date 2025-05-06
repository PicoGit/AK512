/*----------------------------------------------------------------------------*/
/**
* @file		Timer_Driver.c
* @brief	Timerモジュールに関するドライバ関数
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
#include "timer_driver.h"
#include "timer_user.h"
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
* @fn        vdg_Timer1_Set_Register(void)
* @brief     Timer1のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer1_Set_Register(void)
{
#if ( PMD_T1MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* T1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		T1CON = 
			( TIMER_USER_T1CON_TCS << _T1CON_TCS_POSITION ) |
			( TIMER_USER_T1CON_TSYNC << _T1CON_TSYNC_POSITION ) |
			( TIMER_USER_T1CON_TCKPS << _T1CON_TCKPS_POSITION ) |
			( TIMER_USER_T1CON_TGATE << _T1CON_TGATE_POSITION ) |
			( TIMER_USER_T1CON_TECS << _T1CON_TECS_POSITION ) |
			( TIMER_USER_T1CON_PRWIP << _T1CON_PRWIP_POSITION ) |
			( TIMER_USER_T1CON_TMWIP << _T1CON_TMWIP_POSITION ) |
			( TIMER_USER_T1CON_TMWDIS << _T1CON_TMWDIS_POSITION ) |
			( TIMER_USER_T1CON_SIDL << _T1CON_SIDL_POSITION ) |
			( TIMER_USER_T1CON_ON << _T1CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			T1CONbits.TCS = TIMER_USER_T1CON_TCS;
			T1CONbits.TSYNC = TIMER_USER_T1CON_TSYNC;
			T1CONbits.TCKPS = TIMER_USER_T1CON_TCKPS;
			T1CONbits.TGATE = TIMER_USER_T1CON_TGATE;
			T1CONbits.TECS = TIMER_USER_T1CON_TECS;
			T1CONbits.PRWIP = TIMER_USER_T1CON_PRWIP;
			T1CONbits.TMWIP = TIMER_USER_T1CON_TMWIP;
			T1CONbits.TMWDIS = TIMER_USER_T1CON_TMWDIS;
			T1CONbits.SIDL = TIMER_USER_T1CON_SIDL;
			T1CONbits.ON = TIMER_USER_T1CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* TMR1レジスタ */
	/*-----------------------------------------------------------------------*/
		TMR1 = TIMER_USER_TMR1;
	/*-----------------------------------------------------------------------*/
	/* PR1レジスタ */
	/*-----------------------------------------------------------------------*/
		PR1 = TIMER_USER_PR1;
		
		T1CONbits.ON = TIMER_USER_T1CON_ON;

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer2_Set_Register(void)
* @brief     Timer2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer2_Set_Register(void)
{
#if ( PMD_T2MD == PMD_MODULE_ENABLE ) 
/*-----------------------------------------------------------------------*/
	/* T2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		T2CON = 
			( TIMER_USER_T2CON_TCS << _T2CON_TCS_POSITION ) |
			( TIMER_USER_T2CON_TSYNC << _T2CON_TSYNC_POSITION ) |
			( TIMER_USER_T2CON_TCKPS << _T2CON_TCKPS_POSITION ) |
			( TIMER_USER_T2CON_TGATE << _T2CON_TGATE_POSITION ) |
			( TIMER_USER_T2CON_TECS << _T2CON_TECS_POSITION ) |
			( TIMER_USER_T2CON_PRWIP << _T2CON_PRWIP_POSITION ) |
			( TIMER_USER_T2CON_TMWIP << _T2CON_TMWIP_POSITION ) |
			( TIMER_USER_T2CON_TMWDIS << _T2CON_TMWDIS_POSITION ) |
			( TIMER_USER_T2CON_SIDL << _T2CON_SIDL_POSITION ) |
			( TIMER_USER_T2CON_ON << _T2CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			T2CONbits.TCS = TIMER_USER_T2CON_TCS;
			T2CONbits.TSYNC = TIMER_USER_T2CON_TSYNC;
			T2CONbits.TCKPS = TIMER_USER_T2CON_TCKPS;
			T2CONbits.TGATE = TIMER_USER_T2CON_TGATE;
			T2CONbits.TECS = TIMER_USER_T2CON_TECS;
			T2CONbits.PRWIP = TIMER_USER_T2CON_PRWIP;
			T2CONbits.TMWIP = TIMER_USER_T2CON_TMWIP;
			T2CONbits.TMWDIS = TIMER_USER_T2CON_TMWDIS;
			T2CONbits.SIDL = TIMER_USER_T2CON_SIDL;
			T2CONbits.ON = TIMER_USER_T2CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* TMR2レジスタ */
	/*-----------------------------------------------------------------------*/
		TMR2 = TIMER_USER_TMR2;
	/*-----------------------------------------------------------------------*/
	/* PR2レジスタ */
	/*-----------------------------------------------------------------------*/
		PR2 = TIMER_USER_PR2;
#endif
}


/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer3_Set_Register(void)
* @brief     Timer3のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer3_Set_Register(void)
{
#if ( PMD_T3MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* T3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		T3CON = 
			( TIMER_USER_T3CON_TCS << _T3CON_TCS_POSITION ) |
			( TIMER_USER_T3CON_TSYNC << _T3CON_TSYNC_POSITION ) |
			( TIMER_USER_T3CON_TCKPS << _T3CON_TCKPS_POSITION ) |
			( TIMER_USER_T3CON_TGATE << _T3CON_TGATE_POSITION ) |
			( TIMER_USER_T3CON_TECS << _T3CON_TECS_POSITION ) |
			( TIMER_USER_T3CON_PRWIP << _T3CON_PRWIP_POSITION ) |
			( TIMER_USER_T3CON_TMWIP << _T3CON_TMWIP_POSITION ) |
			( TIMER_USER_T3CON_TMWDIS << _T3CON_TMWDIS_POSITION ) |
			( TIMER_USER_T3CON_SIDL << _T3CON_SIDL_POSITION ) |
			( TIMER_USER_T3CON_ON << _T3CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			T3CONbits.TCS = TIMER_USER_T3CON_TCS;
			T3CONbits.TSYNC = TIMER_USER_T3CON_TSYNC;
			T3CONbits.TCKPS = TIMER_USER_T3CON_TCKPS;
			T3CONbits.TGATE = TIMER_USER_T3CON_TGATE;
			T3CONbits.TECS = TIMER_USER_T3CON_TECS;
			T3CONbits.PRWIP = TIMER_USER_T3CON_PRWIP;
			T3CONbits.TMWIP = TIMER_USER_T3CON_TMWIP;
			T3CONbits.TMWDIS = TIMER_USER_T3CON_TMWDIS;
			T3CONbits.SIDL = TIMER_USER_T3CON_SIDL;
			T3CONbits.ON = TIMER_USER_T3CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* TMR3レジスタ */
	/*-----------------------------------------------------------------------*/
		TMR3 = TIMER_USER_TMR3;
	/*-----------------------------------------------------------------------*/
	/* PR3レジスタ */
	/*-----------------------------------------------------------------------*/
		PR3 = TIMER_USER_PR3;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer1_Set_Timer(void)
* @brief     Timer1のカウンタ値を設定します
* @param	u4a_Timer　カウンタ値
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer1_Set_Timer(uint32_t u4a_Timer)
{
#if ( PMD_T1MD == PMD_MODULE_ENABLE ) 
	TMR1 = u4a_Timer;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer1_Start_Timer(void)
* @brief     Timer1の動作を開始します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer1_Start_Timer(void)
{
#if ( PMD_T1MD == PMD_MODULE_ENABLE ) 
	T1CONbits.ON = 1U;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer1_Stop_Timer(void)
* @brief     Timer1の動作を停止します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer1_Stop_Timer(void)
{
#if ( PMD_T1MD == PMD_MODULE_ENABLE ) 
	T1CONbits.ON = 0U;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer2_Set_Timer(void)
* @brief     Timer2のカウンタ値を設定します
* @param	u4a_Timer　カウンタ値
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer2_Set_Timer(uint32_t u4a_Timer)
{
#if ( PMD_T2MD == PMD_MODULE_ENABLE ) 
	TMR2 = u4a_Timer;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer2_Start_Timer(void)
* @brief     Timer2の動作を開始します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer2_Start_Timer(void)
{
#if ( PMD_T2MD == PMD_MODULE_ENABLE ) 
	T2CONbits.ON = 1U;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer2_Stop_Timer(void)
* @brief     Timer2の動作を停止します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer2_Stop_Timer(void)
{
#if ( PMD_T2MD == PMD_MODULE_ENABLE ) 
	T2CONbits.ON = 0U;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer3_Set_Timer(void)
* @brief     Timer3のカウンタ値を設定します
* @param	u4a_Timer　カウンタ値
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer3_Set_Timer(uint32_t u4a_Timer)
{
#if ( PMD_T3MD == PMD_MODULE_ENABLE ) 
	TMR3 = u4a_Timer;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer3_Start_Timer(void)
* @brief     Timer3の動作を開始します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer3_Start_Timer(void)
{
#if ( PMD_T3MD == PMD_MODULE_ENABLE ) 
	T3CONbits.ON = 1U;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer3_Stop_Timer(void)
* @brief     Timer3の動作を停止します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer3_Stop_Timer(void)
{
#if ( PMD_T3MD == PMD_MODULE_ENABLE ) 
	T3CONbits.ON = 0U;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_Timer_Set_Register(void)
* @brief     Timerのレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_Timer_Set_Register(void)
{
#if ( PMD_T1MD == PMD_MODULE_ENABLE ) 
    vdg_Timer1_Set_Register();
#endif
#if ( PMD_T2MD == PMD_MODULE_ENABLE ) 
    vdg_Timer2_Set_Register();
#endif
#if ( PMD_T3MD == PMD_MODULE_ENABLE ) 
    vdg_Timer3_Set_Register();
#endif
}