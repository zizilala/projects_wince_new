
#define FLASH_BLOCK_SIZE ((33554432*2)/256)

typedef struct
{
    DWORD Offset;
    DWORD DataSize;
    PBYTE lpBuffer;
} uNandFLASH, *lpuNandFLASH;

typedef struct
{
    DWORD Offset;
    DWORD DataSize;
} NandRead, *lpuNandRead;


#define SysCtrlDriver	L"SYS1:"

#define FunctionCode	0x800


//#define WM_ADD_GPS_TRAYICON      (WM_APP + 1)

//#define WM_DELETE_GPS_TRAYICON   (WM_APP + 2)


#define ZSYS_GetBootInformation \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_GetSystemInformation \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+1, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_SetSystemInformation \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+2, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_GetSerialNumber \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+3, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_SetSerialNumber \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+4, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_Run_SW_Reset \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+5, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_GetBarcodePower \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+6, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_SetBarcodePower \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+7, METHOD_BUFFERED, FILE_ANY_ACCESS)
/*
#define ZSYS_GetTouchPanelState \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+8, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_SetTouchPanelState \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+9, METHOD_BUFFERED, FILE_ANY_ACCESS)
*/
#define ZSYS_GetBluetoothPower \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+10, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_GetWIFIState \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+11, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_ClearWIFIState \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+12, METHOD_BUFFERED, FILE_ANY_ACCESS)
/*
#define ZSYS_RESET_WIFI_FLAG \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+13, METHOD_BUFFERED, FILE_ANY_ACCESS)
*/
#define ZSYS_WRITE_FLASH \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+14, METHOD_BUFFERED, FILE_ANY_ACCESS)   
        
#define ZSYS_READ_FLASH \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+15, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_Get_BuiltIn_Devices \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+16, METHOD_BUFFERED, FILE_ANY_ACCESS)
/*
#define ZSYS_FIRMWARE_UPDATE \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+17, METHOD_BUFFERED, FILE_ANY_ACCESS)
*/
#define ZSYS_BCR_RESTART \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+18, METHOD_BUFFERED, FILE_ANY_ACCESS)
/*
#define ZSYS_GetGPSPower \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+19, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_SetGPSPower \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+20, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_GetDevicePowerOffState \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+21, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define ZSYS_SetDevicePowerOffState \
    CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+22, METHOD_BUFFERED, FILE_ANY_ACCESS)
*/
#define ZSYS_SetBluetoothPower \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+23, METHOD_BUFFERED, FILE_ANY_ACCESS)      

#define ZSYS_BCR_HW_Trigger \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+24, METHOD_BUFFERED, FILE_ANY_ACCESS)
/*
#define ZSYS_GetRFIDPower \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+25, METHOD_BUFFERED, FILE_ANY_ACCESS)
	
#define ZSYS_SetRFIDPower \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+26, METHOD_BUFFERED, FILE_ANY_ACCESS)
*/
#define ZSYS_GetVIBRATORPower \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+27, METHOD_BUFFERED, FILE_ANY_ACCESS)
	
#define ZSYS_SetVIBRATORPower \
	CTL_CODE(FILE_DEVICE_UNKNOWN,FunctionCode+28, METHOD_BUFFERED, FILE_ANY_ACCESS)
