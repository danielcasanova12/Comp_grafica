// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.CommCtrl.pas' rev: 35.00 (Windows)

#ifndef Winapi_CommctrlHPP
#define Winapi_CommctrlHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

#include <CommCtrl.h>

namespace Winapi
{
namespace Commctrl
{
using ::Winapi::Windows::TTrackMouseEvent;
typedef TTrackMouseEvent *PTrackMouseEvent;
}	/* namespace Commctrl */
}	/* namespace Winapi */

namespace Winapi
{
namespace Commctrl
{
//-- forward type declarations -----------------------------------------------
struct TBMETRICSA;
struct TBMETRICSW;
struct tagLVINSERTMARK;
struct tagLVDISPINFOA;
struct tagNMTVITEMCHANGE;
struct NMSEARCHWEB;
struct TWMNotifyHC;
struct TWMNotifyTV;
struct TWMNotifyTRB;
struct TWMNotifyUD;
struct TWMNotifyLV;
struct TWMNotifyTLB;
struct TWMNotifyMC;
struct TWMNotifyDT;
struct TWMNotifyPS;
struct TTCMAdjustRect;
//-- type declarations -------------------------------------------------------
typedef void * HPropSheetPage;

typedef _PROPSHEETPAGEA *PPropSheetPageA;

typedef _PROPSHEETPAGEW *PPropSheetPageW;

typedef PPropSheetPageW PPropSheetPage;

typedef LPFNPSPCALLBACKA TFNPSPCallbackA;

typedef LPFNPSPCALLBACKW TFNPSPCallbackW;

typedef LPFNPSPCALLBACKW TFNPSPCallback;

typedef _PROPSHEETPAGEA TPropSheetPageA;

typedef _PROPSHEETPAGEW TPropSheetPageW;

typedef _PROPSHEETPAGEW TPropSheetPage;

typedef PFNPROPSHEETCALLBACK TFNPropSheetCallback;

typedef _PROPSHEETHEADERA *PPropSheetHeaderA;

typedef _PROPSHEETHEADERW *PPropSheetHeaderW;

typedef PPropSheetHeaderW PPropSheetHeader;

typedef _PROPSHEETHEADERA TPropSheetHeaderA;

typedef _PROPSHEETHEADERW TPropSheetHeaderW;

typedef _PROPSHEETHEADERW TPropSheetHeader;

typedef LPFNADDPROPSHEETPAGE TFNAddPropSheetPage;

typedef LPFNADDPROPSHEETPAGES TFNAddPropSheetPages;

typedef tagINITCOMMONCONTROLSEX *PInitCommonControlsEx;

typedef tagINITCOMMONCONTROLSEX TInitCommonControlsEx;

typedef tagCOLORSCHEME *PColorScheme;

typedef tagCOLORSCHEME TColorScheme;

typedef tagNMMOUSE *PNMMouse;

typedef tagNMMOUSE TNMMouse;

typedef tagNMMOUSE *PNMClick;

typedef tagNMMOUSE TNMClick;

typedef tagNMOBJECTNOTIFY *PNMObjectNotify;

typedef tagNMOBJECTNOTIFY TNMObjectNotify;

typedef tagNMKEY *PNMKey;

typedef tagNMKEY TNMKey;

typedef tagNMCHAR *PNMChar;

typedef tagNMCHAR TNMChar;

typedef tagNMCUSTOMTEXT *PNMCustomText;

typedef tagNMCUSTOMTEXT TNMCustomText;

typedef tagNMCUSTOMDRAWINFO *PNMCustomDraw;

typedef tagNMCUSTOMDRAWINFO TNMCustomDraw;

typedef tagNMTTCUSTOMDRAW *PNMTTCustomDraw;

typedef tagNMTTCUSTOMDRAW TNMTTCustomDraw;

typedef tagNMCUSTOMSPLITRECTINFO *PNMCustomSplitRectInfo;

typedef tagNMCUSTOMSPLITRECTINFO TNMCustomSplitRectInfo;

typedef _IMAGELISTDRAWPARAMS *PImageListDrawParams;

typedef _IMAGELISTDRAWPARAMS TImageListDrawParams;

typedef _IMAGEINFO *PImageInfo;

typedef _IMAGEINFO TImageInfo;

typedef _HD_TEXTFILTERA *PHDTextFilterA;

typedef _HD_TEXTFILTERW *PHDTextFilterW;

typedef PHDTextFilterW PHDTextFilter;

typedef _HD_TEXTFILTERA THDTextFilterA;

typedef _HD_TEXTFILTERW THDTextFilterW;

typedef _HD_TEXTFILTERW THDTextFilter;

typedef _HD_ITEMA *PHDItemA;

typedef _HD_ITEMW *PHDItemW;

typedef PHDItemW PHDItem;

typedef _HD_ITEMA THDItemA;

typedef _HD_ITEMW THDItemW;

typedef _HD_ITEMW THDItem;

typedef _HD_LAYOUT *PHDLayout;

typedef _HD_LAYOUT THDLayout;

typedef _HD_HITTESTINFO *PHDHitTestInfo;

typedef _HD_HITTESTINFO THDHitTestInfo;

typedef tagNMHEADERA *PHDNotifyA;

typedef tagNMHEADERW *PHDNotifyW;

typedef PHDNotifyW PHDNotify;

typedef tagNMHEADERA THDNotifyA;

typedef tagNMHEADERW THDNotifyW;

typedef tagNMHEADERW THDNotify;

typedef tagNMHDDISPINFOA *PNMHDispInfoA;

typedef tagNMHDDISPINFOW *PNMHDispInfoW;

typedef PNMHDispInfoW PNMHDispInfo;

typedef tagNMHDDISPINFOA TNMHDispInfoA;

typedef tagNMHDDISPINFOW TNMHDispInfoW;

typedef tagNMHDDISPINFOW TNMHDispInfo;

typedef tagNMHDFILTERBTNCLICK *PNMHDFilterBtnClick;

typedef tagNMHDFILTERBTNCLICK TNMHDFilterBtnClick;

typedef _TBBUTTON *PTBButton;

typedef _TBBUTTON TTBButton;

typedef _COLORMAP *PColorMap;

typedef _COLORMAP TColorMap;

typedef _NMTBCUSTOMDRAW *PNMTBCustomDraw;

typedef _NMTBCUSTOMDRAW TNMTBCustomDraw;

typedef tagTBADDBITMAP *PTBAddBitmap;

typedef tagTBADDBITMAP TTBAddBitmap;

typedef tagTBSAVEPARAMSA *PTBSaveParamsA;

typedef tagTBSAVEPARAMSW *PTBSaveParamsW;

typedef PTBSaveParamsW PTBSaveParams;

typedef tagTBSAVEPARAMSA TTBSaveParamsA;

typedef tagTBSAVEPARAMSW TTBSaveParamsW;

typedef tagTBSAVEPARAMSW TTBSaveParams;

typedef TBINSERTMARK *PTBInsertMark;

typedef TBINSERTMARK TTBInsertMark;

typedef TBREPLACEBITMAP *PTBReplaceBitmap;

typedef TBREPLACEBITMAP TTBReplaceBitmap;

typedef TBBUTTONINFOA *PTBButtonInfoA;

typedef TBBUTTONINFOW *PTBButtonInfoW;

typedef PTBButtonInfoW PTBButtonInfo;

typedef TBBUTTONINFOA TTBButtonInfoA;

typedef TBBUTTONINFOW TTBButtonInfoW;

typedef TBBUTTONINFOW TTBButtonInfo;

struct DECLSPEC_DRECORD TBMETRICSA
{
public:
	unsigned cbSize;
	unsigned dwMask;
	int cxPad;
	int cyPad;
	int cxBarPad;
	int cyBarPad;
	int cxButtonSpacing;
	int cyButtonSpacing;
};


struct DECLSPEC_DRECORD TBMETRICSW
{
public:
	unsigned cbSize;
	unsigned dwMask;
	int cxPad;
	int cyPad;
	int cxBarPad;
	int cyBarPad;
	int cxButtonSpacing;
	int cyButtonSpacing;
};


typedef TBMETRICSA *PTBMetricsA;

typedef TBMETRICSW *PTBMetricsW;

typedef PTBMetricsW PTBMetrics;

typedef TBMETRICSA TTBMetricsA;

typedef TBMETRICSW TTBMetricsW;

typedef TBMETRICSW TTBMetrics;

typedef tagNMTBHOTITEM *PNMTBHotItem;

typedef tagNMTBHOTITEM TNMTBHotItem;

typedef tagNMTBSAVE *PNMTBSave;

typedef tagNMTBSAVE TNMTBSave;

typedef tagNMTBRESTORE *PNMTBRestore;

typedef tagNMTBRESTORE TNMTBRestore;

typedef tagNMTBGETINFOTIPA *PNMTBGetInfoTipA;

typedef tagNMTBGETINFOTIPW *PNMTBGetInfoTipW;

typedef PNMTBGetInfoTipW PNMTBGetInfoTip;

typedef tagNMTBGETINFOTIPA TNMTBGetInfoTipA;

typedef tagNMTBGETINFOTIPW TNMTBGetInfoTipW;

typedef tagNMTBGETINFOTIPW TNMTBGetInfoTip;

typedef NMTBDISPINFOA *PNMTBDispInfoA;

typedef NMTBDISPINFOW *PNMTBDispInfoW;

typedef PNMTBDispInfoW PNMTBDispInfo;

typedef NMTBDISPINFOA TNMTBDispInfoA;

typedef NMTBDISPINFOW TNMTBDispInfoW;

typedef NMTBDISPINFOW TNMTBDispInfo;

typedef tagNMTOOLBARA *PNMToolBarA;

typedef tagNMTOOLBARW *PNMToolBarW;

typedef PNMToolBarW PNMToolBar;

typedef tagNMTOOLBARA TNMToolBarA;

typedef tagNMTOOLBARW TNMToolBarW;

typedef tagNMTOOLBARW TNMToolBar;

typedef tagREBARINFO *PReBarInfo;

typedef tagREBARINFO TReBarInfo;

typedef tagREBARBANDINFOA *PReBarBandInfoA;

typedef tagREBARBANDINFOW *PReBarBandInfoW;

typedef PReBarBandInfoW PReBarBandInfo;

typedef tagREBARBANDINFOA TReBarBandInfoA;

typedef tagREBARBANDINFOW TReBarBandInfoW;

typedef tagREBARBANDINFOW TReBarBandInfo;

typedef tagNMREBARCHILDSIZE *PNMReBarChildSize;

typedef tagNMREBARCHILDSIZE TNMReBarChildSize;

typedef tagNMREBAR *PNMReBar;

typedef tagNMREBAR TNMReBar;

typedef tagNMRBAUTOSIZE *PNMRBAutoSize;

typedef tagNMRBAUTOSIZE TNMRBAutoSize;

typedef tagNMREBARCHEVRON *PNMReBarChevron;

typedef tagNMREBARCHEVRON TNMReBarChevron;

typedef tagNMREBARSPLITTER *PNMReBarSplitter;

typedef tagNMREBARSPLITTER TNMReBarSplitter;

typedef tagNMREBARAUTOBREAK *PNMReBarAutoBreak;

typedef tagNMREBARAUTOBREAK TNMReBarAutoBreak;

typedef _RB_HITTESTINFO *PRBHitTestInfo;

typedef _RB_HITTESTINFO TRBHitTestInfo;

typedef tagTOOLINFOA *PToolInfoA;

typedef tagTOOLINFOW *PToolInfoW;

typedef PToolInfoW PToolInfo;

typedef tagTOOLINFOA TToolInfoA;

typedef tagTOOLINFOW TToolInfoW;

typedef tagTOOLINFOW TToolInfo;

typedef _TTGETTITLE *PTTGetTitle;

typedef _TTGETTITLE TTTGetTitle;

typedef _TT_HITTESTINFOA *PTTHitTestInfoA;

typedef _TT_HITTESTINFOW *PTTHitTestInfoW;

typedef PTTHitTestInfoW PTTHitTestInfo;

typedef _TT_HITTESTINFOA TTTHitTestInfoA;

typedef _TT_HITTESTINFOW TTTHitTestInfoW;

typedef _TT_HITTESTINFOW TTTHitTestInfo;

typedef tagNMTTDISPINFOA *PNMTTDispInfoA;

typedef tagNMTTDISPINFOW *PNMTTDispInfoW;

typedef PNMTTDispInfoW PNMTTDispInfo;

typedef tagNMTTDISPINFOA TNMTTDispInfoA;

typedef tagNMTTDISPINFOW TNMTTDispInfoW;

typedef tagNMTTDISPINFOW TNMTTDispInfo;

typedef tagNMTTDISPINFOA tagTOOLTIPTEXTA;

typedef tagNMTTDISPINFOW tagTOOLTIPTEXTW;

typedef tagNMTTDISPINFOA TToolTipTextA;

typedef tagNMTTDISPINFOW TToolTipTextW;

typedef tagNMTTDISPINFOW TToolTipText;

typedef tagNMTTDISPINFOA *PToolTipTextA;

typedef tagNMTTDISPINFOW *PToolTipTextW;

typedef PToolTipTextW PToolTipText;

typedef tagTRBTHUMBPOSCHANGING *PNMTRBThumbPosChanging;

typedef tagTRBTHUMBPOSCHANGING TNMTRBThumbPosChanging;

typedef tagDRAGLISTINFO *PDragListInfo;

typedef tagDRAGLISTINFO TDragListInfo;

typedef _UDACCEL *PUDAccel;

typedef _UDACCEL TUDAccel;

typedef _NM_UPDOWN *PNMUpDown;

typedef _NM_UPDOWN TNMUpDown;

typedef PBRANGE *PPBRange;

typedef PBRANGE TPBRange;

typedef tagLITEM *PLItem;

typedef tagLITEM TLItem;

typedef tagLHITTESTINFO *PLHitTestInfo;

typedef tagLHITTESTINFO TLHitTestInfo;

typedef tagNMLINK *PNMLink;

typedef tagNMLINK TNMLink;

typedef tagLVITEMA *PLVItemA;

typedef tagLVITEMW *PLVItemW;

typedef PLVItemW PLVItem;

typedef tagLVITEMA _LV_ITEMA;

typedef tagLVITEMW _LV_ITEMW;

typedef tagLVITEMA TLVItemA;

typedef tagLVITEMW TLVItemW;

typedef tagLVITEMW TLVItem;

typedef tagLVFINDINFOA *PLVFindInfoA;

typedef tagLVFINDINFOW *PLVFindInfoW;

typedef PLVFindInfoW PLVFindInfo;

typedef tagLVFINDINFOA _LV_FINDINFOA;

typedef tagLVFINDINFOW _LV_FINDINFOW;

typedef tagLVFINDINFOA TLVFindInfoA;

typedef tagLVFINDINFOW TLVFindInfoW;

typedef tagLVFINDINFOW TLVFindInfo;

typedef tagLVHITTESTINFO *PLVHitTestInfo;

typedef tagLVHITTESTINFO TLVHitTestInfo;

typedef tagLVHITTESTINFO _LV_HITTESTINFO;

typedef tagLVCOLUMNA *PLVColumnA;

typedef tagLVCOLUMNW *PLVColumnW;

typedef PLVColumnW PLVColumn;

typedef tagLVCOLUMNA _LV_COLUMNA;

typedef tagLVCOLUMNW _LV_COLUMNW;

typedef tagLVCOLUMNA TLVColumnA;

typedef tagLVCOLUMNW TLVColumnW;

typedef tagLVCOLUMNW TLVColumn;

typedef PFNLVCOMPARE TLVCompare;

typedef tagLVBKIMAGEA *PLVBKImageA;

typedef tagLVBKIMAGEW *PLVBKImageW;

typedef PLVBKImageW PLVBKImage;

typedef tagLVBKIMAGEA TLVBKImageA;

typedef tagLVBKIMAGEW TLVBKImageW;

typedef tagLVBKIMAGEW TLVBKImage;

typedef tagLVGROUP *PLVGroup;

typedef tagLVGROUP TLVGroup;

typedef tagLVGROUPMETRICS *PLVGroupMetrics;

typedef tagLVGROUPMETRICS TLVGroupMetrics;

typedef PFNLVGROUPCOMPARE TFNLVGroupCompare;

typedef tagLVINSERTGROUPSORTED *PLVInsertGroupSorted;

typedef tagLVINSERTGROUPSORTED TLVInsertGroupSorted;

typedef tagLVTILEVIEWINFO *PLVTileViewInfo;

typedef tagLVTILEVIEWINFO TLVTileViewInfo;

typedef tagLVTILEINFO *PLVTileInfo;

typedef tagLVTILEINFO TLVTileInfo;

struct DECLSPEC_DRECORD tagLVINSERTMARK
{
public:
	unsigned cbSize;
	unsigned dwFlags;
	int iItem;
	unsigned dwReserved;
};


typedef tagLVINSERTMARK *PLVInsertMark;

typedef tagLVINSERTMARK TLVInsertMark;

typedef tagLVSETINFOTIP *PLVSetInfoTip;

typedef tagLVSETINFOTIP TLVSetInfoTip;

typedef tagLVFOOTERINFO *PLVFooterInfo;

typedef tagLVFOOTERINFO TLVFooterInfo;

typedef tagLVFOOTERITEM *PLVFooterItem;

typedef tagLVFOOTERITEM TLVFooterItem;

typedef tagLVITEMINDEX *PLVItemIndex;

typedef tagLVITEMINDEX TLVItemIndex;

typedef tagNMLISTVIEW _NM_LISTVIEW;

typedef tagNMLISTVIEW *PNMListView;

typedef tagNMLISTVIEW TNMListView;

typedef tagNMITEMACTIVATE *PNMItemActivate;

typedef tagNMITEMACTIVATE TNMItemActivate;

typedef tagNMLVCUSTOMDRAW *PNMLVCustomDraw;

typedef tagNMLVCUSTOMDRAW TNMLVCustomDraw;

typedef tagNMLVCACHEHINT *PNMLVCacheHint;

typedef tagNMLVCACHEHINT TNMLVCacheHint;

typedef tagNMLVCACHEHINT *PNMCacheHint;

typedef tagNMLVCACHEHINT TNMCacheHint;

typedef tagNMLVFINDITEMA *PNMLVFinditemA;

typedef tagNMLVFINDITEMW *PNMLVFinditemW;

typedef PNMLVFinditemW PNMLVFinditem;

typedef tagNMLVFINDITEMA TNMLVFinditemA;

typedef tagNMLVFINDITEMW TNMLVFinditemW;

typedef tagNMLVFINDITEMW TNMLVFinditem;

typedef tagNMLVFINDITEMA *PNMFinditemA;

typedef tagNMLVFINDITEMW *PNMFinditemW;

typedef PNMFinditemW PNMFinditem;

typedef tagNMLVFINDITEMA TNMFinditemA;

typedef tagNMLVFINDITEMW TNMFinditemW;

typedef tagNMLVFINDITEMW TNMFinditem;

typedef tagNMLVODSTATECHANGE *PNMLVODStateChange;

typedef tagNMLVODSTATECHANGE TNMLVODStateChange;

typedef tagLVDISPINFOW *PLVDispInfoA;

typedef tagLVDISPINFOW *PLVDispInfoW;

typedef PLVDispInfoW PLVDispInfo;

typedef tagLVDISPINFOW _LV_DISPINFO;

struct DECLSPEC_DRECORD tagLVDISPINFOA
{
public:
	tagNMHDR hdr;
	tagLVITEMA item;
};


typedef tagLVDISPINFOW _LV_DISPINFOW;

typedef tagLVDISPINFOW TLVDispInfoW;

typedef tagLVDISPINFOW TLVDispInfoA;

typedef tagLVDISPINFOW TLVDispInfo;

typedef tagLVDISPINFOW LV_DISPINFOW;

typedef tagLVKEYDOWN *PLVKeyDown;

typedef tagLVKEYDOWN _LV_KEYDOWN;

typedef tagLVKEYDOWN TLVKeyDown;

typedef tagNMLVLINK *PNMLVLink;

typedef tagNMLVLINK TNMLVLink;

typedef tagNMLVGETINFOTIPA *PNMLVGetInfoTipA;

typedef tagNMLVGETINFOTIPW *PNMLVGetInfoTipW;

typedef PNMLVGetInfoTipW PNMLVGetInfoTip;

typedef tagNMLVGETINFOTIPA TNMLVGetInfoTipA;

typedef tagNMLVGETINFOTIPW TNMLVGetInfoTipW;

typedef tagNMLVGETINFOTIPW TNMLVGetInfoTip;

typedef tagNMLVSCROLL *PNMLVScroll;

typedef tagNMLVSCROLL TNMLVScroll;

typedef tagNMLVEMPTYMARKUP *PNMLVEmptyMarkup;

typedef tagNMLVEMPTYMARKUP TNMLVEmptyMarkup;

typedef tagNMTVSTATEIMAGECHANGING *PNMTVStateImageChanging;

typedef tagNMTVSTATEIMAGECHANGING TNMTVStateImageChanging;

typedef tagTVITEMA *PTVItemA;

typedef tagTVITEMW *PTVItemW;

typedef PTVItemW PTVItem;

typedef tagTVITEMA _TV_ITEMA;

typedef tagTVITEMW _TV_ITEMW;

typedef tagTVITEMA TTVItemA;

typedef tagTVITEMW TTVItemW;

typedef tagTVITEMW TTVItem;

typedef tagTVITEMEXA *PTVItemExA;

typedef tagTVITEMEXW *PTVItemExW;

typedef PTVItemExW PTVItemEx;

typedef tagTVITEMEXA TTVItemExA;

typedef tagTVITEMEXW TTVItemExW;

typedef tagTVITEMEXW TTVItemEx;

typedef tagTVINSERTSTRUCTA *PTVInsertStructA;

typedef tagTVINSERTSTRUCTW *PTVInsertStructW;

typedef PTVInsertStructW PTVInsertStruct;

typedef tagTVINSERTSTRUCTA _TV_INSERTSTRUCTA;

typedef tagTVINSERTSTRUCTW _TV_INSERTSTRUCTW;

typedef tagTVINSERTSTRUCTA TTVInsertStructA;

typedef tagTVINSERTSTRUCTW TTVInsertStructW;

typedef tagTVINSERTSTRUCTW TTVInsertStruct;

typedef tagTVHITTESTINFO *PTVHitTestInfo;

typedef tagTVHITTESTINFO _TV_HITTESTINFO;

typedef tagTVHITTESTINFO TTVHitTestInfo;

typedef PFNTVCOMPARE TTVCompare;

typedef tagTVSORTCB _TV_SORTCB;

typedef tagTVSORTCB TTVSortCB;

typedef TVITEMPART TTVItemPart;

typedef tagTVGETITEMPARTRECTINFO *PTVGetItemPartRectInfo;

typedef tagTVGETITEMPARTRECTINFO TTVGetItemPartRectInfo;

typedef tagNMTREEVIEWA *PNMTreeViewA;

typedef tagNMTREEVIEWW *PNMTreeViewW;

typedef PNMTreeViewW PNMTreeView;

typedef tagNMTREEVIEWA _NM_TREEVIEWA;

typedef tagNMTREEVIEWW _NM_TREEVIEWW;

typedef tagNMTREEVIEWA TNMTreeViewA;

typedef tagNMTREEVIEWW TNMTreeViewW;

typedef tagNMTREEVIEWW TNMTreeView;

typedef tagTVDISPINFOA *PTVDispInfoA;

typedef tagTVDISPINFOW *PTVDispInfoW;

typedef PTVDispInfoW PTVDispInfo;

typedef tagTVDISPINFOA _TV_DISPINFOA;

typedef tagTVDISPINFOW _TV_DISPINFOW;

typedef tagTVDISPINFOA TTVDispInfoA;

typedef tagTVDISPINFOW TTVDispInfoW;

typedef tagTVDISPINFOW TTVDispInfo;

typedef tagTVDISPINFOEXA *PNMTVDispInfoExA;

typedef tagTVDISPINFOEXW *PNMTVDispInfoExW;

typedef PNMTVDispInfoExW PNMTVDispInfoEx;

typedef tagTVDISPINFOEXA tagNMTVDISPINFOEXA _DEPRECATED_ATTRIBUTE1("Use tagTVDISPINFOEXA") ;

typedef tagTVDISPINFOEXW tagNMTVDISPINFOEXW _DEPRECATED_ATTRIBUTE1("Use tagTVDISPINFOEXW") ;

typedef tagTVDISPINFOEXA TNMTVDispInfoExA;

typedef tagTVDISPINFOEXW TNMTVDispInfoExW;

typedef tagTVDISPINFOEXW TNMTVDispInfoEx;

typedef tagTVKEYDOWN _TV_KEYDOWN;

typedef tagTVKEYDOWN TTVKeyDown;

typedef tagNMTVCUSTOMDRAW *PNMTVCustomDraw;

typedef tagNMTVCUSTOMDRAW TNMTVCustomDraw;

typedef tagNMTVGETINFOTIPA *PNMTVGetInfoTipA;

typedef tagNMTVGETINFOTIPW *PNMTVGetInfoTipW;

typedef PNMTVGetInfoTipW PNMTVGetInfoTip;

typedef tagNMTVGETINFOTIPA TNMTVGetInfoTipA;

typedef tagNMTVGETINFOTIPW TNMTVGetInfoTipW;

typedef tagNMTVGETINFOTIPW TNMTVGetInfoTip;

struct DECLSPEC_DRECORD tagNMTVITEMCHANGE
{
public:
	tagNMHDR hdr;
	unsigned uChanged;
	_TREEITEM *hItem;
	unsigned uStateNew;
	unsigned uStateOld;
	NativeInt lParam;
};


typedef tagNMTVITEMCHANGE *PNMTVItemChange;

typedef tagNMTVITEMCHANGE TNMTVItemChange;

typedef tagNMTVASYNCDRAW *PNMTVAsyncDraw;

typedef tagNMTVASYNCDRAW TNMTVAsyncDraw;

typedef tagCOMBOBOXEXITEMA *PComboBoxExItemA;

typedef tagCOMBOBOXEXITEMW *PComboBoxExItemW;

typedef PComboBoxExItemW PComboBoxExItem;

typedef tagCOMBOBOXEXITEMA TComboBoxExItemA;

typedef tagCOMBOBOXEXITEMW TComboBoxExItemW;

typedef tagCOMBOBOXEXITEMW TComboBoxExItem;

typedef NMCOMBOBOXEXA *PNMComboBoxExA;

typedef NMCOMBOBOXEXW *PNMComboBoxExW;

typedef PNMComboBoxExW PNMComboBoxEx;

typedef NMCOMBOBOXEXA TNMComboBoxExA;

typedef NMCOMBOBOXEXW TNMComboBoxExW;

typedef NMCOMBOBOXEXW TNMComboBoxEx;

typedef NMCBEDRAGBEGINA *PNMCBEDragBeginA;

typedef NMCBEDRAGBEGINW *PNMCBEDragBeginW;

typedef PNMCBEDragBeginW PNMCBEDragBegin;

typedef NMCBEDRAGBEGINA TNMCBEDragBeginA;

typedef NMCBEDRAGBEGINW TNMCBEDragBeginW;

typedef NMCBEDRAGBEGINW TNMCBEDragBegin;

typedef NMCBEENDEDITA *PNMCBEEndEditA;

typedef NMCBEENDEDITW *PNMCBEEndEditW;

typedef PNMCBEEndEditW PNMCBEEndEdit;

typedef NMCBEENDEDITA TNMCBEEndEditA;

typedef NMCBEENDEDITW TNMCBEEndEditW;

typedef NMCBEENDEDITW TNMCBEEndEdit;

typedef tagTCITEMHEADERA *PTCItemHeaderA;

typedef tagTCITEMHEADERW *PTCItemHeaderW;

typedef PTCItemHeaderW PTCItemHeader;

typedef tagTCITEMHEADERA _TC_ITEMHEADERA;

typedef tagTCITEMHEADERW _TC_ITEMHEADERW;

typedef tagTCITEMHEADERA TTCItemHeaderA;

typedef tagTCITEMHEADERW TTCItemHeaderW;

typedef tagTCITEMHEADERW TTCItemHeader;

typedef tagTCITEMA *PTCItemA;

typedef tagTCITEMW *PTCItemW;

typedef PTCItemW PTCItem;

typedef tagTCITEMA _TC_ITEMA;

typedef tagTCITEMW _TC_ITEMW;

typedef tagTCITEMA TTCItemA;

typedef tagTCITEMW TTCItemW;

typedef tagTCITEMW TTCItem;

typedef tagTCHITTESTINFO *PTCHitTestInfo;

typedef tagTCHITTESTINFO _TC_HITTESTINFO;

typedef tagTCHITTESTINFO TTCHitTestInfo;

typedef tagTCKEYDOWN _TC_KEYDOWN;

typedef tagTCKEYDOWN TTCKeyDown;

typedef unsigned *PMonthDayState;

typedef unsigned TMonthDayState;

typedef MCHITTESTINFO *PMCHitTestInfo;

typedef MCHITTESTINFO TMCHitTestInfo;

typedef tagNMSELCHANGE *PNMSelChange;

typedef tagNMSELCHANGE TNMSelChange;

typedef tagNMDAYSTATE *PNMDayState;

typedef tagNMDAYSTATE TNMDayState;

typedef tagNMSELCHANGE *PNMSelect;

typedef tagNMSELCHANGE TNMSelect;

typedef System::StaticArray<_SYSTEMTIME, 2> TSystemTimeRangeArray;

typedef tagMCGRIDINFO *PMCGridInfo;

typedef tagMCGRIDINFO TMCGridInfo;

typedef tagNMDATETIMECHANGE *PNMDateTimeChange;

typedef tagNMDATETIMECHANGE TNMDateTimeChange;

typedef tagNMDATETIMESTRINGA *PNMDateTimeStringA;

typedef tagNMDATETIMESTRINGW *PNMDateTimeStringW;

typedef PNMDateTimeStringW PNMDateTimeString;

typedef tagNMDATETIMESTRINGA TNMDateTimeStringA;

typedef tagNMDATETIMESTRINGW TNMDateTimeStringW;

typedef tagNMDATETIMESTRINGW TNMDateTimeString;

typedef tagNMDATETIMEWMKEYDOWNA *PNMDateTimeWMKeyDownA;

typedef tagNMDATETIMEWMKEYDOWNW *PNMDateTimeWMKeyDownW;

typedef PNMDateTimeWMKeyDownW PNMDateTimeWMKeyDown;

typedef tagNMDATETIMEWMKEYDOWNA TNMDateTimeWMKeyDownA;

typedef tagNMDATETIMEWMKEYDOWNW TNMDateTimeWMKeyDownW;

typedef tagNMDATETIMEWMKEYDOWNW TNMDateTimeWMKeyDown;

typedef tagNMDATETIMEFORMATA *PNMDateTimeFormatA;

typedef tagNMDATETIMEFORMATW *PNMDateTimeFormatW;

typedef PNMDateTimeFormatW PNMDateTimeFormat;

typedef tagNMDATETIMEFORMATA TNMDateTimeFormatA;

typedef tagNMDATETIMEFORMATW TNMDateTimeFormatW;

typedef tagNMDATETIMEFORMATW TNMDateTimeFormat;

typedef tagNMDATETIMEFORMATQUERYA *PNMDateTimeFormatQueryA;

typedef tagNMDATETIMEFORMATQUERYW *PNMDateTimeFormatQueryW;

typedef PNMDateTimeFormatQueryW PNMDateTimeFormatQuery;

typedef tagNMDATETIMEFORMATQUERYA TNMDateTimeFormatQueryA;

typedef tagNMDATETIMEFORMATQUERYW TNMDateTimeFormatQueryW;

typedef tagNMDATETIMEFORMATQUERYW TNMDateTimeFormatQuery;

typedef tagDATETIMEPICKERINFO *PDateTimePickerInfo;

typedef tagDATETIMEPICKERINFO TDateTimePickerInfo;

typedef tagNMIPADDRESS *PNMIPAddress;

typedef tagNMIPADDRESS TNMIPAddress;

typedef NMPGSCROLL *PNMPGScroll;

typedef NMPGSCROLL TNMPGScroll;

typedef NMPGCALCSIZE *PNMPGCalcSize;

typedef NMPGCALCSIZE TNMPGCalcSize;

typedef BUTTON_IMAGELIST *PButtonImageList;

typedef BUTTON_IMAGELIST TButtonImageList;

typedef tagNMBCHOTITEM *PNMBCHotItem;

typedef tagNMBCHOTITEM TNMBCHotItem;

typedef tagBUTTON_SPLITINFO *PButtonSplitinfo;

typedef tagBUTTON_SPLITINFO TButtonSplitinfo;

typedef tagNMBCDROPDOWN *PNMBCDropDown;

typedef tagNMBCDROPDOWN TNMBCDropDown;

typedef _tagEDITBALLOONTIP *PEditBalloonTip;

typedef _tagEDITBALLOONTIP TEditBalloonTip;

typedef int EC_SEARCHWEB_ENTRYPOINT;

struct DECLSPEC_DRECORD NMSEARCHWEB
{
public:
	tagNMHDR hdr;
	EC_SEARCHWEB_ENTRYPOINT entrypoint;
	System::LongBool hasQueryText;
	System::LongBool invokeSucceeded;
};


typedef NMSEARCHWEB TNMSEARCHWEB;

typedef NMSEARCHWEB *PNMSEARCHWEB;

typedef PFTASKDIALOGCALLBACK TFTaskDialogCallback;

typedef TASKDIALOG_BUTTON *PTaskDialogButton;

typedef TASKDIALOG_BUTTON TTaskDialogButton;

typedef TASKDIALOGCONFIG *PTaskDialogConfig;

typedef TASKDIALOGCONFIG TTaskDialogConfig;

typedef SUBCLASSPROC TSubClassProc;

struct DECLSPEC_DRECORD TWMNotifyHC
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			tagNMHEADERW *HDNotify;
			NativeInt Result;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyTV
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			tagNMTVITEMCHANGE *NMTVItemChange;
			NativeInt Result;
		};
		struct 
		{
			tagTVDISPINFOW *TVDispInfo;
		};
		struct 
		{
			tagNMTTDISPINFOW *ToolTipTextW;
		};
		struct 
		{
			tagNMTVCUSTOMDRAW *NMTVCustomDraw;
		};
		struct 
		{
			tagNMTREEVIEWW *NMTreeView;
		};
		struct 
		{
			tagNMCUSTOMDRAWINFO *NMCustomDraw;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyTRB
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			tagNMCUSTOMDRAWINFO *NMCustomDraw;
			NativeInt Result;
		};
		struct 
		{
			tagNMREBARCHEVRON *NMReBarChevron;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyUD
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			_NM_UPDOWN *NMUpDown;
			NativeInt Result;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyLV
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			tagNMLVODSTATECHANGE *NMLVODStateChange;
			NativeInt Result;
		};
		struct 
		{
			tagNMLVFINDITEMW *NMLVFindItem;
		};
		struct 
		{
			tagNMLVCUSTOMDRAW *NMLVCustomDraw;
		};
		struct 
		{
			tagNMLVCACHEHINT *NMLVCacheHint;
		};
		struct 
		{
			tagNMLISTVIEW *NMListView;
		};
		struct 
		{
			tagNMCUSTOMDRAWINFO *NMCustomDraw;
		};
		struct 
		{
			tagLVDISPINFOW *LVDispInfo;
		};
		struct 
		{
			tagNMHEADERW *HDNotify;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyTLB
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			tagNMTOOLBARW *NMToolBar;
			NativeInt Result;
		};
		struct 
		{
			_NMTBCUSTOMDRAW *NMTBCustomDraw;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyMC
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			tagNMSELCHANGE *NMSelChange;
			NativeInt Result;
		};
		struct 
		{
			tagNMDAYSTATE *NMDayState;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyDT
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			tagNMDATETIMESTRINGW *NMDateTimeString;
			NativeInt Result;
		};
		struct 
		{
			tagNMDATETIMECHANGE *NMDateTimeChange;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TWMNotifyPS
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	NativeUInt IDCtrl;
	
public:
	union
	{
		struct 
		{
			NMPGSCROLL *NMPGScroll;
			NativeInt Result;
		};
		struct 
		{
			NMPGCALCSIZE *NMPGCalcSize;
		};
		struct 
		{
			tagNMHDR *NMHdr;
		};
		
	};
};


struct DECLSPEC_DRECORD TTCMAdjustRect
{
public:
	unsigned Msg;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller MsgFiller;
#endif /* _WIN64 */
	System::LongBool Larger;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller LargerFiller;
#endif /* _WIN64 */
	
public:
	union
	{
		struct 
		{
			System::Types::TRect *Prc;
			NativeInt Result;
		};
		struct 
		{
			System::Types::TRect *lpPrc;
		};
		
	};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 PSH_MULTILINETABS = System::Int8(0x10);
static const short TBN_CLOSEUP = short(-711);
static const System::Word RB_GETBANDINFO_PRE_IE4 = System::Word(0x405);
#define HOTKEYCLASS L"msctls_hotkey32"
static const System::Int8 LVA_ALIGNRIGHT = System::Int8(0x3);
static const System::Int8 LVA_ALIGNBOTTOM = System::Int8(0x4);
static const System::Word LVA_SORTASCENDING = System::Word(0x100);
static const System::Word LVA_SORTDESCENDING = System::Word(0x200);
static const System::Word LVM_SETWORKAREA = System::Word(0x1041);
static const System::Int8 TVIS_FOCUSED = System::Int8(0x1);
static const System::Int8 MCS_NOTODAY_PRE_IE4 = System::Int8(0x8);
static const System::Int8 ES_EX_ALLOWEOL_CR = System::Int8(0x1);
static const System::Int8 ES_EX_ALLOWEOL_LF = System::Int8(0x2);
static const System::Int8 ES_EX_ALLOWEOL_ALL = System::Int8(0x3);
static const System::Int8 ES_EX_CONVERT_EOL_ON_PASTE = System::Int8(0x4);
static const System::Int8 ES_EX_ZOOMABLE = System::Int8(0x10);
static const System::Int8 EC_ENDOFLINE_DETECTFROMCONTENT = System::Int8(0x0);
static const System::Int8 EC_ENDOFLINE_CRLF = System::Int8(0x1);
static const System::Int8 EC_ENDOFLINE_CR = System::Int8(0x2);
static const System::Int8 EC_ENDOFLINE_LF = System::Int8(0x3);
static const System::Word EM_SETEXTENDEDSTYLE = System::Word(0x150a);
static const System::Word EM_GETEXTENDEDSTYLE = System::Word(0x150b);
static const System::Word EM_SETENDOFLINE = System::Word(0x150c);
static const System::Word EM_GETENDOFLINE = System::Word(0x150d);
static const System::Word EM_ENABLESEARCHWEB = System::Word(0x150e);
static const System::Word EM_SEARCHWEB = System::Word(0x150f);
static const System::Word EM_SETCARETINDEX = System::Word(0x1511);
static const System::Word EM_GETCARETINDEX = System::Word(0x1512);
static const System::Word EM_GETZOOM = System::Word(0x4e0);
static const System::Word EM_SETZOOM = System::Word(0x4e1);
static const System::Word EM_FILELINEFROMCHAR = System::Word(0x1513);
static const System::Word EM_FILELINEINDEX = System::Word(0x1514);
static const System::Word EM_FILELINELENGTH = System::Word(0x1515);
static const System::Word EM_GETFILELINE = System::Word(0x1516);
static const System::Word EM_GETFILELINECOUNT = System::Word(0x1517);
static const System::Int8 EC_SEARCHWEB_ENTRYPOINT_EXTERNAL = System::Int8(0x0);
static const System::Int8 EC_SEARCHWEB_ENTRYPOINT_CONTEXTMENU = System::Int8(0x1);
static const System::Int8 DCHF_TOPALIGN = System::Int8(0x2);
static const System::Int8 DCHF_HORIZONTAL = System::Int8(0x4);
static const System::Int8 DCHF_HOT = System::Int8(0x8);
static const System::Int8 DCHF_PUSHED = System::Int8(0x10);
static const System::Int8 DCHF_FLIPPED = System::Int8(0x20);
static const System::Int8 DCHF_TRANSPARENT = System::Int8(0x40);
static const System::Byte DCHF_INACTIVE = System::Byte(0x80);
static const System::Word DCHF_NOBORDER = System::Word(0x100);
extern DELPHI_PACKAGE int __fastcall StateImageMaskToIndex(int I);
extern DELPHI_PACKAGE System::LongBool __fastcall ListView_SetBkImageA(HWND hwnd, PLVBKImageA plvbki);
extern DELPHI_PACKAGE System::LongBool __fastcall ListView_SetBkImageW(HWND hwnd, PLVBKImageW plvbki);
extern DELPHI_PACKAGE System::LongBool __fastcall ListView_GetBkImageA(HWND hwnd, PLVBKImageA plvbki);
extern DELPHI_PACKAGE System::LongBool __fastcall ListView_GetBkImageW(HWND hwnd, PLVBKImageW plvbki);
extern DELPHI_PACKAGE HTREEITEM __fastcall TreeView_InsertItemA(HWND hwnd, const tagTVINSERTSTRUCTA &lpis);
extern DELPHI_PACKAGE HTREEITEM __fastcall TreeView_InsertItemW(HWND hwnd, const tagTVINSERTSTRUCTW &lpis);
}	/* namespace Commctrl */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_COMMCTRL)
using namespace Winapi::Commctrl;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_CommctrlHPP
