/*----------------------------------------------------------------------------*/
/**
* @file		DMA_Driver.c
* @brief	DMAモジュールに関するドライバ関数
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
#include "dma_driver.h"
#include "dma_user.h"
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
* @fn        vdg_DMACOM_Set_Register(void) 
* @brief     DMA共通レジスタを初期化します
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_DMACOM_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* DMACONレジスタ */
	/*-----------------------------------------------------------------------*/
		DMACON = 
			( DMA_USER_DMACON_PRIORITY << _DMACON_PRIORITY_POSITION ) |
			( DMA_USER_DMACON_SIDL << _DMACON_SIDL_POSITION ) |
			( DMA_USER_DMACON_ON << _DMACON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			DMACONbits.PRIORITY = DMA_USER_DMACON_PRIORITY;
			DMACONbits.SIDL = DMA_USER_DMACON_SIDL;
			DMACONbits.ON = DMA_USER_DMACON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMABUFレジスタ */
	/*-----------------------------------------------------------------------*/
		DMABUF = DMA_USER_DMABUF;
	/*-----------------------------------------------------------------------*/
	/* DMALOWレジスタ */
	/*-----------------------------------------------------------------------*/
		DMALOW = DMA_USER_DMALOW;
	/*-----------------------------------------------------------------------*/
	/* DMAHIGHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMAHIGH =  DMA_USER_DMAHIGH;
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA0_Set_Register(void) 
* @brief        DMA0レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA0_Set_Register(void)
{
#if (PMD_DMA0MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA0CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CH = 
			( DMA_USER_DMA0CH_CHEN << _DMA0CH_CHEN_POSITION ) |
			( DMA_USER_DMA0CH_HALFEN << _DMA0CH_HALFEN_POSITION ) |
			( DMA_USER_DMA0CH_MATCHEN << _DMA0CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA0CH_DONEEN << _DMA0CH_DONEEN_POSITION ) |
			( DMA_USER_DMA0CH_CHREQ << _DMA0CH_CHREQ_POSITION ) |
			( DMA_USER_DMA0CH_SIZE << _DMA0CH_SIZE_POSITION ) |
			( DMA_USER_DMA0CH_FLWCON << _DMA0CH_FLWCON_POSITION ) |
			( DMA_USER_DMA0CH_TRMODE << _DMA0CH_TRMODE_POSITION ) |
			( DMA_USER_DMA0CH_DAMODE << _DMA0CH_DAMODE_POSITION ) |
			( DMA_USER_DMA0CH_SAMODE << _DMA0CH_SAMODE_POSITION ) |
			( DMA_USER_DMA0CH_RETEN << _DMA0CH_RETEN_POSITION ) |
			( DMA_USER_DMA0CH_RELOADS << _DMA0CH_RELOADS_POSITION ) |
			( DMA_USER_DMA0CH_RELOADD << _DMA0CH_RELOADD_POSITION ) |
			( DMA_USER_DMA0CH_RELOADC << _DMA0CH_RELOADC_POSITION ) |
			( DMA_USER_DMA0CH_PCHEN << _DMA0CH_PCHEN_POSITION ) |
			( DMA_USER_DMA0CH_PPEN << _DMA0CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA0CHbits.CHEN = DMA_USER_DMA0CH_CHEN;
			DMA0CHbits.HALFEN = DMA_USER_DMA0CH_HALFEN;
			DMA0CHbits.MATCHEN = DMA_USER_DMA0CH_MATCHEN;
			DMA0CHbits.DONEEN = DMA_USER_DMA0CH_DONEEN;
			DMA0CHbits.CHREQ = DMA_USER_DMA0CH_CHREQ;
			DMA0CHbits.SIZE = DMA_USER_DMA0CH_SIZE;
			DMA0CHbits.FLWCON = DMA_USER_DMA0CH_FLWCON;
			DMA0CHbits.TRMODE = DMA_USER_DMA0CH_TRMODE;
			DMA0CHbits.DAMODE = DMA_USER_DMA0CH_DAMODE;
			DMA0CHbits.SAMODE = DMA_USER_DMA0CH_SAMODE;
			DMA0CHbits.RETEN = DMA_USER_DMA0CH_RETEN;
			DMA0CHbits.RELOADS = DMA_USER_DMA0CH_RELOADS;
			DMA0CHbits.RELOADD = DMA_USER_DMA0CH_RELOADD;
			DMA0CHbits.RELOADC = DMA_USER_DMA0CH_RELOADC;
			DMA0CHbits.PCHEN = DMA_USER_DMA0CH_PCHEN;
			DMA0CHbits.PPEN = DMA_USER_DMA0CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA0SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SEL =  DMA_USER_DMA0SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA0STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0STAT = 
			( DMA_USER_DMA0STAT_DBUFWF << _DMA0STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA0STAT_MATCH << _DMA0STAT_MATCH_POSITION ) |
			( DMA_USER_DMA0STAT_OVERRUN << _DMA0STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA0STAT_HALF << _DMA0STAT_HALF_POSITION ) |
			( DMA_USER_DMA0STAT_DONE << _DMA0STAT_DONE_POSITION ) |
			( DMA_USER_DMA0STAT_ADRERR << _DMA0STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA0STAT_BRERR << _DMA0STAT_BRERR_POSITION ) |
			( DMA_USER_DMA0STAT_BWERR << _DMA0STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA0STATbits.DBUFWF = DMA_USER_DMA0STAT_DBUFWF;
			DMA0STATbits.MATCH = DMA_USER_DMA0STAT_MATCH;
			DMA0STATbits.OVERRUN = DMA_USER_DMA0STAT_OVERRUN;
			DMA0STATbits.HALF = DMA_USER_DMA0STAT_HALF;
			DMA0STATbits.DONE = DMA_USER_DMA0STAT_DONE;
			DMA0STATbits.ADRERR = DMA_USER_DMA0STAT_ADRERR;
			DMA0STATbits.BRERR = DMA_USER_DMA0STAT_BRERR;
			DMA0STATbits.BWERR = DMA_USER_DMA0STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA0SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SRC = DMA_USER_DMA0SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA0DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0DST = DMA_USER_DMA0DST;
	/*-----------------------------------------------------------------------*/
	/* DMA0CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CNT =  DMA_USER_DMA0CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA0CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0CLR = DMA_USER_DMA0CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA0SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0SET = DMA_USER_DMA0SET;
	/*-----------------------------------------------------------------------*/
	/* DMA0INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0INV = DMA_USER_DMA0INV;
	/*-----------------------------------------------------------------------*/
	/* DMA0MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0MSK = DMA_USER_DMA0MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA0PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA0PAT = DMA_USER_DMA0PAT;
		
		DMA0CHbits.CHEN = DMA_USER_DMA0CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA1_Set_Register(void) 
* @brief        DMA1レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA1_Set_Register(void)
{
#if (PMD_DMA1MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA1CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1CH = 
			( DMA_USER_DMA1CH_CHEN << _DMA1CH_CHEN_POSITION ) |
			( DMA_USER_DMA1CH_HALFEN << _DMA1CH_HALFEN_POSITION ) |
			( DMA_USER_DMA1CH_MATCHEN << _DMA1CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA1CH_DONEEN << _DMA1CH_DONEEN_POSITION ) |
			( DMA_USER_DMA1CH_CHREQ << _DMA1CH_CHREQ_POSITION ) |
			( DMA_USER_DMA1CH_SIZE << _DMA1CH_SIZE_POSITION ) |
			( DMA_USER_DMA1CH_FLWCON << _DMA1CH_FLWCON_POSITION ) |
			( DMA_USER_DMA1CH_TRMODE << _DMA1CH_TRMODE_POSITION ) |
			( DMA_USER_DMA1CH_DAMODE << _DMA1CH_DAMODE_POSITION ) |
			( DMA_USER_DMA1CH_SAMODE << _DMA1CH_SAMODE_POSITION ) |
			( DMA_USER_DMA1CH_RETEN << _DMA1CH_RETEN_POSITION ) |
			( DMA_USER_DMA1CH_RELOADS << _DMA1CH_RELOADS_POSITION ) |
			( DMA_USER_DMA1CH_RELOADD << _DMA1CH_RELOADD_POSITION ) |
			( DMA_USER_DMA1CH_RELOADC << _DMA1CH_RELOADC_POSITION ) |
			( DMA_USER_DMA1CH_PCHEN << _DMA1CH_PCHEN_POSITION ) |
			( DMA_USER_DMA1CH_PPEN << _DMA1CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA1CHbits.CHEN = DMA_USER_DMA1CH_CHEN;
			DMA1CHbits.HALFEN = DMA_USER_DMA1CH_HALFEN;
			DMA1CHbits.MATCHEN = DMA_USER_DMA1CH_MATCHEN;
			DMA1CHbits.DONEEN = DMA_USER_DMA1CH_DONEEN;
			DMA1CHbits.CHREQ = DMA_USER_DMA1CH_CHREQ;
			DMA1CHbits.SIZE = DMA_USER_DMA1CH_SIZE;
			DMA1CHbits.FLWCON = DMA_USER_DMA1CH_FLWCON;
			DMA1CHbits.TRMODE = DMA_USER_DMA1CH_TRMODE;
			DMA1CHbits.DAMODE = DMA_USER_DMA1CH_DAMODE;
			DMA1CHbits.SAMODE = DMA_USER_DMA1CH_SAMODE;
			DMA1CHbits.RETEN = DMA_USER_DMA1CH_RETEN;
			DMA1CHbits.RELOADS = DMA_USER_DMA1CH_RELOADS;
			DMA1CHbits.RELOADD = DMA_USER_DMA1CH_RELOADD;
			DMA1CHbits.RELOADC = DMA_USER_DMA1CH_RELOADC;
			DMA1CHbits.PCHEN = DMA_USER_DMA1CH_PCHEN;
			DMA1CHbits.PPEN = DMA_USER_DMA1CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA1SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1SEL = DMA_USER_DMA1SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1STAT = 
			( DMA_USER_DMA1STAT_DBUFWF << _DMA1STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA1STAT_MATCH << _DMA1STAT_MATCH_POSITION ) |
			( DMA_USER_DMA1STAT_OVERRUN << _DMA1STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA1STAT_HALF << _DMA1STAT_HALF_POSITION ) |
			( DMA_USER_DMA1STAT_DONE << _DMA1STAT_DONE_POSITION ) |
			( DMA_USER_DMA1STAT_ADRERR << _DMA1STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA1STAT_BRERR << _DMA1STAT_BRERR_POSITION ) |
			( DMA_USER_DMA1STAT_BWERR << _DMA1STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA1STATbits.DBUFWF = DMA_USER_DMA1STAT_DBUFWF;
			DMA1STATbits.MATCH = DMA_USER_DMA1STAT_MATCH;
			DMA1STATbits.OVERRUN = DMA_USER_DMA1STAT_OVERRUN;
			DMA1STATbits.HALF = DMA_USER_DMA1STAT_HALF;
			DMA1STATbits.DONE = DMA_USER_DMA1STAT_DONE;
			DMA1STATbits.ADRERR = DMA_USER_DMA1STAT_ADRERR;
			DMA1STATbits.BRERR = DMA_USER_DMA1STAT_BRERR;
			DMA1STATbits.BWERR = DMA_USER_DMA1STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA1SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1SRC = DMA_USER_DMA1SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA1DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1DST = DMA_USER_DMA1DST;
	/*-----------------------------------------------------------------------*/
	/* DMA1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1CNT = DMA_USER_DMA1CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA1CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1CLR = DMA_USER_DMA1CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA1SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1SET = DMA_USER_DMA1SET;
	/*-----------------------------------------------------------------------*/
	/* DMA1INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1INV = DMA_USER_DMA1INV;
	/*-----------------------------------------------------------------------*/
	/* DMA1MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1MSK = DMA_USER_DMA1MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA1PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA1PAT = DMA_USER_DMA1PAT;
		
		DMA1CHbits.CHEN = DMA_USER_DMA1CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA2_Set_Register(void)
* @brief        DMA2レジスタを初期化します
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_DMA2_Set_Register(void)
{
#if (PMD_DMA2MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA2CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2CH = 
			( DMA_USER_DMA2CH_CHEN << _DMA2CH_CHEN_POSITION ) |
			( DMA_USER_DMA2CH_HALFEN << _DMA2CH_HALFEN_POSITION ) |
			( DMA_USER_DMA2CH_MATCHEN << _DMA2CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA2CH_DONEEN << _DMA2CH_DONEEN_POSITION ) |
			( DMA_USER_DMA2CH_CHREQ << _DMA2CH_CHREQ_POSITION ) |
			( DMA_USER_DMA2CH_SIZE << _DMA2CH_SIZE_POSITION ) |
			( DMA_USER_DMA2CH_FLWCON << _DMA2CH_FLWCON_POSITION ) |
			( DMA_USER_DMA2CH_TRMODE << _DMA2CH_TRMODE_POSITION ) |
			( DMA_USER_DMA2CH_DAMODE << _DMA2CH_DAMODE_POSITION ) |
			( DMA_USER_DMA2CH_SAMODE << _DMA2CH_SAMODE_POSITION ) |
			( DMA_USER_DMA2CH_RETEN << _DMA2CH_RETEN_POSITION ) |
			( DMA_USER_DMA2CH_RELOADS << _DMA2CH_RELOADS_POSITION ) |
			( DMA_USER_DMA2CH_RELOADD << _DMA2CH_RELOADD_POSITION ) |
			( DMA_USER_DMA2CH_RELOADC << _DMA2CH_RELOADC_POSITION ) |
			( DMA_USER_DMA2CH_PCHEN << _DMA2CH_PCHEN_POSITION ) |
			( DMA_USER_DMA2CH_PPEN << _DMA2CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA2CHbits.CHEN = DMA_USER_DMA2CH_CHEN;
			DMA2CHbits.HALFEN = DMA_USER_DMA2CH_HALFEN;
			DMA2CHbits.MATCHEN = DMA_USER_DMA2CH_MATCHEN;
			DMA2CHbits.DONEEN = DMA_USER_DMA2CH_DONEEN;
			DMA2CHbits.CHREQ = DMA_USER_DMA2CH_CHREQ;
			DMA2CHbits.SIZE = DMA_USER_DMA2CH_SIZE;
			DMA2CHbits.FLWCON = DMA_USER_DMA2CH_FLWCON;
			DMA2CHbits.TRMODE = DMA_USER_DMA2CH_TRMODE;
			DMA2CHbits.DAMODE = DMA_USER_DMA2CH_DAMODE;
			DMA2CHbits.SAMODE = DMA_USER_DMA2CH_SAMODE;
			DMA2CHbits.RETEN = DMA_USER_DMA2CH_RETEN;
			DMA2CHbits.RELOADS = DMA_USER_DMA2CH_RELOADS;
			DMA2CHbits.RELOADD = DMA_USER_DMA2CH_RELOADD;
			DMA2CHbits.RELOADC = DMA_USER_DMA2CH_RELOADC;
			DMA2CHbits.PCHEN = DMA_USER_DMA2CH_PCHEN;
			DMA2CHbits.PPEN = DMA_USER_DMA2CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA2SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2SEL = DMA_USER_DMA2SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2STAT = 
			( DMA_USER_DMA2STAT_DBUFWF << _DMA2STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA2STAT_MATCH << _DMA2STAT_MATCH_POSITION ) |
			( DMA_USER_DMA2STAT_OVERRUN << _DMA2STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA2STAT_HALF << _DMA2STAT_HALF_POSITION ) |
			( DMA_USER_DMA2STAT_DONE << _DMA2STAT_DONE_POSITION ) |
			( DMA_USER_DMA2STAT_ADRERR << _DMA2STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA2STAT_BRERR << _DMA2STAT_BRERR_POSITION ) |
			( DMA_USER_DMA2STAT_BWERR << _DMA2STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA2STATbits.DBUFWF = DMA_USER_DMA2STAT_DBUFWF;
			DMA2STATbits.MATCH = DMA_USER_DMA2STAT_MATCH;
			DMA2STATbits.OVERRUN = DMA_USER_DMA2STAT_OVERRUN;
			DMA2STATbits.HALF = DMA_USER_DMA2STAT_HALF;
			DMA2STATbits.DONE = DMA_USER_DMA2STAT_DONE;
			DMA2STATbits.ADRERR = DMA_USER_DMA2STAT_ADRERR;
			DMA2STATbits.BRERR = DMA_USER_DMA2STAT_BRERR;
			DMA2STATbits.BWERR = DMA_USER_DMA2STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA2SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2SRC = DMA_USER_DMA2SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA2DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2DST = DMA_USER_DMA2DST;
	/*-----------------------------------------------------------------------*/
	/* DMA2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2CNT = DMA_USER_DMA2CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA2CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2CLR = DMA_USER_DMA2CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA2SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2SET = DMA_USER_DMA2SET;
	/*-----------------------------------------------------------------------*/
	/* DMA2INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2INV = DMA_USER_DMA2INV;
	/*-----------------------------------------------------------------------*/
	/* DMA2MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2MSK = DMA_USER_DMA2MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA2PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA2PAT = DMA_USER_DMA2PAT;
		
		DMA2CHbits.CHEN = DMA_USER_DMA2CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA3_Set_Register(void)
* @brief        DMA3レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA3_Set_Register(void)
{
#if (PMD_DMA3MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA3CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3CH = 
			( DMA_USER_DMA3CH_CHEN << _DMA3CH_CHEN_POSITION ) |
			( DMA_USER_DMA3CH_HALFEN << _DMA3CH_HALFEN_POSITION ) |
			( DMA_USER_DMA3CH_MATCHEN << _DMA3CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA3CH_DONEEN << _DMA3CH_DONEEN_POSITION ) |
			( DMA_USER_DMA3CH_CHREQ << _DMA3CH_CHREQ_POSITION ) |
			( DMA_USER_DMA3CH_SIZE << _DMA3CH_SIZE_POSITION ) |
			( DMA_USER_DMA3CH_FLWCON << _DMA3CH_FLWCON_POSITION ) |
			( DMA_USER_DMA3CH_TRMODE << _DMA3CH_TRMODE_POSITION ) |
			( DMA_USER_DMA3CH_DAMODE << _DMA3CH_DAMODE_POSITION ) |
			( DMA_USER_DMA3CH_SAMODE << _DMA3CH_SAMODE_POSITION ) |
			( DMA_USER_DMA3CH_RETEN << _DMA3CH_RETEN_POSITION ) |
			( DMA_USER_DMA3CH_RELOADS << _DMA3CH_RELOADS_POSITION ) |
			( DMA_USER_DMA3CH_RELOADD << _DMA3CH_RELOADD_POSITION ) |
			( DMA_USER_DMA3CH_RELOADC << _DMA3CH_RELOADC_POSITION ) |
			( DMA_USER_DMA3CH_PCHEN << _DMA3CH_PCHEN_POSITION ) |
			( DMA_USER_DMA3CH_PPEN << _DMA3CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA3CHbits.CHEN = DMA_USER_DMA3CH_CHEN;
			DMA3CHbits.HALFEN = DMA_USER_DMA3CH_HALFEN;
			DMA3CHbits.MATCHEN = DMA_USER_DMA3CH_MATCHEN;
			DMA3CHbits.DONEEN = DMA_USER_DMA3CH_DONEEN;
			DMA3CHbits.CHREQ = DMA_USER_DMA3CH_CHREQ;
			DMA3CHbits.SIZE = DMA_USER_DMA3CH_SIZE;
			DMA3CHbits.FLWCON = DMA_USER_DMA3CH_FLWCON;
			DMA3CHbits.TRMODE = DMA_USER_DMA3CH_TRMODE;
			DMA3CHbits.DAMODE = DMA_USER_DMA3CH_DAMODE;
			DMA3CHbits.SAMODE = DMA_USER_DMA3CH_SAMODE;
			DMA3CHbits.RETEN = DMA_USER_DMA3CH_RETEN;
			DMA3CHbits.RELOADS = DMA_USER_DMA3CH_RELOADS;
			DMA3CHbits.RELOADD = DMA_USER_DMA3CH_RELOADD;
			DMA3CHbits.RELOADC = DMA_USER_DMA3CH_RELOADC;
			DMA3CHbits.PCHEN = DMA_USER_DMA3CH_PCHEN;
			DMA3CHbits.PPEN = DMA_USER_DMA3CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA3SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3SEL = DMA_USER_DMA3SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3STAT = 
			( DMA_USER_DMA3STAT_DBUFWF << _DMA3STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA3STAT_MATCH << _DMA3STAT_MATCH_POSITION ) |
			( DMA_USER_DMA3STAT_OVERRUN << _DMA3STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA3STAT_HALF << _DMA3STAT_HALF_POSITION ) |
			( DMA_USER_DMA3STAT_DONE << _DMA3STAT_DONE_POSITION ) |
			( DMA_USER_DMA3STAT_ADRERR << _DMA3STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA3STAT_BRERR << _DMA3STAT_BRERR_POSITION ) |
			( DMA_USER_DMA3STAT_BWERR << _DMA3STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA3STATbits.DBUFWF = DMA_USER_DMA3STAT_DBUFWF;
			DMA3STATbits.MATCH = DMA_USER_DMA3STAT_MATCH;
			DMA3STATbits.OVERRUN = DMA_USER_DMA3STAT_OVERRUN;
			DMA3STATbits.HALF = DMA_USER_DMA3STAT_HALF;
			DMA3STATbits.DONE = DMA_USER_DMA3STAT_DONE;
			DMA3STATbits.ADRERR = DMA_USER_DMA3STAT_ADRERR;
			DMA3STATbits.BRERR = DMA_USER_DMA3STAT_BRERR;
			DMA3STATbits.BWERR = DMA_USER_DMA3STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA3SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3SRC = DMA_USER_DMA3SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA3DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3DST = DMA_USER_DMA3DST;
	/*-----------------------------------------------------------------------*/
	/* DMA3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3CNT = DMA_USER_DMA3CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA3CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3CLR = DMA_USER_DMA3CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA3SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3SET = DMA_USER_DMA3SET;
	/*-----------------------------------------------------------------------*/
	/* DMA3INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3INV = DMA_USER_DMA3INV;
	/*-----------------------------------------------------------------------*/
	/* DMA3MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3MSK = DMA_USER_DMA3MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA3PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA3PAT = DMA_USER_DMA3PAT;
		
		DMA3CHbits.CHEN = DMA_USER_DMA3CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA4_Set_Register(void) 
* @brief        DMA4レジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA4_Set_Register(void)
{
#if (PMD_DMA4MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA4CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4CH = 
			( DMA_USER_DMA4CH_CHEN << _DMA4CH_CHEN_POSITION ) |
			( DMA_USER_DMA4CH_HALFEN << _DMA4CH_HALFEN_POSITION ) |
			( DMA_USER_DMA4CH_MATCHEN << _DMA4CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA4CH_DONEEN << _DMA4CH_DONEEN_POSITION ) |
			( DMA_USER_DMA4CH_CHREQ << _DMA4CH_CHREQ_POSITION ) |
			( DMA_USER_DMA4CH_SIZE << _DMA4CH_SIZE_POSITION ) |
			( DMA_USER_DMA4CH_FLWCON << _DMA4CH_FLWCON_POSITION ) |
			( DMA_USER_DMA4CH_TRMODE << _DMA4CH_TRMODE_POSITION ) |
			( DMA_USER_DMA4CH_DAMODE << _DMA4CH_DAMODE_POSITION ) |
			( DMA_USER_DMA4CH_SAMODE << _DMA4CH_SAMODE_POSITION ) |
			( DMA_USER_DMA4CH_RETEN << _DMA4CH_RETEN_POSITION ) |
			( DMA_USER_DMA4CH_RELOADS << _DMA4CH_RELOADS_POSITION ) |
			( DMA_USER_DMA4CH_RELOADD << _DMA4CH_RELOADD_POSITION ) |
			( DMA_USER_DMA4CH_RELOADC << _DMA4CH_RELOADC_POSITION ) |
			( DMA_USER_DMA4CH_PCHEN << _DMA4CH_PCHEN_POSITION ) |
			( DMA_USER_DMA4CH_PPEN << _DMA4CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA4CHbits.CHEN = DMA_USER_DMA4CH_CHEN;
			DMA4CHbits.HALFEN = DMA_USER_DMA4CH_HALFEN;
			DMA4CHbits.MATCHEN = DMA_USER_DMA4CH_MATCHEN;
			DMA4CHbits.DONEEN = DMA_USER_DMA4CH_DONEEN;
			DMA4CHbits.CHREQ = DMA_USER_DMA4CH_CHREQ;
			DMA4CHbits.SIZE = DMA_USER_DMA4CH_SIZE;
			DMA4CHbits.FLWCON = DMA_USER_DMA4CH_FLWCON;
			DMA4CHbits.TRMODE = DMA_USER_DMA4CH_TRMODE;
			DMA4CHbits.DAMODE = DMA_USER_DMA4CH_DAMODE;
			DMA4CHbits.SAMODE = DMA_USER_DMA4CH_SAMODE;
			DMA4CHbits.RETEN = DMA_USER_DMA4CH_RETEN;
			DMA4CHbits.RELOADS = DMA_USER_DMA4CH_RELOADS;
			DMA4CHbits.RELOADD = DMA_USER_DMA4CH_RELOADD;
			DMA4CHbits.RELOADC = DMA_USER_DMA4CH_RELOADC;
			DMA4CHbits.PCHEN = DMA_USER_DMA4CH_PCHEN;
			DMA4CHbits.PPEN = DMA_USER_DMA4CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA4SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4SEL = DMA_USER_DMA4SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4STAT = 
			( DMA_USER_DMA4STAT_DBUFWF << _DMA4STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA4STAT_MATCH << _DMA4STAT_MATCH_POSITION ) |
			( DMA_USER_DMA4STAT_OVERRUN << _DMA4STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA4STAT_HALF << _DMA4STAT_HALF_POSITION ) |
			( DMA_USER_DMA4STAT_DONE << _DMA4STAT_DONE_POSITION ) |
			( DMA_USER_DMA4STAT_ADRERR << _DMA4STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA4STAT_BRERR << _DMA4STAT_BRERR_POSITION ) |
			( DMA_USER_DMA4STAT_BWERR << _DMA4STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA4STATbits.DBUFWF = DMA_USER_DMA4STAT_DBUFWF;
			DMA4STATbits.MATCH = DMA_USER_DMA4STAT_MATCH;
			DMA4STATbits.OVERRUN = DMA_USER_DMA4STAT_OVERRUN;
			DMA4STATbits.HALF = DMA_USER_DMA4STAT_HALF;
			DMA4STATbits.DONE = DMA_USER_DMA4STAT_DONE;
			DMA4STATbits.ADRERR = DMA_USER_DMA4STAT_ADRERR;
			DMA4STATbits.BRERR = DMA_USER_DMA4STAT_BRERR;
			DMA4STATbits.BWERR = DMA_USER_DMA4STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA4SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4SRC = DMA_USER_DMA4SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA4DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4DST = DMA_USER_DMA4DST;
	/*-----------------------------------------------------------------------*/
	/* DMA4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4CNT = DMA_USER_DMA4CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA4CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4CLR = DMA_USER_DMA4CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA4SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4SET = DMA_USER_DMA4SET;
	/*-----------------------------------------------------------------------*/
	/* DMA4INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4INV = DMA_USER_DMA4INV;
	/*-----------------------------------------------------------------------*/
	/* DMA4MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4MSK = DMA_USER_DMA4MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA4PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA4PAT = DMA_USER_DMA4PAT;
		
		DMA4CHbits.CHEN = DMA_USER_DMA4CH_CHEN;
	
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA5_Set_Register(void)
* @brief        DMA5レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA5_Set_Register(void)
{
#if (PMD_DMA5MD == PMD_MODULE_ENABLE)
   /*-----------------------------------------------------------------------*/
	/* DMA5CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5CH = 
			( DMA_USER_DMA5CH_CHEN << _DMA5CH_CHEN_POSITION ) |
			( DMA_USER_DMA5CH_HALFEN << _DMA5CH_HALFEN_POSITION ) |
			( DMA_USER_DMA5CH_MATCHEN << _DMA5CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA5CH_DONEEN << _DMA5CH_DONEEN_POSITION ) |
			( DMA_USER_DMA5CH_CHREQ << _DMA5CH_CHREQ_POSITION ) |
			( DMA_USER_DMA5CH_SIZE << _DMA5CH_SIZE_POSITION ) |
			( DMA_USER_DMA5CH_FLWCON << _DMA5CH_FLWCON_POSITION ) |
			( DMA_USER_DMA5CH_TRMODE << _DMA5CH_TRMODE_POSITION ) |
			( DMA_USER_DMA5CH_DAMODE << _DMA5CH_DAMODE_POSITION ) |
			( DMA_USER_DMA5CH_SAMODE << _DMA5CH_SAMODE_POSITION ) |
			( DMA_USER_DMA5CH_RETEN << _DMA5CH_RETEN_POSITION ) |
			( DMA_USER_DMA5CH_RELOADS << _DMA5CH_RELOADS_POSITION ) |
			( DMA_USER_DMA5CH_RELOADD << _DMA5CH_RELOADD_POSITION ) |
			( DMA_USER_DMA5CH_RELOADC << _DMA5CH_RELOADC_POSITION ) |
			( DMA_USER_DMA5CH_PCHEN << _DMA5CH_PCHEN_POSITION ) |
			( DMA_USER_DMA5CH_PPEN << _DMA5CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA5CHbits.CHEN = DMA_USER_DMA5CH_CHEN;
			DMA5CHbits.HALFEN = DMA_USER_DMA5CH_HALFEN;
			DMA5CHbits.MATCHEN = DMA_USER_DMA5CH_MATCHEN;
			DMA5CHbits.DONEEN = DMA_USER_DMA5CH_DONEEN;
			DMA5CHbits.CHREQ = DMA_USER_DMA5CH_CHREQ;
			DMA5CHbits.SIZE = DMA_USER_DMA5CH_SIZE;
			DMA5CHbits.FLWCON = DMA_USER_DMA5CH_FLWCON;
			DMA5CHbits.TRMODE = DMA_USER_DMA5CH_TRMODE;
			DMA5CHbits.DAMODE = DMA_USER_DMA5CH_DAMODE;
			DMA5CHbits.SAMODE = DMA_USER_DMA5CH_SAMODE;
			DMA5CHbits.RETEN = DMA_USER_DMA5CH_RETEN;
			DMA5CHbits.RELOADS = DMA_USER_DMA5CH_RELOADS;
			DMA5CHbits.RELOADD = DMA_USER_DMA5CH_RELOADD;
			DMA5CHbits.RELOADC = DMA_USER_DMA5CH_RELOADC;
			DMA5CHbits.PCHEN = DMA_USER_DMA5CH_PCHEN;
			DMA5CHbits.PPEN = DMA_USER_DMA5CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA5SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5SEL = DMA_USER_DMA5SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA5STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5STAT = 
			( DMA_USER_DMA5STAT_DBUFWF << _DMA5STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA5STAT_MATCH << _DMA5STAT_MATCH_POSITION ) |
			( DMA_USER_DMA5STAT_OVERRUN << _DMA5STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA5STAT_HALF << _DMA5STAT_HALF_POSITION ) |
			( DMA_USER_DMA5STAT_DONE << _DMA5STAT_DONE_POSITION ) |
			( DMA_USER_DMA5STAT_ADRERR << _DMA5STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA5STAT_BRERR << _DMA5STAT_BRERR_POSITION ) |
			( DMA_USER_DMA5STAT_BWERR << _DMA5STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA5STATbits.DBUFWF = DMA_USER_DMA5STAT_DBUFWF;
			DMA5STATbits.MATCH = DMA_USER_DMA5STAT_MATCH;
			DMA5STATbits.OVERRUN = DMA_USER_DMA5STAT_OVERRUN;
			DMA5STATbits.HALF = DMA_USER_DMA5STAT_HALF;
			DMA5STATbits.DONE = DMA_USER_DMA5STAT_DONE;
			DMA5STATbits.ADRERR = DMA_USER_DMA5STAT_ADRERR;
			DMA5STATbits.BRERR = DMA_USER_DMA5STAT_BRERR;
			DMA5STATbits.BWERR = DMA_USER_DMA5STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA5SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5SRC = DMA_USER_DMA5SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA5DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5DST =  DMA_USER_DMA5DST;
	/*-----------------------------------------------------------------------*/
	/* DMA5CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5CNT = DMA_USER_DMA5CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA5CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5CLR = DMA_USER_DMA5CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA5SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5SET = DMA_USER_DMA5SET;
	/*-----------------------------------------------------------------------*/
	/* DMA5INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5INV = DMA_USER_DMA5INV;
	/*-----------------------------------------------------------------------*/
	/* DMA5MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5MSK = DMA_USER_DMA5MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA5PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA5PAT = DMA_USER_DMA5PAT;
		
		DMA5CHbits.CHEN = DMA_USER_DMA5CH_CHEN;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA6_Set_Register(void)
* @brief     DMA6レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA6_Set_Register(void)
{
#if (PMD_DMA6MD == PMD_MODULE_ENABLE)
	/*-----------------------------------------------------------------------*/
	/* DMA6CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6CH = 
			( DMA_USER_DMA6CH_CHEN << _DMA6CH_CHEN_POSITION ) |
			( DMA_USER_DMA6CH_HALFEN << _DMA6CH_HALFEN_POSITION ) |
			( DMA_USER_DMA6CH_MATCHEN << _DMA6CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA6CH_DONEEN << _DMA6CH_DONEEN_POSITION ) |
			( DMA_USER_DMA6CH_CHREQ << _DMA6CH_CHREQ_POSITION ) |
			( DMA_USER_DMA6CH_SIZE << _DMA6CH_SIZE_POSITION ) |
			( DMA_USER_DMA6CH_FLWCON << _DMA6CH_FLWCON_POSITION ) |
			( DMA_USER_DMA6CH_TRMODE << _DMA6CH_TRMODE_POSITION ) |
			( DMA_USER_DMA6CH_DAMODE << _DMA6CH_DAMODE_POSITION ) |
			( DMA_USER_DMA6CH_SAMODE << _DMA6CH_SAMODE_POSITION ) |
			( DMA_USER_DMA6CH_RETEN << _DMA6CH_RETEN_POSITION ) |
			( DMA_USER_DMA6CH_RELOADS << _DMA6CH_RELOADS_POSITION ) |
			( DMA_USER_DMA6CH_RELOADD << _DMA6CH_RELOADD_POSITION ) |
			( DMA_USER_DMA6CH_RELOADC << _DMA6CH_RELOADC_POSITION ) |
			( DMA_USER_DMA6CH_PCHEN << _DMA6CH_PCHEN_POSITION ) |
			( DMA_USER_DMA6CH_PPEN << _DMA6CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA6CHbits.CHEN = DMA_USER_DMA6CH_CHEN;
			DMA6CHbits.HALFEN = DMA_USER_DMA6CH_HALFEN;
			DMA6CHbits.MATCHEN = DMA_USER_DMA6CH_MATCHEN;
			DMA6CHbits.DONEEN = DMA_USER_DMA6CH_DONEEN;
			DMA6CHbits.CHREQ = DMA_USER_DMA6CH_CHREQ;
			DMA6CHbits.SIZE = DMA_USER_DMA6CH_SIZE;
			DMA6CHbits.FLWCON = DMA_USER_DMA6CH_FLWCON;
			DMA6CHbits.TRMODE = DMA_USER_DMA6CH_TRMODE;
			DMA6CHbits.DAMODE = DMA_USER_DMA6CH_DAMODE;
			DMA6CHbits.SAMODE = DMA_USER_DMA6CH_SAMODE;
			DMA6CHbits.RETEN = DMA_USER_DMA6CH_RETEN;
			DMA6CHbits.RELOADS = DMA_USER_DMA6CH_RELOADS;
			DMA6CHbits.RELOADD = DMA_USER_DMA6CH_RELOADD;
			DMA6CHbits.RELOADC = DMA_USER_DMA6CH_RELOADC;
			DMA6CHbits.PCHEN = DMA_USER_DMA6CH_PCHEN;
			DMA6CHbits.PPEN = DMA_USER_DMA6CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA6SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6SEL =  DMA_USER_DMA6SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA6STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6STAT = 
			( DMA_USER_DMA6STAT_DBUFWF << _DMA6STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA6STAT_MATCH << _DMA6STAT_MATCH_POSITION ) |
			( DMA_USER_DMA6STAT_OVERRUN << _DMA6STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA6STAT_HALF << _DMA6STAT_HALF_POSITION ) |
			( DMA_USER_DMA6STAT_DONE << _DMA6STAT_DONE_POSITION ) |
			( DMA_USER_DMA6STAT_ADRERR << _DMA6STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA6STAT_BRERR << _DMA6STAT_BRERR_POSITION ) |
			( DMA_USER_DMA6STAT_BWERR << _DMA6STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA6STATbits.DBUFWF = DMA_USER_DMA6STAT_DBUFWF;
			DMA6STATbits.MATCH = DMA_USER_DMA6STAT_MATCH;
			DMA6STATbits.OVERRUN = DMA_USER_DMA6STAT_OVERRUN;
			DMA6STATbits.HALF = DMA_USER_DMA6STAT_HALF;
			DMA6STATbits.DONE = DMA_USER_DMA6STAT_DONE;
			DMA6STATbits.ADRERR = DMA_USER_DMA6STAT_ADRERR;
			DMA6STATbits.BRERR = DMA_USER_DMA6STAT_BRERR;
			DMA6STATbits.BWERR = DMA_USER_DMA6STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA6SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6SRC = DMA_USER_DMA6SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA6DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6DST = DMA_USER_DMA6DST;
	/*-----------------------------------------------------------------------*/
	/* DMA6CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6CNT =  DMA_USER_DMA6CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA6CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6CLR = DMA_USER_DMA6CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA6SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6SET = DMA_USER_DMA6SET;
	/*-----------------------------------------------------------------------*/
	/* DMA6INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6INV = DMA_USER_DMA6INV;
	/*-----------------------------------------------------------------------*/
	/* DMA6MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6MSK = DMA_USER_DMA6MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA6PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA6PAT = DMA_USER_DMA6PAT;
		
		DMA6CHbits.CHEN = DMA_USER_DMA6CH_CHEN;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA7_Set_Register(void)
* @brief     DMA7レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA7_Set_Register(void)
{
#if (PMD_DMA7MD == PMD_MODULE_ENABLE)
/*-----------------------------------------------------------------------*/
	/* DMA7CHレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7CH = 
			( DMA_USER_DMA7CH_CHEN << _DMA7CH_CHEN_POSITION ) |
			( DMA_USER_DMA7CH_HALFEN << _DMA7CH_HALFEN_POSITION ) |
			( DMA_USER_DMA7CH_MATCHEN << _DMA7CH_MATCHEN_POSITION ) |
			( DMA_USER_DMA7CH_DONEEN << _DMA7CH_DONEEN_POSITION ) |
			( DMA_USER_DMA7CH_CHREQ << _DMA7CH_CHREQ_POSITION ) |
			( DMA_USER_DMA7CH_SIZE << _DMA7CH_SIZE_POSITION ) |
			( DMA_USER_DMA7CH_FLWCON << _DMA7CH_FLWCON_POSITION ) |
			( DMA_USER_DMA7CH_TRMODE << _DMA7CH_TRMODE_POSITION ) |
			( DMA_USER_DMA7CH_DAMODE << _DMA7CH_DAMODE_POSITION ) |
			( DMA_USER_DMA7CH_SAMODE << _DMA7CH_SAMODE_POSITION ) |
			( DMA_USER_DMA7CH_RETEN << _DMA7CH_RETEN_POSITION ) |
			( DMA_USER_DMA7CH_RELOADS << _DMA7CH_RELOADS_POSITION ) |
			( DMA_USER_DMA7CH_RELOADD << _DMA7CH_RELOADD_POSITION ) |
			( DMA_USER_DMA7CH_RELOADC << _DMA7CH_RELOADC_POSITION ) |
			( DMA_USER_DMA7CH_PCHEN << _DMA7CH_PCHEN_POSITION ) |
			( DMA_USER_DMA7CH_PPEN << _DMA7CH_PPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA7CHbits.CHEN = DMA_USER_DMA7CH_CHEN;
			DMA7CHbits.HALFEN = DMA_USER_DMA7CH_HALFEN;
			DMA7CHbits.MATCHEN = DMA_USER_DMA7CH_MATCHEN;
			DMA7CHbits.DONEEN = DMA_USER_DMA7CH_DONEEN;
			DMA7CHbits.CHREQ = DMA_USER_DMA7CH_CHREQ;
			DMA7CHbits.SIZE = DMA_USER_DMA7CH_SIZE;
			DMA7CHbits.FLWCON = DMA_USER_DMA7CH_FLWCON;
			DMA7CHbits.TRMODE = DMA_USER_DMA7CH_TRMODE;
			DMA7CHbits.DAMODE = DMA_USER_DMA7CH_DAMODE;
			DMA7CHbits.SAMODE = DMA_USER_DMA7CH_SAMODE;
			DMA7CHbits.RETEN = DMA_USER_DMA7CH_RETEN;
			DMA7CHbits.RELOADS = DMA_USER_DMA7CH_RELOADS;
			DMA7CHbits.RELOADD = DMA_USER_DMA7CH_RELOADD;
			DMA7CHbits.RELOADC = DMA_USER_DMA7CH_RELOADC;
			DMA7CHbits.PCHEN = DMA_USER_DMA7CH_PCHEN;
			DMA7CHbits.PPEN = DMA_USER_DMA7CH_PPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA7SELレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7SEL = DMA_USER_DMA7SEL;
	/*-----------------------------------------------------------------------*/
	/* DMA7STATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7STAT = 
			( DMA_USER_DMA7STAT_DBUFWF << _DMA7STAT_DBUFWF_POSITION ) |
			( DMA_USER_DMA7STAT_MATCH << _DMA7STAT_MATCH_POSITION ) |
			( DMA_USER_DMA7STAT_OVERRUN << _DMA7STAT_OVERRUN_POSITION ) |
			( DMA_USER_DMA7STAT_HALF << _DMA7STAT_HALF_POSITION ) |
			( DMA_USER_DMA7STAT_DONE << _DMA7STAT_DONE_POSITION ) |
			( DMA_USER_DMA7STAT_ADRERR << _DMA7STAT_ADRERR_POSITION ) |
			( DMA_USER_DMA7STAT_BRERR << _DMA7STAT_BRERR_POSITION ) |
			( DMA_USER_DMA7STAT_BWERR << _DMA7STAT_BWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			DMA7STATbits.DBUFWF = DMA_USER_DMA7STAT_DBUFWF;
			DMA7STATbits.MATCH = DMA_USER_DMA7STAT_MATCH;
			DMA7STATbits.OVERRUN = DMA_USER_DMA7STAT_OVERRUN;
			DMA7STATbits.HALF = DMA_USER_DMA7STAT_HALF;
			DMA7STATbits.DONE = DMA_USER_DMA7STAT_DONE;
			DMA7STATbits.ADRERR = DMA_USER_DMA7STAT_ADRERR;
			DMA7STATbits.BRERR = DMA_USER_DMA7STAT_BRERR;
			DMA7STATbits.BWERR = DMA_USER_DMA7STAT_BWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* DMA7SRCレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7SRC =  DMA_USER_DMA7SRC;
	/*-----------------------------------------------------------------------*/
	/* DMA7DSTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7DST = DMA_USER_DMA7DST;
	/*-----------------------------------------------------------------------*/
	/* DMA7CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7CNT = DMA_USER_DMA7CNT;
	/*-----------------------------------------------------------------------*/
	/* DMA7CLRレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7CLR = DMA_USER_DMA7CLR;
	/*-----------------------------------------------------------------------*/
	/* DMA7SETレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7SET = DMA_USER_DMA7SET;
	/*-----------------------------------------------------------------------*/
	/* DMA7INVレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7INV = DMA_USER_DMA7INV;
	/*-----------------------------------------------------------------------*/
	/* DMA7MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7MSK = DMA_USER_DMA7MSK;
	/*-----------------------------------------------------------------------*/
	/* DMA7PATレジスタ */
	/*-----------------------------------------------------------------------*/
		DMA7PAT = DMA_USER_DMA7PAT;
		
		DMA7CHbits.CHEN = DMA_USER_DMA7CH_CHEN;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_DMA_Set_Register(void) 
* @brief     全てのDMAレジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_DMA_Set_Register(void)
{
    vdg_DMACOM_Set_Register();
#if (PMD_DMA0MD == PMD_MODULE_ENABLE)
    vdg_DMA0_Set_Register();
#endif
#if (PMD_DMA1MD == PMD_MODULE_ENABLE)
    vdg_DMA1_Set_Register();
#endif
#if (PMD_DMA2MD == PMD_MODULE_ENABLE)
    vdg_DMA2_Set_Register();
#endif
#if (PMD_DMA3MD == PMD_MODULE_ENABLE)
    vdg_DMA3_Set_Register();
#endif
#if (PMD_DMA4MD == PMD_MODULE_ENABLE)
    vdg_DMA4_Set_Register();
#endif
#if (PMD_DMA5MD == PMD_MODULE_ENABLE)
    vdg_DMA5_Set_Register();
#endif
	
#if (PMD_DMA6MD == PMD_MODULE_ENABLE)
    vdg_DMA6_Set_Register();
#endif
#if (PMD_DMA7MD == PMD_MODULE_ENABLE)
    vdg_DMA7_Set_Register();
#endif
}
