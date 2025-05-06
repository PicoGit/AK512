/*----------------------------------------------------------------------------*/
/**
* @file		IOMON_Driver.c
* @brief	I/O Monitorに関するドライバ関数
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
#include "iomon_user.h"
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
* @fn        vdg_IOIM1_Set_Register(void)
* @brief        IOIM1レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM1_Set_Register(void)
{		
#if ( PMD_IOIM1MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM1CON = 
			( IOIM_USER_IOIM1CON_REFSEL << _IOIM1CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM1CON_FBKSEL << _IOIM1CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM1CON_EXTCLK << _IOIM1CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM1CON_LOCK << _IOIM1CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM1CON_SIDL << _IOIM1CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM1CON_SLPEN << _IOIM1CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM1CON_ON << _IOIM1CON_ON_POSITION ) |
			( IOIM_USER_IOIM1CON_EOVFVAL << _IOIM1CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM1CON_TESTEN << _IOIM1CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM1CON_OKINJ << _IOIM1CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM1CON_FLTINJ << _IOIM1CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM1CONbits.REFSEL = IOIM_USER_IOIM1CON_REFSEL;
			IOIM1CONbits.FBKSEL = IOIM_USER_IOIM1CON_FBKSEL;
			IOIM1CONbits.EXTCLK = IOIM_USER_IOIM1CON_EXTCLK;
			IOIM1CONbits.LOCK = IOIM_USER_IOIM1CON_LOCK;
			IOIM1CONbits.SIDL = IOIM_USER_IOIM1CON_SIDL;
			IOIM1CONbits.SLPEN = IOIM_USER_IOIM1CON_SLPEN;
			IOIM1CONbits.ON = IOIM_USER_IOIM1CON_ON;
			IOIM1CONbits.EOVFVAL = IOIM_USER_IOIM1CON_EOVFVAL;
			IOIM1CONbits.TESTEN = IOIM_USER_IOIM1CON_TESTEN;
			IOIM1CONbits.OKINJ = IOIM_USER_IOIM1CON_OKINJ;
			IOIM1CONbits.FLTINJ = IOIM_USER_IOIM1CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM1BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM1BCON = IOIM_USER_IOIM1BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM1STAT = 
			( IOIM_USER_IOIM1STAT_OK << _IOIM1STAT_OK_POSITION ) |
			( IOIM_USER_IOIM1STAT_ERR << _IOIM1STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM1STAT_OVF << _IOIM1STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM1STAT_RREDGE << _IOIM1STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM1STAT_RFEDGE << _IOIM1STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM1STAT_FREDGE << _IOIM1STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM1STAT_FFEDGE << _IOIM1STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM1STAT_ERRCNT << _IOIM1STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM1STATbits.OK = IOIM_USER_IOIM1STAT_OK;
			IOIM1STATbits.ERR = IOIM_USER_IOIM1STAT_ERR;
			IOIM1STATbits.OVF = IOIM_USER_IOIM1STAT_OVF;
			IOIM1STATbits.RREDGE = IOIM_USER_IOIM1STAT_RREDGE;
			IOIM1STATbits.RFEDGE = IOIM_USER_IOIM1STAT_RFEDGE;
			IOIM1STATbits.FREDGE = IOIM_USER_IOIM1STAT_FREDGE;
			IOIM1STATbits.FFEDGE = IOIM_USER_IOIM1STAT_FFEDGE;
			IOIM1STATbits.ERRCNT = IOIM_USER_IOIM1STAT_ERRCNT;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM2_Set_Register(void)
* @brief     IOIM2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM2_Set_Register(void)
{		
#if ( PMD_IOIM2MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM2CON = 
			( IOIM_USER_IOIM2CON_REFSEL << _IOIM2CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM2CON_FBKSEL << _IOIM2CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM2CON_EXTCLK << _IOIM2CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM2CON_LOCK << _IOIM2CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM2CON_SIDL << _IOIM2CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM2CON_SLPEN << _IOIM2CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM2CON_ON << _IOIM2CON_ON_POSITION ) |
			( IOIM_USER_IOIM2CON_EOVFVAL << _IOIM2CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM2CON_TESTEN << _IOIM2CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM2CON_OKINJ << _IOIM2CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM2CON_FLTINJ << _IOIM2CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM2CONbits.REFSEL = IOIM_USER_IOIM2CON_REFSEL;
			IOIM2CONbits.FBKSEL = IOIM_USER_IOIM2CON_FBKSEL;
			IOIM2CONbits.EXTCLK = IOIM_USER_IOIM2CON_EXTCLK;
			IOIM2CONbits.LOCK = IOIM_USER_IOIM2CON_LOCK;
			IOIM2CONbits.SIDL = IOIM_USER_IOIM2CON_SIDL;
			IOIM2CONbits.SLPEN = IOIM_USER_IOIM2CON_SLPEN;
			IOIM2CONbits.ON = IOIM_USER_IOIM2CON_ON;
			IOIM2CONbits.EOVFVAL = IOIM_USER_IOIM2CON_EOVFVAL;
			IOIM2CONbits.TESTEN = IOIM_USER_IOIM2CON_TESTEN;
			IOIM2CONbits.OKINJ = IOIM_USER_IOIM2CON_OKINJ;
			IOIM2CONbits.FLTINJ = IOIM_USER_IOIM2CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM2BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM2BCON = IOIM_USER_IOIM2BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM2STAT = 
			( IOIM_USER_IOIM2STAT_OK << _IOIM2STAT_OK_POSITION ) |
			( IOIM_USER_IOIM2STAT_ERR << _IOIM2STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM2STAT_OVF << _IOIM2STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM2STAT_RREDGE << _IOIM2STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM2STAT_RFEDGE << _IOIM2STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM2STAT_FREDGE << _IOIM2STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM2STAT_FFEDGE << _IOIM2STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM2STAT_ERRCNT << _IOIM2STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM2STATbits.OK = IOIM_USER_IOIM2STAT_OK;
			IOIM2STATbits.ERR = IOIM_USER_IOIM2STAT_ERR;
			IOIM2STATbits.OVF = IOIM_USER_IOIM2STAT_OVF;
			IOIM2STATbits.RREDGE = IOIM_USER_IOIM2STAT_RREDGE;
			IOIM2STATbits.RFEDGE = IOIM_USER_IOIM2STAT_RFEDGE;
			IOIM2STATbits.FREDGE = IOIM_USER_IOIM2STAT_FREDGE;
			IOIM2STATbits.FFEDGE = IOIM_USER_IOIM2STAT_FFEDGE;
			IOIM2STATbits.ERRCNT = IOIM_USER_IOIM2STAT_ERRCNT;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM3_Set_Register(void) 
* @brief     IOIM3レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM3_Set_Register(void)
{		
#if ( PMD_IOIM3MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM3CON = 
			( IOIM_USER_IOIM3CON_REFSEL << _IOIM3CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM3CON_FBKSEL << _IOIM3CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM3CON_EXTCLK << _IOIM3CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM3CON_LOCK << _IOIM3CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM3CON_SIDL << _IOIM3CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM3CON_SLPEN << _IOIM3CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM3CON_ON << _IOIM3CON_ON_POSITION ) |
			( IOIM_USER_IOIM3CON_EOVFVAL << _IOIM3CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM3CON_TESTEN << _IOIM3CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM3CON_OKINJ << _IOIM3CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM3CON_FLTINJ << _IOIM3CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM3CONbits.REFSEL = IOIM_USER_IOIM3CON_REFSEL;
			IOIM3CONbits.FBKSEL = IOIM_USER_IOIM3CON_FBKSEL;
			IOIM3CONbits.EXTCLK = IOIM_USER_IOIM3CON_EXTCLK;
			IOIM3CONbits.LOCK = IOIM_USER_IOIM3CON_LOCK;
			IOIM3CONbits.SIDL = IOIM_USER_IOIM3CON_SIDL;
			IOIM3CONbits.SLPEN = IOIM_USER_IOIM3CON_SLPEN;
			IOIM3CONbits.ON = IOIM_USER_IOIM3CON_ON;
			IOIM3CONbits.EOVFVAL = IOIM_USER_IOIM3CON_EOVFVAL;
			IOIM3CONbits.TESTEN = IOIM_USER_IOIM3CON_TESTEN;
			IOIM3CONbits.OKINJ = IOIM_USER_IOIM3CON_OKINJ;
			IOIM3CONbits.FLTINJ = IOIM_USER_IOIM3CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM3BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM3BCON =  IOIM_USER_IOIM3BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM3STAT = 
			( IOIM_USER_IOIM3STAT_OK << _IOIM3STAT_OK_POSITION ) |
			( IOIM_USER_IOIM3STAT_ERR << _IOIM3STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM3STAT_OVF << _IOIM3STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM3STAT_RREDGE << _IOIM3STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM3STAT_RFEDGE << _IOIM3STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM3STAT_FREDGE << _IOIM3STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM3STAT_FFEDGE << _IOIM3STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM3STAT_ERRCNT << _IOIM3STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM3STATbits.OK = IOIM_USER_IOIM3STAT_OK;
			IOIM3STATbits.ERR = IOIM_USER_IOIM3STAT_ERR;
			IOIM3STATbits.OVF = IOIM_USER_IOIM3STAT_OVF;
			IOIM3STATbits.RREDGE = IOIM_USER_IOIM3STAT_RREDGE;
			IOIM3STATbits.RFEDGE = IOIM_USER_IOIM3STAT_RFEDGE;
			IOIM3STATbits.FREDGE = IOIM_USER_IOIM3STAT_FREDGE;
			IOIM3STATbits.FFEDGE = IOIM_USER_IOIM3STAT_FFEDGE;
			IOIM3STATbits.ERRCNT = IOIM_USER_IOIM3STAT_ERRCNT;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM4_Set_Register(void)
* @brief        IOIM4レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM4_Set_Register(void)
{		
#if ( PMD_IOIM4MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM4CON = 
			( IOIM_USER_IOIM4CON_REFSEL << _IOIM4CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM4CON_FBKSEL << _IOIM4CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM4CON_EXTCLK << _IOIM4CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM4CON_LOCK << _IOIM4CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM4CON_SIDL << _IOIM4CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM4CON_SLPEN << _IOIM4CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM4CON_ON << _IOIM4CON_ON_POSITION ) |
			( IOIM_USER_IOIM4CON_EOVFVAL << _IOIM4CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM4CON_TESTEN << _IOIM4CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM4CON_OKINJ << _IOIM4CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM4CON_FLTINJ << _IOIM4CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM4CONbits.REFSEL = IOIM_USER_IOIM4CON_REFSEL;
			IOIM4CONbits.FBKSEL = IOIM_USER_IOIM4CON_FBKSEL;
			IOIM4CONbits.EXTCLK = IOIM_USER_IOIM4CON_EXTCLK;
			IOIM4CONbits.LOCK = IOIM_USER_IOIM4CON_LOCK;
			IOIM4CONbits.SIDL = IOIM_USER_IOIM4CON_SIDL;
			IOIM4CONbits.SLPEN = IOIM_USER_IOIM4CON_SLPEN;
			IOIM4CONbits.ON = IOIM_USER_IOIM4CON_ON;
			IOIM4CONbits.EOVFVAL = IOIM_USER_IOIM4CON_EOVFVAL;
			IOIM4CONbits.TESTEN = IOIM_USER_IOIM4CON_TESTEN;
			IOIM4CONbits.OKINJ = IOIM_USER_IOIM4CON_OKINJ;
			IOIM4CONbits.FLTINJ = IOIM_USER_IOIM4CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM4BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM4BCON = IOIM_USER_IOIM4BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM4STAT = 
			( IOIM_USER_IOIM4STAT_OK << _IOIM4STAT_OK_POSITION ) |
			( IOIM_USER_IOIM4STAT_ERR << _IOIM4STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM4STAT_OVF << _IOIM4STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM4STAT_RREDGE << _IOIM4STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM4STAT_RFEDGE << _IOIM4STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM4STAT_FREDGE << _IOIM4STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM4STAT_FFEDGE << _IOIM4STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM4STAT_ERRCNT << _IOIM4STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM4STATbits.OK = IOIM_USER_IOIM4STAT_OK;
			IOIM4STATbits.ERR = IOIM_USER_IOIM4STAT_ERR;
			IOIM4STATbits.OVF = IOIM_USER_IOIM4STAT_OVF;
			IOIM4STATbits.RREDGE = IOIM_USER_IOIM4STAT_RREDGE;
			IOIM4STATbits.RFEDGE = IOIM_USER_IOIM4STAT_RFEDGE;
			IOIM4STATbits.FREDGE = IOIM_USER_IOIM4STAT_FREDGE;
			IOIM4STATbits.FFEDGE = IOIM_USER_IOIM4STAT_FFEDGE;
			IOIM4STATbits.ERRCNT = IOIM_USER_IOIM4STAT_ERRCNT;
		#endif 
#endif
}


/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM5_Set_Register(void)
* @brief     IOIM5レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM5_Set_Register(void)
{		
#if ( PMD_IOIM5MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM5CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM5CON = 
			( IOIM_USER_IOIM5CON_REFSEL << _IOIM5CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM5CON_FBKSEL << _IOIM5CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM5CON_EXTCLK << _IOIM5CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM5CON_LOCK << _IOIM5CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM5CON_SIDL << _IOIM5CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM5CON_SLPEN << _IOIM5CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM5CON_ON << _IOIM5CON_ON_POSITION ) |
			( IOIM_USER_IOIM5CON_EOVFVAL << _IOIM5CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM5CON_TESTEN << _IOIM5CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM5CON_OKINJ << _IOIM5CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM5CON_FLTINJ << _IOIM5CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM5CONbits.REFSEL = IOIM_USER_IOIM5CON_REFSEL;
			IOIM5CONbits.FBKSEL = IOIM_USER_IOIM5CON_FBKSEL;
			IOIM5CONbits.EXTCLK = IOIM_USER_IOIM5CON_EXTCLK;
			IOIM5CONbits.LOCK = IOIM_USER_IOIM5CON_LOCK;
			IOIM5CONbits.SIDL = IOIM_USER_IOIM5CON_SIDL;
			IOIM5CONbits.SLPEN = IOIM_USER_IOIM5CON_SLPEN;
			IOIM5CONbits.ON = IOIM_USER_IOIM5CON_ON;
			IOIM5CONbits.EOVFVAL = IOIM_USER_IOIM5CON_EOVFVAL;
			IOIM5CONbits.TESTEN = IOIM_USER_IOIM5CON_TESTEN;
			IOIM5CONbits.OKINJ = IOIM_USER_IOIM5CON_OKINJ;
			IOIM5CONbits.FLTINJ = IOIM_USER_IOIM5CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM5BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM5BCON = IOIM_USER_IOIM5BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM5STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM5STAT = 
			( IOIM_USER_IOIM5STAT_OK << _IOIM5STAT_OK_POSITION ) |
			( IOIM_USER_IOIM5STAT_ERR << _IOIM5STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM5STAT_OVF << _IOIM5STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM5STAT_RREDGE << _IOIM5STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM5STAT_RFEDGE << _IOIM5STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM5STAT_FREDGE << _IOIM5STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM5STAT_FFEDGE << _IOIM5STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM5STAT_ERRCNT << _IOIM5STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM5STATbits.OK = IOIM_USER_IOIM5STAT_OK;
			IOIM5STATbits.ERR = IOIM_USER_IOIM5STAT_ERR;
			IOIM5STATbits.OVF = IOIM_USER_IOIM5STAT_OVF;
			IOIM5STATbits.RREDGE = IOIM_USER_IOIM5STAT_RREDGE;
			IOIM5STATbits.RFEDGE = IOIM_USER_IOIM5STAT_RFEDGE;
			IOIM5STATbits.FREDGE = IOIM_USER_IOIM5STAT_FREDGE;
			IOIM5STATbits.FFEDGE = IOIM_USER_IOIM5STAT_FFEDGE;
			IOIM5STATbits.ERRCNT = IOIM_USER_IOIM5STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM6_Set_Register(void)
* @brief     IOIM6レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM6_Set_Register(void)
{		
#if ( PMD_IOIM6MD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* IOIM6CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM6CON = 
			( IOIM_USER_IOIM6CON_REFSEL << _IOIM6CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM6CON_FBKSEL << _IOIM6CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM6CON_EXTCLK << _IOIM6CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM6CON_LOCK << _IOIM6CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM6CON_SIDL << _IOIM6CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM6CON_SLPEN << _IOIM6CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM6CON_ON << _IOIM6CON_ON_POSITION ) |
			( IOIM_USER_IOIM6CON_EOVFVAL << _IOIM6CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM6CON_TESTEN << _IOIM6CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM6CON_OKINJ << _IOIM6CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM6CON_FLTINJ << _IOIM6CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM6CONbits.REFSEL = IOIM_USER_IOIM6CON_REFSEL;
			IOIM6CONbits.FBKSEL = IOIM_USER_IOIM6CON_FBKSEL;
			IOIM6CONbits.EXTCLK = IOIM_USER_IOIM6CON_EXTCLK;
			IOIM6CONbits.LOCK = IOIM_USER_IOIM6CON_LOCK;
			IOIM6CONbits.SIDL = IOIM_USER_IOIM6CON_SIDL;
			IOIM6CONbits.SLPEN = IOIM_USER_IOIM6CON_SLPEN;
			IOIM6CONbits.ON = IOIM_USER_IOIM6CON_ON;
			IOIM6CONbits.EOVFVAL = IOIM_USER_IOIM6CON_EOVFVAL;
			IOIM6CONbits.TESTEN = IOIM_USER_IOIM6CON_TESTEN;
			IOIM6CONbits.OKINJ = IOIM_USER_IOIM6CON_OKINJ;
			IOIM6CONbits.FLTINJ = IOIM_USER_IOIM6CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM6BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM6BCON = IOIM_USER_IOIM6BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM6STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM6STAT = 
			( IOIM_USER_IOIM6STAT_OK << _IOIM6STAT_OK_POSITION ) |
			( IOIM_USER_IOIM6STAT_ERR << _IOIM6STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM6STAT_OVF << _IOIM6STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM6STAT_RREDGE << _IOIM6STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM6STAT_RFEDGE << _IOIM6STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM6STAT_FREDGE << _IOIM6STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM6STAT_FFEDGE << _IOIM6STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM6STAT_ERRCNT << _IOIM6STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM6STATbits.OK = IOIM_USER_IOIM6STAT_OK;
			IOIM6STATbits.ERR = IOIM_USER_IOIM6STAT_ERR;
			IOIM6STATbits.OVF = IOIM_USER_IOIM6STAT_OVF;
			IOIM6STATbits.RREDGE = IOIM_USER_IOIM6STAT_RREDGE;
			IOIM6STATbits.RFEDGE = IOIM_USER_IOIM6STAT_RFEDGE;
			IOIM6STATbits.FREDGE = IOIM_USER_IOIM6STAT_FREDGE;
			IOIM6STATbits.FFEDGE = IOIM_USER_IOIM6STAT_FFEDGE;
			IOIM6STATbits.ERRCNT = IOIM_USER_IOIM6STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM7_Set_Register(void)
* @brief     IOIM7レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM7_Set_Register(void)
{		
#if ( PMD_IOIM7MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM7CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM7CON = 
			( IOIM_USER_IOIM7CON_REFSEL << _IOIM7CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM7CON_FBKSEL << _IOIM7CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM7CON_EXTCLK << _IOIM7CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM7CON_LOCK << _IOIM7CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM7CON_SIDL << _IOIM7CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM7CON_SLPEN << _IOIM7CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM7CON_ON << _IOIM7CON_ON_POSITION ) |
			( IOIM_USER_IOIM7CON_EOVFVAL << _IOIM7CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM7CON_TESTEN << _IOIM7CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM7CON_OKINJ << _IOIM7CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM7CON_FLTINJ << _IOIM7CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM7CONbits.REFSEL = IOIM_USER_IOIM7CON_REFSEL;
			IOIM7CONbits.FBKSEL = IOIM_USER_IOIM7CON_FBKSEL;
			IOIM7CONbits.EXTCLK = IOIM_USER_IOIM7CON_EXTCLK;
			IOIM7CONbits.LOCK = IOIM_USER_IOIM7CON_LOCK;
			IOIM7CONbits.SIDL = IOIM_USER_IOIM7CON_SIDL;
			IOIM7CONbits.SLPEN = IOIM_USER_IOIM7CON_SLPEN;
			IOIM7CONbits.ON = IOIM_USER_IOIM7CON_ON;
			IOIM7CONbits.EOVFVAL = IOIM_USER_IOIM7CON_EOVFVAL;
			IOIM7CONbits.TESTEN = IOIM_USER_IOIM7CON_TESTEN;
			IOIM7CONbits.OKINJ = IOIM_USER_IOIM7CON_OKINJ;
			IOIM7CONbits.FLTINJ = IOIM_USER_IOIM7CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM7BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM7BCON = IOIM_USER_IOIM7BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM7STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM7STAT = 
			( IOIM_USER_IOIM7STAT_OK << _IOIM7STAT_OK_POSITION ) |
			( IOIM_USER_IOIM7STAT_ERR << _IOIM7STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM7STAT_OVF << _IOIM7STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM7STAT_RREDGE << _IOIM7STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM7STAT_RFEDGE << _IOIM7STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM7STAT_FREDGE << _IOIM7STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM7STAT_FFEDGE << _IOIM7STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM7STAT_ERRCNT << _IOIM7STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM7STATbits.OK = IOIM_USER_IOIM7STAT_OK;
			IOIM7STATbits.ERR = IOIM_USER_IOIM7STAT_ERR;
			IOIM7STATbits.OVF = IOIM_USER_IOIM7STAT_OVF;
			IOIM7STATbits.RREDGE = IOIM_USER_IOIM7STAT_RREDGE;
			IOIM7STATbits.RFEDGE = IOIM_USER_IOIM7STAT_RFEDGE;
			IOIM7STATbits.FREDGE = IOIM_USER_IOIM7STAT_FREDGE;
			IOIM7STATbits.FFEDGE = IOIM_USER_IOIM7STAT_FFEDGE;
			IOIM7STATbits.ERRCNT = IOIM_USER_IOIM7STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM8_Set_Register(void)
* @brief     IOIM8レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM8_Set_Register(void)
{		
#if ( PMD_IOIM8MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM8CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM8CON = 
			( IOIM_USER_IOIM8CON_REFSEL << _IOIM8CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM8CON_FBKSEL << _IOIM8CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM8CON_EXTCLK << _IOIM8CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM8CON_LOCK << _IOIM8CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM8CON_SIDL << _IOIM8CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM8CON_SLPEN << _IOIM8CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM8CON_ON << _IOIM8CON_ON_POSITION ) |
			( IOIM_USER_IOIM8CON_EOVFVAL << _IOIM8CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM8CON_TESTEN << _IOIM8CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM8CON_OKINJ << _IOIM8CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM8CON_FLTINJ << _IOIM8CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM8CONbits.REFSEL = IOIM_USER_IOIM8CON_REFSEL;
			IOIM8CONbits.FBKSEL = IOIM_USER_IOIM8CON_FBKSEL;
			IOIM8CONbits.EXTCLK = IOIM_USER_IOIM8CON_EXTCLK;
			IOIM8CONbits.LOCK = IOIM_USER_IOIM8CON_LOCK;
			IOIM8CONbits.SIDL = IOIM_USER_IOIM8CON_SIDL;
			IOIM8CONbits.SLPEN = IOIM_USER_IOIM8CON_SLPEN;
			IOIM8CONbits.ON = IOIM_USER_IOIM8CON_ON;
			IOIM8CONbits.EOVFVAL = IOIM_USER_IOIM8CON_EOVFVAL;
			IOIM8CONbits.TESTEN = IOIM_USER_IOIM8CON_TESTEN;
			IOIM8CONbits.OKINJ = IOIM_USER_IOIM8CON_OKINJ;
			IOIM8CONbits.FLTINJ = IOIM_USER_IOIM8CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM8BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM8BCON = IOIM_USER_IOIM8BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM8STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM8STAT = 
			( IOIM_USER_IOIM8STAT_OK << _IOIM8STAT_OK_POSITION ) |
			( IOIM_USER_IOIM8STAT_ERR << _IOIM8STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM8STAT_OVF << _IOIM8STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM8STAT_RREDGE << _IOIM8STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM8STAT_RFEDGE << _IOIM8STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM8STAT_FREDGE << _IOIM8STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM8STAT_FFEDGE << _IOIM8STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM8STAT_ERRCNT << _IOIM8STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM8STATbits.OK = IOIM_USER_IOIM8STAT_OK;
			IOIM8STATbits.ERR = IOIM_USER_IOIM8STAT_ERR;
			IOIM8STATbits.OVF = IOIM_USER_IOIM8STAT_OVF;
			IOIM8STATbits.RREDGE = IOIM_USER_IOIM8STAT_RREDGE;
			IOIM8STATbits.RFEDGE = IOIM_USER_IOIM8STAT_RFEDGE;
			IOIM8STATbits.FREDGE = IOIM_USER_IOIM8STAT_FREDGE;
			IOIM8STATbits.FFEDGE = IOIM_USER_IOIM8STAT_FFEDGE;
			IOIM8STATbits.ERRCNT = IOIM_USER_IOIM8STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM9_Set_Register(void)
* @brief     IOIM9レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM9_Set_Register(void)
{		
#if ( PMD_IOIM9MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM9CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM9CON = 
			( IOIM_USER_IOIM9CON_REFSEL << _IOIM9CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM9CON_FBKSEL << _IOIM9CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM9CON_EXTCLK << _IOIM9CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM9CON_LOCK << _IOIM9CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM9CON_SIDL << _IOIM9CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM9CON_SLPEN << _IOIM9CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM9CON_ON << _IOIM9CON_ON_POSITION ) |
			( IOIM_USER_IOIM9CON_EOVFVAL << _IOIM9CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM9CON_TESTEN << _IOIM9CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM9CON_OKINJ << _IOIM9CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM9CON_FLTINJ << _IOIM9CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM9CONbits.REFSEL = IOIM_USER_IOIM9CON_REFSEL;
			IOIM9CONbits.FBKSEL = IOIM_USER_IOIM9CON_FBKSEL;
			IOIM9CONbits.EXTCLK = IOIM_USER_IOIM9CON_EXTCLK;
			IOIM9CONbits.LOCK = IOIM_USER_IOIM9CON_LOCK;
			IOIM9CONbits.SIDL = IOIM_USER_IOIM9CON_SIDL;
			IOIM9CONbits.SLPEN = IOIM_USER_IOIM9CON_SLPEN;
			IOIM9CONbits.ON = IOIM_USER_IOIM9CON_ON;
			IOIM9CONbits.EOVFVAL = IOIM_USER_IOIM9CON_EOVFVAL;
			IOIM9CONbits.TESTEN = IOIM_USER_IOIM9CON_TESTEN;
			IOIM9CONbits.OKINJ = IOIM_USER_IOIM9CON_OKINJ;
			IOIM9CONbits.FLTINJ = IOIM_USER_IOIM9CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM9BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM9BCON = IOIM_USER_IOIM9BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM9STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM9STAT = 
			( IOIM_USER_IOIM9STAT_OK << _IOIM9STAT_OK_POSITION ) |
			( IOIM_USER_IOIM9STAT_ERR << _IOIM9STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM9STAT_OVF << _IOIM9STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM9STAT_RREDGE << _IOIM9STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM9STAT_RFEDGE << _IOIM9STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM9STAT_FREDGE << _IOIM9STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM9STAT_FFEDGE << _IOIM9STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM9STAT_ERRCNT << _IOIM9STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM9STATbits.OK = IOIM_USER_IOIM9STAT_OK;
			IOIM9STATbits.ERR = IOIM_USER_IOIM9STAT_ERR;
			IOIM9STATbits.OVF = IOIM_USER_IOIM9STAT_OVF;
			IOIM9STATbits.RREDGE = IOIM_USER_IOIM9STAT_RREDGE;
			IOIM9STATbits.RFEDGE = IOIM_USER_IOIM9STAT_RFEDGE;
			IOIM9STATbits.FREDGE = IOIM_USER_IOIM9STAT_FREDGE;
			IOIM9STATbits.FFEDGE = IOIM_USER_IOIM9STAT_FFEDGE;
			IOIM9STATbits.ERRCNT = IOIM_USER_IOIM9STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM10_Set_Register(void)
* @brief     IOIM10レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM10_Set_Register(void)
{		
#if ( PMD_IOIM10MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM10CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM10CON = 
			( IOIM_USER_IOIM10CON_REFSEL << _IOIM10CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM10CON_FBKSEL << _IOIM10CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM10CON_EXTCLK << _IOIM10CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM10CON_LOCK << _IOIM10CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM10CON_SIDL << _IOIM10CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM10CON_SLPEN << _IOIM10CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM10CON_ON << _IOIM10CON_ON_POSITION ) |
			( IOIM_USER_IOIM10CON_EOVFVAL << _IOIM10CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM10CON_TESTEN << _IOIM10CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM10CON_OKINJ << _IOIM10CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM10CON_FLTINJ << _IOIM10CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM10CONbits.REFSEL = IOIM_USER_IOIM10CON_REFSEL;
			IOIM10CONbits.FBKSEL = IOIM_USER_IOIM10CON_FBKSEL;
			IOIM10CONbits.EXTCLK = IOIM_USER_IOIM10CON_EXTCLK;
			IOIM10CONbits.LOCK = IOIM_USER_IOIM10CON_LOCK;
			IOIM10CONbits.SIDL = IOIM_USER_IOIM10CON_SIDL;
			IOIM10CONbits.SLPEN = IOIM_USER_IOIM10CON_SLPEN;
			IOIM10CONbits.ON = IOIM_USER_IOIM10CON_ON;
			IOIM10CONbits.EOVFVAL = IOIM_USER_IOIM10CON_EOVFVAL;
			IOIM10CONbits.TESTEN = IOIM_USER_IOIM10CON_TESTEN;
			IOIM10CONbits.OKINJ = IOIM_USER_IOIM10CON_OKINJ;
			IOIM10CONbits.FLTINJ = IOIM_USER_IOIM10CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM10BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM10BCON = IOIM_USER_IOIM10BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM10STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM10STAT = 
			( IOIM_USER_IOIM10STAT_OK << _IOIM10STAT_OK_POSITION ) |
			( IOIM_USER_IOIM10STAT_ERR << _IOIM10STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM10STAT_OVF << _IOIM10STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM10STAT_RREDGE << _IOIM10STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM10STAT_RFEDGE << _IOIM10STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM10STAT_FREDGE << _IOIM10STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM10STAT_FFEDGE << _IOIM10STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM10STAT_ERRCNT << _IOIM10STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM10STATbits.OK = IOIM_USER_IOIM10STAT_OK;
			IOIM10STATbits.ERR = IOIM_USER_IOIM10STAT_ERR;
			IOIM10STATbits.OVF = IOIM_USER_IOIM10STAT_OVF;
			IOIM10STATbits.RREDGE = IOIM_USER_IOIM10STAT_RREDGE;
			IOIM10STATbits.RFEDGE = IOIM_USER_IOIM10STAT_RFEDGE;
			IOIM10STATbits.FREDGE = IOIM_USER_IOIM10STAT_FREDGE;
			IOIM10STATbits.FFEDGE = IOIM_USER_IOIM10STAT_FFEDGE;
			IOIM10STATbits.ERRCNT = IOIM_USER_IOIM10STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM11_Set_Register(void)
* @brief     IOIM11レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM11_Set_Register(void)
{		
#if ( PMD_IOIM11MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM11CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM11CON = 
			( IOIM_USER_IOIM11CON_REFSEL << _IOIM11CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM11CON_FBKSEL << _IOIM11CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM11CON_EXTCLK << _IOIM11CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM11CON_LOCK << _IOIM11CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM11CON_SIDL << _IOIM11CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM11CON_SLPEN << _IOIM11CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM11CON_ON << _IOIM11CON_ON_POSITION ) |
			( IOIM_USER_IOIM11CON_EOVFVAL << _IOIM11CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM11CON_TESTEN << _IOIM11CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM11CON_OKINJ << _IOIM11CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM11CON_FLTINJ << _IOIM11CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM11CONbits.REFSEL = IOIM_USER_IOIM11CON_REFSEL;
			IOIM11CONbits.FBKSEL = IOIM_USER_IOIM11CON_FBKSEL;
			IOIM11CONbits.EXTCLK = IOIM_USER_IOIM11CON_EXTCLK;
			IOIM11CONbits.LOCK = IOIM_USER_IOIM11CON_LOCK;
			IOIM11CONbits.SIDL = IOIM_USER_IOIM11CON_SIDL;
			IOIM11CONbits.SLPEN = IOIM_USER_IOIM11CON_SLPEN;
			IOIM11CONbits.ON = IOIM_USER_IOIM11CON_ON;
			IOIM11CONbits.EOVFVAL = IOIM_USER_IOIM11CON_EOVFVAL;
			IOIM11CONbits.TESTEN = IOIM_USER_IOIM11CON_TESTEN;
			IOIM11CONbits.OKINJ = IOIM_USER_IOIM11CON_OKINJ;
			IOIM11CONbits.FLTINJ = IOIM_USER_IOIM11CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM11BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM11BCON = IOIM_USER_IOIM11BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM11STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM11STAT = 
			( IOIM_USER_IOIM11STAT_OK << _IOIM11STAT_OK_POSITION ) |
			( IOIM_USER_IOIM11STAT_ERR << _IOIM11STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM11STAT_OVF << _IOIM11STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM11STAT_RREDGE << _IOIM11STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM11STAT_RFEDGE << _IOIM11STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM11STAT_FREDGE << _IOIM11STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM11STAT_FFEDGE << _IOIM11STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM11STAT_ERRCNT << _IOIM11STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM11STATbits.OK = IOIM_USER_IOIM11STAT_OK;
			IOIM11STATbits.ERR = IOIM_USER_IOIM11STAT_ERR;
			IOIM11STATbits.OVF = IOIM_USER_IOIM11STAT_OVF;
			IOIM11STATbits.RREDGE = IOIM_USER_IOIM11STAT_RREDGE;
			IOIM11STATbits.RFEDGE = IOIM_USER_IOIM11STAT_RFEDGE;
			IOIM11STATbits.FREDGE = IOIM_USER_IOIM11STAT_FREDGE;
			IOIM11STATbits.FFEDGE = IOIM_USER_IOIM11STAT_FFEDGE;
			IOIM11STATbits.ERRCNT = IOIM_USER_IOIM11STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM12_Set_Register(void)
* @brief     IOIM12レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM12_Set_Register(void)
{		
#if ( PMD_IOIM12MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM12CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM12CON = 
			( IOIM_USER_IOIM12CON_REFSEL << _IOIM12CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM12CON_FBKSEL << _IOIM12CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM12CON_EXTCLK << _IOIM12CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM12CON_LOCK << _IOIM12CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM12CON_SIDL << _IOIM12CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM12CON_SLPEN << _IOIM12CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM12CON_ON << _IOIM12CON_ON_POSITION ) |
			( IOIM_USER_IOIM12CON_EOVFVAL << _IOIM12CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM12CON_TESTEN << _IOIM12CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM12CON_OKINJ << _IOIM12CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM12CON_FLTINJ << _IOIM12CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM12CONbits.REFSEL = IOIM_USER_IOIM12CON_REFSEL;
			IOIM12CONbits.FBKSEL = IOIM_USER_IOIM12CON_FBKSEL;
			IOIM12CONbits.EXTCLK = IOIM_USER_IOIM12CON_EXTCLK;
			IOIM12CONbits.LOCK = IOIM_USER_IOIM12CON_LOCK;
			IOIM12CONbits.SIDL = IOIM_USER_IOIM12CON_SIDL;
			IOIM12CONbits.SLPEN = IOIM_USER_IOIM12CON_SLPEN;
			IOIM12CONbits.ON = IOIM_USER_IOIM12CON_ON;
			IOIM12CONbits.EOVFVAL = IOIM_USER_IOIM12CON_EOVFVAL;
			IOIM12CONbits.TESTEN = IOIM_USER_IOIM12CON_TESTEN;
			IOIM12CONbits.OKINJ = IOIM_USER_IOIM12CON_OKINJ;
			IOIM12CONbits.FLTINJ = IOIM_USER_IOIM12CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM12BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM12BCON = IOIM_USER_IOIM12BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM12STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM12STAT = 
			( IOIM_USER_IOIM12STAT_OK << _IOIM12STAT_OK_POSITION ) |
			( IOIM_USER_IOIM12STAT_ERR << _IOIM12STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM12STAT_OVF << _IOIM12STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM12STAT_RREDGE << _IOIM12STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM12STAT_RFEDGE << _IOIM12STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM12STAT_FREDGE << _IOIM12STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM12STAT_FFEDGE << _IOIM12STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM12STAT_ERRCNT << _IOIM12STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM12STATbits.OK = IOIM_USER_IOIM12STAT_OK;
			IOIM12STATbits.ERR = IOIM_USER_IOIM12STAT_ERR;
			IOIM12STATbits.OVF = IOIM_USER_IOIM12STAT_OVF;
			IOIM12STATbits.RREDGE = IOIM_USER_IOIM12STAT_RREDGE;
			IOIM12STATbits.RFEDGE = IOIM_USER_IOIM12STAT_RFEDGE;
			IOIM12STATbits.FREDGE = IOIM_USER_IOIM12STAT_FREDGE;
			IOIM12STATbits.FFEDGE = IOIM_USER_IOIM12STAT_FFEDGE;
			IOIM12STATbits.ERRCNT = IOIM_USER_IOIM12STAT_ERRCNT;
		#endif 	
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM13_Set_Register(void)
* @brief     IOIM13レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM13_Set_Register(void)
{		
#if ( PMD_IOIM13MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM13CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM13CON = 
			( IOIM_USER_IOIM13CON_REFSEL << _IOIM13CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM13CON_FBKSEL << _IOIM13CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM13CON_EXTCLK << _IOIM13CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM13CON_LOCK << _IOIM13CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM13CON_SIDL << _IOIM13CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM13CON_SLPEN << _IOIM13CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM13CON_ON << _IOIM13CON_ON_POSITION ) |
			( IOIM_USER_IOIM13CON_EOVFVAL << _IOIM13CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM13CON_TESTEN << _IOIM13CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM13CON_OKINJ << _IOIM13CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM13CON_FLTINJ << _IOIM13CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM13CONbits.REFSEL = IOIM_USER_IOIM13CON_REFSEL;
			IOIM13CONbits.FBKSEL = IOIM_USER_IOIM13CON_FBKSEL;
			IOIM13CONbits.EXTCLK = IOIM_USER_IOIM13CON_EXTCLK;
			IOIM13CONbits.LOCK = IOIM_USER_IOIM13CON_LOCK;
			IOIM13CONbits.SIDL = IOIM_USER_IOIM13CON_SIDL;
			IOIM13CONbits.SLPEN = IOIM_USER_IOIM13CON_SLPEN;
			IOIM13CONbits.ON = IOIM_USER_IOIM13CON_ON;
			IOIM13CONbits.EOVFVAL = IOIM_USER_IOIM13CON_EOVFVAL;
			IOIM13CONbits.TESTEN = IOIM_USER_IOIM13CON_TESTEN;
			IOIM13CONbits.OKINJ = IOIM_USER_IOIM13CON_OKINJ;
			IOIM13CONbits.FLTINJ = IOIM_USER_IOIM13CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM13BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM13BCON = IOIM_USER_IOIM13BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM13STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM13STAT = 
			( IOIM_USER_IOIM13STAT_OK << _IOIM13STAT_OK_POSITION ) |
			( IOIM_USER_IOIM13STAT_ERR << _IOIM13STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM13STAT_OVF << _IOIM13STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM13STAT_RREDGE << _IOIM13STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM13STAT_RFEDGE << _IOIM13STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM13STAT_FREDGE << _IOIM13STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM13STAT_FFEDGE << _IOIM13STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM13STAT_ERRCNT << _IOIM13STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM13STATbits.OK = IOIM_USER_IOIM13STAT_OK;
			IOIM13STATbits.ERR = IOIM_USER_IOIM13STAT_ERR;
			IOIM13STATbits.OVF = IOIM_USER_IOIM13STAT_OVF;
			IOIM13STATbits.RREDGE = IOIM_USER_IOIM13STAT_RREDGE;
			IOIM13STATbits.RFEDGE = IOIM_USER_IOIM13STAT_RFEDGE;
			IOIM13STATbits.FREDGE = IOIM_USER_IOIM13STAT_FREDGE;
			IOIM13STATbits.FFEDGE = IOIM_USER_IOIM13STAT_FFEDGE;
			IOIM13STATbits.ERRCNT = IOIM_USER_IOIM13STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM14_Set_Register(void)
* @brief     IOIM14レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM14_Set_Register(void)
{		
#if ( PMD_IOIM14MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* IOIM14CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM14CON = 
			( IOIM_USER_IOIM14CON_REFSEL << _IOIM14CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM14CON_FBKSEL << _IOIM14CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM14CON_EXTCLK << _IOIM14CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM14CON_LOCK << _IOIM14CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM14CON_SIDL << _IOIM14CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM14CON_SLPEN << _IOIM14CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM14CON_ON << _IOIM14CON_ON_POSITION ) |
			( IOIM_USER_IOIM14CON_EOVFVAL << _IOIM14CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM14CON_TESTEN << _IOIM14CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM14CON_OKINJ << _IOIM14CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM14CON_FLTINJ << _IOIM14CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM14CONbits.REFSEL = IOIM_USER_IOIM14CON_REFSEL;
			IOIM14CONbits.FBKSEL = IOIM_USER_IOIM14CON_FBKSEL;
			IOIM14CONbits.EXTCLK = IOIM_USER_IOIM14CON_EXTCLK;
			IOIM14CONbits.LOCK = IOIM_USER_IOIM14CON_LOCK;
			IOIM14CONbits.SIDL = IOIM_USER_IOIM14CON_SIDL;
			IOIM14CONbits.SLPEN = IOIM_USER_IOIM14CON_SLPEN;
			IOIM14CONbits.ON = IOIM_USER_IOIM14CON_ON;
			IOIM14CONbits.EOVFVAL = IOIM_USER_IOIM14CON_EOVFVAL;
			IOIM14CONbits.TESTEN = IOIM_USER_IOIM14CON_TESTEN;
			IOIM14CONbits.OKINJ = IOIM_USER_IOIM14CON_OKINJ;
			IOIM14CONbits.FLTINJ = IOIM_USER_IOIM14CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM14BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM14BCON = IOIM_USER_IOIM14BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM14STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM14STAT = 
			( IOIM_USER_IOIM14STAT_OK << _IOIM14STAT_OK_POSITION ) |
			( IOIM_USER_IOIM14STAT_ERR << _IOIM14STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM14STAT_OVF << _IOIM14STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM14STAT_RREDGE << _IOIM14STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM14STAT_RFEDGE << _IOIM14STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM14STAT_FREDGE << _IOIM14STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM14STAT_FFEDGE << _IOIM14STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM14STAT_ERRCNT << _IOIM14STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM14STATbits.OK = IOIM_USER_IOIM14STAT_OK;
			IOIM14STATbits.ERR = IOIM_USER_IOIM14STAT_ERR;
			IOIM14STATbits.OVF = IOIM_USER_IOIM14STAT_OVF;
			IOIM14STATbits.RREDGE = IOIM_USER_IOIM14STAT_RREDGE;
			IOIM14STATbits.RFEDGE = IOIM_USER_IOIM14STAT_RFEDGE;
			IOIM14STATbits.FREDGE = IOIM_USER_IOIM14STAT_FREDGE;
			IOIM14STATbits.FFEDGE = IOIM_USER_IOIM14STAT_FFEDGE;
			IOIM14STATbits.ERRCNT = IOIM_USER_IOIM14STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM15_Set_Register(void)
* @brief     IOIM15レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM15_Set_Register(void)
{		
#if ( PMD_IOIM15MD == PMD_MODULE_ENABLE )

	/*-----------------------------------------------------------------------*/
	/* IOIM15CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM15CON = 
			( IOIM_USER_IOIM15CON_REFSEL << _IOIM15CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM15CON_FBKSEL << _IOIM15CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM15CON_EXTCLK << _IOIM15CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM15CON_LOCK << _IOIM15CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM15CON_SIDL << _IOIM15CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM15CON_SLPEN << _IOIM15CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM15CON_ON << _IOIM15CON_ON_POSITION ) |
			( IOIM_USER_IOIM15CON_EOVFVAL << _IOIM15CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM15CON_TESTEN << _IOIM15CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM15CON_OKINJ << _IOIM15CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM15CON_FLTINJ << _IOIM15CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM15CONbits.REFSEL = IOIM_USER_IOIM15CON_REFSEL;
			IOIM15CONbits.FBKSEL = IOIM_USER_IOIM15CON_FBKSEL;
			IOIM15CONbits.EXTCLK = IOIM_USER_IOIM15CON_EXTCLK;
			IOIM15CONbits.LOCK = IOIM_USER_IOIM15CON_LOCK;
			IOIM15CONbits.SIDL = IOIM_USER_IOIM15CON_SIDL;
			IOIM15CONbits.SLPEN = IOIM_USER_IOIM15CON_SLPEN;
			IOIM15CONbits.ON = IOIM_USER_IOIM15CON_ON;
			IOIM15CONbits.EOVFVAL = IOIM_USER_IOIM15CON_EOVFVAL;
			IOIM15CONbits.TESTEN = IOIM_USER_IOIM15CON_TESTEN;
			IOIM15CONbits.OKINJ = IOIM_USER_IOIM15CON_OKINJ;
			IOIM15CONbits.FLTINJ = IOIM_USER_IOIM15CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM15BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM15BCON = IOIM_USER_IOIM15BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM15STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM15STAT = 
			( IOIM_USER_IOIM15STAT_OK << _IOIM15STAT_OK_POSITION ) |
			( IOIM_USER_IOIM15STAT_ERR << _IOIM15STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM15STAT_OVF << _IOIM15STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM15STAT_RREDGE << _IOIM15STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM15STAT_RFEDGE << _IOIM15STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM15STAT_FREDGE << _IOIM15STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM15STAT_FFEDGE << _IOIM15STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM15STAT_ERRCNT << _IOIM15STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM15STATbits.OK = IOIM_USER_IOIM15STAT_OK;
			IOIM15STATbits.ERR = IOIM_USER_IOIM15STAT_ERR;
			IOIM15STATbits.OVF = IOIM_USER_IOIM15STAT_OVF;
			IOIM15STATbits.RREDGE = IOIM_USER_IOIM15STAT_RREDGE;
			IOIM15STATbits.RFEDGE = IOIM_USER_IOIM15STAT_RFEDGE;
			IOIM15STATbits.FREDGE = IOIM_USER_IOIM15STAT_FREDGE;
			IOIM15STATbits.FFEDGE = IOIM_USER_IOIM15STAT_FFEDGE;
			IOIM15STATbits.ERRCNT = IOIM_USER_IOIM15STAT_ERRCNT;
		#endif 
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_IOIM16_Set_Register(void)
* @brief     IOIM16レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOIM16_Set_Register(void)
{		
#if ( PMD_IOIM16MD == PMD_MODULE_ENABLE )

	/*-----------------------------------------------------------------------*/
	/* IOIM16CONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM16CON = 
			( IOIM_USER_IOIM16CON_REFSEL << _IOIM16CON_REFSEL_POSITION ) |
			( IOIM_USER_IOIM16CON_FBKSEL << _IOIM16CON_FBKSEL_POSITION ) |
			( IOIM_USER_IOIM16CON_EXTCLK << _IOIM16CON_EXTCLK_POSITION ) |
			( IOIM_USER_IOIM16CON_LOCK << _IOIM16CON_LOCK_POSITION ) |
			( IOIM_USER_IOIM16CON_SIDL << _IOIM16CON_SIDL_POSITION ) |
			( IOIM_USER_IOIM16CON_SLPEN << _IOIM16CON_SLPEN_POSITION ) |
			( IOIM_USER_IOIM16CON_ON << _IOIM16CON_ON_POSITION ) |
			( IOIM_USER_IOIM16CON_EOVFVAL << _IOIM16CON_EOVFVAL_POSITION ) |
			( IOIM_USER_IOIM16CON_TESTEN << _IOIM16CON_TESTEN_POSITION ) |
			( IOIM_USER_IOIM16CON_OKINJ << _IOIM16CON_OKINJ_POSITION ) |
			( IOIM_USER_IOIM16CON_FLTINJ << _IOIM16CON_FLTINJ_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM16CONbits.REFSEL = IOIM_USER_IOIM16CON_REFSEL;
			IOIM16CONbits.FBKSEL = IOIM_USER_IOIM16CON_FBKSEL;
			IOIM16CONbits.EXTCLK = IOIM_USER_IOIM16CON_EXTCLK;
			IOIM16CONbits.LOCK = IOIM_USER_IOIM16CON_LOCK;
			IOIM16CONbits.SIDL = IOIM_USER_IOIM16CON_SIDL;
			IOIM16CONbits.SLPEN = IOIM_USER_IOIM16CON_SLPEN;
			IOIM16CONbits.ON = IOIM_USER_IOIM16CON_ON;
			IOIM16CONbits.EOVFVAL = IOIM_USER_IOIM16CON_EOVFVAL;
			IOIM16CONbits.TESTEN = IOIM_USER_IOIM16CON_TESTEN;
			IOIM16CONbits.OKINJ = IOIM_USER_IOIM16CON_OKINJ;
			IOIM16CONbits.FLTINJ = IOIM_USER_IOIM16CON_FLTINJ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* IOIM16BCONレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM16BCON = IOIM_USER_IOIM16BCON;
	/*-----------------------------------------------------------------------*/
	/* IOIM16STATレジスタ */
	/*-----------------------------------------------------------------------*/
		IOIM16STAT = 
			( IOIM_USER_IOIM16STAT_OK << _IOIM16STAT_OK_POSITION ) |
			( IOIM_USER_IOIM16STAT_ERR << _IOIM16STAT_ERR_POSITION ) |
			( IOIM_USER_IOIM16STAT_OVF << _IOIM16STAT_OVF_POSITION ) |
			( IOIM_USER_IOIM16STAT_RREDGE << _IOIM16STAT_RREDGE_POSITION ) |
			( IOIM_USER_IOIM16STAT_RFEDGE << _IOIM16STAT_RFEDGE_POSITION ) |
			( IOIM_USER_IOIM16STAT_FREDGE << _IOIM16STAT_FREDGE_POSITION ) |
			( IOIM_USER_IOIM16STAT_FFEDGE << _IOIM16STAT_FFEDGE_POSITION ) |
			( IOIM_USER_IOIM16STAT_ERRCNT << _IOIM16STAT_ERRCNT_POSITION ) ;
		#ifdef DEF_BITNAME
			IOIM16STATbits.OK = IOIM_USER_IOIM16STAT_OK;
			IOIM16STATbits.ERR = IOIM_USER_IOIM16STAT_ERR;
			IOIM16STATbits.OVF = IOIM_USER_IOIM16STAT_OVF;
			IOIM16STATbits.RREDGE = IOIM_USER_IOIM16STAT_RREDGE;
			IOIM16STATbits.RFEDGE = IOIM_USER_IOIM16STAT_RFEDGE;
			IOIM16STATbits.FREDGE = IOIM_USER_IOIM16STAT_FREDGE;
			IOIM16STATbits.FFEDGE = IOIM_USER_IOIM16STAT_FFEDGE;
			IOIM16STATbits.ERRCNT = IOIM_USER_IOIM16STAT_ERRCNT;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_MIOMON_Set_Register(void)
* @brief     全てのIOMONレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_IOMON_Set_Register(void)
{
#if ( PMD_IOIM1MD == PMD_MODULE_ENABLE )
    vdg_IOIM1_Set_Register();
#endif
#if ( PMD_IOIM2MD == PMD_MODULE_ENABLE )
    vdg_IOIM2_Set_Register();
#endif
#if ( PMD_IOIM3MD == PMD_MODULE_ENABLE )
    vdg_IOIM3_Set_Register();
#endif
#if ( PMD_IOIM4MD == PMD_MODULE_ENABLE )
    vdg_IOIM4_Set_Register();
#endif
#if ( PMD_IOIM5MD == PMD_MODULE_ENABLE )
    vdg_IOIM5_Set_Register();
#endif
#if ( PMD_IOIM6MD == PMD_MODULE_ENABLE )
    vdg_IOIM6_Set_Register();
#endif
#if ( PMD_IOIM7MD == PMD_MODULE_ENABLE )
    vdg_IOIM7_Set_Register();
#endif
#if ( PMD_IOIM8MD == PMD_MODULE_ENABLE )
    vdg_IOIM8_Set_Register();
#endif
	
#if ( PMD_IOIM9MD == PMD_MODULE_ENABLE )
    vdg_IOIM9_Set_Register();
#endif
#if ( PMD_IOIM10MD == PMD_MODULE_ENABLE )
    vdg_IOIM10_Set_Register();
#endif
#if ( PMD_IOIM11MD == PMD_MODULE_ENABLE )
    vdg_IOIM11_Set_Register();
#endif
#if ( PMD_IOIM12MD == PMD_MODULE_ENABLE )
    vdg_IOIM2_Set_Register();
#endif
	
#if ( PMD_IOIM13MD == PMD_MODULE_ENABLE )
    vdg_IOIM13_Set_Register();
#endif
#if ( PMD_IOIM14MD == PMD_MODULE_ENABLE )
    vdg_IOIM14_Set_Register();
#endif
#if ( PMD_IOIM15MD == PMD_MODULE_ENABLE )
    vdg_IOIM15_Set_Register();
#endif
#if ( PMD_IOIM16MD == PMD_MODULE_ENABLE )
    vdg_IOIM16_Set_Register();
#endif
}