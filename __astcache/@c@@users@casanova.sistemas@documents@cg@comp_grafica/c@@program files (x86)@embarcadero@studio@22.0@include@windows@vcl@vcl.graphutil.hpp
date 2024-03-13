// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.GraphUtil.pas' rev: 35.00 (Windows)

#ifndef Vcl_GraphutilHPP
#define Vcl_GraphutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Graphutil
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::Classes::TIdentMapEntry> TColorArray;

typedef System::StaticArray<System::Classes::TIdentMapEntry, 138> Vcl_Graphutil__1;

enum DECLSPEC_DENUM TScrollDirection : unsigned char { sdLeft, sdRight, sdUp, sdDown };

enum DECLSPEC_DENUM TArrowType : unsigned char { atSolid, atArrows };

enum DECLSPEC_DENUM TGradientDirection : unsigned char { gdHorizontal, gdVertical };

enum DECLSPEC_DENUM TColorArraySortType : unsigned char { stHue, stSaturation, stLuminance, stRed, stGreen, stBlue, stCombo };

//-- var, const, procedure ---------------------------------------------------
static const System::Byte WebNamedColorsCount = System::Byte(0x8a);
extern DELPHI_PACKAGE Vcl_Graphutil__1 WebNamedColors;
extern DELPHI_PACKAGE void __fastcall ColorRGBToHLS(unsigned clrRGB, System::Word &Hue, System::Word &Luminance, System::Word &Saturation);
extern DELPHI_PACKAGE unsigned __fastcall ColorHLSToRGB(System::Word Hue, System::Word Luminance, System::Word Saturation);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ColorAdjustLuma(System::Uitypes::TColor clrRGB, int n, System::LongBool fScale);
extern DELPHI_PACKAGE void __fastcall GetRGB(System::Uitypes::TColor Col, System::Byte &R, System::Byte &G, System::Byte &B);
extern DELPHI_PACKAGE bool __fastcall ColorIsBright(System::Uitypes::TColor AColor);
extern DELPHI_PACKAGE void __fastcall SetPreMutipliedAlpha(Vcl::Graphics::TBitmap* ABitMap, System::Byte Alpha = (System::Byte)(0xff));
extern DELPHI_PACKAGE void __fastcall InitAlpha(Vcl::Graphics::TBitmap* ABitmap, System::Byte AAlpha);
extern DELPHI_PACKAGE bool __fastcall CheckAlpha(Vcl::Graphics::TBitmap* ABitmap);
extern DELPHI_PACKAGE void __fastcall FillRectAlpha(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, System::Uitypes::TColor AColor, System::Byte Alpha = (System::Byte)(0xff));
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetHighLightColor(const System::Uitypes::TColor Color, int Luminance = 0x13);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetShadowColor(const System::Uitypes::TColor Color, int Luminance = 0xffffffce);
extern DELPHI_PACKAGE void __fastcall DrawArrow(Vcl::Graphics::TCanvas* ACanvas, TScrollDirection Direction, const System::Types::TPoint &Location, int Size);
extern DELPHI_PACKAGE void __fastcall DrawChevron(Vcl::Graphics::TCanvas* ACanvas, TScrollDirection Direction, const System::Types::TPoint &Location, int Size);
extern DELPHI_PACKAGE void __fastcall DrawCheck _DEPRECATED_ATTRIBUTE0 (Vcl::Graphics::TCanvas* ACanvas, const System::Types::TPoint &Location, int Size, bool Shadow = true);
extern DELPHI_PACKAGE void __fastcall GradientFillCanvas(Vcl::Graphics::TCanvas* const ACanvas, const System::Uitypes::TColor AStartColor, const System::Uitypes::TColor AEndColor, const System::Types::TRect &ARect, const TGradientDirection Direction);
extern DELPHI_PACKAGE void __fastcall ScaleImage(Vcl::Graphics::TBitmap* const SourceBitmap, Vcl::Graphics::TBitmap* const ResizedBitmap, const double ScaleAmount, Vcl::Graphics::TPixelFormat PixelFormat = (Vcl::Graphics::TPixelFormat)(0x6));
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColorToWebColorStr(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColorToWebColorName(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE int __fastcall WebColorToRGB(int WebColor);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RGBToWebColorStr(int RGB);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RGBToWebColorName(int RGB);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall WebColorNameToColor(System::UnicodeString WebColorName);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall WebColorStrToColor(System::UnicodeString WebColor);
extern DELPHI_PACKAGE void __fastcall SortColorArray(TColorArray ColorArray, int L, int R, TColorArraySortType SortType, bool Reverse = false);
extern DELPHI_PACKAGE void __fastcall DrawTransparentBitmap(Vcl::Graphics::TBitmap* Source, Vcl::Graphics::TCanvas* Destination, const System::Types::TRect &DestRect, System::Byte Opacity)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawTransparentBitmap(Vcl::Graphics::TBitmap* Source, const System::Types::TRect &SourceRect, Vcl::Graphics::TCanvas* Destination, const System::Types::TRect &DestRect, System::Byte Opacity)/* overload */;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall SplitTransparentBitmap(Vcl::Graphics::TBitmap* Source, const System::Types::TRect &SourceRect);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ColorBlendRGB(const System::Uitypes::TColor From, const System::Uitypes::TColor To, const float Mu);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall LoadCompressedResourceBitmap(System::UnicodeString ResID);
}	/* namespace Graphutil */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_GRAPHUTIL)
using namespace Vcl::Graphutil;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_GraphutilHPP
