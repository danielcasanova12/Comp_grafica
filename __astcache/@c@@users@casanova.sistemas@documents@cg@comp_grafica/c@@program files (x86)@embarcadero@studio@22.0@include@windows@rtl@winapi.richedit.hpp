// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.RichEdit.pas' rev: 35.00 (Windows)

#ifndef Winapi_RicheditHPP
#define Winapi_RicheditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
#include <RichEdit.h>

namespace Winapi
{
namespace Richedit
{
//-- forward type declarations -----------------------------------------------
struct _CHARFORMAT2A;
struct _CHARFORMAT2W;
struct TReqSize;
struct TEndDropFiles;
struct TWMNotifyRE;
//-- type declarations -------------------------------------------------------
typedef CHARFORMATW CHARFORMAT;

typedef CHARFORMATA TCharFormatA;

typedef CHARFORMATW TCharFormatW;

typedef CHARFORMATW TCharFormat;

typedef CHARRANGE TCharRange;

typedef TEXTRANGEA TTextRangeA;

typedef TEXTRANGEW TTextRangeW;

typedef TEXTRANGEW TEXTRANGE;

typedef int __stdcall (*TEditStreamCallBack)(NativeUInt dwCookie, System::PByte pbBuff, int cb, int &pcb);

typedef EDITSTREAM TEditStream;

typedef FINDTEXTA TFindTextA;

typedef FINDTEXTW TFindTextW;

typedef FINDTEXTW TFindText;

typedef FINDTEXTEXA TFindTextExA;

typedef FINDTEXTEXW TFindTextExW;

typedef FINDTEXTEXW TFindTextEx;

typedef FORMATRANGE TFormatRange;

typedef PARAFORMAT TParaFormat;

#pragma pack(push,4)
struct DECLSPEC_DRECORD _CHARFORMAT2A
{
public:
	unsigned cbSize;
	unsigned dwMask;
	unsigned dwEffects;
	int yHeight;
	int yOffset;
	unsigned crTextColor;
	System::Byte bCharSet;
	System::Byte bPitchAndFamily;
	System::StaticArray<char, 32> szFaceName;
	System::Word wWeight;
	short sSpacing;
	unsigned crBackColor;
	unsigned lid;
	unsigned dwReserved;
	short sStyle;
	System::Word wKerning;
	System::Byte bUnderlineType;
	System::Byte bAnimation;
	System::Byte bRevAuthor;
	System::Byte bReserved1;
};
#pragma pack(pop)


#pragma pack(push,4)
struct DECLSPEC_DRECORD _CHARFORMAT2W
{
public:
	unsigned cbSize;
	unsigned dwMask;
	unsigned dwEffects;
	int yHeight;
	int yOffset;
	unsigned crTextColor;
	System::Byte bCharSet;
	System::Byte bPitchAndFamily;
	System::StaticArray<System::WideChar, 32> szFaceName;
	System::Word wWeight;
	short sSpacing;
	unsigned crBackColor;
	unsigned lid;
	unsigned dwReserved;
	short sStyle;
	System::Word wKerning;
	System::Byte bUnderlineType;
	System::Byte bAnimation;
	System::Byte bRevAuthor;
	System::Byte bReserved1;
};
#pragma pack(pop)


typedef _CHARFORMAT2A TCharFormat2A;

typedef _CHARFORMAT2W TCharFormat2W;

typedef _CHARFORMAT2W TCharFormat2;

typedef PARAFORMAT2 TParaFormat2;

typedef MSGFILTER *PMsgFilter;

typedef MSGFILTER TMsgFilter;

typedef TReqSize *PReqSize;

#pragma pack(push,4)
struct DECLSPEC_DRECORD TReqSize
{
public:
	tagNMHDR nmhdr;
	System::Types::TRect rc;
};
#pragma pack(pop)


typedef SELCHANGE *PSelChange;

typedef SELCHANGE TSelChange;

#pragma pack(push,4)
struct DECLSPEC_DRECORD TEndDropFiles
{
public:
	tagNMHDR nmhdr;
	NativeUInt hDrop;
	int cp;
	System::LongBool fProtected;
};
#pragma pack(pop)


typedef ENPROTECTED *PENProtected;

typedef ENPROTECTED TENProtected;

typedef ENSAVECLIPBOARD *PENSaveClipboard;

typedef ENSAVECLIPBOARD TENSaveClipboard;

typedef ENOLEOPFAILED TENOleOpFailed;

typedef OBJECTPOSITIONS TObjectPositions;

typedef ENLINK *PENLink;

typedef ENLINK TENLink;

typedef ENCORRECTTEXT TENCorrectText;

typedef PUNCTUATION TPunctuation;

typedef COMPCOLOR TCompColor;

typedef REPASTESPECIAL TRepasteSpecial;

typedef GETTEXTEX TGetTextEx;

typedef GETTEXTLENGTHEX TGetTextLengthEx;

struct DECLSPEC_DRECORD TWMNotifyRE
{
public:
	unsigned Msg;
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			TReqSize *ReqSize;
			NativeInt Result;
		};
		struct 
		{
			ENLINK *ENLink;
		};
		struct 
		{
			ENSAVECLIPBOARD *ENSaveClipBoard;
		};
		struct 
		{
			ENPROTECTED *ENProtected;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 SES_NOXLTSYMBOLRANGE = System::Int8(0x20);
static const System::Int8 FT_MATCHCASE _DEPRECATED_ATTRIBUTE1("Use CommDlg.FR_MATCHCASE")  = System::Int8(0x4);
static const System::Int8 FT_WHOLEWORD _DEPRECATED_ATTRIBUTE1("Use CommDlg.FR_WHOLEWORD")  = System::Int8(0x2);
static const System::Word PFE_TABLEROW = System::Word(0xc000);
static const System::Word PFE_TABLECELLEND = System::Word(0x8000);
static const System::Word PFE_TABLECELL = System::Word(0x4000);
extern DELPHI_PACKAGE NativeInt __fastcall SendEMGetTextExMessage(HWND hWnd, unsigned Msg, const GETTEXTEX &wParam, System::UnicodeString &lParam);
}	/* namespace Richedit */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_RICHEDIT)
using namespace Winapi::Richedit;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_RicheditHPP
