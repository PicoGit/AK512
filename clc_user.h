
#ifndef CLC_USER_H
#define	CLC_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "clc_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* CLC1CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC1CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC1CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC1CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC1CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC1CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC1CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC1CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC1CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC1CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC1CON_LCPOL		( 0U ) 
#define CLC_USER_CLC1CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC1SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC1SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC1SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC1SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC1SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC1GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC1GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC1GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC2CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC2CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC2CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC2CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC2CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC2CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC2CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC2CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC2CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC2CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC2CON_LCPOL		( 0U ) 
#define CLC_USER_CLC2CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC2SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC2SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC2SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC2SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC2SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC2GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC2GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC2GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC3CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC3CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC3CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC3CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC3CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC3CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC3CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC3CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC3CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC3CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC3CON_LCPOL		( 0U ) 
#define CLC_USER_CLC3CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC3SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC3SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC3SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC3SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC3SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC3GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC3GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC3GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC4CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC4CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC4CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC4CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC4CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC4CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC4CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC4CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC4CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC4CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC4CON_LCPOL		( 0U ) 
#define CLC_USER_CLC4CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC4SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC4SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC4SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC4SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC4SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC4GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC4GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC4GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC5CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC5CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC5CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC5CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC5CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC5CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC5CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC5CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC5CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC5CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC5CON_LCPOL		( 0U ) 
#define CLC_USER_CLC5CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC5SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC5SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC5SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC5SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC5SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC5GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC5GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC5GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC6CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC6CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC6CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC6CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC6CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC6CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC6CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC6CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC6CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC6CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC6CON_LCPOL		( 0U ) 
#define CLC_USER_CLC6CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC6SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC6SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC6SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC6SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC6SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC6GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC6GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC6GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC7CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC7CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC7CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC7CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC7CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC7CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC7CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC7CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC7CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC7CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC7CON_LCPOL		( 0U ) 
#define CLC_USER_CLC7CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC7SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC7SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC7SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC7SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC7SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC7GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC7GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC7GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC8CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC8CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC8CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC8CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC8CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC8CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC8CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC8CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC8CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC8CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC8CON_LCPOL		( 0U ) 
#define CLC_USER_CLC8CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC8SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC8SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC8SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC8SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC8SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC8GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC8GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC8GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC9CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC9CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC9CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC9CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC9CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC9CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC9CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC9CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC9CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC9CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC9CON_LCPOL		( 0U ) 
#define CLC_USER_CLC9CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC9SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC9SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC9SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC9SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC9SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC9GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC9GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC9GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/* CLC10CON */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC10CON_MODE		( CLC_MODE_AND_OR )
#define CLC_USER_CLC10CON_LCOE		( CLC_OUTPUT_DISABLE )
#define CLC_USER_CLC10CON_INTN		( CLC_NEG_IRPT_DISABLE )
#define CLC_USER_CLC10CON_INTP		( CLC_POS_IRPT_DISABLE )
#define CLC_USER_CLC10CON_ON		( CLC_POWER_DISABLE )
#define CLC_USER_CLC10CON_G1POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC10CON_G2POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC10CON_G3POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC10CON_G4POL		( CLC_GXPOL_NOT_INVERT ) 
#define CLC_USER_CLC10CON_LCPOL		( 0U ) 
#define CLC_USER_CLC10CON_LCOUT		( 0U ) 
/*----------------------------------------------------------------------------*/
/* CLC10SEL */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC10SEL_DS1	( CLC_SEL_DS1_CLCINA )
#define CLC_USER_CLC10SEL_DS2	( CLC_SEL_DS2_CLCINB )
#define CLC_USER_CLC10SEL_DS3	( CLC_SEL_DS3_CLCINC )
#define CLC_USER_CLC10SEL_DS4	( CLC_SEL_DS4_CLCIND )
/*----------------------------------------------------------------------------*/
/* CLC10GLS */
/*----------------------------------------------------------------------------*/
#define CLC_USER_CLC10GLS_G1D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G1D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G1D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G1D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G1D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G1D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G1D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G1D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G2D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G3D4T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D1N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D1T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D2N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D2T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D3N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D3T	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D4N	( CLC_GLS_DISABLE )
#define CLC_USER_CLC10GLS_G4D4T	( CLC_GLS_DISABLE )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* CLC_USER_H */

