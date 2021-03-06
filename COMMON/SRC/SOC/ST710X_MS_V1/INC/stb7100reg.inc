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
; THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
;
;=======================================================================
;  COPYRIGHT (C) STMicroelectronics 2007.  ALL RIGHTS RESERVED
;
;  Use of this source code is subject to the terms of your STMicroelectronics
;  development license agreement. If you did not accept the terms of such a license,
;  you are not authorized to use this source code.
;
;  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
;  KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
;  IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
;  PURPOSE.
;========================================================================
;;
;;      File:   stb7100reg.inc
;;
;;------------------------------------------------------------------------------

/*
 * Base addresses for control register banks
 */

/* Generic SH4 control registers */
SH4_TMU_REGS_BASE                       .equ    0xffd80000
SH4_RTC_REGS_BASE                       .equ    0xffc80000

/* Common ST40 control registers */
ST40_CPG_REGS_BASE                      .equ    0xffc00000
ST40_INTC_REGS_BASE                     .equ    0xffd00000
ST40_INTC2_REGS_BASE                    .equ    0xfe080000
ST40_SCIF1_REGS_BASE                    .equ    0xffe00000
ST40_SCIF2_REGS_BASE                    .equ    0xffe80000

/* STb7100 control registers */
STB7100_PIO0_REGS_BASE                  .equ    0xb8020000
STB7100_PIO1_REGS_BASE                  .equ    0xb8021000
STB7100_PIO2_REGS_BASE                  .equ    0xb8022000
STB7100_PIO3_REGS_BASE                  .equ    0xb8023000
STB7100_PIO4_REGS_BASE                  .equ    0xb8024000
STB7100_PIO5_REGS_BASE                  .equ    0xb8025000
STB7100_SYSCONF_REGS_BASE               .equ    0xb9001000
STB7100_CLOCKGENA_REGS_BASE             .equ    0xb9213000

/* System Architecture Volume 2: Bus Interfaces */
ST40_LMISYS_REGS_BASE                   .equ    0xaf000000
ST40_LMIVID_REGS_BASE                   .equ    0xb7000000
ST40_EMI_REGS_BASE                      .equ    0xba100000

/*----------------------------------------------------------------------------*/

;; #include "st40reg.h"

/*
 * STb7100 control registers
 */

/* Clock Generator control registers (STb7100 variant) */
STB7100_CLOCKGENA_LOCK                  .equ    STB7100_CLOCKGENA_REGS_BASE + 0x00
STB7100_CLOCKGENA_MD_STATUS             .equ    STB7100_CLOCKGENA_REGS_BASE + 0x04
STB7100_CLOCKGENA_PLL0_CFG              .equ    STB7100_CLOCKGENA_REGS_BASE + 0x08
STB7100_CLOCKGENA_PLL0_STATUS           .equ    STB7100_CLOCKGENA_REGS_BASE + 0x10
STB7100_CLOCKGENA_PLL0_CLK1_CTRL        .equ    STB7100_CLOCKGENA_REGS_BASE + 0x14
STB7100_CLOCKGENA_PLL0_CLK2_CTRL        .equ    STB7100_CLOCKGENA_REGS_BASE + 0x18
STB7100_CLOCKGENA_PLL0_CLK3_CTRL        .equ    STB7100_CLOCKGENA_REGS_BASE + 0x1c
STB7100_CLOCKGENA_PLL0_CLK4_CTRL        .equ    STB7100_CLOCKGENA_REGS_BASE + 0x20
STB7100_CLOCKGENA_PLL1_CFG              .equ    STB7100_CLOCKGENA_REGS_BASE + 0x24
STB7100_CLOCKGENA_PLL1_STATUS           .equ    STB7100_CLOCKGENA_REGS_BASE + 0x2c
STB7100_CLOCKGENA_CLK_DIV               .equ    STB7100_CLOCKGENA_REGS_BASE + 0x30
STB7100_CLOCKGENA_CLOCK_ENABLE          .equ    STB7100_CLOCKGENA_REGS_BASE + 0x34
STB7100_CLOCKGENA_OUT_CTRL              .equ    STB7100_CLOCKGENA_REGS_BASE + 0x38
STB7100_CLOCKGENA_PLL1_BYPASS           .equ    STB7100_CLOCKGENA_REGS_BASE + 0x3c

/* Programmable I/O configuration registers (STb7100 variant) */
STB7100_PIO_PNOUT_OFFSET                .equ    0x0
STB7100_PIO_SET_PNOUT_OFFSET            .equ    0x4
STB7100_PIO_CLR_PNOUT_OFFSET            .equ    0x8
STB7100_PIO_PNIN_OFFSET                 .equ    0x10
STB7100_PIO_PNC0_OFFSET                 .equ    0x20
STB7100_PIO_SET_PNC0_OFFSET             .equ    0x24
STB7100_PIO_CLR_PNC0_OFFSET             .equ    0x28
STB7100_PIO_PNC1_OFFSET                 .equ    0x30
STB7100_PIO_SET_PNC1_OFFSET             .equ    0x34
STB7100_PIO_CLR_PNC1_OFFSET             .equ    0x38
STB7100_PIO_PNC2_OFFSET                 .equ    0x40
STB7100_PIO_SET_PNC2_OFFSET             .equ    0x44
STB7100_PIO_CLR_PNC2_OFFSET             .equ    0x48
STB7100_PIO_PNCOMP_OFFSET               .equ    0x50
STB7100_PIO_SET_PNCOMP_OFFSET           .equ    0x54
STB7100_PIO_CLR_PNCOMP_OFFSET           .equ    0x58
STB7100_PIO_PNMASK_OFFSET               .equ    0x60
STB7100_PIO_SET_PNMASK_OFFSET           .equ    0x64
STB7100_PIO_CLR_PNMASK_OFFSET           .equ    0x68

STB7100_PIO0_PNOUT                      .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_PNOUT_OFFSET
STB7100_PIO0_SET_PNOUT                  .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_SET_PNOUT_OFFSET
STB7100_PIO0_CLR_PNOUT                  .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_CLR_PNOUT_OFFSET
STB7100_PIO0_PNIN                       .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_PNIN_OFFSET
STB7100_PIO0_PNC0                       .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_PNC0_OFFSET
STB7100_PIO0_SET_PNC0                   .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_SET_PNC0_OFFSET
STB7100_PIO0_CLR_PNC0                   .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_CLR_PNC0_OFFSET
STB7100_PIO0_PNC1                       .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_PNC1_OFFSET
STB7100_PIO0_SET_PNC1                   .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_SET_PNC1_OFFSET
STB7100_PIO0_CLR_PNC1                   .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_CLR_PNC1_OFFSET
STB7100_PIO0_PNC2                       .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_PNC2_OFFSET
STB7100_PIO0_SET_PNC2                   .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_SET_PNC2_OFFSET
STB7100_PIO0_CLR_PNC2                   .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_CLR_PNC2_OFFSET
STB7100_PIO0_PNCOMP                     .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_PNCOMP_OFFSET
STB7100_PIO0_SET_PNCOMP                 .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_SET_PNCOMP_OFFSET
STB7100_PIO0_CLR_PNCOMP                 .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_CLR_PNCOMP_OFFSET
STB7100_PIO0_PNMASK                     .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_PNMASK_OFFSET
STB7100_PIO0_SET_PNMASK                 .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_SET_PNMASK_OFFSET
STB7100_PIO0_CLR_PNMASK                 .equ    STB7100_PIO0_REGS_BASE + STB7100_PIO_CLR_PNMASK_OFFSET

STB7100_PIO1_PNOUT                      .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_PNOUT_OFFSET
STB7100_PIO1_SET_PNOUT                  .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_SET_PNOUT_OFFSET
STB7100_PIO1_CLR_PNOUT                  .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_CLR_PNOUT_OFFSET
STB7100_PIO1_PNIN                       .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_PNIN_OFFSET
STB7100_PIO1_PNC0                       .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_PNC0_OFFSET
STB7100_PIO1_SET_PNC0                   .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_SET_PNC0_OFFSET
STB7100_PIO1_CLR_PNC0                   .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_CLR_PNC0_OFFSET
STB7100_PIO1_PNC1                       .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_PNC1_OFFSET
STB7100_PIO1_SET_PNC1                   .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_SET_PNC1_OFFSET
STB7100_PIO1_CLR_PNC1                   .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_CLR_PNC1_OFFSET
STB7100_PIO1_PNC2                       .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_PNC2_OFFSET
STB7100_PIO1_SET_PNC2                   .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_SET_PNC2_OFFSET
STB7100_PIO1_CLR_PNC2                   .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_CLR_PNC2_OFFSET
STB7100_PIO1_PNCOMP                     .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_PNCOMP_OFFSET
STB7100_PIO1_SET_PNCOMP                 .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_SET_PNCOMP_OFFSET
STB7100_PIO1_CLR_PNCOMP                 .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_CLR_PNCOMP_OFFSET
STB7100_PIO1_PNMASK                     .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_PNMASK_OFFSET
STB7100_PIO1_SET_PNMASK                 .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_SET_PNMASK_OFFSET
STB7100_PIO1_CLR_PNMASK                 .equ    STB7100_PIO1_REGS_BASE + STB7100_PIO_CLR_PNMASK_OFFSET

STB7100_PIO2_PNOUT                      .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_PNOUT_OFFSET
STB7100_PIO2_SET_PNOUT                  .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_SET_PNOUT_OFFSET
STB7100_PIO2_CLR_PNOUT                  .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_CLR_PNOUT_OFFSET
STB7100_PIO2_PNIN                       .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_PNIN_OFFSET
STB7100_PIO2_PNC0                       .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_PNC0_OFFSET
STB7100_PIO2_SET_PNC0                   .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_SET_PNC0_OFFSET
STB7100_PIO2_CLR_PNC0                   .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_CLR_PNC0_OFFSET
STB7100_PIO2_PNC1                       .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_PNC1_OFFSET
STB7100_PIO2_SET_PNC1                   .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_SET_PNC1_OFFSET
STB7100_PIO2_CLR_PNC1                   .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_CLR_PNC1_OFFSET
STB7100_PIO2_PNC2                       .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_PNC2_OFFSET
STB7100_PIO2_SET_PNC2                   .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_SET_PNC2_OFFSET
STB7100_PIO2_CLR_PNC2                   .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_CLR_PNC2_OFFSET
STB7100_PIO2_PNCOMP                     .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_PNCOMP_OFFSET
STB7100_PIO2_SET_PNCOMP                 .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_SET_PNCOMP_OFFSET
STB7100_PIO2_CLR_PNCOMP                 .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_CLR_PNCOMP_OFFSET
STB7100_PIO2_PNMASK                     .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_PNMASK_OFFSET
STB7100_PIO2_SET_PNMASK                 .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_SET_PNMASK_OFFSET
STB7100_PIO2_CLR_PNMASK                 .equ    STB7100_PIO2_REGS_BASE + STB7100_PIO_CLR_PNMASK_OFFSET

STB7100_PIO3_PNOUT                      .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_PNOUT_OFFSET
STB7100_PIO3_SET_PNOUT                  .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_SET_PNOUT_OFFSET
STB7100_PIO3_CLR_PNOUT                  .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_CLR_PNOUT_OFFSET
STB7100_PIO3_PNIN                       .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_PNIN_OFFSET
STB7100_PIO3_PNC0                       .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_PNC0_OFFSET
STB7100_PIO3_SET_PNC0                   .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_SET_PNC0_OFFSET
STB7100_PIO3_CLR_PNC0                   .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_CLR_PNC0_OFFSET
STB7100_PIO3_PNC1                       .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_PNC1_OFFSET
STB7100_PIO3_SET_PNC1                   .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_SET_PNC1_OFFSET
STB7100_PIO3_CLR_PNC1                   .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_CLR_PNC1_OFFSET
STB7100_PIO3_PNC2                       .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_PNC2_OFFSET
STB7100_PIO3_SET_PNC2                   .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_SET_PNC2_OFFSET
STB7100_PIO3_CLR_PNC2                   .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_CLR_PNC2_OFFSET
STB7100_PIO3_PNCOMP                     .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_PNCOMP_OFFSET
STB7100_PIO3_SET_PNCOMP                 .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_SET_PNCOMP_OFFSET
STB7100_PIO3_CLR_PNCOMP                 .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_CLR_PNCOMP_OFFSET
STB7100_PIO3_PNMASK                     .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_PNMASK_OFFSET
STB7100_PIO3_SET_PNMASK                 .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_SET_PNMASK_OFFSET
STB7100_PIO3_CLR_PNMASK                 .equ    STB7100_PIO3_REGS_BASE + STB7100_PIO_CLR_PNMASK_OFFSET

STB7100_PIO4_PNOUT                      .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_PNOUT_OFFSET
STB7100_PIO4_SET_PNOUT                  .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_SET_PNOUT_OFFSET
STB7100_PIO4_CLR_PNOUT                  .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_CLR_PNOUT_OFFSET
STB7100_PIO4_PNIN                       .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_PNIN_OFFSET
STB7100_PIO4_PNC0                       .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_PNC0_OFFSET
STB7100_PIO4_SET_PNC0                   .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_SET_PNC0_OFFSET
STB7100_PIO4_CLR_PNC0                   .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_CLR_PNC0_OFFSET
STB7100_PIO4_PNC1                       .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_PNC1_OFFSET
STB7100_PIO4_SET_PNC1                   .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_SET_PNC1_OFFSET
STB7100_PIO4_CLR_PNC1                   .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_CLR_PNC1_OFFSET
STB7100_PIO4_PNC2                       .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_PNC2_OFFSET
STB7100_PIO4_SET_PNC2                   .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_SET_PNC2_OFFSET
STB7100_PIO4_CLR_PNC2                   .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_CLR_PNC2_OFFSET
STB7100_PIO4_PNCOMP                     .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_PNCOMP_OFFSET
STB7100_PIO4_SET_PNCOMP                 .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_SET_PNCOMP_OFFSET
STB7100_PIO4_CLR_PNCOMP                 .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_CLR_PNCOMP_OFFSET
STB7100_PIO4_PNMASK                     .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_PNMASK_OFFSET
STB7100_PIO4_SET_PNMASK                 .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_SET_PNMASK_OFFSET
STB7100_PIO4_CLR_PNMASK                 .equ    STB7100_PIO4_REGS_BASE + STB7100_PIO_CLR_PNMASK_OFFSET

STB7100_PIO5_PNOUT                      .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_PNOUT_OFFSET
STB7100_PIO5_SET_PNOUT                  .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_SET_PNOUT_OFFSET
STB7100_PIO5_CLR_PNOUT                  .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_CLR_PNOUT_OFFSET
STB7100_PIO5_PNIN                       .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_PNIN_OFFSET
STB7100_PIO5_PNC0                       .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_PNC0_OFFSET
STB7100_PIO5_SET_PNC0                   .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_SET_PNC0_OFFSET
STB7100_PIO5_CLR_PNC0                   .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_CLR_PNC0_OFFSET
STB7100_PIO5_PNC1                       .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_PNC1_OFFSET
STB7100_PIO5_SET_PNC1                   .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_SET_PNC1_OFFSET
STB7100_PIO5_CLR_PNC1                   .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_CLR_PNC1_OFFSET
STB7100_PIO5_PNC2                       .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_PNC2_OFFSET
STB7100_PIO5_SET_PNC2                   .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_SET_PNC2_OFFSET
STB7100_PIO5_CLR_PNC2                   .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_CLR_PNC2_OFFSET
STB7100_PIO5_PNCOMP                     .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_PNCOMP_OFFSET
STB7100_PIO5_SET_PNCOMP                 .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_SET_PNCOMP_OFFSET
STB7100_PIO5_CLR_PNCOMP                 .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_CLR_PNCOMP_OFFSET
STB7100_PIO5_PNMASK                     .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_PNMASK_OFFSET
STB7100_PIO5_SET_PNMASK                 .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_SET_PNMASK_OFFSET
STB7100_PIO5_CLR_PNMASK                 .equ    STB7100_PIO5_REGS_BASE + STB7100_PIO_CLR_PNMASK_OFFSET

/* System configuration registers (STb7100 variant) */
STB7100_SYSCONF_DEVICEID_0              .equ    STB7100_SYSCONF_REGS_BASE + 0x0000
STB7100_SYSCONF_DEVICEID_1              .equ    STB7100_SYSCONF_REGS_BASE + 0x0004
STB7100_SYSCONF_DEVICEID                .equ    STB7100_SYSCONF_DEVICEID_0

STB7100_SYSCONF_SYS_STA00               .equ    STB7100_SYSCONF_REGS_BASE + 0x0008
STB7100_SYSCONF_SYS_STA01               .equ    STB7100_SYSCONF_REGS_BASE + 0x000c
STB7100_SYSCONF_SYS_STA02               .equ    STB7100_SYSCONF_REGS_BASE + 0x0010
STB7100_SYSCONF_SYS_STA03               .equ    STB7100_SYSCONF_REGS_BASE + 0x0014
STB7100_SYSCONF_SYS_STA04               .equ    STB7100_SYSCONF_REGS_BASE + 0x0018
STB7100_SYSCONF_SYS_STA05               .equ    STB7100_SYSCONF_REGS_BASE + 0x001c
STB7100_SYSCONF_SYS_STA06               .equ    STB7100_SYSCONF_REGS_BASE + 0x0020
STB7100_SYSCONF_SYS_STA07               .equ    STB7100_SYSCONF_REGS_BASE + 0x0024
STB7100_SYSCONF_SYS_STA08               .equ    STB7100_SYSCONF_REGS_BASE + 0x0028
STB7100_SYSCONF_SYS_STA09               .equ    STB7100_SYSCONF_REGS_BASE + 0x002c
STB7100_SYSCONF_SYS_STA10               .equ    STB7100_SYSCONF_REGS_BASE + 0x0030
STB7100_SYSCONF_SYS_STA11               .equ    STB7100_SYSCONF_REGS_BASE + 0x0034
STB7100_SYSCONF_SYS_STA12               .equ    STB7100_SYSCONF_REGS_BASE + 0x0038
STB7100_SYSCONF_SYS_STA13               .equ    STB7100_SYSCONF_REGS_BASE + 0x003c
STB7100_SYSCONF_SYS_STA14               .equ    STB7100_SYSCONF_REGS_BASE + 0x0040
STB7100_SYSCONF_SYS_CFG00               .equ    STB7100_SYSCONF_REGS_BASE + 0x0100
STB7100_SYSCONF_SYS_CFG01               .equ    STB7100_SYSCONF_REGS_BASE + 0x0104
STB7100_SYSCONF_SYS_CFG02               .equ    STB7100_SYSCONF_REGS_BASE + 0x0108
STB7100_SYSCONF_SYS_CFG03               .equ    STB7100_SYSCONF_REGS_BASE + 0x010c
STB7100_SYSCONF_SYS_CFG04               .equ    STB7100_SYSCONF_REGS_BASE + 0x0110
STB7100_SYSCONF_SYS_CFG05               .equ    STB7100_SYSCONF_REGS_BASE + 0x0114
STB7100_SYSCONF_SYS_CFG06               .equ    STB7100_SYSCONF_REGS_BASE + 0x0118
STB7100_SYSCONF_SYS_CFG07               .equ    STB7100_SYSCONF_REGS_BASE + 0x011c
STB7100_SYSCONF_SYS_CFG08               .equ    STB7100_SYSCONF_REGS_BASE + 0x0120
STB7100_SYSCONF_SYS_CFG09               .equ    STB7100_SYSCONF_REGS_BASE + 0x0124
STB7100_SYSCONF_SYS_CFG10               .equ    STB7100_SYSCONF_REGS_BASE + 0x0128
STB7100_SYSCONF_SYS_CFG11               .equ    STB7100_SYSCONF_REGS_BASE + 0x012c
STB7100_SYSCONF_SYS_CFG12               .equ    STB7100_SYSCONF_REGS_BASE + 0x0130
STB7100_SYSCONF_SYS_CFG13               .equ    STB7100_SYSCONF_REGS_BASE + 0x0134
STB7100_SYSCONF_SYS_CFG14               .equ    STB7100_SYSCONF_REGS_BASE + 0x0138
STB7100_SYSCONF_SYS_CFG15               .equ    STB7100_SYSCONF_REGS_BASE + 0x013c
STB7100_SYSCONF_SYS_CFG16               .equ    STB7100_SYSCONF_REGS_BASE + 0x0140
STB7100_SYSCONF_SYS_CFG17               .equ    STB7100_SYSCONF_REGS_BASE + 0x0144
STB7100_SYSCONF_SYS_CFG18               .equ    STB7100_SYSCONF_REGS_BASE + 0x0148
STB7100_SYSCONF_SYS_CFG19               .equ    STB7100_SYSCONF_REGS_BASE + 0x014c
STB7100_SYSCONF_SYS_CFG20               .equ    STB7100_SYSCONF_REGS_BASE + 0x0150
STB7100_SYSCONF_SYS_CFG21               .equ    STB7100_SYSCONF_REGS_BASE + 0x0154
STB7100_SYSCONF_SYS_CFG22               .equ    STB7100_SYSCONF_REGS_BASE + 0x0158
STB7100_SYSCONF_SYS_CFG23               .equ    STB7100_SYSCONF_REGS_BASE + 0x015c
STB7100_SYSCONF_SYS_CFG24               .equ    STB7100_SYSCONF_REGS_BASE + 0x0160
STB7100_SYSCONF_SYS_CFG25               .equ    STB7100_SYSCONF_REGS_BASE + 0x0164
STB7100_SYSCONF_SYS_CFG26               .equ    STB7100_SYSCONF_REGS_BASE + 0x0168
STB7100_SYSCONF_SYS_CFG27               .equ    STB7100_SYSCONF_REGS_BASE + 0x016c
STB7100_SYSCONF_SYS_CFG28               .equ    STB7100_SYSCONF_REGS_BASE + 0x0170
STB7100_SYSCONF_SYS_CFG29               .equ    STB7100_SYSCONF_REGS_BASE + 0x0174
STB7100_SYSCONF_SYS_CFG30               .equ    STB7100_SYSCONF_REGS_BASE + 0x0178
STB7100_SYSCONF_SYS_CFG31               .equ    STB7100_SYSCONF_REGS_BASE + 0x017c
STB7100_SYSCONF_SYS_CFG32               .equ    STB7100_SYSCONF_REGS_BASE + 0x0180
STB7100_SYSCONF_SYS_CFG33               .equ    STB7100_SYSCONF_REGS_BASE + 0x0184
STB7100_SYSCONF_SYS_CFG34               .equ    STB7100_SYSCONF_REGS_BASE + 0x0188
STB7100_SYSCONF_SYS_CFG35               .equ    STB7100_SYSCONF_REGS_BASE + 0x018c
STB7100_SYSCONF_SYS_CFG36               .equ    STB7100_SYSCONF_REGS_BASE + 0x0190
STB7100_SYSCONF_SYS_CFG37               .equ    STB7100_SYSCONF_REGS_BASE + 0x0194
STB7100_SYSCONF_SYS_CFG38               .equ    STB7100_SYSCONF_REGS_BASE + 0x0198
STB7100_SYSCONF_SYS_CFG39               .equ    STB7100_SYSCONF_REGS_BASE + 0x019c

