// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Dialogs.pas' rev: 35.00 (Windows)

#ifndef Vcl_DialogsHPP
#define Vcl_DialogsHPP

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
#include <Winapi.CommDlg.hpp>
#include <Vcl.Printers.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
#include <objbase.h>
#include <ShObjIdl.h>

// Alias records for C++ code that cannot compile in STRICT mode yet.
#if defined(_VCL_ALIAS_RECORDS)
#if !defined(STRICT)
  #pragma alias "@Vcl@Dialogs@TSaveDialog@Execute$qqrpv"="@Vcl@Dialogs@TSaveDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TColorDialog@Execute$qqrpv"="@Vcl@Dialogs@TColorDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TPrintDialog@Execute$qqrpv"="@Vcl@Dialogs@TPrintDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TFindDialog@Execute$qqrpv"="@Vcl@Dialogs@TFindDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TPageSetupDialog@Execute$qqrpv"="@Vcl@Dialogs@TPageSetupDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TFontDialog@Execute$qqrpv"="@Vcl@Dialogs@TFontDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TCommonDialog@Execute$qqrpv"="@Vcl@Dialogs@TCommonDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TOpenDialog@Execute$qqrpv"="@Vcl@Dialogs@TOpenDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Dialogs@TPrinterSetupDialog@Execute$qqrpv"="@Vcl@Dialogs@TPrinterSetupDialog@Execute$qqrp6HWND__"
#endif
#endif
namespace Vcl
{
namespace Dialogs
{
using System::Uitypes::TOpenOption;
using System::Uitypes::TOpenOptions;
using System::Uitypes::TOpenOptionEx;
using System::Uitypes::TOpenOptionsEx;
}	/* namespace Dialogs */
}	/* namespace Vcl */
namespace Vcl { 
namespace Dialogs { 
#if defined(_DELPHI_STRING_UNICODE)
typedef _OFNOTIFYEXW TOFNotifyEx;
#else
typedef _OFNOTIFYEXA TOFNotifyEx;
#endif
}
}
namespace Vcl
{
namespace Dialogs
{
using System::Uitypes::TPrintRange;
using System::Uitypes::TPrintDialogOption;
using System::Uitypes::TPrintDialogOptions;
}	/* namespace Dialogs */
}	/* namespace Vcl */
namespace Vcl { namespace Dialogs { using Vcl::Printers::TPrinterOrientation; } }
namespace Vcl
{
namespace Dialogs
{
using System::Uitypes::TPageSetupDialogOption;
using System::Uitypes::TPageSetupDialogOptions;
using System::Uitypes::TPrinterKind;
using System::Uitypes::TPageType;
using System::Uitypes::TPageMeasureUnits;
}	/* namespace Dialogs */
}	/* namespace Vcl */
namespace Vcl
{
namespace Dialogs
{
using System::Uitypes::TMsgDlgBtn;
using System::Uitypes::TMsgDlgButtons;
using System::Uitypes::TMsgDlgType;
}	/* namespace Dialogs */
}	/* namespace Vcl */

namespace Vcl
{
namespace Dialogs
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCommonDialog;
class DELPHICLASS TOpenDialog;
class DELPHICLASS TSaveDialog;
class DELPHICLASS TColorDialog;
class DELPHICLASS TFontDialog;
class DELPHICLASS TPrinterSetupDialog;
class DELPHICLASS TPrintDialog;
class DELPHICLASS TPageSetupDialog;
class DELPHICLASS TFindDialog;
class DELPHICLASS TReplaceDialog;
class DELPHICLASS EPlatformVersionException;
class DELPHICLASS TFileTypeItem;
class DELPHICLASS TFileTypeItems;
class DELPHICLASS TFavoriteLinkItem;
class DELPHICLASS TFavoriteLinkItemsEnumerator;
class DELPHICLASS TFavoriteLinkItems;
class DELPHICLASS TCustomFileDialog;
class DELPHICLASS TCustomFileOpenDialog;
class DELPHICLASS TFileOpenDialog;
class DELPHICLASS TCustomFileSaveDialog;
class DELPHICLASS TFileSaveDialog;
class DELPHICLASS TTaskDialogProgressBar;
class DELPHICLASS TTaskDialogBaseButtonItem;
class DELPHICLASS TTaskDialogButtonItem;
class DELPHICLASS TTaskDialogRadioButtonItem;
class DELPHICLASS TTaskDialogButtonsEnumerator;
class DELPHICLASS TTaskDialogButtons;
class DELPHICLASS TCustomTaskDialog;
class DELPHICLASS TTaskDialog;
__interface DELPHIINTERFACE TInputCloseQueryFunc;
typedef System::DelphiInterface<TInputCloseQueryFunc> _di_TInputCloseQueryFunc;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCommonDialog : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FCtl3D;
	System::Classes::THelpContext FHelpContext;
	HWND FHandle;
	Vcl::Controls::TWinControl* FRedirector;
	NativeUInt FTemplateModule;
	System::Classes::TNotifyEvent FOnClose;
	System::Classes::TNotifyEvent FOnShow;
	void *FDefWndProc;
	void *FObjectInstance;
	System::WideChar *FTemplate;
	MESSAGE void __fastcall WMDestroy(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall WMInitDialog(Winapi::Messages::TWMInitDialog &Message);
	MESSAGE void __fastcall WMNCDestroy(Winapi::Messages::TWMNoParams &Message);
	void __fastcall MainWndProc(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall DoClose();
	DYNAMIC void __fastcall DoShow();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual HWND __fastcall GetHandle();
	virtual bool __fastcall MessageHook(Winapi::Messages::TMessage &Msg);
	virtual System::LongBool __fastcall TaskModalDialog(void * DialogFunc, void *DialogData);
	__property System::WideChar * Template = {read=FTemplate, write=FTemplate};
#ifndef _WIN64
	__property NativeUInt TemplateModule = {read=FTemplateModule, write=FTemplateModule, nodefault};
#else /* _WIN64 */
	__property NativeUInt TemplateModule = {read=FTemplateModule, write=FTemplateModule};
#endif /* _WIN64 */
	
public:
	__fastcall virtual TCommonDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonDialog();
	virtual bool __fastcall Execute()/* overload */;
	virtual bool __fastcall Execute(HWND ParentWnd) = 0 /* overload */;
	virtual void __fastcall DefaultHandler(void *Message);
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
	
__published:
	__property bool Ctl3D = {read=FCtl3D, write=FCtl3D, default=1};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=FHelpContext, default=0};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
};


enum DECLSPEC_DENUM TFileEditStyle : unsigned char { fsEdit, fsComboBox };

typedef void __fastcall (__closure *TIncludeItemEvent)(const TOFNotifyEx &OFN, bool &Include);

class PASCALIMPLEMENTATION TOpenDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
private:
	System::Classes::TStrings* FHistoryList;
	System::Uitypes::TOpenOptions FOptions;
	System::UnicodeString FFilter;
	int FFilterIndex;
	int FCurrentFilterIndex;
	System::UnicodeString FInitialDir;
	System::UnicodeString FTitle;
	System::UnicodeString FDefaultExt;
	System::Sysutils::TFileName FFileName;
	System::Classes::TStrings* FFiles;
	TFileEditStyle FFileEditStyle;
	System::Classes::TNotifyEvent FOnSelectionChange;
	System::Classes::TNotifyEvent FOnFolderChange;
	System::Classes::TNotifyEvent FOnTypeChange;
	Vcl::Forms::TCloseQueryEvent FOnCanClose;
	TIncludeItemEvent FOnIncludeItem;
	System::Uitypes::TOpenOptionsEx FOptionsEx;
	System::TObject* FInternalWrapper;
	System::Sysutils::TFileName __fastcall GetFileName();
	System::Classes::TStrings* __fastcall GetFiles();
	int __fastcall GetFilterIndex();
	System::UnicodeString __fastcall GetInitialDir();
	void __fastcall ReadFileEditStyle(System::Classes::TReader* Reader);
	void __fastcall SetFileName(System::Sysutils::TFileName Value);
	void __fastcall SetHistoryList(System::Classes::TStrings* Value);
	void __fastcall SetInitialDir(const System::UnicodeString Value);
	
protected:
	bool __fastcall CanClose(tagOFNW &OpenFileName);
	DYNAMIC bool __fastcall DoCanClose();
	DYNAMIC void __fastcall DoSelectionChange();
	DYNAMIC void __fastcall DoFolderChange();
	DYNAMIC void __fastcall DoTypeChange();
	DYNAMIC void __fastcall DoIncludeItem(const TOFNotifyEx &OFN, bool &Include);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall GetFileNames(tagOFNW &OpenFileName);
	virtual HWND __fastcall GetHandle();
	virtual System::Types::TRect __fastcall GetStaticRect();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	System::LongBool __fastcall DoExecute(void * Func)/* overload */;
	System::LongBool __fastcall DoExecute(void * Func, HWND ParentWnd)/* overload */;
	
public:
	__fastcall virtual TOpenDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOpenDialog();
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	__property TFileEditStyle FileEditStyle = {read=FFileEditStyle, write=FFileEditStyle, nodefault};
	__property System::Classes::TStrings* Files = {read=GetFiles};
	__property System::Classes::TStrings* HistoryList = {read=FHistoryList, write=SetHistoryList};
	
__published:
	__property System::UnicodeString DefaultExt = {read=FDefaultExt, write=FDefaultExt};
	__property System::Sysutils::TFileName FileName = {read=GetFileName, write=SetFileName};
	__property System::UnicodeString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=GetFilterIndex, write=FFilterIndex, default=1};
	__property System::UnicodeString InitialDir = {read=GetInitialDir, write=SetInitialDir};
	__property System::Uitypes::TOpenOptions Options = {read=FOptions, write=FOptions, default=524292};
	__property System::Uitypes::TOpenOptionsEx OptionsEx = {read=FOptionsEx, write=FOptionsEx, default=0};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property Vcl::Forms::TCloseQueryEvent OnCanClose = {read=FOnCanClose, write=FOnCanClose};
	__property System::Classes::TNotifyEvent OnFolderChange = {read=FOnFolderChange, write=FOnFolderChange};
	__property System::Classes::TNotifyEvent OnSelectionChange = {read=FOnSelectionChange, write=FOnSelectionChange};
	__property System::Classes::TNotifyEvent OnTypeChange = {read=FOnTypeChange, write=FOnTypeChange};
	__property TIncludeItemEvent OnIncludeItem = {read=FOnIncludeItem, write=FOnIncludeItem};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


class PASCALIMPLEMENTATION TSaveDialog : public TOpenDialog
{
	typedef TOpenDialog inherited;
	
public:
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
public:
	/* TOpenDialog.Create */ inline __fastcall virtual TSaveDialog(System::Classes::TComponent* AOwner) : TOpenDialog(AOwner) { }
	/* TOpenDialog.Destroy */ inline __fastcall virtual ~TSaveDialog() { }
	
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


enum DECLSPEC_DENUM TColorDialogOption : unsigned char { cdFullOpen, cdPreventFullOpen, cdShowHelp, cdSolidColor, cdAnyColor };

typedef System::Set<TColorDialogOption, TColorDialogOption::cdFullOpen, TColorDialogOption::cdAnyColor> TColorDialogOptions;

typedef System::StaticArray<int, 16> TCustomColors;

class PASCALIMPLEMENTATION TColorDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
private:
	System::Uitypes::TColor FColor;
	TColorDialogOptions FOptions;
	System::Classes::TStrings* FCustomColors;
	void __fastcall SetCustomColors(System::Classes::TStrings* Value);
	
public:
	__fastcall virtual TColorDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TColorDialog();
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, default=0};
	__property Ctl3D = {default=1};
	__property System::Classes::TStrings* CustomColors = {read=FCustomColors, write=SetCustomColors};
	__property TColorDialogOptions Options = {read=FOptions, write=FOptions, default=0};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


enum DECLSPEC_DENUM TFontDialogOption : unsigned char { fdAnsiOnly, fdTrueTypeOnly, fdEffects, fdFixedPitchOnly, fdForceFontExist, fdNoFaceSel, fdNoOEMFonts, fdNoSimulations, fdNoSizeSel, fdNoStyleSel, fdNoVectorFonts, fdShowHelp, fdWysiwyg, fdLimitSize, fdScalableOnly, fdApplyButton };

typedef System::Set<TFontDialogOption, TFontDialogOption::fdAnsiOnly, TFontDialogOption::fdApplyButton> TFontDialogOptions;

enum DECLSPEC_DENUM TFontDialogDevice : unsigned char { fdScreen, fdPrinter, fdBoth };

typedef void __fastcall (__closure *TFDApplyEvent)(System::TObject* Sender, HWND Wnd);

class PASCALIMPLEMENTATION TFontDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	TFontDialogDevice FDevice;
	TFontDialogOptions FOptions;
	TFDApplyEvent FOnApply;
	int FMinFontSize;
	int FMaxFontSize;
	bool FFontCharsetModified;
	bool FFontColorModified;
	void __fastcall DoApply(HWND Wnd);
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	void __fastcall UpdateFromLogFont(const tagLOGFONTW &LogFont);
	
protected:
	DYNAMIC void __fastcall Apply(HWND Wnd);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TFontDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFontDialog();
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	
__published:
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property TFontDialogDevice Device = {read=FDevice, write=FDevice, default=0};
	__property int MinFontSize = {read=FMinFontSize, write=FMinFontSize, default=0};
	__property int MaxFontSize = {read=FMaxFontSize, write=FMaxFontSize, default=0};
	__property TFontDialogOptions Options = {read=FOptions, write=FOptions, default=4};
	__property TFDApplyEvent OnApply = {read=FOnApply, write=FOnApply};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


class PASCALIMPLEMENTATION TPrinterSetupDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
public:
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
public:
	/* TCommonDialog.Create */ inline __fastcall virtual TPrinterSetupDialog(System::Classes::TComponent* AOwner) : TCommonDialog(AOwner) { }
	/* TCommonDialog.Destroy */ inline __fastcall virtual ~TPrinterSetupDialog() { }
	
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


class PASCALIMPLEMENTATION TPrintDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
private:
	int FFromPage;
	int FToPage;
	bool FCollate;
	System::Uitypes::TPrintDialogOptions FOptions;
	bool FPrintToFile;
	System::Uitypes::TPrintRange FPrintRange;
	int FMinPage;
	int FMaxPage;
	int FCopies;
	void __fastcall SetNumCopies(int Value);
	
public:
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	
__published:
	__property bool Collate = {read=FCollate, write=FCollate, default=0};
	__property int Copies = {read=FCopies, write=SetNumCopies, default=0};
	__property int FromPage = {read=FFromPage, write=FFromPage, default=0};
	__property int MinPage = {read=FMinPage, write=FMinPage, default=0};
	__property int MaxPage = {read=FMaxPage, write=FMaxPage, default=0};
	__property System::Uitypes::TPrintDialogOptions Options = {read=FOptions, write=FOptions, default=0};
	__property bool PrintToFile = {read=FPrintToFile, write=FPrintToFile, default=0};
	__property System::Uitypes::TPrintRange PrintRange = {read=FPrintRange, write=FPrintRange, default=0};
	__property int ToPage = {read=FToPage, write=FToPage, default=0};
public:
	/* TCommonDialog.Create */ inline __fastcall virtual TPrintDialog(System::Classes::TComponent* AOwner) : TCommonDialog(AOwner) { }
	/* TCommonDialog.Destroy */ inline __fastcall virtual ~TPrintDialog() { }
	
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


typedef void __fastcall (__closure *TPageSetupBeforePaintEvent)(System::TObject* Sender, const short PaperSize, const System::Uitypes::TPrinterOrientation Orientation, const System::Uitypes::TPageType PageType, bool &DoneDrawing);

typedef void __fastcall (__closure *TPaintPageEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &PageRect, bool &DoneDrawing);

class PASCALIMPLEMENTATION TPageSetupDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
private:
	System::Uitypes::TPageSetupDialogOptions FOptions;
	int FMinMarginLeft;
	int FMinMarginTop;
	int FMinMarginRight;
	int FMinMarginBottom;
	int FMarginLeft;
	int FMarginTop;
	int FMarginRight;
	int FMarginBottom;
	int FPageWidth;
	int FPageHeight;
	tagPSDW FPageSetupDlgRec;
	TPageSetupBeforePaintEvent FBeforePaint;
	System::Uitypes::TPageMeasureUnits FUnits;
	TPaintPageEvent FOnDrawRetAddress;
	TPaintPageEvent FOnDrawMinMargin;
	TPaintPageEvent FOnDrawEnvStamp;
	TPaintPageEvent FOnDrawFullPage;
	TPaintPageEvent FOnDrawGreekText;
	TPaintPageEvent FOnDrawMargin;
	
public:
	__fastcall virtual TPageSetupDialog(System::Classes::TComponent* AOwner);
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	bool __fastcall GetDefaults();
	__property tagPSDW PageSetupDlgRec = {read=FPageSetupDlgRec};
	
__published:
	__property int MinMarginLeft = {read=FMinMarginLeft, write=FMinMarginLeft, nodefault};
	__property int MinMarginTop = {read=FMinMarginTop, write=FMinMarginTop, nodefault};
	__property int MinMarginRight = {read=FMinMarginRight, write=FMinMarginRight, nodefault};
	__property int MinMarginBottom = {read=FMinMarginBottom, write=FMinMarginBottom, nodefault};
	__property int MarginLeft = {read=FMarginLeft, write=FMarginLeft, nodefault};
	__property int MarginTop = {read=FMarginTop, write=FMarginTop, nodefault};
	__property int MarginRight = {read=FMarginRight, write=FMarginRight, nodefault};
	__property int MarginBottom = {read=FMarginBottom, write=FMarginBottom, nodefault};
	__property System::Uitypes::TPageSetupDialogOptions Options = {read=FOptions, write=FOptions, default=1};
	__property int PageWidth = {read=FPageWidth, write=FPageWidth, nodefault};
	__property int PageHeight = {read=FPageHeight, write=FPageHeight, nodefault};
	__property System::Uitypes::TPageMeasureUnits Units = {read=FUnits, write=FUnits, default=0};
	__property TPageSetupBeforePaintEvent BeforePaint = {read=FBeforePaint, write=FBeforePaint};
	__property TPaintPageEvent OnDrawFullPage = {read=FOnDrawFullPage, write=FOnDrawFullPage};
	__property TPaintPageEvent OnDrawMinMargin = {read=FOnDrawMinMargin, write=FOnDrawMinMargin};
	__property TPaintPageEvent OnDrawMargin = {read=FOnDrawMargin, write=FOnDrawMargin};
	__property TPaintPageEvent OnDrawGreekText = {read=FOnDrawGreekText, write=FOnDrawGreekText};
	__property TPaintPageEvent OnDrawEnvStamp = {read=FOnDrawEnvStamp, write=FOnDrawEnvStamp};
	__property TPaintPageEvent OnDrawRetAddress = {read=FOnDrawRetAddress, write=FOnDrawRetAddress};
public:
	/* TCommonDialog.Destroy */ inline __fastcall virtual ~TPageSetupDialog() { }
	
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


enum DECLSPEC_DENUM TFindOption : unsigned char { frDown, frFindNext, frHideMatchCase, frHideWholeWord, frHideUpDown, frMatchCase, frDisableMatchCase, frDisableUpDown, frDisableWholeWord, frReplace, frReplaceAll, frWholeWord, frShowHelp };

typedef System::Set<TFindOption, TFindOption::frDown, TFindOption::frShowHelp> TFindOptions;

typedef HWND __stdcall (*TFindReplaceFunc)(tagFINDREPLACEW &FindReplace);

class PASCALIMPLEMENTATION TFindDialog : public TCommonDialog
{
	typedef TCommonDialog inherited;
	
private:
	TFindOptions FOptions;
	System::Types::TPoint FPosition;
	System::Classes::TNotifyEvent FOnFind;
	System::Classes::TNotifyEvent FOnReplace;
	TFindReplaceFunc FFindReplaceFunc;
	HWND FFindHandle;
	tagFINDREPLACEW FFindReplace;
	System::StaticArray<System::WideChar, 256> FFindText;
	System::StaticArray<System::WideChar, 256> FReplaceText;
	System::UnicodeString __fastcall GetFindText();
	int __fastcall GetLeft();
	System::Types::TPoint __fastcall GetPosition();
	System::UnicodeString __fastcall GetReplaceText();
	int __fastcall GetTop();
	void __fastcall SetFindText(const System::UnicodeString Value);
	void __fastcall SetLeft(int Value);
	void __fastcall SetPosition(const System::Types::TPoint &Value);
	void __fastcall SetReplaceText(const System::UnicodeString Value);
	void __fastcall SetTop(int Value);
	__property System::UnicodeString ReplaceText = {read=GetReplaceText, write=SetReplaceText};
	__property System::Classes::TNotifyEvent OnReplace = {read=FOnReplace, write=FOnReplace};
	
protected:
	virtual bool __fastcall MessageHook(Winapi::Messages::TMessage &Msg);
	DYNAMIC void __fastcall Find();
	DYNAMIC void __fastcall Replace();
	
public:
	__fastcall virtual TFindDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFindDialog();
	void __fastcall CloseDialog();
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property System::Types::TPoint Position = {read=GetPosition, write=SetPosition};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
	
__published:
	__property System::UnicodeString FindText = {read=GetFindText, write=SetFindText};
	__property TFindOptions Options = {read=FOptions, write=FOptions, default=1};
	__property System::Classes::TNotifyEvent OnFind = {read=FOnFind, write=FOnFind};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return TCommonDialog::Execute(); }
	
};


class PASCALIMPLEMENTATION TReplaceDialog : public TFindDialog
{
	typedef TFindDialog inherited;
	
public:
	__fastcall virtual TReplaceDialog(System::Classes::TComponent* AOwner);
	
__published:
	__property ReplaceText = {default=0};
	__property OnReplace;
public:
	/* TFindDialog.Destroy */ inline __fastcall virtual ~TReplaceDialog() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPlatformVersionException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPlatformVersionException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPlatformVersionException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPlatformVersionException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPlatformVersionException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPlatformVersionException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPlatformVersionException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPlatformVersionException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPlatformVersionException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPlatformVersionException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPlatformVersionException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPlatformVersionException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPlatformVersionException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPlatformVersionException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFileDialogOption : unsigned char { fdoOverWritePrompt, fdoStrictFileTypes, fdoNoChangeDir, fdoPickFolders, fdoForceFileSystem, fdoAllNonStorageItems, fdoNoValidate, fdoAllowMultiSelect, fdoPathMustExist, fdoFileMustExist, fdoCreatePrompt, fdoShareAware, fdoNoReadOnlyReturn, fdoNoTestFileCreate, fdoHideMRUPlaces, fdoHidePinnedPlaces, fdoNoDereferenceLinks, fdoDontAddToRecent, fdoForceShowHidden, fdoDefaultNoMiniMode, fdoForcePreviewPaneOn };

typedef System::Set<TFileDialogOption, TFileDialogOption::fdoOverWritePrompt, TFileDialogOption::fdoForcePreviewPaneOn> TFileDialogOptions;

enum DECLSPEC_DENUM TFileDialogOverwriteResponse : unsigned char { forDefault, forAccept, forRefuse };

enum DECLSPEC_DENUM TFileDialogShareViolationResponse : unsigned char { fsrDefault, fsrAccept, fsrRefuse };

typedef void __fastcall (__closure *TFileDialogCloseEvent)(System::TObject* Sender, bool &CanClose);

typedef void __fastcall (__closure *TFileDialogFolderChangingEvent)(System::TObject* Sender, bool &CanChange);

typedef void __fastcall (__closure *TFileDialogOverwriteEvent)(System::TObject* Sender, TFileDialogOverwriteResponse &Response);

typedef void __fastcall (__closure *TFileDialogShareViolationEvent)(System::TObject* Sender, TFileDialogShareViolationResponse &Response);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFileTypeItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FDisplayName;
	System::WideChar *FDisplayNameWStr;
	System::UnicodeString FFileMask;
	System::WideChar *FFileMaskWStr;
	System::WideChar * __fastcall GetDisplayNameWStr();
	System::WideChar * __fastcall GetFileMaskWStr();
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TFileTypeItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TFileTypeItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::WideChar * DisplayNameWStr = {read=GetDisplayNameWStr};
	__property System::WideChar * FileMaskWStr = {read=GetFileMaskWStr};
	
__published:
	__property System::UnicodeString DisplayName = {read=FDisplayName, write=FDisplayName};
	__property System::UnicodeString FileMask = {read=FFileMask, write=FFileMask};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFileTypeItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFileTypeItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TFileTypeItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TFileTypeItem* const Value);
	
public:
	HIDESBASE TFileTypeItem* __fastcall Add();
	Winapi::Shlobj::TComdlgFilterSpecArray __fastcall FilterSpecArray();
	__property TFileTypeItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Create */ inline __fastcall TFileTypeItems(System::Classes::TCollectionItemClass ItemClass) : System::Classes::TCollection(ItemClass) { }
	/* TCollection.Destroy */ inline __fastcall virtual ~TFileTypeItems() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFavoriteLinkItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FLocation;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString Location = {read=FLocation, write=FLocation};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TFavoriteLinkItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFavoriteLinkItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFavoriteLinkItemsEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TFavoriteLinkItems* FCollection;
	
public:
	__fastcall TFavoriteLinkItemsEnumerator(TFavoriteLinkItems* ACollection);
	TFavoriteLinkItem* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TFavoriteLinkItem* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFavoriteLinkItemsEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFavoriteLinkItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFavoriteLinkItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TFavoriteLinkItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TFavoriteLinkItem* const Value);
	
public:
	HIDESBASE TFavoriteLinkItem* __fastcall Add();
	HIDESBASE TFavoriteLinkItemsEnumerator* __fastcall GetEnumerator();
	__property TFavoriteLinkItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Create */ inline __fastcall TFavoriteLinkItems(System::Classes::TCollectionItemClass ItemClass) : System::Classes::TCollection(ItemClass) { }
	/* TCollection.Destroy */ inline __fastcall virtual ~TFavoriteLinkItems() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomFileDialog : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FClientGuid;
	System::UnicodeString FDefaultExtension;
	System::UnicodeString FDefaultFolder;
	_di_IFileDialog FDialog;
	TFavoriteLinkItems* FFavoriteLinks;
	System::Sysutils::TFileName FFileName;
	System::UnicodeString FFileNameLabel;
	System::Classes::TStrings* FFiles;
	unsigned FFileTypeIndex;
	TFileTypeItems* FFileTypes;
	HWND FHandle;
	System::UnicodeString FOkButtonLabel;
	TFileDialogOptions FOptions;
	_di_IShellItem FShellItem;
	_di_IShellItemArray FShellItems;
	System::UnicodeString FTitle;
	System::Classes::TNotifyEvent FOnExecute;
	TFileDialogCloseEvent FOnFileOkClick;
	System::Classes::TNotifyEvent FOnFolderChange;
	TFileDialogFolderChangingEvent FOnFolderChanging;
	TFileDialogOverwriteEvent FOnOverwrite;
	System::Classes::TNotifyEvent FOnSelectionChange;
	TFileDialogShareViolationEvent FOnShareViolation;
	System::Classes::TNotifyEvent FOnTypeChange;
	System::Sysutils::TFileName FActualFolder;
	System::UnicodeString __fastcall GetDefaultFolder();
	System::Sysutils::TFileName __fastcall GetFileName();
	System::Classes::TStrings* __fastcall GetFiles();
	void __fastcall GetWindowHandle();
	void __fastcall SetClientGuid(const System::UnicodeString Value);
	void __fastcall SetDefaultFolder(const System::UnicodeString Value);
	void __fastcall SetFavoriteLinks(TFavoriteLinkItems* const Value);
	void __fastcall SetFileName(const System::Sysutils::TFileName Value);
	void __fastcall SetFileTypes(TFileTypeItems* const Value);
	void __fastcall SaveActualFolder(System::TObject* Sender);
	
protected:
	virtual _di_IFileDialog __fastcall CreateFileDialog() = 0 ;
	DYNAMIC void __fastcall DoOnExecute();
	DYNAMIC bool __fastcall DoOnFileOkClick();
	DYNAMIC void __fastcall DoOnFolderChange();
	DYNAMIC bool __fastcall DoOnFolderChanging();
	DYNAMIC void __fastcall DoOnOverwrite(TFileDialogOverwriteResponse &Response);
	DYNAMIC void __fastcall DoOnSelectionChange();
	DYNAMIC void __fastcall DoOnShareViolation(TFileDialogShareViolationResponse &Response);
	DYNAMIC void __fastcall DoOnTypeChange();
	DYNAMIC HRESULT __fastcall GetFileNames(_di_IShellItemArray Items);
	DYNAMIC HRESULT __fastcall GetItemName(_di_IShellItem Item, System::Sysutils::TFileName &ItemName);
	virtual HRESULT __fastcall GetResults();
	
protected:
	DYNAMIC HRESULT __fastcall FileOkClick();
	DYNAMIC HRESULT __fastcall FolderChange();
	DYNAMIC HRESULT __fastcall FolderChanging(_di_IShellItem psiFolder);
	DYNAMIC HRESULT __fastcall Overwrite(_di_IShellItem psiFile, unsigned &Response);
	DYNAMIC HRESULT __fastcall SelectionChange();
	DYNAMIC HRESULT __fastcall ShareViolation(_di_IShellItem psiFile, unsigned &Response);
	DYNAMIC HRESULT __fastcall TypeChange();
	
public:
	__fastcall virtual TCustomFileDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomFileDialog();
	virtual bool __fastcall Execute()/* overload */;
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	__property System::UnicodeString ClientGuid = {read=FClientGuid, write=SetClientGuid};
	__property System::UnicodeString DefaultExtension = {read=FDefaultExtension, write=FDefaultExtension};
	__property System::UnicodeString DefaultFolder = {read=GetDefaultFolder, write=SetDefaultFolder};
	__property _di_IFileDialog Dialog = {read=FDialog};
	__property TFavoriteLinkItems* FavoriteLinks = {read=FFavoriteLinks, write=SetFavoriteLinks};
	__property System::Sysutils::TFileName FileName = {read=GetFileName, write=SetFileName};
	__property System::UnicodeString FileNameLabel = {read=FFileNameLabel, write=FFileNameLabel};
	__property System::Classes::TStrings* Files = {read=GetFiles};
	__property TFileTypeItems* FileTypes = {read=FFileTypes, write=SetFileTypes};
	__property unsigned FileTypeIndex = {read=FFileTypeIndex, write=FFileTypeIndex, default=1};
#ifndef _WIN64
	__property HWND Handle = {read=FHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=FHandle};
#endif /* _WIN64 */
	__property System::UnicodeString OkButtonLabel = {read=FOkButtonLabel, write=FOkButtonLabel};
	__property TFileDialogOptions Options = {read=FOptions, write=FOptions, nodefault};
	__property _di_IShellItem ShellItem = {read=FShellItem};
	__property _di_IShellItemArray ShellItems = {read=FShellItems};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property System::Classes::TNotifyEvent OnExecute = {read=FOnExecute, write=FOnExecute};
	__property TFileDialogCloseEvent OnFileOkClick = {read=FOnFileOkClick, write=FOnFileOkClick};
	__property System::Classes::TNotifyEvent OnFolderChange = {read=FOnFolderChange, write=FOnFolderChange};
	__property TFileDialogFolderChangingEvent OnFolderChanging = {read=FOnFolderChanging, write=FOnFolderChanging};
	__property TFileDialogOverwriteEvent OnOverwrite = {read=FOnOverwrite, write=FOnOverwrite};
	__property System::Classes::TNotifyEvent OnSelectionChange = {read=FOnSelectionChange, write=FOnSelectionChange};
	__property TFileDialogShareViolationEvent OnShareViolation = {read=FOnShareViolation, write=FOnShareViolation};
	__property System::Classes::TNotifyEvent OnTypeChange = {read=FOnTypeChange, write=FOnTypeChange};
};


class PASCALIMPLEMENTATION TCustomFileOpenDialog : public TCustomFileDialog
{
	typedef TCustomFileDialog inherited;
	
protected:
	virtual _di_IFileDialog __fastcall CreateFileDialog();
	virtual HRESULT __fastcall GetResults();
	
protected:
	DYNAMIC HRESULT __fastcall SelectionChange();
public:
	/* TCustomFileDialog.Create */ inline __fastcall virtual TCustomFileOpenDialog(System::Classes::TComponent* AOwner) : TCustomFileDialog(AOwner) { }
	/* TCustomFileDialog.Destroy */ inline __fastcall virtual ~TCustomFileOpenDialog() { }
	
};


class PASCALIMPLEMENTATION TFileOpenDialog : public TCustomFileOpenDialog
{
	typedef TCustomFileOpenDialog inherited;
	
__published:
	__property ClientGuid = {default=0};
	__property DefaultExtension = {default=0};
	__property DefaultFolder = {default=0};
	__property FavoriteLinks;
	__property FileName = {default=0};
	__property FileNameLabel = {default=0};
	__property FileTypes;
	__property FileTypeIndex = {default=1};
	__property OkButtonLabel = {default=0};
	__property Options;
	__property Title = {default=0};
	__property OnExecute;
	__property OnFileOkClick;
	__property OnFolderChange;
	__property OnFolderChanging;
	__property OnSelectionChange;
	__property OnShareViolation;
	__property OnTypeChange;
public:
	/* TCustomFileDialog.Create */ inline __fastcall virtual TFileOpenDialog(System::Classes::TComponent* AOwner) : TCustomFileOpenDialog(AOwner) { }
	/* TCustomFileDialog.Destroy */ inline __fastcall virtual ~TFileOpenDialog() { }
	
};


class PASCALIMPLEMENTATION TCustomFileSaveDialog : public TCustomFileDialog
{
	typedef TCustomFileDialog inherited;
	
protected:
	virtual _di_IFileDialog __fastcall CreateFileDialog();
public:
	/* TCustomFileDialog.Create */ inline __fastcall virtual TCustomFileSaveDialog(System::Classes::TComponent* AOwner) : TCustomFileDialog(AOwner) { }
	/* TCustomFileDialog.Destroy */ inline __fastcall virtual ~TCustomFileSaveDialog() { }
	
};


class PASCALIMPLEMENTATION TFileSaveDialog : public TCustomFileSaveDialog
{
	typedef TCustomFileSaveDialog inherited;
	
__published:
	__property ClientGuid = {default=0};
	__property DefaultExtension = {default=0};
	__property DefaultFolder = {default=0};
	__property FavoriteLinks;
	__property FileName = {default=0};
	__property FileNameLabel = {default=0};
	__property FileTypes;
	__property FileTypeIndex = {default=1};
	__property OkButtonLabel = {default=0};
	__property Options;
	__property Title = {default=0};
	__property OnExecute;
	__property OnFileOkClick;
	__property OnFolderChange;
	__property OnFolderChanging;
	__property OnOverwrite;
	__property OnSelectionChange;
	__property OnShareViolation;
	__property OnTypeChange;
public:
	/* TCustomFileDialog.Create */ inline __fastcall virtual TFileSaveDialog(System::Classes::TComponent* AOwner) : TCustomFileSaveDialog(AOwner) { }
	/* TCustomFileDialog.Destroy */ inline __fastcall virtual ~TFileSaveDialog() { }
	
};


enum DECLSPEC_DENUM TTaskDialogFlag : unsigned char { tfEnableHyperlinks, tfUseHiconMain, tfUseHiconFooter, tfAllowDialogCancellation, tfUseCommandLinks, tfUseCommandLinksNoIcon, tfExpandFooterArea, tfExpandedByDefault, tfVerificationFlagChecked, tfShowProgressBar, tfShowMarqueeProgressBar, tfCallbackTimer, tfPositionRelativeToWindow, tfRtlLayout, tfNoDefaultRadioButton, tfCanBeMinimized, tfSizeToContent };

typedef System::Set<TTaskDialogFlag, TTaskDialogFlag::tfEnableHyperlinks, TTaskDialogFlag::tfSizeToContent> TTaskDialogFlags;

enum DECLSPEC_DENUM TTaskDialogCommonButton : unsigned char { tcbOk, tcbYes, tcbNo, tcbCancel, tcbRetry, tcbClose };

typedef System::Set<TTaskDialogCommonButton, TTaskDialogCommonButton::tcbOk, TTaskDialogCommonButton::tcbClose> TTaskDialogCommonButtons;

typedef int TTaskDialogIcon;

using Vcl::Comctrls::TProgressBarState;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTaskDialogProgressBar : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomTaskDialog* FClient;
	unsigned FMarqueeSpeed;
	int FMax;
	int FMin;
	int FPosition;
	Vcl::Comctrls::TProgressBarState FState;
	void __fastcall SetMarqueeSpeed(const unsigned Value);
	void __fastcall SetMax(const int Value);
	void __fastcall SetMin(const int Value);
	void __fastcall SetPosition(const int Value);
	void __fastcall SetState(const Vcl::Comctrls::TProgressBarState Value);
	
public:
	__fastcall TTaskDialogProgressBar(TCustomTaskDialog* AClient);
	void __fastcall Initialize();
	
__published:
	__property unsigned MarqueeSpeed = {read=FMarqueeSpeed, write=SetMarqueeSpeed, default=0};
	__property int Max = {read=FMax, write=SetMax, default=100};
	__property int Min = {read=FMin, write=SetMin, default=0};
	__property int Position = {read=FPosition, write=SetPosition, default=0};
	__property Vcl::Comctrls::TProgressBarState State = {read=FState, write=SetState, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TTaskDialogProgressBar() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTaskDialogBaseButtonItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FCaption;
	TCustomTaskDialog* FClient;
	bool FEnabled;
	System::Uitypes::TModalResult FModalResult;
	System::WideChar *FTextWStr;
	bool __fastcall GetDefault();
	System::WideChar * __fastcall GetTextWStr();
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetDefault(const bool Value);
	void __fastcall SetEnabled(const bool Value);
	
protected:
	virtual void __fastcall DoButtonClick();
	virtual void __fastcall DoSetEnabled();
	virtual System::UnicodeString __fastcall GetButtonText();
	__property TCustomTaskDialog* Client = {read=FClient};
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TTaskDialogBaseButtonItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TTaskDialogBaseButtonItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Click();
	virtual void __fastcall SetInitialState();
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, nodefault};
	__property System::WideChar * TextWStr = {read=GetTextWStr};
	
__published:
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property bool Default = {read=GetDefault, write=SetDefault, default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTaskDialogButtonItem : public TTaskDialogBaseButtonItem
{
	typedef TTaskDialogBaseButtonItem inherited;
	
private:
	System::UnicodeString FCommandLinkHint;
	bool FElevationRequired;
	void __fastcall DoSetElevationRequired();
	void __fastcall SetElevationRequired(const bool Value);
	
protected:
	virtual System::UnicodeString __fastcall GetButtonText();
	
public:
	__fastcall virtual TTaskDialogButtonItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall SetInitialState();
	
__published:
	__property System::UnicodeString CommandLinkHint = {read=FCommandLinkHint, write=FCommandLinkHint};
	__property bool ElevationRequired = {read=FElevationRequired, write=SetElevationRequired, default=0};
	__property ModalResult;
public:
	/* TTaskDialogBaseButtonItem.Destroy */ inline __fastcall virtual ~TTaskDialogButtonItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTaskDialogRadioButtonItem : public TTaskDialogBaseButtonItem
{
	typedef TTaskDialogBaseButtonItem inherited;
	
protected:
	virtual void __fastcall DoButtonClick();
	virtual void __fastcall DoSetEnabled();
	
public:
	__fastcall virtual TTaskDialogRadioButtonItem(System::Classes::TCollection* Collection);
public:
	/* TTaskDialogBaseButtonItem.Destroy */ inline __fastcall virtual ~TTaskDialogRadioButtonItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::DynamicArray<TASKDIALOG_BUTTON> TTaskDialogButtonList;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTaskDialogButtonsEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TTaskDialogButtons* FCollection;
	
public:
	__fastcall TTaskDialogButtonsEnumerator(TTaskDialogButtons* ACollection);
	TTaskDialogBaseButtonItem* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TTaskDialogBaseButtonItem* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTaskDialogButtonsEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTaskDialogButtons : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TTaskDialogBaseButtonItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TTaskDialogButtonList FButtonList;
	TASKDIALOG_BUTTON *FButtonListPtr;
	TTaskDialogBaseButtonItem* FDefaultButton;
	HIDESBASE TTaskDialogBaseButtonItem* __fastcall GetItem(int Index);
	void __fastcall SetDefaultButton(TTaskDialogBaseButtonItem* const Value);
	HIDESBASE void __fastcall SetItem(int Index, TTaskDialogBaseButtonItem* const Value);
	
public:
	__fastcall virtual ~TTaskDialogButtons();
	HIDESBASE TTaskDialogBaseButtonItem* __fastcall Add();
	Winapi::Commctrl::PTaskDialogButton __fastcall Buttons();
	TTaskDialogBaseButtonItem* __fastcall FindButton(System::Uitypes::TModalResult AModalResult);
	HIDESBASE TTaskDialogButtonsEnumerator* __fastcall GetEnumerator();
	DYNAMIC void __fastcall SetInitialState();
	__property TTaskDialogBaseButtonItem* DefaultButton = {read=FDefaultButton, write=SetDefaultButton};
	__property TTaskDialogBaseButtonItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TTaskDialogButtons(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TTaskDlgClickEvent)(System::TObject* Sender, System::Uitypes::TModalResult ModalResult, bool &CanClose);

typedef void __fastcall (__closure *TTaskDlgTimerEvent)(System::TObject* Sender, unsigned TickCount, bool &Reset);

class PASCALIMPLEMENTATION TCustomTaskDialog : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TTaskDialogButtonItem* FButton;
	TTaskDialogButtons* FButtons;
	System::UnicodeString FCaption;
	TTaskDialogCommonButtons FCommonButtons;
	Vcl::Graphics::TIcon* FCustomFooterIcon;
	Vcl::Graphics::TIcon* FCustomMainIcon;
	TTaskDialogCommonButton FDefaultButton;
	System::UnicodeString FExpandButtonCaption;
	bool FExpanded;
	System::UnicodeString FExpandedText;
	TTaskDialogFlags FFlags;
	TTaskDialogIcon FFooterIcon;
	System::UnicodeString FFooterText;
	HWND FHandle;
	int FHelpContext;
	TTaskDialogIcon FMainIcon;
	System::Uitypes::TModalResult FModalResult;
	TTaskDialogProgressBar* FProgressBar;
	TTaskDialogRadioButtonItem* FRadioButton;
	TTaskDialogButtons* FRadioButtons;
	System::UnicodeString FText;
	System::UnicodeString FTitle;
	System::UnicodeString FURL;
	System::UnicodeString FVerificationText;
	TTaskDlgClickEvent FOnButtonClicked;
	System::Classes::TNotifyEvent FOnDialogConstructed;
	System::Classes::TNotifyEvent FOnDialogCreated;
	System::Classes::TNotifyEvent FOnDialogDestroyed;
	System::Classes::TNotifyEvent FOnExpanded;
	System::Classes::TNotifyEvent FOnHyperlinkClicked;
	System::Classes::TNotifyEvent FOnNavigated;
	System::Classes::TNotifyEvent FOnRadioButtonClicked;
	TTaskDlgTimerEvent FOnTimer;
	System::Classes::TNotifyEvent FOnVerificationClicked;
	void __fastcall SetButtons(TTaskDialogButtons* const Value);
	void __fastcall SetExpandedText(const System::UnicodeString Value);
	void __fastcall SetFooterIcon(const TTaskDialogIcon Value);
	void __fastcall SetFooterText(const System::UnicodeString Value);
	void __fastcall SetFlags(const TTaskDialogFlags Value);
	void __fastcall SetMainIcon(const TTaskDialogIcon Value);
	void __fastcall SetRadioButtons(TTaskDialogButtons* const Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetTitle(const System::UnicodeString Value);
	void __fastcall SetCustomFooterIcon(Vcl::Graphics::TIcon* const Value);
	void __fastcall SetCustomMainIcon(Vcl::Graphics::TIcon* const Value);
	
protected:
	DYNAMIC bool __fastcall DoExecute(HWND ParentWnd);
	DYNAMIC void __fastcall DoOnButtonClicked(int AModalResult, bool &CanClose);
	DYNAMIC void __fastcall DoOnDialogContructed();
	DYNAMIC void __fastcall DoOnDialogCreated();
	DYNAMIC void __fastcall DoOnDialogDestroyed();
	DYNAMIC void __fastcall DoOnExpandButtonClicked(bool Expanded);
	DYNAMIC void __fastcall DoOnHelp();
	DYNAMIC void __fastcall DoOnHyperlinkClicked(const System::UnicodeString AURL);
	DYNAMIC void __fastcall DoOnNavigated();
	DYNAMIC void __fastcall DoOnRadioButtonClicked(int ButtonID);
	DYNAMIC void __fastcall DoOnTimer(unsigned TickCount, bool &Reset);
	DYNAMIC void __fastcall DoOnVerificationClicked(bool Checked);
	DYNAMIC void __fastcall ShowHelpException(System::Sysutils::Exception* E);
	
protected:
	DYNAMIC HRESULT __fastcall CallbackProc(HWND hwnd, unsigned msg, NativeUInt wParam, NativeInt lParam, NativeInt lpRefData);
	
public:
	__fastcall virtual TCustomTaskDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomTaskDialog();
	DYNAMIC bool __fastcall Execute()/* overload */;
	DYNAMIC bool __fastcall Execute(HWND ParentWnd)/* overload */;
	__property TTaskDialogButtonItem* Button = {read=FButton, write=FButton};
	__property TTaskDialogButtons* Buttons = {read=FButtons, write=SetButtons};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property TTaskDialogCommonButtons CommonButtons = {read=FCommonButtons, write=FCommonButtons, default=9};
	__property Vcl::Graphics::TIcon* CustomFooterIcon = {read=FCustomFooterIcon, write=SetCustomFooterIcon};
	__property Vcl::Graphics::TIcon* CustomMainIcon = {read=FCustomMainIcon, write=SetCustomMainIcon};
	__property TTaskDialogCommonButton DefaultButton = {read=FDefaultButton, write=FDefaultButton, default=0};
	__property System::UnicodeString ExpandButtonCaption = {read=FExpandButtonCaption, write=FExpandButtonCaption};
	__property bool Expanded = {read=FExpanded, nodefault};
	__property System::UnicodeString ExpandedText = {read=FExpandedText, write=SetExpandedText};
	__property TTaskDialogFlags Flags = {read=FFlags, write=SetFlags, default=8};
	__property TTaskDialogIcon FooterIcon = {read=FFooterIcon, write=SetFooterIcon, default=0};
	__property System::UnicodeString FooterText = {read=FFooterText, write=SetFooterText};
#ifndef _WIN64
	__property HWND Handle = {read=FHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=FHandle};
#endif /* _WIN64 */
	__property int HelpContext = {read=FHelpContext, write=FHelpContext, default=0};
	__property TTaskDialogIcon MainIcon = {read=FMainIcon, write=SetMainIcon, default=3};
	__property System::Uitypes::TModalResult ModalResult = {read=FModalResult, write=FModalResult, nodefault};
	__property TTaskDialogProgressBar* ProgressBar = {read=FProgressBar, write=FProgressBar};
	__property TTaskDialogRadioButtonItem* RadioButton = {read=FRadioButton};
	__property TTaskDialogButtons* RadioButtons = {read=FRadioButtons, write=SetRadioButtons};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property System::UnicodeString Title = {read=FTitle, write=SetTitle};
	__property System::UnicodeString URL = {read=FURL};
	__property System::UnicodeString VerificationText = {read=FVerificationText, write=FVerificationText};
	__property TTaskDlgClickEvent OnButtonClicked = {read=FOnButtonClicked, write=FOnButtonClicked};
	__property System::Classes::TNotifyEvent OnDialogConstructed = {read=FOnDialogConstructed, write=FOnDialogConstructed};
	__property System::Classes::TNotifyEvent OnDialogCreated = {read=FOnDialogCreated, write=FOnDialogCreated};
	__property System::Classes::TNotifyEvent OnDialogDestroyed = {read=FOnDialogDestroyed, write=FOnDialogDestroyed};
	__property System::Classes::TNotifyEvent OnExpanded = {read=FOnExpanded, write=FOnExpanded};
	__property System::Classes::TNotifyEvent OnHyperlinkClicked = {read=FOnHyperlinkClicked, write=FOnHyperlinkClicked};
	__property System::Classes::TNotifyEvent OnNavigated = {read=FOnNavigated, write=FOnNavigated};
	__property System::Classes::TNotifyEvent OnRadioButtonClicked = {read=FOnRadioButtonClicked, write=FOnRadioButtonClicked};
	__property TTaskDlgTimerEvent OnTimer = {read=FOnTimer, write=FOnTimer};
	__property System::Classes::TNotifyEvent OnVerificationClicked = {read=FOnVerificationClicked, write=FOnVerificationClicked};
};


class PASCALIMPLEMENTATION TTaskDialog : public TCustomTaskDialog
{
	typedef TCustomTaskDialog inherited;
	
__published:
	__property Buttons;
	__property Caption = {default=0};
	__property CommonButtons = {default=9};
	__property CustomFooterIcon;
	__property CustomMainIcon;
	__property DefaultButton = {default=0};
	__property ExpandButtonCaption = {default=0};
	__property ExpandedText = {default=0};
	__property Flags = {default=8};
	__property FooterIcon = {default=0};
	__property FooterText = {default=0};
	__property HelpContext = {default=0};
	__property MainIcon = {default=3};
	__property ProgressBar;
	__property RadioButtons;
	__property Text = {default=0};
	__property Title = {default=0};
	__property VerificationText = {default=0};
	__property OnButtonClicked;
	__property OnDialogConstructed;
	__property OnDialogCreated;
	__property OnDialogDestroyed;
	__property OnExpanded;
	__property OnHyperlinkClicked;
	__property OnNavigated;
	__property OnRadioButtonClicked;
	__property OnTimer;
	__property OnVerificationClicked;
public:
	/* TCustomTaskDialog.Create */ inline __fastcall virtual TTaskDialog(System::Classes::TComponent* AOwner) : TCustomTaskDialog(AOwner) { }
	/* TCustomTaskDialog.Destroy */ inline __fastcall virtual ~TTaskDialog() { }
	
};


typedef void __fastcall (__closure *TInputCloseQueryEvent)(System::TObject* Sender, const System::UnicodeString *Values, const int Values_High, bool &CanClose);

__interface TInputCloseQueryFunc  : public System::IInterface 
{
	virtual bool __fastcall Invoke(const System::UnicodeString *Values, const int Values_High) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MaxCustomColors = System::Int8(0x10);
static const System::Uitypes::TOpenOption ofReadOnly = (System::Uitypes::TOpenOption)(0);
static const System::Uitypes::TOpenOption ofOverwritePrompt = (System::Uitypes::TOpenOption)(1);
static const System::Uitypes::TOpenOption ofHideReadOnly = (System::Uitypes::TOpenOption)(2);
static const System::Uitypes::TOpenOption ofNoChangeDir = (System::Uitypes::TOpenOption)(3);
static const System::Uitypes::TOpenOption ofShowHelp = (System::Uitypes::TOpenOption)(4);
static const System::Uitypes::TOpenOption ofNoValidate = (System::Uitypes::TOpenOption)(5);
static const System::Uitypes::TOpenOption ofAllowMultiSelect = (System::Uitypes::TOpenOption)(6);
static const System::Uitypes::TOpenOption ofExtensionDifferent = (System::Uitypes::TOpenOption)(7);
static const System::Uitypes::TOpenOption ofPathMustExist = (System::Uitypes::TOpenOption)(8);
static const System::Uitypes::TOpenOption ofFileMustExist = (System::Uitypes::TOpenOption)(9);
static const System::Uitypes::TOpenOption ofCreatePrompt = (System::Uitypes::TOpenOption)(10);
static const System::Uitypes::TOpenOption ofShareAware = (System::Uitypes::TOpenOption)(11);
static const System::Uitypes::TOpenOption ofNoReadOnlyReturn = (System::Uitypes::TOpenOption)(12);
static const System::Uitypes::TOpenOption ofNoTestFileCreate = (System::Uitypes::TOpenOption)(13);
static const System::Uitypes::TOpenOption ofNoNetworkButton = (System::Uitypes::TOpenOption)(14);
static const System::Uitypes::TOpenOption ofNoLongNames = (System::Uitypes::TOpenOption)(15);
static const System::Uitypes::TOpenOption ofOldStyleDialog = (System::Uitypes::TOpenOption)(16);
static const System::Uitypes::TOpenOption ofNoDereferenceLinks = (System::Uitypes::TOpenOption)(17);
static const System::Uitypes::TOpenOption ofEnableIncludeNotify = (System::Uitypes::TOpenOption)(18);
static const System::Uitypes::TOpenOption ofEnableSizing = (System::Uitypes::TOpenOption)(19);
static const System::Uitypes::TOpenOption ofDontAddToRecent = (System::Uitypes::TOpenOption)(20);
static const System::Uitypes::TOpenOption ofForceShowHidden = (System::Uitypes::TOpenOption)(21);
static const System::Uitypes::TOpenOptionEx ofExNoPlacesBar = (System::Uitypes::TOpenOptionEx)(0);
static const System::Uitypes::TPrintRange prAllPages = (System::Uitypes::TPrintRange)(0);
static const System::Uitypes::TPrintRange prSelection = (System::Uitypes::TPrintRange)(1);
static const System::Uitypes::TPrintRange prPageNums = (System::Uitypes::TPrintRange)(2);
static const System::Uitypes::TPrintDialogOption poPrintToFile = (System::Uitypes::TPrintDialogOption)(0);
static const System::Uitypes::TPrintDialogOption poPageNums = (System::Uitypes::TPrintDialogOption)(1);
static const System::Uitypes::TPrintDialogOption poSelection = (System::Uitypes::TPrintDialogOption)(2);
static const System::Uitypes::TPrintDialogOption poWarning = (System::Uitypes::TPrintDialogOption)(3);
static const System::Uitypes::TPrintDialogOption poHelp = (System::Uitypes::TPrintDialogOption)(4);
static const System::Uitypes::TPrintDialogOption poDisablePrintToFile = (System::Uitypes::TPrintDialogOption)(5);
static const System::Uitypes::TPageSetupDialogOption psoDefaultMinMargins = (System::Uitypes::TPageSetupDialogOption)(0);
static const System::Uitypes::TPageSetupDialogOption psoDisableMargins = (System::Uitypes::TPageSetupDialogOption)(1);
static const System::Uitypes::TPageSetupDialogOption psoDisableOrientation = (System::Uitypes::TPageSetupDialogOption)(2);
static const System::Uitypes::TPageSetupDialogOption psoDisablePagePainting = (System::Uitypes::TPageSetupDialogOption)(3);
static const System::Uitypes::TPageSetupDialogOption psoDisablePaper = (System::Uitypes::TPageSetupDialogOption)(4);
static const System::Uitypes::TPageSetupDialogOption psoDisablePrinter = (System::Uitypes::TPageSetupDialogOption)(5);
static const System::Uitypes::TPageSetupDialogOption psoMargins = (System::Uitypes::TPageSetupDialogOption)(6);
static const System::Uitypes::TPageSetupDialogOption psoMinMargins = (System::Uitypes::TPageSetupDialogOption)(7);
static const System::Uitypes::TPageSetupDialogOption psoShowHelp = (System::Uitypes::TPageSetupDialogOption)(8);
static const System::Uitypes::TPageSetupDialogOption psoWarning = (System::Uitypes::TPageSetupDialogOption)(9);
static const System::Uitypes::TPageSetupDialogOption psoNoNetworkButton = (System::Uitypes::TPageSetupDialogOption)(10);
static const System::Uitypes::TPrinterKind pkDotMatrix = (System::Uitypes::TPrinterKind)(0);
static const System::Uitypes::TPrinterKind pkHPPCL = (System::Uitypes::TPrinterKind)(1);
static const System::Uitypes::TPageType ptEnvelope = (System::Uitypes::TPageType)(0);
static const System::Uitypes::TPageType ptPaper = (System::Uitypes::TPageType)(1);
static const System::Uitypes::TPageMeasureUnits pmDefault = (System::Uitypes::TPageMeasureUnits)(0);
static const System::Uitypes::TPageMeasureUnits pmMillimeters = (System::Uitypes::TPageMeasureUnits)(1);
static const System::Uitypes::TPageMeasureUnits pmInches = (System::Uitypes::TPageMeasureUnits)(2);
static const System::Uitypes::TMsgDlgType mtWarning = (System::Uitypes::TMsgDlgType)(0);
static const System::Uitypes::TMsgDlgType mtError = (System::Uitypes::TMsgDlgType)(1);
static const System::Uitypes::TMsgDlgType mtInformation = (System::Uitypes::TMsgDlgType)(2);
static const System::Uitypes::TMsgDlgType mtConfirmation = (System::Uitypes::TMsgDlgType)(3);
static const System::Uitypes::TMsgDlgType mtCustom = (System::Uitypes::TMsgDlgType)(4);
static const System::Uitypes::TMsgDlgBtn mbYes = (System::Uitypes::TMsgDlgBtn)(0);
static const System::Uitypes::TMsgDlgBtn mbNo = (System::Uitypes::TMsgDlgBtn)(1);
static const System::Uitypes::TMsgDlgBtn mbOK = (System::Uitypes::TMsgDlgBtn)(2);
static const System::Uitypes::TMsgDlgBtn mbCancel = (System::Uitypes::TMsgDlgBtn)(3);
static const System::Uitypes::TMsgDlgBtn mbAbort = (System::Uitypes::TMsgDlgBtn)(4);
static const System::Uitypes::TMsgDlgBtn mbRetry = (System::Uitypes::TMsgDlgBtn)(5);
static const System::Uitypes::TMsgDlgBtn mbIgnore = (System::Uitypes::TMsgDlgBtn)(6);
static const System::Uitypes::TMsgDlgBtn mbAll = (System::Uitypes::TMsgDlgBtn)(7);
static const System::Uitypes::TMsgDlgBtn mbNoToAll = (System::Uitypes::TMsgDlgBtn)(8);
static const System::Uitypes::TMsgDlgBtn mbYesToAll = (System::Uitypes::TMsgDlgBtn)(9);
static const System::Uitypes::TMsgDlgBtn mbHelp = (System::Uitypes::TMsgDlgBtn)(10);
static const System::Uitypes::TMsgDlgBtn mbClose = (System::Uitypes::TMsgDlgBtn)(11);
static const System::Int8 tdiNone = System::Int8(0x0);
static const System::Int8 tdiWarning = System::Int8(0x1);
static const System::Int8 tdiError = System::Int8(0x2);
static const System::Int8 tdiInformation = System::Int8(0x3);
static const System::Int8 tdiShield = System::Int8(0x4);
#define mbYesNo (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbYes << System::Uitypes::TMsgDlgBtn::mbNo )
#define mbYesNoCancel (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbYes << System::Uitypes::TMsgDlgBtn::mbNo << System::Uitypes::TMsgDlgBtn::mbCancel )
#define mbYesAllNoAllCancel (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbYes << System::Uitypes::TMsgDlgBtn::mbNo << System::Uitypes::TMsgDlgBtn::mbCancel << System::Uitypes::TMsgDlgBtn::mbNoToAll << System::Uitypes::TMsgDlgBtn::mbYesToAll )
#define mbOKCancel (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbOK << System::Uitypes::TMsgDlgBtn::mbCancel )
#define mbAbortRetryIgnore (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbAbort << System::Uitypes::TMsgDlgBtn::mbRetry << System::Uitypes::TMsgDlgBtn::mbIgnore )
#define mbAbortIgnore (System::Set<System::Uitypes::TMsgDlgBtn, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbYes), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMsgDlgBtn::mbClose)>() << System::Uitypes::TMsgDlgBtn::mbAbort << System::Uitypes::TMsgDlgBtn::mbIgnore )
extern DELPHI_PACKAGE bool ForceCurrentDirectory;
extern DELPHI_PACKAGE bool UseLatestCommonDialogs;
extern DELPHI_PACKAGE Vcl::Forms::TForm* __fastcall CreateMessageDialog(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, System::Uitypes::TMsgDlgBtn DefaultButton, System::UnicodeString *CustomButtonCaptions, const int CustomButtonCaptions_High)/* overload */;
extern DELPHI_PACKAGE Vcl::Forms::TForm* __fastcall CreateMessageDialog(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE Vcl::Forms::TForm* __fastcall CreateMessageDialog(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlg(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlg(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlg(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, System::Uitypes::TMsgDlgBtn DefaultButton, System::UnicodeString *CustomButtonCaptions, const int CustomButtonCaptions_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlg(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlg(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlg(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, System::Uitypes::TMsgDlgBtn DefaultButton, System::UnicodeString *CustomButtonCaptions, const int CustomButtonCaptions_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPos(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPos(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, TTaskDialogFlags TaskDlgFlags)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPos(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPos(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, System::Uitypes::TMsgDlgBtn DefaultButton, TTaskDialogFlags TaskDlgFlags)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPos(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, System::Uitypes::TMsgDlgBtn DefaultButton, TTaskDialogFlags TaskDlgFlags, System::UnicodeString *CustomButtonCaptions, const int CustomButtonCaptions_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlgPos(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlgPos(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPosHelp(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPosHelp(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName, TTaskDialogFlags TaskDlgFlags)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPosHelp(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPosHelp(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName, System::Uitypes::TMsgDlgBtn DefaultButton, TTaskDialogFlags TaskDlgFlags)/* overload */;
extern DELPHI_PACKAGE int __fastcall MessageDlgPosHelp(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName, System::Uitypes::TMsgDlgBtn DefaultButton, TTaskDialogFlags TaskDlgFlags, System::UnicodeString *CustomButtonCaptions, const int CustomButtonCaptions_High)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlgPosHelp(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlgPosHelp(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE int __fastcall TaskMessageDlgPosHelp(const System::UnicodeString Title, const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y, const System::UnicodeString HelpFileName, System::Uitypes::TMsgDlgBtn DefaultButton, System::UnicodeString *CustomButtonCaptions, const int CustomButtonCaptions_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowMessage(const System::UnicodeString Msg)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowMessage(const System::UnicodeString Msg, TTaskDialogFlags TaskDlgFlags)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowMessageFmt(const System::UnicodeString Msg, System::TVarRec *Params, const int Params_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowMessageFmt(const System::UnicodeString Msg, System::TVarRec *Params, const int Params_High, TTaskDialogFlags TaskDlgFlags)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowMessagePos(const System::UnicodeString Msg, int X, int Y)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowMessagePos(const System::UnicodeString Msg, int X, int Y, TTaskDialogFlags TaskDlgFlags)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InputQuery(const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, System::UnicodeString *AValues, const int AValues_High, _di_TInputCloseQueryFunc CloseQueryFunc = _di_TInputCloseQueryFunc())/* overload */;
extern DELPHI_PACKAGE bool __fastcall InputQuery(const System::UnicodeString ACaption, const System::UnicodeString *APrompts, const int APrompts_High, System::UnicodeString *AValues, const int AValues_High, TInputCloseQueryEvent CloseQueryEvent, System::TObject* Context = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE bool __fastcall InputQuery(const System::UnicodeString ACaption, const System::UnicodeString APrompt, System::UnicodeString &Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall InputBox(const System::UnicodeString ACaption, const System::UnicodeString APrompt, const System::UnicodeString ADefault);
extern DELPHI_PACKAGE bool __fastcall PromptForFileName(System::UnicodeString &AFileName, const System::UnicodeString AFilter = System::UnicodeString(), const System::UnicodeString ADefaultExt = System::UnicodeString(), const System::UnicodeString ATitle = System::UnicodeString(), const System::UnicodeString AInitialDir = System::UnicodeString(), bool SaveDialog = false);
}	/* namespace Dialogs */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DIALOGS)
using namespace Vcl::Dialogs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DialogsHPP
