// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.HelpIntfs.pas' rev: 35.00 (Windows)

#ifndef System_HelpintfsHPP
#define System_HelpintfsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Helpintfs
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IHelpSelector;
typedef System::DelphiInterface<IHelpSelector> _di_IHelpSelector;
__interface DELPHIINTERFACE IHelpSelector2;
typedef System::DelphiInterface<IHelpSelector2> _di_IHelpSelector2;
__interface DELPHIINTERFACE IHelpSystem;
typedef System::DelphiInterface<IHelpSystem> _di_IHelpSystem;
__interface DELPHIINTERFACE IHelpSystem2;
typedef System::DelphiInterface<IHelpSystem2> _di_IHelpSystem2;
__interface DELPHIINTERFACE IHelpSystem3;
typedef System::DelphiInterface<IHelpSystem3> _di_IHelpSystem3;
__interface DELPHIINTERFACE ICustomHelpViewer;
typedef System::DelphiInterface<ICustomHelpViewer> _di_ICustomHelpViewer;
__interface DELPHIINTERFACE IExtendedHelpViewer;
typedef System::DelphiInterface<IExtendedHelpViewer> _di_IExtendedHelpViewer;
__interface DELPHIINTERFACE IExtendedHelpViewer2;
typedef System::DelphiInterface<IExtendedHelpViewer2> _di_IExtendedHelpViewer2;
__interface DELPHIINTERFACE IFilteredHelpViewer;
typedef System::DelphiInterface<IFilteredHelpViewer> _di_IFilteredHelpViewer;
__interface DELPHIINTERFACE ISpecialWinHelpViewer;
typedef System::DelphiInterface<ISpecialWinHelpViewer> _di_ISpecialWinHelpViewer;
__interface DELPHIINTERFACE IHelpSystemFlags;
typedef System::DelphiInterface<IHelpSystemFlags> _di_IHelpSystemFlags;
__interface DELPHIINTERFACE IHelpManager;
typedef System::DelphiInterface<IHelpManager> _di_IHelpManager;
class DELPHICLASS EHelpSystemException;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{B0FC9358-5F0E-11D3-A3B9-00C04F79AD3A}") IHelpSelector  : public System::IInterface 
{
	virtual int __fastcall SelectKeyword(System::Classes::TStrings* Keywords) = 0 ;
	virtual int __fastcall TableOfContents(System::Classes::TStrings* Contents) = 0 ;
};

__interface  INTERFACE_UUID("{F65368F4-CA3B-482C-ABD2-3FC23F801D8B}") IHelpSelector2  : public IHelpSelector 
{
	virtual int __fastcall SelectContext(System::Classes::TStrings* Viewers) = 0 ;
};

__interface  INTERFACE_UUID("{B0FC9353-5F0E-11D3-A3B9-00C04F79AD3A}") IHelpSystem  : public System::IInterface 
{
	virtual void __fastcall ShowHelp(const System::UnicodeString HelpKeyword, const System::UnicodeString HelpFileName) = 0 ;
	virtual void __fastcall ShowContextHelp(const System::Classes::THelpContext ContextID, const System::UnicodeString HelpFileName) = 0 ;
	virtual void __fastcall ShowTableOfContents() = 0 ;
	virtual void __fastcall ShowTopicHelp(const System::UnicodeString Topic, const System::UnicodeString HelpFileName) = 0 ;
	virtual void __fastcall AssignHelpSelector(const _di_IHelpSelector Selector) = 0 ;
	virtual bool __fastcall Hook(NativeUInt Handle, const System::UnicodeString HelpFile, System::Word Comand, NativeInt Data) = 0 ;
};

__interface  INTERFACE_UUID("{48C5336E-71E2-4406-A08E-F915FBA5C9D4}") IHelpSystem2  : public IHelpSystem 
{
	virtual bool __fastcall UnderstandsKeyword(const System::UnicodeString HelpKeyword, const System::UnicodeString HelpFileName) = 0 ;
};

__interface  INTERFACE_UUID("{006A65EE-9A5E-4EB1-828F-A7F1D79DD202}") IHelpSystem3  : public IHelpSystem2 
{
	virtual void __fastcall ShowIndex(const System::UnicodeString Topic, const System::UnicodeString HelpFileName) = 0 ;
	virtual void __fastcall ShowSearch(const System::UnicodeString Topic, const System::UnicodeString HelpFileName) = 0 ;
	HIDESBASE virtual void __fastcall ShowTopicHelp(const System::UnicodeString Topic, const System::UnicodeString Anchor, const System::UnicodeString HelpFileName) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetFilter() = 0 ;
	virtual void __fastcall SetFilter(const System::UnicodeString Filter) = 0 ;
};

__interface  INTERFACE_UUID("{B0FC9364-5F0E-11D3-A3B9-00C04F79AD3A}") ICustomHelpViewer  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetViewerName() = 0 ;
	virtual int __fastcall UnderstandsKeyword(const System::UnicodeString HelpString) = 0 ;
	virtual System::Classes::TStringList* __fastcall GetHelpStrings(const System::UnicodeString HelpString) = 0 ;
	virtual bool __fastcall CanShowTableOfContents() = 0 ;
	virtual void __fastcall ShowTableOfContents() = 0 ;
	virtual void __fastcall ShowHelp(const System::UnicodeString HelpString) = 0 ;
	virtual void __fastcall NotifyID(const int ViewerID) = 0 ;
	virtual void __fastcall SoftShutDown() = 0 ;
	virtual void __fastcall ShutDown() = 0 ;
};

__interface  INTERFACE_UUID("{B0FC9366-5F0E-11D3-A3B9-00C04F79AD3A}") IExtendedHelpViewer  : public ICustomHelpViewer 
{
	virtual bool __fastcall UnderstandsTopic(const System::UnicodeString Topic) = 0 ;
	virtual void __fastcall DisplayTopic(const System::UnicodeString Topic) = 0 ;
	virtual bool __fastcall UnderstandsContext(const System::Classes::THelpContext ContextID, const System::UnicodeString HelpFileName) = 0 ;
	virtual void __fastcall DisplayHelpByContext(const System::Classes::THelpContext ContextID, const System::UnicodeString HelpFileName) = 0 ;
};

__interface  INTERFACE_UUID("{DD46A379-569A-46AA-89E5-8AACA764304B}") IExtendedHelpViewer2  : public IExtendedHelpViewer 
{
	virtual void __fastcall DisplayIndex(const System::UnicodeString Topic) = 0 ;
	virtual void __fastcall DisplaySearch(const System::UnicodeString Topic) = 0 ;
	HIDESBASE virtual void __fastcall DisplayTopic(const System::UnicodeString Topic, const System::UnicodeString Anchor) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{991F8E1A-2E3F-4ACB-91A8-4B9587BBA878}") IFilteredHelpViewer  : public IExtendedHelpViewer2 
{
	virtual System::UnicodeString __fastcall GetFilter() = 0 ;
	virtual void __fastcall SetFilter(const System::UnicodeString Filter) = 0 ;
};

__interface  INTERFACE_UUID("{1A7B2224-1EAE-4313-BAD6-3C32F8F77085}") ISpecialWinHelpViewer  : public IExtendedHelpViewer 
{
	virtual bool __fastcall CallWinHelp(NativeUInt Handle, const System::UnicodeString HelpFile, System::Word Command, NativeUInt Data) = 0 ;
};

__interface  INTERFACE_UUID("{69418F09-5E49-4899-9E13-9FE3C1497566}") IHelpSystemFlags  : public IExtendedHelpViewer 
{
	virtual bool __fastcall GetUseDefaultTopic() = 0 ;
	virtual void __fastcall SetUseDefaultTopic(bool AValue) = 0 ;
};

__interface  INTERFACE_UUID("{6B0CDB05-C30A-414B-99C4-F11CD195385E}") IHelpManager  : public System::IInterface 
{
	virtual NativeUInt __fastcall GetHandle() = 0 ;
	virtual System::UnicodeString __fastcall GetHelpFile() = 0 ;
	virtual void __fastcall Release(const int ViewerID) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EHelpSystemException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EHelpSystemException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EHelpSystemException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EHelpSystemException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EHelpSystemException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EHelpSystemException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EHelpSystemException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EHelpSystemException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EHelpSystemException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EHelpSystemException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EHelpSystemException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EHelpSystemException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EHelpSystemException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EHelpSystemException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall RegisterViewer(const _di_ICustomHelpViewer newViewer, /* out */ _di_IHelpManager &Manager);
extern DELPHI_PACKAGE bool __fastcall GetHelpSystem(/* out */ _di_IHelpSystem &System)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetHelpSystem(/* out */ _di_IHelpSystem2 &System)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetHelpSystem(/* out */ _di_IHelpSystem3 &System)/* overload */;
}	/* namespace Helpintfs */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_HELPINTFS)
using namespace System::Helpintfs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_HelpintfsHPP
