
#ifndef PORT_USER_H
#define	PORT_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "BoardSupportPackage.h"
#include "port_driver.h"
#include "remappin_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/




#define PORT_USER_CNCONA_PORT32		( 0U )
#define PORT_USER_CNCONA_CNSTYLE	( 0U )
#define PORT_USER_CNCONA_ON			( 0U )
#define PORT_USER_CNCONB_PORT32		( 0U )
#define PORT_USER_CNCONB_CNSTYLE	( 0U )
#define PORT_USER_CNCONB_ON			( 0U )
#define PORT_USER_CNCONC_PORT32		( 0U )
#define PORT_USER_CNCONC_CNSTYLE	( 0U )
#define PORT_USER_CNCONC_ON			( 0U )
#define PORT_USER_CNCOND_PORT32		( 0U )
#define PORT_USER_CNCOND_CNSTYLE	( 0U )
#define PORT_USER_CNCOND_ON			( 0U )
#define PORT_USER_CNCONE_PORT32		( 0U )
#define PORT_USER_CNCONE_CNSTYLE	( 0U )
#define PORT_USER_CNCONE_ON			( 0U )
#define PORT_USER_CNCONF_PORT32		( 0U )
#define PORT_USER_CNCONF_CNSTYLE	( 0U )
#define PORT_USER_CNCONF_ON			( 0U )
#define PORT_USER_CNCONG_PORT32		( 0U )
#define PORT_USER_CNCONG_CNSTYLE	( 0U )
#define PORT_USER_CNCONG_ON			( 0U )
#define PORT_USER_CNCONH_PORT32		( 0U )
#define PORT_USER_CNCONH_CNSTYLE	( 0U )
#define PORT_USER_CNCONH_ON			( 0U )



/*----------------------------------------------------------------------------*/		
/* PORTA0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA0			( 0U )
#define PORT_USER_LATA_LATA0			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA0	( 0U )
#define PORT_USER_CNFA_CNFA0			( 0U )
#define PORT_USER_ODCA_ODCA0			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA0		( 0U )
#define PORT_USER_PORTA_RA0			( 0U )
#define PORT_USER_LATA_LATA0			( 0U )
#define PORT_USER_TRISA_TRISA0		( 0U )
#define PORT_USER_CNSTATA_CNSTATA0	( 0U )
#define PORT_USER_CNFA_CNFA0			( 0U )
#define PORT_USER_ODCA_ODCA0			( 0U )
#define PORT_USER_CNPUA_CNPUA0		( 0U )
#define PORT_USER_CNPDA_CNPDA0		( 0U )
#define PORT_USER_CNEN0A_CNEN0A0		( 0U )
#define PORT_USER_CNEN1A_CNEN1A0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA1			( 0U )
#define PORT_USER_LATA_LATA1			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA1	( 0U )
#define PORT_USER_CNFA_CNFA1			( 0U )
#define PORT_USER_ODCA_ODCA1			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA1		( 0U )
#define PORT_USER_PORTA_RA1			( 0U )
#define PORT_USER_LATA_LATA1			( 0U )
#define PORT_USER_TRISA_TRISA1		( 0U )
#define PORT_USER_CNSTATA_CNSTATA1	( 0U )
#define PORT_USER_CNFA_CNFA1			( 0U )
#define PORT_USER_ODCA_ODCA1			( 0U )
#define PORT_USER_CNPUA_CNPUA1		( 0U )
#define PORT_USER_CNPDA_CNPDA1		( 0U )
#define PORT_USER_CNEN0A_CNEN0A1		( 0U )
#define PORT_USER_CNEN1A_CNEN1A1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA2			( 0U )
#define PORT_USER_LATA_LATA2			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA2	( 0U )
#define PORT_USER_CNFA_CNFA2			( 0U )
#define PORT_USER_ODCA_ODCA2			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA2		( 0U )
#define PORT_USER_PORTA_RA2			( 0U )
#define PORT_USER_LATA_LATA2			( 0U )
#define PORT_USER_TRISA_TRISA2		( 0U )
#define PORT_USER_CNSTATA_CNSTATA2	( 0U )
#define PORT_USER_CNFA_CNFA2			( 0U )
#define PORT_USER_ODCA_ODCA2			( 0U )
#define PORT_USER_CNPUA_CNPUA2		( 0U )
#define PORT_USER_CNPDA_CNPDA2		( 0U )
#define PORT_USER_CNEN0A_CNEN0A2		( 0U )
#define PORT_USER_CNEN1A_CNEN1A2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA3			( 0U )
#define PORT_USER_LATA_LATA3			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA3	( 0U )
#define PORT_USER_CNFA_CNFA3			( 0U )
#define PORT_USER_ODCA_ODCA3			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA3		( 0U )
#define PORT_USER_PORTA_RA3			( 0U )
#define PORT_USER_LATA_LATA3			( 0U )
#define PORT_USER_TRISA_TRISA3		( 0U )
#define PORT_USER_CNSTATA_CNSTATA3	( 0U )
#define PORT_USER_CNFA_CNFA3			( 0U )
#define PORT_USER_ODCA_ODCA3			( 0U )
#define PORT_USER_CNPUA_CNPUA3		( 0U )
#define PORT_USER_CNPDA_CNPDA3		( 0U )
#define PORT_USER_CNEN0A_CNEN0A3		( 0U )
#define PORT_USER_CNEN1A_CNEN1A3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA4			( 0U )
#define PORT_USER_LATA_LATA4			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA4	( 0U )
#define PORT_USER_CNFA_CNFA4			( 0U )
#define PORT_USER_ODCA_ODCA4			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA4		( 0U )
#define PORT_USER_PORTA_RA4			( 0U )
#define PORT_USER_LATA_LATA4			( 0U )
#define PORT_USER_TRISA_TRISA4		( 0U )
#define PORT_USER_CNSTATA_CNSTATA4	( 0U )
#define PORT_USER_CNFA_CNFA4			( 0U )
#define PORT_USER_ODCA_ODCA4			( 0U )
#define PORT_USER_CNPUA_CNPUA4		( 0U )
#define PORT_USER_CNPDA_CNPDA4		( 0U )
#define PORT_USER_CNEN0A_CNEN0A4		( 0U )
#define PORT_USER_CNEN1A_CNEN1A4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA5			( 0U )
#define PORT_USER_LATA_LATA5			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA5	( 0U )
#define PORT_USER_CNFA_CNFA5			( 0U )
#define PORT_USER_ODCA_ODCA5			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA5		( 0U )
#define PORT_USER_PORTA_RA5			( 0U )
#define PORT_USER_LATA_LATA5			( 0U )
#define PORT_USER_TRISA_TRISA5		( 0U )
#define PORT_USER_CNSTATA_CNSTATA5	( 0U )
#define PORT_USER_CNFA_CNFA5			( 0U )
#define PORT_USER_ODCA_ODCA5			( 0U )
#define PORT_USER_CNPUA_CNPUA5		( 0U )
#define PORT_USER_CNPDA_CNPDA5		( 0U )
#define PORT_USER_CNEN0A_CNEN0A5		( 0U )
#define PORT_USER_CNEN1A_CNEN1A5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA6			( 0U )
#define PORT_USER_LATA_LATA6			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA6	( 0U )
#define PORT_USER_CNFA_CNFA6			( 0U )
#define PORT_USER_ODCA_ODCA6			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA6		( 0U )
#define PORT_USER_PORTA_RA6			( 0U )
#define PORT_USER_LATA_LATA6			( 0U )
#define PORT_USER_TRISA_TRISA6		( 0U )
#define PORT_USER_CNSTATA_CNSTATA6	( 0U )
#define PORT_USER_CNFA_CNFA6			( 0U )
#define PORT_USER_ODCA_ODCA6			( 0U )
#define PORT_USER_CNPUA_CNPUA6		( 0U )
#define PORT_USER_CNPDA_CNPDA6		( 0U )
#define PORT_USER_CNEN0A_CNEN0A6		( 0U )
#define PORT_USER_CNEN1A_CNEN1A6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA7			( 0U )
#define PORT_USER_LATA_LATA7			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA7	( 0U )
#define PORT_USER_CNFA_CNFA7			( 0U )
#define PORT_USER_ODCA_ODCA7			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA7		( 0U )
#define PORT_USER_PORTA_RA7			( 0U )
#define PORT_USER_LATA_LATA7			( 0U )
#define PORT_USER_TRISA_TRISA7		( 0U )
#define PORT_USER_CNSTATA_CNSTATA7	( 0U )
#define PORT_USER_CNFA_CNFA7			( 0U )
#define PORT_USER_ODCA_ODCA7			( 0U )
#define PORT_USER_CNPUA_CNPUA7		( 0U )
#define PORT_USER_CNPDA_CNPDA7		( 0U )
#define PORT_USER_CNEN0A_CNEN0A7		( 0U )
#define PORT_USER_CNEN1A_CNEN1A7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA8			( 0U )
#define PORT_USER_LATA_LATA8			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA8	( 0U )
#define PORT_USER_CNFA_CNFA8			( 0U )
#define PORT_USER_ODCA_ODCA8			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA8		( 0U )
#define PORT_USER_PORTA_RA8			( 0U )
#define PORT_USER_LATA_LATA8			( 0U )
#define PORT_USER_TRISA_TRISA8		( 0U )
#define PORT_USER_CNSTATA_CNSTATA8	( 0U )
#define PORT_USER_CNFA_CNFA8			( 0U )
#define PORT_USER_ODCA_ODCA8			( 0U )
#define PORT_USER_CNPUA_CNPUA8		( 0U )
#define PORT_USER_CNPDA_CNPDA8		( 0U )
#define PORT_USER_CNEN0A_CNEN0A8		( 0U )
#define PORT_USER_CNEN1A_CNEN1A8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA9			( 0U )
#define PORT_USER_LATA_LATA9			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA9	( 0U )
#define PORT_USER_CNFA_CNFA9			( 0U )
#define PORT_USER_ODCA_ODCA9			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA9		( 0U )
#define PORT_USER_PORTA_RA9			( 0U )
#define PORT_USER_LATA_LATA9			( 0U )
#define PORT_USER_TRISA_TRISA9		( 0U )
#define PORT_USER_CNSTATA_CNSTATA9	( 0U )
#define PORT_USER_CNFA_CNFA9			( 0U )
#define PORT_USER_ODCA_ODCA9			( 0U )
#define PORT_USER_CNPUA_CNPUA9		( 0U )
#define PORT_USER_CNPDA_CNPDA9		( 0U )
#define PORT_USER_CNEN0A_CNEN0A9		( 0U )
#define PORT_USER_CNEN1A_CNEN1A9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA10			( 0U )
#define PORT_USER_LATA_LATA10			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA10	( 0U )
#define PORT_USER_CNFA_CNFA10			( 0U )
#define PORT_USER_ODCA_ODCA10			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA10		( 0U )
#define PORT_USER_PORTA_RA10			( 0U )
#define PORT_USER_LATA_LATA10			( 0U )
#define PORT_USER_TRISA_TRISA10		( 0U )
#define PORT_USER_CNSTATA_CNSTATA10	( 0U )
#define PORT_USER_CNFA_CNFA10			( 0U )
#define PORT_USER_ODCA_ODCA10			( 0U )
#define PORT_USER_CNPUA_CNPUA10		( 0U )
#define PORT_USER_CNPDA_CNPDA10		( 0U )
#define PORT_USER_CNEN0A_CNEN0A10		( 0U )
#define PORT_USER_CNEN1A_CNEN1A10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA11			( 0U )
#define PORT_USER_LATA_LATA11			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA11	( 0U )
#define PORT_USER_CNFA_CNFA11			( 0U )
#define PORT_USER_ODCA_ODCA11			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA11		( 0U )
#define PORT_USER_PORTA_RA11			( 0U )
#define PORT_USER_LATA_LATA11			( 0U )
#define PORT_USER_TRISA_TRISA11		( 0U )
#define PORT_USER_CNSTATA_CNSTATA11	( 0U )
#define PORT_USER_CNFA_CNFA11			( 0U )
#define PORT_USER_ODCA_ODCA11			( 0U )
#define PORT_USER_CNPUA_CNPUA11		( 0U )
#define PORT_USER_CNPDA_CNPDA11		( 0U )
#define PORT_USER_CNEN0A_CNEN0A11		( 0U )
#define PORT_USER_CNEN1A_CNEN1A11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA12			( 0U )
#define PORT_USER_LATA_LATA12			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA12	( 0U )
#define PORT_USER_CNFA_CNFA12			( 0U )
#define PORT_USER_ODCA_ODCA12			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA12		( 0U )
#define PORT_USER_PORTA_RA12			( 0U )
#define PORT_USER_LATA_LATA12			( 0U )
#define PORT_USER_TRISA_TRISA12		( 0U )
#define PORT_USER_CNSTATA_CNSTATA12	( 0U )
#define PORT_USER_CNFA_CNFA12			( 0U )
#define PORT_USER_ODCA_ODCA12			( 0U )
#define PORT_USER_CNPUA_CNPUA12		( 0U )
#define PORT_USER_CNPDA_CNPDA12		( 0U )
#define PORT_USER_CNEN0A_CNEN0A12		( 0U )
#define PORT_USER_CNEN1A_CNEN1A12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA13			( 0U )
#define PORT_USER_LATA_LATA13			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA13	( 0U )
#define PORT_USER_CNFA_CNFA13			( 0U )
#define PORT_USER_ODCA_ODCA13			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA13		( 0U )
#define PORT_USER_PORTA_RA13			( 0U )
#define PORT_USER_LATA_LATA13			( 0U )
#define PORT_USER_TRISA_TRISA13		( 0U )
#define PORT_USER_CNSTATA_CNSTATA13	( 0U )
#define PORT_USER_CNFA_CNFA13			( 0U )
#define PORT_USER_ODCA_ODCA13			( 0U )
#define PORT_USER_CNPUA_CNPUA13		( 0U )
#define PORT_USER_CNPDA_CNPDA13		( 0U )
#define PORT_USER_CNEN0A_CNEN0A13		( 0U )
#define PORT_USER_CNEN1A_CNEN1A13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA14			( 0U )
#define PORT_USER_LATA_LATA14			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA14	( 0U )
#define PORT_USER_CNFA_CNFA14			( 0U )
#define PORT_USER_ODCA_ODCA14			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA14		( 0U )
#define PORT_USER_PORTA_RA14			( 0U )
#define PORT_USER_LATA_LATA14			( 0U )
#define PORT_USER_TRISA_TRISA14		( 0U )
#define PORT_USER_CNSTATA_CNSTATA14	( 0U )
#define PORT_USER_CNFA_CNFA14			( 0U )
#define PORT_USER_ODCA_ODCA14			( 0U )
#define PORT_USER_CNPUA_CNPUA14		( 0U )
#define PORT_USER_CNPDA_CNPDA14		( 0U )
#define PORT_USER_CNEN0A_CNEN0A14		( 0U )
#define PORT_USER_CNEN1A_CNEN1A14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTA15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_A15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELA_ANSELA15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTA_RA15			( 0U )
#define PORT_USER_LATA_LATA15			PORT_LAT_LOW
#define PORT_USER_TRISA_TRISA15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATA_CNSTATA15	( 0U )
#define PORT_USER_CNFA_CNFA15			( 0U )
#define PORT_USER_ODCA_ODCA15			PORT_ODC_DISABLE
#define PORT_USER_CNPUA_CNPUA15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDA_CNPDA15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0A_CNEN0A15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1A_CNEN1A15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELA_ANSELA15		( 0U )
#define PORT_USER_PORTA_RA15			( 0U )
#define PORT_USER_LATA_LATA15			( 0U )
#define PORT_USER_TRISA_TRISA15		( 0U )
#define PORT_USER_CNSTATA_CNSTATA15	( 0U )
#define PORT_USER_CNFA_CNFA15			( 0U )
#define PORT_USER_ODCA_ODCA15			( 0U )
#define PORT_USER_CNPUA_CNPUA15		( 0U )
#define PORT_USER_CNPDA_CNPDA15		( 0U )
#define PORT_USER_CNEN0A_CNEN0A15		( 0U )
#define PORT_USER_CNEN1A_CNEN1A15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB0			( 0U )
#define PORT_USER_LATB_LATB0			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB0	( 0U )
#define PORT_USER_CNFB_CNFB0			( 0U )
#define PORT_USER_ODCB_ODCB0			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB0		( 0U )
#define PORT_USER_PORTB_RB0			( 0U )
#define PORT_USER_LATB_LATB0			( 0U )
#define PORT_USER_TRISB_TRISB0		( 0U )
#define PORT_USER_CNSTATB_CNSTATB0	( 0U )
#define PORT_USER_CNFB_CNFB0			( 0U )
#define PORT_USER_ODCB_ODCB0			( 0U )
#define PORT_USER_CNPUB_CNPUB0		( 0U )
#define PORT_USER_CNPDB_CNPDB0		( 0U )
#define PORT_USER_CNEN0B_CNEN0B0		( 0U )
#define PORT_USER_CNEN1B_CNEN1B0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB1			( 0U )
#define PORT_USER_LATB_LATB1			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB1	( 0U )
#define PORT_USER_CNFB_CNFB1			( 0U )
#define PORT_USER_ODCB_ODCB1			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB1		( 0U )
#define PORT_USER_PORTB_RB1			( 0U )
#define PORT_USER_LATB_LATB1			( 0U )
#define PORT_USER_TRISB_TRISB1		( 0U )
#define PORT_USER_CNSTATB_CNSTATB1	( 0U )
#define PORT_USER_CNFB_CNFB1			( 0U )
#define PORT_USER_ODCB_ODCB1			( 0U )
#define PORT_USER_CNPUB_CNPUB1		( 0U )
#define PORT_USER_CNPDB_CNPDB1		( 0U )
#define PORT_USER_CNEN0B_CNEN0B1		( 0U )
#define PORT_USER_CNEN1B_CNEN1B1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB2			( 0U )
#define PORT_USER_LATB_LATB2			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB2	( 0U )
#define PORT_USER_CNFB_CNFB2			( 0U )
#define PORT_USER_ODCB_ODCB2			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB2		( 0U )
#define PORT_USER_PORTB_RB2			( 0U )
#define PORT_USER_LATB_LATB2			( 0U )
#define PORT_USER_TRISB_TRISB2		( 0U )
#define PORT_USER_CNSTATB_CNSTATB2	( 0U )
#define PORT_USER_CNFB_CNFB2			( 0U )
#define PORT_USER_ODCB_ODCB2			( 0U )
#define PORT_USER_CNPUB_CNPUB2		( 0U )
#define PORT_USER_CNPDB_CNPDB2		( 0U )
#define PORT_USER_CNEN0B_CNEN0B2		( 0U )
#define PORT_USER_CNEN1B_CNEN1B2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB3			( 0U )
#define PORT_USER_LATB_LATB3			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB3	( 0U )
#define PORT_USER_CNFB_CNFB3			( 0U )
#define PORT_USER_ODCB_ODCB3			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB3		( 0U )
#define PORT_USER_PORTB_RB3			( 0U )
#define PORT_USER_LATB_LATB3			( 0U )
#define PORT_USER_TRISB_TRISB3		( 0U )
#define PORT_USER_CNSTATB_CNSTATB3	( 0U )
#define PORT_USER_CNFB_CNFB3			( 0U )
#define PORT_USER_ODCB_ODCB3			( 0U )
#define PORT_USER_CNPUB_CNPUB3		( 0U )
#define PORT_USER_CNPDB_CNPDB3		( 0U )
#define PORT_USER_CNEN0B_CNEN0B3		( 0U )
#define PORT_USER_CNEN1B_CNEN1B3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB4			( 0U )
#define PORT_USER_LATB_LATB4			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB4	( 0U )
#define PORT_USER_CNFB_CNFB4			( 0U )
#define PORT_USER_ODCB_ODCB4			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB4		( 0U )
#define PORT_USER_PORTB_RB4			( 0U )
#define PORT_USER_LATB_LATB4			( 0U )
#define PORT_USER_TRISB_TRISB4		( 0U )
#define PORT_USER_CNSTATB_CNSTATB4	( 0U )
#define PORT_USER_CNFB_CNFB4			( 0U )
#define PORT_USER_ODCB_ODCB4			( 0U )
#define PORT_USER_CNPUB_CNPUB4		( 0U )
#define PORT_USER_CNPDB_CNPDB4		( 0U )
#define PORT_USER_CNEN0B_CNEN0B4		( 0U )
#define PORT_USER_CNEN1B_CNEN1B4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB5			( 0U )
#define PORT_USER_LATB_LATB5			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB5	( 0U )
#define PORT_USER_CNFB_CNFB5			( 0U )
#define PORT_USER_ODCB_ODCB5			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB5		( 0U )
#define PORT_USER_PORTB_RB5			( 0U )
#define PORT_USER_LATB_LATB5			( 0U )
#define PORT_USER_TRISB_TRISB5		( 0U )
#define PORT_USER_CNSTATB_CNSTATB5	( 0U )
#define PORT_USER_CNFB_CNFB5			( 0U )
#define PORT_USER_ODCB_ODCB5			( 0U )
#define PORT_USER_CNPUB_CNPUB5		( 0U )
#define PORT_USER_CNPDB_CNPDB5		( 0U )
#define PORT_USER_CNEN0B_CNEN0B5		( 0U )
#define PORT_USER_CNEN1B_CNEN1B5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB6			( 0U )
#define PORT_USER_LATB_LATB6			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB6	( 0U )
#define PORT_USER_CNFB_CNFB6			( 0U )
#define PORT_USER_ODCB_ODCB6			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB6		( 0U )
#define PORT_USER_PORTB_RB6			( 0U )
#define PORT_USER_LATB_LATB6			( 0U )
#define PORT_USER_TRISB_TRISB6		( 0U )
#define PORT_USER_CNSTATB_CNSTATB6	( 0U )
#define PORT_USER_CNFB_CNFB6			( 0U )
#define PORT_USER_ODCB_ODCB6			( 0U )
#define PORT_USER_CNPUB_CNPUB6		( 0U )
#define PORT_USER_CNPDB_CNPDB6		( 0U )
#define PORT_USER_CNEN0B_CNEN0B6		( 0U )
#define PORT_USER_CNEN1B_CNEN1B6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB7			( 0U )
#define PORT_USER_LATB_LATB7			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB7	( 0U )
#define PORT_USER_CNFB_CNFB7			( 0U )
#define PORT_USER_ODCB_ODCB7			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB7		( 0U )
#define PORT_USER_PORTB_RB7			( 0U )
#define PORT_USER_LATB_LATB7			( 0U )
#define PORT_USER_TRISB_TRISB7		( 0U )
#define PORT_USER_CNSTATB_CNSTATB7	( 0U )
#define PORT_USER_CNFB_CNFB7			( 0U )
#define PORT_USER_ODCB_ODCB7			( 0U )
#define PORT_USER_CNPUB_CNPUB7		( 0U )
#define PORT_USER_CNPDB_CNPDB7		( 0U )
#define PORT_USER_CNEN0B_CNEN0B7		( 0U )
#define PORT_USER_CNEN1B_CNEN1B7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB8			( 0U )
#define PORT_USER_LATB_LATB8			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB8	( 0U )
#define PORT_USER_CNFB_CNFB8			( 0U )
#define PORT_USER_ODCB_ODCB8			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB8		( 0U )
#define PORT_USER_PORTB_RB8			( 0U )
#define PORT_USER_LATB_LATB8			( 0U )
#define PORT_USER_TRISB_TRISB8		( 0U )
#define PORT_USER_CNSTATB_CNSTATB8	( 0U )
#define PORT_USER_CNFB_CNFB8			( 0U )
#define PORT_USER_ODCB_ODCB8			( 0U )
#define PORT_USER_CNPUB_CNPUB8		( 0U )
#define PORT_USER_CNPDB_CNPDB8		( 0U )
#define PORT_USER_CNEN0B_CNEN0B8		( 0U )
#define PORT_USER_CNEN1B_CNEN1B8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB9			( 0U )
#define PORT_USER_LATB_LATB9			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB9	( 0U )
#define PORT_USER_CNFB_CNFB9			( 0U )
#define PORT_USER_ODCB_ODCB9			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB9		( 0U )
#define PORT_USER_PORTB_RB9			( 0U )
#define PORT_USER_LATB_LATB9			( 0U )
#define PORT_USER_TRISB_TRISB9		( 0U )
#define PORT_USER_CNSTATB_CNSTATB9	( 0U )
#define PORT_USER_CNFB_CNFB9			( 0U )
#define PORT_USER_ODCB_ODCB9			( 0U )
#define PORT_USER_CNPUB_CNPUB9		( 0U )
#define PORT_USER_CNPDB_CNPDB9		( 0U )
#define PORT_USER_CNEN0B_CNEN0B9		( 0U )
#define PORT_USER_CNEN1B_CNEN1B9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB10			( 0U )
#define PORT_USER_LATB_LATB10			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB10	( 0U )
#define PORT_USER_CNFB_CNFB10			( 0U )
#define PORT_USER_ODCB_ODCB10			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB10		( 0U )
#define PORT_USER_PORTB_RB10			( 0U )
#define PORT_USER_LATB_LATB10			( 0U )
#define PORT_USER_TRISB_TRISB10		( 0U )
#define PORT_USER_CNSTATB_CNSTATB10	( 0U )
#define PORT_USER_CNFB_CNFB10			( 0U )
#define PORT_USER_ODCB_ODCB10			( 0U )
#define PORT_USER_CNPUB_CNPUB10		( 0U )
#define PORT_USER_CNPDB_CNPDB10		( 0U )
#define PORT_USER_CNEN0B_CNEN0B10		( 0U )
#define PORT_USER_CNEN1B_CNEN1B10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB11			( 0U )
#define PORT_USER_LATB_LATB11			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB11	( 0U )
#define PORT_USER_CNFB_CNFB11			( 0U )
#define PORT_USER_ODCB_ODCB11			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB11		( 0U )
#define PORT_USER_PORTB_RB11			( 0U )
#define PORT_USER_LATB_LATB11			( 0U )
#define PORT_USER_TRISB_TRISB11		( 0U )
#define PORT_USER_CNSTATB_CNSTATB11	( 0U )
#define PORT_USER_CNFB_CNFB11			( 0U )
#define PORT_USER_ODCB_ODCB11			( 0U )
#define PORT_USER_CNPUB_CNPUB11		( 0U )
#define PORT_USER_CNPDB_CNPDB11		( 0U )
#define PORT_USER_CNEN0B_CNEN0B11		( 0U )
#define PORT_USER_CNEN1B_CNEN1B11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB12			( 0U )
#define PORT_USER_LATB_LATB12			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB12	( 0U )
#define PORT_USER_CNFB_CNFB12			( 0U )
#define PORT_USER_ODCB_ODCB12			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB12		( 0U )
#define PORT_USER_PORTB_RB12			( 0U )
#define PORT_USER_LATB_LATB12			( 0U )
#define PORT_USER_TRISB_TRISB12		( 0U )
#define PORT_USER_CNSTATB_CNSTATB12	( 0U )
#define PORT_USER_CNFB_CNFB12			( 0U )
#define PORT_USER_ODCB_ODCB12			( 0U )
#define PORT_USER_CNPUB_CNPUB12		( 0U )
#define PORT_USER_CNPDB_CNPDB12		( 0U )
#define PORT_USER_CNEN0B_CNEN0B12		( 0U )
#define PORT_USER_CNEN1B_CNEN1B12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB13			( 0U )
#define PORT_USER_LATB_LATB13			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB13	( 0U )
#define PORT_USER_CNFB_CNFB13			( 0U )
#define PORT_USER_ODCB_ODCB13			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB13		( 0U )
#define PORT_USER_PORTB_RB13			( 0U )
#define PORT_USER_LATB_LATB13			( 0U )
#define PORT_USER_TRISB_TRISB13		( 0U )
#define PORT_USER_CNSTATB_CNSTATB13	( 0U )
#define PORT_USER_CNFB_CNFB13			( 0U )
#define PORT_USER_ODCB_ODCB13			( 0U )
#define PORT_USER_CNPUB_CNPUB13		( 0U )
#define PORT_USER_CNPDB_CNPDB13		( 0U )
#define PORT_USER_CNEN0B_CNEN0B13		( 0U )
#define PORT_USER_CNEN1B_CNEN1B13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB14			( 0U )
#define PORT_USER_LATB_LATB14			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB14	( 0U )
#define PORT_USER_CNFB_CNFB14			( 0U )
#define PORT_USER_ODCB_ODCB14			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB14		( 0U )
#define PORT_USER_PORTB_RB14			( 0U )
#define PORT_USER_LATB_LATB14			( 0U )
#define PORT_USER_TRISB_TRISB14		( 0U )
#define PORT_USER_CNSTATB_CNSTATB14	( 0U )
#define PORT_USER_CNFB_CNFB14			( 0U )
#define PORT_USER_ODCB_ODCB14			( 0U )
#define PORT_USER_CNPUB_CNPUB14		( 0U )
#define PORT_USER_CNPDB_CNPDB14		( 0U )
#define PORT_USER_CNEN0B_CNEN0B14		( 0U )
#define PORT_USER_CNEN1B_CNEN1B14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTB15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_B15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELB_ANSELB15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTB_RB15			( 0U )
#define PORT_USER_LATB_LATB15			PORT_LAT_LOW
#define PORT_USER_TRISB_TRISB15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATB_CNSTATB15	( 0U )
#define PORT_USER_CNFB_CNFB15			( 0U )
#define PORT_USER_ODCB_ODCB15			PORT_ODC_DISABLE
#define PORT_USER_CNPUB_CNPUB15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDB_CNPDB15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0B_CNEN0B15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1B_CNEN1B15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELB_ANSELB15		( 0U )
#define PORT_USER_PORTB_RB15			( 0U )
#define PORT_USER_LATB_LATB15			( 0U )
#define PORT_USER_TRISB_TRISB15		( 0U )
#define PORT_USER_CNSTATB_CNSTATB15	( 0U )
#define PORT_USER_CNFB_CNFB15			( 0U )
#define PORT_USER_ODCB_ODCB15			( 0U )
#define PORT_USER_CNPUB_CNPUB15		( 0U )
#define PORT_USER_CNPDB_CNPDB15		( 0U )
#define PORT_USER_CNEN0B_CNEN0B15		( 0U )
#define PORT_USER_CNEN1B_CNEN1B15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC0			( 0U )
#define PORT_USER_LATC_LATC0			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC0	( 0U )
#define PORT_USER_CNFC_CNFC0			( 0U )
#define PORT_USER_ODCC_ODCC0			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC0		( 0U )
#define PORT_USER_PORTC_RC0			( 0U )
#define PORT_USER_LATC_LATC0			( 0U )
#define PORT_USER_TRISC_TRISC0		( 0U )
#define PORT_USER_CNSTATC_CNSTATC0	( 0U )
#define PORT_USER_CNFC_CNFC0			( 0U )
#define PORT_USER_ODCC_ODCC0			( 0U )
#define PORT_USER_CNPUC_CNPUC0		( 0U )
#define PORT_USER_CNPDC_CNPDC0		( 0U )
#define PORT_USER_CNEN0C_CNEN0C0		( 0U )
#define PORT_USER_CNEN1C_CNEN1C0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC1			( 0U )
#define PORT_USER_LATC_LATC1			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC1	( 0U )
#define PORT_USER_CNFC_CNFC1			( 0U )
#define PORT_USER_ODCC_ODCC1			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC1		( 0U )
#define PORT_USER_PORTC_RC1			( 0U )
#define PORT_USER_LATC_LATC1			( 0U )
#define PORT_USER_TRISC_TRISC1		( 0U )
#define PORT_USER_CNSTATC_CNSTATC1	( 0U )
#define PORT_USER_CNFC_CNFC1			( 0U )
#define PORT_USER_ODCC_ODCC1			( 0U )
#define PORT_USER_CNPUC_CNPUC1		( 0U )
#define PORT_USER_CNPDC_CNPDC1		( 0U )
#define PORT_USER_CNEN0C_CNEN0C1		( 0U )
#define PORT_USER_CNEN1C_CNEN1C1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC2			( 0U )
#define PORT_USER_LATC_LATC2			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC2	( 0U )
#define PORT_USER_CNFC_CNFC2			( 0U )
#define PORT_USER_ODCC_ODCC2			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC2		( 0U )
#define PORT_USER_PORTC_RC2			( 0U )
#define PORT_USER_LATC_LATC2			( 0U )
#define PORT_USER_TRISC_TRISC2		( 0U )
#define PORT_USER_CNSTATC_CNSTATC2	( 0U )
#define PORT_USER_CNFC_CNFC2			( 0U )
#define PORT_USER_ODCC_ODCC2			( 0U )
#define PORT_USER_CNPUC_CNPUC2		( 0U )
#define PORT_USER_CNPDC_CNPDC2		( 0U )
#define PORT_USER_CNEN0C_CNEN0C2		( 0U )
#define PORT_USER_CNEN1C_CNEN1C2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC3			( 0U )
#define PORT_USER_LATC_LATC3			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC3	( 0U )
#define PORT_USER_CNFC_CNFC3			( 0U )
#define PORT_USER_ODCC_ODCC3			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC3		( 0U )
#define PORT_USER_PORTC_RC3			( 0U )
#define PORT_USER_LATC_LATC3			( 0U )
#define PORT_USER_TRISC_TRISC3		( 0U )
#define PORT_USER_CNSTATC_CNSTATC3	( 0U )
#define PORT_USER_CNFC_CNFC3			( 0U )
#define PORT_USER_ODCC_ODCC3			( 0U )
#define PORT_USER_CNPUC_CNPUC3		( 0U )
#define PORT_USER_CNPDC_CNPDC3		( 0U )
#define PORT_USER_CNEN0C_CNEN0C3		( 0U )
#define PORT_USER_CNEN1C_CNEN1C3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC4			( 0U )
#define PORT_USER_LATC_LATC4			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC4	( 0U )
#define PORT_USER_CNFC_CNFC4			( 0U )
#define PORT_USER_ODCC_ODCC4			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC4		( 0U )
#define PORT_USER_PORTC_RC4			( 0U )
#define PORT_USER_LATC_LATC4			( 0U )
#define PORT_USER_TRISC_TRISC4		( 0U )
#define PORT_USER_CNSTATC_CNSTATC4	( 0U )
#define PORT_USER_CNFC_CNFC4			( 0U )
#define PORT_USER_ODCC_ODCC4			( 0U )
#define PORT_USER_CNPUC_CNPUC4		( 0U )
#define PORT_USER_CNPDC_CNPDC4		( 0U )
#define PORT_USER_CNEN0C_CNEN0C4		( 0U )
#define PORT_USER_CNEN1C_CNEN1C4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC5			( 0U )
#define PORT_USER_LATC_LATC5			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC5	( 0U )
#define PORT_USER_CNFC_CNFC5			( 0U )
#define PORT_USER_ODCC_ODCC5			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC5		( 0U )
#define PORT_USER_PORTC_RC5			( 0U )
#define PORT_USER_LATC_LATC5			( 0U )
#define PORT_USER_TRISC_TRISC5		( 0U )
#define PORT_USER_CNSTATC_CNSTATC5	( 0U )
#define PORT_USER_CNFC_CNFC5			( 0U )
#define PORT_USER_ODCC_ODCC5			( 0U )
#define PORT_USER_CNPUC_CNPUC5		( 0U )
#define PORT_USER_CNPDC_CNPDC5		( 0U )
#define PORT_USER_CNEN0C_CNEN0C5		( 0U )
#define PORT_USER_CNEN1C_CNEN1C5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC6			( 0U )
#define PORT_USER_LATC_LATC6			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC6	( 0U )
#define PORT_USER_CNFC_CNFC6			( 0U )
#define PORT_USER_ODCC_ODCC6			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC6		( 0U )
#define PORT_USER_PORTC_RC6			( 0U )
#define PORT_USER_LATC_LATC6			( 0U )
#define PORT_USER_TRISC_TRISC6		( 0U )
#define PORT_USER_CNSTATC_CNSTATC6	( 0U )
#define PORT_USER_CNFC_CNFC6			( 0U )
#define PORT_USER_ODCC_ODCC6			( 0U )
#define PORT_USER_CNPUC_CNPUC6		( 0U )
#define PORT_USER_CNPDC_CNPDC6		( 0U )
#define PORT_USER_CNEN0C_CNEN0C6		( 0U )
#define PORT_USER_CNEN1C_CNEN1C6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC7			( 0U )
#define PORT_USER_LATC_LATC7			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC7	( 0U )
#define PORT_USER_CNFC_CNFC7			( 0U )
#define PORT_USER_ODCC_ODCC7			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC7		( 0U )
#define PORT_USER_PORTC_RC7			( 0U )
#define PORT_USER_LATC_LATC7			( 0U )
#define PORT_USER_TRISC_TRISC7		( 0U )
#define PORT_USER_CNSTATC_CNSTATC7	( 0U )
#define PORT_USER_CNFC_CNFC7			( 0U )
#define PORT_USER_ODCC_ODCC7			( 0U )
#define PORT_USER_CNPUC_CNPUC7		( 0U )
#define PORT_USER_CNPDC_CNPDC7		( 0U )
#define PORT_USER_CNEN0C_CNEN0C7		( 0U )
#define PORT_USER_CNEN1C_CNEN1C7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC8			( 0U )
#define PORT_USER_LATC_LATC8			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC8	( 0U )
#define PORT_USER_CNFC_CNFC8			( 0U )
#define PORT_USER_ODCC_ODCC8			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC8		( 0U )
#define PORT_USER_PORTC_RC8			( 0U )
#define PORT_USER_LATC_LATC8			( 0U )
#define PORT_USER_TRISC_TRISC8		( 0U )
#define PORT_USER_CNSTATC_CNSTATC8	( 0U )
#define PORT_USER_CNFC_CNFC8			( 0U )
#define PORT_USER_ODCC_ODCC8			( 0U )
#define PORT_USER_CNPUC_CNPUC8		( 0U )
#define PORT_USER_CNPDC_CNPDC8		( 0U )
#define PORT_USER_CNEN0C_CNEN0C8		( 0U )
#define PORT_USER_CNEN1C_CNEN1C8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC9			( 0U )
#define PORT_USER_LATC_LATC9			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC9	( 0U )
#define PORT_USER_CNFC_CNFC9			( 0U )
#define PORT_USER_ODCC_ODCC9			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC9		( 0U )
#define PORT_USER_PORTC_RC9			( 0U )
#define PORT_USER_LATC_LATC9			( 0U )
#define PORT_USER_TRISC_TRISC9		( 0U )
#define PORT_USER_CNSTATC_CNSTATC9	( 0U )
#define PORT_USER_CNFC_CNFC9			( 0U )
#define PORT_USER_ODCC_ODCC9			( 0U )
#define PORT_USER_CNPUC_CNPUC9		( 0U )
#define PORT_USER_CNPDC_CNPDC9		( 0U )
#define PORT_USER_CNEN0C_CNEN0C9		( 0U )
#define PORT_USER_CNEN1C_CNEN1C9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC10			( 0U )
#define PORT_USER_LATC_LATC10			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC10	( 0U )
#define PORT_USER_CNFC_CNFC10			( 0U )
#define PORT_USER_ODCC_ODCC10			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC10		( 0U )
#define PORT_USER_PORTC_RC10			( 0U )
#define PORT_USER_LATC_LATC10			( 0U )
#define PORT_USER_TRISC_TRISC10		( 0U )
#define PORT_USER_CNSTATC_CNSTATC10	( 0U )
#define PORT_USER_CNFC_CNFC10			( 0U )
#define PORT_USER_ODCC_ODCC10			( 0U )
#define PORT_USER_CNPUC_CNPUC10		( 0U )
#define PORT_USER_CNPDC_CNPDC10		( 0U )
#define PORT_USER_CNEN0C_CNEN0C10		( 0U )
#define PORT_USER_CNEN1C_CNEN1C10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC11			( 0U )
#define PORT_USER_LATC_LATC11			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC11	( 0U )
#define PORT_USER_CNFC_CNFC11			( 0U )
#define PORT_USER_ODCC_ODCC11			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC11		( 0U )
#define PORT_USER_PORTC_RC11			( 0U )
#define PORT_USER_LATC_LATC11			( 0U )
#define PORT_USER_TRISC_TRISC11		( 0U )
#define PORT_USER_CNSTATC_CNSTATC11	( 0U )
#define PORT_USER_CNFC_CNFC11			( 0U )
#define PORT_USER_ODCC_ODCC11			( 0U )
#define PORT_USER_CNPUC_CNPUC11		( 0U )
#define PORT_USER_CNPDC_CNPDC11		( 0U )
#define PORT_USER_CNEN0C_CNEN0C11		( 0U )
#define PORT_USER_CNEN1C_CNEN1C11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC12			( 0U )
#define PORT_USER_LATC_LATC12			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC12	( 0U )
#define PORT_USER_CNFC_CNFC12			( 0U )
#define PORT_USER_ODCC_ODCC12			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC12		( 0U )
#define PORT_USER_PORTC_RC12			( 0U )
#define PORT_USER_LATC_LATC12			( 0U )
#define PORT_USER_TRISC_TRISC12		( 0U )
#define PORT_USER_CNSTATC_CNSTATC12	( 0U )
#define PORT_USER_CNFC_CNFC12			( 0U )
#define PORT_USER_ODCC_ODCC12			( 0U )
#define PORT_USER_CNPUC_CNPUC12		( 0U )
#define PORT_USER_CNPDC_CNPDC12		( 0U )
#define PORT_USER_CNEN0C_CNEN0C12		( 0U )
#define PORT_USER_CNEN1C_CNEN1C12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC13			( 0U )
#define PORT_USER_LATC_LATC13			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC13	( 0U )
#define PORT_USER_CNFC_CNFC13			( 0U )
#define PORT_USER_ODCC_ODCC13			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC13		( 0U )
#define PORT_USER_PORTC_RC13			( 0U )
#define PORT_USER_LATC_LATC13			( 0U )
#define PORT_USER_TRISC_TRISC13		( 0U )
#define PORT_USER_CNSTATC_CNSTATC13	( 0U )
#define PORT_USER_CNFC_CNFC13			( 0U )
#define PORT_USER_ODCC_ODCC13			( 0U )
#define PORT_USER_CNPUC_CNPUC13		( 0U )
#define PORT_USER_CNPDC_CNPDC13		( 0U )
#define PORT_USER_CNEN0C_CNEN0C13		( 0U )
#define PORT_USER_CNEN1C_CNEN1C13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC14			( 0U )
#define PORT_USER_LATC_LATC14			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC14	( 0U )
#define PORT_USER_CNFC_CNFC14			( 0U )
#define PORT_USER_ODCC_ODCC14			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC14		( 0U )
#define PORT_USER_PORTC_RC14			( 0U )
#define PORT_USER_LATC_LATC14			( 0U )
#define PORT_USER_TRISC_TRISC14		( 0U )
#define PORT_USER_CNSTATC_CNSTATC14	( 0U )
#define PORT_USER_CNFC_CNFC14			( 0U )
#define PORT_USER_ODCC_ODCC14			( 0U )
#define PORT_USER_CNPUC_CNPUC14		( 0U )
#define PORT_USER_CNPDC_CNPDC14		( 0U )
#define PORT_USER_CNEN0C_CNEN0C14		( 0U )
#define PORT_USER_CNEN1C_CNEN1C14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTC15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_C15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELC_ANSELC15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTC_RC15			( 0U )
#define PORT_USER_LATC_LATC15			PORT_LAT_LOW
#define PORT_USER_TRISC_TRISC15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATC_CNSTATC15	( 0U )
#define PORT_USER_CNFC_CNFC15			( 0U )
#define PORT_USER_ODCC_ODCC15			PORT_ODC_DISABLE
#define PORT_USER_CNPUC_CNPUC15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDC_CNPDC15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0C_CNEN0C15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1C_CNEN1C15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELC_ANSELC15		( 0U )
#define PORT_USER_PORTC_RC15			( 0U )
#define PORT_USER_LATC_LATC15			( 0U )
#define PORT_USER_TRISC_TRISC15		( 0U )
#define PORT_USER_CNSTATC_CNSTATC15	( 0U )
#define PORT_USER_CNFC_CNFC15			( 0U )
#define PORT_USER_ODCC_ODCC15			( 0U )
#define PORT_USER_CNPUC_CNPUC15		( 0U )
#define PORT_USER_CNPDC_CNPDC15		( 0U )
#define PORT_USER_CNEN0C_CNEN0C15		( 0U )
#define PORT_USER_CNEN1C_CNEN1C15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD0			( 0U )
#define PORT_USER_LATD_LATD0			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD0	( 0U )
#define PORT_USER_CNFD_CNFD0			( 0U )
#define PORT_USER_ODCD_ODCD0			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD0		( 0U )
#define PORT_USER_PORTD_RD0			( 0U )
#define PORT_USER_LATD_LATD0			( 0U )
#define PORT_USER_TRISD_TRISD0		( 0U )
#define PORT_USER_CNSTATD_CNSTATD0	( 0U )
#define PORT_USER_CNFD_CNFD0			( 0U )
#define PORT_USER_ODCD_ODCD0			( 0U )
#define PORT_USER_CNPUD_CNPUD0		( 0U )
#define PORT_USER_CNPDD_CNPDD0		( 0U )
#define PORT_USER_CNEN0D_CNEN0D0		( 0U )
#define PORT_USER_CNEN1D_CNEN1D0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD1			( 0U )
#define PORT_USER_LATD_LATD1			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD1	( 0U )
#define PORT_USER_CNFD_CNFD1			( 0U )
#define PORT_USER_ODCD_ODCD1			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD1		( 0U )
#define PORT_USER_PORTD_RD1			( 0U )
#define PORT_USER_LATD_LATD1			( 0U )
#define PORT_USER_TRISD_TRISD1		( 0U )
#define PORT_USER_CNSTATD_CNSTATD1	( 0U )
#define PORT_USER_CNFD_CNFD1			( 0U )
#define PORT_USER_ODCD_ODCD1			( 0U )
#define PORT_USER_CNPUD_CNPUD1		( 0U )
#define PORT_USER_CNPDD_CNPDD1		( 0U )
#define PORT_USER_CNEN0D_CNEN0D1		( 0U )
#define PORT_USER_CNEN1D_CNEN1D1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD2			( 0U )
#define PORT_USER_LATD_LATD2			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD2	( 0U )
#define PORT_USER_CNFD_CNFD2			( 0U )
#define PORT_USER_ODCD_ODCD2			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD2		( 0U )
#define PORT_USER_PORTD_RD2			( 0U )
#define PORT_USER_LATD_LATD2			( 0U )
#define PORT_USER_TRISD_TRISD2		( 0U )
#define PORT_USER_CNSTATD_CNSTATD2	( 0U )
#define PORT_USER_CNFD_CNFD2			( 0U )
#define PORT_USER_ODCD_ODCD2			( 0U )
#define PORT_USER_CNPUD_CNPUD2		( 0U )
#define PORT_USER_CNPDD_CNPDD2		( 0U )
#define PORT_USER_CNEN0D_CNEN0D2		( 0U )
#define PORT_USER_CNEN1D_CNEN1D2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD3			( 0U )
#define PORT_USER_LATD_LATD3			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD3	( 0U )
#define PORT_USER_CNFD_CNFD3			( 0U )
#define PORT_USER_ODCD_ODCD3			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD3		( 0U )
#define PORT_USER_PORTD_RD3			( 0U )
#define PORT_USER_LATD_LATD3			( 0U )
#define PORT_USER_TRISD_TRISD3		( 0U )
#define PORT_USER_CNSTATD_CNSTATD3	( 0U )
#define PORT_USER_CNFD_CNFD3			( 0U )
#define PORT_USER_ODCD_ODCD3			( 0U )
#define PORT_USER_CNPUD_CNPUD3		( 0U )
#define PORT_USER_CNPDD_CNPDD3		( 0U )
#define PORT_USER_CNEN0D_CNEN0D3		( 0U )
#define PORT_USER_CNEN1D_CNEN1D3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD4			( 0U )
#define PORT_USER_LATD_LATD4			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD4	( 0U )
#define PORT_USER_CNFD_CNFD4			( 0U )
#define PORT_USER_ODCD_ODCD4			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD4		( 0U )
#define PORT_USER_PORTD_RD4			( 0U )
#define PORT_USER_LATD_LATD4			( 0U )
#define PORT_USER_TRISD_TRISD4		( 0U )
#define PORT_USER_CNSTATD_CNSTATD4	( 0U )
#define PORT_USER_CNFD_CNFD4			( 0U )
#define PORT_USER_ODCD_ODCD4			( 0U )
#define PORT_USER_CNPUD_CNPUD4		( 0U )
#define PORT_USER_CNPDD_CNPDD4		( 0U )
#define PORT_USER_CNEN0D_CNEN0D4		( 0U )
#define PORT_USER_CNEN1D_CNEN1D4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD5			( 0U )
#define PORT_USER_LATD_LATD5			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD5	( 0U )
#define PORT_USER_CNFD_CNFD5			( 0U )
#define PORT_USER_ODCD_ODCD5			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD5		( 0U )
#define PORT_USER_PORTD_RD5			( 0U )
#define PORT_USER_LATD_LATD5			( 0U )
#define PORT_USER_TRISD_TRISD5		( 0U )
#define PORT_USER_CNSTATD_CNSTATD5	( 0U )
#define PORT_USER_CNFD_CNFD5			( 0U )
#define PORT_USER_ODCD_ODCD5			( 0U )
#define PORT_USER_CNPUD_CNPUD5		( 0U )
#define PORT_USER_CNPDD_CNPDD5		( 0U )
#define PORT_USER_CNEN0D_CNEN0D5		( 0U )
#define PORT_USER_CNEN1D_CNEN1D5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD6			( 0U )
#define PORT_USER_LATD_LATD6			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD6	( 0U )
#define PORT_USER_CNFD_CNFD6			( 0U )
#define PORT_USER_ODCD_ODCD6			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD6		( 0U )
#define PORT_USER_PORTD_RD6			( 0U )
#define PORT_USER_LATD_LATD6			( 0U )
#define PORT_USER_TRISD_TRISD6		( 0U )
#define PORT_USER_CNSTATD_CNSTATD6	( 0U )
#define PORT_USER_CNFD_CNFD6			( 0U )
#define PORT_USER_ODCD_ODCD6			( 0U )
#define PORT_USER_CNPUD_CNPUD6		( 0U )
#define PORT_USER_CNPDD_CNPDD6		( 0U )
#define PORT_USER_CNEN0D_CNEN0D6		( 0U )
#define PORT_USER_CNEN1D_CNEN1D6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD7			( 0U )
#define PORT_USER_LATD_LATD7			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD7	( 0U )
#define PORT_USER_CNFD_CNFD7			( 0U )
#define PORT_USER_ODCD_ODCD7			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD7		( 0U )
#define PORT_USER_PORTD_RD7			( 0U )
#define PORT_USER_LATD_LATD7			( 0U )
#define PORT_USER_TRISD_TRISD7		( 0U )
#define PORT_USER_CNSTATD_CNSTATD7	( 0U )
#define PORT_USER_CNFD_CNFD7			( 0U )
#define PORT_USER_ODCD_ODCD7			( 0U )
#define PORT_USER_CNPUD_CNPUD7		( 0U )
#define PORT_USER_CNPDD_CNPDD7		( 0U )
#define PORT_USER_CNEN0D_CNEN0D7		( 0U )
#define PORT_USER_CNEN1D_CNEN1D7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD8			( 0U )
#define PORT_USER_LATD_LATD8			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD8	( 0U )
#define PORT_USER_CNFD_CNFD8			( 0U )
#define PORT_USER_ODCD_ODCD8			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD8		( 0U )
#define PORT_USER_PORTD_RD8			( 0U )
#define PORT_USER_LATD_LATD8			( 0U )
#define PORT_USER_TRISD_TRISD8		( 0U )
#define PORT_USER_CNSTATD_CNSTATD8	( 0U )
#define PORT_USER_CNFD_CNFD8			( 0U )
#define PORT_USER_ODCD_ODCD8			( 0U )
#define PORT_USER_CNPUD_CNPUD8		( 0U )
#define PORT_USER_CNPDD_CNPDD8		( 0U )
#define PORT_USER_CNEN0D_CNEN0D8		( 0U )
#define PORT_USER_CNEN1D_CNEN1D8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD9			( 0U )
#define PORT_USER_LATD_LATD9			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD9	( 0U )
#define PORT_USER_CNFD_CNFD9			( 0U )
#define PORT_USER_ODCD_ODCD9			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD9		( 0U )
#define PORT_USER_PORTD_RD9			( 0U )
#define PORT_USER_LATD_LATD9			( 0U )
#define PORT_USER_TRISD_TRISD9		( 0U )
#define PORT_USER_CNSTATD_CNSTATD9	( 0U )
#define PORT_USER_CNFD_CNFD9			( 0U )
#define PORT_USER_ODCD_ODCD9			( 0U )
#define PORT_USER_CNPUD_CNPUD9		( 0U )
#define PORT_USER_CNPDD_CNPDD9		( 0U )
#define PORT_USER_CNEN0D_CNEN0D9		( 0U )
#define PORT_USER_CNEN1D_CNEN1D9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD10			( 0U )
#define PORT_USER_LATD_LATD10			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD10	( 0U )
#define PORT_USER_CNFD_CNFD10			( 0U )
#define PORT_USER_ODCD_ODCD10			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD10		( 0U )
#define PORT_USER_PORTD_RD10			( 0U )
#define PORT_USER_LATD_LATD10			( 0U )
#define PORT_USER_TRISD_TRISD10		( 0U )
#define PORT_USER_CNSTATD_CNSTATD10	( 0U )
#define PORT_USER_CNFD_CNFD10			( 0U )
#define PORT_USER_ODCD_ODCD10			( 0U )
#define PORT_USER_CNPUD_CNPUD10		( 0U )
#define PORT_USER_CNPDD_CNPDD10		( 0U )
#define PORT_USER_CNEN0D_CNEN0D10		( 0U )
#define PORT_USER_CNEN1D_CNEN1D10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD11			( 0U )
#define PORT_USER_LATD_LATD11			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD11	( 0U )
#define PORT_USER_CNFD_CNFD11			( 0U )
#define PORT_USER_ODCD_ODCD11			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD11		( 0U )
#define PORT_USER_PORTD_RD11			( 0U )
#define PORT_USER_LATD_LATD11			( 0U )
#define PORT_USER_TRISD_TRISD11		( 0U )
#define PORT_USER_CNSTATD_CNSTATD11	( 0U )
#define PORT_USER_CNFD_CNFD11			( 0U )
#define PORT_USER_ODCD_ODCD11			( 0U )
#define PORT_USER_CNPUD_CNPUD11		( 0U )
#define PORT_USER_CNPDD_CNPDD11		( 0U )
#define PORT_USER_CNEN0D_CNEN0D11		( 0U )
#define PORT_USER_CNEN1D_CNEN1D11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD12			( 0U )
#define PORT_USER_LATD_LATD12			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD12	( 0U )
#define PORT_USER_CNFD_CNFD12			( 0U )
#define PORT_USER_ODCD_ODCD12			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD12		( 0U )
#define PORT_USER_PORTD_RD12			( 0U )
#define PORT_USER_LATD_LATD12			( 0U )
#define PORT_USER_TRISD_TRISD12		( 0U )
#define PORT_USER_CNSTATD_CNSTATD12	( 0U )
#define PORT_USER_CNFD_CNFD12			( 0U )
#define PORT_USER_ODCD_ODCD12			( 0U )
#define PORT_USER_CNPUD_CNPUD12		( 0U )
#define PORT_USER_CNPDD_CNPDD12		( 0U )
#define PORT_USER_CNEN0D_CNEN0D12		( 0U )
#define PORT_USER_CNEN1D_CNEN1D12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD13			( 0U )
#define PORT_USER_LATD_LATD13			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD13	( 0U )
#define PORT_USER_CNFD_CNFD13			( 0U )
#define PORT_USER_ODCD_ODCD13			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD13		( 0U )
#define PORT_USER_PORTD_RD13			( 0U )
#define PORT_USER_LATD_LATD13			( 0U )
#define PORT_USER_TRISD_TRISD13		( 0U )
#define PORT_USER_CNSTATD_CNSTATD13	( 0U )
#define PORT_USER_CNFD_CNFD13			( 0U )
#define PORT_USER_ODCD_ODCD13			( 0U )
#define PORT_USER_CNPUD_CNPUD13		( 0U )
#define PORT_USER_CNPDD_CNPDD13		( 0U )
#define PORT_USER_CNEN0D_CNEN0D13		( 0U )
#define PORT_USER_CNEN1D_CNEN1D13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD14			( 0U )
#define PORT_USER_LATD_LATD14			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD14	( 0U )
#define PORT_USER_CNFD_CNFD14			( 0U )
#define PORT_USER_ODCD_ODCD14			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD14		( 0U )
#define PORT_USER_PORTD_RD14			( 0U )
#define PORT_USER_LATD_LATD14			( 0U )
#define PORT_USER_TRISD_TRISD14		( 0U )
#define PORT_USER_CNSTATD_CNSTATD14	( 0U )
#define PORT_USER_CNFD_CNFD14			( 0U )
#define PORT_USER_ODCD_ODCD14			( 0U )
#define PORT_USER_CNPUD_CNPUD14		( 0U )
#define PORT_USER_CNPDD_CNPDD14		( 0U )
#define PORT_USER_CNEN0D_CNEN0D14		( 0U )
#define PORT_USER_CNEN1D_CNEN1D14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTD15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_D15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELD_ANSELD15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTD_RD15			( 0U )
#define PORT_USER_LATD_LATD15			PORT_LAT_LOW
#define PORT_USER_TRISD_TRISD15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATD_CNSTATD15	( 0U )
#define PORT_USER_CNFD_CNFD15			( 0U )
#define PORT_USER_ODCD_ODCD15			PORT_ODC_DISABLE
#define PORT_USER_CNPUD_CNPUD15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDD_CNPDD15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0D_CNEN0D15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1D_CNEN1D15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELD_ANSELD15		( 0U )
#define PORT_USER_PORTD_RD15			( 0U )
#define PORT_USER_LATD_LATD15			( 0U )
#define PORT_USER_TRISD_TRISD15		( 0U )
#define PORT_USER_CNSTATD_CNSTATD15	( 0U )
#define PORT_USER_CNFD_CNFD15			( 0U )
#define PORT_USER_ODCD_ODCD15			( 0U )
#define PORT_USER_CNPUD_CNPUD15		( 0U )
#define PORT_USER_CNPDD_CNPDD15		( 0U )
#define PORT_USER_CNEN0D_CNEN0D15		( 0U )
#define PORT_USER_CNEN1D_CNEN1D15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE0			( 0U )
#define PORT_USER_LATE_LATE0			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE0	( 0U )
#define PORT_USER_CNFE_CNFE0			( 0U )
#define PORT_USER_ODCE_ODCE0			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE0		( 0U )
#define PORT_USER_PORTE_RE0			( 0U )
#define PORT_USER_LATE_LATE0			( 0U )
#define PORT_USER_TRISE_TRISE0		( 0U )
#define PORT_USER_CNSTATE_CNSTATE0	( 0U )
#define PORT_USER_CNFE_CNFE0			( 0U )
#define PORT_USER_ODCE_ODCE0			( 0U )
#define PORT_USER_CNPUE_CNPUE0		( 0U )
#define PORT_USER_CNPDE_CNPDE0		( 0U )
#define PORT_USER_CNEN0E_CNEN0E0		( 0U )
#define PORT_USER_CNEN1E_CNEN1E0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE1			( 0U )
#define PORT_USER_LATE_LATE1			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE1	( 0U )
#define PORT_USER_CNFE_CNFE1			( 0U )
#define PORT_USER_ODCE_ODCE1			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE1		( 0U )
#define PORT_USER_PORTE_RE1			( 0U )
#define PORT_USER_LATE_LATE1			( 0U )
#define PORT_USER_TRISE_TRISE1		( 0U )
#define PORT_USER_CNSTATE_CNSTATE1	( 0U )
#define PORT_USER_CNFE_CNFE1			( 0U )
#define PORT_USER_ODCE_ODCE1			( 0U )
#define PORT_USER_CNPUE_CNPUE1		( 0U )
#define PORT_USER_CNPDE_CNPDE1		( 0U )
#define PORT_USER_CNEN0E_CNEN0E1		( 0U )
#define PORT_USER_CNEN1E_CNEN1E1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE2			( 0U )
#define PORT_USER_LATE_LATE2			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE2	( 0U )
#define PORT_USER_CNFE_CNFE2			( 0U )
#define PORT_USER_ODCE_ODCE2			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE2		( 0U )
#define PORT_USER_PORTE_RE2			( 0U )
#define PORT_USER_LATE_LATE2			( 0U )
#define PORT_USER_TRISE_TRISE2		( 0U )
#define PORT_USER_CNSTATE_CNSTATE2	( 0U )
#define PORT_USER_CNFE_CNFE2			( 0U )
#define PORT_USER_ODCE_ODCE2			( 0U )
#define PORT_USER_CNPUE_CNPUE2		( 0U )
#define PORT_USER_CNPDE_CNPDE2		( 0U )
#define PORT_USER_CNEN0E_CNEN0E2		( 0U )
#define PORT_USER_CNEN1E_CNEN1E2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE3			( 0U )
#define PORT_USER_LATE_LATE3			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE3	( 0U )
#define PORT_USER_CNFE_CNFE3			( 0U )
#define PORT_USER_ODCE_ODCE3			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE3		( 0U )
#define PORT_USER_PORTE_RE3			( 0U )
#define PORT_USER_LATE_LATE3			( 0U )
#define PORT_USER_TRISE_TRISE3		( 0U )
#define PORT_USER_CNSTATE_CNSTATE3	( 0U )
#define PORT_USER_CNFE_CNFE3			( 0U )
#define PORT_USER_ODCE_ODCE3			( 0U )
#define PORT_USER_CNPUE_CNPUE3		( 0U )
#define PORT_USER_CNPDE_CNPDE3		( 0U )
#define PORT_USER_CNEN0E_CNEN0E3		( 0U )
#define PORT_USER_CNEN1E_CNEN1E3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE4			( 0U )
#define PORT_USER_LATE_LATE4			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE4	( 0U )
#define PORT_USER_CNFE_CNFE4			( 0U )
#define PORT_USER_ODCE_ODCE4			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE4		( 0U )
#define PORT_USER_PORTE_RE4			( 0U )
#define PORT_USER_LATE_LATE4			( 0U )
#define PORT_USER_TRISE_TRISE4		( 0U )
#define PORT_USER_CNSTATE_CNSTATE4	( 0U )
#define PORT_USER_CNFE_CNFE4			( 0U )
#define PORT_USER_ODCE_ODCE4			( 0U )
#define PORT_USER_CNPUE_CNPUE4		( 0U )
#define PORT_USER_CNPDE_CNPDE4		( 0U )
#define PORT_USER_CNEN0E_CNEN0E4		( 0U )
#define PORT_USER_CNEN1E_CNEN1E4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE5			( 0U )
#define PORT_USER_LATE_LATE5			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE5	( 0U )
#define PORT_USER_CNFE_CNFE5			( 0U )
#define PORT_USER_ODCE_ODCE5			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE5		( 0U )
#define PORT_USER_PORTE_RE5			( 0U )
#define PORT_USER_LATE_LATE5			( 0U )
#define PORT_USER_TRISE_TRISE5		( 0U )
#define PORT_USER_CNSTATE_CNSTATE5	( 0U )
#define PORT_USER_CNFE_CNFE5			( 0U )
#define PORT_USER_ODCE_ODCE5			( 0U )
#define PORT_USER_CNPUE_CNPUE5		( 0U )
#define PORT_USER_CNPDE_CNPDE5		( 0U )
#define PORT_USER_CNEN0E_CNEN0E5		( 0U )
#define PORT_USER_CNEN1E_CNEN1E5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE6			( 0U )
#define PORT_USER_LATE_LATE6			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE6	( 0U )
#define PORT_USER_CNFE_CNFE6			( 0U )
#define PORT_USER_ODCE_ODCE6			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE6		( 0U )
#define PORT_USER_PORTE_RE6			( 0U )
#define PORT_USER_LATE_LATE6			( 0U )
#define PORT_USER_TRISE_TRISE6		( 0U )
#define PORT_USER_CNSTATE_CNSTATE6	( 0U )
#define PORT_USER_CNFE_CNFE6			( 0U )
#define PORT_USER_ODCE_ODCE6			( 0U )
#define PORT_USER_CNPUE_CNPUE6		( 0U )
#define PORT_USER_CNPDE_CNPDE6		( 0U )
#define PORT_USER_CNEN0E_CNEN0E6		( 0U )
#define PORT_USER_CNEN1E_CNEN1E6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE7			( 0U )
#define PORT_USER_LATE_LATE7			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE7	( 0U )
#define PORT_USER_CNFE_CNFE7			( 0U )
#define PORT_USER_ODCE_ODCE7			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE7		( 0U )
#define PORT_USER_PORTE_RE7			( 0U )
#define PORT_USER_LATE_LATE7			( 0U )
#define PORT_USER_TRISE_TRISE7		( 0U )
#define PORT_USER_CNSTATE_CNSTATE7	( 0U )
#define PORT_USER_CNFE_CNFE7			( 0U )
#define PORT_USER_ODCE_ODCE7			( 0U )
#define PORT_USER_CNPUE_CNPUE7		( 0U )
#define PORT_USER_CNPDE_CNPDE7		( 0U )
#define PORT_USER_CNEN0E_CNEN0E7		( 0U )
#define PORT_USER_CNEN1E_CNEN1E7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE8			( 0U )
#define PORT_USER_LATE_LATE8			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE8	( 0U )
#define PORT_USER_CNFE_CNFE8			( 0U )
#define PORT_USER_ODCE_ODCE8			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE8		( 0U )
#define PORT_USER_PORTE_RE8			( 0U )
#define PORT_USER_LATE_LATE8			( 0U )
#define PORT_USER_TRISE_TRISE8		( 0U )
#define PORT_USER_CNSTATE_CNSTATE8	( 0U )
#define PORT_USER_CNFE_CNFE8			( 0U )
#define PORT_USER_ODCE_ODCE8			( 0U )
#define PORT_USER_CNPUE_CNPUE8		( 0U )
#define PORT_USER_CNPDE_CNPDE8		( 0U )
#define PORT_USER_CNEN0E_CNEN0E8		( 0U )
#define PORT_USER_CNEN1E_CNEN1E8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE9			( 0U )
#define PORT_USER_LATE_LATE9			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE9	( 0U )
#define PORT_USER_CNFE_CNFE9			( 0U )
#define PORT_USER_ODCE_ODCE9			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE9		( 0U )
#define PORT_USER_PORTE_RE9			( 0U )
#define PORT_USER_LATE_LATE9			( 0U )
#define PORT_USER_TRISE_TRISE9		( 0U )
#define PORT_USER_CNSTATE_CNSTATE9	( 0U )
#define PORT_USER_CNFE_CNFE9			( 0U )
#define PORT_USER_ODCE_ODCE9			( 0U )
#define PORT_USER_CNPUE_CNPUE9		( 0U )
#define PORT_USER_CNPDE_CNPDE9		( 0U )
#define PORT_USER_CNEN0E_CNEN0E9		( 0U )
#define PORT_USER_CNEN1E_CNEN1E9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE10			( 0U )
#define PORT_USER_LATE_LATE10			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE10	( 0U )
#define PORT_USER_CNFE_CNFE10			( 0U )
#define PORT_USER_ODCE_ODCE10			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE10		( 0U )
#define PORT_USER_PORTE_RE10			( 0U )
#define PORT_USER_LATE_LATE10			( 0U )
#define PORT_USER_TRISE_TRISE10		( 0U )
#define PORT_USER_CNSTATE_CNSTATE10	( 0U )
#define PORT_USER_CNFE_CNFE10			( 0U )
#define PORT_USER_ODCE_ODCE10			( 0U )
#define PORT_USER_CNPUE_CNPUE10		( 0U )
#define PORT_USER_CNPDE_CNPDE10		( 0U )
#define PORT_USER_CNEN0E_CNEN0E10		( 0U )
#define PORT_USER_CNEN1E_CNEN1E10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE11			( 0U )
#define PORT_USER_LATE_LATE11			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE11	( 0U )
#define PORT_USER_CNFE_CNFE11			( 0U )
#define PORT_USER_ODCE_ODCE11			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE11		( 0U )
#define PORT_USER_PORTE_RE11			( 0U )
#define PORT_USER_LATE_LATE11			( 0U )
#define PORT_USER_TRISE_TRISE11		( 0U )
#define PORT_USER_CNSTATE_CNSTATE11	( 0U )
#define PORT_USER_CNFE_CNFE11			( 0U )
#define PORT_USER_ODCE_ODCE11			( 0U )
#define PORT_USER_CNPUE_CNPUE11		( 0U )
#define PORT_USER_CNPDE_CNPDE11		( 0U )
#define PORT_USER_CNEN0E_CNEN0E11		( 0U )
#define PORT_USER_CNEN1E_CNEN1E11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE12			( 0U )
#define PORT_USER_LATE_LATE12			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE12	( 0U )
#define PORT_USER_CNFE_CNFE12			( 0U )
#define PORT_USER_ODCE_ODCE12			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE12		( 0U )
#define PORT_USER_PORTE_RE12			( 0U )
#define PORT_USER_LATE_LATE12			( 0U )
#define PORT_USER_TRISE_TRISE12		( 0U )
#define PORT_USER_CNSTATE_CNSTATE12	( 0U )
#define PORT_USER_CNFE_CNFE12			( 0U )
#define PORT_USER_ODCE_ODCE12			( 0U )
#define PORT_USER_CNPUE_CNPUE12		( 0U )
#define PORT_USER_CNPDE_CNPDE12		( 0U )
#define PORT_USER_CNEN0E_CNEN0E12		( 0U )
#define PORT_USER_CNEN1E_CNEN1E12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE13			( 0U )
#define PORT_USER_LATE_LATE13			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE13	( 0U )
#define PORT_USER_CNFE_CNFE13			( 0U )
#define PORT_USER_ODCE_ODCE13			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE13		( 0U )
#define PORT_USER_PORTE_RE13			( 0U )
#define PORT_USER_LATE_LATE13			( 0U )
#define PORT_USER_TRISE_TRISE13		( 0U )
#define PORT_USER_CNSTATE_CNSTATE13	( 0U )
#define PORT_USER_CNFE_CNFE13			( 0U )
#define PORT_USER_ODCE_ODCE13			( 0U )
#define PORT_USER_CNPUE_CNPUE13		( 0U )
#define PORT_USER_CNPDE_CNPDE13		( 0U )
#define PORT_USER_CNEN0E_CNEN0E13		( 0U )
#define PORT_USER_CNEN1E_CNEN1E13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE14			( 0U )
#define PORT_USER_LATE_LATE14			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE14	( 0U )
#define PORT_USER_CNFE_CNFE14			( 0U )
#define PORT_USER_ODCE_ODCE14			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE14		( 0U )
#define PORT_USER_PORTE_RE14			( 0U )
#define PORT_USER_LATE_LATE14			( 0U )
#define PORT_USER_TRISE_TRISE14		( 0U )
#define PORT_USER_CNSTATE_CNSTATE14	( 0U )
#define PORT_USER_CNFE_CNFE14			( 0U )
#define PORT_USER_ODCE_ODCE14			( 0U )
#define PORT_USER_CNPUE_CNPUE14		( 0U )
#define PORT_USER_CNPDE_CNPDE14		( 0U )
#define PORT_USER_CNEN0E_CNEN0E14		( 0U )
#define PORT_USER_CNEN1E_CNEN1E14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTE15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_E15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELE_ANSELE15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTE_RE15			( 0U )
#define PORT_USER_LATE_LATE15			PORT_LAT_LOW
#define PORT_USER_TRISE_TRISE15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATE_CNSTATE15	( 0U )
#define PORT_USER_CNFE_CNFE15			( 0U )
#define PORT_USER_ODCE_ODCE15			PORT_ODC_DISABLE
#define PORT_USER_CNPUE_CNPUE15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDE_CNPDE15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0E_CNEN0E15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1E_CNEN1E15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELE_ANSELE15		( 0U )
#define PORT_USER_PORTE_RE15			( 0U )
#define PORT_USER_LATE_LATE15			( 0U )
#define PORT_USER_TRISE_TRISE15		( 0U )
#define PORT_USER_CNSTATE_CNSTATE15	( 0U )
#define PORT_USER_CNFE_CNFE15			( 0U )
#define PORT_USER_ODCE_ODCE15			( 0U )
#define PORT_USER_CNPUE_CNPUE15		( 0U )
#define PORT_USER_CNPDE_CNPDE15		( 0U )
#define PORT_USER_CNEN0E_CNEN0E15		( 0U )
#define PORT_USER_CNEN1E_CNEN1E15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF0			( 0U )
#define PORT_USER_LATF_LATF0			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF0	( 0U )
#define PORT_USER_CNFF_CNFF0			( 0U )
#define PORT_USER_ODCF_ODCF0			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF0		( 0U )
#define PORT_USER_PORTF_RF0			( 0U )
#define PORT_USER_LATF_LATF0			( 0U )
#define PORT_USER_TRISF_TRISF0		( 0U )
#define PORT_USER_CNSTATF_CNSTATF0	( 0U )
#define PORT_USER_CNFF_CNFF0			( 0U )
#define PORT_USER_ODCF_ODCF0			( 0U )
#define PORT_USER_CNPUF_CNPUF0		( 0U )
#define PORT_USER_CNPDF_CNPDF0		( 0U )
#define PORT_USER_CNEN0F_CNEN0F0		( 0U )
#define PORT_USER_CNEN1F_CNEN1F0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF1			( 0U )
#define PORT_USER_LATF_LATF1			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF1	( 0U )
#define PORT_USER_CNFF_CNFF1			( 0U )
#define PORT_USER_ODCF_ODCF1			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF1		( 0U )
#define PORT_USER_PORTF_RF1			( 0U )
#define PORT_USER_LATF_LATF1			( 0U )
#define PORT_USER_TRISF_TRISF1		( 0U )
#define PORT_USER_CNSTATF_CNSTATF1	( 0U )
#define PORT_USER_CNFF_CNFF1			( 0U )
#define PORT_USER_ODCF_ODCF1			( 0U )
#define PORT_USER_CNPUF_CNPUF1		( 0U )
#define PORT_USER_CNPDF_CNPDF1		( 0U )
#define PORT_USER_CNEN0F_CNEN0F1		( 0U )
#define PORT_USER_CNEN1F_CNEN1F1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF2			( 0U )
#define PORT_USER_LATF_LATF2			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF2	( 0U )
#define PORT_USER_CNFF_CNFF2			( 0U )
#define PORT_USER_ODCF_ODCF2			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF2		( 0U )
#define PORT_USER_PORTF_RF2			( 0U )
#define PORT_USER_LATF_LATF2			( 0U )
#define PORT_USER_TRISF_TRISF2		( 0U )
#define PORT_USER_CNSTATF_CNSTATF2	( 0U )
#define PORT_USER_CNFF_CNFF2			( 0U )
#define PORT_USER_ODCF_ODCF2			( 0U )
#define PORT_USER_CNPUF_CNPUF2		( 0U )
#define PORT_USER_CNPDF_CNPDF2		( 0U )
#define PORT_USER_CNEN0F_CNEN0F2		( 0U )
#define PORT_USER_CNEN1F_CNEN1F2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF3			( 0U )
#define PORT_USER_LATF_LATF3			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF3	( 0U )
#define PORT_USER_CNFF_CNFF3			( 0U )
#define PORT_USER_ODCF_ODCF3			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF3		( 0U )
#define PORT_USER_PORTF_RF3			( 0U )
#define PORT_USER_LATF_LATF3			( 0U )
#define PORT_USER_TRISF_TRISF3		( 0U )
#define PORT_USER_CNSTATF_CNSTATF3	( 0U )
#define PORT_USER_CNFF_CNFF3			( 0U )
#define PORT_USER_ODCF_ODCF3			( 0U )
#define PORT_USER_CNPUF_CNPUF3		( 0U )
#define PORT_USER_CNPDF_CNPDF3		( 0U )
#define PORT_USER_CNEN0F_CNEN0F3		( 0U )
#define PORT_USER_CNEN1F_CNEN1F3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF4			( 0U )
#define PORT_USER_LATF_LATF4			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF4	( 0U )
#define PORT_USER_CNFF_CNFF4			( 0U )
#define PORT_USER_ODCF_ODCF4			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF4		( 0U )
#define PORT_USER_PORTF_RF4			( 0U )
#define PORT_USER_LATF_LATF4			( 0U )
#define PORT_USER_TRISF_TRISF4		( 0U )
#define PORT_USER_CNSTATF_CNSTATF4	( 0U )
#define PORT_USER_CNFF_CNFF4			( 0U )
#define PORT_USER_ODCF_ODCF4			( 0U )
#define PORT_USER_CNPUF_CNPUF4		( 0U )
#define PORT_USER_CNPDF_CNPDF4		( 0U )
#define PORT_USER_CNEN0F_CNEN0F4		( 0U )
#define PORT_USER_CNEN1F_CNEN1F4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF5			( 0U )
#define PORT_USER_LATF_LATF5			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF5	( 0U )
#define PORT_USER_CNFF_CNFF5			( 0U )
#define PORT_USER_ODCF_ODCF5			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF5		( 0U )
#define PORT_USER_PORTF_RF5			( 0U )
#define PORT_USER_LATF_LATF5			( 0U )
#define PORT_USER_TRISF_TRISF5		( 0U )
#define PORT_USER_CNSTATF_CNSTATF5	( 0U )
#define PORT_USER_CNFF_CNFF5			( 0U )
#define PORT_USER_ODCF_ODCF5			( 0U )
#define PORT_USER_CNPUF_CNPUF5		( 0U )
#define PORT_USER_CNPDF_CNPDF5		( 0U )
#define PORT_USER_CNEN0F_CNEN0F5		( 0U )
#define PORT_USER_CNEN1F_CNEN1F5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF6			( 0U )
#define PORT_USER_LATF_LATF6			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF6	( 0U )
#define PORT_USER_CNFF_CNFF6			( 0U )
#define PORT_USER_ODCF_ODCF6			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF6		( 0U )
#define PORT_USER_PORTF_RF6			( 0U )
#define PORT_USER_LATF_LATF6			( 0U )
#define PORT_USER_TRISF_TRISF6		( 0U )
#define PORT_USER_CNSTATF_CNSTATF6	( 0U )
#define PORT_USER_CNFF_CNFF6			( 0U )
#define PORT_USER_ODCF_ODCF6			( 0U )
#define PORT_USER_CNPUF_CNPUF6		( 0U )
#define PORT_USER_CNPDF_CNPDF6		( 0U )
#define PORT_USER_CNEN0F_CNEN0F6		( 0U )
#define PORT_USER_CNEN1F_CNEN1F6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF7			( 0U )
#define PORT_USER_LATF_LATF7			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF7	( 0U )
#define PORT_USER_CNFF_CNFF7			( 0U )
#define PORT_USER_ODCF_ODCF7			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF7		( 0U )
#define PORT_USER_PORTF_RF7			( 0U )
#define PORT_USER_LATF_LATF7			( 0U )
#define PORT_USER_TRISF_TRISF7		( 0U )
#define PORT_USER_CNSTATF_CNSTATF7	( 0U )
#define PORT_USER_CNFF_CNFF7			( 0U )
#define PORT_USER_ODCF_ODCF7			( 0U )
#define PORT_USER_CNPUF_CNPUF7		( 0U )
#define PORT_USER_CNPDF_CNPDF7		( 0U )
#define PORT_USER_CNEN0F_CNEN0F7		( 0U )
#define PORT_USER_CNEN1F_CNEN1F7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF8			( 0U )
#define PORT_USER_LATF_LATF8			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF8	( 0U )
#define PORT_USER_CNFF_CNFF8			( 0U )
#define PORT_USER_ODCF_ODCF8			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF8		( 0U )
#define PORT_USER_PORTF_RF8			( 0U )
#define PORT_USER_LATF_LATF8			( 0U )
#define PORT_USER_TRISF_TRISF8		( 0U )
#define PORT_USER_CNSTATF_CNSTATF8	( 0U )
#define PORT_USER_CNFF_CNFF8			( 0U )
#define PORT_USER_ODCF_ODCF8			( 0U )
#define PORT_USER_CNPUF_CNPUF8		( 0U )
#define PORT_USER_CNPDF_CNPDF8		( 0U )
#define PORT_USER_CNEN0F_CNEN0F8		( 0U )
#define PORT_USER_CNEN1F_CNEN1F8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF9			( 0U )
#define PORT_USER_LATF_LATF9			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF9	( 0U )
#define PORT_USER_CNFF_CNFF9			( 0U )
#define PORT_USER_ODCF_ODCF9			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF9		( 0U )
#define PORT_USER_PORTF_RF9			( 0U )
#define PORT_USER_LATF_LATF9			( 0U )
#define PORT_USER_TRISF_TRISF9		( 0U )
#define PORT_USER_CNSTATF_CNSTATF9	( 0U )
#define PORT_USER_CNFF_CNFF9			( 0U )
#define PORT_USER_ODCF_ODCF9			( 0U )
#define PORT_USER_CNPUF_CNPUF9		( 0U )
#define PORT_USER_CNPDF_CNPDF9		( 0U )
#define PORT_USER_CNEN0F_CNEN0F9		( 0U )
#define PORT_USER_CNEN1F_CNEN1F9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF10			( 0U )
#define PORT_USER_LATF_LATF10			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF10	( 0U )
#define PORT_USER_CNFF_CNFF10			( 0U )
#define PORT_USER_ODCF_ODCF10			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF10		( 0U )
#define PORT_USER_PORTF_RF10			( 0U )
#define PORT_USER_LATF_LATF10			( 0U )
#define PORT_USER_TRISF_TRISF10		( 0U )
#define PORT_USER_CNSTATF_CNSTATF10	( 0U )
#define PORT_USER_CNFF_CNFF10			( 0U )
#define PORT_USER_ODCF_ODCF10			( 0U )
#define PORT_USER_CNPUF_CNPUF10		( 0U )
#define PORT_USER_CNPDF_CNPDF10		( 0U )
#define PORT_USER_CNEN0F_CNEN0F10		( 0U )
#define PORT_USER_CNEN1F_CNEN1F10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF11			( 0U )
#define PORT_USER_LATF_LATF11			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF11	( 0U )
#define PORT_USER_CNFF_CNFF11			( 0U )
#define PORT_USER_ODCF_ODCF11			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF11		( 0U )
#define PORT_USER_PORTF_RF11			( 0U )
#define PORT_USER_LATF_LATF11			( 0U )
#define PORT_USER_TRISF_TRISF11		( 0U )
#define PORT_USER_CNSTATF_CNSTATF11	( 0U )
#define PORT_USER_CNFF_CNFF11			( 0U )
#define PORT_USER_ODCF_ODCF11			( 0U )
#define PORT_USER_CNPUF_CNPUF11		( 0U )
#define PORT_USER_CNPDF_CNPDF11		( 0U )
#define PORT_USER_CNEN0F_CNEN0F11		( 0U )
#define PORT_USER_CNEN1F_CNEN1F11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF12			( 0U )
#define PORT_USER_LATF_LATF12			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF12	( 0U )
#define PORT_USER_CNFF_CNFF12			( 0U )
#define PORT_USER_ODCF_ODCF12			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF12		( 0U )
#define PORT_USER_PORTF_RF12			( 0U )
#define PORT_USER_LATF_LATF12			( 0U )
#define PORT_USER_TRISF_TRISF12		( 0U )
#define PORT_USER_CNSTATF_CNSTATF12	( 0U )
#define PORT_USER_CNFF_CNFF12			( 0U )
#define PORT_USER_ODCF_ODCF12			( 0U )
#define PORT_USER_CNPUF_CNPUF12		( 0U )
#define PORT_USER_CNPDF_CNPDF12		( 0U )
#define PORT_USER_CNEN0F_CNEN0F12		( 0U )
#define PORT_USER_CNEN1F_CNEN1F12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF13			( 0U )
#define PORT_USER_LATF_LATF13			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF13	( 0U )
#define PORT_USER_CNFF_CNFF13			( 0U )
#define PORT_USER_ODCF_ODCF13			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF13		( 0U )
#define PORT_USER_PORTF_RF13			( 0U )
#define PORT_USER_LATF_LATF13			( 0U )
#define PORT_USER_TRISF_TRISF13		( 0U )
#define PORT_USER_CNSTATF_CNSTATF13	( 0U )
#define PORT_USER_CNFF_CNFF13			( 0U )
#define PORT_USER_ODCF_ODCF13			( 0U )
#define PORT_USER_CNPUF_CNPUF13		( 0U )
#define PORT_USER_CNPDF_CNPDF13		( 0U )
#define PORT_USER_CNEN0F_CNEN0F13		( 0U )
#define PORT_USER_CNEN1F_CNEN1F13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF14			( 0U )
#define PORT_USER_LATF_LATF14			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF14	( 0U )
#define PORT_USER_CNFF_CNFF14			( 0U )
#define PORT_USER_ODCF_ODCF14			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF14		( 0U )
#define PORT_USER_PORTF_RF14			( 0U )
#define PORT_USER_LATF_LATF14			( 0U )
#define PORT_USER_TRISF_TRISF14		( 0U )
#define PORT_USER_CNSTATF_CNSTATF14	( 0U )
#define PORT_USER_CNFF_CNFF14			( 0U )
#define PORT_USER_ODCF_ODCF14			( 0U )
#define PORT_USER_CNPUF_CNPUF14		( 0U )
#define PORT_USER_CNPDF_CNPDF14		( 0U )
#define PORT_USER_CNEN0F_CNEN0F14		( 0U )
#define PORT_USER_CNEN1F_CNEN1F14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTF15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_F15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELF_ANSELF15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTF_RF15			( 0U )
#define PORT_USER_LATF_LATF15			PORT_LAT_LOW
#define PORT_USER_TRISF_TRISF15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATF_CNSTATF15	( 0U )
#define PORT_USER_CNFF_CNFF15			( 0U )
#define PORT_USER_ODCF_ODCF15			PORT_ODC_DISABLE
#define PORT_USER_CNPUF_CNPUF15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDF_CNPDF15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0F_CNEN0F15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1F_CNEN1F15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELF_ANSELF15		( 0U )
#define PORT_USER_PORTF_RF15			( 0U )
#define PORT_USER_LATF_LATF15			( 0U )
#define PORT_USER_TRISF_TRISF15		( 0U )
#define PORT_USER_CNSTATF_CNSTATF15	( 0U )
#define PORT_USER_CNFF_CNFF15			( 0U )
#define PORT_USER_ODCF_ODCF15			( 0U )
#define PORT_USER_CNPUF_CNPUF15		( 0U )
#define PORT_USER_CNPDF_CNPDF15		( 0U )
#define PORT_USER_CNEN0F_CNEN0F15		( 0U )
#define PORT_USER_CNEN1F_CNEN1F15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG0			( 0U )
#define PORT_USER_LATG_LATG0			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG0	( 0U )
#define PORT_USER_CNFG_CNFG0			( 0U )
#define PORT_USER_ODCG_ODCG0			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG0		( 0U )
#define PORT_USER_PORTG_RG0			( 0U )
#define PORT_USER_LATG_LATG0			( 0U )
#define PORT_USER_TRISG_TRISG0		( 0U )
#define PORT_USER_CNSTATG_CNSTATG0	( 0U )
#define PORT_USER_CNFG_CNFG0			( 0U )
#define PORT_USER_ODCG_ODCG0			( 0U )
#define PORT_USER_CNPUG_CNPUG0		( 0U )
#define PORT_USER_CNPDG_CNPDG0		( 0U )
#define PORT_USER_CNEN0G_CNEN0G0		( 0U )
#define PORT_USER_CNEN1G_CNEN1G0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG1			( 0U )
#define PORT_USER_LATG_LATG1			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG1	( 0U )
#define PORT_USER_CNFG_CNFG1			( 0U )
#define PORT_USER_ODCG_ODCG1			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG1		( 0U )
#define PORT_USER_PORTG_RG1			( 0U )
#define PORT_USER_LATG_LATG1			( 0U )
#define PORT_USER_TRISG_TRISG1		( 0U )
#define PORT_USER_CNSTATG_CNSTATG1	( 0U )
#define PORT_USER_CNFG_CNFG1			( 0U )
#define PORT_USER_ODCG_ODCG1			( 0U )
#define PORT_USER_CNPUG_CNPUG1		( 0U )
#define PORT_USER_CNPDG_CNPDG1		( 0U )
#define PORT_USER_CNEN0G_CNEN0G1		( 0U )
#define PORT_USER_CNEN1G_CNEN1G1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG2			( 0U )
#define PORT_USER_LATG_LATG2			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG2	( 0U )
#define PORT_USER_CNFG_CNFG2			( 0U )
#define PORT_USER_ODCG_ODCG2			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG2		( 0U )
#define PORT_USER_PORTG_RG2			( 0U )
#define PORT_USER_LATG_LATG2			( 0U )
#define PORT_USER_TRISG_TRISG2		( 0U )
#define PORT_USER_CNSTATG_CNSTATG2	( 0U )
#define PORT_USER_CNFG_CNFG2			( 0U )
#define PORT_USER_ODCG_ODCG2			( 0U )
#define PORT_USER_CNPUG_CNPUG2		( 0U )
#define PORT_USER_CNPDG_CNPDG2		( 0U )
#define PORT_USER_CNEN0G_CNEN0G2		( 0U )
#define PORT_USER_CNEN1G_CNEN1G2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG3			( 0U )
#define PORT_USER_LATG_LATG3			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG3	( 0U )
#define PORT_USER_CNFG_CNFG3			( 0U )
#define PORT_USER_ODCG_ODCG3			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG3		( 0U )
#define PORT_USER_PORTG_RG3			( 0U )
#define PORT_USER_LATG_LATG3			( 0U )
#define PORT_USER_TRISG_TRISG3		( 0U )
#define PORT_USER_CNSTATG_CNSTATG3	( 0U )
#define PORT_USER_CNFG_CNFG3			( 0U )
#define PORT_USER_ODCG_ODCG3			( 0U )
#define PORT_USER_CNPUG_CNPUG3		( 0U )
#define PORT_USER_CNPDG_CNPDG3		( 0U )
#define PORT_USER_CNEN0G_CNEN0G3		( 0U )
#define PORT_USER_CNEN1G_CNEN1G3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG4			( 0U )
#define PORT_USER_LATG_LATG4			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG4	( 0U )
#define PORT_USER_CNFG_CNFG4			( 0U )
#define PORT_USER_ODCG_ODCG4			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG4		( 0U )
#define PORT_USER_PORTG_RG4			( 0U )
#define PORT_USER_LATG_LATG4			( 0U )
#define PORT_USER_TRISG_TRISG4		( 0U )
#define PORT_USER_CNSTATG_CNSTATG4	( 0U )
#define PORT_USER_CNFG_CNFG4			( 0U )
#define PORT_USER_ODCG_ODCG4			( 0U )
#define PORT_USER_CNPUG_CNPUG4		( 0U )
#define PORT_USER_CNPDG_CNPDG4		( 0U )
#define PORT_USER_CNEN0G_CNEN0G4		( 0U )
#define PORT_USER_CNEN1G_CNEN1G4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG5			( 0U )
#define PORT_USER_LATG_LATG5			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG5	( 0U )
#define PORT_USER_CNFG_CNFG5			( 0U )
#define PORT_USER_ODCG_ODCG5			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG5		( 0U )
#define PORT_USER_PORTG_RG5			( 0U )
#define PORT_USER_LATG_LATG5			( 0U )
#define PORT_USER_TRISG_TRISG5		( 0U )
#define PORT_USER_CNSTATG_CNSTATG5	( 0U )
#define PORT_USER_CNFG_CNFG5			( 0U )
#define PORT_USER_ODCG_ODCG5			( 0U )
#define PORT_USER_CNPUG_CNPUG5		( 0U )
#define PORT_USER_CNPDG_CNPDG5		( 0U )
#define PORT_USER_CNEN0G_CNEN0G5		( 0U )
#define PORT_USER_CNEN1G_CNEN1G5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG6			( 0U )
#define PORT_USER_LATG_LATG6			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG6	( 0U )
#define PORT_USER_CNFG_CNFG6			( 0U )
#define PORT_USER_ODCG_ODCG6			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG6		( 0U )
#define PORT_USER_PORTG_RG6			( 0U )
#define PORT_USER_LATG_LATG6			( 0U )
#define PORT_USER_TRISG_TRISG6		( 0U )
#define PORT_USER_CNSTATG_CNSTATG6	( 0U )
#define PORT_USER_CNFG_CNFG6			( 0U )
#define PORT_USER_ODCG_ODCG6			( 0U )
#define PORT_USER_CNPUG_CNPUG6		( 0U )
#define PORT_USER_CNPDG_CNPDG6		( 0U )
#define PORT_USER_CNEN0G_CNEN0G6		( 0U )
#define PORT_USER_CNEN1G_CNEN1G6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG7			( 0U )
#define PORT_USER_LATG_LATG7			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG7	( 0U )
#define PORT_USER_CNFG_CNFG7			( 0U )
#define PORT_USER_ODCG_ODCG7			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG7		( 0U )
#define PORT_USER_PORTG_RG7			( 0U )
#define PORT_USER_LATG_LATG7			( 0U )
#define PORT_USER_TRISG_TRISG7		( 0U )
#define PORT_USER_CNSTATG_CNSTATG7	( 0U )
#define PORT_USER_CNFG_CNFG7			( 0U )
#define PORT_USER_ODCG_ODCG7			( 0U )
#define PORT_USER_CNPUG_CNPUG7		( 0U )
#define PORT_USER_CNPDG_CNPDG7		( 0U )
#define PORT_USER_CNEN0G_CNEN0G7		( 0U )
#define PORT_USER_CNEN1G_CNEN1G7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG8			( 0U )
#define PORT_USER_LATG_LATG8			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG8	( 0U )
#define PORT_USER_CNFG_CNFG8			( 0U )
#define PORT_USER_ODCG_ODCG8			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG8		( 0U )
#define PORT_USER_PORTG_RG8			( 0U )
#define PORT_USER_LATG_LATG8			( 0U )
#define PORT_USER_TRISG_TRISG8		( 0U )
#define PORT_USER_CNSTATG_CNSTATG8	( 0U )
#define PORT_USER_CNFG_CNFG8			( 0U )
#define PORT_USER_ODCG_ODCG8			( 0U )
#define PORT_USER_CNPUG_CNPUG8		( 0U )
#define PORT_USER_CNPDG_CNPDG8		( 0U )
#define PORT_USER_CNEN0G_CNEN0G8		( 0U )
#define PORT_USER_CNEN1G_CNEN1G8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG9			( 0U )
#define PORT_USER_LATG_LATG9			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG9	( 0U )
#define PORT_USER_CNFG_CNFG9			( 0U )
#define PORT_USER_ODCG_ODCG9			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG9		( 0U )
#define PORT_USER_PORTG_RG9			( 0U )
#define PORT_USER_LATG_LATG9			( 0U )
#define PORT_USER_TRISG_TRISG9		( 0U )
#define PORT_USER_CNSTATG_CNSTATG9	( 0U )
#define PORT_USER_CNFG_CNFG9			( 0U )
#define PORT_USER_ODCG_ODCG9			( 0U )
#define PORT_USER_CNPUG_CNPUG9		( 0U )
#define PORT_USER_CNPDG_CNPDG9		( 0U )
#define PORT_USER_CNEN0G_CNEN0G9		( 0U )
#define PORT_USER_CNEN1G_CNEN1G9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG10			( 0U )
#define PORT_USER_LATG_LATG10			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG10	( 0U )
#define PORT_USER_CNFG_CNFG10			( 0U )
#define PORT_USER_ODCG_ODCG10			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG10		( 0U )
#define PORT_USER_PORTG_RG10			( 0U )
#define PORT_USER_LATG_LATG10			( 0U )
#define PORT_USER_TRISG_TRISG10		( 0U )
#define PORT_USER_CNSTATG_CNSTATG10	( 0U )
#define PORT_USER_CNFG_CNFG10			( 0U )
#define PORT_USER_ODCG_ODCG10			( 0U )
#define PORT_USER_CNPUG_CNPUG10		( 0U )
#define PORT_USER_CNPDG_CNPDG10		( 0U )
#define PORT_USER_CNEN0G_CNEN0G10		( 0U )
#define PORT_USER_CNEN1G_CNEN1G10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG11			( 0U )
#define PORT_USER_LATG_LATG11			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG11	( 0U )
#define PORT_USER_CNFG_CNFG11			( 0U )
#define PORT_USER_ODCG_ODCG11			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG11		( 0U )
#define PORT_USER_PORTG_RG11			( 0U )
#define PORT_USER_LATG_LATG11			( 0U )
#define PORT_USER_TRISG_TRISG11		( 0U )
#define PORT_USER_CNSTATG_CNSTATG11	( 0U )
#define PORT_USER_CNFG_CNFG11			( 0U )
#define PORT_USER_ODCG_ODCG11			( 0U )
#define PORT_USER_CNPUG_CNPUG11		( 0U )
#define PORT_USER_CNPDG_CNPDG11		( 0U )
#define PORT_USER_CNEN0G_CNEN0G11		( 0U )
#define PORT_USER_CNEN1G_CNEN1G11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG12			( 0U )
#define PORT_USER_LATG_LATG12			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG12	( 0U )
#define PORT_USER_CNFG_CNFG12			( 0U )
#define PORT_USER_ODCG_ODCG12			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG12		( 0U )
#define PORT_USER_PORTG_RG12			( 0U )
#define PORT_USER_LATG_LATG12			( 0U )
#define PORT_USER_TRISG_TRISG12		( 0U )
#define PORT_USER_CNSTATG_CNSTATG12	( 0U )
#define PORT_USER_CNFG_CNFG12			( 0U )
#define PORT_USER_ODCG_ODCG12			( 0U )
#define PORT_USER_CNPUG_CNPUG12		( 0U )
#define PORT_USER_CNPDG_CNPDG12		( 0U )
#define PORT_USER_CNEN0G_CNEN0G12		( 0U )
#define PORT_USER_CNEN1G_CNEN1G12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG13			( 0U )
#define PORT_USER_LATG_LATG13			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG13	( 0U )
#define PORT_USER_CNFG_CNFG13			( 0U )
#define PORT_USER_ODCG_ODCG13			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG13		( 0U )
#define PORT_USER_PORTG_RG13			( 0U )
#define PORT_USER_LATG_LATG13			( 0U )
#define PORT_USER_TRISG_TRISG13		( 0U )
#define PORT_USER_CNSTATG_CNSTATG13	( 0U )
#define PORT_USER_CNFG_CNFG13			( 0U )
#define PORT_USER_ODCG_ODCG13			( 0U )
#define PORT_USER_CNPUG_CNPUG13		( 0U )
#define PORT_USER_CNPDG_CNPDG13		( 0U )
#define PORT_USER_CNEN0G_CNEN0G13		( 0U )
#define PORT_USER_CNEN1G_CNEN1G13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG14			( 0U )
#define PORT_USER_LATG_LATG14			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG14	( 0U )
#define PORT_USER_CNFG_CNFG14			( 0U )
#define PORT_USER_ODCG_ODCG14			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG14		( 0U )
#define PORT_USER_PORTG_RG14			( 0U )
#define PORT_USER_LATG_LATG14			( 0U )
#define PORT_USER_TRISG_TRISG14		( 0U )
#define PORT_USER_CNSTATG_CNSTATG14	( 0U )
#define PORT_USER_CNFG_CNFG14			( 0U )
#define PORT_USER_ODCG_ODCG14			( 0U )
#define PORT_USER_CNPUG_CNPUG14		( 0U )
#define PORT_USER_CNPDG_CNPDG14		( 0U )
#define PORT_USER_CNEN0G_CNEN0G14		( 0U )
#define PORT_USER_CNEN1G_CNEN1G14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTG15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_G15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELG_ANSELG15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTG_RG15			( 0U )
#define PORT_USER_LATG_LATG15			PORT_LAT_LOW
#define PORT_USER_TRISG_TRISG15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATG_CNSTATG15	( 0U )
#define PORT_USER_CNFG_CNFG15			( 0U )
#define PORT_USER_ODCG_ODCG15			PORT_ODC_DISABLE
#define PORT_USER_CNPUG_CNPUG15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDG_CNPDG15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0G_CNEN0G15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1G_CNEN1G15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELG_ANSELG15		( 0U )
#define PORT_USER_PORTG_RG15			( 0U )
#define PORT_USER_LATG_LATG15			( 0U )
#define PORT_USER_TRISG_TRISG15		( 0U )
#define PORT_USER_CNSTATG_CNSTATG15	( 0U )
#define PORT_USER_CNFG_CNFG15			( 0U )
#define PORT_USER_ODCG_ODCG15			( 0U )
#define PORT_USER_CNPUG_CNPUG15		( 0U )
#define PORT_USER_CNPDG_CNPDG15		( 0U )
#define PORT_USER_CNEN0G_CNEN0G15		( 0U )
#define PORT_USER_CNEN1G_CNEN1G15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH0 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H0 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH0		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH0			( 0U )
#define PORT_USER_LATH_LATH0			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH0		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH0	( 0U )
#define PORT_USER_CNFH_CNFH0			( 0U )
#define PORT_USER_ODCH_ODCH0			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH0		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH0		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H0		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H0		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH0		( 0U )
#define PORT_USER_PORTH_RH0			( 0U )
#define PORT_USER_LATH_LATH0			( 0U )
#define PORT_USER_TRISH_TRISH0		( 0U )
#define PORT_USER_CNSTATH_CNSTATH0	( 0U )
#define PORT_USER_CNFH_CNFH0			( 0U )
#define PORT_USER_ODCH_ODCH0			( 0U )
#define PORT_USER_CNPUH_CNPUH0		( 0U )
#define PORT_USER_CNPDH_CNPDH0		( 0U )
#define PORT_USER_CNEN0H_CNEN0H0		( 0U )
#define PORT_USER_CNEN1H_CNEN1H0		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH1 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H1 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH1		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH1			( 0U )
#define PORT_USER_LATH_LATH1			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH1		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH1	( 0U )
#define PORT_USER_CNFH_CNFH1			( 0U )
#define PORT_USER_ODCH_ODCH1			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH1		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH1		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H1		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H1		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH1		( 0U )
#define PORT_USER_PORTH_RH1			( 0U )
#define PORT_USER_LATH_LATH1			( 0U )
#define PORT_USER_TRISH_TRISH1		( 0U )
#define PORT_USER_CNSTATH_CNSTATH1	( 0U )
#define PORT_USER_CNFH_CNFH1			( 0U )
#define PORT_USER_ODCH_ODCH1			( 0U )
#define PORT_USER_CNPUH_CNPUH1		( 0U )
#define PORT_USER_CNPDH_CNPDH1		( 0U )
#define PORT_USER_CNEN0H_CNEN0H1		( 0U )
#define PORT_USER_CNEN1H_CNEN1H1		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH2 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H2 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH2		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH2			( 0U )
#define PORT_USER_LATH_LATH2			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH2		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH2	( 0U )
#define PORT_USER_CNFH_CNFH2			( 0U )
#define PORT_USER_ODCH_ODCH2			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH2		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH2		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H2		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H2		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH2		( 0U )
#define PORT_USER_PORTH_RH2			( 0U )
#define PORT_USER_LATH_LATH2			( 0U )
#define PORT_USER_TRISH_TRISH2		( 0U )
#define PORT_USER_CNSTATH_CNSTATH2	( 0U )
#define PORT_USER_CNFH_CNFH2			( 0U )
#define PORT_USER_ODCH_ODCH2			( 0U )
#define PORT_USER_CNPUH_CNPUH2		( 0U )
#define PORT_USER_CNPDH_CNPDH2		( 0U )
#define PORT_USER_CNEN0H_CNEN0H2		( 0U )
#define PORT_USER_CNEN1H_CNEN1H2		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH3 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H3 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH3		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH3			( 0U )
#define PORT_USER_LATH_LATH3			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH3		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH3	( 0U )
#define PORT_USER_CNFH_CNFH3			( 0U )
#define PORT_USER_ODCH_ODCH3			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH3		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH3		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H3		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H3		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH3		( 0U )
#define PORT_USER_PORTH_RH3			( 0U )
#define PORT_USER_LATH_LATH3			( 0U )
#define PORT_USER_TRISH_TRISH3		( 0U )
#define PORT_USER_CNSTATH_CNSTATH3	( 0U )
#define PORT_USER_CNFH_CNFH3			( 0U )
#define PORT_USER_ODCH_ODCH3			( 0U )
#define PORT_USER_CNPUH_CNPUH3		( 0U )
#define PORT_USER_CNPDH_CNPDH3		( 0U )
#define PORT_USER_CNEN0H_CNEN0H3		( 0U )
#define PORT_USER_CNEN1H_CNEN1H3		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH4 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H4 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH4		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH4			( 0U )
#define PORT_USER_LATH_LATH4			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH4		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH4	( 0U )
#define PORT_USER_CNFH_CNFH4			( 0U )
#define PORT_USER_ODCH_ODCH4			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH4		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH4		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H4		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H4		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH4		( 0U )
#define PORT_USER_PORTH_RH4			( 0U )
#define PORT_USER_LATH_LATH4			( 0U )
#define PORT_USER_TRISH_TRISH4		( 0U )
#define PORT_USER_CNSTATH_CNSTATH4	( 0U )
#define PORT_USER_CNFH_CNFH4			( 0U )
#define PORT_USER_ODCH_ODCH4			( 0U )
#define PORT_USER_CNPUH_CNPUH4		( 0U )
#define PORT_USER_CNPDH_CNPDH4		( 0U )
#define PORT_USER_CNEN0H_CNEN0H4		( 0U )
#define PORT_USER_CNEN1H_CNEN1H4		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH5 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H5 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH5		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH5			( 0U )
#define PORT_USER_LATH_LATH5			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH5		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH5	( 0U )
#define PORT_USER_CNFH_CNFH5			( 0U )
#define PORT_USER_ODCH_ODCH5			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH5		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH5		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H5		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H5		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH5		( 0U )
#define PORT_USER_PORTH_RH5			( 0U )
#define PORT_USER_LATH_LATH5			( 0U )
#define PORT_USER_TRISH_TRISH5		( 0U )
#define PORT_USER_CNSTATH_CNSTATH5	( 0U )
#define PORT_USER_CNFH_CNFH5			( 0U )
#define PORT_USER_ODCH_ODCH5			( 0U )
#define PORT_USER_CNPUH_CNPUH5		( 0U )
#define PORT_USER_CNPDH_CNPDH5		( 0U )
#define PORT_USER_CNEN0H_CNEN0H5		( 0U )
#define PORT_USER_CNEN1H_CNEN1H5		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH6 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H6 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH6		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH6			( 0U )
#define PORT_USER_LATH_LATH6			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH6		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH6	( 0U )
#define PORT_USER_CNFH_CNFH6			( 0U )
#define PORT_USER_ODCH_ODCH6			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH6		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH6		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H6		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H6		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH6		( 0U )
#define PORT_USER_PORTH_RH6			( 0U )
#define PORT_USER_LATH_LATH6			( 0U )
#define PORT_USER_TRISH_TRISH6		( 0U )
#define PORT_USER_CNSTATH_CNSTATH6	( 0U )
#define PORT_USER_CNFH_CNFH6			( 0U )
#define PORT_USER_ODCH_ODCH6			( 0U )
#define PORT_USER_CNPUH_CNPUH6		( 0U )
#define PORT_USER_CNPDH_CNPDH6		( 0U )
#define PORT_USER_CNEN0H_CNEN0H6		( 0U )
#define PORT_USER_CNEN1H_CNEN1H6		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH7 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H7 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH7		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH7			( 0U )
#define PORT_USER_LATH_LATH7			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH7		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH7	( 0U )
#define PORT_USER_CNFH_CNFH7			( 0U )
#define PORT_USER_ODCH_ODCH7			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH7		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH7		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H7		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H7		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH7		( 0U )
#define PORT_USER_PORTH_RH7			( 0U )
#define PORT_USER_LATH_LATH7			( 0U )
#define PORT_USER_TRISH_TRISH7		( 0U )
#define PORT_USER_CNSTATH_CNSTATH7	( 0U )
#define PORT_USER_CNFH_CNFH7			( 0U )
#define PORT_USER_ODCH_ODCH7			( 0U )
#define PORT_USER_CNPUH_CNPUH7		( 0U )
#define PORT_USER_CNPDH_CNPDH7		( 0U )
#define PORT_USER_CNEN0H_CNEN0H7		( 0U )
#define PORT_USER_CNEN1H_CNEN1H7		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH8 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H8 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH8		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH8			( 0U )
#define PORT_USER_LATH_LATH8			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH8		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH8	( 0U )
#define PORT_USER_CNFH_CNFH8			( 0U )
#define PORT_USER_ODCH_ODCH8			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH8		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH8		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H8		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H8		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH8		( 0U )
#define PORT_USER_PORTH_RH8			( 0U )
#define PORT_USER_LATH_LATH8			( 0U )
#define PORT_USER_TRISH_TRISH8		( 0U )
#define PORT_USER_CNSTATH_CNSTATH8	( 0U )
#define PORT_USER_CNFH_CNFH8			( 0U )
#define PORT_USER_ODCH_ODCH8			( 0U )
#define PORT_USER_CNPUH_CNPUH8		( 0U )
#define PORT_USER_CNPDH_CNPDH8		( 0U )
#define PORT_USER_CNEN0H_CNEN0H8		( 0U )
#define PORT_USER_CNEN1H_CNEN1H8		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH9 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H9 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH9		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH9			( 0U )
#define PORT_USER_LATH_LATH9			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH9		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH9	( 0U )
#define PORT_USER_CNFH_CNFH9			( 0U )
#define PORT_USER_ODCH_ODCH9			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH9		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH9		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H9		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H9		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH9		( 0U )
#define PORT_USER_PORTH_RH9			( 0U )
#define PORT_USER_LATH_LATH9			( 0U )
#define PORT_USER_TRISH_TRISH9		( 0U )
#define PORT_USER_CNSTATH_CNSTATH9	( 0U )
#define PORT_USER_CNFH_CNFH9			( 0U )
#define PORT_USER_ODCH_ODCH9			( 0U )
#define PORT_USER_CNPUH_CNPUH9		( 0U )
#define PORT_USER_CNPDH_CNPDH9		( 0U )
#define PORT_USER_CNEN0H_CNEN0H9		( 0U )
#define PORT_USER_CNEN1H_CNEN1H9		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH10 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H10 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH10		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH10			( 0U )
#define PORT_USER_LATH_LATH10			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH10		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH10	( 0U )
#define PORT_USER_CNFH_CNFH10			( 0U )
#define PORT_USER_ODCH_ODCH10			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH10		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH10		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H10		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H10		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH10		( 0U )
#define PORT_USER_PORTH_RH10			( 0U )
#define PORT_USER_LATH_LATH10			( 0U )
#define PORT_USER_TRISH_TRISH10		( 0U )
#define PORT_USER_CNSTATH_CNSTATH10	( 0U )
#define PORT_USER_CNFH_CNFH10			( 0U )
#define PORT_USER_ODCH_ODCH10			( 0U )
#define PORT_USER_CNPUH_CNPUH10		( 0U )
#define PORT_USER_CNPDH_CNPDH10		( 0U )
#define PORT_USER_CNEN0H_CNEN0H10		( 0U )
#define PORT_USER_CNEN1H_CNEN1H10		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH11 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H11 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH11		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH11			( 0U )
#define PORT_USER_LATH_LATH11			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH11		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH11	( 0U )
#define PORT_USER_CNFH_CNFH11			( 0U )
#define PORT_USER_ODCH_ODCH11			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH11		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH11		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H11		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H11		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH11		( 0U )
#define PORT_USER_PORTH_RH11			( 0U )
#define PORT_USER_LATH_LATH11			( 0U )
#define PORT_USER_TRISH_TRISH11		( 0U )
#define PORT_USER_CNSTATH_CNSTATH11	( 0U )
#define PORT_USER_CNFH_CNFH11			( 0U )
#define PORT_USER_ODCH_ODCH11			( 0U )
#define PORT_USER_CNPUH_CNPUH11		( 0U )
#define PORT_USER_CNPDH_CNPDH11		( 0U )
#define PORT_USER_CNEN0H_CNEN0H11		( 0U )
#define PORT_USER_CNEN1H_CNEN1H11		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH12 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H12 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH12		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH12			( 0U )
#define PORT_USER_LATH_LATH12			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH12		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH12	( 0U )
#define PORT_USER_CNFH_CNFH12			( 0U )
#define PORT_USER_ODCH_ODCH12			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH12		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH12		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H12		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H12		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH12		( 0U )
#define PORT_USER_PORTH_RH12			( 0U )
#define PORT_USER_LATH_LATH12			( 0U )
#define PORT_USER_TRISH_TRISH12		( 0U )
#define PORT_USER_CNSTATH_CNSTATH12	( 0U )
#define PORT_USER_CNFH_CNFH12			( 0U )
#define PORT_USER_ODCH_ODCH12			( 0U )
#define PORT_USER_CNPUH_CNPUH12		( 0U )
#define PORT_USER_CNPDH_CNPDH12		( 0U )
#define PORT_USER_CNEN0H_CNEN0H12		( 0U )
#define PORT_USER_CNEN1H_CNEN1H12		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH13 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H13 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH13		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH13			( 0U )
#define PORT_USER_LATH_LATH13			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH13		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH13	( 0U )
#define PORT_USER_CNFH_CNFH13			( 0U )
#define PORT_USER_ODCH_ODCH13			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH13		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH13		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H13		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H13		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH13		( 0U )
#define PORT_USER_PORTH_RH13			( 0U )
#define PORT_USER_LATH_LATH13			( 0U )
#define PORT_USER_TRISH_TRISH13		( 0U )
#define PORT_USER_CNSTATH_CNSTATH13	( 0U )
#define PORT_USER_CNFH_CNFH13			( 0U )
#define PORT_USER_ODCH_ODCH13			( 0U )
#define PORT_USER_CNPUH_CNPUH13		( 0U )
#define PORT_USER_CNPDH_CNPDH13		( 0U )
#define PORT_USER_CNEN0H_CNEN0H13		( 0U )
#define PORT_USER_CNEN1H_CNEN1H13		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH14 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H14 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH14		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH14			( 0U )
#define PORT_USER_LATH_LATH14			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH14		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH14	( 0U )
#define PORT_USER_CNFH_CNFH14			( 0U )
#define PORT_USER_ODCH_ODCH14			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH14		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH14		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H14		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H14		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH14		( 0U )
#define PORT_USER_PORTH_RH14			( 0U )
#define PORT_USER_LATH_LATH14			( 0U )
#define PORT_USER_TRISH_TRISH14		( 0U )
#define PORT_USER_CNSTATH_CNSTATH14	( 0U )
#define PORT_USER_CNFH_CNFH14			( 0U )
#define PORT_USER_ODCH_ODCH14			( 0U )
#define PORT_USER_CNPUH_CNPUH14		( 0U )
#define PORT_USER_CNPDH_CNPDH14		( 0U )
#define PORT_USER_CNEN0H_CNEN0H14		( 0U )
#define PORT_USER_CNEN1H_CNEN1H14		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif

/*----------------------------------------------------------------------------*/		
/* PORTH15 */ 		 
/*----------------------------------------------------------------------------*/
#if (PORT_EXIST_H15 == PORT_EXIST_ENABLE)
#define PORT_USER_ANSELH_ANSELH15		PORT_ANSEL_DIGITAL 
#define PORT_USER_PORTH_RH15			( 0U )
#define PORT_USER_LATH_LATH15			PORT_LAT_LOW
#define PORT_USER_TRISH_TRISH15		PORT_TRIS_INPUT
#define PORT_USER_CNSTATH_CNSTATH15	( 0U )
#define PORT_USER_CNFH_CNFH15			( 0U )
#define PORT_USER_ODCH_ODCH15			PORT_ODC_DISABLE
#define PORT_USER_CNPUH_CNPUH15		PORT_CNPU_DISABLE
#define PORT_USER_CNPDH_CNPDH15		PORT_CNPD_DISABLE
#define PORT_USER_CNEN0H_CNEN0H15		PORT_CNEN_DISABLE
#define PORT_USER_CNEN1H_CNEN1H15		PORT_CNEN_DISABLE
//#define PORT_USER_RPO_***				++++++
#else
#define PORT_USER_ANSELH_ANSELH15		( 0U )
#define PORT_USER_PORTH_RH15			( 0U )
#define PORT_USER_LATH_LATH15			( 0U )
#define PORT_USER_TRISH_TRISH15		( 0U )
#define PORT_USER_CNSTATH_CNSTATH15	( 0U )
#define PORT_USER_CNFH_CNFH15			( 0U )
#define PORT_USER_ODCH_ODCH15			( 0U )
#define PORT_USER_CNPUH_CNPUH15		( 0U )
#define PORT_USER_CNPDH_CNPDH15		( 0U )
#define PORT_USER_CNEN0H_CNEN0H15		( 0U )
#define PORT_USER_CNEN1H_CNEN1H15		( 0U )
//#define PORT_USER_RPO_***				++++++
#endif




#endif	/* PORT_USER_H */

