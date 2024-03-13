// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ListActns.pas' rev: 35.00 (Windows)

#ifndef Vcl_ListactnsHPP
#define Vcl_ListactnsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Listactns
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TListControlItem;
class DELPHICLASS TListControlItems;
class DELPHICLASS TCustomListAction;
class DELPHICLASS TCustomVirtualListAction;
class DELPHICLASS TVirtualListAction;
class DELPHICLASS TStaticListItems;
class DELPHICLASS TCustomStaticListAction;
class DELPHICLASS TStaticListAction;
class DELPHICLASS TListActionLink;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListControlItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TListControlItems* FListControlItems;
	
protected:
	System::UnicodeString FCaption;
	void *FData;
	System::Uitypes::TImageIndex FImageIndex;
	HIDESBASE void __fastcall Changed();
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetData(const void * Value);
	virtual void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	
public:
	__fastcall virtual TListControlItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property void * Data = {read=FData, write=SetData};
	
__published:
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TListControlItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TListItemsSortType : unsigned char { stNone, stData, stText, stBoth };

typedef int __fastcall (__closure *TListCompareEvent)(TListControlItems* List, TListControlItem* Item1, TListControlItem* Item2);

typedef int __fastcall (*TListItemsCompare)(TListControlItems* List, int Index1, int Index2);

class PASCALIMPLEMENTATION TListControlItems : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TListControlItem* operator[](const int Index) { return this->Items[Index]; }
	
private:
	bool FCaseSensitive;
	TListItemsSortType FSortType;
	TListCompareEvent FOnCompare;
	void __fastcall ExchangeItems(int Index1, int Index2);
	TListControlItem* __fastcall GetListItem(const int Index);
	void __fastcall QuickSort(int L, int R, TListItemsCompare SCompare);
	void __fastcall SetSortType(const TListItemsSortType Value);
	
protected:
	virtual int __fastcall CompareItems(TListControlItem* I1, TListControlItem* I2);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall virtual TListControlItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass);
	HIDESBASE TListControlItem* __fastcall Add();
	HIDESBASE void __fastcall Sort();
	void __fastcall CustomSort(TListItemsCompare Compare);
	__property TListControlItem* Items[const int Index] = {read=GetListItem/*, default*/};
	
__published:
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=0};
	__property TListItemsSortType SortType = {read=FSortType, write=SetSortType, default=0};
	__property TListCompareEvent OnCompare = {read=FOnCompare, write=FOnCompare};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TListControlItems() { }
	
};


typedef void __fastcall (__closure *TGetItemCountEvent)(TCustomListAction* Sender, int &Count);

typedef void __fastcall (__closure *TItemSelectedEvent)(TCustomListAction* Sender, Vcl::Controls::TControl* Control);

class PASCALIMPLEMENTATION TCustomListAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
public:
	System::UnicodeString operator[](int Index) { return this->Strings[Index]; }
	
private:
	bool FActive;
	bool FActivated;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FInUpdate;
	Vcl::Imglist::TCustomImageList* FLoadedImages;
	bool FLoading;
	TGetItemCountEvent FOnGetItemCount;
	TItemSelectedEvent FOnItemSelected;
	int FItemIndex;
	void __fastcall SetActive(const bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetItemIndex(const int Value);
	
protected:
	virtual int __fastcall GetCount();
	virtual System::UnicodeString __fastcall GetString(int Index);
	virtual void __fastcall Loaded();
	virtual void __fastcall SetString(int Index, const System::UnicodeString Value);
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool Loading = {read=FLoading, nodefault};
	__property TGetItemCountEvent OnGetItemCount = {read=FOnGetItemCount, write=FOnGetItemCount};
	__property TItemSelectedEvent OnItemSelected = {read=FOnItemSelected, write=FOnItemSelected};
	
public:
	__fastcall virtual TCustomListAction(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property int Count = {read=GetCount, nodefault};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
	__property System::UnicodeString Strings[int Index] = {read=GetString, write=SetString/*, default*/};
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomListAction() { }
	
};


typedef void __fastcall (__closure *TGetVirtualItemEvent)(TCustomListAction* Sender, const int Index, System::UnicodeString &Value, int &ImageIndex, void * &Data);

class PASCALIMPLEMENTATION TCustomVirtualListAction : public TCustomListAction
{
	typedef TCustomListAction inherited;
	
private:
	TGetVirtualItemEvent FOnGetItem;
	
protected:
	bool __fastcall GetItem(const int Index, System::UnicodeString &Value, int &ImageIndex, void * &Data);
	virtual System::UnicodeString __fastcall GetString(int Index);
	
public:
	__property Count;
	__property TGetVirtualItemEvent OnGetItem = {read=FOnGetItem, write=FOnGetItem};
public:
	/* TCustomListAction.Create */ inline __fastcall virtual TCustomVirtualListAction(System::Classes::TComponent* AOwner) : TCustomListAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomVirtualListAction() { }
	
};


class PASCALIMPLEMENTATION TVirtualListAction : public TCustomVirtualListAction
{
	typedef TCustomVirtualListAction inherited;
	
__published:
	__property Active = {default=1};
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property Hint = {default=0};
	__property Images;
	__property ItemIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnGetItem;
	__property OnGetItemCount;
	__property OnItemSelected;
	__property OnHint;
public:
	/* TCustomListAction.Create */ inline __fastcall virtual TVirtualListAction(System::Classes::TComponent* AOwner) : TCustomVirtualListAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TVirtualListAction() { }
	
};


typedef void __fastcall (__closure *TGetItemEvent)(TCustomListAction* Sender, const int Index, TListControlItem* &Item);

class PASCALIMPLEMENTATION TStaticListItems : public TListControlItems
{
	typedef TListControlItems inherited;
	
private:
	TCustomStaticListAction* FStaticListAction;
	
protected:
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
public:
	/* TListControlItems.Create */ inline __fastcall virtual TStaticListItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : TListControlItems(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TStaticListItems() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TListControlItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TListControlItemClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomStaticListAction : public TCustomListAction
{
	typedef TCustomListAction inherited;
	
private:
	TStaticListItems* FListItems;
	TGetItemEvent FOnGetItem;
	void __fastcall SetListitems(TStaticListItems* const Value);
	
protected:
	virtual TListControlItemClass __fastcall GetItemClass();
	virtual int __fastcall GetCount();
	bool __fastcall GetItem(const int Index, TListControlItem* AnItem);
	virtual System::UnicodeString __fastcall GetString(int Index);
	virtual void __fastcall SetString(int Index, const System::UnicodeString Value);
	
public:
	__fastcall virtual TCustomStaticListAction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomStaticListAction();
	__property Count;
	__property TGetItemEvent OnGetItem = {read=FOnGetItem, write=FOnGetItem};
	__property TStaticListItems* Items = {read=FListItems, write=SetListitems};
};


class PASCALIMPLEMENTATION TStaticListAction : public TCustomStaticListAction
{
	typedef TCustomStaticListAction inherited;
	
__published:
	__property Active = {default=1};
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property Hint = {default=0};
	__property Images;
	__property ItemIndex = {default=-1};
	__property Items;
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnGetItem;
	__property OnItemSelected;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomStaticListAction.Create */ inline __fastcall virtual TStaticListAction(System::Classes::TComponent* AOwner) : TCustomStaticListAction(AOwner) { }
	/* TCustomStaticListAction.Destroy */ inline __fastcall virtual ~TStaticListAction() { }
	
};


class PASCALIMPLEMENTATION TListActionLink : public Vcl::Controls::TWinControlActionLink
{
	typedef Vcl::Controls::TWinControlActionLink inherited;
	
protected:
	virtual bool __fastcall IsActiveLinked();
	virtual void __fastcall SetActive(const bool Value);
	virtual bool __fastcall IsImagesLinked();
	virtual void __fastcall SetAction(System::Classes::TBasicAction* Value);
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	virtual void __fastcall SetItemIndex(const int Value);
	virtual void __fastcall AddItem(TListControlItem* AnItem)/* overload */;
	virtual void __fastcall AddItem(System::UnicodeString ACaption, int AImageIndex, void * DataPtr)/* overload */;
	void __fastcall RefreshControl();
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TListActionLink(System::TObject* AClient) : Vcl::Controls::TWinControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TListActionLink() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Listactns */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_LISTACTNS)
using namespace Vcl::Listactns;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ListactnsHPP
