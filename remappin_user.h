
#ifndef REMAPPIN_USER_H
#define	REMAPPIN_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "remappin_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* RPCONレジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPCON	( 0U )
/*----------------------------------------------------------------------------*/
/* RPINR0レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR0_INT1R	( RPI_NO_USE )
#define RP_USER_RPINR0_INT2R	( RPI_NO_USE )
#define RP_USER_RPINR0_INT3R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR1レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR1_INT4R	( RPI_NO_USE )
#define RP_USER_RPINR1_T1CKR	( RPI_NO_USE )
#define RP_USER_RPINR1_T2CKR	( RPI_NO_USE )
#define RP_USER_RPINR1_T3CKR	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR2レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR2_TCKI1R	( RPI_NO_USE )
#define RP_USER_RPINR2_ICM1R	( RPI_NO_USE )
#define RP_USER_RPINR2_TCKI2R	( RPI_NO_USE )
#define RP_USER_RPINR2_ICM2R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR3レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR3_TCKI3R	( RPI_NO_USE )
#define RP_USER_RPINR3_ICM3R	( RPI_NO_USE )
#define RP_USER_RPINR3_TCKI4R	( RPI_NO_USE )
#define RP_USER_RPINR3_ICM4R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR4レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR4_TCKI5R	( RPI_NO_USE )
#define RP_USER_RPINR4_ICM5R	( RPI_NO_USE )
#define RP_USER_RPINR4_TCKI6R	( RPI_NO_USE )
#define RP_USER_RPINR4_ICM6R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR5レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR5_TCKI7R	( RPI_NO_USE )
#define RP_USER_RPINR5_ICM7R	( RPI_NO_USE )
#define RP_USER_RPINR5_TCKI8R	( RPI_NO_USE )
#define RP_USER_RPINR5_ICM8R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR6レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR6_TCKI9R	( RPI_NO_USE )
#define RP_USER_RPINR6_ICM9R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR7レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR7_OCFAR	( RPI_NO_USE )
#define RP_USER_RPINR7_OCFBR	( RPI_NO_USE )
#define RP_USER_RPINR7_OCFCR	( RPI_NO_USE )
#define RP_USER_RPINR7_OCFDR	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR8レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR8_PCI8R	( RPI_NO_USE )
#define RP_USER_RPINR8_PCI9R	( RPI_NO_USE )
#define RP_USER_RPINR8_PCI10R	( RPI_NO_USE )
#define RP_USER_RPINR8_PCI11R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR9レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR9_QEIA1R	( RPI_NO_USE )
#define RP_USER_RPINR9_QEIB1R	( RPI_NO_USE )
#define RP_USER_RPINR9_QEINDX1R	( RPI_NO_USE )
#define RP_USER_RPINR9_QEIHOM1R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR10レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR10_QEIA2R	( RPI_NO_USE )
#define RP_USER_RPINR10_QEIB2R	( RPI_NO_USE )
#define RP_USER_RPINR10_QEINDX2R	( RPI_NO_USE )
#define RP_USER_RPINR10_QEIHOM2R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR11レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR11_QEIA3R	( RPI_NO_USE )
#define RP_USER_RPINR11_QEIB3R	( RPI_NO_USE )
#define RP_USER_RPINR11_QEINDX3R	( RPI_NO_USE )
#define RP_USER_RPINR11_QEIHOM3R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR12レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR12_QEIA4R	( RPI_NO_USE )
#define RP_USER_RPINR12_QEIB4R	( RPI_NO_USE )
#define RP_USER_RPINR12_QEINDX4R	( RPI_NO_USE )
#define RP_USER_RPINR12_QEIHOM4R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR13レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR13_U1RXR	( RPI_NO_USE )
#define RP_USER_RPINR13_U1DSRR	( RPI_NO_USE )
#define RP_USER_RPINR13_U2RXR	( RPI_NO_USE )
#define RP_USER_RPINR13_U2DSRR	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR14レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR14_U3RXR	( RPI_NO_USE )
#define RP_USER_RPINR14_U3DSRR	( RPI_NO_USE )
#define RP_USER_RPINR14_SDI1R	( RPI_NO_USE )
#define RP_USER_RPINR14_SCK1R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR15レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR15_SS1R	( RPI_NO_USE )
#define RP_USER_RPINR15_SDI2R	( RPI_NO_USE )
#define RP_USER_RPINR15_SCK2R	( RPI_NO_USE )
#define RP_USER_RPINR15_SS2R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR16レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR16_SDI3R	( RPI_NO_USE )
#define RP_USER_RPINR16_SCK3R	( RPI_NO_USE )
#define RP_USER_RPINR16_SS3R	( RPI_NO_USE )
#define RP_USER_RPINR16_SDI4R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR17レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR17_SCK4R	( RPI_NO_USE )
#define RP_USER_RPINR17_SS4R	( RPI_NO_USE )
#define RP_USER_RPINR17_CAN1RXR	( RPI_NO_USE )
#define RP_USER_RPINR17_CAN2RXR	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR18レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR18_SENT1R	( RPI_NO_USE )
#define RP_USER_RPINR18_SENT2R	( RPI_NO_USE )
#define RP_USER_RPINR18_REFI1R	( RPI_NO_USE )
#define RP_USER_RPINR18_REFI2R	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPINR19レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR19_PCI12R	( RPI_NO_USE )
#define RP_USER_RPINR19_PCI13R	( RPI_NO_USE )
#define RP_USER_RPINR19_PCI14R	( RPI_NO_USE )
#define RP_USER_RPINR19_PCI15R	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR20レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR20_PCI16R	( RPI_NO_USE )
#define RP_USER_RPINR20_PCI17R	( RPI_NO_USE )
#define RP_USER_RPINR20_PCI18R	( RPI_NO_USE )
#define RP_USER_RPINR20_CLCINAR	( RPI_NO_USE )
/*----------------------------------------------------------------------------*/
/* RPINR21レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR21_CLCINBR	( RPI_NO_USE )
#define RP_USER_RPINR21_CLCINCR	( RPI_NO_USE )
#define RP_USER_RPINR21_CLCINDR	( RPI_NO_USE )
#define RP_USER_RPINR21_CLCINER	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPINR22レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR22_CLCINFR	( RPI_NO_USE )
#define RP_USER_RPINR22_CLCINGR	( RPI_NO_USE )
#define RP_USER_RPINR22_CLCINHR	( RPI_NO_USE )
#define RP_USER_RPINR22_CLCINIR	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPINR23レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR23_CLCINJR	( RPI_NO_USE )
#define RP_USER_RPINR23_ADTRG31R	( RPI_NO_USE )
#define RP_USER_RPINR23_U1CTSR	( RPI_NO_USE )
#define RP_USER_RPINR23_U2CTSR	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPINR24レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR24_U3CTSR	( RPI_NO_USE )
#define RP_USER_RPINR24_BISS1SLR	( RPI_NO_USE )
#define RP_USER_RPINR24_BISS1GSR	( RPI_NO_USE )
#define RP_USER_RPINR24_IOM0R	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPINR25レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR25_IOM1R	( RPI_NO_USE )
#define RP_USER_RPINR25_IOM2R	( RPI_NO_USE )
#define RP_USER_RPINR25_IOM3R	( RPI_NO_USE )
#define RP_USER_RPINR25_IOM4R	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPINR26レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR26_IOM5R	( RPI_NO_USE )
#define RP_USER_RPINR26_IOM6R	( RPI_NO_USE )
#define RP_USER_RPINR26_IOM7R	( RPI_NO_USE )
#define RP_USER_RPINR26_PCI19R	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPINR27レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPINR27_PCI20R	( RPI_NO_USE )
#define RP_USER_RPINR27_PCI21R	( RPI_NO_USE )
#define RP_USER_RPINR27_PCI22R	( RPI_NO_USE )

/*----------------------------------------------------------------------------*/
/* RPOR0レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR0_RP1R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR0_RP2R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR0_RP3R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR0_RP4R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR1レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR1_RP5R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR1_RP6R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR1_RP7R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR1_RP8R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR2レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR2_RP9R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR2_RP10R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR2_RP11R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR2_RP12R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR3レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR3_RP13R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR3_RP14R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR3_RP15R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR3_RP16R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR4レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR4_RP17R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR4_RP18R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR4_RP19R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR4_RP20R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR5レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR5_RP21R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR5_RP22R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR5_RP23R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR5_RP24R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR6レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR6_RP25R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR6_RP26R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR6_RP27R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR6_RP28R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR7レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR7_RP29R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR7_RP30R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR7_RP31R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR7_RP32R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR8レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR8_RP33R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR8_RP34R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR8_RP35R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR8_RP36R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR9レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR9_RP37R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR9_RP38R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR9_RP39R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR9_RP40R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR10レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR10_RP41R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR10_RP42R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR10_RP43R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR10_RP44R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR11レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR11_RP45R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR11_RP46R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR11_RP47R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR11_RP48R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR12レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR12_RP49R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR12_RP50R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR12_RP51R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR12_RP52R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR13レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR13_RP53R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR13_RP54R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR13_RP55R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR13_RP56R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR14レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR14_RP57R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR14_RP58R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR14_RP59R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR14_RP60R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR15レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR15_RP61R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR15_RP62R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR15_RP63R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR15_RP64R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR16レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR16_RP65R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR16_RP66R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR16_RP67R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR16_RP68R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR17レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR17_RP69R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR17_RP70R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR17_RP71R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR17_RP72R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR18レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR18_RP73R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR18_RP74R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR18_RP75R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR20レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR20_RP81R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR20_RP82R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR20_RP83R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR20_RP84R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR21レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR21_RP86R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR21_RP87R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR21_RP88R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR22レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR22_RP89R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR22_RP90R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR22_RP91R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR22_RP92R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR24レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR24_RP97R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR24_RP98R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR24_RP99R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR25レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR25_RP101R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR25_RP102R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR25_RP103R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR25_RP104R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR26レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR26_RP105R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR26_RP106R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR26_RP107R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR28レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR28_RP113R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR28_RP114R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR28_RP115R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR32レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR32_RP129R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR32_RP130R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR32_RP131R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR32_RP132R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR33レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR33_RP133R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR33_RP134R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR33_RP135R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR33_RP136R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR34レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR34_RP137R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR34_RP138R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR34_RP139R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR34_RP140R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/* RPOR35レジスタ */
/*----------------------------------------------------------------------------*/
#define RP_USER_RPOR35_RP141R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR35_RP142R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR35_RP143R	( RPO_DEFAULT_PORT )
#define RP_USER_RPOR35_RP144R	( RPO_DEFAULT_PORT )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
#endif	/* REMAPPIN_USER_H */

