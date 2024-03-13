// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.PropSys.pas' rev: 35.00 (Windows)

#ifndef Winapi_PropsysHPP
#define Winapi_PropsysHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.StructuredQueryCondition.hpp>

//-- user supplied -----------------------------------------------------------
#include <propsys.h>
DECLARE_DINTERFACE_TYPE(IInitializeWithFile);
DECLARE_DINTERFACE_TYPE(IInitializeWithStream);
DECLARE_DINTERFACE_TYPE(IPropertyStore);
DECLARE_DINTERFACE_TYPE(INamedPropertyStore);
DECLARE_DINTERFACE_TYPE(IObjectWithPropertyKey);
DECLARE_DINTERFACE_TYPE(IPropertyChange);
DECLARE_DINTERFACE_TYPE(IPropertyChangeArray);
DECLARE_DINTERFACE_TYPE(IPropertyStoreCapabilities);
DECLARE_DINTERFACE_TYPE(IPropertyStoreCache);
DECLARE_DINTERFACE_TYPE(IPropertyEnumType);
DECLARE_DINTERFACE_TYPE(IPropertyEnumType2);
DECLARE_DINTERFACE_TYPE(IPropertyEnumTypeList);
DECLARE_DINTERFACE_TYPE(IPropertyDescription);
DECLARE_DINTERFACE_TYPE(IPropertyDescription2);
DECLARE_DINTERFACE_TYPE(IPropertyDescriptionAliasInfo);
DECLARE_DINTERFACE_TYPE(IPropertyDescriptionSearchInfo);
DECLARE_DINTERFACE_TYPE(IPropertyDescriptionRelatedPropertyInfo);
DECLARE_DINTERFACE_TYPE(IPropertySystem);
DECLARE_DINTERFACE_TYPE(IPropertyDescriptionList);
DECLARE_DINTERFACE_TYPE(IPropertyStoreFactory);
DECLARE_DINTERFACE_TYPE(IDelayedPropertyStoreFactory);
DECLARE_DINTERFACE_TYPE(IPersistSerializedPropStorage);
DECLARE_DINTERFACE_TYPE(IPersistSerializedPropStorage2);
DECLARE_DINTERFACE_TYPE(IPropertySystemChangeNotify);
DECLARE_DINTERFACE_TYPE(ICreateObject);

namespace Winapi
{
namespace Propsys
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef GETPROPERTYSTOREFLAGS TGetPropertyStoreFlags;

typedef PKA_FLAGS TPKAFlags;

typedef PSC_STATE TPSCState;

typedef PROPENUMTYPE TPropEnumType;

typedef PROPDESC_TYPE_FLAGS TPropDescTypeFlags;

typedef PROPDESC_VIEW_FLAGS TPropDescViewFlags;

typedef PROPDESC_DISPLAYTYPE TPropDescDisplayType;

typedef PROPDESC_GROUPING_RANGE TPropDescGroupingRange;

typedef PROPDESC_FORMAT_FLAGS TPropDescFormatFlags;

typedef PROPDESC_SORTDESCRIPTION TPropDescSortDescription;

typedef PROPDESC_RELATIVEDESCRIPTION_TYPE TPropDescRelativeDescriptionType;

typedef PROPDESC_AGGREGATION_TYPE TPropDescAggregationType;

typedef PROPDESC_CONDITION_TYPE TPropDescConditionType;

typedef PROPDESC_SEARCHINFO_FLAGS TPropDescSearchInfoFlags;

typedef PROPDESC_COLUMNINDEX_TYPE TPropDescColumnIndexType;

typedef PROPDESC_ENUMFILTER TPropDescEnumFilter;

typedef int TPersistSPropStoreFlags;

typedef SERIALIZEDPROPSTORAGE TSerializedPropStorage;

typedef SERIALIZEDPROPSTORAGE *PSerializedPropStorage;

//-- var, const, procedure ---------------------------------------------------
#define SID_IInitializeWithFile L"{b7d14566-0509-4cce-a71f-0a554233bd9b}"
#define SID_IInitializeWithStream L"{b824b49d-22ac-4161-ac8a-9916e8fa3f7f}"
#define SID_IPropertyStore L"{886d8eeb-8cf2-4446-8d02-cdba1dbdcf99}"
#define SID_INamedPropertyStore L"{71604b0f-97b0-4764-8577-2f13e98a1422}"
#define SID_IObjectWithPropertyKey L"{fc0ca0a7-c316-4fd2-9031-3e628e6d4f23}"
#define SID_IPropertyChange L"{f917bc8a-1bba-4478-a245-1bde03eb9431}"
#define SID_IPropertyChangeArray L"{380f5cad-1b5e-42f2-805d-637fd392d31e}"
#define SID_IPropertyStoreCapabilities L"{c8e2d566-186e-4d49-bf41-6909ead56acc}"
#define SID_IPropertyStoreCache L"{3017056d-9a91-4e90-937d-746c72abbf4f}"
#define SID_IPropertyEnumType L"{11e1fbf9-2d56-4a6b-8db3-7cd193a471f2}"
#define SID_IPropertyEnumType2 L"{9b6e051c-5ddd-4321-9070-fe2acb55e794}"
#define SID_IPropertyEnumTypeList L"{a99400f4-3d84-4557-94ba-1242fb2cc9a6}"
#define SID_IPropertyDescription L"{6f79d558-3e96-4549-a1d1-7d75d2288814}"
#define SID_IPropertyDescription2 L"{57d2eded-5062-400e-b107-5dae79fe57a6}"
#define SID_IPropertyDescriptionAliasInfo L"{f67104fc-2af9-46fd-b32d-243c1404f3d1}"
#define SID_IPropertyDescriptionSearchInfo L"{078f91bd-29a2-440f-924e-46a291524520}"
#define SID_IPropertyDescriptionRelatedPropertyInfo L"{507393f4-2a3d-4a60-b59e-d9c75716c2dd}"
#define SID_IPropertySystem L"{ca724e8a-c3e6-442b-88a4-6fb0db8035a3}"
#define SID_IPropertyDescriptionList L"{1f9fc1d0-c39b-4b26-817f-011967d3440e}"
#define SID_IPropertyStoreFactory L"{bc110b6d-57e8-4148-a9c6-91015ab2f3a5}"
#define SID_IDelayedPropertyStoreFactory L"{40d4577f-e237-4bdb-bd69-58f089431b6a}"
#define SID_IPersistSerializedPropStorage L"{e318ad57-0aa0-450f-aca5-6fab7103d917}"
#define SID_IPersistSerializedPropStorage2 L"{77effa68-4f98-4366-ba72-573b3d880571}"
#define SID_IPropertySystemChangeNotify L"{fa955fd9-38be-4879-a6ce-824cf52d609f}"
#define SID_ICreateObject L"{75121952-e0d0-43e5-9380-1d80483acf72}"
}	/* namespace Propsys */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_PROPSYS)
using namespace Winapi::Propsys;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_PropsysHPP
