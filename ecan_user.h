
#ifndef CAN_USER_H
#define	CAN_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "ecan_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* CANのフレームモード 2.0かFDかを選択*/
/*----------------------------------------------------------------------------*/
#define CAN1_FRAME_MODE         CAN_FRAME_20

/*----------------------------------------------------------------------------*/
/* CANのペイロードサイズ*/
/*----------------------------------------------------------------------------*/
#define CAN1_PAYLOAD_SIZE       CAN_PAYLOAD_8BYTE

/*----------------------------------------------------------------------------*/
/* フィルタオブジェクトの設定*/
/*----------------------------------------------------------------------------*/
#define CAN_EXIDE_STANDARD     0u
#define CAN_EXIDE_EXTENDED     1u

#define CAN_FILTER_DISABLE     0u
#define CAN_FILTER_ENABLE      1u

/*--------- Filter 0 ---------*/
#define CAN_USER_C1FLTOBJ0_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ0_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ0_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK0_MSID			( 0x000u )
#define CAN_USER_C1MASK0_MEID			( 0x000u )
#define CAN_USER_C1MASK0_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER0_FIFO		( 1u ) 
#define CAN_USER_C1_FILTER0_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ0_SID11		(( CAN_USER_C1FLTOBJ0_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK0_MSID11			(( CAN_USER_C1MASK0_MSID >> 11u) & 0x01)

/*--------- Filter 1 ---------*/
#define CAN_USER_C1FLTOBJ1_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ1_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ1_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK1_MSID			( 0x000u )
#define CAN_USER_C1MASK1_MEID			( 0x000u )
#define CAN_USER_C1MASK1_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER1_FIFO		( 2u ) 
#define CAN_USER_C1_FILTER1_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ1_SID11		(( CAN_USER_C1FLTOBJ1_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK1_MSID11			(( CAN_USER_C1MASK1_MSID >> 11u) & 0x01)

/*--------- Filter 2 ---------*/
#define CAN_USER_C1FLTOBJ2_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ2_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ2_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK2_MSID			( 0x000u )
#define CAN_USER_C1MASK2_MEID			( 0x000u )
#define CAN_USER_C1MASK2_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER2_FIFO		( 1u ) 
#define CAN_USER_C1_FILTER2_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ2_SID11		(( CAN_USER_C1FLTOBJ2_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK2_MSID11			(( CAN_USER_C1MASK2_MSID >> 11u) & 0x01)

/*--------- Filter 3 ---------*/
#define CAN_USER_C1FLTOBJ3_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ3_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ3_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK3_MSID			( 0x000u )
#define CAN_USER_C1MASK3_MEID			( 0x000u )
#define CAN_USER_C1MASK3_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER3_FIFO		( 1u ) 
#define CAN_USER_C1_FILTER3_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ3_SID11		(( CAN_USER_C1FLTOBJ3_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK3_MSID11			(( CAN_USER_C1MASK3_MSID >> 11u) & 0x01)

/*--------- Filter 4 ---------*/
#define CAN_USER_C1FLTOBJ4_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ4_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ4_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK4_MSID			( 0x000u )
#define CAN_USER_C1MASK4_MEID			( 0x000u )
#define CAN_USER_C1MASK4_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER4_FIFO		( 1u ) 
#define CAN_USER_C1_FILTER4_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ4_SID11		(( CAN_USER_C1FLTOBJ4_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK4_MSID11			(( CAN_USER_C1MASK4_MSID >> 11u) & 0x01)

/*--------- Filter 5 ---------*/
#define CAN_USER_C1FLTOBJ5_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ5_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ5_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK5_MSID			( 0x000u )
#define CAN_USER_C1MASK5_MEID			( 0x000u )
#define CAN_USER_C1MASK5_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER5_FIFO		( 1u ) 
#define CAN_USER_C1_FILTER5_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ5_SID11		(( CAN_USER_C1FLTOBJ5_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK5_MSID11			(( CAN_USER_C1MASK5_MSID >> 11u) & 0x01)

/*--------- Filter 6 ---------*/
#define CAN_USER_C1FLTOBJ6_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ6_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ6_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK6_MSID			( 0x000u )
#define CAN_USER_C1MASK6_MEID			( 0x000u )
#define CAN_USER_C1MASK6_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER6_FIFO		( 1u ) 
#define CAN_USER_C1_FILTER6_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ6_SID11		(( CAN_USER_C1FLTOBJ6_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK6_MSID11			(( CAN_USER_C1MASK6_MSID >> 11u) & 0x01)

/*--------- Filter 7 ---------*/
#define CAN_USER_C1FLTOBJ7_SID			( 0x000u )
#define CAN_USER_C1FLTOBJ7_EID			( 0x000u )
#define CAN_USER_C1FLTOBJ7_EXIDE		( CAN_EXIDE_STANDARD )
#define CAN_USER_C1MASK7_MSID			( 0x000u )
#define CAN_USER_C1MASK7_MEID			( 0x000u )
#define CAN_USER_C1MASK7_MIDE			( CAN_EXIDE_STANDARD )
#define CAN_USER_C1_FILTER07_FIFO		( 1u ) 
#define CAN_USER_C1_FILTER7_ENABLE		( CAN_FILTER_DISABLE )
#define CAN_USER_C1FLTOBJ7_SID11		(( CAN_USER_C1FLTOBJ7_SID >> 11u) & 0x01)
#define CAN_USER_C1MASK7_MSID11			(( CAN_USER_C1MASK7_MSID >> 11u) & 0x01)

/*----------------------------------------------------------------------------*/
/* TEFの設定*/
/*----------------------------------------------------------------------------*/
#define CAN1_TEF_USE            ( 0u )       /* 0 = TEF未使用　, 1 = TEF使用*/
#define CAN1_TEF_DEEP           ( 1u )       /* 0～31 Deep */
#define CAN1_TEF_TS_USE         ( 0u )       /* 0 = TimeStamp保存しない　, 1 = TimeStamp保存する*/
#define CAN1_TEF_SIZE           ( CAN1_TEF_DEEP * ( (CAN1_TEF_TS_USE * 4u) + 8u ))
/*----------------------------------------------------------------------------*/
/* TXQの設定*/
/*----------------------------------------------------------------------------*/
#define CAN1_TXQ_DEEP           ( 2u )       /* 0～31 Deep */
#define CAN1_TXQ_SIZE           ( CAN1_TXQ_DEEP * 8u + 8u)
/*----------------------------------------------------------------------------*/
/* FIFOの設定*/
/*----------------------------------------------------------------------------*/
#define CAN1_FIFO_DEEP          ( 2u )      /* 1～31 Deep */
#define CAN1_FIFO_NUM           ( 8u )      /* FIFOの数 */
#define CAN1_FIFO_TS_USE        ( 0u )       /* 0 = TimeStamp保存しない　, 1 = TimeStamp保存する*/

#define CAN1_FIFO_SIZE          ( CAN1_FIFO_NUM * ( 8 + (CAN1_FIFO_TS_USE * 4u) + CAN1_FIFO_DEEP * 8u) )
/*----------------------------------------------------------------------------*/
/* メッセージバッファのサイズ */
/*----------------------------------------------------------------------------*/
#define CAN1_MSG_BUFFER_SIZE    ( CAN1_TEF_SIZE + CAN1_TXQ_SIZE + CAN1_FIFO_SIZE ) / 2u



/*----------------------------------------------------------------------------*/
/* C1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1CON_DNCNT	( 0U )
#define CAN_USER_C1CON_ISOCRCEN	( 0U )
#define CAN_USER_C1CON_PXEDIS	( 0U )
#define CAN_USER_C1CON_CLKSEL0	( 0U )
#define CAN_USER_C1CON_WAKFIL	( 0U )
#define CAN_USER_C1CON_WFT	( 0U )
#define CAN_USER_C1CON_CANBUSY	( 0U )
#define CAN_USER_C1CON_BRSDIS	( 0U )
#define CAN_USER_C1CON_SIDL	( 0U )
#define CAN_USER_C1CON_ON	( 0U )
#define CAN_USER_C1CON_RTXAT	( 0U )
#define CAN_USER_C1CON_ESIGM	( 0U )
#define CAN_USER_C1CON_SERR2LOM	( 0U )
#define CAN_USER_C1CON_STEF	( 0U )
#define CAN_USER_C1CON_TXQEN	( 0U )
#define CAN_USER_C1CON_OPMOD	( 0U )
#define CAN_USER_C1CON_REQOP	( 0U )
#define CAN_USER_C1CON_ABAT	( 0U )
#define CAN_USER_C1CON_TXBWS	( 0U )

/*----------------------------------------------------------------------------*/
/* C1NBTCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1NBTCFG_SJW	( 35U )
#define CAN_USER_C1NBTCFG_TSEG2	( 35U )
#define CAN_USER_C1NBTCFG_TSEG1	( 142U )
#define CAN_USER_C1NBTCFG_BRP	( 2U )

/*----------------------------------------------------------------------------*/
/* C1DBTCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1DBTCFG_SJW	( 0U )
#define CAN_USER_C1DBTCFG_TSEG2	( 0U )
#define CAN_USER_C1DBTCFG_TSEG1	( 0U )
#define CAN_USER_C1DBTCFG_BRP	( 0U )

/*----------------------------------------------------------------------------*/
/* C1TDCレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TDC_TDCV	( 0U )
#define CAN_USER_C1TDC_TDCO	( 0x1F )
#define CAN_USER_C1TDC_TDCMOD	( 2U )
#define CAN_USER_C1TDC_SID11EN	( 0U )
#define CAN_USER_C1TDC_EDGFLTEN	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TBCレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TBC	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TSCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TSCON	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TSCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TSCON_TBCPRE	( 0U )
#define CAN_USER_C1TSCON_TBCEN	( 0U )
#define CAN_USER_C1TSCON_TSEOF	( 0U )
#define CAN_USER_C1TSCON_TSRES	( 0U )

/*----------------------------------------------------------------------------*/
/* C1VECレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1VEC_ICODE	( 0U )
#define CAN_USER_C1VEC_FILHIT	( 0U )
#define CAN_USER_C1VEC_TXCODE	( 0U )
#define CAN_USER_C1VEC_RXCODE	( 0U )

/*----------------------------------------------------------------------------*/
/* C1INTレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1INT_TXIF	( 0U )
#define CAN_USER_C1INT_RXIF	( 0U )
#define CAN_USER_C1INT_TBCIF	( 0U )
#define CAN_USER_C1INT_MODIF	( 0U )
#define CAN_USER_C1INT_TEFIF	( 0U )
#define CAN_USER_C1INT_ECCIF	( 0U )
#define CAN_USER_C1INT_SPICRCIF	( 0U )
#define CAN_USER_C1INT_TXATIF	( 0U )
#define CAN_USER_C1INT_RXOVIF	( 0U )
#define CAN_USER_C1INT_SERRIF	( 0U )
#define CAN_USER_C1INT_CERRIF	( 0U )
#define CAN_USER_C1INT_WAKIF	( 0U )
#define CAN_USER_C1INT_IVMIF	( 0U )
#define CAN_USER_C1INT_TXIE	( 0U )
#define CAN_USER_C1INT_RXIE	( 0U )
#define CAN_USER_C1INT_TBCIE	( 0U )
#define CAN_USER_C1INT_MODIE	( 0U )
#define CAN_USER_C1INT_TEFIE	( 0U )
#define CAN_USER_C1INT_ECCIE	( 0U )
#define CAN_USER_C1INT_SPICRCIE	( 0U )
#define CAN_USER_C1INT_TXATIE	( 0U )
#define CAN_USER_C1INT_RXOVIE	( 0U )
#define CAN_USER_C1INT_SERRIE	( 0U )
#define CAN_USER_C1INT_CERRIE	( 0U )
#define CAN_USER_C1INT_WAKIE	( 0U )
#define CAN_USER_C1INT_IVMIE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1RXIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1RXIF	( 0U )

/*----------------------------------------------------------------------------*/
/* C1TXIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C1RXOVIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1RXOVIF	( 0U )

/*----------------------------------------------------------------------------*/
/* C1TXATIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXATIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TXREQレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXREQ	( 0U )

/*----------------------------------------------------------------------------*/
/* C1TRECレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TREC_RERRCNT	( 0U )
#define CAN_USER_C1TREC_TERRCNT	( 0U )
#define CAN_USER_C1TREC_EWARN	( 0U )
#define CAN_USER_C1TREC_RXWARN	( 0U )
#define CAN_USER_C1TREC_TXWARN	( 0U )
#define CAN_USER_C1TREC_RXBP	( 0U )
#define CAN_USER_C1TREC_TXBP	( 0U )
#define CAN_USER_C1TREC_TXBO	( 0U )

/*----------------------------------------------------------------------------*/
/* C1BDIAG0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1BDIAG0_NRERRCNT	( 0U )
#define CAN_USER_C1BDIAG0_NTERRCNT	( 0U )
#define CAN_USER_C1BDIAG0_DRERRCNT	( 0U )
#define CAN_USER_C1BDIAG0_DTERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* C1BDIAG1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1BDIAG1_EFMSGCNT	( 0U )
#define CAN_USER_C1BDIAG1_NBIT0ERR	( 0U )
#define CAN_USER_C1BDIAG1_NBIT1ERR	( 0U )
#define CAN_USER_C1BDIAG1_NACKERR	( 0U )
#define CAN_USER_C1BDIAG1_NFORMERR	( 0U )
#define CAN_USER_C1BDIAG1_NSTUFERR	( 0U )
#define CAN_USER_C1BDIAG1_NCRCERR	( 0U )
#define CAN_USER_C1BDIAG1_TXBOERR	( 0U )
#define CAN_USER_C1BDIAG1_DBIT0ERR	( 0U )
#define CAN_USER_C1BDIAG1_DBIT1ERR	( 0U )
#define CAN_USER_C1BDIAG1_DFORMERR	( 0U )
#define CAN_USER_C1BDIAG1_DSTUFERR	( 0U )
#define CAN_USER_C1BDIAG1_DCRCERR	( 0U )
#define CAN_USER_C1BDIAG1_ESI	( 0U )
#define CAN_USER_C1BDIAG1_DLCMM	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TEFCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TEFCON	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TEFCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TEFCON_TEFNEIE	( 0U )
#define CAN_USER_C1TEFCON_TEFHIE	( 0U )
#define CAN_USER_C1TEFCON_TEFFIE	( 0U )
#define CAN_USER_C1TEFCON_TEFOVIE	( 0U )
#define CAN_USER_C1TEFCON_TEFTSEN	( 0U )
#define CAN_USER_C1TEFCON_UINC	( 0U )
#define CAN_USER_C1TEFCON_FRESET	( 0U )
#define CAN_USER_C1TEFCON_FSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TEFSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TEFSTA	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TEFSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TEFSTA_TEFNEIF	( 0U )
#define CAN_USER_C1TEFSTA_TEFHIF	( 0U )
#define CAN_USER_C1TEFSTA_TEFFIF	( 0U )
#define CAN_USER_C1TEFSTA_TEFOVIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TEFUAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TEFUA	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOBAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOBA	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TXQCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXQCON	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TXQCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXQCON_TXQNIE	( 0U )
#define CAN_USER_C1TXQCON_TXQEIE	( 0U )
#define CAN_USER_C1TXQCON_TXATIE	( 0U )
#define CAN_USER_C1TXQCON_TXEN	( 0U )
#define CAN_USER_C1TXQCON_UINC	( 0U )
#define CAN_USER_C1TXQCON_TXREQ	( 0U )
#define CAN_USER_C1TXQCON_FRESET	( 0U )
#define CAN_USER_C1TXQCON_TXPRI	( 0U )
#define CAN_USER_C1TXQCON_TXAT	( 0U )
#define CAN_USER_C1TXQCON_FSIZE	( 0U )
#define CAN_USER_C1TXQCON_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TXQSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXQSTA	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TXQSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXQSTA_TXQNIF	( 0U )
#define CAN_USER_C1TXQSTA_TXQEIF	( 0U )
#define CAN_USER_C1TXQSTA_TXATIF	( 0U )
#define CAN_USER_C1TXQSTA_TXERR	( 0U )
#define CAN_USER_C1TXQSTA_TXLARB	( 0U )
#define CAN_USER_C1TXQSTA_TXABT	( 0U )
#define CAN_USER_C1TXQSTA_TXQCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1TXQUAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1TXQUA	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON1	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON1_TFNRFNIE	( 0U )
#define CAN_USER_C1FIFOCON1_TFHRFHIE	( 0U )
#define CAN_USER_C1FIFOCON1_TFERFFIE	( 0U )
#define CAN_USER_C1FIFOCON1_RXOVIE	( 0U )
#define CAN_USER_C1FIFOCON1_TXATIE	( 0U )
#define CAN_USER_C1FIFOCON1_RXTSEN	( 0U )
#define CAN_USER_C1FIFOCON1_RTREN	( 0U )
#define CAN_USER_C1FIFOCON1_TXEN	( 0U )
#define CAN_USER_C1FIFOCON1_UINC	( 0U )
#define CAN_USER_C1FIFOCON1_TXREQ	( 0U )
#define CAN_USER_C1FIFOCON1_FRESET	( 0U )
#define CAN_USER_C1FIFOCON1_TXPRI	( 0U )
#define CAN_USER_C1FIFOCON1_TXAT	( 0U )
#define CAN_USER_C1FIFOCON1_FSIZE	( 0U )
#define CAN_USER_C1FIFOCON1_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA1	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA1_TFNRFNIF	( 0U )
#define CAN_USER_C1FIFOSTA1_TFHRFHIF	( 0U )
#define CAN_USER_C1FIFOSTA1_TFERFFIF	( 0U )
#define CAN_USER_C1FIFOSTA1_RXOVIF	( 0U )
#define CAN_USER_C1FIFOSTA1_TXATIF	( 0U )
#define CAN_USER_C1FIFOSTA1_TXERR	( 0U )
#define CAN_USER_C1FIFOSTA1_TXLARB	( 0U )
#define CAN_USER_C1FIFOSTA1_TXABT	( 0U )
#define CAN_USER_C1FIFOSTA1_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOUA1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOUA1	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON2	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON2_TFNRFNIE	( 0U )
#define CAN_USER_C1FIFOCON2_TFHRFHIE	( 0U )
#define CAN_USER_C1FIFOCON2_TFERFFIE	( 0U )
#define CAN_USER_C1FIFOCON2_RXOVIE	( 0U )
#define CAN_USER_C1FIFOCON2_TXATIE	( 0U )
#define CAN_USER_C1FIFOCON2_RXTSEN	( 0U )
#define CAN_USER_C1FIFOCON2_RTREN	( 0U )
#define CAN_USER_C1FIFOCON2_TXEN	( 0U )
#define CAN_USER_C1FIFOCON2_UINC	( 0U )
#define CAN_USER_C1FIFOCON2_TXREQ	( 0U )
#define CAN_USER_C1FIFOCON2_FRESET	( 0U )
#define CAN_USER_C1FIFOCON2_TXPRI	( 0U )
#define CAN_USER_C1FIFOCON2_TXAT	( 0U )
#define CAN_USER_C1FIFOCON2_FSIZE	( 0U )
#define CAN_USER_C1FIFOCON2_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA2	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA2_TFNRFNIF	( 0U )
#define CAN_USER_C1FIFOSTA2_TFHRFHIF	( 0U )
#define CAN_USER_C1FIFOSTA2_TFERFFIF	( 0U )
#define CAN_USER_C1FIFOSTA2_RXOVIF	( 0U )
#define CAN_USER_C1FIFOSTA2_TXATIF	( 0U )
#define CAN_USER_C1FIFOSTA2_TXERR	( 0U )
#define CAN_USER_C1FIFOSTA2_TXLARB	( 0U )
#define CAN_USER_C1FIFOSTA2_TXABT	( 0U )
#define CAN_USER_C1FIFOSTA2_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOUA2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOUA2	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON3	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON3_TFNRFNIE	( 0U )
#define CAN_USER_C1FIFOCON3_TFHRFHIE	( 0U )
#define CAN_USER_C1FIFOCON3_TFERFFIE	( 0U )
#define CAN_USER_C1FIFOCON3_RXOVIE	( 0U )
#define CAN_USER_C1FIFOCON3_TXATIE	( 0U )
#define CAN_USER_C1FIFOCON3_RXTSEN	( 0U )
#define CAN_USER_C1FIFOCON3_RTREN	( 0U )
#define CAN_USER_C1FIFOCON3_TXEN	( 0U )
#define CAN_USER_C1FIFOCON3_UINC	( 0U )
#define CAN_USER_C1FIFOCON3_TXREQ	( 0U )
#define CAN_USER_C1FIFOCON3_FRESET	( 0U )
#define CAN_USER_C1FIFOCON3_TXPRI	( 0U )
#define CAN_USER_C1FIFOCON3_TXAT	( 0U )
#define CAN_USER_C1FIFOCON3_FSIZE	( 0U )
#define CAN_USER_C1FIFOCON3_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA3	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA3_TFNRFNIF	( 0U )
#define CAN_USER_C1FIFOSTA3_TFHRFHIF	( 0U )
#define CAN_USER_C1FIFOSTA3_TFERFFIF	( 0U )
#define CAN_USER_C1FIFOSTA3_RXOVIF	( 0U )
#define CAN_USER_C1FIFOSTA3_TXATIF	( 0U )
#define CAN_USER_C1FIFOSTA3_TXERR	( 0U )
#define CAN_USER_C1FIFOSTA3_TXLARB	( 0U )
#define CAN_USER_C1FIFOSTA3_TXABT	( 0U )
#define CAN_USER_C1FIFOSTA3_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOUA3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOUA3	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON4	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON4_TFNRFNIE	( 0U )
#define CAN_USER_C1FIFOCON4_TFHRFHIE	( 0U )
#define CAN_USER_C1FIFOCON4_TFERFFIE	( 0U )
#define CAN_USER_C1FIFOCON4_RXOVIE	( 0U )
#define CAN_USER_C1FIFOCON4_TXATIE	( 0U )
#define CAN_USER_C1FIFOCON4_RXTSEN	( 0U )
#define CAN_USER_C1FIFOCON4_RTREN	( 0U )
#define CAN_USER_C1FIFOCON4_TXEN	( 0U )
#define CAN_USER_C1FIFOCON4_UINC	( 0U )
#define CAN_USER_C1FIFOCON4_TXREQ	( 0U )
#define CAN_USER_C1FIFOCON4_FRESET	( 0U )
#define CAN_USER_C1FIFOCON4_TXPRI	( 0U )
#define CAN_USER_C1FIFOCON4_TXAT	( 0U )
#define CAN_USER_C1FIFOCON4_FSIZE	( 0U )
#define CAN_USER_C1FIFOCON4_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA4	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA4_TFNRFNIF	( 0U )
#define CAN_USER_C1FIFOSTA4_TFHRFHIF	( 0U )
#define CAN_USER_C1FIFOSTA4_TFERFFIF	( 0U )
#define CAN_USER_C1FIFOSTA4_RXOVIF	( 0U )
#define CAN_USER_C1FIFOSTA4_TXATIF	( 0U )
#define CAN_USER_C1FIFOSTA4_TXERR	( 0U )
#define CAN_USER_C1FIFOSTA4_TXLARB	( 0U )
#define CAN_USER_C1FIFOSTA4_TXABT	( 0U )
#define CAN_USER_C1FIFOSTA4_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOUA4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOUA4	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON5	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON5_TFNRFNIE	( 0U )
#define CAN_USER_C1FIFOCON5_TFHRFHIE	( 0U )
#define CAN_USER_C1FIFOCON5_TFERFFIE	( 0U )
#define CAN_USER_C1FIFOCON5_RXOVIE	( 0U )
#define CAN_USER_C1FIFOCON5_TXATIE	( 0U )
#define CAN_USER_C1FIFOCON5_RXTSEN	( 0U )
#define CAN_USER_C1FIFOCON5_RTREN	( 0U )
#define CAN_USER_C1FIFOCON5_TXEN	( 0U )
#define CAN_USER_C1FIFOCON5_UINC	( 0U )
#define CAN_USER_C1FIFOCON5_TXREQ	( 0U )
#define CAN_USER_C1FIFOCON5_FRESET	( 0U )
#define CAN_USER_C1FIFOCON5_TXPRI	( 0U )
#define CAN_USER_C1FIFOCON5_TXAT	( 0U )
#define CAN_USER_C1FIFOCON5_FSIZE	( 0U )
#define CAN_USER_C1FIFOCON5_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA5	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA5_TFNRFNIF	( 0U )
#define CAN_USER_C1FIFOSTA5_TFHRFHIF	( 0U )
#define CAN_USER_C1FIFOSTA5_TFERFFIF	( 0U )
#define CAN_USER_C1FIFOSTA5_RXOVIF	( 0U )
#define CAN_USER_C1FIFOSTA5_TXATIF	( 0U )
#define CAN_USER_C1FIFOSTA5_TXERR	( 0U )
#define CAN_USER_C1FIFOSTA5_TXLARB	( 0U )
#define CAN_USER_C1FIFOSTA5_TXABT	( 0U )
#define CAN_USER_C1FIFOSTA5_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOUA5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOUA5	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON6	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON6_TFNRFNIE	( 0U )
#define CAN_USER_C1FIFOCON6_TFHRFHIE	( 0U )
#define CAN_USER_C1FIFOCON6_TFERFFIE	( 0U )
#define CAN_USER_C1FIFOCON6_RXOVIE	( 0U )
#define CAN_USER_C1FIFOCON6_TXATIE	( 0U )
#define CAN_USER_C1FIFOCON6_RXTSEN	( 0U )
#define CAN_USER_C1FIFOCON6_RTREN	( 0U )
#define CAN_USER_C1FIFOCON6_TXEN	( 0U )
#define CAN_USER_C1FIFOCON6_UINC	( 0U )
#define CAN_USER_C1FIFOCON6_TXREQ	( 0U )
#define CAN_USER_C1FIFOCON6_FRESET	( 0U )
#define CAN_USER_C1FIFOCON6_TXPRI	( 0U )
#define CAN_USER_C1FIFOCON6_TXAT	( 0U )
#define CAN_USER_C1FIFOCON6_FSIZE	( 0U )
#define CAN_USER_C1FIFOCON6_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA6	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA6_TFNRFNIF	( 0U )
#define CAN_USER_C1FIFOSTA6_TFHRFHIF	( 0U )
#define CAN_USER_C1FIFOSTA6_TFERFFIF	( 0U )
#define CAN_USER_C1FIFOSTA6_RXOVIF	( 0U )
#define CAN_USER_C1FIFOSTA6_TXATIF	( 0U )
#define CAN_USER_C1FIFOSTA6_TXERR	( 0U )
#define CAN_USER_C1FIFOSTA6_TXLARB	( 0U )
#define CAN_USER_C1FIFOSTA6_TXABT	( 0U )
#define CAN_USER_C1FIFOSTA6_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOUA6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOUA6	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON7	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOCON7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOCON7_TFNRFNIE	( 0U )
#define CAN_USER_C1FIFOCON7_TFHRFHIE	( 0U )
#define CAN_USER_C1FIFOCON7_TFERFFIE	( 0U )
#define CAN_USER_C1FIFOCON7_RXOVIE	( 0U )
#define CAN_USER_C1FIFOCON7_TXATIE	( 0U )
#define CAN_USER_C1FIFOCON7_RXTSEN	( 0U )
#define CAN_USER_C1FIFOCON7_RTREN	( 0U )
#define CAN_USER_C1FIFOCON7_TXEN	( 0U )
#define CAN_USER_C1FIFOCON7_UINC	( 0U )
#define CAN_USER_C1FIFOCON7_TXREQ	( 0U )
#define CAN_USER_C1FIFOCON7_FRESET	( 0U )
#define CAN_USER_C1FIFOCON7_TXPRI	( 0U )
#define CAN_USER_C1FIFOCON7_TXAT	( 0U )
#define CAN_USER_C1FIFOCON7_FSIZE	( 0U )
#define CAN_USER_C1FIFOCON7_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA7	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOSTA7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOSTA7_TFNRFNIF	( 0U )
#define CAN_USER_C1FIFOSTA7_TFHRFHIF	( 0U )
#define CAN_USER_C1FIFOSTA7_TFERFFIF	( 0U )
#define CAN_USER_C1FIFOSTA7_RXOVIF	( 0U )
#define CAN_USER_C1FIFOSTA7_TXATIF	( 0U )
#define CAN_USER_C1FIFOSTA7_TXERR	( 0U )
#define CAN_USER_C1FIFOSTA7_TXLARB	( 0U )
#define CAN_USER_C1FIFOSTA7_TXABT	( 0U )
#define CAN_USER_C1FIFOSTA7_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FIFOUA7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FIFOUA7	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON0	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON0_F0BP	( 0U )
#define CAN_USER_C1FLTCON0_FLTEN0	( 0U )
#define CAN_USER_C1FLTCON0_F1BP	( 0U )
#define CAN_USER_C1FLTCON0_FLTEN1	( 0U )
#define CAN_USER_C1FLTCON0_F2BP	( 0U )
#define CAN_USER_C1FLTCON0_FLTEN2	( 0U )
#define CAN_USER_C1FLTCON0_F3BP	( 0U )
#define CAN_USER_C1FLTCON0_FLTEN3	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON1	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON1_F4BP	( 0U )
#define CAN_USER_C1FLTCON1_FLTEN4	( 0U )
#define CAN_USER_C1FLTCON1_F5BP	( 0U )
#define CAN_USER_C1FLTCON1_FLTEN5	( 0U )
#define CAN_USER_C1FLTCON1_F6BP	( 0U )
#define CAN_USER_C1FLTCON1_FLTEN6	( 0U )
#define CAN_USER_C1FLTCON1_F7BP	( 0U )
#define CAN_USER_C1FLTCON1_FLTEN7	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON2	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON2_F8BP	( 0U )
#define CAN_USER_C1FLTCON2_FLTEN8	( 0U )
#define CAN_USER_C1FLTCON2_F9BP	( 0U )
#define CAN_USER_C1FLTCON2_FLTEN9	( 0U )
#define CAN_USER_C1FLTCON2_F10BP	( 0U )
#define CAN_USER_C1FLTCON2_FLTEN10	( 0U )
#define CAN_USER_C1FLTCON2_F11BP	( 0U )
#define CAN_USER_C1FLTCON2_FLTEN11	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON3	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTCON3_F12BP	( 0U )
#define CAN_USER_C1FLTCON3_FLTEN12	( 0U )
#define CAN_USER_C1FLTCON3_F13BP	( 0U )
#define CAN_USER_C1FLTCON3_FLTEN13	( 0U )
#define CAN_USER_C1FLTCON3_F14BP	( 0U )
#define CAN_USER_C1FLTCON3_FLTEN14	( 0U )
#define CAN_USER_C1FLTCON3_F15BP	( 0U )
#define CAN_USER_C1FLTCON3_FLTEN15	( 0U )


/*----------------------------------------------------------------------------*/
/* C1FLTOBJ8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ8	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ8_SID	( 0U )
#define CAN_USER_C1FLTOBJ8_EID	( 0U )
#define CAN_USER_C1FLTOBJ8_SID11	( 0U )
#define CAN_USER_C1FLTOBJ8_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK8	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK8_MSID	( 0U )
#define CAN_USER_C1MASK8_MEID	( 0U )
#define CAN_USER_C1MASK8_MSID11	( 0U )
#define CAN_USER_C1MASK8_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ9	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ9_SID	( 0U )
#define CAN_USER_C1FLTOBJ9_EID	( 0U )
#define CAN_USER_C1FLTOBJ9_SID11	( 0U )
#define CAN_USER_C1FLTOBJ9_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK9	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK9_MSID	( 0U )
#define CAN_USER_C1MASK9_MEID	( 0U )
#define CAN_USER_C1MASK9_MSID11	( 0U )
#define CAN_USER_C1MASK9_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ10	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ10_SID	( 0U )
#define CAN_USER_C1FLTOBJ10_EID	( 0U )
#define CAN_USER_C1FLTOBJ10_SID11	( 0U )
#define CAN_USER_C1FLTOBJ10_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK10	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK10_MSID	( 0U )
#define CAN_USER_C1MASK10_MEID	( 0U )
#define CAN_USER_C1MASK10_MSID11	( 0U )
#define CAN_USER_C1MASK10_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ11	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ11_SID	( 0U )
#define CAN_USER_C1FLTOBJ11_EID	( 0U )
#define CAN_USER_C1FLTOBJ11_SID11	( 0U )
#define CAN_USER_C1FLTOBJ11_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK11	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK11_MSID	( 0U )
#define CAN_USER_C1MASK11_MEID	( 0U )
#define CAN_USER_C1MASK11_MSID11	( 0U )
#define CAN_USER_C1MASK11_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ12	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ12_SID	( 0U )
#define CAN_USER_C1FLTOBJ12_EID	( 0U )
#define CAN_USER_C1FLTOBJ12_SID11	( 0U )
#define CAN_USER_C1FLTOBJ12_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK12	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK12_MSID	( 0U )
#define CAN_USER_C1MASK12_MEID	( 0U )
#define CAN_USER_C1MASK12_MSID11	( 0U )
#define CAN_USER_C1MASK12_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ13	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ13_SID	( 0U )
#define CAN_USER_C1FLTOBJ13_EID	( 0U )
#define CAN_USER_C1FLTOBJ13_SID11	( 0U )
#define CAN_USER_C1FLTOBJ13_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK13	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK13_MSID	( 0U )
#define CAN_USER_C1MASK13_MEID	( 0U )
#define CAN_USER_C1MASK13_MSID11	( 0U )
#define CAN_USER_C1MASK13_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ14	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ14_SID	( 0U )
#define CAN_USER_C1FLTOBJ14_EID	( 0U )
#define CAN_USER_C1FLTOBJ14_SID11	( 0U )
#define CAN_USER_C1FLTOBJ14_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK14	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK14_MSID	( 0U )
#define CAN_USER_C1MASK14_MEID	( 0U )
#define CAN_USER_C1MASK14_MSID11	( 0U )
#define CAN_USER_C1MASK14_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ15	( 0U )
/*----------------------------------------------------------------------------*/
/* C1FLTOBJ15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1FLTOBJ15_SID	( 0U )
#define CAN_USER_C1FLTOBJ15_EID	( 0U )
#define CAN_USER_C1FLTOBJ15_SID11	( 0U )
#define CAN_USER_C1FLTOBJ15_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK15	( 0U )
/*----------------------------------------------------------------------------*/
/* C1MASK15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C1MASK15_MSID	( 0U )
#define CAN_USER_C1MASK15_MEID	( 0U )
#define CAN_USER_C1MASK15_MSID11	( 0U )
#define CAN_USER_C1MASK15_MIDE	( 0U )





/*----------------------------------------------------------------------------*/
/* C2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2CON	( 0U )
/*----------------------------------------------------------------------------*/
/* C2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2CON_DNCNT	( 0U )
#define CAN_USER_C2CON_ISOCRCEN	( 0U )
#define CAN_USER_C2CON_PXEDIS	( 0U )
#define CAN_USER_C2CON_CLKSEL0	( 0U )
#define CAN_USER_C2CON_WAKFIL	( 0U )
#define CAN_USER_C2CON_WFT	( 0U )
#define CAN_USER_C2CON_CANBUSY	( 0U )
#define CAN_USER_C2CON_BRSDIS	( 0U )
#define CAN_USER_C2CON_SIDL	( 0U )
#define CAN_USER_C2CON_ON	( 0U )
#define CAN_USER_C2CON_RTXAT	( 0U )
#define CAN_USER_C2CON_ESIGM	( 0U )
#define CAN_USER_C2CON_SERR2LOM	( 0U )
#define CAN_USER_C2CON_STEF	( 0U )
#define CAN_USER_C2CON_TXQEN	( 0U )
#define CAN_USER_C2CON_OPMOD	( 0U )
#define CAN_USER_C2CON_REQOP	( 0U )
#define CAN_USER_C2CON_ABAT	( 0U )
#define CAN_USER_C2CON_TXBWS	( 0U )
/*----------------------------------------------------------------------------*/
/* C2NBTCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2NBTCFG	( 0U )
/*----------------------------------------------------------------------------*/
/* C2NBTCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2NBTCFG_SJW	( 0U )
#define CAN_USER_C2NBTCFG_TSEG2	( 0U )
#define CAN_USER_C2NBTCFG_TSEG1	( 0U )
#define CAN_USER_C2NBTCFG_BRP	( 0U )
/*----------------------------------------------------------------------------*/
/* C2DBTCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2DBTCFG	( 0U )
/*----------------------------------------------------------------------------*/
/* C2DBTCFGレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2DBTCFG_SJW	( 0U )
#define CAN_USER_C2DBTCFG_TSEG2	( 0U )
#define CAN_USER_C2DBTCFG_TSEG1	( 0U )
#define CAN_USER_C2DBTCFG_BRP	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TDCレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TDC	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TDCレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TDC_TDCV	( 0U )
#define CAN_USER_C2TDC_TDCO	( 0U )
#define CAN_USER_C2TDC_TDCMOD	( 0U )
#define CAN_USER_C2TDC_SID11EN	( 0U )
#define CAN_USER_C2TDC_EDGFLTEN	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TBCレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TBC	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TSCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TSCON	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TSCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TSCON_TBCPRE	( 0U )
#define CAN_USER_C2TSCON_TBCEN	( 0U )
#define CAN_USER_C2TSCON_TSEOF	( 0U )
#define CAN_USER_C2TSCON_TSRES	( 0U )
/*----------------------------------------------------------------------------*/
/* C2VECレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2VEC	( 0U )
/*----------------------------------------------------------------------------*/
/* C2VECレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2VEC_ICODE	( 0U )
#define CAN_USER_C2VEC_FILHIT	( 0U )
#define CAN_USER_C2VEC_TXCODE	( 0U )
#define CAN_USER_C2VEC_RXCODE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2INTレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2INT	( 0U )
/*----------------------------------------------------------------------------*/
/* C2INTレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2INT_TXIF	( 0U )
#define CAN_USER_C2INT_RXIF	( 0U )
#define CAN_USER_C2INT_TBCIF	( 0U )
#define CAN_USER_C2INT_MODIF	( 0U )
#define CAN_USER_C2INT_TEFIF	( 0U )
#define CAN_USER_C2INT_ECCIF	( 0U )
#define CAN_USER_C2INT_SPICRCIF	( 0U )
#define CAN_USER_C2INT_TXATIF	( 0U )
#define CAN_USER_C2INT_RXOVIF	( 0U )
#define CAN_USER_C2INT_SERRIF	( 0U )
#define CAN_USER_C2INT_CERRIF	( 0U )
#define CAN_USER_C2INT_WAKIF	( 0U )
#define CAN_USER_C2INT_IVMIF	( 0U )
#define CAN_USER_C2INT_TXIE	( 0U )
#define CAN_USER_C2INT_RXIE	( 0U )
#define CAN_USER_C2INT_TBCIE	( 0U )
#define CAN_USER_C2INT_MODIE	( 0U )
#define CAN_USER_C2INT_TEFIE	( 0U )
#define CAN_USER_C2INT_ECCIE	( 0U )
#define CAN_USER_C2INT_SPICRCIE	( 0U )
#define CAN_USER_C2INT_TXATIE	( 0U )
#define CAN_USER_C2INT_RXOVIE	( 0U )
#define CAN_USER_C2INT_SERRIE	( 0U )
#define CAN_USER_C2INT_CERRIE	( 0U )
#define CAN_USER_C2INT_WAKIE	( 0U )
#define CAN_USER_C2INT_IVMIE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2RXIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2RXIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C2RXIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2RXIF_RFIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C2RXOVIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2RXOVIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C2RXOVIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2RXOVIF_RFOVIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXATIFレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXATIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXREQレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXREQ	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TRECレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TREC	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TRECレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TREC_RERRCNT	( 0U )
#define CAN_USER_C2TREC_TERRCNT	( 0U )
#define CAN_USER_C2TREC_EWARN	( 0U )
#define CAN_USER_C2TREC_RXWARN	( 0U )
#define CAN_USER_C2TREC_TXWARN	( 0U )
#define CAN_USER_C2TREC_RXBP	( 0U )
#define CAN_USER_C2TREC_TXBP	( 0U )
#define CAN_USER_C2TREC_TXBO	( 0U )
/*----------------------------------------------------------------------------*/
/* C2BDIAG0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2BDIAG0	( 0U )
/*----------------------------------------------------------------------------*/
/* C2BDIAG0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2BDIAG0_NRERRCNT	( 0U )
#define CAN_USER_C2BDIAG0_NTERRCNT	( 0U )
#define CAN_USER_C2BDIAG0_DRERRCNT	( 0U )
#define CAN_USER_C2BDIAG0_DTERRCNT	( 0U )
/*----------------------------------------------------------------------------*/
/* C2BDIAG1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2BDIAG1	( 0U )
/*----------------------------------------------------------------------------*/
/* C2BDIAG1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2BDIAG1_EFMSGCNT	( 0U )
#define CAN_USER_C2BDIAG1_NBIT0ERR	( 0U )
#define CAN_USER_C2BDIAG1_NBIT1ERR	( 0U )
#define CAN_USER_C2BDIAG1_NACKERR	( 0U )
#define CAN_USER_C2BDIAG1_NFORMERR	( 0U )
#define CAN_USER_C2BDIAG1_NSTUFERR	( 0U )
#define CAN_USER_C2BDIAG1_NCRCERR	( 0U )
#define CAN_USER_C2BDIAG1_TXBOERR	( 0U )
#define CAN_USER_C2BDIAG1_DBIT0ERR	( 0U )
#define CAN_USER_C2BDIAG1_DBIT1ERR	( 0U )
#define CAN_USER_C2BDIAG1_DFORMERR	( 0U )
#define CAN_USER_C2BDIAG1_DSTUFERR	( 0U )
#define CAN_USER_C2BDIAG1_DCRCERR	( 0U )
#define CAN_USER_C2BDIAG1_ESI	( 0U )
#define CAN_USER_C2BDIAG1_DLCMM	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TEFCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TEFCON	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TEFCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TEFCON_TEFNEIE	( 0U )
#define CAN_USER_C2TEFCON_TEFHIE	( 0U )
#define CAN_USER_C2TEFCON_TEFFIE	( 0U )
#define CAN_USER_C2TEFCON_TEFOVIE	( 0U )
#define CAN_USER_C2TEFCON_TEFTSEN	( 0U )
#define CAN_USER_C2TEFCON_UINC	( 0U )
#define CAN_USER_C2TEFCON_FRESET	( 0U )
#define CAN_USER_C2TEFCON_FSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TEFSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TEFSTA	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TEFSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TEFSTA_TEFNEIF	( 0U )
#define CAN_USER_C2TEFSTA_TEFHIF	( 0U )
#define CAN_USER_C2TEFSTA_TEFFIF	( 0U )
#define CAN_USER_C2TEFSTA_TEFOVIF	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TEFUAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TEFUA	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOBAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOBA	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXQCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXQCON	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXQCONレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXQCON_TXQNIE	( 0U )
#define CAN_USER_C2TXQCON_TXQEIE	( 0U )
#define CAN_USER_C2TXQCON_TXATIE	( 0U )
#define CAN_USER_C2TXQCON_TXEN	( 0U )
#define CAN_USER_C2TXQCON_UINC	( 0U )
#define CAN_USER_C2TXQCON_TXREQ	( 0U )
#define CAN_USER_C2TXQCON_FRESET	( 0U )
#define CAN_USER_C2TXQCON_TXPRI	( 0U )
#define CAN_USER_C2TXQCON_TXAT	( 0U )
#define CAN_USER_C2TXQCON_FSIZE	( 0U )
#define CAN_USER_C2TXQCON_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXQSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXQSTA	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXQSTAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXQSTA_TXQNIF	( 0U )
#define CAN_USER_C2TXQSTA_TXQEIF	( 0U )
#define CAN_USER_C2TXQSTA_TXATIF	( 0U )
#define CAN_USER_C2TXQSTA_TXERR	( 0U )
#define CAN_USER_C2TXQSTA_TXLARB	( 0U )
#define CAN_USER_C2TXQSTA_TXABT	( 0U )
#define CAN_USER_C2TXQSTA_TXQCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2TXQUAレジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2TXQUA	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON1	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON1_TFNRFNIE	( 0U )
#define CAN_USER_C2FIFOCON1_TFHRFHIE	( 0U )
#define CAN_USER_C2FIFOCON1_TFERFFIE	( 0U )
#define CAN_USER_C2FIFOCON1_RXOVIE	( 0U )
#define CAN_USER_C2FIFOCON1_TXATIE	( 0U )
#define CAN_USER_C2FIFOCON1_RXTSEN	( 0U )
#define CAN_USER_C2FIFOCON1_RTREN	( 0U )
#define CAN_USER_C2FIFOCON1_TXEN	( 0U )
#define CAN_USER_C2FIFOCON1_UINC	( 0U )
#define CAN_USER_C2FIFOCON1_TXREQ	( 0U )
#define CAN_USER_C2FIFOCON1_FRESET	( 0U )
#define CAN_USER_C2FIFOCON1_TXPRI	( 0U )
#define CAN_USER_C2FIFOCON1_TXAT	( 0U )
#define CAN_USER_C2FIFOCON1_FSIZE	( 0U )
#define CAN_USER_C2FIFOCON1_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA1	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA1_TFNRFNIF	( 0U )
#define CAN_USER_C2FIFOSTA1_TFHRFHIF	( 0U )
#define CAN_USER_C2FIFOSTA1_TFERFFIF	( 0U )
#define CAN_USER_C2FIFOSTA1_RXOVIF	( 0U )
#define CAN_USER_C2FIFOSTA1_TXATIF	( 0U )
#define CAN_USER_C2FIFOSTA1_TXERR	( 0U )
#define CAN_USER_C2FIFOSTA1_TXLARB	( 0U )
#define CAN_USER_C2FIFOSTA1_TXABT	( 0U )
#define CAN_USER_C2FIFOSTA1_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOUA1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOUA1	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON2	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON2_TFNRFNIE	( 0U )
#define CAN_USER_C2FIFOCON2_TFHRFHIE	( 0U )
#define CAN_USER_C2FIFOCON2_TFERFFIE	( 0U )
#define CAN_USER_C2FIFOCON2_RXOVIE	( 0U )
#define CAN_USER_C2FIFOCON2_TXATIE	( 0U )
#define CAN_USER_C2FIFOCON2_RXTSEN	( 0U )
#define CAN_USER_C2FIFOCON2_RTREN	( 0U )
#define CAN_USER_C2FIFOCON2_TXEN	( 0U )
#define CAN_USER_C2FIFOCON2_UINC	( 0U )
#define CAN_USER_C2FIFOCON2_TXREQ	( 0U )
#define CAN_USER_C2FIFOCON2_FRESET	( 0U )
#define CAN_USER_C2FIFOCON2_TXPRI	( 0U )
#define CAN_USER_C2FIFOCON2_TXAT	( 0U )
#define CAN_USER_C2FIFOCON2_FSIZE	( 0U )
#define CAN_USER_C2FIFOCON2_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA2	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA2_TFNRFNIF	( 0U )
#define CAN_USER_C2FIFOSTA2_TFHRFHIF	( 0U )
#define CAN_USER_C2FIFOSTA2_TFERFFIF	( 0U )
#define CAN_USER_C2FIFOSTA2_RXOVIF	( 0U )
#define CAN_USER_C2FIFOSTA2_TXATIF	( 0U )
#define CAN_USER_C2FIFOSTA2_TXERR	( 0U )
#define CAN_USER_C2FIFOSTA2_TXLARB	( 0U )
#define CAN_USER_C2FIFOSTA2_TXABT	( 0U )
#define CAN_USER_C2FIFOSTA2_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOUA2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOUA2	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON3	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON3_TFNRFNIE	( 0U )
#define CAN_USER_C2FIFOCON3_TFHRFHIE	( 0U )
#define CAN_USER_C2FIFOCON3_TFERFFIE	( 0U )
#define CAN_USER_C2FIFOCON3_RXOVIE	( 0U )
#define CAN_USER_C2FIFOCON3_TXATIE	( 0U )
#define CAN_USER_C2FIFOCON3_RXTSEN	( 0U )
#define CAN_USER_C2FIFOCON3_RTREN	( 0U )
#define CAN_USER_C2FIFOCON3_TXEN	( 0U )
#define CAN_USER_C2FIFOCON3_UINC	( 0U )
#define CAN_USER_C2FIFOCON3_TXREQ	( 0U )
#define CAN_USER_C2FIFOCON3_FRESET	( 0U )
#define CAN_USER_C2FIFOCON3_TXPRI	( 0U )
#define CAN_USER_C2FIFOCON3_TXAT	( 0U )
#define CAN_USER_C2FIFOCON3_FSIZE	( 0U )
#define CAN_USER_C2FIFOCON3_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA3	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA3_TFNRFNIF	( 0U )
#define CAN_USER_C2FIFOSTA3_TFHRFHIF	( 0U )
#define CAN_USER_C2FIFOSTA3_TFERFFIF	( 0U )
#define CAN_USER_C2FIFOSTA3_RXOVIF	( 0U )
#define CAN_USER_C2FIFOSTA3_TXATIF	( 0U )
#define CAN_USER_C2FIFOSTA3_TXERR	( 0U )
#define CAN_USER_C2FIFOSTA3_TXLARB	( 0U )
#define CAN_USER_C2FIFOSTA3_TXABT	( 0U )
#define CAN_USER_C2FIFOSTA3_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOUA3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOUA3	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON4	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON4_TFNRFNIE	( 0U )
#define CAN_USER_C2FIFOCON4_TFHRFHIE	( 0U )
#define CAN_USER_C2FIFOCON4_TFERFFIE	( 0U )
#define CAN_USER_C2FIFOCON4_RXOVIE	( 0U )
#define CAN_USER_C2FIFOCON4_TXATIE	( 0U )
#define CAN_USER_C2FIFOCON4_RXTSEN	( 0U )
#define CAN_USER_C2FIFOCON4_RTREN	( 0U )
#define CAN_USER_C2FIFOCON4_TXEN	( 0U )
#define CAN_USER_C2FIFOCON4_UINC	( 0U )
#define CAN_USER_C2FIFOCON4_TXREQ	( 0U )
#define CAN_USER_C2FIFOCON4_FRESET	( 0U )
#define CAN_USER_C2FIFOCON4_TXPRI	( 0U )
#define CAN_USER_C2FIFOCON4_TXAT	( 0U )
#define CAN_USER_C2FIFOCON4_FSIZE	( 0U )
#define CAN_USER_C2FIFOCON4_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA4	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA4_TFNRFNIF	( 0U )
#define CAN_USER_C2FIFOSTA4_TFHRFHIF	( 0U )
#define CAN_USER_C2FIFOSTA4_TFERFFIF	( 0U )
#define CAN_USER_C2FIFOSTA4_RXOVIF	( 0U )
#define CAN_USER_C2FIFOSTA4_TXATIF	( 0U )
#define CAN_USER_C2FIFOSTA4_TXERR	( 0U )
#define CAN_USER_C2FIFOSTA4_TXLARB	( 0U )
#define CAN_USER_C2FIFOSTA4_TXABT	( 0U )
#define CAN_USER_C2FIFOSTA4_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOUA4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOUA4	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON5	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON5_TFNRFNIE	( 0U )
#define CAN_USER_C2FIFOCON5_TFHRFHIE	( 0U )
#define CAN_USER_C2FIFOCON5_TFERFFIE	( 0U )
#define CAN_USER_C2FIFOCON5_RXOVIE	( 0U )
#define CAN_USER_C2FIFOCON5_TXATIE	( 0U )
#define CAN_USER_C2FIFOCON5_RXTSEN	( 0U )
#define CAN_USER_C2FIFOCON5_RTREN	( 0U )
#define CAN_USER_C2FIFOCON5_TXEN	( 0U )
#define CAN_USER_C2FIFOCON5_UINC	( 0U )
#define CAN_USER_C2FIFOCON5_TXREQ	( 0U )
#define CAN_USER_C2FIFOCON5_FRESET	( 0U )
#define CAN_USER_C2FIFOCON5_TXPRI	( 0U )
#define CAN_USER_C2FIFOCON5_TXAT	( 0U )
#define CAN_USER_C2FIFOCON5_FSIZE	( 0U )
#define CAN_USER_C2FIFOCON5_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA5	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA5_TFNRFNIF	( 0U )
#define CAN_USER_C2FIFOSTA5_TFHRFHIF	( 0U )
#define CAN_USER_C2FIFOSTA5_TFERFFIF	( 0U )
#define CAN_USER_C2FIFOSTA5_RXOVIF	( 0U )
#define CAN_USER_C2FIFOSTA5_TXATIF	( 0U )
#define CAN_USER_C2FIFOSTA5_TXERR	( 0U )
#define CAN_USER_C2FIFOSTA5_TXLARB	( 0U )
#define CAN_USER_C2FIFOSTA5_TXABT	( 0U )
#define CAN_USER_C2FIFOSTA5_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOUA5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOUA5	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON6	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON6_TFNRFNIE	( 0U )
#define CAN_USER_C2FIFOCON6_TFHRFHIE	( 0U )
#define CAN_USER_C2FIFOCON6_TFERFFIE	( 0U )
#define CAN_USER_C2FIFOCON6_RXOVIE	( 0U )
#define CAN_USER_C2FIFOCON6_TXATIE	( 0U )
#define CAN_USER_C2FIFOCON6_RXTSEN	( 0U )
#define CAN_USER_C2FIFOCON6_RTREN	( 0U )
#define CAN_USER_C2FIFOCON6_TXEN	( 0U )
#define CAN_USER_C2FIFOCON6_UINC	( 0U )
#define CAN_USER_C2FIFOCON6_TXREQ	( 0U )
#define CAN_USER_C2FIFOCON6_FRESET	( 0U )
#define CAN_USER_C2FIFOCON6_TXPRI	( 0U )
#define CAN_USER_C2FIFOCON6_TXAT	( 0U )
#define CAN_USER_C2FIFOCON6_FSIZE	( 0U )
#define CAN_USER_C2FIFOCON6_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA6	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA6_TFNRFNIF	( 0U )
#define CAN_USER_C2FIFOSTA6_TFHRFHIF	( 0U )
#define CAN_USER_C2FIFOSTA6_TFERFFIF	( 0U )
#define CAN_USER_C2FIFOSTA6_RXOVIF	( 0U )
#define CAN_USER_C2FIFOSTA6_TXATIF	( 0U )
#define CAN_USER_C2FIFOSTA6_TXERR	( 0U )
#define CAN_USER_C2FIFOSTA6_TXLARB	( 0U )
#define CAN_USER_C2FIFOSTA6_TXABT	( 0U )
#define CAN_USER_C2FIFOSTA6_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOUA6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOUA6	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON7	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOCON7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOCON7_TFNRFNIE	( 0U )
#define CAN_USER_C2FIFOCON7_TFHRFHIE	( 0U )
#define CAN_USER_C2FIFOCON7_TFERFFIE	( 0U )
#define CAN_USER_C2FIFOCON7_RXOVIE	( 0U )
#define CAN_USER_C2FIFOCON7_TXATIE	( 0U )
#define CAN_USER_C2FIFOCON7_RXTSEN	( 0U )
#define CAN_USER_C2FIFOCON7_RTREN	( 0U )
#define CAN_USER_C2FIFOCON7_TXEN	( 0U )
#define CAN_USER_C2FIFOCON7_UINC	( 0U )
#define CAN_USER_C2FIFOCON7_TXREQ	( 0U )
#define CAN_USER_C2FIFOCON7_FRESET	( 0U )
#define CAN_USER_C2FIFOCON7_TXPRI	( 0U )
#define CAN_USER_C2FIFOCON7_TXAT	( 0U )
#define CAN_USER_C2FIFOCON7_FSIZE	( 0U )
#define CAN_USER_C2FIFOCON7_PLSIZE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA7	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOSTA7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOSTA7_TFNRFNIF	( 0U )
#define CAN_USER_C2FIFOSTA7_TFHRFHIF	( 0U )
#define CAN_USER_C2FIFOSTA7_TFERFFIF	( 0U )
#define CAN_USER_C2FIFOSTA7_RXOVIF	( 0U )
#define CAN_USER_C2FIFOSTA7_TXATIF	( 0U )
#define CAN_USER_C2FIFOSTA7_TXERR	( 0U )
#define CAN_USER_C2FIFOSTA7_TXLARB	( 0U )
#define CAN_USER_C2FIFOSTA7_TXABT	( 0U )
#define CAN_USER_C2FIFOSTA7_FIFOCI	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FIFOUA7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FIFOUA7	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON0	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON0_F0BP	( 0U )
#define CAN_USER_C2FLTCON0_FLTEN0	( 0U )
#define CAN_USER_C2FLTCON0_F1BP	( 0U )
#define CAN_USER_C2FLTCON0_FLTEN1	( 0U )
#define CAN_USER_C2FLTCON0_F2BP	( 0U )
#define CAN_USER_C2FLTCON0_FLTEN2	( 0U )
#define CAN_USER_C2FLTCON0_F3BP	( 0U )
#define CAN_USER_C2FLTCON0_FLTEN3	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON1	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON1_F4BP	( 0U )
#define CAN_USER_C2FLTCON1_FLTEN4	( 0U )
#define CAN_USER_C2FLTCON1_F5BP	( 0U )
#define CAN_USER_C2FLTCON1_FLTEN5	( 0U )
#define CAN_USER_C2FLTCON1_F6BP	( 0U )
#define CAN_USER_C2FLTCON1_FLTEN6	( 0U )
#define CAN_USER_C2FLTCON1_F7BP	( 0U )
#define CAN_USER_C2FLTCON1_FLTEN7	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON2	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON2_F8BP	( 0U )
#define CAN_USER_C2FLTCON2_FLTEN8	( 0U )
#define CAN_USER_C2FLTCON2_F9BP	( 0U )
#define CAN_USER_C2FLTCON2_FLTEN9	( 0U )
#define CAN_USER_C2FLTCON2_F10BP	( 0U )
#define CAN_USER_C2FLTCON2_FLTEN10	( 0U )
#define CAN_USER_C2FLTCON2_F11BP	( 0U )
#define CAN_USER_C2FLTCON2_FLTEN11	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON3	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTCON3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTCON3_F12BP	( 0U )
#define CAN_USER_C2FLTCON3_FLTEN12	( 0U )
#define CAN_USER_C2FLTCON3_F13BP	( 0U )
#define CAN_USER_C2FLTCON3_FLTEN13	( 0U )
#define CAN_USER_C2FLTCON3_F14BP	( 0U )
#define CAN_USER_C2FLTCON3_FLTEN14	( 0U )
#define CAN_USER_C2FLTCON3_F15BP	( 0U )
#define CAN_USER_C2FLTCON3_FLTEN15	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ0	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ0_SID	( 0U )
#define CAN_USER_C2FLTOBJ0_EID	( 0U )
#define CAN_USER_C2FLTOBJ0_SID11	( 0U )
#define CAN_USER_C2FLTOBJ0_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK0	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK0レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK0_MSID	( 0U )
#define CAN_USER_C2MASK0_MEID	( 0U )
#define CAN_USER_C2MASK0_MSID11	( 0U )
#define CAN_USER_C2MASK0_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ1	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ1_SID	( 0U )
#define CAN_USER_C2FLTOBJ1_EID	( 0U )
#define CAN_USER_C2FLTOBJ1_SID11	( 0U )
#define CAN_USER_C2FLTOBJ1_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK1	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK1レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK1_MSID	( 0U )
#define CAN_USER_C2MASK1_MEID	( 0U )
#define CAN_USER_C2MASK1_MSID11	( 0U )
#define CAN_USER_C2MASK1_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ2	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ2_SID	( 0U )
#define CAN_USER_C2FLTOBJ2_EID	( 0U )
#define CAN_USER_C2FLTOBJ2_SID11	( 0U )
#define CAN_USER_C2FLTOBJ2_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK2	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK2レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK2_MSID	( 0U )
#define CAN_USER_C2MASK2_MEID	( 0U )
#define CAN_USER_C2MASK2_MSID11	( 0U )
#define CAN_USER_C2MASK2_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ3	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ3_SID	( 0U )
#define CAN_USER_C2FLTOBJ3_EID	( 0U )
#define CAN_USER_C2FLTOBJ3_SID11	( 0U )
#define CAN_USER_C2FLTOBJ3_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK3	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK3レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK3_MSID	( 0U )
#define CAN_USER_C2MASK3_MEID	( 0U )
#define CAN_USER_C2MASK3_MSID11	( 0U )
#define CAN_USER_C2MASK3_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ4	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ4_SID	( 0U )
#define CAN_USER_C2FLTOBJ4_EID	( 0U )
#define CAN_USER_C2FLTOBJ4_SID11	( 0U )
#define CAN_USER_C2FLTOBJ4_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK4	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK4レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK4_MSID	( 0U )
#define CAN_USER_C2MASK4_MEID	( 0U )
#define CAN_USER_C2MASK4_MSID11	( 0U )
#define CAN_USER_C2MASK4_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ5	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ5_SID	( 0U )
#define CAN_USER_C2FLTOBJ5_EID	( 0U )
#define CAN_USER_C2FLTOBJ5_SID11	( 0U )
#define CAN_USER_C2FLTOBJ5_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK5	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK5レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK5_MSID	( 0U )
#define CAN_USER_C2MASK5_MEID	( 0U )
#define CAN_USER_C2MASK5_MSID11	( 0U )
#define CAN_USER_C2MASK5_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ6	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ6_SID	( 0U )
#define CAN_USER_C2FLTOBJ6_EID	( 0U )
#define CAN_USER_C2FLTOBJ6_SID11	( 0U )
#define CAN_USER_C2FLTOBJ6_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK6	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK6レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK6_MSID	( 0U )
#define CAN_USER_C2MASK6_MEID	( 0U )
#define CAN_USER_C2MASK6_MSID11	( 0U )
#define CAN_USER_C2MASK6_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ7	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ7_SID	( 0U )
#define CAN_USER_C2FLTOBJ7_EID	( 0U )
#define CAN_USER_C2FLTOBJ7_SID11	( 0U )
#define CAN_USER_C2FLTOBJ7_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK7	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK7レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK7_MSID	( 0U )
#define CAN_USER_C2MASK7_MEID	( 0U )
#define CAN_USER_C2MASK7_MSID11	( 0U )
#define CAN_USER_C2MASK7_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ8	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ8_SID	( 0U )
#define CAN_USER_C2FLTOBJ8_EID	( 0U )
#define CAN_USER_C2FLTOBJ8_SID11	( 0U )
#define CAN_USER_C2FLTOBJ8_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK8	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK8レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK8_MSID	( 0U )
#define CAN_USER_C2MASK8_MEID	( 0U )
#define CAN_USER_C2MASK8_MSID11	( 0U )
#define CAN_USER_C2MASK8_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ9	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ9_SID	( 0U )
#define CAN_USER_C2FLTOBJ9_EID	( 0U )
#define CAN_USER_C2FLTOBJ9_SID11	( 0U )
#define CAN_USER_C2FLTOBJ9_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK9	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK9レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK9_MSID	( 0U )
#define CAN_USER_C2MASK9_MEID	( 0U )
#define CAN_USER_C2MASK9_MSID11	( 0U )
#define CAN_USER_C2MASK9_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ10	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ10_SID	( 0U )
#define CAN_USER_C2FLTOBJ10_EID	( 0U )
#define CAN_USER_C2FLTOBJ10_SID11	( 0U )
#define CAN_USER_C2FLTOBJ10_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK10	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK10レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK10_MSID	( 0U )
#define CAN_USER_C2MASK10_MEID	( 0U )
#define CAN_USER_C2MASK10_MSID11	( 0U )
#define CAN_USER_C2MASK10_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ11	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ11_SID	( 0U )
#define CAN_USER_C2FLTOBJ11_EID	( 0U )
#define CAN_USER_C2FLTOBJ11_SID11	( 0U )
#define CAN_USER_C2FLTOBJ11_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK11	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK11レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK11_MSID	( 0U )
#define CAN_USER_C2MASK11_MEID	( 0U )
#define CAN_USER_C2MASK11_MSID11	( 0U )
#define CAN_USER_C2MASK11_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ12	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ12_SID	( 0U )
#define CAN_USER_C2FLTOBJ12_EID	( 0U )
#define CAN_USER_C2FLTOBJ12_SID11	( 0U )
#define CAN_USER_C2FLTOBJ12_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK12	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK12レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK12_MSID	( 0U )
#define CAN_USER_C2MASK12_MEID	( 0U )
#define CAN_USER_C2MASK12_MSID11	( 0U )
#define CAN_USER_C2MASK12_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ13	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ13_SID	( 0U )
#define CAN_USER_C2FLTOBJ13_EID	( 0U )
#define CAN_USER_C2FLTOBJ13_SID11	( 0U )
#define CAN_USER_C2FLTOBJ13_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK13	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK13レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK13_MSID	( 0U )
#define CAN_USER_C2MASK13_MEID	( 0U )
#define CAN_USER_C2MASK13_MSID11	( 0U )
#define CAN_USER_C2MASK13_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ14	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ14_SID	( 0U )
#define CAN_USER_C2FLTOBJ14_EID	( 0U )
#define CAN_USER_C2FLTOBJ14_SID11	( 0U )
#define CAN_USER_C2FLTOBJ14_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK14	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK14レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK14_MSID	( 0U )
#define CAN_USER_C2MASK14_MEID	( 0U )
#define CAN_USER_C2MASK14_MSID11	( 0U )
#define CAN_USER_C2MASK14_MIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ15	( 0U )
/*----------------------------------------------------------------------------*/
/* C2FLTOBJ15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2FLTOBJ15_SID	( 0U )
#define CAN_USER_C2FLTOBJ15_EID	( 0U )
#define CAN_USER_C2FLTOBJ15_SID11	( 0U )
#define CAN_USER_C2FLTOBJ15_EXIDE	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK15	( 0U )
/*----------------------------------------------------------------------------*/
/* C2MASK15レジスタ */
/*----------------------------------------------------------------------------*/
#define CAN_USER_C2MASK15_MSID	( 0U )
#define CAN_USER_C2MASK15_MEID	( 0U )
#define CAN_USER_C2MASK15_MSID11	( 0U )
#define CAN_USER_C2MASK15_MIDE	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CAN_USERR_H */

