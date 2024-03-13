// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.StructuredQueryCondition.pas' rev: 35.00 (Windows)

#ifndef Winapi_StructuredqueryconditionHPP
#define Winapi_StructuredqueryconditionHPP

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
#include <structuredquerycondition.h>
DECLARE_DINTERFACE_TYPE(IRichChunk);
DECLARE_DINTERFACE_TYPE(ICondition);
DECLARE_DINTERFACE_TYPE(ICondition2);

namespace Winapi
{
namespace Structuredquerycondition
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef CONDITION_TYPE TConditionType;

typedef CONDITION_OPERATION TConditionOperation;

//-- var, const, procedure ---------------------------------------------------
#define SID_IRichChunk L"{4FDEF69C-DBC9-454e-9910-B34F3C64B510}"
#define SID_ICondition L"{0FC988D4-C935-4b97-A973-46282EA175C8}"
#define SID_ICondition2 L"{0DB8851D-2E5B-47eb-9208-D28C325A01D7}"
}	/* namespace Structuredquerycondition */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_STRUCTUREDQUERYCONDITION)
using namespace Winapi::Structuredquerycondition;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_StructuredqueryconditionHPP
