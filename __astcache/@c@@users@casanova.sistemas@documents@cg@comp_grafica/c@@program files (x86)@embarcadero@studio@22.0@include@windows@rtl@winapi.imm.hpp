// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.Imm.pas' rev: 35.00 (Windows)

#ifndef Winapi_ImmHPP
#define Winapi_ImmHPP

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

namespace Winapi
{
namespace Imm
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef tagCOMPOSITIONFORM *PCompositionForm;

typedef tagCOMPOSITIONFORM TCompositionForm;

typedef tagCANDIDATEFORM *PCandidateForm;

typedef tagCANDIDATEFORM TCandidateForm;

typedef tagCANDIDATELIST *PCandidateList;

typedef tagCANDIDATELIST TCandidateList;

typedef tagREGISTERWORDA *PRegisterWordA;

typedef tagREGISTERWORDW *PRegisterWordW;

typedef PRegisterWordW PRegisterWord;

typedef tagREGISTERWORDA TRegisterWordA;

typedef tagREGISTERWORDW TRegisterWordW;

typedef tagREGISTERWORDW TRegisterWord;

typedef tagSTYLEBUFA *PStyleBufA;

typedef tagSTYLEBUFW *PStyleBufW;

typedef PStyleBufW PStyleBuf;

typedef tagSTYLEBUFA TStyleBufA;

typedef tagSTYLEBUFW TStyleBufW;

typedef tagSTYLEBUFW TStyleBuf;

typedef REGISTERWORDENUMPROCW RegisterWordEnumProc;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 CFS_SCREEN = System::Int8(0x4);
#define imm32 L"imm32.dll"
}	/* namespace Imm */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_IMM)
using namespace Winapi::Imm;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_ImmHPP
