
#ifndef ITC_USER_H
#define	ITC_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "itc_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------*/
/* ITCCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCCON1_SIGN	( 0U )
#define ITC_USER_ITCCON1_CVDEN	( 0U )
#define ITC_USER_ITCCON1_ON	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCCON2_TRGEN0	( 0U )
#define ITC_USER_ITCCON2_TRGEN1	( 0U )
#define ITC_USER_ITCCON2_TRGEN2	( 0U )
#define ITC_USER_ITCCON2_TMRPR	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCSTAT_INT0	( 0U )
#define ITC_USER_ITCSTAT_INT1	( 0U )
#define ITC_USER_ITCSTAT_INT2	( 0U )
#define ITC_USER_ITCSTAT_DRDY	( 0U )
#define ITC_USER_ITCSTAT_TSTEN	( 0U )
#define ITC_USER_ITCSTAT_TSTDATA	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCTXAレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCTXA_TXA0	( 0U )
#define ITC_USER_ITCTXA_TXA1	( 0U )
#define ITC_USER_ITCTXA_TXA2	( 0U )
#define ITC_USER_ITCTXA_TXA3	( 0U )
#define ITC_USER_ITCTXA_TXA4	( 0U )
#define ITC_USER_ITCTXA_TXA5	( 0U )
#define ITC_USER_ITCTXA_TXA6	( 0U )
#define ITC_USER_ITCTXA_TXA7	( 0U )
#define ITC_USER_ITCTXA_TXA8	( 0U )
#define ITC_USER_ITCTXA_TXA9	( 0U )
#define ITC_USER_ITCTXA_TXA10	( 0U )
#define ITC_USER_ITCTXA_TXA11	( 0U )
#define ITC_USER_ITCTXA_TXA12	( 0U )
#define ITC_USER_ITCTXA_TXA13	( 0U )
#define ITC_USER_ITCTXA_TXA14	( 0U )
#define ITC_USER_ITCTXA_TXA15	( 0U )
#define ITC_USER_ITCTXA_TXA16	( 0U )
#define ITC_USER_ITCTXA_TXA17	( 0U )
#define ITC_USER_ITCTXA_TXA18	( 0U )
#define ITC_USER_ITCTXA_TXA19	( 0U )
#define ITC_USER_ITCTXA_TXA20	( 0U )
#define ITC_USER_ITCTXA_TXA21	( 0U )
#define ITC_USER_ITCTXA_TXA22	( 0U )
#define ITC_USER_ITCTXA_TXA23	( 0U )
#define ITC_USER_ITCTXA_TXA24	( 0U )
#define ITC_USER_ITCTXA_TXA25	( 0U )
#define ITC_USER_ITCTXA_TXA26	( 0U )
#define ITC_USER_ITCTXA_TXA27	( 0U )
#define ITC_USER_ITCTXA_TXA28	( 0U )
#define ITC_USER_ITCTXA_TXA29	( 0U )
#define ITC_USER_ITCTXA_TXA30	( 0U )
#define ITC_USER_ITCTXA_TXA31	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCTXBレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCTXB_TXB0	( 0U )
#define ITC_USER_ITCTXB_TXB1	( 0U )
#define ITC_USER_ITCTXB_TXB2	( 0U )
#define ITC_USER_ITCTXB_TXB3	( 0U )
#define ITC_USER_ITCTXB_TXB4	( 0U )
#define ITC_USER_ITCTXB_TXB5	( 0U )
#define ITC_USER_ITCTXB_TXB6	( 0U )
#define ITC_USER_ITCTXB_TXB7	( 0U )
#define ITC_USER_ITCTXB_TXB8	( 0U )
#define ITC_USER_ITCTXB_TXB9	( 0U )
#define ITC_USER_ITCTXB_TXB10	( 0U )
#define ITC_USER_ITCTXB_TXB11	( 0U )
#define ITC_USER_ITCTXB_TXB12	( 0U )
#define ITC_USER_ITCTXB_TXB13	( 0U )
#define ITC_USER_ITCTXB_TXB14	( 0U )
#define ITC_USER_ITCTXB_TXB15	( 0U )
#define ITC_USER_ITCTXB_TXB16	( 0U )
#define ITC_USER_ITCTXB_TXB17	( 0U )
#define ITC_USER_ITCTXB_TXB18	( 0U )
#define ITC_USER_ITCTXB_TXB19	( 0U )
#define ITC_USER_ITCTXB_TXB20	( 0U )
#define ITC_USER_ITCTXB_TXB21	( 0U )
#define ITC_USER_ITCTXB_TXB22	( 0U )
#define ITC_USER_ITCTXB_TXB23	( 0U )
#define ITC_USER_ITCTXB_TXB24	( 0U )
#define ITC_USER_ITCTXB_TXB25	( 0U )
#define ITC_USER_ITCTXB_TXB26	( 0U )
#define ITC_USER_ITCTXB_TXB27	( 0U )
#define ITC_USER_ITCTXB_TXB28	( 0U )
#define ITC_USER_ITCTXB_TXB29	( 0U )
#define ITC_USER_ITCTXB_TXB30	( 0U )
#define ITC_USER_ITCTXB_TXB31	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCTXCレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCTXC_TXC0	( 0U )
#define ITC_USER_ITCTXC_TXC1	( 0U )
#define ITC_USER_ITCTXC_TXC2	( 0U )
#define ITC_USER_ITCTXC_TXC3	( 0U )
#define ITC_USER_ITCTXC_TXC4	( 0U )
#define ITC_USER_ITCTXC_TXC5	( 0U )
#define ITC_USER_ITCTXC_TXC6	( 0U )
#define ITC_USER_ITCTXC_TXC7	( 0U )
#define ITC_USER_ITCTXC_TXC8	( 0U )
#define ITC_USER_ITCTXC_TXC9	( 0U )
#define ITC_USER_ITCTXC_TXC10	( 0U )
#define ITC_USER_ITCTXC_TXC11	( 0U )
#define ITC_USER_ITCTXC_TXC12	( 0U )
#define ITC_USER_ITCTXC_TXC13	( 0U )
#define ITC_USER_ITCTXC_TXC14	( 0U )
#define ITC_USER_ITCTXC_TXC15	( 0U )
#define ITC_USER_ITCTXC_TXC16	( 0U )
#define ITC_USER_ITCTXC_TXC17	( 0U )
#define ITC_USER_ITCTXC_TXC18	( 0U )
#define ITC_USER_ITCTXC_TXC19	( 0U )
#define ITC_USER_ITCTXC_TXC20	( 0U )
#define ITC_USER_ITCTXC_TXC21	( 0U )
#define ITC_USER_ITCTXC_TXC22	( 0U )
#define ITC_USER_ITCTXC_TXC23	( 0U )
#define ITC_USER_ITCTXC_TXC24	( 0U )
#define ITC_USER_ITCTXC_TXC25	( 0U )
#define ITC_USER_ITCTXC_TXC26	( 0U )
#define ITC_USER_ITCTXC_TXC27	( 0U )
#define ITC_USER_ITCTXC_TXC28	( 0U )
#define ITC_USER_ITCTXC_TXC29	( 0U )
#define ITC_USER_ITCTXC_TXC30	( 0U )
#define ITC_USER_ITCTXC_TXC31	( 0U )

/*----------------------------------------------------------------------------*/
/* ADHITレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ADHIT_HIT0	( 0U )
#define ITC_USER_ADHIT_HIT1	( 0U )
#define ITC_USER_ADHIT_HIT2	( 0U )
#define ITC_USER_ADHIT_HIT3	( 0U )
#define ITC_USER_ADHIT_HIT4	( 0U )
#define ITC_USER_ADHIT_HIT5	( 0U )
#define ITC_USER_ADHIT_HIT6	( 0U )
#define ITC_USER_ADHIT_HIT7	( 0U )
#define ITC_USER_ADHIT_HIT8	( 0U )
#define ITC_USER_ADHIT_HIT9	( 0U )
#define ITC_USER_ADHIT_HIT10	( 0U )
#define ITC_USER_ADHIT_HIT11	( 0U )
#define ITC_USER_ADHIT_HIT12	( 0U )
#define ITC_USER_ADHIT_HIT13	( 0U )
#define ITC_USER_ADHIT_HIT14	( 0U )
#define ITC_USER_ADHIT_HIT15	( 0U )
#define ITC_USER_ADHIT_HIT16	( 0U )
#define ITC_USER_ADHIT_HIT17	( 0U )
#define ITC_USER_ADHIT_HIT18	( 0U )
#define ITC_USER_ADHIT_HIT19	( 0U )
#define ITC_USER_ADHIT_HIT20	( 0U )
#define ITC_USER_ADHIT_HIT21	( 0U )
#define ITC_USER_ADHIT_HIT22	( 0U )
#define ITC_USER_ADHIT_HIT23	( 0U )
#define ITC_USER_ADHIT_HIT24	( 0U )
#define ITC_USER_ADHIT_HIT25	( 0U )
#define ITC_USER_ADHIT_HIT26	( 0U )
#define ITC_USER_ADHIT_HIT27	( 0U )
#define ITC_USER_ADHIT_HIT28	( 0U )
#define ITC_USER_ADHIT_HIT29	( 0U )
#define ITC_USER_ADHIT_HIT30	( 0U )
#define ITC_USER_ADHIT_HIT31	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS0CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS0CON_RECCNT	( 0U )
#define ITC_USER_ITCLS0CON_SSRC	( 0U )
#define ITC_USER_ITCLS0CON_TRGCLR	( 0U )
#define ITC_USER_ITCLS0CON_SAMP	( 0U )
#define ITC_USER_ITCLS0CON_TRGEN	( 0U )
#define ITC_USER_ITCLS0CON_SAMC	( 0U )
#define ITC_USER_ITCLS0CON_MULCHEN	( 0U )
#define ITC_USER_ITCLS0CON_DMAEN	( 0U )
#define ITC_USER_ITCLS0CON_CM	( 0U )
#define ITC_USER_ITCLS0CON_WM	( 0U )
#define ITC_USER_ITCLS0CON_MODE	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS0STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS0STAT_NEXT	( 0U )
#define ITC_USER_ITCLS0STAT_INT	( 0U )
#define ITC_USER_ITCLS0STAT_BUSY	( 0U )
#define ITC_USER_ITCLS0STAT_TACT	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCLS0CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS0CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCLS0CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS0CMPLO	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS0MULレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS0MUL_MUL0	( 0U )
#define ITC_USER_ITCLS0MUL_MUL1	( 0U )
#define ITC_USER_ITCLS0MUL_MUL2	( 0U )
#define ITC_USER_ITCLS0MUL_MUL3	( 0U )
#define ITC_USER_ITCLS0MUL_MUL4	( 0U )
#define ITC_USER_ITCLS0MUL_MUL5	( 0U )
#define ITC_USER_ITCLS0MUL_MUL6	( 0U )
#define ITC_USER_ITCLS0MUL_MUL7	( 0U )
#define ITC_USER_ITCLS0MUL_MUL8	( 0U )
#define ITC_USER_ITCLS0MUL_MUL9	( 0U )
#define ITC_USER_ITCLS0MUL_MUL10	( 0U )
#define ITC_USER_ITCLS0MUL_MUL11	( 0U )
#define ITC_USER_ITCLS0MUL_MUL12	( 0U )
#define ITC_USER_ITCLS0MUL_MUL13	( 0U )
#define ITC_USER_ITCLS0MUL_MUL14	( 0U )
#define ITC_USER_ITCLS0MUL_MUL15	( 0U )
#define ITC_USER_ITCLS0MUL_MUL16	( 0U )
#define ITC_USER_ITCLS0MUL_MUL17	( 0U )
#define ITC_USER_ITCLS0MUL_MUL18	( 0U )
#define ITC_USER_ITCLS0MUL_MUL19	( 0U )
#define ITC_USER_ITCLS0MUL_MUL20	( 0U )
#define ITC_USER_ITCLS0MUL_MUL21	( 0U )
#define ITC_USER_ITCLS0MUL_MUL22	( 0U )
#define ITC_USER_ITCLS0MUL_MUL23	( 0U )
#define ITC_USER_ITCLS0MUL_MUL24	( 0U )
#define ITC_USER_ITCLS0MUL_MUL25	( 0U )
#define ITC_USER_ITCLS0MUL_MUL26	( 0U )
#define ITC_USER_ITCLS0MUL_MUL27	( 0U )
#define ITC_USER_ITCLS0MUL_MUL28	( 0U )
#define ITC_USER_ITCLS0MUL_MUL29	( 0U )
#define ITC_USER_ITCLS0MUL_MUL30	( 0U )
#define ITC_USER_ITCLS0MUL_MUL31	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS0SEQレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS0SEQ_ACCCNT	( 0U )
#define ITC_USER_ITCLS0SEQ_ACCEN	( 0U )
#define ITC_USER_ITCLS0SEQ_MATHSEQ	( 0U )
#define ITC_USER_ITCLS0SEQ_DATASEQ	( 0U )
#define ITC_USER_ITCLS0SEQ_CVDCAP	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS0TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS0TMR_TMRA	( 0U )
#define ITC_USER_ITCLS0TMR_TMRB	( 0U )
#define ITC_USER_ITCLS0TMR_TMRC	( 0U )
#define ITC_USER_ITCLS0TMR_TMRD	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS1CON_RECCNT	( 0U )
#define ITC_USER_ITCLS1CON_SSRC	( 0U )
#define ITC_USER_ITCLS1CON_TRGCLR	( 0U )
#define ITC_USER_ITCLS1CON_SAMP	( 0U )
#define ITC_USER_ITCLS1CON_TRGEN	( 0U )
#define ITC_USER_ITCLS1CON_SAMC	( 0U )
#define ITC_USER_ITCLS1CON_MULCHEN	( 0U )
#define ITC_USER_ITCLS1CON_DMAEN	( 0U )
#define ITC_USER_ITCLS1CON_CM	( 0U )
#define ITC_USER_ITCLS1CON_WM	( 0U )
#define ITC_USER_ITCLS1CON_MODE	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS1STAT_NEXT	( 0U )
#define ITC_USER_ITCLS1STAT_INT	( 0U )
#define ITC_USER_ITCLS1STAT_BUSY	( 0U )
#define ITC_USER_ITCLS1STAT_TACT	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCLS1CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS1CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCLS1CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS1CMPLO	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS1MULレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS1MUL_MUL0	( 0U )
#define ITC_USER_ITCLS1MUL_MUL1	( 0U )
#define ITC_USER_ITCLS1MUL_MUL2	( 0U )
#define ITC_USER_ITCLS1MUL_MUL3	( 0U )
#define ITC_USER_ITCLS1MUL_MUL4	( 0U )
#define ITC_USER_ITCLS1MUL_MUL5	( 0U )
#define ITC_USER_ITCLS1MUL_MUL6	( 0U )
#define ITC_USER_ITCLS1MUL_MUL7	( 0U )
#define ITC_USER_ITCLS1MUL_MUL8	( 0U )
#define ITC_USER_ITCLS1MUL_MUL9	( 0U )
#define ITC_USER_ITCLS1MUL_MUL10	( 0U )
#define ITC_USER_ITCLS1MUL_MUL11	( 0U )
#define ITC_USER_ITCLS1MUL_MUL12	( 0U )
#define ITC_USER_ITCLS1MUL_MUL13	( 0U )
#define ITC_USER_ITCLS1MUL_MUL14	( 0U )
#define ITC_USER_ITCLS1MUL_MUL15	( 0U )
#define ITC_USER_ITCLS1MUL_MUL16	( 0U )
#define ITC_USER_ITCLS1MUL_MUL17	( 0U )
#define ITC_USER_ITCLS1MUL_MUL18	( 0U )
#define ITC_USER_ITCLS1MUL_MUL19	( 0U )
#define ITC_USER_ITCLS1MUL_MUL20	( 0U )
#define ITC_USER_ITCLS1MUL_MUL21	( 0U )
#define ITC_USER_ITCLS1MUL_MUL22	( 0U )
#define ITC_USER_ITCLS1MUL_MUL23	( 0U )
#define ITC_USER_ITCLS1MUL_MUL24	( 0U )
#define ITC_USER_ITCLS1MUL_MUL25	( 0U )
#define ITC_USER_ITCLS1MUL_MUL26	( 0U )
#define ITC_USER_ITCLS1MUL_MUL27	( 0U )
#define ITC_USER_ITCLS1MUL_MUL28	( 0U )
#define ITC_USER_ITCLS1MUL_MUL29	( 0U )
#define ITC_USER_ITCLS1MUL_MUL30	( 0U )
#define ITC_USER_ITCLS1MUL_MUL31	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS1SEQレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS1SEQ_ACCCNT	( 0U )
#define ITC_USER_ITCLS1SEQ_ACCEN	( 0U )
#define ITC_USER_ITCLS1SEQ_MATHSEQ	( 0U )
#define ITC_USER_ITCLS1SEQ_DATASEQ	( 0U )
#define ITC_USER_ITCLS1SEQ_CVDCAP	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS1TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS1TMR_TMRA	( 0U )
#define ITC_USER_ITCLS1TMR_TMRB	( 0U )
#define ITC_USER_ITCLS1TMR_TMRC	( 0U )
#define ITC_USER_ITCLS1TMR_TMRD	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS2CON_RECCNT	( 0U )
#define ITC_USER_ITCLS2CON_SSRC	( 0U )
#define ITC_USER_ITCLS2CON_TRGCLR	( 0U )
#define ITC_USER_ITCLS2CON_SAMP	( 0U )
#define ITC_USER_ITCLS2CON_TRGEN	( 0U )
#define ITC_USER_ITCLS2CON_SAMC	( 0U )
#define ITC_USER_ITCLS2CON_MULCHEN	( 0U )
#define ITC_USER_ITCLS2CON_DMAEN	( 0U )
#define ITC_USER_ITCLS2CON_CM	( 0U )
#define ITC_USER_ITCLS2CON_WM	( 0U )
#define ITC_USER_ITCLS2CON_MODE	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS2STAT_NEXT	( 0U )
#define ITC_USER_ITCLS2STAT_INT	( 0U )
#define ITC_USER_ITCLS2STAT_BUSY	( 0U )
#define ITC_USER_ITCLS2STAT_TACT	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCLS2CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS2CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCLS2CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS2CMPLO	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS2MULレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS2MUL_MUL0	( 0U )
#define ITC_USER_ITCLS2MUL_MUL1	( 0U )
#define ITC_USER_ITCLS2MUL_MUL2	( 0U )
#define ITC_USER_ITCLS2MUL_MUL3	( 0U )
#define ITC_USER_ITCLS2MUL_MUL4	( 0U )
#define ITC_USER_ITCLS2MUL_MUL5	( 0U )
#define ITC_USER_ITCLS2MUL_MUL6	( 0U )
#define ITC_USER_ITCLS2MUL_MUL7	( 0U )
#define ITC_USER_ITCLS2MUL_MUL8	( 0U )
#define ITC_USER_ITCLS2MUL_MUL9	( 0U )
#define ITC_USER_ITCLS2MUL_MUL10	( 0U )
#define ITC_USER_ITCLS2MUL_MUL11	( 0U )
#define ITC_USER_ITCLS2MUL_MUL12	( 0U )
#define ITC_USER_ITCLS2MUL_MUL13	( 0U )
#define ITC_USER_ITCLS2MUL_MUL14	( 0U )
#define ITC_USER_ITCLS2MUL_MUL15	( 0U )
#define ITC_USER_ITCLS2MUL_MUL16	( 0U )
#define ITC_USER_ITCLS2MUL_MUL17	( 0U )
#define ITC_USER_ITCLS2MUL_MUL18	( 0U )
#define ITC_USER_ITCLS2MUL_MUL19	( 0U )
#define ITC_USER_ITCLS2MUL_MUL20	( 0U )
#define ITC_USER_ITCLS2MUL_MUL21	( 0U )
#define ITC_USER_ITCLS2MUL_MUL22	( 0U )
#define ITC_USER_ITCLS2MUL_MUL23	( 0U )
#define ITC_USER_ITCLS2MUL_MUL24	( 0U )
#define ITC_USER_ITCLS2MUL_MUL25	( 0U )
#define ITC_USER_ITCLS2MUL_MUL26	( 0U )
#define ITC_USER_ITCLS2MUL_MUL27	( 0U )
#define ITC_USER_ITCLS2MUL_MUL28	( 0U )
#define ITC_USER_ITCLS2MUL_MUL29	( 0U )
#define ITC_USER_ITCLS2MUL_MUL30	( 0U )
#define ITC_USER_ITCLS2MUL_MUL31	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS2SEQレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS2SEQ_ACCCNT	( 0U )
#define ITC_USER_ITCLS2SEQ_ACCEN	( 0U )
#define ITC_USER_ITCLS2SEQ_MATHSEQ	( 0U )
#define ITC_USER_ITCLS2SEQ_DATASEQ	( 0U )
#define ITC_USER_ITCLS2SEQ_CVDCAP	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCLS2TMRレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCLS2TMR_TMRA	( 0U )
#define ITC_USER_ITCLS2TMR_TMRB	( 0U )
#define ITC_USER_ITCLS2TMR_TMRC	( 0U )
#define ITC_USER_ITCLS2TMR_TMRD	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC0レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC0_PIN0	( 0U )
#define ITC_USER_ITCREC0_ACCDONE0	( 0U )
#define ITC_USER_ITCREC0_GRDA0	( 0U )
#define ITC_USER_ITCREC0_GRDB0	( 0U )
#define ITC_USER_ITCREC0_PIN1	( 0U )
#define ITC_USER_ITCREC0_ACCDONE1	( 0U )
#define ITC_USER_ITCREC0_GRDA1	( 0U )
#define ITC_USER_ITCREC0_GRDB1	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC1レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC1_PIN2	( 0U )
#define ITC_USER_ITCREC1_ACCDONE2	( 0U )
#define ITC_USER_ITCREC1_GRDA2	( 0U )
#define ITC_USER_ITCREC1_GRDB2	( 0U )
#define ITC_USER_ITCREC1_PIN3	( 0U )
#define ITC_USER_ITCREC1_ACCDONE3	( 0U )
#define ITC_USER_ITCREC1_GRDA3	( 0U )
#define ITC_USER_ITCREC1_GRDB3	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC2レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC2_PIN4	( 0U )
#define ITC_USER_ITCREC2_ACCDONE4	( 0U )
#define ITC_USER_ITCREC2_GRDA4	( 0U )
#define ITC_USER_ITCREC2_GRDB4	( 0U )
#define ITC_USER_ITCREC2_PIN5	( 0U )
#define ITC_USER_ITCREC2_ACCDONE5	( 0U )
#define ITC_USER_ITCREC2_GRDA5	( 0U )
#define ITC_USER_ITCREC2_GRDB5	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC3レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC3_PIN6	( 0U )
#define ITC_USER_ITCREC3_ACCDONE6	( 0U )
#define ITC_USER_ITCREC3_GRDA6	( 0U )
#define ITC_USER_ITCREC3_GRDB6	( 0U )
#define ITC_USER_ITCREC3_PIN7	( 0U )
#define ITC_USER_ITCREC3_ACCDONE7	( 0U )
#define ITC_USER_ITCREC3_GRDA7	( 0U )
#define ITC_USER_ITCREC3_GRDB7	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC4レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC4_PIN8	( 0U )
#define ITC_USER_ITCREC4_ACCDONE8	( 0U )
#define ITC_USER_ITCREC4_GRDA8	( 0U )
#define ITC_USER_ITCREC4_GRDB8	( 0U )
#define ITC_USER_ITCREC4_PIN9	( 0U )
#define ITC_USER_ITCREC4_ACCDONE9	( 0U )
#define ITC_USER_ITCREC4_GRDA9	( 0U )
#define ITC_USER_ITCREC4_GRDB9	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC5レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC5_PIN10	( 0U )
#define ITC_USER_ITCREC5_ACCDONE10	( 0U )
#define ITC_USER_ITCREC5_GRDA10	( 0U )
#define ITC_USER_ITCREC5_GRDB10	( 0U )
#define ITC_USER_ITCREC5_PIN11	( 0U )
#define ITC_USER_ITCREC5_ACCDONE11	( 0U )
#define ITC_USER_ITCREC5_GRDA11	( 0U )
#define ITC_USER_ITCREC5_GRDB11	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC6レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC6_PIN12	( 0U )
#define ITC_USER_ITCREC6_ACCDONE12	( 0U )
#define ITC_USER_ITCREC6_GRDA12	( 0U )
#define ITC_USER_ITCREC6_GRDB12	( 0U )
#define ITC_USER_ITCREC6_PIN13	( 0U )
#define ITC_USER_ITCREC6_ACCDONE13	( 0U )
#define ITC_USER_ITCREC6_GRDA13	( 0U )
#define ITC_USER_ITCREC6_GRDB13	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC7レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC7_PIN14	( 0U )
#define ITC_USER_ITCREC7_ACCDONE14	( 0U )
#define ITC_USER_ITCREC7_GRDA14	( 0U )
#define ITC_USER_ITCREC7_GRDB14	( 0U )
#define ITC_USER_ITCREC7_PIN15	( 0U )
#define ITC_USER_ITCREC7_ACCDONE15	( 0U )
#define ITC_USER_ITCREC7_GRDA15	( 0U )
#define ITC_USER_ITCREC7_GRDB15	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC8レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC8_PIN16	( 0U )
#define ITC_USER_ITCREC8_ACCDONE16	( 0U )
#define ITC_USER_ITCREC8_GRDA16	( 0U )
#define ITC_USER_ITCREC8_GRDB16	( 0U )
#define ITC_USER_ITCREC8_PIN17	( 0U )
#define ITC_USER_ITCREC8_ACCDONE17	( 0U )
#define ITC_USER_ITCREC8_GRDA17	( 0U )
#define ITC_USER_ITCREC8_GRDB17	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC9レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC9_PIN18	( 0U )
#define ITC_USER_ITCREC9_ACCDONE18	( 0U )
#define ITC_USER_ITCREC9_GRDA18	( 0U )
#define ITC_USER_ITCREC9_GRDB18	( 0U )
#define ITC_USER_ITCREC9_PIN19	( 0U )
#define ITC_USER_ITCREC9_ACCDONE19	( 0U )
#define ITC_USER_ITCREC9_GRDA19	( 0U )
#define ITC_USER_ITCREC9_GRDB19	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC10レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC10_PIN20	( 0U )
#define ITC_USER_ITCREC10_ACCDONE20	( 0U )
#define ITC_USER_ITCREC10_GRDA20	( 0U )
#define ITC_USER_ITCREC10_GRDB20	( 0U )
#define ITC_USER_ITCREC10_PIN21	( 0U )
#define ITC_USER_ITCREC10_ACCDONE21	( 0U )
#define ITC_USER_ITCREC10_GRDA21	( 0U )
#define ITC_USER_ITCREC10_GRDB21	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC11レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC11_PIN22	( 0U )
#define ITC_USER_ITCREC11_ACCDONE22	( 0U )
#define ITC_USER_ITCREC11_GRDA22	( 0U )
#define ITC_USER_ITCREC11_GRDB22	( 0U )
#define ITC_USER_ITCREC11_PIN23	( 0U )
#define ITC_USER_ITCREC11_ACCDONE23	( 0U )
#define ITC_USER_ITCREC11_GRDA23	( 0U )
#define ITC_USER_ITCREC11_GRDB23	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC12レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC12_PIN24	( 0U )
#define ITC_USER_ITCREC12_ACCDONE24	( 0U )
#define ITC_USER_ITCREC12_GRDA24	( 0U )
#define ITC_USER_ITCREC12_GRDB24	( 0U )
#define ITC_USER_ITCREC12_PIN25	( 0U )
#define ITC_USER_ITCREC12_ACCDONE25	( 0U )
#define ITC_USER_ITCREC12_GRDA25	( 0U )
#define ITC_USER_ITCREC12_GRDB25	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC13レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC13_PIN26	( 0U )
#define ITC_USER_ITCREC13_ACCDONE26	( 0U )
#define ITC_USER_ITCREC13_GRDA26	( 0U )
#define ITC_USER_ITCREC13_GRDB26	( 0U )
#define ITC_USER_ITCREC13_PIN27	( 0U )
#define ITC_USER_ITCREC13_ACCDONE27	( 0U )
#define ITC_USER_ITCREC13_GRDA27	( 0U )
#define ITC_USER_ITCREC13_GRDB27	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC14レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC14_PIN28	( 0U )
#define ITC_USER_ITCREC14_ACCDONE28	( 0U )
#define ITC_USER_ITCREC14_GRDA28	( 0U )
#define ITC_USER_ITCREC14_GRDB28	( 0U )
#define ITC_USER_ITCREC14_PIN29	( 0U )
#define ITC_USER_ITCREC14_ACCDONE29	( 0U )
#define ITC_USER_ITCREC14_GRDA29	( 0U )
#define ITC_USER_ITCREC14_GRDB29	( 0U )

/*----------------------------------------------------------------------------*/
/* ITCREC15レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCREC15_PIN30	( 0U )
#define ITC_USER_ITCREC15_ACCDONE30	( 0U )
#define ITC_USER_ITCREC15_GRDA30	( 0U )
#define ITC_USER_ITCREC15_GRDB30	( 0U )
#define ITC_USER_ITCREC15_PIN31	( 0U )
#define ITC_USER_ITCREC15_ACCDONE31	( 0U )
#define ITC_USER_ITCREC15_GRDA31	( 0U )
#define ITC_USER_ITCREC15_GRDB31	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES0レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES0	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES1レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES1	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES2レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES2	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES3レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES3	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES4レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES4	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES5レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES5	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES6レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES6	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES7レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES7	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES8レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES8	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES9レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES9	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES10レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES10	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES11レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES11	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES12レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES12	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES13レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES13	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES14レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES14	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES15レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES15	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES16レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES16	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES17レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES17	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES18レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES18	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES19レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES19	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES20レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES20	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES21レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES21	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES22レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES22	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES23レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES23	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES24レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES24	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES25レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES25	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES26レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES26	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES27レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES27	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES28レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES28	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES29レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES29	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES30レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES30	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCRES31レジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCRES31	( 0U )
/*----------------------------------------------------------------------------*/
/* ITCCURRESレジスタ */
/*----------------------------------------------------------------------------*/
#define ITC_USER_ITCCURRES	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CLC_USER_H */

