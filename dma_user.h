
#ifndef DMA_USER_H
#define	DMA_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "dma_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* DMACONレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMACON_ON			( DMA_DMACON_POWER_OFF)
#define DMA_USER_DMACON_SIDL		( DMA_DMACON_SIDL_CONTINUES )
#define DMA_USER_DMACON_PRIORITY	( DMA_DMACON_PRIORITY_FIXED )
/*----------------------------------------------------------------------------*/
/* DMABUFレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMABUF	( 0U )
/*----------------------------------------------------------------------------*/
/* DMALOWレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMALOW				( 0x4000 )
/*----------------------------------------------------------------------------*/
/* DMAHIGHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMAHIGH			( 0x7FFF )

/*----------------------------------------------------------------------------*/
/* DMA0CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA0CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA0CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA0CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA0CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA0CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA0CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA0CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA0CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA0CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA0CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA0CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA0CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA0CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA0CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA0CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA0SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA0STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0STAT_DBUFWF	( 0U )
#define DMA_USER_DMA0STAT_MATCH	( 0U )
#define DMA_USER_DMA0STAT_OVERRUN	( 0U )
#define DMA_USER_DMA0STAT_HALF	( 0U )
#define DMA_USER_DMA0STAT_DONE	( 0U )
#define DMA_USER_DMA0STAT_ADRERR	( 0U )
#define DMA_USER_DMA0STAT_BRERR	( 0U )
#define DMA_USER_DMA0STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA0PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA0PAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DMA1CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA1CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA1CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA1CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA1CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA1CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA1CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA1CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA1CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA1CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA1CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA1CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA1CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA1CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA1CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA1CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA1SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1STAT_DBUFWF	( 0U )
#define DMA_USER_DMA1STAT_MATCH	( 0U )
#define DMA_USER_DMA1STAT_OVERRUN	( 0U )
#define DMA_USER_DMA1STAT_HALF	( 0U )
#define DMA_USER_DMA1STAT_DONE	( 0U )
#define DMA_USER_DMA1STAT_ADRERR	( 0U )
#define DMA_USER_DMA1STAT_BRERR	( 0U )
#define DMA_USER_DMA1STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA1PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA1PAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DMA2CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA2CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA2CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA2CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA2CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA2CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA2CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA2CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA2CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA2CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA2CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA2CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA2CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA2CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA2CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA2CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA2SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2STAT_DBUFWF	( 0U )
#define DMA_USER_DMA2STAT_MATCH	( 0U )
#define DMA_USER_DMA2STAT_OVERRUN	( 0U )
#define DMA_USER_DMA2STAT_HALF	( 0U )
#define DMA_USER_DMA2STAT_DONE	( 0U )
#define DMA_USER_DMA2STAT_ADRERR	( 0U )
#define DMA_USER_DMA2STAT_BRERR	( 0U )
#define DMA_USER_DMA2STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA2PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA2PAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DMA3CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA3CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA3CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA3CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA3CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA3CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA3CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA3CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA3CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA3CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA3CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA3CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA3CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA3CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA3CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA3CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA3SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3STAT_DBUFWF	( 0U )
#define DMA_USER_DMA3STAT_MATCH	( 0U )
#define DMA_USER_DMA3STAT_OVERRUN	( 0U )
#define DMA_USER_DMA3STAT_HALF	( 0U )
#define DMA_USER_DMA3STAT_DONE	( 0U )
#define DMA_USER_DMA3STAT_ADRERR	( 0U )
#define DMA_USER_DMA3STAT_BRERR	( 0U )
#define DMA_USER_DMA3STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA3PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA3PAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DMA4CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA4CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA4CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA4CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA4CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA4CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA4CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA4CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA4CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA4CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA4CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA4CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA4CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA4CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA4CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA4CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA4SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4STAT_DBUFWF	( 0U )
#define DMA_USER_DMA4STAT_MATCH	( 0U )
#define DMA_USER_DMA4STAT_OVERRUN	( 0U )
#define DMA_USER_DMA4STAT_HALF	( 0U )
#define DMA_USER_DMA4STAT_DONE	( 0U )
#define DMA_USER_DMA4STAT_ADRERR	( 0U )
#define DMA_USER_DMA4STAT_BRERR	( 0U )
#define DMA_USER_DMA4STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA4PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA4PAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DMA5CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA5CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA5CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA5CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA5CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA5CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA5CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA5CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA5CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA5CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA5CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA5CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA5CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA5CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA5CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA5CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA5SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA5STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5STAT_DBUFWF	( 0U )
#define DMA_USER_DMA5STAT_MATCH	( 0U )
#define DMA_USER_DMA5STAT_OVERRUN	( 0U )
#define DMA_USER_DMA5STAT_HALF	( 0U )
#define DMA_USER_DMA5STAT_DONE	( 0U )
#define DMA_USER_DMA5STAT_ADRERR	( 0U )
#define DMA_USER_DMA5STAT_BRERR	( 0U )
#define DMA_USER_DMA5STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA5PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA5PAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DMA6CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA6CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA6CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA6CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA6CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA6CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA6CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA6CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA6CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA6CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA6CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA6CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA6CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA6CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA6CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA6CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA6SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA6STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6STAT_DBUFWF	( 0U )
#define DMA_USER_DMA6STAT_MATCH	( 0U )
#define DMA_USER_DMA6STAT_OVERRUN	( 0U )
#define DMA_USER_DMA6STAT_HALF	( 0U )
#define DMA_USER_DMA6STAT_DONE	( 0U )
#define DMA_USER_DMA6STAT_ADRERR	( 0U )
#define DMA_USER_DMA6STAT_BRERR	( 0U )
#define DMA_USER_DMA6STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA6PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA6PAT	( 0U )

/*----------------------------------------------------------------------------*/
/* DMA7CHレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7CH_CHEN		( DMA_DMAXCH_CHEN_ENABLE)
#define DMA_USER_DMA7CH_HALFEN		( DMA_DMAXCH_HALFEN_DISABLE )
#define DMA_USER_DMA7CH_MATCHEN		( DMA_DMAXCH_MATCHEN_DISABLE)
#define DMA_USER_DMA7CH_DONEEN		( DMA_DMAXCH_INTOEN_DISABLE )
#define DMA_USER_DMA7CH_CHREQ		( DMA_DMAXCH_CHREQ_OFF)
#define DMA_USER_DMA7CH_SIZE		( DMA_DMAXCH_SIZE_32BIT )
#define DMA_USER_DMA7CH_FLWCON		( DMA_DMAXCH_FLWCON_DEFAULT)
#define DMA_USER_DMA7CH_TRMODE		( DMA_DMAXCH_TRMODE_UNCHANGE )
#define DMA_USER_DMA7CH_DAMODE		( DMA_DMAXCH_DAMODE_UNCHANGE )
#define DMA_USER_DMA7CH_SAMODE		( DMA_DMAXCH_SAMODE_UNCHANGE)
#define DMA_USER_DMA7CH_RETEN		( DMA_DMAXCH_RETEN_DISABLE )
#define DMA_USER_DMA7CH_RELOADS		( DMA_DMAXCH_RELOADS_DISABLE )
#define DMA_USER_DMA7CH_RELOADD		( DMA_DMAXCH_RELOADD_DISABLE)
#define DMA_USER_DMA7CH_RELOADC		( DMA_DMAXCH_RELOADC_DISABLE )
#define DMA_USER_DMA7CH_PCHEN		( DMA_DMAXCH_PCHEN_DISABLE)
#define DMA_USER_DMA7CH_PPEN		( DMA_DMAXCH_PPEN_DISABLE)

/*----------------------------------------------------------------------------*/
/* DMA7SELレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7SEL			( DMA_DMAXSEL_TRIG_INT0 )
/*----------------------------------------------------------------------------*/
/* DMA7STATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7STAT_DBUFWF	( 0U )
#define DMA_USER_DMA7STAT_MATCH	( 0U )
#define DMA_USER_DMA7STAT_OVERRUN	( 0U )
#define DMA_USER_DMA7STAT_HALF	( 0U )
#define DMA_USER_DMA7STAT_DONE	( 0U )
#define DMA_USER_DMA7STAT_ADRERR	( 0U )
#define DMA_USER_DMA7STAT_BRERR	( 0U )
#define DMA_USER_DMA7STAT_BWERR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7SRCレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7SRC	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7DSTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7DST	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7CNTレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7CNT	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7CLRレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7CLR	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7SETレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7SET	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7INVレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7INV	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7MSKレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7MSK	( 0U )
/*----------------------------------------------------------------------------*/
/* DMA7PATレジスタ */
/*----------------------------------------------------------------------------*/
#define DMA_USER_DMA7PAT	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* DMA_USER_H */

