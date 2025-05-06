
#ifndef IOIM_USER_H
#define	IOIM_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "iomon_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/* IOIM1CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM1CON_REFSEL	( 0U )
#define IOIM_USER_IOIM1CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM1CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM1CON_LOCK		( 0U )
#define IOIM_USER_IOIM1CON_SIDL		( 0U )
#define IOIM_USER_IOIM1CON_SLPEN	( 0U )
#define IOIM_USER_IOIM1CON_ON		( 0U )
#define IOIM_USER_IOIM1CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM1CON_TESTEN	( 0U )
#define IOIM_USER_IOIM1CON_OKINJ	( 0U )
#define IOIM_USER_IOIM1CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM1BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM1BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM1STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM1STAT_OK	( 0U )
#define IOIM_USER_IOIM1STAT_ERR	( 0U )
#define IOIM_USER_IOIM1STAT_OVF	( 0U )
#define IOIM_USER_IOIM1STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM1STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM1STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM1STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM1STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM2CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM2CON_REFSEL	( 0U )
#define IOIM_USER_IOIM2CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM2CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM2CON_LOCK	( 0U )
#define IOIM_USER_IOIM2CON_SIDL	( 0U )
#define IOIM_USER_IOIM2CON_SLPEN	( 0U )
#define IOIM_USER_IOIM2CON_ON	( 0U )
#define IOIM_USER_IOIM2CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM2CON_TESTEN	( 0U )
#define IOIM_USER_IOIM2CON_OKINJ	( 0U )
#define IOIM_USER_IOIM2CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM2BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM2BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM2STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM2STAT_OK	( 0U )
#define IOIM_USER_IOIM2STAT_ERR	( 0U )
#define IOIM_USER_IOIM2STAT_OVF	( 0U )
#define IOIM_USER_IOIM2STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM2STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM2STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM2STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM2STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM3CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM3CON_REFSEL	( 0U )
#define IOIM_USER_IOIM3CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM3CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM3CON_LOCK	( 0U )
#define IOIM_USER_IOIM3CON_SIDL	( 0U )
#define IOIM_USER_IOIM3CON_SLPEN	( 0U )
#define IOIM_USER_IOIM3CON_ON	( 0U )
#define IOIM_USER_IOIM3CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM3CON_TESTEN	( 0U )
#define IOIM_USER_IOIM3CON_OKINJ	( 0U )
#define IOIM_USER_IOIM3CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM3BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM3BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM3STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM3STAT_OK	( 0U )
#define IOIM_USER_IOIM3STAT_ERR	( 0U )
#define IOIM_USER_IOIM3STAT_OVF	( 0U )
#define IOIM_USER_IOIM3STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM3STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM3STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM3STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM3STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM4CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM4CON_REFSEL	( 0U )
#define IOIM_USER_IOIM4CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM4CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM4CON_LOCK	( 0U )
#define IOIM_USER_IOIM4CON_SIDL	( 0U )
#define IOIM_USER_IOIM4CON_SLPEN	( 0U )
#define IOIM_USER_IOIM4CON_ON	( 0U )
#define IOIM_USER_IOIM4CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM4CON_TESTEN	( 0U )
#define IOIM_USER_IOIM4CON_OKINJ	( 0U )
#define IOIM_USER_IOIM4CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM4BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM4BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM4STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM4STAT_OK	( 0U )
#define IOIM_USER_IOIM4STAT_ERR	( 0U )
#define IOIM_USER_IOIM4STAT_OVF	( 0U )
#define IOIM_USER_IOIM4STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM4STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM4STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM4STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM4STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM5CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM5CON_REFSEL	( 0U )
#define IOIM_USER_IOIM5CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM5CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM5CON_LOCK	( 0U )
#define IOIM_USER_IOIM5CON_SIDL	( 0U )
#define IOIM_USER_IOIM5CON_SLPEN	( 0U )
#define IOIM_USER_IOIM5CON_ON	( 0U )
#define IOIM_USER_IOIM5CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM5CON_TESTEN	( 0U )
#define IOIM_USER_IOIM5CON_OKINJ	( 0U )
#define IOIM_USER_IOIM5CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM5BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM5BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM5STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM5STAT_OK	( 0U )
#define IOIM_USER_IOIM5STAT_ERR	( 0U )
#define IOIM_USER_IOIM5STAT_OVF	( 0U )
#define IOIM_USER_IOIM5STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM5STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM5STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM5STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM5STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM6CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM6CON_REFSEL	( 0U )
#define IOIM_USER_IOIM6CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM6CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM6CON_LOCK	( 0U )
#define IOIM_USER_IOIM6CON_SIDL	( 0U )
#define IOIM_USER_IOIM6CON_SLPEN	( 0U )
#define IOIM_USER_IOIM6CON_ON	( 0U )
#define IOIM_USER_IOIM6CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM6CON_TESTEN	( 0U )
#define IOIM_USER_IOIM6CON_OKINJ	( 0U )
#define IOIM_USER_IOIM6CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM6BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM6BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM6STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM6STAT_OK	( 0U )
#define IOIM_USER_IOIM6STAT_ERR	( 0U )
#define IOIM_USER_IOIM6STAT_OVF	( 0U )
#define IOIM_USER_IOIM6STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM6STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM6STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM6STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM6STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM7CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM7CON_REFSEL	( 0U )
#define IOIM_USER_IOIM7CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM7CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM7CON_LOCK	( 0U )
#define IOIM_USER_IOIM7CON_SIDL	( 0U )
#define IOIM_USER_IOIM7CON_SLPEN	( 0U )
#define IOIM_USER_IOIM7CON_ON	( 0U )
#define IOIM_USER_IOIM7CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM7CON_TESTEN	( 0U )
#define IOIM_USER_IOIM7CON_OKINJ	( 0U )
#define IOIM_USER_IOIM7CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM7BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM7BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM7STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM7STAT_OK	( 0U )
#define IOIM_USER_IOIM7STAT_ERR	( 0U )
#define IOIM_USER_IOIM7STAT_OVF	( 0U )
#define IOIM_USER_IOIM7STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM7STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM7STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM7STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM7STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM8CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM8CON_REFSEL	( 0U )
#define IOIM_USER_IOIM8CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM8CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM8CON_LOCK	( 0U )
#define IOIM_USER_IOIM8CON_SIDL	( 0U )
#define IOIM_USER_IOIM8CON_SLPEN	( 0U )
#define IOIM_USER_IOIM8CON_ON	( 0U )
#define IOIM_USER_IOIM8CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM8CON_TESTEN	( 0U )
#define IOIM_USER_IOIM8CON_OKINJ	( 0U )
#define IOIM_USER_IOIM8CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM8BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM8BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM8STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM8STAT_OK	( 0U )
#define IOIM_USER_IOIM8STAT_ERR	( 0U )
#define IOIM_USER_IOIM8STAT_OVF	( 0U )
#define IOIM_USER_IOIM8STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM8STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM8STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM8STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM8STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM9CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM9CON_REFSEL	( 0U )
#define IOIM_USER_IOIM9CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM9CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM9CON_LOCK	( 0U )
#define IOIM_USER_IOIM9CON_SIDL	( 0U )
#define IOIM_USER_IOIM9CON_SLPEN	( 0U )
#define IOIM_USER_IOIM9CON_ON	( 0U )
#define IOIM_USER_IOIM9CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM9CON_TESTEN	( 0U )
#define IOIM_USER_IOIM9CON_OKINJ	( 0U )
#define IOIM_USER_IOIM9CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM9BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM9BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM9STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM9STAT_OK	( 0U )
#define IOIM_USER_IOIM9STAT_ERR	( 0U )
#define IOIM_USER_IOIM9STAT_OVF	( 0U )
#define IOIM_USER_IOIM9STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM9STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM9STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM9STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM9STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM10CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM10CON_REFSEL	( 0U )
#define IOIM_USER_IOIM10CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM10CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM10CON_LOCK	( 0U )
#define IOIM_USER_IOIM10CON_SIDL	( 0U )
#define IOIM_USER_IOIM10CON_SLPEN	( 0U )
#define IOIM_USER_IOIM10CON_ON	( 0U )
#define IOIM_USER_IOIM10CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM10CON_TESTEN	( 0U )
#define IOIM_USER_IOIM10CON_OKINJ	( 0U )
#define IOIM_USER_IOIM10CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM10BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM10BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM10STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM10STAT_OK	( 0U )
#define IOIM_USER_IOIM10STAT_ERR	( 0U )
#define IOIM_USER_IOIM10STAT_OVF	( 0U )
#define IOIM_USER_IOIM10STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM10STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM10STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM10STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM10STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM11CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM11CON_REFSEL	( 0U )
#define IOIM_USER_IOIM11CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM11CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM11CON_LOCK	( 0U )
#define IOIM_USER_IOIM11CON_SIDL	( 0U )
#define IOIM_USER_IOIM11CON_SLPEN	( 0U )
#define IOIM_USER_IOIM11CON_ON	( 0U )
#define IOIM_USER_IOIM11CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM11CON_TESTEN	( 0U )
#define IOIM_USER_IOIM11CON_OKINJ	( 0U )
#define IOIM_USER_IOIM11CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM11BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM11BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM11STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM11STAT_OK	( 0U )
#define IOIM_USER_IOIM11STAT_ERR	( 0U )
#define IOIM_USER_IOIM11STAT_OVF	( 0U )
#define IOIM_USER_IOIM11STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM11STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM11STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM11STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM11STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM12CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM12CON_REFSEL	( 0U )
#define IOIM_USER_IOIM12CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM12CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM12CON_LOCK	( 0U )
#define IOIM_USER_IOIM12CON_SIDL	( 0U )
#define IOIM_USER_IOIM12CON_SLPEN	( 0U )
#define IOIM_USER_IOIM12CON_ON	( 0U )
#define IOIM_USER_IOIM12CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM12CON_TESTEN	( 0U )
#define IOIM_USER_IOIM12CON_OKINJ	( 0U )
#define IOIM_USER_IOIM12CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM12BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM12BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM12STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM12STAT_OK	( 0U )
#define IOIM_USER_IOIM12STAT_ERR	( 0U )
#define IOIM_USER_IOIM12STAT_OVF	( 0U )
#define IOIM_USER_IOIM12STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM12STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM12STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM12STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM12STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM13CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM13CON_REFSEL	( 0U )
#define IOIM_USER_IOIM13CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM13CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM13CON_LOCK	( 0U )
#define IOIM_USER_IOIM13CON_SIDL	( 0U )
#define IOIM_USER_IOIM13CON_SLPEN	( 0U )
#define IOIM_USER_IOIM13CON_ON	( 0U )
#define IOIM_USER_IOIM13CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM13CON_TESTEN	( 0U )
#define IOIM_USER_IOIM13CON_OKINJ	( 0U )
#define IOIM_USER_IOIM13CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM13BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM13BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM13STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM13STAT_OK	( 0U )
#define IOIM_USER_IOIM13STAT_ERR	( 0U )
#define IOIM_USER_IOIM13STAT_OVF	( 0U )
#define IOIM_USER_IOIM13STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM13STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM13STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM13STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM13STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM14CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM14CON_REFSEL	( 0U )
#define IOIM_USER_IOIM14CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM14CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM14CON_LOCK	( 0U )
#define IOIM_USER_IOIM14CON_SIDL	( 0U )
#define IOIM_USER_IOIM14CON_SLPEN	( 0U )
#define IOIM_USER_IOIM14CON_ON	( 0U )
#define IOIM_USER_IOIM14CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM14CON_TESTEN	( 0U )
#define IOIM_USER_IOIM14CON_OKINJ	( 0U )
#define IOIM_USER_IOIM14CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM14BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM14BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM14STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM14STAT_OK	( 0U )
#define IOIM_USER_IOIM14STAT_ERR	( 0U )
#define IOIM_USER_IOIM14STAT_OVF	( 0U )
#define IOIM_USER_IOIM14STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM14STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM14STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM14STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM14STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM15CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM15CON_REFSEL	( 0U )
#define IOIM_USER_IOIM15CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM15CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM15CON_LOCK	( 0U )
#define IOIM_USER_IOIM15CON_SIDL	( 0U )
#define IOIM_USER_IOIM15CON_SLPEN	( 0U )
#define IOIM_USER_IOIM15CON_ON	( 0U )
#define IOIM_USER_IOIM15CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM15CON_TESTEN	( 0U )
#define IOIM_USER_IOIM15CON_OKINJ	( 0U )
#define IOIM_USER_IOIM15CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM15BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM15BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM15STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM15STAT_OK	( 0U )
#define IOIM_USER_IOIM15STAT_ERR	( 0U )
#define IOIM_USER_IOIM15STAT_OVF	( 0U )
#define IOIM_USER_IOIM15STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM15STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM15STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM15STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM15STAT_ERRCNT	( 0U )

/*----------------------------------------------------------------------------*/
/* IOIM16CONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM16CON_REFSEL	( 0U )
#define IOIM_USER_IOIM16CON_FBKSEL	( 0U )
#define IOIM_USER_IOIM16CON_EXTCLK	( 0U )
#define IOIM_USER_IOIM16CON_LOCK	( 0U )
#define IOIM_USER_IOIM16CON_SIDL	( 0U )
#define IOIM_USER_IOIM16CON_SLPEN	( 0U )
#define IOIM_USER_IOIM16CON_ON	( 0U )
#define IOIM_USER_IOIM16CON_EOVFVAL	( 0U )
#define IOIM_USER_IOIM16CON_TESTEN	( 0U )
#define IOIM_USER_IOIM16CON_OKINJ	( 0U )
#define IOIM_USER_IOIM16CON_FLTINJ	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM16BCONレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM16BCON	( 0U )
/*----------------------------------------------------------------------------*/
/* IOIM16STATレジスタ */
/*----------------------------------------------------------------------------*/
#define IOIM_USER_IOIM16STAT_OK	( 0U )
#define IOIM_USER_IOIM16STAT_ERR	( 0U )
#define IOIM_USER_IOIM16STAT_OVF	( 0U )
#define IOIM_USER_IOIM16STAT_RREDGE	( 0U )
#define IOIM_USER_IOIM16STAT_RFEDGE	( 0U )
#define IOIM_USER_IOIM16STAT_FREDGE	( 0U )
#define IOIM_USER_IOIM16STAT_FFEDGE	( 0U )
#define IOIM_USER_IOIM16STAT_ERRCNT	( 0U )
/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* IOIM_USER_H */

