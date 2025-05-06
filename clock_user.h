
#ifndef CLOCK_USER_H
#define	CLOCK_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "dmt_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* OSCCTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_OSCCTRL	( 0U )
/*----------------------------------------------------------------------------*/
/* OSCCTRLレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_OSCCTRL_FRCEN	( 0U )
#define CLOCK_USER_OSCCTRL_BFRCEN	( 0U )
#define CLOCK_USER_OSCCTRL_POSCEN	( 0U )
#define CLOCK_USER_OSCCTRL_SOSCEN	( 0U )
#define CLOCK_USER_OSCCTRL_AOSCEN	( 0U )
#define CLOCK_USER_OSCCTRL_LFRCEN	( 0U )
#define CLOCK_USER_OSCCTRL_PLL1EN	( 0U )
#define CLOCK_USER_OSCCTRL_PLL2EN	( 0U )
#define CLOCK_USER_OSCCTRL_FRCRDY	( 0U )
#define CLOCK_USER_OSCCTRL_BFRCRDY	( 0U )
#define CLOCK_USER_OSCCTRL_POSCRDY	( 0U )
#define CLOCK_USER_OSCCTRL_SOSCRDY	( 0U )
#define CLOCK_USER_OSCCTRL_AOSCRDY	( 0U )
#define CLOCK_USER_OSCCTRL_LPRCRDY	( 0U )
#define CLOCK_USER_OSCCTRL_PLL1RDY	( 0U )
#define CLOCK_USER_OSCCTRL_PLL2RDY	( 0U )
#define CLOCK_USER_OSCCTRL_CLKLOCK	( 0U )
#define CLOCK_USER_OSCCTRL_DIAGLOCK	( 0U )
/*----------------------------------------------------------------------------*/
/* OSCCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_OSCCFG	( 0U )
/*----------------------------------------------------------------------------*/
/* OSCCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_OSCCFG_POSCLOCKD	( 0U )
#define CLOCK_USER_OSCCFG_GAIN	( 0U )
#define CLOCK_USER_OSCCFG_KICKSTART	( 0U )
#define CLOCK_USER_OSCCFG_POSCIOFNC	( 0U )
#define CLOCK_USER_OSCCFG_AOSCLOCKD	( 0U )
#define CLOCK_USER_OSCCFG_AOSCIOFNC	( 0U )
#define CLOCK_USER_OSCCFG_FRCLPWR	( 0U )
/*----------------------------------------------------------------------------*/
/* CLKFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLKFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CLKFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLKFAIL_CLKFAIL1	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL2	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL3	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL4	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL5	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL6	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL7	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL8	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL9	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL10	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL11	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL12	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL13	( 0U )
#define CLOCK_USER_CLKFAIL_CLKFAIL14	( 0U )
#define CLOCK_USER_CLKFAIL_PLL1FAIL	( 0U )
#define CLOCK_USER_CLKFAIL_PLL2FAIL	( 0U )
#define CLOCK_USER_CLKFAIL_SCSMCH	( 0U )
/*----------------------------------------------------------------------------*/
/* SCSFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_SCSFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* SCSFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_SCSFAIL_CLKSCS1	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS2	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS3	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS4	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS5	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS6	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS7	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS8	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS9	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS10	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS11	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS12	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS13	( 0U )
#define CLOCK_USER_SCSFAIL_CLKSCS14	( 0U )
#define CLOCK_USER_SCSFAIL_PLL1SCS	( 0U )
#define CLOCK_USER_SCSFAIL_PLL2SCS	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK1CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK1CON_COSC	( 0U )
#define CLOCK_USER_CLK1CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK1CON_NOSC	( 0U )
#define CLOCK_USER_CLK1CON_OE	( 0U )
#define CLOCK_USER_CLK1CON_SIDL	( 0U )
#define CLOCK_USER_CLK1CON_ON	( 0U )
#define CLOCK_USER_CLK1CON_BOSC	( 0U )
#define CLOCK_USER_CLK1CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK1CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK1CON_OSWEN	( 0U )
#define CLOCK_USER_CLK1CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK1CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK1CON_RIS	( 0U )
#define CLOCK_USER_CLK1CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK1DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK1DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK1DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK1DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK1DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK2CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK2CON_COSC	( 0U )
#define CLOCK_USER_CLK2CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK2CON_NOSC	( 0U )
#define CLOCK_USER_CLK2CON_OE	( 0U )
#define CLOCK_USER_CLK2CON_SIDL	( 0U )
#define CLOCK_USER_CLK2CON_ON	( 0U )
#define CLOCK_USER_CLK2CON_BOSC	( 0U )
#define CLOCK_USER_CLK2CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK2CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK2CON_OSWEN	( 0U )
#define CLOCK_USER_CLK2CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK2CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK2CON_RIS	( 0U )
#define CLOCK_USER_CLK2CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK2DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK2DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK2DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK2DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK2DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK3CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK3CON_COSC	( 0U )
#define CLOCK_USER_CLK3CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK3CON_NOSC	( 0U )
#define CLOCK_USER_CLK3CON_OE	( 0U )
#define CLOCK_USER_CLK3CON_SIDL	( 0U )
#define CLOCK_USER_CLK3CON_ON	( 0U )
#define CLOCK_USER_CLK3CON_BOSC	( 0U )
#define CLOCK_USER_CLK3CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK3CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK3CON_OSWEN	( 0U )
#define CLOCK_USER_CLK3CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK3CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK3CON_RIS	( 0U )
#define CLOCK_USER_CLK3CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK3DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK3DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK3DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK3DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK3DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK4CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK4CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK4CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK4CON_COSC	( 0U )
#define CLOCK_USER_CLK4CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK4CON_NOSC	( 0U )
#define CLOCK_USER_CLK4CON_OE	( 0U )
#define CLOCK_USER_CLK4CON_SIDL	( 0U )
#define CLOCK_USER_CLK4CON_ON	( 0U )
#define CLOCK_USER_CLK4CON_BOSC	( 0U )
#define CLOCK_USER_CLK4CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK4CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK4CON_OSWEN	( 0U )
#define CLOCK_USER_CLK4CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK4CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK4CON_RIS	( 0U )
#define CLOCK_USER_CLK4CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK4DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK4DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK4DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK4DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK4DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK5CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK5CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK5CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK5CON_COSC	( 0U )
#define CLOCK_USER_CLK5CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK5CON_NOSC	( 0U )
#define CLOCK_USER_CLK5CON_OE	( 0U )
#define CLOCK_USER_CLK5CON_SIDL	( 0U )
#define CLOCK_USER_CLK5CON_ON	( 0U )
#define CLOCK_USER_CLK5CON_BOSC	( 0U )
#define CLOCK_USER_CLK5CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK5CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK5CON_OSWEN	( 0U )
#define CLOCK_USER_CLK5CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK5CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK5CON_RIS	( 0U )
#define CLOCK_USER_CLK5CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK5DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK5DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK5DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK5DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK5DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK6CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK6CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK6CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK6CON_COSC	( 0U )
#define CLOCK_USER_CLK6CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK6CON_NOSC	( 0U )
#define CLOCK_USER_CLK6CON_OE	( 0U )
#define CLOCK_USER_CLK6CON_SIDL	( 0U )
#define CLOCK_USER_CLK6CON_ON	( 0U )
#define CLOCK_USER_CLK6CON_BOSC	( 0U )
#define CLOCK_USER_CLK6CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK6CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK6CON_OSWEN	( 0U )
#define CLOCK_USER_CLK6CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK6CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK6CON_RIS	( 0U )
#define CLOCK_USER_CLK6CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK6DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK6DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK6DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK6DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK6DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK7CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK7CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK7CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK7CON_COSC	( 0U )
#define CLOCK_USER_CLK7CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK7CON_NOSC	( 0U )
#define CLOCK_USER_CLK7CON_OE	( 0U )
#define CLOCK_USER_CLK7CON_SIDL	( 0U )
#define CLOCK_USER_CLK7CON_ON	( 0U )
#define CLOCK_USER_CLK7CON_BOSC	( 0U )
#define CLOCK_USER_CLK7CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK7CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK7CON_OSWEN	( 0U )
#define CLOCK_USER_CLK7CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK7CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK7CON_RIS	( 0U )
#define CLOCK_USER_CLK7CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK7DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK7DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK7DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK7DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK7DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK8CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK8CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK8CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK8CON_COSC	( 0U )
#define CLOCK_USER_CLK8CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK8CON_NOSC	( 0U )
#define CLOCK_USER_CLK8CON_OE	( 0U )
#define CLOCK_USER_CLK8CON_SIDL	( 0U )
#define CLOCK_USER_CLK8CON_ON	( 0U )
#define CLOCK_USER_CLK8CON_BOSC	( 0U )
#define CLOCK_USER_CLK8CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK8CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK8CON_OSWEN	( 0U )
#define CLOCK_USER_CLK8CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK8CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK8CON_RIS	( 0U )
#define CLOCK_USER_CLK8CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK8DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK8DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK8DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK8DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK8DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK9CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK9CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK9CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK9CON_COSC	( 0U )
#define CLOCK_USER_CLK9CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK9CON_NOSC	( 0U )
#define CLOCK_USER_CLK9CON_OE	( 0U )
#define CLOCK_USER_CLK9CON_SIDL	( 0U )
#define CLOCK_USER_CLK9CON_ON	( 0U )
#define CLOCK_USER_CLK9CON_BOSC	( 0U )
#define CLOCK_USER_CLK9CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK9CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK9CON_OSWEN	( 0U )
#define CLOCK_USER_CLK9CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK9CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK9CON_RIS	( 0U )
#define CLOCK_USER_CLK9CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK9DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK9DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK9DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK9DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK9DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK10CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK10CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK10CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK10CON_COSC	( 0U )
#define CLOCK_USER_CLK10CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK10CON_NOSC	( 0U )
#define CLOCK_USER_CLK10CON_OE	( 0U )
#define CLOCK_USER_CLK10CON_SIDL	( 0U )
#define CLOCK_USER_CLK10CON_ON	( 0U )
#define CLOCK_USER_CLK10CON_BOSC	( 0U )
#define CLOCK_USER_CLK10CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK10CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK10CON_OSWEN	( 0U )
#define CLOCK_USER_CLK10CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK10CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK10CON_RIS	( 0U )
#define CLOCK_USER_CLK10CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK10DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK10DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK10DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK10DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK10DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK11CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK11CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK11CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK11CON_COSC	( 0U )
#define CLOCK_USER_CLK11CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK11CON_NOSC	( 0U )
#define CLOCK_USER_CLK11CON_OE	( 0U )
#define CLOCK_USER_CLK11CON_SIDL	( 0U )
#define CLOCK_USER_CLK11CON_ON	( 0U )
#define CLOCK_USER_CLK11CON_BOSC	( 0U )
#define CLOCK_USER_CLK11CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK11CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK11CON_OSWEN	( 0U )
#define CLOCK_USER_CLK11CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK11CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK11CON_RIS	( 0U )
#define CLOCK_USER_CLK11CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK11DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK11DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK11DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK11DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK11DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK12CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK12CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK12CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK12CON_COSC	( 0U )
#define CLOCK_USER_CLK12CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK12CON_NOSC	( 0U )
#define CLOCK_USER_CLK12CON_OE	( 0U )
#define CLOCK_USER_CLK12CON_SIDL	( 0U )
#define CLOCK_USER_CLK12CON_ON	( 0U )
#define CLOCK_USER_CLK12CON_BOSC	( 0U )
#define CLOCK_USER_CLK12CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK12CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK12CON_OSWEN	( 0U )
#define CLOCK_USER_CLK12CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK12CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK12CON_RIS	( 0U )
#define CLOCK_USER_CLK12CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK12DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK12DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK12DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK12DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK12DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK13CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK13CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK13CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK13CON_COSC	( 0U )
#define CLOCK_USER_CLK13CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK13CON_NOSC	( 0U )
#define CLOCK_USER_CLK13CON_OE	( 0U )
#define CLOCK_USER_CLK13CON_SIDL	( 0U )
#define CLOCK_USER_CLK13CON_ON	( 0U )
#define CLOCK_USER_CLK13CON_BOSC	( 0U )
#define CLOCK_USER_CLK13CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK13CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK13CON_OSWEN	( 0U )
#define CLOCK_USER_CLK13CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK13CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK13CON_RIS	( 0U )
#define CLOCK_USER_CLK13CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK13DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK13DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK13DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK13DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK13DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK14CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK14CON	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK14CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK14CON_COSC	( 0U )
#define CLOCK_USER_CLK14CON_SLEEPDLY	( 0U )
#define CLOCK_USER_CLK14CON_NOSC	( 0U )
#define CLOCK_USER_CLK14CON_OE	( 0U )
#define CLOCK_USER_CLK14CON_SIDL	( 0U )
#define CLOCK_USER_CLK14CON_ON	( 0U )
#define CLOCK_USER_CLK14CON_BOSC	( 0U )
#define CLOCK_USER_CLK14CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_CLK14CON_DIVSWEN	( 0U )
#define CLOCK_USER_CLK14CON_OSWEN	( 0U )
#define CLOCK_USER_CLK14CON_EXTCFSEL	( 0U )
#define CLOCK_USER_CLK14CON_EXTCFEN	( 0U )
#define CLOCK_USER_CLK14CON_RIS	( 0U )
#define CLOCK_USER_CLK14CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK14DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK14DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLK14DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLK14DIV_FRACDIV	( 0U )
#define CLOCK_USER_CLK14DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL1CON	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL1CON_COSC	( 0U )
#define CLOCK_USER_PLL1CON_NOSC	( 0U )
#define CLOCK_USER_PLL1CON_OE	( 0U )
#define CLOCK_USER_PLL1CON_SIDL	( 0U )
#define CLOCK_USER_PLL1CON_ON	( 0U )
#define CLOCK_USER_PLL1CON_BOSC	( 0U )
#define CLOCK_USER_PLL1CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_PLL1CON_DIVSWEN	( 0U )
#define CLOCK_USER_PLL1CON_OSWEN	( 0U )
#define CLOCK_USER_PLL1CON_EXTCFSEL	( 0U )
#define CLOCK_USER_PLL1CON_EXTCFEN	( 0U )
#define CLOCK_USER_PLL1CON_FOUTSWEN	( 0U )
#define CLOCK_USER_PLL1CON_RIS	( 0U )
#define CLOCK_USER_PLL1CON_PLLSWEN	( 0U )
#define CLOCK_USER_PLL1CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL1DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL1DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL1DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL1DIV_POSTDIV2	( 0U )
#define CLOCK_USER_PLL1DIV_POSTDIV1	( 0U )
#define CLOCK_USER_PLL1DIV_PLLFBDIV	( 0U )
#define CLOCK_USER_PLL1DIV_PLLPRE	( 0U )
/*----------------------------------------------------------------------------*/
/* VCO1DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_VCO1DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* VCO1DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_VCO1DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL2CON	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL2CON_COSC	( 0U )
#define CLOCK_USER_PLL2CON_NOSC	( 0U )
#define CLOCK_USER_PLL2CON_OE	( 0U )
#define CLOCK_USER_PLL2CON_SIDL	( 0U )
#define CLOCK_USER_PLL2CON_ON	( 0U )
#define CLOCK_USER_PLL2CON_BOSC	( 0U )
#define CLOCK_USER_PLL2CON_FSCLOCKEN	( 0U )
#define CLOCK_USER_PLL2CON_DIVSWEN	( 0U )
#define CLOCK_USER_PLL2CON_OSWEN	( 0U )
#define CLOCK_USER_PLL2CON_EXTCFSEL	( 0U )
#define CLOCK_USER_PLL2CON_EXTCFEN	( 0U )
#define CLOCK_USER_PLL2CON_FOUTSWEN	( 0U )
#define CLOCK_USER_PLL2CON_RIS	( 0U )
#define CLOCK_USER_PLL2CON_PLLSWEN	( 0U )
#define CLOCK_USER_PLL2CON_CLKRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL2DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL2DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* PLL2DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_PLL2DIV_POSTDIV2	( 0U )
#define CLOCK_USER_PLL2DIV_POSTDIV1	( 0U )
#define CLOCK_USER_PLL2DIV_PLLFBDIV	( 0U )
#define CLOCK_USER_PLL2DIV_PLLPRE	( 0U )
/*----------------------------------------------------------------------------*/
/* VCO2DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_VCO2DIV	( 0U )
/*----------------------------------------------------------------------------*/
/* VCO2DIVレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_VCO2DIV_INTDIV	( 0U )
/*----------------------------------------------------------------------------*/
/* CLKDIAGレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CLKDIAG_STOPGEN1	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN2	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN3	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN4	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN5	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN6	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN7	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN8	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN9	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN10	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN11	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN12	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN13	( 0U )
#define CLOCK_USER_CLKDIAG_STOPGEN14	( 0U )
#define CLOCK_USER_CLKDIAG_SCSFLTDATA	( 0U )
#define CLOCK_USER_CLKDIAG_GENSEL	( 0U )
#define CLOCK_USER_CLKDIAG_STOPPLL1	( 0U )
#define CLOCK_USER_CLKDIAG_STOPPLL2	( 0U )
#define CLOCK_USER_CLKDIAG_FLTIJEN	( 0U )



/*----------------------------------------------------------------------------*/
/* CM1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1CON_WIDTH	( 0U )
#define CLOCK_USER_CM1CON_FLTINJ	( 0U )
#define CLOCK_USER_CM1CON_CNTDIV	( 0U )
#define CLOCK_USER_CM1CON_SLPEN	( 0U )
#define CLOCK_USER_CM1CON_SIDL	( 0U )
#define CLOCK_USER_CM1CON_ON	( 0U )

/*----------------------------------------------------------------------------*/
/* CM1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1STAT_BUFV	( 0U )
#define CLOCK_USER_CM1STAT_SATD	( 0U )
#define CLOCK_USER_CM1STAT_TRIG	( 0U )
#define CLOCK_USER_CM1STAT_LFT	( 0U )
#define CLOCK_USER_CM1STAT_HFT	( 0U )
#define CLOCK_USER_CM1STAT_LWT	( 0U )
#define CLOCK_USER_CM1STAT_HWT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1WINPRレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1WINPR	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1SEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1SEL_WINSEL	( 0U )
#define CLOCK_USER_CM1SEL_CNTSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1SATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1SAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1HFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1HFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1LFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1LFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1HWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1HWARN	( 0U )
/*----------------------------------------------------------------------------*/
/* CM1LWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM1LWARN	( 0U )

/*----------------------------------------------------------------------------*/
/* CM2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2CON_WIDTH	( 0U )
#define CLOCK_USER_CM2CON_FLTINJ	( 0U )
#define CLOCK_USER_CM2CON_CNTDIV	( 0U )
#define CLOCK_USER_CM2CON_SLPEN	( 0U )
#define CLOCK_USER_CM2CON_SIDL	( 0U )
#define CLOCK_USER_CM2CON_ON	( 0U )

/*----------------------------------------------------------------------------*/
/* CM2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2STAT_BUFV	( 0U )
#define CLOCK_USER_CM2STAT_SATD	( 0U )
#define CLOCK_USER_CM2STAT_TRIG	( 0U )
#define CLOCK_USER_CM2STAT_LFT	( 0U )
#define CLOCK_USER_CM2STAT_HFT	( 0U )
#define CLOCK_USER_CM2STAT_LWT	( 0U )
#define CLOCK_USER_CM2STAT_HWT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2WINPRレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2WINPR	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2SEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2SEL_WINSEL	( 0U )
#define CLOCK_USER_CM2SEL_CNTSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2SATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2SAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2HFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2HFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2LFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2LFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2HWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2HWARN	( 0U )
/*----------------------------------------------------------------------------*/
/* CM2LWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM2LWARN	( 0U )

/*----------------------------------------------------------------------------*/
/* CM3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3CON_WIDTH	( 0U )
#define CLOCK_USER_CM3CON_FLTINJ	( 0U )
#define CLOCK_USER_CM3CON_CNTDIV	( 0U )
#define CLOCK_USER_CM3CON_SLPEN	( 0U )
#define CLOCK_USER_CM3CON_SIDL	( 0U )
#define CLOCK_USER_CM3CON_ON	( 0U )

/*----------------------------------------------------------------------------*/
/* CM3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3STAT_BUFV	( 0U )
#define CLOCK_USER_CM3STAT_SATD	( 0U )
#define CLOCK_USER_CM3STAT_TRIG	( 0U )
#define CLOCK_USER_CM3STAT_LFT	( 0U )
#define CLOCK_USER_CM3STAT_HFT	( 0U )
#define CLOCK_USER_CM3STAT_LWT	( 0U )
#define CLOCK_USER_CM3STAT_HWT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3WINPRレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3WINPR	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3SEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3SEL_WINSEL	( 0U )
#define CLOCK_USER_CM3SEL_CNTSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3SATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3SAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3HFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3HFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3LFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3LFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3HWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3HWARN	( 0U )
/*----------------------------------------------------------------------------*/
/* CM3LWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM3LWARN	( 0U )
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* CM4CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4CON_WIDTH	( 0U )
#define CLOCK_USER_CM4CON_FLTINJ	( 0U )
#define CLOCK_USER_CM4CON_CNTDIV	( 0U )
#define CLOCK_USER_CM4CON_SLPEN	( 0U )
#define CLOCK_USER_CM4CON_SIDL	( 0U )
#define CLOCK_USER_CM4CON_ON	( 0U )

/*----------------------------------------------------------------------------*/
/* CM4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4STAT_BUFV	( 0U )
#define CLOCK_USER_CM4STAT_SATD	( 0U )
#define CLOCK_USER_CM4STAT_TRIG	( 0U )
#define CLOCK_USER_CM4STAT_LFT	( 0U )
#define CLOCK_USER_CM4STAT_HFT	( 0U )
#define CLOCK_USER_CM4STAT_LWT	( 0U )
#define CLOCK_USER_CM4STAT_HWT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4WINPRレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4WINPR	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4SEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4SELレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4SEL_WINSEL	( 0U )
#define CLOCK_USER_CM4SEL_CNTSEL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4SATレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4SAT	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4HFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4HFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4LFAILレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4LFAIL	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4HWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4HWARN	( 0U )
/*----------------------------------------------------------------------------*/
/* CM4LWARNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_CM4LWARN	( 0U )


/*----------------------------------------------------------------------------*/
/* FRCTUNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_FRCTUN	( 0U )
/*----------------------------------------------------------------------------*/
/* BFRCTUNレジスタ */
/*----------------------------------------------------------------------------*/
#define CLOCK_USER_BFRCTUN	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CLOCK_USER_H */

