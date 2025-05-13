
#ifndef CCP_USER_H
#define	CCP_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "ccp_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/* CCP1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1CON1_MOD	( 0U )
#define CCP_USER_CCP1CON1_CCSEL	( 0U )
#define CCP_USER_CCP1CON1_T32	( 0U )
#define CCP_USER_CCP1CON1_TMRPS	( 0U )
#define CCP_USER_CCP1CON1_CLKSEL	( 0U )
#define CCP_USER_CCP1CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP1CON1_SLPEN	( 0U )
#define CCP_USER_CCP1CON1_SIDL	( 0U )
#define CCP_USER_CCP1CON1_ON	( 0U )
#define CCP_USER_CCP1CON1_SYNC	( 0U )
#define CCP_USER_CCP1CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP1CON1_ONESHOT	( 0U )
#define CCP_USER_CCP1CON1_TRIGEN	( 0U )
#define CCP_USER_CCP1CON1_OPS	( 0U )
#define CCP_USER_CCP1CON1_RTRGEN	( 0U )
#define CCP_USER_CCP1CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1CON2_ASDG	( 0U )
#define CCP_USER_CCP1CON2_SSDG	( 0U )
#define CCP_USER_CCP1CON2_ASDGM	( 0U )
#define CCP_USER_CCP1CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP1CON2_ICS	( 0U )
#define CCP_USER_CCP1CON2_AUXOUT	( 0U )
#define CCP_USER_CCP1CON2_ICGSM	( 0U )
#define CCP_USER_CCP1CON2_OCAEN	( 0U )
#define CCP_USER_CCP1CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1CON3_DT	( 0U )
#define CCP_USER_CCP1CON3_PSSBDF	( 0U )
#define CCP_USER_CCP1CON3_PSSACE	( 0U )
#define CCP_USER_CCP1CON3_POLBDF	( 0U )
#define CCP_USER_CCP1CON3_POLACE	( 0U )
#define CCP_USER_CCP1CON3_OUTM	( 0U )
#define CCP_USER_CCP1CON3_OSCNT	( 0U )
#define CCP_USER_CCP1CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1STAT_ICBNE	( 0U )
#define CCP_USER_CCP1STAT_ICOV	( 0U )
#define CCP_USER_CCP1STAT_ICDIS	( 0U )
#define CCP_USER_CCP1STAT_SCEVT	( 0U )
#define CCP_USER_CCP1STAT_ASEVT	( 0U )
#define CCP_USER_CCP1STAT_TRCLR	( 0U )
#define CCP_USER_CCP1STAT_TRSET	( 0U )
#define CCP_USER_CCP1STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP1STAT_ICGARM	( 0U )
#define CCP_USER_CCP1STAT_RAWIP	( 0U )
#define CCP_USER_CCP1STAT_RBWIP	( 0U )
#define CCP_USER_CCP1STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP1STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP1STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1TMR_TMRL	( 0U )
#define CCP_USER_CCP1TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1PR_PRL	( 0U )
#define CCP_USER_CCP1PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP1BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP1BUF_BUFL	( 0U )
#define CCP_USER_CCP1BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2CON1_MOD	( 0U )
#define CCP_USER_CCP2CON1_CCSEL	( 0U )
#define CCP_USER_CCP2CON1_T32	( 0U )
#define CCP_USER_CCP2CON1_TMRPS	( 0U )
#define CCP_USER_CCP2CON1_CLKSEL	( 0U )
#define CCP_USER_CCP2CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP2CON1_SLPEN	( 0U )
#define CCP_USER_CCP2CON1_SIDL	( 0U )
#define CCP_USER_CCP2CON1_ON	( 0U )
#define CCP_USER_CCP2CON1_SYNC	( 0U )
#define CCP_USER_CCP2CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP2CON1_ONESHOT	( 0U )
#define CCP_USER_CCP2CON1_TRIGEN	( 0U )
#define CCP_USER_CCP2CON1_OPS	( 0U )
#define CCP_USER_CCP2CON1_RTRGEN	( 0U )
#define CCP_USER_CCP2CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2CON2_ASDG	( 0U )
#define CCP_USER_CCP2CON2_SSDG	( 0U )
#define CCP_USER_CCP2CON2_ASDGM	( 0U )
#define CCP_USER_CCP2CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP2CON2_ICS	( 0U )
#define CCP_USER_CCP2CON2_AUXOUT	( 0U )
#define CCP_USER_CCP2CON2_ICGSM	( 0U )
#define CCP_USER_CCP2CON2_OCAEN	( 0U )
#define CCP_USER_CCP2CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2CON3_DT	( 0U )
#define CCP_USER_CCP2CON3_PSSBDF	( 0U )
#define CCP_USER_CCP2CON3_PSSACE	( 0U )
#define CCP_USER_CCP2CON3_POLBDF	( 0U )
#define CCP_USER_CCP2CON3_POLACE	( 0U )
#define CCP_USER_CCP2CON3_OUTM	( 0U )
#define CCP_USER_CCP2CON3_OSCNT	( 0U )
#define CCP_USER_CCP2CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2STAT_ICBNE	( 0U )
#define CCP_USER_CCP2STAT_ICOV	( 0U )
#define CCP_USER_CCP2STAT_ICDIS	( 0U )
#define CCP_USER_CCP2STAT_SCEVT	( 0U )
#define CCP_USER_CCP2STAT_ASEVT	( 0U )
#define CCP_USER_CCP2STAT_TRCLR	( 0U )
#define CCP_USER_CCP2STAT_TRSET	( 0U )
#define CCP_USER_CCP2STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP2STAT_ICGARM	( 0U )
#define CCP_USER_CCP2STAT_RAWIP	( 0U )
#define CCP_USER_CCP2STAT_RBWIP	( 0U )
#define CCP_USER_CCP2STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP2STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP2STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2TMR_TMRL	( 0U )
#define CCP_USER_CCP2TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2PR_PRL	( 0U )
#define CCP_USER_CCP2PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP2BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP2BUF_BUFL	( 0U )
#define CCP_USER_CCP2BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3CON1_MOD	( 0U )
#define CCP_USER_CCP3CON1_CCSEL	( 0U )
#define CCP_USER_CCP3CON1_T32	( 0U )
#define CCP_USER_CCP3CON1_TMRPS	( 0U )
#define CCP_USER_CCP3CON1_CLKSEL	( 0U )
#define CCP_USER_CCP3CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP3CON1_SLPEN	( 0U )
#define CCP_USER_CCP3CON1_SIDL	( 0U )
#define CCP_USER_CCP3CON1_ON	( 0U )
#define CCP_USER_CCP3CON1_SYNC	( 0U )
#define CCP_USER_CCP3CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP3CON1_ONESHOT	( 0U )
#define CCP_USER_CCP3CON1_TRIGEN	( 0U )
#define CCP_USER_CCP3CON1_OPS	( 0U )
#define CCP_USER_CCP3CON1_RTRGEN	( 0U )
#define CCP_USER_CCP3CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3CON2_ASDG	( 0U )
#define CCP_USER_CCP3CON2_SSDG	( 0U )
#define CCP_USER_CCP3CON2_ASDGM	( 0U )
#define CCP_USER_CCP3CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP3CON2_ICS	( 0U )
#define CCP_USER_CCP3CON2_AUXOUT	( 0U )
#define CCP_USER_CCP3CON2_ICGSM	( 0U )
#define CCP_USER_CCP3CON2_OCAEN	( 0U )
#define CCP_USER_CCP3CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3CON3_DT	( 0U )
#define CCP_USER_CCP3CON3_PSSBDF	( 0U )
#define CCP_USER_CCP3CON3_PSSACE	( 0U )
#define CCP_USER_CCP3CON3_POLBDF	( 0U )
#define CCP_USER_CCP3CON3_POLACE	( 0U )
#define CCP_USER_CCP3CON3_OUTM	( 0U )
#define CCP_USER_CCP3CON3_OSCNT	( 0U )
#define CCP_USER_CCP3CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3STAT_ICBNE	( 0U )
#define CCP_USER_CCP3STAT_ICOV	( 0U )
#define CCP_USER_CCP3STAT_ICDIS	( 0U )
#define CCP_USER_CCP3STAT_SCEVT	( 0U )
#define CCP_USER_CCP3STAT_ASEVT	( 0U )
#define CCP_USER_CCP3STAT_TRCLR	( 0U )
#define CCP_USER_CCP3STAT_TRSET	( 0U )
#define CCP_USER_CCP3STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP3STAT_ICGARM	( 0U )
#define CCP_USER_CCP3STAT_RAWIP	( 0U )
#define CCP_USER_CCP3STAT_RBWIP	( 0U )
#define CCP_USER_CCP3STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP3STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP3STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3TMR_TMRL	( 0U )
#define CCP_USER_CCP3TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3PR_PRL	( 0U )
#define CCP_USER_CCP3PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP3BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP3BUF_BUFL	( 0U )
#define CCP_USER_CCP3BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4CON1_MOD	( 0U )
#define CCP_USER_CCP4CON1_CCSEL	( 0U )
#define CCP_USER_CCP4CON1_T32	( 0U )
#define CCP_USER_CCP4CON1_TMRPS	( 0U )
#define CCP_USER_CCP4CON1_CLKSEL	( 0U )
#define CCP_USER_CCP4CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP4CON1_SLPEN	( 0U )
#define CCP_USER_CCP4CON1_SIDL	( 0U )
#define CCP_USER_CCP4CON1_ON	( 0U )
#define CCP_USER_CCP4CON1_SYNC	( 0U )
#define CCP_USER_CCP4CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP4CON1_ONESHOT	( 0U )
#define CCP_USER_CCP4CON1_TRIGEN	( 0U )
#define CCP_USER_CCP4CON1_OPS	( 0U )
#define CCP_USER_CCP4CON1_RTRGEN	( 0U )
#define CCP_USER_CCP4CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4CON2_ASDG	( 0U )
#define CCP_USER_CCP4CON2_SSDG	( 0U )
#define CCP_USER_CCP4CON2_ASDGM	( 0U )
#define CCP_USER_CCP4CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP4CON2_ICS	( 0U )
#define CCP_USER_CCP4CON2_AUXOUT	( 0U )
#define CCP_USER_CCP4CON2_ICGSM	( 0U )
#define CCP_USER_CCP4CON2_OCAEN	( 0U )
#define CCP_USER_CCP4CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4CON3_DT	( 0U )
#define CCP_USER_CCP4CON3_PSSBDF	( 0U )
#define CCP_USER_CCP4CON3_PSSACE	( 0U )
#define CCP_USER_CCP4CON3_POLBDF	( 0U )
#define CCP_USER_CCP4CON3_POLACE	( 0U )
#define CCP_USER_CCP4CON3_OUTM	( 0U )
#define CCP_USER_CCP4CON3_OSCNT	( 0U )
#define CCP_USER_CCP4CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4STAT_ICBNE	( 0U )
#define CCP_USER_CCP4STAT_ICOV	( 0U )
#define CCP_USER_CCP4STAT_ICDIS	( 0U )
#define CCP_USER_CCP4STAT_SCEVT	( 0U )
#define CCP_USER_CCP4STAT_ASEVT	( 0U )
#define CCP_USER_CCP4STAT_TRCLR	( 0U )
#define CCP_USER_CCP4STAT_TRSET	( 0U )
#define CCP_USER_CCP4STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP4STAT_ICGARM	( 0U )
#define CCP_USER_CCP4STAT_RAWIP	( 0U )
#define CCP_USER_CCP4STAT_RBWIP	( 0U )
#define CCP_USER_CCP4STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP4STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP4STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4TMR_TMRL	( 0U )
#define CCP_USER_CCP4TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4PR_PRL	( 0U )
#define CCP_USER_CCP4PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP4BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP4BUF_BUFL	( 0U )
#define CCP_USER_CCP4BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5CON1_MOD	( 0U )
#define CCP_USER_CCP5CON1_CCSEL	( 0U )
#define CCP_USER_CCP5CON1_T32	( 0U )
#define CCP_USER_CCP5CON1_TMRPS	( 0U )
#define CCP_USER_CCP5CON1_CLKSEL	( 0U )
#define CCP_USER_CCP5CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP5CON1_SLPEN	( 0U )
#define CCP_USER_CCP5CON1_SIDL	( 0U )
#define CCP_USER_CCP5CON1_ON	( 0U )
#define CCP_USER_CCP5CON1_SYNC	( 0U )
#define CCP_USER_CCP5CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP5CON1_ONESHOT	( 0U )
#define CCP_USER_CCP5CON1_TRIGEN	( 0U )
#define CCP_USER_CCP5CON1_OPS	( 0U )
#define CCP_USER_CCP5CON1_RTRGEN	( 0U )
#define CCP_USER_CCP5CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5CON2_ASDG	( 0U )
#define CCP_USER_CCP5CON2_SSDG	( 0U )
#define CCP_USER_CCP5CON2_ASDGM	( 0U )
#define CCP_USER_CCP5CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP5CON2_ICS	( 0U )
#define CCP_USER_CCP5CON2_AUXOUT	( 0U )
#define CCP_USER_CCP5CON2_ICGSM	( 0U )
#define CCP_USER_CCP5CON2_OCAEN	( 0U )
#define CCP_USER_CCP5CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5CON3_DT	( 0U )
#define CCP_USER_CCP5CON3_PSSBDF	( 0U )
#define CCP_USER_CCP5CON3_PSSACE	( 0U )
#define CCP_USER_CCP5CON3_POLBDF	( 0U )
#define CCP_USER_CCP5CON3_POLACE	( 0U )
#define CCP_USER_CCP5CON3_OUTM	( 0U )
#define CCP_USER_CCP5CON3_OSCNT	( 0U )
#define CCP_USER_CCP5CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5STAT_ICBNE	( 0U )
#define CCP_USER_CCP5STAT_ICOV	( 0U )
#define CCP_USER_CCP5STAT_ICDIS	( 0U )
#define CCP_USER_CCP5STAT_SCEVT	( 0U )
#define CCP_USER_CCP5STAT_ASEVT	( 0U )
#define CCP_USER_CCP5STAT_TRCLR	( 0U )
#define CCP_USER_CCP5STAT_TRSET	( 0U )
#define CCP_USER_CCP5STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP5STAT_ICGARM	( 0U )
#define CCP_USER_CCP5STAT_RAWIP	( 0U )
#define CCP_USER_CCP5STAT_RBWIP	( 0U )
#define CCP_USER_CCP5STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP5STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP5STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5TMR_TMRL	( 0U )
#define CCP_USER_CCP5TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5PR_PRL	( 0U )
#define CCP_USER_CCP5PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP5BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP5BUF_BUFL	( 0U )
#define CCP_USER_CCP5BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6CON1_MOD	( 0U )
#define CCP_USER_CCP6CON1_CCSEL	( 0U )
#define CCP_USER_CCP6CON1_T32	( 0U )
#define CCP_USER_CCP6CON1_TMRPS	( 0U )
#define CCP_USER_CCP6CON1_CLKSEL	( 0U )
#define CCP_USER_CCP6CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP6CON1_SLPEN	( 0U )
#define CCP_USER_CCP6CON1_SIDL	( 0U )
#define CCP_USER_CCP6CON1_ON	( 0U )
#define CCP_USER_CCP6CON1_SYNC	( 0U )
#define CCP_USER_CCP6CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP6CON1_ONESHOT	( 0U )
#define CCP_USER_CCP6CON1_TRIGEN	( 0U )
#define CCP_USER_CCP6CON1_OPS	( 0U )
#define CCP_USER_CCP6CON1_RTRGEN	( 0U )
#define CCP_USER_CCP6CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6CON2_ASDG	( 0U )
#define CCP_USER_CCP6CON2_SSDG	( 0U )
#define CCP_USER_CCP6CON2_ASDGM	( 0U )
#define CCP_USER_CCP6CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP6CON2_ICS	( 0U )
#define CCP_USER_CCP6CON2_AUXOUT	( 0U )
#define CCP_USER_CCP6CON2_ICGSM	( 0U )
#define CCP_USER_CCP6CON2_OCAEN	( 0U )
#define CCP_USER_CCP6CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6CON3_DT	( 0U )
#define CCP_USER_CCP6CON3_PSSBDF	( 0U )
#define CCP_USER_CCP6CON3_PSSACE	( 0U )
#define CCP_USER_CCP6CON3_POLBDF	( 0U )
#define CCP_USER_CCP6CON3_POLACE	( 0U )
#define CCP_USER_CCP6CON3_OUTM	( 0U )
#define CCP_USER_CCP6CON3_OSCNT	( 0U )
#define CCP_USER_CCP6CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6STAT_ICBNE	( 0U )
#define CCP_USER_CCP6STAT_ICOV	( 0U )
#define CCP_USER_CCP6STAT_ICDIS	( 0U )
#define CCP_USER_CCP6STAT_SCEVT	( 0U )
#define CCP_USER_CCP6STAT_ASEVT	( 0U )
#define CCP_USER_CCP6STAT_TRCLR	( 0U )
#define CCP_USER_CCP6STAT_TRSET	( 0U )
#define CCP_USER_CCP6STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP6STAT_ICGARM	( 0U )
#define CCP_USER_CCP6STAT_RAWIP	( 0U )
#define CCP_USER_CCP6STAT_RBWIP	( 0U )
#define CCP_USER_CCP6STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP6STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP6STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6TMR_TMRL	( 0U )
#define CCP_USER_CCP6TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6PR_PRL	( 0U )
#define CCP_USER_CCP6PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP6BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP6BUF_BUFL	( 0U )
#define CCP_USER_CCP6BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7CON1_MOD	( 0U )
#define CCP_USER_CCP7CON1_CCSEL	( 0U )
#define CCP_USER_CCP7CON1_T32	( 0U )
#define CCP_USER_CCP7CON1_TMRPS	( 0U )
#define CCP_USER_CCP7CON1_CLKSEL	( 0U )
#define CCP_USER_CCP7CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP7CON1_SLPEN	( 0U )
#define CCP_USER_CCP7CON1_SIDL	( 0U )
#define CCP_USER_CCP7CON1_ON	( 0U )
#define CCP_USER_CCP7CON1_SYNC	( 0U )
#define CCP_USER_CCP7CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP7CON1_ONESHOT	( 0U )
#define CCP_USER_CCP7CON1_TRIGEN	( 0U )
#define CCP_USER_CCP7CON1_OPS	( 0U )
#define CCP_USER_CCP7CON1_RTRGEN	( 0U )
#define CCP_USER_CCP7CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7CON2_ASDG	( 0U )
#define CCP_USER_CCP7CON2_SSDG	( 0U )
#define CCP_USER_CCP7CON2_ASDGM	( 0U )
#define CCP_USER_CCP7CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP7CON2_ICS	( 0U )
#define CCP_USER_CCP7CON2_AUXOUT	( 0U )
#define CCP_USER_CCP7CON2_ICGSM	( 0U )
#define CCP_USER_CCP7CON2_OCAEN	( 0U )
#define CCP_USER_CCP7CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7CON3_DT	( 0U )
#define CCP_USER_CCP7CON3_PSSBDF	( 0U )
#define CCP_USER_CCP7CON3_PSSACE	( 0U )
#define CCP_USER_CCP7CON3_POLBDF	( 0U )
#define CCP_USER_CCP7CON3_POLACE	( 0U )
#define CCP_USER_CCP7CON3_OUTM	( 0U )
#define CCP_USER_CCP7CON3_OSCNT	( 0U )
#define CCP_USER_CCP7CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7STAT_ICBNE	( 0U )
#define CCP_USER_CCP7STAT_ICOV	( 0U )
#define CCP_USER_CCP7STAT_ICDIS	( 0U )
#define CCP_USER_CCP7STAT_SCEVT	( 0U )
#define CCP_USER_CCP7STAT_ASEVT	( 0U )
#define CCP_USER_CCP7STAT_TRCLR	( 0U )
#define CCP_USER_CCP7STAT_TRSET	( 0U )
#define CCP_USER_CCP7STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP7STAT_ICGARM	( 0U )
#define CCP_USER_CCP7STAT_RAWIP	( 0U )
#define CCP_USER_CCP7STAT_RBWIP	( 0U )
#define CCP_USER_CCP7STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP7STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP7STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7TMR_TMRL	( 0U )
#define CCP_USER_CCP7TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7PR_PRL	( 0U )
#define CCP_USER_CCP7PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP7BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP7BUF_BUFL	( 0U )
#define CCP_USER_CCP7BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8CON1_MOD	( 0U )
#define CCP_USER_CCP8CON1_CCSEL	( 0U )
#define CCP_USER_CCP8CON1_T32	( 0U )
#define CCP_USER_CCP8CON1_TMRPS	( 0U )
#define CCP_USER_CCP8CON1_CLKSEL	( 0U )
#define CCP_USER_CCP8CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP8CON1_SLPEN	( 0U )
#define CCP_USER_CCP8CON1_SIDL	( 0U )
#define CCP_USER_CCP8CON1_ON	( 0U )
#define CCP_USER_CCP8CON1_SYNC	( 0U )
#define CCP_USER_CCP8CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP8CON1_ONESHOT	( 0U )
#define CCP_USER_CCP8CON1_TRIGEN	( 0U )
#define CCP_USER_CCP8CON1_OPS	( 0U )
#define CCP_USER_CCP8CON1_RTRGEN	( 0U )
#define CCP_USER_CCP8CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8CON2_ASDG	( 0U )
#define CCP_USER_CCP8CON2_SSDG	( 0U )
#define CCP_USER_CCP8CON2_ASDGM	( 0U )
#define CCP_USER_CCP8CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP8CON2_ICS	( 0U )
#define CCP_USER_CCP8CON2_AUXOUT	( 0U )
#define CCP_USER_CCP8CON2_ICGSM	( 0U )
#define CCP_USER_CCP8CON2_OCAEN	( 0U )
#define CCP_USER_CCP8CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8CON3_DT	( 0U )
#define CCP_USER_CCP8CON3_PSSBDF	( 0U )
#define CCP_USER_CCP8CON3_PSSACE	( 0U )
#define CCP_USER_CCP8CON3_POLBDF	( 0U )
#define CCP_USER_CCP8CON3_POLACE	( 0U )
#define CCP_USER_CCP8CON3_OUTM	( 0U )
#define CCP_USER_CCP8CON3_OSCNT	( 0U )
#define CCP_USER_CCP8CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8STAT_ICBNE	( 0U )
#define CCP_USER_CCP8STAT_ICOV	( 0U )
#define CCP_USER_CCP8STAT_ICDIS	( 0U )
#define CCP_USER_CCP8STAT_SCEVT	( 0U )
#define CCP_USER_CCP8STAT_ASEVT	( 0U )
#define CCP_USER_CCP8STAT_TRCLR	( 0U )
#define CCP_USER_CCP8STAT_TRSET	( 0U )
#define CCP_USER_CCP8STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP8STAT_ICGARM	( 0U )
#define CCP_USER_CCP8STAT_RAWIP	( 0U )
#define CCP_USER_CCP8STAT_RBWIP	( 0U )
#define CCP_USER_CCP8STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP8STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP8STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8TMR_TMRL	( 0U )
#define CCP_USER_CCP8TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8PR_PRL	( 0U )
#define CCP_USER_CCP8PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP8BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP8BUF_BUFL	( 0U )
#define CCP_USER_CCP8BUF_BUFH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9CON1_MOD	( 0U )
#define CCP_USER_CCP9CON1_CCSEL	( 0U )
#define CCP_USER_CCP9CON1_T32	( 0U )
#define CCP_USER_CCP9CON1_TMRPS	( 0U )
#define CCP_USER_CCP9CON1_CLKSEL	( 0U )
#define CCP_USER_CCP9CON1_TMRSYNC	( 0U )
#define CCP_USER_CCP9CON1_SLPEN	( 0U )
#define CCP_USER_CCP9CON1_SIDL	( 0U )
#define CCP_USER_CCP9CON1_ON	( 0U )
#define CCP_USER_CCP9CON1_SYNC	( 0U )
#define CCP_USER_CCP9CON1_ALTSYNC	( 0U )
#define CCP_USER_CCP9CON1_ONESHOT	( 0U )
#define CCP_USER_CCP9CON1_TRIGEN	( 0U )
#define CCP_USER_CCP9CON1_OPS	( 0U )
#define CCP_USER_CCP9CON1_RTRGEN	( 0U )
#define CCP_USER_CCP9CON1_OPSSRC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9CON2_ASDG	( 0U )
#define CCP_USER_CCP9CON2_SSDG	( 0U )
#define CCP_USER_CCP9CON2_ASDGM	( 0U )
#define CCP_USER_CCP9CON2_PWMRSEN	( 0U )
#define CCP_USER_CCP9CON2_ICS	( 0U )
#define CCP_USER_CCP9CON2_AUXOUT	( 0U )
#define CCP_USER_CCP9CON2_ICGSM	( 0U )
#define CCP_USER_CCP9CON2_OCAEN	( 0U )
#define CCP_USER_CCP9CON2_OCBEN	( 0U )
#define CCP_USER_CCP9CON2_OCCEN	( 0U )
#define CCP_USER_CCP9CON2_OCDEN	( 0U )
#define CCP_USER_CCP9CON2_OCEEN	( 0U )
#define CCP_USER_CCP9CON2_OCFEN	( 0U )
#define CCP_USER_CCP9CON2_OENSYNC	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9CON3	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9CON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9CON3_DT	( 0U )
#define CCP_USER_CCP9CON3_PSSBDF	( 0U )
#define CCP_USER_CCP9CON3_PSSACE	( 0U )
#define CCP_USER_CCP9CON3_POLBDF	( 0U )
#define CCP_USER_CCP9CON3_POLACE	( 0U )
#define CCP_USER_CCP9CON3_OUTM	( 0U )
#define CCP_USER_CCP9CON3_OSCNT	( 0U )
#define CCP_USER_CCP9CON3_OETRIG	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9STAT_ICBNE	( 0U )
#define CCP_USER_CCP9STAT_ICOV	( 0U )
#define CCP_USER_CCP9STAT_ICDIS	( 0U )
#define CCP_USER_CCP9STAT_SCEVT	( 0U )
#define CCP_USER_CCP9STAT_ASEVT	( 0U )
#define CCP_USER_CCP9STAT_TRCLR	( 0U )
#define CCP_USER_CCP9STAT_TRSET	( 0U )
#define CCP_USER_CCP9STAT_CCPTRIG	( 0U )
#define CCP_USER_CCP9STAT_ICGARM	( 0U )
#define CCP_USER_CCP9STAT_RAWIP	( 0U )
#define CCP_USER_CCP9STAT_RBWIP	( 0U )
#define CCP_USER_CCP9STAT_TMRLWIP	( 0U )
#define CCP_USER_CCP9STAT_TMRHWIP	( 0U )
#define CCP_USER_CCP9STAT_PRLWIP	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9TMR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9TMR_TMRL	( 0U )
#define CCP_USER_CCP9TMR_TMRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9PR	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9PRレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9PR_PRL	( 0U )
#define CCP_USER_CCP9PR_PRH	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9RA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9RAレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9RA_CMPA	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9RB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9RBレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9RB_CMPB	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CCP9BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CCP_USER_CCP9BUF_BUFL	( 0U )
#define CCP_USER_CCP9BUF_BUFH	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CLC_USER_H */

