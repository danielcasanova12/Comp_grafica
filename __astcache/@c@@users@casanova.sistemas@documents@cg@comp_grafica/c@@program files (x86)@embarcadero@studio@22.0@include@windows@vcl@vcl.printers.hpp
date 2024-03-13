// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Printers.pas' rev: 35.00 (Windows)

#ifndef Vcl_PrintersHPP
#define Vcl_PrintersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.WinSpool.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------
#if defined(_VCL_ALIAS_RECORDS)
#if !defined(UNICODE)
#pragma alias "@Vcl@Printers@TPrinter@GetPrinterA$qqrpbt1t1rui"="@Vcl@Printers@TPrinter@GetPrinter$qqrpbt1t1rui"
#pragma alias "@Vcl@Printers@TPrinter@SetPrinterA$qqrpbt1t1ui"="@Vcl@Printers@TPrinter@SetPrinter$qqrpbt1t1ui"
#else
#pragma alias "@Vcl@Printers@TPrinter@GetPrinterW$qqrpbt1t1rui"="@Vcl@Printers@TPrinter@GetPrinter$qqrpbt1t1rui"
#pragma alias "@Vcl@Printers@TPrinter@SetPrinterW$qqrpbt1t1ui"="@Vcl@Printers@TPrinter@SetPrinter$qqrpbt1t1ui"
#endif
#endif
namespace Vcl
{
namespace Printers
{
using System::Uitypes::TPrinterState;
using System::Uitypes::TPrinterOrientation;
using System::Uitypes::TPrinterCapability;
using System::Uitypes::TPrinterCapabilities;
}	/* namespace Printers */
}	/* namespace Vcl */

namespace Vcl
{
namespace Printers
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EPrinter;
class DELPHICLASS TPrinter;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPrinter : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPrinter(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPrinter(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPrinter(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPrinter(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPrinter(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPrinter(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPrinter(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPrinter(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPrinter(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPrinter(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPrinter(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPrinter(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPrinter() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPrinter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	System::Classes::TStrings* FFonts;
	int FPageNumber;
	System::Classes::TStrings* FPrinters;
	int FPrinterIndex;
	System::UnicodeString FTitle;
	bool FPrinting;
	bool FAborted;
	System::Uitypes::TPrinterCapabilities FCapabilities;
	System::Uitypes::TPrinterState State;
	HDC DC;
	NativeUInt FPrinterHandle;
	_devicemodeW *FDevMode;
	NativeUInt FDeviceMode;
	void __fastcall SetState(System::Uitypes::TPrinterState Value);
	Vcl::Graphics::TCanvas* __fastcall GetCanvas();
	int __fastcall GetNumCopies();
	System::Classes::TStrings* __fastcall GetFonts();
	HDC __fastcall GetHandle();
	System::Uitypes::TPrinterOrientation __fastcall GetOrientation();
	int __fastcall GetPageHeight();
	int __fastcall GetPageWidth();
	int __fastcall GetPrinterIndex();
	void __fastcall SetPrinterCapabilities(int Value);
	void __fastcall SetPrinterIndex(int Value);
	System::Classes::TStrings* __fastcall GetPrinters();
	void __fastcall SetNumCopies(int Value);
	void __fastcall SetOrientation(System::Uitypes::TPrinterOrientation Value);
	void __fastcall SetToDefaultPrinter();
	void __fastcall CheckPrinting(bool Value);
	void __fastcall FreePrinters();
	void __fastcall FreeFonts();
	
public:
	__fastcall TPrinter();
	__fastcall virtual ~TPrinter();
	void __fastcall Abort();
	void __fastcall BeginDoc();
	void __fastcall EndDoc();
	void __fastcall NewPage();
	void __fastcall Refresh();
	void __fastcall GetPrinter(System::WideChar * ADevice, System::WideChar * ADriver, System::WideChar * APort, NativeUInt &ADeviceMode);
	void __fastcall SetPrinter(System::WideChar * ADevice, System::WideChar * ADriver, System::WideChar * APort, NativeUInt ADeviceMode);
	__property bool Aborted = {read=FAborted, nodefault};
	__property Vcl::Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property System::Uitypes::TPrinterCapabilities Capabilities = {read=FCapabilities, nodefault};
	__property int Copies = {read=GetNumCopies, write=SetNumCopies, nodefault};
	__property System::Classes::TStrings* Fonts = {read=GetFonts};
#ifndef _WIN64
	__property HDC Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HDC Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property System::Uitypes::TPrinterOrientation Orientation = {read=GetOrientation, write=SetOrientation, nodefault};
	__property int PageHeight = {read=GetPageHeight, nodefault};
	__property int PageWidth = {read=GetPageWidth, nodefault};
	__property int PageNumber = {read=FPageNumber, nodefault};
	__property int PrinterIndex = {read=GetPrinterIndex, write=SetPrinterIndex, nodefault};
	__property bool Printing = {read=FPrinting, nodefault};
	__property System::Classes::TStrings* Printers = {read=GetPrinters};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Uitypes::TPrinterOrientation poPortrait = (System::Uitypes::TPrinterOrientation)(0);
static const System::Uitypes::TPrinterOrientation poLandscape = (System::Uitypes::TPrinterOrientation)(1);
static const System::Uitypes::TPrinterCapability pcCopies = (System::Uitypes::TPrinterCapability)(0);
static const System::Uitypes::TPrinterCapability pcOrientation = (System::Uitypes::TPrinterCapability)(1);
static const System::Uitypes::TPrinterCapability pcCollation = (System::Uitypes::TPrinterCapability)(2);
extern DELPHI_PACKAGE void __fastcall AssignPrn(System::TextFile &F);
extern DELPHI_PACKAGE TPrinter* __fastcall Printer(void);
extern DELPHI_PACKAGE TPrinter* __fastcall SetPrinter(TPrinter* NewPrinter);
}	/* namespace Printers */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_PRINTERS)
using namespace Vcl::Printers;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_PrintersHPP
