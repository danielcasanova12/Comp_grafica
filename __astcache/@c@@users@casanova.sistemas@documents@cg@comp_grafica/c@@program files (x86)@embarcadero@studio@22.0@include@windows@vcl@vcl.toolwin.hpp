// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ToolWin.pas' rev: 35.00 (Windows)

#ifndef Vcl_ToolwinHPP
#define Vcl_ToolwinHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------
#if defined(_VCL_ALIAS_RECORDS)
// Alias records for C++ code that cannot compile in STRICT mode yet.
#if !defined(STRICT)
  #pragma alias "@Vcl@Toolwin@TToolWindow@NCPaint$qqrpv"="@Vcl@Toolwin@TToolWindow@NCPaint$qqrp5HDC__"
#endif
#endif

namespace Vcl
{
namespace Toolwin
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TToolWindow;
class DELPHICLASS TToolDockObject;
class DELPHICLASS TToolDockForm;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEdgeBorder : unsigned char { ebLeft, ebTop, ebRight, ebBottom };

typedef System::Set<TEdgeBorder, TEdgeBorder::ebLeft, TEdgeBorder::ebBottom> TEdgeBorders;

enum DECLSPEC_DENUM TEdgeStyle : unsigned char { esNone, esRaised, esLowered };

class PASCALIMPLEMENTATION TToolWindow : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TEdgeBorders FEdgeBorders;
	TEdgeStyle FEdgeInner;
	TEdgeStyle FEdgeOuter;
	void __fastcall SetEdgeBorders(TEdgeBorders Value);
	void __fastcall SetEdgeInner(TEdgeStyle Value);
	void __fastcall SetEdgeOuter(TEdgeStyle Value);
	
protected:
	virtual void __fastcall NCPaint(HDC DC);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMBorderChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TToolWindow(System::Classes::TComponent* AOwner);
	__property TEdgeBorders EdgeBorders = {read=FEdgeBorders, write=SetEdgeBorders, default=15};
	__property TEdgeStyle EdgeInner = {read=FEdgeInner, write=SetEdgeInner, default=1};
	__property TEdgeStyle EdgeOuter = {read=FEdgeOuter, write=SetEdgeOuter, default=2};
public:
	/* TWinControl.CreateParented */ inline __fastcall TToolWindow(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TToolWindow() { }
	
};


class PASCALIMPLEMENTATION TToolDockObject : public Vcl::Controls::TDragDockObject
{
	typedef Vcl::Controls::TDragDockObject inherited;
	
protected:
	virtual void __fastcall AdjustDockRect(const System::Types::TRect &ARect);
	virtual void __fastcall DrawDragDockImage();
	virtual void __fastcall EraseDragDockImage();
	
public:
	__fastcall virtual TToolDockObject(Vcl::Controls::TControl* AControl);
public:
	/* TDragDockObject.Destroy */ inline __fastcall virtual ~TToolDockObject() { }
	
};


enum DECLSPEC_DENUM TSizingOrientation : unsigned char { soNone, soHorizontal, soVertical };

class PASCALIMPLEMENTATION TToolDockForm : public Vcl::Forms::TCustomDockForm
{
	typedef Vcl::Forms::TCustomDockForm inherited;
	
private:
	int FPrevWidth;
	int FPrevHeight;
	int FSizingAdjustH;
	int FSizingAdjustW;
	TSizingOrientation FSizingOrientation;
	bool FUpdatingSize;
	
protected:
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoAddDockClient(Vcl::Controls::TControl* Client, const System::Types::TRect &ARect);
	HIDESBASE MESSAGE void __fastcall WMNCCreate(Winapi::Messages::TWMNCCreate &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSysCommand(Winapi::Messages::TWMSysCommand &Message);
	
public:
	__fastcall virtual TToolDockForm(System::Classes::TComponent* AOwner);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TToolDockForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TCustomDockForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TToolDockForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TToolDockForm(HWND ParentWindow) : Vcl::Forms::TCustomDockForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Toolwin */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOOLWIN)
using namespace Vcl::Toolwin;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ToolwinHPP
