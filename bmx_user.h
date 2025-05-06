
#ifndef BMX_USER_H
#define	BMX_USER_H

/*----------------------------------------------------------------------------*/
/*インクルードファイル*/
/*----------------------------------------------------------------------------*/
#include "bmx_driver.h"
/*----------------------------------------------------------------------------*/
/*定数定義*/
/*----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------*/
/* BMXINITPRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXINITPR_DMAPR	( 0U )
#define BMX_USER_BMXINITPR_CRYPTPR	( 0U )
#define BMX_USER_BMXINITPR_CAN1PR	( 0U )
#define BMX_USER_BMXINITPR_CAN2PR	( 0U )
#define BMX_USER_BMXINITPR_NVMPR	( 0U )
/*----------------------------------------------------------------------------*/
/* BMXIRAMLレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXIRAML	( 0U )
/*----------------------------------------------------------------------------*/
/* BMXIRAMHレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXIRAMH	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXXDATERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXXDATERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXXDATERR_ADDRERR	( 0U )
#define BMX_USER_BMXXDATERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXXDATERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXXDATERR_SFRRERR	( 0U )
#define BMX_USER_BMXXDATERR_XRAMRERR	( 0U )
#define BMX_USER_BMXXDATERR_YRAMRERR	( 0U )
#define BMX_USER_BMXXDATERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXXDATERR_DBGRERR	( 0U )
#define BMX_USER_BMXXDATERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXXDATERR_ADDWERR	( 0U )
#define BMX_USER_BMXXDATERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXXDATERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXXDATERR_SFRWERR	( 0U )
#define BMX_USER_BMXXDATERR_XRAMWERR	( 0U )
#define BMX_USER_BMXXDATERR_YRAMWERR	( 0U )
#define BMX_USER_BMXXDATERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXXDATERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXYDATERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXYDATERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXYDATERR_ADDRERR	( 0U )
#define BMX_USER_BMXYDATERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXYDATERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXYDATERR_SFRRERR	( 0U )
#define BMX_USER_BMXYDATERR_XRAMRERR	( 0U )
#define BMX_USER_BMXYDATERR_YRAMRERR	( 0U )
#define BMX_USER_BMXYDATERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXYDATERR_DBGRERR	( 0U )
#define BMX_USER_BMXYDATERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXYDATERR_ADDWERR	( 0U )
#define BMX_USER_BMXYDATERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXYDATERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXYDATERR_SFRWERR	( 0U )
#define BMX_USER_BMXYDATERR_XRAMWERR	( 0U )
#define BMX_USER_BMXYDATERR_YRAMWERR	( 0U )
#define BMX_USER_BMXYDATERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXYDATERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXDMAERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXDMAERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXDMAERR_ADDRERR	( 0U )
#define BMX_USER_BMXDMAERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXDMAERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXDMAERR_SFRRERR	( 0U )
#define BMX_USER_BMXDMAERR_XRAMRERR	( 0U )
#define BMX_USER_BMXDMAERR_YRAMRERR	( 0U )
#define BMX_USER_BMXDMAERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXDMAERR_DBGRERR	( 0U )
#define BMX_USER_BMXDMAERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXDMAERR_ADDWERR	( 0U )
#define BMX_USER_BMXDMAERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXDMAERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXDMAERR_SFRWERR	( 0U )
#define BMX_USER_BMXDMAERR_XRAMWERR	( 0U )
#define BMX_USER_BMXDMAERR_YRAMWERR	( 0U )
#define BMX_USER_BMXDMAERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXDMAERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXCPUERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXCPUERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXCPUERR_ADDRERR	( 0U )
#define BMX_USER_BMXCPUERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXCPUERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXCPUERR_SFRRERR	( 0U )
#define BMX_USER_BMXCPUERR_XRAMRERR	( 0U )
#define BMX_USER_BMXCPUERR_YRAMRERR	( 0U )
#define BMX_USER_BMXCPUERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXCPUERR_DBGRERR	( 0U )
#define BMX_USER_BMXCPUERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXCPUERR_ADDWERR	( 0U )
#define BMX_USER_BMXCPUERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXCPUERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXCPUERR_SFRWERR	( 0U )
#define BMX_USER_BMXCPUERR_XRAMWERR	( 0U )
#define BMX_USER_BMXCPUERR_YRAMWERR	( 0U )
#define BMX_USER_BMXCPUERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXCPUERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXCRYPTERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXCRYPTERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_ADDRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXCRYPTERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_SFRRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_XRAMRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_YRAMRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_DBGRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXCRYPTERR_ADDWERR	( 0U )
#define BMX_USER_BMXCRYPTERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXCRYPTERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXCRYPTERR_SFRWERR	( 0U )
#define BMX_USER_BMXCRYPTERR_XRAMWERR	( 0U )
#define BMX_USER_BMXCRYPTERR_YRAMWERR	( 0U )
#define BMX_USER_BMXCRYPTERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXCRYPTERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXCAN1ERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXCAN1ERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_ADDRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXCAN1ERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_SFRRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_XRAMRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_YRAMRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_DBGRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXCAN1ERR_ADDWERR	( 0U )
#define BMX_USER_BMXCAN1ERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXCAN1ERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXCAN1ERR_SFRWERR	( 0U )
#define BMX_USER_BMXCAN1ERR_XRAMWERR	( 0U )
#define BMX_USER_BMXCAN1ERR_YRAMWERR	( 0U )
#define BMX_USER_BMXCAN1ERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXCAN1ERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXCAN2ERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXCAN2ERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_ADDRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXCAN2ERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_SFRRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_XRAMRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_YRAMRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_DBGRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXCAN2ERR_ADDWERR	( 0U )
#define BMX_USER_BMXCAN2ERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXCAN2ERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXCAN2ERR_SFRWERR	( 0U )
#define BMX_USER_BMXCAN2ERR_XRAMWERR	( 0U )
#define BMX_USER_BMXCAN2ERR_YRAMWERR	( 0U )
#define BMX_USER_BMXCAN2ERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXCAN2ERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXNVMERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXNVMERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXNVMERR_ADDRERR	( 0U )
#define BMX_USER_BMXNVMERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXNVMERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXNVMERR_SFRRERR	( 0U )
#define BMX_USER_BMXNVMERR_XRAMRERR	( 0U )
#define BMX_USER_BMXNVMERR_YRAMRERR	( 0U )
#define BMX_USER_BMXNVMERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXNVMERR_DBGRERR	( 0U )
#define BMX_USER_BMXNVMERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXNVMERR_ADDWERR	( 0U )
#define BMX_USER_BMXNVMERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXNVMERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXNVMERR_SFRWERR	( 0U )
#define BMX_USER_BMXNVMERR_XRAMWERR	( 0U )
#define BMX_USER_BMXNVMERR_YRAMWERR	( 0U )
#define BMX_USER_BMXNVMERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXNVMERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/* BMXICDERRレジスタ */
/*----------------------------------------------------------------------------*/
#define BMX_USER_BMXICDERR_BADTGTRERR	( 0U )
#define BMX_USER_BMXICDERR_ADDRERR	( 0U )
#define BMX_USER_BMXICDERR_IRAMRDERR	( 0U )
#define BMX_USER_BMXICDERR_PGSPCRERR	( 0U )
#define BMX_USER_BMXICDERR_SFRRERR	( 0U )
#define BMX_USER_BMXICDERR_XRAMRERR	( 0U )
#define BMX_USER_BMXICDERR_YRAMRERR	( 0U )
#define BMX_USER_BMXICDERR_CRYPTRERR	( 0U )
#define BMX_USER_BMXICDERR_DBGRERR	( 0U )
#define BMX_USER_BMXICDERR_BADTGTWERR	( 0U )
#define BMX_USER_BMXICDERR_ADDWERR	( 0U )
#define BMX_USER_BMXICDERR_IRAMWRERR	( 0U )
#define BMX_USER_BMXICDERR_PGSPCWERR	( 0U )
#define BMX_USER_BMXICDERR_SFRWERR	( 0U )
#define BMX_USER_BMXICDERR_XRAMWERR	( 0U )
#define BMX_USER_BMXICDERR_YRAMWERR	( 0U )
#define BMX_USER_BMXICDERR_CRYPTWERR	( 0U )
#define BMX_USER_BMXICDERR_DBGWERR	( 0U )

/*----------------------------------------------------------------------------*/
/*変数定義*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*プロトタイプ宣言*/
/*----------------------------------------------------------------------------*/

#endif	/* BMX_USER_H */

