/*----------------------------------------------------------------------------*/
/**
* @file		RemapPin_Driver.c
* @brief	リマッパブルピンに関するドライバ関数
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
#include "remappin_user.h"
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
* @fn        vdg_RemapPin_Set_Input_Register(void) 
* @brief        リマッパブル入力ピンのレジスタをセットします 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_RemapPin_Set_Input_Register(void)
{
	/*-----------------------------------------------------------------------*/
	/* RPCONレジスタ */
	/*-----------------------------------------------------------------------*/
		RPCON =  RP_USER_RPCON ;
	/*-----------------------------------------------------------------------*/
	/* RPINR0レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR0 = 
			( RP_USER_RPINR0_INT1R << _RPINR0_INT1R_POSITION ) |
			( RP_USER_RPINR0_INT2R << _RPINR0_INT2R_POSITION ) |
			( RP_USER_RPINR0_INT3R << _RPINR0_INT3R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR0bits.INT1R = RP_USER_RPINR0_INT1R;
			RPINR0bits.INT2R = RP_USER_RPINR0_INT2R;
			RPINR0bits.INT3R = RP_USER_RPINR0_INT3R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR1レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR1 = 
			( RP_USER_RPINR1_INT4R << _RPINR1_INT4R_POSITION ) |
			( RP_USER_RPINR1_T1CKR << _RPINR1_T1CKR_POSITION ) |
			( RP_USER_RPINR1_T2CKR << _RPINR1_T2CKR_POSITION ) |
			( RP_USER_RPINR1_T3CKR << _RPINR1_T3CKR_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR1bits.INT4R = RP_USER_RPINR1_INT4R;
			RPINR1bits.T1CKR = RP_USER_RPINR1_T1CKR;
			RPINR1bits.T2CKR = RP_USER_RPINR1_T2CKR;
			RPINR1bits.T3CKR = RP_USER_RPINR1_T3CKR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR2レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR2 = 
			( RP_USER_RPINR2_TCKI1R << _RPINR2_TCKI1R_POSITION ) |
			( RP_USER_RPINR2_ICM1R << _RPINR2_ICM1R_POSITION ) |
			( RP_USER_RPINR2_TCKI2R << _RPINR2_TCKI2R_POSITION ) |
			( RP_USER_RPINR2_ICM2R << _RPINR2_ICM2R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR2bits.TCKI1R = RP_USER_RPINR2_TCKI1R;
			RPINR2bits.ICM1R = RP_USER_RPINR2_ICM1R;
			RPINR2bits.TCKI2R = RP_USER_RPINR2_TCKI2R;
			RPINR2bits.ICM2R = RP_USER_RPINR2_ICM2R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR3レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR3 = 
			( RP_USER_RPINR3_TCKI3R << _RPINR3_TCKI3R_POSITION ) |
			( RP_USER_RPINR3_ICM3R << _RPINR3_ICM3R_POSITION ) |
			( RP_USER_RPINR3_TCKI4R << _RPINR3_TCKI4R_POSITION ) |
			( RP_USER_RPINR3_ICM4R << _RPINR3_ICM4R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR3bits.TCKI3R = RP_USER_RPINR3_TCKI3R;
			RPINR3bits.ICM3R = RP_USER_RPINR3_ICM3R;
			RPINR3bits.TCKI4R = RP_USER_RPINR3_TCKI4R;
			RPINR3bits.ICM4R = RP_USER_RPINR3_ICM4R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR4レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR4 = 
			( RP_USER_RPINR4_TCKI5R << _RPINR4_TCKI5R_POSITION ) |
			( RP_USER_RPINR4_ICM5R << _RPINR4_ICM5R_POSITION ) |
			( RP_USER_RPINR4_TCKI6R << _RPINR4_TCKI6R_POSITION ) |
			( RP_USER_RPINR4_ICM6R << _RPINR4_ICM6R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR4bits.TCKI5R = RP_USER_RPINR4_TCKI5R;
			RPINR4bits.ICM5R = RP_USER_RPINR4_ICM5R;
			RPINR4bits.TCKI6R = RP_USER_RPINR4_TCKI6R;
			RPINR4bits.ICM6R = RP_USER_RPINR4_ICM6R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR5レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR5 = 
			( RP_USER_RPINR5_TCKI7R << _RPINR5_TCKI7R_POSITION ) |
			( RP_USER_RPINR5_ICM7R << _RPINR5_ICM7R_POSITION ) |
			( RP_USER_RPINR5_TCKI8R << _RPINR5_TCKI8R_POSITION ) |
			( RP_USER_RPINR5_ICM8R << _RPINR5_ICM8R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR5bits.TCKI7R = RP_USER_RPINR5_TCKI7R;
			RPINR5bits.ICM7R = RP_USER_RPINR5_ICM7R;
			RPINR5bits.TCKI8R = RP_USER_RPINR5_TCKI8R;
			RPINR5bits.ICM8R = RP_USER_RPINR5_ICM8R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR6レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR6 = 
			( RP_USER_RPINR6_TCKI9R << _RPINR6_TCKI9R_POSITION ) |
			( RP_USER_RPINR6_ICM9R << _RPINR6_ICM9R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR6bits.TCKI9R = RP_USER_RPINR6_TCKI9R;
			RPINR6bits.ICM9R = RP_USER_RPINR6_ICM9R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR7レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR7 = 
			( RP_USER_RPINR7_OCFAR << _RPINR7_OCFAR_POSITION ) |
			( RP_USER_RPINR7_OCFBR << _RPINR7_OCFBR_POSITION ) |
			( RP_USER_RPINR7_OCFCR << _RPINR7_OCFCR_POSITION ) |
			( RP_USER_RPINR7_OCFDR << _RPINR7_OCFDR_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR7bits.OCFAR = RP_USER_RPINR7_OCFAR;
			RPINR7bits.OCFBR = RP_USER_RPINR7_OCFBR;
			RPINR7bits.OCFCR = RP_USER_RPINR7_OCFCR;
			RPINR7bits.OCFDR = RP_USER_RPINR7_OCFDR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR8レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR8 = 
			( RP_USER_RPINR8_PCI8R << _RPINR8_PCI8R_POSITION ) |
			( RP_USER_RPINR8_PCI9R << _RPINR8_PCI9R_POSITION ) |
			( RP_USER_RPINR8_PCI10R << _RPINR8_PCI10R_POSITION ) |
			( RP_USER_RPINR8_PCI11R << _RPINR8_PCI11R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR8bits.PCI8R = RP_USER_RPINR8_PCI8R;
			RPINR8bits.PCI9R = RP_USER_RPINR8_PCI9R;
			RPINR8bits.PCI10R = RP_USER_RPINR8_PCI10R;
			RPINR8bits.PCI11R = RP_USER_RPINR8_PCI11R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR9レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR9 = 
			( RP_USER_RPINR9_QEIA1R << _RPINR9_QEIA1R_POSITION ) |
			( RP_USER_RPINR9_QEIB1R << _RPINR9_QEIB1R_POSITION ) |
			( RP_USER_RPINR9_QEINDX1R << _RPINR9_QEINDX1R_POSITION ) |
			( RP_USER_RPINR9_QEIHOM1R << _RPINR9_QEIHOM1R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR9bits.QEIA1R = RP_USER_RPINR9_QEIA1R;
			RPINR9bits.QEIB1R = RP_USER_RPINR9_QEIB1R;
			RPINR9bits.QEINDX1R = RP_USER_RPINR9_QEINDX1R;
			RPINR9bits.QEIHOM1R = RP_USER_RPINR9_QEIHOM1R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR10レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR10 = 
			( RP_USER_RPINR10_QEIA2R << _RPINR10_QEIA2R_POSITION ) |
			( RP_USER_RPINR10_QEIB2R << _RPINR10_QEIB2R_POSITION ) |
			( RP_USER_RPINR10_QEINDX2R << _RPINR10_QEINDX2R_POSITION ) |
			( RP_USER_RPINR10_QEIHOM2R << _RPINR10_QEIHOM2R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR10bits.QEIA2R = RP_USER_RPINR10_QEIA2R;
			RPINR10bits.QEIB2R = RP_USER_RPINR10_QEIB2R;
			RPINR10bits.QEINDX2R = RP_USER_RPINR10_QEINDX2R;
			RPINR10bits.QEIHOM2R = RP_USER_RPINR10_QEIHOM2R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR11レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR11 = 
			( RP_USER_RPINR11_QEIA3R << _RPINR11_QEIA3R_POSITION ) |
			( RP_USER_RPINR11_QEIB3R << _RPINR11_QEIB3R_POSITION ) |
			( RP_USER_RPINR11_QEINDX3R << _RPINR11_QEINDX3R_POSITION ) |
			( RP_USER_RPINR11_QEIHOM3R << _RPINR11_QEIHOM3R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR11bits.QEIA3R = RP_USER_RPINR11_QEIA3R;
			RPINR11bits.QEIB3R = RP_USER_RPINR11_QEIB3R;
			RPINR11bits.QEINDX3R = RP_USER_RPINR11_QEINDX3R;
			RPINR11bits.QEIHOM3R = RP_USER_RPINR11_QEIHOM3R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR12レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR12 = 
			( RP_USER_RPINR12_QEIA4R << _RPINR12_QEIA4R_POSITION ) |
			( RP_USER_RPINR12_QEIB4R << _RPINR12_QEIB4R_POSITION ) |
			( RP_USER_RPINR12_QEINDX4R << _RPINR12_QEINDX4R_POSITION ) |
			( RP_USER_RPINR12_QEIHOM4R << _RPINR12_QEIHOM4R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR12bits.QEIA4R = RP_USER_RPINR12_QEIA4R;
			RPINR12bits.QEIB4R = RP_USER_RPINR12_QEIB4R;
			RPINR12bits.QEINDX4R = RP_USER_RPINR12_QEINDX4R;
			RPINR12bits.QEIHOM4R = RP_USER_RPINR12_QEIHOM4R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR13レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR13 = 
			( RP_USER_RPINR13_U1RXR << _RPINR13_U1RXR_POSITION ) |
			( RP_USER_RPINR13_U1DSRR << _RPINR13_U1DSRR_POSITION ) |
			( RP_USER_RPINR13_U2RXR << _RPINR13_U2RXR_POSITION ) |
			( RP_USER_RPINR13_U2DSRR << _RPINR13_U2DSRR_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR13bits.U1RXR = RP_USER_RPINR13_U1RXR;
			RPINR13bits.U1DSRR = RP_USER_RPINR13_U1DSRR;
			RPINR13bits.U2RXR = RP_USER_RPINR13_U2RXR;
			RPINR13bits.U2DSRR = RP_USER_RPINR13_U2DSRR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR14レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR14 = 
			( RP_USER_RPINR14_U3RXR << _RPINR14_U3RXR_POSITION ) |
			( RP_USER_RPINR14_U3DSRR << _RPINR14_U3DSRR_POSITION ) |
			( RP_USER_RPINR14_SDI1R << _RPINR14_SDI1R_POSITION ) |
			( RP_USER_RPINR14_SCK1R << _RPINR14_SCK1R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR14bits.U3RXR = RP_USER_RPINR14_U3RXR;
			RPINR14bits.U3DSRR = RP_USER_RPINR14_U3DSRR;
			RPINR14bits.SDI1R = RP_USER_RPINR14_SDI1R;
			RPINR14bits.SCK1R = RP_USER_RPINR14_SCK1R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR15レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR15 = 
			( RP_USER_RPINR15_SS1R << _RPINR15_SS1R_POSITION ) |
			( RP_USER_RPINR15_SDI2R << _RPINR15_SDI2R_POSITION ) |
			( RP_USER_RPINR15_SCK2R << _RPINR15_SCK2R_POSITION ) |
			( RP_USER_RPINR15_SS2R << _RPINR15_SS2R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR15bits.SS1R = RP_USER_RPINR15_SS1R;
			RPINR15bits.SDI2R = RP_USER_RPINR15_SDI2R;
			RPINR15bits.SCK2R = RP_USER_RPINR15_SCK2R;
			RPINR15bits.SS2R = RP_USER_RPINR15_SS2R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR16レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR16 = 
			( RP_USER_RPINR16_SDI3R << _RPINR16_SDI3R_POSITION ) |
			( RP_USER_RPINR16_SCK3R << _RPINR16_SCK3R_POSITION ) |
			( RP_USER_RPINR16_SS3R << _RPINR16_SS3R_POSITION ) |
			( RP_USER_RPINR16_SDI4R << _RPINR16_SDI4R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR16bits.SDI3R = RP_USER_RPINR16_SDI3R;
			RPINR16bits.SCK3R = RP_USER_RPINR16_SCK3R;
			RPINR16bits.SS3R = RP_USER_RPINR16_SS3R;
			RPINR16bits.SDI4R = RP_USER_RPINR16_SDI4R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR17レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR17 = 
			( RP_USER_RPINR17_SCK4R << _RPINR17_SCK4R_POSITION ) |
			( RP_USER_RPINR17_SS4R << _RPINR17_SS4R_POSITION ) |
			( RP_USER_RPINR17_CAN1RXR << _RPINR17_CAN1RXR_POSITION ) |
			( RP_USER_RPINR17_CAN2RXR << _RPINR17_CAN2RXR_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR17bits.SCK4R = RP_USER_RPINR17_SCK4R;
			RPINR17bits.SS4R = RP_USER_RPINR17_SS4R;
			RPINR17bits.CAN1RXR = RP_USER_RPINR17_CAN1RXR;
			RPINR17bits.CAN2RXR = RP_USER_RPINR17_CAN2RXR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR18レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR18 = 
			( RP_USER_RPINR18_SENT1R << _RPINR18_SENT1R_POSITION ) |
			( RP_USER_RPINR18_SENT2R << _RPINR18_SENT2R_POSITION ) |
			( RP_USER_RPINR18_REFI1R << _RPINR18_REFI1R_POSITION ) |
			( RP_USER_RPINR18_REFI2R << _RPINR18_REFI2R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR18bits.SENT1R = RP_USER_RPINR18_SENT1R;
			RPINR18bits.SENT2R = RP_USER_RPINR18_SENT2R;
			RPINR18bits.REFI1R = RP_USER_RPINR18_REFI1R;
			RPINR18bits.REFI2R = RP_USER_RPINR18_REFI2R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR19レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR19 = 
			( RP_USER_RPINR19_PCI12R << _RPINR19_PCI12R_POSITION ) |
			( RP_USER_RPINR19_PCI13R << _RPINR19_PCI13R_POSITION ) |
			( RP_USER_RPINR19_PCI14R << _RPINR19_PCI14R_POSITION ) |
			( RP_USER_RPINR19_PCI15R << _RPINR19_PCI15R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR19bits.PCI12R = RP_USER_RPINR19_PCI12R;
			RPINR19bits.PCI13R = RP_USER_RPINR19_PCI13R;
			RPINR19bits.PCI14R = RP_USER_RPINR19_PCI14R;
			RPINR19bits.PCI15R = RP_USER_RPINR19_PCI15R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR20レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR20 = 
			( RP_USER_RPINR20_PCI16R << _RPINR20_PCI16R_POSITION ) |
			( RP_USER_RPINR20_PCI17R << _RPINR20_PCI17R_POSITION ) |
			( RP_USER_RPINR20_PCI18R << _RPINR20_PCI18R_POSITION ) |
			( RP_USER_RPINR20_CLCINAR << _RPINR20_CLCINAR_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR20bits.PCI16R = RP_USER_RPINR20_PCI16R;
			RPINR20bits.PCI17R = RP_USER_RPINR20_PCI17R;
			RPINR20bits.PCI18R = RP_USER_RPINR20_PCI18R;
			RPINR20bits.CLCINAR = RP_USER_RPINR20_CLCINAR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR21レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR21 = 
			( RP_USER_RPINR21_CLCINBR << _RPINR21_CLCINBR_POSITION ) |
			( RP_USER_RPINR21_CLCINCR << _RPINR21_CLCINCR_POSITION ) |
			( RP_USER_RPINR21_CLCINDR << _RPINR21_CLCINDR_POSITION ) |
			( RP_USER_RPINR21_CLCINER << _RPINR21_CLCINER_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR21bits.CLCINBR = RP_USER_RPINR21_CLCINBR;
			RPINR21bits.CLCINCR = RP_USER_RPINR21_CLCINCR;
			RPINR21bits.CLCINDR = RP_USER_RPINR21_CLCINDR;
			RPINR21bits.CLCINER = RP_USER_RPINR21_CLCINER;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR22レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR22 = 
			( RP_USER_RPINR22_CLCINFR << _RPINR22_CLCINFR_POSITION ) |
			( RP_USER_RPINR22_CLCINGR << _RPINR22_CLCINGR_POSITION ) |
			( RP_USER_RPINR22_CLCINHR << _RPINR22_CLCINHR_POSITION ) |
			( RP_USER_RPINR22_CLCINIR << _RPINR22_CLCINIR_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR22bits.CLCINFR = RP_USER_RPINR22_CLCINFR;
			RPINR22bits.CLCINGR = RP_USER_RPINR22_CLCINGR;
			RPINR22bits.CLCINHR = RP_USER_RPINR22_CLCINHR;
			RPINR22bits.CLCINIR = RP_USER_RPINR22_CLCINIR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR23レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR23 = 
			( RP_USER_RPINR23_CLCINJR << _RPINR23_CLCINJR_POSITION ) |
			( RP_USER_RPINR23_ADTRG31R << _RPINR23_ADTRG31R_POSITION ) |
			( RP_USER_RPINR23_U1CTSR << _RPINR23_U1CTSR_POSITION ) |
			( RP_USER_RPINR23_U2CTSR << _RPINR23_U2CTSR_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR23bits.CLCINJR = RP_USER_RPINR23_CLCINJR;
			RPINR23bits.ADTRG31R = RP_USER_RPINR23_ADTRG31R;
			RPINR23bits.U1CTSR = RP_USER_RPINR23_U1CTSR;
			RPINR23bits.U2CTSR = RP_USER_RPINR23_U2CTSR;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR24レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR24 = 
			( RP_USER_RPINR24_U3CTSR << _RPINR24_U3CTSR_POSITION ) |
			( RP_USER_RPINR24_BISS1SLR << _RPINR24_BISS1SLR_POSITION ) |
			( RP_USER_RPINR24_BISS1GSR << _RPINR24_BISS1GSR_POSITION ) |
			( RP_USER_RPINR24_IOM0R << _RPINR24_IOM0R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR24bits.U3CTSR = RP_USER_RPINR24_U3CTSR;
			RPINR24bits.BISS1SLR = RP_USER_RPINR24_BISS1SLR;
			RPINR24bits.BISS1GSR = RP_USER_RPINR24_BISS1GSR;
			RPINR24bits.IOM0R = RP_USER_RPINR24_IOM0R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR25レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR25 = 
			( RP_USER_RPINR25_IOM1R << _RPINR25_IOM1R_POSITION ) |
			( RP_USER_RPINR25_IOM2R << _RPINR25_IOM2R_POSITION ) |
			( RP_USER_RPINR25_IOM3R << _RPINR25_IOM3R_POSITION ) |
			( RP_USER_RPINR25_IOM4R << _RPINR25_IOM4R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR25bits.IOM1R = RP_USER_RPINR25_IOM1R;
			RPINR25bits.IOM2R = RP_USER_RPINR25_IOM2R;
			RPINR25bits.IOM3R = RP_USER_RPINR25_IOM3R;
			RPINR25bits.IOM4R = RP_USER_RPINR25_IOM4R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR26レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR26 = 
			( RP_USER_RPINR26_IOM5R << _RPINR26_IOM5R_POSITION ) |
			( RP_USER_RPINR26_IOM6R << _RPINR26_IOM6R_POSITION ) |
			( RP_USER_RPINR26_IOM7R << _RPINR26_IOM7R_POSITION ) |
			( RP_USER_RPINR26_PCI19R << _RPINR26_PCI19R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR26bits.IOM5R = RP_USER_RPINR26_IOM5R;
			RPINR26bits.IOM6R = RP_USER_RPINR26_IOM6R;
			RPINR26bits.IOM7R = RP_USER_RPINR26_IOM7R;
			RPINR26bits.PCI19R = RP_USER_RPINR26_PCI19R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPINR27レジスタ */
	/*-----------------------------------------------------------------------*/
		RPINR27 = 
			( RP_USER_RPINR27_PCI20R << _RPINR27_PCI20R_POSITION ) |
			( RP_USER_RPINR27_PCI21R << _RPINR27_PCI21R_POSITION ) |
			( RP_USER_RPINR27_PCI22R << _RPINR27_PCI22R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPINR27bits.PCI20R = RP_USER_RPINR27_PCI20R;
			RPINR27bits.PCI21R = RP_USER_RPINR27_PCI21R;
			RPINR27bits.PCI22R = RP_USER_RPINR27_PCI22R;
		#endif 
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_RemapPin_Set_Output_Register(void) 
* @brief        リマッパブル出力ピンのレジスタをセットします 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_RemapPin_Set_Output_Register(void)
{
   /*-----------------------------------------------------------------------*/
	/* RPOR0レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR0 = 
			( RP_USER_RPOR0_RP1R << _RPOR0_RP1R_POSITION ) |
			( RP_USER_RPOR0_RP2R << _RPOR0_RP2R_POSITION ) |
			( RP_USER_RPOR0_RP3R << _RPOR0_RP3R_POSITION ) |
			( RP_USER_RPOR0_RP4R << _RPOR0_RP4R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR0bits.RP1R = RP_USER_RPOR0_RP1R;
			RPOR0bits.RP2R = RP_USER_RPOR0_RP2R;
			RPOR0bits.RP3R = RP_USER_RPOR0_RP3R;
			RPOR0bits.RP4R = RP_USER_RPOR0_RP4R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR1レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR1 = 
			( RP_USER_RPOR1_RP5R << _RPOR1_RP5R_POSITION ) |
			( RP_USER_RPOR1_RP6R << _RPOR1_RP6R_POSITION ) |
			( RP_USER_RPOR1_RP7R << _RPOR1_RP7R_POSITION ) |
			( RP_USER_RPOR1_RP8R << _RPOR1_RP8R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR1bits.RP5R = RP_USER_RPOR1_RP5R;
			RPOR1bits.RP6R = RP_USER_RPOR1_RP6R;
			RPOR1bits.RP7R = RP_USER_RPOR1_RP7R;
			RPOR1bits.RP8R = RP_USER_RPOR1_RP8R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR2レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR2 = 
			( RP_USER_RPOR2_RP9R << _RPOR2_RP9R_POSITION ) |
			( RP_USER_RPOR2_RP10R << _RPOR2_RP10R_POSITION ) |
			( RP_USER_RPOR2_RP11R << _RPOR2_RP11R_POSITION ) |
			( RP_USER_RPOR2_RP12R << _RPOR2_RP12R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR2bits.RP9R = RP_USER_RPOR2_RP9R;
			RPOR2bits.RP10R = RP_USER_RPOR2_RP10R;
			RPOR2bits.RP11R = RP_USER_RPOR2_RP11R;
			RPOR2bits.RP12R = RP_USER_RPOR2_RP12R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR3レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR3 = 
			( RP_USER_RPOR3_RP13R << _RPOR3_RP13R_POSITION ) |
			( RP_USER_RPOR3_RP14R << _RPOR3_RP14R_POSITION ) |
			( RP_USER_RPOR3_RP15R << _RPOR3_RP15R_POSITION ) |
			( RP_USER_RPOR3_RP16R << _RPOR3_RP16R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR3bits.RP13R = RP_USER_RPOR3_RP13R;
			RPOR3bits.RP14R = RP_USER_RPOR3_RP14R;
			RPOR3bits.RP15R = RP_USER_RPOR3_RP15R;
			RPOR3bits.RP16R = RP_USER_RPOR3_RP16R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR4レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR4 = 
			( RP_USER_RPOR4_RP17R << _RPOR4_RP17R_POSITION ) |
			( RP_USER_RPOR4_RP18R << _RPOR4_RP18R_POSITION ) |
			( RP_USER_RPOR4_RP19R << _RPOR4_RP19R_POSITION ) |
			( RP_USER_RPOR4_RP20R << _RPOR4_RP20R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR4bits.RP17R = RP_USER_RPOR4_RP17R;
			RPOR4bits.RP18R = RP_USER_RPOR4_RP18R;
			RPOR4bits.RP19R = RP_USER_RPOR4_RP19R;
			RPOR4bits.RP20R = RP_USER_RPOR4_RP20R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR5レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR5 = 
			( RP_USER_RPOR5_RP21R << _RPOR5_RP21R_POSITION ) |
			( RP_USER_RPOR5_RP22R << _RPOR5_RP22R_POSITION ) |
			( RP_USER_RPOR5_RP23R << _RPOR5_RP23R_POSITION ) |
			( RP_USER_RPOR5_RP24R << _RPOR5_RP24R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR5bits.RP21R = RP_USER_RPOR5_RP21R;
			RPOR5bits.RP22R = RP_USER_RPOR5_RP22R;
			RPOR5bits.RP23R = RP_USER_RPOR5_RP23R;
			RPOR5bits.RP24R = RP_USER_RPOR5_RP24R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR6レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR6 = 
			( RP_USER_RPOR6_RP25R << _RPOR6_RP25R_POSITION ) |
			( RP_USER_RPOR6_RP26R << _RPOR6_RP26R_POSITION ) |
			( RP_USER_RPOR6_RP27R << _RPOR6_RP27R_POSITION ) |
			( RP_USER_RPOR6_RP28R << _RPOR6_RP28R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR6bits.RP25R = RP_USER_RPOR6_RP25R;
			RPOR6bits.RP26R = RP_USER_RPOR6_RP26R;
			RPOR6bits.RP27R = RP_USER_RPOR6_RP27R;
			RPOR6bits.RP28R = RP_USER_RPOR6_RP28R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR7レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR7 = 
			( RP_USER_RPOR7_RP29R << _RPOR7_RP29R_POSITION ) |
			( RP_USER_RPOR7_RP30R << _RPOR7_RP30R_POSITION ) |
			( RP_USER_RPOR7_RP31R << _RPOR7_RP31R_POSITION ) |
			( RP_USER_RPOR7_RP32R << _RPOR7_RP32R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR7bits.RP29R = RP_USER_RPOR7_RP29R;
			RPOR7bits.RP30R = RP_USER_RPOR7_RP30R;
			RPOR7bits.RP31R = RP_USER_RPOR7_RP31R;
			RPOR7bits.RP32R = RP_USER_RPOR7_RP32R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR8レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR8 = 
			( RP_USER_RPOR8_RP33R << _RPOR8_RP33R_POSITION ) |
			( RP_USER_RPOR8_RP34R << _RPOR8_RP34R_POSITION ) |
			( RP_USER_RPOR8_RP35R << _RPOR8_RP35R_POSITION ) |
			( RP_USER_RPOR8_RP36R << _RPOR8_RP36R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR8bits.RP33R = RP_USER_RPOR8_RP33R;
			RPOR8bits.RP34R = RP_USER_RPOR8_RP34R;
			RPOR8bits.RP35R = RP_USER_RPOR8_RP35R;
			RPOR8bits.RP36R = RP_USER_RPOR8_RP36R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR9レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR9 = 
			( RP_USER_RPOR9_RP37R << _RPOR9_RP37R_POSITION ) |
			( RP_USER_RPOR9_RP38R << _RPOR9_RP38R_POSITION ) |
			( RP_USER_RPOR9_RP39R << _RPOR9_RP39R_POSITION ) |
			( RP_USER_RPOR9_RP40R << _RPOR9_RP40R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR9bits.RP37R = RP_USER_RPOR9_RP37R;
			RPOR9bits.RP38R = RP_USER_RPOR9_RP38R;
			RPOR9bits.RP39R = RP_USER_RPOR9_RP39R;
			RPOR9bits.RP40R = RP_USER_RPOR9_RP40R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR10レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR10 = 
			( RP_USER_RPOR10_RP41R << _RPOR10_RP41R_POSITION ) |
			( RP_USER_RPOR10_RP42R << _RPOR10_RP42R_POSITION ) |
			( RP_USER_RPOR10_RP43R << _RPOR10_RP43R_POSITION ) |
			( RP_USER_RPOR10_RP44R << _RPOR10_RP44R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR10bits.RP41R = RP_USER_RPOR10_RP41R;
			RPOR10bits.RP42R = RP_USER_RPOR10_RP42R;
			RPOR10bits.RP43R = RP_USER_RPOR10_RP43R;
			RPOR10bits.RP44R = RP_USER_RPOR10_RP44R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR11レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR11 = 
			( RP_USER_RPOR11_RP45R << _RPOR11_RP45R_POSITION ) |
			( RP_USER_RPOR11_RP46R << _RPOR11_RP46R_POSITION ) |
			( RP_USER_RPOR11_RP47R << _RPOR11_RP47R_POSITION ) |
			( RP_USER_RPOR11_RP48R << _RPOR11_RP48R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR11bits.RP45R = RP_USER_RPOR11_RP45R;
			RPOR11bits.RP46R = RP_USER_RPOR11_RP46R;
			RPOR11bits.RP47R = RP_USER_RPOR11_RP47R;
			RPOR11bits.RP48R = RP_USER_RPOR11_RP48R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR12レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR12 = 
			( RP_USER_RPOR12_RP49R << _RPOR12_RP49R_POSITION ) |
			( RP_USER_RPOR12_RP50R << _RPOR12_RP50R_POSITION ) |
			( RP_USER_RPOR12_RP51R << _RPOR12_RP51R_POSITION ) |
			( RP_USER_RPOR12_RP52R << _RPOR12_RP52R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR12bits.RP49R = RP_USER_RPOR12_RP49R;
			RPOR12bits.RP50R = RP_USER_RPOR12_RP50R;
			RPOR12bits.RP51R = RP_USER_RPOR12_RP51R;
			RPOR12bits.RP52R = RP_USER_RPOR12_RP52R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR13レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR13 = 
			( RP_USER_RPOR13_RP53R << _RPOR13_RP53R_POSITION ) |
			( RP_USER_RPOR13_RP54R << _RPOR13_RP54R_POSITION ) |
			( RP_USER_RPOR13_RP55R << _RPOR13_RP55R_POSITION ) |
			( RP_USER_RPOR13_RP56R << _RPOR13_RP56R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR13bits.RP53R = RP_USER_RPOR13_RP53R;
			RPOR13bits.RP54R = RP_USER_RPOR13_RP54R;
			RPOR13bits.RP55R = RP_USER_RPOR13_RP55R;
			RPOR13bits.RP56R = RP_USER_RPOR13_RP56R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR14レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR14 = 
			( RP_USER_RPOR14_RP57R << _RPOR14_RP57R_POSITION ) |
			( RP_USER_RPOR14_RP58R << _RPOR14_RP58R_POSITION ) |
			( RP_USER_RPOR14_RP59R << _RPOR14_RP59R_POSITION ) |
			( RP_USER_RPOR14_RP60R << _RPOR14_RP60R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR14bits.RP57R = RP_USER_RPOR14_RP57R;
			RPOR14bits.RP58R = RP_USER_RPOR14_RP58R;
			RPOR14bits.RP59R = RP_USER_RPOR14_RP59R;
			RPOR14bits.RP60R = RP_USER_RPOR14_RP60R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR15レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR15 = 
			( RP_USER_RPOR15_RP61R << _RPOR15_RP61R_POSITION ) |
			( RP_USER_RPOR15_RP62R << _RPOR15_RP62R_POSITION ) |
			( RP_USER_RPOR15_RP63R << _RPOR15_RP63R_POSITION ) |
			( RP_USER_RPOR15_RP64R << _RPOR15_RP64R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR15bits.RP61R = RP_USER_RPOR15_RP61R;
			RPOR15bits.RP62R = RP_USER_RPOR15_RP62R;
			RPOR15bits.RP63R = RP_USER_RPOR15_RP63R;
			RPOR15bits.RP64R = RP_USER_RPOR15_RP64R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR16レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR16 = 
			( RP_USER_RPOR16_RP65R << _RPOR16_RP65R_POSITION ) |
			( RP_USER_RPOR16_RP66R << _RPOR16_RP66R_POSITION ) |
			( RP_USER_RPOR16_RP67R << _RPOR16_RP67R_POSITION ) |
			( RP_USER_RPOR16_RP68R << _RPOR16_RP68R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR16bits.RP65R = RP_USER_RPOR16_RP65R;
			RPOR16bits.RP66R = RP_USER_RPOR16_RP66R;
			RPOR16bits.RP67R = RP_USER_RPOR16_RP67R;
			RPOR16bits.RP68R = RP_USER_RPOR16_RP68R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR17レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR17 = 
			( RP_USER_RPOR17_RP69R << _RPOR17_RP69R_POSITION ) |
			( RP_USER_RPOR17_RP70R << _RPOR17_RP70R_POSITION ) |
			( RP_USER_RPOR17_RP71R << _RPOR17_RP71R_POSITION ) |
			( RP_USER_RPOR17_RP72R << _RPOR17_RP72R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR17bits.RP69R = RP_USER_RPOR17_RP69R;
			RPOR17bits.RP70R = RP_USER_RPOR17_RP70R;
			RPOR17bits.RP71R = RP_USER_RPOR17_RP71R;
			RPOR17bits.RP72R = RP_USER_RPOR17_RP72R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR18レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR18 = 
			( RP_USER_RPOR18_RP73R << _RPOR18_RP73R_POSITION ) |
			( RP_USER_RPOR18_RP74R << _RPOR18_RP74R_POSITION ) |
			( RP_USER_RPOR18_RP75R << _RPOR18_RP75R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR18bits.RP73R = RP_USER_RPOR18_RP73R;
			RPOR18bits.RP74R = RP_USER_RPOR18_RP74R;
			RPOR18bits.RP75R = RP_USER_RPOR18_RP75R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR20レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR20 = 
			( RP_USER_RPOR20_RP81R << _RPOR20_RP81R_POSITION ) |
			( RP_USER_RPOR20_RP82R << _RPOR20_RP82R_POSITION ) |
			( RP_USER_RPOR20_RP83R << _RPOR20_RP83R_POSITION ) |
			( RP_USER_RPOR20_RP84R << _RPOR20_RP84R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR20bits.RP81R = RP_USER_RPOR20_RP81R;
			RPOR20bits.RP82R = RP_USER_RPOR20_RP82R;
			RPOR20bits.RP83R = RP_USER_RPOR20_RP83R;
			RPOR20bits.RP84R = RP_USER_RPOR20_RP84R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR21レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR21 = 
			( RP_USER_RPOR21_RP86R << _RPOR21_RP86R_POSITION ) |
			( RP_USER_RPOR21_RP87R << _RPOR21_RP87R_POSITION ) |
			( RP_USER_RPOR21_RP88R << _RPOR21_RP88R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR21bits.RP86R = RP_USER_RPOR21_RP86R;
			RPOR21bits.RP87R = RP_USER_RPOR21_RP87R;
			RPOR21bits.RP88R = RP_USER_RPOR21_RP88R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR22レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR22 = 
			( RP_USER_RPOR22_RP89R << _RPOR22_RP89R_POSITION ) |
			( RP_USER_RPOR22_RP90R << _RPOR22_RP90R_POSITION ) |
			( RP_USER_RPOR22_RP91R << _RPOR22_RP91R_POSITION ) |
			( RP_USER_RPOR22_RP92R << _RPOR22_RP92R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR22bits.RP89R = RP_USER_RPOR22_RP89R;
			RPOR22bits.RP90R = RP_USER_RPOR22_RP90R;
			RPOR22bits.RP91R = RP_USER_RPOR22_RP91R;
			RPOR22bits.RP92R = RP_USER_RPOR22_RP92R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR24レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR24 = 
			( RP_USER_RPOR24_RP97R << _RPOR24_RP97R_POSITION ) |
			( RP_USER_RPOR24_RP98R << _RPOR24_RP98R_POSITION ) |
			( RP_USER_RPOR24_RP99R << _RPOR24_RP99R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR24bits.RP97R = RP_USER_RPOR24_RP97R;
			RPOR24bits.RP98R = RP_USER_RPOR24_RP98R;
			RPOR24bits.RP99R = RP_USER_RPOR24_RP99R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR25レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR25 = 
			( RP_USER_RPOR25_RP101R << _RPOR25_RP101R_POSITION ) |
			( RP_USER_RPOR25_RP102R << _RPOR25_RP102R_POSITION ) |
			( RP_USER_RPOR25_RP103R << _RPOR25_RP103R_POSITION ) |
			( RP_USER_RPOR25_RP104R << _RPOR25_RP104R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR25bits.RP101R = RP_USER_RPOR25_RP101R;
			RPOR25bits.RP102R = RP_USER_RPOR25_RP102R;
			RPOR25bits.RP103R = RP_USER_RPOR25_RP103R;
			RPOR25bits.RP104R = RP_USER_RPOR25_RP104R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR26レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR26 = 
			( RP_USER_RPOR26_RP105R << _RPOR26_RP105R_POSITION ) |
			( RP_USER_RPOR26_RP106R << _RPOR26_RP106R_POSITION ) |
			( RP_USER_RPOR26_RP107R << _RPOR26_RP107R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR26bits.RP105R = RP_USER_RPOR26_RP105R;
			RPOR26bits.RP106R = RP_USER_RPOR26_RP106R;
			RPOR26bits.RP107R = RP_USER_RPOR26_RP107R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR28レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR28 = 
			( RP_USER_RPOR28_RP113R << _RPOR28_RP113R_POSITION ) |
			( RP_USER_RPOR28_RP114R << _RPOR28_RP114R_POSITION ) |
			( RP_USER_RPOR28_RP115R << _RPOR28_RP115R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR28bits.RP113R = RP_USER_RPOR28_RP113R;
			RPOR28bits.RP114R = RP_USER_RPOR28_RP114R;
			RPOR28bits.RP115R = RP_USER_RPOR28_RP115R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR32レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR32 = 
			( RP_USER_RPOR32_RP129R << _RPOR32_RP129R_POSITION ) |
			( RP_USER_RPOR32_RP130R << _RPOR32_RP130R_POSITION ) |
			( RP_USER_RPOR32_RP131R << _RPOR32_RP131R_POSITION ) |
			( RP_USER_RPOR32_RP132R << _RPOR32_RP132R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR32bits.RP129R = RP_USER_RPOR32_RP129R;
			RPOR32bits.RP130R = RP_USER_RPOR32_RP130R;
			RPOR32bits.RP131R = RP_USER_RPOR32_RP131R;
			RPOR32bits.RP132R = RP_USER_RPOR32_RP132R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR33レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR33 = 
			( RP_USER_RPOR33_RP133R << _RPOR33_RP133R_POSITION ) |
			( RP_USER_RPOR33_RP134R << _RPOR33_RP134R_POSITION ) |
			( RP_USER_RPOR33_RP135R << _RPOR33_RP135R_POSITION ) |
			( RP_USER_RPOR33_RP136R << _RPOR33_RP136R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR33bits.RP133R = RP_USER_RPOR33_RP133R;
			RPOR33bits.RP134R = RP_USER_RPOR33_RP134R;
			RPOR33bits.RP135R = RP_USER_RPOR33_RP135R;
			RPOR33bits.RP136R = RP_USER_RPOR33_RP136R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR34レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR34 = 
			( RP_USER_RPOR34_RP137R << _RPOR34_RP137R_POSITION ) |
			( RP_USER_RPOR34_RP138R << _RPOR34_RP138R_POSITION ) |
			( RP_USER_RPOR34_RP139R << _RPOR34_RP139R_POSITION ) |
			( RP_USER_RPOR34_RP140R << _RPOR34_RP140R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR34bits.RP137R = RP_USER_RPOR34_RP137R;
			RPOR34bits.RP138R = RP_USER_RPOR34_RP138R;
			RPOR34bits.RP139R = RP_USER_RPOR34_RP139R;
			RPOR34bits.RP140R = RP_USER_RPOR34_RP140R;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* RPOR35レジスタ */
	/*-----------------------------------------------------------------------*/
		RPOR35 = 
			( RP_USER_RPOR35_RP141R << _RPOR35_RP141R_POSITION ) |
			( RP_USER_RPOR35_RP142R << _RPOR35_RP142R_POSITION ) |
			( RP_USER_RPOR35_RP143R << _RPOR35_RP143R_POSITION ) |
			( RP_USER_RPOR35_RP144R << _RPOR35_RP144R_POSITION ) ;
		#ifdef DEF_BITNAME
			RPOR35bits.RP141R = RP_USER_RPOR35_RP141R;
			RPOR35bits.RP142R = RP_USER_RPOR35_RP142R;
			RPOR35bits.RP143R = RP_USER_RPOR35_RP143R;
			RPOR35bits.RP144R = RP_USER_RPOR35_RP144R;
		#endif 
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_RemapPin_Set_Register(void) 
* @brief     リマッパブルピンのレジスタをセットします 
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_RemapPin_Set_All_Register(void)
{
    vdg_RemapPin_Set_Input_Register();
    vdg_RemapPin_Set_Output_Register();
}
