;
; Copyright (c) Microsoft Corporation.  All rights reserved.
;
;
; Use of this sample source code is subject to the terms of the Microsoft
; license agreement under which you licensed this sample source code. If
; you did not accept the terms of the license agreement, you are not
; authorized to use this sample source code. For the terms of the license,
; please see the license agreement between you and Microsoft or, if applicable,
; see the LICENSE.RTF on your install media or the root of your tools installation.
; THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES.
;
;//
;// Portions Copyright (c) Texas Instruments.  All rights reserved.
;//
;//------------------------------------------------------------------------------
;//
;//  File:  omap2420_gpmc.h
;//
;//  This header file is comprised of the registers of GPMC module
;//
;//------------------------------------------------------------------------------

; Offsets from OMAP2420_GPMC_REGS_PA 0x6800A000

OMAP2420_GPMC_REVISION_OA           EQU 0x0
OMAP2420_GPMC_SYSCONFIG_OA          EQU 0x0010
OMAP2420_GPMC_SYSSTATUS_OA          EQU 0x0014
OMAP2420_GPMC_IRQSTATUS_OA          EQU 0x0018
OMAP2420_GPMC_IRQENABLE_OA			EQU 0x001C
OMAP2420_GPMC_TIMEOUT_CONTROL_OA    EQU 0x0040
OMAP2420_GPMC_ERR_ADDRESS_OA        EQU 0x0044
OMAP2420_GPMC_ERR_TYPE_OA           EQU 0x0048
OMAP2420_GPMC_CONFIG_OA             EQU 0x0050
OMAP2420_GPMC_STATUS_OA             EQU 0x0054
OMAP2420_GPMC_CONFIG1_0_OA          EQU 0x0060
OMAP2420_GPMC_CONFIG2_0_OA          EQU 0x0064
OMAP2420_GPMC_CONFIG3_0_OA          EQU 0x0068
OMAP2420_GPMC_CONFIG4_0_OA          EQU 0x006C
OMAP2420_GPMC_CONFIG5_0_OA          EQU 0x0070
OMAP2420_GPMC_CONFIG6_0_OA          EQU 0x0074
OMAP2420_GPMC_CONFIG7_0_OA			EQU 0x0078
OMAP2420_GPMC_NAND_COMMAND_0_OA     EQU 0x007C
OMAP2420_GPMC_NAND_ADDRESS_0_OA     EQU 0x0080
OMAP2420_GPMC_NAND_DATA_0_OA        EQU 0x0084
OMAP2420_GPMC_CONFIG1_1_OA          EQU 0x0090
OMAP2420_GPMC_CONFIG2_1_OA          EQU 0x0094
OMAP2420_GPMC_CONFIG3_1_OA          EQU 0x0098
OMAP2420_GPMC_CONFIG4_1_OA          EQU 0x009C
OMAP2420_GPMC_CONFIG5_1_OA          EQU 0x00A0
OMAP2420_GPMC_CONFIG6_1_OA          EQU 0x00A4
OMAP2420_GPMC_CONFIG7_1_OA          EQU 0x00A8
OMAP2420_GPMC_NAND_COMMAND_1_OA     EQU 0x00AC
OMAP2420_GPMC_NAND_ADDRESS_1_OA     EQU 0x00B0
OMAP2420_GPMC_NAND_DATA_1_OA        EQU 0x00B4
OMAP2420_GPMC_CONFIG1_2_OA          EQU 0x00C0
OMAP2420_GPMC_CONFIG2_2_OA          EQU 0x00C4
OMAP2420_GPMC_CONFIG3_2_OA          EQU 0x00C8
OMAP2420_GPMC_CONFIG4_2_OA          EQU 0x00CC
OMAP2420_GPMC_CONFIG5_2_OA          EQU 0x00D0
OMAP2420_GPMC_CONFIG6_2_OA          EQU 0x00D4
OMAP2420_GPMC_CONFIG7_2_OA          EQU 0x00D8
OMAP2420_GPMC_NAND_COMMAND_2_OA     EQU 0x00DC
OMAP2420_GPMC_NAND_ADDRESS_2_OA     EQU 0x00E0
OMAP2420_GPMC_NAND_DATA_2_OA        EQU 0x00E4
OMAP2420_GPMC_CONFIG1_3_OA          EQU 0x00F0
OMAP2420_GPMC_CONFIG2_3_OA          EQU 0x00F4
OMAP2420_GPMC_CONFIG3_3_OA          EQU 0x00F8
OMAP2420_GPMC_CONFIG4_3_OA          EQU 0x00FC
OMAP2420_GPMC_CONFIG5_3_OA          EQU 0x0100
OMAP2420_GPMC_CONFIG6_3_OA          EQU 0x0104
OMAP2420_GPMC_CONFIG7_3_OA          EQU 0x0108
OMAP2420_GPMC_NAND_COMMAND_3_OA     EQU 0x010C
OMAP2420_GPMC_NAND_ADDRESS_3_OA     EQU 0x0110
OMAP2420_GPMC_NAND_DATA_3_OA        EQU 0x0114
OMAP2420_GPMC_CONFIG1_4_OA          EQU 0x0120
OMAP2420_GPMC_CONFIG2_4_OA          EQU 0x0124
OMAP2420_GPMC_CONFIG3_4_OA          EQU 0x0128
OMAP2420_GPMC_CONFIG4_4_OA          EQU 0x012C
OMAP2420_GPMC_CONFIG5_4_OA          EQU 0x0130
OMAP2420_GPMC_CONFIG6_4_OA          EQU 0x0134
OMAP2420_GPMC_CONFIG7_4_OA          EQU 0x0138
OMAP2420_GPMC_NAND_COMMAND_4_OA     EQU 0x013C
OMAP2420_GPMC_NAND_ADDRESS_4_OA     EQU 0x0140
OMAP2420_GPMC_NAND_DATA_4_OA        EQU 0x0144
OMAP2420_GPMC_CONFIG1_5_OA          EQU 0x0150
OMAP2420_GPMC_CONFIG2_5_OA          EQU 0x0154
OMAP2420_GPMC_CONFIG3_5_OA          EQU 0x0158
OMAP2420_GPMC_CONFIG4_5_OA          EQU 0x015C
OMAP2420_GPMC_CONFIG5_5_OA          EQU 0x0160
OMAP2420_GPMC_CONFIG6_5_OA          EQU 0x0164
OMAP2420_GPMC_CONFIG7_5_OA          EQU 0x0168
OMAP2420_GPMC_NAND_COMMAND_5_OA     EQU 0x016C
OMAP2420_GPMC_NAND_ADDRESS_5_OA     EQU 0x0170
OMAP2420_GPMC_NAND_DATA_5_OA        EQU 0x0174
OMAP2420_GPMC_CONFIG1_6_OA          EQU 0x0180
OMAP2420_GPMC_CONFIG2_6_OA          EQU 0x0184
OMAP2420_GPMC_CONFIG3_6_OA          EQU 0x0188
OMAP2420_GPMC_CONFIG4_6_OA          EQU 0x018C
OMAP2420_GPMC_CONFIG5_6_OA          EQU 0x0190
OMAP2420_GPMC_CONFIG6_6_OA          EQU 0x0194
OMAP2420_GPMC_CONFIG7_6_OA          EQU 0x0198
OMAP2420_GPMC_NAND_COMMAND_6_OA     EQU 0x019C
OMAP2420_GPMC_NAND_ADDRESS_6_OA     EQU 0x01A0
OMAP2420_GPMC_NAND_DATA_6_OA        EQU 0x01A4
OMAP2420_GPMC_CONFIG1_7_OA          EQU 0x01B0
OMAP2420_GPMC_CONFIG2_7_OA          EQU 0x01B4
OMAP2420_GPMC_CONFIG3_7_OA          EQU 0x01B8
OMAP2420_GPMC_CONFIG4_7_OA          EQU 0x01BC
OMAP2420_GPMC_CONFIG5_7_OA          EQU 0x01C0
OMAP2420_GPMC_CONFIG6_7_OA          EQU 0x01C4
OMAP2420_GPMC_CONFIG7_7_OA          EQU 0x01C8
OMAP2420_GPMC_NAND_COMMAND_7_OA     EQU 0x01CC
OMAP2420_GPMC_NAND_ADDRESS_7_OA     EQU 0x01D0
OMAP2420_GPMC_NAND_DATA_7_OA        EQU 0x01D4
OMAP2420_GPMC_PREFETCH_CONFIG1      EQU 0x01E0
OMAP2420_GPMC_PREFETCH_CONFIG2      EQU 0x01E4
OMAP2420_GPMC_PREFETCH_CONTROL      EQU 0x01EC
OMAP2420_GPMC_PREFETCH_STATUS       EQU 0x01F0
OMAP2420_GPMC_ECC_CONFIG            EQU 0x01F4
OMAP2420_GPMC_ECC_CONTROL           EQU 0x01F8
OMAP2420_GPMC_ECC_SIZE_CONFIG       EQU 0x01FC
OMAP2420_GPMC_ECC1_RESULT           EQU 0x0200
OMAP2420_GPMC_ECC2_RESULT           EQU 0x0204
OMAP2420_GPMC_ECC3_RESULT           EQU 0x0208
OMAP2420_GPMC_ECC4_RESULT           EQU 0x020C
OMAP2420_GPMC_ECC5_RESULT           EQU 0x0210
OMAP2420_GPMC_ECC6_RESULT           EQU 0x0214
OMAP2420_GPMC_ECC7_RESULT           EQU 0x0218
OMAP2420_GPMC_ECC8_RESULT           EQU 0x021C
OMAP2420_GPMC_ECC9_RESULT           EQU 0x0220
OMAP2420_GPMC_TESTMODE_CTRL         EQU 0x0230
OMAP2420_GPMC_PSA_LSB               EQU 0x0234
OMAP2420_GPMC_PSA_MSB               EQU 0x0238


   END
