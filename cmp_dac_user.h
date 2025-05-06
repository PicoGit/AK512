
#ifndef CMPDAC_USER_H
#define	CMPDAC_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "cmp_dac_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* DACCTRL1レジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DACCTRL1_FCLKDIV	( 0U )
#define CMP_USER_DACCTRL1_DNLADJ	( 0U )
#define CMP_USER_DACCTRL1_SIDL	( 0U )
#define CMP_USER_DACCTRL1_ON	( 0U )
#define CMP_USER_DACCTRL1_NEGINLADJ	( 0U )
#define CMP_USER_DACCTRL1_POSINLADJ	( 0U )
#define CMP_USER_DACCTRL1_RREN	( 0U )

/*----------------------------------------------------------------------------*/
/* DACCTRL2レジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DACCTRL2_TMODTIME	( 0U )
#define CMP_USER_DACCTRL2_SSTIME	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC1CON_UPDREQ	( 0U )
#define CMP_USER_DAC1CON_UPDATE	( 0U )
#define CMP_USER_DAC1CON_UPDTRG	( 0U )
#define CMP_USER_DAC1CON_DACOEN	( 0U )
#define CMP_USER_DAC1CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC1CON_IRQM	( 0U )
#define CMP_USER_DAC1CON_DACEN	( 0U )
#define CMP_USER_DAC1CON_TMCB	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC1CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC1CMP_INNSEL	( 0U )
#define CMP_USER_DAC1CMP_INPSEL	( 0U )
#define CMP_USER_DAC1CMP_CMPPOL	( 0U )
#define CMP_USER_DAC1CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC1CMP_FLTREN	( 0U )
#define CMP_USER_DAC1CMP_CBE	( 0U )
#define CMP_USER_DAC1CMP_HYSSEL	( 0U )
#define CMP_USER_DAC1CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC1DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC1DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC1DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC1DAT_DACLOW	( 0U )
#define CMP_USER_DAC1DAT_DACDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC1SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC1SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC1SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC1SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC1SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC1SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC1SLPCON_PSE	( 0U )
#define CMP_USER_DAC1SLPCON_TWME	( 0U )
#define CMP_USER_DAC1SLPCON_HME	( 0U )
#define CMP_USER_DAC1SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC1SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC1SLPDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC2CON_UPDREQ	( 0U )
#define CMP_USER_DAC2CON_UPDATE	( 0U )
#define CMP_USER_DAC2CON_UPDTRG	( 0U )
#define CMP_USER_DAC2CON_DACOEN	( 0U )
#define CMP_USER_DAC2CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC2CON_IRQM	( 0U )
#define CMP_USER_DAC2CON_DACEN	( 0U )
#define CMP_USER_DAC2CON_TMCB	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC2CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC2CMP_INNSEL	( 0U )
#define CMP_USER_DAC2CMP_INPSEL	( 0U )
#define CMP_USER_DAC2CMP_CMPPOL	( 0U )
#define CMP_USER_DAC2CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC2CMP_FLTREN	( 0U )
#define CMP_USER_DAC2CMP_CBE	( 0U )
#define CMP_USER_DAC2CMP_HYSSEL	( 0U )
#define CMP_USER_DAC2CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC2DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC2DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC2DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC2DAT_DACLOW	( 0U )
#define CMP_USER_DAC2DAT_DACDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC2SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC2SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC2SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC2SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC2SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC2SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC2SLPCON_PSE	( 0U )
#define CMP_USER_DAC2SLPCON_TWME	( 0U )
#define CMP_USER_DAC2SLPCON_HME	( 0U )
#define CMP_USER_DAC2SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC2SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC2SLPDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC3CON_UPDREQ	( 0U )
#define CMP_USER_DAC3CON_UPDATE	( 0U )
#define CMP_USER_DAC3CON_UPDTRG	( 0U )
#define CMP_USER_DAC3CON_DACOEN	( 0U )
#define CMP_USER_DAC3CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC3CON_IRQM	( 0U )
#define CMP_USER_DAC3CON_DACEN	( 0U )
#define CMP_USER_DAC3CON_TMCB	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC3CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC3CMP_INNSEL	( 0U )
#define CMP_USER_DAC3CMP_INPSEL	( 0U )
#define CMP_USER_DAC3CMP_CMPPOL	( 0U )
#define CMP_USER_DAC3CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC3CMP_FLTREN	( 0U )
#define CMP_USER_DAC3CMP_CBE	( 0U )
#define CMP_USER_DAC3CMP_HYSSEL	( 0U )
#define CMP_USER_DAC3CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC3DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC3DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC3DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC3DAT_DACLOW	( 0U )
#define CMP_USER_DAC3DAT_DACDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC3SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC3SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC3SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC3SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC3SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC3SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC3SLPCON_PSE	( 0U )
#define CMP_USER_DAC3SLPCON_TWME	( 0U )
#define CMP_USER_DAC3SLPCON_HME	( 0U )
#define CMP_USER_DAC3SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC3SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC3SLPDAT	( 0U )


/*----------------------------------------------------------------------------*/
/* DAC4CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC4CON_UPDREQ	( 0U )
#define CMP_USER_DAC4CON_UPDATE	( 0U )
#define CMP_USER_DAC4CON_UPDTRG	( 0U )
#define CMP_USER_DAC4CON_DACOEN	( 0U )
#define CMP_USER_DAC4CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC4CON_IRQM	( 0U )
#define CMP_USER_DAC4CON_DACEN	( 0U )
#define CMP_USER_DAC4CON_TMCB	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC4CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC4CMP_INNSEL	( 0U )
#define CMP_USER_DAC4CMP_INPSEL	( 0U )
#define CMP_USER_DAC4CMP_CMPPOL	( 0U )
#define CMP_USER_DAC4CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC4CMP_FLTREN	( 0U )
#define CMP_USER_DAC4CMP_CBE	( 0U )
#define CMP_USER_DAC4CMP_HYSSEL	( 0U )
#define CMP_USER_DAC4CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC4DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC4DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC4DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC4DAT_DACLOW	( 0U )
#define CMP_USER_DAC4DAT_DACDAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC4SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC4SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC4SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC4SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC4SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC4SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC4SLPCON_PSE	( 0U )
#define CMP_USER_DAC4SLPCON_TWME	( 0U )
#define CMP_USER_DAC4SLPCON_HME	( 0U )
#define CMP_USER_DAC4SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC4SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC4SLPDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC5CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC5CON_UPDREQ	( 0U )
#define CMP_USER_DAC5CON_UPDATE	( 0U )
#define CMP_USER_DAC5CON_UPDTRG	( 0U )
#define CMP_USER_DAC5CON_DACOEN	( 0U )
#define CMP_USER_DAC5CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC5CON_IRQM	( 0U )
#define CMP_USER_DAC5CON_DACEN	( 0U )
#define CMP_USER_DAC5CON_TMCB	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC5CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC5CMP_INNSEL	( 0U )
#define CMP_USER_DAC5CMP_INPSEL	( 0U )
#define CMP_USER_DAC5CMP_CMPPOL	( 0U )
#define CMP_USER_DAC5CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC5CMP_FLTREN	( 0U )
#define CMP_USER_DAC5CMP_CBE	( 0U )
#define CMP_USER_DAC5CMP_HYSSEL	( 0U )
#define CMP_USER_DAC5CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC5DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC5DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC5DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC5DAT_DACLOW	( 0U )
#define CMP_USER_DAC5DAT_DACDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC5SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC5SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC5SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC5SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC5SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC5SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC5SLPCON_PSE	( 0U )
#define CMP_USER_DAC5SLPCON_TWME	( 0U )
#define CMP_USER_DAC5SLPCON_HME	( 0U )
#define CMP_USER_DAC5SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC5SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC5SLPDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC6CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC6CON	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC6CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC6CON_UPDREQ	( 0U )
#define CMP_USER_DAC6CON_UPDATE	( 0U )
#define CMP_USER_DAC6CON_UPDTRG	( 0U )
#define CMP_USER_DAC6CON_DACOEN	( 0U )
#define CMP_USER_DAC6CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC6CON_IRQM	( 0U )
#define CMP_USER_DAC6CON_DACEN	( 0U )
#define CMP_USER_DAC6CON_TMCB	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC6CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC6CMP_INNSEL	( 0U )
#define CMP_USER_DAC6CMP_INPSEL	( 0U )
#define CMP_USER_DAC6CMP_CMPPOL	( 0U )
#define CMP_USER_DAC6CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC6CMP_FLTREN	( 0U )
#define CMP_USER_DAC6CMP_CBE	( 0U )
#define CMP_USER_DAC6CMP_HYSSEL	( 0U )
#define CMP_USER_DAC6CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC6DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC6DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC6DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC6DAT_DACLOW	( 0U )
#define CMP_USER_DAC6DAT_DACDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC6SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC6SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC6SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC6SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC6SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC6SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC6SLPCON_PSE	( 0U )
#define CMP_USER_DAC6SLPCON_TWME	( 0U )
#define CMP_USER_DAC6SLPCON_HME	( 0U )
#define CMP_USER_DAC6SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC6SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC6SLPDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC7CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC7CON_UPDREQ	( 0U )
#define CMP_USER_DAC7CON_UPDATE	( 0U )
#define CMP_USER_DAC7CON_UPDTRG	( 0U )
#define CMP_USER_DAC7CON_DACOEN	( 0U )
#define CMP_USER_DAC7CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC7CON_IRQM	( 0U )
#define CMP_USER_DAC7CON_DACEN	( 0U )
#define CMP_USER_DAC7CON_TMCB	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC7CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC7CMP_INNSEL	( 0U )
#define CMP_USER_DAC7CMP_INPSEL	( 0U )
#define CMP_USER_DAC7CMP_CMPPOL	( 0U )
#define CMP_USER_DAC7CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC7CMP_FLTREN	( 0U )
#define CMP_USER_DAC7CMP_CBE	( 0U )
#define CMP_USER_DAC7CMP_HYSSEL	( 0U )
#define CMP_USER_DAC7CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC7DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC7DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC7DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC7DAT_DACLOW	( 0U )
#define CMP_USER_DAC7DAT_DACDAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC7SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC7SLPCON	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC7SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC7SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC7SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC7SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC7SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC7SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC7SLPCON_PSE	( 0U )
#define CMP_USER_DAC7SLPCON_TWME	( 0U )
#define CMP_USER_DAC7SLPCON_HME	( 0U )
#define CMP_USER_DAC7SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC7SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC7SLPDAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DAC8CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC8CON_UPDREQ	( 0U )
#define CMP_USER_DAC8CON_UPDATE	( 0U )
#define CMP_USER_DAC8CON_UPDTRG	( 0U )
#define CMP_USER_DAC8CON_DACOEN	( 0U )
#define CMP_USER_DAC8CON_UPDTMDIS	( 0U )
#define CMP_USER_DAC8CON_IRQM	( 0U )
#define CMP_USER_DAC8CON_DACEN	( 0U )
#define CMP_USER_DAC8CON_TMCB	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC8CMPレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC8CMP_INNSEL	( 0U )
#define CMP_USER_DAC8CMP_INPSEL	( 0U )
#define CMP_USER_DAC8CMP_CMPPOL	( 0U )
#define CMP_USER_DAC8CMP_CMPSTAT	( 0U )
#define CMP_USER_DAC8CMP_FLTREN	( 0U )
#define CMP_USER_DAC8CMP_CBE	( 0U )
#define CMP_USER_DAC8CMP_HYSSEL	( 0U )
#define CMP_USER_DAC8CMP_HYSPOL	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC8DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC8DAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC8DATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC8DAT_DACLOW	( 0U )
#define CMP_USER_DAC8DAT_DACDAT	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC8SLPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC8SLPCON_SLPSTRT	( 0U )
#define CMP_USER_DAC8SLPCON_SLPSTOPB	( 0U )
#define CMP_USER_DAC8SLPCON_SLPSTOPA	( 0U )
#define CMP_USER_DAC8SLPCON_HCFSEL	( 0U )
#define CMP_USER_DAC8SLPCON_FFSEN	( 0U )
#define CMP_USER_DAC8SLPCON_PSE	( 0U )
#define CMP_USER_DAC8SLPCON_TWME	( 0U )
#define CMP_USER_DAC8SLPCON_HME	( 0U )
#define CMP_USER_DAC8SLPCON_SLOPEN	( 0U )
/*----------------------------------------------------------------------------*/
/* DAC8SLPDATレジスタ */
/*----------------------------------------------------------------------------*/
#define CMP_USER_DAC8SLPDAT	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CLC_USER_H */

