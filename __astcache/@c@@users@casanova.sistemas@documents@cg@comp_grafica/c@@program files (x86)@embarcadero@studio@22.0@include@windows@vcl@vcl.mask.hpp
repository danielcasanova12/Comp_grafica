// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Mask.pas' rev: 35.00 (Windows)

#ifndef Vcl_MaskHPP
#define Vcl_MaskHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.MaskUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Mask
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EDBEditError;
class DELPHICLASS TCustomMaskEdit;
class DELPHICLASS TMaskEdit;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EDBEditError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDBEditError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDBEditError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDBEditError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDBEditError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDBEditError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDBEditError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDBEditError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDBEditError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDBEditError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDBEditError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDBEditError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDBEditError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDBEditError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM Vcl_Mask__2 : unsigned char { msMasked, msReEnter, msDBSetText };

typedef System::Set<Vcl_Mask__2, Vcl_Mask__2::msMasked, Vcl_Mask__2::msDBSetText> TMaskedState;

class PASCALIMPLEMENTATION TCustomMaskEdit : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
private:
	System::Maskutils::TEditMask FEditMask;
	System::WideChar FMaskBlank;
	int FMaxChars;
	bool FMaskSave;
	TMaskedState FMaskState;
	int FCaretPos;
	int FBtnDownX;
	System::UnicodeString FOldValue;
	bool FSettingCursor;
	System::Maskutils::TEditMask FSavedEditMask;
	bool __fastcall DoInputChar(System::WideChar &NewChar, int MaskOffset);
	bool __fastcall InputChar(System::WideChar &NewChar, int Offset);
	bool __fastcall DeleteSelection(System::UnicodeString &Value, int Offset, int Len);
	int __fastcall InputString(System::UnicodeString &Value, const System::UnicodeString NewValue, int Offset);
	System::UnicodeString __fastcall AddEditFormat(const System::UnicodeString Value, bool Active);
	System::UnicodeString __fastcall RemoveEditFormat(const System::UnicodeString Value);
	int __fastcall FindLiteralChar(int MaskOffset, System::WideChar InChar);
	System::UnicodeString __fastcall GetEditText();
	bool __fastcall GetMasked();
	HIDESBASE System::Maskutils::TMaskedText __fastcall GetText();
	int __fastcall GetMaxLength();
	bool __fastcall CharKeys(System::WideChar &CharCode);
	void __fastcall SetEditText(const System::UnicodeString Value);
	void __fastcall SetEditMask(const System::Maskutils::TEditMask Value);
	HIDESBASE void __fastcall SetMaxLength(int Value);
	HIDESBASE void __fastcall SetText(const System::Maskutils::TMaskedText Value);
	void __fastcall DeleteKeys(System::Word CharCode);
	void __fastcall HomeEndKeys(System::Word CharCode, System::Classes::TShiftState Shift);
	void __fastcall CursorInc(int CursorPos, int Incr);
	void __fastcall CursorDec(int CursorPos);
	void __fastcall ArrowKeys(System::Word CharCode, System::Classes::TShiftState Shift);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Message);
	
protected:
	void __fastcall ReformatText(const System::UnicodeString NewMask);
	void __fastcall GetSel(int &SelStart, int &SelStop);
	void __fastcall SetSel(int SelStart, int SelStop);
	HIDESBASE void __fastcall SetCursor(int Pos);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual bool __fastcall EditCanModify();
	virtual void __fastcall Reset();
	int __fastcall GetFirstEditChar();
	int __fastcall GetLastEditChar();
	int __fastcall GetNextEditChar(int Offset);
	int __fastcall GetPriorEditChar(int Offset);
	int __fastcall GetMaxChars();
	virtual bool __fastcall Validate(const System::UnicodeString Value, int &Pos);
	virtual void __fastcall ValidateError();
	void __fastcall CheckCursor();
	virtual void __fastcall ObserverToggle(const System::Classes::_di_IObserver AObserver, const bool Value);
	__property System::Maskutils::TEditMask EditMask = {read=FEditMask, write=SetEditMask};
	__property TMaskedState MaskState = {read=FMaskState, write=FMaskState, nodefault};
	__property int MaxLength = {read=GetMaxLength, write=SetMaxLength, default=0};
	
public:
	__fastcall virtual TCustomMaskEdit(System::Classes::TComponent* AOwner);
	virtual void __fastcall ValidateEdit();
	virtual void __fastcall Clear();
	HIDESBASE int __fastcall GetTextLen();
	__property bool IsMasked = {read=GetMasked, nodefault};
	__property System::UnicodeString EditText = {read=GetEditText, write=SetEditText};
	__property System::Maskutils::TMaskedText Text = {read=GetText, write=SetText};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomMaskEdit(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomMaskEdit() { }
	
};


class PASCALIMPLEMENTATION TMaskEdit : public TCustomMaskEdit
{
	typedef TCustomMaskEdit inherited;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property EditMask = {default=0};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property TextHint = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomMaskEdit.Create */ inline __fastcall virtual TMaskEdit(System::Classes::TComponent* AOwner) : TCustomMaskEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TMaskEdit(HWND ParentWindow) : TCustomMaskEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TMaskEdit() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Mask */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_MASK)
using namespace Vcl::Mask;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_MaskHPP
