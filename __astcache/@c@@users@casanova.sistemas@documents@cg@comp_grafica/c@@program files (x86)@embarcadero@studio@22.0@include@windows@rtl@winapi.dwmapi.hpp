// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.Dwmapi.pas' rev: 35.00 (Windows)

#ifndef Winapi_DwmapiHPP
#define Winapi_DwmapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.UxTheme.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

#include "dwmapi.h"
#ifndef _WIN64
#pragma link "dwmapi.lib"
#endif //_WIN64


namespace Winapi
{
namespace Dwmapi
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef DWM_BLURBEHIND _DWM_BLURBEHIND;

typedef DWM_BLURBEHIND TDwmBlurBehind;

typedef DWM_BLURBEHIND *PDwmBlurBehind;

typedef DWM_THUMBNAIL_PROPERTIES _DWM_THUMBNAIL_PROPERTIES;

typedef DWM_THUMBNAIL_PROPERTIES TDwmThumbnailProperties;

typedef DWM_THUMBNAIL_PROPERTIES *PDwmThumbnailProperties;

typedef UNSIGNED_RATIO _UNSIGNED_RATIO;

typedef UNSIGNED_RATIO TUnsignedRatio;

typedef UNSIGNED_RATIO *PUnsignedRatio;

typedef DWM_TIMING_INFO _DWM_TIMING_INFO;

typedef DWM_TIMING_INFO TDwmTimingInfo;

typedef DWM_TIMING_INFO *PDwmTimingInfo;

typedef DWM_PRESENT_PARAMETERS _DWM_PRESENT_PARAMETERS;

typedef DWM_PRESENT_PARAMETERS TDwmPresentParameters;

typedef DWM_PRESENT_PARAMETERS *PDwmPresentParameters;

typedef MilMatrix3x2D _MilMatrix3x2D;

typedef MilMatrix3x2D TMilMatrix3x2D;

typedef MilMatrix3x2D *PMilMatrix3x2D;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 c_DwmMaxQueuedBuffers = System::Int8(0x8);
static const System::Int8 c_DwmMaxMonitors = System::Int8(0x10);
static const System::Int8 c_DwmMaxAdapters = System::Int8(0x10);
extern DELPHI_PACKAGE bool __fastcall DwmCompositionEnabled(void);
}	/* namespace Dwmapi */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_DWMAPI)
using namespace Winapi::Dwmapi;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_DwmapiHPP
