
#ifndef SECURITY_USER_H
#define	SECURITY_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "security_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* UCPROTレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_UCPROT_EPUCB	( 0U )
#define SECURITY_USER_UCPROT_WPUCB	( 0U )
#define SECURITY_USER_UCPROT_WPUCA	( 0U )
#define SECURITY_USER_UCPROT_WPUCAI	( 0U )

/*----------------------------------------------------------------------------*/
/* IRTCTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_IRTCTRL_EAA	( 0U )
#define SECURITY_USER_IRTCTRL_DBG	( 0U )
#define SECURITY_USER_IRTCTRL_DONE	( 0U )
#define SECURITY_USER_IRTCTRL_PLCK	( 0U )
#define SECURITY_USER_IRTCTRL_IACT	( 0U )
/*----------------------------------------------------------------------------*/
/* IRTSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_IRTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* PR0CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR0CTRL_RDIS	( 0U )
#define SECURITY_USER_PR0CTRL_ERAO	( 0U )
#define SECURITY_USER_PR0CTRL_EX	( 0U )
#define SECURITY_USER_PR0CTRL_RD	( 0U )
#define SECURITY_USER_PR0CTRL_WR	( 0U )
#define SECURITY_USER_PR0CTRL_CRC	( 0U )
#define SECURITY_USER_PR0CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR0CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR0STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR0ST	( 0U )

/*----------------------------------------------------------------------------*/
/* PR0ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR0END	( 0U )

/*----------------------------------------------------------------------------*/
/* PR0LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR0LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR0LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR0LOCK_LOCK	( 0U )
#define SECURITY_USER_PR0LOCK_KEY	( 0U )

/*----------------------------------------------------------------------------*/
/* PR1CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR1CTRL_RDIS	( 0U )
#define SECURITY_USER_PR1CTRL_ERAO	( 0U )
#define SECURITY_USER_PR1CTRL_EX	( 0U )
#define SECURITY_USER_PR1CTRL_RD	( 0U )
#define SECURITY_USER_PR1CTRL_WR	( 0U )
#define SECURITY_USER_PR1CTRL_CRC	( 0U )
#define SECURITY_USER_PR1CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR1CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR1STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR1ST	( 0U )
/*----------------------------------------------------------------------------*/
/* PR1ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR1END	( 0U )
/*----------------------------------------------------------------------------*/
/* PR1LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR1LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR1LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR1LOCK_LOCK	( 0U )
#define SECURITY_USER_PR1LOCK_KEY	( 0U )

/*----------------------------------------------------------------------------*/
/* PR2CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR2CTRL_RDIS	( 0U )
#define SECURITY_USER_PR2CTRL_ERAO	( 0U )
#define SECURITY_USER_PR2CTRL_EX	( 0U )
#define SECURITY_USER_PR2CTRL_RD	( 0U )
#define SECURITY_USER_PR2CTRL_WR	( 0U )
#define SECURITY_USER_PR2CTRL_CRC	( 0U )
#define SECURITY_USER_PR2CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR2CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR2STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR2ST	( 0U )
/*----------------------------------------------------------------------------*/
/* PR2ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR2END	( 0U )
/*----------------------------------------------------------------------------*/
/* PR2LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR2LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR2LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR2LOCK_LOCK	( 0U )
#define SECURITY_USER_PR2LOCK_KEY	( 0U )
/*----------------------------------------------------------------------------*/
/* PR3CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR3CTRL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR3CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR3CTRL_RDIS	( 0U )
#define SECURITY_USER_PR3CTRL_ERAO	( 0U )
#define SECURITY_USER_PR3CTRL_EX	( 0U )
#define SECURITY_USER_PR3CTRL_RD	( 0U )
#define SECURITY_USER_PR3CTRL_WR	( 0U )
#define SECURITY_USER_PR3CTRL_CRC	( 0U )
#define SECURITY_USER_PR3CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR3CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR3STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR3ST	( 0U )
/*----------------------------------------------------------------------------*/
/* PR3ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR3END	( 0U )
/*----------------------------------------------------------------------------*/
/* PR3LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR3LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR3LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR3LOCK_LOCK	( 0U )
#define SECURITY_USER_PR3LOCK_KEY	( 0U )
/*----------------------------------------------------------------------------*/
/* PR4CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR4CTRL_RDIS	( 0U )
#define SECURITY_USER_PR4CTRL_ERAO	( 0U )
#define SECURITY_USER_PR4CTRL_EX	( 0U )
#define SECURITY_USER_PR4CTRL_RD	( 0U )
#define SECURITY_USER_PR4CTRL_WR	( 0U )
#define SECURITY_USER_PR4CTRL_CRC	( 0U )
#define SECURITY_USER_PR4CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR4CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR4STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR4ST	( 0U )
/*----------------------------------------------------------------------------*/
/* PR4ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR4END	( 0U )
/*----------------------------------------------------------------------------*/
/* PR4LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR4LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR4LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR4LOCK_LOCK	( 0U )
#define SECURITY_USER_PR4LOCK_KEY	( 0U )

/*----------------------------------------------------------------------------*/
/* PR5CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR5CTRL_RDIS	( 0U )
#define SECURITY_USER_PR5CTRL_ERAO	( 0U )
#define SECURITY_USER_PR5CTRL_EX	( 0U )
#define SECURITY_USER_PR5CTRL_RD	( 0U )
#define SECURITY_USER_PR5CTRL_WR	( 0U )
#define SECURITY_USER_PR5CTRL_CRC	( 0U )
#define SECURITY_USER_PR5CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR5CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR5STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR5ST	( 0U )
/*----------------------------------------------------------------------------*/
/* PR5ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR5END	( 0U )
/*----------------------------------------------------------------------------*/
/* PR5LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR5LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR5LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR5LOCK_LOCK	( 0U )
#define SECURITY_USER_PR5LOCK_KEY	( 0U )

/*----------------------------------------------------------------------------*/
/* PR6CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR6CTRL_RDIS	( 0U )
#define SECURITY_USER_PR6CTRL_ERAO	( 0U )
#define SECURITY_USER_PR6CTRL_EX	( 0U )
#define SECURITY_USER_PR6CTRL_RD	( 0U )
#define SECURITY_USER_PR6CTRL_WR	( 0U )
#define SECURITY_USER_PR6CTRL_CRC	( 0U )
#define SECURITY_USER_PR6CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR6CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR6STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR6ST	( 0U )
/*----------------------------------------------------------------------------*/
/* PR6ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR6END	( 0U )
/*----------------------------------------------------------------------------*/
/* PR6LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR6LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR6LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR6LOCK_LOCK	( 0U )
#define SECURITY_USER_PR6LOCK_KEY	( 0U )
/*----------------------------------------------------------------------------*/
/* PR7CTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR7CTRL_RDIS	( 0U )
#define SECURITY_USER_PR7CTRL_ERAO	( 0U )
#define SECURITY_USER_PR7CTRL_EX	( 0U )
#define SECURITY_USER_PR7CTRL_RD	( 0U )
#define SECURITY_USER_PR7CTRL_WR	( 0U )
#define SECURITY_USER_PR7CTRL_CRC	( 0U )
#define SECURITY_USER_PR7CTRL_RTYPE	( 0U )
#define SECURITY_USER_PR7CTRL_PSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* PR7STレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR7ST	( 0U )
/*----------------------------------------------------------------------------*/
/* PR7ENDレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR7END	( 0U )
/*----------------------------------------------------------------------------*/
/* PR7LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR7LOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* PR7LOCKレジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PR7LOCK_LOCK	( 0U )
#define SECURITY_USER_PR7LOCK_KEY	( 0U )

/*----------------------------------------------------------------------------*/
/* PACCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PACCON1_IVTBASELK	( 0U )
#define SECURITY_USER_PACCON1_IVTCREGLK	( 0U )
#define SECURITY_USER_PACCON1_BMXIRAMLLK	( 0U )
#define SECURITY_USER_PACCON1_BMXIRAMHLK	( 0U )
#define SECURITY_USER_PACCON1_PCLKCONLK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON1LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON2LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON3LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON4LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON5LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON6LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON7LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON8LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON9LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON10LK	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON11LK	( 0U )
#define SECURITY_USER_PACCON1_IVTBASEWR	( 0U )
#define SECURITY_USER_PACCON1_IVTCREGWR	( 0U )
#define SECURITY_USER_PACCON1_BMXIRAMLWR	( 0U )
#define SECURITY_USER_PACCON1_BMXIRAMHWR	( 0U )
#define SECURITY_USER_PACCON1_PCLKCONWR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON1WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON2WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON3WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON4WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON5WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON6WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON7WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON8WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON9WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON10WR	( 0U )
#define SECURITY_USER_PACCON1_IOIMCON11WR	( 0U )

/*----------------------------------------------------------------------------*/
/* PACCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PACCON2_IOIMCON12LK	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON13LK	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON14LK	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON15LK	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON16LK	( 0U )
#define SECURITY_USER_PACCON2_NVMCONLK	( 0U )
#define SECURITY_USER_PACCON2_OSCCTRLLK	( 0U )
#define SECURITY_USER_PACCON2_CM1CONLK	( 0U )
#define SECURITY_USER_PACCON2_CM1RANGELK	( 0U )
#define SECURITY_USER_PACCON2_CM2CONLK	( 0U )
#define SECURITY_USER_PACCON2_CM2RANGELK	( 0U )
#define SECURITY_USER_PACCON2_CM3CONLK	( 0U )
#define SECURITY_USER_PACCON2_CM3RANGELK	( 0U )
#define SECURITY_USER_PACCON2_CM4CONLK	( 0U )
#define SECURITY_USER_PACCON2_CM4RANGELK	( 0U )
#define SECURITY_USER_PACCON2_WDTCONLK	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON12WR	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON13WR	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON14WR	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON15WR	( 0U )
#define SECURITY_USER_PACCON2_IOIMCON16WR	( 0U )
#define SECURITY_USER_PACCON2_NVMCONWR	( 0U )
#define SECURITY_USER_PACCON2_OSCCTRLWR	( 0U )
#define SECURITY_USER_PACCON2_CM1CONWR	( 0U )
#define SECURITY_USER_PACCON2_CM1RANGEWR	( 0U )
#define SECURITY_USER_PACCON2_CM2CONWR	( 0U )
#define SECURITY_USER_PACCON2_CM2RANGEWR	( 0U )
#define SECURITY_USER_PACCON2_CM3CONWR	( 0U )
#define SECURITY_USER_PACCON2_CM3RANGEWR	( 0U )
#define SECURITY_USER_PACCON2_CM4CONWR	( 0U )
#define SECURITY_USER_PACCON2_CM4RANGEWR	( 0U )
#define SECURITY_USER_PACCON2_WDTCONWR	( 0U )

/*----------------------------------------------------------------------------*/
/* PACCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define SECURITY_USER_PACCON3_RPCONLK	( 0U )
#define SECURITY_USER_PACCON3_PMDLK	( 0U )
#define SECURITY_USER_PACCON3_MBISTCONLK	( 0U )
#define SECURITY_USER_PACCON3_APCLKCONLK	( 0U )
#define SECURITY_USER_PACCON3_OPAMP1LK	( 0U )
#define SECURITY_USER_PACCON3_OPAMP2LK	( 0U )
#define SECURITY_USER_PACCON3_OPAMP3LK	( 0U )
#define SECURITY_USER_PACCON3_IBIASCONLK	( 0U )
#define SECURITY_USER_PACCON3_RPCONWR	( 0U )
#define SECURITY_USER_PACCON3_PMDWR	( 0U )
#define SECURITY_USER_PACCON3_MBISTCONWR	( 0U )
#define SECURITY_USER_PACCON3_APCLKCONWR	( 0U )
#define SECURITY_USER_PACCON3_OPAMP1WR	( 0U )
#define SECURITY_USER_PACCON3_OPAMP2WR	( 0U )
#define SECURITY_USER_PACCON3_OPAMP3WR	( 0U )
#define SECURITY_USER_PACCON3_IBIASCONWR	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* SECURITY_USER_H */

