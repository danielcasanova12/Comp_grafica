// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ComCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_ComctrlsHPP
#define Vcl_ComctrlsHPP

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
#include <Winapi.CommCtrl.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.RichEdit.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Classes.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ListActns.hpp>
#include <Winapi.ShlObj.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.GraphUtil.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------
#ifndef _WIN64
#pragma link "dwmapi.lib"
#endif //_WIN64
namespace Vcl
{
namespace Comctrls
{
using ::System::Uitypes::TCalDayOfWeek;
}	/* namespace Comctrls */
}	/* namespace Vcl */

#ifdef WIN32_LEAN_AND_MEAN
#include <shldisp.h>
#endif


namespace Vcl
{
namespace Comctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomTabControl;
class DELPHICLASS TTabControl;
class DELPHICLASS TTabSheet;
class DELPHICLASS TPageControl;
class DELPHICLASS TStatusPanel;
class DELPHICLASS TStatusPanels;
class DELPHICLASS TCustomStatusBar;
class DELPHICLASS TStatusBar;
class DELPHICLASS THeaderSection;
class DELPHICLASS THeaderSections;
class DELPHICLASS TCustomHeaderControl;
class DELPHICLASS THeaderControl;
struct TNodeInfo;
struct TNodeDataInfo;
struct TNodeDataInfoX86;
struct TNodeDataInfo2;
struct TNodeDataInfo2x86;
struct TNodeDataInfo2x64;
class DELPHICLASS TTreeNode;
class DELPHICLASS TTreeNodesEnumerator;
struct TNodeCache;
class DELPHICLASS TTreeNodes;
class DELPHICLASS ETreeViewError;
class DELPHICLASS TCustomTreeView;
class DELPHICLASS TTreeView;
class DELPHICLASS TTrackBar;
class DELPHICLASS TProgressBar;
class DELPHICLASS TTextAttributes;
class DELPHICLASS TParaAttributes;
class DELPHICLASS TConversion;
struct TConversionFormat;
struct TRichEditStreamInfo;
class DELPHICLASS TCustomRichEdit;
class DELPHICLASS TRichEdit;
class DELPHICLASS TCustomUpDown;
class DELPHICLASS TUpDown;
class DELPHICLASS TCustomHotKey;
class DELPHICLASS THotKey;
class DELPHICLASS TListGroup;
class DELPHICLASS TListGroups;
class DELPHICLASS TListColumn;
class DELPHICLASS TListColumns;
class DELPHICLASS TListItem;
class DELPHICLASS TListItemsEnumerator;
class DELPHICLASS TListItems;
class DELPHICLASS TWorkArea;
class DELPHICLASS TWorkAreas;
class DELPHICLASS TIconOptions;
class DELPHICLASS TCustomListView;
class DELPHICLASS TListView;
class DELPHICLASS TListViewActionLink;
struct TAnimateParams;
class DELPHICLASS TAnimate;
class DELPHICLASS TToolButtonActionLink;
class DELPHICLASS TToolButton;
class DELPHICLASS TToolBarEnumerator;
class DELPHICLASS TToolBar;
class DELPHICLASS TToolBarDockObject;
class DELPHICLASS TCoolBand;
class DELPHICLASS TCoolBands;
class DELPHICLASS TCoolBar;
class DELPHICLASS ECommonCalendarError;
class DELPHICLASS TMonthCalColors;
class DELPHICLASS TCommonCalendar;
class DELPHICLASS EMonthCalError;
class DELPHICLASS TMonthCalendar;
class DELPHICLASS EDateTimeError;
class DELPHICLASS TDateTimePicker;
class DELPHICLASS TPageScroller;
class DELPHICLASS TComboExItem;
class DELPHICLASS TComboExItems;
class DELPHICLASS TComboBoxExStrings;
class DELPHICLASS TCustomComboBoxEx;
class DELPHICLASS TComboBoxEx;
class DELPHICLASS TComboBoxExActionLink;
class DELPHICLASS TTabControlStyleHook;
class DELPHICLASS TDateTimePickerStyleHook;
class DELPHICLASS TTreeViewStyleHook;
class DELPHICLASS TListViewStyleHook;
class DELPHICLASS TProgressBarStyleHook;
class DELPHICLASS TTrackBarStyleHook;
class DELPHICLASS TStatusBarStyleHook;
class DELPHICLASS TToolBarStyleHook;
class DELPHICLASS TCoolBarStyleHook;
class DELPHICLASS TUpDownStyleHook;
class DELPHICLASS THeaderStyleHook;
class DELPHICLASS TPageScrollerStyleHook;
class DELPHICLASS TComboBoxExStyleHook;
class DELPHICLASS TRichEditStyleHook;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM THitTest : unsigned char { htAbove, htBelow, htNowhere, htOnItem, htOnButton, htOnIcon, htOnIndent, htOnLabel, htOnRight, htOnStateIcon, htToLeft, htToRight };

typedef System::Set<THitTest, THitTest::htAbove, THitTest::htToRight> THitTests;

typedef void __fastcall (__closure *TTabChangingEvent)(System::TObject* Sender, bool &AllowChange);

enum DECLSPEC_DENUM TTabPosition : unsigned char { tpTop, tpBottom, tpLeft, tpRight };

enum DECLSPEC_DENUM TTabStyle : unsigned char { tsTabs, tsButtons, tsFlatButtons };

typedef void __fastcall (__closure *TDrawTabEvent)(TCustomTabControl* Control, int TabIndex, const System::Types::TRect &Rect, bool Active);

typedef void __fastcall (__closure *TTabGetImageEvent)(System::TObject* Sender, int TabIndex, int &ImageIndex);

class PASCALIMPLEMENTATION TCustomTabControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	bool FHotTrack;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FMultiLine;
	bool FMultiSelect;
	bool FOwnerDraw;
	bool FRaggedRight;
	int FSaveTabIndex;
	System::Classes::TStringList* FSaveTabs;
	bool FScrollOpposite;
	TTabStyle FStyle;
	TTabPosition FTabPosition;
	System::Classes::TStrings* FTabs;
	System::Types::TSmallPoint FTabSize;
	bool FUpdating;
	System::Types::TRect FSavedAdjustRect;
	System::Classes::TNotifyEvent FOnChange;
	TTabChangingEvent FOnChanging;
	TDrawTabEvent FOnDrawTab;
	TTabGetImageEvent FOnGetImageIndex;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	System::Types::TRect __fastcall GetDisplayRect();
	int __fastcall GetTabIndex();
	System::Classes::TStrings* __fastcall GetTabs();
	void __fastcall ImageListChange(System::TObject* Sender);
	bool __fastcall InternalSetMultiLine(bool Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetMultiLine(bool Value);
	void __fastcall SetMultiSelect(bool Value);
	void __fastcall SetOwnerDraw(bool Value);
	void __fastcall SetRaggedRight(bool Value);
	void __fastcall SetScrollOpposite(bool Value);
	void __fastcall SetStyle(TTabStyle Value);
	void __fastcall SetTabHeight(short Value);
	void __fastcall SetTabPosition(TTabPosition Value);
	void __fastcall SetTabs(System::Classes::TStrings* Value);
	void __fastcall SetTabWidth(short Value);
	void __fastcall TabsChanged();
	void __fastcall UpdateTabSize();
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTabStopChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall TCMAdjustRect(Winapi::Commctrl::TTCMAdjustRect &Message);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMNotifyFormat(Winapi::Messages::TWMNotifyFormat &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	DYNAMIC bool __fastcall CanChange();
	virtual bool __fastcall CanShowTab(int TabIndex);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawTab(int TabIndex, const System::Types::TRect &Rect, bool Active);
	virtual int __fastcall GetImageIndex(int TabIndex);
	virtual void __fastcall Loaded();
	void __fastcall UpdateTabImages();
	virtual void __fastcall CheckTabImagesIndexAndName();
	__property System::Types::TRect DisplayRect = {read=GetDisplayRect};
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool MultiLine = {read=FMultiLine, write=SetMultiLine, default=0};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=0};
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetTabIndex(int Value);
	__property bool OwnerDraw = {read=FOwnerDraw, write=SetOwnerDraw, default=0};
	__property bool RaggedRight = {read=FRaggedRight, write=SetRaggedRight, default=0};
	__property bool ScrollOpposite = {read=FScrollOpposite, write=SetScrollOpposite, default=0};
	__property TTabStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property short TabHeight = {read=FTabSize.y, write=SetTabHeight, default=0};
	__property int TabIndex = {read=GetTabIndex, write=SetTabIndex, default=-1};
	__property TTabPosition TabPosition = {read=FTabPosition, write=SetTabPosition, default=0};
	__property System::Classes::TStrings* Tabs = {read=GetTabs, write=SetTabs};
	__property short TabWidth = {read=FTabSize.x, write=SetTabWidth, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TTabChangingEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property TDrawTabEvent OnDrawTab = {read=FOnDrawTab, write=FOnDrawTab};
	__property TTabGetImageEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	
public:
	__fastcall virtual TCustomTabControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomTabControl();
	int __fastcall IndexOfTabAt(int X, int Y);
	THitTests __fastcall GetHitTestInfoAt(int X, int Y);
	System::Types::TRect __fastcall TabRect(int Index);
	int __fastcall RowCount();
	void __fastcall ScrollTabs(int Delta);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property TabStop = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomTabControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TTabControl : public TCustomTabControl
{
	typedef TCustomTabControl inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__property DisplayRect;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HotTrack = {default=0};
	__property Images;
	__property MultiLine = {default=0};
	__property MultiSelect = {default=0};
	__property OwnerDraw = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property RaggedRight = {default=0};
	__property ScrollOpposite = {default=0};
	__property ShowHint;
	__property Style = {default=0};
	__property TabHeight = {default=0};
	__property TabOrder = {default=-1};
	__property TabPosition = {default=0};
	__property Tabs;
	__property TabIndex = {default=-1};
	__property TabStop = {default=1};
	__property TabWidth = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnChanging;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawTab;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetImageIndex;
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
	/* TCustomTabControl.Create */ inline __fastcall virtual TTabControl(System::Classes::TComponent* AOwner) : TCustomTabControl(AOwner) { }
	/* TCustomTabControl.Destroy */ inline __fastcall virtual ~TTabControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTabControl(HWND ParentWindow) : TCustomTabControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TTabSheet : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	TPageControl* FPageControl;
	bool FTabVisible;
	bool FTabShowing;
	bool FHighlighted;
	System::Classes::TNotifyEvent FOnHide;
	System::Classes::TNotifyEvent FOnShow;
	int __fastcall GetPageIndex();
	int __fastcall GetTabIndex();
	void __fastcall SetHighlighted(bool Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetPageControl(TPageControl* APageControl);
	void __fastcall SetPageIndex(int Value);
	void __fastcall SetTabShowing(bool Value);
	void __fastcall SetTabVisible(bool Value);
	void __fastcall UpdateTabShowing();
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoHide();
	DYNAMIC void __fastcall DoShow();
	virtual void __fastcall PaintWindow(HDC DC);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall UpdateControlOriginalParentSize(Vcl::Controls::TControl* AControl, System::Types::TPoint &AOriginalParentSize);
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	void __fastcall CheckImageIndexAndName();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	
public:
	__fastcall virtual TTabSheet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTabSheet();
	__property TPageControl* PageControl = {read=FPageControl, write=SetPageControl};
	__property int TabIndex = {read=GetTabIndex, nodefault};
	
__published:
	__property BorderWidth = {default=0};
	__property Caption = {default=0};
	__property DoubleBuffered;
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Height = {stored=false};
	__property bool Highlighted = {read=FHighlighted, write=SetHighlighted, default=0};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=0};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName};
	__property Left = {stored=false};
	__property Constraints;
	__property int PageIndex = {read=GetPageIndex, write=SetPageIndex, stored=false, nodefault};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property bool TabVisible = {read=FTabVisible, write=SetTabVisible, default=1};
	__property Top = {stored=false};
	__property Touch;
	__property Visible = {stored=false, default=1};
	__property Width = {stored=false};
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TTabSheet(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPageControl : public TCustomTabControl
{
	typedef TCustomTabControl inherited;
	
private:
	System::Classes::TList* FPages;
	TTabSheet* FActivePage;
	TTabSheet* FNewDockSheet;
	TTabSheet* FUndockingPage;
	bool FInSetActivePage;
	void __fastcall ChangeActivePage(TTabSheet* Page);
	void __fastcall DeleteTab(TTabSheet* Page, int Index);
	int __fastcall GetActivePageIndex();
	Vcl::Controls::TControl* __fastcall GetDockClientFromMousePos(const System::Types::TPoint &MousePos);
	TTabSheet* __fastcall GetPage(int Index);
	int __fastcall GetPageCount();
	void __fastcall InsertPage(TTabSheet* Page);
	void __fastcall InsertTab(TTabSheet* Page);
	void __fastcall MoveTab(int CurIndex, int NewIndex);
	int __fastcall PageIndexFromTabIndex(int TabIndex);
	void __fastcall RemovePage(TTabSheet* Page);
	void __fastcall SetActivePageIndex(const int Value);
	void __fastcall UpdateTab(TTabSheet* Page);
	void __fastcall UpdateTabHighlights();
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMDockClient(Vcl::Controls::TCMDockClient &Message);
	HIDESBASE MESSAGE void __fastcall CMUnDockClient(Vcl::Controls::TCMUnDockClient &Message);
	
protected:
	virtual bool __fastcall CanShowTab(int TabIndex);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall DoAddDockClient(Vcl::Controls::TControl* Client, const System::Types::TRect &ARect);
	DYNAMIC void __fastcall DockOver(Vcl::Controls::TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	DYNAMIC void __fastcall DoRemoveDockClient(Vcl::Controls::TControl* Client);
	virtual int __fastcall GetImageIndex(int TabIndex);
	TTabSheet* __fastcall GetPageFromDockClient(Vcl::Controls::TControl* Client);
	DYNAMIC void __fastcall GetSiteInfo(Vcl::Controls::TControl* Client, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	virtual void __fastcall Loaded();
	void __fastcall SetActivePage(TTabSheet* Page);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	virtual void __fastcall SetTabIndex(int Value);
	virtual void __fastcall ShowControl(Vcl::Controls::TControl* AControl);
	virtual void __fastcall UpdateActivePage();
	virtual void __fastcall CheckTabImagesIndexAndName();
	
public:
	__fastcall virtual TPageControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPageControl();
	TTabSheet* __fastcall FindNextPage(TTabSheet* CurPage, bool GoForward, bool CheckTabVisible, bool CheckTabEnabled = false);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	void __fastcall SelectNextPage(bool GoForward, bool CheckTabVisible = true);
	__property int ActivePageIndex = {read=GetActivePageIndex, write=SetActivePageIndex, nodefault};
	__property int PageCount = {read=GetPageCount, nodefault};
	__property TTabSheet* Pages[int Index] = {read=GetPage};
	
__published:
	__property TTabSheet* ActivePage = {read=FActivePage, write=SetActivePage};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HotTrack = {default=0};
	__property Images;
	__property MultiLine = {default=0};
	__property OwnerDraw = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property RaggedRight = {default=0};
	__property ScrollOpposite = {default=0};
	__property ShowHint;
	__property Style = {default=0};
	__property TabHeight = {default=0};
	__property TabIndex = {stored=false, default=-1};
	__property TabOrder = {default=-1};
	__property TabPosition = {default=0};
	__property TabStop = {default=1};
	__property TabWidth = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnChanging;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawTab;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetImageIndex;
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
	/* TWinControl.CreateParented */ inline __fastcall TPageControl(HWND ParentWindow) : TCustomTabControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TStatusPanelStyle : unsigned char { psText, psOwnerDraw };

enum DECLSPEC_DENUM TStatusPanelBevel : unsigned char { pbNone, pbLowered, pbRaised };

#ifndef _WIN64
typedef System::TMetaClass* TStatusPanelClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TStatusPanelClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStatusPanel : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FText;
	int FWidth;
	System::Classes::TAlignment FAlignment;
	TStatusPanelBevel FBevel;
	System::Classes::TBiDiMode FBiDiMode;
	bool FParentBiDiMode;
	TStatusPanelStyle FStyle;
	bool FUpdateNeeded;
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetBevel(TStatusPanelBevel Value);
	void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	void __fastcall SetParentBiDiMode(bool Value);
	void __fastcall SetStyle(TStatusPanelStyle Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetWidth(int Value);
	bool __fastcall IsBiDiModeStored();
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TStatusPanel(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall ParentBiDiModeChanged();
	bool __fastcall UseRightToLeftAlignment();
	bool __fastcall UseRightToLeftReading();
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property TStatusPanelBevel Bevel = {read=FBevel, write=SetBevel, default=1};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, write=SetBiDiMode, stored=IsBiDiModeStored, nodefault};
	__property bool ParentBiDiMode = {read=FParentBiDiMode, write=SetParentBiDiMode, default=1};
	__property TStatusPanelStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TStatusPanel() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStatusPanels : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TStatusPanel* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomStatusBar* FStatusBar;
	HIDESBASE TStatusPanel* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TStatusPanel* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TStatusPanels(TCustomStatusBar* StatusBar);
	HIDESBASE TStatusPanel* __fastcall Add();
	TStatusPanel* __fastcall AddItem(TStatusPanel* Item, int Index);
	HIDESBASE TStatusPanel* __fastcall Insert(int Index);
	__property TStatusPanel* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TStatusPanels() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TCustomDrawPanelEvent)(TCustomStatusBar* StatusBar, TStatusPanel* Panel, const System::Types::TRect &Rect);

typedef void __fastcall (__closure *TSBCreatePanelClassEvent)(TCustomStatusBar* Sender, TStatusPanelClass &PanelClass);

class PASCALIMPLEMENTATION TCustomStatusBar : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TStatusPanels* FPanels;
	Vcl::Graphics::TCanvas* FCanvas;
	System::UnicodeString FSimpleText;
	bool FSimplePanel;
	bool FSizeGrip;
	bool FSizeGripValid;
	bool FUseSystemFont;
	bool FAutoHint;
	TCustomDrawPanelEvent FOnDrawPanel;
	System::Classes::TNotifyEvent FOnHint;
	TSBCreatePanelClassEvent FOnCreatePanelClass;
	bool FUpdatedPanels;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall DoRightToLeftAlignment(System::UnicodeString &Str, System::Classes::TAlignment AAlignment, bool ARTLAlignment);
	void __fastcall SetPanels(TStatusPanels* Value);
	void __fastcall SetSimplePanel(bool Value);
	void __fastcall UpdateSimpleText();
	void __fastcall SetSimpleText(const System::UnicodeString Value);
	void __fastcall SetSizeGrip(bool Value);
	void __fastcall SyncToSystemFont();
	void __fastcall UpdatePanel(int Index, bool Repaint);
	void __fastcall UpdatePanels(bool UpdateRects, bool UpdateText);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Vcl::Controls::TCMParentFontChanged &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWinIniChange(Winapi::Messages::TWMWinIniChange &Message);
	HIDESBASE MESSAGE void __fastcall CMSysFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetTextLength(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetUseSystemFont(const bool Value);
	void __fastcall ValidateSizeGrip(bool ARecreate);
	
protected:
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual TStatusPanel* __fastcall CreatePanel();
	virtual TStatusPanels* __fastcall CreatePanels();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual bool __fastcall DoHint();
	DYNAMIC void __fastcall DrawPanel(TStatusPanel* Panel, const System::Types::TRect &Rect);
	virtual TStatusPanelClass __fastcall GetPanelClass();
	HIDESBASE bool __fastcall IsFontStored();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	
public:
	__fastcall virtual TCustomStatusBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomStatusBar();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property bool AutoHint = {read=FAutoHint, write=FAutoHint, nodefault};
	__property TStatusPanels* Panels = {read=FPanels, write=SetPanels};
	__property bool SimplePanel = {read=FSimplePanel, write=SetSimplePanel, nodefault};
	__property System::UnicodeString SimpleText = {read=FSimpleText, write=SetSimpleText};
	__property bool SizeGrip = {read=FSizeGrip, write=SetSizeGrip, nodefault};
	__property bool UseSystemFont = {read=FUseSystemFont, write=SetUseSystemFont, nodefault};
	__property TSBCreatePanelClassEvent OnCreatePanelClass = {read=FOnCreatePanelClass, write=FOnCreatePanelClass};
	__property System::Classes::TNotifyEvent OnHint = {read=FOnHint, write=FOnHint};
	__property TCustomDrawPanelEvent OnDrawPanel = {read=FOnDrawPanel, write=FOnDrawPanel};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomStatusBar(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


typedef void __fastcall (__closure *TDrawPanelEvent)(TStatusBar* StatusBar, TStatusPanel* Panel, const System::Types::TRect &Rect);

class PASCALIMPLEMENTATION TStatusBar : public TCustomStatusBar
{
	typedef TCustomStatusBar inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	TDrawPanelEvent __fastcall GetOnDrawPanel();
	void __fastcall SetOnDrawPanel(const TDrawPanelEvent Value);
	
__published:
	__property Action;
	__property AutoHint = {default=0};
	__property Align = {default=2};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property Color = {default=-16777201};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font = {stored=IsFontStored};
	__property Constraints;
	__property Panels;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=0};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property SimplePanel = {default=0};
	__property SimpleText = {default=0};
	__property SizeGrip = {default=1};
	__property Touch;
	__property UseSystemFont = {default=1};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnCreatePanelClass;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnHint;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property TDrawPanelEvent OnDrawPanel = {read=GetOnDrawPanel, write=SetOnDrawPanel};
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomStatusBar.Create */ inline __fastcall virtual TStatusBar(System::Classes::TComponent* AOwner) : TCustomStatusBar(AOwner) { }
	/* TCustomStatusBar.Destroy */ inline __fastcall virtual ~TStatusBar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStatusBar(HWND ParentWindow) : TCustomStatusBar(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TCustomDrawTarget : unsigned char { dtControl, dtItem, dtSubItem };

enum DECLSPEC_DENUM TCustomDrawStage : unsigned char { cdPrePaint, cdPostPaint, cdPreErase, cdPostErase };

enum DECLSPEC_DENUM Vcl_Comctrls__9 : unsigned char { cdsSelected, cdsGrayed, cdsDisabled, cdsChecked, cdsFocused, cdsDefault, cdsHot, cdsMarked, cdsIndeterminate, cdsShowKeyboardCues, cdsNearHot, cdsOtherSideHot, cdsDropHilited };

typedef System::Set<Vcl_Comctrls__9, Vcl_Comctrls__9::cdsSelected, Vcl_Comctrls__9::cdsDropHilited> TCustomDrawState;

enum DECLSPEC_DENUM THeaderSectionStyle : unsigned char { hsText, hsOwnerDraw };

#ifndef _WIN64
typedef System::TMetaClass* THeaderSectionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, THeaderSectionClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THeaderSection : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FText;
	int FWidth;
	int FMinWidth;
	int FMaxWidth;
	System::Classes::TAlignment FAlignment;
	THeaderSectionStyle FStyle;
	bool FAllowClick;
	bool FAutoSize;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	System::Classes::TBiDiMode FBiDiMode;
	bool FParentBiDiMode;
	bool FCheckBox;
	bool FChecked;
	bool FFixedWidth;
	int __fastcall GetLeft();
	int __fastcall GetRight();
	bool __fastcall IsBiDiModeStored();
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetAutoSize(bool Value);
	void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	void __fastcall SetMaxWidth(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetParentBiDiMode(bool Value);
	void __fastcall SetStyle(THeaderSectionStyle Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetWidth(int Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetCheckBox(bool Value);
	void __fastcall SetChecked(bool Value);
	void __fastcall SetFixedWidth(bool Value);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	void __fastcall CheckImageIndexAndName();
	
public:
	__fastcall virtual THeaderSection(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall ParentBiDiModeChanged();
	bool __fastcall UseRightToLeftAlignment();
	bool __fastcall UseRightToLeftReading();
	__property int Left = {read=GetLeft, nodefault};
	__property int Right = {read=GetRight, nodefault};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AllowClick = {read=FAllowClick, write=FAllowClick, default=1};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=0};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, write=SetBiDiMode, stored=IsBiDiModeStored, nodefault};
	__property bool CheckBox = {read=FCheckBox, write=SetCheckBox, default=0};
	__property bool Checked = {read=FChecked, write=SetChecked, default=0};
	__property bool FixedWidth = {read=FFixedWidth, write=SetFixedWidth, default=0};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName};
	__property int MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=10000};
	__property int MinWidth = {read=FMinWidth, write=SetMinWidth, default=0};
	__property bool ParentBiDiMode = {read=FParentBiDiMode, write=SetParentBiDiMode, default=1};
	__property THeaderSectionStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~THeaderSection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THeaderSections : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	THeaderSection* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomHeaderControl* FHeaderControl;
	HIDESBASE THeaderSection* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, THeaderSection* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall THeaderSections(TCustomHeaderControl* HeaderControl);
	HIDESBASE THeaderSection* __fastcall Add();
	THeaderSection* __fastcall AddItem(THeaderSection* Item, int Index);
	HIDESBASE THeaderSection* __fastcall Insert(int Index);
	__property THeaderSection* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TCustomHeaderControl* HeaderControl = {read=FHeaderControl};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~THeaderSections() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSectionTrackState : unsigned char { tsTrackBegin, tsTrackMove, tsTrackEnd };

typedef void __fastcall (__closure *TCustomDrawSectionEvent)(TCustomHeaderControl* HeaderControl, THeaderSection* Section, const System::Types::TRect &Rect, bool Pressed);

typedef void __fastcall (__closure *TCustomSectionNotifyEvent)(TCustomHeaderControl* HeaderControl, THeaderSection* Section);

typedef void __fastcall (__closure *TCustomSectionTrackEvent)(TCustomHeaderControl* HeaderControl, THeaderSection* Section, int Width, TSectionTrackState State);

typedef void __fastcall (__closure *TSectionDragEvent)(System::TObject* Sender, THeaderSection* FromSection, THeaderSection* ToSection, bool &AllowDrag);

typedef void __fastcall (__closure *TCustomHCCreateSectionClassEvent)(TCustomHeaderControl* Sender, THeaderSectionClass &SectionClass);

enum DECLSPEC_DENUM THeaderStyle : unsigned char { hsButtons, hsFlat };

class PASCALIMPLEMENTATION TCustomHeaderControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	THeaderSections* FSections;
	System::Classes::TMemoryStream* FSectionStream;
	bool FUpdatingSectionOrder;
	bool FSectionDragged;
	Vcl::Graphics::TCanvas* FCanvas;
	int FFromIndex;
	int FToIndex;
	bool FFullDrag;
	bool FHotTrack;
	bool FDragReorder;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	THeaderStyle FStyle;
	THeaderSection* FTrackSection;
	int FTrackWidth;
	System::Types::TPoint FTrackPos;
	TCustomDrawSectionEvent FOnDrawSection;
	TCustomSectionNotifyEvent FOnSectionClick;
	TCustomSectionNotifyEvent FOnSectionCheck;
	TCustomSectionNotifyEvent FOnSectionResize;
	TCustomSectionTrackEvent FOnSectionTrack;
	TSectionDragEvent FOnSectionDrag;
	System::Classes::TNotifyEvent FOnSectionEndDrag;
	TCustomHCCreateSectionClassEvent FOnCreateSectionClass;
	bool FCheckBoxes;
	bool FNoSizing;
	bool FOverflow;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	THeaderSection* __fastcall GetSectionFromIndex(int Index);
	bool __fastcall DoSectionDrag(THeaderSection* FromSection, THeaderSection* ToSection);
	void __fastcall DoSectionEndDrag();
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetDragReorder(const bool Value);
	void __fastcall SetFullDrag(bool Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetSections(THeaderSections* Value);
	void __fastcall SetStyle(THeaderStyle Value);
	void __fastcall SetCheckBoxes(bool Value);
	void __fastcall SetNoSizing(bool Value);
	void __fastcall SetOverflow(bool Value);
	void __fastcall UpdateItem(int Message, int Index);
	void __fastcall UpdateSection(int Index);
	void __fastcall UpdateSections();
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyHC &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	
protected:
	virtual THeaderSection* __fastcall CreateSection();
	virtual THeaderSections* __fastcall CreateSections();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall DestroyWnd();
	DYNAMIC void __fastcall DrawSection(THeaderSection* Section, const System::Types::TRect &Rect, bool Pressed);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall SectionClick(THeaderSection* Section);
	DYNAMIC void __fastcall SectionCheck(THeaderSection* Section);
	DYNAMIC void __fastcall SectionDrag(THeaderSection* FromSection, THeaderSection* ToSection, bool &AllowDrag);
	DYNAMIC void __fastcall SectionEndDrag();
	DYNAMIC void __fastcall SectionResize(THeaderSection* Section);
	DYNAMIC void __fastcall SectionTrack(THeaderSection* Section, int Width, TSectionTrackState State);
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomHeaderControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomHeaderControl();
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	
__published:
	__property Align = {default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property bool DragReorder = {read=FDragReorder, write=SetDragReorder, default=0};
	__property bool FullDrag = {read=FFullDrag, write=SetFullDrag, nodefault};
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, nodefault};
	__property Enabled = {default=1};
	__property Font;
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Constraints;
	__property THeaderSections* Sections = {read=FSections, write=SetSections};
	__property THeaderStyle Style = {read=FStyle, write=SetStyle, nodefault};
	__property TCustomHCCreateSectionClassEvent OnCreateSectionClass = {read=FOnCreateSectionClass, write=FOnCreateSectionClass};
	__property TCustomDrawSectionEvent OnDrawSection = {read=FOnDrawSection, write=FOnDrawSection};
	__property TCustomSectionNotifyEvent OnSectionClick = {read=FOnSectionClick, write=FOnSectionClick};
	__property TCustomSectionNotifyEvent OnSectionCheck = {read=FOnSectionCheck, write=FOnSectionCheck};
	__property TSectionDragEvent OnSectionDrag = {read=FOnSectionDrag, write=FOnSectionDrag};
	__property System::Classes::TNotifyEvent OnSectionEndDrag = {read=FOnSectionEndDrag, write=FOnSectionEndDrag};
	__property TCustomSectionNotifyEvent OnSectionResize = {read=FOnSectionResize, write=FOnSectionResize};
	__property TCustomSectionTrackEvent OnSectionTrack = {read=FOnSectionTrack, write=FOnSectionTrack};
	__property bool CheckBoxes = {read=FCheckBoxes, write=SetCheckBoxes, default=0};
	__property bool NoSizing = {read=FNoSizing, write=SetNoSizing, default=0};
	__property bool OverFlow = {read=FOverflow, write=SetOverflow, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomHeaderControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


typedef void __fastcall (__closure *TDrawSectionEvent)(THeaderControl* HeaderControl, THeaderSection* Section, const System::Types::TRect &Rect, bool Pressed);

typedef void __fastcall (__closure *TSectionNotifyEvent)(THeaderControl* HeaderControl, THeaderSection* Section);

typedef void __fastcall (__closure *TSectionTrackEvent)(THeaderControl* HeaderControl, THeaderSection* Section, int Width, TSectionTrackState State);

typedef void __fastcall (__closure *THCCreateSectionClassEvent)(THeaderControl* Sender, THeaderSectionClass &SectionClass);

class PASCALIMPLEMENTATION THeaderControl : public TCustomHeaderControl
{
	typedef TCustomHeaderControl inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	TDrawSectionEvent __fastcall GetOnDrawSection();
	TSectionNotifyEvent __fastcall GetOnSectionClick();
	TSectionNotifyEvent __fastcall GetOnSectionResize();
	TSectionTrackEvent __fastcall GetOnSectionTrack();
	void __fastcall SetOnDrawSection(const TDrawSectionEvent Value);
	void __fastcall SetOnSectionClick(const TSectionNotifyEvent Value);
	void __fastcall SetOnSectionResize(const TSectionNotifyEvent Value);
	void __fastcall SetOnSectionTrack(const TSectionTrackEvent Value);
	
__published:
	__property Align = {default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DragReorder = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FullDrag = {default=1};
	__property HotTrack = {default=0};
	__property Images;
	__property Constraints;
	__property Sections;
	__property ShowHint;
	__property Style = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnContextPopup;
	__property OnCreateSectionClass;
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
	__property OnResize;
	__property TDrawSectionEvent OnDrawSection = {read=GetOnDrawSection, write=SetOnDrawSection};
	__property TSectionNotifyEvent OnSectionClick = {read=GetOnSectionClick, write=SetOnSectionClick};
	__property TSectionNotifyEvent OnSectionResize = {read=GetOnSectionResize, write=SetOnSectionResize};
	__property TSectionTrackEvent OnSectionTrack = {read=GetOnSectionTrack, write=SetOnSectionTrack};
	__property OnSectionDrag;
	__property OnSectionEndDrag;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomHeaderControl.Create */ inline __fastcall virtual THeaderControl(System::Classes::TComponent* AOwner) : TCustomHeaderControl(AOwner) { }
	/* TCustomHeaderControl.Destroy */ inline __fastcall virtual ~THeaderControl() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall THeaderControl(HWND ParentWindow) : TCustomHeaderControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TNodeState : unsigned char { nsCut, nsDropHilited, nsFocused, nsSelected, nsExpanded };

enum DECLSPEC_DENUM TNodeCheckState : unsigned char { ncsNone, ncsUnchecked, ncsChecked, ncsPartial, ncsDimmed, ncsExclusion };

enum DECLSPEC_DENUM TNodeAttachMode : unsigned char { naAdd, naAddFirst, naAddChild, naAddChildFirst, naInsert };

enum DECLSPEC_DENUM TAddMode : unsigned char { taAddFirst, taAdd, taInsert };

typedef TNodeInfo *PNodeInfo;

struct DECLSPEC_DRECORD TNodeInfo
{
public:
	int ImageIndex;
	int SelectedIndex;
	int StateIndex;
	int OverlayIndex;
	int Data;
	int Count;
	System::SmallString<255> Text;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TNodeDataInfo
{
public:
	int ImageIndex;
	int SelectedIndex;
	int StateIndex;
	int OverlayIndex;
	void *Data;
	int Count;
	System::Byte TextLen;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TNodeDataInfoX86
{
public:
	int ImageIndex;
	int SelectedIndex;
	int StateIndex;
	int OverlayIndex;
	int Data;
	int Count;
	System::Byte TextLen;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TNodeDataInfo2
{
public:
	int ImageIndex;
	int SelectedIndex;
	int StateIndex;
	int OverlayIndex;
	int ExpandedIndex;
	void *Data;
	int Count;
	System::Byte Enabled;
	System::Byte TextLen;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TNodeDataInfo2x86
{
public:
	int ImageIndex;
	int SelectedIndex;
	int StateIndex;
	int OverlayIndex;
	int ExpandedIndex;
	int Data;
	int Count;
	System::Byte Enabled;
	System::Byte TextLen;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TNodeDataInfo2x64
{
public:
	int ImageIndex;
	int SelectedIndex;
	int StateIndex;
	int OverlayIndex;
	int ExpandedIndex;
	__int64 Data;
	int Count;
	System::Byte Enabled;
	System::Byte TextLen;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TNodeDataType : unsigned char { ndtDefault, ndtDefault2, ndt32bit, ndt64bit, ndt232bit, ndt264bit };

enum DECLSPEC_DENUM TTVItemStateEx : unsigned char { tviDisabled, tviFlat };

typedef System::Set<TTVItemStateEx, TTVItemStateEx::tviDisabled, TTVItemStateEx::tviFlat> TTVItemStateExSet;

#ifndef _WIN64
typedef System::TMetaClass* TTreeNodeClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TTreeNodeClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTreeNode : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	TTreeNode* operator[](int Index) { return this->Item[Index]; }
	
private:
	TTreeNodes* FOwner;
	System::UnicodeString FText;
	void *FData;
	_TREEITEM *FItemId;
	System::Uitypes::TImageIndex FImageIndex;
	int FSelectedIndex;
	int FOverlayIndex;
	int FStateIndex;
	bool FDeleting;
	bool FInTree;
	bool FEnabled;
	System::Uitypes::TImageIndex FExpandedImageIndex;
	bool __fastcall CompareCount(int CompareMe);
	bool __fastcall DoCanExpand(bool Expand);
	void __fastcall DoExpand(bool Expand);
	void __fastcall ExpandItem(bool Expand, bool Recurse);
	int __fastcall GetAbsoluteIndex();
	bool __fastcall GetExpanded();
	int __fastcall GetLevel();
	TTreeNode* __fastcall GetParent();
	bool __fastcall GetChildren();
	bool __fastcall GetCut();
	bool __fastcall GetDropHighlighted();
	bool __fastcall GetDropTarget();
	bool __fastcall GetFocused();
	int __fastcall GetIndex();
	TTreeNode* __fastcall GetItem(int Index);
	bool __fastcall GetSelected();
	int __fastcall GetCount();
	TCustomTreeView* __fastcall GetTreeView();
	void __fastcall InternalMove(TTreeNode* ParentNode, TTreeNode* Node, HTREEITEM HItem, TAddMode AddMode);
	bool __fastcall IsEqual(TTreeNode* Node);
	bool __fastcall IsNodeVisible();
	void __fastcall SetData(void * Value);
	void __fastcall SetChildren(bool Value);
	void __fastcall SetCut(bool Value);
	void __fastcall SetDropHighlighted(bool Value);
	void __fastcall SetDropTarget(bool Value);
	void __fastcall SetItem(int Index, TTreeNode* Value);
	void __fastcall SetExpanded(bool Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetExpandedImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetOverlayIndex(int Value);
	void __fastcall SetSelectedIndex(int Value);
	void __fastcall SetSelected(bool Value);
	void __fastcall SetStateIndex(int Value);
	void __fastcall SetText(const System::UnicodeString S);
	void __fastcall SetEnabled(bool Value);
	void __fastcall ReadData(System::Classes::TStream* Stream, PNodeInfo Info);
	void __fastcall ReadNodeData(System::Classes::TStream* Stream, TNodeDataType NodeDataType);
	void __fastcall WriteNodeData(System::Classes::TStream* Stream);
	
protected:
	bool __fastcall GetState(TNodeState NodeState);
	void __fastcall SetState(TNodeState NodeState, bool Value);
	bool __fastcall GetChecked();
	void __fastcall SetChecked(bool Value);
	TNodeCheckState __fastcall GetCheckState();
	void __fastcall SetCheckState(TNodeCheckState Value);
	void __fastcall SetSelectedBit(bool Value);
	
public:
	__fastcall virtual TTreeNode(TTreeNodes* AOwner);
	__fastcall virtual ~TTreeNode();
	bool __fastcall AlphaSort(bool ARecurse = false);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Collapse(bool Recurse);
	void __fastcall Delete();
	void __fastcall DeleteChildren();
	System::Types::TRect __fastcall DisplayRect(bool TextOnly);
	bool __fastcall EditText();
	void __fastcall EndEdit(bool Cancel);
	void __fastcall Expand(bool Recurse);
	TTreeNode* __fastcall getFirstChild();
	HWND __fastcall GetHandle();
	TTreeNode* __fastcall GetLastChild();
	TTreeNode* __fastcall GetNext();
	TTreeNode* __fastcall GetNextChild(TTreeNode* Value);
	TTreeNode* __fastcall getNextSibling();
	TTreeNode* __fastcall GetNextVisible();
	TTreeNode* __fastcall GetPrev();
	TTreeNode* __fastcall GetPrevChild(TTreeNode* Value);
	TTreeNode* __fastcall getPrevSibling();
	TTreeNode* __fastcall GetPrevVisible();
	bool __fastcall HasAsParent(TTreeNode* Value);
	int __fastcall IndexOf(TTreeNode* Value);
	void __fastcall MakeVisible();
	virtual void __fastcall MoveTo(TTreeNode* Destination, TNodeAttachMode Mode);
	bool __fastcall IsFirstNode();
	bool __fastcall CustomSort(PFNTVCOMPARE SortProc, NativeInt Data, bool ARecurse = false);
	__property int AbsoluteIndex = {read=GetAbsoluteIndex, nodefault};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property TNodeCheckState CheckState = {read=GetCheckState, write=SetCheckState, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property bool Cut = {read=GetCut, write=SetCut, nodefault};
	__property void * Data = {read=FData, write=SetData};
	__property bool Deleting = {read=FDeleting, nodefault};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property bool DropHighlighted = {read=GetDropHighlighted, write=SetDropHighlighted, nodefault};
	__property bool DropTarget = {read=GetDropTarget, write=SetDropTarget, nodefault};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	__property bool Expanded = {read=GetExpanded, write=SetExpanded, nodefault};
	__property System::Uitypes::TImageIndex ExpandedImageIndex = {read=FExpandedImageIndex, write=SetExpandedImageIndex, nodefault};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property bool HasChildren = {read=GetChildren, write=SetChildren, nodefault};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property int Index = {read=GetIndex, nodefault};
	__property bool IsVisible = {read=IsNodeVisible, nodefault};
	__property TTreeNode* Item[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property HTREEITEM ItemId = {read=FItemId};
	__property int Level = {read=GetLevel, nodefault};
	__property int OverlayIndex = {read=FOverlayIndex, write=SetOverlayIndex, nodefault};
	__property TTreeNodes* Owner = {read=FOwner};
	__property TTreeNode* Parent = {read=GetParent};
	__property int SelectedIndex = {read=FSelectedIndex, write=SetSelectedIndex, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property int StateIndex = {read=FStateIndex, write=SetStateIndex, nodefault};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property TCustomTreeView* TreeView = {read=GetTreeView};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTreeNodesEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TTreeNodes* FTreeNodes;
	
public:
	__fastcall TTreeNodesEnumerator(TTreeNodes* ATreeNodes);
	TTreeNode* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TTreeNode* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTreeNodesEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TNodeCache *PNodeCache;

struct DECLSPEC_DRECORD TNodeCache
{
public:
	TTreeNode* CacheNode;
	int CacheIndex;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTreeNodes : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	TTreeNode* operator[](int Index) { return this->Item[Index]; }
	
private:
	TCustomTreeView* FOwner;
	int FUpdateCount;
	TNodeCache FNodeCache;
	void __fastcall AddedNode(TTreeNode* Value);
	HWND __fastcall GetHandle();
	TTreeNode* __fastcall GetNodeFromIndex(int Index);
	void __fastcall ReadData(System::Classes::TStream* Stream);
	void __fastcall ReadNodeData(System::Classes::TStream* Stream);
	void __fastcall Repaint(TTreeNode* Node);
	void __fastcall WriteNodeData(System::Classes::TStream* Stream);
	void __fastcall ClearCache();
	void __fastcall WriteExpandedState(System::Classes::TStream* Stream);
	void __fastcall ReadExpandedState(System::Classes::TStream* Stream);
	bool __fastcall GetReading();
	
protected:
	HTREEITEM __fastcall AddItem(HTREEITEM Parent, HTREEITEM Target, const tagTVITEMW &Item, TAddMode AddMode);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	tagTVITEMW __fastcall CreateItem(TTreeNode* Node);
	int __fastcall GetCount();
	void __fastcall SetItem(int Index, TTreeNode* Value);
	void __fastcall SetUpdateState(bool Updating);
	__property bool Reading = {read=GetReading, nodefault};
	
public:
	__fastcall TTreeNodes(TCustomTreeView* AOwner);
	__fastcall virtual ~TTreeNodes();
	TTreeNode* __fastcall AddChildFirst(TTreeNode* Parent, const System::UnicodeString S);
	TTreeNode* __fastcall AddChild(TTreeNode* Parent, const System::UnicodeString S);
	TTreeNode* __fastcall AddChildObjectFirst(TTreeNode* Parent, const System::UnicodeString S, void * Ptr);
	TTreeNode* __fastcall AddChildObject(TTreeNode* Parent, const System::UnicodeString S, void * Ptr);
	TTreeNode* __fastcall AddObjectFirst(TTreeNode* Sibling, const System::UnicodeString S, void * Ptr);
	TTreeNode* __fastcall AddObject(TTreeNode* Sibling, const System::UnicodeString S, void * Ptr);
	TTreeNode* __fastcall AddNode(TTreeNode* Node, TTreeNode* Relative, const System::UnicodeString S, void * Ptr, TNodeAttachMode Method);
	TTreeNode* __fastcall AddFirst(TTreeNode* Sibling, const System::UnicodeString S);
	TTreeNode* __fastcall Add(TTreeNode* Sibling, const System::UnicodeString S);
	bool __fastcall AlphaSort(bool ARecurse = false);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate();
	void __fastcall Clear();
	void __fastcall Delete(TTreeNode* Node);
	void __fastcall EndUpdate();
	TTreeNode* __fastcall GetFirstNode();
	TTreeNodesEnumerator* __fastcall GetEnumerator();
	TTreeNode* __fastcall GetNode(HTREEITEM ItemId);
	TTreeNode* __fastcall Insert(TTreeNode* Sibling, const System::UnicodeString S);
	TTreeNode* __fastcall InsertObject(TTreeNode* Sibling, const System::UnicodeString S, void * Ptr);
	TTreeNode* __fastcall InsertNode(TTreeNode* Node, TTreeNode* Sibling, const System::UnicodeString S, void * Ptr);
	bool __fastcall CustomSort(PFNTVCOMPARE SortProc, NativeInt Data, bool ARecurse = false);
	__property int Count = {read=GetCount, nodefault};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property TTreeNode* Item[int Index] = {read=GetNodeFromIndex/*, default*/};
	__property TCustomTreeView* Owner = {read=FOwner};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSortType : unsigned char { stNone, stData, stText, stBoth };

enum DECLSPEC_DENUM TMultiSelectStyles : unsigned char { msControlSelect, msShiftSelect, msVisibleOnly, msSiblingOnly };

typedef System::Set<TMultiSelectStyles, TMultiSelectStyles::msControlSelect, TMultiSelectStyles::msSiblingOnly> TMultiSelectStyle;

enum DECLSPEC_DENUM TCheckStyle : unsigned char { csPartial, csDimmed, csExclusion };

typedef System::Set<TCheckStyle, TCheckStyle::csPartial, TCheckStyle::csExclusion> TCheckStyles;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ETreeViewError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETreeViewError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETreeViewError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETreeViewError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETreeViewError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETreeViewError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETreeViewError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETreeViewError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETreeViewError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETreeViewError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETreeViewError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETreeViewError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETreeViewError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETreeViewError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TTVChangingEvent)(System::TObject* Sender, TTreeNode* Node, bool &AllowChange);

typedef void __fastcall (__closure *TTVChangedEvent)(System::TObject* Sender, TTreeNode* Node);

typedef void __fastcall (__closure *TTVEditingEvent)(System::TObject* Sender, TTreeNode* Node, bool &AllowEdit);

typedef void __fastcall (__closure *TTVEditedEvent)(System::TObject* Sender, TTreeNode* Node, System::UnicodeString &S);

typedef void __fastcall (__closure *TTVExpandingEvent)(System::TObject* Sender, TTreeNode* Node, bool &AllowExpansion);

typedef void __fastcall (__closure *TTVCollapsingEvent)(System::TObject* Sender, TTreeNode* Node, bool &AllowCollapse);

typedef void __fastcall (__closure *TTVExpandedEvent)(System::TObject* Sender, TTreeNode* Node);

typedef void __fastcall (__closure *TTVCompareEvent)(System::TObject* Sender, TTreeNode* Node1, TTreeNode* Node2, int Data, int &Compare);

typedef void __fastcall (__closure *TTVHintEvent)(System::TObject* Sender, TTreeNode* const Node, System::UnicodeString &Hint);

typedef void __fastcall (__closure *TTVCustomDrawEvent)(TCustomTreeView* Sender, const System::Types::TRect &ARect, bool &DefaultDraw);

typedef void __fastcall (__closure *TTVCustomDrawItemEvent)(TCustomTreeView* Sender, TTreeNode* Node, TCustomDrawState State, bool &DefaultDraw);

typedef void __fastcall (__closure *TTVAdvancedCustomDrawEvent)(TCustomTreeView* Sender, const System::Types::TRect &ARect, TCustomDrawStage Stage, bool &DefaultDraw);

typedef void __fastcall (__closure *TTVAdvancedCustomDrawItemEvent)(TCustomTreeView* Sender, TTreeNode* Node, TCustomDrawState State, TCustomDrawStage Stage, bool &PaintImages, bool &DefaultDraw);

typedef void __fastcall (__closure *TTVCreateNodeClassEvent)(TCustomTreeView* Sender, TTreeNodeClass &NodeClass);

typedef void __fastcall (__closure *TTVCheckStateChangedEvent)(TCustomTreeView* Sender, TTreeNode* Node, TNodeCheckState CheckState);

typedef void __fastcall (__closure *TTVCheckStateChangingEvent)(TCustomTreeView* Sender, TTreeNode* Node, TNodeCheckState NewCheckState, TNodeCheckState OldCheckState, bool &AllowChange);

typedef void * TTVEditInstance;

class PASCALIMPLEMENTATION TCustomTreeView : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	bool FAutoExpand;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	Vcl::Graphics::TCanvas* FCanvas;
	bool FCanvasChanged;
	void *FDefEditProc;
	void *FEditInstance;
	bool FDragged;
	Vcl::Controls::TDragImageList* FDragImage;
	TTreeNode* FDragNode;
	HWND FEditHandle;
	bool FHideSelection;
	bool FHotTrack;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FInBufferedPrintClient;
	TTreeNode* FLastDropTarget;
	System::Classes::TMemoryStream* FMemStream;
	TTreeNode* FRClickNode;
	bool FRightClickSelect;
	bool FManualNotify;
	bool FReadOnly;
	bool FRowSelect;
	int FSaveIndex;
	int FSaveIndent;
	System::Classes::TStringList* FSaveItems;
	int FSaveTopIndex;
	bool FShowButtons;
	bool FShowLines;
	bool FShowRoot;
	TSortType FSortType;
	bool FStateChanging;
	Vcl::Imglist::TCustomImageList* FStateImages;
	Vcl::Imglist::TChangeLink* FStateChangeLink;
	bool FToolTips;
	TTreeNodes* FTreeNodes;
	System::WideString FWideText;
	bool FMultiSelect;
	TMultiSelectStyle FMultiSelectStyle;
	System::Classes::TList* FSelections;
	System::Classes::TList* FSaveIndexes;
	TTreeNode* FShiftAnchor;
	bool FSelecting;
	bool FSelectChanged;
	int FOurFont;
	int FStockFont;
	bool FCreateWndRestores;
	bool FReading;
	System::Sysutils::TEncoding* FEncoding;
	bool FCheckBoxes;
	TCheckStyles FCheckStyles;
	int FDisableCheckStateEventsCount;
	System::StaticArray<int, 6> FNodeCheckStateImageIndices;
	TTVAdvancedCustomDrawEvent FOnAdvancedCustomDraw;
	TTVAdvancedCustomDrawItemEvent FOnAdvancedCustomDrawItem;
	TTVChangedEvent FOnCancelEdit;
	TTVChangedEvent FOnChange;
	TTVChangingEvent FOnChanging;
	TTVExpandedEvent FOnCollapsed;
	TTVCollapsingEvent FOnCollapsing;
	TTVCompareEvent FOnCompare;
	TTVCustomDrawEvent FOnCustomDraw;
	TTVCustomDrawItemEvent FOnCustomDrawItem;
	TTVExpandedEvent FOnDeletion;
	TTVExpandedEvent FOnAddition;
	TTVEditingEvent FOnEditing;
	TTVEditedEvent FOnEdited;
	TTVExpandedEvent FOnExpanded;
	TTVExpandingEvent FOnExpanding;
	TTVExpandedEvent FOnGetImageIndex;
	TTVExpandedEvent FOnGetSelectedIndex;
	TTVHintEvent FOnHint;
	TTVCreateNodeClassEvent FOnCreateNodeClass;
	TTVCheckStateChangedEvent FOnCheckStateChanged;
	TTVCheckStateChangingEvent FOnCheckStateChanging;
	System::Classes::TNotifyEvent FOldBrushChange;
	System::Classes::TNotifyEvent FOldFontChange;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall CanvasBrushChanged(System::TObject* Sender);
	void __fastcall CanvasFontChanged(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDrag(Vcl::Controls::TCMDrag &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyTV &Message);
	void __fastcall EditWndProc(Winapi::Messages::TMessage &Message);
	void __fastcall DoDragOver(Vcl::Controls::TDragObject* Source, int X, int Y, bool CanDrop);
	void __fastcall NodeDeselect(int Index);
	void __fastcall NodeSelect(TTreeNode* Node, int At = 0x0);
	void __fastcall FinishSelection(TTreeNode* Node, System::Classes::TShiftState ShiftState);
	void __fastcall ControlSelectNode(TTreeNode* Node);
	void __fastcall ShiftSelectNode(TTreeNode* Node, bool Backward, bool Deselect = true);
	void __fastcall ControlShiftSelectNode(TTreeNode* Node, bool Backward);
	void __fastcall SelectNode(TTreeNode* Node);
	int __fastcall GetChangeDelay();
	TTreeNode* __fastcall GetDropTarget();
	int __fastcall GetIndent();
	TTreeNode* __fastcall GetNodeFromItem(const tagTVITEMW &Item);
	TTreeNode* __fastcall GetSelected();
	unsigned __fastcall GetSelectionCount();
	TTreeNode* __fastcall GetSelection(int Index);
	TTreeNode* __fastcall GetTopItem();
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetAutoExpand(bool Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetButtonStyle(bool Value);
	void __fastcall SetChangeDelay(int Value);
	void __fastcall SetCheckBoxes(bool Value);
	void __fastcall SetCheckStyles(TCheckStyles Value);
	void __fastcall SetDropTarget(TTreeNode* Value);
	void __fastcall SetHideSelection(bool Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetImageList(NativeUInt Value, int Flags);
	void __fastcall SetIndent(int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetLineStyle(bool Value);
	void __fastcall SetMultiSelect(const bool Value);
	void __fastcall SetMultiSelectStyle(const TMultiSelectStyle Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetRootStyle(bool Value);
	void __fastcall SetRowSelect(bool Value);
	void __fastcall SetSelected(TTreeNode* Value);
	void __fastcall SetSortType(TSortType Value);
	void __fastcall SetStateImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetToolTips(bool Value);
	void __fastcall SetTreeNodes(TTreeNodes* Value);
	void __fastcall SetTopItem(TTreeNode* Value);
	void __fastcall SetDPIScaling(bool Value);
	void __fastcall OnChangeTimer(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall WMCtlColorEdit(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	TNodeCheckState __fastcall StateImageMaskToCheckState(int StateImageMask);
	
protected:
	Vcl::Extctrls::TTimer* FChangeTimer;
	DYNAMIC bool __fastcall CanEdit(TTreeNode* Node);
	DYNAMIC bool __fastcall CanChange(TTreeNode* Node);
	DYNAMIC bool __fastcall CanCollapse(TTreeNode* Node);
	DYNAMIC bool __fastcall CanExpand(TTreeNode* Node);
	DYNAMIC void __fastcall Change(TTreeNode* Node);
	DYNAMIC void __fastcall Collapse(TTreeNode* Node);
	virtual TTreeNode* __fastcall CreateNode();
	virtual TTreeNodes* __fastcall CreateNodes();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual bool __fastcall CustomDraw(const System::Types::TRect &ARect, TCustomDrawStage Stage);
	virtual bool __fastcall CustomDrawItem(TTreeNode* Node, TCustomDrawState State, TCustomDrawStage Stage, bool &PaintImages);
	DYNAMIC void __fastcall Delete(TTreeNode* Node);
	DYNAMIC void __fastcall Added(TTreeNode* Node);
	virtual void __fastcall DestroyWnd();
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall Edit(const tagTVITEMW &Item);
	DYNAMIC void __fastcall Expand(TTreeNode* Node);
	virtual void __fastcall GetImageIndex(TTreeNode* Node);
	virtual void __fastcall GetSelectedIndex(TTreeNode* Node);
	virtual bool __fastcall IsCustomDrawn(TCustomDrawTarget Target, TCustomDrawStage Stage);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetDragMode(System::Uitypes::TDragMode Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall ValidateSelection();
	void __fastcall InvalidateSelectionsRects();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall DoCheckStateChanged(TTreeNode* Node, TNodeCheckState CheckState);
	virtual bool __fastcall DoCheckStateChanging(TTreeNode* Node, TNodeCheckState NewCheckState, TNodeCheckState OldCheckState);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall DoExit();
	DYNAMIC bool __fastcall IsTouchPropertyStored(Vcl::Controls::TTouchProperty AProperty);
	void __fastcall SetEncoding(System::Sysutils::TEncoding* Value);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	__property bool AutoExpand = {read=FAutoExpand, write=SetAutoExpand, default=0};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property int ChangeDelay = {read=GetChangeDelay, write=SetChangeDelay, default=0};
	__property bool CheckBoxes = {read=FCheckBoxes, write=SetCheckBoxes, default=0};
	__property TCheckStyles CheckStyles = {read=FCheckStyles, write=SetCheckStyles, default=0};
	__property bool CreateWndRestores = {read=FCreateWndRestores, write=FCreateWndRestores, default=1};
	__property System::Sysutils::TEncoding* Encoding = {read=FEncoding};
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, default=1};
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int Indent = {read=GetIndent, write=SetIndent, nodefault};
	__property TTreeNodes* Items = {read=FTreeNodes, write=SetTreeNodes};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=0};
	__property TMultiSelectStyle MultiSelectStyle = {read=FMultiSelectStyle, write=SetMultiSelectStyle, default=1};
	__property bool Reading = {read=FReading, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property bool RightClickSelect = {read=FRightClickSelect, write=FRightClickSelect, default=0};
	__property bool RowSelect = {read=FRowSelect, write=SetRowSelect, default=0};
	__property bool ShowButtons = {read=FShowButtons, write=SetButtonStyle, default=1};
	__property bool ShowLines = {read=FShowLines, write=SetLineStyle, default=1};
	__property bool ShowRoot = {read=FShowRoot, write=SetRootStyle, default=1};
	__property TSortType SortType = {read=FSortType, write=SetSortType, default=0};
	__property Vcl::Imglist::TCustomImageList* StateImages = {read=FStateImages, write=SetStateImages};
	__property bool ToolTips = {read=FToolTips, write=SetToolTips, default=1};
	__property TTVExpandedEvent OnAddition = {read=FOnAddition, write=FOnAddition};
	__property TTVAdvancedCustomDrawEvent OnAdvancedCustomDraw = {read=FOnAdvancedCustomDraw, write=FOnAdvancedCustomDraw};
	__property TTVAdvancedCustomDrawItemEvent OnAdvancedCustomDrawItem = {read=FOnAdvancedCustomDrawItem, write=FOnAdvancedCustomDrawItem};
	__property TTVChangedEvent OnCancelEdit = {read=FOnCancelEdit, write=FOnCancelEdit};
	__property TTVChangedEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TTVChangingEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property TTVCheckStateChangedEvent OnCheckStateChanged = {read=FOnCheckStateChanged, write=FOnCheckStateChanged};
	__property TTVCheckStateChangingEvent OnCheckStateChanging = {read=FOnCheckStateChanging, write=FOnCheckStateChanging};
	__property TTVExpandedEvent OnCollapsed = {read=FOnCollapsed, write=FOnCollapsed};
	__property TTVCollapsingEvent OnCollapsing = {read=FOnCollapsing, write=FOnCollapsing};
	__property TTVCompareEvent OnCompare = {read=FOnCompare, write=FOnCompare};
	__property TTVCustomDrawEvent OnCustomDraw = {read=FOnCustomDraw, write=FOnCustomDraw};
	__property TTVCustomDrawItemEvent OnCustomDrawItem = {read=FOnCustomDrawItem, write=FOnCustomDrawItem};
	__property TTVExpandedEvent OnDeletion = {read=FOnDeletion, write=FOnDeletion};
	__property TTVEditingEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	__property TTVEditedEvent OnEdited = {read=FOnEdited, write=FOnEdited};
	__property TTVExpandingEvent OnExpanding = {read=FOnExpanding, write=FOnExpanding};
	__property TTVExpandedEvent OnExpanded = {read=FOnExpanded, write=FOnExpanded};
	__property TTVExpandedEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	__property TTVExpandedEvent OnGetSelectedIndex = {read=FOnGetSelectedIndex, write=FOnGetSelectedIndex};
	__property TTVHintEvent OnHint = {read=FOnHint, write=FOnHint};
	__property TTVCreateNodeClassEvent OnCreateNodeClass = {read=FOnCreateNodeClass, write=FOnCreateNodeClass};
	
public:
	__fastcall virtual TCustomTreeView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomTreeView();
	bool __fastcall AlphaSort(bool ARecurse = true);
	void __fastcall FullCollapse();
	void __fastcall FullExpand();
	THitTests __fastcall GetHitTestInfoAt(int X, int Y);
	TTreeNode* __fastcall GetNodeAt(int X, int Y);
	virtual Vcl::Controls::TDragImageList* __fastcall GetDragImages();
	bool __fastcall IsEditing();
	void __fastcall LoadFromFile(const System::UnicodeString FileName)/* overload */;
	void __fastcall LoadFromFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* Stream)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* Stream, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall SaveToFile(const System::UnicodeString FileName)/* overload */;
	void __fastcall SaveToFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* AEncoding)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* Stream)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* Stream, System::Sysutils::TEncoding* AEncoding)/* overload */;
	virtual void __fastcall Select(TTreeNode* Node, System::Classes::TShiftState ShiftState = System::Classes::TShiftState() )/* overload */;
	virtual void __fastcall Select(TTreeNode* const *Nodes, const int Nodes_High)/* overload */;
	virtual void __fastcall Select(System::Classes::TList* Nodes)/* overload */;
	virtual void __fastcall Deselect(TTreeNode* Node);
	virtual void __fastcall Subselect(TTreeNode* Node, bool Validate = false);
	virtual void __fastcall ClearSelection(bool KeepPrimary = false);
	TTreeNode* __fastcall GetSelections(System::Classes::TList* AList);
	virtual TTreeNode* __fastcall FindNextToSelect();
	bool __fastcall CustomSort(PFNTVCOMPARE SortProc, NativeInt Data, bool ARecurse = true);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property TTreeNode* DropTarget = {read=GetDropTarget, write=SetDropTarget};
	__property TTreeNode* Selected = {read=GetSelected, write=SetSelected};
	__property TTreeNode* TopItem = {read=GetTopItem, write=SetTopItem};
	__property unsigned SelectionCount = {read=GetSelectionCount, nodefault};
	__property TTreeNode* Selections[int Index] = {read=GetSelection};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomTreeView(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TTreeView : public TCustomTreeView
{
	typedef TCustomTreeView inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoExpand = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property ChangeDelay = {default=0};
	__property CheckBoxes = {default=0};
	__property CheckStyles = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Constraints;
	__property DoubleBuffered;
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property Images;
	__property Indent;
	__property MultiSelect = {default=0};
	__property MultiSelectStyle = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property RightClickSelect = {default=0};
	__property RowSelect = {default=0};
	__property ShowButtons = {default=1};
	__property ShowHint;
	__property ShowLines = {default=1};
	__property ShowRoot = {default=1};
	__property SortType = {default=0};
	__property StateImages;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ToolTips = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAddition;
	__property OnAdvancedCustomDraw;
	__property OnAdvancedCustomDrawItem;
	__property OnCancelEdit;
	__property OnChange;
	__property OnChanging;
	__property OnCheckStateChanged;
	__property OnCheckStateChanging;
	__property OnClick;
	__property OnCollapsed;
	__property OnCollapsing;
	__property OnCompare;
	__property OnContextPopup;
	__property OnCreateNodeClass;
	__property OnCustomDraw;
	__property OnCustomDrawItem;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpanding;
	__property OnExpanded;
	__property OnGesture;
	__property OnGetImageIndex;
	__property OnGetSelectedIndex;
	__property OnHint;
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
	__property Items;
public:
	/* TCustomTreeView.Create */ inline __fastcall virtual TTreeView(System::Classes::TComponent* AOwner) : TCustomTreeView(AOwner) { }
	/* TCustomTreeView.Destroy */ inline __fastcall virtual ~TTreeView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTreeView(HWND ParentWindow) : TCustomTreeView(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TTrackBarOrientation : unsigned char { trHorizontal, trVertical };

enum DECLSPEC_DENUM TTickMark : unsigned char { tmBottomRight, tmTopLeft, tmBoth };

enum DECLSPEC_DENUM TTickStyle : unsigned char { tsNone, tsAuto, tsManual };

enum DECLSPEC_DENUM TPositionToolTip : unsigned char { ptNone, ptTop, ptLeft, ptBottom, ptRight };

class PASCALIMPLEMENTATION TTrackBar : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TTrackBarOrientation FOrientation;
	TTickMark FTickMarks;
	TTickStyle FTickStyle;
	int FLineSize;
	int FPageSize;
	int FThumbLength;
	bool FSliderVisible;
	int FMin;
	int FMax;
	int FFrequency;
	int FPosition;
	TPositionToolTip FPositionToolTip;
	int FSelStart;
	int FSelEnd;
	bool FShowSelRange;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnTracking;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	int __fastcall GetThumbLength();
	void __fastcall SetOrientation(TTrackBarOrientation Value);
	void __fastcall SetParams(int APosition, int AMin, int AMax);
	void __fastcall SetPosition(int Value);
	void __fastcall SetMin(int Value);
	void __fastcall SetMax(int Value);
	void __fastcall SetFrequency(int Value);
	void __fastcall SetTickStyle(TTickStyle Value);
	void __fastcall SetTickMarks(TTickMark Value);
	void __fastcall SetLineSize(int Value);
	void __fastcall SetPageSize(int Value);
	void __fastcall SetPositionToolTip(const TPositionToolTip Value);
	void __fastcall SetThumbLength(int Value);
	void __fastcall SetSliderVisible(bool Value);
	void __fastcall SetSelStart(int Value);
	void __fastcall SetSelEnd(int Value);
	void __fastcall SetShowSelRange(const bool Value);
	void __fastcall UpdateSelection();
	MESSAGE void __fastcall CMGestureManagerChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNHScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyTRB &Message);
	MESSAGE void __fastcall CNVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	HIDESBASEDYNAMIC void __fastcall Changed();
	virtual void __fastcall Tracking();
	
public:
	__fastcall virtual TTrackBar(System::Classes::TComponent* AOwner);
	void __fastcall SetTick(int Value);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BorderWidth = {default=0};
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Constraints;
	__property int LineSize = {read=FLineSize, write=SetLineSize, default=1};
	__property int Max = {read=FMax, write=SetMax, default=10};
	__property int Min = {read=FMin, write=SetMin, default=0};
	__property TTrackBarOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property int PageSize = {read=FPageSize, write=SetPageSize, default=2};
	__property PopupMenu;
	__property int Frequency = {read=FFrequency, write=SetFrequency, default=1};
	__property int Position = {read=FPosition, write=SetPosition, default=0};
	__property TPositionToolTip PositionToolTip = {read=FPositionToolTip, write=SetPositionToolTip, default=0};
	__property bool SliderVisible = {read=FSliderVisible, write=SetSliderVisible, default=1};
	__property int SelEnd = {read=FSelEnd, write=SetSelEnd, default=0};
	__property int SelStart = {read=FSelStart, write=SetSelStart, default=0};
	__property ShowHint;
	__property bool ShowSelRange = {read=FShowSelRange, write=SetShowSelRange, default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property int ThumbLength = {read=GetThumbLength, write=SetThumbLength, default=20};
	__property TTickMark TickMarks = {read=FTickMarks, write=SetTickMarks, default=0};
	__property TTickStyle TickStyle = {read=FTickStyle, write=SetTickStyle, default=1};
	__property Touch;
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
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property System::Classes::TNotifyEvent OnTracking = {read=FOnTracking, write=FOnTracking};
public:
	/* TWinControl.CreateParented */ inline __fastcall TTrackBar(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TTrackBar() { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


typedef int TProgressRange;

enum DECLSPEC_DENUM TProgressBarOrientation : unsigned char { pbHorizontal, pbVertical };

enum DECLSPEC_DENUM TProgressBarStyle : unsigned char { pbstNormal, pbstMarquee };

enum DECLSPEC_DENUM TProgressBarState : unsigned char { pbsNormal, pbsError, pbsPaused };

class PASCALIMPLEMENTATION TProgressBar : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	bool F32BitMode;
	int FMin;
	int FMax;
	int FPosition;
	int FSavedPosition;
	int FStep;
	TProgressBarOrientation FOrientation;
	bool FSmooth;
	bool FSmoothReverse;
	int FMarqueeInterval;
	TProgressBarStyle FStyle;
	System::Uitypes::TColor FBarColor;
	System::Uitypes::TColor FBackgroundColor;
	TProgressBarState FState;
	System::Classes::TNotifyEvent FOnChange;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	int __fastcall GetMin();
	int __fastcall GetMax();
	int __fastcall GetPosition();
	void __fastcall SetParams(int AMin, int AMax);
	void __fastcall SetMin(int Value);
	void __fastcall SetMax(int Value);
	void __fastcall SetMarqueeInterval(int Value);
	void __fastcall SetPosition(int Value);
	void __fastcall SetStep(int Value);
	void __fastcall SetOrientation(TProgressBarOrientation Value);
	void __fastcall SetSmooth(bool Value);
	void __fastcall SetSmoothReverse(bool Value);
	void __fastcall SetStyle(TProgressBarStyle Value);
	void __fastcall SetBarColor(System::Uitypes::TColor Value);
	void __fastcall SetBackgroundColor(System::Uitypes::TColor Value);
	void __fastcall SetState(TProgressBarState Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall DoChange();
	
public:
	__fastcall virtual TProgressBar(System::Classes::TComponent* AOwner);
	void __fastcall StepIt();
	void __fastcall StepBy(int Delta);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BorderWidth = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Hint = {default=0};
	__property Constraints;
	__property int Min = {read=GetMin, write=SetMin, default=0};
	__property int Max = {read=GetMax, write=SetMax, default=100};
	__property TProgressBarOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property int Position = {read=GetPosition, write=SetPosition, default=0};
	__property bool Smooth = {read=FSmooth, write=SetSmooth, default=0};
	__property TProgressBarStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int MarqueeInterval = {read=FMarqueeInterval, write=SetMarqueeInterval, default=10};
	__property System::Uitypes::TColor BarColor = {read=FBarColor, write=SetBarColor, default=536870912};
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=SetBackgroundColor, default=536870912};
	__property bool SmoothReverse = {read=FSmoothReverse, write=SetSmoothReverse, default=0};
	__property int Step = {read=FStep, write=SetStep, default=10};
	__property TProgressBarState State = {read=FState, write=SetState, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnContextPopup;
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
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TProgressBar(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TProgressBar() { }
	
};


enum DECLSPEC_DENUM TAttributeType : unsigned char { atSelected, atDefaultText };

enum DECLSPEC_DENUM TSubscriptType : unsigned char { sstNone, sstSubscript, sstSuperscript };

enum DECLSPEC_DENUM TConsistentAttribute : unsigned char { caBold, caColor, caFace, caItalic, caSize, caStrikeOut, caUnderline, caProtected, caBackColor, caCharset, caDisabled, caHidden, caLink, caOffset, caRevAuthor, caSubscript, caWeight };

typedef System::Set<TConsistentAttribute, TConsistentAttribute::caBold, TConsistentAttribute::caWeight> TConsistentAttributes;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTextAttributes : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomRichEdit* RichEdit;
	TAttributeType FType;
	void __fastcall GetAttributes(Winapi::Richedit::_CHARFORMAT2W &Format);
	System::Uitypes::TColor __fastcall GetBackColor();
	System::Uitypes::TFontCharset __fastcall GetCharset();
	System::Uitypes::TColor __fastcall GetColor();
	TConsistentAttributes __fastcall GetConsistentAttributes();
	int __fastcall GetHeight();
	System::Uitypes::TFontName __fastcall GetName();
	int __fastcall GetOffset();
	System::Uitypes::TFontPitch __fastcall GetPitch();
	System::Byte __fastcall GetRevAuthor();
	int __fastcall GetSize();
	System::Uitypes::TFontStyles __fastcall GetStyle();
	bool __fastcall GetStyleElement(int Index);
	TSubscriptType __fastcall GetSubscript();
	void __fastcall SetAttributes(Winapi::Richedit::_CHARFORMAT2W &Format);
	void __fastcall SetBackColor(System::Uitypes::TColor Value);
	void __fastcall SetCharset(System::Uitypes::TFontCharset Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetName(System::Uitypes::TFontName Value);
	void __fastcall SetOffset(int Value);
	void __fastcall SetPitch(System::Uitypes::TFontPitch Value);
	void __fastcall SetRevAuthor(System::Byte Value);
	void __fastcall SetSize(int Value);
	void __fastcall SetStyle(System::Uitypes::TFontStyles Value);
	void __fastcall SetStyleElement(int Index, bool Value);
	void __fastcall SetSubscript(TSubscriptType Value);
	
protected:
	void __fastcall InitFormat(Winapi::Richedit::_CHARFORMAT2W &Format);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__fastcall TTextAttributes(TCustomRichEdit* AOwner, TAttributeType AttributeType);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Uitypes::TColor BackColor = {read=GetBackColor, write=SetBackColor, nodefault};
	__property bool Bold = {read=GetStyleElement, write=SetStyleElement, index=1, nodefault};
	__property System::Uitypes::TFontCharset Charset = {read=GetCharset, write=SetCharset, nodefault};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property TConsistentAttributes ConsistentAttributes = {read=GetConsistentAttributes, nodefault};
	__property bool Disabled = {read=GetStyleElement, write=SetStyleElement, index=8192, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property bool Hidden = {read=GetStyleElement, write=SetStyleElement, index=256, nodefault};
	__property bool Italic = {read=GetStyleElement, write=SetStyleElement, index=2, nodefault};
	__property bool Link = {read=GetStyleElement, write=SetStyleElement, index=32, nodefault};
	__property System::Uitypes::TFontName Name = {read=GetName, write=SetName};
	__property int Offset = {read=GetOffset, write=SetOffset, nodefault};
	__property System::Uitypes::TFontPitch Pitch = {read=GetPitch, write=SetPitch, nodefault};
	__property bool Protected = {read=GetStyleElement, write=SetStyleElement, index=16, nodefault};
	__property System::Byte RevAuthor = {read=GetRevAuthor, write=SetRevAuthor, nodefault};
	__property int Size = {read=GetSize, write=SetSize, nodefault};
	__property bool Strikeout = {read=GetStyleElement, write=SetStyleElement, index=8, nodefault};
	__property System::Uitypes::TFontStyles Style = {read=GetStyle, write=SetStyle, nodefault};
	__property TSubscriptType Subscript = {read=GetSubscript, write=SetSubscript, nodefault};
	__property bool Underline = {read=GetStyleElement, write=SetStyleElement, index=4, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TTextAttributes() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TNumberingStyle : unsigned char { nsNone, nsBullet };

enum DECLSPEC_DENUM TConsistentParaAttribute : unsigned char { cpaAlignment, cpaNumbering, cpaFirstIndent, cpaLeftIndent, cpaRightIndent, cpaTabStops };

typedef System::Set<TConsistentParaAttribute, TConsistentParaAttribute::cpaAlignment, TConsistentParaAttribute::cpaTabStops> TConsistentParaAttributes;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TParaAttributes : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomRichEdit* RichEdit;
	void __fastcall GetAttributes(PARAFORMAT2 &Paragraph);
	System::Classes::TAlignment __fastcall GetAlignment();
	TConsistentParaAttributes __fastcall GetConsistentAttributes();
	int __fastcall GetFirstIndent();
	int __fastcall GetLeftIndent();
	int __fastcall GetRightIndent();
	TNumberingStyle __fastcall GetNumbering();
	int __fastcall GetTab(System::Byte Index);
	int __fastcall GetTabCount();
	void __fastcall InitPara(PARAFORMAT2 &Paragraph);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetAttributes(PARAFORMAT2 &Paragraph);
	void __fastcall SetFirstIndent(int Value);
	void __fastcall SetLeftIndent(int Value);
	void __fastcall SetRightIndent(int Value);
	void __fastcall SetNumbering(TNumberingStyle Value);
	void __fastcall SetTab(System::Byte Index, int Value);
	void __fastcall SetTabCount(int Value);
	
public:
	__fastcall TParaAttributes(TCustomRichEdit* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, nodefault};
	__property TConsistentParaAttributes ConsistentAttributes = {read=GetConsistentAttributes, nodefault};
	__property int FirstIndent = {read=GetFirstIndent, write=SetFirstIndent, nodefault};
	__property int LeftIndent = {read=GetLeftIndent, write=SetLeftIndent, nodefault};
	__property TNumberingStyle Numbering = {read=GetNumbering, write=SetNumbering, nodefault};
	__property int RightIndent = {read=GetRightIndent, write=SetRightIndent, nodefault};
	__property int Tab[System::Byte Index] = {read=GetTab, write=SetTab};
	__property int TabCount = {read=GetTabCount, write=SetTabCount, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TParaAttributes() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TRichEditResizeEvent)(System::TObject* Sender, const System::Types::TRect &Rect);

typedef void __fastcall (__closure *TRichEditProtectChange)(System::TObject* Sender, int StartPos, int EndPos, bool &AllowChange);

typedef void __fastcall (__closure *TRichEditSaveClipboard)(System::TObject* Sender, int NumObjects, int NumChars, bool &SaveClipboard);

typedef void __fastcall (__closure *TRichEditLinkClick)(TCustomRichEdit* Sender, const System::UnicodeString URL, System::Uitypes::TMouseButton Button);

enum DECLSPEC_DENUM TSearchType : unsigned char { stWholeWord, stMatchCase };

typedef System::Set<TSearchType, TSearchType::stWholeWord, TSearchType::stMatchCase> TSearchTypes;

#ifndef _WIN64
typedef System::DynamicArray<System::Byte> TConversionBuffer;
#else /* _WIN64 */
typedef System::TArray__1<System::Byte> TConversionBuffer;
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TConversion : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual TConversion();
#ifndef _WIN64
	virtual int __fastcall ConvertReadStream(System::Classes::TStream* Stream, System::DynamicArray<System::Byte> Buffer, int BufSize);
	virtual int __fastcall ConvertWriteStream(System::Classes::TStream* Stream, System::DynamicArray<System::Byte> Buffer, int BufSize);
#else /* _WIN64 */
	virtual int __fastcall ConvertReadStream(System::Classes::TStream* Stream, System::TArray__1<System::Byte> Buffer, int BufSize);
	virtual int __fastcall ConvertWriteStream(System::Classes::TStream* Stream, System::TArray__1<System::Byte> Buffer, int BufSize);
#endif /* _WIN64 */
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TConversion() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TConversionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TConversionClass);
#endif /* _WIN64 */

typedef TConversionFormat *PConversionFormat;

struct DECLSPEC_DRECORD TConversionFormat
{
public:
	TConversionClass ConversionClass;
	System::UnicodeString Extension;
};


typedef TRichEditStreamInfo *PRichEditStreamInfo;

struct DECLSPEC_DRECORD TRichEditStreamInfo
{
public:
	TConversion* Converter;
	System::Classes::TStream* Stream;
	bool PlainText;
	System::Sysutils::TEncoding* Encoding;
};


class PASCALIMPLEMENTATION TCustomRichEdit : public Vcl::Stdctrls::TCustomMemo
{
	typedef Vcl::Stdctrls::TCustomMemo inherited;
	
private:
	bool FHideScrollBars;
	TTextAttributes* FSelAttributes;
	TTextAttributes* FDefAttributes;
	TParaAttributes* FParagraph;
	System::Classes::TAlignment FOldParaAlignment;
	int FScreenLogPixels;
	System::Classes::TStrings* FRichEditStrings;
	System::Classes::TMemoryStream* FMemStream;
	System::Classes::TNotifyEvent FOnSelChange;
	bool FHideSelection;
	bool FModified;
	TConversionClass FDefaultConverter;
	TRichEditLinkClick FOnLinkClick;
	TRichEditResizeEvent FOnResizeRequest;
	TRichEditProtectChange FOnProtectChange;
	TRichEditSaveClipboard FOnSaveClipboard;
	System::Types::TRect FPageRect;
	int FOldSelLength;
	int FOldSelStart;
	int FOldZoom;
	int FZoom;
	bool FSpellChecking;
	bool FTransparent;
	bool FEnableURLs;
	bool FShowURLHint;
	bool FInternalPrintCall;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Richedit::TWMNotifyRE &Message);
	unsigned __fastcall GetActiveLineNo();
	bool __fastcall GetPlainText();
	System::Types::TPoint __fastcall GetScrollPosition();
	void __fastcall LinkMessage(Winapi::Richedit::PENLink Link);
	bool __fastcall ProtectChange(int StartPos, int EndPos);
	bool __fastcall SaveClipboard(int NumObj, int NumChars);
	void __fastcall SetHideScrollBars(bool Value);
	HIDESBASE void __fastcall SetHideSelection(bool Value);
	void __fastcall SetPlainText(bool Value);
	void __fastcall SetRichEditStrings(System::Classes::TStrings* Value);
	void __fastcall SetDefAttributes(TTextAttributes* Value);
	void __fastcall SetSelAttributes(TTextAttributes* Value);
	void __fastcall SetZoom(const int Value);
	void __fastcall SetScrollPosition(const System::Types::TPoint &Value);
	void __fastcall SetEnableURLs(bool Value);
	void __fastcall SetShowURLHint(bool Value);
	HIDESBASE MESSAGE void __fastcall WMNCDestroy(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFont(Winapi::Messages::TWMSetFont &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall DoUpdateEditMargins();
	virtual void __fastcall UpdateEditMargins();
	virtual void __fastcall RequestSize(const System::Types::TRect &Rect);
	DYNAMIC void __fastcall SelectionChange();
	void __fastcall DoEnableSpellChecking();
	void __fastcall DoLinkClick(const System::UnicodeString URL, NativeUInt MouseMessage);
	virtual void __fastcall DoSetMaxLength(int Value);
	void __fastcall DoSetShowURLHint();
	virtual System::Types::TPoint __fastcall GetCaretPos();
	virtual void __fastcall SetCaretPos(const System::Types::TPoint &Value);
	virtual int __fastcall GetSelLength();
	virtual int __fastcall GetSelStart();
	virtual System::UnicodeString __fastcall GetSelText();
	virtual void __fastcall SetSelLength(int Value);
	virtual void __fastcall SetSelStart(int Value);
	void __fastcall SetSpellChecking(bool Value);
	void __fastcall SetTransparent(bool Value);
	virtual Vcl::Controls::TScalingFlags __fastcall DefaultScalingFlags();
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, default=1};
	__property bool HideScrollBars = {read=FHideScrollBars, write=SetHideScrollBars, default=1};
	__property System::Classes::TStrings* Lines = {read=FRichEditStrings, write=SetRichEditStrings};
	__property TRichEditLinkClick OnLinkClick = {read=FOnLinkClick, write=FOnLinkClick};
	__property TRichEditSaveClipboard OnSaveClipboard = {read=FOnSaveClipboard, write=FOnSaveClipboard};
	__property System::Classes::TNotifyEvent OnSelectionChange = {read=FOnSelChange, write=FOnSelChange};
	__property TRichEditProtectChange OnProtectChange = {read=FOnProtectChange, write=FOnProtectChange};
	__property TRichEditResizeEvent OnResizeRequest = {read=FOnResizeRequest, write=FOnResizeRequest};
	__property bool PlainText = {read=GetPlainText, write=SetPlainText, default=0};
	
public:
	__fastcall virtual TCustomRichEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomRichEdit();
	virtual void __fastcall Clear();
	int __fastcall FindText(const System::UnicodeString SearchStr, int StartPos, int Length, TSearchTypes Options);
	int __fastcall RenderRange(Vcl::Graphics::TCanvas* RenderTarget, Vcl::Graphics::TCanvas* FormatTarget = (Vcl::Graphics::TCanvas*)(0x0), int RangeStart = 0x0, int RangeEnd = 0xffffffff, bool MeasureOnly = false);
	virtual void __fastcall Print(const System::UnicodeString Caption);
	__classmethod void __fastcall RegisterConversionFormat(const System::UnicodeString AExtension, TConversionClass AConversionClass);
	virtual void __fastcall SetSelText(const System::UnicodeString Value);
	void __fastcall SetSelTextToFriendlyURL(const System::UnicodeString Text, const System::UnicodeString URL);
	virtual int __fastcall GetSelTextBuf(System::WideChar * Buffer, int BufSize);
	__property unsigned ActiveLineNo = {read=GetActiveLineNo, nodefault};
	__property TConversionClass DefaultConverter = {read=FDefaultConverter, write=FDefaultConverter};
	__property TTextAttributes* DefAttributes = {read=FDefAttributes, write=SetDefAttributes};
	__property TTextAttributes* SelAttributes = {read=FSelAttributes, write=SetSelAttributes};
	__property System::Types::TRect PageRect = {read=FPageRect, write=FPageRect};
	__property TParaAttributes* Paragraph = {read=FParagraph};
	__property System::Types::TPoint ScrollPosition = {read=GetScrollPosition, write=SetScrollPosition};
	__property bool SpellChecking = {read=FSpellChecking, write=SetSpellChecking, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property bool EnableURLs = {read=FEnableURLs, write=SetEnableURLs, default=0};
	__property bool ShowURLHint = {read=FShowURLHint, write=SetShowURLHint, default=0};
	__property int Zoom = {read=FZoom, write=SetZoom, default=100};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomRichEdit(HWND ParentWindow) : Vcl::Stdctrls::TCustomMemo(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TRichEdit : public TCustomRichEdit
{
	typedef TCustomRichEdit inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EditMargins;
	__property Enabled = {default=1};
	__property EnableURLs = {default=0};
	__property Font;
	__property HideSelection = {default=1};
	__property HideScrollBars = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property Constraints;
	__property Lines;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PlainText = {default=0};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ScrollBars = {default=0};
	__property ShowHint;
	__property ShowURLHint = {default=0};
	__property SpellChecking = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property WantTabs = {default=0};
	__property WantReturns = {default=1};
	__property WordWrap = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property Zoom = {default=100};
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
	__property OnLinkClick;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnProtectChange;
	__property OnResizeRequest;
	__property OnSaveClipboard;
	__property OnSelectionChange;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomRichEdit.Create */ inline __fastcall virtual TRichEdit(System::Classes::TComponent* AOwner) : TCustomRichEdit(AOwner) { }
	/* TCustomRichEdit.Destroy */ inline __fastcall virtual ~TRichEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRichEdit(HWND ParentWindow) : TCustomRichEdit(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TUDAlignButton : unsigned char { udLeft, udRight };

enum DECLSPEC_DENUM TUDOrientation : unsigned char { udHorizontal, udVertical };

enum DECLSPEC_DENUM TUDBtnType : unsigned char { btNext, btPrev };

enum DECLSPEC_DENUM TUpDownDirection : unsigned char { updNone, updUp, updDown };

typedef void __fastcall (__closure *TUDClickEvent)(System::TObject* Sender, TUDBtnType Button);

typedef void __fastcall (__closure *TUDChangingEvent)(System::TObject* Sender, bool &AllowChange);

typedef void __fastcall (__closure *TUDChangingEventEx)(System::TObject* Sender, bool &AllowChange, int NewValue, TUpDownDirection Direction);

class PASCALIMPLEMENTATION TCustomUpDown : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	bool FArrowKeys;
	Vcl::Controls::TWinControl* FAssociate;
	int FMin;
	int FMax;
	int FIncrement;
	int FNewValue;
	int FNewValueDelta;
	int FPosition;
	bool FThousands;
	bool FWrap;
	TUDClickEvent FOnClick;
	TUDAlignButton FAlignButton;
	TUDOrientation FOrientation;
	TUDChangingEvent FOnChanging;
	TUDChangingEventEx FOnChangingEx;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall UndoAutoResizing(Vcl::Controls::TWinControl* Value);
	void __fastcall SetAssociate(Vcl::Controls::TWinControl* Value);
	int __fastcall GetPosition();
	void __fastcall SetMin(int Value);
	void __fastcall SetMax(int Value);
	void __fastcall SetIncrement(int Value);
	void __fastcall SetPosition(int Value);
	void __fastcall SetAlignButton(TUDAlignButton Value);
	void __fastcall SetOrientation(TUDOrientation Value);
	void __fastcall SetArrowKeys(bool Value);
	void __fastcall SetThousands(bool Value);
	void __fastcall SetWrap(bool Value);
	MESSAGE void __fastcall CMAllChildrenFlipped(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyUD &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	
protected:
	bool __fastcall DoCanChange(int NewVal, int Delta);
	DYNAMIC bool __fastcall CanChange();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	HIDESBASEDYNAMIC void __fastcall Click(TUDBtnType Button);
	__property TUDAlignButton AlignButton = {read=FAlignButton, write=SetAlignButton, default=1};
	__property bool ArrowKeys = {read=FArrowKeys, write=SetArrowKeys, default=1};
	__property Vcl::Controls::TWinControl* Associate = {read=FAssociate, write=SetAssociate};
	__property int Min = {read=FMin, write=SetMin, default=0};
	__property int Max = {read=FMax, write=SetMax, default=100};
	__property int Increment = {read=FIncrement, write=SetIncrement, default=1};
	__property TUDOrientation Orientation = {read=FOrientation, write=SetOrientation, default=1};
	__property int Position = {read=GetPosition, write=SetPosition, default=0};
	__property bool Thousands = {read=FThousands, write=SetThousands, default=1};
	__property bool Wrap = {read=FWrap, write=SetWrap, default=0};
	__property TUDChangingEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property TUDChangingEventEx OnChangingEx = {read=FOnChangingEx, write=FOnChangingEx};
	__property TUDClickEvent OnClick = {read=FOnClick, write=FOnClick};
	
public:
	__fastcall virtual TCustomUpDown(System::Classes::TComponent* AOwner);
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomUpDown(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomUpDown() { }
	
};


class PASCALIMPLEMENTATION TUpDown : public TCustomUpDown
{
	typedef TCustomUpDown inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property AlignButton = {default=1};
	__property Anchors = {default=3};
	__property Associate;
	__property ArrowKeys = {default=1};
	__property DoubleBuffered;
	__property Enabled = {default=1};
	__property Hint = {default=0};
	__property Min = {default=0};
	__property Max = {default=100};
	__property Increment = {default=1};
	__property Constraints;
	__property Orientation = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Position = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Thousands = {default=1};
	__property Visible = {default=1};
	__property Wrap = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChanging;
	__property OnChangingEx;
	__property OnContextPopup;
	__property OnClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TCustomUpDown.Create */ inline __fastcall virtual TUpDown(System::Classes::TComponent* AOwner) : TCustomUpDown(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TUpDown(HWND ParentWindow) : TCustomUpDown(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TUpDown() { }
	
};


enum DECLSPEC_DENUM THKModifier : unsigned char { hkShift, hkCtrl, hkAlt, hkExt };

typedef System::Set<THKModifier, THKModifier::hkShift, THKModifier::hkExt> THKModifiers;

enum DECLSPEC_DENUM THKInvalidKey : unsigned char { hcNone, hcShift, hcCtrl, hcAlt, hcShiftCtrl, hcShiftAlt, hcCtrlAlt, hcShiftCtrlAlt };

typedef System::Set<THKInvalidKey, THKInvalidKey::hcNone, THKInvalidKey::hcShiftCtrlAlt> THKInvalidKeys;

class PASCALIMPLEMENTATION TCustomHotKey : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	bool FAutoSize;
	THKModifiers FModifiers;
	THKInvalidKeys FInvalidKeys;
	System::Word FHotKey;
	System::Classes::TNotifyEvent FOnChange;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall AdjustHeight();
	void __fastcall SetInvalidKeys(THKInvalidKeys Value);
	void __fastcall SetModifiers(THKModifiers Value);
	void __fastcall UpdateHeight();
	System::Classes::TShortCut __fastcall GetHotKey();
	void __fastcall SetHotKey(System::Classes::TShortCut Value);
	void __fastcall ShortCutToHotKey(System::Classes::TShortCut Value);
	System::Classes::TShortCut __fastcall HotKeyToShortCut(int Value);
	void __fastcall ReadBoolean(System::Classes::TStream* Stream);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall SetAutoSize(bool Value);
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property THKInvalidKeys InvalidKeys = {read=FInvalidKeys, write=SetInvalidKeys, default=3};
	__property THKModifiers Modifiers = {read=FModifiers, write=SetModifiers, default=4};
	__property System::Classes::TShortCut HotKey = {read=GetHotKey, write=SetHotKey, default=65};
	__property TabStop = {default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
public:
	__fastcall virtual TCustomHotKey(System::Classes::TComponent* AOwner);
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomHotKey(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomHotKey() { }
	
};


class PASCALIMPLEMENTATION THotKey : public TCustomHotKey
{
	typedef TCustomHotKey inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Constraints;
	__property Enabled = {default=1};
	__property Hint = {default=0};
	__property HotKey = {default=65};
	__property InvalidKeys = {default=3};
	__property Modifiers = {default=4};
	__property ParentBiDiMode = {default=1};
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
	__property OnContextPopup;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TCustomHotKey.Create */ inline __fastcall virtual THotKey(System::Classes::TComponent* AOwner) : TCustomHotKey(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall THotKey(HWND ParentWindow) : TCustomHotKey(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~THotKey() { }
	
};


typedef int TWidth;

enum DECLSPEC_DENUM TListGroupState : unsigned char { lgsNormal, lgsHidden, lgsCollapsed, lgsNoHeader, lgsCollapsible, lgsFocused, lgsSelected, lgsSubseted, lgsSubSetLinkFocused };

typedef System::Set<TListGroupState, TListGroupState::lgsNormal, TListGroupState::lgsSubSetLinkFocused> TListGroupStateSet;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListGroup : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FHeader;
	System::UnicodeString FFooter;
	int FGroupID;
	TListGroupStateSet FState;
	System::Classes::TAlignment FHeaderAlign;
	System::Classes::TAlignment FFooterAlign;
	System::UnicodeString FSubtitle;
	System::UnicodeString FDescriptionTop;
	System::UnicodeString FDescriptionBottom;
	System::Uitypes::TImageIndex FTitleImage;
	void __fastcall SetHeader(System::UnicodeString Value);
	void __fastcall SetFooter(System::UnicodeString Value);
	void __fastcall SetGroupID(int Value);
	void __fastcall SetState(TListGroupStateSet Value);
	TListGroupStateSet __fastcall GetState();
	void __fastcall SetHeaderAlign(System::Classes::TAlignment Value);
	void __fastcall SetFooterAlign(System::Classes::TAlignment Value);
	void __fastcall SetSubtitle(System::UnicodeString Value);
	void __fastcall SetTitleImage(System::Uitypes::TImageIndex Value);
	void __fastcall ReadDescriptionTop(System::Classes::TReader* Reader);
	void __fastcall ReadDescriptionBottom(System::Classes::TReader* Reader);
	void __fastcall IgnoreInt(System::Classes::TReader* Reader);
	void __fastcall IgnoreString(System::Classes::TReader* Reader);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetIndex(int Value);
	
public:
	__fastcall virtual TListGroup(System::Classes::TCollection* Collection);
	__fastcall virtual ~TListGroup();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString Header = {read=FHeader, write=SetHeader};
	__property System::UnicodeString Footer = {read=FFooter, write=SetFooter};
	__property int GroupID = {read=FGroupID, write=SetGroupID, nodefault};
	__property TListGroupStateSet State = {read=GetState, write=SetState, nodefault};
	__property System::Classes::TAlignment HeaderAlign = {read=FHeaderAlign, write=SetHeaderAlign, nodefault};
	__property System::Classes::TAlignment FooterAlign = {read=FFooterAlign, write=SetFooterAlign, nodefault};
	__property System::UnicodeString Subtitle = {read=FSubtitle, write=SetSubtitle};
	__property System::Uitypes::TImageIndex TitleImage = {read=FTitleImage, write=SetTitleImage, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListGroups : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TListGroup* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomListView* FOwner;
	HIDESBASE TListGroup* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TListGroup* Value);
	void __fastcall UpdateGroups();
	int __fastcall GetNextGroupID();
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TListGroups(TCustomListView* AOwner);
	HIDESBASE TListGroup* __fastcall Add();
	HIDESBASE TCustomListView* __fastcall Owner();
	__property TListGroup* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property int NextGroupID = {read=GetNextGroupID, nodefault};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TListGroups() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TListColumnClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TListColumnClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListColumn : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	bool FAutoSize;
	System::UnicodeString FCaption;
	TWidth FMaxWidth;
	TWidth FMinWidth;
	System::Uitypes::TImageIndex FImageIndex;
	TWidth FPrivateWidth;
	TWidth FWidth;
	int FOrderTag;
	int FTag;
	void __fastcall DoChange();
	TWidth __fastcall GetWidth();
	bool __fastcall IsWidthStored();
	void __fastcall ReadData(System::Classes::TReader* Reader);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetAutoSize(bool Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetMaxWidth(TWidth Value);
	void __fastcall SetMinWidth(TWidth Value);
	void __fastcall SetWidth(TWidth Value);
	void __fastcall WriteData(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetIndex(int Value);
	
public:
	__fastcall virtual TListColumn(System::Classes::TCollection* Collection);
	__fastcall virtual ~TListColumn();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TWidth WidthType = {read=FWidth, nodefault};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property TWidth MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=0};
	__property TWidth MinWidth = {read=FMinWidth, write=SetMinWidth, default=0};
	__property int Tag = {read=FTag, write=FTag, default=0};
	__property TWidth Width = {read=GetWidth, write=SetWidth, stored=IsWidthStored, default=50};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TListColumnsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TListColumnsClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListColumns : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TListColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomListView* FOwner;
	HIDESBASE TListColumn* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TListColumn* Value);
	void __fastcall UpdateCols();
	
protected:
	virtual TListColumnClass __fastcall GetListColumnClass();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TListColumns(TCustomListView* AOwner);
	HIDESBASE TListColumn* __fastcall Add();
	HIDESBASE TCustomListView* __fastcall Owner();
	__property TListColumn* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TListColumns() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TDisplayCode : unsigned char { drBounds, drIcon, drLabel, drSelectBounds };

#ifndef _WIN64
typedef System::TMetaClass* TListItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TListItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListItem : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TListItems* FOwner;
	System::Classes::TStrings* FSubItems;
	System::Uitypes::TImageIndex FImageIndex;
	int FIndent;
	int FIndex;
	System::Uitypes::TImageIndex FOverlayIndex;
	System::Uitypes::TImageIndex FStateIndex;
	System::UnicodeString FCaption;
	bool FDeleting;
	bool FProcessedDeleting;
	bool FChecked;
	void *FData;
	int FGroupID;
	bool __fastcall GetChecked();
	HWND __fastcall GetHandle();
	int __fastcall GetIndex();
	TCustomListView* __fastcall GetListView();
	int __fastcall GetLeft();
	bool __fastcall GetState(int Index);
	int __fastcall GetTop();
	bool __fastcall IsEqual(TListItem* Item);
	void __fastcall SetChecked(bool Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetData(void * Value);
	void __fastcall SetImage(int Index, System::Uitypes::TImageIndex Value);
	System::Uitypes::TImageIndex __fastcall GetImage(int Index);
	void __fastcall SetIndent(int Value);
	void __fastcall SetLeft(int Value);
	void __fastcall SetState(int Index, bool State);
	void __fastcall SetSubItems(System::Classes::TStrings* Value);
	void __fastcall SetTop(int Value);
	int __fastcall GetSubItemImage(int Index);
	void __fastcall SetSubItemImage(int Index, const int Value);
	void __fastcall SetGroupID(int Value);
	
protected:
	virtual System::Uitypes::TImageIndex __fastcall GetImageIndex();
	virtual System::Uitypes::TImageIndex __fastcall GetOverlayIndex();
	virtual System::Uitypes::TImageIndex __fastcall GetStateIndex();
	virtual System::UnicodeString __fastcall GetCaption();
	
public:
	__fastcall virtual TListItem(TListItems* AOwner);
	__fastcall virtual ~TListItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall CancelEdit();
	void __fastcall Delete();
	System::Types::TRect __fastcall DisplayRect(TDisplayCode Code);
	bool __fastcall EditCaption();
	System::Types::TPoint __fastcall GetPosition();
	void __fastcall MakeVisible(bool PartialOK);
	void __fastcall Update();
	void __fastcall SetPosition(const System::Types::TPoint &Value);
	int __fastcall WorkArea();
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property bool Cut = {read=GetState, write=SetState, index=0, nodefault};
	__property void * Data = {read=FData, write=SetData};
	__property bool Deleting = {read=FDeleting, nodefault};
	__property bool DropTarget = {read=GetState, write=SetState, index=1, nodefault};
	__property bool Focused = {read=GetState, write=SetState, index=2, nodefault};
	__property int GroupID = {read=FGroupID, write=SetGroupID, default=-1};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImage, write=SetImage, index=0, nodefault};
	__property int Indent = {read=FIndent, write=SetIndent, default=0};
	__property int Index = {read=GetIndex, nodefault};
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property TCustomListView* ListView = {read=GetListView};
	__property TListItems* Owner = {read=FOwner};
	__property System::Uitypes::TImageIndex OverlayIndex = {read=GetImage, write=SetImage, index=1, nodefault};
	__property System::Types::TPoint Position = {read=GetPosition, write=SetPosition};
	__property bool Selected = {read=GetState, write=SetState, index=3, nodefault};
	__property System::Uitypes::TImageIndex StateIndex = {read=GetImage, write=SetImage, index=2, nodefault};
	__property System::Classes::TStrings* SubItems = {read=FSubItems, write=SetSubItems};
	__property int SubItemImages[int Index] = {read=GetSubItemImage, write=SetSubItemImage};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListItemsEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TListItems* FListItems;
	
public:
	__fastcall TListItemsEnumerator(TListItems* AListItems);
	TListItem* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TListItem* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TListItemsEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListItems : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	TListItem* operator[](int Index) { return this->Item[Index]; }
	
private:
	TCustomListView* FOwner;
	int FUpdateCount;
	bool FNoRedraw;
	void __fastcall ReadData(System::Classes::TStream* Stream);
	void __fastcall ReadItemData(System::Classes::TStream* Stream);
	void __fastcall WriteItemData(System::Classes::TStream* Stream);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	tagLVITEMW __fastcall CreateItem(int Index, TListItem* ListItem);
	int __fastcall GetCount();
	HWND __fastcall GetHandle();
	TListItem* __fastcall GetItem(int Index);
	void __fastcall SetCount(int Value);
	void __fastcall SetItem(int Index, TListItem* Value);
	void __fastcall SetUpdateState(bool Updating);
	
public:
	__fastcall TListItems(TCustomListView* AOwner);
	__fastcall virtual ~TListItems();
	TListItem* __fastcall Add();
	TListItem* __fastcall AddItem(TListItem* Item, int Index = 0xffffffff);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate();
	void __fastcall Clear();
	void __fastcall Delete(int Index);
	void __fastcall EndUpdate();
	TListItemsEnumerator* __fastcall GetEnumerator();
	int __fastcall IndexOf(TListItem* Value);
	TListItem* __fastcall Insert(int Index);
	__property int Count = {read=GetCount, write=SetCount, nodefault};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property TListItem* Item[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TCustomListView* Owner = {read=FOwner};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWorkArea : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::Types::TRect FRect;
	System::UnicodeString FDisplayName;
	System::Uitypes::TColor FColor;
	void __fastcall SetRect(const System::Types::TRect &Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
public:
	__fastcall virtual TWorkArea(System::Classes::TCollection* Collection);
	virtual void __fastcall SetDisplayName(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetDisplayName();
	__property System::Types::TRect Rect = {read=FRect, write=SetRect};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TWorkArea() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWorkAreas : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TWorkArea* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TWorkArea* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TWorkArea* const Value);
	
protected:
	HIDESBASE void __fastcall Changed();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	HIDESBASE TWorkArea* __fastcall Add();
	HIDESBASE void __fastcall Delete(int Index);
	HIDESBASE TWorkArea* __fastcall Insert(int Index);
	__property TWorkArea* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TWorkAreas(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TWorkAreas() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TIconArrangement : unsigned char { iaTop, iaLeft };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIconOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomListView* FListView;
	TIconArrangement FArrangement;
	bool FAutoArrange;
	bool FWrapText;
	void __fastcall SetArrangement(TIconArrangement Value);
	void __fastcall SetAutoArrange(bool Value);
	void __fastcall SetWrapText(bool Value);
	
public:
	__fastcall TIconOptions(TCustomListView* AOwner);
	
__published:
	__property TIconArrangement Arrangement = {read=FArrangement, write=SetArrangement, default=0};
	__property bool AutoArrange = {read=FAutoArrange, write=SetAutoArrange, default=0};
	__property bool WrapText = {read=FWrapText, write=SetWrapText, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TIconOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TListArrangement : unsigned char { arAlignBottom, arAlignLeft, arAlignRight, arAlignTop, arDefault, arSnapToGrid };

enum DECLSPEC_DENUM TViewStyle : unsigned char { vsIcon, vsSmallIcon, vsList, vsReport };

enum DECLSPEC_DENUM TItemState : unsigned char { isNone, isCut, isDropHilited, isFocused, isSelected, isActivating };

typedef System::Set<TItemState, TItemState::isNone, TItemState::isActivating> TItemStates;

enum DECLSPEC_DENUM TItemChange : unsigned char { ctText, ctImage, ctState };

enum DECLSPEC_DENUM TItemFind : unsigned char { ifData, ifPartialString, ifExactString, ifNearest };

enum DECLSPEC_DENUM TSearchDirection : unsigned char { sdLeft, sdRight, sdAbove, sdBelow, sdAll };

enum DECLSPEC_DENUM TListHotTrackStyle : unsigned char { htHandPoint, htUnderlineCold, htUnderlineHot };

typedef System::Set<TListHotTrackStyle, TListHotTrackStyle::htHandPoint, TListHotTrackStyle::htUnderlineHot> TListHotTrackStyles;

enum DECLSPEC_DENUM TItemRequests : unsigned char { irText, irImage, irParam, irState, irIndent };

typedef System::Set<TItemRequests, TItemRequests::irText, TItemRequests::irIndent> TItemRequest;

typedef void __fastcall (__closure *TLVDeletedEvent)(System::TObject* Sender, TListItem* Item);

typedef void __fastcall (__closure *TLVEditingEvent)(System::TObject* Sender, TListItem* Item, bool &AllowEdit);

typedef void __fastcall (__closure *TLVEditedEvent)(System::TObject* Sender, TListItem* Item, System::UnicodeString &S);

typedef void __fastcall (__closure *TLVChangeEvent)(System::TObject* Sender, TListItem* Item, TItemChange Change);

typedef void __fastcall (__closure *TLVChangingEvent)(System::TObject* Sender, TListItem* Item, TItemChange Change, bool &AllowChange);

typedef void __fastcall (__closure *TLVColumnClickEvent)(System::TObject* Sender, TListColumn* Column);

typedef void __fastcall (__closure *TLVColumnRClickEvent)(System::TObject* Sender, TListColumn* Column, const System::Types::TPoint &Point);

typedef void __fastcall (__closure *TLVCompareEvent)(System::TObject* Sender, TListItem* Item1, TListItem* Item2, int Data, int &Compare);

typedef void __fastcall (__closure *TLVNotifyEvent)(System::TObject* Sender, TListItem* Item);

typedef void __fastcall (__closure *TLVSelectItemEvent)(System::TObject* Sender, TListItem* Item, bool Selected);

typedef void __fastcall (__closure *TLVCheckedItemEvent)(System::TObject* Sender, TListItem* Item);

typedef void __fastcall (__closure *TLVDrawItemEvent)(TCustomListView* Sender, TListItem* Item, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);

typedef void __fastcall (__closure *TLVCustomDrawEvent)(TCustomListView* Sender, const System::Types::TRect &ARect, bool &DefaultDraw);

typedef void __fastcall (__closure *TLVCustomDrawItemEvent)(TCustomListView* Sender, TListItem* Item, TCustomDrawState State, bool &DefaultDraw);

typedef void __fastcall (__closure *TLVCustomDrawSubItemEvent)(TCustomListView* Sender, TListItem* Item, int SubItem, TCustomDrawState State, bool &DefaultDraw);

typedef void __fastcall (__closure *TLVAdvancedCustomDrawEvent)(TCustomListView* Sender, const System::Types::TRect &ARect, TCustomDrawStage Stage, bool &DefaultDraw);

typedef void __fastcall (__closure *TLVAdvancedCustomDrawItemEvent)(TCustomListView* Sender, TListItem* Item, TCustomDrawState State, TCustomDrawStage Stage, bool &DefaultDraw);

typedef void __fastcall (__closure *TLVAdvancedCustomDrawSubItemEvent)(TCustomListView* Sender, TListItem* Item, int SubItem, TCustomDrawState State, TCustomDrawStage Stage, bool &DefaultDraw);

typedef void __fastcall (__closure *TLVOwnerDataEvent)(System::TObject* Sender, TListItem* Item);

typedef void __fastcall (__closure *TLVOwnerDataFindEvent)(System::TObject* Sender, TItemFind Find, const System::UnicodeString FindString, const System::Types::TPoint &FindPosition, void * FindData, int StartIndex, TSearchDirection Direction, bool Wrap, int &Index);

typedef void __fastcall (__closure *TLVOwnerDataHintEvent)(System::TObject* Sender, int StartIndex, int EndIndex);

typedef void __fastcall (__closure *TLVOwnerDataStateChangeEvent)(System::TObject* Sender, int StartIndex, int EndIndex, TItemStates OldState, TItemStates NewState);

typedef void __fastcall (__closure *TLVSubItemImageEvent)(System::TObject* Sender, TListItem* Item, int SubItem, int &ImageIndex);

typedef void __fastcall (__closure *TLVInfoTipEvent)(System::TObject* Sender, TListItem* Item, System::UnicodeString &InfoTip);

typedef void __fastcall (__closure *TLVCreateItemClassEvent)(TCustomListView* Sender, TListItemClass &ItemClass);

class PASCALIMPLEMENTATION TCustomListView : public Vcl::Controls::TCustomMultiSelectListControl
{
	typedef Vcl::Controls::TCustomMultiSelectListControl inherited;
	
	
private:
	typedef System::DynamicArray<int> _TCustomListView__1;
	
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	TViewStyle FViewStyle;
	bool FReadOnly;
	Vcl::Imglist::TCustomImageList* FLargeImages;
	int FSaveSelectedIndex;
	Vcl::Imglist::TCustomImageList* FSmallImages;
	Vcl::Imglist::TCustomImageList* FStateImages;
	Vcl::Imglist::TCustomImageList* FGroupHeaderImages;
	Vcl::Controls::TDragImageList* FDragImage;
	TSortType FSortType;
	bool FColumnClick;
	bool FShowColumnHeaders;
	TListItems* FListItems;
	bool FClicked;
	bool FRClicked;
	TIconOptions* FIconOptions;
	bool FHideSelection;
	TListColumns* FListColumns;
	System::Classes::TMemoryStream* FMemStream;
	bool FOwnerData;
	bool FOwnerDraw;
	System::Classes::TMemoryStream* FColStream;
	System::Classes::TMemoryStream* FCheckStream;
	void *FDefEditProc;
	void *FDefHeaderProc;
	HWND FEditHandle;
	HWND FHeaderHandle;
	int FAllocBy;
	int FDragIndex;
	TListItem* FLastDropTarget;
	bool FCheckboxes;
	bool FFlatScrollBars;
	bool FFullDrag;
	bool FGridLines;
	bool FHotTrack;
	TListHotTrackStyles FHotTrackStyles;
	bool FRowSelect;
	int FHoverTime;
	Vcl::Imglist::TChangeLink* FLargeChangeLink;
	Vcl::Imglist::TChangeLink* FSmallChangeLink;
	Vcl::Imglist::TChangeLink* FHeaderChangeLink;
	Vcl::Imglist::TChangeLink* FStateChangeLink;
	TSortType FSavedSort;
	bool FReading;
	bool FCanvasChanged;
	TListItem* FTempItem;
	TWorkAreas* FWorkAreas;
	bool FShowWorkAreas;
	bool FUpdatingColumnOrder;
	int FOurFont;
	int FStockFont;
	bool FInBufferedPrintClient;
	int FOwnerDataCount;
	System::Types::TPoint FPanPoint;
	TLVAdvancedCustomDrawEvent FOnAdvancedCustomDraw;
	TLVAdvancedCustomDrawItemEvent FOnAdvancedCustomDrawItem;
	TLVAdvancedCustomDrawSubItemEvent FOnAdvancedCustomDrawSubItem;
	TLVChangeEvent FOnChange;
	TLVChangingEvent FOnChanging;
	TLVColumnClickEvent FOnColumnClick;
	System::Classes::TNotifyEvent FOnColumnDragged;
	TLVColumnRClickEvent FOnColumnRightClick;
	TLVCompareEvent FOnCompare;
	TLVCustomDrawEvent FOnCustomDraw;
	TLVCustomDrawItemEvent FOnCustomDrawItem;
	TLVCustomDrawSubItemEvent FOnCustomDrawSubItem;
	TLVOwnerDataEvent FOnData;
	TLVOwnerDataFindEvent FOnDataFind;
	TLVOwnerDataHintEvent FOnDataHint;
	TLVOwnerDataStateChangeEvent FOnDataStateChange;
	TLVDeletedEvent FOnDeletion;
	TLVDrawItemEvent FOnDrawItem;
	TLVEditedEvent FOnEdited;
	TLVEditingEvent FOnEditing;
	TLVNotifyEvent FOnGetImageIndex;
	TLVSubItemImageEvent FOnGetSubItemImage;
	TLVInfoTipEvent FOnInfoTip;
	TLVDeletedEvent FOnInsert;
	TLVSelectItemEvent FOnSelectItem;
	TLVCheckedItemEvent FOnItemChecked;
	TLVCreateItemClassEvent FOnCreateItemClass;
	TListGroups* FListGroups;
	bool FGroupView;
	void *FEditInstance;
	void *FHeaderInstance;
	_TCustomListView__1 FSavedIndents;
	bool FDeletingAllItems;
	System::Classes::TNotifyEvent FOldBrushChange;
	System::Classes::TNotifyEvent FOldFontChange;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall SaveIndents();
	void __fastcall RestoreIndents();
	bool __fastcall AreItemsStored();
	void __fastcall CanvasBrushChanged(System::TObject* Sender);
	void __fastcall CanvasFontChanged(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDrag(Vcl::Controls::TCMDrag &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyLV &Message);
	void __fastcall DoAutoSize();
	void __fastcall DoDragOver(Vcl::Controls::TDragObject* Source, int X, int Y, bool CanDrop);
	void __fastcall DrawWorkAreas();
	void __fastcall EditWndProc(Winapi::Messages::TMessage &Message);
	System::Types::TRect __fastcall GetBoundingRect();
	TListColumn* __fastcall GetColumnFromIndex(int Index);
	TListColumn* __fastcall GetColumnFromTag(int Tag);
	TListItem* __fastcall GetDropTarget();
	TListItem* __fastcall GetFocused();
	void __fastcall GetImageIndex(TListItem* Item);
	void __fastcall GetSubItemImage(TListItem* Item, int SubItem, int &ImageIndex);
	TListItem* __fastcall GetItem(const tagLVITEMW &Value);
	TListItem* __fastcall GetSelected();
	TListItem* __fastcall GetTopItem();
	System::Types::TPoint __fastcall GetViewOrigin();
	int __fastcall GetVisibleRowCount();
	int __fastcall GetHoverTime();
	void __fastcall HeaderWndProc(Winapi::Messages::TMessage &Message);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall RestoreChecks();
	void __fastcall SaveChecks();
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetColumnClick(bool Value);
	void __fastcall SetColumnHeaders(bool Value);
	void __fastcall SetDropTarget(TListItem* Value);
	void __fastcall SetFocused(TListItem* Value);
	void __fastcall SetHideSelection(bool Value);
	void __fastcall SetIconOptions(TIconOptions* Value);
	void __fastcall SetImageList(NativeUInt Value, int Flags);
	void __fastcall SetLargeImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetGroupHeaderImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetAllocBy(int Value);
	void __fastcall SetItems(TListItems* Value);
	void __fastcall SetListColumns(TListColumns* Value);
	void __fastcall SetListGroups(TListGroups* Value);
	void __fastcall SetOwnerData(bool Value);
	void __fastcall SetOwnerDraw(bool Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetShowWorkAreas(const bool Value);
	void __fastcall SetSmallImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetSortType(TSortType Value);
	void __fastcall SetSelected(TListItem* Value);
	void __fastcall SetStateImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetTextBkColor(System::Uitypes::TColor Value);
	void __fastcall SetTextColor(System::Uitypes::TColor Value);
	void __fastcall SetCheckboxes(bool Value);
	void __fastcall SetFlatScrollBars(bool Value);
	void __fastcall SetFullDrag(bool Value);
	void __fastcall SetGridLines(bool Value);
	void __fastcall SetHotTrack(bool Value);
	void __fastcall SetHotTrackStyles(TListHotTrackStyles Value);
	void __fastcall SetRowSelect(bool Value);
	void __fastcall SetHoverTime(int Value);
	void __fastcall SetGroupView(bool Value);
	void __fastcall ResetExStyles();
	bool __fastcall ValidHeaderHandle();
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TWMParentNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall WMCtlColorEdit(Winapi::Messages::TMessage &Message);
	bool __fastcall StoreGroups();
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual bool __fastcall CanObserve(const int ID);
	DYNAMIC bool __fastcall CanChange(TListItem* Item, int Change);
	DYNAMIC bool __fastcall CanEdit(TListItem* Item);
	DYNAMIC void __fastcall Change(TListItem* Item, int Change);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC void __fastcall ColClick(TListColumn* Column);
	DYNAMIC void __fastcall ColRightClick(TListColumn* Column, const System::Types::TPoint &Point);
	bool __fastcall ColumnsShowing();
	virtual TListItem* __fastcall CreateListItem();
	virtual TListItems* __fastcall CreateListItems();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual bool __fastcall CustomDraw(const System::Types::TRect &ARect, TCustomDrawStage Stage);
	virtual bool __fastcall CustomDrawItem(TListItem* Item, TCustomDrawState State, TCustomDrawStage Stage);
	virtual bool __fastcall CustomDrawSubItem(TListItem* Item, int SubItem, TCustomDrawState State, TCustomDrawStage Stage);
	DYNAMIC void __fastcall Delete(TListItem* Item);
	virtual void __fastcall DestroyWnd();
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	virtual void __fastcall DoGesture(const Vcl::Controls::TGestureEventInfo &EventInfo, bool &Handled);
	virtual void __fastcall DoSelectItem(TListItem* Item, bool Selected);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	virtual void __fastcall DoInfoTip(TListItem* Item, System::UnicodeString &InfoTip);
	virtual void __fastcall DrawItem(TListItem* Item, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	DYNAMIC void __fastcall Edit(const tagLVITEMW &Item);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall OwnerDataFetch(TListItem* Item, TItemRequest Request);
	virtual int __fastcall OwnerDataFind(TItemFind Find, const System::UnicodeString FindString, const System::Types::TPoint &FindPosition, void * FindData, int StartIndex, TSearchDirection Direction, bool Wrap);
	virtual bool __fastcall OwnerDataHint(int StartIndex, int EndIndex);
	virtual bool __fastcall OwnerDataStateChange(int StartIndex, int EndIndex, TItemStates OldState, TItemStates NewState);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	HIDESBASE int __fastcall GetItemIndex(TListItem* Value)/* overload */;
	virtual int __fastcall GetItemIndex()/* overload */;
	virtual TListColumnsClass __fastcall GetListColumnsClass();
	virtual int __fastcall GetSelCount();
	DYNAMIC void __fastcall InsertItem(TListItem* Item);
	virtual bool __fastcall IsCustomDrawn(TCustomDrawTarget Target, TCustomDrawStage Stage);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetItemIndex(const int Value)/* overload */;
	virtual void __fastcall SetMultiSelect(bool Value);
	virtual void __fastcall SetViewStyle(TViewStyle Value);
	void __fastcall UpdateColumn(int AnIndex);
	void __fastcall UpdateColumns();
	void __fastcall UpdateGroup(int AnIndex);
	void __fastcall UpdateGroups();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property TListGroups* Groups = {read=FListGroups, write=SetListGroups, stored=StoreGroups};
	__property TListColumns* Columns = {read=FListColumns, write=SetListColumns};
	__property bool ColumnClick = {read=FColumnClick, write=SetColumnClick, default=1};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, nodefault};
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, default=1};
	__property TIconOptions* IconOptions = {read=FIconOptions, write=SetIconOptions};
	__property int AllocBy = {read=FAllocBy, write=SetAllocBy, default=0};
	__property bool GroupView = {read=FGroupView, write=SetGroupView, default=0};
	__property int HoverTime = {read=GetHoverTime, write=SetHoverTime, default=-1};
	__property Vcl::Imglist::TCustomImageList* LargeImages = {read=FLargeImages, write=SetLargeImages};
	__property Vcl::Imglist::TCustomImageList* GroupHeaderImages = {read=FGroupHeaderImages, write=SetGroupHeaderImages};
	__property bool OwnerData = {read=FOwnerData, write=SetOwnerData, default=0};
	__property bool OwnerDraw = {read=FOwnerDraw, write=SetOwnerDraw, default=0};
	__property TLVAdvancedCustomDrawEvent OnAdvancedCustomDraw = {read=FOnAdvancedCustomDraw, write=FOnAdvancedCustomDraw};
	__property TLVAdvancedCustomDrawItemEvent OnAdvancedCustomDrawItem = {read=FOnAdvancedCustomDrawItem, write=FOnAdvancedCustomDrawItem};
	__property TLVAdvancedCustomDrawSubItemEvent OnAdvancedCustomDrawSubItem = {read=FOnAdvancedCustomDrawSubItem, write=FOnAdvancedCustomDrawSubItem};
	__property TLVChangeEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TLVChangingEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property TLVColumnClickEvent OnColumnClick = {read=FOnColumnClick, write=FOnColumnClick};
	__property System::Classes::TNotifyEvent OnColumnDragged = {read=FOnColumnDragged, write=FOnColumnDragged};
	__property TLVColumnRClickEvent OnColumnRightClick = {read=FOnColumnRightClick, write=FOnColumnRightClick};
	__property TLVCompareEvent OnCompare = {read=FOnCompare, write=FOnCompare};
	__property TLVCreateItemClassEvent OnCreateItemClass = {read=FOnCreateItemClass, write=FOnCreateItemClass};
	__property TLVCustomDrawEvent OnCustomDraw = {read=FOnCustomDraw, write=FOnCustomDraw};
	__property TLVCustomDrawItemEvent OnCustomDrawItem = {read=FOnCustomDrawItem, write=FOnCustomDrawItem};
	__property TLVCustomDrawSubItemEvent OnCustomDrawSubItem = {read=FOnCustomDrawSubItem, write=FOnCustomDrawSubItem};
	__property TLVOwnerDataEvent OnData = {read=FOnData, write=FOnData};
	__property TLVOwnerDataFindEvent OnDataFind = {read=FOnDataFind, write=FOnDataFind};
	__property TLVOwnerDataHintEvent OnDataHint = {read=FOnDataHint, write=FOnDataHint};
	__property TLVOwnerDataStateChangeEvent OnDataStateChange = {read=FOnDataStateChange, write=FOnDataStateChange};
	__property TLVDeletedEvent OnDeletion = {read=FOnDeletion, write=FOnDeletion};
	__property TLVDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TLVEditedEvent OnEdited = {read=FOnEdited, write=FOnEdited};
	__property TLVEditingEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	__property TLVInfoTipEvent OnInfoTip = {read=FOnInfoTip, write=FOnInfoTip};
	__property TLVDeletedEvent OnInsert = {read=FOnInsert, write=FOnInsert};
	__property TLVNotifyEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	__property TLVSubItemImageEvent OnGetSubItemImage = {read=FOnGetSubItemImage, write=FOnGetSubItemImage};
	__property TLVSelectItemEvent OnSelectItem = {read=FOnSelectItem, write=FOnSelectItem};
	__property TLVCheckedItemEvent OnItemChecked = {read=FOnItemChecked, write=FOnItemChecked};
	__property bool Reading = {read=FReading, nodefault};
	__property bool ShowColumnHeaders = {read=FShowColumnHeaders, write=SetColumnHeaders, default=1};
	__property bool ShowWorkAreas = {read=FShowWorkAreas, write=SetShowWorkAreas, default=0};
	__property Vcl::Imglist::TCustomImageList* SmallImages = {read=FSmallImages, write=SetSmallImages};
	__property TSortType SortType = {read=FSortType, write=SetSortType, default=0};
	__property Vcl::Imglist::TCustomImageList* StateImages = {read=FStateImages, write=SetStateImages};
	__property TViewStyle ViewStyle = {read=FViewStyle, write=SetViewStyle, default=0};
	
public:
	__fastcall virtual TCustomListView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomListView();
	virtual void __fastcall AddItem(System::UnicodeString Item, System::TObject* AObject);
	bool __fastcall AlphaSort();
	void __fastcall Arrange(TListArrangement Code);
	virtual void __fastcall Clear();
	virtual void __fastcall ClearSelection();
	virtual void __fastcall CopySelection(Vcl::Controls::TCustomListControl* Destination);
	virtual void __fastcall DeleteSelected();
	TListItem* __fastcall FindCaption(int StartIndex, System::UnicodeString Value, bool Partial, bool Inclusive, bool Wrap);
	TListItem* __fastcall FindData(int StartIndex, void * Value, bool Inclusive, bool Wrap);
	virtual int __fastcall GetCount();
	THitTests __fastcall GetHitTestInfoAt(int X, int Y);
	TListItem* __fastcall GetItemAt(int X, int Y);
	TListItem* __fastcall GetNearestItem(const System::Types::TPoint &Point, TSearchDirection Direction);
	TListItem* __fastcall GetNextItem(TListItem* StartItem, TSearchDirection Direction, TItemStates States);
	System::UnicodeString __fastcall GetSearchString();
	bool __fastcall IsEditing();
	virtual void __fastcall SelectAll();
	void __fastcall Scroll(int DX, int DY);
	bool __fastcall CustomSort(PFNLVCOMPARE SortProc, NativeInt lParam);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property bool Checkboxes = {read=FCheckboxes, write=SetCheckboxes, default=0};
	__property TListColumn* Column[int Index] = {read=GetColumnFromIndex};
	__property TListItem* DropTarget = {read=GetDropTarget, write=SetDropTarget};
	__property bool FlatScrollBars = {read=FFlatScrollBars, write=SetFlatScrollBars, default=0};
	__property bool FullDrag = {read=FFullDrag, write=SetFullDrag, default=0};
	__property bool GridLines = {read=FGridLines, write=SetGridLines, default=0};
	virtual Vcl::Controls::TDragImageList* __fastcall GetDragImages();
	__property bool HotTrack = {read=FHotTrack, write=SetHotTrack, default=0};
	__property TListHotTrackStyles HotTrackStyles = {read=FHotTrackStyles, write=SetHotTrackStyles, default=0};
	__property TListItem* ItemFocused = {read=GetFocused, write=SetFocused};
	__property TListItems* Items = {read=FListItems, write=SetItems, stored=AreItemsStored};
	__property bool RowSelect = {read=FRowSelect, write=SetRowSelect, default=0};
	__property int SelCount = {read=GetSelCount, nodefault};
	__property TListItem* Selected = {read=GetSelected, write=SetSelected};
	int __fastcall StringWidth(System::UnicodeString S);
	void __fastcall UpdateItems(int FirstIndex, int LastIndex);
	__property TListItem* TopItem = {read=GetTopItem};
	__property System::Types::TPoint ViewOrigin = {read=GetViewOrigin};
	__property int VisibleRowCount = {read=GetVisibleRowCount, nodefault};
	__property System::Types::TRect BoundingRect = {read=GetBoundingRect};
	__property TWorkAreas* WorkAreas = {read=FWorkAreas};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomListView(HWND ParentWindow) : Vcl::Controls::TCustomMultiSelectListControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TListView : public TCustomListView
{
	typedef TCustomListView inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property AllocBy = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Checkboxes = {default=0};
	__property Color = {default=-16777211};
	__property Columns;
	__property ColumnClick = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FlatScrollBars = {default=0};
	__property FullDrag = {default=0};
	__property GridLines = {default=0};
	__property Groups;
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property HotTrackStyles = {default=0};
	__property HoverTime = {default=-1};
	__property IconOptions;
	__property Items;
	__property LargeImages;
	__property MultiSelect = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OwnerData = {default=0};
	__property OwnerDraw = {default=0};
	__property GroupHeaderImages;
	__property GroupView = {default=0};
	__property ReadOnly = {default=0};
	__property RowSelect = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowColumnHeaders = {default=1};
	__property ShowWorkAreas = {default=0};
	__property ShowHint;
	__property SmallImages;
	__property SortType = {default=0};
	__property StateImages;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property ViewStyle = {default=0};
	__property Visible = {default=1};
	__property OnAdvancedCustomDraw;
	__property OnAdvancedCustomDrawItem;
	__property OnAdvancedCustomDrawSubItem;
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnColumnClick;
	__property OnColumnDragged;
	__property OnColumnRightClick;
	__property OnCompare;
	__property OnContextPopup;
	__property OnCustomDraw;
	__property OnCustomDrawItem;
	__property OnCustomDrawSubItem;
	__property OnCreateItemClass;
	__property OnData;
	__property OnDataFind;
	__property OnDataHint;
	__property OnDataStateChange;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDrawItem;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetImageIndex;
	__property OnGetSubItemImage;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnInfoTip;
	__property OnInsert;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnSelectItem;
	__property OnItemChecked;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomListView.Create */ inline __fastcall virtual TListView(System::Classes::TComponent* AOwner) : TCustomListView(AOwner) { }
	/* TCustomListView.Destroy */ inline __fastcall virtual ~TListView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TListView(HWND ParentWindow) : TCustomListView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TListViewActionLink : public Vcl::Listactns::TListActionLink
{
	typedef Vcl::Listactns::TListActionLink inherited;
	
protected:
	virtual void __fastcall AddItem(Vcl::Listactns::TListControlItem* AnItem)/* overload */;
	virtual void __fastcall AddItem(System::UnicodeString ACaption, int AImageIndex, void * DataPtr)/* overload */;
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TListViewActionLink(System::TObject* AClient) : Vcl::Listactns::TListActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TListViewActionLink() { }
	
};


enum DECLSPEC_DENUM TCommonAVI : unsigned char { aviNone, aviFindFolder, aviFindFile, aviFindComputer, aviCopyFiles, aviCopyFile, aviRecycleFile, aviEmptyRecycle, aviDeleteFile };

struct DECLSPEC_DRECORD TAnimateParams
{
public:
	System::UnicodeString FileName;
	TCommonAVI CommonAVI;
	NativeUInt ResHandle;
	System::UnicodeString ResName;
	int ResId;
};


typedef NativeInt TAnimateResId;

class PASCALIMPLEMENTATION TAnimate : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	bool FActive;
	System::UnicodeString FFileName;
	bool FCenter;
	TCommonAVI FCommonAVI;
	int FFrameCount;
	int FFrameHeight;
	int FFrameWidth;
	bool FOpen;
	bool FRecreateNeeded;
	int FRepetitions;
	NativeUInt FResHandle;
	int FResId;
	System::UnicodeString FResName;
	bool FStreamedActive;
	bool FTimers;
	bool FTransparent;
	short FStartFrame;
	short FStopFrame;
	int FStopCount;
	System::Classes::TNotifyEvent FOnOpen;
	System::Classes::TNotifyEvent FOnClose;
	System::Classes::TNotifyEvent FOnStart;
	System::Classes::TNotifyEvent FOnStop;
	void __fastcall CheckOpen();
	bool __fastcall InternalClose();
	bool __fastcall InternalOpen();
	void __fastcall GetAnimateParams(TAnimateParams &Params);
	void __fastcall SetAnimateParams(const TAnimateParams &Params);
	NativeInt __fastcall GetActualResId();
	NativeUInt __fastcall GetActualResHandle();
	void __fastcall GetFrameInfo();
	void __fastcall SetActive(bool Value);
	void __fastcall SetFileName(System::UnicodeString Value);
	void __fastcall SetCenter(bool Value);
	void __fastcall SetCommonAVI(TCommonAVI Value);
	void __fastcall SetOpen(bool Value);
	void __fastcall SetRepetitions(int Value);
	void __fastcall SetResHandle(NativeUInt Value);
	void __fastcall SetResId(int Value);
	void __fastcall SetResName(System::UnicodeString Value);
	void __fastcall SetTimers(bool Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetStartFrame(short Value);
	void __fastcall SetStopFrame(short Value);
	void __fastcall UpdateActiveState();
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	
protected:
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall DoOpen();
	virtual void __fastcall DoClose();
	virtual void __fastcall DoStart();
	virtual void __fastcall DoStop();
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TAnimate(System::Classes::TComponent* AOwner);
	__property int FrameCount = {read=FFrameCount, nodefault};
	__property int FrameHeight = {read=FFrameHeight, nodefault};
	__property int FrameWidth = {read=FFrameWidth, nodefault};
	__property bool Open = {read=FOpen, write=SetOpen, nodefault};
	void __fastcall Play(System::Word FromFrame, System::Word ToFrame, int Count);
	void __fastcall Reset();
	void __fastcall Seek(short Frame);
	void __fastcall Stop();
#ifndef _WIN64
	__property NativeUInt ResHandle = {read=FResHandle, write=SetResHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt ResHandle = {read=FResHandle, write=SetResHandle};
#endif /* _WIN64 */
	__property int ResId = {read=FResId, write=SetResId, nodefault};
	__property System::UnicodeString ResName = {read=FResName, write=SetResName};
	
__published:
	__property Align = {default=0};
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BorderWidth = {default=0};
	__property bool Center = {read=FCenter, write=SetCenter, default=1};
	__property Color = {default=-16777211};
	__property TCommonAVI CommonAVI = {read=FCommonAVI, write=SetCommonAVI, default=0};
	__property Constraints;
	__property DoubleBuffered;
	__property System::UnicodeString FileName = {read=FFileName, write=SetFileName};
	__property ParentColor = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property int Repetitions = {read=FRepetitions, write=SetRepetitions, default=0};
	__property ShowHint;
	__property short StartFrame = {read=FStartFrame, write=SetStartFrame, default=1};
	__property short StopFrame = {read=FStopFrame, write=SetStopFrame, default=0};
	__property bool Timers = {read=FTimers, write=SetTimers, default=0};
	__property Touch;
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=1};
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnOpen = {read=FOnOpen, write=FOnOpen};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property OnGesture;
	__property System::Classes::TNotifyEvent OnStart = {read=FOnStart, write=FOnStart};
	__property System::Classes::TNotifyEvent OnStop = {read=FOnStop, write=FOnStop};
public:
	/* TWinControl.CreateParented */ inline __fastcall TAnimate(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TAnimate() { }
	
};


enum DECLSPEC_DENUM TToolButtonStyle : unsigned char { tbsButton, tbsCheck, tbsDropDown, tbsSeparator, tbsDivider, tbsTextButton };

enum DECLSPEC_DENUM TToolButtonState : unsigned char { tbsChecked, tbsPressed, tbsEnabled, tbsHidden, tbsIndeterminate, tbsWrap, tbsEllipses, tbsMarked };

class PASCALIMPLEMENTATION TToolButtonActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TToolButton* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsDropdownMenuLinked();
	virtual bool __fastcall IsEnableDropdownLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsImageNameLinked();
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetDropdownMenu(Vcl::Menus::TPopupMenu* Value);
	virtual void __fastcall SetEnableDropdown(bool Value);
	virtual void __fastcall SetImageIndex(int Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TToolButtonActionLink(System::TObject* AClient) : Vcl::Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TToolButtonActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TToolButtonActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TToolButtonActionLinkClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TToolButton : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	bool FAllowAllUp;
	bool FAutoSize;
	bool FDown;
	bool FGrouped;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	bool FIndeterminate;
	bool FMarked;
	Vcl::Menus::TMenuItem* FMenuItem;
	Vcl::Menus::TPopupMenu* FDropdownMenu;
	bool FEnableDropdown;
	bool FWrap;
	TToolButtonStyle FStyle;
	int FUpdateCount;
	System::Byte __fastcall GetButtonState();
	int __fastcall GetIndex();
	bool __fastcall IsCheckedStored();
	bool __fastcall IsImageIndexStored();
	bool __fastcall IsImageNameStored();
	bool __fastcall IsWidthStored();
	void __fastcall SetButtonState(System::Byte State);
	void __fastcall SetDown(bool Value);
	void __fastcall SetDropdownMenu(Vcl::Menus::TPopupMenu* Value);
	void __fastcall SetEnableDropdown(bool Value);
	void __fastcall SetGrouped(bool Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(System::Uitypes::TImageName Value);
	void __fastcall SetIndeterminate(bool Value);
	void __fastcall SetMarked(bool Value);
	void __fastcall SetMenuItem(Vcl::Menus::TMenuItem* Value);
	void __fastcall SetStyle(TToolButtonStyle Value);
	void __fastcall SetWrap(bool Value);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHitTest(Winapi::Messages::TWMNCHitTest &Message);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	
protected:
	TToolBar* FToolBar;
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	virtual void __fastcall RefreshControl();
	virtual void __fastcall SetAutoSize(bool Value);
	void __fastcall SetToolBar(TToolBar* AToolBar);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall UpdateControl();
	DYNAMIC void __fastcall ValidateContainer(System::Classes::TComponent* AComponent);
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	void __fastcall CheckImageIndexAndName();
	
public:
	__fastcall virtual TToolButton(System::Classes::TComponent* AOwner);
	DYNAMIC bool __fastcall CheckMenuDropdown();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property int Index = {read=GetIndex, nodefault};
	
__published:
	__property Action;
	__property bool AllowAllUp = {read=FAllowAllUp, write=FAllowAllUp, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=0};
	__property Caption = {default=0};
	__property bool Down = {read=FDown, write=SetDown, stored=IsCheckedStored, default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Vcl::Menus::TPopupMenu* DropdownMenu = {read=FDropdownMenu, write=SetDropdownMenu};
	__property Enabled = {default=1};
	__property bool EnableDropdown = {read=FEnableDropdown, write=SetEnableDropdown, default=0};
	__property bool Grouped = {read=FGrouped, write=SetGrouped, default=0};
	__property Height = {stored=false};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName, stored=IsImageNameStored};
	__property bool Indeterminate = {read=FIndeterminate, write=SetIndeterminate, default=0};
	__property bool Marked = {read=FMarked, write=SetMarked, default=0};
	__property Vcl::Menus::TMenuItem* MenuItem = {read=FMenuItem, write=SetMenuItem};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool Wrap = {read=FWrap, write=SetWrap, default=0};
	__property ShowHint;
	__property TToolButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Visible = {default=1};
	__property Width = {stored=IsWidthStored};
	__property OnClick;
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
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TToolButton() { }
	
};


enum DECLSPEC_DENUM Vcl_Comctrls__74 : unsigned char { tbNoEdges, tbHiliteHotTrack, tbNoOffset, tbNoMark, tbNoEtchedEffect };

typedef System::Set<Vcl_Comctrls__74, Vcl_Comctrls__74::tbNoEdges, Vcl_Comctrls__74::tbNoEtchedEffect> TTBCustomDrawFlags;

enum DECLSPEC_DENUM Vcl_Comctrls__84 : unsigned char { gdoHotTrack, gdoGradient };

typedef System::Set<Vcl_Comctrls__84, Vcl_Comctrls__84::gdoHotTrack, Vcl_Comctrls__84::gdoGradient> TTBGradientDrawingOptions;

enum DECLSPEC_DENUM TTBDrawingStyle : unsigned char { dsNormal, dsGradient };

typedef void __fastcall (__closure *TTBCustomDrawEvent)(TToolBar* Sender, const System::Types::TRect &ARect, bool &DefaultDraw);

typedef void __fastcall (__closure *TTBCustomDrawBtnEvent)(TToolBar* Sender, TToolButton* Button, TCustomDrawState State, bool &DefaultDraw);

typedef void __fastcall (__closure *TTBAdvancedCustomDrawEvent)(TToolBar* Sender, const System::Types::TRect &ARect, TCustomDrawStage Stage, bool &DefaultDraw);

typedef void __fastcall (__closure *TTBAdvancedCustomDrawBtnEvent)(TToolBar* Sender, TToolButton* Button, TCustomDrawState State, TCustomDrawStage Stage, TTBCustomDrawFlags &Flags, bool &DefaultDraw);

typedef void __fastcall (__closure *TTBCustomizeQueryEvent)(TToolBar* Sender, int Index, bool &Allow);

typedef void __fastcall (__closure *TTBNewButtonEvent)(TToolBar* Sender, int Index, TToolButton* &Button);

typedef void __fastcall (__closure *TTBButtonEvent)(TToolBar* Sender, TToolButton* Button);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TToolBarEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TToolBar* FToolBar;
	
public:
	__fastcall TToolBarEnumerator(TToolBar* AToolBar);
	TToolButton* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TToolButton* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TToolBarEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TToolBar : public Vcl::Toolwin::TToolWindow
{
	typedef Vcl::Toolwin::TToolWindow inherited;
	
private:
	Vcl::Graphics::TBitmap* FBitmap;
	bool FAllowTextButtons;
	int FButtonWidth;
	int FButtonHeight;
	System::Classes::TList* FButtons;
	System::UnicodeString FCaption;
	Vcl::Graphics::TCanvas* FCanvas;
	bool FCanvasChanged;
	bool FCustomizable;
	bool FCustomizing;
	TTBGradientDrawingOptions FGradientDrawingOptions;
	Vcl::Graphutil::TGradientDirection FGradientDirection;
	TTBDrawingStyle FDrawingStyle;
	System::Uitypes::TColor FGradientEndColor;
	System::Uitypes::TColor FGradientStartColor;
	System::Uitypes::TColor FHotTrackColor;
	bool FShowCaptions;
	bool FList;
	bool FFlat;
	int FLastQueryDeleteIndex;
	bool FTransparent;
	bool FTransparentSet;
	bool FWrapable;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FDisabledImages;
	Vcl::Imglist::TChangeLink* FDisabledImageChangeLink;
	Vcl::Imglist::TCustomImageList* FHotImages;
	Vcl::Imglist::TChangeLink* FHotImageChangeLink;
	int FIndent;
	bool FNewStyle;
	Vcl::Graphics::TBitmap* FNullBitmap;
	HBITMAP FOldHandle;
	bool FRestoring;
	int FUpdateCount;
	int FHeightMargin;
	int FSeparators;
	TTBAdvancedCustomDrawEvent FOnAdvancedCustomDraw;
	TTBAdvancedCustomDrawBtnEvent FOnAdvancedCustomDrawButton;
	TTBCustomDrawEvent FOnCustomDraw;
	TTBCustomDrawBtnEvent FOnCustomDrawButton;
	TTBCustomizeQueryEvent FOnCustomizeCanDelete;
	TTBCustomizeQueryEvent FOnCustomizeCanInsert;
	TTBNewButtonEvent FOnCustomizeNewButton;
	System::Classes::TNotifyEvent FOnCustomized;
	TTBButtonEvent FOnCustomizeDelete;
	TTBButtonEvent FOnCustomizeAdded;
	System::Classes::TNotifyEvent FOnCustomizing;
	System::Classes::TNotifyEvent FOnCustomizeReset;
	bool FCaptureChangeCancels;
	bool FInMenuLoop;
	Vcl::Menus::TPopupMenu* FTempMenu;
	Vcl::Menus::TMenuItem* FButtonMenu;
	TToolButton* FMenuButton;
	bool FMenuResult;
	bool FMenuDropped;
	Vcl::Menus::TMainMenu* FMenu;
	System::UnicodeString FCustomizeKeyName;
	System::UnicodeString FCustomizeValueName;
	int FOurFont;
	int FStockFont;
	bool FHideClippedButtons;
	bool FStopReorderButtons;
	System::Classes::TNotifyEvent FOldBrushChange;
	System::Classes::TNotifyEvent FOldFontChange;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	bool __fastcall IsGradientEndColorStored();
	int __fastcall ButtonIndex(int OldIndex, int ALeft, int ATop);
	void __fastcall CanvasBrushChanged(System::TObject* Sender);
	void __fastcall CanvasFontChanged(System::TObject* Sender);
	bool __fastcall DoGetButton(tagNMTOOLBARW &NMToolbar);
	void __fastcall LoadImages(Vcl::Imglist::TCustomImageList* AImages);
	TToolButton* __fastcall GetButton(int Index);
	int __fastcall GetButtonCount();
	void __fastcall GetButtonSize(int &AWidth, int &AHeight);
	int __fastcall GetRowCount();
	void __fastcall SetAllowTextButtons(bool Value);
	void __fastcall SetList(bool Value);
	void __fastcall SetShowCaptions(bool Value);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetWrapable(bool Value);
	void __fastcall InsertButton(Vcl::Controls::TControl* Control);
	void __fastcall RemoveButton(Vcl::Controls::TControl* Control);
	bool __fastcall RefreshButton(int Index);
	void __fastcall UpdateButton(int Index);
	void __fastcall UpdateButtons();
	void __fastcall UpdateButtonState(int Index);
	void __fastcall UpdateButtonStates();
	bool __fastcall UpdateItem(int Message, int FromIndex, int ToIndex);
	bool __fastcall UpdateItem2(int Message, int FromIndex, int ToIndex);
	void __fastcall ClearTempMenu();
	void __fastcall CreateButtons(int NewWidth, int NewHeight);
	void __fastcall SetButtonWidth(int Value);
	void __fastcall SetButtonHeight(int Value);
	void __fastcall UpdateImages();
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetImageList(NativeUInt Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall DisabledImageListChange(System::TObject* Sender);
	void __fastcall SetDisabledImageList(NativeUInt Value);
	void __fastcall SetDisabledImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall HotImageListChange(System::TObject* Sender);
	void __fastcall SetHotImageList(NativeUInt Value);
	void __fastcall SetHotImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetIndent(int Value);
	void __fastcall SetMenu(Vcl::Menus::TMainMenu* const Value);
	void __fastcall AdjustControl(Vcl::Controls::TControl* Control);
	void __fastcall RecreateButtons();
	void __fastcall RecreateButtonsFromToolbar();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall ResizeButtons();
	void __fastcall SaveButtons(bool Save);
	int __fastcall InternalButtonCount();
	int __fastcall ReorderButton(int OldIndex, int ALeft, int ATop);
	MESSAGE void __fastcall WMCaptureChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMGetText(Winapi::Messages::TWMGetText &Message);
	MESSAGE void __fastcall WMGetTextLength(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMNotifyFormat(Winapi::Messages::TWMNotifyFormat &Message);
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TWMSetText &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMSysChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSysCommand(Winapi::Messages::TWMSysCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CNSysKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMSysFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysFontsAllChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNDropDownClosed(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyTLB &Message);
	void __fastcall SetCustomizable(const bool Value);
	void __fastcall SetHideClippedButtons(const bool Value);
	void __fastcall SetGradientDrawingOptions(TTBGradientDrawingOptions Value);
	void __fastcall SetGradientDirection(Vcl::Graphutil::TGradientDirection Value);
	void __fastcall SetGradientEndColor(System::Uitypes::TColor Value);
	void __fastcall SetGradientStartColor(System::Uitypes::TColor Value);
	void __fastcall SetDrawingStyle(TTBDrawingStyle Value);
	HIDESBASE NativeInt __fastcall Perform(unsigned Msg, NativeUInt WParam, _TBBUTTON &LParam)/* overload */;
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Message);
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	DYNAMIC void __fastcall CancelMenu();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC bool __fastcall CheckMenuDropdown(TToolButton* Button);
	DYNAMIC void __fastcall ClickButton(TToolButton* Button);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual bool __fastcall GradientDrawToolBar(const System::Types::TRect &ARect);
	virtual bool __fastcall GradientDrawButton(TToolButton* Button, TCustomDrawState State, TTBCustomDrawFlags &Flags);
	virtual bool __fastcall CustomDraw(const System::Types::TRect &ARect, TCustomDrawStage Stage);
	virtual bool __fastcall CustomDrawButton(TToolButton* Button, TCustomDrawState State, TCustomDrawStage Stage, TTBCustomDrawFlags &Flags);
	virtual bool __fastcall DoQueryInsert(int Index);
	virtual bool __fastcall DoQueryDelete(int Index);
	TToolButton* __fastcall FindButtonFromAccel(System::Word Accel);
	DYNAMIC void __fastcall InitMenu(TToolButton* Button);
	virtual bool __fastcall IsCustomDrawn(TCustomDrawTarget Target, TCustomDrawStage Stage);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall RepositionButton(int Index);
	void __fastcall RepositionButtons(int Index);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	bool __fastcall WrapButtons(int &NewWidth, int &NewHeight);
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall SetAutoSize(bool Value);
	virtual void __fastcall UpdateStyleElements();
	
public:
	__fastcall virtual TToolBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TToolBar();
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	HIDESBASE TToolBarEnumerator* __fastcall GetEnumerator();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	DYNAMIC bool __fastcall TrackMenu(TToolButton* Button);
	__property int ButtonCount = {read=GetButtonCount, nodefault};
	__property TToolButton* Buttons[int Index] = {read=GetButton};
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property System::UnicodeString CustomizeKeyName = {read=FCustomizeKeyName, write=FCustomizeKeyName};
	__property System::UnicodeString CustomizeValueName = {read=FCustomizeValueName, write=FCustomizeValueName};
	__property int RowCount = {read=GetRowCount, nodefault};
	
__published:
	__property Align = {default=1};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BorderWidth = {default=0};
	__property int ButtonHeight = {read=FButtonHeight, write=SetButtonHeight, default=22};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=23};
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property bool Customizable = {read=FCustomizable, write=SetCustomizable, default=0};
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=SetDisabledImages};
	__property DoubleBuffered;
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property TTBDrawingStyle DrawingStyle = {read=FDrawingStyle, write=SetDrawingStyle, default=0};
	__property EdgeBorders = {default=0};
	__property EdgeInner = {default=1};
	__property EdgeOuter = {default=2};
	__property Enabled = {default=1};
	__property bool Flat = {read=FFlat, write=SetFlat, default=1};
	__property Font;
	__property System::Uitypes::TColor GradientEndColor = {read=FGradientEndColor, write=SetGradientEndColor, stored=IsGradientEndColorStored, nodefault};
	__property System::Uitypes::TColor GradientStartColor = {read=FGradientStartColor, write=SetGradientStartColor, default=-16777211};
	__property Height = {default=32};
	__property bool HideClippedButtons = {read=FHideClippedButtons, write=SetHideClippedButtons, default=0};
	__property Vcl::Imglist::TCustomImageList* HotImages = {read=FHotImages, write=SetHotImages};
	__property System::Uitypes::TColor HotTrackColor = {read=FHotTrackColor, write=FHotTrackColor, default=15717318};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int Indent = {read=FIndent, write=SetIndent, default=0};
	__property bool List = {read=FList, write=SetList, default=0};
	__property Vcl::Menus::TMainMenu* Menu = {read=FMenu, write=SetMenu};
	__property Vcl::Graphutil::TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=1};
	__property TTBGradientDrawingOptions GradientDrawingOptions = {read=FGradientDrawingOptions, write=SetGradientDrawingOptions, default=3};
	__property ParentColor = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ShowCaptions = {read=FShowCaptions, write=SetShowCaptions, default=0};
	__property bool AllowTextButtons = {read=FAllowTextButtons, write=SetAllowTextButtons, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property bool Transparent = {read=FTransparent, write=SetTransparent, stored=FTransparentSet, nodefault};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property bool Wrapable = {read=FWrapable, write=SetWrapable, default=1};
	__property TTBAdvancedCustomDrawEvent OnAdvancedCustomDraw = {read=FOnAdvancedCustomDraw, write=FOnAdvancedCustomDraw};
	__property TTBAdvancedCustomDrawBtnEvent OnAdvancedCustomDrawButton = {read=FOnAdvancedCustomDrawButton, write=FOnAdvancedCustomDrawButton};
	__property OnClick;
	__property OnContextPopup;
	__property TTBCustomDrawEvent OnCustomDraw = {read=FOnCustomDraw, write=FOnCustomDraw};
	__property TTBCustomDrawBtnEvent OnCustomDrawButton = {read=FOnCustomDrawButton, write=FOnCustomDrawButton};
	__property TTBButtonEvent OnCustomizeAdded = {read=FOnCustomizeAdded, write=FOnCustomizeAdded};
	__property TTBCustomizeQueryEvent OnCustomizeCanInsert = {read=FOnCustomizeCanInsert, write=FOnCustomizeCanInsert};
	__property TTBCustomizeQueryEvent OnCustomizeCanDelete = {read=FOnCustomizeCanDelete, write=FOnCustomizeCanDelete};
	__property System::Classes::TNotifyEvent OnCustomized = {read=FOnCustomized, write=FOnCustomized};
	__property TTBButtonEvent OnCustomizeDelete = {read=FOnCustomizeDelete, write=FOnCustomizeDelete};
	__property System::Classes::TNotifyEvent OnCustomizing = {read=FOnCustomizing, write=FOnCustomizing};
	__property TTBNewButtonEvent OnCustomizeNewButton = {read=FOnCustomizeNewButton, write=FOnCustomizeNewButton};
	__property System::Classes::TNotifyEvent OnCustomizeReset = {read=FOnCustomizeReset, write=FOnCustomizeReset};
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
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TWinControl.CreateParented */ inline __fastcall TToolBar(HWND ParentWindow) : Vcl::Toolwin::TToolWindow(ParentWindow) { }
	
	/* Hoisted overloads: */
	
public:
	inline NativeInt __fastcall  Perform(unsigned Msg, NativeUInt WParam, NativeInt LParam){ return Vcl::Controls::TControl::Perform(Msg, WParam, LParam); }
	inline NativeInt __fastcall  Perform(unsigned Msg, NativeUInt WParam, System::WideChar * LParam){ return Vcl::Controls::TControl::Perform(Msg, WParam, LParam); }
	inline NativeInt __fastcall  Perform(unsigned Msg, NativeUInt WParam, System::Types::TRect &LParam){ return Vcl::Controls::TControl::Perform(Msg, WParam, LParam); }
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TToolBarDockObject : public Vcl::Controls::TDragDockObject
{
	typedef Vcl::Controls::TDragDockObject inherited;
	
private:
	System::Types::TRect FEraseDockRect;
	bool FErase;
	
protected:
	virtual void __fastcall AdjustDockRect(const System::Types::TRect &ARect);
	virtual void __fastcall DrawDragDockImage();
	virtual void __fastcall EraseDragDockImage();
	virtual System::Uitypes::TCursor __fastcall GetDragCursor(bool Accepted, int X, int Y);
	virtual bool __fastcall ToolDockImage(bool Erase);
public:
	/* TDragDockObject.Create */ inline __fastcall virtual TToolBarDockObject(Vcl::Controls::TControl* AControl) : Vcl::Controls::TDragDockObject(AControl) { }
	/* TDragDockObject.Destroy */ inline __fastcall virtual ~TToolBarDockObject() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCoolBand : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FBreak;
	bool FFixedSize;
	bool FVisible;
	bool FHorizontalOnly;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	bool FFixedBackground;
	int FMinHeight;
	int FMinWidth;
	System::Uitypes::TColor FColor;
	Vcl::Controls::TWinControl* FControl;
	bool FParentColor;
	bool FParentBitmap;
	Vcl::Graphics::TBitmap* FBitmap;
	System::UnicodeString FText;
	int FWidth;
	Vcl::Graphics::TBitmap* FDDB;
	int FID;
	TCoolBar* __fastcall CoolBar();
	bool __fastcall IsColorStored();
	bool __fastcall IsBitmapStored();
	void __fastcall BitmapChanged(System::TObject* Sender);
	int __fastcall GetHeight();
	bool __fastcall GetVisible();
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetBreak(bool Value);
	void __fastcall SetFixedSize(bool Value);
	void __fastcall SetMinHeight(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall SetHorizontalOnly(bool Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetFixedBackground(bool Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetControl(Vcl::Controls::TWinControl* Value);
	void __fastcall SetParentColor(bool Value);
	void __fastcall SetParentBitmap(bool Value);
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetWidth(int Value);
	
protected:
	virtual void __fastcall ChangeScale(int M, int D);
	virtual System::UnicodeString __fastcall GetDisplayName();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	DYNAMIC void __fastcall ParentColorChanged();
	DYNAMIC void __fastcall ParentBitmapChanged();
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	void __fastcall CheckImageIndexAndName();
	
public:
	__fastcall virtual TCoolBand(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCoolBand();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int Height = {read=GetHeight, nodefault};
	
__published:
	__property Vcl::Graphics::TBitmap* Bitmap = {read=FBitmap, write=SetBitmap, stored=IsBitmapStored};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property bool Break = {read=FBreak, write=SetBreak, default=1};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, stored=IsColorStored, default=-16777201};
	__property Vcl::Controls::TWinControl* Control = {read=FControl, write=SetControl};
	__property bool FixedBackground = {read=FFixedBackground, write=SetFixedBackground, default=1};
	__property bool FixedSize = {read=FFixedSize, write=SetFixedSize, default=0};
	__property bool HorizontalOnly = {read=FHorizontalOnly, write=SetHorizontalOnly, default=0};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName};
	__property int MinHeight = {read=FMinHeight, write=SetMinHeight, default=25};
	__property int MinWidth = {read=FMinWidth, write=SetMinWidth, default=0};
	__property bool ParentColor = {read=FParentColor, write=SetParentColor, default=1};
	__property bool ParentBitmap = {read=FParentBitmap, write=SetParentBitmap, default=1};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property bool Visible = {read=GetVisible, write=SetVisible, default=1};
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCoolBands : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCoolBand* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FCreatingBand;
	TCoolBar* FCoolBar;
	unsigned FVisibleCount;
	HIDESBASE TCoolBand* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCoolBand* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	bool __fastcall HaveGraphic();
	
public:
	__fastcall TCoolBands(TCoolBar* CoolBar);
	__fastcall virtual ~TCoolBands();
	HIDESBASE TCoolBand* __fastcall Add();
	TCoolBand* __fastcall FindBand(Vcl::Controls::TControl* AControl);
	__property TCoolBar* CoolBar = {read=FCoolBar};
	__property TCoolBand* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TCoolBandMaximize : unsigned char { bmNone, bmClick, bmDblClick };

class PASCALIMPLEMENTATION TCoolBar : public Vcl::Toolwin::TToolWindow
{
	typedef Vcl::Toolwin::TToolWindow inherited;
	
private:
	TCoolBands* FBands;
	Vcl::Forms::TFormBorderStyle FBandBorderStyle;
	TCoolBandMaximize FBandMaximize;
	Vcl::Graphics::TBitmap* FBitmap;
	Vcl::Graphics::TFont* FCaptionFont;
	int FCaptionFontHeight;
	Vcl::Graphics::TBitmap* FDDB;
	bool FFixedSize;
	bool FFixedOrder;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	bool FShowText;
	bool FVertical;
	System::Types::TSmallPoint FTrackDrag;
	int FUpdateCount;
	System::Classes::TNotifyEvent FOnChange;
	Vcl::Menus::TPopupMenu* FChevronMenu;
	bool FShowChevron;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall BeginUpdate();
	void __fastcall BitmapChanged(System::TObject* Sender);
	void __fastcall EndUpdate();
	bool __fastcall IsAutoSized();
	bool __fastcall IsBackgroundDirty();
	Vcl::Controls::TAlign __fastcall GetAlign();
	HFONT __fastcall GetCaptionFont();
	int __fastcall GetCaptionFontHeight();
	int __fastcall GetCaptionSize(TCoolBand* Band);
	int __fastcall GetRowHeight(int Index);
	void __fastcall RefreshControl(TCoolBand* Band);
	HIDESBASE void __fastcall SetAlign(Vcl::Controls::TAlign Value);
	void __fastcall SetBands(TCoolBands* Value);
	void __fastcall SetBandBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetBandMaximize(TCoolBandMaximize Value);
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetFixedSize(bool Value);
	void __fastcall SetFixedOrder(bool Value);
	void __fastcall SetImageList(NativeUInt Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetShowChevron(bool Value);
	void __fastcall SetShowText(bool Value);
	void __fastcall SetVertical(bool Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	int __fastcall PtInGripRect(const System::Types::TPoint &Pos, TCoolBand* &Band);
	bool __fastcall ReadBands();
	bool __fastcall UpdateItem(int Message, int FromIndex, int ToIndex);
	void __fastcall UpdateBand(int Index);
	void __fastcall UpdateBands();
	MESSAGE void __fastcall WMCaptureChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNotifyFormat(Winapi::Messages::TWMNotifyFormat &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CNBandChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyTRB &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysFontsAllChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWinIniChange(Winapi::Messages::TWMWinIniChange &Message);
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Message);
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC HPALETTE __fastcall GetPalette();
	TCoolBand* __fastcall HitTest(const System::Types::TPoint &Pos);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall PaintWindow(HDC DC);
	void __fastcall CheckBandImagesIndexAndName();
	
public:
	__fastcall virtual TCoolBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCoolBar();
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	virtual void __fastcall ScaleForPPI(int NewPPI);
	
__published:
	__property Align = {read=GetAlign, write=SetAlign, default=1};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property Vcl::Forms::TBorderStyle BandBorderStyle = {read=FBandBorderStyle, write=SetBandBorderStyle, default=1};
	__property TCoolBandMaximize BandMaximize = {read=FBandMaximize, write=SetBandMaximize, default=1};
	__property TCoolBands* Bands = {read=FBands, write=SetBands};
	__property BorderWidth = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EdgeBorders = {default=15};
	__property EdgeInner = {default=1};
	__property EdgeOuter = {default=2};
	__property Enabled = {default=1};
	__property bool FixedSize = {read=FFixedSize, write=SetFixedSize, default=0};
	__property bool FixedOrder = {read=FFixedOrder, write=SetFixedOrder, default=0};
	__property Font;
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property ParentColor = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Vcl::Graphics::TBitmap* Bitmap = {read=FBitmap, write=SetBitmap};
	__property PopupMenu;
	__property bool ShowChevron = {read=FShowChevron, write=SetShowChevron, default=0};
	__property ShowHint;
	__property bool ShowText = {read=FShowText, write=SetShowText, default=1};
	__property Touch;
	__property bool Vertical = {read=FVertical, write=SetVertical, default=0};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
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
	/* TWinControl.CreateParented */ inline __fastcall TCoolBar(HWND ParentWindow) : Vcl::Toolwin::TToolWindow(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECommonCalendarError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECommonCalendarError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECommonCalendarError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECommonCalendarError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECommonCalendarError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECommonCalendarError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECommonCalendarError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECommonCalendarError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECommonCalendarError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECommonCalendarError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECommonCalendarError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECommonCalendarError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECommonCalendarError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECommonCalendarError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::Sysutils::ExceptClass ECommonCalExceptClass;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMonthCalColors : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCommonCalendar* Owner;
	System::Uitypes::TColor FBackColor;
	System::Uitypes::TColor FTextColor;
	System::Uitypes::TColor FTitleBackColor;
	System::Uitypes::TColor FTitleTextColor;
	System::Uitypes::TColor FMonthBackColor;
	System::Uitypes::TColor FTrailingTextColor;
	void __fastcall SetColor(int Index, System::Uitypes::TColor Value);
	void __fastcall SetAllColors();
	
public:
	__fastcall TMonthCalColors(TCommonCalendar* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Uitypes::TColor BackColor = {read=FBackColor, write=SetColor, index=0, default=-16777211};
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=SetColor, index=1, default=-16777208};
	__property System::Uitypes::TColor TitleBackColor = {read=FTitleBackColor, write=SetColor, index=2, default=-16777214};
	__property System::Uitypes::TColor TitleTextColor = {read=FTitleTextColor, write=SetColor, index=3, default=16777215};
	__property System::Uitypes::TColor MonthBackColor = {read=FMonthBackColor, write=SetColor, index=4, default=16777215};
	__property System::Uitypes::TColor TrailingTextColor = {read=FTrailingTextColor, write=SetColor, index=5, default=-16777197};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TMonthCalColors() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TOnGetMonthInfoEvent)(System::TObject* Sender, unsigned Month, unsigned &MonthBoldInfo);

typedef void __fastcall (__closure *TOnGetMonthBoldInfoEvent)(System::TObject* Sender, unsigned Month, unsigned Year, unsigned &MonthBoldInfo);

class PASCALIMPLEMENTATION TCommonCalendar : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TMonthCalColors* FCalColors;
	System::Sysutils::ExceptClass FCalExceptionClass;
	System::TDateTime FDateTime;
	System::TDate FEndDate;
	System::Uitypes::TCalDayOfWeek FFirstDayOfWeek;
	System::TDate FMaxDate;
	int FMaxSelectRange;
	System::TDate FMinDate;
	int FMonthDelta;
	bool FMultiSelect;
	bool FShowToday;
	bool FShowTodayCircle;
	bool FWeekNumbers;
	TOnGetMonthInfoEvent FOnGetMonthInfo;
	TOnGetMonthBoldInfoEvent FOnGetMonthBoldInfo;
	bool __fastcall DoStoreEndDate();
	bool __fastcall DoStoreMaxDate();
	bool __fastcall DoStoreMinDate();
	System::TDate __fastcall GetDate();
	void __fastcall SetCalColors(TMonthCalColors* Value);
	void __fastcall SetDate(System::TDate Value);
	void __fastcall SetDateTime(System::TDateTime Value);
	void __fastcall SetEndDate(System::TDate Value);
	void __fastcall SetFirstDayOfWeek(System::Uitypes::TCalDayOfWeek Value);
	void __fastcall SetMaxDate(System::TDate Value);
	void __fastcall SetMaxSelectRange(int Value);
	void __fastcall SetMinDate(System::TDate Value);
	void __fastcall SetMonthDelta(int Value);
	void __fastcall SetMultiSelect(bool Value);
	void __fastcall SetRange(System::TDate MinVal, System::TDate MaxVal);
	void __fastcall SetSelectedRange(System::TDate Date, System::TDate EndDate);
	void __fastcall SetShowToday(bool Value);
	void __fastcall SetShowTodayCircle(bool Value);
	void __fastcall SetWeekNumbers(bool Value);
	
protected:
	virtual void __fastcall CheckEmptyDate();
	virtual void __fastcall CheckValidDate(System::TDate Value);
	virtual void __fastcall CreateWnd();
	virtual HWND __fastcall GetCalendarHandle() = 0 ;
	virtual unsigned __fastcall GetCalStyles();
	virtual bool __fastcall MsgSetCalColors(int ColorIndex, System::Uitypes::TColor ColorValue) = 0 ;
	virtual bool __fastcall MsgSetDateTime(const _SYSTEMTIME &Value) = 0 ;
	virtual bool __fastcall MsgSetRange(int Flags, const Winapi::Commctrl::TSystemTimeRangeArray &SysTime) = 0 /* overload */;
	virtual bool __fastcall MsgSetRange _DEPRECATED_ATTRIBUTE0 (int Flags, Winapi::Windows::PSystemTime SysTime, int Unused = 0x0) = 0 /* overload */;
	__property System::Sysutils::ExceptClass CalExceptionClass = {read=FCalExceptionClass, write=FCalExceptionClass};
	__property TMonthCalColors* CalColors = {read=FCalColors, write=SetCalColors};
#ifndef _WIN64
	__property HWND CalendarHandle = {read=GetCalendarHandle, nodefault};
#else /* _WIN64 */
	__property HWND CalendarHandle = {read=GetCalendarHandle};
#endif /* _WIN64 */
	__property System::TDate Date = {read=GetDate, write=SetDate};
	__property System::TDateTime DateTime = {read=FDateTime, write=SetDateTime};
	__property System::TDate EndDate = {read=FEndDate, write=SetEndDate, stored=DoStoreEndDate};
	__property System::Uitypes::TCalDayOfWeek FirstDayOfWeek = {read=FFirstDayOfWeek, write=SetFirstDayOfWeek, default=7};
	__property System::TDate MaxDate = {read=FMaxDate, write=SetMaxDate, stored=DoStoreMaxDate};
	__property int MaxSelectRange = {read=FMaxSelectRange, write=SetMaxSelectRange, default=31};
	__property System::TDate MinDate = {read=FMinDate, write=SetMinDate, stored=DoStoreMinDate};
	__property int MonthDelta = {read=FMonthDelta, write=SetMonthDelta, default=1};
	__property bool MultiSelect = {read=FMultiSelect, write=SetMultiSelect, default=0};
	__property bool ShowToday = {read=FShowToday, write=SetShowToday, default=1};
	__property bool ShowTodayCircle = {read=FShowTodayCircle, write=SetShowTodayCircle, default=1};
	__property bool WeekNumbers = {read=FWeekNumbers, write=SetWeekNumbers, default=0};
	__property TOnGetMonthInfoEvent OnGetMonthInfo = {read=FOnGetMonthInfo, write=FOnGetMonthInfo};
	__property TOnGetMonthBoldInfoEvent OnGetMonthBoldInfo = {read=FOnGetMonthBoldInfo, write=FOnGetMonthBoldInfo};
	
public:
	__fastcall virtual TCommonCalendar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonCalendar();
	void __fastcall BoldDays(unsigned *Days, const int Days_High, unsigned &MonthBoldInfo);
public:
	/* TWinControl.CreateParented */ inline __fastcall TCommonCalendar(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMonthCalError : public ECommonCalendarError
{
	typedef ECommonCalendarError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMonthCalError(const System::UnicodeString Msg) : ECommonCalendarError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMonthCalError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : ECommonCalendarError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMonthCalError(NativeUInt Ident)/* overload */ : ECommonCalendarError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMonthCalError(System::PResStringRec ResStringRec)/* overload */ : ECommonCalendarError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMonthCalError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : ECommonCalendarError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMonthCalError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : ECommonCalendarError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMonthCalError(const System::UnicodeString Msg, int AHelpContext) : ECommonCalendarError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMonthCalError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : ECommonCalendarError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMonthCalError(NativeUInt Ident, int AHelpContext)/* overload */ : ECommonCalendarError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMonthCalError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ECommonCalendarError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMonthCalError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ECommonCalendarError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMonthCalError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ECommonCalendarError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMonthCalError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TMonthCalendar : public TCommonCalendar
{
	typedef TCommonCalendar inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyMC &Message);
	
protected:
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall ConstrainedResize(int &MinWidth, int &MinHeight, int &MaxWidth, int &MaxHeight);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual HWND __fastcall GetCalendarHandle();
	virtual bool __fastcall MsgSetCalColors(int ColorIndex, System::Uitypes::TColor ColorValue);
	virtual bool __fastcall MsgSetDateTime(const _SYSTEMTIME &Value);
	virtual bool __fastcall MsgSetRange(int Flags, const Winapi::Commctrl::TSystemTimeRangeArray &SysTime)/* overload */;
	virtual bool __fastcall MsgSetRange _DEPRECATED_ATTRIBUTE0 (int Flags, Winapi::Windows::PSystemTime SysTime, int Unused = 0x0)/* overload */;
	virtual void __fastcall CreateWnd();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
public:
	__fastcall virtual TMonthCalendar(System::Classes::TComponent* AOwner);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BorderWidth = {default=0};
	__property BiDiMode;
	__property CalColors;
	__property Constraints;
	__property MultiSelect = {default=0};
	__property Date = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property EndDate = {default=0};
	__property FirstDayOfWeek = {default=7};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxDate = {default=0};
	__property MaxSelectRange = {default=31};
	__property MinDate = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property ShowToday = {default=1};
	__property ShowTodayCircle = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property WeekNumbers = {default=0};
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
	__property OnGetMonthInfo;
	__property OnGetMonthBoldInfo;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCommonCalendar.Destroy */ inline __fastcall virtual ~TMonthCalendar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TMonthCalendar(HWND ParentWindow) : TCommonCalendar(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EDateTimeError : public ECommonCalendarError
{
	typedef ECommonCalendarError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDateTimeError(const System::UnicodeString Msg) : ECommonCalendarError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDateTimeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : ECommonCalendarError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDateTimeError(NativeUInt Ident)/* overload */ : ECommonCalendarError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDateTimeError(System::PResStringRec ResStringRec)/* overload */ : ECommonCalendarError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDateTimeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : ECommonCalendarError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDateTimeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : ECommonCalendarError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDateTimeError(const System::UnicodeString Msg, int AHelpContext) : ECommonCalendarError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDateTimeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : ECommonCalendarError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDateTimeError(NativeUInt Ident, int AHelpContext)/* overload */ : ECommonCalendarError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDateTimeError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ECommonCalendarError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDateTimeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ECommonCalendarError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDateTimeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ECommonCalendarError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDateTimeError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TDateTimeKind : unsigned char { dtkDate, dtkTime, dtkDateTime };

enum DECLSPEC_DENUM TDTDateMode : unsigned char { dmComboBox, dmUpDown };

enum DECLSPEC_DENUM TDTDateFormat : unsigned char { dfShort, dfLong };

enum DECLSPEC_DENUM TDTCalAlignment : unsigned char { dtaLeft, dtaRight };

typedef void __fastcall (__closure *TDTParseInputEvent)(System::TObject* Sender, const System::UnicodeString UserString, System::TDateTime &DateAndTime, bool &AllowChange);

typedef TMonthCalColors TDateTimeColors;

class PASCALIMPLEMENTATION TDateTimePicker : public TCommonCalendar
{
	typedef TCommonCalendar inherited;
	
private:
	TDTCalAlignment FCalAlignment;
	bool FChanging;
	bool FChecked;
	TDTDateFormat FDateFormat;
	TDTDateMode FDateMode;
	bool FDroppedDown;
	TDateTimeKind FKind;
	_SYSTEMTIME FLastChange;
	bool FParseInput;
	bool FShowCheckbox;
	TDTParseInputEvent FOnUserInput;
	System::Classes::TNotifyEvent FOnCloseUp;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnDropDown;
	System::UnicodeString FFormat;
	bool FIgnoreChange;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall AdjustHeight();
	System::TTime __fastcall GetTime();
	void __fastcall SetCalAlignment(TDTCalAlignment Value);
	void __fastcall SetChecked(bool Value);
	void __fastcall SetDateMode(TDTDateMode Value);
	void __fastcall SetDateFormat(TDTDateFormat Value);
	void __fastcall SetKind(TDateTimeKind Value);
	void __fastcall SetParseInput(bool Value);
	void __fastcall SetShowCheckbox(bool Value);
	void __fastcall SetTime(System::TTime Value);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNotify(Winapi::Commctrl::TWMNotifyDT &Msg);
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyDT &Message);
	void __fastcall SetFormat(const System::UnicodeString Value);
	
protected:
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall CheckEmptyDate();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Change();
	virtual HWND __fastcall GetCalendarHandle();
	virtual bool __fastcall MsgSetCalColors(int ColorIndex, System::Uitypes::TColor ColorValue);
	virtual bool __fastcall MsgSetDateTime(const _SYSTEMTIME &Value);
	virtual bool __fastcall MsgSetRange(int Flags, const Winapi::Commctrl::TSystemTimeRangeArray &SysTime)/* overload */;
	virtual bool __fastcall MsgSetRange _DEPRECATED_ATTRIBUTE0 (int Flags, Winapi::Windows::PSystemTime SysTime, int Unused = 0x0)/* overload */;
	
public:
	__fastcall virtual TDateTimePicker(System::Classes::TComponent* AOwner);
	__property DateTime = {default=0};
	__property bool DroppedDown = {read=FDroppedDown, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property TDTCalAlignment CalAlignment = {read=FCalAlignment, write=SetCalAlignment, default=0};
	__property CalColors;
	__property Constraints;
	__property Date = {default=0};
	__property System::UnicodeString Format = {read=FFormat, write=SetFormat};
	__property System::TTime Time = {read=GetTime, write=SetTime};
	__property bool ShowCheckbox = {read=FShowCheckbox, write=SetShowCheckbox, default=0};
	__property bool Checked = {read=FChecked, write=SetChecked, default=1};
	__property Color = {stored=true, default=-16777211};
	__property TDTDateFormat DateFormat = {read=FDateFormat, write=SetDateFormat, default=0};
	__property TDTDateMode DateMode = {read=FDateMode, write=SetDateMode, default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property TDateTimeKind Kind = {read=FKind, write=SetKind, default=0};
	__property MaxDate = {default=0};
	__property MinDate = {default=0};
	__property bool ParseInput = {read=FParseInput, write=SetParseInput, default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
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
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnContextPopup;
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
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
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
	__property TDTParseInputEvent OnUserInput = {read=FOnUserInput, write=FOnUserInput};
public:
	/* TCommonCalendar.Destroy */ inline __fastcall virtual ~TDateTimePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDateTimePicker(HWND ParentWindow) : TCommonCalendar(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TPageScrollerOrientation : unsigned char { soHorizontal, soVertical };

enum DECLSPEC_DENUM TPageScrollerButton : unsigned char { sbFirst, sbLast };

enum DECLSPEC_DENUM TPageScrollerButtonState : unsigned char { bsNormal, bsInvisible, bsGrayed, bsDepressed, bsHot };

typedef void __fastcall (__closure *TPageScrollEvent)(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y, TPageScrollerOrientation Orientation, int &Delta);

class PASCALIMPLEMENTATION TPageScroller : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	bool FAutoScroll;
	int FButtonSize;
	Vcl::Controls::TWinControl* FControl;
	bool FDragScroll;
	int FMargin;
	TPageScrollerOrientation FOrientation;
	int FPosition;
	int FPreferredSize;
	TPageScrollEvent FOnScroll;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	MESSAGE void __fastcall CNNotify(Winapi::Commctrl::TWMNotifyPS &Message);
	void __fastcall DoSetControl(Vcl::Controls::TWinControl* Value);
	void __fastcall SetAutoScroll(bool Value);
	void __fastcall SetButtonSize(int Value);
	void __fastcall SetControl(Vcl::Controls::TWinControl* Value);
	void __fastcall SetDragScroll(bool Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetOrientation(TPageScrollerOrientation Value);
	void __fastcall SetPosition(int Value);
	void __fastcall UpdatePreferredSize();
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Message);
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall Scroll(System::Classes::TShiftState Shift, int X, int Y, TPageScrollerOrientation Orientation, int &Delta);
	
public:
	__fastcall virtual TPageScroller(System::Classes::TComponent* AOwner);
	TPageScrollerButtonState __fastcall GetButtonState(TPageScrollerButton Button);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property bool AutoScroll = {read=FAutoScroll, write=SetAutoScroll, default=0};
	__property BorderWidth = {default=0};
	__property int ButtonSize = {read=FButtonSize, write=SetButtonSize, default=12};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Vcl::Controls::TWinControl* Control = {read=FControl, write=SetControl};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property bool DragScroll = {read=FDragScroll, write=SetDragScroll, default=1};
	__property Enabled = {default=1};
	__property Font;
	__property int Margin = {read=FMargin, write=SetMargin, default=0};
	__property TPageScrollerOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property int Position = {read=FPosition, write=SetPosition, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
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
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseWheel;
	__property OnResize;
	__property TPageScrollEvent OnScroll = {read=FOnScroll, write=FOnScroll};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TPageScroller(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TPageScroller() { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComboExItem : public Vcl::Listactns::TListControlItem
{
	typedef Vcl::Listactns::TListControlItem inherited;
	
private:
	System::Uitypes::TImageIndex FSelectedImageIndex;
	System::Uitypes::TImageIndex FOverlayImageIndex;
	int FIndent;
	
protected:
	virtual void __fastcall SetOverlayImageIndex(const System::Uitypes::TImageIndex Value);
	virtual void __fastcall SetSelectedImageIndex(const System::Uitypes::TImageIndex Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetData(const void * Value);
	virtual void __fastcall SetDisplayName(const System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	virtual void __fastcall SetIndex(int Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int Indent = {read=FIndent, write=FIndent, default=-1};
	__property System::Uitypes::TImageIndex OverlayImageIndex = {read=FOverlayImageIndex, write=SetOverlayImageIndex, default=-1};
	__property System::Uitypes::TImageIndex SelectedImageIndex = {read=FSelectedImageIndex, write=SetSelectedImageIndex, default=-1};
public:
	/* TListControlItem.Create */ inline __fastcall virtual TComboExItem(System::Classes::TCollection* Collection) : Vcl::Listactns::TListControlItem(Collection) { }
	
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TComboExItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TComboExItems : public Vcl::Listactns::TListControlItems
{
	typedef Vcl::Listactns::TListControlItems inherited;
	
private:
	TComboExItem* __fastcall GetComboItem(const int Index);
	
protected:
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	HIDESBASE virtual void __fastcall SetItem(const int Index);
	
public:
	HIDESBASE TComboExItem* __fastcall Add();
	TComboExItem* __fastcall AddItem(const System::UnicodeString Caption, const int ImageIndex, const int SelectedImageIndex, const int OverlayImageIndex, const int Indent, void * Data);
	HIDESBASE TComboExItem* __fastcall Insert(int Index);
	__property TComboExItem* ComboItems[const int Index] = {read=GetComboItem};
public:
	/* TListControlItems.Create */ inline __fastcall virtual TComboExItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : Vcl::Listactns::TListControlItems(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TComboExItems() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TComboExItemsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TComboExItemsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TComboExItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TComboExItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComboBoxExStrings : public Vcl::Stdctrls::TCustomComboBoxStrings
{
	typedef Vcl::Stdctrls::TCustomComboBoxStrings inherited;
	
private:
	TComboExItems* FItems;
	Vcl::Listactns::TListItemsSortType __fastcall GetSortType();
	void __fastcall SetItems(TComboExItems* const Value);
	void __fastcall SetSortType(const Vcl::Listactns::TListItemsSortType Value);
	
protected:
	virtual TComboExItemsClass __fastcall GetItemsClass();
	virtual TComboExItemClass __fastcall GetItemClass();
	virtual void __fastcall PutObject(int Index, System::TObject* AObject);
	virtual void __fastcall SetUpdateState(bool Updating);
	
public:
	__fastcall TComboBoxExStrings(TCustomComboBoxEx* Owner);
	__fastcall virtual ~TComboBoxExStrings();
	virtual int __fastcall Add(const System::UnicodeString S);
	TComboExItem* __fastcall AddItem(const System::UnicodeString Caption, const int ImageIndex, const int SelectedImageIndex, const int OverlayImageIndex, const int Indent, void * Data);
	virtual int __fastcall AddObject(const System::UnicodeString S, System::TObject* AObject);
	virtual void __fastcall Clear();
	virtual void __fastcall Delete(int Index);
	virtual void __fastcall Exchange(int Index1, int Index2);
	virtual System::UnicodeString __fastcall Get(int Index);
	virtual int __fastcall GetCapacity();
	virtual int __fastcall GetCount();
	virtual System::TObject* __fastcall GetObject(int Index);
	virtual int __fastcall IndexOf(const System::UnicodeString S);
	virtual int __fastcall IndexOfName(const System::UnicodeString Name);
	virtual void __fastcall Insert(int Index, const System::UnicodeString S);
	virtual void __fastcall Move(int CurIndex, int NewIndex);
	__property Vcl::Listactns::TListItemsSortType SortType = {read=GetSortType, write=SetSortType, nodefault};
	__property TComboExItems* ItemsEx = {read=FItems, write=SetItems};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TComboBoxExStringsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TComboBoxExStringsClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TComboBoxExStyle : unsigned char { csExDropDown, csExSimple, csExDropDownList };

enum DECLSPEC_DENUM TComboBoxExStyleEx : unsigned char { csExCaseSensitive, csExNoEditImage, csExNoEditImageIndent, csExNoSizeLimit, csExPathWordBreak };

typedef System::Set<TComboBoxExStyleEx, TComboBoxExStyleEx::csExCaseSensitive, TComboBoxExStyleEx::csExPathWordBreak> TComboBoxExStyles;

enum DECLSPEC_DENUM TAutoCompleteOption : unsigned char { acoAutoSuggest, acoAutoAppend, acoSearch, acoFilterPrefixes, acoUseTab, acoUpDownKeyDropsList, acoRtlReading };

typedef System::Set<TAutoCompleteOption, TAutoCompleteOption::acoAutoSuggest, TAutoCompleteOption::acoRtlReading> TAutoCompleteOptions;

typedef void * TComboExInstance;

class PASCALIMPLEMENTATION TCustomComboBoxEx : public Vcl::Stdctrls::TCustomCombo
{
	typedef Vcl::Stdctrls::TCustomCombo inherited;
	
private:
	_di_IAutoComplete FAutoCompleteIntf;
	TAutoCompleteOptions FAutoCompleteOptions;
	HWND FComboBoxExHandle;
	void *FComboBoxExDefProc;
	void *FComboBoxExInstance;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	System::Classes::TCollection* FMemStream;
	bool FReading;
	int FSaveIndex;
	TComboBoxExStyle FStyle;
	TComboBoxExStyles FStyleEx;
	TComboExItems* FItemsEx;
	System::Classes::TNotifyEvent FOnBeginEdit;
	System::Classes::TNotifyEvent FOnEndEdit;
	System::UnicodeString FEditText;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	System::UnicodeString __fastcall GetSelText();
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetSelText(const System::UnicodeString Value);
	void __fastcall SetStyle(TComboBoxExStyle Value);
	void __fastcall SetItemsEx(TComboExItems* const Value);
	void __fastcall SetStyleEx(const TComboBoxExStyles Value);
	bool __fastcall IsItemsExStored();
	int __fastcall GetDropDownCount();
	void __fastcall UpdateAutoComplete();
	void __fastcall SetAutoCompleteOptions(const TAutoCompleteOptions Value);
	System::UnicodeString __fastcall GetEditText();
	int __fastcall GetEditTextLength();
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	void __fastcall ComboExWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual Vcl::Stdctrls::TCustomComboBoxStringsClass __fastcall GetItemsClass();
	virtual int __fastcall GetItemCount();
	virtual int __fastcall GetItemHt();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetDropDownCount(const int Value);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMHelp(Winapi::Messages::TWMHelp &Message);
	MESSAGE void __fastcall WMGetTextLength(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMGetText(Winapi::Messages::TWMGetText &Message);
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TWMSetText &Message);
	MESSAGE void __fastcall CBGetEditSel(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CBSetEditSel(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomComboBoxEx(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomComboBoxEx();
	DYNAMIC bool __fastcall Focused();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	__property TAutoCompleteOptions AutoCompleteOptions = {read=FAutoCompleteOptions, write=SetAutoCompleteOptions, default=2};
	__property int DropDownCount = {read=GetDropDownCount, write=SetDropDownCount, default=8};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TComboExItems* ItemsEx = {read=FItemsEx, write=SetItemsEx, stored=IsItemsExStored};
	__property System::UnicodeString SelText = {read=GetSelText, write=SetSelText};
	__property TComboBoxExStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property TComboBoxExStyles StyleEx = {read=FStyleEx, write=SetStyleEx, default=0};
	__property System::Classes::TNotifyEvent OnBeginEdit = {read=FOnBeginEdit, write=FOnBeginEdit};
	__property System::Classes::TNotifyEvent OnEndEdit = {read=FOnEndEdit, write=FOnEndEdit};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomComboBoxEx(HWND ParentWindow) : Vcl::Stdctrls::TCustomCombo(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TComboBoxEx : public TCustomComboBoxEx
{
	typedef TCustomComboBoxEx inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property AutoCompleteOptions = {default=2};
	__property ItemsEx;
	__property Style = {default=0};
	__property StyleEx = {default=0};
	__property Action;
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemHeight;
	__property MaxLength = {default=0};
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
	__property Text = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnBeginEdit;
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndEdit;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseMove;
	__property OnSelect;
	__property OnStartDock;
	__property OnStartDrag;
	__property Images;
	__property DropDownCount = {default=8};
public:
	/* TCustomComboBoxEx.Create */ inline __fastcall virtual TComboBoxEx(System::Classes::TComponent* AOwner) : TCustomComboBoxEx(AOwner) { }
	/* TCustomComboBoxEx.Destroy */ inline __fastcall virtual ~TComboBoxEx() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TComboBoxEx(HWND ParentWindow) : TCustomComboBoxEx(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TComboBoxExActionLink : public Vcl::Listactns::TListActionLink
{
	typedef Vcl::Listactns::TListActionLink inherited;
	
protected:
	virtual void __fastcall AddItem(Vcl::Listactns::TListControlItem* AnItem)/* overload */;
	virtual void __fastcall AddItem(System::UnicodeString ACaption, int AImageIndex, void * DataPtr)/* overload */;
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TComboBoxExActionLink(System::TObject* AClient) : Vcl::Listactns::TListActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TComboBoxExActionLink() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTabControlStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	int FHotTabIndex;
	Vcl::Themes::TMouseTrackControlStyleHook::TMousePosition FMousePosition;
	HWND FUpDownHandle;
	void *FUpDownInstance;
	void *FUpDownDefWndProc;
	bool FUpDownLeftPressed;
	bool FUpDownRightPressed;
	bool FUpDownMouseOnLeft;
	bool FUpDownMouseOnRight;
	System::Types::TRect __fastcall GetDisplayRect();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	int __fastcall GetTabCount();
	int __fastcall GetTabIndex();
	TTabPosition __fastcall GetTabPosition();
	System::Types::TRect __fastcall GetTabRect(int Index);
	System::UnicodeString __fastcall GetTabs(int Index);
	bool __fastcall GetScrollOpposite();
	void __fastcall HookUpDownControl();
	void __fastcall UpdateTabs(int OldHotTab, int HotTab);
	void __fastcall UpdateUpDownArea();
	MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TMessage &Message);
	
protected:
	void __fastcall AngleTextOut(Vcl::Graphics::TCanvas* Canvas, int Angle, int X, int Y, const System::UnicodeString Text);
	virtual void __fastcall DrawTab(Vcl::Graphics::TCanvas* Canvas, int Index);
	int __fastcall IndexOfTabAt(int X, int Y);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintUpDown(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall UpDownWndProc(Winapi::Messages::TMessage &Msg);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property System::Types::TRect DisplayRect = {read=GetDisplayRect};
	__property int HotTabIndex = {read=FHotTabIndex, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
	__property int TabCount = {read=GetTabCount, nodefault};
	__property int TabIndex = {read=GetTabIndex, nodefault};
	__property TTabPosition TabPosition = {read=GetTabPosition, nodefault};
	__property System::Types::TRect TabRect[int Index] = {read=GetTabRect};
	__property System::UnicodeString Tabs[int Index] = {read=GetTabs};
	__property bool ScrollOpposite = {read=GetScrollOpposite, nodefault};
	
public:
	__fastcall virtual TTabControlStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TTabControlStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDateTimePickerStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	bool FDroppedDown;
	bool FMouseOnButton;
	HWND FUpDownHandle;
	void *FUpDownInstance;
	void *FUpDownDefWndProc;
	bool FUpDownUpPressed;
	bool FUpDownDownPressed;
	bool FUpDownMouseOnUp;
	bool FUpDownMouseOnDown;
	bool FInitBorderInfo;
	System::Types::TRect __fastcall GetButtonRect();
	TDateTimeKind __fastcall GetKind();
	TDTDateMode __fastcall GetDateMode();
	bool __fastcall GetChecked();
	bool __fastcall GetShowCheckBox();
	MESSAGE void __fastcall CNNotify(Winapi::Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TWMParentNotify &Message);
	
protected:
	virtual bool __fastcall AcceptMessage(Winapi::Messages::TMessage &Message);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall UpDownWndProc(Winapi::Messages::TMessage &Msg);
	virtual void __fastcall PaintUpDown(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property System::Types::TRect ButtonRect = {read=GetButtonRect};
	__property TDateTimeKind Kind = {read=GetKind, nodefault};
	__property TDTDateMode DateMode = {read=GetDateMode, nodefault};
	__property bool Checked = {read=GetChecked, nodefault};
	__property bool ShowCheckBox = {read=GetShowCheckBox, nodefault};
	
public:
	__fastcall virtual TDateTimePickerStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TDateTimePickerStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTreeViewStyleHook : public Vcl::Forms::TScrollingStyleHook
{
	typedef Vcl::Forms::TScrollingStyleHook inherited;
	
private:
	MESSAGE void __fastcall TVMSetBkColor(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall TVMSetTextColor(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Msg);
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TTreeViewStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TScrollingStyleHook.Destroy */ inline __fastcall virtual ~TTreeViewStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListViewStyleHook : public Vcl::Forms::TScrollingStyleHook
{
	typedef Vcl::Forms::TScrollingStyleHook inherited;
	
private:
	HWND FHeaderHandle;
	void *FHeaderInstance;
	void *FDefHeaderProc;
	int FHotSection;
	int FOldHotSection;
	int FPressedSection;
	bool FHeaderLBtnDown;
	MESSAGE void __fastcall LVMSetBkColor(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall LVMSetTextBkColor(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall LVMSetTextColor(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	
protected:
	virtual void __fastcall DrawHeaderSection(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Index, const System::UnicodeString Text, bool IsHot, bool IsPressed, bool IsBackground);
	virtual void __fastcall HeaderWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall PaintHeader(HDC DC);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TListViewStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TListViewStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TProgressBarStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
private:
	Vcl::Extctrls::TTimer* FMarqueeTimer;
	int FMarqueeStep;
	void __fastcall MarqueeAction(System::TObject* Sender);
	System::Types::TRect __fastcall GetBarRect();
	int __fastcall GetBorderWidth();
	int __fastcall GetMax();
	int __fastcall GetMin();
	TProgressBarOrientation __fastcall GetOrientation();
	float __fastcall GetPercent();
	int __fastcall GetPosition();
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	
protected:
	virtual void __fastcall PaintBar(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintFrame(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property System::Types::TRect BarRect = {read=GetBarRect};
	__property int BorderWidth = {read=GetBorderWidth, nodefault};
	__property int Max = {read=GetMax, nodefault};
	__property int Min = {read=GetMin, nodefault};
	__property TProgressBarOrientation Orientation = {read=GetOrientation, nodefault};
	__property int Position = {read=GetPosition, nodefault};
	
public:
	__fastcall virtual TProgressBarStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TProgressBarStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTrackBarStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
private:
	bool FMouseOnThumb;
	bool FThumbPressed;
	MESSAGE void __fastcall CNHScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall CNVScroll(Winapi::Messages::TWMScroll &Message);
	MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual bool __fastcall AcceptMessage(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TTrackBarStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TTrackBarStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStatusBarStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
public:
	__fastcall virtual TStatusBarStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TStatusBarStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TToolBarStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	int FArrowDownButtonIndex;
	int FHotButtonIndex;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FRuntimeThemesEnabled;
	bool FStopErase;
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNotify(Winapi::Messages::TWMNotify &Message);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	__property int ArrowDownButtonIndex = {read=FArrowDownButtonIndex, nodefault};
	__property int HotButtonIndex = {read=FHotButtonIndex, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages};
	TBBUTTONINFOW __fastcall GetItemInfo(int Index, System::WideChar * Text, int TextLen);
	System::Types::TRect __fastcall GetItemRect(int Index);
	int __fastcall GetButtonCount();
	void __fastcall ApplyImageList();
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TToolBarStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TToolBarStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCoolBarStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
private:
	System::UnicodeString __fastcall GetBandText(int Index);
	System::Types::TRect __fastcall GetBandRect(int Index);
	System::Types::TRect __fastcall GetBandBorder(int Index);
	int __fastcall GetBandCount();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCoolBarStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TCoolBarStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUpDownStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	bool FLeftPressed;
	bool FRightPressed;
	bool FMouseOnLeft;
	bool FMouseOnRight;
	TUDOrientation __fastcall GetOrientation();
	MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TUpDownStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TUpDownStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THeaderStyleHook : public Vcl::Themes::TMouseTrackControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackControlStyleHook inherited;
	
private:
	int FPressedSectionIndex;
	int FHotSectionIndex;
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall DrawHeaderSection(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, int Index, const System::UnicodeString Text, bool IsPressed, bool IsHot, bool IsBackground);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual THeaderStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~THeaderStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPageScrollerStyleHook : public Vcl::Themes::TStyleHook
{
	typedef Vcl::Themes::TStyleHook inherited;
	
private:
	MESSAGE void __fastcall PGMSetBKColor(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TPageScrollerStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TStyleHook.Destroy */ inline __fastcall virtual ~TPageScrollerStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComboBoxExStyleHook : public Vcl::Stdctrls::TComboBoxStyleHook
{
	typedef Vcl::Stdctrls::TComboBoxStyleHook inherited;
	
private:
	bool FDroppedDown;
	HWND FComboBoxHandle;
	void *FComboBoxInstance;
	void *FDefComboBoxProc;
	int FTempItemIndex;
	void __fastcall InitComboBoxWnd();
	void __fastcall PaintComboBoxWnd();
	HIDESBASE MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall ComboBoxWndProc(Winapi::Messages::TMessage &Msg);
	virtual void __fastcall DoHotTrackTimer(System::TObject* Sender);
	virtual void __fastcall DrawComboBox(HDC DC);
	virtual void __fastcall MouseLeave();
	void __fastcall DrawListBoxItem(HDC ADC, const System::Types::TRect &ARect, int AIndex, bool ASelected);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall IsChildHandle(HWND AHandle);
	
public:
	__fastcall virtual TComboBoxExStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TComboBoxExStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRichEditStyleHook : public Vcl::Forms::TScrollingStyleHook
{
	typedef Vcl::Forms::TScrollingStyleHook inherited;
	
private:
	MESSAGE void __fastcall EMSetBkgndColor(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall EMSetCharFormat(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
public:
	/* TScrollingStyleHook.Create */ inline __fastcall virtual TRichEditStyleHook(Vcl::Controls::TWinControl* AControl) : Vcl::Forms::TScrollingStyleHook(AControl) { }
	/* TScrollingStyleHook.Destroy */ inline __fastcall virtual ~TRichEditStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Uitypes::TCalDayOfWeek dowMonday = (System::Uitypes::TCalDayOfWeek)(0);
static const System::Uitypes::TCalDayOfWeek dowTuesday = (System::Uitypes::TCalDayOfWeek)(1);
static const System::Uitypes::TCalDayOfWeek dowWednesday = (System::Uitypes::TCalDayOfWeek)(2);
static const System::Uitypes::TCalDayOfWeek dowThursday = (System::Uitypes::TCalDayOfWeek)(3);
static const System::Uitypes::TCalDayOfWeek dowFriday = (System::Uitypes::TCalDayOfWeek)(4);
static const System::Uitypes::TCalDayOfWeek dowSaturday = (System::Uitypes::TCalDayOfWeek)(5);
static const System::Uitypes::TCalDayOfWeek dowSunday = (System::Uitypes::TCalDayOfWeek)(6);
static const System::Uitypes::TCalDayOfWeek dowLocaleDefault = (System::Uitypes::TCalDayOfWeek)(7);
static const System::Int8 ColumnHeaderWidth = System::Int8(-2);
static const System::Int8 ColumnTextWidth = System::Int8(-1);
static const System::Word CN_DROPDOWNCLOSED = System::Word(0x1400);
static const System::Word CN_BANDCHANGE = System::Word(0x1400);
static const int ComCtlVersionIE3 = int(0x40046);
static const int ComCtlVersionIE4 = int(0x40047);
static const int ComCtlVersionIE401 = int(0x40048);
static const int ComCtlVersionIE5 = int(0x50050);
static const int ComCtlVersionIE501 = int(0x50051);
static const int ComCtlVersionIE6 = int(0x60000);
static const int ComCtlVersionIE610 = int(0x6000a);
extern DELPHI_PACKAGE bool __fastcall InitCommonControl(int CC);
extern DELPHI_PACKAGE void __fastcall CheckCommonControl(int CC);
extern DELPHI_PACKAGE int __fastcall GetComCtlVersion(void);
extern DELPHI_PACKAGE void __fastcall CheckToolMenuDropdown _DEPRECATED_ATTRIBUTE0 (TToolButton* ToolButton);
extern DELPHI_PACKAGE void __fastcall TCustomRichEdit_ShowSpellCheckMenu(TCustomRichEdit* Self);
}	/* namespace Comctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_COMCTRLS)
using namespace Vcl::Comctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ComctrlsHPP
