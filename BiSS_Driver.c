/*----------------------------------------------------------------------------*/
/**
* @file		BiSS_Driver.c
* @brief	BiSSモジュールに関するドライバ関数
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
#include "biss_user.h"
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
* @fn        vdg_BiSS_Set_Register(void)
* @brief     BiSSレジスタの設定をします
* @param
* @return
* @detail     
*/
/*----------------------------------------------------------------------------*/
void vdg_BiSS_Set_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA0Lレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA0L = BiSS_USER_B1SCDATA0L;
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA0Hレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA0H = BiSS_USER_B1SCDATA0H;
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA1Lレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA1L = BiSS_USER_B1SCDATA1L;
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA1Hレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA1H = BiSS_USER_B1SCDATA1H;
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA2Lレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA2L = BiSS_USER_B1SCDATA2L;
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA2Hレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA2H = BiSS_USER_B1SCDATA2H;
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA3Lレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA3L = BiSS_USER_B1SCDATA3L;
	/*-----------------------------------------------------------------------*/
	/* B1SCDATA3Hレジスタ */
	/*-----------------------------------------------------------------------*/
		B1SCDATA3H = BiSS_USER_B1SCDATA3H;
	/*-----------------------------------------------------------------------*/
	/* B1IDS0レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS0 = BiSS_USER_B1IDS0;
	/*-----------------------------------------------------------------------*/
	/* B1RDATA0レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA0 = 
			( BiSS_USER_B1RDATA0_RDATA0 << _B1RDATA0_RDATA0_POSITION ) |
			( BiSS_USER_B1RDATA0_RDATA1 << _B1RDATA0_RDATA1_POSITION ) |
			( BiSS_USER_B1RDATA0_RDATA2 << _B1RDATA0_RDATA2_POSITION ) |
			( BiSS_USER_B1RDATA0_RDATA3 << _B1RDATA0_RDATA3_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA0bits.RDATA0 = BiSS_USER_B1RDATA0_RDATA0;
			B1RDATA0bits.RDATA1 = BiSS_USER_B1RDATA0_RDATA1;
			B1RDATA0bits.RDATA2 = BiSS_USER_B1RDATA0_RDATA2;
			B1RDATA0bits.RDATA3 = BiSS_USER_B1RDATA0_RDATA3;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1IDS1レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS1 = BiSS_USER_B1IDS1;
	/*-----------------------------------------------------------------------*/
	/* B1RDATA1レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA1 = 
			( BiSS_USER_B1RDATA1_RDATA4 << _B1RDATA1_RDATA4_POSITION ) |
			( BiSS_USER_B1RDATA1_RDATA5 << _B1RDATA1_RDATA5_POSITION ) |
			( BiSS_USER_B1RDATA1_RDATA6 << _B1RDATA1_RDATA6_POSITION ) |
			( BiSS_USER_B1RDATA1_RDATA7 << _B1RDATA1_RDATA7_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA1bits.RDATA4 = BiSS_USER_B1RDATA1_RDATA4;
			B1RDATA1bits.RDATA5 = BiSS_USER_B1RDATA1_RDATA5;
			B1RDATA1bits.RDATA6 = BiSS_USER_B1RDATA1_RDATA6;
			B1RDATA1bits.RDATA7 = BiSS_USER_B1RDATA1_RDATA7;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1IDS2レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS2 = BiSS_USER_B1IDS2;
	/*-----------------------------------------------------------------------*/
	/* B1RDATA2レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA2 = 
			( BiSS_USER_B1RDATA2_RDATA8 << _B1RDATA2_RDATA8_POSITION ) |
			( BiSS_USER_B1RDATA2_RDATA9 << _B1RDATA2_RDATA9_POSITION ) |
			( BiSS_USER_B1RDATA2_RDATA10 << _B1RDATA2_RDATA10_POSITION ) |
			( BiSS_USER_B1RDATA2_RDATA11 << _B1RDATA2_RDATA11_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA2bits.RDATA8 = BiSS_USER_B1RDATA2_RDATA8;
			B1RDATA2bits.RDATA9 = BiSS_USER_B1RDATA2_RDATA9;
			B1RDATA2bits.RDATA10 = BiSS_USER_B1RDATA2_RDATA10;
			B1RDATA2bits.RDATA11 = BiSS_USER_B1RDATA2_RDATA11;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1IDS3レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS3 =  BiSS_USER_B1IDS3;


	/*-----------------------------------------------------------------------*/
	/* B1RDATA3レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA3 = 
			( BiSS_USER_B1RDATA3_RDATA12 << _B1RDATA3_RDATA12_POSITION ) |
			( BiSS_USER_B1RDATA3_RDATA13 << _B1RDATA3_RDATA13_POSITION ) |
			( BiSS_USER_B1RDATA3_RDATA14 << _B1RDATA3_RDATA14_POSITION ) |
			( BiSS_USER_B1RDATA3_RDATA15 << _B1RDATA3_RDATA15_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA3bits.RDATA12 = BiSS_USER_B1RDATA3_RDATA12;
			B1RDATA3bits.RDATA13 = BiSS_USER_B1RDATA3_RDATA13;
			B1RDATA3bits.RDATA14 = BiSS_USER_B1RDATA3_RDATA14;
			B1RDATA3bits.RDATA15 = BiSS_USER_B1RDATA3_RDATA15;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1IDS4レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS4 = BiSS_USER_B1IDS4;
	/*-----------------------------------------------------------------------*/
	/* B1RDATA4レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA4 = 
			( BiSS_USER_B1RDATA4_RDATA16 << _B1RDATA4_RDATA16_POSITION ) |
			( BiSS_USER_B1RDATA4_RDATA17 << _B1RDATA4_RDATA17_POSITION ) |
			( BiSS_USER_B1RDATA4_RDATA18 << _B1RDATA4_RDATA18_POSITION ) |
			( BiSS_USER_B1RDATA4_RDATA19 << _B1RDATA4_RDATA19_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA4bits.RDATA16 = BiSS_USER_B1RDATA4_RDATA16;
			B1RDATA4bits.RDATA17 = BiSS_USER_B1RDATA4_RDATA17;
			B1RDATA4bits.RDATA18 = BiSS_USER_B1RDATA4_RDATA18;
			B1RDATA4bits.RDATA19 = BiSS_USER_B1RDATA4_RDATA19;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1IDS5レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS5 = BiSS_USER_B1IDS5;
	/*-----------------------------------------------------------------------*/
	/* B1RDATA5レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA5 = 
			( BiSS_USER_B1RDATA5_RDATA20 << _B1RDATA5_RDATA20_POSITION ) |
			( BiSS_USER_B1RDATA5_RDATA21 << _B1RDATA5_RDATA21_POSITION ) |
			( BiSS_USER_B1RDATA5_RDATA22 << _B1RDATA5_RDATA22_POSITION ) |
			( BiSS_USER_B1RDATA5_RDATA23 << _B1RDATA5_RDATA23_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA5bits.RDATA20 = BiSS_USER_B1RDATA5_RDATA20;
			B1RDATA5bits.RDATA21 = BiSS_USER_B1RDATA5_RDATA21;
			B1RDATA5bits.RDATA22 = BiSS_USER_B1RDATA5_RDATA22;
			B1RDATA5bits.RDATA23 = BiSS_USER_B1RDATA5_RDATA23;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1IDS6レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS6 = BiSS_USER_B1IDS6;
	/*-----------------------------------------------------------------------*/
	/* B1RDATA6レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA6 = 
			( BiSS_USER_B1RDATA6_RDATA24 << _B1RDATA6_RDATA24_POSITION ) |
			( BiSS_USER_B1RDATA6_RDATA25 << _B1RDATA6_RDATA25_POSITION ) |
			( BiSS_USER_B1RDATA6_RDATA26 << _B1RDATA6_RDATA26_POSITION ) |
			( BiSS_USER_B1RDATA6_RDATA27 << _B1RDATA6_RDATA27_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA6bits.RDATA24 = BiSS_USER_B1RDATA6_RDATA24;
			B1RDATA6bits.RDATA25 = BiSS_USER_B1RDATA6_RDATA25;
			B1RDATA6bits.RDATA26 = BiSS_USER_B1RDATA6_RDATA26;
			B1RDATA6bits.RDATA27 = BiSS_USER_B1RDATA6_RDATA27;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1IDS7レジスタ */
	/*-----------------------------------------------------------------------*/
		B1IDS7 =  BiSS_USER_B1IDS7;
	/*-----------------------------------------------------------------------*/
	/* B1RDATA7レジスタ */
	/*-----------------------------------------------------------------------*/
		B1RDATA7 = 
			( BiSS_USER_B1RDATA7_RDATA28 << _B1RDATA7_RDATA28_POSITION ) |
			( BiSS_USER_B1RDATA7_RDATA29 << _B1RDATA7_RDATA29_POSITION ) |
			( BiSS_USER_B1RDATA7_RDATA30 << _B1RDATA7_RDATA30_POSITION ) |
			( BiSS_USER_B1RDATA7_RDATA31 << _B1RDATA7_RDATA31_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RDATA7bits.RDATA28 = BiSS_USER_B1RDATA7_RDATA28;
			B1RDATA7bits.RDATA29 = BiSS_USER_B1RDATA7_RDATA29;
			B1RDATA7bits.RDATA30 = BiSS_USER_B1RDATA7_RDATA30;
			B1RDATA7bits.RDATA31 = BiSS_USER_B1RDATA7_RDATA31;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CLTCON0レジスタ */
	/*-----------------------------------------------------------------------*/
		B1CLTCON0 = 
			( BiSS_USER_B1CLTCON0_SCDLEN0 << _B1CLTCON0_SCDLEN0_POSITION ) |
			( BiSS_USER_B1CLTCON0_SCDEN0 << _B1CLTCON0_SCDEN0_POSITION ) |
			( BiSS_USER_B1CLTCON0_GRAY0LSTOP0 << _B1CLTCON0_GRAY0LSTOP0_POSITION ) |
			( BiSS_USER_B1CLTCON0_CRCLEN0CRCPOLY0 << _B1CLTCON0_CRCLEN0CRCPOLY0_POSITION ) |
			( BiSS_USER_B1CLTCON0_CRCSEL0 << _B1CLTCON0_CRCSEL0_POSITION ) |
			( BiSS_USER_B1CLTCON0_CRCSEED0 << _B1CLTCON0_CRCSEED0_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CLTCON0bits.SCDLEN0 = BiSS_USER_B1CLTCON0_SCDLEN0;
			B1CLTCON0bits.SCDEN0 = BiSS_USER_B1CLTCON0_SCDEN0;
			B1CLTCON0bits.GRAY0LSTOP0 = BiSS_USER_B1CLTCON0_GRAY0LSTOP0;
			B1CLTCON0bits.CRCLEN0CRCPOLY0 = BiSS_USER_B1CLTCON0_CRCLEN0CRCPOLY0;
			B1CLTCON0bits.CRCSEL0 = BiSS_USER_B1CLTCON0_CRCSEL0;
			B1CLTCON0bits.CRCSEED0 = BiSS_USER_B1CLTCON0_CRCSEED0;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CLTCON1レジスタ */
	/*-----------------------------------------------------------------------*/
		B1CLTCON1 = 
			( BiSS_USER_B1CLTCON1_SCDLEN1 << _B1CLTCON1_SCDLEN1_POSITION ) |
			( BiSS_USER_B1CLTCON1_SCDEN1 << _B1CLTCON1_SCDEN1_POSITION ) |
			( BiSS_USER_B1CLTCON1_GRAY1LSTOP1 << _B1CLTCON1_GRAY1LSTOP1_POSITION ) |
			( BiSS_USER_B1CLTCON1_CRCLEN1CRCPOLY1 << _B1CLTCON1_CRCLEN1CRCPOLY1_POSITION ) |
			( BiSS_USER_B1CLTCON1_CRCSEL1 << _B1CLTCON1_CRCSEL1_POSITION ) |
			( BiSS_USER_B1CLTCON1_CRCSEED1 << _B1CLTCON1_CRCSEED1_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CLTCON1bits.SCDLEN1 = BiSS_USER_B1CLTCON1_SCDLEN1;
			B1CLTCON1bits.SCDEN1 = BiSS_USER_B1CLTCON1_SCDEN1;
			B1CLTCON1bits.GRAY1LSTOP1 = BiSS_USER_B1CLTCON1_GRAY1LSTOP1;
			B1CLTCON1bits.CRCLEN1CRCPOLY1 = BiSS_USER_B1CLTCON1_CRCLEN1CRCPOLY1;
			B1CLTCON1bits.CRCSEL1 = BiSS_USER_B1CLTCON1_CRCSEL1;
			B1CLTCON1bits.CRCSEED1 = BiSS_USER_B1CLTCON1_CRCSEED1;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CLTCON2レジスタ */
	/*-----------------------------------------------------------------------*/
		B1CLTCON2 = 
			( BiSS_USER_B1CLTCON2_SCDLEN2 << _B1CLTCON2_SCDLEN2_POSITION ) |
			( BiSS_USER_B1CLTCON2_SCDEN2 << _B1CLTCON2_SCDEN2_POSITION ) |
			( BiSS_USER_B1CLTCON2_GRAY2LSTOP2 << _B1CLTCON2_GRAY2LSTOP2_POSITION ) |
			( BiSS_USER_B1CLTCON2_CRCLEN2CRCPOLY2 << _B1CLTCON2_CRCLEN2CRCPOLY2_POSITION ) |
			( BiSS_USER_B1CLTCON2_CRCSEL2 << _B1CLTCON2_CRCSEL2_POSITION ) |
			( BiSS_USER_B1CLTCON2_CRCSEED2 << _B1CLTCON2_CRCSEED2_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CLTCON2bits.SCDLEN2 = BiSS_USER_B1CLTCON2_SCDLEN2;
			B1CLTCON2bits.SCDEN2 = BiSS_USER_B1CLTCON2_SCDEN2;
			B1CLTCON2bits.GRAY2LSTOP2 = BiSS_USER_B1CLTCON2_GRAY2LSTOP2;
			B1CLTCON2bits.CRCLEN2CRCPOLY2 = BiSS_USER_B1CLTCON2_CRCLEN2CRCPOLY2;
			B1CLTCON2bits.CRCSEL2 = BiSS_USER_B1CLTCON2_CRCSEL2;
			B1CLTCON2bits.CRCSEED2 = BiSS_USER_B1CLTCON2_CRCSEED2;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CLTCON3レジスタ */
	/*-----------------------------------------------------------------------*/
		B1CLTCON3 = 
			( BiSS_USER_B1CLTCON3_SCDLEN3 << _B1CLTCON3_SCDLEN3_POSITION ) |
			( BiSS_USER_B1CLTCON3_SCDEN3 << _B1CLTCON3_SCDEN3_POSITION ) |
			( BiSS_USER_B1CLTCON3_GRAY3LSTOP3 << _B1CLTCON3_GRAY3LSTOP3_POSITION ) |
			( BiSS_USER_B1CLTCON3_CRCLEN3CRCPOLY3 << _B1CLTCON3_CRCLEN3CRCPOLY3_POSITION ) |
			( BiSS_USER_B1CLTCON3_CRCSEL3 << _B1CLTCON3_CRCSEL3_POSITION ) |
			( BiSS_USER_B1CLTCON3_CRCSEED3 << _B1CLTCON3_CRCSEED3_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CLTCON3bits.SCDLEN3 = BiSS_USER_B1CLTCON3_SCDLEN3;
			B1CLTCON3bits.SCDEN3 = BiSS_USER_B1CLTCON3_SCDEN3;
			B1CLTCON3bits.GRAY3LSTOP3 = BiSS_USER_B1CLTCON3_GRAY3LSTOP3;
			B1CLTCON3bits.CRCLEN3CRCPOLY3 = BiSS_USER_B1CLTCON3_CRCLEN3CRCPOLY3;
			B1CLTCON3bits.CRCSEL3 = BiSS_USER_B1CLTCON3_CRCSEL3;
			B1CLTCON3bits.CRCSEED3 = BiSS_USER_B1CLTCON3_CRCSEED3;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1RCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		B1RCCON = 
			( BiSS_USER_B1RCCON_STRTADDR << _B1RCCON_STRTADDR_POSITION ) |
			( BiSS_USER_B1RCCON_WNR << _B1RCCON_WNR_POSITION ) |
			( BiSS_USER_B1RCCON_REGNUM << _B1RCCON_REGNUM_POSITION ) ;
		#ifdef DEF_BITNAME
			B1RCCONbits.STRTADDR = BiSS_USER_B1RCCON_STRTADDR;
			B1RCCONbits.WNR = BiSS_USER_B1RCCON_WNR;
			B1RCCONbits.REGNUM = BiSS_USER_B1RCCON_REGNUM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CTRLCONレジスタ */
	/*-----------------------------------------------------------------------*/
		B1CTRLCON = 
			( BiSS_USER_B1CTRLCON_CHSEL << _B1CTRLCON_CHSEL_POSITION ) |
			( BiSS_USER_B1CTRLCON_HOLDCDM << _B1CTRLCON_HOLDCDM_POSITION ) |
			( BiSS_USER_B1CTRLCON_MOEN << _B1CTRLCON_MOEN_POSITION ) |
			( BiSS_USER_B1CTRLCON_IDADISCLNTID0 << _B1CTRLCON_IDADISCLNTID0_POSITION ) |
			( BiSS_USER_B1CTRLCON_CMDCLNTID21 << _B1CTRLCON_CMDCLNTID21_POSITION ) |
			( BiSS_USER_B1CTRLCON_PROTOSEL << _B1CTRLCON_PROTOSEL_POSITION ) |
			( BiSS_USER_B1CTRLCON_CTS << _B1CTRLCON_CTS_POSITION ) |
			( BiSS_USER_B1CTRLCON_SFREQ << _B1CTRLCON_SFREQ_POSITION ) |
			( BiSS_USER_B1CTRLCON_RFREQ << _B1CTRLCON_RFREQ_POSITION ) |
			( BiSS_USER_B1CTRLCON_BANKSWEN << _B1CTRLCON_BANKSWEN_POSITION ) |
			( BiSS_USER_B1CTRLCON_NOCRC << _B1CTRLCON_NOCRC_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CTRLCONbits.CHSEL = BiSS_USER_B1CTRLCON_CHSEL;
			B1CTRLCONbits.HOLDCDM = BiSS_USER_B1CTRLCON_HOLDCDM;
			B1CTRLCONbits.MOEN = BiSS_USER_B1CTRLCON_MOEN;
			B1CTRLCONbits.IDADISCLNTID0 = BiSS_USER_B1CTRLCON_IDADISCLNTID0;
			B1CTRLCONbits.CMDCLNTID21 = BiSS_USER_B1CTRLCON_CMDCLNTID21;
			B1CTRLCONbits.PROTOSEL = BiSS_USER_B1CTRLCON_PROTOSEL;
			B1CTRLCONbits.CTS = BiSS_USER_B1CTRLCON_CTS;
			B1CTRLCONbits.SFREQ = BiSS_USER_B1CTRLCON_SFREQ;
			B1CTRLCONbits.RFREQ = BiSS_USER_B1CTRLCON_RFREQ;
			B1CTRLCONbits.BANKSWEN = BiSS_USER_B1CTRLCON_BANKSWEN;
			B1CTRLCONbits.NOCRC = BiSS_USER_B1CTRLCON_NOCRC;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CCONレジスタ */
	/*-----------------------------------------------------------------------*/
		B1CCON = 
			( BiSS_USER_B1CCON_FREQAGS << _B1CCON_FREQAGS_POSITION ) |
			( BiSS_USER_B1CCON_MODELAY << _B1CCON_MODELAY_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CCONbits.FREQAGS = BiSS_USER_B1CCON_FREQAGS;
			B1CCONbits.MODELAY = BiSS_USER_B1CCON_MODELAY;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CHCONレジスタ */
	/*-----------------------------------------------------------------------*/
		B1CHCON = 
			( BiSS_USER_B1CHCON_CLNTLOC1 << _B1CHCON_CLNTLOC1_POSITION ) |
			( BiSS_USER_B1CHCON_CLNTLOC2 << _B1CHCON_CLNTLOC2_POSITION ) |
			( BiSS_USER_B1CHCON_CLNTLOC3 << _B1CHCON_CLNTLOC3_POSITION ) |
			( BiSS_USER_B1CHCON_CLNTLOC4 << _B1CHCON_CLNTLOC4_POSITION ) |
			( BiSS_USER_B1CHCON_CLNTLOC5 << _B1CHCON_CLNTLOC5_POSITION ) |
			( BiSS_USER_B1CHCON_CLNTLOC6 << _B1CHCON_CLNTLOC6_POSITION ) |
			( BiSS_USER_B1CHCON_CLNTLOC7 << _B1CHCON_CLNTLOC7_POSITION ) |
			( BiSS_USER_B1CHCON_CLCHCFG0 << _B1CHCON_CLCHCFG0_POSITION ) |
			( BiSS_USER_B1CHCON_ACTSEN << _B1CHCON_ACTSEN_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CHCONbits.CLNTLOC1 = BiSS_USER_B1CHCON_CLNTLOC1;
			B1CHCONbits.CLNTLOC2 = BiSS_USER_B1CHCON_CLNTLOC2;
			B1CHCONbits.CLNTLOC3 = BiSS_USER_B1CHCON_CLNTLOC3;
			B1CHCONbits.CLNTLOC4 = BiSS_USER_B1CHCON_CLNTLOC4;
			B1CHCONbits.CLNTLOC5 = BiSS_USER_B1CHCON_CLNTLOC5;
			B1CHCONbits.CLNTLOC6 = BiSS_USER_B1CHCON_CLNTLOC6;
			B1CHCONbits.CLNTLOC7 = BiSS_USER_B1CHCON_CLNTLOC7;
			B1CHCONbits.CLCHCFG0 = BiSS_USER_B1CHCON_CLCHCFG0;
			B1CHCONbits.ACTSEN = BiSS_USER_B1CHCON_ACTSEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		B1STAT = 
			( BiSS_USER_B1STAT_EOT << _B1STAT_EOT_POSITION ) |
			( BiSS_USER_B1STAT_REGEND << _B1STAT_REGEND_POSITION ) |
			( BiSS_USER_B1STAT_REGERR << _B1STAT_REGERR_POSITION ) |
			( BiSS_USER_B1STAT_SCDTXERR << _B1STAT_SCDTXERR_POSITION ) |
			( BiSS_USER_B1STAT_DLYERR << _B1STAT_DLYERR_POSITION ) |
			( BiSS_USER_B1STAT_AGSERR << _B1STAT_AGSERR_POSITION ) |
			( BiSS_USER_B1STAT_ERR << _B1STAT_ERR_POSITION ) |
			( BiSS_USER_B1STAT_CLSCDV0 << _B1STAT_CLSCDV0_POSITION ) |
			( BiSS_USER_B1STAT_CLSCDV1 << _B1STAT_CLSCDV1_POSITION ) |
			( BiSS_USER_B1STAT_CLSCDV2 << _B1STAT_CLSCDV2_POSITION ) |
			( BiSS_USER_B1STAT_CLSCDV3 << _B1STAT_CLSCDV3_POSITION ) |
			( BiSS_USER_B1STAT_REGBYTESV << _B1STAT_REGBYTESV_POSITION ) |
			( BiSS_USER_B1STAT_CDSSEL << _B1STAT_CDSSEL_POSITION ) |
			( BiSS_USER_B1STAT_CDMTO << _B1STAT_CDMTO_POSITION ) ;
		#ifdef DEF_BITNAME
			B1STATbits.EOT = BiSS_USER_B1STAT_EOT;
			B1STATbits.REGEND = BiSS_USER_B1STAT_REGEND;
			B1STATbits.REGERR = BiSS_USER_B1STAT_REGERR;
			B1STATbits.SCDTXERR = BiSS_USER_B1STAT_SCDTXERR;
			B1STATbits.DLYERR = BiSS_USER_B1STAT_DLYERR;
			B1STATbits.AGSERR = BiSS_USER_B1STAT_AGSERR;
			B1STATbits.ERR = BiSS_USER_B1STAT_ERR;
			B1STATbits.CLSCDV0 = BiSS_USER_B1STAT_CLSCDV0;
			B1STATbits.CLSCDV1 = BiSS_USER_B1STAT_CLSCDV1;
			B1STATbits.CLSCDV2 = BiSS_USER_B1STAT_CLSCDV2;
			B1STATbits.CLSCDV3 = BiSS_USER_B1STAT_CLSCDV3;
			B1STATbits.REGBYTESV = BiSS_USER_B1STAT_REGBYTESV;
			B1STATbits.CDSSEL = BiSS_USER_B1STAT_CDSSEL;
			B1STATbits.CDMTO = BiSS_USER_B1STAT_CDMTO;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1INSTRレジスタ */
	/*-----------------------------------------------------------------------*/
		B1INSTR = 
			( BiSS_USER_B1INSTR_AGS << _B1INSTR_AGS_POSITION ) |
			( BiSS_USER_B1INSTR_INSTR << _B1INSTR_INSTR_POSITION ) |
			( BiSS_USER_B1INSTR_INIT << _B1INSTR_INIT_POSITION ) |
			( BiSS_USER_B1INSTR_SWBANK << _B1INSTR_SWBANK_POSITION ) |
			( BiSS_USER_B1INSTR_BNKLOCK << _B1INSTR_BNKLOCK_POSITION ) |
			( BiSS_USER_B1INSTR_BREAK << _B1INSTR_BREAK_POSITION ) ;
		#ifdef DEF_BITNAME
			B1INSTRbits.AGS = BiSS_USER_B1INSTR_AGS;
			B1INSTRbits.INSTR = BiSS_USER_B1INSTR_INSTR;
			B1INSTRbits.INIT = BiSS_USER_B1INSTR_INIT;
			B1INSTRbits.SWBANK = BiSS_USER_B1INSTR_SWBANK;
			B1INSTRbits.BNKLOCK = BiSS_USER_B1INSTR_BNKLOCK;
			B1INSTRbits.BREAK = BiSS_USER_B1INSTR_BREAK;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CHSTATレジスタ */
	/*-----------------------------------------------------------------------*/
		B1CHSTAT = 
			( BiSS_USER_B1CHSTAT_SL0 << _B1CHSTAT_SL0_POSITION ) |
			( BiSS_USER_B1CHSTAT_CDS0 << _B1CHSTAT_CDS0_POSITION ) |
			( BiSS_USER_B1CHSTAT_BKSWERR << _B1CHSTAT_BKSWERR_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CHSTATbits.SL0 = BiSS_USER_B1CHSTAT_SL0;
			B1CHSTATbits.CDS0 = BiSS_USER_B1CHSTAT_CDS0;
			B1CHSTATbits.BKSWERR = BiSS_USER_B1CHSTAT_BKSWERR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* B1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		B1CON = 
			( BiSS_USER_B1CON_CLKSEL << _B1CON_CLKSEL_POSITION ) |
			( BiSS_USER_B1CON_ACTIVE << _B1CON_ACTIVE_POSITION ) |
			( BiSS_USER_B1CON_BNKNUM << _B1CON_BNKNUM_POSITION ) |
			( BiSS_USER_B1CON_REGACC << _B1CON_REGACC_POSITION ) |
			( BiSS_USER_B1CON_DISMO << _B1CON_DISMO_POSITION ) |
			( BiSS_USER_B1CON_DISMA << _B1CON_DISMA_POSITION ) |
			( BiSS_USER_B1CON_GETSENSE << _B1CON_GETSENSE_POSITION ) |
			( BiSS_USER_B1CON_SENSESEL << _B1CON_SENSESEL_POSITION ) |
			( BiSS_USER_B1CON_CDS << _B1CON_CDS_POSITION ) |
			( BiSS_USER_B1CON_CDM << _B1CON_CDM_POSITION ) |
			( BiSS_USER_B1CON_SIDL << _B1CON_SIDL_POSITION ) |
			( BiSS_USER_B1CON_SLPEN << _B1CON_SLPEN_POSITION ) |
			( BiSS_USER_B1CON_ON << _B1CON_ON_POSITION ) |
			( BiSS_USER_B1CON_CLKDIV << _B1CON_CLKDIV_POSITION ) |
			( BiSS_USER_B1CON_REGRST << _B1CON_REGRST_POSITION ) |
			( BiSS_USER_B1CON_SCDRST << _B1CON_SCDRST_POSITION ) |
			( BiSS_USER_B1CON_TXRDEN << _B1CON_TXRDEN_POSITION ) |
			( BiSS_USER_B1CON_REGAE << _B1CON_REGAE_POSITION ) |
			( BiSS_USER_B1CON_INSTRWE << _B1CON_INSTRWE_POSITION ) |
			( BiSS_USER_B1CON_INSTRWA << _B1CON_INSTRWA_POSITION ) ;
		#ifdef DEF_BITNAME
			B1CONbits.CLKSEL = BiSS_USER_B1CON_CLKSEL;
			B1CONbits.ACTIVE = BiSS_USER_B1CON_ACTIVE;
			B1CONbits.BNKNUM = BiSS_USER_B1CON_BNKNUM;
			B1CONbits.REGACC = BiSS_USER_B1CON_REGACC;
			B1CONbits.DISMO = BiSS_USER_B1CON_DISMO;
			B1CONbits.DISMA = BiSS_USER_B1CON_DISMA;
			B1CONbits.GETSENSE = BiSS_USER_B1CON_GETSENSE;
			B1CONbits.SENSESEL = BiSS_USER_B1CON_SENSESEL;
			B1CONbits.CDS = BiSS_USER_B1CON_CDS;
			B1CONbits.CDM = BiSS_USER_B1CON_CDM;
			B1CONbits.SIDL = BiSS_USER_B1CON_SIDL;
			B1CONbits.SLPEN = BiSS_USER_B1CON_SLPEN;
			B1CONbits.ON = BiSS_USER_B1CON_ON;
			B1CONbits.CLKDIV = BiSS_USER_B1CON_CLKDIV;
			B1CONbits.REGRST = BiSS_USER_B1CON_REGRST;
			B1CONbits.SCDRST = BiSS_USER_B1CON_SCDRST;
			B1CONbits.TXRDEN = BiSS_USER_B1CON_TXRDEN;
			B1CONbits.REGAE = BiSS_USER_B1CON_REGAE;
			B1CONbits.INSTRWE = BiSS_USER_B1CON_INSTRWE;
			B1CONbits.INSTRWA = BiSS_USER_B1CON_INSTRWA;
		#endif 
}		

