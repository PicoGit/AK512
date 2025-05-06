
#ifndef PORT_DRIVER_H
#define	PORT_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
#define PORT_ANSEL_ANALOG   0x01
#define PORT_ANSEL_DIGITAL  0x00


#define PORT_TRIS_INPUT     0x01
#define PORT_TRIS_OUTPUT    0x00

#define PORT_LAT_LOW        0x0
#define PORT_LAT_HIGH       0x01


#define PORT_ODC_ENABLE     0x01
#define PORT_ODC_DISABLE    0x00

#define PORT_CNEN_ENABLE     0x01
#define PORT_CNEN_DISABLE    0x00

#define PORT_CNPD_ENABLE     0x01
#define PORT_CNPD_DISABLE    0x00

#define PORT_CNPU_ENABLE     0x01
#define PORT_CNPU_DISABLE    0x00

#define PORT_CNCON_ON_DISABLE   0x00
#define PORT_CNCON_ON_ENABLE    0x01

#define PORT_CNCON_STYLE_0    0x00
#define PORT_CNCON_STYLE_1    0x01

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_Port_Set_All_Register(void);
void vdg_Port_Set_A_Register(void);
void vdg_Port_Set_B_Register(void);
void vdg_Port_Set_C_Register(void);
void vdg_Port_Set_D_Register(void);
void vdg_Port_Set_E_Register(void);
void vdg_Port_Set_F_Register(void);
void vdg_Port_Set_G_Register(void);
void vdg_Port_Set_H_Register(void);
#endif	/* PORT_DRIVER_H */

