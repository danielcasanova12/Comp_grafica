// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Win.TaskbarCore.pas' rev: 35.00 (Windows)

#ifndef System_Win_TaskbarcoreHPP
#define System_Win_TaskbarcoreHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <System.Win.Taskbar.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ShlObj.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Win
{
namespace Taskbarcore
{
//-- forward type declarations -----------------------------------------------
struct TProgressState;
class DELPHICLASS TTaskbarHandler;
class DELPHICLASS TPreviewClipRegion;
class DELPHICLASS TThumbButtonActionLink;
class DELPHICLASS TThumbBarButtonBase;
class DELPHICLASS TThumbBarButtonListBase;
class DELPHICLASS TTaskbarBase;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TThumbButtonState : unsigned char { Enabled, DismissOnClick, NoBackground, Hidden, NonInteractive };

typedef System::Set<TThumbButtonState, _DELPHI_SET_ENUMERATOR(TThumbButtonState::Enabled), _DELPHI_SET_ENUMERATOR(TThumbButtonState::NonInteractive)> TThumbButtonStates;

enum class DECLSPEC_DENUM TThumbTabProperty : unsigned char { AppThumbAlways, AppThumbWhenActive, AppPeekAlways, AppPeekWhenActive, CustomizedPreview };

typedef System::Set<TThumbTabProperty, _DELPHI_SET_ENUMERATOR(TThumbTabProperty::AppThumbAlways), _DELPHI_SET_ENUMERATOR(TThumbTabProperty::CustomizedPreview)> TThumbTabProperties;

enum class DECLSPEC_DENUM TTaskBarProgressState : unsigned char { None, Indeterminate, Normal, Error, Paused };

typedef System::DynamicArray<THUMBBUTTON> TThumButtonArray;

struct DECLSPEC_DRECORD TProgressState
{
public:
	TTaskBarProgressState State;
	__int64 MaxValue;
	__int64 CurrentValue;
};


class PASCALIMPLEMENTATION TTaskbarHandler : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	virtual void __fastcall DoWindowPreviewRequest() = 0 ;
	virtual void __fastcall DoThumbPreviewRequest(System::Word APreviewHeight, System::Word APreviewWidth) = 0 ;
	virtual void __fastcall DoThumbButtonNotify(System::Word ItemID) = 0 ;
	virtual void __fastcall CheckApplyChanges() = 0 ;
	virtual void __fastcall Initialize() = 0 ;
	virtual void __fastcall UnregisterTab() = 0 ;
	virtual bool __fastcall ActivateTab() = 0 ;
public:
	/* TComponent.Create */ inline __fastcall virtual TTaskbarHandler(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TTaskbarHandler() { }
	
};


class PASCALIMPLEMENTATION TPreviewClipRegion : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Types::TRect FBounds;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetConstraints(int Index, int Value);
	int __fastcall GetConstraints(int Index);
	
protected:
	void __fastcall Change();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	
public:
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Types::TRect Bounds = {read=FBounds};
	
__published:
	__property int Left = {read=GetConstraints, write=SetConstraints, index=0, default=0};
	__property int Top = {read=GetConstraints, write=SetConstraints, index=1, default=0};
	__property int Height = {read=GetConstraints, write=SetConstraints, index=2, default=0};
	__property int Width = {read=GetConstraints, write=SetConstraints, index=3, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPreviewClipRegion() { }
	
public:
	/* TObject.Create */ inline __fastcall TPreviewClipRegion() : System::Classes::TPersistent() { }
	
};


class PASCALIMPLEMENTATION TThumbButtonActionLink : public System::Actions::TContainedActionLink
{
	typedef System::Actions::TContainedActionLink inherited;
	
private:
	TThumbBarButtonBase* FClient;
	
protected:
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual void __fastcall SetVisible(bool Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(int Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TThumbButtonActionLink(System::TObject* AClient) : System::Actions::TContainedActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TThumbButtonActionLink() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TThumbBarButtonBase : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	THUMBBUTTON FButton;
	TThumbButtonStates FButtonState;
	System::Actions::TContainedActionLink* FActionLink;
	void __fastcall SetButtonState(const TThumbButtonStates Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	System::UnicodeString __fastcall ReadHint();
	void __fastcall UpdateButtonStatus();
	
protected:
	DYNAMIC void __fastcall OnActionChange(System::TObject* Sender) = 0 ;
	DYNAMIC void __fastcall SetActionImageIndex(int Value);
	DYNAMIC void __fastcall SetActionVisible(bool Value);
	DYNAMIC void __fastcall SetActionEnabled(bool Value);
	DYNAMIC void __fastcall SetActionHint(const System::UnicodeString Value);
	virtual void __fastcall SetAction(System::Classes::TBasicAction* const Value);
	virtual System::Classes::TBasicAction* __fastcall GetAction();
	
public:
	__fastcall virtual TThumbBarButtonBase(System::Classes::TCollection* Collection);
	__fastcall virtual ~TThumbBarButtonBase();
	DYNAMIC bool __fastcall ExecuteButtonAction(System::TObject* const ASender);
	virtual HICON __fastcall GetHIcon() = 0 ;
	THUMBBUTTON __fastcall GetButton();
	DYNAMIC System::UnicodeString __fastcall GetNamePath();
	__property TThumbButtonStates ButtonState = {read=FButtonState, write=SetButtonState, default=1};
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property System::UnicodeString Hint = {read=ReadHint, write=SetHint};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TThumbBarButtonListBase : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
private:
	System::Classes::TCollectionItem* FOwnerItem;
	bool FButtonsAdded;
	System::Classes::TNotifyEvent FOnChange;
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TThumbBarButtonListBase(System::Classes::TPersistent* const AOwner, const System::Classes::TCollectionItemClass ItemClass, System::Classes::TCollectionItem* const AOwnerItem);
	void __fastcall DoButtonClickEvent(int AIndex);
	HIDESBASE TThumbBarButtonBase* __fastcall Add();
	TThumButtonArray __fastcall GetButtonArray();
	__property System::Classes::TCollectionItem* OwnerItem = {read=FOwnerItem};
	__property bool ButtonsAdded = {read=FButtonsAdded, write=FButtonsAdded, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TThumbBarButtonListBase() { }
	
};


class PASCALIMPLEMENTATION TTaskbarBase : public TTaskbarHandler
{
	typedef TTaskbarHandler inherited;
	
private:
	System::Win::Taskbar::TWinTaskbar* FTaskBar;
	TProgressState FProgressState;
	TPreviewClipRegion* FPreviewClipRegion;
	System::UnicodeString FOverlayHint;
	TThumbTabProperties FTabProperties;
	System::UnicodeString FToolTip;
	bool FChangesNeedsToBeApplied;
	bool FTaskbarIsAvailable;
	bool FRegistered;
	void __fastcall SetProgressValue(const __int64 Value);
	void __fastcall SetProgressMaxValue(const __int64 Value);
	void __fastcall SetPreviewClipRegion(TPreviewClipRegion* const Value);
	__int64 __fastcall GetProgressMaxValue();
	TTaskBarProgressState __fastcall GetProgressState();
	__int64 __fastcall GetProgressValue();
	void __fastcall SetOverlayHint(const System::UnicodeString Value);
	void __fastcall SetProgressState(const TTaskBarProgressState Value);
	void __fastcall SetTabProperties(const TThumbTabProperties Value);
	void __fastcall SetToolTip(const System::UnicodeString Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual HWND __fastcall GetFormHandle() = 0 ;
	
public:
	__fastcall virtual TTaskbarBase(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTaskbarBase();
	virtual void __fastcall Initialize();
	void __fastcall InvalidateThumbPreview();
	void __fastcall UpdateClipRegion(System::Win::Taskbar::TWinTaskbar* const ATaskbar);
	void __fastcall UpdateTab();
	virtual void __fastcall CheckApplyChanges();
	void __fastcall ApplyChanges();
	void __fastcall ApplyOverlayChanges();
	void __fastcall ApplyProgressChanges();
	virtual void __fastcall ApplyButtonsChanges() = 0 ;
	void __fastcall ApplyTabsChanges();
	void __fastcall ApplyClipAreaChanges();
	void __fastcall ClearClipArea();
	virtual void __fastcall UnregisterTab();
	virtual HWND __fastcall GetMainWindowHwnd() = 0 ;
	virtual HICON __fastcall GetOverlayHIcon() = 0 ;
	__property bool TaskbarIsAvailable = {read=FTaskbarIsAvailable, nodefault};
	__property TPreviewClipRegion* PreviewClipRegion = {read=FPreviewClipRegion, write=SetPreviewClipRegion};
	__property TTaskBarProgressState ProgressState = {read=GetProgressState, write=SetProgressState, default=0};
	__property __int64 ProgressMaxValue = {read=GetProgressMaxValue, write=SetProgressMaxValue, default=0};
	__property __int64 ProgressValue = {read=GetProgressValue, write=SetProgressValue, default=0};
	__property System::UnicodeString OverlayHint = {read=FOverlayHint, write=SetOverlayHint};
	__property TThumbTabProperties TabProperties = {read=FTabProperties, write=SetTabProperties, nodefault};
	__property System::UnicodeString ToolTip = {read=FToolTip, write=SetToolTip};
	__property System::Win::Taskbar::TWinTaskbar* TaskBar = {read=FTaskBar};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MAX_BUTTON_COUNT = System::Int8(0x7);
}	/* namespace Taskbarcore */
}	/* namespace Win */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN_TASKBARCORE)
using namespace System::Win::Taskbarcore;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN)
using namespace System::Win;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Win_TaskbarcoreHPP
