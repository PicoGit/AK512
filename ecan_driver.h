
#ifndef CAN_DRIVER_H
#define	CAN_DRIVER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/
typedef enum
{
    CAN_DRV_RET_NULL = 0,
    CAN_DRV_RET_OK,
    CAN_DRV_RET_NG,
    CAN_DRV_RET_INVARID_INPUT,
    CAN_DRV_RET_TIMEOUT,
    CAN_DRV_RET_CORE_ERROR        
}CAN_DRV_RET;

/*----------------------------------------------------------------------------*/
/*CAN Frame モード*/
/*----------------------------------------------------------------------------*/
#define CAN_FRAME_20     0
#define CAN_FRAME_FD     1
/*----------------------------------------------------------------------------*/
/*DLCサイズ*/
/*----------------------------------------------------------------------------*/
#define CAN_DLC_0BYTE  0
#define CAN_DLC_1BYTE  1
#define CAN_DLC_2BYTE  2
#define CAN_DLC_3BYTE  3
#define CAN_DLC_4BYTE  4
#define CAN_DLC_5BYTE  5
#define CAN_DLC_6BYTE  6
#define CAN_DLC_7BYTE  7
#define CAN_DLC_8BYTE  8
#define CAN_DLC_12BYTE  9
#define CAN_DLC_16BYTE  10
#define CAN_DLC_20BYTE  11
#define CAN_DLC_24BYTE  12
#define CAN_DLC_32BYTE  13
#define CAN_DLC_48BYTE  14
#define CAN_DLC_64BYTE  15
/*----------------------------------------------------------------------------*/
/*Patloadサイズ*/
/*----------------------------------------------------------------------------*/
#define CAN_PAYLOAD_8BYTE      0
#define CAN_PAYLOAD_12BYTE     1
#define CAN_PAYLOAD_16BYTE     2
#define CAN_PAYLOAD_20BYTE     3
#define CAN_PAYLOAD_24BYTE     4
#define CAN_PAYLOAD_32BYTE     5
#define CAN_PAYLOAD_48BYTE     6
#define CAN_PAYLOAD_64BYTE     7

/*----------------------------------------------------------------------------*/
/*動作モード*/
/*----------------------------------------------------------------------------*/
#define CAN_MODE_NORMAL        0
#define CAN_MODE_DISABLE       1
#define CAN_MODE_INT_LOOPBACK  2
#define CAN_MODE_LISTEN_ONLY   3
#define CAN_MODE_CONFIG        4
#define CAN_MODE_EXT_LOOPBACK  5
#define CAN_MODE_NOMAL_CAN20   6
#define CAN_MODE_RESTRICTED    7

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/
void vdg_CAN_Set_Register(void);
void vdg_CAN1_Set_Register(void);

CAN_DRV_RET u2g_CAN1_Set_Filter(_u2 u2a_FilterID,_u2 u2a_SID,_u4 u4a_EID,_u2 u2a_EXIDE);
CAN_DRV_RET u2g_CAN1_Set_Mask(_u2 u2a_FilterID,_u2 u2a_SID,_u4 u4a_EID,_u2 u2a_EXIDE);
CAN_DRV_RET u2g_CAN1_Init_FilterObj(void);


void vdg_CAN2_Set_Register(void);

#endif	/* CAN_DRIVER_H */

