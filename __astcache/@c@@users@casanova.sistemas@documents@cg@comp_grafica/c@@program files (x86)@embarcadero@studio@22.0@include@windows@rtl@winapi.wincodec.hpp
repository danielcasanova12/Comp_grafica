// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.Wincodec.pas' rev: 35.00 (Windows)

#ifndef Winapi_WincodecHPP
#define Winapi_WincodecHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------
#include "wincodec.h"
#pragma comment(lib, "windowscodecs")
DECLARE_DINTERFACE_TYPE(IWICPalette);
DECLARE_DINTERFACE_TYPE(IWICBitmapSource);
DECLARE_DINTERFACE_TYPE(IWICFormatConverter);
DECLARE_DINTERFACE_TYPE(IWICBitmapScaler);
DECLARE_DINTERFACE_TYPE(IWICBitmapClipper);
DECLARE_DINTERFACE_TYPE(IWICBitmapFlipRotator);
DECLARE_DINTERFACE_TYPE(IWICBitmapLock);
DECLARE_DINTERFACE_TYPE(IWICBitmap);
DECLARE_DINTERFACE_TYPE(IWICColorContext);
DECLARE_DINTERFACE_TYPE(IWICColorTransform);
DECLARE_DINTERFACE_TYPE(IWICFastMetadataEncoder);
DECLARE_DINTERFACE_TYPE(IWICStream);
DECLARE_DINTERFACE_TYPE(IWICEnumMetadataItem);
DECLARE_DINTERFACE_TYPE(IWICMetadataQueryReader);
DECLARE_DINTERFACE_TYPE(IWICMetadataQueryWriter);
DECLARE_DINTERFACE_TYPE(IWICBitmapEncoder);
DECLARE_DINTERFACE_TYPE(IWICBitmapFrameEncode);
DECLARE_DINTERFACE_TYPE(IWICBitmapDecoder);
DECLARE_DINTERFACE_TYPE(IWICBitmapSourceTransform);
DECLARE_DINTERFACE_TYPE(IWICBitmapFrameDecode);
DECLARE_DINTERFACE_TYPE(IWICProgressiveLevelControl);
DECLARE_DINTERFACE_TYPE(IWICProgressCallback);
DECLARE_DINTERFACE_TYPE(IWICBitmapCodecProgressNotification);
DECLARE_DINTERFACE_TYPE(IWICComponentInfo);
DECLARE_DINTERFACE_TYPE(IWICFormatConverterInfo);
DECLARE_DINTERFACE_TYPE(IWICBitmapCodecInfo);
DECLARE_DINTERFACE_TYPE(IWICBitmapEncoderInfo);
DECLARE_DINTERFACE_TYPE(IWICBitmapDecoderInfo);
DECLARE_DINTERFACE_TYPE(IWICPixelFormatInfo);
DECLARE_DINTERFACE_TYPE(IWICPixelFormatInfo2);
DECLARE_DINTERFACE_TYPE(IWICImagingFactory);
DECLARE_DINTERFACE_TYPE(IWICDevelopRawNotificationCallback);
DECLARE_DINTERFACE_TYPE(IWICDevelopRaw);

namespace Winapi
{
namespace Wincodec
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef unsigned TWICColor;

typedef unsigned *PWICColor;

typedef System::Byte *WICInProcPointer;

typedef WICInProcPointer TWICInProcPointer;

typedef WICInProcPointer *PWICInProcPointer;

typedef GUID TWICPixelFormatGUID;

typedef GUID *PWICPixelFormatGUID;

typedef WICBitmapPattern TWICBitmapPattern;

typedef WICBitmapPattern *PWICBitmapPattern;

typedef HRESULT __stdcall (*FNProgressNotification)(void * pvData, unsigned uFrameNum, WICProgressOperation operation, double dblProgress);

typedef WICRawToneCurve TWICRawToneCurve;

typedef WICRawToneCurve *PWICRawToneCurve;

//-- var, const, procedure ---------------------------------------------------
#define SID_IWICPalette L"{00000040-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICBitmapSource L"{00000120-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICFormatConverter L"{00000301-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICBitmapScaler L"{00000302-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICBitmapClipper L"{E4FBCF03-223D-4e81-9333-D635556DD1B5}"
#define SID_IWICBitmapFlipRotator L"{5009834F-2D6A-41ce-9E1B-17C5AFF7A782}"
#define SID_IWICBitmapLock L"{00000123-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICBitmap L"{00000121-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICColorTransform L"{B66F034F-D0E2-40ab-B436-6DE39E321A94}"
#define SID_IWICColorContext L"{3C613A02-34B2-44ea-9A7C-45AEA9C6FD6D}"
#define SID_IWICFastMetadataEncoder L"{B84E2C09-78C9-4AC4-8BD3-524AE1663A2F}"
#define SID_IWICStream L"{135FF860-22B7-4ddf-B0F6-218F4F299A43}"
#define SID_IWICEnumMetadataItem L"{DC2BB46D-3F07-481E-8625-220C4AEDBB33}"
#define SID_IWICMetadataQueryReader L"{30989668-E1C9-4597-B395-458EEDB808DF}"
#define SID_IWICMetadataQueryWriter L"{A721791A-0DEF-4d06-BD91-2118BF1DB10B}"
#define SID_IWICBitmapEncoder L"{00000103-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICBitmapFrameEncode L"{00000105-a8f2-4877-ba0a-fd2b6645fb94}"
#define SID_IWICBitmapDecoder L"{9EDDE9E7-8DEE-47ea-99DF-E6FAF2ED44BF}"
#define SID_IWICBitmapSourceTransform L"{3B16811B-6A43-4ec9-B713-3D5A0C13B940}"
#define SID_IWICBitmapFrameDecode L"{3B16811B-6A43-4ec9-A813-3D930C13B940}"
#define SID_IWICProgressiveLevelControl L"{DAAC296F-7AA5-4dbf-8D15-225C5976F891}"
#define SID_IWICProgressCallback L"{4776F9CD-9517-45FA-BF24-E89C5EC5C60C}"
#define SID_IWICBitmapCodecProgressNotification L"{64C1024E-C3CF-4462-8078-88C2B11C46D9}"
#define SID_IWICComponentInfo L"{23BC3F0A-698B-4357-886B-F24D50671334}"
#define SID_IWICFormatConverterInfo L"{9F34FB65-13F4-4f15-BC57-3726B5E53D9F}"
#define SID_IWICBitmapCodecInfo L"{E87A44C4-B76E-4c47-8B09-298EB12A2714}"
#define SID_IWICBitmapEncoderInfo L"{94C9B4EE-A09F-4f92-8A1E-4A9BCE7E76FB}"
#define SID_IWICBitmapDecoderInfo L"{D8CD007F-D08F-4191-9BFC-236EA7F0E4B5}"
#define SID_IWICPixelFormatInfo L"{E8EDA601-3D48-431a-AB44-69059BE88BBE}"
#define SID_IWICPixelFormatInfo2 L"{A9DB33A2-AF5F-43C7-B679-74F5984B5AA4}"
#define SID_IWICImagingFactory L"{ec5ec8a9-c395-4314-9c77-54d7a935ff70}"
#define SID_IWICDevelopRawNotificationCallback L"{95c75a6e-3e8c-4ec2-85a8-aebcc551e59b}"
#define SID_IWICDevelopRaw L"{fbec5e44-f7be-4b65-b7f8-c0c81fef026d}"
}	/* namespace Wincodec */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_WINCODEC)
using namespace Winapi::Wincodec;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_WincodecHPP
