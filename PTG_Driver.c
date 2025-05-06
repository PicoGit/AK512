/*----------------------------------------------------------------------------*/
/**
* @file		PTG_Driver.c
* @brief	Peripheral Trigger Generatorに関するドライバ関数
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
#include "ptg_user.h"
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
* @fn           vdg_PTG_Set_Register(void)
* @brief        PTGレジスタを初期化します 
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_PTG_Set_Register(void)
{
#if ( PMD_PTGMD == PMD_MODULE_ENABLE )
	/*-----------------------------------------------------------------------*/
	/* PTGCONレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGCON = 
			( PTG_USER_PTGCON_PTGITM << _PTGCON_PTGITM_POSITION ) |
			( PTG_USER_PTGCON_PTGBUSY << _PTGCON_PTGBUSY_POSITION ) |
			( PTG_USER_PTGCON_PTGWDTO << _PTGCON_PTGWDTO_POSITION ) |
			( PTG_USER_PTGCON_PTGSTRT << _PTGCON_PTGSTRT_POSITION ) |
			( PTG_USER_PTGCON_PTGIVIS << _PTGCON_PTGIVIS_POSITION ) |
			( PTG_USER_PTGCON_PTGSSEN << _PTGCON_PTGSSEN_POSITION ) |
			( PTG_USER_PTGCON_PTGSWT << _PTGCON_PTGSWT_POSITION ) |
			( PTG_USER_PTGCON_PTGTOGL << _PTGCON_PTGTOGL_POSITION ) |
			( PTG_USER_PTGCON_SIDL << _PTGCON_SIDL_POSITION ) |
			( PTG_USER_PTGCON_ON << _PTGCON_ON_POSITION ) |
			( PTG_USER_PTGCON_PTGWDT << _PTGCON_PTGWDT_POSITION ) |
			( PTG_USER_PTGCON_PTGPWD << _PTGCON_PTGPWD_POSITION ) |
			( PTG_USER_PTGCON_PTGDIV << _PTGCON_PTGDIV_POSITION ) |
			( PTG_USER_PTGCON_PTGCLK << _PTGCON_PTGCLK_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGCONbits.PTGITM = PTG_USER_PTGCON_PTGITM;
			PTGCONbits.PTGBUSY = PTG_USER_PTGCON_PTGBUSY;
			PTGCONbits.PTGWDTO = PTG_USER_PTGCON_PTGWDTO;
			PTGCONbits.PTGSTRT = PTG_USER_PTGCON_PTGSTRT;
			PTGCONbits.PTGIVIS = PTG_USER_PTGCON_PTGIVIS;
			PTGCONbits.PTGSSEN = PTG_USER_PTGCON_PTGSSEN;
			PTGCONbits.PTGSWT = PTG_USER_PTGCON_PTGSWT;
			PTGCONbits.PTGTOGL = PTG_USER_PTGCON_PTGTOGL;
			PTGCONbits.SIDL = PTG_USER_PTGCON_SIDL;
			PTGCONbits.ON = PTG_USER_PTGCON_ON;
			PTGCONbits.PTGWDT = PTG_USER_PTGCON_PTGWDT;
			PTGCONbits.PTGPWD = PTG_USER_PTGCON_PTGPWD;
			PTGCONbits.PTGDIV = PTG_USER_PTGCON_PTGDIV;
			PTGCONbits.PTGCLK = PTG_USER_PTGCON_PTGCLK;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGBTEレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGBTE = PTG_USER_PTGBTE;
	/*-----------------------------------------------------------------------*/
	/* PTGHOLDレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGHOLD =  PTG_USER_PTGHOLD;
	/*-----------------------------------------------------------------------*/
	/* PTGT0LIMレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGT0LIM =  PTG_USER_PTGT0LIM;
	/*-----------------------------------------------------------------------*/
	/* PTGT1LIMレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGT1LIM =  PTG_USER_PTGT1LIM;
	/*-----------------------------------------------------------------------*/
	/* PTGSDLIMレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGSDLIM = PTG_USER_PTGSDLIM;
	/*-----------------------------------------------------------------------*/
	/* PTGC0LIMレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGC0LIM = PTG_USER_PTGC0LIM;
	/*-----------------------------------------------------------------------*/
	/* PTGC1LIMレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGC1LIM = PTG_USER_PTGC1LIM;
	/*-----------------------------------------------------------------------*/
	/* PTGADJレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGADJ =  PTG_USER_PTGADJ;
	/*-----------------------------------------------------------------------*/
	/* PTGL0レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGL0 =  PTG_USER_PTGL0;
	/*-----------------------------------------------------------------------*/
	/* PTGQPTRレジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQPTR = PTG_USER_PTGQPTR;
	/*-----------------------------------------------------------------------*/
	/* PTGQUE0レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE0 = 
			( PTG_USER_PTGQUE0_STEP0 << _PTGQUE0_STEP0_POSITION ) |
			( PTG_USER_PTGQUE0_STEP1 << _PTGQUE0_STEP1_POSITION ) |
			( PTG_USER_PTGQUE0_STEP2 << _PTGQUE0_STEP2_POSITION ) |
			( PTG_USER_PTGQUE0_STEP3 << _PTGQUE0_STEP3_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGQUE0bits.STEP0 = PTG_USER_PTGQUE0_STEP0;
			PTGQUE0bits.STEP1 = PTG_USER_PTGQUE0_STEP1;
			PTGQUE0bits.STEP2 = PTG_USER_PTGQUE0_STEP2;
			PTGQUE0bits.STEP3 = PTG_USER_PTGQUE0_STEP3;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGQUE1レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE1 = 
			( PTG_USER_PTGQUE1_STEP4 << _PTGQUE1_STEP4_POSITION ) |
			( PTG_USER_PTGQUE1_STEP5 << _PTGQUE1_STEP5_POSITION ) |
			( PTG_USER_PTGQUE1_STEP6 << _PTGQUE1_STEP6_POSITION ) |
			( PTG_USER_PTGQUE1_STEP7 << _PTGQUE1_STEP7_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGQUE1bits.STEP4 = PTG_USER_PTGQUE1_STEP4;
			PTGQUE1bits.STEP5 = PTG_USER_PTGQUE1_STEP5;
			PTGQUE1bits.STEP6 = PTG_USER_PTGQUE1_STEP6;
			PTGQUE1bits.STEP7 = PTG_USER_PTGQUE1_STEP7;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGQUE2レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE2 = 
			( PTG_USER_PTGQUE2_STEP8 << _PTGQUE2_STEP8_POSITION ) |
			( PTG_USER_PTGQUE2_STEP9 << _PTGQUE2_STEP9_POSITION ) |
			( PTG_USER_PTGQUE2_STEP10 << _PTGQUE2_STEP10_POSITION ) |
			( PTG_USER_PTGQUE2_STEP11 << _PTGQUE2_STEP11_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGQUE2bits.STEP8 = PTG_USER_PTGQUE2_STEP8;
			PTGQUE2bits.STEP9 = PTG_USER_PTGQUE2_STEP9;
			PTGQUE2bits.STEP10 = PTG_USER_PTGQUE2_STEP10;
			PTGQUE2bits.STEP11 = PTG_USER_PTGQUE2_STEP11;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGQUE3レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE3 = 
			( PTG_USER_PTGQUE3_STEP12 << _PTGQUE3_STEP12_POSITION ) |
			( PTG_USER_PTGQUE3_STEP13 << _PTGQUE3_STEP13_POSITION ) |
			( PTG_USER_PTGQUE3_STEP14 << _PTGQUE3_STEP14_POSITION ) |
			( PTG_USER_PTGQUE3_STEP15 << _PTGQUE3_STEP15_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGQUE3bits.STEP12 = PTG_USER_PTGQUE3_STEP12;
			PTGQUE3bits.STEP13 = PTG_USER_PTGQUE3_STEP13;
			PTGQUE3bits.STEP14 = PTG_USER_PTGQUE3_STEP14;
			PTGQUE3bits.STEP15 = PTG_USER_PTGQUE3_STEP15;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGQUE4レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE4 = 
			( PTG_USER_PTGQUE4_STEP16 << _PTGQUE4_STEP16_POSITION ) |
			( PTG_USER_PTGQUE4_STEP17 << _PTGQUE4_STEP17_POSITION ) |
			( PTG_USER_PTGQUE4_STEP18 << _PTGQUE4_STEP18_POSITION ) |
			( PTG_USER_PTGQUE4_STEP19 << _PTGQUE4_STEP19_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGQUE4bits.STEP16 = PTG_USER_PTGQUE4_STEP16;
			PTGQUE4bits.STEP17 = PTG_USER_PTGQUE4_STEP17;
			PTGQUE4bits.STEP18 = PTG_USER_PTGQUE4_STEP18;
			PTGQUE4bits.STEP19 = PTG_USER_PTGQUE4_STEP19;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGQUE5レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE5 = 
			( PTG_USER_PTGQUE5_STEP20 << _PTGQUE5_STEP20_POSITION ) |
			( PTG_USER_PTGQUE5_STEP21 << _PTGQUE5_STEP21_POSITION ) |
			( PTG_USER_PTGQUE5_STEP22 << _PTGQUE5_STEP22_POSITION ) |
			( PTG_USER_PTGQUE5_STEP23 << _PTGQUE5_STEP23_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGQUE5bits.STEP20 = PTG_USER_PTGQUE5_STEP20;
			PTGQUE5bits.STEP21 = PTG_USER_PTGQUE5_STEP21;
			PTGQUE5bits.STEP22 = PTG_USER_PTGQUE5_STEP22;
			PTGQUE5bits.STEP23 = PTG_USER_PTGQUE5_STEP23;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGQUE6レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE6 = 
			( PTG_USER_PTGQUE6_STEP24 << _PTGQUE6_STEP24_POSITION ) |
			( PTG_USER_PTGQUE6_STEP25 << _PTGQUE6_STEP25_POSITION ) |
			( PTG_USER_PTGQUE6_STEP26 << _PTGQUE6_STEP26_POSITION ) |
			( PTG_USER_PTGQUE6_STEP27 << _PTGQUE6_STEP27_POSITION ) ;
		#ifdef DEF_BITNAME

			PTGQUE6bits.STEP24 = PTG_USER_PTGQUE6_STEP24;
			PTGQUE6bits.STEP25 = PTG_USER_PTGQUE6_STEP25;
			PTGQUE6bits.STEP26 = PTG_USER_PTGQUE6_STEP26;
			PTGQUE6bits.STEP27 = PTG_USER_PTGQUE6_STEP27;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* PTGQUE7レジスタ */
	/*-----------------------------------------------------------------------*/
		PTGQUE7 = 
			( PTG_USER_PTGQUE7_STEP28 << _PTGQUE7_STEP28_POSITION ) |
			( PTG_USER_PTGQUE7_STEP29 << _PTGQUE7_STEP29_POSITION ) |
			( PTG_USER_PTGQUE7_STEP30 << _PTGQUE7_STEP30_POSITION ) |
			( PTG_USER_PTGQUE7_STEP31 << _PTGQUE7_STEP31_POSITION ) ;
		#ifdef DEF_BITNAME
			PTGQUE7bits.STEP28 = PTG_USER_PTGQUE7_STEP28;
			PTGQUE7bits.STEP29 = PTG_USER_PTGQUE7_STEP29;
			PTGQUE7bits.STEP30 = PTG_USER_PTGQUE7_STEP30;
			PTGQUE7bits.STEP31 = PTG_USER_PTGQUE7_STEP31;
		#endif 
#endif		

}
