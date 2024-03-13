// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.Qos.pas' rev: 35.00 (Windows)

#ifndef Winapi_QosHPP
#define Winapi_QosHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

#include "qos.h"


namespace Winapi
{
namespace Qos
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef unsigned TServiceType;

typedef unsigned *PServiceType;

typedef _flowspec TFlowSpec;

typedef QOS_OBJECT_HDR TQOSObjectHdr;

typedef LPQOS_OBJECT_HDR PQOSObjectHdr;

typedef _QOS_SD_MODE TQOSSDMode;

typedef LPQOS_SD_MODE PQOSSDMode;

typedef _QOS_SHAPING_RATE TQOSShapingRate;

typedef LPQOS_SHAPING_RATE PQOSShapingRate;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Qos */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_QOS)
using namespace Winapi::Qos;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_QosHPP
