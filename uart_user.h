#ifndef UART_USER_H
#define	UART_USER_H

/*----------------------------------------------------------------------------------*/
/*【INC】インクルードファイル*/
/*----------------------------------------------------------------------------------*/
#include "uart_driver.h"
/*----------------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------------*/
#define UART_PC_CMD_NG                -1
#define UART_PC_CMD_OK                0
#define UART_PC_CMD_BUFF_FULL         1
#define UART_PC_CMD_INVALID_INPUT     2

#define UART_PC_TX_BUFF_SIZE        64
#define UART_PC_RX_BUFF_SIZE        64

#define UART_PC_TXBUFF_FULL         U1STAHbits.UTXBF
#define UART_PC_TXREG               U1TXREG
#define UART_PC_RXREG               U1RXREG

/*----------------------------------------------------------------------------*/
/* U1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1CON_MODE       ( UART_DRV_MOD_ASYNC_8BIT )
#define UART_USER_U1CON_RXEN      ( UART_DRV_URXEN_ENABLE )
#define UART_USER_U1CON_TXEN      ( UART_DRV_UTXEN_ENABLE )
#define UART_USER_U1CON_ABDEN      ( UART_DRV_ABAUD_DISABLE )
#define UART_USER_U1CON_BRGS       ( UART_DRV_BRGH_HIGH_SPEED )
#define UART_USER_U1CON_SENDB      ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U1CON_BRKOVR     ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U1CON_RXBIMD     ( UART_DRV_RXBIMD_LOW2HIGH )
#define UART_USER_U1CON_WUE        ( UART_DRV_WAKE_DISABLE )
#define UART_USER_U1CON_SIDL       ( UART_DRV_USIDL_RUN )
#define UART_USER_U1CON_ON         ( UART_DRV_UARTEN_ENABLE )

#define UART_USER_U1CON_FLO        ( UART_DRV_FLO_OFF )
#define UART_USER_U1CON_TXPOL      ( UART_DRV_TXPOL_NORMAL )
#define UART_USER_U1CON_C0EN       ( UART_DRV_C0EN_MODE0 )
#define UART_USER_U1CON_STP        ( UART_DRV_STP_1TX_1RX )
#define UART_USER_U1CON_RXPOL      ( UART_DRV_RXPOL_NORMAL )
#define UART_USER_U1CON_RUNOVF     ( UART_DRV_RUNOVF_LEGACY )
#define UART_USER_U1CON_HALFDPLX   ( UART_DRV_HALFDPLX_FULL )
#define UART_USER_U1CON_CLKSEL     ( UART_DRV_CLKSEL_STANDARD_SPEED )
#define UART_USER_U1CON_CLKMOD		( UART_DRV_CLKMOD_LAGACY )
#define UART_USER_U1CON_ACTIVE		( 0U )
#define UART_USER_U1CON_SLPEN      ( UART_DRV_SLPEN_CLOCK_OFF )

/*----------------------------------------------------------------------------*/
/* U1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1STAT_TXCIF		( 0U )
#define UART_USER_U1STAT_RXFOIF		( 0U )
#define UART_USER_U1STAT_RXBKIF		( 0U )
#define UART_USER_U1STAT_FERIF		( 0U )
#define UART_USER_U1STAT_CERIF		( 0U )
#define UART_USER_U1STAT_ABDOVIF	( 0U )
#define UART_USER_U1STAT_PERIF		( 0U )
#define UART_USER_U1STAT_TXMTIF		( 0U )

#define UART_USER_U1STAT_TXCIE		( UART_DRV_TXCIE_DISABLE )
#define UART_USER_U1STAT_RXFOIE		( 0U )
#define UART_USER_U1STAT_RXBKIE		( UART_DRV_RXBKIE_DISABLE )
#define UART_USER_U1STAT_FERIE		( UART_DRV_FERIE_DISABLE )
#define UART_USER_U1STAT_CERIE		( UART_DRV_CERIE_DISABLE )
#define UART_USER_U1STAT_ABDOVIE	( UART_DRV_ABDOVE_DISABLE )
#define UART_USER_U1STAT_PERIE		( UART_DRV_PERIE_DISABLE )
#define UART_USER_U1STAT_TXMTIE		( 0U )
#define UART_USER_U1STAT_RXBF		( 0U )
#define UART_USER_U1STAT_RXBE		( 0U )
#define UART_USER_U1STAT_XON		( 0U )
#define UART_USER_U1STAT_RCIDL		( 0U )
#define UART_USER_U1STAT_TXBF		( 0U )
#define UART_USER_U1STAT_TXBE		( 0U )
#define UART_USER_U1STAT_STPMD       ( UART_DRV_STPMD_FIRST_STOPBIT )
#define UART_USER_U1STAT_TXWRE		( 0U )
#define UART_USER_U1STAT_RXWM		( 0U )
#define UART_USER_U1STAT_TXWM		( 0U )
/*----------------------------------------------------------------------------*/
/* U1BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1BRG				115200L
/*----------------------------------------------------------------------------*/
/* U1RXBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1RXB				( 0U )
/*----------------------------------------------------------------------------*/
/* U1TXBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1TXB_TXB		( 0U )
#define UART_USER_U1TXB_LAST	( 0U )

/*----------------------------------------------------------------------------*/
/* U1PAレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1PA_P1		( 0U )
#define UART_USER_U1PA_P2		( 0U )
#define UART_USER_U1PA_WIP		( 0U )

/*----------------------------------------------------------------------------*/
/* U1PBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1PB_P3		( 0U )
#define UART_USER_U1PB_WIP		( 0U )
/*----------------------------------------------------------------------------*/
/* U1CHKレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1CHK_TXCHK	( 0x0000u )
#define UART_USER_U1CHK_RXCHK   ( 0x0000u )
/*----------------------------------------------------------------------------*/
/* U1SCCONレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1SCCON_PRTCL	( UART_DRV_PRTCL_T0 )
#define UART_USER_U1SCCON_T0PD	( UART_DRV_T0PD_1ETU )
#define UART_USER_U1SCCON_CONV	( UART_DRV_CONV_DIRECT)
#define UART_USER_U1SCCON_TXRPT	( UART_DRV_TXRPT_ONCE  )
#define UART_USER_U1SCCON_GTCIE	( UART_DRV_GTCIE_DISABLE )
#define UART_USER_U1SCCON_WTCIE	( UART_DRV_WTCIE_DISABLE )
#define UART_USER_U1SCCON_BTCIE	( UART_DRV_BTCIE_DISABLE )
#define UART_USER_U1SCCON_TXRPTIE	( UART_DRV_TXRPTIE_DISABLE )
#define UART_USER_U1SCCON_RXRPTIE	( UART_DRV_RXRPTIE_DISABLE )
#define UART_USER_U1SCCON_GTCIF		( 0U )
#define UART_USER_U1SCCON_WTCIF		( 0U )
#define UART_USER_U1SCCON_BTCIF		( 0U )
#define UART_USER_U1SCCON_TXRPTIF	( 0U )
#define UART_USER_U1SCCON_RXRPTIF	( 0U )

/*----------------------------------------------------------------------------*/
/* U1UIRレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U1UIR_ABDIE	( 0U )
#define UART_USER_U1UIR_ABDIF	( 0U )
#define UART_USER_U1UIR_WUIF	( 0U )

/*----------------------------------------------------------------------------*/
/* U2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2CON_MODE       ( UART_DRV_MOD_ASYNC_8BIT )
#define UART_USER_U2CON_RXEN      ( UART_DRV_URXEN_ENABLE )
#define UART_USER_U2CON_TXEN      ( UART_DRV_UTXEN_ENABLE )
#define UART_USER_U2CON_ABDEN      ( UART_DRV_ABAUD_DISABLE )
#define UART_USER_U2CON_BRGS       ( UART_DRV_BRGH_HIGH_SPEED )
#define UART_USER_U2CON_SENDB      ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U2CON_BRKOVR     ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U2CON_RXBIMD     ( UART_DRV_RXBIMD_LOW2HIGH )
#define UART_USER_U2CON_WUE        ( UART_DRV_WAKE_DISABLE )
#define UART_USER_U2CON_SIDL       ( UART_DRV_USIDL_RUN )
#define UART_USER_U2CON_ON         ( UART_DRV_UARTEN_ENABLE )

#define UART_USER_U2CON_FLO        ( UART_DRV_FLO_OFF )
#define UART_USER_U2CON_TXPOL      ( UART_DRV_TXPOL_NORMAL )
#define UART_USER_U2CON_C0EN       ( UART_DRV_C0EN_MODE0 )
#define UART_USER_U2CON_STP        ( UART_DRV_STP_1TX_1RX )
#define UART_USER_U2CON_RXPOL      ( UART_DRV_RXPOL_NORMAL )
#define UART_USER_U2CON_RUNOVF     ( UART_DRV_RUNOVF_LEGACY )
#define UART_USER_U2CON_HALFDPLX   ( UART_DRV_HALFDPLX_FULL )
#define UART_USER_U2CON_CLKSEL     ( UART_DRV_CLKSEL_STANDARD_SPEED )
#define UART_USER_U2CON_CLKMOD		( UART_DRV_CLKMOD_LAGACY )
#define UART_USER_U2CON_ACTIVE		( 0U )
#define UART_USER_U2CON_SLPEN      ( UART_DRV_SLPEN_CLOCK_OFF )

/*----------------------------------------------------------------------------*/
/* U2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2STAT_TXCIF		( 0U )
#define UART_USER_U2STAT_RXFOIF		( 0U )
#define UART_USER_U2STAT_RXBKIF		( 0U )
#define UART_USER_U2STAT_FERIF		( 0U )
#define UART_USER_U2STAT_CERIF		( 0U )
#define UART_USER_U2STAT_ABDOVIF	( 0U )
#define UART_USER_U2STAT_PERIF		( 0U )
#define UART_USER_U2STAT_TXMTIF		( 0U )

#define UART_USER_U2STAT_TXCIE		( UART_DRV_TXCIE_DISABLE )
#define UART_USER_U2STAT_RXFOIE		( 0U )
#define UART_USER_U2STAT_RXBKIE		( UART_DRV_RXBKIE_DISABLE )
#define UART_USER_U2STAT_FERIE		( UART_DRV_FERIE_DISABLE )
#define UART_USER_U2STAT_CERIE		( UART_DRV_CERIE_DISABLE )
#define UART_USER_U2STAT_ABDOVIE	( UART_DRV_ABDOVE_DISABLE )
#define UART_USER_U2STAT_PERIE		( UART_DRV_PERIE_DISABLE )
#define UART_USER_U2STAT_TXMTIE		( 0U )
#define UART_USER_U2STAT_RXBF		( 0U )
#define UART_USER_U2STAT_RXBE		( 0U )
#define UART_USER_U2STAT_XON		( 0U )
#define UART_USER_U2STAT_RCIDL		( 0U )
#define UART_USER_U2STAT_TXBF		( 0U )
#define UART_USER_U2STAT_TXBE		( 0U )
#define UART_USER_U2STAT_STPMD       ( UART_DRV_STPMD_FIRST_STOPBIT )
#define UART_USER_U2STAT_TXWRE		( 0U )
#define UART_USER_U2STAT_RXWM		( 0U )
#define UART_USER_U2STAT_TXWM		( 0U )
/*----------------------------------------------------------------------------*/
/* U2BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2BRG				115200L
/*----------------------------------------------------------------------------*/
/* U2RXBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2RXB				( 0U )
/*----------------------------------------------------------------------------*/
/* U2TXBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2TXB_TXB		( 0U )
#define UART_USER_U2TXB_LAST	( 0U )

/*----------------------------------------------------------------------------*/
/* U2PAレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2PA_P1		( 0U )
#define UART_USER_U2PA_P2		( 0U )
#define UART_USER_U2PA_WIP		( 0U )

/*----------------------------------------------------------------------------*/
/* U2PBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2PB_P3		( 0U )
#define UART_USER_U2PB_WIP		( 0U )
/*----------------------------------------------------------------------------*/
/* U2CHKレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2CHK_TXCHK	( 0x0000u )
#define UART_USER_U2CHK_RXCHK   ( 0x0000u )
/*----------------------------------------------------------------------------*/
/* U2SCCONレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2SCCON_PRTCL	( UART_DRV_PRTCL_T0 )
#define UART_USER_U2SCCON_T0PD	( UART_DRV_T0PD_1ETU )
#define UART_USER_U2SCCON_CONV	( UART_DRV_CONV_DIRECT)
#define UART_USER_U2SCCON_TXRPT	( UART_DRV_TXRPT_ONCE  )
#define UART_USER_U2SCCON_GTCIE	( UART_DRV_GTCIE_DISABLE )
#define UART_USER_U2SCCON_WTCIE	( UART_DRV_WTCIE_DISABLE )
#define UART_USER_U2SCCON_BTCIE	( UART_DRV_BTCIE_DISABLE )
#define UART_USER_U2SCCON_TXRPTIE	( UART_DRV_TXRPTIE_DISABLE )
#define UART_USER_U2SCCON_RXRPTIE	( UART_DRV_RXRPTIE_DISABLE )
#define UART_USER_U2SCCON_GTCIF		( 0U )
#define UART_USER_U2SCCON_WTCIF		( 0U )
#define UART_USER_U2SCCON_BTCIF		( 0U )
#define UART_USER_U2SCCON_TXRPTIF	( 0U )
#define UART_USER_U2SCCON_RXRPTIF	( 0U )

/*----------------------------------------------------------------------------*/
/* U2UIRレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U2UIR_ABDIE	( 0U )
#define UART_USER_U2UIR_ABDIF	( 0U )
#define UART_USER_U2UIR_WUIF	( 0U )

/*----------------------------------------------------------------------------*/
/* U3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3CON_MODE       ( UART_DRV_MOD_ASYNC_8BIT )
#define UART_USER_U3CON_RXEN      ( UART_DRV_URXEN_ENABLE )
#define UART_USER_U3CON_TXEN      ( UART_DRV_UTXEN_ENABLE )
#define UART_USER_U3CON_ABDEN      ( UART_DRV_ABAUD_DISABLE )
#define UART_USER_U3CON_BRGS       ( UART_DRV_BRGH_HIGH_SPEED )
#define UART_USER_U3CON_SENDB      ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U3CON_BRKOVR     ( UART_DRV_BRKOVR_NOEFFECT )
#define UART_USER_U3CON_RXBIMD     ( UART_DRV_RXBIMD_LOW2HIGH )
#define UART_USER_U3CON_WUE        ( UART_DRV_WAKE_DISABLE )
#define UART_USER_U3CON_SIDL       ( UART_DRV_USIDL_RUN )
#define UART_USER_U3CON_ON         ( UART_DRV_UARTEN_ENABLE )

#define UART_USER_U3CON_FLO        ( UART_DRV_FLO_OFF )
#define UART_USER_U3CON_TXPOL      ( UART_DRV_TXPOL_NORMAL )
#define UART_USER_U3CON_C0EN       ( UART_DRV_C0EN_MODE0 )
#define UART_USER_U3CON_STP        ( UART_DRV_STP_1TX_1RX )
#define UART_USER_U3CON_RXPOL      ( UART_DRV_RXPOL_NORMAL )
#define UART_USER_U3CON_RUNOVF     ( UART_DRV_RUNOVF_LEGACY )
#define UART_USER_U3CON_HALFDPLX   ( UART_DRV_HALFDPLX_FULL )
#define UART_USER_U3CON_CLKSEL     ( UART_DRV_CLKSEL_STANDARD_SPEED )
#define UART_USER_U3CON_CLKMOD		( UART_DRV_CLKMOD_LAGACY )
#define UART_USER_U3CON_ACTIVE		( 0U )
#define UART_USER_U3CON_SLPEN      ( UART_DRV_SLPEN_CLOCK_OFF )

/*----------------------------------------------------------------------------*/
/* U3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3STAT_TXCIF		( 0U )
#define UART_USER_U3STAT_RXFOIF		( 0U )
#define UART_USER_U3STAT_RXBKIF		( 0U )
#define UART_USER_U3STAT_FERIF		( 0U )
#define UART_USER_U3STAT_CERIF		( 0U )
#define UART_USER_U3STAT_ABDOVIF	( 0U )
#define UART_USER_U3STAT_PERIF		( 0U )
#define UART_USER_U3STAT_TXMTIF		( 0U )

#define UART_USER_U3STAT_TXCIE		( UART_DRV_TXCIE_DISABLE )
#define UART_USER_U3STAT_RXFOIE		( 0U )
#define UART_USER_U3STAT_RXBKIE		( UART_DRV_RXBKIE_DISABLE )
#define UART_USER_U3STAT_FERIE		( UART_DRV_FERIE_DISABLE )
#define UART_USER_U3STAT_CERIE		( UART_DRV_CERIE_DISABLE )
#define UART_USER_U3STAT_ABDOVIE	( UART_DRV_ABDOVE_DISABLE )
#define UART_USER_U3STAT_PERIE		( UART_DRV_PERIE_DISABLE )
#define UART_USER_U3STAT_TXMTIE		( 0U )
#define UART_USER_U3STAT_RXBF		( 0U )
#define UART_USER_U3STAT_RXBE		( 0U )
#define UART_USER_U3STAT_XON		( 0U )
#define UART_USER_U3STAT_RCIDL		( 0U )
#define UART_USER_U3STAT_TXBF		( 0U )
#define UART_USER_U3STAT_TXBE		( 0U )
#define UART_USER_U3STAT_STPMD      ( UART_DRV_STPMD_FIRST_STOPBIT )
#define UART_USER_U3STAT_TXWRE		( 0U )
#define UART_USER_U3STAT_RXWM		( 0U )
#define UART_USER_U3STAT_TXWM		( 0U )
/*----------------------------------------------------------------------------*/
/* U3BRGレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3BRG				115200L
/*----------------------------------------------------------------------------*/
/* U3RXBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3RXB				( 0U )
/*----------------------------------------------------------------------------*/
/* U3TXBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3TXB_TXB		( 0U )
#define UART_USER_U3TXB_LAST	( 0U )

/*----------------------------------------------------------------------------*/
/* U3PAレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3PA_P1		( 0U )
#define UART_USER_U3PA_P2		( 0U )
#define UART_USER_U3PA_WIP		( 0U )

/*----------------------------------------------------------------------------*/
/* U3PBレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3PB_P3		( 0U )
#define UART_USER_U3PB_WIP		( 0U )
/*----------------------------------------------------------------------------*/
/* U3CHKレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3CHK_TXCHK	( 0x0000u )
#define UART_USER_U3CHK_RXCHK   ( 0x0000u )
/*----------------------------------------------------------------------------*/
/* U3SCCONレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3SCCON_PRTCL	( UART_DRV_PRTCL_T0 )
#define UART_USER_U3SCCON_T0PD	( UART_DRV_T0PD_1ETU )
#define UART_USER_U3SCCON_CONV	( UART_DRV_CONV_DIRECT)
#define UART_USER_U3SCCON_TXRPT	( UART_DRV_TXRPT_ONCE  )
#define UART_USER_U3SCCON_GTCIE	( UART_DRV_GTCIE_DISABLE )
#define UART_USER_U3SCCON_WTCIE	( UART_DRV_WTCIE_DISABLE )
#define UART_USER_U3SCCON_BTCIE	( UART_DRV_BTCIE_DISABLE )
#define UART_USER_U3SCCON_TXRPTIE	( UART_DRV_TXRPTIE_DISABLE )
#define UART_USER_U3SCCON_RXRPTIE	( UART_DRV_RXRPTIE_DISABLE )
#define UART_USER_U3SCCON_GTCIF		( 0U )
#define UART_USER_U3SCCON_WTCIF		( 0U )
#define UART_USER_U3SCCON_BTCIF		( 0U )
#define UART_USER_U3SCCON_TXRPTIF	( 0U )
#define UART_USER_U3SCCON_RXRPTIF	( 0U )

/*----------------------------------------------------------------------------*/
/* U3UIRレジスタ */
/*----------------------------------------------------------------------------*/
#define UART_USER_U3UIR_ABDIE	( 0U )
#define UART_USER_U3UIR_ABDIF	( 0U )
#define UART_USER_U3UIR_WUIF	( 0U )
/*----------------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------------*/
/*【PROTO】プロトタイプ宣言*/
/*----------------------------------------------------------------------------------*/
void vdg_Uart_PC_Clear_TxData(void);
void vdg_Uart_PC_Clear_RxData(void);
void vdg_Uart_PC_Enque_TxData(_c1 *c1a_Str);
void vdg_Uart_PC_Deque_TxData(void);
void vdg_Uart_PC_Enque_RxData(void);
_u2 u2g_Uart_PC_Get_RxData_Num(void);
_c1 c1g_Uart_PC_Deque_RxByte(_c1 *c1pa_Str);
_c1 c1g_Uart_PC_Deque_RxStr(_c1 *c1pa_Str,_u2 u2a_Length);
void vdg_Uart_PC_Send_Message(_c1 *c1a_Str);
void vdg_Uart_PC_Timing_Handler(void);
#endif	/* ADC_USER_H */

