// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ActnList.pas' rev: 35.00 (Windows)

#ifndef Vcl_ActnlistHPP
#define Vcl_ActnlistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <System.Actions.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ImgList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Actnlist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomActionList;
class DELPHICLASS TActionList;
class DELPHICLASS TActionLink;
class DELPHICLASS TShortCutList;
class DELPHICLASS TCustomAction;
class DELPHICLASS TAction;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomActionList : public System::Actions::TContainedActionList
{
	typedef System::Actions::TContainedActionList inherited;
	
private:
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	void __fastcall ImageListChange(System::TObject* Sender);
	
protected:
	bool FImageListChanging;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Change();
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	
public:
	__fastcall virtual TCustomActionList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionList();
	bool __fastcall IsShortCut(Winapi::Messages::TWMKey &Message);
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
};


class PASCALIMPLEMENTATION TActionList : public TCustomActionList
{
	typedef TCustomActionList inherited;
	
__published:
	__property Images;
	__property State = {default=0};
	__property OnChange;
	__property OnExecute;
	__property OnStateChange;
	__property OnUpdate;
public:
	/* TCustomActionList.Create */ inline __fastcall virtual TActionList(System::Classes::TComponent* AOwner) : TCustomActionList(AOwner) { }
	/* TCustomActionList.Destroy */ inline __fastcall virtual ~TActionList() { }
	
};


class PASCALIMPLEMENTATION TActionLink : public System::Actions::TContainedActionLink
{
	typedef System::Actions::TContainedActionLink inherited;
	
protected:
	virtual bool __fastcall IsImageNameLinked();
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TActionLink(System::TObject* AClient) : System::Actions::TContainedActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionLinkClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TShortCutList : public System::Actions::TCustomShortCutList
{
	typedef System::Actions::TCustomShortCutList inherited;
	
public:
	virtual int __fastcall Add(const System::UnicodeString S);
public:
	/* TStringList.Create */ inline __fastcall TShortCutList()/* overload */ : System::Actions::TCustomShortCutList() { }
	/* TStringList.Create */ inline __fastcall TShortCutList(bool OwnsObjects)/* overload */ : System::Actions::TCustomShortCutList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TShortCutList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Actions::TCustomShortCutList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TShortCutList(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Actions::TCustomShortCutList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TShortCutList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Actions::TCustomShortCutList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TShortCutList() { }
	
};


class PASCALIMPLEMENTATION TCustomAction : public System::Actions::TContainedAction
{
	typedef System::Actions::TContainedAction inherited;
	
private:
	System::Uitypes::TImageName FImageName;
	bool FImageIndexChanging;
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	TCustomActionList* __fastcall GetCustomActionList();
	void __fastcall SetCustomActionList(TCustomActionList* const Value);
	
protected:
	System::TObject* FImage;
	System::TObject* FMask;
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual System::Actions::TCustomShortCutList* __fastcall CreateShortCutList();
	virtual void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	virtual void __fastcall Change();
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TCustomAction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomAction();
	DYNAMIC bool __fastcall Execute();
	virtual bool __fastcall Update();
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName};
	__property TCustomActionList* ActionList = {read=GetCustomActionList, write=SetCustomActionList};
};


class PASCALIMPLEMENTATION TAction : public TCustomAction
{
	typedef TCustomAction inherited;
	
public:
	__fastcall virtual TAction(System::Classes::TComponent* AOwner);
	
__published:
	__property AutoCheck = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TAction() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Actnlist */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_ACTNLIST)
using namespace Vcl::Actnlist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ActnlistHPP
