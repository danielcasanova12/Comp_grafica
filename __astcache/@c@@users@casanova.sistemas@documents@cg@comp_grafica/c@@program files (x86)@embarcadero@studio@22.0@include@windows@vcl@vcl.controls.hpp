// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Controls.pas' rev: 35.00 (Windows)

#ifndef Vcl_ControlsHPP
#define Vcl_ControlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.MultiMon.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.Imm.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ActnList.hpp>
#include <System.SyncObjs.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>

//-- user supplied -----------------------------------------------------------
#if defined(_VCL_ALIAS_RECORDS)
// Alias records for C++ code that cannot compile in STRICT mode yet.
#if !defined(STRICT)
#pragma alias "@Vcl@Controls@TWinControl@CreateParentedControl$qqrpv"="@Vcl@Controls@TWinControl@CreateParentedControl$qqrp6HWND__"
#pragma alias "@Vcl@Controls@TCustomHint@NCPaintHint$qqrp26Controls@TCustomHintWindowpv"="@Vcl@Controls@TCustomHint@NCPaintHint$qqrp26Controls@TCustomHintWindowp5HDC__"
#endif
#endif
#ifndef _WIN64
#pragma link "dwmapi.lib"
#pragma link "uxtheme.lib"
#endif //_WIN64
namespace Vcl
{
namespace Controls
{
using System::Uitypes::mrNone;
using System::Uitypes::mrOk;
using System::Uitypes::mrCancel;
using System::Uitypes::mrAbort;
using System::Uitypes::mrRetry;
using System::Uitypes::mrIgnore;
using System::Uitypes::mrYes;
using System::Uitypes::mrNo;
using System::Uitypes::mrAll;
using System::Uitypes::mrNoToAll;
using System::Uitypes::mrYesToAll;
using System::Uitypes::mrClose;
}	/* namespace Controls */
}	/* namespace Vcl */
namespace Vcl
{
namespace Controls
{
using System::Uitypes::TModalResult;
}	/* namespace Controls */
}	/* namespace Vcl */
namespace Vcl
{
namespace Controls
{
using System::Uitypes::TCursor;
}	/* namespace Controls */
}	/* namespace Vcl */
namespace Vcl
{
namespace Controls
{
using System::Uitypes::crDefault;
using System::Uitypes::crNone;
using System::Uitypes::crArrow;
using System::Uitypes::crCross;
using System::Uitypes::crIBeam;
using System::Uitypes::crSize;
using System::Uitypes::crSizeNESW;
using System::Uitypes::crSizeNS;
using System::Uitypes::crSizeNWSE;
using System::Uitypes::crSizeWE;
using System::Uitypes::crUpArrow;
using System::Uitypes::crHourGlass;
using System::Uitypes::crDrag;
using System::Uitypes::crNoDrop;
using System::Uitypes::crHSplit;
using System::Uitypes::crVSplit;
using System::Uitypes::crMultiDrag;
using System::Uitypes::crSQLWait;
using System::Uitypes::crNo;
using System::Uitypes::crAppStart;
using System::Uitypes::crHelp;
using System::Uitypes::crHandPoint;
using System::Uitypes::crSizeAll;
}	/* namespace Controls */
}	/* namespace Vcl */
namespace Vcl
{
namespace Controls
{
using System::Uitypes::TMouseButton;
using System::Uitypes::TMouseActivate;
using System::Uitypes::TDragMode;
using System::Uitypes::TDragState;
using System::Uitypes::TDragKind;
using System::Uitypes::TTabOrder;
}	/* namespace Controls */
}	/* namespace Vcl */
namespace Vcl
{
namespace Controls
{
using System::Uitypes::TAnchorKind;
using System::Uitypes::TAnchors;
}	/* namespace Controls */
}	/* namespace Vcl */

namespace Vcl
{
namespace Controls
{
//-- forward type declarations -----------------------------------------------
struct TCMMouseWheel;
struct TCMCancelMode;
struct TCMFocusChanged;
struct TCMControlListChange;
struct TControlListItem;
struct TCMControlListChanging;
struct TCMChildKey;
struct TCMControlChange;
struct TCMChanged;
struct THintInfo;
struct TCMHintShow;
struct TCMParentFontChanged;
struct TDragRec;
struct TCMDrag;
struct TDockNotifyRec;
struct TCMDockClient;
struct TCMUnDockClient;
struct TCMFloat;
struct TCMDockNotification;
struct TPopupFormInfo;
struct TCMPopupHWndDestroy;
struct TCMCreatePopup;
struct TCMRemoteSessionStatusChanged;
class DELPHICLASS TDragObject;
class DELPHICLASS TDragObjectEx;
class DELPHICLASS TBaseDragControlObject;
class DELPHICLASS TDragControlObject;
class DELPHICLASS TDragControlObjectEx;
class DELPHICLASS TDragDockObject;
class DELPHICLASS TDragDockObjectEx;
class DELPHICLASS TControlCanvas;
class DELPHICLASS TCustomControlAction;
class DELPHICLASS TControlAction;
class DELPHICLASS TControlActionLink;
struct TMouseActivateRec;
struct TCMMouseActivate;
class DELPHICLASS TSizeConstraints;
class DELPHICLASS TMargins;
class DELPHICLASS TPadding;
struct TGestureEventInfo;
struct TCMGesture;
class DELPHICLASS EGestureException;
class DELPHICLASS TCustomGestureCollectionItem;
class DELPHICLASS TCustomGestureCollection;
class DELPHICLASS TCustomGestureManager;
class DELPHICLASS TCustomGestureEngine;
class DELPHICLASS TCustomTouchManager;
class DELPHICLASS TTouchManager;
class DELPHICLASS TControl;
struct TCreateParams;
class DELPHICLASS TWinControlActionLink;
struct TAlignInfo;
__interface DELPHIINTERFACE IDockManager;
typedef System::DelphiInterface<IDockManager> _di_IDockManager;
class DELPHICLASS TWinControl;
class DELPHICLASS TGraphicControl;
class DELPHICLASS TCustomControl;
class DELPHICLASS TCustomTransparentControl;
class DELPHICLASS THintWindow;
class DELPHICLASS TDragImageList;
class DELPHICLASS TImageList;
class DELPHICLASS TDockZone;
class DELPHICLASS TDockTree;
class DELPHICLASS TCustomPanningWindow;
class DELPHICLASS TMouse;
class DELPHICLASS TCustomListControl;
class DELPHICLASS TCustomMultiSelectListControl;
class DELPHICLASS TCustomHintWindow;
class DELPHICLASS TCustomHintShowHideThread;
class DELPHICLASS TCustomHint;
class DELPHICLASS TBalloonHint;
struct TMouseHelper /* Helper for class 'TMouse*' */;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TInteractiveGestureFlag : unsigned char { gfBegin, gfInertia, gfEnd };

typedef System::Set<TInteractiveGestureFlag, TInteractiveGestureFlag::gfBegin, TInteractiveGestureFlag::gfEnd> TInteractiveGestureFlags;

enum DECLSPEC_DENUM TInteractiveGesture : unsigned char { igZoom, igPan, igRotate, igTwoFingerTap, igPressAndTap };

typedef System::Set<TInteractiveGesture, TInteractiveGesture::igZoom, TInteractiveGesture::igPressAndTap> TInteractiveGestures;

enum DECLSPEC_DENUM TInteractiveGestureOption : unsigned char { igoPanSingleFingerHorizontal, igoPanSingleFingerVertical, igoPanInertia, igoPanGutter, igoParentPassthrough };

typedef System::Set<TInteractiveGestureOption, TInteractiveGestureOption::igoPanSingleFingerHorizontal, TInteractiveGestureOption::igoParentPassthrough> TInteractiveGestureOptions;

typedef void * TCustomData;

typedef NativeInt TCustomLongData _DEPRECATED_ATTRIBUTE1("Use THelpEventData, TListBoxItemData or NativeInt") ;

typedef void * TWindowProcPtr;

#ifndef _WIN64
typedef System::TMetaClass* TWinControlClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TWinControlClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* THintWindowClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, THintWindowClass);
#endif /* _WIN64 */

typedef Winapi::Messages::TWMNoParams TCMActivate;

typedef Winapi::Messages::TWMNoParams TCMDeactivate;

typedef Winapi::Messages::TWMNoParams TCMGotFocus;

typedef Winapi::Messages::TWMNoParams TCMLostFocus;

typedef Winapi::Messages::TWMKey TCMDialogKey;

typedef Winapi::Messages::TWMKey TCMDialogChar;

typedef Winapi::Messages::TWMNCHitTest TCMHitTest;

typedef Winapi::Messages::TWMNoParams TCMEnter;

typedef Winapi::Messages::TWMNoParams TCMExit;

typedef Winapi::Messages::TWMMouse TCMDesignHitTest;

typedef Winapi::Messages::TWMKey TCMWantSpecialKey;

struct DECLSPEC_DRECORD TCMMouseWheel
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	System::Classes::TShiftState ShiftState;
	short WheelDelta;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller ShiftStateWheel;
#endif /* _WIN64 */
	
public:
	union
	{
		struct 
		{
			System::Types::TSmallPoint Pos;
#ifdef _WIN64
			Winapi::Messages::TDWordFiller PosFiller;
#endif /* _WIN64 */
			NativeInt Result;
		};
		struct 
		{
			short XPos;
			short YPos;
#ifndef _WIN64
			
#else /* _WIN64 */
			Winapi::Messages::TDWordFiller XYPos;
#endif /* _WIN64 */
		};
		
	};
};


struct DECLSPEC_DRECORD TCMCancelMode
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt Unused;
	TControl* Sender;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMFocusChanged
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt Unused;
	TWinControl* Sender;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMControlListChange
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TControl* Control;
	System::LongBool Inserting;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller InsertingFiller;
#endif /* _WIN64 */
	NativeInt Result;
};


typedef TControlListItem *PControlListItem;

struct DECLSPEC_DRECORD TControlListItem
{
public:
	TControl* Control;
	TWinControl* Parent;
};


struct DECLSPEC_DRECORD TCMControlListChanging
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TControlListItem *ControlListItem;
	System::LongBool Inserting;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller InsertingFiller;
#endif /* _WIN64 */
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMChildKey
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	System::Word CharCode;
	Winapi::Messages::TWordFiller CharCodeFiller;
	TWinControl* Sender;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMControlChange
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TControl* Control;
	System::LongBool Inserting;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller InsertingFiller;
#endif /* _WIN64 */
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMChanged
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	int Unused;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller UnusedFiller;
#endif /* _WIN64 */
	TControl* Child;
	NativeInt Result;
};


typedef THintInfo *PHintInfo;

struct DECLSPEC_DRECORD THintInfo
{
public:
	TControl* HintControl;
	THintWindowClass HintWindowClass;
	System::Types::TPoint HintPos;
	int HintMaxWidth;
	System::Uitypes::TColor HintColor;
	System::Types::TRect CursorRect;
	System::Types::TPoint CursorPos;
	int ReshowTimeout;
	int HideTimeout;
	System::UnicodeString HintStr;
	void *HintData;
};


struct DECLSPEC_DRECORD TCMHintShow
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeInt Reserved;
	THintInfo *HintInfo;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMParentFontChanged
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt WParam;
	
public:
	union
	{
		struct 
		{
			Vcl::Graphics::TFont* Font;
			NativeInt Result;
		};
		struct 
		{
			NativeInt LParam;
		};
		
	};
};


enum DECLSPEC_DENUM TDragMessage : unsigned char { dmDragEnter, dmDragLeave, dmDragMove, dmDragDrop, dmDragCancel, dmFindTarget };

typedef TDragRec *PDragRec;

struct DECLSPEC_DRECORD TDragRec
{
public:
	System::Types::TPoint Pos;
	TDragObject* Source;
	void *Target;
	bool Docking;
};


struct DECLSPEC_DRECORD TCMDrag
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TDragMessage DragMessage;
	System::Byte Unused1;
	Winapi::Messages::TWordFiller Unused2;
	TDragRec *DragRec;
	NativeInt Result;
};


typedef TDockNotifyRec *PDockNotifyRec;

struct DECLSPEC_DRECORD TDockNotifyRec
{
public:
	unsigned ClientMsg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller ClientMsgFiller;
#endif /* _WIN64 */
	NativeUInt MsgWParam;
	NativeInt MsgLParam;
};


struct DECLSPEC_DRECORD TCMDockClient
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TDragDockObject* DockSource;
	System::Types::TSmallPoint MousePos;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MousePosFiller;
#endif /* _WIN64 */
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMUnDockClient
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TControl* NewTarget;
	TControl* Client;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMFloat
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt Reserved;
	TDragDockObject* DockSource;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMDockNotification
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TControl* Client;
	TDockNotifyRec *NotifyRec;
	NativeInt Result;
};


typedef TPopupFormInfo *PPopupFormInfo;

struct DECLSPEC_DRECORD TPopupFormInfo
{
public:
	int PopupID;
	HWND PopupWnd;
	bool IsPopup;
};


struct DECLSPEC_DRECORD TCMPopupHWndDestroy
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	TPopupFormInfo *PopupFormInfo;
	HWND PopupControlWnd;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMCreatePopup
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	int PopupID;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller PopupUDFiller;
#endif /* _WIN64 */
	HWND OwnerWnd;
	NativeInt Result;
};


struct DECLSPEC_DRECORD TCMRemoteSessionStatusChanged
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	System::LongBool InRemoteSession;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller UnusedFiller;
#endif /* _WIN64 */
	NativeInt Unused;
	NativeInt Result;
};


enum DECLSPEC_DENUM TAlign : unsigned char { alNone, alTop, alBottom, alLeft, alRight, alClient, alCustom };

typedef System::Set<TAlign, TAlign::alNone, TAlign::alCustom> TAlignSet;

typedef void * TDragTarget;

class PASCALIMPLEMENTATION TDragObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FAlwaysShowDragImages;
	bool FCancelling;
	HWND FDragHandle;
	System::Types::TPoint FDragPos;
	void *FDragTarget;
	System::Types::TPoint FDragTargetPos;
	bool FDropped;
	double FMouseDeltaX;
	double FMouseDeltaY;
	bool FRightClickCancels;
	HWND __fastcall Capture();
	void __fastcall ReleaseCapture(HWND Handle);
	
protected:
	virtual void __fastcall Finished(System::TObject* Target, int X, int Y, bool Accepted);
	virtual System::Uitypes::TCursor __fastcall GetDragCursor(bool Accepted, int X, int Y);
	virtual TDragImageList* __fastcall GetDragImages();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Msg);
	void __fastcall MainWndProc(Winapi::Messages::TMessage &Message);
	
public:
	virtual void __fastcall Assign(TDragObject* Source);
	virtual System::UnicodeString __fastcall GetName();
	virtual void __fastcall HideDragImage();
	virtual NativeUInt __fastcall Instance();
	virtual void __fastcall ShowDragImage();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall BeforeDestruction();
	__property bool AlwaysShowDragImages = {read=FAlwaysShowDragImages, write=FAlwaysShowDragImages, nodefault};
	__property bool Cancelling = {read=FCancelling, write=FCancelling, nodefault};
#ifndef _WIN64
	__property HWND DragHandle = {read=FDragHandle, write=FDragHandle, nodefault};
#else /* _WIN64 */
	__property HWND DragHandle = {read=FDragHandle, write=FDragHandle};
#endif /* _WIN64 */
	__property System::Types::TPoint DragPos = {read=FDragPos, write=FDragPos};
	__property void * DragTarget = {read=FDragTarget, write=FDragTarget};
	__property System::Types::TPoint DragTargetPos = {read=FDragTargetPos, write=FDragTargetPos};
	__property bool Dropped = {read=FDropped, nodefault};
	__property double MouseDeltaX = {read=FMouseDeltaX};
	__property double MouseDeltaY = {read=FMouseDeltaY};
	__property bool RightClickCancels = {read=FRightClickCancels, write=FRightClickCancels, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDragObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDragObject() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TDragObjectClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TDragObjectClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TDragObjectEx : public TDragObject
{
	typedef TDragObject inherited;
	
public:
	virtual void __fastcall BeforeDestruction();
public:
	/* TObject.Create */ inline __fastcall TDragObjectEx() : TDragObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDragObjectEx() { }
	
};


class PASCALIMPLEMENTATION TBaseDragControlObject : public TDragObject
{
	typedef TDragObject inherited;
	
private:
	TControl* FControl;
	
protected:
	virtual void __fastcall EndDrag(System::TObject* Target, int X, int Y);
	virtual void __fastcall Finished(System::TObject* Target, int X, int Y, bool Accepted);
	
public:
	__fastcall virtual TBaseDragControlObject(TControl* AControl);
	virtual void __fastcall Assign(TDragObject* Source);
	__property TControl* Control = {read=FControl, write=FControl};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseDragControlObject() { }
	
};


class PASCALIMPLEMENTATION TDragControlObject : public TBaseDragControlObject
{
	typedef TBaseDragControlObject inherited;
	
protected:
	virtual System::Uitypes::TCursor __fastcall GetDragCursor(bool Accepted, int X, int Y);
	virtual TDragImageList* __fastcall GetDragImages();
	
public:
	virtual void __fastcall HideDragImage();
	virtual void __fastcall ShowDragImage();
public:
	/* TBaseDragControlObject.Create */ inline __fastcall virtual TDragControlObject(TControl* AControl) : TBaseDragControlObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDragControlObject() { }
	
};


class PASCALIMPLEMENTATION TDragControlObjectEx : public TDragControlObject
{
	typedef TDragControlObject inherited;
	
public:
	virtual void __fastcall BeforeDestruction();
public:
	/* TBaseDragControlObject.Create */ inline __fastcall virtual TDragControlObjectEx(TControl* AControl) : TDragControlObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDragControlObjectEx() { }
	
};


class PASCALIMPLEMENTATION TDragDockObject : public TBaseDragControlObject
{
	typedef TBaseDragControlObject inherited;
	
private:
	Vcl::Graphics::TBrush* FBrush;
	System::Types::TRect FDockRect;
	TAlign FDropAlign;
	TControl* FDropOnControl;
	System::Types::TRect FEraseDockRect;
	bool FFloating;
	void __fastcall SetBrush(Vcl::Graphics::TBrush* Value);
	
protected:
	virtual void __fastcall AdjustDockRect(const System::Types::TRect &ARect);
	virtual void __fastcall DrawDragDockImage();
	virtual void __fastcall EndDrag(System::TObject* Target, int X, int Y);
	virtual void __fastcall EraseDragDockImage();
	virtual System::Uitypes::TCursor __fastcall GetDragCursor(bool Accepted, int X, int Y);
	virtual int __fastcall GetFrameWidth();
	virtual bool __fastcall GetEraseWhenMoving();
	
public:
	__fastcall virtual TDragDockObject(TControl* AControl);
	__fastcall virtual ~TDragDockObject();
	virtual void __fastcall Assign(TDragObject* Source);
	__property Vcl::Graphics::TBrush* Brush = {read=FBrush, write=SetBrush};
	__property System::Types::TRect DockRect = {read=FDockRect, write=FDockRect};
	__property TAlign DropAlign = {read=FDropAlign, nodefault};
	__property TControl* DropOnControl = {read=FDropOnControl};
	__property System::Types::TRect EraseDockRect = {read=FEraseDockRect, write=FEraseDockRect};
	__property bool EraseWhenMoving = {read=GetEraseWhenMoving, nodefault};
	__property bool Floating = {read=FFloating, write=FFloating, nodefault};
	__property int FrameWidth = {read=GetFrameWidth, nodefault};
};


class PASCALIMPLEMENTATION TDragDockObjectEx : public TDragDockObject
{
	typedef TDragDockObject inherited;
	
public:
	virtual void __fastcall BeforeDestruction();
public:
	/* TDragDockObject.Create */ inline __fastcall virtual TDragDockObjectEx(TControl* AControl) : TDragDockObject(AControl) { }
	/* TDragDockObject.Destroy */ inline __fastcall virtual ~TDragDockObjectEx() { }
	
};


typedef HDC TCanvasDC;

class PASCALIMPLEMENTATION TControlCanvas : public Vcl::Graphics::TCanvas
{
	typedef Vcl::Graphics::TCanvas inherited;
	
private:
	TControl* FControl;
	HDC FDeviceContext;
	HWND FWindowHandle;
	void __fastcall SetControl(TControl* AControl);
	
protected:
	virtual void __fastcall CreateHandle();
	
public:
	__fastcall virtual ~TControlCanvas();
	void __fastcall FreeHandle();
	void __fastcall UpdateTextFlags();
	__property TControl* Control = {read=FControl, write=SetControl};
public:
	/* TCanvas.Create */ inline __fastcall TControlCanvas() : Vcl::Graphics::TCanvas() { }
	
};


class PASCALIMPLEMENTATION TCustomControlAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	Vcl::Menus::TPopupMenu* FDropdownMenu;
	Vcl::Menus::TPopupMenu* FPopupMenu;
	bool FEnableDropdown;
	void __fastcall SetDropdownMenu(Vcl::Menus::TPopupMenu* Value);
	void __fastcall SetEnableDropdown(bool Value);
	void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* Value);
	
public:
	__property Vcl::Menus::TPopupMenu* DropdownMenu = {read=FDropdownMenu, write=SetDropdownMenu};
	__property bool EnableDropdown = {read=FEnableDropdown, write=SetEnableDropdown, default=0};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
public:
	/* TCustomAction.Create */ inline __fastcall virtual TCustomControlAction(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TCustomAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomControlAction() { }
	
};


class PASCALIMPLEMENTATION TControlAction : public TCustomControlAction
{
	typedef TCustomControlAction inherited;
	
__published:
	__property AutoCheck = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property DropdownMenu;
	__property Enabled = {default=1};
	__property EnableDropdown = {default=0};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property PopupMenu;
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TControlAction(System::Classes::TComponent* AOwner) : TCustomControlAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TControlAction() { }
	
};


class PASCALIMPLEMENTATION TControlActionLink : public Vcl::Actnlist::TActionLink
{
	typedef Vcl::Actnlist::TActionLink inherited;
	
protected:
	TControl* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsDropdownMenuLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsEnableDropdownLinked();
	virtual bool __fastcall IsHelpLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual bool __fastcall IsPopupMenuLinked();
	virtual bool __fastcall DoShowHint(System::UnicodeString &HintStr);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetDropdownMenu(Vcl::Menus::TPopupMenu* Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetEnableDropdown(bool Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	virtual void __fastcall SetHelpKeyword(const System::UnicodeString Value);
	virtual void __fastcall SetHelpType(System::Classes::THelpType Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetOnExecute(System::Classes::TNotifyEvent Value);
	virtual void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TControlActionLink(System::TObject* AClient) : Vcl::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TControlActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TControlActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TControlActionLinkClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM Vcl_Controls__21 : unsigned char { csLButtonDown, csClicked, csPalette, csReadingState, csAlignmentNeeded, csFocusing, csCreating, csPaintCopy, csCustomPaint, csDestroyingHandle, csDocking, csDesignerHide, csPanning, csRecreating, csAligning, csGlassPaint, csPrintClient };

typedef System::Set<Vcl_Controls__21, Vcl_Controls__21::csLButtonDown, Vcl_Controls__21::csPrintClient> TControlState;

enum DECLSPEC_DENUM Vcl_Controls__31 : unsigned char { csAcceptsControls, csCaptureMouse, csDesignInteractive, csClickEvents, csFramed, csSetCaption, csOpaque, csDoubleClicks, csFixedWidth, csFixedHeight, csNoDesignVisible, csReplicatable, csNoStdEvents, csDisplayDragImage, csReflector, csActionClient, csMenuEvents, csNeedsBorderPaint, csParentBackground, csPannable, csAlignWithMargins, csGestures, csPaintBlackOpaqueOnGlass, csOverrideStylePaint, csNeedsDesignDisabledState };

typedef System::Set<Vcl_Controls__31, Vcl_Controls__31::csAcceptsControls, Vcl_Controls__31::csNeedsDesignDisabledState> TControlStyle;

typedef System::UnicodeString TCaption;

typedef TMouseActivateRec *PMouseActivateRec;

struct DECLSPEC_DRECORD TMouseActivateRec
{
public:
	System::Types::TPoint MousePos;
	int HitTest;
	System::Uitypes::TMouseButton Button;
	System::Classes::TShiftState ShiftState;
	HWND TopLevel;
};


struct DECLSPEC_DRECORD TCMMouseActivate
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt Reserved;
	TMouseActivateRec *MouseActivateRec;
	NativeInt Result;
};


enum DECLSPEC_DENUM Vcl_Controls__41 : unsigned char { sfLeft, sfTop, sfWidth, sfHeight, sfFont, sfDesignSize };

typedef System::Set<Vcl_Controls__41, Vcl_Controls__41::sfLeft, Vcl_Controls__41::sfDesignSize> TScalingFlags;

typedef int TConstraintSize;

class PASCALIMPLEMENTATION TSizeConstraints : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TControl* FControl;
	TConstraintSize FMaxHeight;
	TConstraintSize FMaxWidth;
	TConstraintSize FMinHeight;
	TConstraintSize FMinWidth;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetConstraints(int Index, TConstraintSize Value);
	
protected:
	virtual void __fastcall Change();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	void __fastcall ScaleBy(int M, int D, bool AUpdate = false);
	__property TControl* Control = {read=FControl};
	
public:
	__fastcall virtual TSizeConstraints(TControl* Control);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property TConstraintSize MaxHeight = {read=FMaxHeight, write=SetConstraints, index=0, default=0};
	__property TConstraintSize MaxWidth = {read=FMaxWidth, write=SetConstraints, index=1, default=0};
	__property TConstraintSize MinHeight = {read=FMinHeight, write=SetConstraints, index=2, default=0};
	__property TConstraintSize MinWidth = {read=FMinWidth, write=SetConstraints, index=3, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TSizeConstraints() { }
	
};


typedef int TMarginSize;

class PASCALIMPLEMENTATION TMargins : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TControl* FControl;
	TMarginSize FLeft;
	TMarginSize FTop;
	TMarginSize FRight;
	TMarginSize FBottom;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetMargin(int Index, TMarginSize Value);
	
protected:
	virtual void __fastcall Change();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual int __fastcall GetControlBound(int Index);
	__classmethod virtual void __fastcall InitDefaults(TMargins* Margins);
	__property TControl* Control = {read=FControl};
	
public:
	__fastcall virtual TMargins(TControl* Control);
	void __fastcall SetControlBounds(int ALeft, int ATop, int AWidth, int AHeight, bool Aligning = false)/* overload */;
	void __fastcall SetControlBounds(const System::Types::TRect &ARect, bool Aligning = false)/* overload */;
	void __fastcall SetBounds(int ALeft, int ATop, int ARight, int ABottom);
	__property int ControlLeft = {read=GetControlBound, index=0, nodefault};
	__property int ControlTop = {read=GetControlBound, index=1, nodefault};
	__property int ControlWidth = {read=GetControlBound, index=2, nodefault};
	__property int ControlHeight = {read=GetControlBound, index=3, nodefault};
	__property int ExplicitLeft = {read=GetControlBound, index=4, nodefault};
	__property int ExplicitTop = {read=GetControlBound, index=5, nodefault};
	__property int ExplicitWidth = {read=GetControlBound, index=6, nodefault};
	__property int ExplicitHeight = {read=GetControlBound, index=7, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property TMarginSize Left = {read=FLeft, write=SetMargin, index=0, default=3};
	__property TMarginSize Top = {read=FTop, write=SetMargin, index=1, default=3};
	__property TMarginSize Right = {read=FRight, write=SetMargin, index=2, default=3};
	__property TMarginSize Bottom = {read=FBottom, write=SetMargin, index=3, default=3};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TMargins() { }
	
};


class PASCALIMPLEMENTATION TPadding : public TMargins
{
	typedef TMargins inherited;
	
protected:
	__classmethod virtual void __fastcall InitDefaults(TMargins* Margins);
	
__published:
	__property Left = {index=0, default=0};
	__property Top = {index=1, default=0};
	__property Right = {index=2, default=0};
	__property Bottom = {index=3, default=0};
public:
	/* TMargins.Create */ inline __fastcall virtual TPadding(TControl* Control) : TMargins(Control) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPadding() { }
	
};


typedef short TGestureID;

typedef TGestureEventInfo *PGestureEventInfo;

struct DECLSPEC_DRECORD TGestureEventInfo
{
public:
	TGestureID GestureID;
	System::Types::TPoint Location;
	TInteractiveGestureFlags Flags;
	double Angle;
	System::Types::TSmallPoint InertiaVector;
	
public:
	union
	{
		struct 
		{
			System::Types::TSmallPoint TapLocation;
		};
		struct 
		{
			int Distance;
		};
		
	};
};


struct DECLSPEC_DRECORD TCMGesture
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt Reserved;
	TGestureEventInfo *Info;
	NativeInt Result;
};


typedef void __fastcall (__closure *TGestureEvent)(System::TObject* Sender, const TGestureEventInfo &EventInfo, bool &Handled);

enum DECLSPEC_DENUM TStandardGesture : unsigned char { sgLeft = 1, sgRight, sgUp, sgDown, sgUpLeft, sgUpRight, sgDownLeft, sgDownRight, sgLeftUp, sgLeftDown, sgRightUp, sgRightDown, sgUpDown, sgDownUp, sgLeftRight, sgRightLeft, sgUpLeftLong, sgUpRightLong, sgDownLeftLong, sgDownRightLong, sgScratchout, sgTriangle, sgSquare, sgCheck, sgCurlicue, sgDoubleCurlicue, sgCircle, sgDoubleCircle, sgSemiCircleLeft, sgSemiCircleRight, sgChevronUp, sgChevronDown, sgChevronLeft, sgChevronRight };

typedef System::Set<TStandardGesture, TStandardGesture::sgLeft, TStandardGesture::sgChevronRight> TStandardGestures;

enum DECLSPEC_DENUM TTabletOption : unsigned char { toPressAndHold, toPenTapFeedback, toPenBarrelFeedback, toTouchUIForceOn, toTouchUIForceOff, toTouchSwitch, toFlicks, toSmoothScrolling, toFlickFallbackKeys };

typedef System::Set<TTabletOption, TTabletOption::toPressAndHold, TTabletOption::toFlickFallbackKeys> TTabletOptions;

enum DECLSPEC_DENUM TGestureType : unsigned char { gtStandard, gtRecorded, gtRegistered, gtNone };

typedef System::Set<TGestureType, TGestureType::gtStandard, TGestureType::gtNone> TGestureTypes;

enum DECLSPEC_DENUM TGestureOption : unsigned char { goUniDirectional, goSkew, goEndpoint, goRotate };

typedef System::Set<TGestureOption, TGestureOption::goUniDirectional, TGestureOption::goRotate> TGestureOptions;

typedef System::DynamicArray<TCustomGestureCollectionItem*> TGestureArray;

typedef System::DynamicArray<System::Types::TPoint> TGesturePointArray;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EGestureException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EGestureException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EGestureException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EGestureException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EGestureException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EGestureException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EGestureException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EGestureException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EGestureException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGestureException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EGestureException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGestureException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EGestureException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EGestureException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGestureCollectionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
protected:
	virtual System::Classes::TBasicAction* __fastcall GetAction() = 0 ;
	virtual int __fastcall GetDeviation() = 0 ;
	virtual int __fastcall GetErrorMargin() = 0 ;
	virtual TGestureID __fastcall GetGestureID() = 0 ;
	virtual TGestureType __fastcall GetGestureType() = 0 ;
	virtual TGestureOptions __fastcall GetOptions() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual TGesturePointArray __fastcall GetPoints() = 0 ;
	virtual void __fastcall SetAction(System::Classes::TBasicAction* const Value) = 0 ;
	virtual void __fastcall SetDeviation(const int Value) = 0 ;
	virtual void __fastcall SetErrorMargin(const int Value) = 0 ;
	virtual void __fastcall SetGestureID(const TGestureID Value) = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetOptions(const TGestureOptions Value) = 0 ;
	virtual void __fastcall SetPoints(const TGesturePointArray Value) = 0 ;
	
public:
	__property int Deviation = {read=GetDeviation, write=SetDeviation, default=20};
	__property int ErrorMargin = {read=GetErrorMargin, write=SetErrorMargin, default=20};
	__property TGestureID GestureID = {read=GetGestureID, write=SetGestureID, nodefault};
	__property TGestureType GestureType = {read=GetGestureType, nodefault};
	__property TGestureOptions Options = {read=GetOptions, write=SetOptions, default=9};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property TGesturePointArray Points = {read=GetPoints, write=SetPoints};
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TCustomGestureCollectionItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TCustomGestureCollectionItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGestureCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCustomGestureCollectionItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	virtual TCustomGestureManager* __fastcall GetGestureManager() = 0 ;
	HIDESBASE TCustomGestureCollectionItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCustomGestureCollectionItem* const Value);
	
public:
	virtual TCustomGestureCollectionItem* __fastcall AddGesture() = 0 ;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(TGestureID AGestureID) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(const System::UnicodeString AName) = 0 /* overload */;
	virtual TGestureID __fastcall GetUniqueGestureID() = 0 ;
	virtual void __fastcall RemoveGesture(TGestureID AGestureID) = 0 ;
	__property TCustomGestureManager* GestureManager = {read=GetGestureManager};
	__property TCustomGestureCollectionItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Create */ inline __fastcall TCustomGestureCollection(System::Classes::TCollectionItemClass ItemClass) : System::Classes::TCollection(ItemClass) { }
	/* TCollection.Destroy */ inline __fastcall virtual ~TCustomGestureCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomGestureManager : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	virtual TGestureArray __fastcall GetGestureList(TControl* AControl) = 0 ;
	virtual TStandardGestures __fastcall GetStandardGestures(TControl* AControl) = 0 ;
	virtual void __fastcall SetStandardGestures(TControl* AControl, const TStandardGestures &AStandardGestures) = 0 ;
	
public:
	virtual TGestureID __fastcall AddRecordedGesture(TCustomGestureCollectionItem* Item) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindCustomGesture(TGestureID AGestureID) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindCustomGesture(const System::UnicodeString AName) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(TControl* AControl, TGestureID AGestureID) = 0 /* overload */;
	virtual TCustomGestureCollectionItem* __fastcall FindGesture(TControl* AControl, const System::UnicodeString AName) = 0 /* overload */;
	virtual void __fastcall RegisterControl(TControl* AControl) = 0 ;
	virtual void __fastcall RemoveRecordedGesture(TGestureID AGestureID) = 0 /* overload */;
	virtual void __fastcall RemoveRecordedGesture(TCustomGestureCollectionItem* AGesture) = 0 /* overload */;
	virtual bool __fastcall SelectGesture(TControl* AControl, TGestureID AGestureID) = 0 /* overload */;
	virtual bool __fastcall SelectGesture(TControl* AControl, const System::UnicodeString AName) = 0 /* overload */;
	virtual void __fastcall UnregisterControl(TControl* AControl) = 0 ;
	virtual void __fastcall UnselectGesture(TControl* AControl, TGestureID AGestureID) = 0 ;
	__property TGestureArray GestureList[TControl* AControl] = {read=GetGestureList};
	__property TStandardGestures StandardGestures[TControl* AControl] = {read=GetStandardGestures, write=SetStandardGestures};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomGestureManager(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomGestureManager() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGestureEngine : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	enum DECLSPEC_DENUM TGestureEngineFlag : unsigned char { efMouseEvents, efTouchEvents };
	
	typedef System::Set<TGestureEngineFlag, TGestureEngineFlag::efMouseEvents, TGestureEngineFlag::efTouchEvents> TGestureEngineFlags;
	
	
protected:
	virtual bool __fastcall GetActive() = 0 ;
	virtual TGestureEngineFlags __fastcall GetFlags() = 0 ;
	virtual void __fastcall SetActive(const bool Value) = 0 ;
	
public:
	__fastcall virtual TCustomGestureEngine(TWinControl* AControl) = 0 ;
	virtual void __fastcall Notification(const Winapi::Messages::TMessage &Message) = 0 ;
	__classmethod virtual bool __fastcall Supported();
	__property bool Active = {read=GetActive, write=SetActive, nodefault};
	__property TGestureEngineFlags Flags = {read=GetFlags, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomGestureEngine() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TTouchProperty : unsigned char { tpInteractiveGestures, tpInteractiveGestureOptions, tpParentTabletOptions, tpTabletOptions };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomTouchManager : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TControl* FControl;
	TCustomGestureEngine* FGestureEngine;
	TCustomGestureManager* FGestureManager;
	TInteractiveGestures FInteractiveGestures;
	TInteractiveGestureOptions FInteractiveGestureOptions;
	System::Classes::TList* FNotifyList;
	bool FParentTabletOptions;
	TStandardGestures FStandardGestures;
	TTabletOptions FTabletOptions;
	TGestureArray __fastcall GetGestureList();
	TStandardGestures __fastcall GetStandardGestures();
	bool __fastcall IsInteractiveGestureOptionsStored();
	bool __fastcall IsInteractiveGesturesStored();
	bool __fastcall IsParentTabletOptionsStored();
	bool __fastcall IsTabletOptionsStored();
	void __fastcall SetGestureEngine(TCustomGestureEngine* const Value);
	void __fastcall SetGestureManager(TCustomGestureManager* const Value);
	void __fastcall SetStandardGestures(const TStandardGestures &Value);
	void __fastcall SetParentTabletOptions(const bool Value);
	void __fastcall SetTabletOptions(const TTabletOptions Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	bool __fastcall IsDefault();
	
public:
	__fastcall TCustomTouchManager(TControl* AControl);
	__fastcall virtual ~TCustomTouchManager();
	void __fastcall ChangeNotification(TControl* AControl);
	TCustomGestureCollectionItem* __fastcall FindGesture(TGestureID AGestureID)/* overload */;
	TCustomGestureCollectionItem* __fastcall FindGesture(const System::UnicodeString AName)/* overload */;
	void __fastcall RemoveChangeNotification(TControl* AControl);
	bool __fastcall SelectGesture(TGestureID AGestureID)/* overload */;
	bool __fastcall SelectGesture(const System::UnicodeString AName)/* overload */;
	void __fastcall UnselectGesture(TGestureID AGestureID);
	__property TCustomGestureEngine* GestureEngine = {read=FGestureEngine, write=SetGestureEngine};
	__property TGestureArray GestureList = {read=GetGestureList};
	__property TCustomGestureManager* GestureManager = {read=FGestureManager, write=SetGestureManager};
	__property TInteractiveGestures InteractiveGestures = {read=FInteractiveGestures, write=FInteractiveGestures, stored=IsInteractiveGesturesStored, nodefault};
	__property TInteractiveGestureOptions InteractiveGestureOptions = {read=FInteractiveGestureOptions, write=FInteractiveGestureOptions, stored=IsInteractiveGestureOptionsStored, nodefault};
	__property bool ParentTabletOptions = {read=FParentTabletOptions, write=SetParentTabletOptions, stored=IsParentTabletOptionsStored, nodefault};
	__property TStandardGestures StandardGestures = {read=GetStandardGestures, write=SetStandardGestures};
	__property TTabletOptions TabletOptions = {read=FTabletOptions, write=SetTabletOptions, stored=IsTabletOptionsStored, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTouchManager : public TCustomTouchManager
{
	typedef TCustomTouchManager inherited;
	
__published:
	__property GestureManager;
	__property InteractiveGestures;
	__property InteractiveGestureOptions;
	__property ParentTabletOptions;
	__property TabletOptions;
public:
	/* TCustomTouchManager.Create */ inline __fastcall TTouchManager(TControl* AControl) : TCustomTouchManager(AControl) { }
	/* TCustomTouchManager.Destroy */ inline __fastcall virtual ~TTouchManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM Vcl_Controls__52 : unsigned char { seFont, seClient, seBorder };

typedef System::Set<Vcl_Controls__52, Vcl_Controls__52::seFont, Vcl_Controls__52::seBorder> TStyleElements;

typedef void __fastcall (__closure *TMouseEvent)(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);

typedef void __fastcall (__closure *TMouseMoveEvent)(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);

typedef void __fastcall (__closure *TMouseActivateEvent)(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, int HitTest, System::Uitypes::TMouseActivate &MouseActivate);

typedef void __fastcall (__closure *TKeyEvent)(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);

typedef void __fastcall (__closure *TKeyPressEvent)(System::TObject* Sender, System::WideChar &Key);

typedef void __fastcall (__closure *TDragOverEvent)(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);

typedef void __fastcall (__closure *TDragDropEvent)(System::TObject* Sender, System::TObject* Source, int X, int Y);

typedef void __fastcall (__closure *TStartDragEvent)(System::TObject* Sender, TDragObject* &DragObject);

typedef void __fastcall (__closure *TEndDragEvent)(System::TObject* Sender, System::TObject* Target, int X, int Y);

typedef void __fastcall (__closure *TDockDropEvent)(System::TObject* Sender, TDragDockObject* Source, int X, int Y);

typedef void __fastcall (__closure *TDockOverEvent)(System::TObject* Sender, TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);

typedef void __fastcall (__closure *TUnDockEvent)(System::TObject* Sender, TControl* Client, TWinControl* NewTarget, bool &Allow);

typedef void __fastcall (__closure *TStartDockEvent)(System::TObject* Sender, TDragDockObject* &DragObject);

typedef void __fastcall (__closure *TGetSiteInfoEvent)(System::TObject* Sender, TControl* DockClient, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);

typedef void __fastcall (__closure *TCanResizeEvent)(System::TObject* Sender, int &NewWidth, int &NewHeight, bool &Resize);

typedef void __fastcall (__closure *TConstrainedResizeEvent)(System::TObject* Sender, int &MinWidth, int &MinHeight, int &MaxWidth, int &MaxHeight);

typedef void __fastcall (__closure *TMouseWheelEvent)(System::TObject* Sender, System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos, bool &Handled);

typedef void __fastcall (__closure *TMouseWheelUpDownEvent)(System::TObject* Sender, System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos, bool &Handled);

typedef void __fastcall (__closure *TContextPopupEvent)(System::TObject* Sender, const System::Types::TPoint &MousePos, bool &Handled);

typedef void * TReservedControlData;

enum DECLSPEC_DENUM TDockOrientation : unsigned char { doNoOrient, doHorizontal, doVertical };

enum DECLSPEC_DENUM TOriginalParentCalcType : unsigned char { ctWinApi, ctNative };

class PASCALIMPLEMENTATION TControl : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	static bool FRaiseOnNonMainThreadUsage;
	TWinControl* FParent;
	System::Classes::TWndMethod FWindowProc;
	int FLeft;
	int FTop;
	int FWidth;
	int FHeight;
	TControlStyle FControlStyle;
	TControlState FControlState;
	bool FDesktopFont;
	bool FVisible;
	bool FEnabled;
	bool FParentFont;
	bool FParentColor;
	TAlign FAlign;
	bool FAutoSize;
	System::Uitypes::TDragMode FDragMode;
	bool FIsControl;
	System::Classes::TBiDiMode FBiDiMode;
	bool FParentBiDiMode;
	System::Uitypes::TAnchors FAnchors;
	Vcl::Graphics::TFont* FFont;
	TControlActionLink* FActionLink;
	System::Uitypes::TColor FColor;
	TSizeConstraints* FConstraints;
	TMargins* FMargins;
	System::Uitypes::TCursor FCursor;
	System::Uitypes::TCursor FDragCursor;
	Vcl::Menus::TPopupMenu* FPopupMenu;
	System::UnicodeString FHint;
	int FFontHeight;
	TScalingFlags FScalingFlags;
	bool FShowHint;
	bool FParentShowHint;
	System::Uitypes::TDragKind FDragKind;
	TDockOrientation FDockOrientation;
	TWinControl* FHostDockSite;
	int FWheelAccumulator;
	int FUndockWidth;
	int FUndockHeight;
	int FLRDockWidth;
	int FTBDockHeight;
	TWinControlClass FFloatingDockSiteClass;
	TTouchManager* FTouchManager;
	TCanResizeEvent FOnCanResize;
	TConstrainedResizeEvent FOnConstrainedResize;
	TMouseEvent FOnMouseDown;
	TMouseMoveEvent FOnMouseMove;
	TMouseEvent FOnMouseUp;
	TDragDropEvent FOnDragDrop;
	TDragOverEvent FOnDragOver;
	System::Classes::TNotifyEvent FOnResize;
	TStartDockEvent FOnStartDock;
	TEndDragEvent FOnEndDock;
	TStartDragEvent FOnStartDrag;
	TEndDragEvent FOnEndDrag;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnDblClick;
	TContextPopupEvent FOnContextPopup;
	TMouseActivateEvent FOnMouseActivate;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	TMouseWheelEvent FOnMouseWheel;
	TMouseWheelUpDownEvent FOnMouseWheelDown;
	TMouseWheelUpDownEvent FOnMouseWheelUp;
	TGestureEvent FOnGesture;
	System::Classes::THelpType FHelpType;
	System::UnicodeString FHelpKeyword;
	System::Classes::THelpContext FHelpContext;
	TCustomHint* FCustomHint;
	bool FParentCustomHint;
	System::WideChar *FText;
	TStyleElements FStyleElements;
	System::UnicodeString FStyleName;
	TCustomHint* __fastcall GetCustomHint();
	void __fastcall CalcDockSizes();
	bool __fastcall CheckNewSize(int &NewWidth, int &NewHeight);
	TWinControl* __fastcall CreateFloatingDockSite(const System::Types::TRect &Bounds);
	void __fastcall DoActionChange(System::TObject* Sender);
	bool __fastcall DoCanAutoSize(int &NewWidth, int &NewHeight);
	bool __fastcall DoCanResize(int &NewWidth, int &NewHeight);
	void __fastcall DoConstraintsChange(System::TObject* Sender);
	void __fastcall DoConstrainedResize(int &NewWidth, int &NewHeight);
	void __fastcall DoDragMsg(TCMDrag &DragMsg);
	void __fastcall DoMouseActivate(TCMMouseActivate &Message);
	void __fastcall DoMouseDown(Winapi::Messages::TWMMouse &Message, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift);
	void __fastcall DoMouseUp(Winapi::Messages::TWMMouse &Message, System::Uitypes::TMouseButton Button);
	void __fastcall DoMarginChange(System::TObject* Sender);
	void __fastcall FontChanged(System::TObject* Sender);
	bool __fastcall GetAlignWithMargins();
	System::Types::TRect __fastcall GetBoundsRect();
	int __fastcall GetClientHeight();
	int __fastcall GetClientWidth();
	int __fastcall GetLRDockWidth();
	bool __fastcall GetMouseCapture();
	int __fastcall GetTBDockHeight();
	int __fastcall GetUndockWidth();
	int __fastcall GetUndockHeight();
	void __fastcall InvalidateControl(bool IsVisible, bool IsOpaque);
	bool __fastcall IsAnchorsStored();
	bool __fastcall IsBiDiModeStored();
	bool __fastcall IsCaptionStored();
	bool __fastcall IsColorStored();
	bool __fastcall IsEnabledStored();
	bool __fastcall IsFontStored();
	bool __fastcall IsHintStored();
	bool __fastcall IsHelpContextStored();
	bool __fastcall IsOnClickStored();
	bool __fastcall IsShowHintStored();
	bool __fastcall IsVisibleStored();
	void __fastcall ReadIsControl(System::Classes::TReader* Reader);
	void __fastcall ReadExplicitLeft(System::Classes::TReader* Reader);
	void __fastcall ReadExplicitTop(System::Classes::TReader* Reader);
	void __fastcall ReadExplicitWidth(System::Classes::TReader* Reader);
	void __fastcall ReadExplicitHeight(System::Classes::TReader* Reader);
	void __fastcall SetAlignWithMargins(bool Value);
	void __fastcall SetAnchors(System::Uitypes::TAnchors Value);
	void __fastcall SetAction(System::Classes::TBasicAction* Value);
	void __fastcall SetAlign(TAlign Value);
	void __fastcall SetBoundsRect(const System::Types::TRect &Rect);
	void __fastcall SetClientHeight(int Value);
	void __fastcall SetClientSize(const System::Types::TPoint &Value);
	void __fastcall SetClientWidth(int Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetCursor(System::Uitypes::TCursor Value);
	void __fastcall SetDesktopFont(bool Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetHelpContext(const System::Classes::THelpContext Value);
	void __fastcall SetHelpKeyword(const System::UnicodeString Value);
	void __fastcall SetHostDockSite(TWinControl* Value);
	void __fastcall SetLeft(int Value);
	void __fastcall SetMouseCapture(bool Value);
	void __fastcall SetParentColor(bool Value);
	void __fastcall SetParentFont(bool Value);
	void __fastcall SetShowHint(bool Value);
	void __fastcall SetParentShowHint(bool Value);
	void __fastcall SetParentCustomHint(bool Value);
	void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* Value);
	void __fastcall SetTop(int Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall SetWidth(int Value);
	void __fastcall SetZOrderPosition(int Position);
	void __fastcall UpdateAnchorRules();
	void __fastcall WriteIsControl(System::Classes::TWriter* Writer);
	void __fastcall WriteExplicitLeft(System::Classes::TWriter* Writer);
	void __fastcall WriteExplicitTop(System::Classes::TWriter* Writer);
	void __fastcall WriteExplicitWidth(System::Classes::TWriter* Writer);
	void __fastcall WriteExplicitHeight(System::Classes::TWriter* Writer);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMMButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMRButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMMButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMMButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TWMMouseWheel &Message);
	MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMMouseActivate(TCMMouseActivate &Message);
	MESSAGE void __fastcall CMParentFontChanged(TCMParentFontChanged &Message);
	MESSAGE void __fastcall CMSysFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMParentShowHintChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMHintShow(TCMHintShow &Message);
	MESSAGE void __fastcall CMHitTest(Winapi::Messages::TWMNCHitTest &Message);
	MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMParentBiDiModeChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMMouseWheel(TCMMouseWheel &Message);
	MESSAGE void __fastcall CMGesture(TCMGesture &Message);
	MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall CMParentTabletOptionsChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetConstraints(TSizeConstraints* const Value);
	void __fastcall SetMargins(TMargins* const Value);
	void __fastcall SetTouchManager(TTouchManager* const Value);
	TCaption __fastcall GetText();
	void __fastcall SetText(const TCaption Value);
	MESSAGE void __fastcall CMFloat(TCMFloat &Message);
	
protected:
	int FCurrentPPI;
	bool FIScaling;
	bool FAnchorMove;
	System::Types::TPoint FAnchorRules;
	System::Types::TPoint FAnchorOrigin;
	TOriginalParentCalcType FOriginalParentCalcType;
	System::Types::TPoint FOriginalParentSize;
	int FExplicitLeft;
	int FExplicitTop;
	int FExplicitWidth;
	int FExplicitHeight;
	void *FReserved;
	float FScaleFactor;
	virtual int __fastcall GetDesignDpi();
	virtual int __fastcall GetParentCurrentDpi();
	virtual int __fastcall GetCurrentPPI();
	virtual int __fastcall GetDPIForDesigner();
	virtual void __fastcall AsyncSchedule(System::Classes::TBaseAsyncResult* const AsyncResult);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC void __fastcall AdjustSize();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	DYNAMIC void __fastcall BeginAutoDrag();
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	void __fastcall Changed();
	DYNAMIC void __fastcall ChangeScale(int M, int D)/* overload */;
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC void __fastcall Click();
	virtual void __fastcall ConstrainedResize(int &MinWidth, int &MinHeight, int &MaxWidth, int &MaxHeight);
	System::Types::TPoint __fastcall CalcCursorPos();
	virtual void __fastcall CreateTouchManager();
	DYNAMIC void __fastcall DblClick();
	DYNAMIC void __fastcall DefaultDockImage(TDragDockObject* DragDockObject, bool Erase);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall DockTrackNoTarget(TDragDockObject* Source, int X, int Y);
	DYNAMIC void __fastcall DoContextPopup(const System::Types::TPoint &MousePos, bool &Handled);
	DYNAMIC void __fastcall DoEndDock(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoDock(TWinControl* NewDockSite, System::Types::TRect &ARect);
	DYNAMIC void __fastcall DoStartDock(TDragObject* &DragObject);
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall DragCanceled();
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoStartDrag(TDragObject* &DragObject);
	virtual void __fastcall DoGesture(const TGestureEventInfo &EventInfo, bool &Handled);
	virtual void __fastcall DoGetGestureOptions(TInteractiveGestures &Gestures, TInteractiveGestureOptions &Options);
	DYNAMIC void __fastcall DrawDragDockImage(TDragDockObject* DragDockObject);
	DYNAMIC void __fastcall EraseDragDockImage(TDragDockObject* DragDockObject);
	virtual System::Classes::TBasicAction* __fastcall GetAction();
	DYNAMIC TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual System::Types::TPoint __fastcall GetClientOrigin();
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual HDC __fastcall GetDeviceContext(HWND &WindowHandle)/* overload */;
	DYNAMIC TAlign __fastcall GetDockEdge(const System::Types::TPoint &MousePos);
	virtual bool __fastcall GetEnabled();
	virtual bool __fastcall GetFloating();
	virtual TWinControlClass __fastcall GetFloatingDockSiteClass();
	DYNAMIC HPALETTE __fastcall GetPalette();
	DYNAMIC Vcl::Menus::TPopupMenu* __fastcall GetPopupMenu();
	System::Uitypes::TDragMode __fastcall GetDragMode();
	DYNAMIC bool __fastcall IsTouchPropertyStored(TTouchProperty AProperty);
	virtual void __fastcall Loaded();
	DYNAMIC System::Uitypes::TMouseActivate __fastcall MouseActivate(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, int HitTest);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall PositionDockRect(TDragDockObject* DragDockObject);
	DYNAMIC bool __fastcall PaletteChanged(bool Foreground);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall RequestAlign();
	DYNAMIC void __fastcall Resize();
	void __fastcall ScaleConstraints(int M, int D);
	void __fastcall ScaleMargins(int M, int D);
	virtual TScalingFlags __fastcall DefaultScalingFlags();
	void __fastcall SendCancelMode(TControl* Sender);
	void __fastcall SendDockNotification(unsigned Msg, NativeUInt WParam, NativeUInt LParam);
	virtual void __fastcall SetAutoSize(bool Value);
	virtual void __fastcall SetDragMode(System::Uitypes::TDragMode Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	virtual void __fastcall SetParent(TWinControl* AParent);
	virtual void __fastcall SetParentBiDiMode(bool Value);
	virtual void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	virtual void __fastcall SetStyleElements(const TStyleElements Value);
	virtual void __fastcall SetStyleName(const System::UnicodeString Value);
	DYNAMIC void __fastcall SetZOrder(bool TopMost);
	void __fastcall SetCustomHint(TCustomHint* Value);
	void __fastcall UpdateExplicitBounds();
	void __fastcall UpdateBoundsRect(const System::Types::TRect &R);
	DYNAMIC void __fastcall VisibleChanging();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall UpdateStyleElements();
	DYNAMIC bool __fastcall DesignWndProc(Winapi::Messages::TMessage &Message);
	virtual TDragImageList* __fastcall GetDragImages();
	virtual HWND __fastcall GetAllocatedWindowHandle();
	__property TControlActionLink* ActionLink = {read=FActionLink, write=FActionLink};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=0};
	__property TCaption Caption = {read=GetText, write=SetText, stored=IsCaptionStored};
	__property bool DesktopFont = {read=FDesktopFont, write=SetDesktopFont, default=0};
	__property System::Uitypes::TDragKind DragKind = {read=FDragKind, write=FDragKind, default=0};
	__property System::Uitypes::TCursor DragCursor = {read=FDragCursor, write=FDragCursor, default=-12};
	__property System::Uitypes::TDragMode DragMode = {read=GetDragMode, write=SetDragMode, default=0};
	__property bool IsControl = {read=FIsControl, write=FIsControl, nodefault};
	__property bool MouseCapture = {read=GetMouseCapture, write=SetMouseCapture, nodefault};
	__property bool ParentBiDiMode = {read=FParentBiDiMode, write=SetParentBiDiMode, default=1};
	__property bool ParentColor = {read=FParentColor, write=SetParentColor, default=1};
	__property bool ParentFont = {read=FParentFont, write=SetParentFont, default=1};
	__property bool ParentShowHint = {read=FParentShowHint, write=SetParentShowHint, default=1};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
	__property TScalingFlags ScalingFlags = {read=FScalingFlags, write=FScalingFlags, nodefault};
	__property TCaption Text = {read=GetText, write=SetText};
	__property int WheelAccumulator = {read=FWheelAccumulator, write=FWheelAccumulator, nodefault};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, stored=IsColorStored, default=-16777211};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=IsFontStored};
	__property bool IScaling = {read=FIScaling, nodefault};
	__property System::WideChar * WindowText = {read=FText, write=FText};
	__property TCanResizeEvent OnCanResize = {read=FOnCanResize, write=FOnCanResize};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick, stored=IsOnClickStored};
	__property TConstrainedResizeEvent OnConstrainedResize = {read=FOnConstrainedResize, write=FOnConstrainedResize};
	__property TContextPopupEvent OnContextPopup = {read=FOnContextPopup, write=FOnContextPopup};
	__property System::Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property TDragDropEvent OnDragDrop = {read=FOnDragDrop, write=FOnDragDrop};
	__property TDragOverEvent OnDragOver = {read=FOnDragOver, write=FOnDragOver};
	__property TEndDragEvent OnEndDock = {read=FOnEndDock, write=FOnEndDock};
	__property TEndDragEvent OnEndDrag = {read=FOnEndDrag, write=FOnEndDrag};
	__property TMouseActivateEvent OnMouseActivate = {read=FOnMouseActivate, write=FOnMouseActivate};
	__property TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property TMouseWheelEvent OnMouseWheel = {read=FOnMouseWheel, write=FOnMouseWheel};
	__property TMouseWheelUpDownEvent OnMouseWheelDown = {read=FOnMouseWheelDown, write=FOnMouseWheelDown};
	__property TMouseWheelUpDownEvent OnMouseWheelUp = {read=FOnMouseWheelUp, write=FOnMouseWheelUp};
	__property System::Classes::TNotifyEvent OnResize = {read=FOnResize, write=FOnResize};
	__property TStartDockEvent OnStartDock = {read=FOnStartDock, write=FOnStartDock};
	__property TStartDragEvent OnStartDrag = {read=FOnStartDrag, write=FOnStartDrag};
	
public:
	__fastcall virtual TControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TControl();
	void __fastcall CheckNonMainThreadUsage();
	virtual bool __fastcall IsCustomStyleActive();
	virtual bool __fastcall IsLightStyleColor(System::Uitypes::TColor AColor);
	virtual void __fastcall ScaleForPPI(int NewPPI);
	void __fastcall BeginDrag(bool Immediate, int Threshold = 0xffffffff);
	void __fastcall BringToFront();
	System::Types::TPoint __fastcall ClientToScreen(const System::Types::TPoint &Point)/* overload */;
	System::Types::TRect __fastcall ClientToScreen(const System::Types::TRect &Rect)/* overload */;
	System::Types::TPoint __fastcall ClientToParent(const System::Types::TPoint &Point, TWinControl* AParent = (TWinControl*)(0x0));
	DYNAMIC void __fastcall Dock(TWinControl* NewDockSite, const System::Types::TRect &ARect);
	bool __fastcall Dragging();
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	int __fastcall DrawTextBiDiModeFlags(int Flags);
	int __fastcall DrawTextBiDiModeFlagsReadingOnly();
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, stored=IsEnabledStored, default=1};
	void __fastcall EndDrag(bool Drop);
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment();
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	void __fastcall Hide();
	virtual void __fastcall InitiateAction();
	virtual void __fastcall Invalidate();
	DYNAMIC void __fastcall MouseWheelHandler(Winapi::Messages::TMessage &Message);
	bool __fastcall IsRightToLeft();
	bool __fastcall ManualDock(TWinControl* NewDockSite, TControl* DropControl = (TControl*)(0x0), TAlign ControlSide = (TAlign)(0x0));
	bool __fastcall ManualFloat(const System::Types::TRect &ScreenPos);
	NativeInt __fastcall Perform(unsigned Msg, NativeUInt WParam, NativeInt LParam)/* overload */;
	void __fastcall Refresh();
	virtual void __fastcall Repaint();
	bool __fastcall ReplaceDockedControl(TControl* Control, TWinControl* NewDockSite, TControl* DropControl, TAlign ControlSide);
	System::Types::TPoint __fastcall ScreenToClient(const System::Types::TPoint &Point)/* overload */;
	System::Types::TRect __fastcall ScreenToClient(const System::Types::TRect &Rect)/* overload */;
	System::Types::TPoint __fastcall ParentToClient(const System::Types::TPoint &Point, TWinControl* AParent = (TWinControl*)(0x0));
	void __fastcall SendToBack();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	DYNAMIC void __fastcall SetDesignVisible(bool Value);
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	void __fastcall Show();
	virtual void __fastcall Update();
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	bool __fastcall UseRightToLeftReading();
	bool __fastcall UseRightToLeftScrollBar();
	virtual void __fastcall DefaultHandler(void *Message);
	int __fastcall GetTextBuf(System::WideChar * Buffer, int BufSize);
	int __fastcall GetTextLen();
	NativeInt __fastcall Perform(unsigned Msg, NativeUInt WParam, System::WideChar * LParam)/* overload */;
	NativeInt __fastcall Perform(unsigned Msg, NativeUInt WParam, System::Types::TRect &LParam)/* overload */;
	void __fastcall SetTextBuf(System::WideChar * Buffer);
	virtual int __fastcall GetSystemMetrics(int nIndex);
	virtual System::UnicodeString __fastcall GetStyleName();
	int __fastcall ScaleValue(const int Value)/* overload */;
	double __fastcall ScaleValue(const double Value)/* overload */;
	System::Types::TPoint __fastcall ScaleValue(const System::Types::TPoint &Value)/* overload */;
	System::Types::TRect __fastcall ScaleValue(const System::Types::TRect &Value)/* overload */;
	System::Types::TSize __fastcall ScaleValue(const System::Types::TSize &Value)/* overload */;
	System::Types::TRect __fastcall ScaleRectSize(const System::Types::TRect &Value);
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property TAlign Align = {read=FAlign, write=SetAlign, default=0};
	__property System::Uitypes::TAnchors Anchors = {read=FAnchors, write=SetAnchors, stored=IsAnchorsStored, default=3};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, write=SetBiDiMode, stored=IsBiDiModeStored, nodefault};
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect, write=SetBoundsRect};
	__property int ClientHeight = {read=GetClientHeight, write=SetClientHeight, stored=false, nodefault};
	__property System::Types::TPoint ClientOrigin = {read=GetClientOrigin};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property int ClientWidth = {read=GetClientWidth, write=SetClientWidth, stored=false, nodefault};
	__property TSizeConstraints* Constraints = {read=FConstraints, write=SetConstraints};
	__property TControlState ControlState = {read=FControlState, write=FControlState, nodefault};
	__property TControlStyle ControlStyle = {read=FControlStyle, write=FControlStyle, nodefault};
	__property int CurrentPPI = {read=GetCurrentPPI, nodefault};
	__property TDockOrientation DockOrientation = {read=FDockOrientation, write=FDockOrientation, nodefault};
	__property int ExplicitLeft = {read=FExplicitLeft, nodefault};
	__property int ExplicitTop = {read=FExplicitTop, nodefault};
	__property int ExplicitWidth = {read=FExplicitWidth, nodefault};
	__property int ExplicitHeight = {read=FExplicitHeight, nodefault};
	__property bool Floating = {read=GetFloating, nodefault};
	__property TWinControlClass FloatingDockSiteClass = {read=GetFloatingDockSiteClass, write=FFloatingDockSiteClass};
	__property TWinControl* HostDockSite = {read=FHostDockSite, write=SetHostDockSite};
	__property int LRDockWidth = {read=GetLRDockWidth, write=FLRDockWidth, nodefault};
	__property float ScaleFactor = {read=FScaleFactor};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, stored=IsShowHintStored, nodefault};
	__property int TBDockHeight = {read=GetTBDockHeight, write=FTBDockHeight, nodefault};
	__property TTouchManager* Touch = {read=FTouchManager, write=SetTouchManager};
	__property int UndockHeight = {read=GetUndockHeight, write=FUndockHeight, nodefault};
	__property int UndockWidth = {read=GetUndockWidth, write=FUndockWidth, nodefault};
	__property bool Visible = {read=FVisible, write=SetVisible, stored=IsVisibleStored, default=1};
	__property System::Classes::TWndMethod WindowProc = {read=FWindowProc, write=FWindowProc};
	__property TWinControl* Parent = {read=FParent, write=SetParent};
	__property TStyleElements StyleElements = {read=FStyleElements, write=SetStyleElements, default=7};
	__property System::UnicodeString StyleName = {read=FStyleName, write=SetStyleName};
	__property TGestureEvent OnGesture = {read=FOnGesture, write=FOnGesture};
	/* static */ __property bool RaiseOnNonMainThreadUsage = {read=FRaiseOnNonMainThreadUsage, write=FRaiseOnNonMainThreadUsage, default=0};
	
__published:
	__property bool AlignWithMargins = {read=GetAlignWithMargins, write=SetAlignWithMargins, default=0};
	__property int Left = {read=FLeft, write=SetLeft, nodefault};
	__property int Top = {read=FTop, write=SetTop, nodefault};
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
	__property int Height = {read=FHeight, write=SetHeight, nodefault};
	__property System::Uitypes::TCursor Cursor = {read=FCursor, write=SetCursor, default=0};
	__property System::UnicodeString Hint = {read=FHint, write=FHint, stored=IsHintStored};
	__property System::Classes::THelpType HelpType = {read=FHelpType, write=FHelpType, default=1};
	__property System::UnicodeString HelpKeyword = {read=FHelpKeyword, write=SetHelpKeyword, stored=IsHelpContextStored};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=SetHelpContext, stored=IsHelpContextStored, default=0};
	__property TMargins* Margins = {read=FMargins, write=SetMargins};
	__property TCustomHint* CustomHint = {read=GetCustomHint, write=SetCustomHint};
	__property bool ParentCustomHint = {read=FParentCustomHint, write=SetParentCustomHint, default=1};
};


#ifndef _WIN64
typedef System::TMetaClass* TControlClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TControlClass);
#endif /* _WIN64 */

struct DECLSPEC_DRECORD TCreateParams
{
public:
	System::WideChar *Caption;
	unsigned Style;
	unsigned ExStyle;
	int X;
	int Y;
	int Width;
	int Height;
	HWND WndParent;
	void *Param;
	tagWNDCLASSW WindowClass;
	System::StaticArray<System::WideChar, 256> WinClassName;
};


class PASCALIMPLEMENTATION TWinControlActionLink : public TControlActionLink
{
	typedef TControlActionLink inherited;
	
protected:
	TWinControl* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsHelpContextLinked();
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TWinControlActionLink(System::TObject* AClient) : TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TWinControlActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TWinControlActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TWinControlActionLinkClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TImeMode : unsigned char { imDisable, imClose, imOpen, imDontCare, imSAlpha, imAlpha, imHira, imSKata, imKata, imChinese, imSHanguel, imHanguel };

typedef System::UnicodeString TImeName;

enum DECLSPEC_DENUM TTipMode : unsigned char { tipClose, tipOpen, tipDontCare };

struct DECLSPEC_DRECORD TAlignInfo
{
public:
	System::Classes::TList* AlignList;
	int ControlIndex;
	TAlign Align;
	int Scratch;
};


typedef int TBorderWidth;

enum DECLSPEC_DENUM TBevelCut : unsigned char { bvNone, bvLowered, bvRaised, bvSpace };

enum DECLSPEC_DENUM TBevelEdge : unsigned char { beLeft, beTop, beRight, beBottom };

typedef System::Set<TBevelEdge, TBevelEdge::beLeft, TBevelEdge::beBottom> TBevelEdges;

enum DECLSPEC_DENUM TBevelKind : unsigned char { bkNone, bkTile, bkSoft, bkFlat };

typedef int TBevelWidth;

__interface  INTERFACE_UUID("{8619FD79-C281-11D1-AA60-00C04FA370E8}") IDockManager  : public System::IInterface 
{
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
	virtual void __fastcall GetControlBounds(TControl* Control, /* out */ System::Types::TRect &CtlBounds) = 0 ;
	virtual void __fastcall InsertControl(TControl* Control, TAlign InsertAt, TControl* DropCtl) = 0 ;
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall PaintSite(HDC DC) = 0 ;
	virtual void __fastcall PositionDockRect(TControl* Client, TControl* DropCtl, TAlign DropAlign, System::Types::TRect &DockRect) = 0 ;
	virtual void __fastcall RemoveControl(TControl* Control) = 0 ;
	virtual void __fastcall ResetBounds(bool Force) = 0 ;
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall SetReplacingControl(TControl* Control) = 0 ;
};

typedef bool __fastcall (__closure *TAlignInsertBeforeEvent)(TWinControl* Sender, TControl* C1, TControl* C2);

typedef void __fastcall (__closure *TAlignPositionEvent)(TWinControl* Sender, TControl* Control, int &NewLeft, int &NewTop, int &NewWidth, int &NewHeight, System::Types::TRect &AlignRect, const TAlignInfo &AlignInfo);

class PASCALIMPLEMENTATION TWinControl : public TControl
{
	typedef TControl inherited;
	
private:
	static unsigned RM_AsyncMessage;
	System::Classes::TList* FAlignControlList;
	System::Word FAlignLevel;
	TBevelEdges FBevelEdges;
	TBevelCut FBevelInner;
	TBevelCut FBevelOuter;
	TBevelKind FBevelKind;
	TBevelWidth FBevelWidth;
	TBorderWidth FBorderWidth;
	TPadding* FPadding;
	Vcl::Graphics::TBrush* FBrush;
	System::Classes::TList* FDockClients;
	_di_IDockManager FDockManager;
	TImeMode FImeMode;
	TImeName FImeName;
	HWND FParentWindow;
	System::Classes::TList* FTabList;
	TTipMode FTipMode;
	System::Classes::TList* FControls;
	System::Classes::TList* FWinControls;
	int FTabOrder;
	bool FTabStop;
	System::_di_IInterface FTIPIntf;
	bool FCtl3D;
	bool FShowing;
	bool FUseDockManager;
	bool FDockSite;
	bool FParentCtl3D;
	bool FParentDoubleBuffered;
	bool FPerformingShowingChanged;
	TDockDropEvent FOnDockDrop;
	TDockOverEvent FOnDockOver;
	System::Classes::TNotifyEvent FOnEnter;
	System::Classes::TNotifyEvent FOnExit;
	TGetSiteInfoEvent FOnGetSiteInfo;
	TKeyEvent FOnKeyDown;
	TKeyPressEvent FOnKeyPress;
	TKeyEvent FOnKeyUp;
	TUnDockEvent FOnUnDock;
	TAlignInsertBeforeEvent FOnAlignInsertBefore;
	TAlignPositionEvent FOnAlignPosition;
	bool FMouseInClient;
	TControl* FMouseControl;
	TControl* FTouchControl;
	void *FDefWndProc;
	HWND FHandle;
	void *FObjectInstance;
	unsigned FDrawLockCount;
	void __fastcall AlignControl(TControl* AControl);
	void __fastcall CalcConstraints(int &MinWidth, int &MinHeight, int &MaxWidth, int &MaxHeight);
	void __fastcall DoPaddingChange(System::TObject* Sender);
	bool __fastcall GetAlignDisabled();
	TControl* __fastcall GetControl(int Index);
	int __fastcall GetControlCount();
	int __fastcall GetDockClientCount();
	TControl* __fastcall GetDockClients(int Index);
	HWND __fastcall GetHandle();
	bool __fastcall GetParentBackground();
	System::Uitypes::TTabOrder __fastcall GetTabOrder();
	int __fastcall GetVisibleDockClientCount();
	HIDESBASE void __fastcall Insert(TControl* AControl);
	void __fastcall InvalidateFrame();
	void __fastcall InvokeHelp();
	bool __fastcall IsCtl3DStored();
	bool __fastcall IsDoubleBufferedStored();
	HWND __fastcall PrecedingWindow(TWinControl* Control);
	void __fastcall ReadDesignSize(System::Classes::TReader* Reader);
	void __fastcall ReadPixelsPerInch(System::Classes::TReader* Reader);
	HIDESBASE void __fastcall Remove(TControl* AControl);
	void __fastcall RemoveFocus(bool Removing);
	void __fastcall SetBevelCut(int Index, const TBevelCut Value);
	void __fastcall SetBevelEdges(const TBevelEdges Value);
	void __fastcall SetBevelKind(const TBevelKind Value);
	void __fastcall SetBevelWidth(const TBevelWidth Value);
	void __fastcall SetBorderWidth(TBorderWidth Value);
	void __fastcall SetCtl3D(bool Value);
	void __fastcall SetDockSite(bool Value);
	void __fastcall SetDoubleBuffered(bool Value);
	void __fastcall SetPadding(TPadding* const Value);
	void __fastcall SetParentCtl3D(bool Value);
	void __fastcall SetParentWindow(HWND Value);
	void __fastcall SetTabOrder(System::Uitypes::TTabOrder Value);
	void __fastcall SetTabStop(bool Value);
	void __fastcall SetUseDockManager(bool Value);
	HIDESBASE void __fastcall SetZOrderPosition(int Position);
	void __fastcall UpdateTabOrder(System::Uitypes::TTabOrder Value);
	void __fastcall UpdateShowing();
	void __fastcall WriteDesignSize(System::Classes::TWriter* Writer);
	void __fastcall WritePixelsPerInch(System::Classes::TWriter* Writer);
	bool __fastcall IsMenuKey(Winapi::Messages::TWMKey &Message);
	bool __fastcall GetIsDrawingLocked();
	bool __fastcall GetRedrawDisabled();
	MESSAGE void __fastcall WMInputLangChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMInputLangChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	MESSAGE void __fastcall WMSysColorChange(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall WMCompareItem(Winapi::Messages::TWMCompareItem &Message);
	MESSAGE void __fastcall WMDeleteItem(Winapi::Messages::TWMDeleteItem &Message);
	MESSAGE void __fastcall WMDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall WMMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMMove(Winapi::Messages::TWMMove &Message);
	MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMSysKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMSysKeyUp(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMSysCommand(Winapi::Messages::TWMSysCommand &Message);
	MESSAGE void __fastcall WMCharToItem(Winapi::Messages::TWMCharToItem &Message);
	MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TWMParentNotify &Message);
	MESSAGE void __fastcall WMVKeyToItem(Winapi::Messages::TWMCharToItem &Message);
	MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	MESSAGE void __fastcall WMNCDestroy(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	MESSAGE void __fastcall WMQueryNewPalette(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaletteChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMWinIniChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMFontChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMTimeChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMIMEStartComp(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMIMEEndComp(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall WMGesture(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMGestureNotify(Winapi::Messages::TWMGestureNotify &Message);
	MESSAGE void __fastcall WMTabletQuerySystemGestureStatus(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMChanged(TCMChanged &Message);
	MESSAGE void __fastcall CMChildKey(TCMChildKey &Message);
	MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMBorderChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMCursorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMParentCtl3DChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMParentDoubleBufferedChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMShowHintChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMSysFontsAllChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMWinIniChange(Winapi::Messages::TWMWinIniChange &Message);
	MESSAGE void __fastcall CMFontChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTimeChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDrag(TCMDrag &Message);
	MESSAGE void __fastcall CMRemoteSessionStatusChanged(TCMRemoteSessionStatusChanged &Message);
	MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNKeyUp(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNSysKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNSysChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMRecreateWnd(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMSysCommand(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMInvalidate(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDoubleBufferedChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPrintClient(Winapi::Messages::TWMPrint &Message);
	MESSAGE void __fastcall CMTabletOptionsChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMFocusChanged(TCMFocusChanged &Message);
	MESSAGE void __fastcall CMControlListChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMControlListChanging(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDockClient(TCMDockClient &Message);
	MESSAGE void __fastcall CMUnDockClient(TCMUnDockClient &Message);
	HIDESBASE MESSAGE void __fastcall CMFloat(TCMFloat &Message);
	
protected:
	int FPixelsPerInch;
	bool FDoubleBuffered;
	bool FDoubleBufferedSaved;
	bool FInImeComposition;
	System::Types::TPoint FDesignSize;
	System::Classes::TList* FAsyncList;
	void __fastcall InvokeAsyncCalls();
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall AsyncSchedule(System::Classes::TBaseAsyncResult* const AsyncResult);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	void __fastcall AddBiDiModeExStyle(unsigned &ExStyle);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	DYNAMIC void __fastcall AdjustSize();
	virtual void __fastcall AlignControls(TControl* AControl, System::Types::TRect &Rect);
	void __fastcall ArrangeControl(TControl* AControl, const System::Types::TPoint &ParentSize, TAlign AAlign, const TAlignInfo &AAlignInfo, System::Types::TRect &Rect, bool UpdateAnchorOrigin = false);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall ConstrainedResize(int &MinWidth, int &MinHeight, int &MaxWidth, int &MaxHeight);
	DYNAMIC void __fastcall ControlsAligned();
	DYNAMIC _di_IDockManager __fastcall CreateDockManager();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(TCreateParams &Params);
	virtual void __fastcall CreateWindowHandle(const TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual bool __fastcall CustomAlignInsertBefore(TControl* C1, TControl* C2);
	virtual void __fastcall CustomAlignPosition(TControl* Control, int &NewLeft, int &NewTop, int &NewWidth, int &NewHeight, System::Types::TRect &AlignRect, const TAlignInfo &AlignInfo);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DestroyHandle();
	virtual void __fastcall DestroyWindowHandle();
	virtual void __fastcall DestroyWnd();
	DYNAMIC void __fastcall DoAddDockClient(TControl* Client, const System::Types::TRect &ARect);
	DYNAMIC void __fastcall DockOver(TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual bool __fastcall DockReplaceDockClient(TControl* Client, TWinControl* NewDockSite, TControl* DropControl, TAlign ControlSide, TControl* ReplacementClient);
	DYNAMIC void __fastcall DoDockOver(TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall DoFlipChildren();
	virtual bool __fastcall DoWritePixelsPerInch(System::Classes::TFiler* Filer);
	bool __fastcall DoKeyDown(Winapi::Messages::TWMKey &Message);
	bool __fastcall DoKeyPress(Winapi::Messages::TWMKey &Message);
	bool __fastcall DoKeyUp(Winapi::Messages::TWMKey &Message);
	DYNAMIC bool __fastcall DoHandleStyleMessage(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall DoRemoveDockClient(TControl* Client);
	DYNAMIC bool __fastcall DoUnDock(TWinControl* NewTarget, TControl* Client);
	TWinControl* __fastcall FindNextControl(TWinControl* CurControl, bool GoForward, bool CheckTabStop, bool CheckParent);
	void __fastcall FixupTabList();
	DYNAMIC TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual System::Types::TPoint __fastcall GetClientOrigin();
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual int __fastcall GetDPIForDesigner();
	virtual System::Types::TRect __fastcall GetControlExtents();
	virtual HDC __fastcall GetDeviceContext(HWND &WindowHandle)/* overload */;
	HWND __fastcall GetParentHandle();
	DYNAMIC void __fastcall GetSiteInfo(TControl* Client, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	HWND __fastcall GetTopParentHandle();
	void __fastcall InvalidateDockHostSite(bool FocusLost);
	bool __fastcall IsControlMouseMsg(Winapi::Messages::TWMMouse &Message);
	bool __fastcall IsControlActivateMsg(Winapi::Messages::TWMMouseActivate &Message, TControl* Control = (TControl*)(0x0));
	DYNAMIC bool __fastcall IsQualifyingSite(TControl* const Client);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	void __fastcall MainWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall NotifyControls(System::Word Msg);
	void __fastcall PaintControls(HDC DC, TControl* First);
	void __fastcall PaintHandler(Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall PaintWindow(HDC DC);
	DYNAMIC bool __fastcall PaletteChanged(bool Foreground);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	void __fastcall RecreateWnd();
	DYNAMIC void __fastcall ReloadDockedControl(const System::UnicodeString AControlName, TControl* &AControl);
	void __fastcall ResetIme()/* overload */;
	virtual void __fastcall ResetIme(HWND hWnd)/* overload */;
	bool __fastcall ResetImeComposition(unsigned Action);
	virtual void __fastcall RequestAlign();
	virtual void __fastcall ScaleControlsForDpi(int NewPPI);
	int __fastcall GetCurrentPPIScreen(TWinControl* const AControl = (TWinControl*)(0x0));
	virtual int __fastcall GetPixelsPerInch();
	virtual void __fastcall SetPixelsPerInch(int Value);
	void __fastcall ScaleControls(int M, int D);
	void __fastcall ScalePadding(int M, int D);
	void __fastcall SelectFirst();
	void __fastcall SelectNext(TWinControl* CurControl, bool GoForward, bool CheckTabStop);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	void __fastcall SetIme()/* overload */;
	virtual void __fastcall SetIme(HWND hWnd)/* overload */;
	bool __fastcall SetImeCompositionWindow(Vcl::Graphics::TFont* Font, int XPos, int YPos);
	virtual void __fastcall SetParent(TWinControl* AParent);
	virtual void __fastcall SetParentBackground(bool Value);
	virtual void __fastcall SetParentDoubleBuffered(bool Value);
	DYNAMIC void __fastcall SetZOrder(bool TopMost);
	virtual void __fastcall ShowControl(TControl* AControl);
	void __fastcall UpdateBounds();
	virtual void __fastcall UpdateControlOriginalParentSize(TControl* AControl, System::Types::TPoint &AOriginalParentSize);
	void __fastcall UpdateRecreatingFlag(bool Recreating);
	virtual void __fastcall UpdateTIPStatus();
	void __fastcall UpdateUIState(System::Word CharCode);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall CreateSubClass(TCreateParams &Params, System::WideChar * ControlClassName);
	void __fastcall RemoveWindowProps();
	virtual HWND __fastcall GetAllocatedWindowHandle();
	__property System::Classes::TList* AlignControlList = {read=FAlignControlList};
	__property TBevelEdges BevelEdges = {read=FBevelEdges, write=SetBevelEdges, default=15};
	__property TBevelCut BevelInner = {read=FBevelInner, write=SetBevelCut, index=0, default=2};
	__property TBevelCut BevelOuter = {read=FBevelOuter, write=SetBevelCut, index=1, default=1};
	__property TBevelKind BevelKind = {read=FBevelKind, write=SetBevelKind, default=0};
	__property TBevelWidth BevelWidth = {read=FBevelWidth, write=SetBevelWidth, default=1};
	__property TBorderWidth BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=0};
	__property bool Ctl3D = {read=FCtl3D, write=SetCtl3D, stored=IsCtl3DStored, nodefault};
	__property TImeMode ImeMode = {read=FImeMode, write=FImeMode, default=3};
	__property TImeName ImeName = {read=FImeName, write=FImeName};
	__property bool ParentBackground = {read=GetParentBackground, write=SetParentBackground, nodefault};
	__property bool ParentCtl3D = {read=FParentCtl3D, write=SetParentCtl3D, default=1};
	__property TTipMode TipMode = {read=FTipMode, write=FTipMode, default=2};
	__property void * DefWndProc = {read=FDefWndProc, write=FDefWndProc};
#ifndef _WIN64
	__property HWND WindowHandle = {read=FHandle, write=FHandle, nodefault};
#else /* _WIN64 */
	__property HWND WindowHandle = {read=FHandle, write=FHandle};
#endif /* _WIN64 */
	__property TAlignInsertBeforeEvent OnAlignInsertBefore = {read=FOnAlignInsertBefore, write=FOnAlignInsertBefore};
	__property TAlignPositionEvent OnAlignPosition = {read=FOnAlignPosition, write=FOnAlignPosition};
	__property TDockDropEvent OnDockDrop = {read=FOnDockDrop, write=FOnDockDrop};
	__property TDockOverEvent OnDockOver = {read=FOnDockOver, write=FOnDockOver};
	__property System::Classes::TNotifyEvent OnEnter = {read=FOnEnter, write=FOnEnter};
	__property System::Classes::TNotifyEvent OnExit = {read=FOnExit, write=FOnExit};
	__property TGetSiteInfoEvent OnGetSiteInfo = {read=FOnGetSiteInfo, write=FOnGetSiteInfo};
	__property TKeyEvent OnKeyDown = {read=FOnKeyDown, write=FOnKeyDown};
	__property TKeyPressEvent OnKeyPress = {read=FOnKeyPress, write=FOnKeyPress};
	__property TKeyEvent OnKeyUp = {read=FOnKeyUp, write=FOnKeyUp};
	__property TUnDockEvent OnUnDock = {read=FOnUnDock, write=FOnUnDock};
	
public:
	__fastcall virtual TWinControl(System::Classes::TComponent* AOwner);
	__fastcall TWinControl(HWND ParentWindow);
	__classmethod TWinControl* __fastcall CreateParentedControl(HWND ParentWindow);
	__fastcall virtual ~TWinControl();
	virtual void __fastcall ScaleForPPI(int NewPPI);
	void __fastcall Broadcast(void *Message);
	DYNAMIC bool __fastcall CanFocus();
	bool __fastcall ContainsControl(TControl* Control);
	TControl* __fastcall ControlAtPos(const System::Types::TPoint &Pos, bool AllowDisabled, bool AllowWinControls = false, bool AllLevels = false);
	virtual void __fastcall DefaultHandler(void *Message);
	void __fastcall DisableAlign();
	__property int DockClientCount = {read=GetDockClientCount, nodefault};
	__property TControl* DockClients[int Index] = {read=GetDockClients};
	DYNAMIC void __fastcall DockDrop(TDragDockObject* Source, int X, int Y);
	__property bool DockSite = {read=FDockSite, write=SetDockSite, default=0};
	__property _di_IDockManager DockManager = {read=FDockManager, write=FDockManager};
	__property bool DoubleBuffered = {read=FDoubleBuffered, write=SetDoubleBuffered, stored=IsDoubleBufferedStored, nodefault};
	void __fastcall EnableAlign();
	TControl* __fastcall FindChildControl(const System::UnicodeString ControlName);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	DYNAMIC bool __fastcall Focused();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	DYNAMIC void __fastcall GetTabControlList(System::Classes::TList* List);
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	bool __fastcall HandleAllocated();
	void __fastcall HandleNeeded();
	void __fastcall InsertControl(TControl* AControl);
	virtual void __fastcall Invalidate();
	void __fastcall PaintTo(HDC DC, int X, int Y)/* overload */;
	void __fastcall PaintTo(Vcl::Graphics::TCanvas* Canvas, int X, int Y)/* overload */;
	__property int PixelsPerInch = {read=GetPixelsPerInch, write=SetPixelsPerInch, stored=false, nodefault};
	DYNAMIC bool __fastcall PreProcessMessage(tagMSG &Msg);
	void __fastcall RemoveControl(TControl* AControl);
	void __fastcall Realign();
	virtual void __fastcall Repaint();
	void __fastcall ScaleBy(int M, int D);
	void __fastcall ScrollBy(int DeltaX, int DeltaY);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	DYNAMIC void __fastcall SetDesignVisible(bool Value);
	virtual void __fastcall SetFocus();
	virtual void __fastcall Update();
	void __fastcall UpdateControlState();
	void __fastcall LockDrawing();
	void __fastcall UnlockDrawing();
	__property bool AlignDisabled = {read=GetAlignDisabled, nodefault};
	__property bool MouseInClient = {read=FMouseInClient, nodefault};
	__property int VisibleDockClientCount = {read=GetVisibleDockClientCount, nodefault};
	__property Vcl::Graphics::TBrush* Brush = {read=FBrush};
	__property TControl* Controls[int Index] = {read=GetControl};
	__property int ControlCount = {read=GetControlCount, nodefault};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property TPadding* Padding = {read=FPadding, write=SetPadding};
	__property bool ParentDoubleBuffered = {read=FParentDoubleBuffered, write=SetParentDoubleBuffered, default=1};
#ifndef _WIN64
	__property HWND ParentWindow = {read=FParentWindow, write=SetParentWindow, nodefault};
#else /* _WIN64 */
	__property HWND ParentWindow = {read=FParentWindow, write=SetParentWindow};
#endif /* _WIN64 */
	__property bool Showing = {read=FShowing, nodefault};
	__property bool IsDrawingLocked = {read=GetIsDrawingLocked, nodefault};
	__property bool RedrawDisabled = {read=GetRedrawDisabled, nodefault};
	__property System::Uitypes::TTabOrder TabOrder = {read=GetTabOrder, write=SetTabOrder, default=-1};
	__property bool TabStop = {read=FTabStop, write=SetTabStop, default=0};
	__property bool UseDockManager = {read=FUseDockManager, write=SetUseDockManager, default=0};
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TGraphicControl : public TControl
{
	typedef TControl inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
protected:
	virtual void __fastcall Paint();
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	
public:
	__fastcall virtual TGraphicControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGraphicControl();
};


class PASCALIMPLEMENTATION TCustomControl : public TWinControl
{
	typedef TWinControl inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
protected:
	virtual void __fastcall Paint();
	virtual void __fastcall PaintWindow(HDC DC);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	
public:
	__fastcall virtual TCustomControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomControl();
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomControl(HWND ParentWindow) : TWinControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomTransparentControl : public TCustomControl
{
	typedef TCustomControl inherited;
	
private:
	bool FInterceptMouse;
	
protected:
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	virtual void __fastcall CreateParams(TCreateParams &Params);
	void __fastcall InvalidateControlsUnderneath();
	
public:
	__fastcall virtual TCustomTransparentControl(System::Classes::TComponent* AOwner);
	virtual void __fastcall Invalidate();
	__property bool InterceptMouse = {read=FInterceptMouse, write=FInterceptMouse, default=0};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCustomTransparentControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomTransparentControl(HWND ParentWindow) : TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION THintWindow : public TCustomControl
{
	typedef TCustomControl inherited;
	
private:
	bool FActivating;
	unsigned FLastActive;
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(TCreateParams &Params);
	virtual void __fastcall NCPaint(HDC DC);
	virtual void __fastcall Paint();
	MESSAGE void __fastcall WMPrint(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual THintWindow(System::Classes::TComponent* AOwner);
	virtual void __fastcall ActivateHint(const System::Types::TRect &Rect, const System::UnicodeString AHint);
	virtual bool __fastcall IsHintMsg(tagMSG &Msg);
	virtual bool __fastcall ShouldHideHint();
	void __fastcall ReleaseHandle();
	virtual void __fastcall ActivateHintData(const System::Types::TRect &Rect, const System::UnicodeString AHint, void * AData);
	virtual System::Types::TRect __fastcall CalcHintRect(int MaxWidth, const System::UnicodeString AHint, void * AData);
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Canvas;
	__property Font;
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~THintWindow() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall THintWindow(HWND ParentWindow) : TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDragImageList : public Vcl::Imglist::TCustomImageList
{
	typedef Vcl::Imglist::TCustomImageList inherited;
	
private:
	System::Uitypes::TCursor FDragCursor;
	bool FDragging;
	HWND FDragHandle;
	System::Types::TPoint FDragHotspot;
	int FDragIndex;
	System::Uitypes::TCursor FOldCursor;
	void __fastcall SetDragCursor(System::Uitypes::TCursor Value);
	
protected:
	virtual void __fastcall Initialize();
	
public:
	bool __fastcall BeginDrag(HWND Window, int X, int Y);
	bool __fastcall DragLock(HWND Window, int XPos, int YPos);
	bool __fastcall DragMove(int X, int Y);
	void __fastcall DragUnlock();
	bool __fastcall EndDrag();
	virtual System::Types::TPoint __fastcall GetHotSpot();
	void __fastcall HideDragImage();
	bool __fastcall SetDragImage(int Index, int HotSpotX, int HotSpotY);
	void __fastcall ShowDragImage();
	__property System::Uitypes::TCursor DragCursor = {read=FDragCursor, write=SetDragCursor, nodefault};
	__property System::Types::TPoint DragHotspot = {read=FDragHotspot, write=FDragHotspot};
	__property bool Dragging = {read=FDragging, nodefault};
	
__published:
	__property ColorDepth = {default=1};
public:
	/* TCustomImageList.Create */ inline __fastcall virtual TDragImageList(System::Classes::TComponent* AOwner) : Vcl::Imglist::TCustomImageList(AOwner) { }
	/* TCustomImageList.CreateSize */ inline __fastcall TDragImageList(int AWidth, int AHeight) : Vcl::Imglist::TCustomImageList(AWidth, AHeight) { }
	/* TCustomImageList.Destroy */ inline __fastcall virtual ~TDragImageList() { }
	
};


class PASCALIMPLEMENTATION TImageList : public TDragImageList
{
	typedef TDragImageList inherited;
	
__published:
	__property BlendColor = {default=536870911};
	__property BkColor = {default=536870911};
	__property AllocBy = {default=4};
	__property ColorDepth = {default=1};
	__property DrawingStyle = {default=2};
	__property GrayscaleFactor = {default=0};
	__property Height = {default=16};
	__property ImageType = {default=0};
	__property Masked = {default=1};
	__property OnChange;
	__property ShareImages = {default=0};
	__property Width = {default=16};
public:
	/* TCustomImageList.Create */ inline __fastcall virtual TImageList(System::Classes::TComponent* AOwner) : TDragImageList(AOwner) { }
	/* TCustomImageList.CreateSize */ inline __fastcall TImageList(int AWidth, int AHeight) : TDragImageList(AWidth, AHeight) { }
	/* TCustomImageList.Destroy */ inline __fastcall virtual ~TImageList() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDockZone : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TControl* FChildControl;
	TDockZone* FChildZones;
	TDockZone* FNextSibling;
	TDockOrientation FOrientation;
	TDockZone* FParentZone;
	TDockZone* FPrevSibling;
	TDockTree* FTree;
	int FZoneLimit;
	int FOldSize;
	int __fastcall GetChildCount();
	System::UnicodeString __fastcall GetControlName();
	int __fastcall GetLimitBegin();
	int __fastcall GetLimitSize();
	int __fastcall GetTopLeft(int Orient);
	int __fastcall GetHeightWidth(int Orient);
	bool __fastcall GetVisible();
	int __fastcall GetVisibleChildCount();
	int __fastcall GetZoneLimit();
	bool __fastcall SetControlName(const System::UnicodeString Value);
	void __fastcall SetZoneLimit(const int Value);
	
public:
	__fastcall TDockZone(TDockTree* Tree);
	void __fastcall ExpandZoneLimit(int NewLimit);
	TDockZone* __fastcall FirstVisibleChild();
	TDockZone* __fastcall NextVisible();
	TDockZone* __fastcall PrevVisible();
	void __fastcall ResetChildren();
	void __fastcall ResetZoneLimits();
	void __fastcall Update();
	__property int ChildCount = {read=GetChildCount, nodefault};
	__property TControl* ChildControl = {read=FChildControl};
	__property int Height = {read=GetHeightWidth, index=1, nodefault};
	__property int Left = {read=GetTopLeft, index=2, nodefault};
	__property int LimitBegin = {read=GetLimitBegin, nodefault};
	__property int LimitSize = {read=GetLimitSize, nodefault};
	__property int Top = {read=GetTopLeft, index=1, nodefault};
	__property bool Visible = {read=GetVisible, nodefault};
	__property int VisibleChildCount = {read=GetVisibleChildCount, nodefault};
	__property int Width = {read=GetHeightWidth, index=2, nodefault};
	__property int ZoneLimit = {read=GetZoneLimit, write=SetZoneLimit, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDockZone() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TForEachZoneProc)(TDockZone* Zone);

#ifndef _WIN64
typedef System::TMetaClass* TDockTreeClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TDockTreeClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TDockTree : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FBorderWidth;
	Vcl::Graphics::TBrush* FBrush;
	TWinControl* FDockSite;
	int FGrabberSize;
	bool FGrabbersOnTop;
	System::Types::TRect FOldRect;
	System::Classes::TWndMethod FOldWndProc;
	TDockZone* FReplacementZone;
	double FScaleBy;
	TDockOrientation FShiftScaleOrient;
	int FShiftBy;
	System::Types::TPoint FSizePos;
	HDC FSizingDC;
	HWND FSizingWnd;
	TDockZone* FSizingZone;
	TDockZone* FTopZone;
	int FTopXYLimit;
	int FUpdateCount;
	int FVersion;
	bool FRelativeSizes;
	void __fastcall ControlVisibilityChanged(TControl* Control, bool Visible);
	int __fastcall ActualSize(const int RelativeSize, const int Reference);
	int __fastcall RelativeSize(const int ActualSize, const int Reference);
	void __fastcall DrawSizeSplitter();
	TDockZone* __fastcall FindControlZone(TControl* Control);
	void __fastcall ForEachAt(TDockZone* Zone, TForEachZoneProc Proc);
	int __fastcall GetNextLimit(TDockZone* AZone);
	void __fastcall InsertNewParent(TDockZone* NewZone, TDockZone* SiblingZone, TDockOrientation ParentOrientation, bool InsertLast);
	void __fastcall InsertSibling(TDockZone* NewZone, TDockZone* SiblingZone, bool InsertLast);
	TDockZone* __fastcall InternalHitTest(const System::Types::TPoint &MousePos, /* out */ int &HTFlag);
	void __fastcall PruneZone(TDockZone* Zone);
	void __fastcall RemoveZone(TDockZone* Zone);
	void __fastcall ScaleZone(TDockZone* Zone);
	void __fastcall SetNewBounds(TDockZone* Zone);
	void __fastcall ShiftZone(TDockZone* Zone);
	void __fastcall SplitterMouseDown(TDockZone* OnZone, const System::Types::TPoint &MousePos);
	void __fastcall SplitterMouseUp();
	void __fastcall UpdateZone(TDockZone* Zone);
	void __fastcall WindowProc(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall AdjustDockRect(TControl* Control, System::Types::TRect &ARect);
	virtual void __fastcall AdjustFrameRect(TControl* Control, System::Types::TRect &ARect);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	TControl* __fastcall FindControlAtPos(const System::Types::TPoint &Pos);
	void __fastcall GetControlBounds(TControl* Control, /* out */ System::Types::TRect &CtlBounds);
	virtual TControl* __fastcall HitTest(const System::Types::TPoint &MousePos, /* out */ int &HTFlag);
	virtual void __fastcall InsertControl(TControl* Control, TAlign InsertAt, TControl* DropCtl);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool &Handled);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool &Handled);
	virtual void __fastcall MouseLeave(bool &Handled);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool &Handled);
	virtual void __fastcall PaintDockFrame(Vcl::Graphics::TCanvas* Canvas, TControl* Control, const System::Types::TRect &ARect);
	virtual void __fastcall PositionDockRect(TControl* Client, TControl* DropCtl, TAlign DropAlign, System::Types::TRect &DockRect);
	virtual int __fastcall ReferenceFromOrient(const TDockOrientation Orient);
	virtual void __fastcall RemoveControl(TControl* Control);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall SetReplacingControl(TControl* Control);
	virtual void __fastcall ShowHint(const System::Types::TPoint &CursorPos, System::Types::TRect &CursorRect, System::UnicodeString &HintStr);
	virtual void __fastcall ResetBounds(bool Force);
	void __fastcall UpdateAll();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall ZoneCaptionHitTest(TDockZone* const Zone, const System::Types::TPoint &MousePos, int &HTFlag);
	__property TWinControl* DockSite = {read=FDockSite, write=FDockSite};
	__property bool RelativeSizes = {read=FRelativeSizes, write=FRelativeSizes, nodefault};
	__property TDockZone* TopZone = {read=FTopZone};
	__property int BorderWidth = {read=FBorderWidth, write=FBorderWidth, nodefault};
	
public:
	__fastcall virtual TDockTree(TWinControl* DockSite);
	__fastcall virtual ~TDockTree();
	virtual void __fastcall PaintSite(HDC DC);
private:
	void *__IDockManager;	// IDockManager 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8619FD79-C281-11D1-AA60-00C04FA370E8}
	operator _di_IDockManager()
	{
		_di_IDockManager intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDockManager*(void) { return (IDockManager*)&__IDockManager; }
	#endif
	
};


#ifndef _WIN64
typedef System::TMetaClass* TPanningWindowClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TPanningWindowClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomPanningWindow : public TCustomControl
{
	typedef TCustomControl inherited;
	
__published:
	virtual bool __fastcall GetIsPanning() = 0 ;
	virtual bool __fastcall StartPanning(NativeUInt AHandle, TControl* AControl) = 0 ;
	virtual void __fastcall StopPanning() = 0 ;
public:
	/* TCustomControl.Create */ inline __fastcall virtual TCustomPanningWindow(System::Classes::TComponent* AOwner) : TCustomControl(AOwner) { }
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCustomPanningWindow() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomPanningWindow(HWND ParentWindow) : TCustomControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TWheelRouting : unsigned char { wrFocusedWindow, wrHybrid, wrMousePos };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMouse : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FDragImmediate;
	int FDragThreshold;
	bool FMousePresent;
	bool FNativeWheelSupport;
	int FScrollLines;
	unsigned FScrollLinesMessage;
	HWND FWheelHwnd;
	unsigned FWheelMessage;
	bool FWheelPresent;
	unsigned FWheelSupportMessage;
	TCustomPanningWindow* FPanningWindow;
	TPanningWindowClass FPanningWindowClass;
	void __fastcall GetMouseData();
	void __fastcall GetNativeData();
	void __fastcall GetRegisteredData();
	System::Types::TPoint __fastcall GetCursorPos();
	void __fastcall SetCursorPos(const System::Types::TPoint &Value);
	HWND __fastcall GetCapture();
	void __fastcall SetCapture(const HWND Value);
	bool __fastcall GetIsDragging();
	void __fastcall SetPanningWindow(TCustomPanningWindow* const Value);
	bool __fastcall GetIsPanning();
	
public:
	__fastcall TMouse();
	__fastcall virtual ~TMouse();
	void __fastcall SettingChanged(int Setting);
	TCustomPanningWindow* __fastcall CreatePanningWindow();
#ifndef _WIN64
	__property HWND Capture = {read=GetCapture, write=SetCapture, nodefault};
#else /* _WIN64 */
	__property HWND Capture = {read=GetCapture, write=SetCapture};
#endif /* _WIN64 */
	__property System::Types::TPoint CursorPos = {read=GetCursorPos, write=SetCursorPos};
	__property bool DragImmediate = {read=FDragImmediate, write=FDragImmediate, default=1};
	__property int DragThreshold = {read=FDragThreshold, write=FDragThreshold, default=5};
	__property bool MousePresent = {read=FMousePresent, nodefault};
	__property bool IsDragging = {read=GetIsDragging, nodefault};
	__property bool IsPanning = {read=GetIsPanning, nodefault};
	__property TCustomPanningWindow* PanningWindow = {read=FPanningWindow, write=SetPanningWindow};
	__property TPanningWindowClass PanningWindowClass = {read=FPanningWindowClass, write=FPanningWindowClass};
	__property unsigned RegWheelMessage = {read=FWheelMessage, nodefault};
	__property bool WheelPresent = {read=FWheelPresent, nodefault};
	__property int WheelScrollLines = {read=FScrollLines, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomListControl : public TWinControl
{
	typedef TWinControl inherited;
	
protected:
	virtual int __fastcall GetItemIndex() = 0 ;
	DYNAMIC bool __fastcall IsTouchPropertyStored(TTouchProperty AProperty);
	virtual void __fastcall SetItemIndex(const int Value) = 0 /* overload */;
	
public:
	__fastcall virtual TCustomListControl(System::Classes::TComponent* AOwner);
	virtual void __fastcall AddItem(System::UnicodeString Item, System::TObject* AObject) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall ClearSelection() = 0 ;
	virtual void __fastcall CopySelection(TCustomListControl* Destination) = 0 ;
	virtual void __fastcall DeleteSelected() = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual void __fastcall MoveSelection(TCustomListControl* Destination);
	virtual void __fastcall SelectAll() = 0 ;
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomListControl(HWND ParentWindow) : TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomListControl() { }
	
};


class PASCALIMPLEMENTATION TCustomMultiSelectListControl : public TCustomListControl
{
	typedef TCustomListControl inherited;
	
protected:
	bool FMultiSelect;
	virtual int __fastcall GetSelCount() = 0 ;
	virtual void __fastcall SetMultiSelect(bool Value) = 0 ;
	
public:
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=0};
	__property int SelCount = {read=GetSelCount, nodefault};
public:
	/* TCustomListControl.Create */ inline __fastcall virtual TCustomMultiSelectListControl(System::Classes::TComponent* AOwner) : TCustomListControl(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomMultiSelectListControl(HWND ParentWindow) : TCustomListControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomMultiSelectListControl() { }
	
};


typedef System::LongBool __stdcall (*TAnimateWindowProc)(HWND hWnd, unsigned dwTime, unsigned dwFlags);

enum DECLSPEC_DENUM TBalloonHintIcon : unsigned char { bhInfo, bhWarning, bhError };

enum DECLSPEC_DENUM TBalloonHintIconSize : unsigned char { bhsNormal, bhsLarge, bhsSmall };

enum DECLSPEC_DENUM TBalloonHintStyle : unsigned char { bhsStandard, bhsBalloon };

class PASCALIMPLEMENTATION TCustomHintWindow : public TCustomControl
{
	typedef TCustomControl inherited;
	
private:
	TCustomHint* FHintParent;
	bool FPopAbove;
	System::UnicodeString FTitle;
	System::UnicodeString FDescription;
	System::Uitypes::TImageIndex FImageIndex;
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall NCPaint(HDC DC);
	virtual void __fastcall Paint();
	MESSAGE void __fastcall WMPrint(Winapi::Messages::TMessage &Message);
	bool __fastcall IsThemed();
	bool __fastcall NewStylePainting();
	
public:
	__fastcall virtual TCustomHintWindow(System::Classes::TComponent* AOwner);
	HIDESBASE void __fastcall AutoSize();
	void __fastcall PositionAt(const System::Types::TPoint &Point)/* overload */;
	void __fastcall PositionAt(const System::Types::TRect &Rect)/* overload */;
	void __fastcall PositionAtCursor();
	__property TCustomHint* HintParent = {read=FHintParent, write=FHintParent};
	__property bool PopAbove = {read=FPopAbove, nodefault};
	__property System::UnicodeString Title = {read=FTitle};
	__property System::UnicodeString Description = {read=FDescription};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, nodefault};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCustomHintWindow() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomHintWindow(HWND ParentWindow) : TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomHintShowHideThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	System::Classes::TThreadList* FHintWindowQueue;
	TCustomHint* FHintObject;
	bool FHideHint;
	bool FActive;
	unsigned FDisplayTime;
	System::Syncobjs::TEvent* FWaitEvent;
	void __fastcall QueHintWindow(TCustomHintWindow* Value);
	
public:
	__fastcall TCustomHintShowHideThread(TCustomHintWindow* Hint, TCustomHint* HintObject)/* overload */;
	__fastcall virtual ~TCustomHintShowHideThread();
	void __fastcall ResumeWork();
	virtual void __fastcall Execute();
	void __fastcall HideHint();
public:
	/* TThread.Create */ inline __fastcall TCustomHintShowHideThread()/* overload */ : System::Classes::TThread() { }
	/* TThread.Create */ inline __fastcall TCustomHintShowHideThread(bool CreateSuspended)/* overload */ : System::Classes::TThread(CreateSuspended) { }
	/* TThread.Create */ inline __fastcall TCustomHintShowHideThread(bool CreateSuspended, NativeUInt ReservedStackSize)/* overload */ : System::Classes::TThread(CreateSuspended, ReservedStackSize) { }
	
};


class PASCALIMPLEMENTATION TCustomHint : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FTitle;
	System::UnicodeString FDescription;
	TImageList* FImages;
	System::Uitypes::TImageIndex FImageIndex;
	TBalloonHintStyle FStyle;
	TCustomHintShowHideThread* FAnimateThread;
	unsigned FShowDelay;
	bool FShow;
	int FHideAfter;
	TControl* FLatestHintControl;
	bool FWorkComplete;
	int __fastcall GetCurrentPPI();
	
protected:
	__property bool WorkComplete = {read=FWorkComplete, nodefault};
	void __fastcall ShowAnotherHint();
	void __fastcall SetImages(TImageList* Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TCustomHint(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomHint();
	__property int CurrentPPI = {read=GetCurrentPPI, nodefault};
	void __fastcall ShowHint()/* overload */;
	void __fastcall ShowHint(const System::Types::TPoint &Point)/* overload */;
	void __fastcall ShowHint(const System::Types::TRect &Rect)/* overload */;
	void __fastcall ShowHint(TControl* Control)/* overload */;
	void __fastcall HideHint()/* overload */;
	void __fastcall HideHint(TControl* HidingControl)/* overload */;
	virtual void __fastcall PaintHint(TCustomHintWindow* HintWindow);
	virtual void __fastcall NCPaintHint(TCustomHintWindow* HintWindow, HDC DC);
	virtual void __fastcall SetHintSize(TCustomHintWindow* HintWindow);
	__property bool ShowingHint = {read=FShow, nodefault};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property System::UnicodeString Description = {read=FDescription, write=FDescription};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=FImageIndex, nodefault};
	
__published:
	__property TImageList* Images = {read=FImages, write=SetImages};
	__property TBalloonHintStyle Style = {read=FStyle, write=FStyle, default=1};
	__property unsigned Delay = {read=FShowDelay, write=FShowDelay, default=500};
	__property int HideAfter = {read=FHideAfter, write=FHideAfter, default=-1};
};


class PASCALIMPLEMENTATION TBalloonHint : public TCustomHint
{
	typedef TCustomHint inherited;
	
public:
	virtual void __fastcall PaintHint(TCustomHintWindow* HintWindow);
	virtual void __fastcall SetHintSize(TCustomHintWindow* HintWindow);
public:
	/* TCustomHint.Create */ inline __fastcall virtual TBalloonHint(System::Classes::TComponent* AOwner) : TCustomHint(AOwner) { }
	/* TCustomHint.Destroy */ inline __fastcall virtual ~TBalloonHint() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_BASE = System::Word(0xb000);
static const System::Int8 CM_CLROFFSET = System::Int8(0x0);
static const System::Word CM_ACTIVATE = System::Word(0xb000);
static const System::Word CM_DEACTIVATE = System::Word(0xb001);
static const System::Word CM_GOTFOCUS = System::Word(0xb002);
static const System::Word CM_LOSTFOCUS = System::Word(0xb003);
static const System::Word CM_CANCELMODE = System::Word(0xb004);
static const System::Word CM_DIALOGKEY = System::Word(0xb005);
static const System::Word CM_DIALOGCHAR = System::Word(0xb006);
static const System::Word CM_FOCUSCHANGED = System::Word(0xb007);
static const System::Word CM_PARENTFONTCHANGED = System::Word(0xb008);
static const System::Word CM_PARENTCOLORCHANGED = System::Word(0xb009);
static const System::Word CM_HITTEST = System::Word(0xb00a);
static const System::Word CM_VISIBLECHANGED = System::Word(0xb00b);
static const System::Word CM_ENABLEDCHANGED = System::Word(0xb00c);
static const System::Word CM_COLORCHANGED = System::Word(0xb00d);
static const System::Word CM_FONTCHANGED = System::Word(0xb00e);
static const System::Word CM_CURSORCHANGED = System::Word(0xb00f);
static const System::Word CM_CTL3DCHANGED = System::Word(0xb010);
static const System::Word CM_PARENTCTL3DCHANGED = System::Word(0xb011);
static const System::Word CM_TEXTCHANGED = System::Word(0xb012);
static const System::Word CM_MOUSEENTER = System::Word(0xb013);
static const System::Word CM_MOUSELEAVE = System::Word(0xb014);
static const System::Word CM_MENUCHANGED = System::Word(0xb015);
static const System::Word CM_APPKEYDOWN = System::Word(0xb016);
static const System::Word CM_APPSYSCOMMAND = System::Word(0xb017);
static const System::Word CM_BUTTONPRESSED = System::Word(0xb018);
static const System::Word CM_SHOWINGCHANGED = System::Word(0xb019);
static const System::Word CM_ENTER = System::Word(0xb01a);
static const System::Word CM_EXIT = System::Word(0xb01b);
static const System::Word CM_DESIGNHITTEST = System::Word(0xb01c);
static const System::Word CM_ICONCHANGED = System::Word(0xb01d);
static const System::Word CM_WANTSPECIALKEY = System::Word(0xb01e);
static const System::Word CM_INVOKEHELP = System::Word(0xb01f);
static const System::Word CM_WINDOWHOOK = System::Word(0xb020);
static const System::Word CM_RELEASE = System::Word(0xb021);
static const System::Word CM_SHOWHINTCHANGED = System::Word(0xb022);
static const System::Word CM_PARENTSHOWHINTCHANGED = System::Word(0xb023);
static const System::Word CM_SYSCOLORCHANGE = System::Word(0xb024);
static const System::Word CM_WININICHANGE = System::Word(0xb025);
static const System::Word CM_FONTCHANGE = System::Word(0xb026);
static const System::Word CM_TIMECHANGE = System::Word(0xb027);
static const System::Word CM_TABSTOPCHANGED = System::Word(0xb028);
static const System::Word CM_UIACTIVATE = System::Word(0xb029);
static const System::Word CM_UIDEACTIVATE = System::Word(0xb02a);
static const System::Word CM_DOCWINDOWACTIVATE = System::Word(0xb02b);
static const System::Word CM_CONTROLLISTCHANGE = System::Word(0xb02c);
static const System::Word CM_GETDATALINK = System::Word(0xb02d);
static const System::Word CM_CHILDKEY = System::Word(0xb02e);
static const System::Word CM_DRAG = System::Word(0xb02f);
static const System::Word CM_HINTSHOW = System::Word(0xb030);
static const System::Word CM_DIALOGHANDLE = System::Word(0xb031);
static const System::Word CM_ISTOOLCONTROL = System::Word(0xb032);
static const System::Word CM_RECREATEWND = System::Word(0xb033);
static const System::Word CM_INVALIDATE = System::Word(0xb034);
static const System::Word CM_SYSFONTCHANGED = System::Word(0xb035);
static const System::Word CM_CONTROLCHANGE = System::Word(0xb036);
static const System::Word CM_CHANGED = System::Word(0xb037);
static const System::Word CM_DOCKCLIENT = System::Word(0xb038);
static const System::Word CM_UNDOCKCLIENT = System::Word(0xb039);
static const System::Word CM_FLOAT = System::Word(0xb03a);
static const System::Word CM_BORDERCHANGED = System::Word(0xb03b);
static const System::Word CM_BIDIMODECHANGED = System::Word(0xb03c);
static const System::Word CM_PARENTBIDIMODECHANGED = System::Word(0xb03d);
static const System::Word CM_ALLCHILDRENFLIPPED = System::Word(0xb03e);
static const System::Word CM_ACTIONUPDATE = System::Word(0xb03f);
static const System::Word CM_ACTIONEXECUTE = System::Word(0xb040);
static const System::Word CM_HINTSHOWPAUSE = System::Word(0xb041);
static const System::Word CM_DOCKNOTIFICATION = System::Word(0xb042);
static const System::Word CM_MOUSEWHEEL = System::Word(0xb043);
static const System::Word CM_ISSHORTCUT = System::Word(0xb044);
static const System::Word CM_UPDATEACTIONS = System::Word(0xb045);
static const System::Word CM_INVALIDATEDOCKHOST = System::Word(0xb046);
static const System::Word CM_SETACTIVECONTROL = System::Word(0xb047);
static const System::Word CM_POPUPHWNDDESTROY = System::Word(0xb048);
static const System::Word CM_CREATEPOPUP = System::Word(0xb049);
static const System::Word CM_DESTROYHANDLE = System::Word(0xb04a);
static const System::Word CM_MOUSEACTIVATE = System::Word(0xb04b);
static const System::Word CM_CONTROLLISTCHANGING = System::Word(0xb04c);
static const System::Word CM_BUFFEREDPRINTCLIENT = System::Word(0xb04d);
static const System::Word CM_UNTHEMECONTROL = System::Word(0xb04e);
static const System::Word CM_DOUBLEBUFFEREDCHANGED = System::Word(0xb04f);
static const System::Word CM_PARENTDOUBLEBUFFEREDCHANGED = System::Word(0xb050);
static const System::Word CM_STYLECHANGED = System::Word(0xb051);
static const System::Word CM_THEMECHANGED _DEPRECATED_ATTRIBUTE1("Use CM_STYLECHANGED")  = System::Word(0xb051);
static const System::Word CM_GESTURE = System::Word(0xb052);
static const System::Word CM_CUSTOMGESTURESCHANGED = System::Word(0xb053);
static const System::Word CM_GESTUREMANAGERCHANGED = System::Word(0xb054);
static const System::Word CM_STANDARDGESTURESCHANGED = System::Word(0xb055);
static const System::Word CM_INPUTLANGCHANGE = System::Word(0xb056);
static const System::Word CM_TABLETOPTIONSCHANGED = System::Word(0xb057);
static const System::Word CM_PARENTTABLETOPTIONSCHANGED = System::Word(0xb058);
static const System::Word CM_CUSTOMSTYLECHANGED = System::Word(0xb059);
static const System::Word CM_SYSFONTSALLCHANGED = System::Word(0xb05a);
static const System::Word CM_PARENTVISIBLECHANGED = System::Word(0xb05b);
static const System::Word CM_SYSCOMMAND = System::Word(0xb05c);
static const System::Word CM_REMOTESESSIONSTATUSCHANGED = System::Word(0xb05d);
static const System::Word CN_BASE = System::Word(0xbc00);
static const System::Word CN_CHARTOITEM = System::Word(0xbc2f);
static const System::Word CN_COMMAND = System::Word(0xbd11);
static const System::Word CN_COMPAREITEM = System::Word(0xbc39);
static const System::Word CN_CTLCOLORBTN = System::Word(0xbd35);
static const System::Word CN_CTLCOLORDLG = System::Word(0xbd36);
static const System::Word CN_CTLCOLOREDIT = System::Word(0xbd33);
static const System::Word CN_CTLCOLORLISTBOX = System::Word(0xbd34);
static const System::Word CN_CTLCOLORMSGBOX = System::Word(0xbd32);
static const System::Word CN_CTLCOLORSCROLLBAR = System::Word(0xbd37);
static const System::Word CN_CTLCOLORSTATIC = System::Word(0xbd38);
static const System::Word CN_DELETEITEM = System::Word(0xbc2d);
static const System::Word CN_DRAWITEM = System::Word(0xbc2b);
static const System::Word CN_HSCROLL = System::Word(0xbd14);
static const System::Word CN_MEASUREITEM = System::Word(0xbc2c);
static const System::Word CN_PARENTNOTIFY = System::Word(0xbe10);
static const System::Word CN_VKEYTOITEM = System::Word(0xbc2e);
static const System::Word CN_VSCROLL = System::Word(0xbd15);
static const System::Word CN_KEYDOWN = System::Word(0xbd00);
static const System::Word CN_KEYUP = System::Word(0xbd01);
static const System::Word CN_CHAR = System::Word(0xbd02);
static const System::Word CN_SYSKEYDOWN = System::Word(0xbd04);
static const System::Word CN_SYSCHAR = System::Word(0xbd06);
static const System::Word CN_NOTIFY = System::Word(0xbc4e);
static const System::Uitypes::TAnchorKind akLeft = (System::Uitypes::TAnchorKind)(0);
static const System::Uitypes::TAnchorKind akTop = (System::Uitypes::TAnchorKind)(1);
static const System::Uitypes::TAnchorKind akRight = (System::Uitypes::TAnchorKind)(2);
static const System::Uitypes::TAnchorKind akBottom = (System::Uitypes::TAnchorKind)(3);
static const System::Int8 sgiNoGesture = System::Int8(0x0);
static const System::Int8 sgiLeft = System::Int8(0x1);
static const System::Int8 sgiRight = System::Int8(0x2);
static const System::Int8 sgiUp = System::Int8(0x3);
static const System::Int8 sgiDown = System::Int8(0x4);
static const System::Int8 sgiUpLeft = System::Int8(0x5);
static const System::Int8 sgiUpRight = System::Int8(0x6);
static const System::Int8 sgiDownLeft = System::Int8(0x7);
static const System::Int8 sgiDownRight = System::Int8(0x8);
static const System::Int8 sgiLeftUp = System::Int8(0x9);
static const System::Int8 sgiLeftDown = System::Int8(0xa);
static const System::Int8 sgiRightUp = System::Int8(0xb);
static const System::Int8 sgiRightDown = System::Int8(0xc);
static const System::Int8 sgiUpDown = System::Int8(0xd);
static const System::Int8 sgiDownUp = System::Int8(0xe);
static const System::Int8 sgiLeftRight = System::Int8(0xf);
static const System::Int8 sgiRightLeft = System::Int8(0x10);
static const System::Int8 sgiUpLeftLong = System::Int8(0x11);
static const System::Int8 sgiUpRightLong = System::Int8(0x12);
static const System::Int8 sgiDownLeftLong = System::Int8(0x13);
static const System::Int8 sgiDownRightLong = System::Int8(0x14);
static const System::Int8 sgiScratchout = System::Int8(0x15);
static const System::Int8 sgiTriangle = System::Int8(0x16);
static const System::Int8 sgiSquare = System::Int8(0x17);
static const System::Int8 sgiCheck = System::Int8(0x18);
static const System::Int8 sgiCurlicue = System::Int8(0x19);
static const System::Int8 sgiDoubleCurlicue = System::Int8(0x1a);
static const System::Int8 sgiCircle = System::Int8(0x1b);
static const System::Int8 sgiDoubleCircle = System::Int8(0x1c);
static const System::Int8 sgiSemiCircleLeft = System::Int8(0x1d);
static const System::Int8 sgiSemiCircleRight = System::Int8(0x1e);
static const System::Int8 sgiChevronUp = System::Int8(0x1f);
static const System::Int8 sgiChevronDown = System::Int8(0x20);
static const System::Int8 sgiChevronLeft = System::Int8(0x21);
static const System::Int8 sgiChevronRight = System::Int8(0x22);
static const System::Int8 sgiFirst = System::Int8(0x1);
static const System::Int8 sgiLast = System::Int8(0x22);
static const short cgiFirst = short(-512);
static const System::Int8 cgiLast = System::Int8(-1);
static const short rgiFirst = short(-1024);
static const short rgiLast = short(-513);
static const System::Word igiFirst = System::Word(0x100);
static const System::Word igiLast = System::Word(0x1ff);
static const System::Word igiBegin = System::Word(0x101);
static const System::Word igiEnd = System::Word(0x102);
static const System::Word igiZoom = System::Word(0x103);
static const System::Word igiPan = System::Word(0x104);
static const System::Word igiRotate = System::Word(0x105);
static const System::Word igiTwoFingerTap = System::Word(0x106);
static const System::Word igiPressAndTap = System::Word(0x107);
static const System::Int8 gcnRefreshAll = System::Int8(0x0);
static const System::Int8 gcnAdded = System::Int8(0x1);
static const System::Int8 gcnRemoved = System::Int8(0x2);
static const System::Int8 gcnModified = System::Int8(0x3);
static const System::Uitypes::TDragMode dmAutomatic = (System::Uitypes::TDragMode)(1);
static const System::Uitypes::TDragMode dmManual = (System::Uitypes::TDragMode)(0);
static const System::Uitypes::TDragState dsDragEnter = (System::Uitypes::TDragState)(0);
static const System::Uitypes::TDragState dsDragLeave = (System::Uitypes::TDragState)(1);
static const System::Uitypes::TDragState dsDragMove = (System::Uitypes::TDragState)(2);
static const System::Uitypes::TDragKind dkDrag = (System::Uitypes::TDragKind)(0);
static const System::Uitypes::TDragKind dkDock = (System::Uitypes::TDragKind)(1);
static const System::Uitypes::TMouseActivate maDefault = (System::Uitypes::TMouseActivate)(0);
static const System::Uitypes::TMouseActivate maActivate = (System::Uitypes::TMouseActivate)(1);
static const System::Uitypes::TMouseActivate maActivateAndEat = (System::Uitypes::TMouseActivate)(2);
static const System::Uitypes::TMouseActivate maNoActivate = (System::Uitypes::TMouseActivate)(3);
static const System::Uitypes::TMouseActivate maNoActivateAndEat = (System::Uitypes::TMouseActivate)(4);
static const System::Uitypes::TMouseButton mbLeft = (System::Uitypes::TMouseButton)(0);
static const System::Uitypes::TMouseButton mbRight = (System::Uitypes::TMouseButton)(1);
static const System::Uitypes::TMouseButton mbMiddle = (System::Uitypes::TMouseButton)(2);
static const System::Int8 cImageMargin = System::Int8(0x4);
static const System::Int8 cTextVerticalMargin = System::Int8(0x4);
static const System::Int8 cTextHorizontalMargin = System::Int8(0x4);
static const System::Int8 cBalloonStemHeight = System::Int8(0xa);
static const System::Int8 cEdgeRadius = System::Int8(0x4);
extern DELPHI_PACKAGE TMouse* Mouse;
extern DELPHI_PACKAGE TAnimateWindowProc AnimateWindowProc;
extern DELPHI_PACKAGE TDockTreeClass DefaultDockTreeClass;
extern DELPHI_PACKAGE TWinControl* CreationControl;
extern DELPHI_PACKAGE bool __fastcall (__closure *IsVCLControlHook)(HWND Handle);
static const System::Word CTL3D_ALL = System::Word(0xffff);
#ifndef _WIN64
#define NullDockSite (TWinControl*)(0xffffffff)
#else /* _WIN64 */
#define NullDockSite (TWinControl*)(0x00000000ffffffffULL)
#endif /* _WIN64 */
extern DELPHI_PACKAGE System::StaticArray<System::Uitypes::TAnchors, 7> AnchorAlign;
extern DELPHI_PACKAGE bool NewStyleControls;
extern DELPHI_PACKAGE bool __fastcall CheckPerMonitorV2SupportForWindow(HWND AHandle);
extern DELPHI_PACKAGE int __fastcall GetSystemMetricsForWindow(int nIndex, HWND AHandle);
extern DELPHI_PACKAGE bool __fastcall AdjustWindowRectExForWindow(System::Types::TRect &lpRect, unsigned dwStyle, System::LongBool bMenu, unsigned dwExStyle, HWND AHandle);
extern DELPHI_PACKAGE bool __fastcall SystemParametersInfoForWindow(unsigned uiAction, unsigned uiParam, void * pvParam, unsigned fWinIni, HWND AHandle);
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall MouseOriginToShiftState(void);
extern DELPHI_PACKAGE void __fastcall InvalidControlOperation(System::PResStringRec AMessage, TControl* AControl);
extern DELPHI_PACKAGE void __fastcall ChangeBiDiModeAlignment(System::Classes::TAlignment &Alignment);
extern DELPHI_PACKAGE NativeInt __stdcall InitWndProc(HWND HWindow, unsigned Msg, NativeUInt WParam, NativeInt LParam);
extern DELPHI_PACKAGE TWinControl* __fastcall FindControl(HWND Handle);
extern DELPHI_PACKAGE bool __fastcall IsVCLControl(HWND Handle);
extern DELPHI_PACKAGE NativeInt __fastcall SendAppMessage(unsigned Msg, NativeUInt WParam, NativeInt LParam);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CursorToString(System::Uitypes::TCursor Cursor);
extern DELPHI_PACKAGE System::Uitypes::TCursor __fastcall StringToCursor(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall GetCursorValues(System::Classes::TGetStrProc Proc);
extern DELPHI_PACKAGE bool __fastcall CursorToIdent(int Cursor, System::UnicodeString &Ident);
extern DELPHI_PACKAGE bool __fastcall IdentToCursor(const System::UnicodeString Ident, int &Cursor);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetShortHint(const System::UnicodeString Hint);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetLongHint(const System::UnicodeString Hint);
extern DELPHI_PACKAGE void __fastcall PerformEraseBackground(TControl* Control, HDC DC);
extern DELPHI_PACKAGE void __fastcall PerformBufferedPrintClient(HWND Handle, const System::Types::TRect &Rect);
extern DELPHI_PACKAGE TControl* __fastcall GetCaptureControl(void);
extern DELPHI_PACKAGE void __fastcall SetCaptureControl(TControl* Control);
extern DELPHI_PACKAGE bool __fastcall IsDragObject(System::TObject* Sender);
extern DELPHI_PACKAGE void __fastcall DragDone(bool Drop);
extern DELPHI_PACKAGE void __fastcall CancelDrag(void);
extern DELPHI_PACKAGE TWinControl* __fastcall FindVCLWindow(const System::Types::TPoint &Pos);
extern DELPHI_PACKAGE TControl* __fastcall FindDragTarget(const System::Types::TPoint &Pos, bool AllowDisabled);
extern DELPHI_PACKAGE void __fastcall MoveWindowOrg(HDC DC, int DX, int DY);
extern DELPHI_PACKAGE void __fastcall SetTextInputPanelStatus(TWinControl* Control, bool OpenTIP);
extern DELPHI_PACKAGE bool __fastcall Win32NLSEnableIME _DEPRECATED_ATTRIBUTE0 (HWND hWnd, bool Enable);
extern DELPHI_PACKAGE void __fastcall SetImeMode(HWND hWnd, TImeMode Mode);
extern DELPHI_PACKAGE void __fastcall SetImeName(TImeName Name);
extern DELPHI_PACKAGE int __fastcall Imm32GetContext(HWND hWnd);
extern DELPHI_PACKAGE bool __fastcall Imm32ReleaseContext(HWND hWnd, int hImc);
extern DELPHI_PACKAGE bool __fastcall Imm32GetConversionStatus(int hImc, unsigned &Conversion, unsigned &Sentence);
extern DELPHI_PACKAGE bool __fastcall Imm32SetConversionStatus(int hImc, unsigned Conversion, unsigned Sentence);
extern DELPHI_PACKAGE bool __fastcall Imm32SetOpenStatus(int hImc, bool fOpen);
extern DELPHI_PACKAGE bool __fastcall Imm32SetCompositionWindow(int hImc, const tagCOMPOSITIONFORM &lpCompForm)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Imm32SetCompositionWindow _DEPRECATED_ATTRIBUTE0 (int hImc, Winapi::Imm::PCompositionForm lpCompForm)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Imm32SetCompositionFont(int hImc, tagLOGFONTW &lpLogfont)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Imm32SetCompositionFont _DEPRECATED_ATTRIBUTE0 (int hImc, Winapi::Windows::PLogFontW lpLogfont)/* overload */;
extern DELPHI_PACKAGE int __fastcall Imm32GetCompositionString(int hImc, unsigned dWord1, void * lpBuf, unsigned dwBufLen);
extern DELPHI_PACKAGE bool __fastcall Imm32IsIME(HKL hKl);
extern DELPHI_PACKAGE bool __fastcall Imm32NotifyIME(int hImc, unsigned dwAction, unsigned dwIndex, unsigned dwValue);
extern DELPHI_PACKAGE bool __fastcall IsPositiveResult(const System::Uitypes::TModalResult AModalResult);
extern DELPHI_PACKAGE bool __fastcall IsNegativeResult(const System::Uitypes::TModalResult AModalResult);
extern DELPHI_PACKAGE bool __fastcall IsAbortResult(const System::Uitypes::TModalResult AModalResult);
extern DELPHI_PACKAGE bool __fastcall IsAnAllResult(const System::Uitypes::TModalResult AModalResult);
extern DELPHI_PACKAGE System::Uitypes::TModalResult __fastcall StripAllFromResult(const System::Uitypes::TModalResult AModalResult);
}	/* namespace Controls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CONTROLS)
using namespace Vcl::Controls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ControlsHPP
