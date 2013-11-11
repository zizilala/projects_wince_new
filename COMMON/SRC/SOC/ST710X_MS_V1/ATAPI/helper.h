//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
//=======================================================================
//  COPYRIGHT (C) STMicroelectronics 2007.  ALL RIGHTS RESERVED
//
//  Use of this source code is subject to the terms of your STMicroelectronics
//  development license agreement. If you did not accept the terms of such a license,
//  you are not authorized to use this source code.
//
//  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
//  KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
//  PURPOSE.
//========================================================================
#ifndef _HELPER_H_
#define _HELPER_H_


BOOL AtaGetRegistryValue(HKEY hKey, PTSTR szValueName, PDWORD pdwValue);
BOOL AtaGetRegistryString( HKEY hKey, PTSTR szValueName, PTSTR *pszValue, DWORD dwSize=0);
BOOL AtaGetRegistryString2( HKEY hKey, PTSTR szValueName, PTSTR *pszValue, DWORD dwSize=0);
BOOL AtaSetRegistryValue(HKEY hKey, PTSTR szValueName, DWORD dwValue);
BOOL AtaSetRegistryValue2(HKEY hKey, PTSTR szValueName, DWORD dwValue);
BOOL AtaSetRegistryString( HKEY hKey, PTSTR szValueName, PTSTR szValue);
BOOL ATAParseIdString(BYTE *str, int len, DWORD *pdwOffset,BYTE **ppDest, DWORD *pcBytesLeft);
BOOL CeSafeCopyMemory (LPVOID pDst, LPCVOID pSrc, DWORD cbSize);

#endif // _HELPER_H_