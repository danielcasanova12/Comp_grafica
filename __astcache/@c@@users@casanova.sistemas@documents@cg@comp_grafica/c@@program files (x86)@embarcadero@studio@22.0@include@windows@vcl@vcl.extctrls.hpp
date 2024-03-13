// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ExtCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_ExtctrlsHPP
#define Vcl_ExtctrlsHPP

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
#include <System.Contnrs.hpp>
#include <System.Types.hpp>
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.Themes.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Vcl.Mask.hpp>
#include <System.MaskUtils.hpp>

//-- user supplied -----------------------------------------------------------
#ifndef _WIN64
#pragma link "dwmapi.lib"
#endif //_WIN64

namespace Vcl
{
namespace Extctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TShape;
class DELPHICLASS TPaintBox;
class DELPHICLASS TImage;
class DELPHICLASS TBevel;
class DELPHICLASS TTimer;
class DELPHICLASS TCustomPanel;
class DELPHICLASS TPanel;
class DELPHICLASS TPanelStyleHook;
class DELPHICLASS TCustomFlowPanel;
class DELPHICLASS TFlowPanel;
class DELPHICLASS EGridPanelException;
class DELPHICLASS TCellItem;
class DELPHICLASS TRowItem;
class DELPHICLASS TColumnItem;
class DELPHICLASS TCellCollection;
class DELPHICLASS TRowCollection;
class DELPHICLASS TColumnCollection;
class DELPHICLASS TControlItem;
class DELPHICLASS TControlCollection;
class DELPHICLASS TCustomGridPanel;
class DELPHICLASS TGridPanel;
class DELPHICLASS TPage;
class DELPHICLASS TNotebook;
class DELPHICLASS THeader;
class DELPHICLASS TCustomRadioGroup;
class DELPHICLASS TRadioGroup;
class DELPHICLASS TSplitter;
class DELPHICLASS TCustomControlBar;
class DELPHICLASS TControlBar;
class DELPHICLASS TBoundLabel;
class DELPHICLASS TBoundLabelEx;
class DELPHICLASS TCustomLabeledEdit;
class DELPHICLASS TLabeledEdit;
class DELPHICLASS TEditButton;
class DELPHICLASS TCustomButtonedEdit;
class DELPHICLASS TButtonedEdit;
class DELPHICLASS TCustomColorBox;
class DELPHICLASS TColorBox;
class DELPHICLASS TCustomColorListBox;
class DELPHICLASS TColorListBox;
class DELPHICLASS TCustomTrayIcon;
class DELPHICLASS TTrayIcon;
class DELPHICLASS TCategoryPanelSurface;
class DELPHICLASS TCustomCategoryPanel;
class DELPHICLASS TCategoryPanel;
class DELPHICLASS TCustomCategoryPanelGroup;
class DELPHICLASS TCategoryPanelGroup;
class DELPHICLASS TCustomLinkLabel;
class DELPHICLASS TLinkLabel;
class DELPHICLASS TLinkLabelStyleHook;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TShapeType : unsigned char { stRectangle, stSquare, stRoundRect, stRoundSquare, stEllipse, stCircle };

class PASCALIMPLEMENTATION TShape : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	Vcl::Graphics::TPen* FPen;
	Vcl::Graphics::TBrush* FBrush;
	TShapeType FShape;
	void __fastcall SetBrush(Vcl::Graphics::TBrush* Value);
	void __fastcall SetPen(Vcl::Graphics::TPen* Value);
	void __fastcall SetShape(TShapeType Value);
	
protected:
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TShape(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TShape();
	
__published:
	void __fastcall StyleChanged(System::TObject* Sender);
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Vcl::Graphics::TBrush* Brush = {read=FBrush, write=SetBrush};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Constraints;
	__property ParentShowHint = {default=1};
	__property Vcl::Graphics::TPen* Pen = {read=FPen, write=SetPen};
	__property TShapeType Shape = {read=FShape, write=SetShape, default=0};
	__property ShowHint;
	__property Touch;
	__property Visible = {default=1};
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnGesture;
	__property OnStartDock;
	__property OnStartDrag;
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TPaintBox : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	System::Classes::TNotifyEvent FOnPaint;
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TPaintBox(System::Classes::TComponent* AOwner);
	__property Canvas;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Color = {default=-16777211};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Touch;
	__property Visible = {default=1};
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
	__property System::Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TPaintBox() { }
	
};


class PASCALIMPLEMENTATION TImage : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	Vcl::Graphics::TPicture* FPicture;
	Vcl::Graphics::TProgressEvent FOnProgress;
	Vcl::Graphics::TFindGraphicClassEvent FOnFindGraphicClass;
	bool FStretch;
	bool FCenter;
	bool FIncrementalDisplay;
	bool FTransparent;
	bool FDrawing;
	bool FProportional;
	Vcl::Graphics::TCanvas* __fastcall GetCanvas();
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetCenter(bool Value);
	void __fastcall SetPicture(Vcl::Graphics::TPicture* Value);
	void __fastcall SetStretch(bool Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetProportional(bool Value);
	
protected:
	virtual bool __fastcall CanObserve(const int ID);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	System::Types::TRect __fastcall DestRect();
	bool __fastcall DoPaletteChange();
	DYNAMIC HPALETTE __fastcall GetPalette();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Progress(System::TObject* Sender, Vcl::Graphics::TProgressStage Stage, System::Byte PercentDone, bool RedrawNow, const System::Types::TRect &R, const System::UnicodeString Msg);
	DYNAMIC void __fastcall FindGraphicClass(System::TObject* Sender, const Vcl::Graphics::TFindGraphicClassContext &Context, Vcl::Graphics::TGraphicClass &GraphicClass);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TImage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TImage();
	__property Vcl::Graphics::TCanvas* Canvas = {read=GetCanvas};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property bool Center = {read=FCenter, write=SetCenter, default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property bool IncrementalDisplay = {read=FIncrementalDisplay, write=FIncrementalDisplay, default=0};
	__property ParentShowHint = {default=1};
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	__property PopupMenu;
	__property bool Proportional = {read=FProportional, write=SetProportional, default=0};
	__property ShowHint;
	__property bool Stretch = {read=FStretch, write=SetStretch, default=0};
	__property Touch;
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property Vcl::Graphics::TFindGraphicClassEvent OnFindGraphicClass = {read=FOnFindGraphicClass, write=FOnFindGraphicClass};
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property Vcl::Graphics::TProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property OnStartDock;
	__property OnStartDrag;
};


enum DECLSPEC_DENUM TBevelStyle : unsigned char { bsLowered, bsRaised };

enum DECLSPEC_DENUM TBevelShape : unsigned char { bsBox, bsFrame, bsTopLine, bsBottomLine, bsLeftLine, bsRightLine, bsSpacer };

class PASCALIMPLEMENTATION TBevel : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	TBevelStyle FStyle;
	TBevelShape FShape;
	void __fastcall SetStyle(TBevelStyle Value);
	void __fastcall SetShape(TBevelShape Value);
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TBevel(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property ParentShowHint = {default=1};
	__property TBevelShape Shape = {read=FShape, write=SetShape, default=0};
	__property ShowHint;
	__property TBevelStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Touch;
	__property Visible = {default=1};
	__property OnGesture;
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TBevel() { }
	
};


class PASCALIMPLEMENTATION TTimer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	unsigned FInterval;
	HWND FWindowHandle;
	System::Classes::TNotifyEvent FOnTimer;
	bool FEnabled;
	void __fastcall UpdateTimer();
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetInterval(unsigned Value);
	void __fastcall SetOnTimer(System::Classes::TNotifyEvent Value);
	void __fastcall WndProc(Winapi::Messages::TMessage &Msg);
	
protected:
	DYNAMIC void __fastcall Timer();
	
public:
	__fastcall virtual TTimer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTimer();
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property unsigned Interval = {read=FInterval, write=SetInterval, default=1000};
	__property System::Classes::TNotifyEvent OnTimer = {read=FOnTimer, write=SetOnTimer};
};


typedef Vcl::Controls::TBevelCut TPanelBevel;

class PASCALIMPLEMENTATION TCustomPanel : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	bool FAutoSizeDocking;
	Vcl::Controls::TBevelCut FBevelInner;
	Vcl::Controls::TBevelCut FBevelOuter;
	Vcl::Controls::TBevelWidth FBevelWidth;
	Vcl::Controls::TBorderWidth FBorderWidth;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FFullRepaint;
	bool FLocked;
	bool FParentBackgroundSet;
	bool FShowCaption;
	System::Classes::TVerticalAlignment FVerticalAlignment;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	HIDESBASE MESSAGE void __fastcall CMBorderChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMIsToolControl(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetBevelInner(Vcl::Controls::TBevelCut Value);
	void __fastcall SetBevelOuter(Vcl::Controls::TBevelCut Value);
	HIDESBASE void __fastcall SetBevelWidth(Vcl::Controls::TBevelWidth Value);
	HIDESBASE void __fastcall SetBorderWidth(Vcl::Controls::TBorderWidth Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetShowCaption(bool Value);
	void __fastcall SetVerticalAlignment(const System::Classes::TVerticalAlignment Value);
	HIDESBASE MESSAGE void __fastcall CMDockClient(Vcl::Controls::TCMDockClient &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall Paint();
	virtual void __fastcall UpdateStyleElements();
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=2};
	__property Vcl::Controls::TBevelCut BevelInner = {read=FBevelInner, write=SetBevelInner, default=0};
	__property Vcl::Controls::TBevelCut BevelOuter = {read=FBevelOuter, write=SetBevelOuter, default=2};
	__property Vcl::Controls::TBevelWidth BevelWidth = {read=FBevelWidth, write=SetBevelWidth, default=1};
	__property Vcl::Controls::TBorderWidth BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=0};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property Color = {default=-16777201};
	__property bool FullRepaint = {read=FFullRepaint, write=FFullRepaint, default=1};
	__property bool Locked = {read=FLocked, write=FLocked, default=0};
	__property ParentColor = {default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, default=1};
	__property System::Classes::TVerticalAlignment VerticalAlignment = {read=FVerticalAlignment, write=SetVerticalAlignment, default=2};
	virtual void __fastcall SetParentBackground(bool Value);
	
public:
	__fastcall virtual TCustomPanel(System::Classes::TComponent* AOwner);
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment();
	__property ParentBackground = {stored=FParentBackgroundSet, default=1};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCustomPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomPanel(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPanel : public TCustomPanel
{
	typedef TCustomPanel inherited;
	
public:
	__property DockManager;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=2};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=2};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowCaption = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property VerticalAlignment = {default=2};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
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
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomPanel.Create */ inline __fastcall virtual TPanel(System::Classes::TComponent* AOwner) : TCustomPanel(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPanel(HWND ParentWindow) : TCustomPanel(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPanelStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall AcceptMessage(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TPanelStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TPanelStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFlowStyle : unsigned char { fsLeftRightTopBottom, fsRightLeftTopBottom, fsLeftRightBottomTop, fsRightLeftBottomTop, fsTopBottomLeftRight, fsBottomTopLeftRight, fsTopBottomRightLeft, fsBottomTopRightLeft };

class PASCALIMPLEMENTATION TCustomFlowPanel : public TCustomPanel
{
	typedef TCustomPanel inherited;
	
private:
	System::Contnrs::TObjectList* FControlList;
	bool FAutoWrap;
	TFlowStyle FFlowStyle;
	void __fastcall SetAutoWrap(bool Value);
	void __fastcall SetFlowStyle(TFlowStyle Value);
	HIDESBASE MESSAGE void __fastcall CMControlListChanging(Vcl::Controls::TCMControlListChanging &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	
public:
	__fastcall virtual TCustomFlowPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomFlowPanel();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	int __fastcall GetControlIndex(Vcl::Controls::TControl* AControl);
	void __fastcall SetControlIndex(Vcl::Controls::TControl* AControl, int Index);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	__property bool AutoWrap = {read=FAutoWrap, write=SetAutoWrap, default=1};
	__property TFlowStyle FlowStyle = {read=FFlowStyle, write=SetFlowStyle, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomFlowPanel(HWND ParentWindow) : TCustomPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TFlowPanel : public TCustomFlowPanel
{
	typedef TCustomFlowPanel inherited;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=2};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property AutoWrap = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=2};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FlowStyle = {default=0};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowCaption = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property VerticalAlignment = {default=2};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
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
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomFlowPanel.Create */ inline __fastcall virtual TFlowPanel(System::Classes::TComponent* AOwner) : TCustomFlowPanel(AOwner) { }
	/* TCustomFlowPanel.Destroy */ inline __fastcall virtual ~TFlowPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFlowPanel(HWND ParentWindow) : TCustomFlowPanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TSizeStyle : unsigned char { ssAbsolute, ssPercent, ssAuto };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EGridPanelException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EGridPanelException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EGridPanelException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EGridPanelException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EGridPanelException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EGridPanelException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EGridPanelException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EGridPanelException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EGridPanelException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGridPanelException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGridPanelException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGridPanelException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGridPanelException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EGridPanelException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCellItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TSizeStyle FSizeStyle;
	double FValue;
	int FSize;
	bool FAutoAdded;
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	void __fastcall SetSizeStyle(TSizeStyle Value);
	void __fastcall SetValue(double Value);
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property bool AutoAdded = {read=FAutoAdded, write=FAutoAdded, nodefault};
	
public:
	__fastcall virtual TCellItem(System::Classes::TCollection* Collection);
	
__published:
	__property TSizeStyle SizeStyle = {read=FSizeStyle, write=SetSizeStyle, default=1};
	__property double Value = {read=FValue, write=SetValue};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TCellItem() { }
	
};


class PASCALIMPLEMENTATION TRowItem : public TCellItem
{
	typedef TCellItem inherited;
	
public:
	/* TCellItem.Create */ inline __fastcall virtual TRowItem(System::Classes::TCollection* Collection) : TCellItem(Collection) { }
	
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TRowItem() { }
	
};


class PASCALIMPLEMENTATION TColumnItem : public TCellItem
{
	typedef TCellItem inherited;
	
public:
	/* TCellItem.Create */ inline __fastcall virtual TColumnItem(System::Classes::TCollection* Collection) : TCellItem(Collection) { }
	
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TColumnItem() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCellCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TCellItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	DYNAMIC int __fastcall GetAttrCount();
	DYNAMIC System::UnicodeString __fastcall GetAttr(int Index);
	DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
	HIDESBASE TCellItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCellItem* Value);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	HIDESBASE TCustomGridPanel* __fastcall Owner();
	void __fastcall EquallySplitPercentuals();
	__property TCellItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TCellCollection(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TCellCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef int TCellSpan;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRowCollection : public TCellCollection
{
	typedef TCellCollection inherited;
	
protected:
	DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall TRowCollection(System::Classes::TPersistent* AOwner);
	HIDESBASE TRowItem* __fastcall Add();
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TRowCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TColumnCollection : public TCellCollection
{
	typedef TCellCollection inherited;
	
protected:
	DYNAMIC System::UnicodeString __fastcall GetItemAttr(int Index, int ItemIndex);
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall TColumnCollection(System::Classes::TPersistent* AOwner);
	HIDESBASE TColumnItem* __fastcall Add();
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TColumnCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TControlItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	int FColumn;
	int FRow;
	TCellSpan FColumnSpan;
	TCellSpan FRowSpan;
	int FPushed;
	TCustomGridPanel* __fastcall GetGridPanel();
	bool __fastcall GetPushed();
	void __fastcall SetColumn(int Value);
	void __fastcall SetColumnSpan(TCellSpan Value);
	void __fastcall SetControl(Vcl::Controls::TControl* Value);
	void __fastcall SetRow(int Value);
	void __fastcall SetRowSpan(TCellSpan Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	void __fastcall InternalSetLocation(int AColumn, int ARow, bool APushed, bool MoveExisting);
	__property TCustomGridPanel* GridPanel = {read=GetGridPanel};
	__property bool Pushed = {read=GetPushed, nodefault};
	
public:
	__fastcall virtual TControlItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TControlItem();
	void __fastcall SetLocation(int AColumn, int ARow, bool APushed = false);
	
__published:
	__property int Column = {read=FColumn, write=SetColumn, nodefault};
	__property TCellSpan ColumnSpan = {read=FColumnSpan, write=SetColumnSpan, default=1};
	__property Vcl::Controls::TControl* Control = {read=FControl, write=SetControl};
	__property int Row = {read=FRow, write=SetRow, nodefault};
	__property TCellSpan RowSpan = {read=FRowSpan, write=SetRowSpan, default=1};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TControlCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TControlItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	Vcl::Controls::TControl* __fastcall GetControl(int AColumn, int ARow);
	TControlItem* __fastcall GetControlItem(int AColumn, int ARow);
	HIDESBASE TControlItem* __fastcall GetItem(int Index);
	void __fastcall SetControl(int AColumn, int ARow, Vcl::Controls::TControl* Value);
	HIDESBASE void __fastcall SetItem(int Index, TControlItem* Value);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TControlCollection(System::Classes::TPersistent* AOwner);
	HIDESBASE TControlItem* __fastcall Add();
	void __fastcall AddControl(Vcl::Controls::TControl* AControl, int AColumn = 0xffffffff, int ARow = 0xffffffff);
	void __fastcall RemoveControl(Vcl::Controls::TControl* AControl);
	int __fastcall IndexOf(Vcl::Controls::TControl* AControl);
	HIDESBASE TCustomGridPanel* __fastcall Owner();
	__property Vcl::Controls::TControl* Controls[int AColumn][int ARow] = {read=GetControl, write=SetControl};
	__property TControlItem* ControlItems[int AColumn][int ARow] = {read=GetControlItem};
	__property TControlItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TControlCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TExpandStyle : unsigned char { emAddRows, emAddColumns, emFixedSize };

class PASCALIMPLEMENTATION TCustomGridPanel : public TCustomPanel
{
	typedef TCustomPanel inherited;
	
private:
	TRowCollection* FRowCollection;
	TColumnCollection* FColumnCollection;
	TControlCollection* FControlCollection;
	bool FRecalcCellSizes;
	int FRecalcCellSizesDisabled;
	bool FRecalcCellPercentsDisabled;
	TExpandStyle FExpandStyle;
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	int __fastcall GetCellCount();
	System::Types::TPoint __fastcall GetCellSizes(int AColumn, int ARow);
	System::Types::TRect __fastcall GetCellRect(int AColumn, int ARow);
	int __fastcall GetColumnSpanIndex(int AColumn, int ARow);
	int __fastcall GetRowSpanIndex(int AColumn, int ARow);
	void __fastcall SetColumnCollection(TColumnCollection* const Value);
	void __fastcall SetControlCollection(TControlCollection* const Value);
	void __fastcall SetRowCollection(TRowCollection* const Value);
	void __fastcall RecalcCellDimensions(const System::Types::TRect &Rect);
	bool __fastcall GetRecalcCellSizesEnabled();
	bool __fastcall GetRecalcCellPercentsEnabled();
	System::Types::TRect __fastcall GetControlBounds(Vcl::Controls::TControl* AControl, bool AUseExplicitSize, System::Types::TRect &AIntPos);
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Message);
	
protected:
	TColumnItem* __fastcall AutoAddColumn();
	TRowItem* __fastcall AutoAddRow();
	int __fastcall CellToCellIndex(int AColumn, int ARow);
	void __fastcall CellIndexToCell(int AIndex, int &AColumn, int &ARow);
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual void __fastcall Loaded();
	virtual void __fastcall Paint();
	void __fastcall RemoveEmptyAutoAddColumns();
	void __fastcall RemoveEmptyAutoAddRows();
	virtual void __fastcall UpdateControlOriginalParentSize(Vcl::Controls::TControl* AControl, System::Types::TPoint &AOriginalParentSize);
	
public:
	__fastcall virtual TCustomGridPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomGridPanel();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	virtual void __fastcall ScaleForPPI(int NewPPI);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	bool __fastcall IsColumnEmpty(int AColumn);
	bool __fastcall IsRowEmpty(int ARow);
	void __fastcall UpdateControlsColumn(int AColumn);
	void __fastcall UpdateControlsRow(int ARow);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	__property int ColumnSpanIndex[int AColumn][int ARow] = {read=GetColumnSpanIndex};
	__property int CellCount = {read=GetCellCount, nodefault};
	__property System::Types::TPoint CellSize[int AColumn][int ARow] = {read=GetCellSizes};
	__property System::Types::TRect CellRect[int AColumn][int ARow] = {read=GetCellRect};
	__property bool RecalcCellSizesEnabled = {read=GetRecalcCellSizesEnabled, nodefault};
	__property bool RecalcCellPercentsEnabled = {read=GetRecalcCellPercentsEnabled, nodefault};
	__property TColumnCollection* ColumnCollection = {read=FColumnCollection, write=SetColumnCollection};
	__property TControlCollection* ControlCollection = {read=FControlCollection, write=SetControlCollection};
	__property TExpandStyle ExpandStyle = {read=FExpandStyle, write=FExpandStyle, default=0};
	__property TRowCollection* RowCollection = {read=FRowCollection, write=SetRowCollection};
	__property int RowSpanIndex[int AColumn][int ARow] = {read=GetRowSpanIndex};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomGridPanel(HWND ParentWindow) : TCustomPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGridPanel : public TCustomGridPanel
{
	typedef TCustomGridPanel inherited;
	
public:
	__property DockManager;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=2};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=2};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property ColumnCollection;
	__property Constraints;
	__property ControlCollection;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ExpandStyle = {default=0};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property RowCollection;
	__property ShowCaption = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property VerticalAlignment = {default=2};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
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
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomGridPanel.Create */ inline __fastcall virtual TGridPanel(System::Classes::TComponent* AOwner) : TCustomGridPanel(AOwner) { }
	/* TCustomGridPanel.Destroy */ inline __fastcall virtual ~TGridPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGridPanel(HWND ParentWindow) : TCustomGridPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPage : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TPage(System::Classes::TComponent* AOwner);
	
__published:
	__property Caption = {default=0};
	__property Height = {stored=false};
	__property TabOrder = {stored=false, default=-1};
	__property Touch;
	__property Visible = {stored=false, default=1};
	__property Width = {stored=false};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnGesture;
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TPage() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPage(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TNotebook : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Classes::TList* FPageList;
	System::Classes::TStrings* FAccess;
	int FPageIndex;
	System::Classes::TNotifyEvent FOnPageChanged;
	void __fastcall SetPages(System::Classes::TStrings* Value);
	void __fastcall SetActivePage(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetActivePage();
	void __fastcall SetPageIndex(int Value);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC System::Classes::TComponent* __fastcall GetChildOwner();
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall ShowControl(Vcl::Controls::TControl* AControl);
	
public:
	__fastcall virtual TNotebook(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TNotebook();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	
__published:
	__property System::UnicodeString ActivePage = {read=GetActivePage, write=SetActivePage, stored=false};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Font;
	__property Enabled = {default=1};
	__property Constraints;
	__property int PageIndex = {read=FPageIndex, write=SetPageIndex, default=0};
	__property System::Classes::TStrings* Pages = {read=FAccess, write=SetPages, stored=false};
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
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property System::Classes::TNotifyEvent OnPageChanged = {read=FOnPageChanged, write=FOnPageChanged};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TNotebook(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TSectionEvent)(System::TObject* Sender, int ASection, int AWidth);

class PASCALIMPLEMENTATION THeader : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Classes::TStrings* FSections;
	System::Types::TPoint FHitTest;
	bool FCanResize;
	bool FAllowResize;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	int FResizeSection;
	int FMouseOffset;
	TSectionEvent FOnSizing;
	TSectionEvent FOnSized;
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall FreeSections();
	void __fastcall SetSections(System::Classes::TStrings* Strings);
	int __fastcall GetWidth(int X);
	HIDESBASE void __fastcall SetWidth(int X, int Value);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	
protected:
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall Paint();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall Sizing(int ASection, int AWidth);
	DYNAMIC void __fastcall Sized(int ASection, int AWidth);
	
public:
	__fastcall virtual THeader(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THeader();
	__property int SectionWidth[int X] = {read=GetWidth, write=SetWidth};
	
__published:
	__property Align = {default=0};
	__property bool AllowResize = {read=FAllowResize, write=FAllowResize, default=1};
	__property Anchors = {default=3};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Constraints;
	__property DoubleBuffered;
	__property Enabled = {default=1};
	__property Font;
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property System::Classes::TStrings* Sections = {read=FSections, write=SetSections};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property OnContextPopup;
	__property OnGesture;
	__property TSectionEvent OnSizing = {read=FOnSizing, write=FOnSizing};
	__property TSectionEvent OnSized = {read=FOnSized, write=FOnSized};
public:
	/* TWinControl.CreateParented */ inline __fastcall THeader(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TCustomRadioGroup : public Vcl::Stdctrls::TCustomGroupBox
{
	typedef Vcl::Stdctrls::TCustomGroupBox inherited;
	
private:
	System::Classes::TList* FButtons;
	System::Classes::TStrings* FItems;
	int FItemIndex;
	int FColumns;
	bool FReading;
	bool FUpdating;
	bool FWordWrap;
	int FTopMarginButtons;
	bool FRadioTabStop;
	Vcl::Stdctrls::TRadioButton* __fastcall GetButtons(int Index);
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall SetButtonCount(int Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall SetRadioTabStop(bool Value);
	void __fastcall SetWordWrap(bool Value);
	void __fastcall UpdateButtons();
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall ArrangeButtons();
	virtual void __fastcall CheckDefaultHeaderFont();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual bool __fastcall CanModify();
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property System::Classes::TStrings* Items = {read=FItems, write=SetItems};
	__property bool Reading = {read=FReading, nodefault};
	__property System::Classes::TList* ButtonList = {read=FButtons};
	
public:
	__fastcall virtual TCustomRadioGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomRadioGroup();
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__property Vcl::Stdctrls::TRadioButton* Buttons[int Index] = {read=GetButtons};
	__property bool RadioTabStop = {read=FRadioTabStop, write=SetRadioTabStop, default=1};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	__property int TopMarginButtons = {read=FTopMarginButtons, write=FTopMarginButtons, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomRadioGroup(HWND ParentWindow) : Vcl::Stdctrls::TCustomGroupBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TRadioGroup : public TCustomRadioGroup
{
	typedef TCustomRadioGroup inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Columns = {default=1};
	__property Ctl3D;
	__property DefaultHeaderFont = {default=1};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HeaderFont;
	__property ItemIndex = {default=-1};
	__property Items;
	__property Constraints;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property RadioTabStop = {default=1};
	__property ShowFrame = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomRadioGroup.Create */ inline __fastcall virtual TRadioGroup(System::Classes::TComponent* AOwner) : TCustomRadioGroup(AOwner) { }
	/* TCustomRadioGroup.Destroy */ inline __fastcall virtual ~TRadioGroup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRadioGroup(HWND ParentWindow) : TCustomRadioGroup(ParentWindow) { }
	
};


typedef int NaturalNumber;

typedef void __fastcall (__closure *TSplitterCanResizeEvent)(System::TObject* Sender, int &NewSize, bool &Accept);

typedef TSplitterCanResizeEvent TCanResizeEvent;

enum DECLSPEC_DENUM TResizeStyle : unsigned char { rsNone, rsLine, rsUpdate, rsPattern };

class PASCALIMPLEMENTATION TSplitter : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	Vcl::Controls::TWinControl* FActiveControl;
	bool FAutoSnap;
	bool FBeveled;
	Vcl::Graphics::TBrush* FBrush;
	Vcl::Controls::TControl* FControl;
	System::Types::TPoint FDownPos;
	HDC FLineDC;
	bool FLineVisible;
	NaturalNumber FMinSize;
	int FMaxSize;
	int FNewSize;
	Vcl::Controls::TKeyEvent FOldKeyDown;
	int FOldSize;
	HBRUSH FPrevBrush;
	TResizeStyle FResizeStyle;
	int FSplit;
	TSplitterCanResizeEvent FOnCanResize;
	System::Classes::TNotifyEvent FOnMoved;
	System::Classes::TNotifyEvent FOnPaint;
	void __fastcall AllocateLineDC();
	void __fastcall CalcSplitSize(int X, int Y, int &NewSize, int &Split);
	void __fastcall DrawLine();
	Vcl::Controls::TControl* __fastcall FindControl();
	void __fastcall FocusKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall ReleaseLineDC();
	void __fastcall SetBeveled(bool Value);
	void __fastcall UpdateControlSize();
	void __fastcall UpdateSize(int X, int Y);
	
protected:
	HIDESBASE virtual bool __fastcall CanResize(int &NewSize);
	HIDESBASE virtual bool __fastcall DoCanResize(int &NewSize);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall RequestAlign();
	DYNAMIC void __fastcall StopSizing();
	
public:
	__fastcall virtual TSplitter(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSplitter();
	__property Canvas;
	
__published:
	__property Align = {default=3};
	__property bool AutoSnap = {read=FAutoSnap, write=FAutoSnap, default=1};
	__property bool Beveled = {read=FBeveled, write=SetBeveled, default=0};
	__property Color = {default=-16777211};
	__property Cursor = {default=-14};
	__property Constraints;
	__property NaturalNumber MinSize = {read=FMinSize, write=FMinSize, default=30};
	__property ParentColor = {default=1};
	__property TResizeStyle ResizeStyle = {read=FResizeStyle, write=FResizeStyle, default=3};
	__property Visible = {default=1};
	__property Width = {default=3};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TSplitterCanResizeEvent OnCanResize = {read=FOnCanResize, write=FOnCanResize};
	__property System::Classes::TNotifyEvent OnMoved = {read=FOnMoved, write=FOnMoved};
	__property System::Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
};


enum DECLSPEC_DENUM TBandPaintOption : unsigned char { bpoGrabber, bpoFrame, bpoGradient, bpoRoundRect };

typedef System::Set<TBandPaintOption, TBandPaintOption::bpoGrabber, TBandPaintOption::bpoRoundRect> TBandPaintOptions;

enum DECLSPEC_DENUM TBandDrawingStyle : unsigned char { dsNormal, dsGradient };

typedef void __fastcall (__closure *TBandDragEvent)(System::TObject* Sender, Vcl::Controls::TControl* Control, bool &Drag);

typedef void __fastcall (__closure *TBandInfoEvent)(System::TObject* Sender, Vcl::Controls::TControl* Control, System::Types::TRect &Insets, int &PreferredSize, int &RowCount);

typedef void __fastcall (__closure *TBandMoveEvent)(System::TObject* Sender, Vcl::Controls::TControl* Control, System::Types::TRect &ARect);

typedef void __fastcall (__closure *TBeginBandMoveEvent)(System::TObject* Sender, Vcl::Controls::TControl* Control, bool &AllowMove);

typedef void __fastcall (__closure *TEndBandMoveEvent)(System::TObject* Sender, Vcl::Controls::TControl* Control);

typedef void __fastcall (__closure *TBandPaintEvent)(System::TObject* Sender, Vcl::Controls::TControl* Control, Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &ARect, TBandPaintOptions &Options);

enum DECLSPEC_DENUM TCornerEdge : unsigned char { ceNone, ceSmall, ceMedium, ceLarge };

typedef int TRowSize;

class PASCALIMPLEMENTATION TCustomControlBar : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	bool FAligning;
	bool FAutoDrag;
	bool FAutoDock;
	TCornerEdge FCornerEdge;
	Vcl::Controls::TControl* FDockingControl;
	Vcl::Controls::TControl* FDragControl;
	System::Types::TPoint FDragOffset;
	bool FDrawing;
	TBandDrawingStyle FDrawingStyle;
	bool FFloating;
	Vcl::Graphutil::TGradientDirection FGradientDirection;
	System::Uitypes::TColor FGradientEndColor;
	System::Uitypes::TColor FGradientStartColor;
	System::Classes::TList* FItems;
	Vcl::Graphics::TPicture* FPicture;
	TRowSize FRowSize;
	bool FRowSnap;
	TBandDragEvent FOnBandDrag;
	TBandInfoEvent FOnBandInfo;
	TBandMoveEvent FOnBandMove;
	TBandPaintEvent FOnBandPaint;
	TBeginBandMoveEvent FOnBeginBandMove;
	TEndBandMoveEvent FOnEndBandMove;
	System::Classes::TNotifyEvent FOnPaint;
	bool __fastcall IsGradientEndColorStored();
	void __fastcall DoAlignControl(Vcl::Controls::TControl* AControl);
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetPicture(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetRowSize(TRowSize Value);
	void __fastcall SetRowSnap(bool Value);
	void __fastcall UnDockControl(Vcl::Controls::TControl* AControl);
	bool __fastcall UpdateItems(Vcl::Controls::TControl* AControl);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	void __fastcall SetCornerEdge(TCornerEdge Value);
	void __fastcall SetGradientStartColor(System::Uitypes::TColor Value);
	void __fastcall SetGradientEndColor(System::Uitypes::TColor Value);
	void __fastcall SetGradientDirection(Vcl::Graphutil::TGradientDirection Value);
	void __fastcall SetDrawingStyle(const TBandDrawingStyle Value);
	void * __fastcall FindPos(Vcl::Controls::TControl* AControl);
	void * __fastcall HitTest2(int X, int Y);
	void __fastcall DockControl(Vcl::Controls::TControl* AControl, const System::Types::TRect &ARect, System::Classes::TList* BreakList, System::Classes::TList* IndexList, System::Classes::TList* SizeList, void * Parent, bool ChangedPriorBreak, const System::Types::TRect &Insets, int PreferredSize, int RowCount, bool Existing);
	HIDESBASE MESSAGE void __fastcall CMControlListChange(Vcl::Controls::TCMControlListChange &Message);
	
protected:
	void __fastcall ResetDockItems();
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &ARect);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DoBandMove(Vcl::Controls::TControl* Control, System::Types::TRect &ARect);
	virtual void __fastcall DoBandPaint(Vcl::Controls::TControl* Control, Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &ARect, TBandPaintOptions &Options);
	DYNAMIC bool __fastcall DoBeginBandMove(Vcl::Controls::TControl* Control);
	DYNAMIC void __fastcall DoEndBandMove(Vcl::Controls::TControl* Control);
	DYNAMIC void __fastcall DockOver(Vcl::Controls::TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	bool __fastcall DoPaletteChange();
	virtual bool __fastcall DragControl(Vcl::Controls::TControl* AControl, int X, int Y, bool KeepCapture = false);
	virtual void __fastcall GetControlInfo(Vcl::Controls::TControl* AControl, System::Types::TRect &Insets, int &PreferredSize, int &RowCount);
	DYNAMIC HPALETTE __fastcall GetPalette();
	DYNAMIC void __fastcall GetSiteInfo(Vcl::Controls::TControl* Client, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	Vcl::Controls::TControl* __fastcall HitTest(int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall PaintControlFrame(Vcl::Graphics::TCanvas* Canvas, Vcl::Controls::TControl* AControl, System::Types::TRect &ARect);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall ScaleControlsForDpi(int NewPPI);
	__property bool AutoDock = {read=FAutoDock, write=FAutoDock, default=1};
	__property bool AutoDrag = {read=FAutoDrag, write=FAutoDrag, default=1};
	__property AutoSize = {default=0};
	__property BevelKind = {default=1};
	__property TCornerEdge CornerEdge = {read=FCornerEdge, write=SetCornerEdge, default=2};
	__property DockSite = {default=1};
	__property TBandDrawingStyle DrawingStyle = {read=FDrawingStyle, write=SetDrawingStyle, default=0};
	__property Vcl::Graphutil::TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=1};
	__property System::Uitypes::TColor GradientStartColor = {read=FGradientStartColor, write=SetGradientStartColor, default=-16777211};
	__property System::Uitypes::TColor GradientEndColor = {read=FGradientEndColor, write=SetGradientEndColor, stored=IsGradientEndColorStored, nodefault};
	__property TRowSize RowSize = {read=FRowSize, write=SetRowSize, default=26};
	__property bool RowSnap = {read=FRowSnap, write=SetRowSnap, default=1};
	__property TBandDragEvent OnBandDrag = {read=FOnBandDrag, write=FOnBandDrag};
	__property TBandInfoEvent OnBandInfo = {read=FOnBandInfo, write=FOnBandInfo};
	__property TBandMoveEvent OnBandMove = {read=FOnBandMove, write=FOnBandMove};
	__property TBandPaintEvent OnBandPaint = {read=FOnBandPaint, write=FOnBandPaint};
	__property TBeginBandMoveEvent OnBeginBandMove = {read=FOnBeginBandMove, write=FOnBeginBandMove};
	__property TEndBandMoveEvent OnEndBandMove = {read=FOnEndBandMove, write=FOnEndBandMove};
	__property System::Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	
public:
	__fastcall virtual TCustomControlBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomControlBar();
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	virtual void __fastcall StickControls();
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomControlBar(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TControlBar : public TCustomControlBar
{
	typedef TCustomControlBar inherited;
	
public:
	__property Canvas;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoDock = {default=1};
	__property AutoDrag = {default=1};
	__property AutoSize = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=1};
	__property BevelWidth = {default=1};
	__property BorderWidth = {default=0};
	__property Color;
	__property Constraints;
	__property CornerEdge = {default=2};
	__property DockSite = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DrawingStyle = {default=0};
	__property Enabled = {default=1};
	__property GradientDirection = {default=1};
	__property GradientEndColor;
	__property GradientStartColor = {default=-16777211};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Picture;
	__property PopupMenu;
	__property RowSize = {default=26};
	__property RowSnap = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnBandDrag;
	__property OnBandInfo;
	__property OnBandMove;
	__property OnBandPaint;
	__property OnBeginBandMove;
	__property OnEndBandMove;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
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
	__property OnPaint;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomControlBar.Create */ inline __fastcall virtual TControlBar(System::Classes::TComponent* AOwner) : TCustomControlBar(AOwner) { }
	/* TCustomControlBar.Destroy */ inline __fastcall virtual ~TControlBar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TControlBar(HWND ParentWindow) : TCustomControlBar(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TBoundLabelClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TBoundLabelClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TBoundLabel : public Vcl::Stdctrls::TCustomLabel
{
	typedef Vcl::Stdctrls::TCustomLabel inherited;
	
private:
	HIDESBASE void __fastcall SetHeight(const int Value);
	HIDESBASE void __fastcall SetWidth(const int Value);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	
protected:
	bool FIsLabelModified;
	DYNAMIC void __fastcall AdjustBounds();
	
public:
	__fastcall virtual TBoundLabel(System::Classes::TComponent* AOwner);
	__property bool IsLabelModified = {read=FIsLabelModified, write=FIsLabelModified, nodefault};
	
__published:
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Font;
	__property Height = {write=SetHeight};
	__property Left = {stored=false};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property Top = {stored=false};
	__property Touch;
	__property Transparent;
	__property Layout = {default=0};
	__property WordWrap = {default=0};
	__property Width = {write=SetWidth};
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
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TBoundLabel() { }
	
};


class PASCALIMPLEMENTATION TBoundLabelEx : public TBoundLabel
{
	typedef TBoundLabel inherited;
	
__published:
	__property Layout = {default=1};
public:
	/* TBoundLabel.Create */ inline __fastcall virtual TBoundLabelEx(System::Classes::TComponent* AOwner) : TBoundLabel(AOwner) { }
	
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TBoundLabelEx() { }
	
};


enum DECLSPEC_DENUM TLabelPosition : unsigned char { lpAbove, lpBelow, lpLeft, lpRight };

class PASCALIMPLEMENTATION TCustomLabeledEdit : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
private:
	TBoundLabel* FEditLabel;
	TLabelPosition FLabelPosition;
	int FLabelSpacing;
	void __fastcall SetLabelPosition(const TLabelPosition Value);
	void __fastcall SetLabelSpacing(const int Value);
	void __fastcall UpdateLabelPosition();
	HIDESBASE MESSAGE void __fastcall CMVisiblechanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledchanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMBidimodechanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMAllChildrenFlipped(Winapi::Messages::TMessage &Message);
	
protected:
	__classmethod virtual bool __fastcall WithLabel();
	__classmethod virtual TBoundLabelClass __fastcall GetLabelClass();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	
public:
	__fastcall virtual TCustomLabeledEdit(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall SetupInternalLabel();
	__property TBoundLabel* EditLabel = {read=FEditLabel};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, default=0};
	__property int LabelSpacing = {read=FLabelSpacing, write=SetLabelSpacing, default=3};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomLabeledEdit(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomLabeledEdit() { }
	
};


class PASCALIMPLEMENTATION TLabeledEdit : public TCustomLabeledEdit
{
	typedef TCustomLabeledEdit inherited;
	
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
	__property EditLabel;
	__property Enabled = {default=1};
	__property EditMask = {default=0};
	__property Font;
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property LabelPosition = {default=0};
	__property LabelSpacing = {default=3};
	__property MaxLength = {default=0};
	__property OEMConvert = {default=0};
	__property NumbersOnly = {default=0};
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
	/* TCustomLabeledEdit.Create */ inline __fastcall virtual TLabeledEdit(System::Classes::TComponent* AOwner) : TCustomLabeledEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TLabeledEdit(HWND ParentWindow) : TCustomLabeledEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TLabeledEdit() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TEditButton : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
private:
	enum DECLSPEC_DENUM TButtonState : unsigned char { bsNormal, bsHot, bsPushed };
	
	class DELPHICLASS TGlyph;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TGlyph : public Vcl::Controls::TCustomControl
	{
		typedef Vcl::Controls::TCustomControl inherited;
		
	private:
		TEditButton* FButton;
		TEditButton::TButtonState FState;
		
	protected:
		DYNAMIC void __fastcall Click();
		virtual void __fastcall CreateWnd();
		virtual void __fastcall Paint();
		virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
		
	public:
		__fastcall virtual TGlyph(TEditButton* AButton);
	public:
		/* TCustomControl.Destroy */ inline __fastcall virtual ~TGlyph() { }
		
	public:
		/* TWinControl.CreateParented */ inline __fastcall TGlyph(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
protected:
	enum DECLSPEC_DENUM TButtonPosition : unsigned char { bpLeft, bpRight };
	
	
private:
	System::Uitypes::TImageIndex FDisabledImageIndex;
	System::Uitypes::TImageName FDisabledImageName;
	Vcl::Menus::TPopupMenu* FDropDownMenu;
	TCustomButtonedEdit* FEditControl;
	TGlyph* FGlyph;
	System::Uitypes::TImageIndex FHotImageIndex;
	System::Uitypes::TImageName FHotImageName;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	TButtonPosition FPosition;
	System::Uitypes::TImageIndex FPressedImageIndex;
	System::Uitypes::TImageName FPressedImageName;
	bool __fastcall GetEnabled();
	Vcl::Controls::TCustomHint* __fastcall GetCustomHint();
	System::UnicodeString __fastcall GetHint();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	bool __fastcall GetVisible();
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetHotImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetDisabledImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetPressedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetDisabledImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetCustomHint(Vcl::Controls::TCustomHint* const Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	void __fastcall SetHotImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetPressedImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetVisible(const bool Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	DYNAMIC void __fastcall UpdateBounds();
	void __fastcall CheckImageIndexes();
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	__property TCustomButtonedEdit* EditControl = {read=FEditControl};
	__property TGlyph* Glyph = {read=FGlyph};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
	__property TButtonPosition Position = {read=FPosition, nodefault};
	
public:
	__fastcall virtual TEditButton(TCustomButtonedEdit* EditControl, TButtonPosition APosition);
	__fastcall virtual ~TEditButton();
	
__published:
	__property Vcl::Controls::TCustomHint* CustomHint = {read=GetCustomHint, write=SetCustomHint};
	__property System::Uitypes::TImageIndex DisabledImageIndex = {read=FDisabledImageIndex, write=SetDisabledImageIndex, default=-1};
	__property System::Uitypes::TImageName DisabledImageName = {read=FDisabledImageName, write=SetDisabledImageName};
	__property Vcl::Menus::TPopupMenu* DropDownMenu = {read=FDropDownMenu, write=FDropDownMenu};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, default=1};
	__property System::UnicodeString Hint = {read=GetHint, write=SetHint};
	__property System::Uitypes::TImageIndex HotImageIndex = {read=FHotImageIndex, write=SetHotImageIndex, default=-1};
	__property System::Uitypes::TImageName HotImageName = {read=FHotImageName, write=SetHotImageName};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName};
	__property System::Uitypes::TImageIndex PressedImageIndex = {read=FPressedImageIndex, write=SetPressedImageIndex, default=-1};
	__property System::Uitypes::TImageName PressedImageName = {read=FPressedImageName, write=SetPressedImageName};
	__property bool Visible = {read=GetVisible, write=SetVisible, default=0};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TEditButtonClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TEditButtonClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomButtonedEdit : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
private:
	Vcl::Controls::TControlCanvas* FCanvas;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	TEditButton* FLeftButton;
	TEditButton* FRightButton;
	System::UnicodeString __fastcall AdjustTextHint(int Margin, const System::UnicodeString Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	System::Classes::TNotifyEvent __fastcall GetOnLeftButtonClick();
	System::Classes::TNotifyEvent __fastcall GetOnRightButtonClick();
	void __fastcall SetLeftButton(TEditButton* const Value);
	void __fastcall SetOnLeftButtonClick(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnRightButtonClick(const System::Classes::TNotifyEvent Value);
	void __fastcall SetRightButton(TEditButton* const Value);
	
protected:
	virtual void __fastcall DoSetTextHint(const System::UnicodeString Value);
	DYNAMIC TEditButtonClass __fastcall GetEditButtonClass();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall UpdateEditMargins();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TCustomButtonedEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomButtonedEdit();
	virtual void __fastcall DefaultHandler(void *Message);
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TEditButton* LeftButton = {read=FLeftButton, write=SetLeftButton};
	__property TEditButton* RightButton = {read=FRightButton, write=SetRightButton};
	__property System::Classes::TNotifyEvent OnLeftButtonClick = {read=GetOnLeftButtonClick, write=SetOnLeftButtonClick};
	__property System::Classes::TNotifyEvent OnRightButtonClick = {read=GetOnRightButtonClick, write=SetOnRightButtonClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomButtonedEdit(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TButtonedEdit : public TCustomButtonedEdit
{
	typedef TCustomButtonedEdit inherited;
	
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
	__property Images;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property LeftButton;
	__property MaxLength = {default=0};
	__property OEMConvert = {default=0};
	__property NumbersOnly = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property RightButton;
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
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnGesture;
	__property OnLeftButtonClick;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnRightButtonClick;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomButtonedEdit.Create */ inline __fastcall virtual TButtonedEdit(System::Classes::TComponent* AOwner) : TCustomButtonedEdit(AOwner) { }
	/* TCustomButtonedEdit.Destroy */ inline __fastcall virtual ~TButtonedEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TButtonedEdit(HWND ParentWindow) : TCustomButtonedEdit(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TColorBoxStyles : unsigned char { cbStandardColors, cbExtendedColors, cbSystemColors, cbIncludeNone, cbIncludeDefault, cbCustomColor, cbPrettyNames, cbCustomColors };

typedef System::Set<TColorBoxStyles, TColorBoxStyles::cbStandardColors, TColorBoxStyles::cbCustomColors> TColorBoxStyle;

typedef void __fastcall (__closure *TGetColorsEvent)(TCustomColorBox* Sender, System::Classes::TStrings* Items);

class PASCALIMPLEMENTATION TCustomColorBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	TColorBoxStyle FStyle;
	bool FNeedToPopulate;
	bool FNeedToSetSelected;
	bool FListSelected;
	System::Uitypes::TColor FDefaultColorColor;
	System::Uitypes::TColor FNoneColorColor;
	System::Uitypes::TColor FSelectedColor;
	TGetColorsEvent FOnGetColors;
	System::Uitypes::TColor __fastcall GetColor(int Index);
	System::UnicodeString __fastcall GetColorName(int Index);
	System::Uitypes::TColor __fastcall GetSelected();
	void __fastcall SetSelected(const System::Uitypes::TColor AColor);
	void __fastcall ColorCallBack(const System::UnicodeString AName);
	void __fastcall SetDefaultColorColor(const System::Uitypes::TColor Value);
	void __fastcall SetNoneColorColor(const System::Uitypes::TColor Value);
	
protected:
	DYNAMIC void __fastcall CloseUp();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	virtual bool __fastcall PickCustomColor();
	void __fastcall PopulateList();
	DYNAMIC void __fastcall Select();
	HIDESBASE void __fastcall SetStyle(TColorBoxStyle AStyle);
	
public:
	__fastcall virtual TCustomColorBox(System::Classes::TComponent* AOwner);
	__property TColorBoxStyle Style = {read=FStyle, write=SetStyle, default=7};
	__property System::Uitypes::TColor Colors[int Index] = {read=GetColor};
	__property System::UnicodeString ColorNames[int Index] = {read=GetColorName};
	__property System::Uitypes::TColor Selected = {read=GetSelected, write=SetSelected, default=0};
	__property System::Uitypes::TColor DefaultColorColor = {read=FDefaultColorColor, write=SetDefaultColorColor, default=0};
	__property System::Uitypes::TColor NoneColorColor = {read=FNoneColorColor, write=SetNoneColorColor, default=0};
	__property TGetColorsEvent OnGetColors = {read=FOnGetColors, write=FOnGetColors};
public:
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TCustomColorBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomColorBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TColorBox : public TCustomColorBox
{
	typedef TCustomColorBox inherited;
	
__published:
	__property Align = {default=0};
	__property AutoComplete = {default=1};
	__property AutoDropDown = {default=0};
	__property DefaultColorColor = {default=0};
	__property NoneColorColor = {default=0};
	__property Selected = {default=0};
	__property Style = {default=7};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DropDownCount = {default=8};
	__property Enabled = {default=1};
	__property Font;
	__property ItemHeight;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnCloseUp;
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetColors;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnSelect;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomColorBox.Create */ inline __fastcall virtual TColorBox(System::Classes::TComponent* AOwner) : TCustomColorBox(AOwner) { }
	
public:
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TColorBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TColorBox(HWND ParentWindow) : TCustomColorBox(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TLBGetColorsEvent)(TCustomColorListBox* Sender, System::Classes::TStrings* Items);

class PASCALIMPLEMENTATION TCustomColorListBox : public Vcl::Stdctrls::TCustomListBox
{
	typedef Vcl::Stdctrls::TCustomListBox inherited;
	
private:
	TColorBoxStyle FStyle;
	bool FNeedToPopulate;
	bool FNeedToSetSelected;
	bool FListSelected;
	System::Uitypes::TColor FDefaultColorColor;
	System::Uitypes::TColor FNoneColorColor;
	System::Uitypes::TColor FSelectedColor;
	TLBGetColorsEvent FOnGetColors;
	System::Uitypes::TColor __fastcall GetColor(int Index);
	System::UnicodeString __fastcall GetColorName(int Index);
	HIDESBASE System::Uitypes::TColor __fastcall GetSelected();
	HIDESBASE void __fastcall SetSelected(const System::Uitypes::TColor AColor);
	void __fastcall ColorCallBack(const System::UnicodeString AName);
	void __fastcall SetDefaultColorColor(const System::Uitypes::TColor Value);
	void __fastcall SetNoneColorColor(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	virtual bool __fastcall PickCustomColor();
	void __fastcall PopulateList();
	HIDESBASE void __fastcall SetStyle(TColorBoxStyle AStyle);
	
public:
	__fastcall virtual TCustomColorListBox(System::Classes::TComponent* AOwner);
	__property TColorBoxStyle Style = {read=FStyle, write=SetStyle, default=7};
	__property System::Uitypes::TColor Colors[int Index] = {read=GetColor};
	__property System::UnicodeString ColorNames[int Index] = {read=GetColorName};
	__property System::Uitypes::TColor Selected = {read=GetSelected, write=SetSelected, default=0};
	__property System::Uitypes::TColor DefaultColorColor = {read=FDefaultColorColor, write=SetDefaultColorColor, default=0};
	__property System::Uitypes::TColor NoneColorColor = {read=FNoneColorColor, write=SetNoneColorColor, default=0};
	__property TLBGetColorsEvent OnGetColors = {read=FOnGetColors, write=FOnGetColors};
public:
	/* TCustomListBox.Destroy */ inline __fastcall virtual ~TCustomColorListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomColorListBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TColorListBox : public TCustomColorListBox
{
	typedef TCustomColorListBox inherited;
	
__published:
	__property Align = {default=0};
	__property AutoComplete = {default=1};
	__property DefaultColorColor = {default=0};
	__property NoneColorColor = {default=0};
	__property Selected = {default=0};
	__property Style = {default=7};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property Enabled = {default=1};
	__property Font;
	__property ItemHeight = {default=16};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
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
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetColors;
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
	/* TCustomColorListBox.Create */ inline __fastcall virtual TColorListBox(System::Classes::TComponent* AOwner) : TCustomColorListBox(AOwner) { }
	
public:
	/* TCustomListBox.Destroy */ inline __fastcall virtual ~TColorListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TColorListBox(HWND ParentWindow) : TCustomColorListBox(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TBalloonFlags : unsigned char { bfNone, bfInfo, bfWarning, bfError };

class PASCALIMPLEMENTATION TCustomTrayIcon : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	static unsigned RM_TaskbarCreated;
	bool FAnimate;
	System::UnicodeString FBalloonHint;
	System::UnicodeString FBalloonTitle;
	TBalloonFlags FBalloonFlags;
	bool FIsClicked;
	Vcl::Graphics::TIcon* FCurrentIcon;
	_NOTIFYICONDATAW *FData;
	Vcl::Graphics::TIcon* FIcon;
	Vcl::Imglist::TCustomImageList* FIconList;
	Vcl::Menus::TPopupMenu* FPopupMenu;
	TTimer* FTimer;
	System::UnicodeString FHint;
	int FIconIndex;
	bool FVisible;
	System::Classes::TNotifyEvent FOnBalloonClick;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnDblClick;
	Vcl::Controls::TMouseEvent FOnMouseDown;
	Vcl::Controls::TMouseMoveEvent FOnMouseMove;
	Vcl::Controls::TMouseEvent FOnMouseUp;
	System::Classes::TNotifyEvent FOnAnimate;
	_NOTIFYICONDATAW __fastcall GetData();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall SetHint(const System::UnicodeString Value);
	unsigned __fastcall GetAnimateInterval();
	void __fastcall SetAnimateInterval(unsigned Value);
	void __fastcall SetAnimate(bool Value);
	void __fastcall SetBalloonHint(const System::UnicodeString Value);
	int __fastcall GetBalloonTimeout();
	void __fastcall SetBalloonTimeout(int Value);
	void __fastcall SetBalloonTitle(const System::UnicodeString Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetIconIndex(int Value);
	void __fastcall SetIcon(Vcl::Graphics::TIcon* Value);
	void __fastcall SetIconList(Vcl::Imglist::TCustomImageList* Value);
	virtual void __fastcall WindowProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DoOnAnimate(System::TObject* Sender);
	__property _NOTIFYICONDATAW Data = {read=GetData};
	bool __fastcall Refresh(int Message)/* overload */;
	
public:
	__fastcall virtual TCustomTrayIcon(System::Classes::TComponent* Owner);
	__fastcall virtual ~TCustomTrayIcon();
	void __fastcall Refresh()/* overload */;
	void __fastcall SetDefaultIcon();
	virtual void __fastcall ShowBalloonHint();
	__property bool Animate = {read=FAnimate, write=SetAnimate, default=0};
	__property unsigned AnimateInterval = {read=GetAnimateInterval, write=SetAnimateInterval, default=1000};
	__property System::UnicodeString Hint = {read=FHint, write=SetHint};
	__property System::UnicodeString BalloonHint = {read=FBalloonHint, write=SetBalloonHint};
	__property System::UnicodeString BalloonTitle = {read=FBalloonTitle, write=SetBalloonTitle};
	__property int BalloonTimeout = {read=GetBalloonTimeout, write=SetBalloonTimeout, default=10000};
	__property TBalloonFlags BalloonFlags = {read=FBalloonFlags, write=FBalloonFlags, default=0};
	__property Vcl::Graphics::TIcon* Icon = {read=FIcon, write=SetIcon};
	__property Vcl::Imglist::TCustomImageList* Icons = {read=FIconList, write=SetIconList};
	__property int IconIndex = {read=FIconIndex, write=SetIconIndex, default=0};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
	__property bool Visible = {read=FVisible, write=SetVisible, default=0};
	__property System::Classes::TNotifyEvent OnBalloonClick = {read=FOnBalloonClick, write=FOnBalloonClick};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property Vcl::Controls::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property Vcl::Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Vcl::Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property System::Classes::TNotifyEvent OnAnimate = {read=FOnAnimate, write=FOnAnimate};
};


class PASCALIMPLEMENTATION TTrayIcon : public TCustomTrayIcon
{
	typedef TCustomTrayIcon inherited;
	
__published:
	__property Animate = {default=0};
	__property AnimateInterval = {default=1000};
	__property Hint = {default=0};
	__property BalloonHint = {default=0};
	__property BalloonTitle = {default=0};
	__property BalloonTimeout = {default=10000};
	__property BalloonFlags = {default=0};
	__property Icon;
	__property Icons;
	__property IconIndex = {default=0};
	__property PopupMenu;
	__property Visible = {default=0};
	__property OnBalloonClick;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseDown;
	__property OnAnimate;
public:
	/* TCustomTrayIcon.Create */ inline __fastcall virtual TTrayIcon(System::Classes::TComponent* Owner) : TCustomTrayIcon(Owner) { }
	/* TCustomTrayIcon.Destroy */ inline __fastcall virtual ~TTrayIcon() { }
	
};


class PASCALIMPLEMENTATION TCategoryPanelSurface : public Vcl::Controls::TCustomTransparentControl
{
	typedef Vcl::Controls::TCustomTransparentControl inherited;
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
public:
	__fastcall virtual TCategoryPanelSurface(System::Classes::TComponent* AOwner);
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCategoryPanelSurface() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCategoryPanelSurface(HWND ParentWindow) : Vcl::Controls::TCustomTransparentControl(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCategoryPanelSurfaceClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCategoryPanelSurfaceClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomCategoryPanel : public TCustomPanel
{
	typedef TCustomPanel inherited;
	
	
protected:
	enum DECLSPEC_DENUM THeaderState : unsigned char { hsNormal, hsHot, hsPressed };
	
	
private:
	bool FAllowResize;
	bool FCollapsed;
	System::Uitypes::TImageIndex FCollapsedHotImageIndex;
	System::Uitypes::TImageName FCollapsedHotImageName;
	System::Uitypes::TImageIndex FCollapsedImageIndex;
	System::Uitypes::TImageName FCollapsedImageName;
	System::Uitypes::TImageIndex FCollapsedPressedImageIndex;
	System::Uitypes::TImageName FCollapsedPressedImageName;
	int FExpandedHeight;
	System::Uitypes::TImageIndex FExpandedHotImageIndex;
	System::Uitypes::TImageName FExpandedHotImageName;
	System::Uitypes::TImageIndex FExpandedImageIndex;
	System::Uitypes::TImageName FExpandedImageName;
	System::Uitypes::TImageIndex FExpandedPressedImageIndex;
	System::Uitypes::TImageName FExpandedPressedImageName;
	System::Types::TRect FGlyphRect;
	THeaderState FHeaderState;
	TCustomCategoryPanelGroup* FPanelGroup;
	bool FMouseInClient;
	System::Types::TRect FTextRect;
	System::Classes::TNotifyEvent FOnCollapse;
	System::Classes::TNotifyEvent FOnExpand;
	int __fastcall GetHeaderHeight();
	void __fastcall ReadExpandedHeight(System::Classes::TReader* Reader);
	void __fastcall SetCollapsed(const bool Value);
	void __fastcall SetCollapsedHotImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetCollapsedHotImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetCollapsedImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetCollapsedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetCollapsedPressedImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetCollapsedPressedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetExpandedHotImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetExpandedHotImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetExpandedImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetExpandedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetExpandedPressedImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetExpandedPressedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetPanelGroup(TCustomCategoryPanelGroup* const Value);
	void __fastcall UpdateButtonState();
	bool __fastcall UsingImageList();
	void __fastcall WriteExpandedHeight(System::Classes::TWriter* Writer);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMControlListChanging(Vcl::Controls::TCMControlListChanging &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	MESSAGE void __fastcall WMNCMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	
protected:
	TCategoryPanelSurface* FPanelSurface;
	virtual void __fastcall CalcRectBounds();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DrawCollapsedPanel(Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall DrawHeader()/* overload */;
	virtual void __fastcall DrawHeader(HDC DC)/* overload */;
	virtual void __fastcall DrawHeaderBackground(Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall DrawHeaderCaption(Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall DrawHeaderChevron(Vcl::Graphics::TCanvas* ACanvas);
	virtual TCategoryPanelSurfaceClass __fastcall GetCategoryPanelSurfaceClass();
	virtual int __fastcall GetCollapsedHeight();
	virtual void __fastcall Loaded();
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	void __fastcall ResizeHeader(int OldHeight, int NewHeight);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall UpdateControlOriginalParentSize(Vcl::Controls::TControl* AControl, System::Types::TPoint &AOriginalParentSize);
	void __fastcall UpdateHeader();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall CheckImageIndexes();
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	__property int HeaderHeight = {read=GetHeaderHeight, nodefault};
	
public:
	__fastcall virtual TCustomCategoryPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomCategoryPanel();
	void __fastcall Collapse();
	void __fastcall Expand();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	DYNAMIC void __fastcall GetTabControlList(System::Classes::TList* List);
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property bool Collapsed = {read=FCollapsed, write=SetCollapsed, default=0};
	__property System::Uitypes::TImageIndex CollapsedHotImageIndex = {read=FCollapsedHotImageIndex, write=SetCollapsedHotImageIndex, default=-1};
	__property System::Uitypes::TImageName CollapsedHotImageName = {read=FCollapsedHotImageName, write=SetCollapsedHotImageName};
	__property System::Uitypes::TImageIndex CollapsedImageIndex = {read=FCollapsedImageIndex, write=SetCollapsedImageIndex, default=-1};
	__property System::Uitypes::TImageName CollapsedImageName = {read=FCollapsedImageName, write=SetCollapsedImageName};
	__property System::Uitypes::TImageIndex CollapsedPressedImageIndex = {read=FCollapsedPressedImageIndex, write=SetCollapsedPressedImageIndex, default=-1};
	__property System::Uitypes::TImageName CollapsedPressedImageName = {read=FCollapsedPressedImageName, write=SetCollapsedPressedImageName};
	__property System::Uitypes::TImageIndex ExpandedHotImageIndex = {read=FExpandedHotImageIndex, write=SetExpandedHotImageIndex, default=-1};
	__property System::Uitypes::TImageName ExpandedHotImageName = {read=FExpandedHotImageName, write=SetExpandedHotImageName};
	__property System::Uitypes::TImageIndex ExpandedImageIndex = {read=FExpandedImageIndex, write=SetExpandedImageIndex, default=-1};
	__property System::Uitypes::TImageName ExpandedImageName = {read=FExpandedImageName, write=SetExpandedImageName};
	__property System::Uitypes::TImageIndex ExpandedPressedImageIndex = {read=FExpandedPressedImageIndex, write=SetExpandedPressedImageIndex, default=-1};
	__property System::Uitypes::TImageName ExpandedPressedImageName = {read=FExpandedPressedImageName, write=SetExpandedPressedImageName};
	__property THeaderState HeaderState = {read=FHeaderState, nodefault};
	__property TCustomCategoryPanelGroup* PanelGroup = {read=FPanelGroup, write=SetPanelGroup};
	__property System::Classes::TNotifyEvent OnCollapse = {read=FOnCollapse, write=FOnCollapse};
	__property System::Classes::TNotifyEvent OnExpand = {read=FOnExpand, write=FOnExpand};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCategoryPanel(HWND ParentWindow) : TCustomPanel(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCategoryPanelClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCategoryPanelClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCategoryPanel : public TCustomCategoryPanel
{
	typedef TCustomCategoryPanel inherited;
	
__published:
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property Collapsed = {default=0};
	__property CollapsedHotImageIndex = {default=-1};
	__property CollapsedHotImageName = {default=0};
	__property CollapsedImageIndex = {default=-1};
	__property CollapsedImageName = {default=0};
	__property CollapsedPressedImageIndex = {default=-1};
	__property CollapsedPressedImageName = {default=0};
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ExpandedHotImageIndex = {default=-1};
	__property ExpandedHotImageName = {default=0};
	__property ExpandedImageIndex = {default=-1};
	__property ExpandedImageName = {default=0};
	__property ExpandedPressedImageName = {default=0};
	__property FullRepaint = {default=1};
	__property Font;
	__property Height = {default=200};
	__property Left = {stored=false};
	__property Locked = {default=0};
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
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
	__property Width = {stored=false};
	__property OnCollapse;
	__property OnClick;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpand;
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
	/* TCustomCategoryPanel.Create */ inline __fastcall virtual TCategoryPanel(System::Classes::TComponent* AOwner) : TCustomCategoryPanel(AOwner) { }
	/* TCustomCategoryPanel.Destroy */ inline __fastcall virtual ~TCategoryPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCategoryPanel(HWND ParentWindow) : TCustomCategoryPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomCategoryPanelGroup : public Vcl::Forms::TScrollingWinControl
{
	typedef Vcl::Forms::TScrollingWinControl inherited;
	
	
public:
	enum DECLSPEC_DENUM THeaderStyle : unsigned char { hsGradient, hsImage, hsThemed };
	
	
private:
	System::Classes::TAlignment FChevronAlignment;
	System::Uitypes::TColor FChevronColor;
	System::Uitypes::TColor FChevronHotColor;
	System::Uitypes::TColor FGradientBaseColor;
	System::Uitypes::TColor FGradientColor;
	Vcl::Graphutil::TGradientDirection FGradientDirection;
	System::Classes::TAlignment FHeaderAlignment;
	Vcl::Graphics::TFont* FHeaderFont;
	Vcl::Graphics::TPicture* FHeaderImage;
	int FHeaderHeight;
	THeaderStyle FHeaderStyle;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	System::Classes::TList* FPanels;
	bool FReorderPanels;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall InsertPanel(TCustomCategoryPanel* Panel);
	void __fastcall RemovePanel(TCustomCategoryPanel* Panel);
	void __fastcall SetChevronAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetChevronColor(const System::Uitypes::TColor Value);
	void __fastcall SetChevronHotColor(const System::Uitypes::TColor Value);
	void __fastcall SetGradientBaseColor(const System::Uitypes::TColor Value);
	void __fastcall SetGradientColor(const System::Uitypes::TColor Value);
	void __fastcall SetGradientDirection(const Vcl::Graphutil::TGradientDirection Value);
	void __fastcall SetHeaderAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetHeaderFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHeaderHeight(const int Value);
	void __fastcall SetHeaderImage(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetHeaderStyle(const THeaderStyle Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall UpdatePanelHeaders();
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMControlListChanging(Vcl::Controls::TCMControlListChanging &Message);
	HIDESBASE MESSAGE void __fastcall CMDoubleBufferedChanged(Winapi::Messages::TMessage &Mesage);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
protected:
	virtual void __fastcall CreateWnd();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual TCategoryPanelClass __fastcall GetCategoryPanelClass();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall ReorderPanels();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomCategoryPanelGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomCategoryPanelGroup();
	void __fastcall CollapseAll();
	TCustomCategoryPanel* __fastcall CreatePanel(System::Classes::TComponent* AOwner);
	void __fastcall ExpandAll();
	__property System::Classes::TAlignment ChevronAlignment = {read=FChevronAlignment, write=SetChevronAlignment, default=0};
	__property System::Uitypes::TColor ChevronColor = {read=FChevronColor, write=SetChevronColor, default=0};
	__property System::Uitypes::TColor ChevronHotColor = {read=FChevronHotColor, write=SetChevronHotColor, default=8421504};
	__property Color = {default=10789024};
	__property System::Uitypes::TColor GradientBaseColor = {read=FGradientBaseColor, write=SetGradientBaseColor, default=15790320};
	__property System::Uitypes::TColor GradientColor = {read=FGradientColor, write=SetGradientColor, default=12632256};
	__property Vcl::Graphutil::TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=1};
	__property System::Classes::TAlignment HeaderAlignment = {read=FHeaderAlignment, write=SetHeaderAlignment, default=0};
	__property Vcl::Graphics::TFont* HeaderFont = {read=FHeaderFont, write=SetHeaderFont};
	__property int HeaderHeight = {read=FHeaderHeight, write=SetHeaderHeight, default=24};
	__property Vcl::Graphics::TPicture* HeaderImage = {read=FHeaderImage, write=SetHeaderImage};
	__property THeaderStyle HeaderStyle = {read=FHeaderStyle, write=SetHeaderStyle, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property System::Classes::TList* Panels = {read=FPanels};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCategoryPanelGroup(HWND ParentWindow) : Vcl::Forms::TScrollingWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TCategoryPanelGroup : public TCustomCategoryPanelGroup
{
	typedef TCustomCategoryPanelGroup inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=3};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property ChevronAlignment = {default=0};
	__property ChevronColor = {default=0};
	__property ChevronHotColor = {default=8421504};
	__property Constraints;
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Color = {default=10789024};
	__property Ctl3D;
	__property Font;
	__property GradientBaseColor = {default=15790320};
	__property GradientColor = {default=12632256};
	__property GradientDirection = {default=1};
	__property HeaderAlignment = {default=0};
	__property HeaderFont;
	__property HeaderHeight = {default=24};
	__property HeaderImage;
	__property HeaderStyle = {default=0};
	__property Height = {default=350};
	__property Images;
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
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
	__property Width = {default=200};
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
	/* TCustomCategoryPanelGroup.Create */ inline __fastcall virtual TCategoryPanelGroup(System::Classes::TComponent* AOwner) : TCustomCategoryPanelGroup(AOwner) { }
	/* TCustomCategoryPanelGroup.Destroy */ inline __fastcall virtual ~TCategoryPanelGroup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCategoryPanelGroup(HWND ParentWindow) : TCustomCategoryPanelGroup(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TSysLinkType : unsigned char { sltURL, sltID };

typedef void __fastcall (__closure *TSysLinkEvent)(System::TObject* Sender, const System::UnicodeString Link, TSysLinkType LinkType);

class PASCALIMPLEMENTATION TCustomLinkLabel : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
	
public:
	typedef System::Classes::TAlignment TLinkAlignment;
	
	
private:
	System::Classes::TAlignment FAlignment;
	bool FAutoSize;
	bool FUseVisualStyle;
	TSysLinkEvent FOnLinkClick;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall AdjustBounds();
	void __fastcall DoOnLinkClick(const System::UnicodeString Link, TSysLinkType LinkType);
	System::UnicodeString __fastcall ParseLinks();
	void __fastcall SetAlignment(const TLinkAlignment Value);
	void __fastcall SetUseVisualStyle(const bool Value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMNotify(Winapi::Messages::TWMNotify &Message);
	MESSAGE void __fastcall CNCtlColorStatic(Winapi::Messages::TWMCtlColor &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall SetAutoSize(bool Value);
	virtual bool __fastcall UseThemes();
	
public:
	__fastcall virtual TCustomLinkLabel(System::Classes::TComponent* AOwner);
	__property TLinkAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property bool UseVisualStyle = {read=FUseVisualStyle, write=SetUseVisualStyle, default=0};
	__property TSysLinkEvent OnLinkClick = {read=FOnLinkClick, write=FOnLinkClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomLinkLabel(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomLinkLabel() { }
	
};


class PASCALIMPLEMENTATION TLinkLabel : public TCustomLinkLabel
{
	typedef TCustomLinkLabel inherited;
	
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
	__property Caption = {default=0};
	__property Color;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property UseVisualStyle = {default=0};
	__property Visible = {default=1};
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
	__property OnLinkClick;
public:
	/* TCustomLinkLabel.Create */ inline __fastcall virtual TLinkLabel(System::Classes::TComponent* AOwner) : TCustomLinkLabel(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TLinkLabel(HWND ParentWindow) : TCustomLinkLabel(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TLinkLabel() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLinkLabelStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNCtlColorStatic(Winapi::Messages::TWMCtlColor &Message);
	
public:
	__fastcall virtual TLinkLabelStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TLinkLabelStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Uitypes::TColor NoColorSelected = System::Uitypes::TColor(-16777216);
static const System::Word WM_SYSTEM_TRAY_MESSAGE = System::Word(0x401);
static const System::Byte DefaultCategoryPanelHeight = System::Byte(0xc8);
extern DELPHI_PACKAGE void __fastcall Frame3D(Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &Rect, System::Uitypes::TColor TopColor, System::Uitypes::TColor BottomColor, int Width);
extern DELPHI_PACKAGE void __fastcall NotebookHandlesNeeded(TNotebook* Notebook);
}	/* namespace Extctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_EXTCTRLS)
using namespace Vcl::Extctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ExtctrlsHPP
