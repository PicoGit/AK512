/*----------------------------------------------------------------------------*/
/**
* @file		QEI_Driver.c
* @brief	Quadrature Encoder Interfaceに関するドライバ関数
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
#include "qei_driver.h"
#include "qei_user.h"
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
* @fn           vdg_QEI1_Set_Register(void)
* @brief        QEI1レジスタを初期化します
* @param
* @return
* @detail     
*/
/*----------------------------------------------------------------------------*/
void vdg_QEI1_Set_Register(void)
{
#if ( PMD_QEI1MD == PMD_MODULE_ENABLE )
  /*-----------------------------------------------------------------------*/
	/* QEI1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI1CON = 
			( QEI_USER_QEI1CON_CCM << _QEI1CON_CCM_POSITION ) |
			( QEI_USER_QEI1CON_GATEN << _QEI1CON_GATEN_POSITION ) |
			( QEI_USER_QEI1CON_CNTPOL << _QEI1CON_CNTPOL_POSITION ) |
			( QEI_USER_QEI1CON_INTDIV << _QEI1CON_INTDIV_POSITION ) |
			( QEI_USER_QEI1CON_IMV << _QEI1CON_IMV_POSITION ) |
			( QEI_USER_QEI1CON_PIMOD << _QEI1CON_PIMOD_POSITION ) |
			( QEI_USER_QEI1CON_SIDL << _QEI1CON_SIDL_POSITION ) |
			( QEI_USER_QEI1CON_ON << _QEI1CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI1CONbits.CCM = QEI_USER_QEI1CON_CCM;
			QEI1CONbits.GATEN = QEI_USER_QEI1CON_GATEN;
			QEI1CONbits.CNTPOL = QEI_USER_QEI1CON_CNTPOL;
			QEI1CONbits.INTDIV = QEI_USER_QEI1CON_INTDIV;
			QEI1CONbits.IMV = QEI_USER_QEI1CON_IMV;
			QEI1CONbits.PIMOD = QEI_USER_QEI1CON_PIMOD;
			QEI1CONbits.SIDL = QEI_USER_QEI1CON_SIDL;
			QEI1CONbits.ON = QEI_USER_QEI1CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI1IOCレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI1IOC = 
			( QEI_USER_QEI1IOC_QEA << _QEI1IOC_QEA_POSITION ) |
			( QEI_USER_QEI1IOC_QEB << _QEI1IOC_QEB_POSITION ) |
			( QEI_USER_QEI1IOC_INDEX << _QEI1IOC_INDEX_POSITION ) |
			( QEI_USER_QEI1IOC_HOME << _QEI1IOC_HOME_POSITION ) |
			( QEI_USER_QEI1IOC_QEAPOL << _QEI1IOC_QEAPOL_POSITION ) |
			( QEI_USER_QEI1IOC_QEBPOL << _QEI1IOC_QEBPOL_POSITION ) |
			( QEI_USER_QEI1IOC_IDXPOL << _QEI1IOC_IDXPOL_POSITION ) |
			( QEI_USER_QEI1IOC_HOMPOL << _QEI1IOC_HOMPOL_POSITION ) |
			( QEI_USER_QEI1IOC_SWPAB << _QEI1IOC_SWPAB_POSITION ) |
			( QEI_USER_QEI1IOC_OUTFNC << _QEI1IOC_OUTFNC_POSITION ) |
			( QEI_USER_QEI1IOC_QFDIV << _QEI1IOC_QFDIV_POSITION ) |
			( QEI_USER_QEI1IOC_FLTREN << _QEI1IOC_FLTREN_POSITION ) |
			( QEI_USER_QEI1IOC_QCAPEN << _QEI1IOC_QCAPEN_POSITION ) |
			( QEI_USER_QEI1IOC_HCAPEN << _QEI1IOC_HCAPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI1IOCbits.QEA = QEI_USER_QEI1IOC_QEA;
			QEI1IOCbits.QEB = QEI_USER_QEI1IOC_QEB;
			QEI1IOCbits.INDEX = QEI_USER_QEI1IOC_INDEX;
			QEI1IOCbits.HOME = QEI_USER_QEI1IOC_HOME;
			QEI1IOCbits.QEAPOL = QEI_USER_QEI1IOC_QEAPOL;
			QEI1IOCbits.QEBPOL = QEI_USER_QEI1IOC_QEBPOL;
			QEI1IOCbits.IDXPOL = QEI_USER_QEI1IOC_IDXPOL;
			QEI1IOCbits.HOMPOL = QEI_USER_QEI1IOC_HOMPOL;
			QEI1IOCbits.SWPAB = QEI_USER_QEI1IOC_SWPAB;
			QEI1IOCbits.OUTFNC = QEI_USER_QEI1IOC_OUTFNC;
			QEI1IOCbits.QFDIV = QEI_USER_QEI1IOC_QFDIV;
			QEI1IOCbits.FLTREN = QEI_USER_QEI1IOC_FLTREN;
			QEI1IOCbits.QCAPEN = QEI_USER_QEI1IOC_QCAPEN;
			QEI1IOCbits.HCAPEN = QEI_USER_QEI1IOC_HCAPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI1STAT = 
			( QEI_USER_QEI1STAT_IDXIEN << _QEI1STAT_IDXIEN_POSITION ) |
			( QEI_USER_QEI1STAT_IDXIRQ << _QEI1STAT_IDXIRQ_POSITION ) |
			( QEI_USER_QEI1STAT_HOMIEN << _QEI1STAT_HOMIEN_POSITION ) |
			( QEI_USER_QEI1STAT_HOMIRQ << _QEI1STAT_HOMIRQ_POSITION ) |
			( QEI_USER_QEI1STAT_VELOVIEN << _QEI1STAT_VELOVIEN_POSITION ) |
			( QEI_USER_QEI1STAT_VELOVIRQ << _QEI1STAT_VELOVIRQ_POSITION ) |
			( QEI_USER_QEI1STAT_PCIIEN << _QEI1STAT_PCIIEN_POSITION ) |
			( QEI_USER_QEI1STAT_PCIIRQ << _QEI1STAT_PCIIRQ_POSITION ) |
			( QEI_USER_QEI1STAT_POSOVIEN << _QEI1STAT_POSOVIEN_POSITION ) |
			( QEI_USER_QEI1STAT_POSOVIRQ << _QEI1STAT_POSOVIRQ_POSITION ) |
			( QEI_USER_QEI1STAT_PCLEQIEN << _QEI1STAT_PCLEQIEN_POSITION ) |
			( QEI_USER_QEI1STAT_PCLEQIRQ << _QEI1STAT_PCLEQIRQ_POSITION ) |
			( QEI_USER_QEI1STAT_PCHEQIEN << _QEI1STAT_PCHEQIEN_POSITION ) |
			( QEI_USER_QEI1STAT_PCHEQIRQ << _QEI1STAT_PCHEQIRQ_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI1STATbits.IDXIEN = QEI_USER_QEI1STAT_IDXIEN;
			QEI1STATbits.IDXIRQ = QEI_USER_QEI1STAT_IDXIRQ;
			QEI1STATbits.HOMIEN = QEI_USER_QEI1STAT_HOMIEN;
			QEI1STATbits.HOMIRQ = QEI_USER_QEI1STAT_HOMIRQ;
			QEI1STATbits.VELOVIEN = QEI_USER_QEI1STAT_VELOVIEN;
			QEI1STATbits.VELOVIRQ = QEI_USER_QEI1STAT_VELOVIRQ;
			QEI1STATbits.PCIIEN = QEI_USER_QEI1STAT_PCIIEN;
			QEI1STATbits.PCIIRQ = QEI_USER_QEI1STAT_PCIIRQ;
			QEI1STATbits.POSOVIEN = QEI_USER_QEI1STAT_POSOVIEN;
			QEI1STATbits.POSOVIRQ = QEI_USER_QEI1STAT_POSOVIRQ;
			QEI1STATbits.PCLEQIEN = QEI_USER_QEI1STAT_PCLEQIEN;
			QEI1STATbits.PCLEQIRQ = QEI_USER_QEI1STAT_PCLEQIRQ;
			QEI1STATbits.PCHEQIEN = QEI_USER_QEI1STAT_PCHEQIEN;
			QEI1STATbits.PCHEQIRQ = QEI_USER_QEI1STAT_PCHEQIRQ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* POS1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		POS1CNT = QEI_USER_POS1CNT;
	/*-----------------------------------------------------------------------*/
	/* POS1HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		POS1HLD = QEI_USER_POS1HLD;
	/*-----------------------------------------------------------------------*/
	/* VEL1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL1CNT = QEI_USER_VEL1CNT;
	/*-----------------------------------------------------------------------*/
	/* VEL1HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL1HLD = QEI_USER_VEL1HLD;
	/*-----------------------------------------------------------------------*/
	/* INT1TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		INT1TMR = QEI_USER_INT1TMR;
	/*-----------------------------------------------------------------------*/
	/* INT1HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INT1HLD = QEI_USER_INT1HLD;
	/*-----------------------------------------------------------------------*/
	/* INDX1CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX1CNT = QEI_USER_INDX1CNT;
	/*-----------------------------------------------------------------------*/
	/* INDX1HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX1HLD = QEI_USER_INDX1HLD;
	/*-----------------------------------------------------------------------*/
	/* QEI1GECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI1GEC = QEI_USER_QEI1GEC;
	/*-----------------------------------------------------------------------*/
	/* QEI1LECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI1LEC = QEI_USER_QEI1LEC;
#endif
}

/*----------------------------------------------------------------------------*/
/*
* @fn           vdg_QEI2_Set_Register(void)
* @brief        QEI2レジスタを初期化します
* @param
* @return
* @detail     
*/
/*----------------------------------------------------------------------------*/
void vdg_QEI2_Set_Register(void)
{
#if ( PMD_QEI2MD == PMD_MODULE_ENABLE )
   /*-----------------------------------------------------------------------*/
	/* QEI2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI2CON = 
			( QEI_USER_QEI2CON_CCM << _QEI2CON_CCM_POSITION ) |
			( QEI_USER_QEI2CON_GATEN << _QEI2CON_GATEN_POSITION ) |
			( QEI_USER_QEI2CON_CNTPOL << _QEI2CON_CNTPOL_POSITION ) |
			( QEI_USER_QEI2CON_INTDIV << _QEI2CON_INTDIV_POSITION ) |
			( QEI_USER_QEI2CON_IMV << _QEI2CON_IMV_POSITION ) |
			( QEI_USER_QEI2CON_PIMOD << _QEI2CON_PIMOD_POSITION ) |
			( QEI_USER_QEI2CON_SIDL << _QEI2CON_SIDL_POSITION ) |
			( QEI_USER_QEI2CON_ON << _QEI2CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI2CONbits.CCM = QEI_USER_QEI2CON_CCM;
			QEI2CONbits.GATEN = QEI_USER_QEI2CON_GATEN;
			QEI2CONbits.CNTPOL = QEI_USER_QEI2CON_CNTPOL;
			QEI2CONbits.INTDIV = QEI_USER_QEI2CON_INTDIV;
			QEI2CONbits.IMV = QEI_USER_QEI2CON_IMV;
			QEI2CONbits.PIMOD = QEI_USER_QEI2CON_PIMOD;
			QEI2CONbits.SIDL = QEI_USER_QEI2CON_SIDL;
			QEI2CONbits.ON = QEI_USER_QEI2CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI2IOCレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI2IOC = 
			( QEI_USER_QEI2IOC_QEA << _QEI2IOC_QEA_POSITION ) |
			( QEI_USER_QEI2IOC_QEB << _QEI2IOC_QEB_POSITION ) |
			( QEI_USER_QEI2IOC_INDEX << _QEI2IOC_INDEX_POSITION ) |
			( QEI_USER_QEI2IOC_HOME << _QEI2IOC_HOME_POSITION ) |
			( QEI_USER_QEI2IOC_QEAPOL << _QEI2IOC_QEAPOL_POSITION ) |
			( QEI_USER_QEI2IOC_QEBPOL << _QEI2IOC_QEBPOL_POSITION ) |
			( QEI_USER_QEI2IOC_IDXPOL << _QEI2IOC_IDXPOL_POSITION ) |
			( QEI_USER_QEI2IOC_HOMPOL << _QEI2IOC_HOMPOL_POSITION ) |
			( QEI_USER_QEI2IOC_SWPAB << _QEI2IOC_SWPAB_POSITION ) |
			( QEI_USER_QEI2IOC_OUTFNC << _QEI2IOC_OUTFNC_POSITION ) |
			( QEI_USER_QEI2IOC_QFDIV << _QEI2IOC_QFDIV_POSITION ) |
			( QEI_USER_QEI2IOC_FLTREN << _QEI2IOC_FLTREN_POSITION ) |
			( QEI_USER_QEI2IOC_QCAPEN << _QEI2IOC_QCAPEN_POSITION ) |
			( QEI_USER_QEI2IOC_HCAPEN << _QEI2IOC_HCAPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI2IOCbits.QEA = QEI_USER_QEI2IOC_QEA;
			QEI2IOCbits.QEB = QEI_USER_QEI2IOC_QEB;
			QEI2IOCbits.INDEX = QEI_USER_QEI2IOC_INDEX;
			QEI2IOCbits.HOME = QEI_USER_QEI2IOC_HOME;
			QEI2IOCbits.QEAPOL = QEI_USER_QEI2IOC_QEAPOL;
			QEI2IOCbits.QEBPOL = QEI_USER_QEI2IOC_QEBPOL;
			QEI2IOCbits.IDXPOL = QEI_USER_QEI2IOC_IDXPOL;
			QEI2IOCbits.HOMPOL = QEI_USER_QEI2IOC_HOMPOL;
			QEI2IOCbits.SWPAB = QEI_USER_QEI2IOC_SWPAB;
			QEI2IOCbits.OUTFNC = QEI_USER_QEI2IOC_OUTFNC;
			QEI2IOCbits.QFDIV = QEI_USER_QEI2IOC_QFDIV;
			QEI2IOCbits.FLTREN = QEI_USER_QEI2IOC_FLTREN;
			QEI2IOCbits.QCAPEN = QEI_USER_QEI2IOC_QCAPEN;
			QEI2IOCbits.HCAPEN = QEI_USER_QEI2IOC_HCAPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI2STAT = 
			( QEI_USER_QEI2STAT_IDXIEN << _QEI2STAT_IDXIEN_POSITION ) |
			( QEI_USER_QEI2STAT_IDXIRQ << _QEI2STAT_IDXIRQ_POSITION ) |
			( QEI_USER_QEI2STAT_HOMIEN << _QEI2STAT_HOMIEN_POSITION ) |
			( QEI_USER_QEI2STAT_HOMIRQ << _QEI2STAT_HOMIRQ_POSITION ) |
			( QEI_USER_QEI2STAT_VELOVIEN << _QEI2STAT_VELOVIEN_POSITION ) |
			( QEI_USER_QEI2STAT_VELOVIRQ << _QEI2STAT_VELOVIRQ_POSITION ) |
			( QEI_USER_QEI2STAT_PCIIEN << _QEI2STAT_PCIIEN_POSITION ) |
			( QEI_USER_QEI2STAT_PCIIRQ << _QEI2STAT_PCIIRQ_POSITION ) |
			( QEI_USER_QEI2STAT_POSOVIEN << _QEI2STAT_POSOVIEN_POSITION ) |
			( QEI_USER_QEI2STAT_POSOVIRQ << _QEI2STAT_POSOVIRQ_POSITION ) |
			( QEI_USER_QEI2STAT_PCLEQIEN << _QEI2STAT_PCLEQIEN_POSITION ) |
			( QEI_USER_QEI2STAT_PCLEQIRQ << _QEI2STAT_PCLEQIRQ_POSITION ) |
			( QEI_USER_QEI2STAT_PCHEQIEN << _QEI2STAT_PCHEQIEN_POSITION ) |
			( QEI_USER_QEI2STAT_PCHEQIRQ << _QEI2STAT_PCHEQIRQ_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI2STATbits.IDXIEN = QEI_USER_QEI2STAT_IDXIEN;
			QEI2STATbits.IDXIRQ = QEI_USER_QEI2STAT_IDXIRQ;
			QEI2STATbits.HOMIEN = QEI_USER_QEI2STAT_HOMIEN;
			QEI2STATbits.HOMIRQ = QEI_USER_QEI2STAT_HOMIRQ;
			QEI2STATbits.VELOVIEN = QEI_USER_QEI2STAT_VELOVIEN;
			QEI2STATbits.VELOVIRQ = QEI_USER_QEI2STAT_VELOVIRQ;
			QEI2STATbits.PCIIEN = QEI_USER_QEI2STAT_PCIIEN;
			QEI2STATbits.PCIIRQ = QEI_USER_QEI2STAT_PCIIRQ;
			QEI2STATbits.POSOVIEN = QEI_USER_QEI2STAT_POSOVIEN;
			QEI2STATbits.POSOVIRQ = QEI_USER_QEI2STAT_POSOVIRQ;
			QEI2STATbits.PCLEQIEN = QEI_USER_QEI2STAT_PCLEQIEN;
			QEI2STATbits.PCLEQIRQ = QEI_USER_QEI2STAT_PCLEQIRQ;
			QEI2STATbits.PCHEQIEN = QEI_USER_QEI2STAT_PCHEQIEN;
			QEI2STATbits.PCHEQIRQ = QEI_USER_QEI2STAT_PCHEQIRQ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* POS2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		POS2CNT = QEI_USER_POS2CNT;
	/*-----------------------------------------------------------------------*/
	/* POS2HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		POS2HLD = QEI_USER_POS2HLD;
	/*-----------------------------------------------------------------------*/
	/* VEL2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL2CNT = QEI_USER_VEL2CNT;
	/*-----------------------------------------------------------------------*/
	/* VEL2HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL2HLD = QEI_USER_VEL2HLD;
	/*-----------------------------------------------------------------------*/
	/* INT2TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		INT2TMR = QEI_USER_INT2TMR;
	/*-----------------------------------------------------------------------*/
	/* INT2HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INT2HLD = QEI_USER_INT2HLD;
	/*-----------------------------------------------------------------------*/
	/* INDX2CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX2CNT = QEI_USER_INDX2CNT;
	/*-----------------------------------------------------------------------*/
	/* INDX2HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX2HLD = QEI_USER_INDX2HLD;
	/*-----------------------------------------------------------------------*/
	/* QEI2GECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI2GEC = QEI_USER_QEI2GEC;
	/*-----------------------------------------------------------------------*/
	/* QEI2LECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI2LEC = QEI_USER_QEI2LEC;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn           vdg_QEI3_Set_Register(void)
* @brief        QEI3レジスタを初期化します
* @param
* @return
* @detail     
*/
/*----------------------------------------------------------------------------*/
void vdg_QEI3_Set_Register(void)
{
#if ( PMD_QEI3MD == PMD_MODULE_ENABLE )
   /*-----------------------------------------------------------------------*/
	/* QEI3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI3CON = 
			( QEI_USER_QEI3CON_CCM << _QEI3CON_CCM_POSITION ) |
			( QEI_USER_QEI3CON_GATEN << _QEI3CON_GATEN_POSITION ) |
			( QEI_USER_QEI3CON_CNTPOL << _QEI3CON_CNTPOL_POSITION ) |
			( QEI_USER_QEI3CON_INTDIV << _QEI3CON_INTDIV_POSITION ) |
			( QEI_USER_QEI3CON_IMV << _QEI3CON_IMV_POSITION ) |
			( QEI_USER_QEI3CON_PIMOD << _QEI3CON_PIMOD_POSITION ) |
			( QEI_USER_QEI3CON_SIDL << _QEI3CON_SIDL_POSITION ) |
			( QEI_USER_QEI3CON_ON << _QEI3CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI3CONbits.CCM = QEI_USER_QEI3CON_CCM;
			QEI3CONbits.GATEN = QEI_USER_QEI3CON_GATEN;
			QEI3CONbits.CNTPOL = QEI_USER_QEI3CON_CNTPOL;
			QEI3CONbits.INTDIV = QEI_USER_QEI3CON_INTDIV;
			QEI3CONbits.IMV = QEI_USER_QEI3CON_IMV;
			QEI3CONbits.PIMOD = QEI_USER_QEI3CON_PIMOD;
			QEI3CONbits.SIDL = QEI_USER_QEI3CON_SIDL;
			QEI3CONbits.ON = QEI_USER_QEI3CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI3IOCレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI3IOC = 
			( QEI_USER_QEI3IOC_QEA << _QEI3IOC_QEA_POSITION ) |
			( QEI_USER_QEI3IOC_QEB << _QEI3IOC_QEB_POSITION ) |
			( QEI_USER_QEI3IOC_INDEX << _QEI3IOC_INDEX_POSITION ) |
			( QEI_USER_QEI3IOC_HOME << _QEI3IOC_HOME_POSITION ) |
			( QEI_USER_QEI3IOC_QEAPOL << _QEI3IOC_QEAPOL_POSITION ) |
			( QEI_USER_QEI3IOC_QEBPOL << _QEI3IOC_QEBPOL_POSITION ) |
			( QEI_USER_QEI3IOC_IDXPOL << _QEI3IOC_IDXPOL_POSITION ) |
			( QEI_USER_QEI3IOC_HOMPOL << _QEI3IOC_HOMPOL_POSITION ) |
			( QEI_USER_QEI3IOC_SWPAB << _QEI3IOC_SWPAB_POSITION ) |
			( QEI_USER_QEI3IOC_OUTFNC << _QEI3IOC_OUTFNC_POSITION ) |
			( QEI_USER_QEI3IOC_QFDIV << _QEI3IOC_QFDIV_POSITION ) |
			( QEI_USER_QEI3IOC_FLTREN << _QEI3IOC_FLTREN_POSITION ) |
			( QEI_USER_QEI3IOC_QCAPEN << _QEI3IOC_QCAPEN_POSITION ) |
			( QEI_USER_QEI3IOC_HCAPEN << _QEI3IOC_HCAPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI3IOCbits.QEA = QEI_USER_QEI3IOC_QEA;
			QEI3IOCbits.QEB = QEI_USER_QEI3IOC_QEB;
			QEI3IOCbits.INDEX = QEI_USER_QEI3IOC_INDEX;
			QEI3IOCbits.HOME = QEI_USER_QEI3IOC_HOME;
			QEI3IOCbits.QEAPOL = QEI_USER_QEI3IOC_QEAPOL;
			QEI3IOCbits.QEBPOL = QEI_USER_QEI3IOC_QEBPOL;
			QEI3IOCbits.IDXPOL = QEI_USER_QEI3IOC_IDXPOL;
			QEI3IOCbits.HOMPOL = QEI_USER_QEI3IOC_HOMPOL;
			QEI3IOCbits.SWPAB = QEI_USER_QEI3IOC_SWPAB;
			QEI3IOCbits.OUTFNC = QEI_USER_QEI3IOC_OUTFNC;
			QEI3IOCbits.QFDIV = QEI_USER_QEI3IOC_QFDIV;
			QEI3IOCbits.FLTREN = QEI_USER_QEI3IOC_FLTREN;
			QEI3IOCbits.QCAPEN = QEI_USER_QEI3IOC_QCAPEN;
			QEI3IOCbits.HCAPEN = QEI_USER_QEI3IOC_HCAPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI3STAT = 
			( QEI_USER_QEI3STAT_IDXIEN << _QEI3STAT_IDXIEN_POSITION ) |
			( QEI_USER_QEI3STAT_IDXIRQ << _QEI3STAT_IDXIRQ_POSITION ) |
			( QEI_USER_QEI3STAT_HOMIEN << _QEI3STAT_HOMIEN_POSITION ) |
			( QEI_USER_QEI3STAT_HOMIRQ << _QEI3STAT_HOMIRQ_POSITION ) |
			( QEI_USER_QEI3STAT_VELOVIEN << _QEI3STAT_VELOVIEN_POSITION ) |
			( QEI_USER_QEI3STAT_VELOVIRQ << _QEI3STAT_VELOVIRQ_POSITION ) |
			( QEI_USER_QEI3STAT_PCIIEN << _QEI3STAT_PCIIEN_POSITION ) |
			( QEI_USER_QEI3STAT_PCIIRQ << _QEI3STAT_PCIIRQ_POSITION ) |
			( QEI_USER_QEI3STAT_POSOVIEN << _QEI3STAT_POSOVIEN_POSITION ) |
			( QEI_USER_QEI3STAT_POSOVIRQ << _QEI3STAT_POSOVIRQ_POSITION ) |
			( QEI_USER_QEI3STAT_PCLEQIEN << _QEI3STAT_PCLEQIEN_POSITION ) |
			( QEI_USER_QEI3STAT_PCLEQIRQ << _QEI3STAT_PCLEQIRQ_POSITION ) |
			( QEI_USER_QEI3STAT_PCHEQIEN << _QEI3STAT_PCHEQIEN_POSITION ) |
			( QEI_USER_QEI3STAT_PCHEQIRQ << _QEI3STAT_PCHEQIRQ_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI3STATbits.IDXIEN = QEI_USER_QEI3STAT_IDXIEN;
			QEI3STATbits.IDXIRQ = QEI_USER_QEI3STAT_IDXIRQ;
			QEI3STATbits.HOMIEN = QEI_USER_QEI3STAT_HOMIEN;
			QEI3STATbits.HOMIRQ = QEI_USER_QEI3STAT_HOMIRQ;
			QEI3STATbits.VELOVIEN = QEI_USER_QEI3STAT_VELOVIEN;
			QEI3STATbits.VELOVIRQ = QEI_USER_QEI3STAT_VELOVIRQ;
			QEI3STATbits.PCIIEN = QEI_USER_QEI3STAT_PCIIEN;
			QEI3STATbits.PCIIRQ = QEI_USER_QEI3STAT_PCIIRQ;
			QEI3STATbits.POSOVIEN = QEI_USER_QEI3STAT_POSOVIEN;
			QEI3STATbits.POSOVIRQ = QEI_USER_QEI3STAT_POSOVIRQ;
			QEI3STATbits.PCLEQIEN = QEI_USER_QEI3STAT_PCLEQIEN;
			QEI3STATbits.PCLEQIRQ = QEI_USER_QEI3STAT_PCLEQIRQ;
			QEI3STATbits.PCHEQIEN = QEI_USER_QEI3STAT_PCHEQIEN;
			QEI3STATbits.PCHEQIRQ = QEI_USER_QEI3STAT_PCHEQIRQ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* POS3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		POS3CNT = QEI_USER_POS3CNT;
	/*-----------------------------------------------------------------------*/
	/* POS3HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		POS3HLD = QEI_USER_POS3HLD;
	/*-----------------------------------------------------------------------*/
	/* VEL3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL3CNT = QEI_USER_VEL3CNT;
	/*-----------------------------------------------------------------------*/
	/* VEL3HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL3HLD = QEI_USER_VEL3HLD;
	/*-----------------------------------------------------------------------*/
	/* INT3TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		INT3TMR = QEI_USER_INT3TMR;
	/*-----------------------------------------------------------------------*/
	/* INT3HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INT3HLD = QEI_USER_INT3HLD;
	/*-----------------------------------------------------------------------*/
	/* INDX3CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX3CNT = QEI_USER_INDX3CNT;
	/*-----------------------------------------------------------------------*/
	/* INDX3HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX3HLD = QEI_USER_INDX3HLD;
	/*-----------------------------------------------------------------------*/
	/* QEI3GECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI3GEC = QEI_USER_QEI3GEC;
	/*-----------------------------------------------------------------------*/
	/* QEI3LECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI3LEC = QEI_USER_QEI3LEC;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn           vdg_QEI4_Set_Register(void)
* @brief        QEI4レジスタを初期化します
* @param
* @return
* @detail     
*/
/*----------------------------------------------------------------------------*/
void vdg_QEI4_Set_Register(void)
{
#if ( PMD_QEI4MD == PMD_MODULE_ENABLE )
   /*-----------------------------------------------------------------------*/
	/* QEI4CONレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI4CON = 
			( QEI_USER_QEI4CON_CCM << _QEI4CON_CCM_POSITION ) |
			( QEI_USER_QEI4CON_GATEN << _QEI4CON_GATEN_POSITION ) |
			( QEI_USER_QEI4CON_CNTPOL << _QEI4CON_CNTPOL_POSITION ) |
			( QEI_USER_QEI4CON_INTDIV << _QEI4CON_INTDIV_POSITION ) |
			( QEI_USER_QEI4CON_IMV << _QEI4CON_IMV_POSITION ) |
			( QEI_USER_QEI4CON_PIMOD << _QEI4CON_PIMOD_POSITION ) |
			( QEI_USER_QEI4CON_SIDL << _QEI4CON_SIDL_POSITION ) |
			( QEI_USER_QEI4CON_ON << _QEI4CON_ON_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI4CONbits.CCM = QEI_USER_QEI4CON_CCM;
			QEI4CONbits.GATEN = QEI_USER_QEI4CON_GATEN;
			QEI4CONbits.CNTPOL = QEI_USER_QEI4CON_CNTPOL;
			QEI4CONbits.INTDIV = QEI_USER_QEI4CON_INTDIV;
			QEI4CONbits.IMV = QEI_USER_QEI4CON_IMV;
			QEI4CONbits.PIMOD = QEI_USER_QEI4CON_PIMOD;
			QEI4CONbits.SIDL = QEI_USER_QEI4CON_SIDL;
			QEI4CONbits.ON = QEI_USER_QEI4CON_ON;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI4IOCレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI4IOC = 
			( QEI_USER_QEI4IOC_QEA << _QEI4IOC_QEA_POSITION ) |
			( QEI_USER_QEI4IOC_QEB << _QEI4IOC_QEB_POSITION ) |
			( QEI_USER_QEI4IOC_INDEX << _QEI4IOC_INDEX_POSITION ) |
			( QEI_USER_QEI4IOC_HOME << _QEI4IOC_HOME_POSITION ) |
			( QEI_USER_QEI4IOC_QEAPOL << _QEI4IOC_QEAPOL_POSITION ) |
			( QEI_USER_QEI4IOC_QEBPOL << _QEI4IOC_QEBPOL_POSITION ) |
			( QEI_USER_QEI4IOC_IDXPOL << _QEI4IOC_IDXPOL_POSITION ) |
			( QEI_USER_QEI4IOC_HOMPOL << _QEI4IOC_HOMPOL_POSITION ) |
			( QEI_USER_QEI4IOC_SWPAB << _QEI4IOC_SWPAB_POSITION ) |
			( QEI_USER_QEI4IOC_OUTFNC << _QEI4IOC_OUTFNC_POSITION ) |
			( QEI_USER_QEI4IOC_QFDIV << _QEI4IOC_QFDIV_POSITION ) |
			( QEI_USER_QEI4IOC_FLTREN << _QEI4IOC_FLTREN_POSITION ) |
			( QEI_USER_QEI4IOC_QCAPEN << _QEI4IOC_QCAPEN_POSITION ) |
			( QEI_USER_QEI4IOC_HCAPEN << _QEI4IOC_HCAPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI4IOCbits.QEA = QEI_USER_QEI4IOC_QEA;
			QEI4IOCbits.QEB = QEI_USER_QEI4IOC_QEB;
			QEI4IOCbits.INDEX = QEI_USER_QEI4IOC_INDEX;
			QEI4IOCbits.HOME = QEI_USER_QEI4IOC_HOME;
			QEI4IOCbits.QEAPOL = QEI_USER_QEI4IOC_QEAPOL;
			QEI4IOCbits.QEBPOL = QEI_USER_QEI4IOC_QEBPOL;
			QEI4IOCbits.IDXPOL = QEI_USER_QEI4IOC_IDXPOL;
			QEI4IOCbits.HOMPOL = QEI_USER_QEI4IOC_HOMPOL;
			QEI4IOCbits.SWPAB = QEI_USER_QEI4IOC_SWPAB;
			QEI4IOCbits.OUTFNC = QEI_USER_QEI4IOC_OUTFNC;
			QEI4IOCbits.QFDIV = QEI_USER_QEI4IOC_QFDIV;
			QEI4IOCbits.FLTREN = QEI_USER_QEI4IOC_FLTREN;
			QEI4IOCbits.QCAPEN = QEI_USER_QEI4IOC_QCAPEN;
			QEI4IOCbits.HCAPEN = QEI_USER_QEI4IOC_HCAPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* QEI4STATレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI4STAT = 
			( QEI_USER_QEI4STAT_IDXIEN << _QEI4STAT_IDXIEN_POSITION ) |
			( QEI_USER_QEI4STAT_IDXIRQ << _QEI4STAT_IDXIRQ_POSITION ) |
			( QEI_USER_QEI4STAT_HOMIEN << _QEI4STAT_HOMIEN_POSITION ) |
			( QEI_USER_QEI4STAT_HOMIRQ << _QEI4STAT_HOMIRQ_POSITION ) |
			( QEI_USER_QEI4STAT_VELOVIEN << _QEI4STAT_VELOVIEN_POSITION ) |
			( QEI_USER_QEI4STAT_VELOVIRQ << _QEI4STAT_VELOVIRQ_POSITION ) |
			( QEI_USER_QEI4STAT_PCIIEN << _QEI4STAT_PCIIEN_POSITION ) |
			( QEI_USER_QEI4STAT_PCIIRQ << _QEI4STAT_PCIIRQ_POSITION ) |
			( QEI_USER_QEI4STAT_POSOVIEN << _QEI4STAT_POSOVIEN_POSITION ) |
			( QEI_USER_QEI4STAT_POSOVIRQ << _QEI4STAT_POSOVIRQ_POSITION ) |
			( QEI_USER_QEI4STAT_PCLEQIEN << _QEI4STAT_PCLEQIEN_POSITION ) |
			( QEI_USER_QEI4STAT_PCLEQIRQ << _QEI4STAT_PCLEQIRQ_POSITION ) |
			( QEI_USER_QEI4STAT_PCHEQIEN << _QEI4STAT_PCHEQIEN_POSITION ) |
			( QEI_USER_QEI4STAT_PCHEQIRQ << _QEI4STAT_PCHEQIRQ_POSITION ) ;
		#ifdef DEF_BITNAME
			QEI4STATbits.IDXIEN = QEI_USER_QEI4STAT_IDXIEN;
			QEI4STATbits.IDXIRQ = QEI_USER_QEI4STAT_IDXIRQ;
			QEI4STATbits.HOMIEN = QEI_USER_QEI4STAT_HOMIEN;
			QEI4STATbits.HOMIRQ = QEI_USER_QEI4STAT_HOMIRQ;
			QEI4STATbits.VELOVIEN = QEI_USER_QEI4STAT_VELOVIEN;
			QEI4STATbits.VELOVIRQ = QEI_USER_QEI4STAT_VELOVIRQ;
			QEI4STATbits.PCIIEN = QEI_USER_QEI4STAT_PCIIEN;
			QEI4STATbits.PCIIRQ = QEI_USER_QEI4STAT_PCIIRQ;
			QEI4STATbits.POSOVIEN = QEI_USER_QEI4STAT_POSOVIEN;
			QEI4STATbits.POSOVIRQ = QEI_USER_QEI4STAT_POSOVIRQ;
			QEI4STATbits.PCLEQIEN = QEI_USER_QEI4STAT_PCLEQIEN;
			QEI4STATbits.PCLEQIRQ = QEI_USER_QEI4STAT_PCLEQIRQ;
			QEI4STATbits.PCHEQIEN = QEI_USER_QEI4STAT_PCHEQIEN;
			QEI4STATbits.PCHEQIRQ = QEI_USER_QEI4STAT_PCHEQIRQ;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* POS4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		POS4CNT = QEI_USER_POS4CNT;
	/*-----------------------------------------------------------------------*/
	/* POS4HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		POS4HLD = QEI_USER_POS4HLD;
	/*-----------------------------------------------------------------------*/
	/* VEL4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL4CNT = QEI_USER_VEL4CNT;
	/*-----------------------------------------------------------------------*/
	/* VEL4HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		VEL4HLD = QEI_USER_VEL4HLD;
	/*-----------------------------------------------------------------------*/
	/* INT4TMRレジスタ */
	/*-----------------------------------------------------------------------*/
		INT4TMR = QEI_USER_INT4TMR;
	/*-----------------------------------------------------------------------*/
	/* INT4HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INT4HLD = QEI_USER_INT4HLD;
	/*-----------------------------------------------------------------------*/
	/* INDX4CNTレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX4CNT = QEI_USER_INDX4CNT;
	/*-----------------------------------------------------------------------*/
	/* INDX4HLDレジスタ */
	/*-----------------------------------------------------------------------*/
		INDX4HLD = QEI_USER_INDX4HLD;
	/*-----------------------------------------------------------------------*/
	/* QEI4GECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI4GEC = QEI_USER_QEI4GEC;
	/*-----------------------------------------------------------------------*/
	/* QEI4LECレジスタ */
	/*-----------------------------------------------------------------------*/
		QEI4LEC = QEI_USER_QEI4LEC;
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn           vdg_QEI_Set_Register(void)
* @brief        QEIレジスタを初期化します
* @param
* @return
* @detail     
*/
/*----------------------------------------------------------------------------*/
void vdg_QEI_Set_Register(void)
{
#if ( PMD_QEI1MD == PMD_MODULE_ENABLE )
	vdg_QEI1_Set_Register();
#endif
#if ( PMD_QEI2MD == PMD_MODULE_ENABLE )
	vdg_QEI2_Set_Register();
#endif
#if ( PMD_QEI3MD == PMD_MODULE_ENABLE )
	vdg_QEI3_Set_Register();
#endif
#if ( PMD_QEI4MD == PMD_MODULE_ENABLE )
	vdg_QEI4_Set_Register();
#endif
}