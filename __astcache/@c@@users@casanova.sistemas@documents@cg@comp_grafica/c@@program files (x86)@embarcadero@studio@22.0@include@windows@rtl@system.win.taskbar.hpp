// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Win.Taskbar.pas' rev: 35.00 (Windows)

#ifndef System_Win_TaskbarHPP
#define System_Win_TaskbarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ShlObj.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Win
{
namespace Taskbar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWinTaskbar;
class DELPHICLASS ETaskbarException;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWinTaskbar : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_ITaskbarList TaskbarList;
	_di_ITaskbarList2 TaskbarList2;
	_di_ITaskbarList3 TaskbarList3;
	_di_ITaskbarList4 TaskbarList4;
	HRESULT FLastError;
	HWND FMainWindow;
	void __fastcall CheckITB();
	void __fastcall CheckITB2();
	void __fastcall CheckITB3();
	void __fastcall CheckITB4();
	HWND __fastcall ReadMainWindow();
	
protected:
	void __fastcall InitTaskbarSupport();
	bool __fastcall HrInit();
	
public:
	__fastcall TWinTaskbar();
	bool __fastcall ActivateTab(HWND AHwnd);
	bool __fastcall AddTab(HWND AHwnd);
	bool __fastcall DeleteTab(HWND AHwnd);
	bool __fastcall SetActiveAlt(HWND AHwnd);
	bool __fastcall MarkFullscreenWindow(HWND AHwnd, System::LongBool AFullscreen);
	bool __fastcall RegisterTab(HWND ATabHandle);
	bool __fastcall SetOverlayIcon(HICON AIcon, System::UnicodeString ADescription);
	bool __fastcall SetProgressState(int AState)/* overload */;
	bool __fastcall SetProgressValue(unsigned __int64 ACompleted, unsigned __int64 ATotal)/* overload */;
	bool __fastcall SetProgressState(HWND AHwndTab, int AState)/* overload */;
	bool __fastcall SetProgressValue(HWND AHwndTab, unsigned __int64 ACompleted, unsigned __int64 ATotal)/* overload */;
	bool __fastcall SetTabActive(HWND AHwndTab);
#ifndef _WIN64
	bool __fastcall SetTabOrder(HWND AHwndTab, HWND AHwndInsertBefore = (HWND)(0x0));
#else /* _WIN64 */
	bool __fastcall SetTabOrder(HWND AHwndTab, HWND AHwndInsertBefore = (HWND)(0ULL));
#endif /* _WIN64 */
	bool __fastcall SetThumbnailClip(const System::Types::TRect &AClipRect)/* overload */;
	bool __fastcall SetThumbnailClip(HWND AWindow, const System::Types::TRect &AClipRect)/* overload */;
	bool __fastcall ClearThumbnailClip()/* overload */;
	bool __fastcall ClearThumbnailClip(HWND AWindow)/* overload */;
	bool __fastcall SetThumbnailTooltip(System::UnicodeString ATip)/* overload */;
	bool __fastcall SetThumbnailTooltip(HWND AWindow, System::UnicodeString ATip)/* overload */;
	bool __fastcall ClearThumbnailTooltip();
#ifndef _WIN64
	bool __fastcall ThumbBarAddButtons(THUMBBUTTON *AButtonList, const int AButtonList_High, HWND ATabHandle = (HWND)(0x0));
#else /* _WIN64 */
	bool __fastcall ThumbBarAddButtons(THUMBBUTTON *AButtonList, const int AButtonList_High, HWND ATabHandle = (HWND)(0ULL));
#endif /* _WIN64 */
	bool __fastcall ThumbBarSetImageList(HWND AHwnd, NativeUInt AImageList);
#ifndef _WIN64
	bool __fastcall ThumbBarUpdateButtons(THUMBBUTTON *AButtonList, const int AButtonList_High, HWND ATabHandle = (HWND)(0x0));
#else /* _WIN64 */
	bool __fastcall ThumbBarUpdateButtons(THUMBBUTTON *AButtonList, const int AButtonList_High, HWND ATabHandle = (HWND)(0ULL));
#endif /* _WIN64 */
	bool __fastcall UnregisterTab(HWND AHwndTab);
	bool __fastcall SetTabProperties(HWND AHwndTab, int AStpFlags);
	__property HRESULT LastError = {read=FLastError, nodefault};
#ifndef _WIN64
	__property HWND MainWindow = {read=ReadMainWindow, write=FMainWindow, nodefault};
#else /* _WIN64 */
	__property HWND MainWindow = {read=ReadMainWindow, write=FMainWindow};
#endif /* _WIN64 */
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TWinTaskbar() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ETaskbarException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETaskbarException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETaskbarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETaskbarException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETaskbarException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETaskbarException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETaskbarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETaskbarException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETaskbarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETaskbarException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETaskbarException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETaskbarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETaskbarException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETaskbarException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Taskbar */
}	/* namespace Win */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN_TASKBAR)
using namespace System::Win::Taskbar;
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
#endif	// System_Win_TaskbarHPP
