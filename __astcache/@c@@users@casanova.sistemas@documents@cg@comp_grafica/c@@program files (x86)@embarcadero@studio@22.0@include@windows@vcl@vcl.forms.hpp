// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Forms.pas' rev: 35.00 (Windows)

#ifndef Vcl_FormsHPP
#define Vcl_FormsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Messaging.hpp>
#include <System.Generics.Collections.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Imm.hpp>
#include <Vcl.ActnList.hpp>
#include <Winapi.MultiMon.hpp>
#include <System.HelpIntfs.hpp>
#include <Winapi.Dwmapi.hpp>
#include <Vcl.Themes.hpp>
#include <System.Win.TaskbarCore.hpp>
#include <Winapi.ShellScaling.hpp>
#include <System.Types.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------
#ifndef _WIN64
#pragma link "dwmapi.lib"
#endif //_WIN64
#if defined(_VCL_ALIAS_RECORDS)
#if defined(UNICODE)
#pragma alias "@Vcl@Forms@TApplication@MessageBoxW$qqrpxbt1i"="@Vcl@Forms@TApplication@MessageBox$qqrpxbt1i"
#else
#pragma alias "@Vcl@Forms@TApplication@MessageBoxA$qqrpxbt1i"="@Vcl@Forms@TApplication@MessageBox$qqrpxbt1i"
#endif
#endif
namespace Vcl
{
namespace Forms
{
using System::Uitypes::TWindowState;
}	/* namespace Forms */
}	/* namespace Vcl */
namespace Vcl
{
namespace Forms
{
using System::Uitypes::TBorderIcon;
using System::Uitypes::TBorderIcons;
}	/* namespace Forms */
}	/* namespace Vcl */
namespace Vcl
{
namespace Forms
{
using System::Uitypes::TCloseAction;
}	/* namespace Forms */
}	/* namespace Vcl */
namespace Vcl {
namespace Controls {
  struct THintInfo;
};
namespace Forms {
  using Controls::THintInfo;
};
};

namespace Vcl
{
namespace Forms
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TControlScrollBar;
class DELPHICLASS TScrollingWinControl;
class DELPHICLASS TScrollBox;
class DELPHICLASS TCustomFrame;
class DELPHICLASS TFrame;
__interface DELPHIINTERFACE IDesignerHook;
typedef System::DelphiInterface<IDesignerHook> _di_IDesignerHook;
__interface DELPHIINTERFACE IOleForm;
typedef System::DelphiInterface<IOleForm> _di_IOleForm;
struct TPopupWnd;
class DELPHICLASS TGlassFrame;
class DELPHICLASS TTitleBar;
class DELPHICLASS TCustomForm;
class DELPHICLASS TCustomActiveForm;
class DELPHICLASS TForm;
class DELPHICLASS TCustomDockForm;
class DELPHICLASS TMonitor;
struct TCursorRec;
class DELPHICLASS TScreen;
struct TCMHintShowPause;
struct TPopupForm;
class DELPHICLASS TApplication;
struct TScreenHelper /* Helper for class 'TScreen*' */;
struct TScrollBoxHelper /* Helper for class 'TScrollBox*' */;
class DELPHICLASS TScrollingStyleHook;
class DELPHICLASS TFormStyleHook;
class DELPHICLASS TScrollBoxStyleHook;
class DELPHICLASS TChangeScaleMessage;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TScrollBarKind : unsigned char { sbHorizontal, sbVertical };

typedef System::Word TScrollBarInc;

enum DECLSPEC_DENUM TScrollBarStyle : unsigned char { ssRegular, ssFlat, ssHotTrack };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TControlScrollBar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TScrollingWinControl* FControl;
	TScrollBarInc FIncrement;
	TScrollBarInc FPageIncrement;
	int FPosition;
	int FRange;
	int FCalcRange;
	TScrollBarKind FKind;
	System::Word FMargin;
	bool FVisible;
	bool FTracking;
	bool FScaled;
	bool FSmooth;
	int FDelay;
	int FButtonSize;
	System::Uitypes::TColor FColor;
	bool FParentColor;
	int FSize;
	TScrollBarStyle FStyle;
	int FThumbSize;
	int FPageDiv;
	int FLineDiv;
	bool FUpdateNeeded;
	
protected:
	__fastcall TControlScrollBar(TScrollingWinControl* AControl, TScrollBarKind AKind);
	
private:
	void __fastcall CalcAutoRange();
	int __fastcall ControlSize(bool ControlSB, bool AssumeSB);
	void __fastcall DoSetRange(int Value);
	int __fastcall GetScrollPos();
	bool __fastcall NeedsScrollBarVisible();
	bool __fastcall IsIncrementStored();
	void __fastcall ScrollMessage(Winapi::Messages::TWMScroll &Msg);
	void __fastcall SetButtonSize(int Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetParentColor(bool Value);
	void __fastcall SetPosition(int Value);
	void __fastcall SetRange(int Value);
	void __fastcall SetSize(int Value);
	void __fastcall SetStyle(TScrollBarStyle Value);
	void __fastcall SetThumbSize(int Value);
	void __fastcall SetVisible(bool Value);
	bool __fastcall IsRangeStored();
	void __fastcall Update(bool ControlSB, bool AssumeSB);
	
protected:
	void __fastcall Scale(int M, int D);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall ChangeBiDiPosition();
	__property TScrollBarKind Kind = {read=FKind, nodefault};
	bool __fastcall IsScrollBarVisible();
	__property int ScrollPos = {read=GetScrollPos, nodefault};
	
__published:
	__property int ButtonSize = {read=FButtonSize, write=SetButtonSize, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777196};
	__property TScrollBarInc Increment = {read=FIncrement, write=FIncrement, stored=IsIncrementStored, default=8};
	__property System::Word Margin = {read=FMargin, write=FMargin, default=0};
	__property bool ParentColor = {read=FParentColor, write=SetParentColor, default=1};
	__property int Position = {read=FPosition, write=SetPosition, default=0};
	__property int Range = {read=FRange, write=SetRange, stored=IsRangeStored, default=0};
	__property bool Smooth = {read=FSmooth, write=FSmooth, default=0};
	__property int Size = {read=FSize, write=SetSize, default=0};
	__property TScrollBarStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int ThumbSize = {read=FThumbSize, write=SetThumbSize, default=0};
	__property bool Tracking = {read=FTracking, write=FTracking, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TControlScrollBar() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TScrollingWinControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	int FAutoRangeCount;
	bool FAutoScroll;
	TControlScrollBar* FHorzScrollBar;
	System::Types::TPoint FPanPoint;
	bool FUpdatingScrollBars;
	TControlScrollBar* FVertScrollBar;
	void __fastcall CalcAutoRange();
	void __fastcall SetAutoScroll(bool Value);
	void __fastcall SetHorzScrollBar(TControlScrollBar* Value);
	void __fastcall SetVertScrollBar(TControlScrollBar* Value);
	void __fastcall UpdateScrollBars();
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &ARect);
	virtual bool __fastcall AutoScrollEnabled();
	virtual void __fastcall AutoScrollInView(Vcl::Controls::TControl* AControl);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall DoFlipChildren();
	virtual void __fastcall DoGesture(const Vcl::Controls::TGestureEventInfo &EventInfo, bool &Handled);
	virtual void __fastcall DoGetGestureOptions(Vcl::Controls::TInteractiveGestures &Gestures, Vcl::Controls::TInteractiveGestureOptions &Options);
	DYNAMIC bool __fastcall IsTouchPropertyStored(Vcl::Controls::TTouchProperty AProperty);
	__property bool AutoScroll = {read=FAutoScroll, write=SetAutoScroll, default=0};
	virtual void __fastcall Resizing(System::Uitypes::TWindowState State);
	void __fastcall ScaleScrollBars(int M, int D);
	void __fastcall SendChangeScaleMessage(int M, int D);
	
public:
	__fastcall virtual TScrollingWinControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TScrollingWinControl();
	void __fastcall DisableAutoRange();
	void __fastcall EnableAutoRange();
	void __fastcall ScrollInView(Vcl::Controls::TControl* AControl);
	
__published:
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property TControlScrollBar* HorzScrollBar = {read=FHorzScrollBar, write=SetHorzScrollBar};
	__property TControlScrollBar* VertScrollBar = {read=FVertScrollBar, write=SetVertScrollBar};
public:
	/* TWinControl.CreateParented */ inline __fastcall TScrollingWinControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


enum DECLSPEC_DENUM TFormBorderStyle : unsigned char { bsNone, bsSingle, bsSizeable, bsDialog, bsToolWindow, bsSizeToolWin };

typedef TFormBorderStyle TBorderStyle;

class PASCALIMPLEMENTATION TScrollBox : public TScrollingWinControl
{
	typedef TScrollingWinControl inherited;
	
private:
	TFormBorderStyle FBorderStyle;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall SetBorderStyle(TBorderStyle Value);
	HIDESBASE MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TWMMouseWheel &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall PaintWindow(HDC DC);
	
public:
	__fastcall virtual TScrollBox(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoScroll = {default=1};
	__property AutoSize = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Constraints;
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Color;
	__property Ctl3D;
	__property Font;
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
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
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TScrollBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TScrollBox(HWND ParentWindow) : TScrollingWinControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomFrame : public TScrollingWinControl
{
	typedef TScrollingWinControl inherited;
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall PaintWindow(HDC DC);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
public:
	__fastcall virtual TCustomFrame(System::Classes::TComponent* AOwner);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual void __fastcall ScaleForPPI(int NewPPI);
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TCustomFrame() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomFrame(HWND ParentWindow) : TScrollingWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomFrameClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomFrameClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TFrame : public TCustomFrame
{
	typedef TCustomFrame inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoScroll = {default=0};
	__property AutoSize = {default=0};
	__property BiDiMode;
	__property Constraints;
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Color;
	__property Ctl3D;
	__property Font;
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
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
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
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TFrame(System::Classes::TComponent* AOwner) : TCustomFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TFrame() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFrame(HWND ParentWindow) : TCustomFrame(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TVCLDesignerHighDPIMode : unsigned char { hdmUnknown, hdmAutoScale, hdmLowDPI, hdmUserEditable };

__interface  INTERFACE_UUID("{1E431DA5-2BEA-4DE7-A330-CC45FD2FB1EC}") IDesignerHook  : public System::Classes::IDesignerNotify 
{
	virtual TCustomForm* __fastcall GetCustomForm() = 0 ;
	virtual void __fastcall SetCustomForm(TCustomForm* Value) = 0 ;
	virtual bool __fastcall GetIsControl() = 0 ;
	virtual void __fastcall SetIsControl(bool Value) = 0 ;
	virtual bool __fastcall IsDesignMsg(Vcl::Controls::TControl* Sender, Winapi::Messages::TMessage &Message) = 0 ;
	virtual void __fastcall PaintGrid() = 0 ;
	virtual void __fastcall PaintMenu() = 0 ;
	virtual void __fastcall UpdateCaption(bool AVisible, bool AUpdateFrame) = 0 ;
	virtual void __fastcall ValidateRename(System::Classes::TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall UpdateDesigner() = 0 ;
	virtual System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetRoot() = 0 ;
	virtual int __fastcall DesignPPI(Vcl::Controls::TWinControl* AControl) = 0 ;
	virtual TVCLDesignerHighDPIMode __fastcall GetDesignerHighDPIMode() = 0 ;
	__property bool IsControl = {read=GetIsControl, write=SetIsControl};
	__property TCustomForm* Form = {read=GetCustomForm, write=SetCustomForm};
};

__interface  INTERFACE_UUID("{CD02E1C1-52DA-11D0-9EA6-0020AF3D82DA}") IOleForm  : public System::IInterface 
{
	virtual void __fastcall OnDestroy() = 0 ;
	virtual void __fastcall OnResize() = 0 ;
};

typedef NativeInt THelpEventData;

struct DECLSPEC_DRECORD TPopupWnd
{
public:
	int ID;
	HWND ControlWnd;
};


typedef System::DynamicArray<TPopupWnd> TPopupWndArray;

enum DECLSPEC_DENUM TFormStyle : unsigned char { fsNormal, fsMDIChild, fsMDIForm, fsStayOnTop };

enum DECLSPEC_DENUM TPosition : unsigned char { poDesigned, poDefault, poDefaultPosOnly, poDefaultSizeOnly, poScreenCenter, poDesktopCenter, poMainFormCenter, poOwnerFormCenter };

enum DECLSPEC_DENUM TDefaultMonitor : unsigned char { dmDesktop, dmPrimary, dmMainForm, dmActiveForm };

enum DECLSPEC_DENUM TPrintScale : unsigned char { poNone, poProportional, poPrintToFit };

enum DECLSPEC_DENUM TShowAction : unsigned char { saIgnore, saRestore, saMinimize, saMaximize };

enum DECLSPEC_DENUM TTileMode : unsigned char { tbHorizontal, tbVertical };

typedef void __fastcall (__closure *TCloseEvent)(System::TObject* Sender, System::Uitypes::TCloseAction &Action);

typedef void __fastcall (__closure *TCloseQueryEvent)(System::TObject* Sender, bool &CanClose);

enum DECLSPEC_DENUM Vcl_Forms__6 : unsigned char { fsCreating, fsVisible, fsShowing, fsModal, fsCreatedMDIChild, fsActivated };

typedef System::Set<Vcl_Forms__6, Vcl_Forms__6::fsCreating, Vcl_Forms__6::fsActivated> TFormState;

typedef void __fastcall (__closure *TShortCutEvent)(Winapi::Messages::TWMKey &Msg, bool &Handled);

typedef bool __fastcall (__closure *THelpEvent)(System::Word Command, NativeInt Data, bool &CallHelp);

typedef void __fastcall (__closure *TMonitorDpiChangedEvent)(System::TObject* Sender, int OldDPI, int NewDPI);

enum DECLSPEC_DENUM TPopupMode : unsigned char { pmNone, pmAuto, pmExplicit };

class PASCALIMPLEMENTATION TGlassFrame : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomForm* FClient;
	bool FEnabled;
	int FLeft;
	int FTop;
	int FRight;
	int FBottom;
	System::Classes::TNotifyEvent FOnChange;
	bool FSheetOfGlass;
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetExtendedFrame(int Index, int Value);
	void __fastcall SetSheetOfGlass(bool Value);
	
protected:
	virtual void __fastcall Change();
	
public:
	__fastcall TGlassFrame(TCustomForm* Client);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall FrameExtended();
	bool __fastcall IntersectsControl(Vcl::Controls::TControl* Control);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property int Left = {read=FLeft, write=SetExtendedFrame, index=0, default=0};
	__property int Top = {read=FTop, write=SetExtendedFrame, index=1, default=0};
	__property int Right = {read=FRight, write=SetExtendedFrame, index=2, default=0};
	__property int Bottom = {read=FBottom, write=SetExtendedFrame, index=3, default=0};
	__property bool SheetOfGlass = {read=FSheetOfGlass, write=SetSheetOfGlass, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGlassFrame() { }
	
};


class PASCALIMPLEMENTATION TTitleBar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Types::TRect FTitleBarFrameRect;
	TCustomForm* FClient;
	bool FEnabled;
	System::Classes::TNotifyEvent FOnChange;
	bool FShowIcon;
	bool FShowCaption;
	bool FColorsInitializated;
	int FHeight;
	bool FSystemHeight;
	bool FSystemColors;
	bool FSystemButtons;
	System::Uitypes::TColor FBackgroundColor;
	System::Uitypes::TColor FInactiveBackgroundColor;
	System::Uitypes::TColor FForegroundColor;
	System::Uitypes::TColor FInactiveForegroundColor;
	Vcl::Controls::TCustomControl* FControl;
	System::Classes::TAlignment FCaptionAlignment;
	System::Uitypes::TColor FButtonHoverForegroundColor;
	System::Uitypes::TColor FButtonBackgroundColor;
	System::Uitypes::TColor FButtonPressedForegroundColor;
	System::Uitypes::TColor FButtonHoverBackgroundColor;
	System::Uitypes::TColor FButtonPressedBackgroundColor;
	System::Uitypes::TColor FButtonInactiveForegroundColor;
	System::Uitypes::TColor FButtonForegroundColor;
	System::Uitypes::TColor FButtonInactiveBackgroundColor;
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetHeight(const int Value);
	void __fastcall SetShowCaption(const bool Value);
	void __fastcall SetShowIcon(const bool Value);
	void __fastcall SetSystemHeight(const bool Value);
	void __fastcall SetSystemColors(const bool Value);
	void __fastcall SetSystemButtons(const bool Value);
	System::Types::TRect __fastcall GetTitleBarIconRect();
	System::Types::TRect __fastcall GetClientRect();
	System::Types::TRect __fastcall GetCaptionButtonsRect();
	int __fastcall GetHeight();
	void __fastcall SetControl(Vcl::Controls::TCustomControl* const Value);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetInactiveBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetForegroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetInactiveForegroundColor(const System::Uitypes::TColor Value);
	static bool __fastcall GetSupported();
	void __fastcall SetButtonBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonForegroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonHoverBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonHoverForegroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonInactiveBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonInactiveForegroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonPressedBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetButtonPressedForegroundColor(const System::Uitypes::TColor Value);
	void __fastcall InitDefaultColors();
	
protected:
	virtual void __fastcall DrawTitleBarIcon(Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &ARect);
	virtual void __fastcall DrawTitleBarCaption(Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &ARect);
	virtual void __fastcall Change();
	
public:
	virtual void __fastcall DrawCustomTitleBar(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &RButtonsRect);
	void __fastcall Invalidate();
	void __fastcall InitTitleBarColors();
	__fastcall TTitleBar(TCustomForm* Client);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Types::TRect IconRect = {read=GetTitleBarIconRect};
	__property System::Types::TRect FrameRect = {read=FTitleBarFrameRect};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property System::Types::TRect CaptionButtonsRect = {read=GetCaptionButtonsRect};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	void __fastcall UpdateFrame();
	/* static */ __property bool Supported = {read=GetSupported, nodefault};
	
__published:
	__property System::Classes::TAlignment CaptionAlignment = {read=FCaptionAlignment, write=SetAlignment, default=0};
	__property Vcl::Controls::TCustomControl* Control = {read=FControl, write=SetControl};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property int Height = {read=GetHeight, write=SetHeight, default=0};
	__property bool SystemHeight = {read=FSystemHeight, write=SetSystemHeight, default=1};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, default=1};
	__property bool ShowIcon = {read=FShowIcon, write=SetShowIcon, default=1};
	__property bool SystemColors = {read=FSystemColors, write=SetSystemColors, default=1};
	__property bool SystemButtons = {read=FSystemButtons, write=SetSystemButtons, default=1};
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=SetBackgroundColor, default=-16777214};
	__property System::Uitypes::TColor ForegroundColor = {read=FForegroundColor, write=SetForegroundColor, default=-16777207};
	__property System::Uitypes::TColor InactiveBackgroundColor = {read=FInactiveBackgroundColor, write=SetInactiveBackgroundColor, default=-16777213};
	__property System::Uitypes::TColor InactiveForegroundColor = {read=FInactiveForegroundColor, write=SetInactiveForegroundColor, default=-16777197};
	__property System::Uitypes::TColor ButtonForegroundColor = {read=FButtonForegroundColor, write=SetButtonForegroundColor, default=-16777207};
	__property System::Uitypes::TColor ButtonBackgroundColor = {read=FButtonBackgroundColor, write=SetButtonBackgroundColor, default=-16777214};
	__property System::Uitypes::TColor ButtonHoverForegroundColor = {read=FButtonHoverForegroundColor, write=SetButtonHoverForegroundColor, default=-16777202};
	__property System::Uitypes::TColor ButtonHoverBackgroundColor = {read=FButtonHoverBackgroundColor, write=SetButtonHoverBackgroundColor, default=-16777203};
	__property System::Uitypes::TColor ButtonPressedForegroundColor = {read=FButtonPressedForegroundColor, write=SetButtonPressedForegroundColor, default=-16777202};
	__property System::Uitypes::TColor ButtonPressedBackgroundColor = {read=FButtonPressedBackgroundColor, write=SetButtonPressedBackgroundColor, default=-16777203};
	__property System::Uitypes::TColor ButtonInactiveForegroundColor = {read=FButtonInactiveForegroundColor, write=SetButtonInactiveForegroundColor, default=-16777197};
	__property System::Uitypes::TColor ButtonInactiveBackgroundColor = {read=FButtonInactiveBackgroundColor, write=SetButtonInactiveBackgroundColor, default=-16777213};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TTitleBar() { }
	
};


class PASCALIMPLEMENTATION TCustomForm : public TScrollingWinControl
{
	typedef TScrollingWinControl inherited;
	
private:
	System::Win::Taskbarcore::TTaskbarHandler* FTaskbarHandler;
	Vcl::Controls::TWinControl* FActiveControl;
	Vcl::Controls::TWinControl* FFocusedControl;
	System::Uitypes::TBorderIcons FBorderIcons;
	TFormBorderStyle FBorderStyle;
	System::Uitypes::TWindowState FWindowState;
	TShowAction FShowAction;
	bool FKeyPreview;
	bool FActive;
	TFormStyle FFormStyle;
	TPosition FPosition;
	TDefaultMonitor FDefaultMonitor;
	TTileMode FTileMode;
	bool FDropTarget;
	TPrintScale FPrintScale;
	Vcl::Controls::TControlCanvas* FCanvas;
	System::UnicodeString FHelpFile;
	Vcl::Graphics::TIcon* FIcon;
	bool FInCMParentBiDiModeChanged;
	Vcl::Menus::TMainMenu* FMenu;
	System::Uitypes::TModalResult FModalResult;
	_di_IDesignerHook FDesigner;
	Vcl::Menus::TMenuItem* FWindowMenu;
	int FFontHeightFor96DPI;
	bool FScaled;
	Vcl::Menus::TMenuItem* FObjectMenuItem;
	_di_IOleForm FOleForm;
	int FTextHeight;
	void *FDefClientProc;
	Vcl::Controls::TWinControl* FActiveOleControl;
	TFormBorderStyle FSavedBorderStyle;
	System::Classes::TNotifyEvent FOnActivate;
	TMonitorDpiChangedEvent FOnAfterMonitorDpiChanged;
	TMonitorDpiChangedEvent FOnBeforeMonitorDpiChanged;
	TCloseEvent FOnClose;
	TCloseQueryEvent FOnCloseQuery;
	System::Classes::TNotifyEvent FOnDeactivate;
	THelpEvent FOnHelp;
	System::Classes::TNotifyEvent FOnHide;
	System::Classes::TNotifyEvent FOnPaint;
	TShortCutEvent FOnShortCut;
	System::Classes::TNotifyEvent FOnShow;
	System::Classes::TNotifyEvent FOnCreate;
	System::Classes::TNotifyEvent FOnDestroy;
	bool FAlphaBlend;
	System::Byte FAlphaBlendValue;
	System::Classes::TList* FPopupChildren;
	TPopupMode FPopupMode;
	TCustomForm* FPopupParent;
	System::Classes::TList* FRecreateChildren;
	TPopupWndArray FPopupWnds;
	TCustomForm* FInternalPopupParent;
	HWND FInternalPopupParentWnd;
	bool FScreenSnap;
	int FSnapBuffer;
	bool FTransparentColor;
	System::Uitypes::TColor FTransparentColorValue;
	bool FCreatingMainForm;
	TGlassFrame* FGlassFrame;
	TTitleBar* FCustomTitleBar;
	bool FRefreshGlassFrame;
	bool FNeedToHideDesignerCaption;
	HWND FClientHandle;
	void *FClientInstance;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall RefreshMDIMenu();
	Vcl::Graphics::TCanvas* __fastcall GetCanvas();
	HICON __fastcall GetIconHandle();
	int __fastcall GetLeft();
	TMonitor* __fastcall GetMonitor();
	System::Classes::TList* __fastcall GetPopupChildren();
	System::Classes::TList* __fastcall GetRecreateChildren();
	bool __fastcall GetScaled();
	int __fastcall GetTextHeight();
	int __fastcall GetTop();
	void __fastcall IconChanged(System::TObject* Sender);
	bool __fastcall IsAutoScrollStored();
	bool __fastcall IsClientSizeStored();
	bool __fastcall IsForm();
	bool __fastcall IsFormSizeStored();
	bool __fastcall IsIconStored();
	void __fastcall MergeMenu(bool MergeState);
	void __fastcall ReadIgnoreFontProperty(System::Classes::TReader* Reader);
	void __fastcall ReadTextHeight(System::Classes::TReader* Reader);
	void __fastcall SetActive(bool Value);
	void __fastcall SetActiveControl(Vcl::Controls::TWinControl* Control);
	void __fastcall SetBorderIcons(System::Uitypes::TBorderIcons Value);
	void __fastcall SetBorderStyle(TFormBorderStyle Value);
	HIDESBASE void __fastcall SetClientHeight(int Value);
	HIDESBASE void __fastcall SetClientWidth(int Value);
	void __fastcall SetDesigner(_di_IDesignerHook ADesigner);
	void __fastcall SetFormStyle(TFormStyle Value);
	void __fastcall SetTaskbarHandler(System::Win::Taskbarcore::TTaskbarHandler* Value);
	void __fastcall SetIcon(Vcl::Graphics::TIcon* Value);
	HIDESBASE void __fastcall SetLeft(int Value);
	void __fastcall SetMenu(Vcl::Menus::TMainMenu* Value);
	void __fastcall SetPosition(TPosition Value);
	void __fastcall SetPopupMode(TPopupMode Value);
	void __fastcall SetScaled(bool Value);
	HIDESBASE void __fastcall SetTop(int Value);
	HIDESBASE void __fastcall SetVisible(bool Value);
	void __fastcall SetWindowFocus();
	void __fastcall SetWindowMenu(Vcl::Menus::TMenuItem* Value);
	void __fastcall SetObjectMenuItem(Vcl::Menus::TMenuItem* Value);
	void __fastcall SetWindowState(System::Uitypes::TWindowState Value);
	void __fastcall SetWindowToMonitor();
	void __fastcall ScaleForPPIRect(int NewPPI, System::Types::PRect NewRect);
	void __fastcall ScaleNormalSize(int M, int D);
	void __fastcall WriteTextHeight(System::Classes::TWriter* Writer);
	System::Uitypes::TColor __fastcall NormalColor();
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMSetIcon(Winapi::Messages::TWMSetIcon &Message);
	MESSAGE void __fastcall WMIconEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMQueryDragIcon(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMNCCreate(Winapi::Messages::TWMNCCreate &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall WMInitMenuPopup(Winapi::Messages::TWMInitMenuPopup &Message);
	MESSAGE void __fastcall WMMenuChar(Winapi::Messages::TWMMenuChar &Message);
	MESSAGE void __fastcall WMMenuSelect(Winapi::Messages::TWMMenuSelect &Message);
	MESSAGE void __fastcall WMActivate(Winapi::Messages::TWMActivate &Message);
	MESSAGE void __fastcall WMClose(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMQueryEndSession(Winapi::Messages::TWMQueryEndSession &Message);
	HIDESBASE MESSAGE void __fastcall WMSysCommand(Winapi::Messages::TWMSysCommand &Message);
	MESSAGE void __fastcall WMShowWindow(Winapi::Messages::TWMShowWindow &Message);
	MESSAGE void __fastcall WMMDIActivate(Winapi::Messages::TWMMDIActivate &Message);
	MESSAGE void __fastcall WMNextDlgCtl(Winapi::Messages::TWMNextDlgCtl &Message);
	MESSAGE void __fastcall WMEnterMenuLoop(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMHelp(Winapi::Messages::TWMHelp &Message);
	MESSAGE void __fastcall WMGetMinMaxInfo(Winapi::Messages::TWMGetMinMaxInfo &Message);
	MESSAGE void __fastcall WMSettingChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMGestureNotify(Winapi::Messages::TWMGestureNotify &Message);
	MESSAGE void __fastcall WMDwmSendIconicLivePreviewBitmap(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMDwmSendIconicThumbnail(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMDpiChanged(Winapi::Messages::TWMDpi &Message);
	MESSAGE void __fastcall CMActivate(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMAppSysCommand(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDeactivate(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMMenuChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMIconChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMRelease(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMUIActivate(void *Message);
	HIDESBASE MESSAGE void __fastcall CMParentBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Vcl::Controls::TCMParentFontChanged &Message);
	MESSAGE void __fastcall CMPopupHwndDestroy(Vcl::Controls::TCMPopupHWndDestroy &Message);
	MESSAGE void __fastcall CMUpdateActions(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMIsShortCut(Winapi::Messages::TWMKey &Message);
	void __fastcall SetActiveOleControl(Vcl::Controls::TWinControl* Control);
	void __fastcall SetLayeredAttribs();
	void __fastcall SetAlphaBlend(const bool Value);
	void __fastcall SetAlphaBlendValue(const System::Byte Value);
	void __fastcall SetTransparentColor(const bool Value);
	void __fastcall SetTransparentColorValue(const System::Uitypes::TColor Value);
	void __fastcall InitAlphaBlending(Vcl::Controls::TCreateParams &Params);
	void __fastcall SetGlassFrame(TGlassFrame* const Value);
	void __fastcall SetCustomTitleBar(TTitleBar* const Value);
	void __fastcall UpdateGlassFrame(System::TObject* Sender);
	void __fastcall UpdateGlassFrameControls(const System::Types::TRect &Rect);
	void __fastcall IgnoreIdent(System::Classes::TReader* Reader);
	MESSAGE void __fastcall CMActionExecute(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMActionUpdate(Winapi::Messages::TMessage &Message);
	
protected:
	int FClientWidth;
	int FClientHeight;
	TFormState FFormState;
	DYNAMIC void __fastcall Activate();
	DYNAMIC void __fastcall ActiveChanged();
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	DYNAMIC void __fastcall BeginAutoDrag();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall ClientWndProc(Winapi::Messages::TMessage &Message);
	void __fastcall CloseModal();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Deactivate();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DestroyHandle();
	virtual void __fastcall DestroyWindowHandle();
	DYNAMIC void __fastcall DoClose(System::Uitypes::TCloseAction &Action);
	virtual void __fastcall DoCreate();
	virtual void __fastcall DoDestroy();
	DYNAMIC void __fastcall DoHide();
	DYNAMIC void __fastcall DoShow();
	virtual void __fastcall DoThumbButtonNotify(System::Word ItemID);
	virtual void __fastcall DoWindowPreviewRequest();
	virtual void __fastcall DoThumbPreviewRequest(System::Word APreviewHeight, System::Word APreviewWidth);
	virtual bool __fastcall DoWritePixelsPerInch(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall GetBorderIconStyles(unsigned &Style, unsigned &ExStyle);
	DYNAMIC void __fastcall GetBorderStyles(unsigned &Style, unsigned &ExStyle, unsigned &ClassStyle);
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual bool __fastcall GetFloating();
	int __fastcall GetInternalTextHeight();
	DYNAMIC HWND __fastcall GetOwnerWindow();
	DYNAMIC bool __fastcall HandleCreateException();
	DYNAMIC void __fastcall InitializeNewForm();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall Paint();
	virtual void __fastcall PaintWindow(HDC DC);
	DYNAMIC bool __fastcall PaletteChanged(bool Foreground);
	virtual int __fastcall GetDesignDpi();
	virtual void __fastcall SetPixelsPerInch(int Value);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall RequestAlign();
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	virtual void __fastcall SetParentBiDiMode(bool Value);
	DYNAMIC void __fastcall DoDock(Vcl::Controls::TWinControl* NewDockSite, System::Types::TRect &ARect);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall UpdateActions();
	void __fastcall UpdateWindowState();
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall ValidateRename(System::Classes::TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName);
	DYNAMIC void __fastcall VisibleChanging();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Resizing(System::Uitypes::TWindowState State);
	TForm* __fastcall get_ActiveMDIChild();
	int __fastcall get_MDIChildCount();
	TForm* __fastcall get_MDIChildren(int I);
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	virtual void __fastcall DoBeforeMonitorDpiChanged(int OldDPI, int NewDPI);
	virtual void __fastcall DoAfterMonitorDpiChanged(int OldDPI, int NewDPI);
	__property TForm* ActiveMDIChild = {read=get_ActiveMDIChild};
	__property bool AlphaBlend = {read=FAlphaBlend, write=SetAlphaBlend, nodefault};
	__property System::Byte AlphaBlendValue = {read=FAlphaBlendValue, write=SetAlphaBlendValue, nodefault};
	__property System::Uitypes::TBorderIcons BorderIcons = {read=FBorderIcons, write=SetBorderIcons, stored=IsForm, default=7};
	__property AutoScroll = {stored=IsAutoScrollStored, default=0};
	__property ClientHeight = {write=SetClientHeight, stored=IsClientSizeStored};
	__property ClientWidth = {write=SetClientWidth, stored=IsClientSizeStored};
	__property bool TransparentColor = {read=FTransparentColor, write=SetTransparentColor, nodefault};
	__property System::Uitypes::TColor TransparentColorValue = {read=FTransparentColorValue, write=SetTransparentColorValue, nodefault};
	__property Ctl3D = {default=1};
	__property TDefaultMonitor DefaultMonitor = {read=FDefaultMonitor, write=FDefaultMonitor, stored=IsForm, default=3};
	__property HorzScrollBar = {stored=IsForm};
	__property Vcl::Graphics::TIcon* Icon = {read=FIcon, write=SetIcon, stored=IsIconStored};
	__property int MDIChildCount = {read=get_MDIChildCount, nodefault};
	__property TForm* MDIChildren[int I] = {read=get_MDIChildren};
	__property Vcl::Menus::TMenuItem* ObjectMenuItem = {read=FObjectMenuItem, write=SetObjectMenuItem, stored=IsForm};
	__property ParentFont = {default=0};
	__property PopupMenu = {stored=IsForm};
	__property System::Classes::TList* PopupChildren = {read=GetPopupChildren};
	__property TPosition Position = {read=FPosition, write=SetPosition, stored=IsForm, default=2};
	__property TPrintScale PrintScale = {read=FPrintScale, write=FPrintScale, stored=IsForm, default=1};
	__property TTileMode TileMode = {read=FTileMode, write=FTileMode, default=0};
	__property VertScrollBar = {stored=IsForm};
	__property Visible = {write=SetVisible, default=0};
	__property Vcl::Menus::TMenuItem* WindowMenu = {read=FWindowMenu, write=SetWindowMenu, stored=IsForm};
#ifndef _WIN64
	__property HWND ClientHandle = {read=FClientHandle, nodefault};
#else /* _WIN64 */
	__property HWND ClientHandle = {read=FClientHandle};
#endif /* _WIN64 */
	__property TFormStyle FormStyle = {read=FFormStyle, write=SetFormStyle, stored=IsForm, default=0};
	__property Height = {stored=IsFormSizeStored};
	__property Width = {stored=IsFormSizeStored};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate, stored=IsForm};
	__property TMonitorDpiChangedEvent OnAfterMonitorDpiChanged = {read=FOnAfterMonitorDpiChanged, write=FOnAfterMonitorDpiChanged, stored=IsForm};
	__property TMonitorDpiChangedEvent OnBeforeMonitorDpiChanged = {read=FOnBeforeMonitorDpiChanged, write=FOnBeforeMonitorDpiChanged, stored=IsForm};
	__property OnCanResize = {stored=IsForm};
	__property OnClick = {stored=IsForm};
	__property TCloseEvent OnClose = {read=FOnClose, write=FOnClose, stored=IsForm};
	__property TCloseQueryEvent OnCloseQuery = {read=FOnCloseQuery, write=FOnCloseQuery, stored=IsForm};
	__property System::Classes::TNotifyEvent OnCreate = {read=FOnCreate, write=FOnCreate, stored=IsForm};
	__property OnDblClick = {stored=IsForm};
	__property System::Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy, stored=IsForm};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate, stored=IsForm};
	__property OnDragDrop = {stored=IsForm};
	__property OnDragOver = {stored=IsForm};
	__property THelpEvent OnHelp = {read=FOnHelp, write=FOnHelp};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide, stored=IsForm};
	__property OnKeyDown = {stored=IsForm};
	__property OnKeyPress = {stored=IsForm};
	__property OnKeyUp = {stored=IsForm};
	__property OnMouseActivate = {stored=IsForm};
	__property OnMouseDown = {stored=IsForm};
	__property OnMouseMove = {stored=IsForm};
	__property OnMouseUp = {stored=IsForm};
	__property System::Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint, stored=IsForm};
	__property OnResize = {stored=IsForm};
	__property TShortCutEvent OnShortCut = {read=FOnShortCut, write=FOnShortCut};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow, stored=IsForm};
	
public:
	__fastcall virtual TCustomForm(System::Classes::TComponent* AOwner);
	__fastcall virtual TCustomForm(System::Classes::TComponent* AOwner, int Dummy);
	__fastcall virtual ~TCustomForm();
	virtual void __fastcall ScaleForCurrentDPI();
	virtual void __fastcall ScaleForPPI(int NewPPI);
	void __fastcall Close();
	virtual bool __fastcall CloseQuery();
	virtual void __fastcall DefaultHandler(void *Message);
	void __fastcall DefocusControl(Vcl::Controls::TWinControl* Control, bool Removing);
	DYNAMIC void __fastcall Dock(Vcl::Controls::TWinControl* NewDockSite, const System::Types::TRect &ARect);
	void __fastcall FocusControl(Vcl::Controls::TWinControl* Control);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	Vcl::Graphics::TBitmap* __fastcall GetFormImage();
	HIDESBASE void __fastcall Hide();
	DYNAMIC bool __fastcall IsShortCut(Winapi::Messages::TWMKey &Message);
	void __fastcall MakeFullyVisible(TMonitor* AMonitor = (TMonitor*)(0x0));
	DYNAMIC void __fastcall MouseWheelHandler(Winapi::Messages::TMessage &Message);
	void __fastcall Print();
	void __fastcall RecreateAsPopup(HWND AWindowHandle);
	void __fastcall Release();
	HIDESBASE void __fastcall SendCancelMode(Vcl::Controls::TControl* Sender);
	virtual void __fastcall SetFocus();
	virtual bool __fastcall SetFocusedControl(Vcl::Controls::TWinControl* Control);
	HIDESBASE void __fastcall Show();
	virtual int __fastcall ShowModal();
	virtual bool __fastcall WantChildKey(Vcl::Controls::TControl* Child, Winapi::Messages::TMessage &Message);
	void __fastcall set_PopupParent(TCustomForm* Value);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	void __fastcall UpdateDesignerCaption(bool AVisible, bool AUpdateFrame);
	__property bool Active = {read=FActive, nodefault};
	__property Vcl::Controls::TWinControl* ActiveControl = {read=FActiveControl, write=SetActiveControl, stored=IsForm};
	__property Action;
	__property Vcl::Controls::TWinControl* ActiveOleControl = {read=FActiveOleControl, write=SetActiveOleControl};
	__property TFormBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, stored=IsForm, default=2};
	__property Vcl::Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property Caption = {stored=IsForm, default=0};
	__property Color;
	__property _di_IDesignerHook Designer = {read=FDesigner, write=SetDesigner};
	__property bool DropTarget = {read=FDropTarget, write=FDropTarget, nodefault};
	__property Font;
	__property TFormState FormState = {read=FFormState, nodefault};
	__property TGlassFrame* GlassFrame = {read=FGlassFrame, write=SetGlassFrame};
	__property TTitleBar* CustomTitleBar = {read=FCustomTitleBar, write=SetCustomTitleBar};
	__property System::UnicodeString HelpFile = {read=FHelpFile, write=FHelpFile};
	__property bool KeyPreview = {read=FKeyPreview, write=FKeyPreview, stored=IsForm, default=0};
	__property Vcl::Menus::TMainMenu* Menu = {read=FMenu, write=SetMenu, stored=IsForm};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, nodefault};
	__property TMonitor* Monitor = {read=GetMonitor};
	__property _di_IOleForm OleFormObject = {read=FOleForm, write=FOleForm};
	__property TPopupMode PopupMode = {read=FPopupMode, write=SetPopupMode, default=0};
	__property bool Scaled = {read=GetScaled, write=SetScaled, stored=IsForm, default=1};
	__property bool ScreenSnap = {read=FScreenSnap, write=FScreenSnap, default=0};
	__property int SnapBuffer = {read=FSnapBuffer, write=FSnapBuffer, nodefault};
	__property System::Uitypes::TWindowState WindowState = {read=FWindowState, write=SetWindowState, stored=IsForm, default=0};
	__property TCustomForm* PopupParent = {read=FPopupParent, write=set_PopupParent};
	__property System::Win::Taskbarcore::TTaskbarHandler* TaskbarHandler = {read=FTaskbarHandler, write=SetTaskbarHandler};
	
__published:
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomForm(HWND ParentWindow) : TScrollingWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomFormClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomFormClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TActiveFormBorderStyle : unsigned char { afbNone, afbSingle, afbSunken, afbRaised };

class PASCALIMPLEMENTATION TCustomActiveForm : public TCustomForm
{
	typedef TCustomForm inherited;
	
private:
	TActiveFormBorderStyle FAxBorderStyle;
	void __fastcall SetAxBorderStyle(TActiveFormBorderStyle Value);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TCustomActiveForm(System::Classes::TComponent* AOwner);
	virtual bool __fastcall WantChildKey(Vcl::Controls::TControl* Child, Winapi::Messages::TMessage &Message);
	__property Visible = {default=0};
	
__published:
	__property ActiveControl;
	__property Anchors = {default=3};
	__property AutoScroll = {default=0};
	__property AutoSize = {default=0};
	__property TActiveFormBorderStyle AxBorderStyle = {read=FAxBorderStyle, write=SetAxBorderStyle, default=1};
	__property BorderWidth = {default=0};
	__property Caption = {stored=true, default=0};
	__property Color;
	__property Constraints;
	__property Font;
	__property Height = {stored=true};
	__property HorzScrollBar;
	__property KeyPreview = {default=0};
	__property Padding;
	__property PopupMenu;
	__property PrintScale = {default=1};
	__property Scaled = {default=1};
	__property ShowHint;
	__property VertScrollBar;
	__property Width = {stored=true};
	__property OnActivate;
	__property OnAfterMonitorDpiChanged;
	__property OnBeforeMonitorDpiChanged;
	__property OnClick;
	__property OnCreate;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDestroy;
	__property OnDeactivate;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnPaint;
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TCustomActiveForm(System::Classes::TComponent* AOwner, int Dummy) : TCustomForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TCustomActiveForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActiveForm(HWND ParentWindow) : TCustomForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TForm : public TCustomForm
{
	typedef TCustomForm inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	void __fastcall ArrangeIcons();
	void __fastcall Cascade();
	void __fastcall Next();
	void __fastcall Previous();
	void __fastcall Tile();
	__property ActiveMDIChild;
	__property ClientHandle;
	__property DockManager;
	__property MDIChildCount;
	__property MDIChildren;
	__property TileMode = {default=0};
	
__published:
	__property Action;
	__property ActiveControl;
	__property Align = {default=0};
	__property AlphaBlend = {default=0};
	__property AlphaBlendValue = {default=255};
	__property Anchors = {default=3};
	__property AutoScroll = {default=0};
	__property AutoSize = {default=0};
	__property BiDiMode;
	__property BorderIcons = {default=7};
	__property BorderStyle = {default=2};
	__property BorderWidth = {default=0};
	__property Caption = {default=0};
	__property ClientHeight;
	__property ClientWidth;
	__property Color;
	__property CustomTitleBar;
	__property TransparentColor = {default=0};
	__property TransparentColorValue = {default=0};
	__property Constraints;
	__property Ctl3D = {default=1};
	__property UseDockManager = {default=0};
	__property DefaultMonitor = {default=3};
	__property DockSite = {default=0};
	__property DoubleBuffered = {default=0};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentFont = {default=0};
	__property Font;
	__property FormStyle = {default=0};
	__property GlassFrame;
	__property Height;
	__property HelpFile = {default=0};
	__property HorzScrollBar;
	__property Icon;
	__property KeyPreview = {default=0};
	__property Padding;
	__property Menu;
	__property ObjectMenuItem;
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property PopupMode = {default=0};
	__property PopupParent;
	__property Position = {default=2};
	__property PrintScale = {default=1};
	__property Scaled = {default=1};
	__property ScreenSnap = {default=0};
	__property ShowHint;
	__property SnapBuffer = {default=10};
	__property Touch;
	__property TipMode = {default=2};
	__property VertScrollBar;
	__property Visible = {default=0};
	__property Width;
	__property WindowState = {default=0};
	__property WindowMenu;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnActivate;
	__property OnAfterMonitorDpiChanged;
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnBeforeMonitorDpiChanged;
	__property OnCanResize;
	__property OnClick;
	__property OnClose;
	__property OnCloseQuery;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnCreate;
	__property OnDblClick;
	__property OnDestroy;
	__property OnDeactivate;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnGesture;
	__property OnGetSiteInfo;
	__property OnHide;
	__property OnHelp;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnPaint;
	__property OnResize;
	__property OnShortCut;
	__property OnShow;
	__property OnStartDock;
	__property OnUnDock;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TForm(System::Classes::TComponent* AOwner) : TCustomForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TForm(System::Classes::TComponent* AOwner, int Dummy) : TCustomForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TForm(HWND ParentWindow) : TCustomForm(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TFormClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFormClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomDockForm : public TCustomForm
{
	typedef TCustomForm inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMControlListChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMUnDockClient(Vcl::Controls::TCMUnDockClient &Message);
	
protected:
	DYNAMIC void __fastcall DoAddDockClient(Vcl::Controls::TControl* Client, const System::Types::TRect &ARect);
	DYNAMIC void __fastcall DoRemoveDockClient(Vcl::Controls::TControl* Client);
	DYNAMIC void __fastcall GetSiteInfo(Vcl::Controls::TControl* Client, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TCustomDockForm(System::Classes::TComponent* AOwner);
	__property AutoScroll = {default=0};
	__property BorderStyle = {default=5};
	__property FormStyle = {default=3};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TCustomDockForm(System::Classes::TComponent* AOwner, int Dummy) : TCustomForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TCustomDockForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDockForm(HWND ParentWindow) : TCustomForm(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMonitor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	HMONITOR FHandle;
	int FMonitorNum;
	int __fastcall GetLeft();
	int __fastcall GetHeight();
	int __fastcall GetTop();
	int __fastcall GetWidth();
	System::Types::TRect __fastcall GetBoundsRect();
	System::Types::TRect __fastcall GetWorkareaRect();
	bool __fastcall GetPrimary();
	int __fastcall GetPixelsPerInch();
	
public:
#ifndef _WIN64
	__property HMONITOR Handle = {read=FHandle, nodefault};
#else /* _WIN64 */
	__property HMONITOR Handle = {read=FHandle};
#endif /* _WIN64 */
	__property int MonitorNum = {read=FMonitorNum, nodefault};
	__property int Left = {read=GetLeft, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property int Top = {read=GetTop, nodefault};
	__property int Width = {read=GetWidth, nodefault};
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect};
	__property System::Types::TRect WorkareaRect = {read=GetWorkareaRect};
	__property bool Primary = {read=GetPrimary, nodefault};
	__property int PixelsPerInch = {read=GetPixelsPerInch, nodefault};
public:
	/* TObject.Create */ inline __fastcall TMonitor() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMonitor() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TCursorRec *PCursorRec;

struct DECLSPEC_DRECORD TCursorRec
{
public:
	TCursorRec *Next;
	int Index;
	HICON Handle;
};


typedef PCursorRec TCursorRecType;

enum DECLSPEC_DENUM TMonitorDefaultTo : unsigned char { mdNearest, mdNull, mdPrimary };

class PASCALIMPLEMENTATION TScreen : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TStrings* FFonts;
	System::Classes::TStrings* FImes;
	System::UnicodeString FDefaultIme;
	HKL FDefaultKbLayout;
	int FPixelsPerInch;
	System::Uitypes::TCursor FCursor;
	int FCursorCount;
	System::Classes::TList* FForms;
	System::Classes::TList* FCustomForms;
	System::Classes::TList* FDataModules;
	System::Classes::TList* FMonitors;
	Vcl::Controls::TWinControl* FActiveControl;
	TCustomForm* FActiveCustomForm;
	TForm* FActiveForm;
	Vcl::Controls::TWinControl* FLastActiveControl;
	TCustomForm* FLastActiveCustomForm;
	TCustomForm* FFocusedForm;
	System::Classes::TList* FSaveFocusedList;
	Vcl::Graphics::TFont* FHintFont;
	Vcl::Graphics::TFont* FIconFont;
	Vcl::Graphics::TFont* FMenuFont;
	Vcl::Graphics::TFont* FMessageFont;
	Vcl::Graphics::TFont* FCaptionFont;
	System::Word FAlignLevel;
	Vcl::Controls::TControlState FControlState;
	System::Classes::TNotifyEvent FOnActiveControlChange;
	System::Classes::TNotifyEvent FOnActiveFormChange;
	TCursorRec *FCursorList;
	HICON FDefaultCursor;
	bool FUpdatingAllFonts;
	void __fastcall AlignForm(TCustomForm* AForm);
	void __fastcall AlignForms(TCustomForm* AForm, System::Types::TRect &Rect);
	void __fastcall AddDataModule(System::Classes::TDataModule* DataModule);
	void __fastcall AddForm(TCustomForm* AForm);
	void __fastcall ClearMonitors();
	void __fastcall CreateCursors();
	void __fastcall DeleteCursor(int Index);
	void __fastcall DestroyCursors();
	TMonitor* __fastcall FindMonitor(HMONITOR Handle);
	void __fastcall IconFontChanged(System::TObject* Sender);
	int __fastcall GetCustomFormCount();
	TCustomForm* __fastcall GetCustomForms(int Index);
	HICON __fastcall GetCursors(int Index);
	System::Classes::TDataModule* __fastcall GetDataModule(int Index);
	int __fastcall GetDataModuleCount();
	System::UnicodeString __fastcall GetDefaultIME();
	int __fastcall GetDesktopTop();
	int __fastcall GetDesktopLeft();
	int __fastcall GetDesktopHeight();
	int __fastcall GetDesktopWidth();
	System::Types::TRect __fastcall GetDesktopRect();
	System::Types::TRect __fastcall GetWorkAreaRect();
	int __fastcall GetWorkAreaHeight();
	int __fastcall GetWorkAreaLeft();
	int __fastcall GetWorkAreaTop();
	int __fastcall GetWorkAreaWidth();
	System::Classes::TStrings* __fastcall GetImes();
	int __fastcall GetHeight();
	TMonitor* __fastcall GetMonitor(int Index);
	int __fastcall GetMonitorCount();
	void __fastcall GetMonitors();
	System::Classes::TStrings* __fastcall GetFonts();
	TForm* __fastcall GetForm(int Index);
	int __fastcall GetFormCount();
	void __fastcall GetMetricSettings();
	int __fastcall GetWidth();
	void __fastcall InsertCursor(int Index, HICON Handle);
	void __fastcall RemoveDataModule(System::Classes::TDataModule* DataModule);
	void __fastcall RemoveForm(TCustomForm* AForm);
	void __fastcall SetCaptionFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetCursors(int Index, HICON Handle);
	void __fastcall SetCursor(System::Uitypes::TCursor Value);
	void __fastcall SetHintFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetIconFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetMenuFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetMessageFont(Vcl::Graphics::TFont* Value);
	void __fastcall UpdateLastActive();
	TMonitor* __fastcall GetPrimaryMonitor();
	int __fastcall GetDefaultPixelsPerInch();
	
public:
	__fastcall virtual TScreen(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TScreen();
	void __fastcall DisableAlign();
	void __fastcall EnableAlign();
	TMonitor* __fastcall MonitorFromPoint(const System::Types::TPoint &Point, TMonitorDefaultTo MonitorDefault = (TMonitorDefaultTo)(0x0));
	TMonitor* __fastcall MonitorFromRect(const System::Types::TRect &Rect, TMonitorDefaultTo MonitorDefault = (TMonitorDefaultTo)(0x0));
	TMonitor* __fastcall MonitorFromWindow(const NativeUInt Handle, TMonitorDefaultTo MonitorDefault = (TMonitorDefaultTo)(0x0));
	void __fastcall Realign();
	void __fastcall ResetFonts();
	__property Vcl::Controls::TWinControl* ActiveControl = {read=FActiveControl};
	__property TCustomForm* ActiveCustomForm = {read=FActiveCustomForm};
	__property TForm* ActiveForm = {read=FActiveForm};
	__property int CustomFormCount = {read=GetCustomFormCount, nodefault};
	__property TCustomForm* CustomForms[int Index] = {read=GetCustomForms};
	__property int CursorCount = {read=FCursorCount, nodefault};
	__property System::Uitypes::TCursor Cursor = {read=FCursor, write=SetCursor, nodefault};
	__property HICON Cursors[int Index] = {read=GetCursors, write=SetCursors};
	__property System::Classes::TDataModule* DataModules[int Index] = {read=GetDataModule};
	__property int DataModuleCount = {read=GetDataModuleCount, nodefault};
	__property int DefaultPixelsPerInch = {read=GetDefaultPixelsPerInch, nodefault};
	__property TCustomForm* FocusedForm = {read=FFocusedForm, write=FFocusedForm};
	__property System::Classes::TList* SaveFocusedList = {read=FSaveFocusedList};
	__property int MonitorCount = {read=GetMonitorCount, nodefault};
	__property TMonitor* Monitors[int Index] = {read=GetMonitor};
	__property System::Types::TRect DesktopRect = {read=GetDesktopRect};
	__property int DesktopHeight = {read=GetDesktopHeight, nodefault};
	__property int DesktopLeft = {read=GetDesktopLeft, nodefault};
	__property int DesktopTop = {read=GetDesktopTop, nodefault};
	__property int DesktopWidth = {read=GetDesktopWidth, nodefault};
	__property System::Types::TRect WorkAreaRect = {read=GetWorkAreaRect};
	__property int WorkAreaHeight = {read=GetWorkAreaHeight, nodefault};
	__property int WorkAreaLeft = {read=GetWorkAreaLeft, nodefault};
	__property int WorkAreaTop = {read=GetWorkAreaTop, nodefault};
	__property int WorkAreaWidth = {read=GetWorkAreaWidth, nodefault};
	__property Vcl::Graphics::TFont* HintFont = {read=FHintFont, write=SetHintFont};
	__property Vcl::Graphics::TFont* IconFont = {read=FIconFont, write=SetIconFont};
	__property Vcl::Graphics::TFont* MenuFont = {read=FMenuFont, write=SetMenuFont};
	__property Vcl::Graphics::TFont* MessageFont = {read=FMessageFont, write=SetMessageFont};
	__property Vcl::Graphics::TFont* CaptionFont = {read=FCaptionFont, write=SetCaptionFont};
	__property System::Classes::TStrings* Fonts = {read=GetFonts};
	__property int FormCount = {read=GetFormCount, nodefault};
	__property TForm* Forms[int Index] = {read=GetForm};
	__property System::Classes::TStrings* Imes = {read=GetImes};
	__property System::UnicodeString DefaultIme = {read=GetDefaultIME};
#ifndef _WIN64
	__property HKL DefaultKbLayout = {read=FDefaultKbLayout, nodefault};
#else /* _WIN64 */
	__property HKL DefaultKbLayout = {read=FDefaultKbLayout};
#endif /* _WIN64 */
	__property int Height = {read=GetHeight, nodefault};
	__property int PixelsPerInch = {read=FPixelsPerInch, nodefault};
	__property TMonitor* PrimaryMonitor = {read=GetPrimaryMonitor};
	__property int Width = {read=GetWidth, nodefault};
	__property System::Classes::TNotifyEvent OnActiveControlChange = {read=FOnActiveControlChange, write=FOnActiveControlChange};
	__property System::Classes::TNotifyEvent OnActiveFormChange = {read=FOnActiveFormChange, write=FOnActiveFormChange};
	__property bool UpdatingAllFonts = {read=FUpdatingAllFonts, nodefault};
};


enum DECLSPEC_DENUM TTimerMode : unsigned char { tmShow, tmHide };

struct DECLSPEC_DRECORD TCMHintShowPause
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	int WasActive;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller WasActiveFiller;
#endif /* _WIN64 */
	int *Pause;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TPopupForm
{
public:
	int FormID;
	TCustomForm* Form;
	bool WasPopup;
};


typedef System::DynamicArray<TPopupForm> TPopupFormArray;

typedef void __fastcall (__closure *TMessageEvent)(tagMSG &Msg, bool &Handled);

typedef void __fastcall (__closure *TExceptionEvent)(System::TObject* Sender, System::Sysutils::Exception* E);

typedef void __fastcall (__closure *TGetHandleEvent)(HWND &Handle);

typedef void __fastcall (__closure *TIdleEvent)(System::TObject* Sender, bool &Done);

typedef void __fastcall (__closure *TShowHintEvent)(System::UnicodeString &HintStr, bool &CanShow, Vcl::Controls::THintInfo &HintInfo);

typedef bool __fastcall (__closure *TWindowHook)(Winapi::Messages::TMessage &Message);

typedef void __fastcall (__closure *TSettingChangeEvent)(System::TObject* Sender, int Flag, const System::UnicodeString Section, int &Result);

typedef void __fastcall (__closure *TRemoteSessionChangedEvent)(System::TObject* Sender, void *InRemoteSession);

typedef void * TTaskWindowList;

class PASCALIMPLEMENTATION TApplication : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
	
private:
	struct DECLSPEC_DRECORD TBiDiKeyboard
	{
	private:
		System::UnicodeString BiDiKeyboard;
		System::UnicodeString NonBiDiKeyboard;
		HKL BiDiKeyboardHKL;
		HKL NonBiDiKeyboardHKL;
		
	public:
		void __fastcall SetBiDiKeyboard(const System::UnicodeString Value);
		void __fastcall SetNonBiDiKeyboard(const System::UnicodeString Value);
		System::UnicodeString __fastcall GetBidiKeyboard();
		System::UnicodeString __fastcall GetNonBidiKeyboard();
		void __fastcall ApplyBiDiKeyboardLayout();
		void __fastcall ApplyNonBiDiKeyboardLayout();
	};
	
	
	typedef System::DynamicArray<HWND> _TApplication__1;
	
	
private:
	bool FAppIconic;
	System::Classes::TBiDiMode FBiDiMode;
	TBiDiKeyboard FBiDiKeyboard;
	Vcl::Graphics::TFont* FDefaultFont;
	TForm* FMainForm;
	Vcl::Controls::TControl* FMouseControl;
	System::Helpintfs::_di_IHelpSystem FHelpSystem;
	System::UnicodeString FHelpFile;
	System::UnicodeString FHint;
	bool FHintActive;
	bool FUpdateFormatSettings;
	bool FUpdateMetricSettings;
	bool FShowMainForm;
	System::Uitypes::TColor FHintColor;
	Vcl::Controls::TControl* FHintControl;
	System::Types::TRect FHintCursorRect;
	int FHintHidePause;
	int FHintPause;
	bool FHintShortCuts;
	int FHintShortPause;
	Vcl::Controls::THintWindow* FHintWindow;
	bool FShowHint;
	TTimerMode FTimerMode;
	NativeUInt FTimerHandle;
	System::UnicodeString FTitle;
	System::Classes::TList* FTopMostList;
	int FTopMostLevel;
	System::Classes::TList* FPopupOwners;
	int FPopupLevel;
	Vcl::Graphics::TIcon* FIcon;
	bool FTerminate;
	bool FActive;
	bool FAllowTesting;
	NativeUInt FTestLib;
	bool FHandleCreated;
	bool FRunning;
	System::Classes::TList* FWindowHooks;
	void *FWindowList;
	HWND FDialogHandle;
	bool FAutoDragDocking;
	int FActionUpdateDelay;
	int FModalLevel;
	int FCurrentPopupID;
	TPopupFormArray FPopupForms;
	TPopupMode FModalPopupMode;
	bool FCreatingMainForm;
	bool FEnumAllWindowsOnActivateHint;
	bool FMainFormOnTaskBar;
	HWND FLastActivePopup;
	_TApplication__1 FOwnedAppWnds;
	System::Uitypes::TWindowState FInitialMainFormState;
	bool FSingleBufferingInRemoteSessions;
	System::Classes::TActionEvent FOnActionExecute;
	System::Classes::TActionEvent FOnActionUpdate;
	TExceptionEvent FOnException;
	TGetHandleEvent FOnGetActiveFormHandle;
	TGetHandleEvent FOnGetMainFormHandle;
	TMessageEvent FOnMessage;
	System::Classes::TNotifyEvent FOnModalBegin;
	System::Classes::TNotifyEvent FOnModalEnd;
	THelpEvent FOnHelp;
	System::Classes::TNotifyEvent FOnHint;
	TIdleEvent FOnIdle;
	System::Classes::TNotifyEvent FOnDeactivate;
	System::Classes::TNotifyEvent FOnActivate;
	System::Classes::TNotifyEvent FOnMinimize;
	System::Classes::TNotifyEvent FOnRestore;
	TShortCutEvent FOnShortCut;
	TShowHintEvent FOnShowHint;
	TSettingChangeEvent FOnSettingChange;
	TRemoteSessionChangedEvent FOnRemoteSessionChanged;
	HWND FHandle;
	void *FObjectInstance;
	HWND FPopupControlWnd;
	bool FNeedToUninitialize;
	bool FIsMetropolisUI;
	bool FDisabledStateBeforeMinimize;
	bool __fastcall CheckIniChange(Winapi::Messages::TMessage &Message);
	void __fastcall DefaultFontChanged(System::TObject* Sender);
	void __fastcall DoActionIdle();
	Vcl::Controls::TControl* __fastcall DoMouseIdle();
	void __fastcall DoNormalizeTopMosts(bool IncludeMain);
	bool __fastcall DoOnHelp(System::Word Command, NativeInt Data, bool &CallHelp);
	void __fastcall DoShowOwnedPopups(bool Show);
	System::UnicodeString __fastcall GetBiDiKeyboard();
	System::UnicodeString __fastcall GetNonBiDiKeyboard();
	System::UnicodeString __fastcall GetCurrentHelpFile();
	HWND __fastcall GetDialogHandle();
	HWND __fastcall GetActiveFormHandle();
	HWND __fastcall GetMainFormHandle();
	System::UnicodeString __fastcall GetExeName();
	HICON __fastcall GetIconHandle();
	System::UnicodeString __fastcall GetTitle();
	void __fastcall HintTimerExpired();
	void __fastcall IconChanged(System::TObject* Sender);
	bool __fastcall InvokeHelp(System::Word Command, NativeInt Data);
	void __fastcall InternalRestore();
#ifndef _WIN64
	void __fastcall NotifyForms(System::Word Msg, NativeUInt WParam = (NativeUInt)(0x0), NativeInt LParam = (NativeInt)(0x0));
#else /* _WIN64 */
	void __fastcall NotifyForms(System::Word Msg, NativeUInt WParam = (NativeUInt)(0ULL), NativeInt LParam = (NativeInt)(0LL));
#endif /* _WIN64 */
	void __fastcall PopupControlProc(Winapi::Messages::TMessage &Message);
	bool __fastcall ProcessMessage(tagMSG &Msg);
	void __fastcall RemoteSessionChange(bool AInRemoteSession, bool AForceEvent = false);
	void __fastcall RestoreWindowStateBeforeMinimize(HWND AHandle, bool ADisablingWindows);
	void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	void __fastcall SetBiDiKeyboard(const System::UnicodeString Value);
	void __fastcall SetNonBiDiKeyboard(const System::UnicodeString Value);
	void __fastcall SetDefaultFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetDialogHandle(HWND Value);
	void __fastcall SetHandle(HWND Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	void __fastcall SetHintColor(System::Uitypes::TColor Value);
	void __fastcall SetIcon(Vcl::Graphics::TIcon* Value);
	void __fastcall SetMainFormOnTaskBar(const bool Value);
	void __fastcall SetShowHint(bool Value);
	void __fastcall SetSingleBufferingInRemoteSessions(bool Value);
	void __fastcall SetTitle(const System::UnicodeString Value);
	void __fastcall SettingChange(Winapi::Messages::TWMSettingChange &Message);
	bool __fastcall CheckMetricSettings(const Winapi::Messages::TWMSettingChange &Message);
	bool __fastcall CheckFormatSettings(const Winapi::Messages::TWMSettingChange &Message);
	void __fastcall StartHintTimer(unsigned Value, TTimerMode TimerMode);
	void __fastcall StopHintTimer();
	void __fastcall StoreWindowStateBeforeMinimize(HWND AHandle);
	void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall UpdateVisible();
	bool __fastcall ValidateHelpSystem();
	void __fastcall WakeMainThread(System::TObject* Sender);
	bool __fastcall DispatchAction(int Msg, System::Classes::TBasicAction* Action);
	
protected:
	bool FInRemoteSession;
	void __fastcall Idle(const tagMSG &Msg);
	void __fastcall RemoteSessionCheck();
	bool __fastcall IsDlgMsg(tagMSG &Msg);
	bool __fastcall IsHintMsg(tagMSG &Msg);
	bool __fastcall IsKeyMsg(tagMSG &Msg);
	bool __fastcall IsMDIMsg(tagMSG &Msg);
	bool __fastcall IsShortCut(Winapi::Messages::TWMKey &Message);
	bool __fastcall IsPreProcessMessage(tagMSG &Msg);
	
public:
	__fastcall virtual TApplication(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TApplication();
	void __fastcall ActivateHint(const System::Types::TPoint &CursorPos);
	void __fastcall ApplyBiDiKeyboardLayout();
	void __fastcall ApplyNonBiDiKeyboardLayout();
	int __fastcall AddPopupForm(TCustomForm* APopupForm);
	void __fastcall BringToFront();
	void __fastcall ControlDestroyed(Vcl::Controls::TControl* Control);
	void __fastcall CancelHint();
	void __fastcall CreateForm(System::Classes::TComponentClass InstanceClass, void *Reference);
	void __fastcall CreateHandle();
	void __fastcall DoApplicationIdle();
	HIDESBASE bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	void __fastcall HandleException(System::TObject* Sender);
	void __fastcall HandleMessage();
	bool __fastcall HelpCommand(int Command, NativeInt Data);
	bool __fastcall HelpContext(System::Classes::THelpContext Context);
	bool __fastcall HelpJump(const System::UnicodeString JumpID);
	bool __fastcall HelpKeyword(const System::UnicodeString Keyword);
	bool __fastcall HelpShowTableOfContents();
	void __fastcall HideHint();
	void __fastcall HintMouseMessage(Vcl::Controls::TControl* Control, Winapi::Messages::TMessage &Message);
	void __fastcall HookMainWindow(TWindowHook Hook);
	void __fastcall HookSynchronizeWakeup();
	void __fastcall Initialize();
	bool __fastcall IsRightToLeft();
	void __fastcall Minimize();
	void __fastcall ModalStarted();
	void __fastcall ModalFinished();
	void __fastcall NormalizeAllTopMosts();
	void __fastcall NormalizeTopMosts();
	void __fastcall ProcessMessages();
	void __fastcall RemovePopupForm(TCustomForm* APopupForm);
	void __fastcall Restore();
	void __fastcall RestoreTopMosts();
	void __fastcall Run();
	void __fastcall ShowException(System::Sysutils::Exception* E);
	void __fastcall Terminate();
	void __fastcall UnhookMainWindow(TWindowHook Hook);
	void __fastcall UnhookSynchronizeWakeup();
	HIDESBASE bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	bool __fastcall UseRightToLeftAlignment();
	bool __fastcall UseRightToLeftReading();
	bool __fastcall UseRightToLeftScrollBar();
	void __fastcall UseMetropolisUI();
	int __fastcall MessageBox(const System::WideChar * Text, const System::WideChar * Caption, int Flags = 0x0);
	__property bool Active = {read=FActive, nodefault};
	__property int ActionUpdateDelay = {read=FActionUpdateDelay, write=FActionUpdateDelay, default=0};
#ifndef _WIN64
	__property HWND ActiveFormHandle = {read=GetActiveFormHandle, nodefault};
#else /* _WIN64 */
	__property HWND ActiveFormHandle = {read=GetActiveFormHandle};
#endif /* _WIN64 */
	__property bool AllowTesting = {read=FAllowTesting, write=FAllowTesting, nodefault};
	__property bool AutoDragDocking = {read=FAutoDragDocking, write=FAutoDragDocking, default=1};
	__property System::Helpintfs::_di_IHelpSystem HelpSystem = {read=FHelpSystem};
	__property System::UnicodeString CurrentHelpFile = {read=GetCurrentHelpFile};
	__property Vcl::Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
#ifndef _WIN64
	__property HWND DialogHandle = {read=GetDialogHandle, write=SetDialogHandle, nodefault};
#else /* _WIN64 */
	__property HWND DialogHandle = {read=GetDialogHandle, write=SetDialogHandle};
#endif /* _WIN64 */
	__property bool EnumAllWindowsOnActivateHint = {read=FEnumAllWindowsOnActivateHint, write=FEnumAllWindowsOnActivateHint, nodefault};
	__property System::UnicodeString ExeName = {read=GetExeName};
	__property System::UnicodeString HelpFile = {read=FHelpFile, write=FHelpFile};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property System::Uitypes::TColor HintColor = {read=FHintColor, write=SetHintColor, nodefault};
	__property int HintHidePause = {read=FHintHidePause, write=FHintHidePause, nodefault};
	__property int HintPause = {read=FHintPause, write=FHintPause, nodefault};
	__property bool HintShortCuts = {read=FHintShortCuts, write=FHintShortCuts, nodefault};
	__property int HintShortPause = {read=FHintShortPause, write=FHintShortPause, nodefault};
	__property Vcl::Graphics::TIcon* Icon = {read=FIcon, write=SetIcon};
	__property bool InRemoteSession = {read=FInRemoteSession, nodefault};
	__property bool IsMetropolisUI = {read=FIsMetropolisUI, nodefault};
	__property TForm* MainForm = {read=FMainForm};
#ifndef _WIN64
	__property HWND MainFormHandle = {read=GetMainFormHandle, nodefault};
#else /* _WIN64 */
	__property HWND MainFormHandle = {read=GetMainFormHandle};
#endif /* _WIN64 */
	__property bool MainFormOnTaskBar = {read=FMainFormOnTaskBar, write=SetMainFormOnTaskBar, nodefault};
	__property int ModalLevel = {read=FModalLevel, nodefault};
	__property TPopupMode ModalPopupMode = {read=FModalPopupMode, write=FModalPopupMode, default=0};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, write=SetBiDiMode, default=0};
	__property System::UnicodeString BiDiKeyboard = {read=GetBiDiKeyboard, write=SetBiDiKeyboard};
	__property System::UnicodeString NonBiDiKeyboard = {read=GetNonBiDiKeyboard, write=SetNonBiDiKeyboard};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, nodefault};
	__property bool ShowMainForm = {read=FShowMainForm, write=FShowMainForm, nodefault};
	__property bool SingleBufferingInRemoteSessions = {read=FSingleBufferingInRemoteSessions, write=SetSingleBufferingInRemoteSessions, default=1};
	__property bool Terminated = {read=FTerminate, nodefault};
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property bool UpdateFormatSettings = {read=FUpdateFormatSettings, write=FUpdateFormatSettings, nodefault};
	__property bool UpdateMetricSettings = {read=FUpdateMetricSettings, write=FUpdateMetricSettings, nodefault};
	__property System::Classes::TActionEvent OnActionExecute = {read=FOnActionExecute, write=FOnActionExecute};
	__property System::Classes::TActionEvent OnActionUpdate = {read=FOnActionUpdate, write=FOnActionUpdate};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property TExceptionEvent OnException = {read=FOnException, write=FOnException};
	__property TGetHandleEvent OnGetActiveFormHandle = {read=FOnGetActiveFormHandle, write=FOnGetActiveFormHandle};
	__property TGetHandleEvent OnGetMainFormHandle = {read=FOnGetMainFormHandle, write=FOnGetMainFormHandle};
	__property TIdleEvent OnIdle = {read=FOnIdle, write=FOnIdle};
	__property THelpEvent OnHelp = {read=FOnHelp, write=FOnHelp};
	__property System::Classes::TNotifyEvent OnHint = {read=FOnHint, write=FOnHint};
	__property TMessageEvent OnMessage = {read=FOnMessage, write=FOnMessage};
	__property System::Classes::TNotifyEvent OnMinimize = {read=FOnMinimize, write=FOnMinimize};
	__property System::Classes::TNotifyEvent OnModalBegin = {read=FOnModalBegin, write=FOnModalBegin};
	__property System::Classes::TNotifyEvent OnModalEnd = {read=FOnModalEnd, write=FOnModalEnd};
	__property TRemoteSessionChangedEvent OnRemoteSessionChanged = {read=FOnRemoteSessionChanged, write=FOnRemoteSessionChanged};
	__property System::Classes::TNotifyEvent OnRestore = {read=FOnRestore, write=FOnRestore};
	__property TShowHintEvent OnShowHint = {read=FOnShowHint, write=FOnShowHint};
	__property TShortCutEvent OnShortCut = {read=FOnShortCut, write=FOnShortCut};
	__property TSettingChangeEvent OnSettingChange = {read=FOnSettingChange, write=FOnSettingChange};
#ifndef _WIN64
	__property HWND Handle = {read=FHandle, write=SetHandle, nodefault};
	__property HWND PopupControlWnd = {read=FPopupControlWnd, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=FHandle, write=SetHandle};
	__property HWND PopupControlWnd = {read=FPopupControlWnd};
#endif /* _WIN64 */
};


typedef void *TFocusState;

typedef bool __stdcall (*TSetLayeredWindowAttributes)(NativeUInt Hwnd, unsigned crKey, System::Byte bAlpha, unsigned dwFlags);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TScrollingStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
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
		TScrollingStyleHook* FStyleHook;
		bool FVertical;
		HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Msg);
		HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Msg);
		HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
		
	protected:
		virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
		virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
		
	public:
		__fastcall virtual TScrollWindow(System::Classes::TComponent* AOwner);
		__property TScrollingStyleHook* StyleHook = {read=FStyleHook, write=FStyleHook};
		__property bool Vertical = {read=FVertical, write=FVertical, nodefault};
	public:
		/* TWinControl.CreateParented */ inline __fastcall TScrollWindow(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
		/* TWinControl.Destroy */ inline __fastcall virtual ~TScrollWindow() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	Vcl::Themes::TThemedScrollBar FHorzDownState;
	TScrollWindow* FHorzScrollWnd;
	Vcl::Themes::TThemedScrollBar FHorzSliderState;
	Vcl::Themes::TThemedScrollBar FHorzUpState;
	bool FLeftButtonDown;
	float FListPos;
	int FPrevScrollPos;
	float FScrollPos;
	Vcl::Themes::TThemedScrollBar FVertDownState;
	TScrollWindow* FVertScrollWnd;
	Vcl::Themes::TThemedScrollBar FVertSliderState;
	Vcl::Themes::TThemedScrollBar FVertUpState;
	bool FInitingScrollBars;
	System::Types::TRect __fastcall GetHorzDownButtonRect();
	System::Types::TRect __fastcall GetHorzScrollRect();
	System::Types::TRect __fastcall GetHorzSliderRect();
	System::Types::TRect __fastcall GetHorzTrackRect();
	System::Types::TRect __fastcall GetHorzUpButtonRect();
	System::Types::TRect __fastcall GetParentBounds();
	System::Types::TRect __fastcall GetVertDownButtonRect();
	System::Types::TRect __fastcall GetVertScrollRect();
	System::Types::TRect __fastcall GetVertSliderRect();
	System::Types::TRect __fastcall GetVertTrackRect();
	System::Types::TRect __fastcall GetVertUpButtonRect();
	void __fastcall InitScrollState();
	MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCMouseMove(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMVScroll(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMHScroll(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMMove(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMCaptureChanged(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMNCLButtonDblClk(Winapi::Messages::TWMMouse &Msg);
	MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Msg);
	MESSAGE void __fastcall WMShowWindow(Winapi::Messages::TWMShowWindow &Msg);
	MESSAGE void __fastcall WMClose(Winapi::Messages::TWMNoParams &Msg);
	
protected:
	bool FMouseInScrolls;
	virtual bool __fastcall AcceptMessage(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DrawBorder();
	virtual void __fastcall DrawHorzScroll(HDC DC);
	virtual void __fastcall DrawVertScroll(HDC DC);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintScroll();
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall MouseLeave();
	bool __fastcall IsPopupWindow();
	virtual bool __fastcall ShowScrollBars();
	void __fastcall InitScrollBars();
	virtual void __fastcall UpdateScroll();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property bool InitingScrollBars = {read=FInitingScrollBars, nodefault};
	__property System::Types::TRect HorzDownButtonRect = {read=GetHorzDownButtonRect};
	__property Vcl::Themes::TThemedScrollBar HorzDownState = {read=FHorzDownState, write=FHorzDownState, nodefault};
	__property System::Types::TRect HorzScrollRect = {read=GetHorzScrollRect};
	__property System::Types::TRect HorzSliderRect = {read=GetHorzSliderRect};
	__property Vcl::Themes::TThemedScrollBar HorzSliderState = {read=FHorzSliderState, write=FHorzSliderState, nodefault};
	__property System::Types::TRect HorzTrackRect = {read=GetHorzTrackRect};
	__property System::Types::TRect HorzUpButtonRect = {read=GetHorzUpButtonRect};
	__property Vcl::Themes::TThemedScrollBar HorzUpState = {read=FHorzUpState, write=FHorzUpState, nodefault};
	__property bool LeftButtonDown = {read=FLeftButtonDown, nodefault};
	__property float ListPos = {read=FListPos, write=FListPos};
	__property System::Types::TRect ParentBounds = {read=GetParentBounds};
	__property int PrevScrollPos = {read=FPrevScrollPos, write=FPrevScrollPos, nodefault};
	__property float ScrollPos = {read=FScrollPos, write=FScrollPos};
	__property System::Types::TRect VertDownButtonRect = {read=GetVertDownButtonRect};
	__property Vcl::Themes::TThemedScrollBar VertDownState = {read=FVertDownState, write=FVertDownState, nodefault};
	__property System::Types::TRect VertScrollRect = {read=GetVertScrollRect};
	__property System::Types::TRect VertSliderRect = {read=GetVertSliderRect};
	__property Vcl::Themes::TThemedScrollBar VertSliderState = {read=FVertSliderState, write=FVertSliderState, nodefault};
	__property System::Types::TRect VertTrackRect = {read=GetVertTrackRect};
	__property System::Types::TRect VertUpButtonRect = {read=GetVertUpButtonRect};
	__property Vcl::Themes::TThemedScrollBar VertUpState = {read=FVertUpState, write=FVertUpState, nodefault};
	__property TScrollWindow* HorzScrollWnd = {read=FHorzScrollWnd};
	__property TScrollWindow* VertScrollWnd = {read=FVertScrollWnd};
	
public:
	__fastcall virtual TScrollingStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TScrollingStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFormStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
	
private:
	class DELPHICLASS TMainMenuBarStyleHook;
	class PASCALIMPLEMENTATION TMainMenuBarStyleHook : public System::TObject
	{
		typedef System::TObject inherited;
		
		
	private:
#ifndef _WIN64
		#pragma pack(push,8)
#endif /* not _WIN64 */
		struct DECLSPEC_DRECORD TMenuBarButton
		{
		public:
			int Index;
			Vcl::Themes::TThemedWindow State;
			System::Types::TRect ItemRect;
		};
#ifndef _WIN64
		#pragma pack(pop)
#endif /* not _WIN64 */
		
		
		
	public:
#ifndef _WIN64
		#pragma pack(push,8)
#endif /* not _WIN64 */
		struct DECLSPEC_DRECORD TMenuBarItem
		{
		public:
			int Index;
			Vcl::Themes::TThemedMenu State;
			Vcl::Menus::TMenuItem* MenuItem;
			System::Types::TRect ItemRect;
		};
#ifndef _WIN64
		#pragma pack(pop)
#endif /* not _WIN64 */
		
		
		
	private:
		typedef System::DynamicArray<TMenuBarItem> _TFormStyleHook_TMainMenuBarStyleHook__1;
		
		
	private:
		static Vcl::Menus::TMenuItem* FCurrentMenuItem;
		static TFormStyleHook::TMainMenuBarStyleHook* FMenuBarHook;
		static NativeInt __stdcall PopupMenuHook(int Code, NativeUInt WParam, tagMSG &Msg);
		static const System::Int8 MainMenuItemDefaultMargin = System::Int8(0xe);
		
		int FActiveItem;
		System::Types::TRect FBoundsRect;
		bool FEnterWithKeyboard;
		TFormStyleHook* FFormHook;
		Vcl::Graphics::TIcon* FIcon;
		HICON FIconHandle;
		bool FInMenuLoop;
		int FItemCount;
		_TFormStyleHook_TMainMenuBarStyleHook__1 FItems;
		int FHotMDIButton;
		int FOldMDIHotButton;
		System::StaticArray<TMenuBarButton, 3> FMDIButtons;
		bool FMDIChildSysMenuActive;
		bool FMDIChildSystemMenuTracking;
		bool FMenuActive;
		HHOOK FMenuHook;
		bool FMenuPush;
		bool FMouseInMainMenu;
		bool FMustActivateMDIChildSysMenu;
		bool FMustActivateMenuItem;
		bool FMustActivateSysMenu;
		int FOldActiveItem;
		System::Types::TPoint FOldCursorPos;
		int FPressedMDIButton;
		bool FSelectFirstItem;
		bool FShowMDIButtons;
		bool FSysMenuActive;
		bool FSystemMenuTracking;
		bool __fastcall CanFindPriorItem(Vcl::Menus::TMenuItem* AMenuItem);
		bool __fastcall CanFindNextItem(Vcl::Menus::TMenuItem* AMenuItem);
		bool __fastcall CanTrackMDISystemMenu();
		bool __fastcall CanTrackSystemMenu();
		void __fastcall DrawItem(const TMenuBarItem &AItem, Vcl::Graphics::TCanvas* ACanvas);
		int __fastcall FindFirstMenuItem(bool AUpdateMenu);
		int __fastcall FindFirstRightMenuItem(bool AUpdateMenu);
		int __fastcall FindHotKeyItem(int CharCode, bool AUpdateMenu);
		Vcl::Menus::TMenuItem* __fastcall FindItem(NativeUInt Value, Vcl::Menus::TFindItemKind Kind);
		int __fastcall FindNextMenuItem(bool AUpdateMenu);
		int __fastcall FindPriorMenuItem(bool AUpdateMenu);
		Vcl::Graphics::TIcon* __fastcall GetIcon();
		Vcl::Graphics::TIcon* __fastcall GetIconFast();
		int __fastcall GetMenuItemWidth(Vcl::Menus::TMenuItem* AMenuItem, Vcl::Graphics::TCanvas* ACanvas);
		System::Types::TPoint __fastcall GetTrackMenuPos(const TMenuBarItem &AItem);
		void __fastcall HookMenus();
		bool __fastcall IsSubMenuItem(Vcl::Menus::TMenuItem* AMenuItem);
		int __fastcall ItemFromCursorPos();
		int __fastcall ItemFromPoint(int X, int Y);
		Vcl::Menus::TMainMenu* __fastcall MainMenu();
		void __fastcall MenuExit();
		int __fastcall MDIButtonFromPoint(int X, int Y);
		void __fastcall MDIChildClose();
		void __fastcall MDIChildMinimize();
		void __fastcall MDIChildRestore();
		void __fastcall SetBoundsRect(const System::Types::TRect &ABoundsRect);
		void __fastcall SetShowMDIButtons(bool Value);
		void __fastcall TrackMenuFromItem();
		void __fastcall UnHookMenus();
		int __fastcall GetSystemMetrics(int nIndex);
		
	public:
		__fastcall TMainMenuBarStyleHook(TFormStyleHook* FormHook);
		__fastcall virtual ~TMainMenuBarStyleHook();
		bool __fastcall CheckHotKeyItem(System::Word ACharCode);
		int __fastcall GetMenuHeight(int AWidth);
		void __fastcall Invalidate();
		void __fastcall MenuEnter(bool ATrackMenu);
		void __fastcall MouseDown(int X, int Y);
		void __fastcall MouseMove(int X, int Y);
		void __fastcall MouseUp(int X, int Y);
		void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
		void __fastcall ProcessMenuLoop(bool ATrackMenu);
		void __fastcall TrackSystemMenu();
		void __fastcall TrackMDIChildSystemMenu();
		__property System::Types::TRect BoundsRect = {read=FBoundsRect, write=SetBoundsRect};
		__property bool InMenuLoop = {read=FInMenuLoop, write=FInMenuLoop, nodefault};
		__property bool EnterWithKeyboard = {read=FEnterWithKeyboard, write=FEnterWithKeyboard, nodefault};
		__property bool MenuActive = {read=FMenuActive, write=FMenuActive, nodefault};
		__property bool MustActivateMDIChildSysMenu = {read=FMustActivateMDIChildSysMenu, write=FMustActivateMDIChildSysMenu, nodefault};
		__property bool MustActivateSysMenu = {read=FMustActivateSysMenu, write=FMustActivateSysMenu, nodefault};
		__property bool MustActivateMenuItem = {read=FMustActivateMenuItem, write=FMustActivateMenuItem, nodefault};
		__property bool ShowMDIButtons = {read=FShowMDIButtons, write=SetShowMDIButtons, nodefault};
		__property bool MouseInMainMenu = {read=FMouseInMainMenu, nodefault};
	};
	
	
	
private:
	static const System::Byte WM_NCUAHDRAWCAPTION = System::Byte(0xae);
	
	System::Types::TRect FCaptionRect;
	bool FChangeSizeCalled;
	HWND FChangeVisibleChildHandle;
	System::Types::TRect FCloseButtonRect;
	bool FFormActive;
	int FHotButton;
	int FHeight;
	System::Types::TRect FHelpButtonRect;
	Vcl::Graphics::TIcon* FIcon;
	HICON FIconHandle;
	TMainMenuBarStyleHook* FMainMenuBarHook;
	System::Types::TRect FMaxButtonRect;
	void *FMDIClientInstance;
	Vcl::Controls::TWinControl* FMDIHorzScrollBar;
	void *FMDIPrevClientProc;
	Vcl::Controls::TWinControl* FMDIScrollSizeBox;
	bool FMDIStopHorzScrollBar;
	bool FMDIStopVertScrollBar;
	Vcl::Controls::TWinControl* FMDIVertScrollBar;
	System::Types::TRect FMinButtonRect;
	int FLeft;
	bool FNeedsUpdate;
	int FOldHorzSrollBarPosition;
	int FOldVertSrollBarPosition;
	int FPressedButton;
	HRGN FRegion;
	bool FStopCheckChildMove;
	System::Types::TRect FSysMenuButtonRect;
	int FTop;
	int FWidth;
	bool FCaptionEmulation;
	bool FRestoring;
	Vcl::Controls::TSizeConstraints* FRestoringConstraints;
	int FYOffset;
	int FXOffset;
	int FCaptionHeight;
	void __fastcall AdjustMDIScrollBars();
	void __fastcall ChangeSize();
	bool __fastcall IsStyleBorder();
	System::Types::TRect __fastcall GetBorderSize();
	TCustomForm* __fastcall GetForm();
	Vcl::Graphics::TIcon* __fastcall GetIconFast();
	Vcl::Graphics::TIcon* __fastcall GetIcon();
	Vcl::Graphics::TIcon* __fastcall GetFormIcon(TCustomForm* AForm);
	int __fastcall GetHitTest(const System::Types::TPoint &P);
	void __fastcall GetMDIScrollInfo(bool SetRange);
	System::Types::TRect __fastcall GetMDIWorkArea();
	HRGN __fastcall GetRegion();
	void __fastcall InitMDIScrollBars();
	bool __fastcall MDIChildMaximized();
	void __fastcall MDIHorzScroll(int Offset);
	void __fastcall MDIVertScroll(int Offset);
	System::Types::TPoint __fastcall NormalizePoint(const System::Types::TPoint &P);
	bool __fastcall IsSysMenuItemEnabled(const unsigned ID);
	void __fastcall UpdateForm();
	void __fastcall OnMDIHScroll(System::TObject* Sender, System::Uitypes::TScrollCode ScrollCode, int &ScrollPos);
	void __fastcall OnMDIVScroll(System::TObject* Sender, System::Uitypes::TScrollCode ScrollCode, int &ScrollPos);
	MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMMenuChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMInitMenu(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	MESSAGE void __fastcall WMNCActivate(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMMove(Winapi::Messages::TWMMove &Message);
	MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCMouseMove(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCRButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCRButtonUp(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLButtonDblClk(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCUAHDrawCaption(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMShowWindow(Winapi::Messages::TWMShowWindow &Message);
	MESSAGE void __fastcall WMGetMinMaxInfo(Winapi::Messages::TWMGetMinMaxInfo &Message);
	HIDESBASE MESSAGE void __fastcall WMSetText(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMMDIChildMove(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMMDIChildClose(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMSysCommand(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMDestroy(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Close();
	virtual void __fastcall Help();
	virtual void __fastcall Maximize();
	virtual void __fastcall MDIClientWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Minimize();
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Restore();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property TCustomForm* Form = {read=GetForm};
	
public:
	__fastcall virtual TFormStyleHook(Vcl::Controls::TWinControl* AControl);
	virtual bool __fastcall HandleMessage(Winapi::Messages::TMessage &Message);
	__fastcall virtual ~TFormStyleHook();
	virtual void __fastcall Invalidate();
	__property Handle;
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TScrollBoxStyleHook : public TScrollingStyleHook
{
	typedef TScrollingStyleHook inherited;
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TScrollBoxStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TScrollingStyleHook.Destroy */ inline __fastcall virtual ~TScrollBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChangeScaleMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
private:
	System::Classes::TComponent* FSender;
	int FM;
	int FD;
	
public:
	__property int D = {read=FD, nodefault};
	__property int M = {read=FM, nodefault};
	__property System::Classes::TComponent* Sender = {read=FSender};
	__fastcall TChangeScaleMessage(System::Classes::TComponent* ASender, int AM, int AD);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TChangeScaleMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Uitypes::TCloseAction caNone = (System::Uitypes::TCloseAction)(0);
static const System::Uitypes::TCloseAction caHide = (System::Uitypes::TCloseAction)(1);
static const System::Uitypes::TCloseAction caFree = (System::Uitypes::TCloseAction)(2);
static const System::Uitypes::TCloseAction caMinimize = (System::Uitypes::TCloseAction)(3);
static const System::Uitypes::TWindowState wsNormal = (System::Uitypes::TWindowState)(0);
static const System::Uitypes::TWindowState wsMinimized = (System::Uitypes::TWindowState)(1);
static const System::Uitypes::TWindowState wsMaximized = (System::Uitypes::TWindowState)(2);
static const System::Uitypes::TBorderIcon biSystemMenu = (System::Uitypes::TBorderIcon)(0);
static const System::Uitypes::TBorderIcon biMinimize = (System::Uitypes::TBorderIcon)(1);
static const System::Uitypes::TBorderIcon biMaximize = (System::Uitypes::TBorderIcon)(2);
static const System::Uitypes::TBorderIcon biHelp = (System::Uitypes::TBorderIcon)(3);
extern DELPHI_PACKAGE TApplication* Application;
extern DELPHI_PACKAGE TScreen* Screen;
extern DELPHI_PACKAGE Vcl::Controls::THintWindowClass HintWindowClass;
extern DELPHI_PACKAGE void *Ctl3DBtnWndProc;
extern DELPHI_PACKAGE int __stdcall (*Ctl3DDlgFramePaint)(HWND Window, int Msg, int wParam, int lParam);
extern DELPHI_PACKAGE int __stdcall (*Ctl3DCtlColorEx)(HWND Window, int Msg, int wParam, int lParam);
extern DELPHI_PACKAGE int __fastcall (*GetPPIForVCLDesignerFunc)(Vcl::Controls::TWinControl* AControl);
extern DELPHI_PACKAGE TSetLayeredWindowAttributes SetLayeredWindowAttributes;
extern DELPHI_PACKAGE TFocusState __fastcall SaveFocusState(void);
extern DELPHI_PACKAGE void __fastcall RestoreFocusState(TFocusState FocusState);
extern DELPHI_PACKAGE void * __fastcall DisableTaskWindows(HWND ActiveWindow);
extern DELPHI_PACKAGE void __fastcall EnableTaskWindows(void * WindowList);
extern DELPHI_PACKAGE bool __fastcall ForegroundTask(void);
extern DELPHI_PACKAGE void __fastcall InitCtl3D _DEPRECATED_ATTRIBUTE0 (void);
extern DELPHI_PACKAGE void __fastcall DoneCtl3D _DEPRECATED_ATTRIBUTE0 (void);
extern DELPHI_PACKAGE bool __fastcall Subclass3DWnd _DEPRECATED_ATTRIBUTE0 (HWND Wnd);
extern DELPHI_PACKAGE void __fastcall Subclass3DDlg _DEPRECATED_ATTRIBUTE0 (HWND Wnd, System::Word Flags);
extern DELPHI_PACKAGE void __fastcall SetAutoSubClass _DEPRECATED_ATTRIBUTE0 (bool Enable);
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall KeysToShiftState(System::Word Keys);
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall KeyDataToShiftState(int KeyData);
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall KeyboardStateToShiftState(const Winapi::Windows::TKeyboardState &KeyboardState)/* overload */;
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall KeyboardStateToShiftState(void)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsAccel(System::Word VK, const System::UnicodeString Str);
extern DELPHI_PACKAGE TCustomForm* __fastcall GetParentForm(Vcl::Controls::TControl* Control, bool TopForm = true);
extern DELPHI_PACKAGE TCustomForm* __fastcall ValidParentForm(Vcl::Controls::TControl* Control, bool TopForm = true);
}	/* namespace Forms */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_FORMS)
using namespace Vcl::Forms;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_FormsHPP
