// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Menus.pas' rev: 35.00 (Windows)

#ifndef Vcl_MenusHPP
#define Vcl_MenusHPP

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
#include <System.Contnrs.hpp>
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Types.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Menus
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EMenuError;
class DELPHICLASS TMenuActionLink;
class DELPHICLASS TMenuItemEnumerator;
class DELPHICLASS TMenuItem;
class DELPHICLASS TMenu;
class DELPHICLASS TMainMenu;
class DELPHICLASS TPopupMenu;
class DELPHICLASS TPopupList;
class DELPHICLASS TMenuItemStack;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMenuError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMenuError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMenuError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMenuError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMenuError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMenuError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMenuError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMenuError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMenuError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMenuError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMenuError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMenuError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMenuError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMenuError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TMenuBreak : unsigned char { mbNone, mbBreak, mbBarBreak };

typedef void __fastcall (__closure *TMenuChangeEvent)(System::TObject* Sender, TMenuItem* Source, bool Rebuild);

typedef void __fastcall (__closure *TMenuDrawItemEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool Selected);

typedef void __fastcall (__closure *TAdvancedMenuDrawItemEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);

typedef void __fastcall (__closure *TMenuMeasureItemEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);

enum DECLSPEC_DENUM TMenuItemAutoFlag : unsigned char { maAutomatic, maManual, maParent };

typedef TMenuItemAutoFlag TMenuAutoFlag;

class PASCALIMPLEMENTATION TMenuActionLink : public Vcl::Actnlist::TActionLink
{
	typedef Vcl::Actnlist::TActionLink inherited;
	
protected:
	TMenuItem* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsAutoCheckLinked();
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsHelpContextLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsGroupIndexLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsImageNameLinked();
	virtual bool __fastcall IsShortCutLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual void __fastcall SetAutoCheck(bool Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetShortCut(System::Classes::TShortCut Value);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetOnExecute(System::Classes::TNotifyEvent Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TMenuActionLink(System::TObject* AClient) : Vcl::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TMenuActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TMenuActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TMenuActionLinkClass);
#endif /* _WIN64 */

typedef HMENU TMenuHandle;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMenuItemEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TMenuItem* FMenuItem;
	
public:
	__fastcall TMenuItemEnumerator(TMenuItem* AMenuItem);
	TMenuItem* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TMenuItem* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMenuItemEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TMenuItem : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	TMenuItem* operator[](int Index) { return this->Items[Index]; }
	
public:
	static const System::Int8 OriginalPPI = System::Int8(0x60);
	
	static const System::Int8 ShortCutGap = System::Int8(0xc);
	
	
private:
	System::UnicodeString FCaption;
	bool FChecked;
	bool FEnabled;
	bool FDefault;
	TMenuItemAutoFlag FAutoHotkeys;
	TMenuItemAutoFlag FAutoLineReduction;
	bool FRadioItem;
	bool FVisible;
	System::Byte FGroupIndex;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	TMenuActionLink* FActionLink;
	TMenuBreak FBreak;
	Vcl::Graphics::TBitmap* FBitmap;
	System::Word FCommand;
	System::Classes::THelpContext FHelpContext;
	System::UnicodeString FHint;
	System::Classes::TList* FItems;
	System::Classes::TShortCut FShortCut;
	TMenuItem* FParent;
	TMenuItem* FMerged;
	TMenuItem* FMergedWith;
	TMenu* FMenu;
	bool FStreamedRebuild;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FSubMenuImages;
	TMenuChangeEvent FOnChange;
	System::Classes::TNotifyEvent FOnClick;
	TMenuDrawItemEvent FOnDrawItem;
	TAdvancedMenuDrawItemEvent FOnAdvancedDrawItem;
	TMenuMeasureItemEvent FOnMeasureItem;
	bool FAutoCheck;
	HMENU FHandle;
	void __fastcall AppendTo(HMENU Menu, bool ARightToLeft);
	void __fastcall DoActionChange(System::TObject* Sender);
	void __fastcall ReadShortCutText(System::Classes::TReader* Reader);
	void __fastcall MergeWith(TMenuItem* Menu);
	void __fastcall RebuildHandle();
	void __fastcall PopulateMenu();
	void __fastcall SubItemChanged(System::TObject* Sender, TMenuItem* Source, bool Rebuild);
	void __fastcall TurnSiblingsOff();
	void __fastcall VerifyGroupIndex(int Position, System::Byte Value);
	System::Classes::TBasicAction* __fastcall GetAction();
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall SetAction(System::Classes::TBasicAction* Value);
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetSubMenuImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall InitiateActions();
	bool __fastcall IsCaptionStored();
	bool __fastcall IsCheckedStored();
	bool __fastcall IsEnabledStored();
	bool __fastcall IsHelpContextStored();
	bool __fastcall IsHintStored();
	bool __fastcall IsImageIndexStored();
	bool __fastcall IsImageNameStored();
	bool __fastcall IsOnClickStored();
	bool __fastcall IsShortCutStored();
	bool __fastcall IsVisibleStored();
	bool __fastcall InternalRethinkHotkeys(bool ForceRethink);
	void __fastcall SetAutoHotkeys(const TMenuItemAutoFlag Value);
	bool __fastcall InternalRethinkLines(bool ForceRethink);
	void __fastcall SetAutoLineReduction(const TMenuItemAutoFlag Value);
	int __fastcall GetDevicePPI();
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall AdvancedDrawItem(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State, bool TopLevel);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall DoDrawText(Vcl::Graphics::TCanvas* ACanvas, const System::UnicodeString ACaption, System::Types::TRect &Rect, bool Selected, int Flags);
	virtual void __fastcall DrawItem(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool Selected);
	DYNAMIC TMenuActionLinkClass __fastcall GetActionLinkClass();
	HMENU __fastcall GetHandle();
	int __fastcall GetCount();
	TMenuItem* __fastcall GetItem(int Index);
	int __fastcall GetMenuIndex();
	bool __fastcall GetAutoHotkeys();
	bool __fastcall GetAutoLineReduction();
	int __fastcall InsertNewLine(bool ABefore, TMenuItem* AItem);
	virtual void __fastcall MeasureItem(Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);
	virtual void __fastcall MenuChanged(bool Rebuild);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall SetBreak(TMenuBreak Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetChecked(bool Value);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	void __fastcall SetDefault(bool Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetGroupIndex(System::Byte Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetMenuIndex(int Value);
	void __fastcall SetRadioItem(bool Value);
	void __fastcall SetShortCut(System::Classes::TShortCut Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall UpdateItems();
	void __fastcall CheckImageIndex();
	__property TMenuActionLink* ActionLink = {read=FActionLink, write=FActionLink};
	__property TMenuItem* Merged = {read=FMerged};
	
public:
	__fastcall virtual TMenuItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMenuItem();
	virtual void __fastcall InitiateAction();
	HIDESBASE void __fastcall Insert(int Index, TMenuItem* Item);
	void __fastcall Delete(int Index);
	void __fastcall Clear();
	virtual void __fastcall Click();
	TMenuItem* __fastcall Find(System::UnicodeString ACaption);
	int __fastcall IndexOf(TMenuItem* Item);
	bool __fastcall IsLine();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	HIDESBASE TMenuItemEnumerator* __fastcall GetEnumerator();
	Vcl::Imglist::TCustomImageList* __fastcall GetImageList();
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	TMenu* __fastcall GetParentMenu();
	DYNAMIC bool __fastcall HasParent();
	int __fastcall NewTopLine();
	int __fastcall NewBottomLine();
	int __fastcall InsertNewLineBefore(TMenuItem* AItem);
	int __fastcall InsertNewLineAfter(TMenuItem* AItem);
	void __fastcall Add(TMenuItem* Item)/* overload */;
	void __fastcall Add(TMenuItem* const *AItems, const int AItems_High)/* overload */;
	HIDESBASE void __fastcall Remove(TMenuItem* Item);
	bool __fastcall RethinkHotkeys();
	bool __fastcall RethinkLines();
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* Value);
	__property System::Word Command = {read=FCommand, nodefault};
#ifndef _WIN64
	__property HMENU Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HMENU Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property int Count = {read=GetCount, nodefault};
	__property TMenuItem* Items[int Index] = {read=GetItem/*, default*/};
	__property int MenuIndex = {read=GetMenuIndex, write=SetMenuIndex, nodefault};
	__property TMenuItem* Parent = {read=FParent};
	
__published:
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property bool AutoCheck = {read=FAutoCheck, write=FAutoCheck, default=0};
	__property TMenuItemAutoFlag AutoHotkeys = {read=FAutoHotkeys, write=SetAutoHotkeys, default=2};
	__property TMenuItemAutoFlag AutoLineReduction = {read=FAutoLineReduction, write=SetAutoLineReduction, default=2};
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property TMenuBreak Break = {read=FBreak, write=SetBreak, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption, stored=IsCaptionStored};
	__property bool Checked = {read=FChecked, write=SetChecked, stored=IsCheckedStored, default=0};
	__property Vcl::Imglist::TCustomImageList* SubMenuImages = {read=FSubMenuImages, write=SetSubMenuImages};
	__property bool Default = {read=FDefault, write=SetDefault, default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, stored=IsEnabledStored, default=1};
	__property System::Byte GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=FHelpContext, stored=IsHelpContextStored, default=0};
	__property System::UnicodeString Hint = {read=FHint, write=FHint, stored=IsHintStored};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName, stored=IsImageNameStored};
	__property bool RadioItem = {read=FRadioItem, write=SetRadioItem, default=0};
	__property System::Classes::TShortCut ShortCut = {read=FShortCut, write=SetShortCut, stored=IsShortCutStored, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, stored=IsVisibleStored, default=1};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick, stored=IsOnClickStored};
	__property TMenuDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property TAdvancedMenuDrawItemEvent OnAdvancedDrawItem = {read=FOnAdvancedDrawItem, write=FOnAdvancedDrawItem};
	__property TMenuMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
};


enum DECLSPEC_DENUM TFindItemKind : unsigned char { fkCommand, fkHandle, fkShortCut };

class PASCALIMPLEMENTATION TMenu : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TBiDiMode FBiDiMode;
	TMenuItem* FItems;
	HWND FWindowHandle;
	bool FOwnerDraw;
	bool FParentBiDiMode;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	TMenuChangeEvent FOnChange;
	System::UnicodeString FMenuImage;
	int FPreviousDPI;
	void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	void __fastcall SetOwnerDraw(bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetParentBiDiMode(bool Value);
	void __fastcall SetWindowHandle(HWND Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	bool __fastcall IsBiDiModeStored();
	bool __fastcall UpdateImage();
	TMenuAutoFlag __fastcall GetAutoHotkeys();
	void __fastcall SetAutoHotkeys(const TMenuAutoFlag Value);
	TMenuAutoFlag __fastcall GetAutoLineReduction();
	void __fastcall SetAutoLineReduction(const TMenuAutoFlag Value);
	
protected:
	void __fastcall AdjustBiDiBehavior();
	virtual void __fastcall DoChange(TMenuItem* Source, bool Rebuild);
	void __fastcall DoBiDiModeChanged();
	virtual HMENU __fastcall GetHandle();
	bool __fastcall IsOwnerDraw();
	virtual void __fastcall Loaded();
	virtual void __fastcall MenuChanged(System::TObject* Sender, TMenuItem* Source, bool Rebuild);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Child, int Order);
	void __fastcall UpdateItems();
	int __fastcall DoGetMenuString(HMENU Menu, unsigned ItemID, System::WideChar * Str, int MaxCount, unsigned Flag);
	__property TMenuChangeEvent OnChange = {read=FOnChange, write=FOnChange};
	
public:
	__fastcall virtual TMenu(System::Classes::TComponent* AOwner);
	DYNAMIC TMenuItem* __fastcall CreateMenuItem();
	__fastcall virtual ~TMenu();
	bool __fastcall DispatchCommand(System::Word ACommand);
	bool __fastcall DispatchPopup(HMENU AHandle);
	TMenuItem* __fastcall FindItem(NativeUInt Value, TFindItemKind Kind);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	System::Classes::THelpContext __fastcall GetHelpContext(NativeUInt Value, bool ByCommand);
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	bool __fastcall IsRightToLeft();
	DYNAMIC bool __fastcall IsShortCut(Winapi::Messages::TWMKey &Message);
	void __fastcall ParentBiDiModeChanged()/* overload */;
	void __fastcall ParentBiDiModeChanged(System::TObject* AControl)/* overload */;
	void __fastcall ProcessMenuChar(Winapi::Messages::TWMMenuChar &Message);
	__property TMenuAutoFlag AutoHotkeys = {read=GetAutoHotkeys, write=SetAutoHotkeys, default=0};
	__property TMenuAutoFlag AutoLineReduction = {read=GetAutoLineReduction, write=SetAutoLineReduction, default=0};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, write=SetBiDiMode, stored=IsBiDiModeStored, nodefault};
#ifndef _WIN64
	__property HMENU Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HMENU Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property bool OwnerDraw = {read=FOwnerDraw, write=SetOwnerDraw, default=0};
	__property bool ParentBiDiMode = {read=FParentBiDiMode, write=SetParentBiDiMode, default=1};
#ifndef _WIN64
	__property HWND WindowHandle = {read=FWindowHandle, write=SetWindowHandle, nodefault};
#else /* _WIN64 */
	__property HWND WindowHandle = {read=FWindowHandle, write=SetWindowHandle};
#endif /* _WIN64 */
	
__published:
	__property TMenuItem* Items = {read=FItems};
};


class PASCALIMPLEMENTATION TMainMenu : public TMenu
{
	typedef TMenu inherited;
	
private:
	HMENU FOle2Menu;
	bool FAutoMerge;
	void __fastcall ItemChanged();
	void __fastcall SetAutoMerge(bool Value);
	
protected:
	virtual void __fastcall MenuChanged(System::TObject* Sender, TMenuItem* Source, bool Rebuild);
	virtual HMENU __fastcall GetHandle();
	
public:
	void __fastcall Merge(TMainMenu* Menu);
	void __fastcall Unmerge(TMainMenu* Menu);
	void __fastcall PopulateOle2Menu(HMENU SharedMenu, const int *Groups, const int Groups_High, int *Widths, const int Widths_High);
	void __fastcall GetOle2AcceleratorTable(HACCEL &AccelTable, int &AccelCount, const int *Groups, const int Groups_High);
	void __fastcall SetOle2MenuHandle(HMENU Handle);
	
__published:
	__property AutoHotkeys = {default=0};
	__property AutoLineReduction = {default=0};
	__property bool AutoMerge = {read=FAutoMerge, write=SetAutoMerge, default=0};
	__property BiDiMode;
	__property Images;
	__property OwnerDraw = {default=0};
	__property ParentBiDiMode = {default=1};
	__property OnChange;
public:
	/* TMenu.Create */ inline __fastcall virtual TMainMenu(System::Classes::TComponent* AOwner) : TMenu(AOwner) { }
	/* TMenu.Destroy */ inline __fastcall virtual ~TMainMenu() { }
	
};


enum DECLSPEC_DENUM TPopupAlignment : unsigned char { paLeft, paRight, paCenter };

enum DECLSPEC_DENUM TTrackButton : unsigned char { tbRightButton, tbLeftButton };

enum DECLSPEC_DENUM TMenuAnimations : unsigned char { maLeftToRight, maRightToLeft, maTopToBottom, maBottomToTop, maNone };

typedef System::Set<TMenuAnimations, TMenuAnimations::maLeftToRight, TMenuAnimations::maNone> TMenuAnimation;

class PASCALIMPLEMENTATION TPopupMenu : public TMenu
{
	typedef TMenu inherited;
	
private:
	System::Types::TPoint FPopupPoint;
	TPopupAlignment FAlignment;
	bool FAutoPopup;
	System::Classes::TComponent* FPopupComponent;
	TTrackButton FTrackButton;
	TMenuAnimation FMenuAnimation;
	System::Classes::TNotifyEvent FOnPopup;
	System::Classes::TNotifyEvent FOnClose;
	HIDESBASE System::Classes::THelpContext __fastcall GetHelpContext();
	void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	void __fastcall SetBiDiModeFromPopupControl();
	
protected:
	bool __fastcall UseRightToLeftAlignment();
	virtual void __fastcall DoClose();
	virtual void __fastcall DoPopup(System::TObject* Sender);
	void __fastcall SetPopupPoint(const System::Types::TPoint &APopupPoint);
	
public:
	__fastcall virtual TPopupMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPopupMenu();
	void __fastcall CloseMenu();
	virtual void __fastcall Popup(int X, int Y);
	__property System::Classes::TComponent* PopupComponent = {read=FPopupComponent, write=FPopupComponent};
	__property System::Types::TPoint PopupPoint = {read=FPopupPoint};
	
__published:
	__property TPopupAlignment Alignment = {read=FAlignment, write=FAlignment, default=0};
	__property AutoHotkeys = {default=0};
	__property AutoLineReduction = {default=0};
	__property bool AutoPopup = {read=FAutoPopup, write=FAutoPopup, default=1};
	__property BiDiMode;
	__property System::Classes::THelpContext HelpContext = {read=GetHelpContext, write=SetHelpContext, default=0};
	__property Images;
	__property TMenuAnimation MenuAnimation = {read=FMenuAnimation, write=FMenuAnimation, default=0};
	__property OwnerDraw = {default=0};
	__property ParentBiDiMode = {default=1};
	__property TTrackButton TrackButton = {read=FTrackButton, write=FTrackButton, default=0};
	__property OnChange;
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPopupList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
protected:
	HWND FWindow;
	void __fastcall MainWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
#ifndef _WIN64
	__property HWND Window = {read=FWindow, nodefault};
#else /* _WIN64 */
	__property HWND Window = {read=FWindow};
#endif /* _WIN64 */
	HIDESBASE void __fastcall Add(TPopupMenu* Popup);
	HIDESBASE void __fastcall Remove(TPopupMenu* Popup);
public:
	/* TList.Destroy */ inline __fastcall virtual ~TPopupList() { }
	
public:
	/* TObject.Create */ inline __fastcall TPopupList() : System::Classes::TList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TMenuItem* *PMenuItem;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMenuItemStack : public System::Contnrs::TStack
{
	typedef System::Contnrs::TStack inherited;
	
public:
	void __fastcall ClearItem(TMenuItem* AItem);
public:
	/* TOrderedList.Create */ inline __fastcall TMenuItemStack() : System::Contnrs::TStack() { }
	/* TOrderedList.Destroy */ inline __fastcall virtual ~TMenuItemStack() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TPopupList* PopupList;
extern DELPHI_PACKAGE TMenuItemStack* ShortCutItems;
extern DELPHI_PACKAGE System::UnicodeString ValidMenuHotkeys;
static const System::WideChar cHotkeyPrefix = (System::WideChar)(0x26);
static const System::WideChar cLineCaption = (System::WideChar)(0x2d);
#define cDialogSuffix L"..."
extern DELPHI_PACKAGE System::Classes::TShortCut __fastcall ShortCut(System::Word Key, System::Classes::TShiftState Shift);
extern DELPHI_PACKAGE void __fastcall ShortCutToKey(System::Classes::TShortCut ShortCut, System::Word &Key, System::Classes::TShiftState &Shift);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ShortCutToText(System::Classes::TShortCut ShortCut);
extern DELPHI_PACKAGE System::Classes::TShortCut __fastcall TextToShortCut(System::UnicodeString Text);
extern DELPHI_PACKAGE bool __fastcall IsAltGRPressed(void);
extern DELPHI_PACKAGE System::Classes::TShortCut __fastcall ShortCutFromMessage(const Winapi::Messages::TWMKey &Message);
extern DELPHI_PACKAGE TMainMenu* __fastcall NewMenu(System::Classes::TComponent* Owner, const System::UnicodeString AName, TMenuItem* const *Items, const int Items_High);
extern DELPHI_PACKAGE TPopupMenu* __fastcall NewPopupMenu(System::Classes::TComponent* Owner, const System::UnicodeString AName, TPopupAlignment Alignment, bool AutoPopup, TMenuItem* const *Items, const int Items_High);
extern DELPHI_PACKAGE TMenuItem* __fastcall NewSubMenu(const System::UnicodeString ACaption, System::Classes::THelpContext hCtx, const System::UnicodeString AName, TMenuItem* const *Items, const int Items_High, bool AEnabled = true);
extern DELPHI_PACKAGE TMenuItem* __fastcall NewItem(const System::UnicodeString ACaption, System::Classes::TShortCut AShortCut, bool AChecked, bool AEnabled, System::Classes::TNotifyEvent AOnClick, System::Classes::THelpContext hCtx, const System::UnicodeString AName);
extern DELPHI_PACKAGE TMenuItem* __fastcall NewLine(void);
extern DELPHI_PACKAGE void __fastcall DrawMenuItem(TMenuItem* MenuItem, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StripHotkey(const System::UnicodeString Text);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetHotkey(const System::UnicodeString Text);
extern DELPHI_PACKAGE bool __fastcall SameCaption(const System::UnicodeString Text1, const System::UnicodeString Text2);
extern DELPHI_PACKAGE bool __fastcall AnsiSameCaption(const System::UnicodeString Text1, const System::UnicodeString Text2);
}	/* namespace Menus */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_MENUS)
using namespace Vcl::Menus;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_MenusHPP
