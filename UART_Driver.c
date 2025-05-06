/*----------------------------------------------------------------------------*/
/*【FILE】UARTに関するドライバ関数*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include <xc.h>
#include "BoardSupportPackage.h"
#include "init_fix.h"
#include "typedef.h"
#include "uart_driver.h"
#include "uart_user.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UART1_Set_Register(void)
* @brief        UART1レジスタを初期化します
* @param
* @return
* @detail 
 */
/*----------------------------------------------------------------------------*/
void vdg_UART1_Set_Register(void)
{
#if ( PMD_U1MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* U1CONレジスタ */
	/*-----------------------------------------------------------------------*/
		U1CON = 
			( UART_USER_U1CON_MODE << _U1CON_MODE_POSITION ) |
			( UART_USER_U1CON_RXEN << _U1CON_RXEN_POSITION ) |
			( UART_USER_U1CON_TXEN << _U1CON_TXEN_POSITION ) |
			( UART_USER_U1CON_ABDEN << _U1CON_ABDEN_POSITION ) |
			( UART_USER_U1CON_BRGS << _U1CON_BRGS_POSITION ) |
			( UART_USER_U1CON_SENDB << _U1CON_SENDB_POSITION ) |
			( UART_USER_U1CON_BRKOVR << _U1CON_BRKOVR_POSITION ) |
			( UART_USER_U1CON_RXBIMD << _U1CON_RXBIMD_POSITION ) |
			( UART_USER_U1CON_WUE << _U1CON_WUE_POSITION ) |
			( UART_USER_U1CON_SIDL << _U1CON_SIDL_POSITION ) |
			( UART_USER_U1CON_ON << _U1CON_ON_POSITION ) |
			( UART_USER_U1CON_FLO << _U1CON_FLO_POSITION ) |
			( UART_USER_U1CON_TXPOL << _U1CON_TXPOL_POSITION ) |
			( UART_USER_U1CON_C0EN << _U1CON_C0EN_POSITION ) |
			( UART_USER_U1CON_STP << _U1CON_STP_POSITION ) |
			( UART_USER_U1CON_RXPOL << _U1CON_RXPOL_POSITION ) |
			( UART_USER_U1CON_RUNOVF << _U1CON_RUNOVF_POSITION ) |
			( UART_USER_U1CON_HALFDPLX << _U1CON_HALFDPLX_POSITION ) |
			( UART_USER_U1CON_CLKSEL << _U1CON_CLKSEL_POSITION ) |
			( UART_USER_U1CON_CLKMOD << _U1CON_CLKMOD_POSITION ) |
			( UART_USER_U1CON_ACTIVE << _U1CON_ACTIVE_POSITION ) |
			( UART_USER_U1CON_SLPEN << _U1CON_SLPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			U1CONbits.MODE = UART_USER_U1CON_MODE;
			U1CONbits.RXEN = UART_USER_U1CON_RXEN;
			U1CONbits.TXEN = UART_USER_U1CON_TXEN;
			U1CONbits.ABDEN = UART_USER_U1CON_ABDEN;
			U1CONbits.BRGS = UART_USER_U1CON_BRGS;
			U1CONbits.SENDB = UART_USER_U1CON_SENDB;
			U1CONbits.BRKOVR = UART_USER_U1CON_BRKOVR;
			U1CONbits.RXBIMD = UART_USER_U1CON_RXBIMD;
			U1CONbits.WUE = UART_USER_U1CON_WUE;
			U1CONbits.SIDL = UART_USER_U1CON_SIDL;
			U1CONbits.ON = UART_USER_U1CON_ON;
			U1CONbits.FLO = UART_USER_U1CON_FLO;
			U1CONbits.TXPOL = UART_USER_U1CON_TXPOL;
			U1CONbits.C0EN = UART_USER_U1CON_C0EN;
			U1CONbits.STP = UART_USER_U1CON_STP;
			U1CONbits.RXPOL = UART_USER_U1CON_RXPOL;
			U1CONbits.RUNOVF = UART_USER_U1CON_RUNOVF;
			U1CONbits.HALFDPLX = UART_USER_U1CON_HALFDPLX;
			U1CONbits.CLKSEL = UART_USER_U1CON_CLKSEL;
			U1CONbits.CLKMOD = UART_USER_U1CON_CLKMOD;
			U1CONbits.ACTIVE = UART_USER_U1CON_ACTIVE;
			U1CONbits.SLPEN = UART_USER_U1CON_SLPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1STATレジスタ */
	/*-----------------------------------------------------------------------*/
		U1STAT = 
			( UART_USER_U1STAT_TXCIF << _U1STAT_TXCIF_POSITION ) |
			( UART_USER_U1STAT_RXFOIF << _U1STAT_RXFOIF_POSITION ) |
			( UART_USER_U1STAT_RXBKIF << _U1STAT_RXBKIF_POSITION ) |
			( UART_USER_U1STAT_FERIF << _U1STAT_FERIF_POSITION ) |
			( UART_USER_U1STAT_CERIF << _U1STAT_CERIF_POSITION ) |
			( UART_USER_U1STAT_ABDOVIF << _U1STAT_ABDOVIF_POSITION ) |
			( UART_USER_U1STAT_PERIF << _U1STAT_PERIF_POSITION ) |
			( UART_USER_U1STAT_TXMTIF << _U1STAT_TXMTIF_POSITION ) |
			( UART_USER_U1STAT_TXCIE << _U1STAT_TXCIE_POSITION ) |
			( UART_USER_U1STAT_RXFOIE << _U1STAT_RXFOIE_POSITION ) |
			( UART_USER_U1STAT_RXBKIE << _U1STAT_RXBKIE_POSITION ) |
			( UART_USER_U1STAT_FERIE << _U1STAT_FERIE_POSITION ) |
			( UART_USER_U1STAT_CERIE << _U1STAT_CERIE_POSITION ) |
			( UART_USER_U1STAT_ABDOVIE << _U1STAT_ABDOVIE_POSITION ) |
			( UART_USER_U1STAT_PERIE << _U1STAT_PERIE_POSITION ) |
			( UART_USER_U1STAT_TXMTIE << _U1STAT_TXMTIE_POSITION ) |
			( UART_USER_U1STAT_RXBF << _U1STAT_RXBF_POSITION ) |
			( UART_USER_U1STAT_RXBE << _U1STAT_RXBE_POSITION ) |
			( UART_USER_U1STAT_XON << _U1STAT_XON_POSITION ) |
			( UART_USER_U1STAT_RCIDL << _U1STAT_RCIDL_POSITION ) |
			( UART_USER_U1STAT_TXBF << _U1STAT_TXBF_POSITION ) |
			( UART_USER_U1STAT_TXBE << _U1STAT_TXBE_POSITION ) |
			( UART_USER_U1STAT_STPMD << _U1STAT_STPMD_POSITION ) |
			( UART_USER_U1STAT_TXWRE << _U1STAT_TXWRE_POSITION ) |
			( UART_USER_U1STAT_RXWM << _U1STAT_RXWM_POSITION ) |
			( UART_USER_U1STAT_TXWM << _U1STAT_TXWM_POSITION ) ;
		#ifdef DEF_BITNAME
			U1STATbits.TXCIF = UART_USER_U1STAT_TXCIF;
			U1STATbits.RXFOIF = UART_USER_U1STAT_RXFOIF;
			U1STATbits.RXBKIF = UART_USER_U1STAT_RXBKIF;
			U1STATbits.FERIF = UART_USER_U1STAT_FERIF;
			U1STATbits.CERIF = UART_USER_U1STAT_CERIF;
			U1STATbits.ABDOVIF = UART_USER_U1STAT_ABDOVIF;
			U1STATbits.PERIF = UART_USER_U1STAT_PERIF;
			U1STATbits.TXMTIF = UART_USER_U1STAT_TXMTIF;
			U1STATbits.TXCIE = UART_USER_U1STAT_TXCIE;
			U1STATbits.RXFOIE = UART_USER_U1STAT_RXFOIE;
			U1STATbits.RXBKIE = UART_USER_U1STAT_RXBKIE;
			U1STATbits.FERIE = UART_USER_U1STAT_FERIE;
			U1STATbits.CERIE = UART_USER_U1STAT_CERIE;
			U1STATbits.ABDOVIE = UART_USER_U1STAT_ABDOVIE;
			U1STATbits.PERIE = UART_USER_U1STAT_PERIE;
			U1STATbits.TXMTIE = UART_USER_U1STAT_TXMTIE;
			U1STATbits.RXBF = UART_USER_U1STAT_RXBF;
			U1STATbits.RXBE = UART_USER_U1STAT_RXBE;
			U1STATbits.XON = UART_USER_U1STAT_XON;
			U1STATbits.RCIDL = UART_USER_U1STAT_RCIDL;
			U1STATbits.TXBF = UART_USER_U1STAT_TXBF;
			U1STATbits.TXBE = UART_USER_U1STAT_TXBE;
			U1STATbits.STPMD = UART_USER_U1STAT_STPMD;
			U1STATbits.TXWRE = UART_USER_U1STAT_TXWRE;
			U1STATbits.RXWM = UART_USER_U1STAT_RXWM;
			U1STATbits.TXWM = UART_USER_U1STAT_TXWM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		U1BRG = UART_USER_U1BRG;

	/*-----------------------------------------------------------------------*/
	/* U1RXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1RXB = UART_USER_U1RXB;

	/*-----------------------------------------------------------------------*/
	/* U1TXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1TXB = 
			( UART_USER_U1TXB_TXB << _U1TXB_TXB_POSITION ) |
			( UART_USER_U1TXB_LAST << _U1TXB_LAST_POSITION ) ;
		#ifdef DEF_BITNAME
			U1TXBbits.TXB = UART_USER_U1TXB_TXB;
			U1TXBbits.LAST = UART_USER_U1TXB_LAST;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1PAレジスタ */
	/*-----------------------------------------------------------------------*/
		U1PA = 
			( UART_USER_U1PA_P1 << _U1PA_P1_POSITION ) |
			( UART_USER_U1PA_P2 << _U1PA_P2_POSITION ) |
			( UART_USER_U1PA_WIP << _U1PA_WIP_POSITION ) ;
		#ifdef DEF_BITNAME
			U1PAbits.P1 = UART_USER_U1PA_P1;
			U1PAbits.P2 = UART_USER_U1PA_P2;
			U1PAbits.WIP = UART_USER_U1PA_WIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1PBレジスタ */
	/*-----------------------------------------------------------------------*/
		U1PB = 
			( UART_USER_U1PB_P3 << _U1PB_P3_POSITION ) |
			( UART_USER_U1PB_WIP << _U1PB_WIP_POSITION ) ;
		#ifdef DEF_BITNAME
			U1PBbits.P3 = UART_USER_U1PB_P3;
			U1PBbits.WIP = UART_USER_U1PB_WIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1CHKレジスタ */
	/*-----------------------------------------------------------------------*/
		U1CHK = 
			( UART_USER_U1CHK_TXCHK << _U1CHK_TXCHK_POSITION ) |
			( UART_USER_U1CHK_RXCHK << _U1CHK_RXCHK_POSITION ) ;
		#ifdef DEF_BITNAME
			U1CHKbits.TXCHK = UART_USER_U1CHK_TXCHK;
			U1CHKbits.RXCHK = UART_USER_U1CHK_RXCHK;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1SCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		U1SCCON = 
			( UART_USER_U1SCCON_PRTCL << _U1SCCON_PRTCL_POSITION ) |
			( UART_USER_U1SCCON_T0PD << _U1SCCON_T0PD_POSITION ) |
			( UART_USER_U1SCCON_CONV << _U1SCCON_CONV_POSITION ) |
			( UART_USER_U1SCCON_TXRPT << _U1SCCON_TXRPT_POSITION ) |
			( UART_USER_U1SCCON_GTCIE << _U1SCCON_GTCIE_POSITION ) |
			( UART_USER_U1SCCON_WTCIE << _U1SCCON_WTCIE_POSITION ) |
			( UART_USER_U1SCCON_BTCIE << _U1SCCON_BTCIE_POSITION ) |
			( UART_USER_U1SCCON_TXRPTIE << _U1SCCON_TXRPTIE_POSITION ) |
			( UART_USER_U1SCCON_RXRPTIE << _U1SCCON_RXRPTIE_POSITION ) |
			( UART_USER_U1SCCON_GTCIF << _U1SCCON_GTCIF_POSITION ) |
			( UART_USER_U1SCCON_WTCIF << _U1SCCON_WTCIF_POSITION ) |
			( UART_USER_U1SCCON_BTCIF << _U1SCCON_BTCIF_POSITION ) |
			( UART_USER_U1SCCON_TXRPTIF << _U1SCCON_TXRPTIF_POSITION ) |
			( UART_USER_U1SCCON_RXRPTIF << _U1SCCON_RXRPTIF_POSITION ) ;
		#ifdef DEF_BITNAME
			U1SCCONbits.PRTCL = UART_USER_U1SCCON_PRTCL;
			U1SCCONbits.T0PD = UART_USER_U1SCCON_T0PD;
			U1SCCONbits.CONV = UART_USER_U1SCCON_CONV;
			U1SCCONbits.TXRPT = UART_USER_U1SCCON_TXRPT;
			U1SCCONbits.GTCIE = UART_USER_U1SCCON_GTCIE;
			U1SCCONbits.WTCIE = UART_USER_U1SCCON_WTCIE;
			U1SCCONbits.BTCIE = UART_USER_U1SCCON_BTCIE;
			U1SCCONbits.TXRPTIE = UART_USER_U1SCCON_TXRPTIE;
			U1SCCONbits.RXRPTIE = UART_USER_U1SCCON_RXRPTIE;
			U1SCCONbits.GTCIF = UART_USER_U1SCCON_GTCIF;
			U1SCCONbits.WTCIF = UART_USER_U1SCCON_WTCIF;
			U1SCCONbits.BTCIF = UART_USER_U1SCCON_BTCIF;
			U1SCCONbits.TXRPTIF = UART_USER_U1SCCON_TXRPTIF;
			U1SCCONbits.RXRPTIF = UART_USER_U1SCCON_RXRPTIF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U1UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		U1UIR = 
			( UART_USER_U1UIR_ABDIE << _U1UIR_ABDIE_POSITION ) |
			( UART_USER_U1UIR_ABDIF << _U1UIR_ABDIF_POSITION ) |
			( UART_USER_U1UIR_WUIF << _U1UIR_WUIF_POSITION ) ;
		#ifdef DEF_BITNAME
			U1UIRbits.ABDIE = UART_USER_U1UIR_ABDIE;
			U1UIRbits.ABDIF = UART_USER_U1UIR_ABDIF;
			U1UIRbits.WUIF = UART_USER_U1UIR_WUIF;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UART2_Set_Register(void) 
* @brief        UART2レジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_UART2_Set_Register(void)
{
#if ( PMD_U2MD == PMD_MODULE_ENABLE ) 	
	/*-----------------------------------------------------------------------*/
	/* U2CONレジスタ */
	/*-----------------------------------------------------------------------*/
		U2CON = 
			( UART_USER_U2CON_MODE << _U2CON_MODE_POSITION ) |
			( UART_USER_U2CON_RXEN << _U2CON_RXEN_POSITION ) |
			( UART_USER_U2CON_TXEN << _U2CON_TXEN_POSITION ) |
			( UART_USER_U2CON_ABDEN << _U2CON_ABDEN_POSITION ) |
			( UART_USER_U2CON_BRGS << _U2CON_BRGS_POSITION ) |
			( UART_USER_U2CON_SENDB << _U2CON_SENDB_POSITION ) |
			( UART_USER_U2CON_BRKOVR << _U2CON_BRKOVR_POSITION ) |
			( UART_USER_U2CON_RXBIMD << _U2CON_RXBIMD_POSITION ) |
			( UART_USER_U2CON_WUE << _U2CON_WUE_POSITION ) |
			( UART_USER_U2CON_SIDL << _U2CON_SIDL_POSITION ) |
			( UART_USER_U2CON_ON << _U2CON_ON_POSITION ) |
			( UART_USER_U2CON_FLO << _U2CON_FLO_POSITION ) |
			( UART_USER_U2CON_TXPOL << _U2CON_TXPOL_POSITION ) |
			( UART_USER_U2CON_C0EN << _U2CON_C0EN_POSITION ) |
			( UART_USER_U2CON_STP << _U2CON_STP_POSITION ) |
			( UART_USER_U2CON_RXPOL << _U2CON_RXPOL_POSITION ) |
			( UART_USER_U2CON_RUNOVF << _U2CON_RUNOVF_POSITION ) |
			( UART_USER_U2CON_HALFDPLX << _U2CON_HALFDPLX_POSITION ) |
			( UART_USER_U2CON_CLKSEL << _U2CON_CLKSEL_POSITION ) |
			( UART_USER_U2CON_CLKMOD << _U2CON_CLKMOD_POSITION ) |
			( UART_USER_U2CON_ACTIVE << _U2CON_ACTIVE_POSITION ) |
			( UART_USER_U2CON_SLPEN << _U2CON_SLPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			U2CONbits.MODE = UART_USER_U2CON_MODE;
			U2CONbits.RXEN = UART_USER_U2CON_RXEN;
			U2CONbits.TXEN = UART_USER_U2CON_TXEN;
			U2CONbits.ABDEN = UART_USER_U2CON_ABDEN;
			U2CONbits.BRGS = UART_USER_U2CON_BRGS;
			U2CONbits.SENDB = UART_USER_U2CON_SENDB;
			U2CONbits.BRKOVR = UART_USER_U2CON_BRKOVR;
			U2CONbits.RXBIMD = UART_USER_U2CON_RXBIMD;
			U2CONbits.WUE = UART_USER_U2CON_WUE;
			U2CONbits.SIDL = UART_USER_U2CON_SIDL;
			U2CONbits.ON = UART_USER_U2CON_ON;
			U2CONbits.FLO = UART_USER_U2CON_FLO;
			U2CONbits.TXPOL = UART_USER_U2CON_TXPOL;
			U2CONbits.C0EN = UART_USER_U2CON_C0EN;
			U2CONbits.STP = UART_USER_U2CON_STP;
			U2CONbits.RXPOL = UART_USER_U2CON_RXPOL;
			U2CONbits.RUNOVF = UART_USER_U2CON_RUNOVF;
			U2CONbits.HALFDPLX = UART_USER_U2CON_HALFDPLX;
			U2CONbits.CLKSEL = UART_USER_U2CON_CLKSEL;
			U2CONbits.CLKMOD = UART_USER_U2CON_CLKMOD;
			U2CONbits.ACTIVE = UART_USER_U2CON_ACTIVE;
			U2CONbits.SLPEN = UART_USER_U2CON_SLPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2STATレジスタ */
	/*-----------------------------------------------------------------------*/
		U2STAT = 
			( UART_USER_U2STAT_TXCIF << _U2STAT_TXCIF_POSITION ) |
			( UART_USER_U2STAT_RXFOIF << _U2STAT_RXFOIF_POSITION ) |
			( UART_USER_U2STAT_RXBKIF << _U2STAT_RXBKIF_POSITION ) |
			( UART_USER_U2STAT_FERIF << _U2STAT_FERIF_POSITION ) |
			( UART_USER_U2STAT_CERIF << _U2STAT_CERIF_POSITION ) |
			( UART_USER_U2STAT_ABDOVIF << _U2STAT_ABDOVIF_POSITION ) |
			( UART_USER_U2STAT_PERIF << _U2STAT_PERIF_POSITION ) |
			( UART_USER_U2STAT_TXMTIF << _U2STAT_TXMTIF_POSITION ) |
			( UART_USER_U2STAT_TXCIE << _U2STAT_TXCIE_POSITION ) |
			( UART_USER_U2STAT_RXFOIE << _U2STAT_RXFOIE_POSITION ) |
			( UART_USER_U2STAT_RXBKIE << _U2STAT_RXBKIE_POSITION ) |
			( UART_USER_U2STAT_FERIE << _U2STAT_FERIE_POSITION ) |
			( UART_USER_U2STAT_CERIE << _U2STAT_CERIE_POSITION ) |
			( UART_USER_U2STAT_ABDOVIE << _U2STAT_ABDOVIE_POSITION ) |
			( UART_USER_U2STAT_PERIE << _U2STAT_PERIE_POSITION ) |
			( UART_USER_U2STAT_TXMTIE << _U2STAT_TXMTIE_POSITION ) |
			( UART_USER_U2STAT_RXBF << _U2STAT_RXBF_POSITION ) |
			( UART_USER_U2STAT_RXBE << _U2STAT_RXBE_POSITION ) |
			( UART_USER_U2STAT_XON << _U2STAT_XON_POSITION ) |
			( UART_USER_U2STAT_RCIDL << _U2STAT_RCIDL_POSITION ) |
			( UART_USER_U2STAT_TXBF << _U2STAT_TXBF_POSITION ) |
			( UART_USER_U2STAT_TXBE << _U2STAT_TXBE_POSITION ) |
			( UART_USER_U2STAT_STPMD << _U2STAT_STPMD_POSITION ) |
			( UART_USER_U2STAT_TXWRE << _U2STAT_TXWRE_POSITION ) |
			( UART_USER_U2STAT_RXWM << _U2STAT_RXWM_POSITION ) |
			( UART_USER_U2STAT_TXWM << _U2STAT_TXWM_POSITION ) ;
		#ifdef DEF_BITNAME
			U2STATbits.TXCIF = UART_USER_U2STAT_TXCIF;
			U2STATbits.RXFOIF = UART_USER_U2STAT_RXFOIF;
			U2STATbits.RXBKIF = UART_USER_U2STAT_RXBKIF;
			U2STATbits.FERIF = UART_USER_U2STAT_FERIF;
			U2STATbits.CERIF = UART_USER_U2STAT_CERIF;
			U2STATbits.ABDOVIF = UART_USER_U2STAT_ABDOVIF;
			U2STATbits.PERIF = UART_USER_U2STAT_PERIF;
			U2STATbits.TXMTIF = UART_USER_U2STAT_TXMTIF;
			U2STATbits.TXCIE = UART_USER_U2STAT_TXCIE;
			U2STATbits.RXFOIE = UART_USER_U2STAT_RXFOIE;
			U2STATbits.RXBKIE = UART_USER_U2STAT_RXBKIE;
			U2STATbits.FERIE = UART_USER_U2STAT_FERIE;
			U2STATbits.CERIE = UART_USER_U2STAT_CERIE;
			U2STATbits.ABDOVIE = UART_USER_U2STAT_ABDOVIE;
			U2STATbits.PERIE = UART_USER_U2STAT_PERIE;
			U2STATbits.TXMTIE = UART_USER_U2STAT_TXMTIE;
			U2STATbits.RXBF = UART_USER_U2STAT_RXBF;
			U2STATbits.RXBE = UART_USER_U2STAT_RXBE;
			U2STATbits.XON = UART_USER_U2STAT_XON;
			U2STATbits.RCIDL = UART_USER_U2STAT_RCIDL;
			U2STATbits.TXBF = UART_USER_U2STAT_TXBF;
			U2STATbits.TXBE = UART_USER_U2STAT_TXBE;
			U2STATbits.STPMD = UART_USER_U2STAT_STPMD;
			U2STATbits.TXWRE = UART_USER_U2STAT_TXWRE;
			U2STATbits.RXWM = UART_USER_U2STAT_RXWM;
			U2STATbits.TXWM = UART_USER_U2STAT_TXWM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		U2BRG = UART_USER_U2BRG ;
	

	/*-----------------------------------------------------------------------*/
	/* U2RXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U2RXB =  UART_USER_U2RXB;

	/*-----------------------------------------------------------------------*/
	/* U2TXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U2TXB = 
			( UART_USER_U2TXB_TXB << _U2TXB_TXB_POSITION ) |
			( UART_USER_U2TXB_LAST << _U2TXB_LAST_POSITION ) ;
		#ifdef DEF_BITNAME
			U2TXBbits.TXB = UART_USER_U2TXB_TXB;
			U2TXBbits.LAST = UART_USER_U2TXB_LAST;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2PAレジスタ */
	/*-----------------------------------------------------------------------*/
		U2PA = 
			( UART_USER_U2PA_P1 << _U2PA_P1_POSITION ) |
			( UART_USER_U2PA_P2 << _U2PA_P2_POSITION ) |
			( UART_USER_U2PA_WIP << _U2PA_WIP_POSITION ) ;
		#ifdef DEF_BITNAME
			U2PAbits.P1 = UART_USER_U2PA_P1;
			U2PAbits.P2 = UART_USER_U2PA_P2;
			U2PAbits.WIP = UART_USER_U2PA_WIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2PBレジスタ */
	/*-----------------------------------------------------------------------*/
		U2PB = 
			( UART_USER_U2PB_P3 << _U2PB_P3_POSITION ) |
			( UART_USER_U2PB_WIP << _U2PB_WIP_POSITION ) ;
		#ifdef DEF_BITNAME
			U2PBbits.P3 = UART_USER_U2PB_P3;
			U2PBbits.WIP = UART_USER_U2PB_WIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2CHKレジスタ */
	/*-----------------------------------------------------------------------*/
		U2CHK = 
			( UART_USER_U2CHK_TXCHK << _U2CHK_TXCHK_POSITION ) |
			( UART_USER_U2CHK_RXCHK << _U2CHK_RXCHK_POSITION ) ;
		#ifdef DEF_BITNAME
			U2CHKbits.TXCHK = UART_USER_U2CHK_TXCHK;
			U2CHKbits.RXCHK = UART_USER_U2CHK_RXCHK;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2SCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		U2SCCON = 
			( UART_USER_U2SCCON_PRTCL << _U2SCCON_PRTCL_POSITION ) |
			( UART_USER_U2SCCON_T0PD << _U2SCCON_T0PD_POSITION ) |
			( UART_USER_U2SCCON_CONV << _U2SCCON_CONV_POSITION ) |
			( UART_USER_U2SCCON_TXRPT << _U2SCCON_TXRPT_POSITION ) |
			( UART_USER_U2SCCON_GTCIE << _U2SCCON_GTCIE_POSITION ) |
			( UART_USER_U2SCCON_WTCIE << _U2SCCON_WTCIE_POSITION ) |
			( UART_USER_U2SCCON_BTCIE << _U2SCCON_BTCIE_POSITION ) |
			( UART_USER_U2SCCON_TXRPTIE << _U2SCCON_TXRPTIE_POSITION ) |
			( UART_USER_U2SCCON_RXRPTIE << _U2SCCON_RXRPTIE_POSITION ) |
			( UART_USER_U2SCCON_GTCIF << _U2SCCON_GTCIF_POSITION ) |
			( UART_USER_U2SCCON_WTCIF << _U2SCCON_WTCIF_POSITION ) |
			( UART_USER_U2SCCON_BTCIF << _U2SCCON_BTCIF_POSITION ) |
			( UART_USER_U2SCCON_TXRPTIF << _U2SCCON_TXRPTIF_POSITION ) |
			( UART_USER_U2SCCON_RXRPTIF << _U2SCCON_RXRPTIF_POSITION ) ;
		#ifdef DEF_BITNAME
			U2SCCONbits.PRTCL = UART_USER_U2SCCON_PRTCL;
			U2SCCONbits.T0PD = UART_USER_U2SCCON_T0PD;
			U2SCCONbits.CONV = UART_USER_U2SCCON_CONV;
			U2SCCONbits.TXRPT = UART_USER_U2SCCON_TXRPT;
			U2SCCONbits.GTCIE = UART_USER_U2SCCON_GTCIE;
			U2SCCONbits.WTCIE = UART_USER_U2SCCON_WTCIE;
			U2SCCONbits.BTCIE = UART_USER_U2SCCON_BTCIE;
			U2SCCONbits.TXRPTIE = UART_USER_U2SCCON_TXRPTIE;
			U2SCCONbits.RXRPTIE = UART_USER_U2SCCON_RXRPTIE;
			U2SCCONbits.GTCIF = UART_USER_U2SCCON_GTCIF;
			U2SCCONbits.WTCIF = UART_USER_U2SCCON_WTCIF;
			U2SCCONbits.BTCIF = UART_USER_U2SCCON_BTCIF;
			U2SCCONbits.TXRPTIF = UART_USER_U2SCCON_TXRPTIF;
			U2SCCONbits.RXRPTIF = UART_USER_U2SCCON_RXRPTIF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U2UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		U2UIR = 
			( UART_USER_U2UIR_ABDIE << _U2UIR_ABDIE_POSITION ) |
			( UART_USER_U2UIR_ABDIF << _U2UIR_ABDIF_POSITION ) |
			( UART_USER_U2UIR_WUIF << _U2UIR_WUIF_POSITION ) ;
		#ifdef DEF_BITNAME
			U2UIRbits.ABDIE = UART_USER_U2UIR_ABDIE;
			U2UIRbits.ABDIF = UART_USER_U2UIR_ABDIF;
			U2UIRbits.WUIF = UART_USER_U2UIR_WUIF;
		#endif 
#endif		

}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UART3_Set_Register(void)
* @brief        UART3レジスタを初期化します
* @param
* @return
* @detail
*/
/*----------------------------------------------------------------------------*/
void vdg_UART3_Set_Register(void)
{
#if ( PMD_U3MD == PMD_MODULE_ENABLE ) 
	/*-----------------------------------------------------------------------*/
	/* U3CONレジスタ */
	/*-----------------------------------------------------------------------*/
		U3CON = 
			( UART_USER_U3CON_MODE << _U3CON_MODE_POSITION ) |
			( UART_USER_U3CON_RXEN << _U3CON_RXEN_POSITION ) |
			( UART_USER_U3CON_TXEN << _U3CON_TXEN_POSITION ) |
			( UART_USER_U3CON_ABDEN << _U3CON_ABDEN_POSITION ) |
			( UART_USER_U3CON_BRGS << _U3CON_BRGS_POSITION ) |
			( UART_USER_U3CON_SENDB << _U3CON_SENDB_POSITION ) |
			( UART_USER_U3CON_BRKOVR << _U3CON_BRKOVR_POSITION ) |
			( UART_USER_U3CON_RXBIMD << _U3CON_RXBIMD_POSITION ) |
			( UART_USER_U3CON_WUE << _U3CON_WUE_POSITION ) |
			( UART_USER_U3CON_SIDL << _U3CON_SIDL_POSITION ) |
			( UART_USER_U3CON_ON << _U3CON_ON_POSITION ) |
			( UART_USER_U3CON_FLO << _U3CON_FLO_POSITION ) |
			( UART_USER_U3CON_TXPOL << _U3CON_TXPOL_POSITION ) |
			( UART_USER_U3CON_C0EN << _U3CON_C0EN_POSITION ) |
			( UART_USER_U3CON_STP << _U3CON_STP_POSITION ) |
			( UART_USER_U3CON_RXPOL << _U3CON_RXPOL_POSITION ) |
			( UART_USER_U3CON_RUNOVF << _U3CON_RUNOVF_POSITION ) |
			( UART_USER_U3CON_HALFDPLX << _U3CON_HALFDPLX_POSITION ) |
			( UART_USER_U3CON_CLKSEL << _U3CON_CLKSEL_POSITION ) |
			( UART_USER_U3CON_CLKMOD << _U3CON_CLKMOD_POSITION ) |
			( UART_USER_U3CON_ACTIVE << _U3CON_ACTIVE_POSITION ) |
			( UART_USER_U3CON_SLPEN << _U3CON_SLPEN_POSITION ) ;
		#ifdef DEF_BITNAME
			U3CONbits.MODE = UART_USER_U3CON_MODE;
			U3CONbits.RXEN = UART_USER_U3CON_RXEN;
			U3CONbits.TXEN = UART_USER_U3CON_TXEN;
			U3CONbits.ABDEN = UART_USER_U3CON_ABDEN;
			U3CONbits.BRGS = UART_USER_U3CON_BRGS;
			U3CONbits.SENDB = UART_USER_U3CON_SENDB;
			U3CONbits.BRKOVR = UART_USER_U3CON_BRKOVR;
			U3CONbits.RXBIMD = UART_USER_U3CON_RXBIMD;
			U3CONbits.WUE = UART_USER_U3CON_WUE;
			U3CONbits.SIDL = UART_USER_U3CON_SIDL;
			U3CONbits.ON = UART_USER_U3CON_ON;
			U3CONbits.FLO = UART_USER_U3CON_FLO;
			U3CONbits.TXPOL = UART_USER_U3CON_TXPOL;
			U3CONbits.C0EN = UART_USER_U3CON_C0EN;
			U3CONbits.STP = UART_USER_U3CON_STP;
			U3CONbits.RXPOL = UART_USER_U3CON_RXPOL;
			U3CONbits.RUNOVF = UART_USER_U3CON_RUNOVF;
			U3CONbits.HALFDPLX = UART_USER_U3CON_HALFDPLX;
			U3CONbits.CLKSEL = UART_USER_U3CON_CLKSEL;
			U3CONbits.CLKMOD = UART_USER_U3CON_CLKMOD;
			U3CONbits.ACTIVE = UART_USER_U3CON_ACTIVE;
			U3CONbits.SLPEN = UART_USER_U3CON_SLPEN;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3STATレジスタ */
	/*-----------------------------------------------------------------------*/
		U3STAT = 
			( UART_USER_U3STAT_TXCIF << _U3STAT_TXCIF_POSITION ) |
			( UART_USER_U3STAT_RXFOIF << _U3STAT_RXFOIF_POSITION ) |
			( UART_USER_U3STAT_RXBKIF << _U3STAT_RXBKIF_POSITION ) |
			( UART_USER_U3STAT_FERIF << _U3STAT_FERIF_POSITION ) |
			( UART_USER_U3STAT_CERIF << _U3STAT_CERIF_POSITION ) |
			( UART_USER_U3STAT_ABDOVIF << _U3STAT_ABDOVIF_POSITION ) |
			( UART_USER_U3STAT_PERIF << _U3STAT_PERIF_POSITION ) |
			( UART_USER_U3STAT_TXMTIF << _U3STAT_TXMTIF_POSITION ) |
			( UART_USER_U3STAT_TXCIE << _U3STAT_TXCIE_POSITION ) |
			( UART_USER_U3STAT_RXFOIE << _U3STAT_RXFOIE_POSITION ) |
			( UART_USER_U3STAT_RXBKIE << _U3STAT_RXBKIE_POSITION ) |
			( UART_USER_U3STAT_FERIE << _U3STAT_FERIE_POSITION ) |
			( UART_USER_U3STAT_CERIE << _U3STAT_CERIE_POSITION ) |
			( UART_USER_U3STAT_ABDOVIE << _U3STAT_ABDOVIE_POSITION ) |
			( UART_USER_U3STAT_PERIE << _U3STAT_PERIE_POSITION ) |
			( UART_USER_U3STAT_TXMTIE << _U3STAT_TXMTIE_POSITION ) |
			( UART_USER_U3STAT_RXBF << _U3STAT_RXBF_POSITION ) |
			( UART_USER_U3STAT_RXBE << _U3STAT_RXBE_POSITION ) |
			( UART_USER_U3STAT_XON << _U3STAT_XON_POSITION ) |
			( UART_USER_U3STAT_RCIDL << _U3STAT_RCIDL_POSITION ) |
			( UART_USER_U3STAT_TXBF << _U3STAT_TXBF_POSITION ) |
			( UART_USER_U3STAT_TXBE << _U3STAT_TXBE_POSITION ) |
			( UART_USER_U3STAT_STPMD << _U3STAT_STPMD_POSITION ) |
			( UART_USER_U3STAT_TXWRE << _U3STAT_TXWRE_POSITION ) |
			( UART_USER_U3STAT_RXWM << _U3STAT_RXWM_POSITION ) |
			( UART_USER_U3STAT_TXWM << _U3STAT_TXWM_POSITION ) ;
		#ifdef DEF_BITNAME
			U3STATbits.TXCIF = UART_USER_U3STAT_TXCIF;
			U3STATbits.RXFOIF = UART_USER_U3STAT_RXFOIF;
			U3STATbits.RXBKIF = UART_USER_U3STAT_RXBKIF;
			U3STATbits.FERIF = UART_USER_U3STAT_FERIF;
			U3STATbits.CERIF = UART_USER_U3STAT_CERIF;
			U3STATbits.ABDOVIF = UART_USER_U3STAT_ABDOVIF;
			U3STATbits.PERIF = UART_USER_U3STAT_PERIF;
			U3STATbits.TXMTIF = UART_USER_U3STAT_TXMTIF;
			U3STATbits.TXCIE = UART_USER_U3STAT_TXCIE;
			U3STATbits.RXFOIE = UART_USER_U3STAT_RXFOIE;
			U3STATbits.RXBKIE = UART_USER_U3STAT_RXBKIE;
			U3STATbits.FERIE = UART_USER_U3STAT_FERIE;
			U3STATbits.CERIE = UART_USER_U3STAT_CERIE;
			U3STATbits.ABDOVIE = UART_USER_U3STAT_ABDOVIE;
			U3STATbits.PERIE = UART_USER_U3STAT_PERIE;
			U3STATbits.TXMTIE = UART_USER_U3STAT_TXMTIE;
			U3STATbits.RXBF = UART_USER_U3STAT_RXBF;
			U3STATbits.RXBE = UART_USER_U3STAT_RXBE;
			U3STATbits.XON = UART_USER_U3STAT_XON;
			U3STATbits.RCIDL = UART_USER_U3STAT_RCIDL;
			U3STATbits.TXBF = UART_USER_U3STAT_TXBF;
			U3STATbits.TXBE = UART_USER_U3STAT_TXBE;
			U3STATbits.STPMD = UART_USER_U3STAT_STPMD;
			U3STATbits.TXWRE = UART_USER_U3STAT_TXWRE;
			U3STATbits.RXWM = UART_USER_U3STAT_RXWM;
			U3STATbits.TXWM = UART_USER_U3STAT_TXWM;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3BRGレジスタ */
	/*-----------------------------------------------------------------------*/
		U3BRG = UART_USER_U3BRG;

	/*-----------------------------------------------------------------------*/
	/* U3RXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U3RXB = UART_USER_U3RXB;

	/*-----------------------------------------------------------------------*/
	/* U3TXBレジスタ */
	/*-----------------------------------------------------------------------*/
		U3TXB = 
			( UART_USER_U3TXB_TXB << _U3TXB_TXB_POSITION ) |
			( UART_USER_U3TXB_LAST << _U3TXB_LAST_POSITION ) ;
		#ifdef DEF_BITNAME
			U3TXBbits.TXB = UART_USER_U3TXB_TXB;
			U3TXBbits.LAST = UART_USER_U3TXB_LAST;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3PAレジスタ */
	/*-----------------------------------------------------------------------*/
		U3PA = 
			( UART_USER_U3PA_P1 << _U3PA_P1_POSITION ) |
			( UART_USER_U3PA_P2 << _U3PA_P2_POSITION ) |
			( UART_USER_U3PA_WIP << _U3PA_WIP_POSITION ) ;
		#ifdef DEF_BITNAME
			U3PAbits.P1 = UART_USER_U3PA_P1;
			U3PAbits.P2 = UART_USER_U3PA_P2;
			U3PAbits.WIP = UART_USER_U3PA_WIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3PBレジスタ */
	/*-----------------------------------------------------------------------*/
		U3PB = 
			( UART_USER_U3PB_P3 << _U3PB_P3_POSITION ) |
			( UART_USER_U3PB_WIP << _U3PB_WIP_POSITION ) ;
		#ifdef DEF_BITNAME
			U3PBbits.P3 = UART_USER_U3PB_P3;
			U3PBbits.WIP = UART_USER_U3PB_WIP;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3CHKレジスタ */
	/*-----------------------------------------------------------------------*/
		U3CHK = 
			( UART_USER_U3CHK_TXCHK << _U3CHK_TXCHK_POSITION ) |
			( UART_USER_U3CHK_RXCHK << _U3CHK_RXCHK_POSITION ) ;
		#ifdef DEF_BITNAME
			U3CHKbits.TXCHK = UART_USER_U3CHK_TXCHK;
			U3CHKbits.RXCHK = UART_USER_U3CHK_RXCHK;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3SCCONレジスタ */
	/*-----------------------------------------------------------------------*/
		U3SCCON = 
			( UART_USER_U3SCCON_PRTCL << _U3SCCON_PRTCL_POSITION ) |
			( UART_USER_U3SCCON_T0PD << _U3SCCON_T0PD_POSITION ) |
			( UART_USER_U3SCCON_CONV << _U3SCCON_CONV_POSITION ) |
			( UART_USER_U3SCCON_TXRPT << _U3SCCON_TXRPT_POSITION ) |
			( UART_USER_U3SCCON_GTCIE << _U3SCCON_GTCIE_POSITION ) |
			( UART_USER_U3SCCON_WTCIE << _U3SCCON_WTCIE_POSITION ) |
			( UART_USER_U3SCCON_BTCIE << _U3SCCON_BTCIE_POSITION ) |
			( UART_USER_U3SCCON_TXRPTIE << _U3SCCON_TXRPTIE_POSITION ) |
			( UART_USER_U3SCCON_RXRPTIE << _U3SCCON_RXRPTIE_POSITION ) |
			( UART_USER_U3SCCON_GTCIF << _U3SCCON_GTCIF_POSITION ) |
			( UART_USER_U3SCCON_WTCIF << _U3SCCON_WTCIF_POSITION ) |
			( UART_USER_U3SCCON_BTCIF << _U3SCCON_BTCIF_POSITION ) |
			( UART_USER_U3SCCON_TXRPTIF << _U3SCCON_TXRPTIF_POSITION ) |
			( UART_USER_U3SCCON_RXRPTIF << _U3SCCON_RXRPTIF_POSITION ) ;
		#ifdef DEF_BITNAME
			U3SCCONbits.PRTCL = UART_USER_U3SCCON_PRTCL;
			U3SCCONbits.T0PD = UART_USER_U3SCCON_T0PD;
			U3SCCONbits.CONV = UART_USER_U3SCCON_CONV;
			U3SCCONbits.TXRPT = UART_USER_U3SCCON_TXRPT;
			U3SCCONbits.GTCIE = UART_USER_U3SCCON_GTCIE;
			U3SCCONbits.WTCIE = UART_USER_U3SCCON_WTCIE;
			U3SCCONbits.BTCIE = UART_USER_U3SCCON_BTCIE;
			U3SCCONbits.TXRPTIE = UART_USER_U3SCCON_TXRPTIE;
			U3SCCONbits.RXRPTIE = UART_USER_U3SCCON_RXRPTIE;
			U3SCCONbits.GTCIF = UART_USER_U3SCCON_GTCIF;
			U3SCCONbits.WTCIF = UART_USER_U3SCCON_WTCIF;
			U3SCCONbits.BTCIF = UART_USER_U3SCCON_BTCIF;
			U3SCCONbits.TXRPTIF = UART_USER_U3SCCON_TXRPTIF;
			U3SCCONbits.RXRPTIF = UART_USER_U3SCCON_RXRPTIF;
		#endif 

	/*-----------------------------------------------------------------------*/
	/* U3UIRレジスタ */
	/*-----------------------------------------------------------------------*/
		U3UIR = 
			( UART_USER_U3UIR_ABDIE << _U3UIR_ABDIE_POSITION ) |
			( UART_USER_U3UIR_ABDIF << _U3UIR_ABDIF_POSITION ) |
			( UART_USER_U3UIR_WUIF << _U3UIR_WUIF_POSITION ) ;
		#ifdef DEF_BITNAME
			U3UIRbits.ABDIE = UART_USER_U3UIR_ABDIE;
			U3UIRbits.ABDIF = UART_USER_U3UIR_ABDIF;
			U3UIRbits.WUIF = UART_USER_U3UIR_WUIF;
		#endif 
#endif
}
/*----------------------------------------------------------------------------*/
/*
* @fn        vdg_UART_Set_Register(void)
* @brief        UART1,2のレジスタを初期化します
* @param
* @return
* @detail 
*/
/*----------------------------------------------------------------------------*/
void vdg_UART_Set_Register(void)
{
#if ( PMD_U1MD == PMD_MODULE_ENABLE ) 
    vdg_UART1_Set_Register();
#endif
#if ( PMD_U2MD == PMD_MODULE_ENABLE ) 
    vdg_UART2_Set_Register();
#endif
#if ( PMD_U3MD == PMD_MODULE_ENABLE ) 
    vdg_UART3_Set_Register();
#endif
}