
#ifndef SPI_USER_H
#define	SPI_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "spi_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* SPI1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1CON1_ENHBUF	( 0U )
#define SPI_USER_SPI1CON1_SPIFE	( 0U )
#define SPI_USER_SPI1CON1_MCLKEN	( 0U )
#define SPI_USER_SPI1CON1_DISSCK	( 0U )
#define SPI_USER_SPI1CON1_DISSDI	( 0U )
#define SPI_USER_SPI1CON1_MSTEN	( 0U )
#define SPI_USER_SPI1CON1_CKP	( 0U )
#define SPI_USER_SPI1CON1_SSEN	( 0U )
#define SPI_USER_SPI1CON1_CKE	( 0U )
#define SPI_USER_SPI1CON1_SMP	( 0U )
#define SPI_USER_SPI1CON1_MODE16	( 0U )
#define SPI_USER_SPI1CON1_MODE32	( 0U )
#define SPI_USER_SPI1CON1_DISSDO	( 0U )
#define SPI_USER_SPI1CON1_SIDL	( 0U )
#define SPI_USER_SPI1CON1_ON	( 0U )
#define SPI_USER_SPI1CON1_FRMCNT	( 0U )
#define SPI_USER_SPI1CON1_FRMSYPW	( 0U )
#define SPI_USER_SPI1CON1_MSSEN	( 0U )
#define SPI_USER_SPI1CON1_FRMPOL	( 0U )
#define SPI_USER_SPI1CON1_FRMSYNC	( 0U )
#define SPI_USER_SPI1CON1_FRMEN	( 0U )
#define SPI_USER_SPI1CON1_AUDMOD	( 0U )
#define SPI_USER_SPI1CON1_URDTEN	( 0U )
#define SPI_USER_SPI1CON1_AUDMONO	( 0U )
#define SPI_USER_SPI1CON1_IGNTUR	( 0U )
#define SPI_USER_SPI1CON1_IGNROV	( 0U )
#define SPI_USER_SPI1CON1_SPISGNEXT	( 0U )
#define SPI_USER_SPI1CON1_AUDEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1CON2_WLENGTH	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1STAT_SPIRBF	( 0U )
#define SPI_USER_SPI1STAT_SPITBF	( 0U )
#define SPI_USER_SPI1STAT_SPITBE	( 0U )
#define SPI_USER_SPI1STAT_SPIRBE	( 0U )
#define SPI_USER_SPI1STAT_SPIROV	( 0U )
#define SPI_USER_SPI1STAT_SRMT	( 0U )
#define SPI_USER_SPI1STAT_SPITUR	( 0U )
#define SPI_USER_SPI1STAT_SPIBUSY	( 0U )
#define SPI_USER_SPI1STAT_FRMERR	( 0U )
#define SPI_USER_SPI1STAT_TXELM	( 0U )
#define SPI_USER_SPI1STAT_RXELM	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1BRG_SPI1BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1IMSK	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1IMSK_SPIRBFEN	( 0U )
#define SPI_USER_SPI1IMSK_SPITBFEN	( 0U )
#define SPI_USER_SPI1IMSK_SPITBEN	( 0U )
#define SPI_USER_SPI1IMSK_SPIRBEN	( 0U )
#define SPI_USER_SPI1IMSK_SPIROVEN	( 0U )
#define SPI_USER_SPI1IMSK_SRMTEN	( 0U )
#define SPI_USER_SPI1IMSK_SPITUREN	( 0U )
#define SPI_USER_SPI1IMSK_BUSYEN	( 0U )
#define SPI_USER_SPI1IMSK_FRMERREN	( 0U )
#define SPI_USER_SPI1IMSK_TXMSK	( 0U )
#define SPI_USER_SPI1IMSK_TXWIEN	( 0U )
#define SPI_USER_SPI1IMSK_RXMSK	( 0U )
#define SPI_USER_SPI1IMSK_RXWIEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI1URDTレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI1URDT	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2CON1_ENHBUF	( 0U )
#define SPI_USER_SPI2CON1_SPIFE	( 0U )
#define SPI_USER_SPI2CON1_MCLKEN	( 0U )
#define SPI_USER_SPI2CON1_DISSCK	( 0U )
#define SPI_USER_SPI2CON1_DISSDI	( 0U )
#define SPI_USER_SPI2CON1_MSTEN	( 0U )
#define SPI_USER_SPI2CON1_CKP	( 0U )
#define SPI_USER_SPI2CON1_SSEN	( 0U )
#define SPI_USER_SPI2CON1_CKE	( 0U )
#define SPI_USER_SPI2CON1_SMP	( 0U )
#define SPI_USER_SPI2CON1_MODE16	( 0U )
#define SPI_USER_SPI2CON1_MODE32	( 0U )
#define SPI_USER_SPI2CON1_DISSDO	( 0U )
#define SPI_USER_SPI2CON1_SIDL	( 0U )
#define SPI_USER_SPI2CON1_ON	( 0U )
#define SPI_USER_SPI2CON1_FRMCNT	( 0U )
#define SPI_USER_SPI2CON1_FRMSYPW	( 0U )
#define SPI_USER_SPI2CON1_MSSEN	( 0U )
#define SPI_USER_SPI2CON1_FRMPOL	( 0U )
#define SPI_USER_SPI2CON1_FRMSYNC	( 0U )
#define SPI_USER_SPI2CON1_FRMEN	( 0U )
#define SPI_USER_SPI2CON1_AUDMOD	( 0U )
#define SPI_USER_SPI2CON1_URDTEN	( 0U )
#define SPI_USER_SPI2CON1_AUDMONO	( 0U )
#define SPI_USER_SPI2CON1_IGNTUR	( 0U )
#define SPI_USER_SPI2CON1_IGNROV	( 0U )
#define SPI_USER_SPI2CON1_SPISGNEXT	( 0U )
#define SPI_USER_SPI2CON1_AUDEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2CON2_WLENGTH	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2STAT_SPIRBF	( 0U )
#define SPI_USER_SPI2STAT_SPITBF	( 0U )
#define SPI_USER_SPI2STAT_SPITBE	( 0U )
#define SPI_USER_SPI2STAT_SPIRBE	( 0U )
#define SPI_USER_SPI2STAT_SPIROV	( 0U )
#define SPI_USER_SPI2STAT_SRMT	( 0U )
#define SPI_USER_SPI2STAT_SPITUR	( 0U )
#define SPI_USER_SPI2STAT_SPIBUSY	( 0U )
#define SPI_USER_SPI2STAT_FRMERR	( 0U )
#define SPI_USER_SPI2STAT_TXELM	( 0U )
#define SPI_USER_SPI2STAT_RXELM	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2BRG_SPI2BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2IMSK	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2IMSK_SPIRBFEN	( 0U )
#define SPI_USER_SPI2IMSK_SPITBFEN	( 0U )
#define SPI_USER_SPI2IMSK_SPITBEN	( 0U )
#define SPI_USER_SPI2IMSK_SPIRBEN	( 0U )
#define SPI_USER_SPI2IMSK_SPIROVEN	( 0U )
#define SPI_USER_SPI2IMSK_SRMTEN	( 0U )
#define SPI_USER_SPI2IMSK_SPITUREN	( 0U )
#define SPI_USER_SPI2IMSK_BUSYEN	( 0U )
#define SPI_USER_SPI2IMSK_FRMERREN	( 0U )
#define SPI_USER_SPI2IMSK_TXMSK	( 0U )
#define SPI_USER_SPI2IMSK_TXWIEN	( 0U )
#define SPI_USER_SPI2IMSK_RXMSK	( 0U )
#define SPI_USER_SPI2IMSK_RXWIEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI2URDTレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI2URDT	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3CON1_ENHBUF	( 0U )
#define SPI_USER_SPI3CON1_SPIFE	( 0U )
#define SPI_USER_SPI3CON1_MCLKEN	( 0U )
#define SPI_USER_SPI3CON1_DISSCK	( 0U )
#define SPI_USER_SPI3CON1_DISSDI	( 0U )
#define SPI_USER_SPI3CON1_MSTEN	( 0U )
#define SPI_USER_SPI3CON1_CKP	( 0U )
#define SPI_USER_SPI3CON1_SSEN	( 0U )
#define SPI_USER_SPI3CON1_CKE	( 0U )
#define SPI_USER_SPI3CON1_SMP	( 0U )
#define SPI_USER_SPI3CON1_MODE16	( 0U )
#define SPI_USER_SPI3CON1_MODE32	( 0U )
#define SPI_USER_SPI3CON1_DISSDO	( 0U )
#define SPI_USER_SPI3CON1_SIDL	( 0U )
#define SPI_USER_SPI3CON1_ON	( 0U )
#define SPI_USER_SPI3CON1_FRMCNT	( 0U )
#define SPI_USER_SPI3CON1_FRMSYPW	( 0U )
#define SPI_USER_SPI3CON1_MSSEN	( 0U )
#define SPI_USER_SPI3CON1_FRMPOL	( 0U )
#define SPI_USER_SPI3CON1_FRMSYNC	( 0U )
#define SPI_USER_SPI3CON1_FRMEN	( 0U )
#define SPI_USER_SPI3CON1_AUDMOD	( 0U )
#define SPI_USER_SPI3CON1_URDTEN	( 0U )
#define SPI_USER_SPI3CON1_AUDMONO	( 0U )
#define SPI_USER_SPI3CON1_IGNTUR	( 0U )
#define SPI_USER_SPI3CON1_IGNROV	( 0U )
#define SPI_USER_SPI3CON1_SPISGNEXT	( 0U )
#define SPI_USER_SPI3CON1_AUDEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3CON2_WLENGTH	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3STAT_SPIRBF	( 0U )
#define SPI_USER_SPI3STAT_SPITBF	( 0U )
#define SPI_USER_SPI3STAT_SPITBE	( 0U )
#define SPI_USER_SPI3STAT_SPIRBE	( 0U )
#define SPI_USER_SPI3STAT_SPIROV	( 0U )
#define SPI_USER_SPI3STAT_SRMT	( 0U )
#define SPI_USER_SPI3STAT_SPITUR	( 0U )
#define SPI_USER_SPI3STAT_SPIBUSY	( 0U )
#define SPI_USER_SPI3STAT_FRMERR	( 0U )
#define SPI_USER_SPI3STAT_TXELM	( 0U )
#define SPI_USER_SPI3STAT_RXELM	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3BRG_SPI3BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3IMSK	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3IMSK_SPIRBFEN	( 0U )
#define SPI_USER_SPI3IMSK_SPITBFEN	( 0U )
#define SPI_USER_SPI3IMSK_SPITBEN	( 0U )
#define SPI_USER_SPI3IMSK_SPIRBEN	( 0U )
#define SPI_USER_SPI3IMSK_SPIROVEN	( 0U )
#define SPI_USER_SPI3IMSK_SRMTEN	( 0U )
#define SPI_USER_SPI3IMSK_SPITUREN	( 0U )
#define SPI_USER_SPI3IMSK_BUSYEN	( 0U )
#define SPI_USER_SPI3IMSK_FRMERREN	( 0U )
#define SPI_USER_SPI3IMSK_TXMSK	( 0U )
#define SPI_USER_SPI3IMSK_TXWIEN	( 0U )
#define SPI_USER_SPI3IMSK_RXMSK	( 0U )
#define SPI_USER_SPI3IMSK_RXWIEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI3URDTレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI3URDT	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4CON1	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4CON1レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4CON1_ENHBUF	( 0U )
#define SPI_USER_SPI4CON1_SPIFE	( 0U )
#define SPI_USER_SPI4CON1_MCLKEN	( 0U )
#define SPI_USER_SPI4CON1_DISSCK	( 0U )
#define SPI_USER_SPI4CON1_DISSDI	( 0U )
#define SPI_USER_SPI4CON1_MSTEN	( 0U )
#define SPI_USER_SPI4CON1_CKP	( 0U )
#define SPI_USER_SPI4CON1_SSEN	( 0U )
#define SPI_USER_SPI4CON1_CKE	( 0U )
#define SPI_USER_SPI4CON1_SMP	( 0U )
#define SPI_USER_SPI4CON1_MODE16	( 0U )
#define SPI_USER_SPI4CON1_MODE32	( 0U )
#define SPI_USER_SPI4CON1_DISSDO	( 0U )
#define SPI_USER_SPI4CON1_SIDL	( 0U )
#define SPI_USER_SPI4CON1_ON	( 0U )
#define SPI_USER_SPI4CON1_FRMCNT	( 0U )
#define SPI_USER_SPI4CON1_FRMSYPW	( 0U )
#define SPI_USER_SPI4CON1_MSSEN	( 0U )
#define SPI_USER_SPI4CON1_FRMPOL	( 0U )
#define SPI_USER_SPI4CON1_FRMSYNC	( 0U )
#define SPI_USER_SPI4CON1_FRMEN	( 0U )
#define SPI_USER_SPI4CON1_AUDMOD	( 0U )
#define SPI_USER_SPI4CON1_URDTEN	( 0U )
#define SPI_USER_SPI4CON1_AUDMONO	( 0U )
#define SPI_USER_SPI4CON1_IGNTUR	( 0U )
#define SPI_USER_SPI4CON1_IGNROV	( 0U )
#define SPI_USER_SPI4CON1_SPISGNEXT	( 0U )
#define SPI_USER_SPI4CON1_AUDEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4CON2	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4CON2レジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4CON2_WLENGTH	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4STAT	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4STAT_SPIRBF	( 0U )
#define SPI_USER_SPI4STAT_SPITBF	( 0U )
#define SPI_USER_SPI4STAT_SPITBE	( 0U )
#define SPI_USER_SPI4STAT_SPIRBE	( 0U )
#define SPI_USER_SPI4STAT_SPIROV	( 0U )
#define SPI_USER_SPI4STAT_SRMT	( 0U )
#define SPI_USER_SPI4STAT_SPITUR	( 0U )
#define SPI_USER_SPI4STAT_SPIBUSY	( 0U )
#define SPI_USER_SPI4STAT_FRMERR	( 0U )
#define SPI_USER_SPI4STAT_TXELM	( 0U )
#define SPI_USER_SPI4STAT_RXELM	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4BUFレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4BUF	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4BRG_SPI4BRG	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4IMSK	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4IMSKレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4IMSK_SPIRBFEN	( 0U )
#define SPI_USER_SPI4IMSK_SPITBFEN	( 0U )
#define SPI_USER_SPI4IMSK_SPITBEN	( 0U )
#define SPI_USER_SPI4IMSK_SPIRBEN	( 0U )
#define SPI_USER_SPI4IMSK_SPIROVEN	( 0U )
#define SPI_USER_SPI4IMSK_SRMTEN	( 0U )
#define SPI_USER_SPI4IMSK_SPITUREN	( 0U )
#define SPI_USER_SPI4IMSK_BUSYEN	( 0U )
#define SPI_USER_SPI4IMSK_FRMERREN	( 0U )
#define SPI_USER_SPI4IMSK_TXMSK	( 0U )
#define SPI_USER_SPI4IMSK_TXWIEN	( 0U )
#define SPI_USER_SPI4IMSK_RXMSK	( 0U )
#define SPI_USER_SPI4IMSK_RXWIEN	( 0U )
/*----------------------------------------------------------------------------*/
/* SPI4URDTレジスタ */
/*----------------------------------------------------------------------------*/
#define SPI_USER_SPI4URDT	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* SPI_USER_H */

