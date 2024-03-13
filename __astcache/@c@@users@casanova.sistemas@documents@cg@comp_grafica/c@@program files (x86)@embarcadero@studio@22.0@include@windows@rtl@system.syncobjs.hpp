// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.SyncObjs.pas' rev: 35.00 (Windows)

#ifndef System_SyncobjsHPP
#define System_SyncobjsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.RTLConsts.hpp>
#include <System.TimeSpan.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------
static const System::Types::TWaitResult wrIOCompletion = System::Types::TWaitResult::wrIOCompletion;

namespace System
{
namespace Syncobjs
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ESyncObjectException;
struct TCriticalSectionHelper /* Helper for record '_RTL_CRITICAL_SECTION' */;
struct TConditionVariableHelper /* Helper for record '_RTL_CONDITION_VARIABLE' */;
class DELPHICLASS TSynchroObject;
class DELPHICLASS THandleObject;
class DELPHICLASS TEvent;
class DELPHICLASS TSimpleEvent;
class DELPHICLASS TMutex;
class DELPHICLASS TSemaphore;
class DELPHICLASS TCriticalSection;
class DELPHICLASS TConditionVariableMutex;
class DELPHICLASS TConditionVariableCS;
struct TSpinWait;
class DELPHICLASS ELockRecursionException;
class DELPHICLASS ELockException;
struct TSpinLock;
class DELPHICLASS TLightweightEvent;
class DELPHICLASS TLightweightSemaphore;
class DELPHICLASS TCountdownEvent;
struct TLightweightMREW;
class DELPHICLASS TInterlocked;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ESyncObjectException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESyncObjectException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESyncObjectException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESyncObjectException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESyncObjectException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESyncObjectException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESyncObjectException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESyncObjectException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESyncObjectException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESyncObjectException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESyncObjectException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESyncObjectException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESyncObjectException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESyncObjectException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

using System::Types::TWaitResult;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSynchroObject : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Acquire();
	virtual void __fastcall Release();
	virtual System::Types::TWaitResult __fastcall WaitFor(unsigned Timeout = (unsigned)(0xffffffff))/* overload */;
	System::Types::TWaitResult __fastcall WaitFor(const System::Timespan::TTimeSpan &Timeout)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TSynchroObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSynchroObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::DynamicArray<THandleObject*> THandleObjectArray;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THandleObject : public TSynchroObject
{
	typedef TSynchroObject inherited;
	
protected:
	NativeUInt FHandle;
	int FLastError;
	bool FUseCOMWait;
	
public:
	__fastcall THandleObject(bool UseCOMWait);
	__fastcall virtual ~THandleObject();
	virtual System::Types::TWaitResult __fastcall WaitFor(unsigned Timeout)/* overload */;
	__classmethod System::Types::TWaitResult __fastcall WaitForMultiple(const THandleObjectArray HandleObjs, unsigned Timeout, bool AAll, /* out */ THandleObject* &SignaledObj, bool UseCOMWait = false, int Len = 0x0);
	__property int LastError = {read=FLastError, nodefault};
#ifndef _WIN64
	__property NativeUInt Handle = {read=FHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=FHandle};
#endif /* _WIN64 */
	/* Hoisted overloads: */
	
public:
	inline System::Types::TWaitResult __fastcall  WaitFor(const System::Timespan::TTimeSpan &Timeout){ return TSynchroObject::WaitFor(Timeout); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TEvent : public THandleObject
{
	typedef THandleObject inherited;
	
public:
	__fastcall TEvent(Winapi::Windows::PSecurityAttributes EventAttributes, bool ManualReset, bool InitialState, const System::UnicodeString Name, bool UseCOMWait)/* overload */;
	__fastcall TEvent(bool UseCOMWait)/* overload */;
	void __fastcall SetEvent();
	void __fastcall ResetEvent();
public:
	/* THandleObject.Destroy */ inline __fastcall virtual ~TEvent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSimpleEvent : public TEvent
{
	typedef TEvent inherited;
	
public:
	/* TEvent.Create */ inline __fastcall TSimpleEvent(Winapi::Windows::PSecurityAttributes EventAttributes, bool ManualReset, bool InitialState, const System::UnicodeString Name, bool UseCOMWait)/* overload */ : TEvent(EventAttributes, ManualReset, InitialState, Name, UseCOMWait) { }
	/* TEvent.Create */ inline __fastcall TSimpleEvent(bool UseCOMWait)/* overload */ : TEvent(UseCOMWait) { }
	
public:
	/* THandleObject.Destroy */ inline __fastcall virtual ~TSimpleEvent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMutex : public THandleObject
{
	typedef THandleObject inherited;
	
public:
	__fastcall TMutex(bool UseCOMWait)/* overload */;
	__fastcall TMutex(Winapi::Windows::PSecurityAttributes MutexAttributes, bool InitialOwner, const System::UnicodeString Name, bool UseCOMWait)/* overload */;
	__fastcall TMutex(unsigned DesiredAccess, bool InheritHandle, const System::UnicodeString Name, bool UseCOMWait)/* overload */;
	virtual void __fastcall Acquire();
	virtual void __fastcall Release();
public:
	/* THandleObject.Destroy */ inline __fastcall virtual ~TMutex() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSemaphore : public THandleObject
{
	typedef THandleObject inherited;
	
public:
	__fastcall TSemaphore(bool UseCOMWait)/* overload */;
	__fastcall TSemaphore(Winapi::Windows::PSecurityAttributes SemaphoreAttributes, int AInitialCount, int AMaximumCount, const System::UnicodeString Name, bool UseCOMWait)/* overload */;
	__fastcall TSemaphore(unsigned DesiredAccess, bool InheritHandle, const System::UnicodeString Name, bool UseCOMWait)/* overload */;
	virtual void __fastcall Acquire();
	virtual void __fastcall Release()/* overload */;
	HIDESBASE int __fastcall Release(int AReleaseCount)/* overload */;
public:
	/* THandleObject.Destroy */ inline __fastcall virtual ~TSemaphore() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCriticalSection : public TSynchroObject
{
	typedef TSynchroObject inherited;
	
protected:
	_RTL_CRITICAL_SECTION FSection;
	
public:
	__fastcall TCriticalSection();
	__fastcall virtual ~TCriticalSection();
	virtual void __fastcall Acquire();
	virtual void __fastcall Release();
	bool __fastcall TryEnter();
	void __fastcall Enter();
	void __fastcall Leave();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TConditionVariableMutex : public TSynchroObject
{
	typedef TSynchroObject inherited;
	
private:
	int FWaiterCount;
	TCriticalSection* FCountLock;
	TSemaphore* FWaitSemaphore;
	TEvent* FWaitersDoneEvent;
	bool FBroadcasting;
	
public:
	__fastcall TConditionVariableMutex();
	__fastcall virtual ~TConditionVariableMutex();
	virtual void __fastcall Acquire();
	virtual void __fastcall Release();
	void __fastcall ReleaseAll();
	HIDESBASE System::Types::TWaitResult __fastcall WaitFor(TMutex* AExternalMutex, unsigned TimeOut = (unsigned)(0xffffffff));
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TConditionVariableCS : public TSynchroObject
{
	typedef TSynchroObject inherited;
	
protected:
	_RTL_CONDITION_VARIABLE FConditionVariable;
	
public:
	virtual void __fastcall Acquire();
	virtual void __fastcall Release();
	void __fastcall ReleaseAll();
	HIDESBASE System::Types::TWaitResult __fastcall WaitFor(TCriticalSection* CriticalSection, unsigned TimeOut = (unsigned)(0xffffffff))/* overload */;
	HIDESBASE System::Types::TWaitResult __fastcall WaitFor(_RTL_CRITICAL_SECTION &CriticalSection, unsigned TimeOut = (unsigned)(0xffffffff))/* overload */;
public:
	/* TObject.Create */ inline __fastcall TConditionVariableCS() : TSynchroObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TConditionVariableCS() { }
	
	/* Hoisted overloads: */
	
public:
	inline System::Types::TWaitResult __fastcall  WaitFor(unsigned Timeout = (unsigned)(0xffffffff)){ return TSynchroObject::WaitFor(Timeout); }
	inline System::Types::TWaitResult __fastcall  WaitFor(const System::Timespan::TTimeSpan &Timeout){ return TSynchroObject::WaitFor(Timeout); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TSpinWait
{
private:
	static const System::Int8 YieldThreshold = System::Int8(0xa);
	
	static const System::Int8 Sleep1Threshold = System::Int8(0x14);
	
	static const System::Int8 Sleep0Threshold = System::Int8(0x5);
	
	int FCount;
	bool __fastcall GetNextSpinCycleWillYield();
	
public:
	void __fastcall Reset();
	void __fastcall SpinCycle();
	static void __fastcall SpinUntil(const System::DelphiInterface<System::Sysutils::TFunc__1<bool> > ACondition)/* overload */;
	static bool __fastcall SpinUntil(const System::DelphiInterface<System::Sysutils::TFunc__1<bool> > ACondition, unsigned Timeout)/* overload */;
	static bool __fastcall SpinUntil(const System::DelphiInterface<System::Sysutils::TFunc__1<bool> > ACondition, const System::Timespan::TTimeSpan &Timeout)/* overload */;
	__property int Count = {read=FCount};
	__property bool NextSpinCycleWillYield = {read=GetNextSpinCycleWillYield};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ELockRecursionException : public ESyncObjectException
{
	typedef ESyncObjectException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ELockRecursionException(const System::UnicodeString Msg) : ESyncObjectException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ELockRecursionException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : ESyncObjectException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ELockRecursionException(NativeUInt Ident)/* overload */ : ESyncObjectException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ELockRecursionException(System::PResStringRec ResStringRec)/* overload */ : ESyncObjectException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ELockRecursionException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : ESyncObjectException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ELockRecursionException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : ESyncObjectException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ELockRecursionException(const System::UnicodeString Msg, int AHelpContext) : ESyncObjectException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ELockRecursionException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : ESyncObjectException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELockRecursionException(NativeUInt Ident, int AHelpContext)/* overload */ : ESyncObjectException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELockRecursionException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ESyncObjectException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELockRecursionException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESyncObjectException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELockRecursionException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESyncObjectException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ELockRecursionException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ELockException : public ESyncObjectException
{
	typedef ESyncObjectException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ELockException(const System::UnicodeString Msg) : ESyncObjectException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ELockException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : ESyncObjectException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ELockException(NativeUInt Ident)/* overload */ : ESyncObjectException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ELockException(System::PResStringRec ResStringRec)/* overload */ : ESyncObjectException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ELockException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : ESyncObjectException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ELockException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : ESyncObjectException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ELockException(const System::UnicodeString Msg, int AHelpContext) : ESyncObjectException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ELockException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : ESyncObjectException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELockException(NativeUInt Ident, int AHelpContext)/* overload */ : ESyncObjectException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ELockException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ESyncObjectException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELockException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESyncObjectException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ELockException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESyncObjectException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ELockException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TSpinLock
{
private:
	static const unsigned ThreadTrackingDisabled = unsigned(0x80000000);
	
	static const int MaxWaitingThreads = int(0x7ffffffe);
	
	static const int WaitingThreadMask = int(0x7ffffffe);
	
	static const System::Int8 AnonymouslyOwned = System::Int8(0x1);
	
	static const System::Int8 LockAvailable = System::Int8(0x0);
	
	int FLock;
	bool __fastcall InternalTryEnter(unsigned Timeout);
	bool __fastcall GetIsLocked();
	bool __fastcall GetIsLockedByCurrentThread();
	bool __fastcall GetIsThreadTrackingEnabled();
	void __fastcall RemoveWaiter();
	
public:
	__fastcall TSpinLock(bool EnableThreadTracking);
	void __fastcall Enter();
	void __fastcall Exit(bool PublishNow = true);
	bool __fastcall TryEnter()/* overload */;
	bool __fastcall TryEnter(unsigned Timeout)/* overload */;
	bool __fastcall TryEnter(const System::Timespan::TTimeSpan &Timeout)/* overload */;
	__property bool IsLocked = {read=GetIsLocked};
	__property bool IsLockedByCurrentThread = {read=GetIsLockedByCurrentThread};
	__property bool IsThreadTrackingEnabled = {read=GetIsThreadTrackingEnabled};
	TSpinLock() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLightweightEvent : public TSynchroObject
{
	typedef TSynchroObject inherited;
	
private:
	static const System::Int8 DefaultSpinMulticore = System::Int8(0xa);
	
	static const System::Int8 DefaultSpinSinglecore = System::Int8(0x1);
	
	static const System::Word SpinMask = System::Word(0xfff);
	
	static const System::Word MaxSpin = System::Word(0xfff);
	
	static const int EventSignaled = int(-2147483648);
	
	static const System::Int8 EventUnsignaled = System::Int8(0x0);
	
	static const int SignalMask = int(-2147483648);
	
	System::TObject* FLock;
	int FStateAndSpin;
	int FWaiters;
	int FBlockedCount;
	bool __fastcall GetIsSet();
	int __fastcall GetSpinCount();
	void __fastcall SetNewStateAtomically(int NewValue, int Mask);
	
public:
	__fastcall TLightweightEvent()/* overload */;
	__fastcall TLightweightEvent(bool InitialState)/* overload */;
	__fastcall TLightweightEvent(bool InitialState, int SpinCount)/* overload */;
	__fastcall virtual ~TLightweightEvent();
	void __fastcall ResetEvent();
	void __fastcall SetEvent();
	virtual System::Types::TWaitResult __fastcall WaitFor(unsigned Timeout = (unsigned)(0xffffffff))/* overload */;
	__property int BlockedCount = {read=FBlockedCount, nodefault};
	__property bool IsSet = {read=GetIsSet, nodefault};
	__property int SpinCount = {read=GetSpinCount, nodefault};
	/* Hoisted overloads: */
	
public:
	inline System::Types::TWaitResult __fastcall  WaitFor(const System::Timespan::TTimeSpan &Timeout){ return TSynchroObject::WaitFor(Timeout); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLightweightSemaphore : public TSynchroObject
{
	typedef TSynchroObject inherited;
	
private:
	System::TObject* FCountLock;
	int FCurrentCount;
	int FInitialCount;
	int FMaxCount;
	int FWaitCount;
	int FBlockedCount;
	
public:
	__fastcall TLightweightSemaphore(int AInitialCount, int AMaxCount);
	__fastcall virtual ~TLightweightSemaphore();
	HIDESBASE int __fastcall Release(int AReleaseCount = 0x1);
	virtual System::Types::TWaitResult __fastcall WaitFor(unsigned Timeout = (unsigned)(0xffffffff))/* overload */;
	__property int BlockedCount = {read=FBlockedCount, nodefault};
	__property int CurrentCount = {read=FCurrentCount, nodefault};
	/* Hoisted overloads: */
	
public:
	inline System::Types::TWaitResult __fastcall  WaitFor(const System::Timespan::TTimeSpan &Timeout){ return TSynchroObject::WaitFor(Timeout); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCountdownEvent : public TSynchroObject
{
	typedef TSynchroObject inherited;
	
private:
	TLightweightEvent* FEvent;
	int FInitialCount;
	int FCurrentCount;
	bool __fastcall GetIsSet();
	
public:
	__fastcall TCountdownEvent()/* overload */;
	__fastcall TCountdownEvent(int Count)/* overload */;
	__fastcall TCountdownEvent(int Count, int SpinCount)/* overload */;
	__fastcall virtual ~TCountdownEvent();
	bool __fastcall Signal(int Count = 0x1);
	void __fastcall AddCount(int Count = 0x1);
	void __fastcall Reset()/* overload */;
	void __fastcall Reset(int Count)/* overload */;
	bool __fastcall TryAddCount(int Count = 0x1);
	virtual System::Types::TWaitResult __fastcall WaitFor(unsigned Timeout = (unsigned)(0xffffffff))/* overload */;
	__property int CurrentCount = {read=FCurrentCount, nodefault};
	__property int InitialCount = {read=FInitialCount, nodefault};
	__property bool IsSet = {read=GetIsSet, nodefault};
	/* Hoisted overloads: */
	
public:
	inline System::Types::TWaitResult __fastcall  WaitFor(const System::Timespan::TTimeSpan &Timeout){ return TSynchroObject::WaitFor(Timeout); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TLightweightMREW
{
private:
	_RTL_SRWLOCK FNativeRW;
	
public:
	TLightweightMREW() { _op_Initialize(*this); }
	
		static void __fastcall _op_Initialize(/* out */ TLightweightMREW &Dest);
	void __fastcall BeginRead();
	bool __fastcall TryBeginRead();
	void __fastcall EndRead();
	void __fastcall BeginWrite();
	bool __fastcall TryBeginWrite();
	void __fastcall EndWrite();
};


typedef System::Int8 TBitOffset;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TInterlocked : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static int __fastcall Increment(int &Target)/* overload */;
	static __int64 __fastcall Increment(__int64 &Target)/* overload */;
	static int __fastcall Decrement(int &Target)/* overload */;
	static __int64 __fastcall Decrement(__int64 &Target)/* overload */;
	static int __fastcall Add(int &Target, int Increment)/* overload */;
	static __int64 __fastcall Add(__int64 &Target, __int64 Increment)/* overload */;
	static bool __fastcall BitTestAndSet(int &Target, TBitOffset BitOffset);
	static bool __fastcall BitTestAndClear(int &Target, TBitOffset BitOffset);
	static void * __fastcall Exchange(void * &Target, void * Value)/* overload */;
	static int __fastcall Exchange(int &Target, int Value)/* overload */;
	static __int64 __fastcall Exchange(__int64 &Target, __int64 Value)/* overload */;
	static System::TObject* __fastcall Exchange(System::TObject* &Target, System::TObject* Value)/* overload */;
	static double __fastcall Exchange(double &Target, double Value)/* overload */;
	static float __fastcall Exchange(float &Target, float Value)/* overload */;
	template<typename T> static T __fastcall Exchange(T &Target, T Value)/* overload */;
	static void * __fastcall CompareExchange(void * &Target, void * Value, void * Comparand)/* overload */;
	static int __fastcall CompareExchange(int &Target, int Value, int Comparand)/* overload */;
	static int __fastcall CompareExchange(int &Target, int Value, int Comparand, /* out */ bool &Succeeded)/* overload */;
	static __int64 __fastcall CompareExchange(__int64 &Target, __int64 Value, __int64 Comparand)/* overload */;
	static System::TObject* __fastcall CompareExchange(System::TObject* &Target, System::TObject* Value, System::TObject* Comparand)/* overload */;
	static double __fastcall CompareExchange(double &Target, double Value, double Comparand)/* overload */;
	static float __fastcall CompareExchange(float &Target, float Value, float Comparand)/* overload */;
	template<typename T> static T __fastcall CompareExchange(T &Target, T Value, T Comparand)/* overload */;
	static __int64 __fastcall Read(__int64 &Target);
public:
	/* TObject.Create */ inline __fastcall TInterlocked() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TInterlocked() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Syncobjs */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_SYNCOBJS)
using namespace System::Syncobjs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif

//-- user supplied -----------------------------------------------------------
namespace System
{
namespace Syncobjs
{
#if defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) || defined(NO_USING_NAMESPACE_SYSTEM_SYNCOBJS)
static const System::Types::TWaitResult wrSignaled = System::Types::TWaitResult::wrSignaled;
static const System::Types::TWaitResult wrTimeout = System::Types::TWaitResult::wrTimeout;
static const System::Types::TWaitResult wrAbandoned = System::Types::TWaitResult::wrAbandoned;
static const System::Types::TWaitResult wrError = System::Types::TWaitResult::wrError;
#endif
}	/* namespace Syncobjs */
}	/* namespace System */

#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_SyncobjsHPP
