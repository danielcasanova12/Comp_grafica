// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.StdCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_StdctrlsHPP
#define Vcl_StdctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.Themes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------
#ifndef _WIN64
#pragma link "dwmapi.lib"
#endif //_WIN64
namespace Vcl
{
namespace Stdctrls
{
using ::System::Uitypes::TEditCharCase;
}	/* namespace Stdctrls */
}	/* namespace Vcl */

namespace Vcl
{
namespace Stdctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomGroupBox;
class DELPHICLASS TGroupBox;
class DELPHICLASS TCustomLabel;
class DELPHICLASS TLabel;
class DELPHICLASS TCustomEdit;
class DELPHICLASS TEdit;
class DELPHICLASS TEditMargins;
class DELPHICLASS TCustomMemo;
class DELPHICLASS TMemo;
class DELPHICLASS TCustomComboBoxStrings;
class DELPHICLASS TCustomCombo;
class DELPHICLASS TCustomComboBox;
class DELPHICLASS TComboBox;
class DELPHICLASS TButtonActionLink;
class DELPHICLASS TButtonControl;
class DELPHICLASS TImageMargins;
class DELPHICLASS TPushButtonActionLink;
class DELPHICLASS TCustomButton;
class DELPHICLASS TButton;
class DELPHICLASS TCustomCheckBox;
class DELPHICLASS TCheckBox;
class DELPHICLASS TRadioButton;
class DELPHICLASS TCustomListBox;
class DELPHICLASS TListBox;
class DELPHICLASS TScrollBar;
class DELPHICLASS TCustomStaticText;
class DELPHICLASS TStaticText;
struct TSelection;
struct TCustomComboHelper /* Helper for class 'TCustomCombo*' */;
class DELPHICLASS TScrollBarStyleHook;
class DELPHICLASS TEditStyleHook;
class DELPHICLASS TMemoStyleHook;
class DELPHICLASS TListBoxStyleHook;
class DELPHICLASS TComboBoxStyleHook;
class DELPHICLASS TButtonStyleHook;
class DELPHICLASS TCheckBoxStyleHook;
class DELPHICLASS TRadioButtonStyleHook;
class DELPHICLASS TGroupBoxStyleHook;
class DELPHICLASS TStaticTextStyleHook;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomGroupBox : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Vcl::Graphics::TFont* FHeaderFont;
	bool FDefaultHeaderFont;
	bool FShowFrame;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall HeaderFontChanged(System::TObject* Sender);
	bool __fastcall IsHeaderFontStored();
	void __fastcall SetDefaultHeaderFont(bool Value);
	void __fastcall SetHeaderFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetShowFrame(bool Value);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual void __fastcall CheckDefaultHeaderFont();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TCustomGroupBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomGroupBox();
	__property bool DefaultHeaderFont = {read=FDefaultHeaderFont, write=SetDefaultHeaderFont, default=1};
	__property Vcl::Graphics::TFont* HeaderFont = {read=FHeaderFont, write=SetHeaderFont, stored=IsHeaderFontStored};
	__property bool ShowFrame = {read=FShowFrame, write=SetShowFrame, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomGroupBox(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGroupBox : public TCustomGroupBox
{
	typedef TCustomGroupBox inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DefaultHeaderFont = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HeaderFont;
	__property Padding;
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property ShowFrame = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetSiteInfo;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomGroupBox.Create */ inline __fastcall virtual TGroupBox(System::Classes::TComponent* AOwner) : TCustomGroupBox(AOwner) { }
	/* TCustomGroupBox.Destroy */ inline __fastcall virtual ~TGroupBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGroupBox(HWND ParentWindow) : TCustomGroupBox(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TTextLayout : unsigned char { tlTop, tlCenter, tlBottom };

enum DECLSPEC_DENUM TEllipsisPosition : unsigned char { epNone, epPathEllipsis, epEndEllipsis, epWordEllipsis };

typedef void __fastcall (__closure *TFNDrawText)(HDC DC, const System::UnicodeString Text, System::Types::TRect &TextRect, unsigned TextFlags);

class PASCALIMPLEMENTATION TCustomLabel : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	Vcl::Controls::TWinControl* FFocusControl;
	System::Classes::TAlignment FAlignment;
	bool FAutoSize;
	TFNDrawText FDrawTextProc;
	int FGlowSize;
	TTextLayout FLayout;
	bool FWordWrap;
	bool FShowAccelChar;
	bool FTransparentSet;
	TEllipsisPosition FEllipsisPosition;
	void __fastcall DoDrawThemeTextEx(HDC DC, const System::UnicodeString Text, System::Types::TRect &TextRect, unsigned TextFlags);
	void __fastcall DoDrawNormalText(HDC DC, const System::UnicodeString Text, System::Types::TRect &TextRect, unsigned TextFlags);
	bool __fastcall GetTransparent();
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetEllipsisPosition(TEllipsisPosition Value);
	void __fastcall SetFocusControl(Vcl::Controls::TWinControl* Value);
	void __fastcall SetGlowSize(const int Value);
	void __fastcall SetLayout(TTextLayout Value);
	void __fastcall SetShowAccelChar(bool Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetWordWrap(bool Value);
	void __fastcall UpdateDrawTextProc();
	MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall UpdateStyleElements();
	DYNAMIC void __fastcall AdjustBounds();
	DYNAMIC void __fastcall DoDrawText(System::Types::TRect &Rect, int Flags);
	virtual System::UnicodeString __fastcall GetLabelText();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	virtual void __fastcall SetAutoSize(bool Value);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property TEllipsisPosition EllipsisPosition = {read=FEllipsisPosition, write=SetEllipsisPosition, default=0};
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=SetFocusControl};
	__property bool ShowAccelChar = {read=FShowAccelChar, write=SetShowAccelChar, default=1};
	__property bool Transparent = {read=GetTransparent, write=SetTransparent, stored=FTransparentSet, nodefault};
	__property TTextLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	
public:
	__fastcall virtual TCustomLabel(System::Classes::TComponent* AOwner);
	__property Caption = {default=0};
	__property Canvas;
	__property int GlowSize = {read=FGlowSize, write=SetGlowSize, default=0};
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TCustomLabel() { }
	
};


class PASCALIMPLEMENTATION TLabel : public TCustomLabel
{
	typedef TCustomLabel inherited;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EllipsisPosition = {default=0};
	__property Enabled = {default=1};
	__property FocusControl;
	__property Font;
	__property GlowSize = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property Touch;
	__property Transparent;
	__property Layout = {default=0};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomLabel.Create */ inline __fastcall virtual TLabel(System::Classes::TComponent* AOwner) : TCustomLabel(AOwner) { }
	
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TLabel() { }
	
};


class PASCALIMPLEMENTATION TCustomEdit : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	int FMaxLength;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	System::WideChar FPasswordChar;
	bool FReadOnly;
	bool FAutoSize;
	bool FAutoSelect;
	bool FHideSelection;
	bool FOEMConvert;
	System::Uitypes::TEditCharCase FCharCase;
	bool FCreating;
	bool FModified;
	bool FInBufferedPrintClient;
	System::Classes::TNotifyEvent FOnChange;
	int FOldSelLength;
	int FOldSelStart;
	bool FNumbersOnly;
	System::UnicodeString FTextHint;
	bool FSavedReadOnly;
	System::Classes::TAlignment FSavedAlignment;
	int FSavedMaxLength;
	bool FCanUndoSelText;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall AdjustHeight();
	bool __fastcall GetModified();
	bool __fastcall GetCanUndo();
	bool __fastcall GetReadOnly();
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetCharCase(System::Uitypes::TEditCharCase Value);
	void __fastcall SetHideSelection(bool Value);
	void __fastcall SetMaxLength(int Value);
	void __fastcall SetModified(bool Value);
	void __fastcall SetNumbersOnly(bool Value);
	void __fastcall SetOEMConvert(bool Value);
	void __fastcall SetPasswordChar(System::WideChar Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetTextHint(const System::UnicodeString Value);
	void __fastcall UpdateHeight();
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMGestureManagerChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall WMSetFont(Winapi::Messages::TWMSetFont &Message);
	
protected:
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ObserverAdded(const int ID, const System::Classes::_di_IObserver Observer);
	virtual void __fastcall ObserverToggle(const System::Classes::_di_IObserver AObserver, const bool Value);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall DoSetMaxLength(int Value);
	virtual void __fastcall DoSetTextHint(const System::UnicodeString Value);
	virtual void __fastcall UpdateEditMargins();
	virtual int __fastcall GetSelLength();
	virtual int __fastcall GetSelStart();
	virtual System::UnicodeString __fastcall GetSelText();
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	virtual void __fastcall SetAutoSize(bool Value);
	virtual void __fastcall SetSelLength(int Value);
	virtual void __fastcall SetSelStart(int Value);
	virtual void __fastcall UpdateTIPStatus();
	__property bool AutoSelect = {read=FAutoSelect, write=FAutoSelect, default=1};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property System::Uitypes::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, default=0};
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, default=1};
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, default=0};
	__property bool OEMConvert = {read=FOEMConvert, write=SetOEMConvert, default=0};
	__property bool NumbersOnly = {read=FNumbersOnly, write=SetNumbersOnly, default=0};
	__property System::WideChar PasswordChar = {read=FPasswordChar, write=SetPasswordChar, default=0};
	__property ParentColor = {default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
public:
	__fastcall virtual TCustomEdit(System::Classes::TComponent* AOwner);
	virtual void __fastcall Clear();
	void __fastcall ClearSelection();
	void __fastcall CopyToClipboard();
	void __fastcall CutToClipboard();
	virtual void __fastcall DefaultHandler(void *Message);
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment();
	void __fastcall PasteFromClipboard();
	void __fastcall Undo();
	void __fastcall ClearUndo();
	virtual void __fastcall SetSelText(const System::UnicodeString Value);
	void __fastcall SelectAll();
	virtual int __fastcall GetSelTextBuf(System::WideChar * Buffer, int BufSize);
	void __fastcall SetSelTextBuf(System::WideChar * Buffer);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool CanUndo = {read=GetCanUndo, nodefault};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property bool CanUndoSelText = {read=FCanUndoSelText, write=FCanUndoSelText, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	__property Text = {default=0};
	__property System::UnicodeString TextHint = {read=FTextHint, write=SetTextHint};
	
__published:
	__property TabStop = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomEdit(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomEdit() { }
	
};


class PASCALIMPLEMENTATION TEdit : public TCustomEdit
{
	typedef TCustomEdit inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
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
	__property Font;
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property NumbersOnly = {default=0};
	__property OEMConvert = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property PopupMenu;
	__property CanUndoSelText = {default=0};
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextHint = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
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
	/* TCustomEdit.Create */ inline __fastcall virtual TEdit(System::Classes::TComponent* AOwner) : TCustomEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEdit(HWND ParentWindow) : TCustomEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TEdit() { }
	
};


using System::Uitypes::TScrollStyle;

class PASCALIMPLEMENTATION TEditMargins : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Vcl::Controls::TMarginSize FLeft;
	Vcl::Controls::TMarginSize FRight;
	bool FAuto;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetLeftMargin(Vcl::Controls::TMarginSize Value);
	void __fastcall SetRightMargin(Vcl::Controls::TMarginSize Value);
	void __fastcall SetAutoMargin(bool Value);
	
protected:
	virtual void __fastcall Change();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property Vcl::Controls::TMarginSize Left = {read=FLeft, write=SetLeftMargin, default=0};
	__property Vcl::Controls::TMarginSize Right = {read=FRight, write=SetRightMargin, default=0};
	__property bool Auto = {read=FAuto, write=SetAutoMargin, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEditMargins() { }
	
public:
	/* TObject.Create */ inline __fastcall TEditMargins() : System::Classes::TPersistent() { }
	
};


class PASCALIMPLEMENTATION TCustomMemo : public TCustomEdit
{
	typedef TCustomEdit inherited;
	
private:
	System::Classes::TStrings* FLines;
	System::Uitypes::TScrollStyle FScrollBars;
	bool FWordWrap;
	bool FWantReturns;
	bool FWantTabs;
	TEditMargins* FEditMargins;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall DoEditMarginChange(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual System::Types::TPoint __fastcall GetCaretPos();
	virtual void __fastcall DoGetGestureOptions(Vcl::Controls::TInteractiveGestures &Gestures, Vcl::Controls::TInteractiveGestureOptions &Options);
	virtual void __fastcall DoUpdateEditMargins();
	DYNAMIC bool __fastcall IsTouchPropertyStored(Vcl::Controls::TTouchProperty AProperty);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	virtual void __fastcall SetCaretPos(const System::Types::TPoint &Value);
	void __fastcall SetEditMargins(TEditMargins* Value);
	void __fastcall SetLines(System::Classes::TStrings* Value);
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value);
	void __fastcall SetWordWrap(bool Value);
	virtual void __fastcall UpdateEditMargins();
	__property System::Uitypes::TScrollStyle ScrollBars = {read=FScrollBars, write=SetScrollBars, default=0};
	__property bool WantReturns = {read=FWantReturns, write=FWantReturns, default=1};
	__property bool WantTabs = {read=FWantTabs, write=FWantTabs, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=1};
	
public:
	__fastcall virtual TCustomMemo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomMemo();
	__property System::Types::TPoint CaretPos = {read=GetCaretPos, write=SetCaretPos};
	__property TEditMargins* EditMargins = {read=FEditMargins, write=SetEditMargins};
	__property System::Classes::TStrings* Lines = {read=FLines, write=SetLines};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomMemo(HWND ParentWindow) : TCustomEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TMemo : public TCustomMemo
{
	typedef TCustomMemo inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
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
	__property EditMargins;
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property Lines;
	__property MaxLength = {default=0};
	__property OEMConvert = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property CanUndoSelText = {default=0};
	__property ReadOnly = {default=0};
	__property ScrollBars = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property WantReturns = {default=1};
	__property WantTabs = {default=0};
	__property WordWrap = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
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
	/* TCustomMemo.Create */ inline __fastcall virtual TMemo(System::Classes::TComponent* AOwner) : TCustomMemo(AOwner) { }
	/* TCustomMemo.Destroy */ inline __fastcall virtual ~TMemo() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TMemo(HWND ParentWindow) : TCustomMemo(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TDrawItemEvent)(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);

typedef void __fastcall (__closure *TMeasureItemEvent)(Vcl::Controls::TWinControl* Control, int Index, int &Height);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomComboBoxStrings : public System::Classes::TStrings
{
	typedef System::Classes::TStrings inherited;
	
private:
	TCustomCombo* FComboBox;
	
protected:
	virtual int __fastcall GetCount();
	virtual System::UnicodeString __fastcall Get(int Index);
	virtual System::TObject* __fastcall GetObject(int Index);
	virtual void __fastcall PutObject(int Index, System::TObject* AObject);
	virtual void __fastcall SetUpdateState(bool Updating);
	__property TCustomCombo* ComboBox = {read=FComboBox, write=FComboBox};
	
public:
	__fastcall virtual TCustomComboBoxStrings();
	__fastcall virtual ~TCustomComboBoxStrings();
	virtual void __fastcall Clear();
	virtual void __fastcall Delete(int Index);
	virtual int __fastcall IndexOf(const System::UnicodeString S);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomComboBoxStringsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomComboBoxStringsClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomCombo : public Vcl::Controls::TCustomListControl
{
	typedef Vcl::Controls::TCustomListControl inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	int FMaxLength;
	int FDropDownCount;
	bool FInBufferedPrintClient;
	int FItemIndex;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnSelect;
	System::Classes::TNotifyEvent FOnDropDown;
	System::Classes::TNotifyEvent FOnCloseUp;
	int FItemHeight;
	System::Classes::TStrings* FItems;
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall CMGestureManagerChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMCreate(Winapi::Messages::TWMCreate &Message);
	HIDESBASE MESSAGE void __fastcall WMDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	HIDESBASE MESSAGE void __fastcall WMDeleteItem(Winapi::Messages::TWMDeleteItem &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	
protected:
	HWND FEditHandle;
	HWND FListHandle;
	HWND FDropHandle;
	void *FDefEditProc;
	void *FDefListProc;
	bool FDroppingDown;
	bool FFocusChanged;
	bool FIsFocused;
	int FSaveIndex;
	void *FEditInstance;
	void *FListInstance;
	virtual void __fastcall AdjustDropDown();
	virtual void __fastcall ComboWndProc(Winapi::Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall EditWndProc(Winapi::Messages::TMessage &Message);
	virtual TCustomComboBoxStringsClass __fastcall GetItemsClass() = 0 ;
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual int __fastcall GetItemHt() = 0 ;
	virtual void __fastcall SetItemHeight(int Value);
	virtual int __fastcall GetItemCount() = 0 ;
	virtual int __fastcall GetItemIndex();
	bool __fastcall GetDroppedDown();
	int __fastcall GetSelLength();
	int __fastcall GetSelStart();
	void __fastcall ListWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall Select();
	DYNAMIC void __fastcall DropDown();
	DYNAMIC void __fastcall CloseUp();
	virtual void __fastcall DestroyWindowHandle();
	void __fastcall SetDroppedDown(bool Value);
	void __fastcall SetSelLength(int Value);
	void __fastcall SetSelStart(int Value);
	void __fastcall SetMaxLength(int Value);
	virtual void __fastcall SetDropDownCount(const int Value);
	virtual void __fastcall SetItemIndex(const int Value)/* overload */;
	virtual void __fastcall SetItems(System::Classes::TStrings* const Value);
	virtual bool __fastcall IsItemHeightStored();
	__property int DropDownCount = {read=FDropDownCount, write=SetDropDownCount, default=8};
#ifndef _WIN64
	__property HWND EditHandle = {read=FEditHandle, nodefault};
#else /* _WIN64 */
	__property HWND EditHandle = {read=FEditHandle};
#endif /* _WIN64 */
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property int ItemHeight = {read=GetItemHt, write=SetItemHeight, stored=IsItemHeightStored, nodefault};
#ifndef _WIN64
	__property HWND ListHandle = {read=FListHandle, nodefault};
#else /* _WIN64 */
	__property HWND ListHandle = {read=FListHandle};
#endif /* _WIN64 */
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, default=0};
	__property ParentColor = {default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property System::Classes::TNotifyEvent OnSelect = {read=FOnSelect, write=FOnSelect};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	
public:
	__fastcall virtual TCustomCombo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomCombo();
	virtual void __fastcall AddItem(System::UnicodeString Item, System::TObject* AObject);
	virtual void __fastcall Clear();
	virtual void __fastcall ClearSelection();
	virtual void __fastcall CopySelection(Vcl::Controls::TCustomListControl* Destination);
	virtual void __fastcall DeleteSelected();
	DYNAMIC bool __fastcall Focused();
	virtual int __fastcall GetCount();
	virtual void __fastcall SelectAll();
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property bool DroppedDown = {read=GetDroppedDown, write=SetDroppedDown, nodefault};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property TabStop = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCombo(HWND ParentWindow) : Vcl::Controls::TCustomListControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


enum DECLSPEC_DENUM TComboBoxStyle : unsigned char { csDropDown, csSimple, csDropDownList, csOwnerDrawFixed, csOwnerDrawVariable };

class PASCALIMPLEMENTATION TCustomComboBox : public TCustomCombo
{
	typedef TCustomCombo inherited;
	
private:
	bool FAutoComplete;
	bool FAutoDropDown;
	bool FAutoDropDownWidth;
	unsigned FLastTime;
	System::UnicodeString FFilter;
	System::Uitypes::TEditCharCase FCharCase;
	bool FSorted;
	TComboBoxStyle FStyle;
	System::Classes::TStringList* FSaveItems;
	TDrawItemEvent FOnDrawItem;
	TMeasureItemEvent FOnMeasureItem;
	bool FAutoCloseUp;
	unsigned FAutoCompleteDelay;
	System::UnicodeString FTextHint;
	int FOldHeight;
	bool FExtendedUI;
	bool FCanUndoSelText;
	int FDropDownWidth;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall SetCharCase(System::Uitypes::TEditCharCase Value);
	void __fastcall SetSelText(const System::UnicodeString Value);
	void __fastcall SetSorted(bool Value);
	void __fastcall SetTextHint(const System::UnicodeString Value);
	void __fastcall SetExtendedUI(bool Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	int __fastcall GetEditHeight();
	
protected:
	virtual void __fastcall ComboWndProc(Winapi::Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	virtual bool __fastcall CanObserve(const int ID);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	DYNAMIC void __fastcall DropDown();
	virtual void __fastcall DoSetTextHint();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	int __fastcall GetDropDownWidth();
	virtual int __fastcall GetItemHt();
	virtual TCustomComboBoxStringsClass __fastcall GetItemsClass();
	System::UnicodeString __fastcall GetSelText();
	bool __fastcall IsDropDownWidthStored();
	virtual bool __fastcall IsItemHeightStored();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall MeasureItem(int Index, int &Height);
	void __fastcall PerformAutoActions(System::WideChar &Key);
	bool __fastcall SelectItem(const System::UnicodeString AnItem);
	void __fastcall SetDropDownWidth(int Value);
	virtual void __fastcall SetStyle(TComboBoxStyle Value);
	__property bool Sorted = {read=FSorted, write=SetSorted, default=0};
	__property TComboBoxStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property TDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual int __fastcall GetItemCount();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TCustomComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomComboBox();
	__property unsigned AutoCompleteDelay = {read=FAutoCompleteDelay, write=FAutoCompleteDelay, default=500};
	__property bool AutoComplete = {read=FAutoComplete, write=FAutoComplete, default=1};
	__property bool AutoCloseUp = {read=FAutoCloseUp, write=FAutoCloseUp, default=0};
	__property bool AutoDropDown = {read=FAutoDropDown, write=FAutoDropDown, default=0};
	__property bool AutoDropDownWidth = {read=FAutoDropDownWidth, write=FAutoDropDownWidth, default=0};
	__property System::Uitypes::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, default=0};
	__property int DropDownWidth = {read=GetDropDownWidth, write=SetDropDownWidth, stored=IsDropDownWidthStored, nodefault};
	__property bool ExtendedUI = {read=FExtendedUI, write=SetExtendedUI, default=0};
	__property bool CanUndoSelText = {read=FCanUndoSelText, write=FCanUndoSelText, default=0};
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	__property System::UnicodeString TextHint = {read=FTextHint, write=SetTextHint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomComboBox(HWND ParentWindow) : TCustomCombo(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TComboBox : public TCustomComboBox
{
	typedef TCustomComboBox inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property AutoComplete = {default=1};
	__property AutoCompleteDelay = {default=500};
	__property AutoDropDown = {default=0};
	__property AutoDropDownWidth = {default=0};
	__property AutoCloseUp = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Style = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property DropDownWidth;
	__property Enabled = {default=1};
	__property ExtendedUI = {default=0};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemHeight;
	__property ItemIndex = {default=-1};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property CanUndoSelText = {default=0};
	__property ShowHint;
	__property Sorted = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TextHint = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnCloseUp;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnDropDown;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnSelect;
	__property OnStartDock;
	__property OnStartDrag;
	__property Items;
public:
	/* TCustomComboBox.Create */ inline __fastcall virtual TComboBox(System::Classes::TComponent* AOwner) : TCustomComboBox(AOwner) { }
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TComboBox(HWND ParentWindow) : TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TButtonActionLink : public Vcl::Controls::TWinControlActionLink
{
	typedef Vcl::Controls::TWinControlActionLink inherited;
	
protected:
	TButtonControl* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual void __fastcall SetChecked(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TButtonActionLink(System::TObject* AClient) : Vcl::Controls::TWinControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TButtonActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TButtonActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TButtonActionLinkClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TButtonControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	bool FClicksDisabled;
	bool FWordWrap;
	bool __fastcall IsCheckedStored();
	MESSAGE void __fastcall CNCtlColorStatic(Winapi::Messages::TWMCtlColor &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	void __fastcall SetWordWrap(const bool Value);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual bool __fastcall GetChecked();
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	__property bool Checked = {read=GetChecked, write=SetChecked, stored=IsCheckedStored, default=0};
	__property bool ClicksDisabled = {read=FClicksDisabled, write=FClicksDisabled, nodefault};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	
public:
	__fastcall virtual TButtonControl(System::Classes::TComponent* AOwner);
public:
	/* TWinControl.CreateParented */ inline __fastcall TButtonControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TButtonControl() { }
	
};


enum DECLSPEC_DENUM TImageAlignment : unsigned char { iaLeft, iaRight, iaTop, iaBottom, iaCenter };

class PASCALIMPLEMENTATION TImageMargins : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FRight;
	int FBottom;
	int FTop;
	int FLeft;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetMargin(int Index, int Value);
	
protected:
	virtual void __fastcall Change();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property int Left = {read=FLeft, write=SetMargin, index=0, default=0};
	__property int Top = {read=FTop, write=SetMargin, index=1, default=0};
	__property int Right = {read=FRight, write=SetMargin, index=2, default=0};
	__property int Bottom = {read=FBottom, write=SetMargin, index=3, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TImageMargins() { }
	
public:
	/* TObject.Create */ inline __fastcall TImageMargins() : System::Classes::TPersistent() { }
	
};


class PASCALIMPLEMENTATION TPushButtonActionLink : public TButtonActionLink
{
	typedef TButtonActionLink inherited;
	
protected:
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsImageNameLinked();
	virtual void __fastcall SetImageIndex(int Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TPushButtonActionLink(System::TObject* AClient) : TButtonActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TPushButtonActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TPushButtonActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TPushButtonActionLinkClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomButton : public TButtonControl
{
	typedef TButtonControl inherited;
	
	
public:
	enum DECLSPEC_DENUM TButtonStyle : unsigned char { bsPushButton, bsCommandLink, bsSplitButton };
	
	
private:
	bool FActive;
	bool FCancel;
	System::UnicodeString FCommandLinkHint;
	bool FDefault;
	System::Uitypes::TImageIndex FDisabledImageIndex;
	System::Uitypes::TImageName FDisabledImageName;
	Vcl::Menus::TPopupMenu* FDropDownMenu;
	bool FElevationRequired;
	System::Uitypes::TImageIndex FHotImageIndex;
	System::Uitypes::TImageName FHotImageName;
	TImageAlignment FImageAlignment;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	TImageMargins* FImageMargins;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TCustomImageList* FDisabledImages;
	Vcl::Controls::TImageList* FInternalImageList;
	System::Uitypes::TModalResult FModalResult;
	System::Uitypes::TImageIndex FPressedImageIndex;
	System::Uitypes::TImageName FPressedImageName;
	System::Uitypes::TImageIndex FSelectedImageIndex;
	System::Uitypes::TImageName FSelectedImageName;
	TButtonStyle FStyle;
	System::Uitypes::TImageIndex FStylusHotImageIndex;
	System::Uitypes::TImageName FStylusHotImageName;
	System::Classes::TNotifyEvent FOnDropDownClick;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall CNCtlColorBtn(Winapi::Messages::TWMCtlColor &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall ImageMarginsChange(System::TObject* Sender);
	bool __fastcall IsImageIndexStored();
	bool __fastcall IsImageNameStored();
	void __fastcall SetCommandLinkHint(const System::UnicodeString Value);
	void __fastcall SetDefault(bool Value);
	void __fastcall SetDisabledImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetDisabledImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetDropDownMenu(Vcl::Menus::TPopupMenu* const Value);
	void __fastcall SetElevationRequired(const bool Value);
	void __fastcall SetElevationRequiredState();
	void __fastcall SetHotImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetHotImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetImageAlignment(const TImageAlignment Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetImageMargins(TImageMargins* const Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetDisabledImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetPressedImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetPressedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetSelectedImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetSelectedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetStyle(const TButtonStyle Value);
	void __fastcall SetStylusHotImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetStylusHotImageName(const System::Uitypes::TImageName Value);
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	void __fastcall UpdateCommandLinkHint();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Vcl::Controls::TCMFocusChanged &Message);
	
protected:
	__property bool Active = {read=FActive, nodefault};
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	virtual void __fastcall UpdateImageList();
	virtual void __fastcall UpdateImages();
	virtual void __fastcall SetImageList(NativeUInt AHandle);
	virtual void __fastcall UpdateImage();
	void __fastcall CheckImageIndexes();
	
public:
	__fastcall virtual TCustomButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomButton();
	DYNAMIC void __fastcall Click();
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property bool Cancel = {read=FCancel, write=FCancel, default=0};
	__property System::UnicodeString CommandLinkHint = {read=FCommandLinkHint, write=SetCommandLinkHint};
	__property bool Default = {read=FDefault, write=SetDefault, default=0};
	__property System::Uitypes::TImageIndex DisabledImageIndex = {read=FDisabledImageIndex, write=SetDisabledImageIndex, default=-1};
	__property System::Uitypes::TImageName DisabledImageName = {read=FDisabledImageName, write=SetDisabledImageName};
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=SetDisabledImages};
	__property Vcl::Menus::TPopupMenu* DropDownMenu = {read=FDropDownMenu, write=SetDropDownMenu};
	__property bool ElevationRequired = {read=FElevationRequired, write=SetElevationRequired, default=0};
	__property System::Uitypes::TImageIndex HotImageIndex = {read=FHotImageIndex, write=SetHotImageIndex, default=-1};
	__property System::Uitypes::TImageName HotImageName = {read=FHotImageName, write=SetHotImageName};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TImageAlignment ImageAlignment = {read=FImageAlignment, write=SetImageAlignment, default=0};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName, stored=IsImageNameStored};
	__property TImageMargins* ImageMargins = {read=FImageMargins, write=SetImageMargins};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, default=0};
	__property System::Uitypes::TImageIndex PressedImageIndex = {read=FPressedImageIndex, write=SetPressedImageIndex, default=-1};
	__property System::Uitypes::TImageName PressedImageName = {read=FPressedImageName, write=SetPressedImageName};
	__property System::Uitypes::TImageIndex SelectedImageIndex = {read=FSelectedImageIndex, write=SetSelectedImageIndex, default=-1};
	__property System::Uitypes::TImageName SelectedImageName = {read=FSelectedImageName, write=SetSelectedImageName};
	__property TButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property System::Uitypes::TImageIndex StylusHotImageIndex = {read=FStylusHotImageIndex, write=SetStylusHotImageIndex, default=-1};
	__property System::Uitypes::TImageName StylusHotImageName = {read=FStylusHotImageName, write=SetStylusHotImageName};
	__property TabStop = {default=1};
	__property System::Classes::TNotifyEvent OnDropDownClick = {read=FOnDropDownClick, write=FOnDropDownClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomButton(HWND ParentWindow) : TButtonControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TButton : public TCustomButton
{
	typedef TCustomButton inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Cancel = {default=0};
	__property Caption = {default=0};
	__property CommandLinkHint = {default=0};
	__property Constraints;
	__property Default = {default=0};
	__property DisabledImageIndex = {default=-1};
	__property DisabledImageName = {default=0};
	__property DisabledImages;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DropDownMenu;
	__property ElevationRequired = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HotImageIndex = {default=-1};
	__property HotImageName = {default=0};
	__property ImageAlignment = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ImageMargins;
	__property Images;
	__property ModalResult = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property PressedImageIndex = {default=-1};
	__property PressedImageName = {default=0};
	__property SelectedImageIndex = {default=-1};
	__property SelectedImageName = {default=0};
	__property ShowHint;
	__property Style = {default=0};
	__property StylusHotImageIndex = {default=-1};
	__property StylusHotImageName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDownClick;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
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
	/* TCustomButton.Create */ inline __fastcall virtual TButton(System::Classes::TComponent* AOwner) : TCustomButton(AOwner) { }
	/* TCustomButton.Destroy */ inline __fastcall virtual ~TButton() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TButton(HWND ParentWindow) : TCustomButton(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TCheckBoxState : unsigned char { cbUnchecked, cbChecked, cbGrayed };

class PASCALIMPLEMENTATION TCustomCheckBox : public TButtonControl
{
	typedef TButtonControl inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	bool FAllowGrayed;
	TCheckBoxState FState;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall SetAlignment(System::Classes::TLeftRight Value);
	void __fastcall SetState(TCheckBoxState Value);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	
protected:
	virtual void __fastcall UpdateStyleElements();
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ObserverAdded(const int ID, const System::Classes::_di_IObserver Observer);
	void __fastcall ObserverToggle(const System::Classes::_di_IObserver AObserver, const bool Value);
	virtual void __fastcall Toggle();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall Click();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual bool __fastcall GetChecked();
	virtual void __fastcall SetChecked(bool Value);
	__property System::Classes::TLeftRight Alignment = {read=FAlignment, write=SetAlignment, default=1};
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property TCheckBoxState State = {read=FState, write=SetState, default=0};
	
public:
	__fastcall virtual TCustomCheckBox(System::Classes::TComponent* AOwner);
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment();
	
__published:
	__property TabStop = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCheckBox(HWND ParentWindow) : TButtonControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomCheckBox() { }
	
};


class PASCALIMPLEMENTATION TCheckBox : public TCustomCheckBox
{
	typedef TCustomCheckBox inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Alignment = {default=1};
	__property AllowGrayed = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Color;
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property State = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
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
	/* TCustomCheckBox.Create */ inline __fastcall virtual TCheckBox(System::Classes::TComponent* AOwner) : TCustomCheckBox(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCheckBox(HWND ParentWindow) : TCustomCheckBox(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCheckBox() { }
	
};


class PASCALIMPLEMENTATION TRadioButton : public TButtonControl
{
	typedef TButtonControl inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	bool FChecked;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall SetAlignment(System::Classes::TLeftRight Value);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	
protected:
	virtual bool __fastcall GetChecked();
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	
public:
	__fastcall virtual TRadioButton(System::Classes::TComponent* AOwner);
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property System::Classes::TLeftRight Alignment = {read=FAlignment, write=SetAlignment, default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
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
	/* TWinControl.CreateParented */ inline __fastcall TRadioButton(HWND ParentWindow) : TButtonControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TRadioButton() { }
	
};


enum DECLSPEC_DENUM TListBoxStyle : unsigned char { lbStandard, lbOwnerDrawFixed, lbOwnerDrawVariable, lbVirtual, lbVirtualOwnerDraw };

typedef void __fastcall (__closure *TLBGetDataEvent)(Vcl::Controls::TWinControl* Control, int Index, System::UnicodeString &Data);

typedef void __fastcall (__closure *TLBGetDataObjectEvent)(Vcl::Controls::TWinControl* Control, int Index, System::TObject* &DataObject);

typedef int __fastcall (__closure *TLBFindDataEvent)(Vcl::Controls::TWinControl* Control, System::UnicodeString FindString);

typedef NativeInt TListBoxItemData;

class PASCALIMPLEMENTATION TCustomListBox : public Vcl::Controls::TCustomMultiSelectListControl
{
	typedef Vcl::Controls::TCustomMultiSelectListControl inherited;
	
	
private:
	typedef System::DynamicArray<bool> _TCustomListBox__1;
	
	
private:
	bool FAutoComplete;
	bool FDragCancelling;
	int FCount;
	System::Classes::TStrings* FItems;
	System::UnicodeString FFilter;
	unsigned FLastTime;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	Vcl::Graphics::TCanvas* FCanvas;
	int FColumns;
	int FItemHeight;
	int FOldCount;
	TListBoxStyle FStyle;
	bool FIntegralHeight;
	bool FSorted;
	bool FExtendedSelect;
	int FTabWidth;
	System::Classes::TStringList* FSaveItems;
	int FSaveTopIndex;
	int FSaveItemIndex;
	int FSaveScrollWidth;
	_TCustomListBox__1 FSaveSelection;
	TDrawItemEvent FOnDrawItem;
	TMeasureItemEvent FOnMeasureItem;
	TLBGetDataEvent FOnData;
	TLBFindDataEvent FOnDataFind;
	TLBGetDataObjectEvent FOnDataObject;
	unsigned FAutoCompleteDelay;
	bool FInBufferedPrintClient;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	int __fastcall GetItemHeight();
	System::Types::TRect __fastcall GetItemRect(int Index);
	int __fastcall GetTopIndex();
	MESSAGE void __fastcall LBGetText(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall LBGetTextLen(Winapi::Messages::TMessage &Message);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetColumnWidth();
	void __fastcall SetColumns(int Value);
	void __fastcall SetCount(const int Value);
	void __fastcall SetExtendedSelect(bool Value);
	void __fastcall SetIntegralHeight(bool Value);
	void __fastcall SetItemHeight(int Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall SetSelected(int Index, bool Value);
	void __fastcall SetSorted(bool Value);
	void __fastcall SetStyle(TListBoxStyle Value);
	void __fastcall SetTabWidth(int Value);
	void __fastcall SetTopIndex(int Value);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	int __fastcall GetScrollWidth();
	void __fastcall SetScrollWidth(const int Value);
	
protected:
	bool FMoving;
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall DestroyWnd();
	System::UnicodeString __fastcall DoGetData(const int Index);
	System::TObject* __fastcall DoGetDataObject(const int Index);
	int __fastcall DoFindData(const System::UnicodeString Data);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall DragCanceled();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual int __fastcall GetSelCount();
	virtual void __fastcall MeasureItem(int Index, int &Height);
	DYNAMIC NativeInt __fastcall InternalGetItemData(int Index);
	DYNAMIC void __fastcall InternalSetItemData(int Index, NativeInt AData);
	DYNAMIC NativeInt __fastcall GetItemData(int Index);
	virtual int __fastcall GetItemIndex();
	bool __fastcall GetSelected(int Index);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall LoadRecreateItems(System::Classes::TStrings* RecreateItems);
	DYNAMIC void __fastcall SetItemData(int Index, NativeInt AData);
	DYNAMIC void __fastcall ResetContent();
	virtual void __fastcall SaveRecreateItems(System::Classes::TStrings* RecreateItems);
	DYNAMIC void __fastcall DeleteString(int Index);
	virtual void __fastcall SetMultiSelect(bool Value);
	virtual void __fastcall SetItemIndex(const int Value)/* overload */;
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property int Columns = {read=FColumns, write=SetColumns, default=0};
	__property bool ExtendedSelect = {read=FExtendedSelect, write=SetExtendedSelect, default=1};
	__property bool IntegralHeight = {read=FIntegralHeight, write=SetIntegralHeight, default=0};
	__property int ItemHeight = {read=GetItemHeight, write=SetItemHeight, default=16};
	__property ParentColor = {default=0};
	__property bool Sorted = {read=FSorted, write=SetSorted, default=0};
	__property TListBoxStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int TabWidth = {read=FTabWidth, write=SetTabWidth, default=0};
	__property TDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
	__property TLBGetDataEvent OnData = {read=FOnData, write=FOnData};
	__property TLBGetDataObjectEvent OnDataObject = {read=FOnDataObject, write=FOnDataObject};
	__property TLBFindDataEvent OnDataFind = {read=FOnDataFind, write=FOnDataFind};
	
public:
	__fastcall virtual TCustomListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomListBox();
	virtual void __fastcall AddItem(System::UnicodeString Item, System::TObject* AObject);
	virtual void __fastcall Clear();
	virtual void __fastcall ClearSelection();
	virtual void __fastcall CopySelection(Vcl::Controls::TCustomListControl* Destination);
	virtual void __fastcall DeleteSelected();
	virtual int __fastcall GetCount();
	int __fastcall ItemAtPos(const System::Types::TPoint &Pos, bool Existing);
	System::Types::TRect __fastcall ItemRect(int Index);
	virtual void __fastcall SelectAll();
	__property unsigned AutoCompleteDelay = {read=FAutoCompleteDelay, write=FAutoCompleteDelay, default=500};
	__property bool AutoComplete = {read=FAutoComplete, write=FAutoComplete, default=1};
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property int Count = {read=GetCount, write=SetCount, nodefault};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property bool Selected[int Index] = {read=GetSelected, write=SetSelected};
	__property int ScrollWidth = {read=GetScrollWidth, write=SetScrollWidth, default=0};
	__property int TopIndex = {read=GetTopIndex, write=SetTopIndex, nodefault};
	
__published:
	__property TabStop = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomListBox(HWND ParentWindow) : Vcl::Controls::TCustomMultiSelectListControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TListBox : public TCustomListBox
{
	typedef TCustomListBox inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Style = {default=0};
	__property AutoComplete = {default=1};
	__property AutoCompleteDelay = {default=500};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Columns = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ExtendedSelect = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property ItemHeight = {default=16};
	__property Items;
	__property MultiSelect = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ScrollWidth = {default=0};
	__property ShowHint;
	__property Sorted = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TabWidth = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnData;
	__property OnDataFind;
	__property OnDataObject;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomListBox.Create */ inline __fastcall virtual TListBox(System::Classes::TComponent* AOwner) : TCustomListBox(AOwner) { }
	/* TCustomListBox.Destroy */ inline __fastcall virtual ~TListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TListBox(HWND ParentWindow) : TCustomListBox(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TScrollEvent)(System::TObject* Sender, System::Uitypes::TScrollCode ScrollCode, int &ScrollPos);

class PASCALIMPLEMENTATION TScrollBar : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	Vcl::Forms::TScrollBarKind FKind;
	int FPosition;
	int FMin;
	int FMax;
	int FPageSize;
	int FRTLFactor;
	Vcl::Forms::TScrollBarInc FSmallChange;
	Vcl::Forms::TScrollBarInc FLargeChange;
	System::Classes::TNotifyEvent FOnChange;
	TScrollEvent FOnScroll;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall DoScroll(Winapi::Messages::TWMScroll &Message);
	bool __fastcall NotRightToLeft();
	void __fastcall SetKind(Vcl::Forms::TScrollBarKind Value);
	void __fastcall SetMax(int Value);
	void __fastcall SetMin(int Value);
	void __fastcall SetPosition(int Value);
	void __fastcall SetPageSize(int Value);
	MESSAGE void __fastcall CNHScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall CNVScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall CNCtlColorScrollBar(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
protected:
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall Scroll(System::Uitypes::TScrollCode ScrollCode, int &ScrollPos);
	
public:
	__fastcall virtual TScrollBar(System::Classes::TComponent* AOwner);
	void __fastcall SetParams(int APosition, int AMin, int AMax);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Vcl::Forms::TScrollBarKind Kind = {read=FKind, write=SetKind, default=0};
	__property Vcl::Forms::TScrollBarInc LargeChange = {read=FLargeChange, write=FLargeChange, default=1};
	__property int Max = {read=FMax, write=SetMax, default=100};
	__property int Min = {read=FMin, write=SetMin, default=0};
	__property int PageSize = {read=FPageSize, write=SetPageSize, nodefault};
	__property ParentBiDiMode = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property int Position = {read=FPosition, write=SetPosition, default=0};
	__property ShowHint;
	__property Vcl::Forms::TScrollBarInc SmallChange = {read=FSmallChange, write=FSmallChange, default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnContextPopup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property TScrollEvent OnScroll = {read=FOnScroll, write=FOnScroll};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TScrollBar(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TScrollBar() { }
	
};


enum DECLSPEC_DENUM TStaticBorderStyle : unsigned char { sbsNone, sbsSingle, sbsSunken };

class PASCALIMPLEMENTATION TCustomStaticText : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	bool FAutoSize;
	TStaticBorderStyle FBorderStyle;
	Vcl::Controls::TWinControl* FFocusControl;
	bool FShowAccelChar;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	MESSAGE void __fastcall CNCtlColorStatic(Winapi::Messages::TWMCtlColor &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	void __fastcall AdjustBounds();
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetBorderStyle(TStaticBorderStyle Value);
	void __fastcall SetFocusControl(Vcl::Controls::TWinControl* Value);
	void __fastcall SetShowAccelChar(bool Value);
	void __fastcall SetTransparent(const bool Value);
	bool __fastcall GetTransparent();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetAutoSize(bool Value);
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property TStaticBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property Vcl::Controls::TWinControl* FocusControl = {read=FFocusControl, write=SetFocusControl};
	__property bool ShowAccelChar = {read=FShowAccelChar, write=SetShowAccelChar, default=1};
	__property bool Transparent = {read=GetTransparent, write=SetTransparent, default=1};
	
public:
	__fastcall virtual TCustomStaticText(System::Classes::TComponent* AOwner);
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomStaticText(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomStaticText() { }
	
};


class PASCALIMPLEMENTATION TStaticText : public TCustomStaticText
{
	typedef TCustomStaticText inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BiDiMode;
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property Color;
	__property Constraints;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FocusControl;
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Transparent = {default=1};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomStaticText.Create */ inline __fastcall virtual TStaticText(System::Classes::TComponent* AOwner) : TCustomStaticText(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStaticText(HWND ParentWindow) : TCustomStaticText(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TStaticText() { }
	
};


struct DECLSPEC_DRECORD TSelection
{
public:
	int StartPos;
	int EndPos;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TScrollBarStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
	
public:
	class DELPHICLASS TScrollWindow;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TScrollWindow : public Vcl::Controls::TWinControl
	{
		typedef Vcl::Controls::TWinControl inherited;
		
	private:
		bool FSizeBox;
		TScrollBarStyleHook* FStyleHook;
		bool FVertical;
		HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
		HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
		HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
		
	protected:
		virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
		virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
		
	public:
		__fastcall virtual TScrollWindow(System::Classes::TComponent* AOwner);
		__property bool SizeBox = {read=FSizeBox, write=FSizeBox, nodefault};
		__property TScrollBarStyleHook* StyleHook = {read=FStyleHook, write=FStyleHook};
		__property bool Vertical = {read=FVertical, write=FVertical, nodefault};
	public:
		/* TWinControl.CreateParented */ inline __fastcall TScrollWindow(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
		/* TWinControl.Destroy */ inline __fastcall virtual ~TScrollWindow() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	TScrollWindow* FScrollWnd;
	Vcl::Themes::TThemedScrollBar FVSliderState;
	Vcl::Themes::TThemedScrollBar FVUpState;
	Vcl::Themes::TThemedScrollBar FVDownState;
	Vcl::Themes::TThemedScrollBar FHSliderState;
	Vcl::Themes::TThemedScrollBar FHUpState;
	Vcl::Themes::TThemedScrollBar FHDownState;
	System::Types::TRect __fastcall ControlBounds();
	bool __fastcall Horizontal();
	System::Types::TRect __fastcall HorzDownButtonRect();
	System::Types::TRect __fastcall HorzScrollRect();
	System::Types::TRect __fastcall HorzSliderRect();
	System::Types::TRect __fastcall HorzTrackRect();
	System::Types::TRect __fastcall HorzUpButtonRect();
	void __fastcall InitScrollBar();
	void __fastcall PaintScrollBar();
	System::Types::TRect __fastcall VertDownButtonRect();
	System::Types::TRect __fastcall VertScrollRect();
	System::Types::TRect __fastcall VertSliderRect();
	System::Types::TRect __fastcall VertTrackRect();
	System::Types::TRect __fastcall VertUpButtonRect();
	void __fastcall UpdateScrollBar();
	MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNHScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall CNVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMCaptureChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMMove(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall WMShowWindow(Winapi::Messages::TWMShowWindow &Message);
	
protected:
	virtual bool __fastcall AcceptMessage(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall HasBorder();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
protected:
	void __fastcall VertDrawScroll(HDC DC);
	void __fastcall HorzDrawScroll(HDC DC);
	
public:
	__fastcall virtual TScrollBarStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TScrollBarStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TEditStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	void __fastcall UpdateColors();
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	
protected:
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	
public:
	__fastcall virtual TEditStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TEditStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMemoStyleHook : public Vcl::Forms::TScrollingStyleHook
{
	typedef Vcl::Forms::TScrollingStyleHook inherited;
	
private:
	void __fastcall UpdateColors();
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TMemoStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TScrollingStyleHook.Destroy */ inline __fastcall virtual ~TMemoStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListBoxStyleHook : public Vcl::Forms::TScrollingStyleHook
{
	typedef Vcl::Forms::TScrollingStyleHook inherited;
	
private:
	bool FStyleColorsChecked;
	void __fastcall UpdateColors();
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TListBoxStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TScrollingStyleHook.Destroy */ inline __fastcall virtual ~TListBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComboBoxStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	System::Types::TPoint FDownPos;
	System::Types::TPoint FMovePos;
	int FDownSliderPos;
	int FOldIdx;
	int FInvsibleCount;
	int FSliderSize;
	Vcl::Themes::TThemedScrollBar FVSliderState;
	Vcl::Themes::TThemedScrollBar FVUpState;
	Vcl::Themes::TThemedScrollBar FVDownState;
	bool FIgnoreStyleChanged;
	bool FMouseOnButton;
	HWND FListHandle;
	HWND FEditHandle;
	void *FListBoxInstance;
	void *FDefListBoxProc;
	int FListBoxTimerCode;
	bool FListBoxUpBtnDown;
	bool FListBoxDownBtnDown;
	bool FListBoxTrackUpDown;
	bool FListBoxTrackDownDown;
	int FTempItemIndex;
	void __fastcall DrawListBoxVertScroll(HDC DC);
	void __fastcall DrawListBoxBorder();
	bool __fastcall DroppedDown();
	System::Types::TRect __fastcall GetButtonRect();
	TComboBoxStyle __fastcall Style();
	System::Types::TRect __fastcall ListBoxBoundsRect();
	System::Types::TRect __fastcall ListBoxClientRect();
	void __fastcall ListBoxSetTimer(int ATimerCode);
	void __fastcall ListBoxStopTimer();
	System::Types::TRect __fastcall ListBoxVertScrollRect();
	System::Types::TRect __fastcall ListBoxVertDownButtonRect();
	System::Types::TRect __fastcall ListBoxVertUpButtonRect();
	System::Types::TRect __fastcall ListBoxVertScrollArea();
	System::Types::TRect __fastcall ListBoxVertSliderRect();
	System::Types::TRect __fastcall ListBoxVertTrackRect();
	System::Types::TRect __fastcall ListBoxVertTrackRectUp();
	System::Types::TRect __fastcall ListBoxVertTrackRectDown();
	void __fastcall PaintListBoxBorder(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R);
	void __fastcall UpdateColors();
	MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall WMDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TMessage &Message);
	
protected:
	virtual bool __fastcall IsChildHandle(HWND AHandle);
	virtual bool __fastcall AcceptMessage(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DrawItem(Vcl::Graphics::TCanvas* Canvas, int Index, const System::Types::TRect &R, bool Selected);
	void __fastcall HookListBox(HWND AListHandle);
	__property void * ListBoxInstance = {read=FListBoxInstance};
	virtual void __fastcall ListBoxWndProc(Winapi::Messages::TMessage &Msg);
#ifndef _WIN64
	__property HWND ListHandle = {read=FListHandle, nodefault};
#else /* _WIN64 */
	__property HWND ListHandle = {read=FListHandle};
#endif /* _WIN64 */
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall PaintBorder(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property System::Types::TRect ButtonRect = {read=GetButtonRect};
	__property bool MouseOnButton = {read=FMouseOnButton, write=FMouseOnButton, nodefault};
	
public:
	__fastcall virtual TComboBoxStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TComboBoxStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TButtonStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	bool FOldMouseInControl;
	MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	bool __fastcall AnimationEnabled();
	bool __fastcall StartAnimation(HDC ADC);
	void __fastcall PrepareAnimationDC(HDC ADC, bool AMouseInControl, bool ARendering);
	
protected:
	bool FPressed;
	bool FMouseDown;
	bool FDropDown;
	virtual void __fastcall DrawButton(Vcl::Graphics::TCanvas* ACanvas, bool AMouseInControl);
	void __fastcall DoClick();
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual bool __fastcall InternalPaint(HDC ADC);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	int __fastcall GetDropDownWidth();
	
public:
	__fastcall virtual TButtonStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TButtonStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCheckBoxStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	bool FPressed;
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall BMSetCheck(Winapi::Messages::TMessage &Message);
	bool __fastcall RightAlignment();
	
protected:
	virtual Vcl::Themes::TThemedButton __fastcall GetDrawState(TCheckBoxState State);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property bool Pressed = {read=FPressed, nodefault};
	
public:
	__fastcall virtual TCheckBoxStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TCheckBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRadioButtonStyleHook : public TCheckBoxStyleHook
{
	typedef TCheckBoxStyleHook inherited;
	
protected:
	virtual Vcl::Themes::TThemedButton __fastcall GetDrawState(TCheckBoxState State);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TRadioButtonStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TRadioButtonStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGroupBoxStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
protected:
	System::Types::TRect __fastcall GetBoxRect(Vcl::Graphics::TCanvas* Canvas);
	virtual System::Types::TRect __fastcall GetCaptionRect(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TGroupBoxStyleHook(Vcl::Controls::TWinControl* AControl);
	virtual void __fastcall DrawControlText(Vcl::Graphics::TCanvas* Canvas, const Vcl::Themes::TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, unsigned Flags);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TGroupBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStaticTextStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TStaticTextStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TStaticTextStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Uitypes::TEditCharCase ecNormal = (System::Uitypes::TEditCharCase)(0);
static const System::Uitypes::TEditCharCase ecUpperCase = (System::Uitypes::TEditCharCase)(1);
static const System::Uitypes::TEditCharCase ecLowerCase = (System::Uitypes::TEditCharCase)(2);
static const System::Uitypes::TScrollStyle ssNone = (System::Uitypes::TScrollStyle)(0);
static const System::Uitypes::TScrollStyle ssHorizontal = (System::Uitypes::TScrollStyle)(1);
static const System::Uitypes::TScrollStyle ssVertical = (System::Uitypes::TScrollStyle)(2);
static const System::Uitypes::TScrollStyle ssBoth = (System::Uitypes::TScrollStyle)(3);
static const System::Uitypes::TScrollCode scLineUp = (System::Uitypes::TScrollCode)(0);
static const System::Uitypes::TScrollCode scLineDown = (System::Uitypes::TScrollCode)(1);
static const System::Uitypes::TScrollCode scPageUp = (System::Uitypes::TScrollCode)(2);
static const System::Uitypes::TScrollCode scPageDown = (System::Uitypes::TScrollCode)(3);
static const System::Uitypes::TScrollCode scPosition = (System::Uitypes::TScrollCode)(4);
static const System::Uitypes::TScrollCode scTrack = (System::Uitypes::TScrollCode)(5);
static const System::Uitypes::TScrollCode scTop = (System::Uitypes::TScrollCode)(6);
static const System::Uitypes::TScrollCode scBottom = (System::Uitypes::TScrollCode)(7);
static const System::Uitypes::TScrollCode scEndScroll = (System::Uitypes::TScrollCode)(8);
}	/* namespace Stdctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_STDCTRLS)
using namespace Vcl::Stdctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_StdctrlsHPP
