// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.ActiveX.pas' rev: 35.00 (Windows)

#ifndef Winapi_ActivexHPP
#define Winapi_ActivexHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------
#include <olectl.h>
#include <docobj.H>
#include <oleauto.h>
#include <propidl.h>
#include <ocidl.h>
#include <comcat.h>
#include <dispex.h>
#include <objsafe.h>
#include <propvarutil.h>
#ifndef _WIN64
#pragma link "propsys.lib"
#endif //_WIN64
#if defined(StrToInt) && !defined(NO_UNDEF_StrToInt)
 #undef StrToInt // Conflicts /w System::Sysutils::StrToInt
#endif

DECLARE_DINTERFACE_TYPE(IClassFactory)
DECLARE_DINTERFACE_TYPE(IMarshal)
DECLARE_DINTERFACE_TYPE(IMalloc)
DECLARE_DINTERFACE_TYPE(IMallocSpy)
DECLARE_DINTERFACE_TYPE(IStdMarshalInfo)
DECLARE_DINTERFACE_TYPE(IExternalConnection)
DECLARE_DINTERFACE_TYPE(IEnumUnknown)
DECLARE_DINTERFACE_TYPE(IBindCtx)
DECLARE_DINTERFACE_TYPE(IEnumMoniker)
DECLARE_DINTERFACE_TYPE(IRunnableObject)
DECLARE_DINTERFACE_TYPE(IRunningObjectTable)
DECLARE_DINTERFACE_TYPE(IPersist)
DECLARE_DINTERFACE_TYPE(IPersistStream)
DECLARE_DINTERFACE_TYPE(IMoniker)
DECLARE_DINTERFACE_TYPE(IEnumString)
DECLARE_DINTERFACE_TYPE(ISequentialStream)
DECLARE_DINTERFACE_TYPE(IStream)
DECLARE_DINTERFACE_TYPE(IEnumSTATSTG)
DECLARE_DINTERFACE_TYPE(IStorage)
DECLARE_DINTERFACE_TYPE(IPersistFile)
DECLARE_DINTERFACE_TYPE(IPersistStorage)
DECLARE_DINTERFACE_TYPE(ILockBytes)
DECLARE_DINTERFACE_TYPE(IEnumFORMATETC)
DECLARE_DINTERFACE_TYPE(IEnumSTATDATA)
DECLARE_DINTERFACE_TYPE(IRootStorage)
DECLARE_DINTERFACE_TYPE(IAdviseSink)
DECLARE_DINTERFACE_TYPE(IAdviseSink2)
DECLARE_DINTERFACE_TYPE(IDataObject)
DECLARE_DINTERFACE_TYPE(IDataAdviseHolder)
DECLARE_DINTERFACE_TYPE(IMessageFilter)
DECLARE_DINTERFACE_TYPE(IRpcProxyBuffer)
DECLARE_DINTERFACE_TYPE(IRpcStubBuffer)
DECLARE_DINTERFACE_TYPE(IPSFactoryBuffer)
DECLARE_DINTERFACE_TYPE(IChannelHook)
DECLARE_DINTERFACE_TYPE(IFillLockBytes)
DECLARE_DINTERFACE_TYPE(IPropertyStorage)
DECLARE_DINTERFACE_TYPE(IPropertySetStorage)
DECLARE_DINTERFACE_TYPE(IEnumSTATPROPSTG)
DECLARE_DINTERFACE_TYPE(IEnumSTATPROPSETSTG)
DECLARE_DINTERFACE_TYPE(IGlobalInterfaceTable)
DECLARE_DINTERFACE_TYPE(ICreateTypeInfo)
DECLARE_DINTERFACE_TYPE(ICreateTypeInfo2)
DECLARE_DINTERFACE_TYPE(ICreateTypeLib)
DECLARE_DINTERFACE_TYPE(ICreateTypeLib2)
DECLARE_DINTERFACE_TYPE(IEnumVARIANT)
DECLARE_DINTERFACE_TYPE(ITypeComp)
DECLARE_DINTERFACE_TYPE(ITypeInfo)
DECLARE_DINTERFACE_TYPE(ITypeLib)
DECLARE_DINTERFACE_TYPE(ITypeLib2)
DECLARE_DINTERFACE_TYPE(ITypeInfo2)
DECLARE_DINTERFACE_TYPE(IErrorInfo)
DECLARE_DINTERFACE_TYPE(ICreateErrorInfo)
DECLARE_DINTERFACE_TYPE(ISupportErrorInfo)
DECLARE_DINTERFACE_TYPE(IOleAdviseHolder)
DECLARE_DINTERFACE_TYPE(IOleCache)
DECLARE_DINTERFACE_TYPE(IOleCache2)
DECLARE_DINTERFACE_TYPE(IOleCacheControl)
DECLARE_DINTERFACE_TYPE(IParseDisplayName)
DECLARE_DINTERFACE_TYPE(IOleContainer)
DECLARE_DINTERFACE_TYPE(IOleClientSite)
DECLARE_DINTERFACE_TYPE(IOleObject)
DECLARE_DINTERFACE_TYPE(IOleWindow)
DECLARE_DINTERFACE_TYPE(IOleLink)
DECLARE_DINTERFACE_TYPE(IOleItemContainer)
DECLARE_DINTERFACE_TYPE(IOleInPlaceUIWindow)
DECLARE_DINTERFACE_TYPE(IOleInPlaceActiveObject)
DECLARE_DINTERFACE_TYPE(IOleInPlaceFrame)
DECLARE_DINTERFACE_TYPE(IOleInPlaceObject)
DECLARE_DINTERFACE_TYPE(IOleInPlaceSite)
DECLARE_DINTERFACE_TYPE(IViewObject)
DECLARE_DINTERFACE_TYPE(IViewObject2)
DECLARE_DINTERFACE_TYPE(IDropSource)
DECLARE_DINTERFACE_TYPE(IDropTarget)
DECLARE_DINTERFACE_TYPE(IEnumOLEVERB)
DECLARE_DINTERFACE_TYPE(IOleControl)
DECLARE_DINTERFACE_TYPE(IOleControlSite)
DECLARE_DINTERFACE_TYPE(ISimpleFrameSite)
DECLARE_DINTERFACE_TYPE(IObjectWithSite)
DECLARE_DINTERFACE_TYPE(IErrorLog)
DECLARE_DINTERFACE_TYPE(IPropertyBag)
DECLARE_DINTERFACE_TYPE(IPersistPropertyBag)
DECLARE_DINTERFACE_TYPE(IPersistStreamInit)
DECLARE_DINTERFACE_TYPE(IPropertyNotifySink)
DECLARE_DINTERFACE_TYPE(IProvideClassInfo)
DECLARE_DINTERFACE_TYPE(IConnectionPointContainer)
DECLARE_DINTERFACE_TYPE(IEnumConnectionPoints)
DECLARE_DINTERFACE_TYPE(IConnectionPoint)
DECLARE_DINTERFACE_TYPE(IEnumConnections)
DECLARE_DINTERFACE_TYPE(IClassFactory2)
DECLARE_DINTERFACE_TYPE(IOleInPlaceObjectWindowless)
DECLARE_DINTERFACE_TYPE(IOleInPlaceSiteEx )
DECLARE_DINTERFACE_TYPE(IOleInPlaceSiteWindowless)
DECLARE_DINTERFACE_TYPE(ISpecifyPropertyPages)
DECLARE_DINTERFACE_TYPE(IPerPropertyBrowsing)
DECLARE_DINTERFACE_TYPE(IUnknown)
DECLARE_DINTERFACE_TYPE(IPropertyPageSite)
DECLARE_DINTERFACE_TYPE(IPropertyPage)
DECLARE_DINTERFACE_TYPE(IPropertyPage2)
DECLARE_DINTERFACE_TYPE(IFont)
DECLARE_DINTERFACE_TYPE(IFontDisp)
DECLARE_DINTERFACE_TYPE(IPicture)
DECLARE_DINTERFACE_TYPE(IPictureDisp)
DECLARE_DINTERFACE_TYPE(IOleDocumentView)
DECLARE_DINTERFACE_TYPE(IEnumOleDocumentViews)
DECLARE_DINTERFACE_TYPE(IOleDocument)
DECLARE_DINTERFACE_TYPE(IOleDocumentSite)
DECLARE_DINTERFACE_TYPE(IContinueCallback)
DECLARE_DINTERFACE_TYPE(IServiceProvider)
DECLARE_DINTERFACE_TYPE(IPrint)
DECLARE_DINTERFACE_TYPE(IOleCommandTarget)
DECLARE_DINTERFACE_TYPE(IEnumGUID)
DECLARE_DINTERFACE_TYPE(IEnumCATEGORYINFO)
DECLARE_DINTERFACE_TYPE(ICatRegister)
DECLARE_DINTERFACE_TYPE(ICatInformation)
DECLARE_DINTERFACE_TYPE(IBindHost)
DECLARE_DINTERFACE_TYPE(IOleUndoManager)
DECLARE_DINTERFACE_TYPE(IQuickActivate)
DECLARE_DINTERFACE_TYPE(IObjectSafety)
DECLARE_DINTERFACE_TYPE(IDispatchEx)
DECLARE_DINTERFACE_TYPE(IRecordInfo)

namespace Winapi
{
namespace Activex
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IWeakRef;
typedef System::DelphiInterface<IWeakRef> _di_IWeakRef;
//-- type declarations -------------------------------------------------------
typedef unsigned *PPropID;

typedef unsigned TPropID;

typedef _tagpropertykey *PPropertyKey;

typedef _tagpropertykey TPropertyKey;

typedef System::Types::TRect *PBorderWidths;

typedef System::Types::TRect TBorderWidths;

typedef HRESULT *PHResult;

typedef System::StaticArray<HRESULT, 65536> TResultList;

typedef TResultList *PResultList;

typedef System::StaticArray<System::_di_IInterface, 65536> TUnknownList;

typedef TUnknownList *PUnknownList;

typedef System::WideChar TOleChar;

typedef System::WideChar * POleStr;

typedef System::WideChar * *PPOleStr;

typedef System::StaticArray<System::WideChar *, 65536> TOleStrList;

typedef TOleStrList *POleStrList;

typedef System::PGUID PIID;

typedef GUID TIID;

typedef System::PGUID PCLSID;

typedef GUID TCLSID;

typedef _OBJECTID *PObjectID;

typedef _OBJECTID TObjectID;

typedef unsigned TLCID;

typedef GUID *PFmtID;

typedef GUID TFmtID;

typedef Winapi::Windows::PTextMetricW PTextMetricOle;

typedef tagTEXTMETRICW TTextMetricOle;

typedef unsigned TOleColor;

typedef _COSERVERINFO *PCoServerInfo;

typedef _COSERVERINFO TCoServerInfo;

typedef tagMULTI_QI *PMultiQI;

typedef tagMULTI_QI TMultiQI;

typedef System::StaticArray<tagMULTI_QI, 65536> TMultiQIArray;

typedef TMultiQIArray *PMultiQIArray;

typedef tagSAFEARRAYBOUND *PSafeArrayBound;

typedef tagSAFEARRAYBOUND TSafeArrayBound;

typedef tagSAFEARRAY *PSafeArray;

typedef tagSAFEARRAY TSafeArray;

typedef double *POleDate;

typedef System::WordBool *POleBool;

typedef int TOldOleEnum;

typedef unsigned TOleEnum;

typedef tagCONTROLINFO *PControlInfo;

typedef tagCONTROLINFO TControlInfo;

__interface  INTERFACE_UUID("{A35E20C2-837D-11D0-9E9F-00A02457621F}") IWeakRef  : public System::IInterface 
{
	virtual int __stdcall ChangeWeakCount(int delta) = 0 ;
	virtual int __stdcall ReleaseKeepAlive(const System::_di_IInterface unkReleased, int reserved) = 0 ;
};

typedef tagBIND_OPTS *PBindOpts;

typedef tagBIND_OPTS TBindOpts;

typedef tagSTATSTG *PStatStg;

typedef tagSTATSTG TStatStg;

typedef System::WideChar * *TSNB;

typedef tagDVTARGETDEVICE *PDVTargetDevice;

typedef tagDVTARGETDEVICE TDVTargetDevice;

typedef tagFORMATETC *PFormatEtc;

typedef tagFORMATETC TFormatEtc;

typedef System::DynamicArray<tagFORMATETC> TFormatEtcArray;

typedef tagSTATDATA *PStatData;

typedef tagSTATDATA TStatData;

typedef tagRemSTGMEDIUM *PRemStgMedium;

typedef tagRemSTGMEDIUM TRemStgMedium;

typedef tagSTGMEDIUM *PStgMedium;

typedef tagSTGMEDIUM TStgMedium;

typedef tagINTERFACEINFO *PInterfaceInfo;

typedef tagINTERFACEINFO TInterfaceInfo;

typedef unsigned TRpcOleDataRep;

typedef tagRPCOLEMESSAGE *PRpcOleMessage;

typedef tagRPCOLEMESSAGE TRpcOleMessage;

typedef System::WideChar * *PBStr;

typedef System::WideChar * TBStr;

typedef System::StaticArray<System::WideChar *, 65536> TBStrList;

typedef TBStrList *PBStrList;

typedef System::Comp *PComp;

typedef tagDEC *PDecimal;

typedef tagDEC TDecimal;

typedef tagCLIPDATA *PClipData;

typedef tagCLIPDATA TClipData;

typedef tagPROPVARIANT *PPropVariant;

typedef tagCAUB *PCAUB;

typedef tagCAUB TCAUB;

typedef tagCAI *PCAI;

typedef tagCAI TCAI;

typedef tagCAUI *PCAUI;

typedef tagCAUI TCAUI;

typedef tagCAL *PCAL;

typedef tagCAL TCAL;

typedef tagCAUL *PCAUL;

typedef tagCAUL TCAUL;

typedef tagCAFLT *PCAFLT;

typedef tagCAFLT TCAFLT;

typedef tagCADBL *PCADBL;

typedef tagCADBL TCADBL;

typedef tagCACY *PCACY;

typedef tagCACY TCACY;

typedef tagCADATE *PCADATE;

typedef tagCADATE TCADATE;

typedef tagCABSTR *PCABSTR;

typedef tagCABSTR TCABSTR;

typedef tagCABOOL *PCABOOL;

typedef tagCABOOL TCABOOL;

typedef tagCASCODE *PCASCODE;

typedef tagCASCODE TCASCODE;

typedef tagCAPROPVARIANT *PCAPROPVARIANT;

typedef tagCAPROPVARIANT TCAPROPVARIANT;

typedef tagCAH *PCAH;

typedef tagCAH TCAH;

typedef tagCAUH *PCAUH;

typedef tagCAUH TCAUH;

typedef tagCALPSTR *PCALPSTR;

typedef tagCALPSTR TCALPSTR;

typedef tagCALPWSTR *PCALPWSTR;

typedef tagCALPWSTR TCALPWSTR;

typedef tagCAFILETIME *PCAFILETIME;

typedef tagCAFILETIME TCAFILETIME;

typedef tagCACLIPDATA *PCACLIPDATA;

typedef tagCACLIPDATA TCACLIPDATA;

typedef tagCACLSID *PCACLSID;

typedef tagCACLSID TCACLSID;

typedef tagPROPVARIANT TPropVariant;

typedef tagPROPSPEC *PPropSpec;

typedef tagPROPSPEC TPropSpec;

typedef tagSTATPROPSTG *PStatPropStg;

typedef tagSTATPROPSTG TStatPropStg;

typedef tagSTATPROPSETSTG *PStatPropSetStg;

typedef tagSTATPROPSETSTG TStatPropSetStg;

typedef tagVARIANT *PVariantArg;

typedef tagVARIANT TVariantArg;

typedef System::StaticArray<tagVARIANT, 65536> TVariantArgList;

typedef TVariantArgList *PVariantArgList;

typedef int TDispID;

typedef System::StaticArray<int, 65536> TDispIDList;

typedef TDispIDList *PDispIDList;

typedef int TMemberID;

typedef System::StaticArray<int, 65536> TMemberIDList;

typedef TMemberIDList *PMemberIDList;

typedef unsigned HRefType;

typedef tagARRAYDESC *PArrayDesc;

typedef tagTYPEDESC *PTypeDesc;

typedef tagTYPEDESC TTypeDesc;

typedef tagARRAYDESC TArrayDesc;

typedef tagIDLDESC *PIDLDesc;

typedef tagIDLDESC TIDLDesc;

typedef tagPARAMDESCEX *PParamDescEx;

typedef tagPARAMDESCEX TParamDescEx;

typedef tagPARAMDESC *PParamDesc;

typedef tagPARAMDESC TParamDesc;

typedef tagELEMDESC *PElemDesc;

typedef tagELEMDESC TElemDesc;

typedef System::StaticArray<tagELEMDESC, 65536> TElemDescList;

typedef TElemDescList *PElemDescList;

typedef tagTYPEATTR *PTypeAttr;

typedef tagTYPEATTR TTypeAttr;

typedef tagDISPPARAMS *PDispParams;

typedef tagDISPPARAMS TDispParams;

typedef tagEXCEPINFO *PExcepInfo;

typedef tagEXCEPINFO TExcepInfo;

typedef int TFuncKind;

typedef int TInvokeKind;

typedef int TCallConv;

typedef tagFUNCDESC *PFuncDesc;

typedef tagFUNCDESC TFuncDesc;

typedef int TVarKind;

typedef tagVARDESC *PVarDesc;

typedef tagVARDESC TVarDesc;

typedef int TDescKind;

typedef tagBINDPTR *PBindPtr;

typedef tagBINDPTR TBindPtr;

typedef int TSysKind;

typedef tagTLIBATTR *PTLibAttr;

typedef tagTLIBATTR TTLibAttr;

typedef System::StaticArray<_di_ITypeInfo, 65536> TTypeInfoList;

typedef TTypeInfoList *PTypeInfoList;

typedef tagCUSTDATAITEM *PCustDataItem;

typedef tagCUSTDATAITEM TCustDataItem;

typedef System::StaticArray<tagCUSTDATAITEM, 65536> TCustDataItemList;

typedef TCustDataItemList *PCustDataItemList;

typedef tagCUSTDATA *PCustData;

typedef tagCUSTDATA TCustData;

typedef tagPARAMDATA *PParamData;

typedef tagPARAMDATA TParamData;

typedef System::StaticArray<tagPARAMDATA, 65536> TParamDataList;

typedef TParamDataList *PParamDataList;

typedef tagMETHODDATA *PMethodData;

typedef tagMETHODDATA TMethodData;

typedef System::StaticArray<tagMETHODDATA, 65536> TMethodDataList;

typedef TMethodDataList *PMethodDataList;

typedef tagINTERFACEDATA *PInterfaceData;

typedef tagINTERFACEDATA TInterfaceData;

typedef tagREGKIND TRegKind;

typedef tagOBJECTDESCRIPTOR *PObjectDescriptor;

typedef tagOBJECTDESCRIPTOR TObjectDescriptor;

typedef PObjectDescriptor PLinkSrcDescriptor;

typedef tagOBJECTDESCRIPTOR TLinkSrcDescriptor;

typedef tagOIFI *POleInPlaceFrameInfo;

typedef tagOIFI TOleInPlaceFrameInfo;

typedef tagOleMenuGroupWidths *POleMenuGroupWidths;

typedef tagOleMenuGroupWidths TOleMenuGroupWidths;

typedef System::LongBool __stdcall (*TContinueFunc)(int dwContinue);

typedef tagOLEVERB *POleVerb;

typedef tagOLEVERB TOleVerb;

typedef tagCONNECTDATA *PConnectData;

typedef tagCONNECTDATA TConnectData;

typedef tagLICINFO *PLicInfo;

typedef tagLICINFO TLicInfo;

typedef System::StaticArray<GUID, 65536> TGUIDList;

typedef TGUIDList *PGUIDList;

typedef tagCAUUID *PCAGUID;

typedef tagCAUUID TCAGUID;

typedef tagCALPOLESTR *PCAPOleStr;

typedef tagCALPOLESTR TCAPOleStr;

typedef System::StaticArray<int, 65536> TLongintList;

typedef TLongintList *PLongintList;

typedef tagCADWORD *PCALongint;

typedef tagCADWORD TCALongint;

typedef tagOCPFIPARAMS *POCPFIParams;

typedef tagOCPFIPARAMS TOCPFIParams;

typedef tagPROPPAGEINFO *PPropPageInfo;

typedef tagPROPPAGEINFO TPropPageInfo;

typedef tagPROPBAG2 TPropBag2;

typedef tagPROPBAG2 *PPropBag2;

typedef tagFONTDESC *PFontDesc;

typedef tagFONTDESC TFontDesc;

typedef tagPICTDESC *PPictDesc;

typedef tagPICTDESC TPictDesc;

typedef tagPAGERANGE *PPageRange;

typedef tagPAGERANGE TPageRange;

typedef tagPAGESET *PPageSet;

typedef tagPAGESET TPageSet;

typedef _tagOLECMD *POleCmd;

typedef _tagOLECMD TOleCmd;

typedef _tagOLECMDTEXT *POleCmdText;

typedef _tagOLECMDTEXT TOleCmdText;

typedef tagQACONTAINER *PQaContainer;

typedef tagQACONTAINER TQaContainer;

typedef tagQACONTROL *PQaControl;

typedef tagQACONTROL TQaControl;

typedef tagSERIALIZEDPROPERTYVALUE TSerializedPropertyValue;

//-- var, const, procedure ---------------------------------------------------
static const int CLSCTX_FROM_DEFAULT_CONTEXT = int(0x20000);
extern DELPHI_PACKAGE GUID CLSID_StdComponentCategoryMgr;
extern DELPHI_PACKAGE void __fastcall PropVariantInit(/* out */ tagPROPVARIANT &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromBoolean(System::LongBool fVal, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromInt16(short nVal, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromUInt16(System::Word uiVal, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromInt32(int lVal, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromUInt32(unsigned ulVal, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromInt64(__int64 llVal, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromUInt64(unsigned __int64 ullVal, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromDouble(double dblVal, /* out */ tagPROPVARIANT &ppropvar);
extern "C" HRESULT __stdcall _SHStrDupW(System::WideChar * psz, /* out */ System::WideChar * &ppwsz);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromString(System::WideChar * psz, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitPropVariantFromGUIDAsBuffer(const GUID &guid, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE System::LongBool __fastcall IsPropVariantVector(const tagPROPVARIANT &propvar);
extern DELPHI_PACKAGE System::LongBool __fastcall IsPropVariantString(const tagPROPVARIANT &propvar);
extern DELPHI_PACKAGE HRESULT __fastcall PropVariantToCLSID(const tagPROPVARIANT &propvarIn, /* out */ GUID &pclsid);
extern DELPHI_PACKAGE int __fastcall PropVariantCompare(const tagPROPVARIANT &propvar1, const tagPROPVARIANT &propvar2);
extern DELPHI_PACKAGE HRESULT __fastcall PropVariantGetElem(const tagPROPVARIANT &propvarIn, unsigned iElem, /* out */ tagPROPVARIANT &ppropvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromBoolean(System::LongBool fVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromInt16(short iVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromUInt16(System::Word uiVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromInt32(int lVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromUInt32(unsigned ulVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromInt64(__int64 llVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromUInt64(unsigned __int64 ullVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromDouble(double dblVal, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromString(System::WideChar * psz, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromDispatch(const _di_IDispatch pdisp, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromDosDateTime(System::Word wDate, System::Word wTime, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE bool __fastcall IsVarTypeFloat(System::Word vt);
extern DELPHI_PACKAGE bool __fastcall IsVariantArray(const System::OleVariant &_var);
extern DELPHI_PACKAGE bool __fastcall IsVariantString(const System::OleVariant &_var);
extern DELPHI_PACKAGE bool __fastcall IsVarTypeSignedInteger(System::Word vt);
extern DELPHI_PACKAGE bool __fastcall IsVarTypeUnsignedInteger(System::Word vt);
extern DELPHI_PACKAGE bool __fastcall IsVarTypeInteger(System::Word vt);
extern DELPHI_PACKAGE bool __fastcall IsVarTypeNumber(System::Word vt);
extern DELPHI_PACKAGE HRESULT __fastcall InitVariantFromGUIDAsBuffer(const GUID &guid, /* out */ System::OleVariant &pvar);
extern DELPHI_PACKAGE HRESULT __fastcall VariantGetElem(const System::OleVariant &varIn, unsigned iElem, /* out */ System::OleVariant &pvar);
}	/* namespace Activex */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_ACTIVEX)
using namespace Winapi::Activex;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_ActivexHPP
