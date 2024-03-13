// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Themes.pas' rev: 35.00 (Windows)

#ifndef Vcl_ThemesHPP
#define Vcl_ThemesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.UxTheme.hpp>
#include <Winapi.CommCtrl.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.GraphUtil.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Themes
{
//-- forward type declarations -----------------------------------------------
struct TStyleElementEdges;
struct TStyleElementEdgeFlags;
struct TElementMarginsHelper /* Helper for record '_MARGINS' */;
struct TStyleTextOptions;
struct TThemedElementDetails;
struct TStyleInfo;
class DELPHICLASS TAbstractStyleServices;
class DELPHICLASS TCustomStyleServices;
class DELPHICLASS TUxThemeStyle;
class DELPHICLASS TSysControl;
class DELPHICLASS TSysStyleHook;
class DELPHICLASS TMouseTrackSysControlStyleHook;
struct TChildControlInfo;
class DELPHICLASS TCustomStyleEngine;
class DELPHICLASS TStyleManager;
struct TStyleManagerHelper /* Helper for class 'TStyleManager*' */;
class DELPHICLASS TCustomElementServices;
class DELPHICLASS TUxThemeDataNavButtonElements;
class DELPHICLASS TUxThemeCategoryButtonElements;
class DELPHICLASS TUxThemeCategoryPanelGroupElements;
class DELPHICLASS TUxThemeCheckListBoxElements;
class DELPHICLASS TUxThemeControlBarElements;
class DELPHICLASS TUxThemeGridElements;
class DELPHICLASS TUxThemeHintElements;
class DELPHICLASS TUxThemePanelElements;
class DELPHICLASS TUxThemeTabSetElements;
class DELPHICLASS TUxThemeTextLabelElements;
class DELPHICLASS TStyleHook;
class DELPHICLASS TMouseTrackControlStyleHook;
struct TThemeServicesClassHelper;
class DELPHICLASS EStyleEngineException;
class DELPHICLASS ECustomStyleException;
class DELPHICLASS EDuplicateStyleException;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TThemedElement : unsigned char { teButton, teClock, teComboBox, teDatePicker, teEdit, teExplorerBar, teFlyOut, teHeader, teLink, teListView, teMenu, teMenuBand, teMonthCal, teNavigation, tePage, teProgress, teRebar, teScrollBar, teSpin, teStartPanel, teStatus, teTab, teTaskBand, teTaskBar, teTaskDialog, teTextStyle, teToolBar, teToolTip, teTrackBar, teTrayNotify, teTreeview, teWindow, teCategoryButtons, teCategoryPanelGroup, teCheckListBox, teControlBar, teDataNavButtons, teGrid, teHint, tePanel, teTabSet, teTextLabel, teMPlayerButtons, teToggleSwitch, teSearchIndicators };

typedef TThemedElement TVCLElements;

enum DECLSPEC_DENUM TThemedButton : unsigned char { tbButtonDontCare, tbButtonRoot, tbPushButtonNormal, tbPushButtonHot, tbPushButtonPressed, tbPushButtonDisabled, tbPushButtonDefaulted, tbPushButtonDefaultedAnimating, tbRadioButtonUncheckedNormal, tbRadioButtonUncheckedHot, tbRadioButtonUncheckedPressed, tbRadioButtonUncheckedDisabled, tbRadioButtonCheckedNormal, tbRadioButtonCheckedHot, tbRadioButtonCheckedPressed, tbRadioButtonCheckedDisabled, tbCheckBoxUncheckedNormal, tbCheckBoxUncheckedHot, tbCheckBoxUncheckedPressed, tbCheckBoxUncheckedDisabled, tbCheckBoxCheckedNormal, tbCheckBoxCheckedHot, tbCheckBoxCheckedPressed, tbCheckBoxCheckedDisabled, tbCheckBoxMixedNormal, tbCheckBoxMixedHot, tbCheckBoxMixedPressed, tbCheckBoxMixedDisabled, 
	tbCheckBoxImplicitNormal, tbCheckBoxImplicitHot, tbCheckBoxImplicitPressed, tbCheckBoxImplicitDisabled, tbCheckBoxExcludedNormal, tbCheckBoxExcludedHot, tbCheckBoxExcludedPressed, tbCheckBoxExcludedDisabled, tbGroupBoxNormal, tbGroupBoxDisabled, tbUserButton, tbCommandLinkNormal, tbCommandLinkHot, tbCommandLinkPressed, tbCommandLinkDisabled, tbCommandLinkDefaulted, tbCommandLinkDefaultedAnimating, tbCommandLinkGlyphNormal, tbCommandLinkGlyphHot, tbCommandLinkGlyphPressed, tbCommandLinkGlyphDisabled, tbCommandLinkGlyphDefaulted };

enum DECLSPEC_DENUM TThemedCategoryButtons : unsigned char { tcbCategoryButtonsDontCare, tcbCategoryButtonsRoot, tcbBackground, tcbCategoryNormal, tcbCategorySelected, tcbButtonNormal, tcbButtonHot, tcbButtonSelected, tcbCategoryGlyphOpened, tcbCategoryGlyphClosed, tcbCategoryChevronOpened, tcbCategoryChevronClosed };

enum DECLSPEC_DENUM TThemedCategoryPanelGroup : unsigned char { tcpCategoryPanelGroupDontCare, tcpCategoryPanelGroupRoot, tcpBackground, tcpGradientHeader, tcpThemedHeader, tcpChevronOpenedNormal, tcpChevronOpenedHot, tcpChevronOpenedPressed, tcpChevronClosedNormal, tcpChevronClosedHot, tcpChevronClosedPressed, tcpChevronClosedLeftNormal, tcpChevronClosedLeftHot, tcpChevronClosedLeftPressed, tcpThemedChevronOpenedNormal, tcpThemedChevronOpenedHot, tcpThemedChevronOpenedPressed, tcpThemedChevronClosedNormal, tcpThemedChevronClosedHot, tcpThemedChevronClosedPressed };

enum DECLSPEC_DENUM TThemedCheckListBox : unsigned char { tclCheckListBoxDontCare, tclCheckListBoxRoot, tclListItemNormal, tclListItemDisabled, tclHeaderItemNormal, tclHeaderItemDisabled };

enum DECLSPEC_DENUM TThemedControlBar : unsigned char { tcbControlBarDontCare, tcbControlBarRoot, tcbGradientItemFrame };

enum DECLSPEC_DENUM TThemedClock : unsigned char { tcClockDontCare, tcClockRoot, tcTimeNormal, tcTimeHot, tcTimePressed };

enum DECLSPEC_DENUM TThemedComboBox : unsigned char { tcComboBoxDontCare, tcComboBoxRoot, tcDropDownButtonNormal, tcDropDownButtonHot, tcDropDownButtonPressed, tcDropDownButtonDisabled, tcBackground, tcTransparentBackgroundNormal, tcTransparentBackgroundHot, tcTransparentBackgroundDisabled, tcTransparentBackgroundFocused, tcBorderNormal, tcBorderHot, tcBorderFocused, tcBorderDisabled, tcReadOnlyNormal, tcReadOnlyHot, tcReadOnlyPressed, tcReadOnlyDisabled, tcDropDownButtonRightNormal, tcDropDownButtonRightHot, tcDropDownButtonRightPressed, tcDropDownButtonRightDisabled, tcDropDownButtonLeftNormal, tcDropDownButtonLeftHot, tcDropDownButtonLeftPressed, tcDropDownButtonLeftDisabled, tcCueBannerNormal, tcCueBannerHot, tcCueBannerPressed, tcCueBannerDisabled };

enum DECLSPEC_DENUM TThemedDatePicker : unsigned char { tdpDatePickerDontCare, tdbDatePickerRoot, tdbDateTextNormal, tdbDateTextDisabled, tdbDateTextSelected, tdbDateBorderNormal, tdbDateBorderHot, tdbDateBorderFocused, tdbDateBorderDisabled, tdbShowCalendarButtonRightNormal, tdbShowCalendarButtonRightHot, tdbShowCalendarButtonRightPressed, tdbShowCalendarButtonRightDisabled };

enum DECLSPEC_DENUM TThemedEdit : unsigned char { teEditDontCare, teEditRoot, teEditTextNormal, teEditTextHot, teEditTextSelected, teEditTextDisabled, teEditTextFocused, teEditTextReadOnly, teEditTextAssist, teEditCaret, teBackgroundNormal, teBackgroundHot, teBackgroundDisabled, teBackgroundFocused, teBackgroundReadOnly, teBackgroundAssist, tePassword, teBackgroundWithBorderNormal, teBackgroundWithBorderHot, teBackgroundWithBorderDisabled, teBackgroundWithBorderFocused, teEditBorderNoScrollNormal, teEditBorderNoScrollHot, teEditBorderNoScrollFocused, teEditBorderNoScrollDisabled, teEditBorderHScrollNormal, teEditBorderHScrollHot, teEditBorderHScrollFocused, teEditBorderHScrollDisabled, teEditBorderVScrollNormal, teEditBorderVScrollHot, 
	teEditBorderVScrollFocused, teEditBorderVScrollDisabled, teEditBorderHVScrollNormal, teEditBorderHVScrollHot, teEditBorderHVScrollFocused, teEditBorderHVScrollDisabled };

enum DECLSPEC_DENUM TThemedExplorerBar : unsigned char { tebExplorerBarDontCare, tebExplorerBarRoot, tebHeaderBackgroundNormal, tebHeaderBackgroundHot, tebHeaderBackgroundPressed, tebHeaderCloseNormal, tebHeaderCloseHot, tebHeaderClosePressed, tebHeaderPinNormal, tebHeaderPinHot, tebHeaderPinPressed, tebHeaderPinSelectedNormal, tebHeaderPinSelectedHot, tebHeaderPinSelectedPressed, tebIEBarMenuNormal, tebIEBarMenuHot, tebIEBarMenuPressed, tebNormalGroupBackground, tebNormalGroupCollapseNormal, tebNormalGroupCollapseHot, tebNormalGroupCollapsePressed, tebNormalGroupExpandNormal, tebNormalGroupExpandHot, tebNormalGroupExpandPressed, tebNormalGroupHead, tebSpecialGroupBackground, tebSpecialGroupCollapseNormal, tebSpecialGroupCollapseHot, 
	tebSpecialGroupCollapsePressed, tebSpecialGroupExpandNormal, tebSpecialGroupExpandHot, tebSpecialGroupExpandPressed, tebSpecialGroupHead };

enum DECLSPEC_DENUM TThemedFlyOut : unsigned char { tfFlyOutDontCare, tfFlyOutRoot, tfFlyOutHeader, tfFlyOutBodyNormal, tfFlyOutBodyEmphasized, tfFlyOutLabelNormal, tfFlyOutLabelSlected, tfFlyOutLabelEmphasized, tfFlyOutLabelDisabled, tfFlyOutLinkNormal, tfFlyOutLinkHover, tfFlyOutDivider, tfFlyOutWindow, tfFlyOutLinkArea, tfFlyOutLinkHeaderNormal, tfFlyOutLinkHeaderHover };

enum DECLSPEC_DENUM TThemedGrid : unsigned char { tgGridDontCare, tgGridRoot, tgCellNormal, tgCellSelected, tgCellRowSelectedLeft, tgCellRowSelectedCenter, tgCellRowSelectedRight, tgFixedCellNormal, tgFixedCellHot, tgFixedCellPressed, tgGradientCellNormal, tgGradientCellSelected, tgGradientCellRowSelectedLeft, tgGradientCellRowSelectedCenter, tgGradientCellRowSelectedRight, tgGradientFixedCellNormal, tgGradientFixedCellHot, tgGradientFixedCellPressed, tgClassicCellNormal, tgClassicCellSelected, tgClassicCellRowSelectedLeft, tgClassicCellRowSelectedCenter, tgClassicCellRowSelectedRight, tgClassicFixedCellNormal, tgClassicFixedCellHot, tgClassicFixedCellPressed, tgDropDownButtonNormal, tgDropDownButtonHot, tgDropDownButtonPressed, tgDropDownButtonDisabled, 
	tgEllipsisButtonNormal, tgEllipsisButtonHot, tgEllipsisButtonPressed, tgIndicatorArrow, tgIndicatorEdit, tgIndicatorInsert, tgIndicatorMultiDot, tgIndicatorMultiArrow };

enum DECLSPEC_DENUM TThemedHeader : unsigned char { thHeaderDontCare, thHeaderRoot, thHeaderItemNormal, thHeaderItemHot, thHeaderItemPressed, thHeaderItemLeftNormal, thHeaderItemLeftHot, thHeaderItemLeftPressed, thHeaderItemRightNormal, thHeaderItemRightHot, thHeaderItemRightPressed, thHeaderSortArrowSortedUp, thHeaderSortArrowSortedDown, thHeaderDropDownNormal, thHeaderDropDownSoftHot, thHeaderDropDownHot, thHeaderDropDownFilterNormal, thHeaderDropDownFilterSoftHot, thHeaderDropDownFilterHot, thHeaderOverflowNormal, thHeaderOverflowHot };

enum DECLSPEC_DENUM TThemedHint : unsigned char { thHintDontCare, thHintRoot, thHintNormal, thHintBalloon };

enum DECLSPEC_DENUM TThemedListview : unsigned char { tlListviewDontCare, tlListviewRoot, tlListItemNormal, tlListItemHot, tlListItemSelected, tlListItemDisabled, tlListItemSelectedNotFocus, tlListItemHotSelected, tlListGroup, tlListDetail, tlListSortDetail, tlEmptyText, tlGroupHeaderOpen, tlGroupHeaderOpenHot, tlGroupHeaderOpenSelected, tlGroupHeaderOpenSelectedHot, tlGroupHeaderOpenSelectedNotFocused, tlGroupHeaderOpenSelectedNotFocusedHot, tlGroupHeaderOpenMixedSelection, tlGroupHeaderOpenMixedSelectionHot, tlGroupHeaderClose, tlGroupHeaderCloseHot, tlGroupHeaderCloseSelected, tlGroupHeaderCloseSelectedHot, tlGroupHeaderCloseSelectedNotFocused, tlGroupHeaderCloseSelectedNotFocusedHot, tlGroupHeaderCloseMixedSelection, tlGroupHeaderCloseMixedSelectionHot, 
	tlGroupHeaderLineOpen, tlGroupHeaderLineOpenHot, tlGroupHeaderLineOpenSelected, tlGroupHeaderLineOpenSelectedHot, tlGroupHeaderLineOpenSelectedNotFocused, tlGroupHeaderLineOpenSelectedNotFocusedHot, tlGroupHeaderLineOpenMixedSelection, tlGroupHeaderLineOpenMixedSelectionHot, tlGroupHeaderLineClose, tlGroupHeaderLineCloseHot, tlGroupHeaderLineCloseSelected, tlGroupHeaderLineCloseSelectedHot, tlGroupHeaderLineCloseSelectedNotFocused, tlGroupHeaderLineCloseSelectedNotFocusedHot, tlGroupHeaderLineCloseMixedSelection, tlGroupHeaderLineCloseMixedSelectionHot, tlExpandButtonNormal, tlExpandButtonHover, tlExpandButtonPushed, tlCollapseButtonNormal, tlCollapseButtonHover, tlCollapseButtonPushed, tlColumnDetail };

enum DECLSPEC_DENUM TThemedLink : unsigned char { tlLinkDontCare, tlLinkRoot, tlLinkNormal, tlLinkLinked };

enum DECLSPEC_DENUM TThemedMenu : unsigned char { tmMenuDontCare, tmMenuRoot, tmMenuItemNormal, tmMenuItemSelected, tmMenuItemDemoted, tmMenuDropDown, tmMenuBarItem, tmMenuBarDropDown, tmChevron, tmSeparator, tmMenuBarBackgroundActive, tmMenuBarBackgroundInactive, tmMenuBarItemNormal, tmMenuBarItemHot, tmMenuBarItemPushed, tmMenuBarItemDisabled, tmMenuBarItemDisabledHot, tmMenuBarItemDisabledPushed, tmPopupBackground, tmPopupBorders, tmPopupCheckNormal, tmPopupCheckDisabled, tmPopupBulletNormal, tmPopupBulletDisabled, tmPopupCheckBackgroundDisabled, tmPopupCheckBackgroundNormal, tmPopupCheckBackgroundBitmap, tmPopupGutter, tmPopupItemNormal, tmPopupItemHot, tmPopupItemDisabled, tmPopupItemDisabledHot, tmPopupSeparator, tmPopupSubMenuNormal, 
	tmPopupSubMenuDisabled, tmSystemCloseNormal, tmSystemCloseDisabled, tmSystemMaximizeNormal, tmSystemMaximizeDisabled, tmSystemMinimizeNormal, tmSystemMinimizeDisabled, tmSystemRestoreNormal, tmSystemRestoreDisabled };

enum DECLSPEC_DENUM TThemedMenuBand : unsigned char { tmbMenuBandDontCare, tmbMenuBandRoot, tmbNewAppButtonNormal, tmbNewAppButtonHot, tmbNewAppButtonPressed, tmbNewAppButtonDisabled, tmbNewAppButtonChecked, tmbNewAppButtonNotChecked, tmbSeparatorNormal, tmbSeparatorHot, tmbSeparatorPressed, tmbSeparatorDisabled, tmbSeparatorChecked, tmbSeparatorNotChecked };

enum DECLSPEC_DENUM TThemedMonthCal : unsigned char { tmcMonthCalDontCare, tmcMonthCalRoot, tmcBackground, tmcBorders, tmcGridBackground, tmcColHeaderSplitter, tmcGridCellBackgroundSelected, tmcGridCellBackgroundHot, tmcGridCellBackgroundSelectedHot, tmcGridCellBackgroundSelectedNotFocused, tmcGridCellBackgroundToday, tmcGridCellHot, tmcGridCellHasState, tmcGridCellHasStateHot, tmcGridCellToday, tmcGridCellUpperHot, tmcGridCellUpperHasState, tmcGridCellUpperHasStateHot, tmcTrailingGridCellHot, tmcTrailingGridCellHasState, tmcTrailingGridCellHasStateHot, tmcTrailingGridCellToday, tmcTrailingGridCellUpperHot, tmcTrailingGridCellUpperHasState, tmcTrailingGridCellUpperHasStateHot, tmcNavNextNormal, tmcNavNextHot, tmcNavNextPressed, tmcNavNextDisabled, 
	tmcNavPrevNormal, tmcNavPrevHot, tmcNavPrevPressed, tmcNavPrevDisabled };

enum DECLSPEC_DENUM TThemedMPlayerButtons : unsigned char { tmpbPlayNormal, tmpbPlayHot, tmpbPlayPressed, tmpbPlayDisabled, tmpbPauseNormal, tmpbPauseHot, tmpbPausePressed, tmpbPauseDisabled, tmpbStopNormal, tmpbStopHot, tmpbStopPressed, tmpbStopDisabled, tmpbNextNormal, tmpbNextHot, tmpbNextPressed, tmpbNextDisabled, tmpbPrevNormal, tmpbPrevHot, tmpbPrevPressed, tmpbPrevDisabled, tmpbStepNormal, tmpbStepHot, tmpbStepPressed, tmpbStepDisabled, tmpbBackNormal, tmpbBackHot, tmpbBackPressed, tmpbBackDisabled, tmpbRecordNormal, tmpbRecordHot, tmpbRecordPressed, tmpbRecordDisabled, tmpbEjectNormal, tmpbEjectHot, tmpbEjectPressed, tmpbEjectDisabled };

enum DECLSPEC_DENUM TThemedNavigation : unsigned char { tnNavigatrionDontCare, tnNavigatrionRoot, tnBackButtonNormal, tnBackButtonHot, tnBackButtonPressed, tnBackButtonDisabled, tnForwardButtonNormal, tnForwardButtonHot, tnForwardButtonPressed, tnForwardButtonDisabled, tnMenuButtonNormal, tnMenuButtonHot, tnMenuButtonPressed, tnMenuButtonDisabled };

enum DECLSPEC_DENUM TThemedDataNavButtons : unsigned char { tdnbDontCare, tdnbNavigatorRoot, tdnbFirstNormal, tdnbFirstHot, tdnbFirstPressed, tdnbFirstDisabled, tdnbPriorNormal, tdnbPriorHot, tdnbPriorPressed, tdnbPriorDisabled, tdnbNextNormal, tdnbNextHot, tdnbNextPressed, tdnbNextDisabled, tdnbLastNormal, tdnbLastHot, tdnbLastPressed, tdnbLastDisabled, tdnbInsertNormal, tdnbInsertHot, tdnbInsertPressed, tdnbInsertDisabled, tdnbDeleteNormal, tdnbDeleteHot, tdnbDeletePressed, tdnbDeleteDisabled, tdnbEditNormal, tdnbEditHot, tdnbEditPressed, tdnbEditDisabled, tdnbPostNormal, tdnbPostHot, tdnbPostPressed, tdnbPostDisabled, tdnbCancelNormal, tdnbCancelHot, tdnbCancelPressed, tdnbCancelDisabled, tdnbRefreshNormal, tdnbRefreshHot, tdnbRefreshPressed, 
	tdnbRefreshDisabled, tdnbApplyUpdatesNormal, tdnbApplyUpdatesHot, tdnbApplyUpdatesPressed, tdnbApplyUpdatesDisabled, tdnbCancelUpdatesNormal, tdnbCancelUpdatesHot, tdnbCancelUpdatesPressed, tdnbCancelUpdatesDisabled };

enum DECLSPEC_DENUM TThemedPage : unsigned char { tpPageDontCare, tpPageRoot, tpUpNormal, tpUpHot, tpUpPressed, tpUpDisabled, tpDownNormal, tpDownHot, tpDownPressed, tpDownDisabled, tpUpHorzNormal, tpUpHorzHot, tpUpHorzPressed, tpUpHorzDisabled, tpDownHorzNormal, tpDownHorzHot, tpDownHorzPressed, tpDownHorzDisabled };

enum DECLSPEC_DENUM TThemedPanel : unsigned char { tpPanelDontCare, tpPanelRoot, tpPanelBackground, tpPanelBevel, tpDockPanelHorzNormal, tpDockPanelHorzSelected, tpDockPanelVertNormal, tpDockPanelVertSelected, tpDockPanelPinNormal, tpDockPanelCloseNormal };

enum DECLSPEC_DENUM TThemedProgress : unsigned char { tpProgressDontCare, tpProgressRoot, tpBar, tpBarVert, tpChunk, tpChunkVert, tpFill, tpFillVert, tpPulseOverlay, tpMoveOverlay, tpPulseOverlayVert, tpMoveOverlayVert, tpTransparentBarNormal, tpTransparentBarPartial, tpTransparentBarVertNormal, tpTransparentBarVertPartial };

enum DECLSPEC_DENUM TThemedRebar : unsigned char { trRebarDontCare, trRebarRoot, trGripper, trGripperVert, trBand, trChevronNormal, trChevronHot, trChevronPressed, trChevronVertNormal, trChevronVertHot, trChevronVertPressed, trBackground, trSplitterNormal, trSplitterHot, trSplitterPressed, trSlipperVertNormal, trSlipperVertHot, trSlipperVertPressed };

enum DECLSPEC_DENUM TThemedScrollBar : unsigned char { tsScrollBarDontCare, tsScrollBarRoot, tsArrowBtnUpNormal, tsArrowBtnUpHot, tsArrowBtnUpPressed, tsArrowBtnUpDisabled, tsArrowBtnDownNormal, tsArrowBtnDownHot, tsArrowBtnDownPressed, tsArrowBtnDownDisabled, tsArrowBtnLeftNormal, tsArrowBtnLeftHot, tsArrowBtnLeftPressed, tsArrowBtnLeftDisabled, tsArrowBtnRightNormal, tsArrowBtnRightHot, tsArrowBtnRightPressed, tsArrowBtnRightDisabled, tsArrowBtnUpHover, tsArrowBtnDownHover, tsArrowBtnLeftHover, tsArrowBtnRightHover, tsThumbBtnHorzNormal, tsThumbBtnHorzHot, tsThumbBtnHorzPressed, tsThumbBtnHorzDisabled, tsThumbBtnVertNormal, tsThumbBtnVertHot, tsThumbBtnVertPressed, tsThumbBtnVertDisabled, tsLowerTrackHorzNormal, tsLowerTrackHorzHot, tsLowerTrackHorzPressed, 
	tsLowerTrackHorzDisabled, tsLowerTrackHorzHover, tsUpperTrackHorzNormal, tsUpperTrackHorzHot, tsUpperTrackHorzPressed, tsUpperTrackHorzDisabled, tsUpperTrackHorzHover, tsLowerTrackVertNormal, tsLowerTrackVertHot, tsLowerTrackVertPressed, tsLowerTrackVertDisabled, tsLowerTrackVertHover, tsUpperTrackVertNormal, tsUpperTrackVertHot, tsUpperTrackVertPressed, tsUpperTrackVertDisabled, tsUpperTrackVertHover, tsGripperHorzNormal, tsGripperHorzHot, tsGripperHorzPressed, tsGripperHorzDisabled, tsGripperHorzHover, tsGripperVertNormal, tsGripperVertHot, tsGripperVertPressed, tsGripperVertDisabled, tsGripperVertHover, tsSizeBoxRightAlign, tsSizeBoxLeftAlign, tsSizeBoxTopRightAlign, tsSizeBoxTopLeftAlign, tsSizeBoxHalfBottomRightAlign, tsSizeBoxHalfBottomLeftAlign, 
	tsSizeBoxHalfTopRightAlign, tsSizeBoxHalfTopLeftAlign };

enum DECLSPEC_DENUM TThemedSpin : unsigned char { tsSpinDontCare, tsSpinRoot, tsUpNormal, tsUpHot, tsUpPressed, tsUpDisabled, tsDownNormal, tsDownHot, tsDownPressed, tsDownDisabled, tsUpHorzNormal, tsUpHorzHot, tsUpHorzPressed, tsUpHorzDisabled, tsDownHorzNormal, tsDownHorzHot, tsDownHorzPressed, tsDownHorzDisabled };

enum DECLSPEC_DENUM TThemedStartPanel : unsigned char { tspStartPanelDontCare, tspStartPanelRoot, tspUserPane, tspMorePrograms, tspMoreProgramsArrowNormal, tspMoreProgramsArrowHot, tspMoreProgramsArrowPressed, tspProgList, tspProgListSeparator, tspPlacesList, tspPlacesListSeparator, tspLogOff, tspLogOffButtonsNormal, tspLogOffButtonsHot, tspLogOffButtonsPressed, tspUserPicture, tspPreview, tspMoreProgramsTabNormal, tspMoreProgramsTabHot, tspMoreProgramsTabSelected, tspMoreProgramsTabDisabled, tspMoreProgramsTabFocused, tspNSCHost, tspSoftwareExplorerNormal, tspSoftwareExplorerHot, tspSoftwareExplorerSelected, tspSoftwareExplorerDisabled, tspSoftwareExplorerFocused, tspOpenBoxNormal, tspOpenBoxHot, tspOpenBoxSelected, tspOpenBoxDisabled, tspOpenBoxFocused, 
	tspSearchView, tspMoreProgramsArrowBackNormal, tspMoreProgramsArrowBackHot, tspMoreProgramsArrowBackPressed, tspTopMatch, tspLogOffSplitButtonDropDown };

enum DECLSPEC_DENUM TThemedStatus : unsigned char { tsStatusDontCare, tsStatusRoot, tsPane, tsGripperPane, tsGripper };

enum DECLSPEC_DENUM TThemedTab : unsigned char { ttTabDontCare, ttTabRoot, ttTabItemNormal, ttTabItemHot, ttTabItemSelected, ttTabItemDisabled, ttTabItemFocused, ttTabItemLeftEdgeNormal, ttTabItemLeftEdgeHot, ttTabItemLeftEdgeSelected, ttTabItemLeftEdgeDisabled, ttTabItemLeftEdgeFocused, ttTabItemRightEdgeNormal, ttTabItemRightEdgeHot, ttTabItemRightEdgeSelected, ttTabItemRightEdgeDisabled, ttTabItemRightEdgeFocused, ttTabItemBothEdgeNormal, ttTabItemBothEdgeHot, ttTabItemBothEdgeSelected, ttTabItemBothEdgeDisabled, ttTabItemBothEdgeFocused, ttTopTabItemNormal, ttTopTabItemHot, ttTopTabItemSelected, ttTopTabItemDisabled, ttTopTabItemFocused, ttTopTabItemLeftEdgeNormal, ttTopTabItemLeftEdgeHot, ttTopTabItemLeftEdgeSelected, ttTopTabItemLeftEdgeDisabled, 
	ttTopTabItemLeftEdgeFocused, ttTopTabItemRightEdgeNormal, ttTopTabItemRightEdgeHot, ttTopTabItemRightEdgeSelected, ttTopTabItemRightEdgeDisabled, ttTopTabItemRightEdgeFocused, ttTopTabItemBothEdgeNormal, ttTopTabItemBothEdgeHot, ttTopTabItemBothEdgeSelected, ttTopTabItemBothEdgeDisabled, ttTopTabItemBothEdgeFocused, ttPane, ttBody, ttAeroWizardBody };

enum DECLSPEC_DENUM TThemedTabSet : unsigned char { tbsDontCare, tbsRoot, tbsBackground, tbsTabNormal, tbsTabSelected };

enum DECLSPEC_DENUM TThemedTaskBand : unsigned char { ttbTaskBandDontCare, ttbTaskBandRoot, ttbGroupCount, ttbFlashButton, ttpFlashButtonGroupMenu };

enum DECLSPEC_DENUM TThemedTaskBar : unsigned char { ttbTaskBarDontCare, ttbTaskBarRoot, ttbBackgroundBottom, ttbBackgroundRight, ttbBackgroundTop, ttbBackgroundLeft, ttbSizingBarBottom, ttbSizingBarRight, ttbSizingBarTop, ttbSizingBarLeft };

enum DECLSPEC_DENUM TThemedTaskDialog : unsigned char { ttdTaskDialogDontCare, ttdTaskDialogRoot, ttdPrimaryPanel, ttdMainInstructionPane, ttdMainIcon, ttdContentPane, ttdContentIcon, ttdExpandedContent, ttdCommandLinkPane, ttdSecondaryPanel, ttdControlPane, ttdButtonSection, ttdButtonWrapper, ttdExpandoText, ttdExpandoButtonNormal, ttdExpandoButtonHover, ttdExpandoButtonPressed, ttdExpandoButtonExpandedNormal, ttdExpandoButtonExpandedHover, ttdExpandoButtonExpandedPressed, ttdVerificationText, ttdFootnotePane, ttdFootnoteArea, ttdFootnoteSeparator, ttdExpandedFooterArea, ttdProgressBar, ttdImageAlignment, ttdRadioButtonPane };

enum DECLSPEC_DENUM TThemedTextLabel : unsigned char { ttlTextLabelDontCare, ttlTextLabelRoot, ttlTextLabelNormal, ttlTextLabelDisabled };

enum DECLSPEC_DENUM TThemedTextStyle : unsigned char { ttsTextStyleDontCare, ttsTextStyleRoot, ttsMainInstruction, ttsInstruction, ttsBodyTitle, ttsBodyText, ttsSecondaryText, ttsHyperLinkTextNormal, ttsHyperLinkTextHot, ttsHyperLinkTextPressed, ttsHyperLinkTextDisabled, ttsExpanded, ttsLabel, ttsControlLabelNormal, ttsControlLabelDisabled };

enum DECLSPEC_DENUM TThemedToggleSwitch : unsigned char { ttsToggleSwitchDontCare, ttsToggleSwitchRoot, ttsTrackOffNormal, ttsTrackOffHot, ttsTrackOffDisabled, ttsTrackOnNormal, ttsTrackOnHot, ttsTrackOnDisabled, ttsThumbNormal, ttsThumbHot, ttsThumbDisabled };

enum DECLSPEC_DENUM TThemedSearchIndicators : unsigned char { tsiTextNormal, tsiTextHot, tsiTextPressed, tsiTextDisabled, tsiAudioNormal, tsiAudioHot, tsiAudioPressed, tsiAudioDisabled };

enum DECLSPEC_DENUM TThemedToolBar : unsigned char { ttbToolBarDontCare, ttbToolBarRoot, ttbButtonNormal, ttbButtonHot, ttbButtonPressed, ttbButtonDisabled, ttbButtonChecked, ttbButtonCheckedHot, ttbButtonNearHot, ttbButtonOtherSideHot, ttbDropDownButtonNormal, ttbDropDownButtonHot, ttbDropDownButtonPressed, ttbDropDownButtonDisabled, ttbDropDownButtonChecked, ttbDropDownButtonCheckedHot, ttbDropDownButtonNearHot, ttbDropDownButtonOtherSideHot, ttbSplitButtonNormal, ttbSplitButtonHot, ttbSplitButtonPressed, ttbSplitButtonDisabled, ttbSplitButtonChecked, ttbSplitButtonCheckedHot, ttbSplitButtonNearHot, ttbSplitButtonOtherSideHot, ttbSplitButtonDropDownNormal, ttbSplitButtonDropDownHot, ttbSplitButtonDropDownPressed, ttbSplitButtonDropDownDisabled, 
	ttbSplitButtonDropDownChecked, ttbSplitButtonDropDownCheckedHot, ttbSplitButtonDropDownNearHot, ttbSplitButtonDropDownOtherSideHot, ttbSeparatorNormal, ttbSeparatorHot, ttbSeparatorPressed, ttbSeparatorDisabled, ttbSeparatorChecked, ttbSeparatorCheckedHot, ttbSeparatorNearHot, ttbSeparatorOtherSideHot, ttbSeparatorVertNormal, ttbSeparatorVertHot, ttbSeparatorVertPressed, ttbSeparatorVertDisabled, ttbSeparatorVertChecked, ttbSeparatorVertCheckedHot, ttbSeparatorVertNearHot, ttbSeparatorVertOtherSideHot, ttbDropDownButtonGlyphNormal, ttbDropDownButtonGlyphHot, ttbDropDownButtonGlyphPressed, ttbDropDownButtonGlyphDisabled, ttbDropDownButtonGlyphChecked, ttbDropDownButtonGlyphCheckedHot, ttbDropDownButtonGlyphNearHot, ttbDropDownButtonGlyphOtherSideHot };

enum DECLSPEC_DENUM TThemedToolTip : unsigned char { tttToolTipDontCare, tttToolTipRoot, tttStandardNormal, tttStandardLink, tttStandardTitleNormal, tttStandardTitleLink, tttBaloonNormal, tttBaloonLink, tttBaloonTitleNormal, tttBaloonTitleLink, tttBaloonStemUpLeft, tttBaloonStemDownLeft, tttCloseNormal, tttCloseHot, tttClosePressed, tttBalloonStemUpLeftWall, tttBalloonStemUpCentered, tttBalloonStemUpRightWall, tttBalloonStemDownRightWall, tttBalloonStemDownCentered, tttBalloonStemLeftWall, tttWrenchNormal, tttWrenchHot, tttWrenchPressed };

enum DECLSPEC_DENUM TThemedTrackBar : unsigned char { ttbTrackBarDontCare, ttbTrackBarRoot, ttbTrack, ttbTrackVert, ttbThumbNormal, ttbThumbHot, ttbThumbPressed, ttbThumbFocused, ttbThumbDisabled, ttbThumbBottomNormal, ttbThumbBottomHot, ttbThumbBottomPressed, ttbThumbBottomFocused, ttbThumbBottomDisabled, ttbThumbTopNormal, ttbThumbTopHot, ttbThumbTopPressed, ttbThumbTopFocused, ttbThumbTopDisabled, ttbThumbVertNormal, ttbThumbVertHot, ttbThumbVertPressed, ttbThumbVertFocused, ttbThumbVertDisabled, ttbThumbLeftNormal, ttbThumbLeftHot, ttbThumbLeftPressed, ttbThumbLeftFocused, ttbThumbLeftDisabled, ttbThumbRightNormal, ttbThumbRightHot, ttbThumbRightPressed, ttbThumbRightFocused, ttbThumbRightDisabled, ttbThumbTics, ttbThumbTicsVert };

enum DECLSPEC_DENUM TThemedTrayNotify : unsigned char { ttnTrayNotifyDontCare, ttnTrayNotifyRoot, ttnBackground, ttnAnimBackground };

enum DECLSPEC_DENUM TThemedTreeview : unsigned char { ttTreeviewDontCare, ttTreeviewRoot, ttItemNormal, ttItemHot, ttItemSelected, ttItemDisabled, ttItemSelectedNotFocus, ttItemHotSelected, ttGlyphClosed, ttGlyphOpened, ttBranch, ttHotGlyphClosed, ttHotGlyphOpen };

enum DECLSPEC_DENUM TThemedWindow : unsigned char { twWindowDontCare, twWindowRoot, twCaptionActive, twCaptionInactive, twCaptionDisabled, twSmallCaptionActive, twSmallCaptionInactive, twSmallCaptionDisabled, twMinCaptionActive, twMinCaptionInactive, twMinCaptionDisabled, twSmallMinCaptionActive, twSmallMinCaptionInactive, twSmallMinCaptionDisabled, twMaxCaptionActive, twMaxCaptionInactive, twMaxCaptionDisabled, twSmallMaxCaptionActive, twSmallMaxCaptionInactive, twSmallMaxCaptionDisabled, twFrameLeftActive, twFrameLeftInactive, twFrameRightActive, twFrameRightInactive, twFrameBottomActive, twFrameBottomInactive, twSmallFrameLeftActive, twSmallFrameLeftInactive, twSmallFrameRightActive, twSmallFrameRightInactive, twSmallFrameBottomActive, 
	twSmallFrameBottomInactive, twSysButtonNormal, twSysButtonHot, twSysButtonPushed, twSysButtonDisabled, twMDISysButtonNormal, twMDISysButtonHot, twMDISysButtonPushed, twMDISysButtonDisabled, twMinButtonNormal, twMinButtonHot, twMinButtonPushed, twMinButtonDisabled, twMDIMinButtonNormal, twMDIMinButtonHot, twMDIMinButtonPushed, twMDIMinButtonDisabled, twMaxButtonNormal, twMaxButtonHot, twMaxButtonPushed, twMaxButtonDisabled, twCloseButtonNormal, twCloseButtonHot, twCloseButtonPushed, twCloseButtonDisabled, twSmallCloseButtonNormal, twSmallCloseButtonHot, twSmallCloseButtonPushed, twSmallCloseButtonDisabled, twMDICloseButtonNormal, twMDICloseButtonHot, twMDICloseButtonPushed, twMDICloseButtonDisabled, twRestoreButtonNormal, twRestoreButtonHot, 
	twRestoreButtonPushed, twRestoreButtonDisabled, twMDIRestoreButtonNormal, twMDIRestoreButtonHot, twMDIRestoreButtonPushed, twMDIRestoreButtonDisabled, twHelpButtonNormal, twHelpButtonHot, twHelpButtonPushed, twHelpButtonDisabled, twMDIHelpButtonNormal, twMDIHelpButtonHot, twMDIHelpButtonPushed, twMDIHelpButtonDisabled, twHorzScrollNormal, twHorzScrollHot, twHorzScrollPushed, twHorzScrollDisabled, twHorzThumbNormal, twHorzThumbHot, twHorzThumbPushed, twHorzThumbDisabled, twVertScrollNormal, twVertScrollHot, twVertScrollPushed, twVertScrollDisabled, twVertThumbNormal, twVertThumbHot, twVertThumbPushed, twVertThumbDisabled, twDialog, twCaptionSizingTemplate, twSmallCaptionSizingTemplate, twFrameLeftSizingTemplate, twSmallFrameLeftSizingTemplate, 
	twFrameRightSizingTemplate, twSmallFrameRightSizingTemplate, twFrameBottomSizingTemplate, twSmallFrameBottomSizingTemplate, twFrame };

typedef System::StaticArray<NativeUInt, 45> TThemeData;

typedef System::Generics::Collections::TDictionary__2<int,NativeUInt>* TThemeHandleForDPIDictionary;

typedef System::StaticArray<System::Generics::Collections::TDictionary__2<int,NativeUInt>*, 45> TThemeDataForDPI;

enum DECLSPEC_DENUM TElementColor : unsigned char { ecBorderColor, ecFillColor, ecTextColor, ecEdgeLightColor, ecEdgeHighLightColor, ecEdgeShadowColor, ecEdgeDkShadowColor, ecEdgeFillColor, ecTransparentColor, ecGradientColor1, ecGradientColor2, ecGradientColor3, ecGradientColor4, ecGradientColor5, ecShadowColor, ecGlowColor, ecTextBorderColor, ecTextShadowColor, ecGlyphTextColor, ecGlyphTransparentColor, ecFillColorHint, ecBorderColorHint, ecAccentColorHint, ecTextColorHint, ecHeading1TextColor, ecHeading2TextColor, ecBodyTextColor };

enum DECLSPEC_DENUM TElementEdge : unsigned char { eeRaisedInner, eeSunkenInner, eeRaisedOuter, eeSunkenOuter, eeBump, eeEtched, eeRaised, eeSunken };

typedef System::Set<TElementEdge, TElementEdge::eeRaisedInner, TElementEdge::eeSunken> TElementEdges;

struct DECLSPEC_DRECORD TStyleElementEdges
{
private:
	TElementEdges FValue;
	
public:
	static TStyleElementEdges __fastcall _op_Implicit(TElementEdges Value);
	__fastcall operator TElementEdges();
	static TStyleElementEdges __fastcall _op_Implicit(unsigned Value);
	__fastcall operator unsigned();
	
	TStyleElementEdges& operator =(TElementEdges Value) { *this = TStyleElementEdges::_op_Implicit(Value); return *this; }
	TStyleElementEdges& operator =(unsigned Value) { *this = TStyleElementEdges::_op_Implicit(Value); return *this; }
};


enum DECLSPEC_DENUM TElementEdgeFlag : unsigned char { efLeft, efTop, efRight, efBottom, efTopLeft, efTopRight, efBottomLeft, efBottomRight, efRect, efDiagonal, efDiagonalEndTopLeft, efDiagonalEndTopRight, efDiagonalEndBottomLeft, efDiagonalEndBottomRight, efMiddle, efSoft, efAdjust, efFlat, efMono };

typedef System::Set<TElementEdgeFlag, TElementEdgeFlag::efLeft, TElementEdgeFlag::efMono> TElementEdgeFlags;

struct DECLSPEC_DRECORD TStyleElementEdgeFlags
{
private:
	TElementEdgeFlags FValue;
	
public:
	static TStyleElementEdgeFlags __fastcall _op_Implicit(TElementEdgeFlags Value);
	__fastcall operator TElementEdgeFlags();
	static TStyleElementEdgeFlags __fastcall _op_Implicit(unsigned Value);
	__fastcall operator unsigned();
	
	TStyleElementEdgeFlags& operator =(TElementEdgeFlags Value) { *this = TStyleElementEdgeFlags::_op_Implicit(Value); return *this; }
	TStyleElementEdgeFlags& operator =(unsigned Value) { *this = TStyleElementEdgeFlags::_op_Implicit(Value); return *this; }
};


typedef _MARGINS TElementMargins;

enum DECLSPEC_DENUM TElementMargin : unsigned char { emSizing, emContent, emCaption };

enum DECLSPEC_DENUM TElementSize : unsigned char { esMinimum, esActual, esStretch };

enum DECLSPEC_DENUM TStyleTextFlag : unsigned char { stfTextColor, stfBorderColor, stfBorderSize, stfShadowColor, stfShadowOffset, stfGlowSize };

typedef System::Set<TStyleTextFlag, TStyleTextFlag::stfTextColor, TStyleTextFlag::stfGlowSize> TStyleTextFlags;

struct DECLSPEC_DRECORD TStyleTextOptions
{
public:
	TStyleTextFlags Flags;
	System::Uitypes::TColor TextColor;
	System::Uitypes::TColor BorderColor;
	int BorderSize;
	System::Uitypes::TColor ShadowColor;
	System::Types::TPoint ShadowOffset;
	int GlowSize;
};


typedef TThemedElementDetails *PThemedElementDetails;

struct DECLSPEC_DRECORD TThemedElementDetails
{
public:
	TThemedElement Element;
	int Part;
	int State;
	static TThemedElementDetails __fastcall Create(TThemedElement Element, int Part, int State);
};


enum DECLSPEC_DENUM TStyleColor : unsigned char { scBorder, scButtonDisabled, scButtonFocused, scButtonHot, scButtonNormal, scButtonPressed, scCategoryButtons, scCategoryButtonsGradientBase, scCategoryButtonsGradientEnd, scCategoryPanelGroup, scComboBox, scComboBoxDisabled, scEdit, scEditDisabled, scGrid, scGenericBackground, scGenericGradientBase, scGenericGradientEnd, scHintGradientBase, scHintGradientEnd, scListBox, scListBoxDisabled, scListView, scPanel, scPanelDisabled, scSplitter, scToolBarGradientBase, scToolBarGradientEnd, scTreeView, scWindow };

enum DECLSPEC_DENUM TStyleFont : unsigned char { sfButtonTextDisabled, sfButtonTextFocused, sfButtonTextHot, sfButtonTextNormal, sfButtonTextPressed, sfCaptionTextInactive, sfCaptionTextNormal, sfCategoryPanelGroupHeaderHot, sfCategoryPanelGroupHeaderNormal, sfCatgeoryButtonsCategoryNormal, sfCatgeoryButtonsCategorySelected, sfCatgeoryButtonsHot, sfCatgeoryButtonsNormal, sfCatgeoryButtonsSelected, sfCheckBoxTextDisabled, sfCheckBoxTextFocused, sfCheckBoxTextHot, sfCheckBoxTextNormal, sfCheckBoxTextPressed, sfComboBoxItemDisabled, sfComboBoxItemFocused, sfComboBoxItemHot, sfComboBoxItemNormal, sfComboBoxItemSelected, sfEditBoxTextDisabled, sfEditBoxTextFocused, sfEditBoxTextHot, sfEditBoxTextNormal, sfEditBoxTextSelected, sfGridItemFixedHot, 
	sfGridItemFixedNormal, sfGridItemFixedPressed, sfGridItemNormal, sfGridItemSelected, sfGroupBoxTextDisabled, sfGroupBoxTextNormal, sfHeaderSectionTextDisabled, sfHeaderSectionTextHot, sfHeaderSectionTextNormal, sfHeaderSectionTextPressed, sfListItemTextDisabled, sfListItemTextFocused, sfListItemTextHot, sfListItemTextNormal, sfListItemTextSelected, sfMenuItemTextDisabled, sfMenuItemTextHot, sfMenuItemTextNormal, sfMenuItemTextSelected, sfPanelTextDisabled, sfPanelTextNormal, sfPopupMenuItemTextDisabled, sfPopupMenuItemTextHot, sfPopupMenuItemTextNormal, sfPopupMenuItemTextSelected, sfRadioButtonTextDisabled, sfRadioButtonTextFocused, sfRadioButtonTextHot, sfRadioButtonTextNormal, sfRadioButtonTextPressed, sfSmCaptionTextInactive, sfSmCaptionTextNormal, 
	sfStatusPanelTextDisabled, sfStatusPanelTextNormal, sfTabTextActiveDisabled, sfTabTextActiveHot, sfTabTextActiveNormal, sfTabTextInactiveDisabled, sfTabTextInactiveHot, sfTabTextInactiveNormal, sfTextLabelDisabled, sfTextLabelFocused, sfTextLabelHot, sfTextLabelNormal, sfToolItemTextDisabled, sfToolItemTextHot, sfToolItemTextNormal, sfToolItemTextSelected, sfTreeItemTextDisabled, sfTreeItemTextFocused, sfTreeItemTextHot, sfTreeItemTextNormal, sfTreeItemTextSelected, sfWindowTextDisabled, sfWindowTextNormal };

typedef TStyleInfo *PStyleInfo;

struct DECLSPEC_DRECORD TStyleInfo
{
public:
	System::UnicodeString Name;
	System::UnicodeString Author;
	System::UnicodeString AuthorEMail;
	System::UnicodeString AuthorURL;
	System::UnicodeString Version;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAbstractStyleServices : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual unsigned __fastcall DoColorToRGB(System::Uitypes::TColor Color, PThemedElementDetails Details) = 0 ;
	virtual bool __fastcall DoDrawEdge(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, TElementEdges Edges, TElementEdgeFlags Flags, System::Types::PRect ContentRect, int DPI = 0x0) = 0 /* overload */;
	virtual bool __fastcall DoDrawElement(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0) = 0 /* overload */;
	virtual bool __fastcall DoDrawIcon(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, NativeUInt himl, int Index, int DPI = 0x0) = 0 /* overload */;
	virtual bool __fastcall DoDrawParentBackground(HWND Window, HDC Target, PThemedElementDetails Details, bool OnlyIfTransparent, System::Types::PRect Bounds) = 0 /* overload */;
	virtual bool __fastcall DoDrawText(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0) = 0 /* overload */;
	virtual bool __fastcall DoGetElementContentRect(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0) = 0 ;
	virtual bool __fastcall DoGetElementColor(const TThemedElementDetails &Details, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color) = 0 ;
	virtual bool __fastcall DoGetElementMargins(HDC DC, const TThemedElementDetails &Details, System::Types::PRect Rect, TElementMargin ElementMargin, /* out */ _MARGINS &Margins, int DPI = 0x0) = 0 ;
	virtual bool __fastcall DoGetElementRegion(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &Rect, /* out */ HRGN &Region, int DPI = 0x0) = 0 ;
	virtual bool __fastcall DoGetElementSize(HDC DC, const TThemedElementDetails &Details, System::Types::PRect Rect, TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0) = 0 ;
	virtual System::Uitypes::TColor __fastcall DoGetStyleColor(TStyleColor Color) = 0 ;
	virtual System::Uitypes::TColor __fastcall DoGetStyleFontColor(TStyleFont Font) = 0 ;
	virtual System::Uitypes::TColor __fastcall DoGetSystemColor(System::Uitypes::TColor Color) = 0 ;
	virtual bool __fastcall DoGetTextExtent(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, System::Types::PRect BoundingRect, /* out */ System::Types::TRect &ExtentRect, int DPI = 0x0) = 0 ;
	virtual bool __fastcall DoHasTransparentParts(const TThemedElementDetails &Details) = 0 ;
	virtual bool __fastcall DoHasElementFixedPosition(const TThemedElementDetails &Details) = 0 ;
	virtual __classmethod bool __fastcall DoIsValidStyle(System::Classes::TStream* Stream, PStyleInfo StyleInfo) = 0 ;
	virtual bool __fastcall GetAvailable() = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual NativeUInt __fastcall GetTheme(TThemedElement Element) = 0 ;
	virtual NativeUInt __fastcall GetThemeForDPI(TThemedElement Element, int DPI = 0x0) = 0 ;
	virtual void __fastcall UnloadThemeData() = 0 ;
	virtual void __fastcall UnloadThemeDataForDPI() = 0 ;
	
public:
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedButton Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedCategoryButtons Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedCategoryPanelGroup Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedCheckListBox Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedClock Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedComboBox Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedControlBar Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedDataNavButtons Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMPlayerButtons Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedDatePicker Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedEdit Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedExplorerBar Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedFlyOut Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedGrid Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedHeader Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedHint Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedLink Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedListview Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMenu Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMenuBand Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMonthCal Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedNavigation Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedPage Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedPanel Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedProgress Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedRebar Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedScrollBar Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedSearchIndicators Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedSpin Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedStartPanel Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedStatus Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTab Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTabSet Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTaskBand Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTaskBar Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTaskDialog Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTextLabel Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTextStyle Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedToggleSwitch Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedToolBar Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedToolTip Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTrackBar Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTrayNotify Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTreeview Detail) = 0 /* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedWindow Detail) = 0 /* overload */;
	virtual __classmethod TCustomStyleServices* __fastcall LoadFromStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall PaintBorder(Vcl::Controls::TWinControl* Control, bool EraseLRCorner) = 0 ;
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall UpdateThemes() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TAbstractStyleServices() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAbstractStyleServices() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomStyleServices : public TAbstractStyleServices
{
	typedef TAbstractStyleServices inherited;
	
	
public:
	enum DECLSPEC_DENUM TStyleFlag : unsigned char { sfHandleMessages };
	
	typedef System::Set<TStyleFlag, TStyleFlag::sfHandleMessages, TStyleFlag::sfHandleMessages> TStyleFlags;
	
	
private:
	System::Classes::TNotifyEvent FOnThemeChange;
	bool __fastcall GetIsSystemStyle();
	bool __fastcall GetDesigningState();
	
protected:
	virtual void __fastcall DoOnThemeChange();
	virtual TStyleFlags __fastcall GetFlags();
	
public:
	__fastcall virtual TCustomStyleServices();
	void __fastcall ApplyThemeChange();
	unsigned __fastcall ColorToRGB(System::Uitypes::TColor Color, PThemedElementDetails Details = (PThemedElementDetails)(0x0))/* overload */;
	unsigned __fastcall ColorToRGB(System::Uitypes::TColor Color, const TThemedElementDetails &Details)/* overload */;
	System::Types::TRect __fastcall ContentRect _DEPRECATED_ATTRIBUTE1("Use GetElementContentRect") (HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &BoundingRect);
	bool __fastcall DrawEdge _DEPRECATED_ATTRIBUTE1("Use DrawEdge with TElementEdges") (HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, unsigned Edges, unsigned Flags, System::Types::PRect ContentRect = (System::Types::PRect)(0x0))/* overload */;
	bool __fastcall DrawEdge(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, TElementEdges Edges, TElementEdgeFlags Flags, System::Types::PRect ContentRect = (System::Types::PRect)(0x0))/* overload */;
	bool __fastcall DrawElement(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, const System::Types::TRect &ClipRect, int DPI = 0x0)/* overload */;
	bool __fastcall DrawElement(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, System::Types::PRect ClipRect = (System::Types::PRect)(0x0), int DPI = 0x0)/* overload */;
	bool __fastcall DrawIcon(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, NativeUInt Images, int Index)/* overload */;
	bool __fastcall DrawParentBackground(HWND Window, HDC Target, PThemedElementDetails Details, bool OnlyIfTransparent, const System::Types::TRect &Bounds)/* overload */;
	bool __fastcall DrawParentBackground(HWND Window, HDC Target, const TThemedElementDetails &Details, bool OnlyIfTransparent, System::Types::PRect Bounds = (System::Types::PRect)(0x0))/* overload */;
	bool __fastcall DrawParentBackground(HWND Window, HDC Target, PThemedElementDetails Details, bool OnlyIfTransparent, System::Types::PRect Bounds = (System::Types::PRect)(0x0))/* overload */;
	bool __fastcall DrawText _DEPRECATED_ATTRIBUTE1("Use DrawText with TTextFormat") (HDC DC, const TThemedElementDetails &Details, const System::UnicodeString S, const System::Types::TRect &R, unsigned Flags, unsigned Flags2, int DPI = 0x0)/* overload */;
	bool __fastcall DrawText(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, System::Uitypes::TColor Color = (System::Uitypes::TColor)(0x1fffffff), int DPI = 0x0)/* overload */;
	bool __fastcall DrawText(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0)/* overload */;
	bool __fastcall GetElementContentRect(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect)/* overload */;
	bool __fastcall GetElementColor(const TThemedElementDetails &Details, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	bool __fastcall GetElementMargins(HDC DC, const TThemedElementDetails &Details, TElementMargin ElementMargin, /* out */ _MARGINS &Margins, int DPI = 0x0)/* overload */;
	bool __fastcall GetElementMargins(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &Rect, TElementMargin ElementMargin, /* out */ _MARGINS &Margins, int DPI = 0x0)/* overload */;
	bool __fastcall GetElementRegion(const TThemedElementDetails &Details, const System::Types::TRect &Rect, /* out */ HRGN &Region)/* overload */;
	bool __fastcall GetElementRegion(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &Rect, /* out */ HRGN &Region)/* overload */;
	bool __fastcall GetElementSize(HDC DC, const TThemedElementDetails &Details, TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0)/* overload */;
	bool __fastcall GetElementSize(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &Rect, TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0)/* overload */;
	System::Uitypes::TColor __fastcall GetStyleColor(TStyleColor Color);
	System::Uitypes::TColor __fastcall GetStyleFontColor(TStyleFont Font);
	System::Uitypes::TColor __fastcall GetSystemColor(System::Uitypes::TColor Color);
	bool __fastcall GetTextExtent(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, /* out */ System::Types::TRect &ExtentRect)/* overload */;
	bool __fastcall GetTextExtent(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ExtentRect)/* overload */;
	bool __fastcall HasElementFixedPosition(const TThemedElementDetails &Details);
	bool __fastcall HasTransparentParts(const TThemedElementDetails &Details);
	__classmethod virtual TCustomStyleServices* __fastcall LoadFromFile(const System::UnicodeString FileName);
	virtual void __fastcall PaintBorder(Vcl::Controls::TWinControl* Control, bool EraseLRCorner);
	virtual void __fastcall SaveToFile(const System::UnicodeString FileName);
	bool __fastcall ThemesAvailable _DEPRECATED_ATTRIBUTE1("Use TCustomStyleServices.Available") ();
	bool __fastcall ThemesEnabled _DEPRECATED_ATTRIBUTE1("Use TCustomStyleServices.Enabled") ();
	__classmethod bool __fastcall IsValidStyle(System::Classes::TStream* Stream)/* overload */;
	__classmethod bool __fastcall IsValidStyle(System::Classes::TStream* Stream, TStyleInfo &StyleInfo)/* overload */;
	__property bool Available = {read=GetAvailable, nodefault};
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property bool DesigningState = {read=GetDesigningState, nodefault};
	__property TStyleFlags Flags = {read=GetFlags, nodefault};
	__property bool IsSystemStyle = {read=GetIsSystemStyle, nodefault};
	__property System::UnicodeString Name = {read=GetName};
	__property NativeUInt Theme[TThemedElement Element] = {read=GetTheme};
	__property NativeUInt ThemeForDPI[TThemedElement Element][int DPI] = {read=GetThemeForDPI};
	__property System::Classes::TNotifyEvent OnThemeChange = {read=FOnThemeChange, write=FOnThemeChange};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleServices() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomStyleServicesClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomStyleServicesClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomElementServicesClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomElementServicesClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TUxThemeStyle : public TCustomStyleServices
{
	typedef TCustomStyleServices inherited;
	
private:
	System::StaticArray<TCustomElementServicesClass, 10> FCustomElements;
	bool FAvailable;
	bool FNewComCtrls;
	bool FUseThemes;
	TThemeData FThemeData;
	TThemeDataForDPI FThemeDataForDPI;
	bool FThemeDataUnLoading;
	
protected:
	virtual unsigned __fastcall DoColorToRGB(System::Uitypes::TColor Color, PThemedElementDetails Details);
	virtual bool __fastcall DoDrawEdge(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, TElementEdges Edges, TElementEdgeFlags Flags, System::Types::PRect ContentRect, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoDrawElement(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoDrawIcon(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, NativeUInt himl, int Index, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoDrawParentBackground(HWND Window, HDC Target, PThemedElementDetails Details, bool OnlyIfTransparent, System::Types::PRect Bounds)/* overload */;
	virtual bool __fastcall DoDrawText(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoGetElementContentRect(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
	virtual bool __fastcall DoGetElementColor(const TThemedElementDetails &Details, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	virtual bool __fastcall DoGetElementMargins(HDC DC, const TThemedElementDetails &Details, System::Types::PRect Rect, TElementMargin ElementMargin, /* out */ _MARGINS &Margins, int DPI = 0x0);
	virtual bool __fastcall DoGetElementRegion(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &Rect, /* out */ HRGN &Region, int DPI = 0x0);
	virtual bool __fastcall DoGetElementSize(HDC DC, const TThemedElementDetails &Details, System::Types::PRect Rect, TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
	virtual System::Uitypes::TColor __fastcall DoGetStyleColor(TStyleColor Color);
	virtual System::Uitypes::TColor __fastcall DoGetStyleFontColor(TStyleFont Font);
	virtual System::Uitypes::TColor __fastcall DoGetSystemColor(System::Uitypes::TColor Color);
	virtual bool __fastcall DoGetTextExtent(HDC DC, const TThemedElementDetails &Details, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, System::Types::PRect BoundingRect, /* out */ System::Types::TRect &ExtentRect, int DPI = 0x0);
	virtual bool __fastcall DoHasTransparentParts(const TThemedElementDetails &Details);
	virtual bool __fastcall DoHasElementFixedPosition(const TThemedElementDetails &Details);
	__classmethod virtual bool __fastcall DoIsValidStyle(System::Classes::TStream* Stream, PStyleInfo StyleInfo);
	virtual bool __fastcall GetAvailable();
	virtual bool __fastcall GetEnabled();
	virtual System::UnicodeString __fastcall GetName();
	virtual NativeUInt __fastcall GetTheme(TThemedElement Element);
	virtual NativeUInt __fastcall GetThemeForDPI(TThemedElement Element, int DPI = 0x0);
	virtual void __fastcall UnloadThemeData();
	virtual void __fastcall UnloadThemeDataForDPI();
	
public:
	__fastcall virtual TUxThemeStyle();
	__fastcall virtual ~TUxThemeStyle();
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedButton Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedCategoryButtons Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedCategoryPanelGroup Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedCheckListBox Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedClock Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedComboBox Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedControlBar Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedDataNavButtons Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMPlayerButtons Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedDatePicker Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedEdit Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedFlyOut Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedExplorerBar Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedHeader Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedHint Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedGrid Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedLink Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedListview Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMenu Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMenuBand Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedMonthCal Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedNavigation Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedPage Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedPanel Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedProgress Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedRebar Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedScrollBar Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedSearchIndicators Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedSpin Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedStartPanel Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedStatus Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTab Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTabSet Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTaskBand Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTaskBar Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTaskDialog Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTextLabel Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTextStyle Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedToggleSwitch Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedToolBar Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedToolTip Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTrackBar Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTrayNotify Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedTreeview Detail)/* overload */;
	virtual TThemedElementDetails __fastcall GetElementDetails(TThemedWindow Detail)/* overload */;
	__classmethod virtual TCustomStyleServices* __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall UpdateThemes();
};


#ifndef _WIN64
typedef System::TMetaClass* TStyleHookClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TStyleHookClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TSysBidiModeDirection : unsigned char { sbmLeftToRight, sbmRightToLeft };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysControl : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	TSysControl* FParent;
	NativeUInt FHandle;
	TSysControl* __fastcall GetParent();
	NativeUInt __fastcall GetParentHandle();
	System::UnicodeString __fastcall GetText();
	NativeInt __fastcall GetStyle();
	NativeInt __fastcall GetExStyle();
	int __fastcall GetWidth();
	int __fastcall GetHeight();
	int __fastcall GetLeft();
	int __fastcall GetTop();
	bool __fastcall GetBorder();
	bool __fastcall GetEnabled();
	bool __fastcall GetVisible();
	System::Types::TRect __fastcall GetClientRect();
	System::Types::TRect __fastcall GetWinRect();
	bool __fastcall GetClientEdge();
	System::UnicodeString __fastcall GetControlClassName();
	NativeInt __fastcall GetWndProc();
	void __fastcall SetWndProc(NativeInt Value);
	TSysBidiModeDirection __fastcall GetBidiMode();
	void __fastcall SetExStyle(const NativeInt Value);
	void __fastcall SetStyle(const NativeInt Value);
	int __fastcall GetControlID();
	System::Types::TRect __fastcall GetBoundsRect();
	Vcl::Graphics::TFont* __fastcall GetFont();
	int __fastcall GetClientHeight();
	int __fastcall GetClientWidth();
	
public:
	__fastcall virtual TSysControl(NativeUInt AHandle);
	__fastcall virtual ~TSysControl();
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property TSysControl* Parent = {read=GetParent};
#ifndef _WIN64
	__property NativeUInt ParentHandle = {read=GetParentHandle, nodefault};
	__property NativeUInt Handle = {read=FHandle, write=FHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt ParentHandle = {read=GetParentHandle};
	__property NativeUInt Handle = {read=FHandle, write=FHandle};
#endif /* _WIN64 */
	__property System::UnicodeString Text = {read=GetText};
#ifndef _WIN64
	__property NativeInt Style = {read=GetStyle, write=SetStyle, nodefault};
	__property NativeInt ExStyle = {read=GetExStyle, write=SetExStyle, nodefault};
#else /* _WIN64 */
	__property NativeInt Style = {read=GetStyle, write=SetStyle};
	__property NativeInt ExStyle = {read=GetExStyle, write=SetExStyle};
#endif /* _WIN64 */
	__property int Width = {read=GetWidth, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property int Left = {read=GetLeft, nodefault};
	__property int Top = {read=GetTop, nodefault};
	__property bool HasBorder = {read=GetBorder, nodefault};
	__property bool Enabled = {read=GetEnabled, nodefault};
	__property bool Visible = {read=GetVisible, nodefault};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property System::Types::TRect WindowRect = {read=GetWinRect};
	__property bool HasClientEdge = {read=GetClientEdge, nodefault};
	__property int ClientHeight = {read=GetClientHeight, nodefault};
	__property int ClientWidth = {read=GetClientWidth, nodefault};
	__property System::UnicodeString ControlClassName = {read=GetControlClassName};
#ifndef _WIN64
	__property NativeInt WndProc = {read=GetWndProc, write=SetWndProc, nodefault};
#else /* _WIN64 */
	__property NativeInt WndProc = {read=GetWndProc, write=SetWndProc};
#endif /* _WIN64 */
	__property TSysBidiModeDirection BidiMode = {read=GetBidiMode, nodefault};
	__property int ControlID = {read=GetControlID, nodefault};
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect};
	int __fastcall DrawTextBiDiModeFlags(int Flags);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	int __fastcall DrawTextBiDiModeFlagsReadingOnly();
	bool __fastcall UseRightToLeftReading();
	DYNAMIC bool __fastcall Focused();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysStyleHook : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	NativeUInt FHandle;
	void *FProcInstance;
	TSysControl* FSysControl;
	NativeInt FOrgWndProc;
	bool FOverrideEraseBkgnd;
	bool FOverridePaint;
	bool FOverridePaintNC;
	bool FOverrideFont;
	bool FDoubleBuffered;
	bool FPaintOnEraseBkgnd;
	System::Uitypes::TColor FFontColor;
	Vcl::Graphics::TBrush* FBrush;
	bool FHandled;
	bool FParentColor;
	Vcl::Controls::TStyleElements FStyleElements;
	System::Uitypes::TColor FColor;
	Vcl::Graphics::TFont* FFont;
	System::UnicodeString FText;
	bool FHookedDirectly;
	MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	void __fastcall SetStyleElements(Vcl::Controls::TStyleElements Value);
	System::Uitypes::TColor __fastcall GetFontColor();
	System::Uitypes::TColor __fastcall GetColor();
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetOverridePaint(bool Value);
	bool __fastcall GetFocused();
	HWND __fastcall GetParentHandle();
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	bool __fastcall UseLeftScrollBar();
	System::UnicodeString __fastcall GetText();
	int __fastcall GetCurrentPPI();
	
protected:
	virtual System::Types::TRect __fastcall GetBorderSize();
	virtual bool __fastcall CheckIfParentBkGndPainted();
	bool __fastcall CheckIfParentHooked();
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall DrawParentBackground(HDC DC)/* overload */;
	void __fastcall DrawParentBackground(HDC DC, System::Types::PRect ARect)/* overload */;
	void __fastcall PaintBorder(TSysControl* Control, bool EraseLRCorner);
	virtual void __fastcall DrawBorder(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	NativeInt __fastcall CallDefaultProc(Winapi::Messages::TMessage &Msg);
	void __fastcall SetRedraw(bool Value)/* overload */;
	virtual void __fastcall SetRedraw(HWND AHandle, bool Value)/* overload */;
	bool __fastcall StyleServicesEnabled();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall InternalPaint(HDC DC);
	virtual void __fastcall UpdateColors();
	virtual int __fastcall GetSystemMetrics(int nIndex);
	virtual TCustomStyleServices* __fastcall StyleServices();
	__property bool HookedDirectly = {read=FHookedDirectly, write=FHookedDirectly, nodefault};
	
public:
	__fastcall virtual TSysStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TSysStyleHook();
	__property int CurrentPPI = {read=GetCurrentPPI, nodefault};
	virtual void __fastcall Invalidate();
	virtual void __fastcall InvalidateNC();
	virtual void __fastcall Refresh();
	void __fastcall DrawControlText(Vcl::Graphics::TCanvas* Canvas, const TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, unsigned Flags);
	int __fastcall DrawTextCentered(HDC DC, const TThemedElementDetails &Details, const System::Types::TRect &R, System::UnicodeString S, const unsigned Flags = (unsigned)(0x0));
	int __fastcall DrawText(HDC DC, const TThemedElementDetails &Details, System::UnicodeString S, System::Types::TRect &R, const Vcl::Graphics::TTextFormat Flags = Vcl::Graphics::TTextFormat() );
#ifndef _WIN64
	__property NativeUInt Handle = {read=FHandle, nodefault};
	__property HWND ParentHandle = {read=GetParentHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=FHandle};
	__property HWND ParentHandle = {read=GetParentHandle};
#endif /* _WIN64 */
	__property bool Handled = {read=FHandled, write=FHandled, nodefault};
	__property TSysControl* SysControl = {read=FSysControl, write=FSysControl};
	__property Vcl::Controls::TStyleElements StyleElements = {read=FStyleElements, write=SetStyleElements, nodefault};
	__property bool DoubleBuffered = {read=FDoubleBuffered, write=FDoubleBuffered, nodefault};
	__property bool OverridePaint = {read=FOverridePaint, write=SetOverridePaint, nodefault};
	__property bool OverridePaintNC = {read=FOverridePaintNC, write=FOverridePaintNC, nodefault};
	__property bool OverrideFont = {read=FOverrideFont, write=FOverrideFont, nodefault};
	__property bool OverrideEraseBkgnd = {read=FOverrideEraseBkgnd, write=FOverrideEraseBkgnd, nodefault};
	__property System::Uitypes::TColor FontColor = {read=GetFontColor, write=FFontColor, nodefault};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property Vcl::Graphics::TBrush* Brush = {read=FBrush};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool Focused = {read=GetFocused, nodefault};
	__property bool ParentBkGndPainted = {read=CheckIfParentBkGndPainted, nodefault};
	__property bool ParentColor = {read=FParentColor, write=FParentColor, nodefault};
	__property System::UnicodeString Text = {read=GetText};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMouseTrackSysControlStyleHook : public TSysStyleHook
{
	typedef TSysStyleHook inherited;
	
private:
	bool FMouseInControl;
	bool FMouseInNCArea;
	System::Classes::TComponent* FHotTrackTimer;
	bool FMouseDown;
	MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNCMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual bool __fastcall IsChildHandle(HWND AHandle);
	void __fastcall StartHotTrackTimer();
	void __fastcall StopHotTrackTimer();
	virtual void __fastcall DoHotTrackTimer(System::TObject* Sender);
	
public:
	__fastcall virtual TMouseTrackSysControlStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TMouseTrackSysControlStyleHook();
	__property bool MouseInControl = {read=FMouseInControl, write=FMouseInControl, nodefault};
	__property bool MouseInNCArea = {read=FMouseInNCArea, write=FMouseInNCArea, nodefault};
	__property bool MouseDown = {read=FMouseDown, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TSysStyleHookClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TSysStyleHookClass);
#endif /* _WIN64 */

typedef TChildControlInfo *PChildControlInfo;

struct DECLSPEC_DRECORD TChildControlInfo
{
public:
	HWND Parent;
	NativeInt ParentStyle;
	TSysStyleHookClass StyleHookClass;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleEngine : public System::TObject
{
	typedef System::TObject inherited;
	
	
protected:
	typedef System::Generics::Collections::TList__1<TStyleHookClass>* TStyleHookList;
	
	typedef System::Generics::Collections::TDictionary__2<System::TClass,System::Generics::Collections::TList__1<TStyleHookClass>*>* TStyleHookDictionary;
	
	typedef System::Generics::Collections::TPair__2<System::TClass,TStyleHookClass> *PStyleHookRegistrationData;
	
	typedef System::Generics::Collections::TPair__2<System::TClass,TStyleHookClass> TStyleHookRegistrationData;
	
	typedef System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,TSysStyleHookClass>* TRegSysStylesList;
	
	typedef System::Generics::Collections::TObjectDictionary__2<HWND,TSysStyleHook*>* TSysStyleHookList;
	
	typedef System::Generics::Collections::TObjectDictionary__2<HWND,TChildControlInfo>* TChildRegSysStylesList;
	
	
public:
	enum DECLSPEC_DENUM TStyleEngineNotification : unsigned char { snControlDestroyed, snStyleHookUnregistered };
	
	
private:
	static System::Generics::Collections::TDictionary__2<System::TClass,System::Generics::Collections::TList__1<TStyleHookClass>*>* FRegisteredStyleHooks;
	static HHOOK FSysHook;
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
protected:
	/* static */ __property System::Generics::Collections::TDictionary__2<System::TClass,System::Generics::Collections::TList__1<TStyleHookClass>*>* RegisteredStyleHooks = {read=FRegisteredStyleHooks};
	__classmethod void __fastcall CreateSysHook();
	__classmethod void __fastcall DeleteSysHook();
	static NativeInt __stdcall HookCBProc(int nCode, NativeUInt wParam, NativeInt lParam);
	
protected:
	static System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,TSysStyleHookClass>* FRegSysStylesList;
	static System::Generics::Collections::TObjectDictionary__2<HWND,TSysStyleHook*>* FSysStyleHookList;
	static System::Generics::Collections::TObjectDictionary__2<HWND,TChildControlInfo>* FChildRegSysStylesList;
	
public:
	virtual __classmethod bool __fastcall HandleMessage(Vcl::Controls::TWinControl* Control, Winapi::Messages::TMessage &Message, System::Classes::TWndMethod DefWndProc) = 0 ;
	virtual __classmethod void __fastcall Notification(TStyleEngineNotification Operation, void * Data) = 0 ;
	__classmethod virtual void __fastcall RegisterStyleHook(System::TClass ControlClass, TStyleHookClass StyleHookClass);
	__classmethod virtual void __fastcall UnRegisterStyleHook(System::TClass ControlClass, TStyleHookClass StyleHookClass);
	__classmethod void __fastcall RegisterSysStyleHook(System::UnicodeString SysControlClass, TSysStyleHookClass SysStyleHookClass);
	__classmethod void __fastcall UnRegisterSysStyleHook(System::UnicodeString SysControlClass, TSysStyleHookClass SysStyleHookClass);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleEngine() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleEngine() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomStyleEngineClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomStyleEngineClass);
#endif /* _WIN64 */

typedef void *TStyleManager_TStyleServicesHandle;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleManager : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TStyleClassDescriptor
	{
	public:
		System::UnicodeString Extension;
		System::UnicodeString Description;
		System::UnicodeString ResourceType;
		TCustomStyleServicesClass StyleClass;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	typedef TStyleManager_TStyleServicesHandle TStyleServicesHandle;
	
	enum DECLSPEC_DENUM TFormBorderStyle : unsigned char { fbsCurrentStyle, fbsSystemStyle };
	
	enum DECLSPEC_DENUM TSystemHook : unsigned char { shMenus, shDialogs, shToolTips };
	
	typedef System::Set<TSystemHook, TSystemHook::shMenus, TSystemHook::shToolTips> TSystemHooks;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TSourceInfo
	{
	public:
		void *Data;
		TCustomStyleServicesClass StyleClass;
		bool DesigningState;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	enum DECLSPEC_DENUM TStyleDescriptorField : unsigned char { dfExtension, dfDescription, dfResourceType };
	
	
private:
	typedef System::StaticArray<System::UnicodeString, 2> _TStyleManager__1;
	
	
public:
	static _TStyleManager__1 cDesignerStyleName;
	#define TStyleManager_cSystemStyleName L"Windows"
	
	
private:
	static TCustomStyleServices* FActiveStyle;
	static TCustomStyleServices* FActiveDesigningStyle;
	static bool FAutoDiscoverStyleResources;
	static TCustomStyleEngine* FEngine;
	static TCustomStyleEngineClass FEngineClass;
	static TCustomStyleServices::TStyleFlags FFlags;
	static bool FRefreshAutoDiscovery;
	static System::Generics::Collections::TDictionary__2<System::UnicodeString,TSourceInfo>* FRegisteredStyles;
	static System::Generics::Collections::TList__1<TStyleClassDescriptor>* FStyleClassDescriptors;
	static System::Generics::Collections::TList__1<TCustomStyleEngineClass>* FStyleEngines;
	static System::Generics::Collections::TList__1<TCustomStyleServices*>* FStyles;
	static TUxThemeStyle* FSystemStyle;
	static TFormBorderStyle FFormBorderStyle;
	static TSystemHooks FSystemHooks;
	static bool FAnimationOnControls;
	static System::UnicodeString FDialogsStyleName;
	static bool FUseSystemStyleAsDefault;
	static bool FUseSystemStyleAsDefaultDesigning;
	static bool FUseParentPaintBuffers;
	static bool FUseDesigningStyles;
	// __classmethod void __fastcall Create@();
	__classmethod void __fastcall CreateStyleEngine();
	__classmethod void __fastcall DiscoverStyleResources();
	__classmethod TStyleManager_TStyleServicesHandle __fastcall DoLoadFromResource(NativeUInt Instance, const System::UnicodeString ResourceName, System::WideChar * ResourceType, const TStyleClassDescriptor &StyleDescriptor);
	__classmethod TStyleManager_TStyleServicesHandle __fastcall DoLoadFromStream(System::Classes::TStream* Stream, const TSourceInfo &StyleInfo);
	__classmethod TStyleClassDescriptor __fastcall FindStyleDescriptor(const System::UnicodeString Name, TStyleDescriptorField Field)/* overload */;
	__classmethod TCustomStyleServices* __fastcall FindStyle(const System::UnicodeString Name, /* out */ int &Index);
	static TCustomStyleServices* __fastcall GetActiveStyle();
	static TCustomStyleServices* __fastcall GetActiveDesigningStyle();
	static bool __fastcall GetIsCustomStyleActive();
	static bool __fastcall GetIsCustomDesigningStyleActive();
	static bool __fastcall GetEnabled();
	static TCustomStyleEngine* __fastcall GetEngine();
#ifndef _WIN64
	static System::DynamicArray<TStyleClassDescriptor> __fastcall GetStyleClassDescriptors();
#else /* _WIN64 */
	static System::TArray__1<TStyleClassDescriptor> __fastcall GetStyleClassDescriptors();
#endif /* _WIN64 */
	static TStyleClassDescriptor __fastcall GetStyleDescriptor(const System::UnicodeString StyleName);
#ifndef _WIN64
	static System::DynamicArray<System::UnicodeString> __fastcall GetStyleNames();
	static System::DynamicArray<System::UnicodeString> __fastcall GetDesigningStyleNames();
#else /* _WIN64 */
	static System::TArray__1<System::UnicodeString> __fastcall GetStyleNames();
	static System::TArray__1<System::UnicodeString> __fastcall GetDesigningStyleNames();
#endif /* _WIN64 */
	static TCustomStyleServices* __fastcall GetSystemStyle();
	static System::UnicodeString __fastcall GetSystemStyleName();
	static TCustomStyleServices* __fastcall GetDesignerStyle(bool ADark);
	static void __fastcall SetAutoDiscoverStyleResources(const bool Value);
	static void __fastcall SetEngineClass(const TCustomStyleEngineClass Value);
	static void __fastcall SetFormBorderStyle(const TFormBorderStyle Value);
	static void __fastcall SetSystemHooks(const TSystemHooks Value);
	static void __fastcall RemoveStyleData(const System::UnicodeString AStyleName, const TSourceInfo &AInfo);
	
protected:
	static TCustomStyleServices* __fastcall GetStyle(const System::UnicodeString Name);
	static bool __fastcall GetDesigningState(TCustomStyleServices* Style);
	
public:
	__classmethod bool __fastcall CheckSysClassName(const System::UnicodeString AClassName);
	__classmethod bool __fastcall HandleMessage(Vcl::Controls::TWinControl* Control, Winapi::Messages::TMessage &Message, System::Classes::TWndMethod DefWndProc);
	__classmethod void __fastcall Initialize();
	__classmethod bool __fastcall IsValidStyle(const System::UnicodeString FileName)/* overload */;
	__classmethod bool __fastcall IsValidStyle(const System::UnicodeString FileName, TStyleInfo &StyleInfo)/* overload */;
	__classmethod bool __fastcall IsCustomStyleAvailable(Vcl::Controls::TControl* AControl);
	__classmethod bool __fastcall IsSystemStyleDefault(Vcl::Controls::TControl* AControl);
	__classmethod TStyleManager_TStyleServicesHandle __fastcall LoadFromFile(const System::UnicodeString FileName);
	__classmethod TStyleManager_TStyleServicesHandle __fastcall LoadDesigningStyle(const System::UnicodeString FileName);
#ifndef _WIN64
	__classmethod void __fastcall LoadDesigningStyles(System::DynamicArray<System::UnicodeString> FileNames);
#else /* _WIN64 */
	__classmethod void __fastcall LoadDesigningStyles(System::TArray__1<System::UnicodeString> FileNames);
#endif /* _WIN64 */
	__classmethod TStyleManager_TStyleServicesHandle __fastcall LoadFromResource(NativeUInt Instance, const System::UnicodeString ResourceName)/* overload */;
	__classmethod TStyleManager_TStyleServicesHandle __fastcall LoadFromResource(NativeUInt Instance, const System::UnicodeString ResourceName, System::WideChar * ResourceType)/* overload */;
	__classmethod void __fastcall Notification(TCustomStyleEngine::TStyleEngineNotification Operation, void * Data);
	__classmethod void __fastcall RegisterStyle(TCustomStyleServices* Style);
	__classmethod void __fastcall RegisterStyleClass(const System::UnicodeString Extension, const System::UnicodeString Description, const System::UnicodeString ResourceType, TCustomStyleServicesClass StyleClass)/* overload */;
	__classmethod void __fastcall RegisterStyleClass(const System::UnicodeString Extension, const System::UnicodeString Description, System::WideChar * ResourceType, TCustomStyleServicesClass StyleClass)/* overload */;
	__classmethod void __fastcall RemoveDesigningStyle(const System::UnicodeString Name);
	__classmethod void __fastcall SetStyle(const System::UnicodeString Name)/* overload */;
	__classmethod void __fastcall SetStyle(TCustomStyleServices* Style)/* overload */;
	__classmethod void __fastcall SetStyle(TStyleManager_TStyleServicesHandle Handle)/* overload */;
	__classmethod void __fastcall SetDesigningStyle(const System::UnicodeString Name)/* overload */;
	__classmethod void __fastcall SetDesigningStyle(TCustomStyleServices* Style)/* overload */;
	__classmethod bool __fastcall TryLoadFromResource(NativeUInt Instance, const System::UnicodeString ResourceName, System::WideChar * ResourceType, TStyleManager_TStyleServicesHandle &Handle);
	__classmethod bool __fastcall TrySetStyle(const System::UnicodeString Name, bool ShowErrorDialog = true);
	__classmethod bool __fastcall TrySetDesigningStyle(const System::UnicodeString Name, bool ShowErrorDialog = true);
	__classmethod void __fastcall ResetDesigningStyles();
	__classmethod void __fastcall UnInitialize();
	__classmethod void __fastcall UnRegisterStyle(TCustomStyleServices* Style);
	__classmethod void __fastcall UnRegisterStyleClass(TCustomStyleServicesClass StyleClass);
	__classmethod void __fastcall UnRegisterStyleEngine(TCustomStyleEngineClass AEngineClass);
	/* static */ __property bool AutoDiscoverStyleResources = {read=FAutoDiscoverStyleResources, write=SetAutoDiscoverStyleResources, nodefault};
	/* static */ __property TCustomStyleServices* ActiveStyle = {read=GetActiveStyle};
	/* static */ __property TCustomStyleServices* ActiveDesigningStyle = {read=GetActiveDesigningStyle};
#ifndef _WIN64
	/* static */ __property System::DynamicArray<System::UnicodeString> DesigningStyleNames = {read=GetDesigningStyleNames};
#else /* _WIN64 */
	/* static */ __property System::TArray__1<System::UnicodeString> DesigningStyleNames = {read=GetDesigningStyleNames};
#endif /* _WIN64 */
	/* static */ __property bool Enabled = {read=GetEnabled, nodefault};
	/* static */ __property TCustomStyleEngine* Engine = {read=GetEngine};
	/* static */ __property TCustomStyleEngineClass EngineClass = {read=FEngineClass, write=SetEngineClass};
	/* static */ __property TCustomStyleServices::TStyleFlags Flags = {read=FFlags, nodefault};
	/* static */ __property bool IsCustomStyleActive = {read=GetIsCustomStyleActive, nodefault};
	/* static */ __property bool IsCustomDesigningStyleActive = {read=GetIsCustomDesigningStyleActive, nodefault};
	/* static */ __property TCustomStyleServices* Style[const System::UnicodeString Name] = {read=GetStyle};
#ifndef _WIN64
	/* static */ __property System::DynamicArray<TStyleClassDescriptor> StyleClassDescriptors = {read=GetStyleClassDescriptors};
#else /* _WIN64 */
	/* static */ __property System::TArray__1<TStyleClassDescriptor> StyleClassDescriptors = {read=GetStyleClassDescriptors};
#endif /* _WIN64 */
	/* static */ __property TStyleClassDescriptor StyleDescriptor[const System::UnicodeString StyleName] = {read=GetStyleDescriptor};
#ifndef _WIN64
	/* static */ __property System::DynamicArray<System::UnicodeString> StyleNames = {read=GetStyleNames};
#else /* _WIN64 */
	/* static */ __property System::TArray__1<System::UnicodeString> StyleNames = {read=GetStyleNames};
#endif /* _WIN64 */
	/* static */ __property TCustomStyleServices* SystemStyle = {read=GetSystemStyle};
	/* static */ __property System::UnicodeString SystemStyleName = {read=GetSystemStyleName};
	/* static */ __property TCustomStyleServices* DesignerStyle[bool Dark] = {read=GetDesignerStyle};
	/* static */ __property TFormBorderStyle FormBorderStyle = {read=FFormBorderStyle, write=SetFormBorderStyle, default=0};
	/* static */ __property bool AnimationOnControls = {read=FAnimationOnControls, write=FAnimationOnControls, default=0};
	/* static */ __property System::UnicodeString DialogsStyleName = {read=FDialogsStyleName, write=FDialogsStyleName};
	/* static */ __property TSystemHooks SystemHooks = {read=FSystemHooks, write=SetSystemHooks, default=7};
	/* static */ __property bool UseSystemStyleAsDefault = {read=FUseSystemStyleAsDefault, write=FUseSystemStyleAsDefault, default=0};
	/* static */ __property bool UseSystemStyleAsDefaultDesigning = {read=FUseSystemStyleAsDefaultDesigning, write=FUseSystemStyleAsDefaultDesigning, default=0};
	/* static */ __property bool UseParentPaintBuffers = {read=FUseParentPaintBuffers, write=FUseParentPaintBuffers, default=0};
	/* static */ __property bool UseDesigningStyles = {read=FUseDesigningStyles, write=FUseDesigningStyles, default=1};
	
private:
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall TStyleManager() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStyleManager() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TExplorerThemeUsage : unsigned char { euTreeView, euListView };

typedef System::Set<TExplorerThemeUsage, TExplorerThemeUsage::euTreeView, TExplorerThemeUsage::euListView> TExplorerThemeUsages;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomElementServices : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod virtual bool __fastcall DrawEdge(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, TElementEdges Edges, TElementEdgeFlags Flags, System::Types::PRect ContentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawElement(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawIcon(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, NativeUInt himl, int Index, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawText(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementContentRect(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	__classmethod virtual bool __fastcall GetElementMargins(TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, TElementMargin Margin, /* out */ _MARGINS &ElementMargins, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementRegion(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &Rect, /* out */ HRGN &Region, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementSize(TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetTextExtent(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, System::Types::PRect BoundingRect, /* out */ System::Types::TRect &ExtentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall HasTransparentParts(TCustomStyleServices* Style, int Part, int State);
public:
	/* TObject.Create */ inline __fastcall TCustomElementServices() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomElementServices() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeDataNavButtonElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementContentRect(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TUxThemeDataNavButtonElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeDataNavButtonElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeCategoryButtonElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementSize(TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawElement(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TUxThemeCategoryButtonElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeCategoryButtonElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeCategoryPanelGroupElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawText(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	__classmethod virtual bool __fastcall GetElementSize(TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TUxThemeCategoryPanelGroupElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeCategoryPanelGroupElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeCheckListBoxElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TUxThemeCheckListBoxElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeCheckListBoxElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeControlBarElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TUxThemeControlBarElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeControlBarElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeGridElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawText(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TUxThemeGridElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeGridElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeHintElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TUxThemeHintElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeHintElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemePanelElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawText(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TUxThemePanelElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemePanelElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeTabSetElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TUxThemeTabSetElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeTabSetElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeTextLabelElements : public TCustomElementServices
{
	typedef TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawText(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementContentRect(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(TCustomStyleServices* Style, int Part, int State, TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	__classmethod virtual bool __fastcall GetTextExtent(TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, System::Types::PRect BoundingRect, /* out */ System::Types::TRect &ExtentRect, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TUxThemeTextLabelElements() : TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeTextLabelElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleHook : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Graphics::TBrush* FBrush;
	Vcl::Controls::TWinControl* FControl;
	bool FCallDefaultProc;
	bool FDoubleBuffered;
	bool FFocused;
	bool FFocusUpdate;
	System::Uitypes::TColor FFontColor;
	bool FHandled;
	bool FNeedsDefaultPaint;
	bool FOverrideEraseBkgnd;
	bool FOverridePaint;
	bool FOverridePaintNC;
	bool FPaintOnEraseBkgnd;
	System::UnicodeString FText;
	Vcl::Graphics::TBitmap* FPaintBuffer;
	int FPaintBufferUsers;
	HWND __fastcall GetHandle();
	System::UnicodeString __fastcall GetText();
	MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMEnable(Winapi::Messages::TMessage &Message);
	void __fastcall ReleasePaintBuffer();
	
protected:
	void __fastcall CallDefaultProc(Winapi::Messages::TMessage &Msg);
	virtual bool __fastcall AcceptMessage(Winapi::Messages::TMessage &Message);
	System::UnicodeString __fastcall GetStringPropValue(const System::UnicodeString PropName);
	virtual bool __fastcall HasBorder();
	virtual bool __fastcall HasClientEdge();
	virtual bool __fastcall InternalPaint(HDC DC);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall SetRedraw(bool Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property Vcl::Graphics::TBrush* Brush = {read=FBrush};
	__property bool DoubleBuffered = {read=FDoubleBuffered, write=FDoubleBuffered, nodefault};
	__property bool Focused = {read=FFocused, write=FFocused, nodefault};
	__property bool FocusUpdate = {read=FFocusUpdate, write=FFocusUpdate, nodefault};
	__property System::Uitypes::TColor FontColor = {read=FFontColor, write=FFontColor, nodefault};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
	__property bool Handled = {read=FHandled, write=FHandled, nodefault};
	__property bool NeedsDefaultPaint = {read=FNeedsDefaultPaint, write=FNeedsDefaultPaint, nodefault};
	__property bool OverridePaint = {read=FOverridePaint, write=FOverridePaint, nodefault};
	__property bool OverridePaintNC = {read=FOverridePaintNC, write=FOverridePaintNC, nodefault};
	__property bool OverrideEraseBkgnd = {read=FOverrideEraseBkgnd, write=FOverrideEraseBkgnd, nodefault};
	__property bool PaintOnEraseBkgnd = {read=FPaintOnEraseBkgnd, write=FPaintOnEraseBkgnd, nodefault};
	__property System::UnicodeString Text = {read=GetText};
	
public:
	__fastcall virtual TStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TStyleHook();
	virtual int __fastcall GetSystemMetrics(int nIndex);
	virtual TCustomStyleServices* __fastcall StyleServices();
	virtual void __fastcall DrawControlText(Vcl::Graphics::TCanvas* Canvas, const TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, unsigned Flags);
	virtual bool __fastcall HandleMessage(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Invalidate();
	virtual void __fastcall InvalidateNC();
	__property Vcl::Controls::TWinControl* Control = {read=FControl};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMouseTrackControlStyleHook : public TStyleHook
{
	typedef TStyleHook inherited;
	
	
public:
	enum DECLSPEC_DENUM TMousePosition : unsigned char { mpNone, mpLeft, mpRight, mpTop, mpBottom };
	
	
private:
	System::Classes::TComponent* FHotTrackTimer;
	bool FMouseInControl;
	bool FMouseInNCArea;
	MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNCMouseMove(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual void __fastcall DoHotTrackTimer(System::TObject* Sender);
	bool __fastcall IsMouseInControl();
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual bool __fastcall IsChildHandle(HWND AHandle);
	void __fastcall StartHotTrackTimer();
	void __fastcall StopHotTrackTimer();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property bool MouseInControl = {read=FMouseInControl, write=FMouseInControl, nodefault};
	__property bool MouseInNCArea = {read=FMouseInNCArea, write=FMouseInNCArea, nodefault};
	
public:
	__fastcall virtual TMouseTrackControlStyleHook(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TMouseTrackControlStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TUxThemeStyle TThemeServices _DEPRECATED_ATTRIBUTE1("Use TUxThemeStyle") ;

typedef TCustomStyleServicesClass TThemeServicesClass _DEPRECATED_ATTRIBUTE1("Use TCustomStyleServicesClass") ;

struct DECLSPEC_DRECORD TThemeServicesClassHelper
{
public:
	static TThemeServicesClassHelper __fastcall _op_Implicit(TCustomStyleServicesClass AValue);
	__fastcall operator TCustomStyleServicesClass();
	
	TThemeServicesClassHelper& operator =(TCustomStyleServicesClass AValue) { *this = TThemeServicesClassHelper::_op_Implicit(AValue); return *this; }
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EStyleEngineException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EStyleEngineException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EStyleEngineException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EStyleEngineException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EStyleEngineException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EStyleEngineException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EStyleEngineException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EStyleEngineException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EStyleEngineException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStyleEngineException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EStyleEngineException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStyleEngineException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EStyleEngineException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EStyleEngineException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECustomStyleException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECustomStyleException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECustomStyleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECustomStyleException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECustomStyleException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECustomStyleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECustomStyleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECustomStyleException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECustomStyleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECustomStyleException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECustomStyleException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECustomStyleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECustomStyleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECustomStyleException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EDuplicateStyleException : public ECustomStyleException
{
	typedef ECustomStyleException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDuplicateStyleException(const System::UnicodeString Msg) : ECustomStyleException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDuplicateStyleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : ECustomStyleException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDuplicateStyleException(NativeUInt Ident)/* overload */ : ECustomStyleException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDuplicateStyleException(System::PResStringRec ResStringRec)/* overload */ : ECustomStyleException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDuplicateStyleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : ECustomStyleException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDuplicateStyleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : ECustomStyleException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDuplicateStyleException(const System::UnicodeString Msg, int AHelpContext) : ECustomStyleException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDuplicateStyleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : ECustomStyleException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDuplicateStyleException(NativeUInt Ident, int AHelpContext)/* overload */ : ECustomStyleException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDuplicateStyleException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ECustomStyleException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDuplicateStyleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ECustomStyleException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDuplicateStyleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ECustomStyleException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDuplicateStyleException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef bool __fastcall (*TCustomStyleHandleMessage)(Vcl::Controls::TWinControl* Control, Winapi::Messages::TMessage &Message, System::Classes::TWndMethod DefWndProc);

typedef void __fastcall (*TCustomStyleNotification)(TCustomStyleEngine::TStyleEngineNotification Operation, void * Data);

//-- var, const, procedure ---------------------------------------------------
#define CWindowsElements (System::Set<TThemedElement, TThemedElement::teButton, TThemedElement::teSearchIndicators>() << TThemedElement::teButton << TThemedElement::teClock << TThemedElement::teComboBox << TThemedElement::teDatePicker << TThemedElement::teEdit << TThemedElement::teExplorerBar << TThemedElement::teFlyOut << TThemedElement::teHeader << TThemedElement::teLink << TThemedElement::teListView << TThemedElement::teMenu << TThemedElement::teMenuBand << TThemedElement::teMonthCal << TThemedElement::teNavigation << TThemedElement::tePage << TThemedElement::teProgress << TThemedElement::teRebar << TThemedElement::teScrollBar << TThemedElement::teSpin << TThemedElement::teStartPanel << TThemedElement::teStatus << TThemedElement::teTab << TThemedElement::teTaskBand \
	<< TThemedElement::teTaskBar << TThemedElement::teTaskDialog << TThemedElement::teTextStyle << TThemedElement::teToolBar << TThemedElement::teToolTip << TThemedElement::teTrackBar << TThemedElement::teTrayNotify << TThemedElement::teTreeview << TThemedElement::teWindow )
#define CVCLElements (System::Set<TThemedElement, TThemedElement::teButton, TThemedElement::teSearchIndicators>() << TThemedElement::teCategoryButtons << TThemedElement::teCategoryPanelGroup << TThemedElement::teCheckListBox << TThemedElement::teControlBar << TThemedElement::teDataNavButtons << TThemedElement::teGrid << TThemedElement::teHint << TThemedElement::tePanel << TThemedElement::teTabSet << TThemedElement::teTextLabel )
static const TThemedButton tbPushButtonLast = (TThemedButton)(7);
static const TThemedButton tbRadioButtonLast = (TThemedButton)(15);
static const TThemedButton tbCheckBoxLast = (TThemedButton)(35);
static const TThemedButton tbGroupBoxLast = (TThemedButton)(37);
static const TThemedButton tbUserButtonLast = (TThemedButton)(38);
static const TThemedButton tbCommandLinkLast = (TThemedButton)(44);
static const TThemedButton tbCommandLinkGlyphLast = (TThemedButton)(49);
static const TThemedCategoryButtons tcbCategoryLast = (TThemedCategoryButtons)(4);
static const TThemedCategoryButtons tcbButtonLast = (TThemedCategoryButtons)(7);
static const TThemedCategoryButtons tcbCategoryGlyphLast = (TThemedCategoryButtons)(9);
static const TThemedCategoryButtons tcbCategoryChevronLast = (TThemedCategoryButtons)(11);
static const TThemedCategoryPanelGroup tcpChevronOpenedLast = (TThemedCategoryPanelGroup)(7);
static const TThemedCategoryPanelGroup tcpChevronClosedLast = (TThemedCategoryPanelGroup)(10);
static const TThemedCategoryPanelGroup tcpChevronClosedLeftLast = (TThemedCategoryPanelGroup)(13);
static const TThemedCategoryPanelGroup tcpThemedChevronOpenedLast = (TThemedCategoryPanelGroup)(16);
static const TThemedCategoryPanelGroup tcpThemedChevronClosedLast = (TThemedCategoryPanelGroup)(19);
static const TThemedCheckListBox tclListItemLast = (TThemedCheckListBox)(3);
static const TThemedCheckListBox tclHeaderItemLast = (TThemedCheckListBox)(5);
static const TThemedClock tcTimeLast = (TThemedClock)(4);
static const TThemedClock ttbTimeNormal _DEPRECATED_ATTRIBUTE1("Use tcTimeNormal")  = (TThemedClock)(2);
static const TThemedComboBox tcDropDownButtonLast = (TThemedComboBox)(5);
static const TThemedComboBox tcBackgroundLast = (TThemedComboBox)(6);
static const TThemedComboBox tcTransparentBackgroundLast = (TThemedComboBox)(10);
static const TThemedComboBox tcBorderLast = (TThemedComboBox)(14);
static const TThemedComboBox tcReadOnlyLast = (TThemedComboBox)(18);
static const TThemedComboBox tcDropDownButtonRightLast = (TThemedComboBox)(22);
static const TThemedComboBox tcDropDownButtonLeftLast = (TThemedComboBox)(26);
static const TThemedComboBox tcCueBannerLast = (TThemedComboBox)(30);
static const TThemedDatePicker tdbDateTextLast = (TThemedDatePicker)(4);
static const TThemedDatePicker tdbDateBorderLast = (TThemedDatePicker)(8);
static const TThemedDatePicker tdbShowCalendarButtonRightLast = (TThemedDatePicker)(12);
static const TThemedEdit teEditTextLast = (TThemedEdit)(8);
static const TThemedEdit teEditCaretLast = (TThemedEdit)(9);
static const TThemedEdit teBackgroundLast = (TThemedEdit)(15);
static const TThemedEdit tePasswordLast = (TThemedEdit)(16);
static const TThemedEdit teBackgroundWithBorderLast = (TThemedEdit)(20);
static const TThemedEdit teEditBorderNoScrollLast = (TThemedEdit)(24);
static const TThemedEdit teEditBorderHScrollLast = (TThemedEdit)(28);
static const TThemedEdit teEditBorderVScrollLast = (TThemedEdit)(32);
static const TThemedEdit teEditBorderHVScrollLast = (TThemedEdit)(36);
static const TThemedExplorerBar tebHeaderBackgroundLast = (TThemedExplorerBar)(4);
static const TThemedExplorerBar tebHeaderCloseLast = (TThemedExplorerBar)(7);
static const TThemedExplorerBar tebHeaderPinLast = (TThemedExplorerBar)(10);
static const TThemedExplorerBar tebHeaderPinSelectedLast = (TThemedExplorerBar)(13);
static const TThemedExplorerBar tebIEBarMenuLast = (TThemedExplorerBar)(16);
static const TThemedExplorerBar tebNormalGroupBackgroundLast = (TThemedExplorerBar)(17);
static const TThemedExplorerBar tebNormalGroupCollapseLast = (TThemedExplorerBar)(20);
static const TThemedExplorerBar tebNormalGroupExpandLast = (TThemedExplorerBar)(23);
static const TThemedExplorerBar tebNormalGroupHeadLast = (TThemedExplorerBar)(24);
static const TThemedExplorerBar tebSpecialGroupBackgroundLast = (TThemedExplorerBar)(25);
static const TThemedExplorerBar tebSpecialGroupCollapseLast = (TThemedExplorerBar)(28);
static const TThemedExplorerBar tebSpecialGroupExpandLast = (TThemedExplorerBar)(31);
static const TThemedExplorerBar tebSpecialGroupHeadLast = (TThemedExplorerBar)(32);
static const TThemedExplorerBar tebSpecialGroupCollapseSpecial _DEPRECATED_ATTRIBUTE1("Use tebSpecialGroupCollapseNormal")  = (TThemedExplorerBar)(26);
static const TThemedExplorerBar tebSpecialGroupExpandSpecial _DEPRECATED_ATTRIBUTE1("Use tebSpecialGroupExpandNormal")  = (TThemedExplorerBar)(29);
static const TThemedFlyOut tfFlyOutHeaderLast = (TThemedFlyOut)(2);
static const TThemedFlyOut tfFlyOutBodyLast = (TThemedFlyOut)(4);
static const TThemedFlyOut tfFlyOutLabelLast = (TThemedFlyOut)(8);
static const TThemedFlyOut tfFlyOutLinkLast = (TThemedFlyOut)(10);
static const TThemedFlyOut tfFlyOutDividerLast = (TThemedFlyOut)(11);
static const TThemedFlyOut tfFlyOutWindowLast = (TThemedFlyOut)(12);
static const TThemedFlyOut tfFlyOutLinkAreaLast = (TThemedFlyOut)(13);
static const TThemedFlyOut tfFlyOutLinkHeaderLast = (TThemedFlyOut)(15);
static const TThemedGrid tgCellLast = (TThemedGrid)(6);
static const TThemedGrid tgFixedCellLast = (TThemedGrid)(9);
static const TThemedGrid tgGradientCellLast = (TThemedGrid)(14);
static const TThemedGrid tgGradientFixedCellLast = (TThemedGrid)(17);
static const TThemedGrid tgClassicCellLast = (TThemedGrid)(22);
static const TThemedGrid tgClassicFixedCellLast = (TThemedGrid)(25);
static const TThemedGrid tgDropDownButtonLast = (TThemedGrid)(29);
static const TThemedGrid tgEllipsisButtonLast = (TThemedGrid)(32);
static const TThemedHeader thHeaderItemLast = (TThemedHeader)(4);
static const TThemedHeader thHeaderItemLeftLast = (TThemedHeader)(7);
static const TThemedHeader thHeaderItemRightLast = (TThemedHeader)(10);
static const TThemedHeader thHeaderSortArrowLast = (TThemedHeader)(12);
static const TThemedHeader thHeaderDropDownLast = (TThemedHeader)(15);
static const TThemedHeader thHeaderDropDownFilterLast = (TThemedHeader)(18);
static const TThemedHeader thHeaderOverflowLast = (TThemedHeader)(20);
static const TThemedListview tlListItemLast = (TThemedListview)(7);
static const TThemedListview tlListGroupLast = (TThemedListview)(8);
static const TThemedListview tlListDetailLast = (TThemedListview)(9);
static const TThemedListview tlListSortDetailLast = (TThemedListview)(10);
static const TThemedListview tlEmptyTextLast = (TThemedListview)(11);
static const TThemedListview tlGroupHeaderLast = (TThemedListview)(27);
static const TThemedListview tlGroupHeaderLineLast = (TThemedListview)(43);
static const TThemedListview tlExpandButtonLast = (TThemedListview)(46);
static const TThemedListview tlCollapseButtonLast = (TThemedListview)(49);
static const TThemedListview tlColumnDetailLast = (TThemedListview)(50);
static const TThemedLink tlLinkLast = (TThemedLink)(3);
static const TThemedMenu tmMenuItemTMSSchemaLast = (TThemedMenu)(4);
static const TThemedMenu tmMenuDropDownTMSSchemaLast = (TThemedMenu)(5);
static const TThemedMenu tmMenuBarItemTMSSchemaLast = (TThemedMenu)(6);
static const TThemedMenu tmMenuBarDropDownTMSSchemaLast = (TThemedMenu)(7);
static const TThemedMenu tmChevronTMSSchemaLast = (TThemedMenu)(8);
static const TThemedMenu tmSeparatorTMSSchemaLast = (TThemedMenu)(9);
static const TThemedMenu tmMenuBarBackgroundLast = (TThemedMenu)(11);
static const TThemedMenu tmMenuBarItemLast = (TThemedMenu)(17);
static const TThemedMenu tmPopupBackgroundLast = (TThemedMenu)(18);
static const TThemedMenu tmPopupBordersLast = (TThemedMenu)(19);
static const TThemedMenu tmPopupCheckLast = (TThemedMenu)(23);
static const TThemedMenu tmPopupCheckBackgroundLast = (TThemedMenu)(26);
static const TThemedMenu tmPopupGutterLast = (TThemedMenu)(27);
static const TThemedMenu tmPopupItemLast = (TThemedMenu)(31);
static const TThemedMenu tmPopupSeparatorLast = (TThemedMenu)(32);
static const TThemedMenu tmPopupSubMenuLast = (TThemedMenu)(34);
static const TThemedMenu tmSystemCloseLast = (TThemedMenu)(36);
static const TThemedMenu tmSystemMaximizeLast = (TThemedMenu)(38);
static const TThemedMenu tmSystemMinimizeLast = (TThemedMenu)(40);
static const TThemedMenu tmSystemRestoreLast = (TThemedMenu)(42);
static const TThemedMenuBand tmbNewAppButtonLast = (TThemedMenuBand)(7);
static const TThemedMenuBand tmbSeparatorlast = (TThemedMenuBand)(13);
static const TThemedMonthCal tmcBackgroundLast = (TThemedMonthCal)(2);
static const TThemedMonthCal tmcBordersLast = (TThemedMonthCal)(3);
static const TThemedMonthCal tmcGridBackgroundLast = (TThemedMonthCal)(4);
static const TThemedMonthCal tmcColHeaderSplitterLast = (TThemedMonthCal)(5);
static const TThemedMonthCal tmcGridCellBackgroundLast = (TThemedMonthCal)(10);
static const TThemedMonthCal tmcGridCellLast = (TThemedMonthCal)(14);
static const TThemedMonthCal tmcGridCellUpperLast = (TThemedMonthCal)(17);
static const TThemedMonthCal tmcTrailingGridCellLast = (TThemedMonthCal)(21);
static const TThemedMonthCal tmcTrailingGridCellUpperLast = (TThemedMonthCal)(24);
static const TThemedMonthCal tmcNavNextLast = (TThemedMonthCal)(28);
static const TThemedMonthCal tmcNavPrevLast = (TThemedMonthCal)(32);
static const TThemedNavigation tnBackButtonLast = (TThemedNavigation)(5);
static const TThemedNavigation tnForwardButtonLast = (TThemedNavigation)(9);
static const TThemedNavigation tnMenuButtonLast = (TThemedNavigation)(13);
static const TThemedTaskBar ttTaskBarDontCare _DEPRECATED_ATTRIBUTE1("Use ttbTaskBarDontCare")  = (TThemedTaskBar)(0);
static const TThemedTaskBar ttTaskBarRoot _DEPRECATED_ATTRIBUTE1("Use ttbTaskBarDontCare")  = (TThemedTaskBar)(0);
static const TThemedTaskDialog ttdPrimaryPanelLast = (TThemedTaskDialog)(2);
static const TThemedTaskDialog ttdMainInstructionPaneLast = (TThemedTaskDialog)(3);
static const TThemedTaskDialog ttdMainIconLast = (TThemedTaskDialog)(4);
static const TThemedTaskDialog ttdContentPaneLast = (TThemedTaskDialog)(5);
static const TThemedTaskDialog ttdContentIconLast = (TThemedTaskDialog)(6);
static const TThemedTaskDialog ttdExpandedContentLast = (TThemedTaskDialog)(7);
static const TThemedTaskDialog ttdCommandLinkPaneLast = (TThemedTaskDialog)(8);
static const TThemedTaskDialog ttdSecondaryPanelLast = (TThemedTaskDialog)(9);
static const TThemedTaskDialog ttdControlPaneLast = (TThemedTaskDialog)(10);
static const TThemedTaskDialog ttdButtonSectionLast = (TThemedTaskDialog)(11);
static const TThemedTaskDialog ttdButtonWrapperLast = (TThemedTaskDialog)(12);
static const TThemedTaskDialog ttdExpandoTextLast = (TThemedTaskDialog)(13);
static const TThemedTaskDialog ttdExpandoButtonLast = (TThemedTaskDialog)(19);
static const TThemedTaskDialog ttdVerificationTextLast = (TThemedTaskDialog)(20);
static const TThemedTaskDialog ttdFootnotePaneLast = (TThemedTaskDialog)(21);
static const TThemedTaskDialog ttdFootnoteAreaLast = (TThemedTaskDialog)(22);
static const TThemedTaskDialog ttdFootnoteSeparatorLast = (TThemedTaskDialog)(23);
static const TThemedTaskDialog ttdExpandedFooterAreaLast = (TThemedTaskDialog)(24);
static const TThemedTaskDialog ttdProgressBarLast = (TThemedTaskDialog)(25);
static const TThemedTaskDialog ttdImageAlignmentLast = (TThemedTaskDialog)(26);
static const TThemedTaskDialog ttdRadioButtonPaneLast = (TThemedTaskDialog)(27);
static const TThemedTextLabel ttlTextLabelLast = (TThemedTextLabel)(3);
static const TThemedTextStyle ttsMainInstructionLast = (TThemedTextStyle)(2);
static const TThemedTextStyle ttsInstructionLast = (TThemedTextStyle)(3);
static const TThemedTextStyle ttsBodyTitleLast = (TThemedTextStyle)(4);
static const TThemedTextStyle ttsBodyTextLast = (TThemedTextStyle)(5);
static const TThemedTextStyle ttsSecondaryTextLast = (TThemedTextStyle)(6);
static const TThemedTextStyle ttsHyperLinkTextLast = (TThemedTextStyle)(10);
static const TThemedTextStyle ttsExpandedLast = (TThemedTextStyle)(11);
static const TThemedTextStyle ttsLabelLast = (TThemedTextStyle)(12);
static const TThemedTextStyle ttsControlLabelLast = (TThemedTextStyle)(14);
extern DELPHI_PACKAGE TThemeServicesClassHelper ThemeServicesClass _DEPRECATED_ATTRIBUTE1("Use TStyleManager.SetStyle") ;
extern DELPHI_PACKAGE TCustomStyleHandleMessage CustomStyleHandleMessage;
extern DELPHI_PACKAGE TCustomStyleNotification CustomStyleNotification;
static const System::Word WM_MDICHILDMOVE = System::Word(0x52c);
static const System::Word WM_MDICHILDCLOSE = System::Word(0x52d);
static const System::Word CM_BASE = System::Word(0x513);
static const System::Word CM_CTLCOLORBTN = System::Word(0x648);
static const System::Word CM_CTLCOLORDLG = System::Word(0x649);
static const System::Word CM_CTLCOLOREDIT = System::Word(0x646);
static const System::Word CM_CTLCOLORLISTBOX = System::Word(0x647);
static const System::Word CM_CTLCOLORMSGBOX = System::Word(0x645);
static const System::Word CM_CTLCOLORSCROLLBAR = System::Word(0x64a);
static const System::Word CM_CTLCOLORSTATIC = System::Word(0x64b);
static const System::Word CM_SCROLLTRACKING = System::Word(0x671);
static const System::Word CM_PARENTHOOKED = System::Word(0x67b);
static const System::Word CM_CONTROLHOOKED = System::Word(0x67c);
static const System::Word CM_INITCHILDS = System::Word(0x67d);
static const System::Word CM_CONTROLHOOKEDDIRECTLY = System::Word(0x67e);
static const System::Word CM_PAINTPARENTBUFFER = System::Word(0x67f);
static const TCustomStyleEngine::TStyleEngineNotification snReleaseAllStyleHooks = (TCustomStyleEngine::TStyleEngineNotification)(2);
extern DELPHI_PACKAGE bool __fastcall UnthemedDesigner(Vcl::Controls::TControl* AControl);
extern DELPHI_PACKAGE TCustomStyleServices* __fastcall StyleServices(Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
extern DELPHI_PACKAGE TCustomStyleServices* __fastcall ThemeServices _DEPRECATED_ATTRIBUTE1("Use StyleServices") (void);
extern DELPHI_PACKAGE bool __fastcall ThemeControl(Vcl::Controls::TControl* AControl);
extern DELPHI_PACKAGE void __fastcall DrawStyleEdge(HDC DC, System::Types::TRect &Rect, TElementEdges Edges, TElementEdgeFlags Flags, Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawStyleEdge(Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &Rect, TElementEdges Edges, TElementEdgeFlags Flags, Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawStyleFocusRect(HDC DC, const System::Types::TRect &Rect, Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
extern DELPHI_PACKAGE void __fastcall DrawGlassText(HDC ADC, const System::UnicodeString AText, System::Types::TRect &ATextRect, unsigned ATextFlags, const int AGlowSize, const System::Uitypes::TColor AFontColor)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGlassText(HDC ADC, const System::UnicodeString AText, System::Types::TRect &ATextRect, unsigned ATextFlags, const int AGlowSize, const System::Uitypes::TColor AFontColor, const TThemedElementDetails &ADetail)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetSysWindowClassName(HWND Window);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetSysWindowText(HWND Window);
}	/* namespace Themes */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_THEMES)
using namespace Vcl::Themes;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ThemesHPP
