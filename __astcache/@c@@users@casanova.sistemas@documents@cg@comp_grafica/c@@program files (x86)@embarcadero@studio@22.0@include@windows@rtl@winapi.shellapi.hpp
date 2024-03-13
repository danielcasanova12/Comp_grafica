// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.ShellAPI.pas' rev: 35.00 (Windows)

#ifndef Winapi_ShellapiHPP
#define Winapi_ShellapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Winsock2.hpp>
#include <Winapi.IpExport.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
#include <shellapi.h>

namespace Winapi
{
namespace Shellapi
{
//-- forward type declarations -----------------------------------------------
struct _DRAGINFOA;
struct _DRAGINFOW;
struct _SHCREATEPROCESSINFOW;
//-- type declarations -------------------------------------------------------
typedef System::WideChar * *PPWideChar;

typedef _DRAGINFOA *PDragInfoA;

typedef _DRAGINFOW *PDragInfoW;

typedef PDragInfoW PDragInfo;

#ifndef _WIN64
#pragma pack(push,1)
#endif /* not _WIN64 */
struct DECLSPEC_DRECORD _DRAGINFOA
{
public:
	unsigned uSize;
	System::Types::TPoint pt;
	System::LongBool fNC;
	char *lpFileList;
	unsigned grfKeyState;
};
#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */


typedef _DRAGINFOA TDragInfoA;

typedef PDragInfoA LPDRAGINFOA;

#ifndef _WIN64
#pragma pack(push,1)
#endif /* not _WIN64 */
struct DECLSPEC_DRECORD _DRAGINFOW
{
public:
	unsigned uSize;
	System::Types::TPoint pt;
	System::LongBool fNC;
	System::WideChar *lpFileList;
	unsigned grfKeyState;
};
#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */


typedef _DRAGINFOW TDragInfoW;

typedef PDragInfoW LPDRAGINFOW;

typedef _AppBarData *PAppBarData;

typedef _AppBarData TAppBarData;

typedef _SHFILEOPSTRUCTA *PSHFileOpStructA;

typedef _SHFILEOPSTRUCTW *PSHFileOpStructW;

typedef PSHFileOpStructW PSHFileOpStruct;

typedef _SHFILEOPSTRUCTA TSHFileOpStructA;

typedef _SHFILEOPSTRUCTW TSHFileOpStructW;

typedef _SHFILEOPSTRUCTW TSHFileOpStruct;

typedef _SHNAMEMAPPINGA *PSHNameMappingA;

typedef _SHNAMEMAPPINGW *PSHNameMappingW;

typedef PSHNameMappingW PSHNameMapping;

typedef _SHNAMEMAPPINGA TSHNameMappingA;

typedef _SHNAMEMAPPINGW TSHNameMappingW;

typedef _SHNAMEMAPPINGW TSHNameMapping;

typedef _SHELLEXECUTEINFOA *PShellExecuteInfoA;

typedef _SHELLEXECUTEINFOW *PShellExecuteInfoW;

typedef PShellExecuteInfoW PShellExecuteInfo;

typedef _SHELLEXECUTEINFOA TShellExecuteInfoA;

typedef _SHELLEXECUTEINFOW TShellExecuteInfoW;

typedef _SHELLEXECUTEINFOW TShellExecuteInfo;

#ifndef _WIN64
#pragma pack(push,1)
#endif /* not _WIN64 */
struct DECLSPEC_DRECORD _SHCREATEPROCESSINFOW
{
public:
	unsigned cbSize;
	unsigned fMask;
	HWND hwnd;
	System::WideChar *pszFile;
	System::WideChar *pszParameters;
	System::WideChar *pszCurrentDirectory;
	NativeUInt hUserToken;
	_SECURITY_ATTRIBUTES *lpProcessAttributes;
	_SECURITY_ATTRIBUTES *lpThreadAttributes;
	System::LongBool bInheritHandles;
	unsigned dwCreationFlags;
	_STARTUPINFOW *lpStartupInfo;
	_PROCESS_INFORMATION *lpProcessInformation;
};
#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */


typedef _SHCREATEPROCESSINFOW SHCREATEPROCESSINFOW;

typedef _SHCREATEPROCESSINFOW TSHCreateProcessInfoW;

typedef int TAssocClass;

typedef ASSOCIATIONELEMENT TAssociationElement;

typedef ASSOCIATIONELEMENT *PAssociationElement;

typedef SHQUERYRBINFO TSHQueryRBInfo;

typedef SHQUERYRBINFO *PSHQueryRBInfo;

typedef _NOTIFYICONDATAA *PNotifyIconDataA;

typedef _NOTIFYICONDATAW *PNotifyIconDataW;

typedef PNotifyIconDataW PNotifyIconData;

typedef _NOTIFYICONDATAA TNotifyIconDataA;

typedef _NOTIFYICONDATAW TNotifyIconDataW;

typedef _NOTIFYICONDATAW TNotifyIconData;

typedef NOTIFYICONIDENTIFIER TNotifyIconIdentifier;

typedef _SHFILEINFOA *PSHFileInfoA;

typedef _SHFILEINFOW *PSHFileInfoW;

typedef PSHFileInfoW PSHFileInfo;

typedef _SHFILEINFOA TSHFileInfoA;

typedef _SHFILEINFOW TSHFileInfoW;

typedef _SHFILEINFOW TSHFileInfo;

typedef SHSTOCKICONINFO TSHStockIconInfo;

typedef SHSTOCKICONINFO *PSHStockIconInfo;

typedef OPEN_PRINTER_PROPS_INFOW OPEN_PRINTER_PROPS_INFO;

typedef OPEN_PRINTER_PROPS_INFOA TOpenPrinterPropsInfoA;

typedef OPEN_PRINTER_PROPS_INFOW TOpenPrinterPropsInfoW;

typedef OPEN_PRINTER_PROPS_INFOW TOpenPrinterPropsInfo;

typedef OPEN_PRINTER_PROPS_INFOA *POpenPrinterPropsInfoA;

typedef OPEN_PRINTER_PROPS_INFOW *POpenPrinterPropsInfoW;

typedef POpenPrinterPropsInfoW POpenPrinterPropsInfo;

typedef NC_ADDRESS TNcAddress;

typedef NC_ADDRESS *PNcAddress;

//-- var, const, procedure ---------------------------------------------------
#define shell32 L"shell32.dll"
}	/* namespace Shellapi */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_SHELLAPI)
using namespace Winapi::Shellapi;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_ShellapiHPP
