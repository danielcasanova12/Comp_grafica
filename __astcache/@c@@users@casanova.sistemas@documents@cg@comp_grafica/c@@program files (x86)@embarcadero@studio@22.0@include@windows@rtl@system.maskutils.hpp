// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.MaskUtils.pas' rev: 35.00 (Windows)

#ifndef System_MaskutilsHPP
#define System_MaskutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Maskutils
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TMaskCharType : unsigned char { mcNone, mcLiteral, mcIntlLiteral, mcDirective, mcMask, mcMaskOpt, mcFieldSeparator, mcField };

enum DECLSPEC_DENUM System_Maskutils__1 : unsigned char { mdReverseDir, mdUpperCase, mdLowerCase, mdLiteralChar };

typedef System::Set<System_Maskutils__1, System_Maskutils__1::mdReverseDir, System_Maskutils__1::mdLiteralChar> TMaskDirectives;

typedef System::UnicodeString TMaskedText;

typedef System::UnicodeString TEditMask;

//-- var, const, procedure ---------------------------------------------------
static const System::WideChar mDirReverse = (System::WideChar)(0x21);
static const System::WideChar mDirUpperCase = (System::WideChar)(0x3e);
static const System::WideChar mDirLowerCase = (System::WideChar)(0x3c);
static const System::WideChar mDirLiteral = (System::WideChar)(0x5c);
static const System::WideChar mMskAlpha = (System::WideChar)(0x4c);
static const System::WideChar mMskAlphaOpt = (System::WideChar)(0x6c);
static const System::WideChar mMskAlphaNum = (System::WideChar)(0x41);
static const System::WideChar mMskAlphaNumOpt = (System::WideChar)(0x61);
static const System::WideChar mMskAscii = (System::WideChar)(0x43);
static const System::WideChar mMskAsciiOpt = (System::WideChar)(0x63);
static const System::WideChar mMskNumeric = (System::WideChar)(0x30);
static const System::WideChar mMskNumericOpt = (System::WideChar)(0x39);
static const System::WideChar mMskNumSymOpt = (System::WideChar)(0x23);
static const System::WideChar mMskTimeSeparator = (System::WideChar)(0x3a);
static const System::WideChar mMskDateSeparator = (System::WideChar)(0x2f);
extern DELPHI_PACKAGE System::WideChar DefaultBlank;
extern DELPHI_PACKAGE System::WideChar MaskFieldSeparator;
extern DELPHI_PACKAGE System::WideChar MaskNoSave;
extern DELPHI_PACKAGE TMaskCharType __fastcall MaskGetCharType(const System::UnicodeString EditMask, int MaskOffset);
extern DELPHI_PACKAGE TMaskDirectives __fastcall MaskGetCurrentDirectives(const System::UnicodeString EditMask, int MaskOffset);
extern DELPHI_PACKAGE System::WideChar __fastcall MaskIntlLiteralToChar(System::WideChar IChar);
extern DELPHI_PACKAGE System::UnicodeString __fastcall MaskDoFormatText(const System::UnicodeString EditMask, const System::UnicodeString Value, System::WideChar Blank);
extern DELPHI_PACKAGE bool __fastcall MaskGetMaskSave(const System::UnicodeString EditMask);
extern DELPHI_PACKAGE System::WideChar __fastcall MaskGetMaskBlank(const System::UnicodeString EditMask);
extern DELPHI_PACKAGE int __fastcall MaskGetFldSeparator(const System::UnicodeString EditMask);
extern DELPHI_PACKAGE int __fastcall MaskOffsetToOffset(const System::UnicodeString EditMask, int MaskOffset);
extern DELPHI_PACKAGE int __fastcall MaskOffsetToWideOffset(const System::UnicodeString EditMask, int MaskOffset);
extern DELPHI_PACKAGE int __fastcall OffsetToMaskOffset(const System::UnicodeString EditMask, int Offset);
extern DELPHI_PACKAGE bool __fastcall IsLiteralChar(const System::UnicodeString EditMask, int Offset);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PadInputLiterals(const System::UnicodeString EditMask, const System::UnicodeString Value, System::WideChar Blank);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatMaskText(const System::UnicodeString EditMask, const System::UnicodeString Value);
}	/* namespace Maskutils */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_MASKUTILS)
using namespace System::Maskutils;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_MaskutilsHPP
