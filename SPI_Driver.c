/*----------------------------------------------------------------------------*/
/**
* @file		SPI_Driver.c
* @brief	SPIモジュールに関するドライバ関数
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
#include "spi_user.h"
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
* @fn        vdg_SPI1_Set_Register(void)
* @brief        SPI1のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI1_Set_Register(void)
{
#if ( PMD_SPI1MD == PMD_MODULE_ENABLE ) 
/*-----------------------------------------------------------------------*/
	/* SPI1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1CON1 = 
			( SPI_USER_SPI1CON1_ENHBUF << _SPI1CON1_ENHBUF_POSITION ) |
			( SPI_USER_SPI1CON1_SPIFE << _SPI1CON1_SPIFE_POSITION ) |
			( SPI_USER_SPI1CON1_MCLKEN << _SPI1CON1_MCLKEN_POSITION ) |
			( SPI_USER_SPI1CON1_DISSCK << _SPI1CON1_DISSCK_POSITION ) |
			( SPI_USER_SPI1CON1_DISSDI << _SPI1CON1_DISSDI_POSITION ) |
			( SPI_USER_SPI1CON1_MSTEN << _SPI1CON1_MSTEN_POSITION ) |
			( SPI_USER_SPI1CON1_CKP << _SPI1CON1_CKP_POSITION ) |
			( SPI_USER_SPI1CON1_SSEN << _SPI1CON1_SSEN_POSITION ) |
			( SPI_USER_SPI1CON1_CKE << _SPI1CON1_CKE_POSITION ) |
			( SPI_USER_SPI1CON1_SMP << _SPI1CON1_SMP_POSITION ) |
			( SPI_USER_SPI1CON1_MODE16 << _SPI1CON1_MODE16_POSITION ) |
			( SPI_USER_SPI1CON1_MODE32 << _SPI1CON1_MODE32_POSITION ) |
			( SPI_USER_SPI1CON1_DISSDO << _SPI1CON1_DISSDO_POSITION ) |
			( SPI_USER_SPI1CON1_SIDL << _SPI1CON1_SIDL_POSITION ) |
			( SPI_USER_SPI1CON1_ON << _SPI1CON1_ON_POSITION ) |
			( SPI_USER_SPI1CON1_FRMCNT << _SPI1CON1_FRMCNT_POSITION ) |
			( SPI_USER_SPI1CON1_FRMSYPW << _SPI1CON1_FRMSYPW_POSITION ) |
			( SPI_USER_SPI1CON1_MSSEN << _SPI1CON1_MSSEN_POSITION ) |
			( SPI_USER_SPI1CON1_FRMPOL << _SPI1CON1_FRMPOL_POSITION ) |
			( SPI_USER_SPI1CON1_FRMSYNC << _SPI1CON1_FRMSYNC_POSITION ) |
			( SPI_USER_SPI1CON1_FRMEN << _SPI1CON1_FRMEN_POSITION ) |
			( SPI_USER_SPI1CON1_AUDMOD << _SPI1CON1_AUDMOD_POSITION ) |
			( SPI_USER_SPI1CON1_URDTEN << _SPI1CON1_URDTEN_POSITION ) |
			( SPI_USER_SPI1CON1_AUDMONO << _SPI1CON1_AUDMONO_POSITION ) |
			( SPI_USER_SPI1CON1_IGNTUR << _SPI1CON1_IGNTUR_POSITION ) |
			( SPI_USER_SPI1CON1_IGNROV << _SPI1CON1_IGNROV_POSITION ) |
			( SPI_USER_SPI1CON1_SPISGNEXT << _SPI1CON1_SPISGNEXT_POSITION ) |
			( SPI_USER_SPI1CON1_AUDEN << _SPI1CON1_AUDEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI1CON1bits.ENHBUF = SPI_USER_SPI1CON1_ENHBUF;
			SPI1CON1bits.SPIFE = SPI_USER_SPI1CON1_SPIFE;
			SPI1CON1bits.MCLKEN = SPI_USER_SPI1CON1_MCLKEN;
			SPI1CON1bits.DISSCK = SPI_USER_SPI1CON1_DISSCK;
			SPI1CON1bits.DISSDI = SPI_USER_SPI1CON1_DISSDI;
			SPI1CON1bits.MSTEN = SPI_USER_SPI1CON1_MSTEN;
			SPI1CON1bits.CKP = SPI_USER_SPI1CON1_CKP;
			SPI1CON1bits.SSEN = SPI_USER_SPI1CON1_SSEN;
			SPI1CON1bits.CKE = SPI_USER_SPI1CON1_CKE;
			SPI1CON1bits.SMP = SPI_USER_SPI1CON1_SMP;
			SPI1CON1bits.MODE16 = SPI_USER_SPI1CON1_MODE16;
			SPI1CON1bits.MODE32 = SPI_USER_SPI1CON1_MODE32;
			SPI1CON1bits.DISSDO = SPI_USER_SPI1CON1_DISSDO;
			SPI1CON1bits.SIDL = SPI_USER_SPI1CON1_SIDL;
			SPI1CON1bits.ON = SPI_USER_SPI1CON1_ON;
			SPI1CON1bits.FRMCNT = SPI_USER_SPI1CON1_FRMCNT;
			SPI1CON1bits.FRMSYPW = SPI_USER_SPI1CON1_FRMSYPW;
			SPI1CON1bits.MSSEN = SPI_USER_SPI1CON1_MSSEN;
			SPI1CON1bits.FRMPOL = SPI_USER_SPI1CON1_FRMPOL;
			SPI1CON1bits.FRMSYNC = SPI_USER_SPI1CON1_FRMSYNC;
			SPI1CON1bits.FRMEN = SPI_USER_SPI1CON1_FRMEN;
			SPI1CON1bits.AUDMOD = SPI_USER_SPI1CON1_AUDMOD;
			SPI1CON1bits.URDTEN = SPI_USER_SPI1CON1_URDTEN;
			SPI1CON1bits.AUDMONO = SPI_USER_SPI1CON1_AUDMONO;
			SPI1CON1bits.IGNTUR = SPI_USER_SPI1CON1_IGNTUR;
			SPI1CON1bits.IGNROV = SPI_USER_SPI1CON1_IGNROV;
			SPI1CON1bits.SPISGNEXT = SPI_USER_SPI1CON1_SPISGNEXT;
			SPI1CON1bits.AUDEN = SPI_USER_SPI1CON1_AUDEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1CON2 = 
			( SPI_USER_SPI1CON2_WLENGTH << _SPI1CON2_WLENGTH_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI1CON2bits.WLENGTH = SPI_USER_SPI1CON2_WLENGTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1STAT = 
			( SPI_USER_SPI1STAT_SPIRBF << _SPI1STAT_SPIRBF_POSITION ) |
			( SPI_USER_SPI1STAT_SPITBF << _SPI1STAT_SPITBF_POSITION ) |
			( SPI_USER_SPI1STAT_SPITBE << _SPI1STAT_SPITBE_POSITION ) |
			( SPI_USER_SPI1STAT_SPIRBE << _SPI1STAT_SPIRBE_POSITION ) |
			( SPI_USER_SPI1STAT_SPIROV << _SPI1STAT_SPIROV_POSITION ) |
			( SPI_USER_SPI1STAT_SRMT << _SPI1STAT_SRMT_POSITION ) |
			( SPI_USER_SPI1STAT_SPITUR << _SPI1STAT_SPITUR_POSITION ) |
			( SPI_USER_SPI1STAT_SPIBUSY << _SPI1STAT_SPIBUSY_POSITION ) |
			( SPI_USER_SPI1STAT_FRMERR << _SPI1STAT_FRMERR_POSITION ) |
			( SPI_USER_SPI1STAT_TXELM << _SPI1STAT_TXELM_POSITION ) |
			( SPI_USER_SPI1STAT_RXELM << _SPI1STAT_RXELM_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI1STATbits.SPIRBF = SPI_USER_SPI1STAT_SPIRBF;
			SPI1STATbits.SPITBF = SPI_USER_SPI1STAT_SPITBF;
			SPI1STATbits.SPITBE = SPI_USER_SPI1STAT_SPITBE;
			SPI1STATbits.SPIRBE = SPI_USER_SPI1STAT_SPIRBE;
			SPI1STATbits.SPIROV = SPI_USER_SPI1STAT_SPIROV;
			SPI1STATbits.SRMT = SPI_USER_SPI1STAT_SRMT;
			SPI1STATbits.SPITUR = SPI_USER_SPI1STAT_SPITUR;
			SPI1STATbits.SPIBUSY = SPI_USER_SPI1STAT_SPIBUSY;
			SPI1STATbits.FRMERR = SPI_USER_SPI1STAT_FRMERR;
			SPI1STATbits.TXELM = SPI_USER_SPI1STAT_TXELM;
			SPI1STATbits.RXELM = SPI_USER_SPI1STAT_RXELM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1BUF = SPI_USER_SPI1BUF;
	/*-----------------------------------------------------------------------*/
	/* SPI1BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1BRG = 
			( SPI_USER_SPI1BRG_SPI1BRG << _SPI1BRG_SPI1BRG_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI1BRGbits.SPI1BRG = SPI_USER_SPI1BRG_SPI1BRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1IMSKレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1IMSK = 
			( SPI_USER_SPI1IMSK_SPIRBFEN << _SPI1IMSK_SPIRBFEN_POSITION ) |
			( SPI_USER_SPI1IMSK_SPITBFEN << _SPI1IMSK_SPITBFEN_POSITION ) |
			( SPI_USER_SPI1IMSK_SPITBEN << _SPI1IMSK_SPITBEN_POSITION ) |
			( SPI_USER_SPI1IMSK_SPIRBEN << _SPI1IMSK_SPIRBEN_POSITION ) |
			( SPI_USER_SPI1IMSK_SPIROVEN << _SPI1IMSK_SPIROVEN_POSITION ) |
			( SPI_USER_SPI1IMSK_SRMTEN << _SPI1IMSK_SRMTEN_POSITION ) |
			( SPI_USER_SPI1IMSK_SPITUREN << _SPI1IMSK_SPITUREN_POSITION ) |
			( SPI_USER_SPI1IMSK_BUSYEN << _SPI1IMSK_BUSYEN_POSITION ) |
			( SPI_USER_SPI1IMSK_FRMERREN << _SPI1IMSK_FRMERREN_POSITION ) |
			( SPI_USER_SPI1IMSK_TXMSK << _SPI1IMSK_TXMSK_POSITION ) |
			( SPI_USER_SPI1IMSK_TXWIEN << _SPI1IMSK_TXWIEN_POSITION ) |
			( SPI_USER_SPI1IMSK_RXMSK << _SPI1IMSK_RXMSK_POSITION ) |
			( SPI_USER_SPI1IMSK_RXWIEN << _SPI1IMSK_RXWIEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI1IMSKbits.SPIRBFEN = SPI_USER_SPI1IMSK_SPIRBFEN;
			SPI1IMSKbits.SPITBFEN = SPI_USER_SPI1IMSK_SPITBFEN;
			SPI1IMSKbits.SPITBEN = SPI_USER_SPI1IMSK_SPITBEN;
			SPI1IMSKbits.SPIRBEN = SPI_USER_SPI1IMSK_SPIRBEN;
			SPI1IMSKbits.SPIROVEN = SPI_USER_SPI1IMSK_SPIROVEN;
			SPI1IMSKbits.SRMTEN = SPI_USER_SPI1IMSK_SRMTEN;
			SPI1IMSKbits.SPITUREN = SPI_USER_SPI1IMSK_SPITUREN;
			SPI1IMSKbits.BUSYEN = SPI_USER_SPI1IMSK_BUSYEN;
			SPI1IMSKbits.FRMERREN = SPI_USER_SPI1IMSK_FRMERREN;
			SPI1IMSKbits.TXMSK = SPI_USER_SPI1IMSK_TXMSK;
			SPI1IMSKbits.TXWIEN = SPI_USER_SPI1IMSK_TXWIEN;
			SPI1IMSKbits.RXMSK = SPI_USER_SPI1IMSK_RXMSK;
			SPI1IMSKbits.RXWIEN = SPI_USER_SPI1IMSK_RXWIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI1URDTレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI1URDT = SPI_USER_SPI1URDT;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SPI2_Set_Register(void)
* @brief        SPI2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI2_Set_Register(void)
{
#if ( PMD_SPI2MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* SPI2CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2CON1 = 
			( SPI_USER_SPI2CON1_ENHBUF << _SPI2CON1_ENHBUF_POSITION ) |
			( SPI_USER_SPI2CON1_SPIFE << _SPI2CON1_SPIFE_POSITION ) |
			( SPI_USER_SPI2CON1_MCLKEN << _SPI2CON1_MCLKEN_POSITION ) |
			( SPI_USER_SPI2CON1_DISSCK << _SPI2CON1_DISSCK_POSITION ) |
			( SPI_USER_SPI2CON1_DISSDI << _SPI2CON1_DISSDI_POSITION ) |
			( SPI_USER_SPI2CON1_MSTEN << _SPI2CON1_MSTEN_POSITION ) |
			( SPI_USER_SPI2CON1_CKP << _SPI2CON1_CKP_POSITION ) |
			( SPI_USER_SPI2CON1_SSEN << _SPI2CON1_SSEN_POSITION ) |
			( SPI_USER_SPI2CON1_CKE << _SPI2CON1_CKE_POSITION ) |
			( SPI_USER_SPI2CON1_SMP << _SPI2CON1_SMP_POSITION ) |
			( SPI_USER_SPI2CON1_MODE16 << _SPI2CON1_MODE16_POSITION ) |
			( SPI_USER_SPI2CON1_MODE32 << _SPI2CON1_MODE32_POSITION ) |
			( SPI_USER_SPI2CON1_DISSDO << _SPI2CON1_DISSDO_POSITION ) |
			( SPI_USER_SPI2CON1_SIDL << _SPI2CON1_SIDL_POSITION ) |
			( SPI_USER_SPI2CON1_ON << _SPI2CON1_ON_POSITION ) |
			( SPI_USER_SPI2CON1_FRMCNT << _SPI2CON1_FRMCNT_POSITION ) |
			( SPI_USER_SPI2CON1_FRMSYPW << _SPI2CON1_FRMSYPW_POSITION ) |
			( SPI_USER_SPI2CON1_MSSEN << _SPI2CON1_MSSEN_POSITION ) |
			( SPI_USER_SPI2CON1_FRMPOL << _SPI2CON1_FRMPOL_POSITION ) |
			( SPI_USER_SPI2CON1_FRMSYNC << _SPI2CON1_FRMSYNC_POSITION ) |
			( SPI_USER_SPI2CON1_FRMEN << _SPI2CON1_FRMEN_POSITION ) |
			( SPI_USER_SPI2CON1_AUDMOD << _SPI2CON1_AUDMOD_POSITION ) |
			( SPI_USER_SPI2CON1_URDTEN << _SPI2CON1_URDTEN_POSITION ) |
			( SPI_USER_SPI2CON1_AUDMONO << _SPI2CON1_AUDMONO_POSITION ) |
			( SPI_USER_SPI2CON1_IGNTUR << _SPI2CON1_IGNTUR_POSITION ) |
			( SPI_USER_SPI2CON1_IGNROV << _SPI2CON1_IGNROV_POSITION ) |
			( SPI_USER_SPI2CON1_SPISGNEXT << _SPI2CON1_SPISGNEXT_POSITION ) |
			( SPI_USER_SPI2CON1_AUDEN << _SPI2CON1_AUDEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI2CON1bits.ENHBUF = SPI_USER_SPI2CON1_ENHBUF;
			SPI2CON1bits.SPIFE = SPI_USER_SPI2CON1_SPIFE;
			SPI2CON1bits.MCLKEN = SPI_USER_SPI2CON1_MCLKEN;
			SPI2CON1bits.DISSCK = SPI_USER_SPI2CON1_DISSCK;
			SPI2CON1bits.DISSDI = SPI_USER_SPI2CON1_DISSDI;
			SPI2CON1bits.MSTEN = SPI_USER_SPI2CON1_MSTEN;
			SPI2CON1bits.CKP = SPI_USER_SPI2CON1_CKP;
			SPI2CON1bits.SSEN = SPI_USER_SPI2CON1_SSEN;
			SPI2CON1bits.CKE = SPI_USER_SPI2CON1_CKE;
			SPI2CON1bits.SMP = SPI_USER_SPI2CON1_SMP;
			SPI2CON1bits.MODE16 = SPI_USER_SPI2CON1_MODE16;
			SPI2CON1bits.MODE32 = SPI_USER_SPI2CON1_MODE32;
			SPI2CON1bits.DISSDO = SPI_USER_SPI2CON1_DISSDO;
			SPI2CON1bits.SIDL = SPI_USER_SPI2CON1_SIDL;
			SPI2CON1bits.ON = SPI_USER_SPI2CON1_ON;
			SPI2CON1bits.FRMCNT = SPI_USER_SPI2CON1_FRMCNT;
			SPI2CON1bits.FRMSYPW = SPI_USER_SPI2CON1_FRMSYPW;
			SPI2CON1bits.MSSEN = SPI_USER_SPI2CON1_MSSEN;
			SPI2CON1bits.FRMPOL = SPI_USER_SPI2CON1_FRMPOL;
			SPI2CON1bits.FRMSYNC = SPI_USER_SPI2CON1_FRMSYNC;
			SPI2CON1bits.FRMEN = SPI_USER_SPI2CON1_FRMEN;
			SPI2CON1bits.AUDMOD = SPI_USER_SPI2CON1_AUDMOD;
			SPI2CON1bits.URDTEN = SPI_USER_SPI2CON1_URDTEN;
			SPI2CON1bits.AUDMONO = SPI_USER_SPI2CON1_AUDMONO;
			SPI2CON1bits.IGNTUR = SPI_USER_SPI2CON1_IGNTUR;
			SPI2CON1bits.IGNROV = SPI_USER_SPI2CON1_IGNROV;
			SPI2CON1bits.SPISGNEXT = SPI_USER_SPI2CON1_SPISGNEXT;
			SPI2CON1bits.AUDEN = SPI_USER_SPI2CON1_AUDEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2CON2 = 
			( SPI_USER_SPI2CON2_WLENGTH << _SPI2CON2_WLENGTH_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI2CON2bits.WLENGTH = SPI_USER_SPI2CON2_WLENGTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2STAT = 
			( SPI_USER_SPI2STAT_SPIRBF << _SPI2STAT_SPIRBF_POSITION ) |
			( SPI_USER_SPI2STAT_SPITBF << _SPI2STAT_SPITBF_POSITION ) |
			( SPI_USER_SPI2STAT_SPITBE << _SPI2STAT_SPITBE_POSITION ) |
			( SPI_USER_SPI2STAT_SPIRBE << _SPI2STAT_SPIRBE_POSITION ) |
			( SPI_USER_SPI2STAT_SPIROV << _SPI2STAT_SPIROV_POSITION ) |
			( SPI_USER_SPI2STAT_SRMT << _SPI2STAT_SRMT_POSITION ) |
			( SPI_USER_SPI2STAT_SPITUR << _SPI2STAT_SPITUR_POSITION ) |
			( SPI_USER_SPI2STAT_SPIBUSY << _SPI2STAT_SPIBUSY_POSITION ) |
			( SPI_USER_SPI2STAT_FRMERR << _SPI2STAT_FRMERR_POSITION ) |
			( SPI_USER_SPI2STAT_TXELM << _SPI2STAT_TXELM_POSITION ) |
			( SPI_USER_SPI2STAT_RXELM << _SPI2STAT_RXELM_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI2STATbits.SPIRBF = SPI_USER_SPI2STAT_SPIRBF;
			SPI2STATbits.SPITBF = SPI_USER_SPI2STAT_SPITBF;
			SPI2STATbits.SPITBE = SPI_USER_SPI2STAT_SPITBE;
			SPI2STATbits.SPIRBE = SPI_USER_SPI2STAT_SPIRBE;
			SPI2STATbits.SPIROV = SPI_USER_SPI2STAT_SPIROV;
			SPI2STATbits.SRMT = SPI_USER_SPI2STAT_SRMT;
			SPI2STATbits.SPITUR = SPI_USER_SPI2STAT_SPITUR;
			SPI2STATbits.SPIBUSY = SPI_USER_SPI2STAT_SPIBUSY;
			SPI2STATbits.FRMERR = SPI_USER_SPI2STAT_FRMERR;
			SPI2STATbits.TXELM = SPI_USER_SPI2STAT_TXELM;
			SPI2STATbits.RXELM = SPI_USER_SPI2STAT_RXELM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2BUF = SPI_USER_SPI2BUF;
	/*-----------------------------------------------------------------------*/
	/* SPI2BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2BRG = 
			( SPI_USER_SPI2BRG_SPI2BRG << _SPI2BRG_SPI2BRG_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI2BRGbits.SPI2BRG = SPI_USER_SPI2BRG_SPI2BRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2IMSKレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2IMSK = 
			( SPI_USER_SPI2IMSK_SPIRBFEN << _SPI2IMSK_SPIRBFEN_POSITION ) |
			( SPI_USER_SPI2IMSK_SPITBFEN << _SPI2IMSK_SPITBFEN_POSITION ) |
			( SPI_USER_SPI2IMSK_SPITBEN << _SPI2IMSK_SPITBEN_POSITION ) |
			( SPI_USER_SPI2IMSK_SPIRBEN << _SPI2IMSK_SPIRBEN_POSITION ) |
			( SPI_USER_SPI2IMSK_SPIROVEN << _SPI2IMSK_SPIROVEN_POSITION ) |
			( SPI_USER_SPI2IMSK_SRMTEN << _SPI2IMSK_SRMTEN_POSITION ) |
			( SPI_USER_SPI2IMSK_SPITUREN << _SPI2IMSK_SPITUREN_POSITION ) |
			( SPI_USER_SPI2IMSK_BUSYEN << _SPI2IMSK_BUSYEN_POSITION ) |
			( SPI_USER_SPI2IMSK_FRMERREN << _SPI2IMSK_FRMERREN_POSITION ) |
			( SPI_USER_SPI2IMSK_TXMSK << _SPI2IMSK_TXMSK_POSITION ) |
			( SPI_USER_SPI2IMSK_TXWIEN << _SPI2IMSK_TXWIEN_POSITION ) |
			( SPI_USER_SPI2IMSK_RXMSK << _SPI2IMSK_RXMSK_POSITION ) |
			( SPI_USER_SPI2IMSK_RXWIEN << _SPI2IMSK_RXWIEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI2IMSKbits.SPIRBFEN = SPI_USER_SPI2IMSK_SPIRBFEN;
			SPI2IMSKbits.SPITBFEN = SPI_USER_SPI2IMSK_SPITBFEN;
			SPI2IMSKbits.SPITBEN = SPI_USER_SPI2IMSK_SPITBEN;
			SPI2IMSKbits.SPIRBEN = SPI_USER_SPI2IMSK_SPIRBEN;
			SPI2IMSKbits.SPIROVEN = SPI_USER_SPI2IMSK_SPIROVEN;
			SPI2IMSKbits.SRMTEN = SPI_USER_SPI2IMSK_SRMTEN;
			SPI2IMSKbits.SPITUREN = SPI_USER_SPI2IMSK_SPITUREN;
			SPI2IMSKbits.BUSYEN = SPI_USER_SPI2IMSK_BUSYEN;
			SPI2IMSKbits.FRMERREN = SPI_USER_SPI2IMSK_FRMERREN;
			SPI2IMSKbits.TXMSK = SPI_USER_SPI2IMSK_TXMSK;
			SPI2IMSKbits.TXWIEN = SPI_USER_SPI2IMSK_TXWIEN;
			SPI2IMSKbits.RXMSK = SPI_USER_SPI2IMSK_RXMSK;
			SPI2IMSKbits.RXWIEN = SPI_USER_SPI2IMSK_RXWIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI2URDTレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI2URDT = SPI_USER_SPI2URDT;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SPI3_Set_Register(void)
* @brief        SPI3のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI3_Set_Register(void)
{
#if ( PMD_SPI3MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* SPI3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3CON1 = 
			( SPI_USER_SPI3CON1_ENHBUF << _SPI3CON1_ENHBUF_POSITION ) |
			( SPI_USER_SPI3CON1_SPIFE << _SPI3CON1_SPIFE_POSITION ) |
			( SPI_USER_SPI3CON1_MCLKEN << _SPI3CON1_MCLKEN_POSITION ) |
			( SPI_USER_SPI3CON1_DISSCK << _SPI3CON1_DISSCK_POSITION ) |
			( SPI_USER_SPI3CON1_DISSDI << _SPI3CON1_DISSDI_POSITION ) |
			( SPI_USER_SPI3CON1_MSTEN << _SPI3CON1_MSTEN_POSITION ) |
			( SPI_USER_SPI3CON1_CKP << _SPI3CON1_CKP_POSITION ) |
			( SPI_USER_SPI3CON1_SSEN << _SPI3CON1_SSEN_POSITION ) |
			( SPI_USER_SPI3CON1_CKE << _SPI3CON1_CKE_POSITION ) |
			( SPI_USER_SPI3CON1_SMP << _SPI3CON1_SMP_POSITION ) |
			( SPI_USER_SPI3CON1_MODE16 << _SPI3CON1_MODE16_POSITION ) |
			( SPI_USER_SPI3CON1_MODE32 << _SPI3CON1_MODE32_POSITION ) |
			( SPI_USER_SPI3CON1_DISSDO << _SPI3CON1_DISSDO_POSITION ) |
			( SPI_USER_SPI3CON1_SIDL << _SPI3CON1_SIDL_POSITION ) |
			( SPI_USER_SPI3CON1_ON << _SPI3CON1_ON_POSITION ) |
			( SPI_USER_SPI3CON1_FRMCNT << _SPI3CON1_FRMCNT_POSITION ) |
			( SPI_USER_SPI3CON1_FRMSYPW << _SPI3CON1_FRMSYPW_POSITION ) |
			( SPI_USER_SPI3CON1_MSSEN << _SPI3CON1_MSSEN_POSITION ) |
			( SPI_USER_SPI3CON1_FRMPOL << _SPI3CON1_FRMPOL_POSITION ) |
			( SPI_USER_SPI3CON1_FRMSYNC << _SPI3CON1_FRMSYNC_POSITION ) |
			( SPI_USER_SPI3CON1_FRMEN << _SPI3CON1_FRMEN_POSITION ) |
			( SPI_USER_SPI3CON1_AUDMOD << _SPI3CON1_AUDMOD_POSITION ) |
			( SPI_USER_SPI3CON1_URDTEN << _SPI3CON1_URDTEN_POSITION ) |
			( SPI_USER_SPI3CON1_AUDMONO << _SPI3CON1_AUDMONO_POSITION ) |
			( SPI_USER_SPI3CON1_IGNTUR << _SPI3CON1_IGNTUR_POSITION ) |
			( SPI_USER_SPI3CON1_IGNROV << _SPI3CON1_IGNROV_POSITION ) |
			( SPI_USER_SPI3CON1_SPISGNEXT << _SPI3CON1_SPISGNEXT_POSITION ) |
			( SPI_USER_SPI3CON1_AUDEN << _SPI3CON1_AUDEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI3CON1bits.ENHBUF = SPI_USER_SPI3CON1_ENHBUF;
			SPI3CON1bits.SPIFE = SPI_USER_SPI3CON1_SPIFE;
			SPI3CON1bits.MCLKEN = SPI_USER_SPI3CON1_MCLKEN;
			SPI3CON1bits.DISSCK = SPI_USER_SPI3CON1_DISSCK;
			SPI3CON1bits.DISSDI = SPI_USER_SPI3CON1_DISSDI;
			SPI3CON1bits.MSTEN = SPI_USER_SPI3CON1_MSTEN;
			SPI3CON1bits.CKP = SPI_USER_SPI3CON1_CKP;
			SPI3CON1bits.SSEN = SPI_USER_SPI3CON1_SSEN;
			SPI3CON1bits.CKE = SPI_USER_SPI3CON1_CKE;
			SPI3CON1bits.SMP = SPI_USER_SPI3CON1_SMP;
			SPI3CON1bits.MODE16 = SPI_USER_SPI3CON1_MODE16;
			SPI3CON1bits.MODE32 = SPI_USER_SPI3CON1_MODE32;
			SPI3CON1bits.DISSDO = SPI_USER_SPI3CON1_DISSDO;
			SPI3CON1bits.SIDL = SPI_USER_SPI3CON1_SIDL;
			SPI3CON1bits.ON = SPI_USER_SPI3CON1_ON;
			SPI3CON1bits.FRMCNT = SPI_USER_SPI3CON1_FRMCNT;
			SPI3CON1bits.FRMSYPW = SPI_USER_SPI3CON1_FRMSYPW;
			SPI3CON1bits.MSSEN = SPI_USER_SPI3CON1_MSSEN;
			SPI3CON1bits.FRMPOL = SPI_USER_SPI3CON1_FRMPOL;
			SPI3CON1bits.FRMSYNC = SPI_USER_SPI3CON1_FRMSYNC;
			SPI3CON1bits.FRMEN = SPI_USER_SPI3CON1_FRMEN;
			SPI3CON1bits.AUDMOD = SPI_USER_SPI3CON1_AUDMOD;
			SPI3CON1bits.URDTEN = SPI_USER_SPI3CON1_URDTEN;
			SPI3CON1bits.AUDMONO = SPI_USER_SPI3CON1_AUDMONO;
			SPI3CON1bits.IGNTUR = SPI_USER_SPI3CON1_IGNTUR;
			SPI3CON1bits.IGNROV = SPI_USER_SPI3CON1_IGNROV;
			SPI3CON1bits.SPISGNEXT = SPI_USER_SPI3CON1_SPISGNEXT;
			SPI3CON1bits.AUDEN = SPI_USER_SPI3CON1_AUDEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3CON2 = 
			( SPI_USER_SPI3CON2_WLENGTH << _SPI3CON2_WLENGTH_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI3CON2bits.WLENGTH = SPI_USER_SPI3CON2_WLENGTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3STAT = 
			( SPI_USER_SPI3STAT_SPIRBF << _SPI3STAT_SPIRBF_POSITION ) |
			( SPI_USER_SPI3STAT_SPITBF << _SPI3STAT_SPITBF_POSITION ) |
			( SPI_USER_SPI3STAT_SPITBE << _SPI3STAT_SPITBE_POSITION ) |
			( SPI_USER_SPI3STAT_SPIRBE << _SPI3STAT_SPIRBE_POSITION ) |
			( SPI_USER_SPI3STAT_SPIROV << _SPI3STAT_SPIROV_POSITION ) |
			( SPI_USER_SPI3STAT_SRMT << _SPI3STAT_SRMT_POSITION ) |
			( SPI_USER_SPI3STAT_SPITUR << _SPI3STAT_SPITUR_POSITION ) |
			( SPI_USER_SPI3STAT_SPIBUSY << _SPI3STAT_SPIBUSY_POSITION ) |
			( SPI_USER_SPI3STAT_FRMERR << _SPI3STAT_FRMERR_POSITION ) |
			( SPI_USER_SPI3STAT_TXELM << _SPI3STAT_TXELM_POSITION ) |
			( SPI_USER_SPI3STAT_RXELM << _SPI3STAT_RXELM_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI3STATbits.SPIRBF = SPI_USER_SPI3STAT_SPIRBF;
			SPI3STATbits.SPITBF = SPI_USER_SPI3STAT_SPITBF;
			SPI3STATbits.SPITBE = SPI_USER_SPI3STAT_SPITBE;
			SPI3STATbits.SPIRBE = SPI_USER_SPI3STAT_SPIRBE;
			SPI3STATbits.SPIROV = SPI_USER_SPI3STAT_SPIROV;
			SPI3STATbits.SRMT = SPI_USER_SPI3STAT_SRMT;
			SPI3STATbits.SPITUR = SPI_USER_SPI3STAT_SPITUR;
			SPI3STATbits.SPIBUSY = SPI_USER_SPI3STAT_SPIBUSY;
			SPI3STATbits.FRMERR = SPI_USER_SPI3STAT_FRMERR;
			SPI3STATbits.TXELM = SPI_USER_SPI3STAT_TXELM;
			SPI3STATbits.RXELM = SPI_USER_SPI3STAT_RXELM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3BUF = SPI_USER_SPI3BUF;
	/*-----------------------------------------------------------------------*/
	/* SPI3BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3BRG = 
			( SPI_USER_SPI3BRG_SPI3BRG << _SPI3BRG_SPI3BRG_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI3BRGbits.SPI3BRG = SPI_USER_SPI3BRG_SPI3BRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3IMSKレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3IMSK = 
			( SPI_USER_SPI3IMSK_SPIRBFEN << _SPI3IMSK_SPIRBFEN_POSITION ) |
			( SPI_USER_SPI3IMSK_SPITBFEN << _SPI3IMSK_SPITBFEN_POSITION ) |
			( SPI_USER_SPI3IMSK_SPITBEN << _SPI3IMSK_SPITBEN_POSITION ) |
			( SPI_USER_SPI3IMSK_SPIRBEN << _SPI3IMSK_SPIRBEN_POSITION ) |
			( SPI_USER_SPI3IMSK_SPIROVEN << _SPI3IMSK_SPIROVEN_POSITION ) |
			( SPI_USER_SPI3IMSK_SRMTEN << _SPI3IMSK_SRMTEN_POSITION ) |
			( SPI_USER_SPI3IMSK_SPITUREN << _SPI3IMSK_SPITUREN_POSITION ) |
			( SPI_USER_SPI3IMSK_BUSYEN << _SPI3IMSK_BUSYEN_POSITION ) |
			( SPI_USER_SPI3IMSK_FRMERREN << _SPI3IMSK_FRMERREN_POSITION ) |
			( SPI_USER_SPI3IMSK_TXMSK << _SPI3IMSK_TXMSK_POSITION ) |
			( SPI_USER_SPI3IMSK_TXWIEN << _SPI3IMSK_TXWIEN_POSITION ) |
			( SPI_USER_SPI3IMSK_RXMSK << _SPI3IMSK_RXMSK_POSITION ) |
			( SPI_USER_SPI3IMSK_RXWIEN << _SPI3IMSK_RXWIEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI3IMSKbits.SPIRBFEN = SPI_USER_SPI3IMSK_SPIRBFEN;
			SPI3IMSKbits.SPITBFEN = SPI_USER_SPI3IMSK_SPITBFEN;
			SPI3IMSKbits.SPITBEN = SPI_USER_SPI3IMSK_SPITBEN;
			SPI3IMSKbits.SPIRBEN = SPI_USER_SPI3IMSK_SPIRBEN;
			SPI3IMSKbits.SPIROVEN = SPI_USER_SPI3IMSK_SPIROVEN;
			SPI3IMSKbits.SRMTEN = SPI_USER_SPI3IMSK_SRMTEN;
			SPI3IMSKbits.SPITUREN = SPI_USER_SPI3IMSK_SPITUREN;
			SPI3IMSKbits.BUSYEN = SPI_USER_SPI3IMSK_BUSYEN;
			SPI3IMSKbits.FRMERREN = SPI_USER_SPI3IMSK_FRMERREN;
			SPI3IMSKbits.TXMSK = SPI_USER_SPI3IMSK_TXMSK;
			SPI3IMSKbits.TXWIEN = SPI_USER_SPI3IMSK_TXWIEN;
			SPI3IMSKbits.RXMSK = SPI_USER_SPI3IMSK_RXMSK;
			SPI3IMSKbits.RXWIEN = SPI_USER_SPI3IMSK_RXWIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI3URDTレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI3URDT = SPI_USER_SPI3URDT;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_SPI4_Set_Register(void)
* @brief     SPI4レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI4_Set_Register(void)
{
#if ( PMD_SPI4MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* SPI4CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI4CON1 = 
			( SPI_USER_SPI4CON1_ENHBUF << _SPI4CON1_ENHBUF_POSITION ) |
			( SPI_USER_SPI4CON1_SPIFE << _SPI4CON1_SPIFE_POSITION ) |
			( SPI_USER_SPI4CON1_MCLKEN << _SPI4CON1_MCLKEN_POSITION ) |
			( SPI_USER_SPI4CON1_DISSCK << _SPI4CON1_DISSCK_POSITION ) |
			( SPI_USER_SPI4CON1_DISSDI << _SPI4CON1_DISSDI_POSITION ) |
			( SPI_USER_SPI4CON1_MSTEN << _SPI4CON1_MSTEN_POSITION ) |
			( SPI_USER_SPI4CON1_CKP << _SPI4CON1_CKP_POSITION ) |
			( SPI_USER_SPI4CON1_SSEN << _SPI4CON1_SSEN_POSITION ) |
			( SPI_USER_SPI4CON1_CKE << _SPI4CON1_CKE_POSITION ) |
			( SPI_USER_SPI4CON1_SMP << _SPI4CON1_SMP_POSITION ) |
			( SPI_USER_SPI4CON1_MODE16 << _SPI4CON1_MODE16_POSITION ) |
			( SPI_USER_SPI4CON1_MODE32 << _SPI4CON1_MODE32_POSITION ) |
			( SPI_USER_SPI4CON1_DISSDO << _SPI4CON1_DISSDO_POSITION ) |
			( SPI_USER_SPI4CON1_SIDL << _SPI4CON1_SIDL_POSITION ) |
			( SPI_USER_SPI4CON1_ON << _SPI4CON1_ON_POSITION ) |
			( SPI_USER_SPI4CON1_FRMCNT << _SPI4CON1_FRMCNT_POSITION ) |
			( SPI_USER_SPI4CON1_FRMSYPW << _SPI4CON1_FRMSYPW_POSITION ) |
			( SPI_USER_SPI4CON1_MSSEN << _SPI4CON1_MSSEN_POSITION ) |
			( SPI_USER_SPI4CON1_FRMPOL << _SPI4CON1_FRMPOL_POSITION ) |
			( SPI_USER_SPI4CON1_FRMSYNC << _SPI4CON1_FRMSYNC_POSITION ) |
			( SPI_USER_SPI4CON1_FRMEN << _SPI4CON1_FRMEN_POSITION ) |
			( SPI_USER_SPI4CON1_AUDMOD << _SPI4CON1_AUDMOD_POSITION ) |
			( SPI_USER_SPI4CON1_URDTEN << _SPI4CON1_URDTEN_POSITION ) |
			( SPI_USER_SPI4CON1_AUDMONO << _SPI4CON1_AUDMONO_POSITION ) |
			( SPI_USER_SPI4CON1_IGNTUR << _SPI4CON1_IGNTUR_POSITION ) |
			( SPI_USER_SPI4CON1_IGNROV << _SPI4CON1_IGNROV_POSITION ) |
			( SPI_USER_SPI4CON1_SPISGNEXT << _SPI4CON1_SPISGNEXT_POSITION ) |
			( SPI_USER_SPI4CON1_AUDEN << _SPI4CON1_AUDEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI4CON1bits.ENHBUF = SPI_USER_SPI4CON1_ENHBUF;
			SPI4CON1bits.SPIFE = SPI_USER_SPI4CON1_SPIFE;
			SPI4CON1bits.MCLKEN = SPI_USER_SPI4CON1_MCLKEN;
			SPI4CON1bits.DISSCK = SPI_USER_SPI4CON1_DISSCK;
			SPI4CON1bits.DISSDI = SPI_USER_SPI4CON1_DISSDI;
			SPI4CON1bits.MSTEN = SPI_USER_SPI4CON1_MSTEN;
			SPI4CON1bits.CKP = SPI_USER_SPI4CON1_CKP;
			SPI4CON1bits.SSEN = SPI_USER_SPI4CON1_SSEN;
			SPI4CON1bits.CKE = SPI_USER_SPI4CON1_CKE;
			SPI4CON1bits.SMP = SPI_USER_SPI4CON1_SMP;
			SPI4CON1bits.MODE16 = SPI_USER_SPI4CON1_MODE16;
			SPI4CON1bits.MODE32 = SPI_USER_SPI4CON1_MODE32;
			SPI4CON1bits.DISSDO = SPI_USER_SPI4CON1_DISSDO;
			SPI4CON1bits.SIDL = SPI_USER_SPI4CON1_SIDL;
			SPI4CON1bits.ON = SPI_USER_SPI4CON1_ON;
			SPI4CON1bits.FRMCNT = SPI_USER_SPI4CON1_FRMCNT;
			SPI4CON1bits.FRMSYPW = SPI_USER_SPI4CON1_FRMSYPW;
			SPI4CON1bits.MSSEN = SPI_USER_SPI4CON1_MSSEN;
			SPI4CON1bits.FRMPOL = SPI_USER_SPI4CON1_FRMPOL;
			SPI4CON1bits.FRMSYNC = SPI_USER_SPI4CON1_FRMSYNC;
			SPI4CON1bits.FRMEN = SPI_USER_SPI4CON1_FRMEN;
			SPI4CON1bits.AUDMOD = SPI_USER_SPI4CON1_AUDMOD;
			SPI4CON1bits.URDTEN = SPI_USER_SPI4CON1_URDTEN;
			SPI4CON1bits.AUDMONO = SPI_USER_SPI4CON1_AUDMONO;
			SPI4CON1bits.IGNTUR = SPI_USER_SPI4CON1_IGNTUR;
			SPI4CON1bits.IGNROV = SPI_USER_SPI4CON1_IGNROV;
			SPI4CON1bits.SPISGNEXT = SPI_USER_SPI4CON1_SPISGNEXT;
			SPI4CON1bits.AUDEN = SPI_USER_SPI4CON1_AUDEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI4CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		SPI4CON2 = 
			( SPI_USER_SPI4CON2_WLENGTH << _SPI4CON2_WLENGTH_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI4CON2bits.WLENGTH = SPI_USER_SPI4CON2_WLENGTH;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI4STAT = 
			( SPI_USER_SPI4STAT_SPIRBF << _SPI4STAT_SPIRBF_POSITION ) |
			( SPI_USER_SPI4STAT_SPITBF << _SPI4STAT_SPITBF_POSITION ) |
			( SPI_USER_SPI4STAT_SPITBE << _SPI4STAT_SPITBE_POSITION ) |
			( SPI_USER_SPI4STAT_SPIRBE << _SPI4STAT_SPIRBE_POSITION ) |
			( SPI_USER_SPI4STAT_SPIROV << _SPI4STAT_SPIROV_POSITION ) |
			( SPI_USER_SPI4STAT_SRMT << _SPI4STAT_SRMT_POSITION ) |
			( SPI_USER_SPI4STAT_SPITUR << _SPI4STAT_SPITUR_POSITION ) |
			( SPI_USER_SPI4STAT_SPIBUSY << _SPI4STAT_SPIBUSY_POSITION ) |
			( SPI_USER_SPI4STAT_FRMERR << _SPI4STAT_FRMERR_POSITION ) |
			( SPI_USER_SPI4STAT_TXELM << _SPI4STAT_TXELM_POSITION ) |
			( SPI_USER_SPI4STAT_RXELM << _SPI4STAT_RXELM_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI4STATbits.SPIRBF = SPI_USER_SPI4STAT_SPIRBF;
			SPI4STATbits.SPITBF = SPI_USER_SPI4STAT_SPITBF;
			SPI4STATbits.SPITBE = SPI_USER_SPI4STAT_SPITBE;
			SPI4STATbits.SPIRBE = SPI_USER_SPI4STAT_SPIRBE;
			SPI4STATbits.SPIROV = SPI_USER_SPI4STAT_SPIROV;
			SPI4STATbits.SRMT = SPI_USER_SPI4STAT_SRMT;
			SPI4STATbits.SPITUR = SPI_USER_SPI4STAT_SPITUR;
			SPI4STATbits.SPIBUSY = SPI_USER_SPI4STAT_SPIBUSY;
			SPI4STATbits.FRMERR = SPI_USER_SPI4STAT_FRMERR;
			SPI4STATbits.TXELM = SPI_USER_SPI4STAT_TXELM;
			SPI4STATbits.RXELM = SPI_USER_SPI4STAT_RXELM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI4BUFレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI4BUF = SPI_USER_SPI4BUF;
	/*-----------------------------------------------------------------------*/
	/* SPI4BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI4BRG = 
			( SPI_USER_SPI4BRG_SPI4BRG << _SPI4BRG_SPI4BRG_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI4BRGbits.SPI4BRG = SPI_USER_SPI4BRG_SPI4BRG;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI4IMSKレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI4IMSK = 
			( SPI_USER_SPI4IMSK_SPIRBFEN << _SPI4IMSK_SPIRBFEN_POSITION ) |
			( SPI_USER_SPI4IMSK_SPITBFEN << _SPI4IMSK_SPITBFEN_POSITION ) |
			( SPI_USER_SPI4IMSK_SPITBEN << _SPI4IMSK_SPITBEN_POSITION ) |
			( SPI_USER_SPI4IMSK_SPIRBEN << _SPI4IMSK_SPIRBEN_POSITION ) |
			( SPI_USER_SPI4IMSK_SPIROVEN << _SPI4IMSK_SPIROVEN_POSITION ) |
			( SPI_USER_SPI4IMSK_SRMTEN << _SPI4IMSK_SRMTEN_POSITION ) |
			( SPI_USER_SPI4IMSK_SPITUREN << _SPI4IMSK_SPITUREN_POSITION ) |
			( SPI_USER_SPI4IMSK_BUSYEN << _SPI4IMSK_BUSYEN_POSITION ) |
			( SPI_USER_SPI4IMSK_FRMERREN << _SPI4IMSK_FRMERREN_POSITION ) |
			( SPI_USER_SPI4IMSK_TXMSK << _SPI4IMSK_TXMSK_POSITION ) |
			( SPI_USER_SPI4IMSK_TXWIEN << _SPI4IMSK_TXWIEN_POSITION ) |
			( SPI_USER_SPI4IMSK_RXMSK << _SPI4IMSK_RXMSK_POSITION ) |
			( SPI_USER_SPI4IMSK_RXWIEN << _SPI4IMSK_RXWIEN_POSITION ) ;
		#ifdef DEF_BITNAME
			SPI4IMSKbits.SPIRBFEN = SPI_USER_SPI4IMSK_SPIRBFEN;
			SPI4IMSKbits.SPITBFEN = SPI_USER_SPI4IMSK_SPITBFEN;
			SPI4IMSKbits.SPITBEN = SPI_USER_SPI4IMSK_SPITBEN;
			SPI4IMSKbits.SPIRBEN = SPI_USER_SPI4IMSK_SPIRBEN;
			SPI4IMSKbits.SPIROVEN = SPI_USER_SPI4IMSK_SPIROVEN;
			SPI4IMSKbits.SRMTEN = SPI_USER_SPI4IMSK_SRMTEN;
			SPI4IMSKbits.SPITUREN = SPI_USER_SPI4IMSK_SPITUREN;
			SPI4IMSKbits.BUSYEN = SPI_USER_SPI4IMSK_BUSYEN;
			SPI4IMSKbits.FRMERREN = SPI_USER_SPI4IMSK_FRMERREN;
			SPI4IMSKbits.TXMSK = SPI_USER_SPI4IMSK_TXMSK;
			SPI4IMSKbits.TXWIEN = SPI_USER_SPI4IMSK_TXWIEN;
			SPI4IMSKbits.RXMSK = SPI_USER_SPI4IMSK_RXMSK;
			SPI4IMSKbits.RXWIEN = SPI_USER_SPI4IMSK_RXWIEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* SPI4URDTレジスタ */
	/*-----------------------------------------------------------------------*/
		SPI4URDT = SPI_USER_SPI4URDT;
	
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn			vdg_SPI_Set_Register(void)
* @brief        SPIレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_SPI_Set_Register(void)
{
#if ( PMD_SPI1MD == PMD_MODULE_ENABLE ) 
    vdg_SPI1_Set_Register();
#endif
#if ( PMD_SPI2MD == PMD_MODULE_ENABLE ) 
    vdg_SPI2_Set_Register();
#endif
#if ( PMD_SPI3MD == PMD_MODULE_ENABLE ) 
    vdg_SPI3_Set_Register();
#endif
#if ( PMD_SPI4MD == PMD_MODULE_ENABLE ) 
    vdg_SPI4_Set_Register();
#endif
	
}