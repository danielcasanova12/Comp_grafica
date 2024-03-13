// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.WinSpool.pas' rev: 35.00 (Windows)

#ifndef Winapi_WinspoolHPP
#define Winapi_WinspoolHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

#include <winspool.h>


namespace Winapi
{
namespace Winspool
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef _PRINTER_CONNECTION_INFO_1A *PPrinterConnectionInfo1A;

typedef _PRINTER_CONNECTION_INFO_1W *PPrinterConnectionInfo1W;

typedef PPrinterConnectionInfo1W PPrinterConnectionInfo1;

typedef _PRINTER_CONNECTION_INFO_1A TPrinterConnectionInfo1A;

typedef _PRINTER_CONNECTION_INFO_1W TPrinterConnectionInfo1W;

typedef _PRINTER_CONNECTION_INFO_1W TPrinterConnectionInfo1;

typedef _PRINTER_ENUM_VALUESA *PPrinterEnumValuesA;

typedef _PRINTER_ENUM_VALUESW *PPrinterEnumValuesW;

typedef PPrinterEnumValuesW PPrinterEnumValues;

typedef _PRINTER_ENUM_VALUESA TPrinterEnumValuesA;

typedef _PRINTER_ENUM_VALUESW TPrinterEnumValuesW;

typedef _PRINTER_ENUM_VALUESW TPrinterEnumValues;

typedef _BINARY_CONTAINER *PBinaryContainer;

typedef _BINARY_CONTAINER TBinaryContainer;

typedef _BIDI_DATA *PBidiData;

typedef _BIDI_DATA TBidiData;

typedef _BIDI_REQUEST_DATA *PBidiRequestData;

typedef _BIDI_REQUEST_DATA TBidiRequestData;

typedef _BIDI_REQUEST_CONTAINER *PBidiRequestContainer;

typedef _BIDI_REQUEST_CONTAINER TBidiRequestContainer;

typedef _BIDI_RESPONSE_DATA *PBidiResponseData;

typedef _BIDI_RESPONSE_DATA TBidiResponseData;

typedef _BIDI_RESPONSE_CONTAINER *PBidiResponseContainer;

typedef _BIDI_RESPONSE_CONTAINER TBidiResponseContainer;

typedef _PRINTER_INFO_1A *PPrinterInfo1A;

typedef _PRINTER_INFO_1W *PPrinterInfo1W;

typedef PPrinterInfo1W PPrinterInfo1;

typedef _PRINTER_INFO_1A TPrinterInfo1A;

typedef _PRINTER_INFO_1W TPrinterInfo1W;

typedef _PRINTER_INFO_1W TPrinterInfo1;

typedef _PRINTER_INFO_2A *PPrinterInfo2A;

typedef _PRINTER_INFO_2W *PPrinterInfo2W;

typedef PPrinterInfo2W PPrinterInfo2;

typedef _PRINTER_INFO_2A TPrinterInfo2A;

typedef _PRINTER_INFO_2W TPrinterInfo2W;

typedef _PRINTER_INFO_2W TPrinterInfo2;

typedef _PRINTER_INFO_3 *PPrinterInfo3;

typedef _PRINTER_INFO_3 TPrinterInfo3;

typedef _PRINTER_INFO_4A *PPrinterInfo4A;

typedef _PRINTER_INFO_4W *PPrinterInfo4W;

typedef PPrinterInfo4W PPrinterInfo4;

typedef _PRINTER_INFO_4A TPrinterInfo4A;

typedef _PRINTER_INFO_4W TPrinterInfo4W;

typedef _PRINTER_INFO_4W TPrinterInfo4;

typedef _PRINTER_INFO_5A *PPrinterInfo5A;

typedef _PRINTER_INFO_5W *PPrinterInfo5W;

typedef PPrinterInfo5W PPrinterInfo5;

typedef _PRINTER_INFO_5A TPrinterInfo5A;

typedef _PRINTER_INFO_5W TPrinterInfo5W;

typedef _PRINTER_INFO_5W TPrinterInfo5;

typedef _PRINTER_INFO_6 *PPrinterInfo6;

typedef _PRINTER_INFO_6 TPrinterInfo6;

typedef _PRINTER_INFO_7A *PPrinterInfo7A;

typedef _PRINTER_INFO_7W *PPrinterInfo7W;

typedef PPrinterInfo7W PPrinterInfo7;

typedef _PRINTER_INFO_7A TPrinterInfo7A;

typedef _PRINTER_INFO_7W TPrinterInfo7W;

typedef _PRINTER_INFO_7W TPrinterInfo7;

typedef _PRINTER_INFO_8A *PPrinterInfo8A;

typedef _PRINTER_INFO_8W *PPrinterInfo8W;

typedef PPrinterInfo8W PPrinterInfo8;

typedef _PRINTER_INFO_8A TPrinterInfo8A;

typedef _PRINTER_INFO_8W TPrinterInfo8W;

typedef _PRINTER_INFO_8W TPrinterInfo8;

typedef _PRINTER_INFO_9A *PPrinterInfo9A;

typedef _PRINTER_INFO_9W *PPrinterInfo9W;

typedef PPrinterInfo9W PPrinterInfo9;

typedef _PRINTER_INFO_9A TPrinterInfo9A;

typedef _PRINTER_INFO_9W TPrinterInfo9W;

typedef _PRINTER_INFO_9W TPrinterInfo9;

typedef _JOB_INFO_1A *PJobInfo1A;

typedef _JOB_INFO_1W *PJobInfo1W;

typedef PJobInfo1W PJobInfo1;

typedef _JOB_INFO_1A TJobInfo1A;

typedef _JOB_INFO_1W TJobInfo1W;

typedef _JOB_INFO_1W TJobInfo1;

typedef _JOB_INFO_2A *PJobInfo2A;

typedef _JOB_INFO_2W *PJobInfo2W;

typedef PJobInfo2W PJobInfo2;

typedef _JOB_INFO_2A TJobInfo2A;

typedef _JOB_INFO_2W TJobInfo2W;

typedef _JOB_INFO_2W TJobInfo2;

typedef _JOB_INFO_3 *PJobInfo3;

typedef _JOB_INFO_3 TJobInfo3;

typedef _ADDJOB_INFO_1A *PAddJobInfo1A;

typedef _ADDJOB_INFO_1W *PAddJobInfo1W;

typedef PAddJobInfo1W PAddJobInfo1;

typedef _ADDJOB_INFO_1A TAddJobInfo1A;

typedef _ADDJOB_INFO_1W TAddJobInfo1W;

typedef _ADDJOB_INFO_1W TAddJobInfo1;

typedef _DRIVER_INFO_1A *PDriverInfo1A;

typedef _DRIVER_INFO_1W *PDriverInfo1W;

typedef PDriverInfo1W PDriverInfo1;

typedef _DRIVER_INFO_1A TDriverInfo1A;

typedef _DRIVER_INFO_1W TDriverInfo1W;

typedef _DRIVER_INFO_1W TDriverInfo1;

typedef _DRIVER_INFO_2A *PDriverInfo2A;

typedef _DRIVER_INFO_2W *PDriverInfo2W;

typedef PDriverInfo2W PDriverInfo2;

typedef _DRIVER_INFO_2A TDriverInfo2A;

typedef _DRIVER_INFO_2W TDriverInfo2W;

typedef _DRIVER_INFO_2W TDriverInfo2;

typedef _DRIVER_INFO_3A *PDriverInfo3A;

typedef _DRIVER_INFO_3W *PDriverInfo3W;

typedef PDriverInfo3W PDriverInfo3;

typedef _DRIVER_INFO_3A TDriverInfo3A;

typedef _DRIVER_INFO_3W TDriverInfo3W;

typedef _DRIVER_INFO_3W TDriverInfo3;

typedef _DRIVER_INFO_4A *PDriverInfo4A;

typedef _DRIVER_INFO_4W *PDriverInfo4W;

typedef PDriverInfo4W PDriverInfo4;

typedef _DRIVER_INFO_4A TDriverInfo4A;

typedef _DRIVER_INFO_4W TDriverInfo4W;

typedef _DRIVER_INFO_4W TDriverInfo4;

typedef _DRIVER_INFO_5A *PDriverInfo5A;

typedef _DRIVER_INFO_5W *PDriverInfo5W;

typedef PDriverInfo5W PDriverInfo5;

typedef _DRIVER_INFO_5A TDriverInfo5A;

typedef _DRIVER_INFO_5W TDriverInfo5W;

typedef _DRIVER_INFO_5W TDriverInfo5;

typedef _DRIVER_INFO_6A *PDriverInfo6A;

typedef _DRIVER_INFO_6W *PDriverInfo6W;

typedef PDriverInfo6W PDriverInfo6;

typedef _DRIVER_INFO_6A TDriverInfo6A;

typedef _DRIVER_INFO_6W TDriverInfo6W;

typedef _DRIVER_INFO_6W TDriverInfo6;

typedef _DRIVER_INFO_8A *PDriverInfo8A;

typedef _DRIVER_INFO_8W *PDriverInfo8W;

typedef PDriverInfo8W PDriverInfo8;

typedef _DRIVER_INFO_8A TDriverInfo8A;

typedef _DRIVER_INFO_8W TDriverInfo8W;

typedef _DRIVER_INFO_8W TDriverInfo8;

typedef _CORE_PRINTER_DRIVERA *PCorePrinterDriverA;

typedef _CORE_PRINTER_DRIVERW *PCorePrinterDriverW;

typedef PCorePrinterDriverW PCorePrinterDriver;

typedef _CORE_PRINTER_DRIVERA TCorePrinterDriverA;

typedef _CORE_PRINTER_DRIVERW TCorePrinterDriverW;

typedef _CORE_PRINTER_DRIVERW TCorePrinterDriver;

typedef _DOC_INFO_1A *PDocInfo1A;

typedef _DOC_INFO_1W *PDocInfo1W;

typedef PDocInfo1W PDocInfo1;

typedef _DOC_INFO_1A TDocInfo1A;

typedef _DOC_INFO_1W TDocInfo1W;

typedef _DOC_INFO_1W TDocInfo1;

typedef _FORM_INFO_1A *PFormInfo1A;

typedef _FORM_INFO_1W *PFormInfo1W;

typedef PFormInfo1W PFormInfo1;

typedef _FORM_INFO_1A TFormInfo1A;

typedef _FORM_INFO_1W TFormInfo1W;

typedef _FORM_INFO_1W TFormInfo1;

typedef _DOC_INFO_2A *PDocInfo2A;

typedef _DOC_INFO_2W *PDocInfo2W;

typedef PDocInfo2W PDocInfo2;

typedef _DOC_INFO_2A TDocInfo2A;

typedef _DOC_INFO_2W TDocInfo2W;

typedef _DOC_INFO_2W TDocInfo2;

typedef _DOC_INFO_3A *PDocInfo3A;

typedef _DOC_INFO_3W *PDocInfo3W;

typedef PDocInfo3W PDocInfo3;

typedef _DOC_INFO_3A TDocInfo3A;

typedef _DOC_INFO_3W TDocInfo3W;

typedef _DOC_INFO_3W TDocInfo3;

typedef _PRINTPROCESSOR_INFO_1A *PPrintProcessorInfo1A;

typedef _PRINTPROCESSOR_INFO_1W *PPrintProcessorInfo1W;

typedef PPrintProcessorInfo1W PPrintProcessorInfo1;

typedef _PRINTPROCESSOR_INFO_1A TPrintProcessorInfo1A;

typedef _PRINTPROCESSOR_INFO_1W TPrintProcessorInfo1W;

typedef _PRINTPROCESSOR_INFO_1W TPrintProcessorInfo1;

typedef _PORT_INFO_1A *PPortInfo1A;

typedef _PORT_INFO_1W *PPortInfo1W;

typedef PPortInfo1W PPortInfo1;

typedef _PORT_INFO_1A TPortInfo1A;

typedef _PORT_INFO_1W TPortInfo1W;

typedef _PORT_INFO_1W TPortInfo1;

typedef _PORT_INFO_2A *PPortInfo2A;

typedef _PORT_INFO_2W *PPortInfo2W;

typedef PPortInfo2W PPortInfo2;

typedef _PORT_INFO_2A TPortInfo2A;

typedef _PORT_INFO_2W TPortInfo2W;

typedef _PORT_INFO_2W TPortInfo2;

typedef _PORT_INFO_3A *PPortInfo3A;

typedef _PORT_INFO_3W *PPortInfo3W;

typedef PPortInfo3W PPortInfo3;

typedef _PORT_INFO_3A TPortInfo3A;

typedef _PORT_INFO_3W TPortInfo3W;

typedef _PORT_INFO_3W TPortInfo3;

typedef _MONITOR_INFO_1A *PMonitorInfo1A;

typedef _MONITOR_INFO_1W *PMonitorInfo1W;

typedef PMonitorInfo1W PMonitorInfo1;

typedef _MONITOR_INFO_1A TMonitorInfo1A;

typedef _MONITOR_INFO_1W TMonitorInfo1W;

typedef _MONITOR_INFO_1W TMonitorInfo1;

typedef _MONITOR_INFO_2A *PMonitorInfo2A;

typedef _MONITOR_INFO_2W *PMonitorInfo2W;

typedef PMonitorInfo2W PMonitorInfo2;

typedef _MONITOR_INFO_2A TMonitorInfo2A;

typedef _MONITOR_INFO_2W TMonitorInfo2W;

typedef _MONITOR_INFO_2W TMonitorInfo2;

typedef _DATATYPES_INFO_1A *PDatatypesInfo1A;

typedef _DATATYPES_INFO_1W *PDatatypesInfo1W;

typedef PDatatypesInfo1W PDatatypesInfo1;

typedef _DATATYPES_INFO_1A TDatatypesInfo1A;

typedef _DATATYPES_INFO_1W TDatatypesInfo1W;

typedef _DATATYPES_INFO_1W TDatatypesInfo1;

typedef _PRINTER_DEFAULTSA *PPrinterDefaultsA;

typedef _PRINTER_DEFAULTSW *PPrinterDefaultsW;

typedef PPrinterDefaultsW PPrinterDefaults;

typedef _PRINTER_DEFAULTSA TPrinterDefaultsA;

typedef _PRINTER_DEFAULTSW TPrinterDefaultsW;

typedef _PRINTER_DEFAULTSW TPrinterDefaults;

typedef _PRINTER_OPTIONSA *PPrinterOptionsA;

typedef _PRINTER_OPTIONSW *PPrinterOptionsW;

typedef PPrinterOptionsW PPrinterOptions;

typedef _PRINTER_OPTIONSA TPrinterOptionsA;

typedef _PRINTER_OPTIONSW TPrinterOptionsW;

typedef _PRINTER_OPTIONSW TPrinterOptions;

typedef _PRINTPROCESSOR_CAPS_1 *PPrintProcessorCaps1;

typedef _PRINTPROCESSOR_CAPS_1 TPrintProcessorCaps1;

typedef _PRINTPROCESSOR_CAPS_2 *PPrintProcessorCaps2;

typedef _PRINTPROCESSOR_CAPS_2 TPrintProcessorCaps2;

typedef _PRINTER_NOTIFY_OPTIONS_TYPE *PPrinterNotifyOptionsType;

typedef _PRINTER_NOTIFY_OPTIONS_TYPE TPrinterNotifyOptionsType;

typedef _PRINTER_NOTIFY_OPTIONS *PPrinterNotifyOptions;

typedef _PRINTER_NOTIFY_OPTIONS TPrinterNotifyOptions;

typedef _PRINTER_NOTIFY_INFO_DATA *PPrinterNotifyInfoData;

typedef _PRINTER_NOTIFY_INFO_DATA TPrinterNotifyInfoData;

typedef _PRINTER_NOTIFY_INFO *PPrinterNotifyInfo;

typedef _PRINTER_NOTIFY_INFO TPrinterNotifyInfo;

typedef _PROVIDOR_INFO_1A *PProvidorInfo1A;

typedef _PROVIDOR_INFO_1W *PProvidorInfo1W;

typedef PProvidorInfo1W PProvidorInfo1;

typedef _PROVIDOR_INFO_1A TProvidorInfo1A;

typedef _PROVIDOR_INFO_1W TProvidorInfo1W;

typedef _PROVIDOR_INFO_1W TProvidorInfo1;

typedef _PROVIDOR_INFO_2A *PProvidorInfo2A;

typedef _PROVIDOR_INFO_2W *PProvidorInfo2W;

typedef PProvidorInfo2W PProvidorInfo2;

typedef _PROVIDOR_INFO_2A TProvidorInfo2A;

typedef _PROVIDOR_INFO_2W TProvidorInfo2W;

typedef _PROVIDOR_INFO_2W TProvidorInfo2;

typedef _PROVIDOR_INFO_2A PROVIDOR_INFO_2A;

typedef _PROVIDOR_INFO_2W PROVIDOR_INFO_2W;

typedef _PROVIDOR_INFO_2W PROVIDOR_INFO_2;

//-- var, const, procedure ---------------------------------------------------
#define winspl L"winspool.drv"
}	/* namespace Winspool */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_WINSPOOL)
using namespace Winapi::Winspool;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_WinspoolHPP
