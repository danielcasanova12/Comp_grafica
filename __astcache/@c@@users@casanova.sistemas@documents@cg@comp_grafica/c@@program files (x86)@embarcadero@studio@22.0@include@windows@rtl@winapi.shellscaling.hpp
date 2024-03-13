// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.ShellScaling.pas' rev: 35.00 (Windows)

#ifndef Winapi_ShellscalingHPP
#define Winapi_ShellscalingHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.MultiMon.hpp>

//-- user supplied -----------------------------------------------------------
#include <ShellScalingApi.h>
#pragma comment(lib, "shcore")

namespace Winapi
{
namespace Shellscaling
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef DISPLAY_DEVICE_TYPE TDisplayDeviceType;

typedef SCALE_CHANGE_FLAGS TScaleChangeFlags;

typedef PROCESS_DPI_AWARENESS TProcessDpiAwareness;

typedef MONITOR_DPI_TYPE TMonitorDpiType;

typedef SHELL_UI_COMPONENT TShellUiComponent;

//-- var, const, procedure ---------------------------------------------------
#define Shcore L"Shcore.dll"
}	/* namespace Shellscaling */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_SHELLSCALING)
using namespace Winapi::Shellscaling;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_ShellscalingHPP
