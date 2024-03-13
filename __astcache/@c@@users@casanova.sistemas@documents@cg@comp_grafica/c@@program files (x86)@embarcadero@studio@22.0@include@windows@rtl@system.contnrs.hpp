// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Contnrs.pas' rev: 35.00 (Windows)

#ifndef System_ContnrsHPP
#define System_ContnrsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Contnrs
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TObjectList;
class DELPHICLASS TComponentList;
class DELPHICLASS TClassList;
class DELPHICLASS TOrderedList;
class DELPHICLASS TStack;
class DELPHICLASS TObjectStack;
class DELPHICLASS TQueue;
class DELPHICLASS TObjectQueue;
struct TBucketItem;
struct TBucket;
class DELPHICLASS TCustomBucketList;
class DELPHICLASS TBucketList;
class DELPHICLASS TObjectBucketList;
class DELPHICLASS TIntegerBucketList;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TObjectList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	System::TObject* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FOwnsObjects;
	
protected:
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	System::TObject* __fastcall GetItem(int Index);
	void __fastcall SetItem(int Index, System::TObject* AObject);
	
public:
	__fastcall TObjectList()/* overload */;
	__fastcall TObjectList(bool AOwnsObjects)/* overload */;
	HIDESBASE int __fastcall Add(System::TObject* AObject);
	HIDESBASE System::TObject* __fastcall Extract(System::TObject* Item);
	HIDESBASE System::TObject* __fastcall ExtractItem(System::TObject* Item, System::Types::TDirection Direction);
	HIDESBASE int __fastcall Remove(System::TObject* AObject)/* overload */;
	HIDESBASE int __fastcall RemoveItem(System::TObject* AObject, System::Types::TDirection ADirection);
	HIDESBASE int __fastcall IndexOf(System::TObject* AObject);
	HIDESBASE int __fastcall IndexOfItem(System::TObject* AObject, System::Types::TDirection ADirection);
	int __fastcall FindInstanceOf(System::TClass AClass, bool AExact = true, int AStartAt = 0x0);
	HIDESBASE void __fastcall Insert(int Index, System::TObject* AObject);
	HIDESBASE System::TObject* __fastcall First();
	HIDESBASE System::TObject* __fastcall Last();
	__property bool OwnsObjects = {read=FOwnsObjects, write=FOwnsObjects, nodefault};
	__property System::TObject* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TObjectList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComponentList : public TObjectList
{
	typedef TObjectList inherited;
	
public:
	System::Classes::TComponent* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TComponent* FNexus;
	
protected:
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	System::Classes::TComponent* __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, System::Classes::TComponent* AComponent);
	void __fastcall HandleFreeNotify(System::TObject* Sender, System::Classes::TComponent* AComponent);
	
public:
	__fastcall TComponentList()/* overload */;
	__fastcall TComponentList(bool AOwnsObjects)/* overload */;
	__fastcall virtual ~TComponentList();
	HIDESBASE int __fastcall Add(System::Classes::TComponent* AComponent);
	HIDESBASE System::Classes::TComponent* __fastcall Extract(System::Classes::TComponent* Item);
	HIDESBASE System::Classes::TComponent* __fastcall ExtractItem(System::Classes::TComponent* Item, System::Types::TDirection Direction);
	HIDESBASE int __fastcall Remove(System::Classes::TComponent* AComponent);
	HIDESBASE int __fastcall RemoveItem(System::Classes::TComponent* AComponent, System::Types::TDirection ADirection);
	HIDESBASE int __fastcall IndexOf(System::Classes::TComponent* AComponent);
	HIDESBASE int __fastcall IndexOfItem(System::Classes::TComponent* AComponent, System::Types::TDirection ADirection);
	HIDESBASE System::Classes::TComponent* __fastcall First();
	HIDESBASE System::Classes::TComponent* __fastcall Last();
	HIDESBASE void __fastcall Insert(int Index, System::Classes::TComponent* AComponent);
	__property System::Classes::TComponent* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TClassList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	System::TClass operator[](int Index) { return this->Items[Index]; }
	
protected:
	System::TClass __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, System::TClass AClass);
	
public:
	HIDESBASE int __fastcall Add(System::TClass AClass);
	HIDESBASE System::TClass __fastcall Extract(System::TClass Item);
	HIDESBASE System::TClass __fastcall ExtractItem(System::TClass Item, System::Types::TDirection Direction);
	HIDESBASE int __fastcall Remove(System::TClass AClass);
	HIDESBASE int __fastcall RemoveItem(System::TClass AClass, System::Types::TDirection ADirection);
	HIDESBASE int __fastcall IndexOf(System::TClass AClass);
	HIDESBASE int __fastcall IndexOfItem(System::TClass AClass, System::Types::TDirection ADirection);
	HIDESBASE System::TClass __fastcall First();
	HIDESBASE System::TClass __fastcall Last();
	HIDESBASE void __fastcall Insert(int Index, System::TClass AClass);
	__property System::TClass Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TClassList() { }
	
public:
	/* TObject.Create */ inline __fastcall TClassList() : System::Classes::TList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TOrderedList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FList;
	
protected:
	virtual void __fastcall PushItem(void * AItem) = 0 ;
	virtual void * __fastcall PopItem();
	virtual void * __fastcall PeekItem();
	__property System::Classes::TList* List = {read=FList};
	
public:
	__fastcall TOrderedList();
	__fastcall virtual ~TOrderedList();
	int __fastcall Count();
	bool __fastcall AtLeast(int ACount);
	void * __fastcall Push(void * AItem);
	void * __fastcall Pop();
	void * __fastcall Peek();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStack : public TOrderedList
{
	typedef TOrderedList inherited;
	
protected:
	virtual void __fastcall PushItem(void * AItem);
public:
	/* TOrderedList.Create */ inline __fastcall TStack() : TOrderedList() { }
	/* TOrderedList.Destroy */ inline __fastcall virtual ~TStack() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TObjectStack : public TStack
{
	typedef TStack inherited;
	
public:
	HIDESBASE System::TObject* __fastcall Push(System::TObject* AObject);
	HIDESBASE System::TObject* __fastcall Pop();
	HIDESBASE System::TObject* __fastcall Peek();
public:
	/* TOrderedList.Create */ inline __fastcall TObjectStack() : TStack() { }
	/* TOrderedList.Destroy */ inline __fastcall virtual ~TObjectStack() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TQueue : public TOrderedList
{
	typedef TOrderedList inherited;
	
protected:
	virtual void __fastcall PushItem(void * AItem);
public:
	/* TOrderedList.Create */ inline __fastcall TQueue() : TOrderedList() { }
	/* TOrderedList.Destroy */ inline __fastcall virtual ~TQueue() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TObjectQueue : public TQueue
{
	typedef TQueue inherited;
	
public:
	HIDESBASE System::TObject* __fastcall Push(System::TObject* AObject);
	HIDESBASE System::TObject* __fastcall Pop();
	HIDESBASE System::TObject* __fastcall Peek();
public:
	/* TOrderedList.Create */ inline __fastcall TObjectQueue() : TQueue() { }
	/* TOrderedList.Destroy */ inline __fastcall virtual ~TObjectQueue() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TBucketItem
{
public:
	void *Item;
	void *Data;
};


typedef System::DynamicArray<TBucketItem> TBucketItemArray;

struct DECLSPEC_DRECORD TBucket
{
public:
	int Count;
	TBucketItemArray Items;
};


typedef System::DynamicArray<TBucket> TBucketArray;

typedef void __fastcall (*TBucketProc)(void * AInfo, void * AItem, void * AData, /* out */ bool &AContinue);

typedef void __fastcall (__closure *TBucketEvent)(void * AItem, void * AData, /* out */ bool &AContinue);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomBucketList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	void * operator[](void * AItem) { return this->Data[AItem]; }
	
private:
	TBucketArray FBuckets;
	int FBucketCount;
	bool FListLocked;
	bool FClearing;
	void * __fastcall GetData(void * AItem);
	void __fastcall SetData(void * AItem, const void * AData);
	void __fastcall SetBucketCount(const int Value);
	
protected:
	__property TBucketArray Buckets = {read=FBuckets};
	__property int BucketCount = {read=FBucketCount, write=SetBucketCount, nodefault};
	virtual int __fastcall BucketFor(void * AItem) = 0 ;
	virtual bool __fastcall FindItem(void * AItem, /* out */ int &ABucket, /* out */ int &AIndex);
	virtual void * __fastcall AddItem(int ABucket, void * AItem, void * AData);
	virtual void * __fastcall DeleteItem(int ABucket, int AIndex);
	
public:
	__fastcall virtual ~TCustomBucketList();
	void __fastcall Clear();
	void * __fastcall Add(void * AItem, void * AData);
	void * __fastcall Remove(void * AItem);
	bool __fastcall ForEach(TBucketProc AProc, void * AInfo = (void *)(0x0))/* overload */;
	bool __fastcall ForEach(TBucketEvent AEvent)/* overload */;
	void __fastcall Assign(TCustomBucketList* AList);
	bool __fastcall Exists(void * AItem);
	bool __fastcall Find(void * AItem, /* out */ void * &AData);
	__property void * Data[void * AItem] = {read=GetData, write=SetData/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TCustomBucketList() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TBucketListSizes : unsigned char { bl2, bl4, bl8, bl16, bl32, bl64, bl128, bl256 };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBucketList : public TCustomBucketList
{
	typedef TCustomBucketList inherited;
	
private:
	System::Byte FBucketMask;
	
protected:
	virtual int __fastcall BucketFor(void * AItem);
	
public:
	__fastcall TBucketList(TBucketListSizes ABuckets);
public:
	/* TCustomBucketList.Destroy */ inline __fastcall virtual ~TBucketList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TObjectBucketList : public TBucketList
{
	typedef TBucketList inherited;
	
public:
	System::TObject* operator[](System::TObject* AItem) { return this->Data[AItem]; }
	
protected:
	HIDESBASE System::TObject* __fastcall GetData(System::TObject* AItem);
	HIDESBASE void __fastcall SetData(System::TObject* AItem, System::TObject* const AData);
	
public:
	HIDESBASE System::TObject* __fastcall Add(System::TObject* AItem, System::TObject* AData);
	HIDESBASE System::TObject* __fastcall Remove(System::TObject* AItem);
	__property System::TObject* Data[System::TObject* AItem] = {read=GetData, write=SetData/*, default*/};
public:
	/* TBucketList.Create */ inline __fastcall TObjectBucketList(TBucketListSizes ABuckets) : TBucketList(ABuckets) { }
	
public:
	/* TCustomBucketList.Destroy */ inline __fastcall virtual ~TObjectBucketList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIntegerBucketList : public TBucketList
{
	typedef TBucketList inherited;
	
public:
	NativeInt operator[](NativeInt AItem) { return this->Data[AItem]; }
	
protected:
	HIDESBASE NativeInt __fastcall GetData(NativeInt AItem);
	HIDESBASE void __fastcall SetData(NativeInt AItem, const NativeInt AData);
	
public:
	HIDESBASE NativeInt __fastcall Add(NativeInt AItem, NativeInt AData);
	HIDESBASE NativeInt __fastcall Remove(NativeInt AItem);
	__property NativeInt Data[NativeInt AItem] = {read=GetData, write=SetData/*, default*/};
public:
	/* TBucketList.Create */ inline __fastcall TIntegerBucketList(TBucketListSizes ABuckets) : TBucketList(ABuckets) { }
	
public:
	/* TCustomBucketList.Destroy */ inline __fastcall virtual ~TIntegerBucketList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RaiseListError _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString ATemplate, const System::TVarRec *AData, const int AData_High);
}	/* namespace Contnrs */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_CONTNRS)
using namespace System::Contnrs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_ContnrsHPP
