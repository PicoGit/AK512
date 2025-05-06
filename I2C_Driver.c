/*----------------------------------------------------------------------------*/
/**
* @file		I2C_Driver.c
* @brief	I2Cモジュールに関するドライバ関数
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
#include "i2c_user.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
struct
{
    _u2 u2l_Timer;
}s_I2C1_Drv,s_I2C2_Drv;
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#define I2C_DRV_START_TIMEOUT   10
#define I2C_DRV_RESTART_TIMEOUT 10
#define I2C_DRV_STOP_TIMEOUT    10
#define I2C_DRV_WRITE_TIMEOUT   100
#define I2C_DRV_READ_TIMEOUT    100
#define I2C_DRV_ACK_TIMEOUT     10
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C1_Set_Register(void)
* @brief        I2C1レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C1_Set_Register(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
/*-----------------------------------------------------------------------*/
	/* I2C1CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1CON1 = 
			( I2C_USER_I2C1CON1_SEN << _I2C1CON1_SEN_POSITION ) |
			( I2C_USER_I2C1CON1_RSEN << _I2C1CON1_RSEN_POSITION ) |
			( I2C_USER_I2C1CON1_PEN << _I2C1CON1_PEN_POSITION ) |
			( I2C_USER_I2C1CON1_RCEN << _I2C1CON1_RCEN_POSITION ) |
			( I2C_USER_I2C1CON1_ACKEN << _I2C1CON1_ACKEN_POSITION ) |
			( I2C_USER_I2C1CON1_ACKDT << _I2C1CON1_ACKDT_POSITION ) |
			( I2C_USER_I2C1CON1_STREN << _I2C1CON1_STREN_POSITION ) |
			( I2C_USER_I2C1CON1_GCEN << _I2C1CON1_GCEN_POSITION ) |
			( I2C_USER_I2C1CON1_DISSLW << _I2C1CON1_DISSLW_POSITION ) |
			( I2C_USER_I2C1CON1_A10M << _I2C1CON1_A10M_POSITION ) |
			( I2C_USER_I2C1CON1_STRICT << _I2C1CON1_STRICT_POSITION ) |
			( I2C_USER_I2C1CON1_SCLREL << _I2C1CON1_SCLREL_POSITION ) |
			( I2C_USER_I2C1CON1_SIDL << _I2C1CON1_SIDL_POSITION ) |
			( I2C_USER_I2C1CON1_ON << _I2C1CON1_ON_POSITION ) |
			( I2C_USER_I2C1CON1_DHEN << _I2C1CON1_DHEN_POSITION ) |
			( I2C_USER_I2C1CON1_AHEN << _I2C1CON1_AHEN_POSITION ) |
			( I2C_USER_I2C1CON1_SBCDE << _I2C1CON1_SBCDE_POSITION ) |
			( I2C_USER_I2C1CON1_SDAHT << _I2C1CON1_SDAHT_POSITION ) |
			( I2C_USER_I2C1CON1_BOEN << _I2C1CON1_BOEN_POSITION ) |
			( I2C_USER_I2C1CON1_SCIE << _I2C1CON1_SCIE_POSITION ) |
			( I2C_USER_I2C1CON1_PCIE << _I2C1CON1_PCIE_POSITION ) |
			( I2C_USER_I2C1CON1_SMBEN << _I2C1CON1_SMBEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1CON1bits.SEN = I2C_USER_I2C1CON1_SEN;
			I2C1CON1bits.RSEN = I2C_USER_I2C1CON1_RSEN;
			I2C1CON1bits.PEN = I2C_USER_I2C1CON1_PEN;
			I2C1CON1bits.RCEN = I2C_USER_I2C1CON1_RCEN;
			I2C1CON1bits.ACKEN = I2C_USER_I2C1CON1_ACKEN;
			I2C1CON1bits.ACKDT = I2C_USER_I2C1CON1_ACKDT;
			I2C1CON1bits.STREN = I2C_USER_I2C1CON1_STREN;
			I2C1CON1bits.GCEN = I2C_USER_I2C1CON1_GCEN;
			I2C1CON1bits.DISSLW = I2C_USER_I2C1CON1_DISSLW;
			I2C1CON1bits.A10M = I2C_USER_I2C1CON1_A10M;
			I2C1CON1bits.STRICT = I2C_USER_I2C1CON1_STRICT;
			I2C1CON1bits.SCLREL = I2C_USER_I2C1CON1_SCLREL;
			I2C1CON1bits.SIDL = I2C_USER_I2C1CON1_SIDL;
			I2C1CON1bits.ON = I2C_USER_I2C1CON1_ON;
			I2C1CON1bits.DHEN = I2C_USER_I2C1CON1_DHEN;
			I2C1CON1bits.AHEN = I2C_USER_I2C1CON1_AHEN;
			I2C1CON1bits.SBCDE = I2C_USER_I2C1CON1_SBCDE;
			I2C1CON1bits.SDAHT = I2C_USER_I2C1CON1_SDAHT;
			I2C1CON1bits.BOEN = I2C_USER_I2C1CON1_BOEN;
			I2C1CON1bits.SCIE = I2C_USER_I2C1CON1_SCIE;
			I2C1CON1bits.PCIE = I2C_USER_I2C1CON1_PCIE;
			I2C1CON1bits.SMBEN = I2C_USER_I2C1CON1_SMBEN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1STAT1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1STAT1 = 
			( I2C_USER_I2C1STAT1_TBF << _I2C1STAT1_TBF_POSITION ) |
			( I2C_USER_I2C1STAT1_RBF << _I2C1STAT1_RBF_POSITION ) |
			( I2C_USER_I2C1STAT1_R_W << _I2C1STAT1_R_W_POSITION ) |
			( I2C_USER_I2C1STAT1_S << _I2C1STAT1_S_POSITION ) |
			( I2C_USER_I2C1STAT1_P << _I2C1STAT1_P_POSITION ) |
			( I2C_USER_I2C1STAT1_D_A << _I2C1STAT1_D_A_POSITION ) |
			( I2C_USER_I2C1STAT1_I2COV << _I2C1STAT1_I2COV_POSITION ) |
			( I2C_USER_I2C1STAT1_IWCOL << _I2C1STAT1_IWCOL_POSITION ) |
			( I2C_USER_I2C1STAT1_ADD10 << _I2C1STAT1_ADD10_POSITION ) |
			( I2C_USER_I2C1STAT1_GCSTAT << _I2C1STAT1_GCSTAT_POSITION ) |
			( I2C_USER_I2C1STAT1_BCL << _I2C1STAT1_BCL_POSITION ) |
			( I2C_USER_I2C1STAT1_ACKTIM << _I2C1STAT1_ACKTIM_POSITION ) |
			( I2C_USER_I2C1STAT1_TRSTAT << _I2C1STAT1_TRSTAT_POSITION ) |
			( I2C_USER_I2C1STAT1_ACKSTAT << _I2C1STAT1_ACKSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1STAT1bits.TBF = I2C_USER_I2C1STAT1_TBF;
			I2C1STAT1bits.RBF = I2C_USER_I2C1STAT1_RBF;
			I2C1STAT1bits.R_W = I2C_USER_I2C1STAT1_R_W;
			I2C1STAT1bits.S = I2C_USER_I2C1STAT1_S;
			I2C1STAT1bits.P = I2C_USER_I2C1STAT1_P;
			I2C1STAT1bits.D_A = I2C_USER_I2C1STAT1_D_A;
			I2C1STAT1bits.I2COV = I2C_USER_I2C1STAT1_I2COV;
			I2C1STAT1bits.IWCOL = I2C_USER_I2C1STAT1_IWCOL;
			I2C1STAT1bits.ADD10 = I2C_USER_I2C1STAT1_ADD10;
			I2C1STAT1bits.GCSTAT = I2C_USER_I2C1STAT1_GCSTAT;
			I2C1STAT1bits.BCL = I2C_USER_I2C1STAT1_BCL;
			I2C1STAT1bits.ACKTIM = I2C_USER_I2C1STAT1_ACKTIM;
			I2C1STAT1bits.TRSTAT = I2C_USER_I2C1STAT1_TRSTAT;
			I2C1STAT1bits.ACKSTAT = I2C_USER_I2C1STAT1_ACKSTAT;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1ADDレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1ADD = 
			( I2C_USER_I2C1ADD_I2CADD << _I2C1ADD_I2CADD_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1ADDbits.I2CADD = I2C_USER_I2C1ADD_I2CADD;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1MSK = 
			( I2C_USER_I2C1MSK_I2CMSK << _I2C1MSK_I2CMSK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1MSKbits.I2CMSK = I2C_USER_I2C1MSK_I2CMSK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1HBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1HBRG = 
			( I2C_USER_I2C1HBRG_I2CHBRG << _I2C1HBRG_I2CHBRG_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1HBRGbits.I2CHBRG = I2C_USER_I2C1HBRG_I2CHBRG;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1TRNレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1TRN = 
			( I2C_USER_I2C1TRN_I2CTRN << _I2C1TRN_I2CTRN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1TRNbits.I2CTRN = I2C_USER_I2C1TRN_I2CTRN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1RCVレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1RCV = 
			( I2C_USER_I2C1RCV_I2CRCV << _I2C1RCV_I2CRCV_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1RCVbits.I2CRCV = I2C_USER_I2C1RCV_I2CRCV;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1CON2 = 
			( I2C_USER_I2C1CON2_PSZ << _I2C1CON2_PSZ_POSITION ) |
			( I2C_USER_I2C1CON2_BITE << _I2C1CON2_BITE_POSITION ) |
			( I2C_USER_I2C1CON2_SMEN << _I2C1CON2_SMEN_POSITION ) |
			( I2C_USER_I2C1CON2_NDA << _I2C1CON2_NDA_POSITION ) |
			( I2C_USER_I2C1CON2_EOPSC << _I2C1CON2_EOPSC_POSITION ) |
			( I2C_USER_I2C1CON2_HNACKIGN << _I2C1CON2_HNACKIGN_POSITION ) |
			( I2C_USER_I2C1CON2_ACKC << _I2C1CON2_ACKC_POSITION ) |
			( I2C_USER_I2C1CON2_EPSZE << _I2C1CON2_EPSZE_POSITION ) |
			( I2C_USER_I2C1CON2_CBCTE << _I2C1CON2_CBCTE_POSITION ) |
			( I2C_USER_I2C1CON2_HBCTE << _I2C1CON2_HBCTE_POSITION ) |
			( I2C_USER_I2C1CON2_BSCLTE << _I2C1CON2_BSCLTE_POSITION ) |
			( I2C_USER_I2C1CON2_PECC << _I2C1CON2_PECC_POSITION ) |
			( I2C_USER_I2C1CON2_AMODE << _I2C1CON2_AMODE_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1CON2bits.PSZ = I2C_USER_I2C1CON2_PSZ;
			I2C1CON2bits.BITE = I2C_USER_I2C1CON2_BITE;
			I2C1CON2bits.SMEN = I2C_USER_I2C1CON2_SMEN;
			I2C1CON2bits.NDA = I2C_USER_I2C1CON2_NDA;
			I2C1CON2bits.EOPSC = I2C_USER_I2C1CON2_EOPSC;
			I2C1CON2bits.HNACKIGN = I2C_USER_I2C1CON2_HNACKIGN;
			I2C1CON2bits.ACKC = I2C_USER_I2C1CON2_ACKC;
			I2C1CON2bits.EPSZE = I2C_USER_I2C1CON2_EPSZE;
			I2C1CON2bits.CBCTE = I2C_USER_I2C1CON2_CBCTE;
			I2C1CON2bits.HBCTE = I2C_USER_I2C1CON2_HBCTE;
			I2C1CON2bits.BSCLTE = I2C_USER_I2C1CON2_BSCLTE;
			I2C1CON2bits.PECC = I2C_USER_I2C1CON2_PECC;
			I2C1CON2bits.AMODE = I2C_USER_I2C1CON2_AMODE;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1LBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1LBRG = 
			( I2C_USER_I2C1LBRG_I2CLBRG << _I2C1LBRG_I2CLBRG_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1LBRGbits.I2CLBRG = I2C_USER_I2C1LBRG_I2CLBRG;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1INTCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1INTC = 
			( I2C_USER_I2C1INTC_HDRXIE << _I2C1INTC_HDRXIE_POSITION ) |
			( I2C_USER_I2C1INTC_HDTXIE << _I2C1INTC_HDTXIE_POSITION ) |
			( I2C_USER_I2C1INTC_CDTXIE << _I2C1INTC_CDTXIE_POSITION ) |
			( I2C_USER_I2C1INTC_CDRXIE << _I2C1INTC_CDRXIE_POSITION ) |
			( I2C_USER_I2C1INTC_TXIE << _I2C1INTC_TXIE_POSITION ) |
			( I2C_USER_I2C1INTC_RXIE << _I2C1INTC_RXIE_POSITION ) |
			( I2C_USER_I2C1INTC_CADDRIE << _I2C1INTC_CADDRIE_POSITION ) |
			( I2C_USER_I2C1INTC_HACKSIE << _I2C1INTC_HACKSIE_POSITION ) |
			( I2C_USER_I2C1INTC_CLTIE << _I2C1INTC_CLTIE_POSITION ) |
			( I2C_USER_I2C1INTC_HSTIE << _I2C1INTC_HSTIE_POSITION ) |
			( I2C_USER_I2C1INTC_HSBCLIE << _I2C1INTC_HSBCLIE_POSITION ) |
			( I2C_USER_I2C1INTC_BCLIE << _I2C1INTC_BCLIE_POSITION ) |
			( I2C_USER_I2C1INTC_CRCIE << _I2C1INTC_CRCIE_POSITION ) |
			( I2C_USER_I2C1INTC_NACKIE << _I2C1INTC_NACKIE_POSITION ) |
			( I2C_USER_I2C1INTC_FRMEIE << _I2C1INTC_FRMEIE_POSITION ) |
			( I2C_USER_I2C1INTC_BITIE << _I2C1INTC_BITIE_POSITION ) |
			( I2C_USER_I2C1INTC_CBCTIE << _I2C1INTC_CBCTIE_POSITION ) |
			( I2C_USER_I2C1INTC_HBCTIE << _I2C1INTC_HBCTIE_POSITION ) |
			( I2C_USER_I2C1INTC_BSCLTIE << _I2C1INTC_BSCLTIE_POSITION ) |
			( I2C_USER_I2C1INTC_EOPIE << _I2C1INTC_EOPIE_POSITION ) |
			( I2C_USER_I2C1INTC_HBCLIE << _I2C1INTC_HBCLIE_POSITION ) |
			( I2C_USER_I2C1INTC_HSCIE << _I2C1INTC_HSCIE_POSITION ) |
			( I2C_USER_I2C1INTC_HPCIE << _I2C1INTC_HPCIE_POSITION ) |
			( I2C_USER_I2C1INTC_CBCLIE << _I2C1INTC_CBCLIE_POSITION ) |
			( I2C_USER_I2C1INTC_I2CEIE << _I2C1INTC_I2CEIE_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1INTCbits.HDRXIE = I2C_USER_I2C1INTC_HDRXIE;
			I2C1INTCbits.HDTXIE = I2C_USER_I2C1INTC_HDTXIE;
			I2C1INTCbits.CDTXIE = I2C_USER_I2C1INTC_CDTXIE;
			I2C1INTCbits.CDRXIE = I2C_USER_I2C1INTC_CDRXIE;
			I2C1INTCbits.TXIE = I2C_USER_I2C1INTC_TXIE;
			I2C1INTCbits.RXIE = I2C_USER_I2C1INTC_RXIE;
			I2C1INTCbits.CADDRIE = I2C_USER_I2C1INTC_CADDRIE;
			I2C1INTCbits.HACKSIE = I2C_USER_I2C1INTC_HACKSIE;
			I2C1INTCbits.CLTIE = I2C_USER_I2C1INTC_CLTIE;
			I2C1INTCbits.HSTIE = I2C_USER_I2C1INTC_HSTIE;
			I2C1INTCbits.HSBCLIE = I2C_USER_I2C1INTC_HSBCLIE;
			I2C1INTCbits.BCLIE = I2C_USER_I2C1INTC_BCLIE;
			I2C1INTCbits.CRCIE = I2C_USER_I2C1INTC_CRCIE;
			I2C1INTCbits.NACKIE = I2C_USER_I2C1INTC_NACKIE;
			I2C1INTCbits.FRMEIE = I2C_USER_I2C1INTC_FRMEIE;
			I2C1INTCbits.BITIE = I2C_USER_I2C1INTC_BITIE;
			I2C1INTCbits.CBCTIE = I2C_USER_I2C1INTC_CBCTIE;
			I2C1INTCbits.HBCTIE = I2C_USER_I2C1INTC_HBCTIE;
			I2C1INTCbits.BSCLTIE = I2C_USER_I2C1INTC_BSCLTIE;
			I2C1INTCbits.EOPIE = I2C_USER_I2C1INTC_EOPIE;
			I2C1INTCbits.HBCLIE = I2C_USER_I2C1INTC_HBCLIE;
			I2C1INTCbits.HSCIE = I2C_USER_I2C1INTC_HSCIE;
			I2C1INTCbits.HPCIE = I2C_USER_I2C1INTC_HPCIE;
			I2C1INTCbits.CBCLIE = I2C_USER_I2C1INTC_CBCLIE;
			I2C1INTCbits.I2CEIE = I2C_USER_I2C1INTC_I2CEIE;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1STAT2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1STAT2 = 
			( I2C_USER_I2C1STAT2_SCLCNT << _I2C1STAT2_SCLCNT_POSITION ) |
			( I2C_USER_I2C1STAT2_ERR << _I2C1STAT2_ERR_POSITION ) |
			( I2C_USER_I2C1STAT2_CLTIF << _I2C1STAT2_CLTIF_POSITION ) |
			( I2C_USER_I2C1STAT2_HSTIF << _I2C1STAT2_HSTIF_POSITION ) |
			( I2C_USER_I2C1STAT2_STARTE << _I2C1STAT2_STARTE_POSITION ) |
			( I2C_USER_I2C1STAT2_STOPE << _I2C1STAT2_STOPE_POSITION ) |
			( I2C_USER_I2C1STAT2_CRCE << _I2C1STAT2_CRCE_POSITION ) |
			( I2C_USER_I2C1STAT2_NACKE << _I2C1STAT2_NACKE_POSITION ) |
			( I2C_USER_I2C1STAT2_FRME << _I2C1STAT2_FRME_POSITION ) |
			( I2C_USER_I2C1STAT2_BITO << _I2C1STAT2_BITO_POSITION ) |
			( I2C_USER_I2C1STAT2_CBCLTO << _I2C1STAT2_CBCLTO_POSITION ) |
			( I2C_USER_I2C1STAT2_HBCLTO << _I2C1STAT2_HBCLTO_POSITION ) |
			( I2C_USER_I2C1STAT2_BSCLTO << _I2C1STAT2_BSCLTO_POSITION ) |
			( I2C_USER_I2C1STAT2_EOP << _I2C1STAT2_EOP_POSITION ) |
			( I2C_USER_I2C1STAT2_HSBCL << _I2C1STAT2_HSBCL_POSITION ) |
			( I2C_USER_I2C1STAT2_HSTACT << _I2C1STAT2_HSTACT_POSITION ) |
			( I2C_USER_I2C1STAT2_CLTACT << _I2C1STAT2_CLTACT_POSITION ) |
			( I2C_USER_I2C1STAT2_SSPND << _I2C1STAT2_SSPND_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1STAT2bits.SCLCNT = I2C_USER_I2C1STAT2_SCLCNT;
			I2C1STAT2bits.ERR = I2C_USER_I2C1STAT2_ERR;
			I2C1STAT2bits.CLTIF = I2C_USER_I2C1STAT2_CLTIF;
			I2C1STAT2bits.HSTIF = I2C_USER_I2C1STAT2_HSTIF;
			I2C1STAT2bits.STARTE = I2C_USER_I2C1STAT2_STARTE;
			I2C1STAT2bits.STOPE = I2C_USER_I2C1STAT2_STOPE;
			I2C1STAT2bits.CRCE = I2C_USER_I2C1STAT2_CRCE;
			I2C1STAT2bits.NACKE = I2C_USER_I2C1STAT2_NACKE;
			I2C1STAT2bits.FRME = I2C_USER_I2C1STAT2_FRME;
			I2C1STAT2bits.BITO = I2C_USER_I2C1STAT2_BITO;
			I2C1STAT2bits.CBCLTO = I2C_USER_I2C1STAT2_CBCLTO;
			I2C1STAT2bits.HBCLTO = I2C_USER_I2C1STAT2_HBCLTO;
			I2C1STAT2bits.BSCLTO = I2C_USER_I2C1STAT2_BSCLTO;
			I2C1STAT2bits.EOP = I2C_USER_I2C1STAT2_EOP;
			I2C1STAT2bits.HSBCL = I2C_USER_I2C1STAT2_HSBCL;
			I2C1STAT2bits.HSTACT = I2C_USER_I2C1STAT2_HSTACT;
			I2C1STAT2bits.CLTACT = I2C_USER_I2C1STAT2_CLTACT;
			I2C1STAT2bits.SSPND = I2C_USER_I2C1STAT2_SSPND;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1PECレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1PEC = 
			( I2C_USER_I2C1PEC_RCRC << _I2C1PEC_RCRC_POSITION ) |
			( I2C_USER_I2C1PEC_CCRC << _I2C1PEC_CCRC_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1PECbits.RCRC = I2C_USER_I2C1PEC_RCRC;
			I2C1PECbits.CCRC = I2C_USER_I2C1PEC_CCRC;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1BTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1BTO = 
			( I2C_USER_I2C1BTO_BTOPR << _I2C1BTO_BTOPR_POSITION ) |
			( I2C_USER_I2C1BTO_BTOCLK << _I2C1BTO_BTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1BTObits.BTOPR = I2C_USER_I2C1BTO_BTOPR;
			I2C1BTObits.BTOCLK = I2C_USER_I2C1BTO_BTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1HBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1HBCTO = 
			( I2C_USER_I2C1HBCTO_HBCTOTMR << _I2C1HBCTO_HBCTOTMR_POSITION ) |
			( I2C_USER_I2C1HBCTO_HBCTOCLK << _I2C1HBCTO_HBCTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1HBCTObits.HBCTOTMR = I2C_USER_I2C1HBCTO_HBCTOTMR;
			I2C1HBCTObits.HBCTOCLK = I2C_USER_I2C1HBCTO_HBCTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1CBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1CBCTO = 
			( I2C_USER_I2C1CBCTO_CBCTOTMR << _I2C1CBCTO_CBCTOTMR_POSITION ) |
			( I2C_USER_I2C1CBCTO_CBCTOCLK << _I2C1CBCTO_CBCTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1CBCTObits.CBCTOTMR = I2C_USER_I2C1CBCTO_CBCTOTMR;
			I2C1CBCTObits.CBCTOCLK = I2C_USER_I2C1CBCTO_CBCTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1BITOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1BITO = 
			( I2C_USER_I2C1BITO_BITOTMR << _I2C1BITO_BITOTMR_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1BITObits.BITOTMR = I2C_USER_I2C1BITO_BITOTMR;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1SDASUTレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1SDASUT = 
			( I2C_USER_I2C1SDASUT_SDASUT << _I2C1SDASUT_SDASUT_POSITION ) |
			( I2C_USER_I2C1SDASUT_SDASUTEN << _I2C1SDASUT_SDASUTEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1SDASUTbits.SDASUT = I2C_USER_I2C1SDASUT_SDASUT;
			I2C1SDASUTbits.SDASUTEN = I2C_USER_I2C1SDASUT_SDASUTEN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C1HDLYCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C1HDLYC = 
			( I2C_USER_I2C1HDLYC_HIDLYC << _I2C1HDLYC_HIDLYC_POSITION ) |
			( I2C_USER_I2C1HDLYC_HIDLYCEN << _I2C1HDLYC_HIDLYCEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C1HDLYCbits.HIDLYC = I2C_USER_I2C1HDLYC_HIDLYC;
			I2C1HDLYCbits.HIDLYCEN = I2C_USER_I2C1HDLYC_HIDLYCEN;
		#endif 

#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C2_Set_Register(void)
* @brief     I2C2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C2_Set_Register(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )	
	/*-----------------------------------------------------------------------*/
	/* I2C2ADDレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2ADD = 
			( I2C_USER_I2C2ADD_I2CADD << _I2C2ADD_I2CADD_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2ADDbits.I2CADD = I2C_USER_I2C2ADD_I2CADD;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2MSK = 
			( I2C_USER_I2C2MSK_I2CMSK << _I2C2MSK_I2CMSK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2MSKbits.I2CMSK = I2C_USER_I2C2MSK_I2CMSK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2HBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2HBRG = 
			( I2C_USER_I2C2HBRG_I2CHBRG << _I2C2HBRG_I2CHBRG_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2HBRGbits.I2CHBRG = I2C_USER_I2C2HBRG_I2CHBRG;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2TRNレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2TRN = 
			( I2C_USER_I2C2TRN_I2CTRN << _I2C2TRN_I2CTRN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2TRNbits.I2CTRN = I2C_USER_I2C2TRN_I2CTRN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2RCVレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2RCV = 
			( I2C_USER_I2C2RCV_I2CRCV << _I2C2RCV_I2CRCV_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2RCVbits.I2CRCV = I2C_USER_I2C2RCV_I2CRCV;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2CON2 = 
			( I2C_USER_I2C2CON2_PSZ << _I2C2CON2_PSZ_POSITION ) |
			( I2C_USER_I2C2CON2_BITE << _I2C2CON2_BITE_POSITION ) |
			( I2C_USER_I2C2CON2_SMEN << _I2C2CON2_SMEN_POSITION ) |
			( I2C_USER_I2C2CON2_NDA << _I2C2CON2_NDA_POSITION ) |
			( I2C_USER_I2C2CON2_EOPSC << _I2C2CON2_EOPSC_POSITION ) |
			( I2C_USER_I2C2CON2_HNACKIGN << _I2C2CON2_HNACKIGN_POSITION ) |
			( I2C_USER_I2C2CON2_ACKC << _I2C2CON2_ACKC_POSITION ) |
			( I2C_USER_I2C2CON2_EPSZE << _I2C2CON2_EPSZE_POSITION ) |
			( I2C_USER_I2C2CON2_CBCTE << _I2C2CON2_CBCTE_POSITION ) |
			( I2C_USER_I2C2CON2_HBCTE << _I2C2CON2_HBCTE_POSITION ) |
			( I2C_USER_I2C2CON2_BSCLTE << _I2C2CON2_BSCLTE_POSITION ) |
			( I2C_USER_I2C2CON2_PECC << _I2C2CON2_PECC_POSITION ) |
			( I2C_USER_I2C2CON2_AMODE << _I2C2CON2_AMODE_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2CON2bits.PSZ = I2C_USER_I2C2CON2_PSZ;
			I2C2CON2bits.BITE = I2C_USER_I2C2CON2_BITE;
			I2C2CON2bits.SMEN = I2C_USER_I2C2CON2_SMEN;
			I2C2CON2bits.NDA = I2C_USER_I2C2CON2_NDA;
			I2C2CON2bits.EOPSC = I2C_USER_I2C2CON2_EOPSC;
			I2C2CON2bits.HNACKIGN = I2C_USER_I2C2CON2_HNACKIGN;
			I2C2CON2bits.ACKC = I2C_USER_I2C2CON2_ACKC;
			I2C2CON2bits.EPSZE = I2C_USER_I2C2CON2_EPSZE;
			I2C2CON2bits.CBCTE = I2C_USER_I2C2CON2_CBCTE;
			I2C2CON2bits.HBCTE = I2C_USER_I2C2CON2_HBCTE;
			I2C2CON2bits.BSCLTE = I2C_USER_I2C2CON2_BSCLTE;
			I2C2CON2bits.PECC = I2C_USER_I2C2CON2_PECC;
			I2C2CON2bits.AMODE = I2C_USER_I2C2CON2_AMODE;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2LBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2LBRG = 
			( I2C_USER_I2C2LBRG_I2CLBRG << _I2C2LBRG_I2CLBRG_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2LBRGbits.I2CLBRG = I2C_USER_I2C2LBRG_I2CLBRG;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2INTCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2INTC = 
			( I2C_USER_I2C2INTC_HDRXIE << _I2C2INTC_HDRXIE_POSITION ) |
			( I2C_USER_I2C2INTC_HDTXIE << _I2C2INTC_HDTXIE_POSITION ) |
			( I2C_USER_I2C2INTC_CDTXIE << _I2C2INTC_CDTXIE_POSITION ) |
			( I2C_USER_I2C2INTC_CDRXIE << _I2C2INTC_CDRXIE_POSITION ) |
			( I2C_USER_I2C2INTC_TXIE << _I2C2INTC_TXIE_POSITION ) |
			( I2C_USER_I2C2INTC_RXIE << _I2C2INTC_RXIE_POSITION ) |
			( I2C_USER_I2C2INTC_CADDRIE << _I2C2INTC_CADDRIE_POSITION ) |
			( I2C_USER_I2C2INTC_HACKSIE << _I2C2INTC_HACKSIE_POSITION ) |
			( I2C_USER_I2C2INTC_CLTIE << _I2C2INTC_CLTIE_POSITION ) |
			( I2C_USER_I2C2INTC_HSTIE << _I2C2INTC_HSTIE_POSITION ) |
			( I2C_USER_I2C2INTC_HSBCLIE << _I2C2INTC_HSBCLIE_POSITION ) |
			( I2C_USER_I2C2INTC_BCLIE << _I2C2INTC_BCLIE_POSITION ) |
			( I2C_USER_I2C2INTC_CRCIE << _I2C2INTC_CRCIE_POSITION ) |
			( I2C_USER_I2C2INTC_NACKIE << _I2C2INTC_NACKIE_POSITION ) |
			( I2C_USER_I2C2INTC_FRMEIE << _I2C2INTC_FRMEIE_POSITION ) |
			( I2C_USER_I2C2INTC_BITIE << _I2C2INTC_BITIE_POSITION ) |
			( I2C_USER_I2C2INTC_CBCTIE << _I2C2INTC_CBCTIE_POSITION ) |
			( I2C_USER_I2C2INTC_HBCTIE << _I2C2INTC_HBCTIE_POSITION ) |
			( I2C_USER_I2C2INTC_BSCLTIE << _I2C2INTC_BSCLTIE_POSITION ) |
			( I2C_USER_I2C2INTC_EOPIE << _I2C2INTC_EOPIE_POSITION ) |
			( I2C_USER_I2C2INTC_HBCLIE << _I2C2INTC_HBCLIE_POSITION ) |
			( I2C_USER_I2C2INTC_HSCIE << _I2C2INTC_HSCIE_POSITION ) |
			( I2C_USER_I2C2INTC_HPCIE << _I2C2INTC_HPCIE_POSITION ) |
			( I2C_USER_I2C2INTC_CBCLIE << _I2C2INTC_CBCLIE_POSITION ) |
			( I2C_USER_I2C2INTC_I2CEIE << _I2C2INTC_I2CEIE_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2INTCbits.HDRXIE = I2C_USER_I2C2INTC_HDRXIE;
			I2C2INTCbits.HDTXIE = I2C_USER_I2C2INTC_HDTXIE;
			I2C2INTCbits.CDTXIE = I2C_USER_I2C2INTC_CDTXIE;
			I2C2INTCbits.CDRXIE = I2C_USER_I2C2INTC_CDRXIE;
			I2C2INTCbits.TXIE = I2C_USER_I2C2INTC_TXIE;
			I2C2INTCbits.RXIE = I2C_USER_I2C2INTC_RXIE;
			I2C2INTCbits.CADDRIE = I2C_USER_I2C2INTC_CADDRIE;
			I2C2INTCbits.HACKSIE = I2C_USER_I2C2INTC_HACKSIE;
			I2C2INTCbits.CLTIE = I2C_USER_I2C2INTC_CLTIE;
			I2C2INTCbits.HSTIE = I2C_USER_I2C2INTC_HSTIE;
			I2C2INTCbits.HSBCLIE = I2C_USER_I2C2INTC_HSBCLIE;
			I2C2INTCbits.BCLIE = I2C_USER_I2C2INTC_BCLIE;
			I2C2INTCbits.CRCIE = I2C_USER_I2C2INTC_CRCIE;
			I2C2INTCbits.NACKIE = I2C_USER_I2C2INTC_NACKIE;
			I2C2INTCbits.FRMEIE = I2C_USER_I2C2INTC_FRMEIE;
			I2C2INTCbits.BITIE = I2C_USER_I2C2INTC_BITIE;
			I2C2INTCbits.CBCTIE = I2C_USER_I2C2INTC_CBCTIE;
			I2C2INTCbits.HBCTIE = I2C_USER_I2C2INTC_HBCTIE;
			I2C2INTCbits.BSCLTIE = I2C_USER_I2C2INTC_BSCLTIE;
			I2C2INTCbits.EOPIE = I2C_USER_I2C2INTC_EOPIE;
			I2C2INTCbits.HBCLIE = I2C_USER_I2C2INTC_HBCLIE;
			I2C2INTCbits.HSCIE = I2C_USER_I2C2INTC_HSCIE;
			I2C2INTCbits.HPCIE = I2C_USER_I2C2INTC_HPCIE;
			I2C2INTCbits.CBCLIE = I2C_USER_I2C2INTC_CBCLIE;
			I2C2INTCbits.I2CEIE = I2C_USER_I2C2INTC_I2CEIE;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2STAT2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2STAT2 = 
			( I2C_USER_I2C2STAT2_SCLCNT << _I2C2STAT2_SCLCNT_POSITION ) |
			( I2C_USER_I2C2STAT2_ERR << _I2C2STAT2_ERR_POSITION ) |
			( I2C_USER_I2C2STAT2_CLTIF << _I2C2STAT2_CLTIF_POSITION ) |
			( I2C_USER_I2C2STAT2_HSTIF << _I2C2STAT2_HSTIF_POSITION ) |
			( I2C_USER_I2C2STAT2_STARTE << _I2C2STAT2_STARTE_POSITION ) |
			( I2C_USER_I2C2STAT2_STOPE << _I2C2STAT2_STOPE_POSITION ) |
			( I2C_USER_I2C2STAT2_CRCE << _I2C2STAT2_CRCE_POSITION ) |
			( I2C_USER_I2C2STAT2_NACKE << _I2C2STAT2_NACKE_POSITION ) |
			( I2C_USER_I2C2STAT2_FRME << _I2C2STAT2_FRME_POSITION ) |
			( I2C_USER_I2C2STAT2_BITO << _I2C2STAT2_BITO_POSITION ) |
			( I2C_USER_I2C2STAT2_CBCLTO << _I2C2STAT2_CBCLTO_POSITION ) |
			( I2C_USER_I2C2STAT2_HBCLTO << _I2C2STAT2_HBCLTO_POSITION ) |
			( I2C_USER_I2C2STAT2_BSCLTO << _I2C2STAT2_BSCLTO_POSITION ) |
			( I2C_USER_I2C2STAT2_EOP << _I2C2STAT2_EOP_POSITION ) |
			( I2C_USER_I2C2STAT2_HSBCL << _I2C2STAT2_HSBCL_POSITION ) |
			( I2C_USER_I2C2STAT2_HSTACT << _I2C2STAT2_HSTACT_POSITION ) |
			( I2C_USER_I2C2STAT2_CLTACT << _I2C2STAT2_CLTACT_POSITION ) |
			( I2C_USER_I2C2STAT2_SSPND << _I2C2STAT2_SSPND_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2STAT2bits.SCLCNT = I2C_USER_I2C2STAT2_SCLCNT;
			I2C2STAT2bits.ERR = I2C_USER_I2C2STAT2_ERR;
			I2C2STAT2bits.CLTIF = I2C_USER_I2C2STAT2_CLTIF;
			I2C2STAT2bits.HSTIF = I2C_USER_I2C2STAT2_HSTIF;
			I2C2STAT2bits.STARTE = I2C_USER_I2C2STAT2_STARTE;
			I2C2STAT2bits.STOPE = I2C_USER_I2C2STAT2_STOPE;
			I2C2STAT2bits.CRCE = I2C_USER_I2C2STAT2_CRCE;
			I2C2STAT2bits.NACKE = I2C_USER_I2C2STAT2_NACKE;
			I2C2STAT2bits.FRME = I2C_USER_I2C2STAT2_FRME;
			I2C2STAT2bits.BITO = I2C_USER_I2C2STAT2_BITO;
			I2C2STAT2bits.CBCLTO = I2C_USER_I2C2STAT2_CBCLTO;
			I2C2STAT2bits.HBCLTO = I2C_USER_I2C2STAT2_HBCLTO;
			I2C2STAT2bits.BSCLTO = I2C_USER_I2C2STAT2_BSCLTO;
			I2C2STAT2bits.EOP = I2C_USER_I2C2STAT2_EOP;
			I2C2STAT2bits.HSBCL = I2C_USER_I2C2STAT2_HSBCL;
			I2C2STAT2bits.HSTACT = I2C_USER_I2C2STAT2_HSTACT;
			I2C2STAT2bits.CLTACT = I2C_USER_I2C2STAT2_CLTACT;
			I2C2STAT2bits.SSPND = I2C_USER_I2C2STAT2_SSPND;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2PECレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2PEC = 
			( I2C_USER_I2C2PEC_RCRC << _I2C2PEC_RCRC_POSITION ) |
			( I2C_USER_I2C2PEC_CCRC << _I2C2PEC_CCRC_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2PECbits.RCRC = I2C_USER_I2C2PEC_RCRC;
			I2C2PECbits.CCRC = I2C_USER_I2C2PEC_CCRC;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2BTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2BTO = 
			( I2C_USER_I2C2BTO_BTOPR << _I2C2BTO_BTOPR_POSITION ) |
			( I2C_USER_I2C2BTO_BTOCLK << _I2C2BTO_BTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2BTObits.BTOPR = I2C_USER_I2C2BTO_BTOPR;
			I2C2BTObits.BTOCLK = I2C_USER_I2C2BTO_BTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2HBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2HBCTO = 
			( I2C_USER_I2C2HBCTO_HBCTOTMR << _I2C2HBCTO_HBCTOTMR_POSITION ) |
			( I2C_USER_I2C2HBCTO_HBCTOCLK << _I2C2HBCTO_HBCTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2HBCTObits.HBCTOTMR = I2C_USER_I2C2HBCTO_HBCTOTMR;
			I2C2HBCTObits.HBCTOCLK = I2C_USER_I2C2HBCTO_HBCTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2CBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2CBCTO = 
			( I2C_USER_I2C2CBCTO_CBCTOTMR << _I2C2CBCTO_CBCTOTMR_POSITION ) |
			( I2C_USER_I2C2CBCTO_CBCTOCLK << _I2C2CBCTO_CBCTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2CBCTObits.CBCTOTMR = I2C_USER_I2C2CBCTO_CBCTOTMR;
			I2C2CBCTObits.CBCTOCLK = I2C_USER_I2C2CBCTO_CBCTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2BITOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2BITO = 
			( I2C_USER_I2C2BITO_BITOTMR << _I2C2BITO_BITOTMR_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2BITObits.BITOTMR = I2C_USER_I2C2BITO_BITOTMR;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2SDASUTレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2SDASUT = 
			( I2C_USER_I2C2SDASUT_SDASUT << _I2C2SDASUT_SDASUT_POSITION ) |
			( I2C_USER_I2C2SDASUT_SDASUTEN << _I2C2SDASUT_SDASUTEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2SDASUTbits.SDASUT = I2C_USER_I2C2SDASUT_SDASUT;
			I2C2SDASUTbits.SDASUTEN = I2C_USER_I2C2SDASUT_SDASUTEN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C2HDLYCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C2HDLYC = 
			( I2C_USER_I2C2HDLYC_HIDLYC << _I2C2HDLYC_HIDLYC_POSITION ) |
			( I2C_USER_I2C2HDLYC_HIDLYCEN << _I2C2HDLYC_HIDLYCEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C2HDLYCbits.HIDLYC = I2C_USER_I2C2HDLYC_HIDLYC;
			I2C2HDLYCbits.HIDLYCEN = I2C_USER_I2C2HDLYC_HIDLYCEN;
		#endif 

#endif	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C3_Set_Register(void)
* @brief     I2C3レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C3_Set_Register(void)
{
#if ( PMD_I2C3MD == PMD_MODULE_ENABLE )	
	/*-----------------------------------------------------------------------*/
	/* I2C3CON1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3CON1 = 
			( I2C_USER_I2C3CON1_SEN << _I2C3CON1_SEN_POSITION ) |
			( I2C_USER_I2C3CON1_RSEN << _I2C3CON1_RSEN_POSITION ) |
			( I2C_USER_I2C3CON1_PEN << _I2C3CON1_PEN_POSITION ) |
			( I2C_USER_I2C3CON1_RCEN << _I2C3CON1_RCEN_POSITION ) |
			( I2C_USER_I2C3CON1_ACKEN << _I2C3CON1_ACKEN_POSITION ) |
			( I2C_USER_I2C3CON1_ACKDT << _I2C3CON1_ACKDT_POSITION ) |
			( I2C_USER_I2C3CON1_STREN << _I2C3CON1_STREN_POSITION ) |
			( I2C_USER_I2C3CON1_GCEN << _I2C3CON1_GCEN_POSITION ) |
			( I2C_USER_I2C3CON1_DISSLW << _I2C3CON1_DISSLW_POSITION ) |
			( I2C_USER_I2C3CON1_A10M << _I2C3CON1_A10M_POSITION ) |
			( I2C_USER_I2C3CON1_STRICT << _I2C3CON1_STRICT_POSITION ) |
			( I2C_USER_I2C3CON1_SCLREL << _I2C3CON1_SCLREL_POSITION ) |
			( I2C_USER_I2C3CON1_SIDL << _I2C3CON1_SIDL_POSITION ) |
			( I2C_USER_I2C3CON1_ON << _I2C3CON1_ON_POSITION ) |
			( I2C_USER_I2C3CON1_DHEN << _I2C3CON1_DHEN_POSITION ) |
			( I2C_USER_I2C3CON1_AHEN << _I2C3CON1_AHEN_POSITION ) |
			( I2C_USER_I2C3CON1_SBCDE << _I2C3CON1_SBCDE_POSITION ) |
			( I2C_USER_I2C3CON1_SDAHT << _I2C3CON1_SDAHT_POSITION ) |
			( I2C_USER_I2C3CON1_BOEN << _I2C3CON1_BOEN_POSITION ) |
			( I2C_USER_I2C3CON1_SCIE << _I2C3CON1_SCIE_POSITION ) |
			( I2C_USER_I2C3CON1_PCIE << _I2C3CON1_PCIE_POSITION ) |
			( I2C_USER_I2C3CON1_SMBEN << _I2C3CON1_SMBEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3CON1bits.SEN = I2C_USER_I2C3CON1_SEN;
			I2C3CON1bits.RSEN = I2C_USER_I2C3CON1_RSEN;
			I2C3CON1bits.PEN = I2C_USER_I2C3CON1_PEN;
			I2C3CON1bits.RCEN = I2C_USER_I2C3CON1_RCEN;
			I2C3CON1bits.ACKEN = I2C_USER_I2C3CON1_ACKEN;
			I2C3CON1bits.ACKDT = I2C_USER_I2C3CON1_ACKDT;
			I2C3CON1bits.STREN = I2C_USER_I2C3CON1_STREN;
			I2C3CON1bits.GCEN = I2C_USER_I2C3CON1_GCEN;
			I2C3CON1bits.DISSLW = I2C_USER_I2C3CON1_DISSLW;
			I2C3CON1bits.A10M = I2C_USER_I2C3CON1_A10M;
			I2C3CON1bits.STRICT = I2C_USER_I2C3CON1_STRICT;
			I2C3CON1bits.SCLREL = I2C_USER_I2C3CON1_SCLREL;
			I2C3CON1bits.SIDL = I2C_USER_I2C3CON1_SIDL;
			I2C3CON1bits.ON = I2C_USER_I2C3CON1_ON;
			I2C3CON1bits.DHEN = I2C_USER_I2C3CON1_DHEN;
			I2C3CON1bits.AHEN = I2C_USER_I2C3CON1_AHEN;
			I2C3CON1bits.SBCDE = I2C_USER_I2C3CON1_SBCDE;
			I2C3CON1bits.SDAHT = I2C_USER_I2C3CON1_SDAHT;
			I2C3CON1bits.BOEN = I2C_USER_I2C3CON1_BOEN;
			I2C3CON1bits.SCIE = I2C_USER_I2C3CON1_SCIE;
			I2C3CON1bits.PCIE = I2C_USER_I2C3CON1_PCIE;
			I2C3CON1bits.SMBEN = I2C_USER_I2C3CON1_SMBEN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3STAT1レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3STAT1 = 
			( I2C_USER_I2C3STAT1_TBF << _I2C3STAT1_TBF_POSITION ) |
			( I2C_USER_I2C3STAT1_RBF << _I2C3STAT1_RBF_POSITION ) |
			( I2C_USER_I2C3STAT1_R_W << _I2C3STAT1_R_W_POSITION ) |
			( I2C_USER_I2C3STAT1_S << _I2C3STAT1_S_POSITION ) |
			( I2C_USER_I2C3STAT1_P << _I2C3STAT1_P_POSITION ) |
			( I2C_USER_I2C3STAT1_D_A << _I2C3STAT1_D_A_POSITION ) |
			( I2C_USER_I2C3STAT1_I2COV << _I2C3STAT1_I2COV_POSITION ) |
			( I2C_USER_I2C3STAT1_IWCOL << _I2C3STAT1_IWCOL_POSITION ) |
			( I2C_USER_I2C3STAT1_ADD10 << _I2C3STAT1_ADD10_POSITION ) |
			( I2C_USER_I2C3STAT1_GCSTAT << _I2C3STAT1_GCSTAT_POSITION ) |
			( I2C_USER_I2C3STAT1_BCL << _I2C3STAT1_BCL_POSITION ) |
			( I2C_USER_I2C3STAT1_ACKTIM << _I2C3STAT1_ACKTIM_POSITION ) |
			( I2C_USER_I2C3STAT1_TRSTAT << _I2C3STAT1_TRSTAT_POSITION ) |
			( I2C_USER_I2C3STAT1_ACKSTAT << _I2C3STAT1_ACKSTAT_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3STAT1bits.TBF = I2C_USER_I2C3STAT1_TBF;
			I2C3STAT1bits.RBF = I2C_USER_I2C3STAT1_RBF;
			I2C3STAT1bits.R_W = I2C_USER_I2C3STAT1_R_W;
			I2C3STAT1bits.S = I2C_USER_I2C3STAT1_S;
			I2C3STAT1bits.P = I2C_USER_I2C3STAT1_P;
			I2C3STAT1bits.D_A = I2C_USER_I2C3STAT1_D_A;
			I2C3STAT1bits.I2COV = I2C_USER_I2C3STAT1_I2COV;
			I2C3STAT1bits.IWCOL = I2C_USER_I2C3STAT1_IWCOL;
			I2C3STAT1bits.ADD10 = I2C_USER_I2C3STAT1_ADD10;
			I2C3STAT1bits.GCSTAT = I2C_USER_I2C3STAT1_GCSTAT;
			I2C3STAT1bits.BCL = I2C_USER_I2C3STAT1_BCL;
			I2C3STAT1bits.ACKTIM = I2C_USER_I2C3STAT1_ACKTIM;
			I2C3STAT1bits.TRSTAT = I2C_USER_I2C3STAT1_TRSTAT;
			I2C3STAT1bits.ACKSTAT = I2C_USER_I2C3STAT1_ACKSTAT;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3ADDレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3ADD = 
			( I2C_USER_I2C3ADD_I2CADD << _I2C3ADD_I2CADD_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3ADDbits.I2CADD = I2C_USER_I2C3ADD_I2CADD;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3MSKレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3MSK = 
			( I2C_USER_I2C3MSK_I2CMSK << _I2C3MSK_I2CMSK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3MSKbits.I2CMSK = I2C_USER_I2C3MSK_I2CMSK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3HBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3HBRG = 
			( I2C_USER_I2C3HBRG_I2CHBRG << _I2C3HBRG_I2CHBRG_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3HBRGbits.I2CHBRG = I2C_USER_I2C3HBRG_I2CHBRG;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3TRNレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3TRN = 
			( I2C_USER_I2C3TRN_I2CTRN << _I2C3TRN_I2CTRN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3TRNbits.I2CTRN = I2C_USER_I2C3TRN_I2CTRN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3RCVレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3RCV = 
			( I2C_USER_I2C3RCV_I2CRCV << _I2C3RCV_I2CRCV_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3RCVbits.I2CRCV = I2C_USER_I2C3RCV_I2CRCV;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3CON2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3CON2 = 
			( I2C_USER_I2C3CON2_PSZ << _I2C3CON2_PSZ_POSITION ) |
			( I2C_USER_I2C3CON2_BITE << _I2C3CON2_BITE_POSITION ) |
			( I2C_USER_I2C3CON2_SMEN << _I2C3CON2_SMEN_POSITION ) |
			( I2C_USER_I2C3CON2_NDA << _I2C3CON2_NDA_POSITION ) |
			( I2C_USER_I2C3CON2_EOPSC << _I2C3CON2_EOPSC_POSITION ) |
			( I2C_USER_I2C3CON2_HNACKIGN << _I2C3CON2_HNACKIGN_POSITION ) |
			( I2C_USER_I2C3CON2_ACKC << _I2C3CON2_ACKC_POSITION ) |
			( I2C_USER_I2C3CON2_EPSZE << _I2C3CON2_EPSZE_POSITION ) |
			( I2C_USER_I2C3CON2_CBCTE << _I2C3CON2_CBCTE_POSITION ) |
			( I2C_USER_I2C3CON2_HBCTE << _I2C3CON2_HBCTE_POSITION ) |
			( I2C_USER_I2C3CON2_BSCLTE << _I2C3CON2_BSCLTE_POSITION ) |
			( I2C_USER_I2C3CON2_PECC << _I2C3CON2_PECC_POSITION ) |
			( I2C_USER_I2C3CON2_AMODE << _I2C3CON2_AMODE_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3CON2bits.PSZ = I2C_USER_I2C3CON2_PSZ;
			I2C3CON2bits.BITE = I2C_USER_I2C3CON2_BITE;
			I2C3CON2bits.SMEN = I2C_USER_I2C3CON2_SMEN;
			I2C3CON2bits.NDA = I2C_USER_I2C3CON2_NDA;
			I2C3CON2bits.EOPSC = I2C_USER_I2C3CON2_EOPSC;
			I2C3CON2bits.HNACKIGN = I2C_USER_I2C3CON2_HNACKIGN;
			I2C3CON2bits.ACKC = I2C_USER_I2C3CON2_ACKC;
			I2C3CON2bits.EPSZE = I2C_USER_I2C3CON2_EPSZE;
			I2C3CON2bits.CBCTE = I2C_USER_I2C3CON2_CBCTE;
			I2C3CON2bits.HBCTE = I2C_USER_I2C3CON2_HBCTE;
			I2C3CON2bits.BSCLTE = I2C_USER_I2C3CON2_BSCLTE;
			I2C3CON2bits.PECC = I2C_USER_I2C3CON2_PECC;
			I2C3CON2bits.AMODE = I2C_USER_I2C3CON2_AMODE;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3LBRGレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3LBRG = 
			( I2C_USER_I2C3LBRG_I2CLBRG << _I2C3LBRG_I2CLBRG_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3LBRGbits.I2CLBRG = I2C_USER_I2C3LBRG_I2CLBRG;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3INTCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3INTC = 
			( I2C_USER_I2C3INTC_HDRXIE << _I2C3INTC_HDRXIE_POSITION ) |
			( I2C_USER_I2C3INTC_HDTXIE << _I2C3INTC_HDTXIE_POSITION ) |
			( I2C_USER_I2C3INTC_CDTXIE << _I2C3INTC_CDTXIE_POSITION ) |
			( I2C_USER_I2C3INTC_CDRXIE << _I2C3INTC_CDRXIE_POSITION ) |
			( I2C_USER_I2C3INTC_TXIE << _I2C3INTC_TXIE_POSITION ) |
			( I2C_USER_I2C3INTC_RXIE << _I2C3INTC_RXIE_POSITION ) |
			( I2C_USER_I2C3INTC_CADDRIE << _I2C3INTC_CADDRIE_POSITION ) |
			( I2C_USER_I2C3INTC_HACKSIE << _I2C3INTC_HACKSIE_POSITION ) |
			( I2C_USER_I2C3INTC_CLTIE << _I2C3INTC_CLTIE_POSITION ) |
			( I2C_USER_I2C3INTC_HSTIE << _I2C3INTC_HSTIE_POSITION ) |
			( I2C_USER_I2C3INTC_HSBCLIE << _I2C3INTC_HSBCLIE_POSITION ) |
			( I2C_USER_I2C3INTC_BCLIE << _I2C3INTC_BCLIE_POSITION ) |
			( I2C_USER_I2C3INTC_CRCIE << _I2C3INTC_CRCIE_POSITION ) |
			( I2C_USER_I2C3INTC_NACKIE << _I2C3INTC_NACKIE_POSITION ) |
			( I2C_USER_I2C3INTC_FRMEIE << _I2C3INTC_FRMEIE_POSITION ) |
			( I2C_USER_I2C3INTC_BITIE << _I2C3INTC_BITIE_POSITION ) |
			( I2C_USER_I2C3INTC_CBCTIE << _I2C3INTC_CBCTIE_POSITION ) |
			( I2C_USER_I2C3INTC_HBCTIE << _I2C3INTC_HBCTIE_POSITION ) |
			( I2C_USER_I2C3INTC_BSCLTIE << _I2C3INTC_BSCLTIE_POSITION ) |
			( I2C_USER_I2C3INTC_EOPIE << _I2C3INTC_EOPIE_POSITION ) |
			( I2C_USER_I2C3INTC_HBCLIE << _I2C3INTC_HBCLIE_POSITION ) |
			( I2C_USER_I2C3INTC_HSCIE << _I2C3INTC_HSCIE_POSITION ) |
			( I2C_USER_I2C3INTC_HPCIE << _I2C3INTC_HPCIE_POSITION ) |
			( I2C_USER_I2C3INTC_CBCLIE << _I2C3INTC_CBCLIE_POSITION ) |
			( I2C_USER_I2C3INTC_I2CEIE << _I2C3INTC_I2CEIE_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3INTCbits.HDRXIE = I2C_USER_I2C3INTC_HDRXIE;
			I2C3INTCbits.HDTXIE = I2C_USER_I2C3INTC_HDTXIE;
			I2C3INTCbits.CDTXIE = I2C_USER_I2C3INTC_CDTXIE;
			I2C3INTCbits.CDRXIE = I2C_USER_I2C3INTC_CDRXIE;
			I2C3INTCbits.TXIE = I2C_USER_I2C3INTC_TXIE;
			I2C3INTCbits.RXIE = I2C_USER_I2C3INTC_RXIE;
			I2C3INTCbits.CADDRIE = I2C_USER_I2C3INTC_CADDRIE;
			I2C3INTCbits.HACKSIE = I2C_USER_I2C3INTC_HACKSIE;
			I2C3INTCbits.CLTIE = I2C_USER_I2C3INTC_CLTIE;
			I2C3INTCbits.HSTIE = I2C_USER_I2C3INTC_HSTIE;
			I2C3INTCbits.HSBCLIE = I2C_USER_I2C3INTC_HSBCLIE;
			I2C3INTCbits.BCLIE = I2C_USER_I2C3INTC_BCLIE;
			I2C3INTCbits.CRCIE = I2C_USER_I2C3INTC_CRCIE;
			I2C3INTCbits.NACKIE = I2C_USER_I2C3INTC_NACKIE;
			I2C3INTCbits.FRMEIE = I2C_USER_I2C3INTC_FRMEIE;
			I2C3INTCbits.BITIE = I2C_USER_I2C3INTC_BITIE;
			I2C3INTCbits.CBCTIE = I2C_USER_I2C3INTC_CBCTIE;
			I2C3INTCbits.HBCTIE = I2C_USER_I2C3INTC_HBCTIE;
			I2C3INTCbits.BSCLTIE = I2C_USER_I2C3INTC_BSCLTIE;
			I2C3INTCbits.EOPIE = I2C_USER_I2C3INTC_EOPIE;
			I2C3INTCbits.HBCLIE = I2C_USER_I2C3INTC_HBCLIE;
			I2C3INTCbits.HSCIE = I2C_USER_I2C3INTC_HSCIE;
			I2C3INTCbits.HPCIE = I2C_USER_I2C3INTC_HPCIE;
			I2C3INTCbits.CBCLIE = I2C_USER_I2C3INTC_CBCLIE;
			I2C3INTCbits.I2CEIE = I2C_USER_I2C3INTC_I2CEIE;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3STAT2レジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3STAT2 = 
			( I2C_USER_I2C3STAT2_SCLCNT << _I2C3STAT2_SCLCNT_POSITION ) |
			( I2C_USER_I2C3STAT2_ERR << _I2C3STAT2_ERR_POSITION ) |
			( I2C_USER_I2C3STAT2_CLTIF << _I2C3STAT2_CLTIF_POSITION ) |
			( I2C_USER_I2C3STAT2_HSTIF << _I2C3STAT2_HSTIF_POSITION ) |
			( I2C_USER_I2C3STAT2_STARTE << _I2C3STAT2_STARTE_POSITION ) |
			( I2C_USER_I2C3STAT2_STOPE << _I2C3STAT2_STOPE_POSITION ) |
			( I2C_USER_I2C3STAT2_CRCE << _I2C3STAT2_CRCE_POSITION ) |
			( I2C_USER_I2C3STAT2_NACKE << _I2C3STAT2_NACKE_POSITION ) |
			( I2C_USER_I2C3STAT2_FRME << _I2C3STAT2_FRME_POSITION ) |
			( I2C_USER_I2C3STAT2_BITO << _I2C3STAT2_BITO_POSITION ) |
			( I2C_USER_I2C3STAT2_CBCLTO << _I2C3STAT2_CBCLTO_POSITION ) |
			( I2C_USER_I2C3STAT2_HBCLTO << _I2C3STAT2_HBCLTO_POSITION ) |
			( I2C_USER_I2C3STAT2_BSCLTO << _I2C3STAT2_BSCLTO_POSITION ) |
			( I2C_USER_I2C3STAT2_EOP << _I2C3STAT2_EOP_POSITION ) |
			( I2C_USER_I2C3STAT2_HSBCL << _I2C3STAT2_HSBCL_POSITION ) |
			( I2C_USER_I2C3STAT2_HSTACT << _I2C3STAT2_HSTACT_POSITION ) |
			( I2C_USER_I2C3STAT2_CLTACT << _I2C3STAT2_CLTACT_POSITION ) |
			( I2C_USER_I2C3STAT2_SSPND << _I2C3STAT2_SSPND_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3STAT2bits.SCLCNT = I2C_USER_I2C3STAT2_SCLCNT;
			I2C3STAT2bits.ERR = I2C_USER_I2C3STAT2_ERR;
			I2C3STAT2bits.CLTIF = I2C_USER_I2C3STAT2_CLTIF;
			I2C3STAT2bits.HSTIF = I2C_USER_I2C3STAT2_HSTIF;
			I2C3STAT2bits.STARTE = I2C_USER_I2C3STAT2_STARTE;
			I2C3STAT2bits.STOPE = I2C_USER_I2C3STAT2_STOPE;
			I2C3STAT2bits.CRCE = I2C_USER_I2C3STAT2_CRCE;
			I2C3STAT2bits.NACKE = I2C_USER_I2C3STAT2_NACKE;
			I2C3STAT2bits.FRME = I2C_USER_I2C3STAT2_FRME;
			I2C3STAT2bits.BITO = I2C_USER_I2C3STAT2_BITO;
			I2C3STAT2bits.CBCLTO = I2C_USER_I2C3STAT2_CBCLTO;
			I2C3STAT2bits.HBCLTO = I2C_USER_I2C3STAT2_HBCLTO;
			I2C3STAT2bits.BSCLTO = I2C_USER_I2C3STAT2_BSCLTO;
			I2C3STAT2bits.EOP = I2C_USER_I2C3STAT2_EOP;
			I2C3STAT2bits.HSBCL = I2C_USER_I2C3STAT2_HSBCL;
			I2C3STAT2bits.HSTACT = I2C_USER_I2C3STAT2_HSTACT;
			I2C3STAT2bits.CLTACT = I2C_USER_I2C3STAT2_CLTACT;
			I2C3STAT2bits.SSPND = I2C_USER_I2C3STAT2_SSPND;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3PECレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3PEC = 
			( I2C_USER_I2C3PEC_RCRC << _I2C3PEC_RCRC_POSITION ) |
			( I2C_USER_I2C3PEC_CCRC << _I2C3PEC_CCRC_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3PECbits.RCRC = I2C_USER_I2C3PEC_RCRC;
			I2C3PECbits.CCRC = I2C_USER_I2C3PEC_CCRC;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3BTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3BTO = 
			( I2C_USER_I2C3BTO_BTOPR << _I2C3BTO_BTOPR_POSITION ) |
			( I2C_USER_I2C3BTO_BTOCLK << _I2C3BTO_BTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3BTObits.BTOPR = I2C_USER_I2C3BTO_BTOPR;
			I2C3BTObits.BTOCLK = I2C_USER_I2C3BTO_BTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3HBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3HBCTO = 
			( I2C_USER_I2C3HBCTO_HBCTOTMR << _I2C3HBCTO_HBCTOTMR_POSITION ) |
			( I2C_USER_I2C3HBCTO_HBCTOCLK << _I2C3HBCTO_HBCTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3HBCTObits.HBCTOTMR = I2C_USER_I2C3HBCTO_HBCTOTMR;
			I2C3HBCTObits.HBCTOCLK = I2C_USER_I2C3HBCTO_HBCTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3CBCTOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3CBCTO = 
			( I2C_USER_I2C3CBCTO_CBCTOTMR << _I2C3CBCTO_CBCTOTMR_POSITION ) |
			( I2C_USER_I2C3CBCTO_CBCTOCLK << _I2C3CBCTO_CBCTOCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3CBCTObits.CBCTOTMR = I2C_USER_I2C3CBCTO_CBCTOTMR;
			I2C3CBCTObits.CBCTOCLK = I2C_USER_I2C3CBCTO_CBCTOCLK;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3BITOレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3BITO = 
			( I2C_USER_I2C3BITO_BITOTMR << _I2C3BITO_BITOTMR_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3BITObits.BITOTMR = I2C_USER_I2C3BITO_BITOTMR;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3SDASUTレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3SDASUT = 
			( I2C_USER_I2C3SDASUT_SDASUT << _I2C3SDASUT_SDASUT_POSITION ) |
			( I2C_USER_I2C3SDASUT_SDASUTEN << _I2C3SDASUT_SDASUTEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3SDASUTbits.SDASUT = I2C_USER_I2C3SDASUT_SDASUT;
			I2C3SDASUTbits.SDASUTEN = I2C_USER_I2C3SDASUT_SDASUTEN;
		#endif 


	/*-----------------------------------------------------------------------*/
	/* I2C3HDLYCレジスタ */
	/*-----------------------------------------------------------------------*/
		I2C3HDLYC = 
			( I2C_USER_I2C3HDLYC_HIDLYC << _I2C3HDLYC_HIDLYC_POSITION ) |
			( I2C_USER_I2C3HDLYC_HIDLYCEN << _I2C3HDLYC_HIDLYCEN_POSITION ) ;
		#ifdef DEF_BITNAME
			I2C3HDLYCbits.HIDLYC = I2C_USER_I2C3HDLYC_HIDLYC;
			I2C3HDLYCbits.HIDLYCEN = I2C_USER_I2C3HDLYC_HIDLYCEN;
		#endif 

#endif	
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_I2C_Set_Register(void) 
* @brief     I2Cレジスタを初期化します 
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_I2C_Set_Register(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    vdg_I2C1_Set_Register();
#endif
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    vdg_I2C2_Set_Register();
#endif
#if ( PMD_I2C3MD == PMD_MODULE_ENABLE )
    vdg_I2C3_Set_Register();
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn			u2g_I2C1_Initiates_StartBit(void) 
* @brief        I2C1のスタートビットを発行します 
* @param
* @return       I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Initiates_StartBit(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_START_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*スタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.SEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.S == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Initiates_ReStartBit(void)
* @brief     I2C1のリスタートビットを発行します
* @param
* @return     I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Initiates_ReStartBit(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_RESTART_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*リスタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.RSEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.S == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Initiates_StopBit(void)
* @brief     I2C1のストップビットを発行します 
* @param
* @return    I2Cコンディション
* @detail
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Initiates_StopBit(void)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_STOP_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*ストップビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.PEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*ストップビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.P == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Write_Byte(_u1 u1a_Data) 
* @brief        I2C1に1Byte送信します 
* @param           u1a_Data：送信データ
* @return         I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Write_Byte(_u1 u1a_Data)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_WRITE_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*データ送信発行*/
    /*----------------------------------------------------------------------------*/
        I2C1TRN = u1a_Data;
    /*----------------------------------------------------------------------------*/
    /*データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.TRSTAT == 1u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*ACKチェック*/
    /*----------------------------------------------------------------------------*/
        if (I2C1STAT1bits.ACKSTAT == 0u)
        {
            return (I2C_DRV_RET_ACK);
        }
        else
        {
            return (I2C_DRV_RET_NACK);
        }
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C1_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK) 
* @brief        I2C1から1Byte受信します 
* @param           u1a_Data：受信データアドレス
* @param           u1a_ACK：受信できた場合のACKビット(0 = ACK , 1 = NACK)
* @return         I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C1_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK)
{
#if ( PMD_I2C1MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*引数チェック*/
    /*----------------------------------------------------------------------------*/
        if (u1a_ACK > 1u){return (I2C_DRV_RET_INVARID_INPUT);}
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_READ_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*データ受信開始*/
    /*----------------------------------------------------------------------------*/
        I2C1CON1bits.RCEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1STAT1bits.RBF == 0u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*ACK発行*/
    /*----------------------------------------------------------------------------*/
#if 0   /* if文で代入した方が早くメモリも少ない？*/
        I2C1CON1bits.ACKDT = u1a_ACK & 0x01u;
        I2C1CON1bits.ACKDT = (u1a_ACK == 0u) ? 0u:1u;
#else
        if (u1a_ACK == 0u)
        {
            I2C1CON1bits.ACKDT = 0u;
        }
        else
        {
            I2C1CON1bits.ACKDT = 1u;
        }
#endif
        I2C1CON1bits.ACKEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C1_Drv.u2l_Timer = I2C_DRV_ACK_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*ACK発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C1CON1bits.ACKEN == 1u)
        {
            if (s_I2C1_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C1_Drv.u2l_Timer --;
            }
        }
        
        *u1pa_Data = I2C1RCV;
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);  
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn			u2g_I2C2_Initiates_StartBit(void) 
* @brief        I2C2のスタートビットを発行します 
* @param
* @return       I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Initiates_StartBit(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_START_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*スタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.SEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.S == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Initiates_ReStartBit(void) 
* @brief        I2C2のリスタートビットを発行します 
* @param
* @return         I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Initiates_ReStartBit(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_RESTART_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*リスタートビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.RSEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*スタートビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.S == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Initiates_StopBit(void)
* @brief     I2C2のストップビットを発行します
* @param
* @return    I2Cコンディション
* @detail
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Initiates_StopBit(void)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_STOP_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*ストップビット発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.PEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*ストップビット発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.P == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Write_Byte(_u1 u1a_Data) 
* @brief     I2C2に1Byte送信します
* @param     u1a_Data：送信データ
* @return    I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Write_Byte(_u1 u1a_Data)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_WRITE_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*データ送信発行*/
    /*----------------------------------------------------------------------------*/
        I2C2TRN = u1a_Data;
    /*----------------------------------------------------------------------------*/
    /*データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.TRSTAT == 1u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*ACKチェック*/
    /*----------------------------------------------------------------------------*/
        if (I2C2STAT1bits.ACKSTAT == 0u)
        {
            return (I2C_DRV_RET_ACK);
        }
        else
        {
            return (I2C_DRV_RET_NACK);
        }
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn        u2g_I2C2_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK) 
* @brief     I2C2から1Byte受信します 
* @param     u1a_Data：受信データアドレス
* @param     u1a_ACK：受信できた場合のACKビット(0 = ACK , 1 = NACK)
* @return    I2Cコンディション
* @detail 
*/
/*----------------------------------------------------------------------------*/
I2C_DRV_RET u2g_I2C2_Read_Byte(_u1 *u1pa_Data,_u1 u1a_ACK)
{
#if ( PMD_I2C2MD == PMD_MODULE_ENABLE )
    /*----------------------------------------------------------------------------*/
    /*引数チェック*/
    /*----------------------------------------------------------------------------*/
        if (u1a_ACK > 1u){return (I2C_DRV_RET_INVARID_INPUT);}
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_READ_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*データ受信開始*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.RCEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*データ送信チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2STAT1bits.RBF == 0u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
    /*----------------------------------------------------------------------------*/
    /*ACK発行*/
    /*----------------------------------------------------------------------------*/
        I2C2CON1bits.ACKDT = u1a_ACK;
        I2C2CON1bits.ACKEN = 1u;
    /*----------------------------------------------------------------------------*/
    /*タイムアウト時間設定*/
    /*----------------------------------------------------------------------------*/
        s_I2C2_Drv.u2l_Timer = I2C_DRV_ACK_TIMEOUT;
    /*----------------------------------------------------------------------------*/
    /*ACK発行チェック*/
    /*----------------------------------------------------------------------------*/
        while(I2C2CON1bits.ACKEN == 1u)
        {
            if (s_I2C2_Drv.u2l_Timer > 0u)
            {
                return (I2C_DRV_RET_TIMEOUT);
            }
            else
            {
                s_I2C2_Drv.u2l_Timer --;
            }
        }
        
        *u1pa_Data = I2C2RCV;
        return (I2C_DRV_RET_OK);
#else
        return (I2C_DRV_RET_MODULE_INVARID);
#endif
}