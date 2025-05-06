
#ifndef ADC_USER_H
#define	ADC_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "adc_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* AD1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CON	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CON_CALCNT	( 0U )
#define ADC_USER_AD1CON_BUFEN	( 0U )
#define ADC_USER_AD1CON_TSTEN	( 0U )
#define ADC_USER_AD1CON_TSTLOCK	( 0U )
#define ADC_USER_AD1CON_ON	( 0U )
#define ADC_USER_AD1CON_STNDBY	( 0U )
#define ADC_USER_AD1CON_RPTCNT	( 0U )
#define ADC_USER_AD1CON_MODE	( 0U )
#define ADC_USER_AD1CON_CALRATE	( 0U )
#define ADC_USER_AD1CON_ACALEN	( 0U )
#define ADC_USER_AD1CON_CALREQ	( 0U )
#define ADC_USER_AD1CON_CALRDY	( 0U )
#define ADC_USER_AD1CON_ADRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1DATAOVRレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1DATAOVR	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1STAT_CH0RDY	( 0U )
#define ADC_USER_AD1STAT_CH1RDY	( 0U )
#define ADC_USER_AD1STAT_CH2RDY	( 0U )
#define ADC_USER_AD1STAT_CH3RDY	( 0U )
#define ADC_USER_AD1STAT_CH4RDY	( 0U )
#define ADC_USER_AD1STAT_CH5RDY	( 0U )
#define ADC_USER_AD1STAT_CH6RDY	( 0U )
#define ADC_USER_AD1STAT_CH7RDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1RSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1RSTAT_CH0RRDY	( 0U )
#define ADC_USER_AD1RSTAT_CH1RRDY	( 0U )
#define ADC_USER_AD1RSTAT_CH2RRDY	( 0U )
#define ADC_USER_AD1RSTAT_CH3RRDY	( 0U )
#define ADC_USER_AD1RSTAT_CH4RRDY	( 0U )
#define ADC_USER_AD1RSTAT_CH5RRDY	( 0U )
#define ADC_USER_AD1RSTAT_CH6RRDY	( 0U )
#define ADC_USER_AD1RSTAT_CH7RRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CMPSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CMPSTAT_CH0FLG	( 0U )
#define ADC_USER_AD1CMPSTAT_CH1FLG	( 0U )
#define ADC_USER_AD1CMPSTAT_CH2FLG	( 0U )
#define ADC_USER_AD1CMPSTAT_CH3FLG	( 0U )
#define ADC_USER_AD1CMPSTAT_CH4FLG	( 0U )
#define ADC_USER_AD1CMPSTAT_CH5FLG	( 0U )
#define ADC_USER_AD1CMPSTAT_CH6FLG	( 0U )
#define ADC_USER_AD1CMPSTAT_CH7FLG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1SWTRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1SWTRG_CH0TRG	( 0U )
#define ADC_USER_AD1SWTRG_CH1TRG	( 0U )
#define ADC_USER_AD1SWTRG_CH2TRG	( 0U )
#define ADC_USER_AD1SWTRG_CH3TRG	( 0U )
#define ADC_USER_AD1SWTRG_CH4TRG	( 0U )
#define ADC_USER_AD1SWTRG_CH5TRG	( 0U )
#define ADC_USER_AD1SWTRG_CH6TRG	( 0U )
#define ADC_USER_AD1SWTRG_CH7TRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH0CON1_MODE	( 0U )
#define ADC_USER_AD1CH0CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH0CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH0CON1_SAMC	( 0U )
#define ADC_USER_AD1CH0CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH0CON1_EIEN	( 0U )
#define ADC_USER_AD1CH0CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH0CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH0CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH0CON1_FRAC	( 0U )
#define ADC_USER_AD1CH0CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH0CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH0CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH0CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH0CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH0CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH0CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0RES_RES	( 0U )
#define ADC_USER_AD1CH0RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CNT_CNT	( 0U )
#define ADC_USER_AD1CH0CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH0CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH0CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH1CON1_MODE	( 0U )
#define ADC_USER_AD1CH1CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH1CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH1CON1_SAMC	( 0U )
#define ADC_USER_AD1CH1CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH1CON1_EIEN	( 0U )
#define ADC_USER_AD1CH1CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH1CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH1CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH1CON1_FRAC	( 0U )
#define ADC_USER_AD1CH1CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH1CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH1CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH1CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH1CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH1CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH1CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1RES_RES	( 0U )
#define ADC_USER_AD1CH1RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CNT_CNT	( 0U )
#define ADC_USER_AD1CH1CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH1CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH1CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH2CON1_MODE	( 0U )
#define ADC_USER_AD1CH2CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH2CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH2CON1_SAMC	( 0U )
#define ADC_USER_AD1CH2CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH2CON1_EIEN	( 0U )
#define ADC_USER_AD1CH2CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH2CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH2CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH2CON1_FRAC	( 0U )
#define ADC_USER_AD1CH2CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH2CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH2CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH2CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH2CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH2CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH2CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2RES_RES	( 0U )
#define ADC_USER_AD1CH2RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CNT_CNT	( 0U )
#define ADC_USER_AD1CH2CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH2CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH2CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH3CON1_MODE	( 0U )
#define ADC_USER_AD1CH3CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH3CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH3CON1_SAMC	( 0U )
#define ADC_USER_AD1CH3CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH3CON1_EIEN	( 0U )
#define ADC_USER_AD1CH3CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH3CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH3CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH3CON1_FRAC	( 0U )
#define ADC_USER_AD1CH3CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH3CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH3CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH3CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH3CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH3CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH3CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3RES_RES	( 0U )
#define ADC_USER_AD1CH3RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CNT_CNT	( 0U )
#define ADC_USER_AD1CH3CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH3CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH3CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH4CON1_MODE	( 0U )
#define ADC_USER_AD1CH4CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH4CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH4CON1_SAMC	( 0U )
#define ADC_USER_AD1CH4CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH4CON1_EIEN	( 0U )
#define ADC_USER_AD1CH4CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH4CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH4CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH4CON1_FRAC	( 0U )
#define ADC_USER_AD1CH4CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH4CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH4CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH4CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH4CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH4CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH4CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4RES_RES	( 0U )
#define ADC_USER_AD1CH4RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CNT_CNT	( 0U )
#define ADC_USER_AD1CH4CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH4CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH4CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH5CON1_MODE	( 0U )
#define ADC_USER_AD1CH5CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH5CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH5CON1_SAMC	( 0U )
#define ADC_USER_AD1CH5CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH5CON1_EIEN	( 0U )
#define ADC_USER_AD1CH5CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH5CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH5CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH5CON1_FRAC	( 0U )
#define ADC_USER_AD1CH5CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH5CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH5CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH5CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH5CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH5CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH5CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5RES_RES	( 0U )
#define ADC_USER_AD1CH5RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CNT_CNT	( 0U )
#define ADC_USER_AD1CH5CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH5CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH5CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH6CON1_MODE	( 0U )
#define ADC_USER_AD1CH6CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH6CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH6CON1_SAMC	( 0U )
#define ADC_USER_AD1CH6CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH6CON1_EIEN	( 0U )
#define ADC_USER_AD1CH6CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH6CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH6CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH6CON1_FRAC	( 0U )
#define ADC_USER_AD1CH6CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH6CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH6CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH6CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH6CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH6CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH6CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6RES_RES	( 0U )
#define ADC_USER_AD1CH6RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CNT_CNT	( 0U )
#define ADC_USER_AD1CH6CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH6ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH6ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CON1_TRG1SRC	( 0U )
#define ADC_USER_AD1CH7CON1_MODE	( 0U )
#define ADC_USER_AD1CH7CON1_TRG2SRC	( 0U )
#define ADC_USER_AD1CH7CON1_ACCNUM	( 0U )
#define ADC_USER_AD1CH7CON1_SAMC	( 0U )
#define ADC_USER_AD1CH7CON1_IRQSEL	( 0U )
#define ADC_USER_AD1CH7CON1_EIEN	( 0U )
#define ADC_USER_AD1CH7CON1_TRG1POL	( 0U )
#define ADC_USER_AD1CH7CON1_PINSEL	( 0U )
#define ADC_USER_AD1CH7CON1_NINSEL	( 0U )
#define ADC_USER_AD1CH7CON1_FRAC	( 0U )
#define ADC_USER_AD1CH7CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD1CH7CON2_CMPMOD	( 0U )
#define ADC_USER_AD1CH7CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD1CH7CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD1CH7CON2_CMPVAL	( 0U )
#define ADC_USER_AD1CH7CON2_ACCBRST	( 0U )
#define ADC_USER_AD1CH7CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7RES_RES	( 0U )
#define ADC_USER_AD1CH7RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CNT_CNT	( 0U )
#define ADC_USER_AD1CH7CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD1CH7ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD1CH7ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CON	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CON_CALCNT	( 0U )
#define ADC_USER_AD2CON_BUFEN	( 0U )
#define ADC_USER_AD2CON_TSTEN	( 0U )
#define ADC_USER_AD2CON_TSTLOCK	( 0U )
#define ADC_USER_AD2CON_ON	( 0U )
#define ADC_USER_AD2CON_STNDBY	( 0U )
#define ADC_USER_AD2CON_RPTCNT	( 0U )
#define ADC_USER_AD2CON_MODE	( 0U )
#define ADC_USER_AD2CON_CALRATE	( 0U )
#define ADC_USER_AD2CON_ACALEN	( 0U )
#define ADC_USER_AD2CON_CALREQ	( 0U )
#define ADC_USER_AD2CON_CALRDY	( 0U )
#define ADC_USER_AD2CON_ADRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2DATAOVRレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2DATAOVR	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2STAT_CH0RDY	( 0U )
#define ADC_USER_AD2STAT_CH1RDY	( 0U )
#define ADC_USER_AD2STAT_CH2RDY	( 0U )
#define ADC_USER_AD2STAT_CH3RDY	( 0U )
#define ADC_USER_AD2STAT_CH4RDY	( 0U )
#define ADC_USER_AD2STAT_CH5RDY	( 0U )
#define ADC_USER_AD2STAT_CH6RDY	( 0U )
#define ADC_USER_AD2STAT_CH7RDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2RSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2RSTAT_CH0RRDY	( 0U )
#define ADC_USER_AD2RSTAT_CH1RRDY	( 0U )
#define ADC_USER_AD2RSTAT_CH2RRDY	( 0U )
#define ADC_USER_AD2RSTAT_CH3RRDY	( 0U )
#define ADC_USER_AD2RSTAT_CH4RRDY	( 0U )
#define ADC_USER_AD2RSTAT_CH5RRDY	( 0U )
#define ADC_USER_AD2RSTAT_CH6RRDY	( 0U )
#define ADC_USER_AD2RSTAT_CH7RRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CMPSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CMPSTAT_CH0FLG	( 0U )
#define ADC_USER_AD2CMPSTAT_CH1FLG	( 0U )
#define ADC_USER_AD2CMPSTAT_CH2FLG	( 0U )
#define ADC_USER_AD2CMPSTAT_CH3FLG	( 0U )
#define ADC_USER_AD2CMPSTAT_CH4FLG	( 0U )
#define ADC_USER_AD2CMPSTAT_CH5FLG	( 0U )
#define ADC_USER_AD2CMPSTAT_CH6FLG	( 0U )
#define ADC_USER_AD2CMPSTAT_CH7FLG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2SWTRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2SWTRG_CH0TRG	( 0U )
#define ADC_USER_AD2SWTRG_CH1TRG	( 0U )
#define ADC_USER_AD2SWTRG_CH2TRG	( 0U )
#define ADC_USER_AD2SWTRG_CH3TRG	( 0U )
#define ADC_USER_AD2SWTRG_CH4TRG	( 0U )
#define ADC_USER_AD2SWTRG_CH5TRG	( 0U )
#define ADC_USER_AD2SWTRG_CH6TRG	( 0U )
#define ADC_USER_AD2SWTRG_CH7TRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH0CON1_MODE	( 0U )
#define ADC_USER_AD2CH0CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH0CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH0CON1_SAMC	( 0U )
#define ADC_USER_AD2CH0CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH0CON1_EIEN	( 0U )
#define ADC_USER_AD2CH0CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH0CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH0CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH0CON1_FRAC	( 0U )
#define ADC_USER_AD2CH0CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH0CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH0CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH0CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH0CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH0CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH0CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0RES_RES	( 0U )
#define ADC_USER_AD2CH0RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CNT_CNT	( 0U )
#define ADC_USER_AD2CH0CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH0CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH0CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH1CON1_MODE	( 0U )
#define ADC_USER_AD2CH1CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH1CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH1CON1_SAMC	( 0U )
#define ADC_USER_AD2CH1CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH1CON1_EIEN	( 0U )
#define ADC_USER_AD2CH1CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH1CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH1CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH1CON1_FRAC	( 0U )
#define ADC_USER_AD2CH1CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH1CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH1CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH1CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH1CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH1CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH1CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1RES_RES	( 0U )
#define ADC_USER_AD2CH1RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CNT_CNT	( 0U )
#define ADC_USER_AD2CH1CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH1CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH1CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH2CON1_MODE	( 0U )
#define ADC_USER_AD2CH2CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH2CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH2CON1_SAMC	( 0U )
#define ADC_USER_AD2CH2CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH2CON1_EIEN	( 0U )
#define ADC_USER_AD2CH2CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH2CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH2CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH2CON1_FRAC	( 0U )
#define ADC_USER_AD2CH2CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH2CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH2CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH2CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH2CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH2CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH2CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2RES_RES	( 0U )
#define ADC_USER_AD2CH2RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CNT_CNT	( 0U )
#define ADC_USER_AD2CH2CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH2CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH2CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH3CON1_MODE	( 0U )
#define ADC_USER_AD2CH3CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH3CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH3CON1_SAMC	( 0U )
#define ADC_USER_AD2CH3CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH3CON1_EIEN	( 0U )
#define ADC_USER_AD2CH3CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH3CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH3CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH3CON1_FRAC	( 0U )
#define ADC_USER_AD2CH3CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH3CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH3CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH3CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH3CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH3CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH3CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3RES_RES	( 0U )
#define ADC_USER_AD2CH3RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CNT_CNT	( 0U )
#define ADC_USER_AD2CH3CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH3CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH3CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH4CON1_MODE	( 0U )
#define ADC_USER_AD2CH4CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH4CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH4CON1_SAMC	( 0U )
#define ADC_USER_AD2CH4CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH4CON1_EIEN	( 0U )
#define ADC_USER_AD2CH4CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH4CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH4CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH4CON1_FRAC	( 0U )
#define ADC_USER_AD2CH4CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH4CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH4CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH4CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH4CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH4CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH4CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4RES_RES	( 0U )
#define ADC_USER_AD2CH4RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CNT_CNT	( 0U )
#define ADC_USER_AD2CH4CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH4CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH4CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH5CON1_MODE	( 0U )
#define ADC_USER_AD2CH5CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH5CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH5CON1_SAMC	( 0U )
#define ADC_USER_AD2CH5CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH5CON1_EIEN	( 0U )
#define ADC_USER_AD2CH5CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH5CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH5CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH5CON1_FRAC	( 0U )
#define ADC_USER_AD2CH5CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH5CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH5CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH5CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH5CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH5CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH5CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5RES_RES	( 0U )
#define ADC_USER_AD2CH5RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CNT_CNT	( 0U )
#define ADC_USER_AD2CH5CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH5CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH5CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH6CON1_MODE	( 0U )
#define ADC_USER_AD2CH6CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH6CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH6CON1_SAMC	( 0U )
#define ADC_USER_AD2CH6CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH6CON1_EIEN	( 0U )
#define ADC_USER_AD2CH6CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH6CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH6CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH6CON1_FRAC	( 0U )
#define ADC_USER_AD2CH6CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH6CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH6CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH6CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH6CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH6CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH6CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6RES_RES	( 0U )
#define ADC_USER_AD2CH6RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CNT_CNT	( 0U )
#define ADC_USER_AD2CH6CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH6ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH6ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CON1_TRG1SRC	( 0U )
#define ADC_USER_AD2CH7CON1_MODE	( 0U )
#define ADC_USER_AD2CH7CON1_TRG2SRC	( 0U )
#define ADC_USER_AD2CH7CON1_ACCNUM	( 0U )
#define ADC_USER_AD2CH7CON1_SAMC	( 0U )
#define ADC_USER_AD2CH7CON1_IRQSEL	( 0U )
#define ADC_USER_AD2CH7CON1_EIEN	( 0U )
#define ADC_USER_AD2CH7CON1_TRG1POL	( 0U )
#define ADC_USER_AD2CH7CON1_PINSEL	( 0U )
#define ADC_USER_AD2CH7CON1_NINSEL	( 0U )
#define ADC_USER_AD2CH7CON1_FRAC	( 0U )
#define ADC_USER_AD2CH7CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD2CH7CON2_CMPMOD	( 0U )
#define ADC_USER_AD2CH7CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD2CH7CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD2CH7CON2_CMPVAL	( 0U )
#define ADC_USER_AD2CH7CON2_ACCBRST	( 0U )
#define ADC_USER_AD2CH7CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7RES_RES	( 0U )
#define ADC_USER_AD2CH7RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CNT_CNT	( 0U )
#define ADC_USER_AD2CH7CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD2CH7ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD2CH7ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CON	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CON_CALCNT	( 0U )
#define ADC_USER_AD3CON_BUFEN	( 0U )
#define ADC_USER_AD3CON_TSTEN	( 0U )
#define ADC_USER_AD3CON_TSTLOCK	( 0U )
#define ADC_USER_AD3CON_ON	( 0U )
#define ADC_USER_AD3CON_STNDBY	( 0U )
#define ADC_USER_AD3CON_RPTCNT	( 0U )
#define ADC_USER_AD3CON_MODE	( 0U )
#define ADC_USER_AD3CON_CALRATE	( 0U )
#define ADC_USER_AD3CON_ACALEN	( 0U )
#define ADC_USER_AD3CON_CALREQ	( 0U )
#define ADC_USER_AD3CON_CALRDY	( 0U )
#define ADC_USER_AD3CON_ADRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3DATAOVRレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3DATAOVR	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3STAT_CH0RDY	( 0U )
#define ADC_USER_AD3STAT_CH1RDY	( 0U )
#define ADC_USER_AD3STAT_CH2RDY	( 0U )
#define ADC_USER_AD3STAT_CH3RDY	( 0U )
#define ADC_USER_AD3STAT_CH4RDY	( 0U )
#define ADC_USER_AD3STAT_CH5RDY	( 0U )
#define ADC_USER_AD3STAT_CH6RDY	( 0U )
#define ADC_USER_AD3STAT_CH7RDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3RSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3RSTAT_CH0RRDY	( 0U )
#define ADC_USER_AD3RSTAT_CH1RRDY	( 0U )
#define ADC_USER_AD3RSTAT_CH2RRDY	( 0U )
#define ADC_USER_AD3RSTAT_CH3RRDY	( 0U )
#define ADC_USER_AD3RSTAT_CH4RRDY	( 0U )
#define ADC_USER_AD3RSTAT_CH5RRDY	( 0U )
#define ADC_USER_AD3RSTAT_CH6RRDY	( 0U )
#define ADC_USER_AD3RSTAT_CH7RRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CMPSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CMPSTAT_CH0FLG	( 0U )
#define ADC_USER_AD3CMPSTAT_CH1FLG	( 0U )
#define ADC_USER_AD3CMPSTAT_CH2FLG	( 0U )
#define ADC_USER_AD3CMPSTAT_CH3FLG	( 0U )
#define ADC_USER_AD3CMPSTAT_CH4FLG	( 0U )
#define ADC_USER_AD3CMPSTAT_CH5FLG	( 0U )
#define ADC_USER_AD3CMPSTAT_CH6FLG	( 0U )
#define ADC_USER_AD3CMPSTAT_CH7FLG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3SWTRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3SWTRG_CH0TRG	( 0U )
#define ADC_USER_AD3SWTRG_CH1TRG	( 0U )
#define ADC_USER_AD3SWTRG_CH2TRG	( 0U )
#define ADC_USER_AD3SWTRG_CH3TRG	( 0U )
#define ADC_USER_AD3SWTRG_CH4TRG	( 0U )
#define ADC_USER_AD3SWTRG_CH5TRG	( 0U )
#define ADC_USER_AD3SWTRG_CH6TRG	( 0U )
#define ADC_USER_AD3SWTRG_CH7TRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH0CON1_MODE	( 0U )
#define ADC_USER_AD3CH0CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH0CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH0CON1_SAMC	( 0U )
#define ADC_USER_AD3CH0CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH0CON1_EIEN	( 0U )
#define ADC_USER_AD3CH0CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH0CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH0CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH0CON1_FRAC	( 0U )
#define ADC_USER_AD3CH0CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH0CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH0CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH0CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH0CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH0CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH0CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0RES_RES	( 0U )
#define ADC_USER_AD3CH0RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CNT_CNT	( 0U )
#define ADC_USER_AD3CH0CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH0CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH0CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH1CON1_MODE	( 0U )
#define ADC_USER_AD3CH1CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH1CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH1CON1_SAMC	( 0U )
#define ADC_USER_AD3CH1CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH1CON1_EIEN	( 0U )
#define ADC_USER_AD3CH1CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH1CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH1CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH1CON1_FRAC	( 0U )
#define ADC_USER_AD3CH1CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH1CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH1CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH1CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH1CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH1CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH1CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1RES_RES	( 0U )
#define ADC_USER_AD3CH1RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CNT_CNT	( 0U )
#define ADC_USER_AD3CH1CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH1CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH1CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH2CON1_MODE	( 0U )
#define ADC_USER_AD3CH2CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH2CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH2CON1_SAMC	( 0U )
#define ADC_USER_AD3CH2CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH2CON1_EIEN	( 0U )
#define ADC_USER_AD3CH2CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH2CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH2CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH2CON1_FRAC	( 0U )
#define ADC_USER_AD3CH2CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH2CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH2CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH2CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH2CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH2CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH2CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2RES_RES	( 0U )
#define ADC_USER_AD3CH2RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CNT_CNT	( 0U )
#define ADC_USER_AD3CH2CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH2CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH2CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH3CON1_MODE	( 0U )
#define ADC_USER_AD3CH3CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH3CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH3CON1_SAMC	( 0U )
#define ADC_USER_AD3CH3CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH3CON1_EIEN	( 0U )
#define ADC_USER_AD3CH3CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH3CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH3CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH3CON1_FRAC	( 0U )
#define ADC_USER_AD3CH3CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH3CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH3CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH3CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH3CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH3CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH3CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3RES_RES	( 0U )
#define ADC_USER_AD3CH3RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CNT_CNT	( 0U )
#define ADC_USER_AD3CH3CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH3CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH3CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH4CON1_MODE	( 0U )
#define ADC_USER_AD3CH4CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH4CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH4CON1_SAMC	( 0U )
#define ADC_USER_AD3CH4CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH4CON1_EIEN	( 0U )
#define ADC_USER_AD3CH4CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH4CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH4CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH4CON1_FRAC	( 0U )
#define ADC_USER_AD3CH4CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH4CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH4CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH4CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH4CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH4CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH4CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4RES_RES	( 0U )
#define ADC_USER_AD3CH4RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CNT_CNT	( 0U )
#define ADC_USER_AD3CH4CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH4CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH4CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH5CON1_MODE	( 0U )
#define ADC_USER_AD3CH5CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH5CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH5CON1_SAMC	( 0U )
#define ADC_USER_AD3CH5CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH5CON1_EIEN	( 0U )
#define ADC_USER_AD3CH5CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH5CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH5CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH5CON1_FRAC	( 0U )
#define ADC_USER_AD3CH5CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH5CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH5CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH5CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH5CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH5CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH5CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5RES_RES	( 0U )
#define ADC_USER_AD3CH5RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CNT_CNT	( 0U )
#define ADC_USER_AD3CH5CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH5CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH5CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH6CON1_MODE	( 0U )
#define ADC_USER_AD3CH6CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH6CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH6CON1_SAMC	( 0U )
#define ADC_USER_AD3CH6CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH6CON1_EIEN	( 0U )
#define ADC_USER_AD3CH6CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH6CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH6CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH6CON1_FRAC	( 0U )
#define ADC_USER_AD3CH6CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH6CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH6CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH6CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH6CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH6CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH6CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6RES_RES	( 0U )
#define ADC_USER_AD3CH6RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CNT_CNT	( 0U )
#define ADC_USER_AD3CH6CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH6ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH6ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CON1_TRG1SRC	( 0U )
#define ADC_USER_AD3CH7CON1_MODE	( 0U )
#define ADC_USER_AD3CH7CON1_TRG2SRC	( 0U )
#define ADC_USER_AD3CH7CON1_ACCNUM	( 0U )
#define ADC_USER_AD3CH7CON1_SAMC	( 0U )
#define ADC_USER_AD3CH7CON1_IRQSEL	( 0U )
#define ADC_USER_AD3CH7CON1_EIEN	( 0U )
#define ADC_USER_AD3CH7CON1_TRG1POL	( 0U )
#define ADC_USER_AD3CH7CON1_PINSEL	( 0U )
#define ADC_USER_AD3CH7CON1_NINSEL	( 0U )
#define ADC_USER_AD3CH7CON1_FRAC	( 0U )
#define ADC_USER_AD3CH7CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD3CH7CON2_CMPMOD	( 0U )
#define ADC_USER_AD3CH7CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD3CH7CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD3CH7CON2_CMPVAL	( 0U )
#define ADC_USER_AD3CH7CON2_ACCBRST	( 0U )
#define ADC_USER_AD3CH7CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7RES_RES	( 0U )
#define ADC_USER_AD3CH7RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CNT_CNT	( 0U )
#define ADC_USER_AD3CH7CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD3CH7ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD3CH7ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CON	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CON_CALCNT	( 0U )
#define ADC_USER_AD4CON_BUFEN	( 0U )
#define ADC_USER_AD4CON_TSTEN	( 0U )
#define ADC_USER_AD4CON_TSTLOCK	( 0U )
#define ADC_USER_AD4CON_ON	( 0U )
#define ADC_USER_AD4CON_STNDBY	( 0U )
#define ADC_USER_AD4CON_RPTCNT	( 0U )
#define ADC_USER_AD4CON_MODE	( 0U )
#define ADC_USER_AD4CON_CALRATE	( 0U )
#define ADC_USER_AD4CON_ACALEN	( 0U )
#define ADC_USER_AD4CON_CALREQ	( 0U )
#define ADC_USER_AD4CON_CALRDY	( 0U )
#define ADC_USER_AD4CON_ADRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4DATAOVRレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4DATAOVR	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4STAT_CH0RDY	( 0U )
#define ADC_USER_AD4STAT_CH1RDY	( 0U )
#define ADC_USER_AD4STAT_CH2RDY	( 0U )
#define ADC_USER_AD4STAT_CH3RDY	( 0U )
#define ADC_USER_AD4STAT_CH4RDY	( 0U )
#define ADC_USER_AD4STAT_CH5RDY	( 0U )
#define ADC_USER_AD4STAT_CH6RDY	( 0U )
#define ADC_USER_AD4STAT_CH7RDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4RSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4RSTAT_CH0RRDY	( 0U )
#define ADC_USER_AD4RSTAT_CH1RRDY	( 0U )
#define ADC_USER_AD4RSTAT_CH2RRDY	( 0U )
#define ADC_USER_AD4RSTAT_CH3RRDY	( 0U )
#define ADC_USER_AD4RSTAT_CH4RRDY	( 0U )
#define ADC_USER_AD4RSTAT_CH5RRDY	( 0U )
#define ADC_USER_AD4RSTAT_CH6RRDY	( 0U )
#define ADC_USER_AD4RSTAT_CH7RRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CMPSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CMPSTAT_CH0FLG	( 0U )
#define ADC_USER_AD4CMPSTAT_CH1FLG	( 0U )
#define ADC_USER_AD4CMPSTAT_CH2FLG	( 0U )
#define ADC_USER_AD4CMPSTAT_CH3FLG	( 0U )
#define ADC_USER_AD4CMPSTAT_CH4FLG	( 0U )
#define ADC_USER_AD4CMPSTAT_CH5FLG	( 0U )
#define ADC_USER_AD4CMPSTAT_CH6FLG	( 0U )
#define ADC_USER_AD4CMPSTAT_CH7FLG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4SWTRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4SWTRG_CH0TRG	( 0U )
#define ADC_USER_AD4SWTRG_CH1TRG	( 0U )
#define ADC_USER_AD4SWTRG_CH2TRG	( 0U )
#define ADC_USER_AD4SWTRG_CH3TRG	( 0U )
#define ADC_USER_AD4SWTRG_CH4TRG	( 0U )
#define ADC_USER_AD4SWTRG_CH5TRG	( 0U )
#define ADC_USER_AD4SWTRG_CH6TRG	( 0U )
#define ADC_USER_AD4SWTRG_CH7TRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH0CON1_MODE	( 0U )
#define ADC_USER_AD4CH0CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH0CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH0CON1_SAMC	( 0U )
#define ADC_USER_AD4CH0CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH0CON1_EIEN	( 0U )
#define ADC_USER_AD4CH0CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH0CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH0CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH0CON1_FRAC	( 0U )
#define ADC_USER_AD4CH0CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH0CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH0CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH0CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH0CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH0CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH0CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0RES_RES	( 0U )
#define ADC_USER_AD4CH0RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CNT_CNT	( 0U )
#define ADC_USER_AD4CH0CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH0CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH0CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH1CON1_MODE	( 0U )
#define ADC_USER_AD4CH1CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH1CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH1CON1_SAMC	( 0U )
#define ADC_USER_AD4CH1CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH1CON1_EIEN	( 0U )
#define ADC_USER_AD4CH1CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH1CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH1CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH1CON1_FRAC	( 0U )
#define ADC_USER_AD4CH1CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH1CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH1CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH1CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH1CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH1CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH1CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1RES_RES	( 0U )
#define ADC_USER_AD4CH1RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CNT_CNT	( 0U )
#define ADC_USER_AD4CH1CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH1CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH1CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH2CON1_MODE	( 0U )
#define ADC_USER_AD4CH2CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH2CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH2CON1_SAMC	( 0U )
#define ADC_USER_AD4CH2CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH2CON1_EIEN	( 0U )
#define ADC_USER_AD4CH2CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH2CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH2CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH2CON1_FRAC	( 0U )
#define ADC_USER_AD4CH2CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH2CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH2CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH2CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH2CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH2CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH2CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2RES_RES	( 0U )
#define ADC_USER_AD4CH2RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CNT_CNT	( 0U )
#define ADC_USER_AD4CH2CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH2CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH2CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH3CON1_MODE	( 0U )
#define ADC_USER_AD4CH3CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH3CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH3CON1_SAMC	( 0U )
#define ADC_USER_AD4CH3CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH3CON1_EIEN	( 0U )
#define ADC_USER_AD4CH3CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH3CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH3CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH3CON1_FRAC	( 0U )
#define ADC_USER_AD4CH3CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH3CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH3CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH3CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH3CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH3CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH3CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3RES_RES	( 0U )
#define ADC_USER_AD4CH3RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CNT_CNT	( 0U )
#define ADC_USER_AD4CH3CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH3CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH3CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH4CON1_MODE	( 0U )
#define ADC_USER_AD4CH4CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH4CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH4CON1_SAMC	( 0U )
#define ADC_USER_AD4CH4CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH4CON1_EIEN	( 0U )
#define ADC_USER_AD4CH4CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH4CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH4CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH4CON1_FRAC	( 0U )
#define ADC_USER_AD4CH4CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH4CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH4CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH4CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH4CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH4CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH4CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4RES_RES	( 0U )
#define ADC_USER_AD4CH4RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CNT_CNT	( 0U )
#define ADC_USER_AD4CH4CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH4CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH4CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH5CON1_MODE	( 0U )
#define ADC_USER_AD4CH5CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH5CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH5CON1_SAMC	( 0U )
#define ADC_USER_AD4CH5CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH5CON1_EIEN	( 0U )
#define ADC_USER_AD4CH5CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH5CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH5CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH5CON1_FRAC	( 0U )
#define ADC_USER_AD4CH5CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH5CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH5CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH5CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH5CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH5CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH5CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5RES_RES	( 0U )
#define ADC_USER_AD4CH5RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CNT_CNT	( 0U )
#define ADC_USER_AD4CH5CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH5CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH5CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH6CON1_MODE	( 0U )
#define ADC_USER_AD4CH6CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH6CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH6CON1_SAMC	( 0U )
#define ADC_USER_AD4CH6CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH6CON1_EIEN	( 0U )
#define ADC_USER_AD4CH6CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH6CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH6CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH6CON1_FRAC	( 0U )
#define ADC_USER_AD4CH6CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH6CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH6CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH6CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH6CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH6CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH6CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6RES_RES	( 0U )
#define ADC_USER_AD4CH6RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CNT_CNT	( 0U )
#define ADC_USER_AD4CH6CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH6ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH6ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CON1_TRG1SRC	( 0U )
#define ADC_USER_AD4CH7CON1_MODE	( 0U )
#define ADC_USER_AD4CH7CON1_TRG2SRC	( 0U )
#define ADC_USER_AD4CH7CON1_ACCNUM	( 0U )
#define ADC_USER_AD4CH7CON1_SAMC	( 0U )
#define ADC_USER_AD4CH7CON1_IRQSEL	( 0U )
#define ADC_USER_AD4CH7CON1_EIEN	( 0U )
#define ADC_USER_AD4CH7CON1_TRG1POL	( 0U )
#define ADC_USER_AD4CH7CON1_PINSEL	( 0U )
#define ADC_USER_AD4CH7CON1_NINSEL	( 0U )
#define ADC_USER_AD4CH7CON1_FRAC	( 0U )
#define ADC_USER_AD4CH7CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD4CH7CON2_CMPMOD	( 0U )
#define ADC_USER_AD4CH7CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD4CH7CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD4CH7CON2_CMPVAL	( 0U )
#define ADC_USER_AD4CH7CON2_ACCBRST	( 0U )
#define ADC_USER_AD4CH7CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7RES_RES	( 0U )
#define ADC_USER_AD4CH7RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CNT_CNT	( 0U )
#define ADC_USER_AD4CH7CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD4CH7ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD4CH7ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CON	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CONレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CON_CALCNT	( 0U )
#define ADC_USER_AD5CON_BUFEN	( 0U )
#define ADC_USER_AD5CON_TSTEN	( 0U )
#define ADC_USER_AD5CON_TSTLOCK	( 0U )
#define ADC_USER_AD5CON_ON	( 0U )
#define ADC_USER_AD5CON_STNDBY	( 0U )
#define ADC_USER_AD5CON_RPTCNT	( 0U )
#define ADC_USER_AD5CON_MODE	( 0U )
#define ADC_USER_AD5CON_CALRATE	( 0U )
#define ADC_USER_AD5CON_ACALEN	( 0U )
#define ADC_USER_AD5CON_CALREQ	( 0U )
#define ADC_USER_AD5CON_CALRDY	( 0U )
#define ADC_USER_AD5CON_ADRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5DATAOVRレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5DATAOVR	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5STATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5STAT_CH0RDY	( 0U )
#define ADC_USER_AD5STAT_CH1RDY	( 0U )
#define ADC_USER_AD5STAT_CH2RDY	( 0U )
#define ADC_USER_AD5STAT_CH3RDY	( 0U )
#define ADC_USER_AD5STAT_CH4RDY	( 0U )
#define ADC_USER_AD5STAT_CH5RDY	( 0U )
#define ADC_USER_AD5STAT_CH6RDY	( 0U )
#define ADC_USER_AD5STAT_CH7RDY	( 0U )
#define ADC_USER_AD5STAT_CH8RDY	( 0U )
#define ADC_USER_AD5STAT_CH9RDY	( 0U )
#define ADC_USER_AD5STAT_CH10RDY	( 0U )
#define ADC_USER_AD5STAT_CH11RDY	( 0U )
#define ADC_USER_AD5STAT_CH12RDY	( 0U )
#define ADC_USER_AD5STAT_CH13RDY	( 0U )
#define ADC_USER_AD5STAT_CH14RDY	( 0U )
#define ADC_USER_AD5STAT_CH15RDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5RSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5RSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5RSTAT_CH0RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH1RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH2RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH3RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH4RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH5RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH6RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH7RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH8RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH9RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH10RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH11RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH12RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH13RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH14RRDY	( 0U )
#define ADC_USER_AD5RSTAT_CH15RRDY	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CMPSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CMPSTATレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CMPSTAT_CH0FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH1FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH2FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH3FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH4FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH5FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH6FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH7FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH8FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH9FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH10FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH11FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH12FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH13FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH14FLG	( 0U )
#define ADC_USER_AD5CMPSTAT_CH15FLG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5SWTRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5SWTRGレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5SWTRG_CH0TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH1TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH2TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH3TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH4TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH5TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH6TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH7TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH8TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH9TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH10TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH11TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH12TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH13TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH14TRG	( 0U )
#define ADC_USER_AD5SWTRG_CH15TRG	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH0CON1_MODE	( 0U )
#define ADC_USER_AD5CH0CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH0CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH0CON1_SAMC	( 0U )
#define ADC_USER_AD5CH0CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH0CON1_EIEN	( 0U )
#define ADC_USER_AD5CH0CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH0CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH0CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH0CON1_FRAC	( 0U )
#define ADC_USER_AD5CH0CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH0CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH0CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH0CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH0CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH0CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH0CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0RES_RES	( 0U )
#define ADC_USER_AD5CH0RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CNT_CNT	( 0U )
#define ADC_USER_AD5CH0CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH0CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH0CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH1CON1_MODE	( 0U )
#define ADC_USER_AD5CH1CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH1CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH1CON1_SAMC	( 0U )
#define ADC_USER_AD5CH1CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH1CON1_EIEN	( 0U )
#define ADC_USER_AD5CH1CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH1CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH1CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH1CON1_FRAC	( 0U )
#define ADC_USER_AD5CH1CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH1CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH1CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH1CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH1CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH1CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH1CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1RES_RES	( 0U )
#define ADC_USER_AD5CH1RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CNT_CNT	( 0U )
#define ADC_USER_AD5CH1CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH1CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH1CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH2CON1_MODE	( 0U )
#define ADC_USER_AD5CH2CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH2CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH2CON1_SAMC	( 0U )
#define ADC_USER_AD5CH2CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH2CON1_EIEN	( 0U )
#define ADC_USER_AD5CH2CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH2CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH2CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH2CON1_FRAC	( 0U )
#define ADC_USER_AD5CH2CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH2CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH2CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH2CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH2CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH2CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH2CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2RES_RES	( 0U )
#define ADC_USER_AD5CH2RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CNT_CNT	( 0U )
#define ADC_USER_AD5CH2CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH2CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH2CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH3CON1_MODE	( 0U )
#define ADC_USER_AD5CH3CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH3CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH3CON1_SAMC	( 0U )
#define ADC_USER_AD5CH3CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH3CON1_EIEN	( 0U )
#define ADC_USER_AD5CH3CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH3CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH3CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH3CON1_FRAC	( 0U )
#define ADC_USER_AD5CH3CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH3CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH3CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH3CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH3CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH3CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH3CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3RES_RES	( 0U )
#define ADC_USER_AD5CH3RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CNT_CNT	( 0U )
#define ADC_USER_AD5CH3CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH3CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH3CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH4CON1_MODE	( 0U )
#define ADC_USER_AD5CH4CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH4CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH4CON1_SAMC	( 0U )
#define ADC_USER_AD5CH4CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH4CON1_EIEN	( 0U )
#define ADC_USER_AD5CH4CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH4CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH4CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH4CON1_FRAC	( 0U )
#define ADC_USER_AD5CH4CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH4CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH4CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH4CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH4CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH4CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH4CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4RES_RES	( 0U )
#define ADC_USER_AD5CH4RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CNT_CNT	( 0U )
#define ADC_USER_AD5CH4CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH4CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH4CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH5CON1_MODE	( 0U )
#define ADC_USER_AD5CH5CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH5CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH5CON1_SAMC	( 0U )
#define ADC_USER_AD5CH5CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH5CON1_EIEN	( 0U )
#define ADC_USER_AD5CH5CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH5CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH5CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH5CON1_FRAC	( 0U )
#define ADC_USER_AD5CH5CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH5CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH5CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH5CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH5CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH5CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH5CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5RES_RES	( 0U )
#define ADC_USER_AD5CH5RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CNT_CNT	( 0U )
#define ADC_USER_AD5CH5CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH5CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH5CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH6CON1_MODE	( 0U )
#define ADC_USER_AD5CH6CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH6CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH6CON1_SAMC	( 0U )
#define ADC_USER_AD5CH6CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH6CON1_EIEN	( 0U )
#define ADC_USER_AD5CH6CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH6CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH6CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH6CON1_FRAC	( 0U )
#define ADC_USER_AD5CH6CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH6CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH6CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH6CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH6CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH6CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH6CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6RES_RES	( 0U )
#define ADC_USER_AD5CH6RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CNT_CNT	( 0U )
#define ADC_USER_AD5CH6CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH6CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH6CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH7CON1_MODE	( 0U )
#define ADC_USER_AD5CH7CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH7CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH7CON1_SAMC	( 0U )
#define ADC_USER_AD5CH7CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH7CON1_EIEN	( 0U )
#define ADC_USER_AD5CH7CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH7CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH7CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH7CON1_FRAC	( 0U )
#define ADC_USER_AD5CH7CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH7CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH7CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH7CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH7CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH7CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH7CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7RES_RES	( 0U )
#define ADC_USER_AD5CH7RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CNT_CNT	( 0U )
#define ADC_USER_AD5CH7CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH7CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH7CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH8CON1_MODE	( 0U )
#define ADC_USER_AD5CH8CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH8CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH8CON1_SAMC	( 0U )
#define ADC_USER_AD5CH8CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH8CON1_EIEN	( 0U )
#define ADC_USER_AD5CH8CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH8CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH8CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH8CON1_FRAC	( 0U )
#define ADC_USER_AD5CH8CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH8CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH8CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH8CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH8CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH8CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH8CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8RES_RES	( 0U )
#define ADC_USER_AD5CH8RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CNT_CNT	( 0U )
#define ADC_USER_AD5CH8CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH8CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH8CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH9CON1_MODE	( 0U )
#define ADC_USER_AD5CH9CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH9CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH9CON1_SAMC	( 0U )
#define ADC_USER_AD5CH9CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH9CON1_EIEN	( 0U )
#define ADC_USER_AD5CH9CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH9CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH9CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH9CON1_FRAC	( 0U )
#define ADC_USER_AD5CH9CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH9CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH9CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH9CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH9CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH9CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH9CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9RES_RES	( 0U )
#define ADC_USER_AD5CH9RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CNT_CNT	( 0U )
#define ADC_USER_AD5CH9CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH9CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH9CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH10CON1_MODE	( 0U )
#define ADC_USER_AD5CH10CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH10CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH10CON1_SAMC	( 0U )
#define ADC_USER_AD5CH10CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH10CON1_EIEN	( 0U )
#define ADC_USER_AD5CH10CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH10CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH10CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH10CON1_FRAC	( 0U )
#define ADC_USER_AD5CH10CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH10CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH10CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH10CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH10CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH10CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH10CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10RES_RES	( 0U )
#define ADC_USER_AD5CH10RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CNT_CNT	( 0U )
#define ADC_USER_AD5CH10CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH10CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH10CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH11CON1_MODE	( 0U )
#define ADC_USER_AD5CH11CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH11CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH11CON1_SAMC	( 0U )
#define ADC_USER_AD5CH11CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH11CON1_EIEN	( 0U )
#define ADC_USER_AD5CH11CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH11CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH11CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH11CON1_FRAC	( 0U )
#define ADC_USER_AD5CH11CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH11CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH11CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH11CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH11CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH11CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH11CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11RES_RES	( 0U )
#define ADC_USER_AD5CH11RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CNT_CNT	( 0U )
#define ADC_USER_AD5CH11CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH11CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH11CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH12CON1_MODE	( 0U )
#define ADC_USER_AD5CH12CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH12CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH12CON1_SAMC	( 0U )
#define ADC_USER_AD5CH12CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH12CON1_EIEN	( 0U )
#define ADC_USER_AD5CH12CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH12CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH12CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH12CON1_FRAC	( 0U )
#define ADC_USER_AD5CH12CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH12CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH12CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH12CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH12CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH12CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH12CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12RES_RES	( 0U )
#define ADC_USER_AD5CH12RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CNT_CNT	( 0U )
#define ADC_USER_AD5CH12CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH12CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH12CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH13CON1_MODE	( 0U )
#define ADC_USER_AD5CH13CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH13CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH13CON1_SAMC	( 0U )
#define ADC_USER_AD5CH13CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH13CON1_EIEN	( 0U )
#define ADC_USER_AD5CH13CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH13CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH13CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH13CON1_FRAC	( 0U )
#define ADC_USER_AD5CH13CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH13CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH13CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH13CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH13CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH13CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH13CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13RES_RES	( 0U )
#define ADC_USER_AD5CH13RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CNT_CNT	( 0U )
#define ADC_USER_AD5CH13CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH13CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH13CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH14CON1_MODE	( 0U )
#define ADC_USER_AD5CH14CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH14CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH14CON1_SAMC	( 0U )
#define ADC_USER_AD5CH14CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH14CON1_EIEN	( 0U )
#define ADC_USER_AD5CH14CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH14CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH14CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH14CON1_FRAC	( 0U )
#define ADC_USER_AD5CH14CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH14CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH14CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH14CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH14CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH14CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH14CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14RES_RES	( 0U )
#define ADC_USER_AD5CH14RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CNT_CNT	( 0U )
#define ADC_USER_AD5CH14CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH14ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH14ACC	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CON1_TRG1SRC	( 0U )
#define ADC_USER_AD5CH15CON1_MODE	( 0U )
#define ADC_USER_AD5CH15CON1_TRG2SRC	( 0U )
#define ADC_USER_AD5CH15CON1_ACCNUM	( 0U )
#define ADC_USER_AD5CH15CON1_SAMC	( 0U )
#define ADC_USER_AD5CH15CON1_IRQSEL	( 0U )
#define ADC_USER_AD5CH15CON1_EIEN	( 0U )
#define ADC_USER_AD5CH15CON1_TRG1POL	( 0U )
#define ADC_USER_AD5CH15CON1_PINSEL	( 0U )
#define ADC_USER_AD5CH15CON1_NINSEL	( 0U )
#define ADC_USER_AD5CH15CON1_FRAC	( 0U )
#define ADC_USER_AD5CH15CON1_DIFF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CON2_ADCMPCNT	( 0U )
#define ADC_USER_AD5CH15CON2_CMPMOD	( 0U )
#define ADC_USER_AD5CH15CON2_ADCMPSTAT	( 0U )
#define ADC_USER_AD5CH15CON2_CMPCNTMOD	( 0U )
#define ADC_USER_AD5CH15CON2_CMPVAL	( 0U )
#define ADC_USER_AD5CH15CON2_ACCBRST	( 0U )
#define ADC_USER_AD5CH15CON2_ACCRO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15DATAレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15DATA	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15RES	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15RESレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15RES_RES	( 0U )
#define ADC_USER_AD5CH15RES_RESF	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CNT_CNT	( 0U )
#define ADC_USER_AD5CH15CNT_CNTSTAT	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CMPLOレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CMPLO	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15CMPHIレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15CMPHI	( 0U )
/*----------------------------------------------------------------------------*/
/* AD5CH15ACCレジスタ */
/*----------------------------------------------------------------------------*/
#define ADC_USER_AD5CH15ACC	( 0U )
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* ADC_USER_H */

