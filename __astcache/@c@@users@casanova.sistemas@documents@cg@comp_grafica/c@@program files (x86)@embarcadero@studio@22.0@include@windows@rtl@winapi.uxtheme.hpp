// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.UxTheme.pas' rev: 35.00 (Windows)

#ifndef Winapi_UxthemeHPP
#define Winapi_UxthemeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.CommCtrl.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

#include "uxtheme.h"


namespace Winapi
{
namespace Uxtheme
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef THEMESIZE TThemeSize;

typedef _MARGINS TMargins;

typedef _INTLIST TIntList;

typedef PROPERTYORIGIN TPropertyOrigin;

typedef _DTBGOPTS TDTBGOpts;

typedef DTT_CALLBACK_PROC TFNDTTCallbackProc;

typedef _DTTOPTS TDTTOpts;

typedef _WTA_OPTIONS TWTAOptions;

typedef _WTA_OPTIONS *PWTAOptions;

typedef _BP_ANIMATIONPARAMS TBPAnimationParams;

typedef _BP_ANIMATIONPARAMS *PBPAnimationParams;

typedef _BP_PAINTPARAMS TBPPaintParams;

typedef _BP_PAINTPARAMS *PBPPaintParams;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall FreeThemeLibrary(void);
extern DELPHI_PACKAGE bool __fastcall InitThemeLibrary(void);
extern DELPHI_PACKAGE bool __fastcall UseThemes(void);
}	/* namespace Uxtheme */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_UXTHEME)
using namespace Winapi::Uxtheme;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_UxthemeHPP
