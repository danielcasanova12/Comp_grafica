// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.WinInet.pas' rev: 35.00 (Windows)

#ifndef Winapi_WininetHPP
#define Winapi_WininetHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------
#include <wininet.h>

namespace Winapi
{
namespace Wininet
{
//-- forward type declarations -----------------------------------------------
struct TInternetAsyncResult;
struct TInternetPrefetchStatus;
struct URL_COMPONENTSA;
struct URL_COMPONENTSW;
//-- type declarations -------------------------------------------------------
typedef void * *PHINTERNET;

typedef System::Word *PINTERNET_PORT;

typedef int *PInternetScheme;

typedef int TInternetScheme;

typedef TInternetAsyncResult *PInternetAsyncResult;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
struct DECLSPEC_DRECORD TInternetAsyncResult
{
public:
	NativeUInt dwResult;
	unsigned dwError;
};
#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */


typedef TInternetPrefetchStatus *PInternetPrefetchStatus;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
struct DECLSPEC_DRECORD TInternetPrefetchStatus
{
public:
	unsigned dwStatus;
	unsigned dwSize;
};
#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */


typedef INTERNET_PROXY_INFO *PInternetProxyInfo;

typedef INTERNET_PROXY_INFO TInternetProxyInfo;

typedef INTERNET_VERSION_INFO *PInternetVersionInfo;

typedef INTERNET_VERSION_INFO TInternetVersionInfo;

typedef HTTP_VERSION_INFO *PHttpVersionInfo;

typedef HTTP_VERSION_INFO THttpVersionInfo;

typedef INTERNET_CONNECTED_INFO *PInternetConnectedInfo;

typedef INTERNET_CONNECTED_INFO TInternetConnectedInfo;

typedef URL_COMPONENTSA *PURLComponentsA;

typedef URL_COMPONENTSW *PURLComponentsW;

typedef PURLComponentsW PURLComponents;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
struct DECLSPEC_DRECORD URL_COMPONENTSA
{
public:
	unsigned dwStructSize;
	char *lpszScheme;
	unsigned dwSchemeLength;
	int nScheme;
	char *lpszHostName;
	unsigned dwHostNameLength;
	System::Word nPort;
	char *lpszUserName;
	unsigned dwUserNameLength;
	char *lpszPassword;
	unsigned dwPasswordLength;
	char *lpszUrlPath;
	unsigned dwUrlPathLength;
	char *lpszExtraInfo;
	unsigned dwExtraInfoLength;
};
#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */


typedef URL_COMPONENTSA TURLComponentsA;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
struct DECLSPEC_DRECORD URL_COMPONENTSW
{
public:
	unsigned dwStructSize;
	System::WideChar *lpszScheme;
	unsigned dwSchemeLength;
	int nScheme;
	System::WideChar *lpszHostName;
	unsigned dwHostNameLength;
	System::Word nPort;
	System::WideChar *lpszUserName;
	unsigned dwUserNameLength;
	System::WideChar *lpszPassword;
	unsigned dwPasswordLength;
	System::WideChar *lpszUrlPath;
	unsigned dwUrlPathLength;
	System::WideChar *lpszExtraInfo;
	unsigned dwExtraInfoLength;
};
#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */


typedef URL_COMPONENTSW TURLComponentsW;

typedef URL_COMPONENTSW URL_COMPONENTS;

typedef URL_COMPONENTSW TURLComponents;

typedef INTERNET_CERTIFICATE_INFO *PInternetCertificateInfo;

typedef INTERNET_CERTIFICATE_INFO TInternetCertificateInfo;

typedef INTERNET_BUFFERSA *PInternetBuffersA;

typedef INTERNET_BUFFERSW *PInternetBuffersW;

typedef PInternetBuffersW PInternetBuffers;

typedef INTERNET_BUFFERSA TInternetBuffersA;

typedef INTERNET_BUFFERSW TInternetBuffersW;

typedef INTERNET_BUFFERSW INTERNET_BUFFERS;

typedef void * TFNInternetStatusCallback;

typedef void * *PFNInternetStatusCallback;

typedef GOPHER_FIND_DATAA *PGopherFindDataA;

typedef GOPHER_FIND_DATAW *PGopherFindDataW;

typedef PGopherFindDataW PGopherFindData;

typedef GOPHER_FIND_DATAW GOPHER_FIND_DATA;

typedef GOPHER_FIND_DATAA TGopherFindDataA;

typedef GOPHER_FIND_DATAW TGopherFindDataW;

typedef GOPHER_FIND_DATAW TGopherFindData;

typedef GOPHER_ADMIN_ATTRIBUTE_TYPE *PGopherAdminAttributeType;

typedef GOPHER_ADMIN_ATTRIBUTE_TYPE TGopherAdminAttributeType;

typedef GOPHER_MOD_DATE_ATTRIBUTE_TYPE *PGopherModDateAttributeType;

typedef GOPHER_MOD_DATE_ATTRIBUTE_TYPE TGopherModDateAttributeType;

typedef GOPHER_TTL_ATTRIBUTE_TYPE *PGopherTtlAttributeType;

typedef GOPHER_TTL_ATTRIBUTE_TYPE TGopherTtlAttributeType;

typedef GOPHER_SCORE_ATTRIBUTE_TYPE *PGopherScoreAttributeType;

typedef GOPHER_SCORE_ATTRIBUTE_TYPE TGopherScoreAttributeType;

typedef GOPHER_SCORE_RANGE_ATTRIBUTE_TYPE *PGopherScoreRangeAttributeType;

typedef GOPHER_SCORE_RANGE_ATTRIBUTE_TYPE TGopherScoreRangeAttributeType;

typedef GOPHER_SITE_ATTRIBUTE_TYPE *PGopherSiteAttributeType;

typedef GOPHER_SITE_ATTRIBUTE_TYPE TGopherSiteAttributeType;

typedef GOPHER_ORGANIZATION_ATTRIBUTE_TYPE *PGopherOrganizationAttributeType;

typedef GOPHER_ORGANIZATION_ATTRIBUTE_TYPE TGopherOrganizationAttributeType;

typedef GOPHER_LOCATION_ATTRIBUTE_TYPE *PGopherLocationAttributeType;

typedef GOPHER_LOCATION_ATTRIBUTE_TYPE TGopherLocationAttributeType;

typedef GOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE *PGopherGeographicalLocationAttributeType;

typedef GOPHER_GEOGRAPHICAL_LOCATION_ATTRIBUTE_TYPE TGopherGeographicalLocationAttributeType;

typedef GOPHER_TIMEZONE_ATTRIBUTE_TYPE *PGopherTimezoneAttributeType;

typedef GOPHER_TIMEZONE_ATTRIBUTE_TYPE TGopherTimezoneAttributeType;

typedef GOPHER_PROVIDER_ATTRIBUTE_TYPE *PGopherProviderAttributeType;

typedef GOPHER_PROVIDER_ATTRIBUTE_TYPE TGopherProviderAttributeType;

typedef GOPHER_VERSION_ATTRIBUTE_TYPE *PGopherVersionAttributeType;

typedef GOPHER_VERSION_ATTRIBUTE_TYPE TGopherVersionAttributeType;

typedef GOPHER_ABSTRACT_ATTRIBUTE_TYPE *PGopherAbstractAttributeType;

typedef GOPHER_ABSTRACT_ATTRIBUTE_TYPE TGopherAbstractAttributeType;

typedef GOPHER_VIEW_ATTRIBUTE_TYPE *PGopherViewAttributeType;

typedef GOPHER_VIEW_ATTRIBUTE_TYPE TGopherViewAttributeType;

typedef GOPHER_VERONICA_ATTRIBUTE_TYPE *PGopherVeronicaAttributeType;

typedef GOPHER_VERONICA_ATTRIBUTE_TYPE TGopherVeronicaAttributeType;

typedef GOPHER_ASK_ATTRIBUTE_TYPE *PGopherAskAttributeType;

typedef GOPHER_ASK_ATTRIBUTE_TYPE TGopherAskAttributeType;

typedef GOPHER_UNKNOWN_ATTRIBUTE_TYPE *PGopherUnknownAttributeType;

typedef GOPHER_UNKNOWN_ATTRIBUTE_TYPE TGopherUnknownAttributeType;

typedef GOPHER_ATTRIBUTE_TYPE *PGopherAttributeType;

typedef GOPHER_ATTRIBUTE_TYPE TGopherAttributeType;

typedef void * TFNGopherAttributeEnumerator;

typedef void * *PFNGopherAttributeEnumerator;

typedef INTERNET_CACHE_ENTRY_INFOA *PInternetCacheEntryInfoA;

typedef INTERNET_CACHE_ENTRY_INFOW *PInternetCacheEntryInfoW;

typedef PInternetCacheEntryInfoW PInternetCacheEntryInfo;

typedef INTERNET_CACHE_ENTRY_INFOA TInternetCacheEntryInfoA;

typedef INTERNET_CACHE_ENTRY_INFOW TInternetCacheEntryInfoW;

typedef INTERNET_CACHE_ENTRY_INFOW TInternetCacheEntryInfo;

typedef INTERNET_CACHE_GROUP_INFOA *PInternetCacheGroupInfoA;

typedef INTERNET_CACHE_GROUP_INFOW *PInternetCacheGroupInfoW;

typedef PInternetCacheGroupInfoW PInternetCacheGroupInfo;

typedef PInternetCacheGroupInfoW LPINTERNET_CACHE_GROUP_INFO;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wininet */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_WININET)
using namespace Winapi::Wininet;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_WininetHPP
