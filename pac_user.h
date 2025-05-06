
#ifndef PAC_USER_H
#define	PAC_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "pac_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/* PACCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define PAC_USER_PACCON1_IVTBASELK	( 0U )
#define PAC_USER_PACCON1_IVTCREGLK	( 0U )
#define PAC_USER_PACCON1_BMXIRAMLLK	( 0U )
#define PAC_USER_PACCON1_BMXIRAMHLK	( 0U )
#define PAC_USER_PACCON1_PCLKCONLK	( 0U )
#define PAC_USER_PACCON1_IOIMCON1LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON2LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON3LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON4LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON5LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON6LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON7LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON8LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON9LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON10LK	( 0U )
#define PAC_USER_PACCON1_IOIMCON11LK	( 0U )
#define PAC_USER_PACCON1_IVTBASEWR	( 0U )
#define PAC_USER_PACCON1_IVTCREGWR	( 0U )
#define PAC_USER_PACCON1_BMXIRAMLWR	( 0U )
#define PAC_USER_PACCON1_BMXIRAMHWR	( 0U )
#define PAC_USER_PACCON1_PCLKCONWR	( 0U )
#define PAC_USER_PACCON1_IOIMCON1WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON2WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON3WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON4WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON5WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON6WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON7WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON8WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON9WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON10WR	( 0U )
#define PAC_USER_PACCON1_IOIMCON11WR	( 0U )

/*----------------------------------------------------------------------------*/
/* PACCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define PAC_USER_PACCON2_IOIMCON12LK	( 0U )
#define PAC_USER_PACCON2_IOIMCON13LK	( 0U )
#define PAC_USER_PACCON2_IOIMCON14LK	( 0U )
#define PAC_USER_PACCON2_IOIMCON15LK	( 0U )
#define PAC_USER_PACCON2_IOIMCON16LK	( 0U )
#define PAC_USER_PACCON2_NVMCONLK	( 0U )
#define PAC_USER_PACCON2_OSCCTRLLK	( 0U )
#define PAC_USER_PACCON2_CM1CONLK	( 0U )
#define PAC_USER_PACCON2_CM1RANGELK	( 0U )
#define PAC_USER_PACCON2_CM2CONLK	( 0U )
#define PAC_USER_PACCON2_CM2RANGELK	( 0U )
#define PAC_USER_PACCON2_CM3CONLK	( 0U )
#define PAC_USER_PACCON2_CM3RANGELK	( 0U )
#define PAC_USER_PACCON2_CM4CONLK	( 0U )
#define PAC_USER_PACCON2_CM4RANGELK	( 0U )
#define PAC_USER_PACCON2_WDTCONLK	( 0U )
#define PAC_USER_PACCON2_IOIMCON12WR	( 0U )
#define PAC_USER_PACCON2_IOIMCON13WR	( 0U )
#define PAC_USER_PACCON2_IOIMCON14WR	( 0U )
#define PAC_USER_PACCON2_IOIMCON15WR	( 0U )
#define PAC_USER_PACCON2_IOIMCON16WR	( 0U )
#define PAC_USER_PACCON2_NVMCONWR	( 0U )
#define PAC_USER_PACCON2_OSCCTRLWR	( 0U )
#define PAC_USER_PACCON2_CM1CONWR	( 0U )
#define PAC_USER_PACCON2_CM1RANGEWR	( 0U )
#define PAC_USER_PACCON2_CM2CONWR	( 0U )
#define PAC_USER_PACCON2_CM2RANGEWR	( 0U )
#define PAC_USER_PACCON2_CM3CONWR	( 0U )
#define PAC_USER_PACCON2_CM3RANGEWR	( 0U )
#define PAC_USER_PACCON2_CM4CONWR	( 0U )
#define PAC_USER_PACCON2_CM4RANGEWR	( 0U )
#define PAC_USER_PACCON2_WDTCONWR	( 0U )

/*----------------------------------------------------------------------------*/
/* PACCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define PAC_USER_PACCON3_RPCONLK	( 0U )
#define PAC_USER_PACCON3_PMDLK	( 0U )
#define PAC_USER_PACCON3_MBISTCONLK	( 0U )
#define PAC_USER_PACCON3_APCLKCONLK	( 0U )
#define PAC_USER_PACCON3_OPAMP1LK	( 0U )
#define PAC_USER_PACCON3_OPAMP2LK	( 0U )
#define PAC_USER_PACCON3_OPAMP3LK	( 0U )
#define PAC_USER_PACCON3_IBIASCONLK	( 0U )
#define PAC_USER_PACCON3_RPCONWR	( 0U )
#define PAC_USER_PACCON3_PMDWR	( 0U )
#define PAC_USER_PACCON3_MBISTCONWR	( 0U )
#define PAC_USER_PACCON3_APCLKCONWR	( 0U )
#define PAC_USER_PACCON3_OPAMP1WR	( 0U )
#define PAC_USER_PACCON3_OPAMP2WR	( 0U )
#define PAC_USER_PACCON3_OPAMP3WR	( 0U )
#define PAC_USER_PACCON3_IBIASCONWR	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* PAC_USER_H */

