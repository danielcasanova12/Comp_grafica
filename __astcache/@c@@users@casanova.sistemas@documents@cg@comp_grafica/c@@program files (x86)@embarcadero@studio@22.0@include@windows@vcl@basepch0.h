/////////////////////////////////////////////////////////////////////////////////
// BASEPCH0.H - Borland C++ Builder pre-compiled header file
// 1.2
// Copyright (c) 1997, 2002 Borland Software Corporation
//
// BASEPCH0.H is the core header that includes VCL headers. The headers
// included by BASEPCH0.H are governed by the following macros:
//
//  MACRO                   DESCRIPTION                                 DEFAULT
// =======                 =============                                =======
//
//  NO_WIN32_LEAN_AND_MEAN  When this macro is defined, BASEPCH.H does    OFF
//                          not define WIN32_LEAN_AND_MEAN.
//
//  INC_VCL                 This macro is defined by VCL.H to             OFF
//                          include the base set of VCL headers
//
//  VCL_FULL                Same as NO_WIN32_LEAN_AND_MEAN                OFF
//                          (NOTE: This macro is for BCB v1.0 backward
//                          compatibility)
//
//  INC_VCLDB_HEADERS       When this macro is defined, VCL.H includes
//    requires INC_VCL      the core Database headers of VCL.             OFF
//                          (Defining this macro is functionally
//                          equivalent to including VCLDB.H)
//
//  INC_VCLEXT_HEADERS      When this macro is defined, VCL.H includes
//    requires INC_VCL      all VCL headers.                              OFF
//                          (Defining this macro is functionally
//                          equivalent to including VCLMAX.H)
//
/////////////////////////////////////////////////////////////////////////////////
#ifndef __BASEPCH0_H__
#define __BASEPCH0_H__

// v1.0 of BCB checked for VCL_FULL to avoid LEAN_AND_MEAN support
//
#if defined(VCL_FULL)                 // BCB v1.0 compatible
#define NO_WIN32_LEAN_AND_MEAN
#endif

#if !defined(_WINDOWS_)               // Don't optimize if WINDOWS.H has already been included
#if !defined(NO_WIN32_LEAN_AND_MEAN)
#define WIN32_LEAN_AND_MEAN           // Enable LEAN_AND_MEAN support
#define  _VCL_LEAN_AND_MEAN           // BCB v1.0 compatible
#endif                                // NO_WIN32_LEAN_AND_MEAN
#endif                                // _WINDOWS_

#if !defined(COM_NO_WINDOWS_H)        // Make sure COM Headers don't include WINDOWS.H/OLE2.H
#define COM_NO_WINDOWS_H
#define UNDEF_COM_NO_WINDOWS_H
#endif

#if !defined(RPC_NO_WINDOWS_H)        // Make sure RPC Headers don't include WINDOWS.H
#define RPC_NO_WINDOWS_H
#define UNDEF_RPC_NO_WINDOWS_H
#endif


// Core (minimal) Delphi RTL headers
//
#include <System.hpp>
#include <System.Types.hpp>
#if defined(_WIN32)
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#endif
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

// Core (minimal) VCL headers
//
#if defined(INC_VCL)
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>

// VCL Database related headers
//
#if defined(INC_VCLDB_HEADERS)
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#endif  //  INC_VCLDB_HEADERS

// Full set of VCL headers
//
#if defined(INC_VCLEXT_HEADERS)
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCGrids.hpp>
#include <Vcl.DdeMan.hpp>
#include <Vcl.FileCtrl.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.MPlayer.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.OleCtnrs.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Vcl.Tabnotbk.hpp>
#include <Vcl.Tabs.hpp>
#endif  // INC_VCLEXT_HEADERS

#endif  //  INC_VCL

#if defined(INC_OLE_HEADERS)
#include <cguid.h>
#include <dir.h>
#include <malloc.h>
#include <objbase.h>
#include <ole2.h>
#include <shellapi.h>
#include <stddef.h>
#include <tchar.h>
#include <urlmon.h>
#include <Vcl.AxCtrls.hpp>
#include <Datasnap.DataBkr.hpp>
#include <Vcl.OleCtnrs.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Winapi.Mtx.hpp>
#endif

// Using ATLVCL.H
//
#if defined(INC_ATL_HEADERS)
//#define NO_ATL
#if defined(NO_ATL)

// Short-circuit ATL Headers
#define __ATLVCL_H_
#define __ATLCTL_H__
#define __ATLCOM_H__
#define __ATLBASE_H__

#include <axbase.h>
#include <axrdm.h>

#else
#include <atl\atlvcl.h>
#endif // defined(NO_ATL)
#endif

#if defined(UNDEF_COM_NO_WINDOWS_H)   // Clean up MACRO to prevent inclusion of WINDOWS.H/OLE2.H
#undef COM_NO_WINDOWS_H
#undef UNDEF_COM_NO_WINDOWS_H
#endif

#if defined(UNDEF_RPC_NO_WINDOWS_H)   // Clean up MACRO to prevent inclusion of WINDOWS.H
#undef RPC_NO_WINDOWS_H
#undef UNDEF_RPC_NO_WINDOWS_H
#endif

#endif  // __BASEPCH0_H__
