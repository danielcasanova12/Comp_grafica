// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ImgList.pas' rev: 35.00 (Windows)

#ifndef Vcl_ImglistHPP
#define Vcl_ImglistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.CommCtrl.hpp>
#include <System.ImageList.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Imglist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TChangeLink;
class DELPHICLASS TCustomImageList;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TChangeLink : public System::Imagelist::TImageLink
{
	typedef System::Imagelist::TImageLink inherited;
	
private:
	TCustomImageList* __fastcall GetSender();
	void __fastcall SetSender(TCustomImageList* const Value);
	
public:
	__fastcall virtual TChangeLink();
	__property TCustomImageList* Sender = {read=GetSender, write=SetSender};
public:
	/* TImageLink.Destroy */ inline __fastcall virtual ~TChangeLink() { }
	
};


typedef NativeUInt TImageListHandle;

enum DECLSPEC_DENUM TDrawingStyle : unsigned char { dsFocus, dsSelected, dsNormal, dsTransparent };

enum DECLSPEC_DENUM TImageType : unsigned char { itImage, itMask };

enum DECLSPEC_DENUM TResType : unsigned char { rtBitmap, rtCursor, rtIcon };

typedef System::Int8 TOverlay;

enum DECLSPEC_DENUM TLoadResource : unsigned char { lrDefaultColor, lrDefaultSize, lrFromFile, lrMap3DColors, lrTransparent, lrMonoChrome };

typedef System::Set<TLoadResource, TLoadResource::lrDefaultColor, TLoadResource::lrMonoChrome> TLoadResources;

using System::Uitypes::TImageIndex;

enum DECLSPEC_DENUM TColorDepth : unsigned char { cdDefault, cdDeviceDependent, cd4Bit, cd8Bit, cd16Bit, cd24Bit, cd32Bit };

enum DECLSPEC_DENUM TDisabledStyle : unsigned char { diGrayscale, diMonochrome, diDesaturate, diDesaturateBlend25, diDesaturateBlend50 };

class PASCALIMPLEMENTATION TCustomImageList : public System::Imagelist::TBaseImageList
{
	typedef System::Imagelist::TBaseImageList inherited;
	
private:
	int FHeight;
	int FWidth;
	int FAllocBy;
	NativeUInt FHandle;
	TDrawingStyle FDrawingStyle;
	bool FMasked;
	bool FShareImages;
	TImageType FImageType;
	System::Uitypes::TColor FBkColor;
	System::Uitypes::TColor FBlendColor;
	System::Byte FGrayscaleFactor;
	Vcl::Graphics::TBitmap* FBitmap;
	Vcl::Graphics::TBitmap* FMonoBitmap;
	Vcl::Graphics::TBitmap* FGrayscaleBitmap;
	System::Classes::TNotifyEvent FOnChange;
	TColorDepth FColorDepth;
	bool FStoreBitmap;
	void __fastcall InitBitmap();
	void __fastcall CopyImages(NativeUInt Value, int Index = 0xffffffff);
	void __fastcall CopyFromImageList(TCustomImageList* Value, int Index = 0xffffffff, bool Disabled = false);
	void __fastcall CreateImageList();
	bool __fastcall Equal(TCustomImageList* IL);
	void __fastcall FreeHandle();
	HBITMAP __fastcall GetBitmapHandle(HBITMAP Bitmap);
	System::Uitypes::TColor __fastcall GetBkColor();
	NativeUInt __fastcall GetHandle();
	HBITMAP __fastcall GetImageHandle(Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* ImageLocal);
	void __fastcall InsertImage(int Index, Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask, System::Uitypes::TColor MaskColor);
	void __fastcall SetBkColor(System::Uitypes::TColor Value);
	void __fastcall SetDrawingStyle(TDrawingStyle Value);
	void __fastcall SetHandle(NativeUInt Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetNewDimensions(NativeUInt Value);
	void __fastcall SetShareImages(bool Value);
	void __fastcall SetWidth(int Value);
	void __fastcall SetColorDepth(TColorDepth Value);
	void __fastcall ReadD2Stream(System::Classes::TStream* Stream);
	void __fastcall ReadD3Stream(System::Classes::TStream* Stream);
	bool __fastcall InternalGetInstRes(NativeUInt Instance, TResType ResType, System::WideChar * Name, int Width, TLoadResources LoadFlags, System::Uitypes::TColor MaskColor);
	
protected:
	bool FScaling;
	bool FScaled;
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	virtual int __fastcall GetCount();
	void __fastcall GetImages(int Index, Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	void __fastcall HandleNeeded();
	virtual void __fastcall Initialize();
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	virtual void __fastcall DoChange();
	__property bool StoreBitmap = {read=FStoreBitmap, write=FStoreBitmap, nodefault};
	__property bool Scaled = {read=FScaled, write=FScaled, nodefault};
	
public:
	__fastcall virtual TCustomImageList(System::Classes::TComponent* AOwner);
	__fastcall TCustomImageList(int AWidth, int AHeight);
	__fastcall virtual ~TCustomImageList();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	int __fastcall Add(Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	int __fastcall AddIcon(Vcl::Graphics::TIcon* Image);
	int __fastcall AddImage(TCustomImageList* Value, int Index);
	int __fastcall AddDisabledImage(TCustomImageList* Value, int Index);
	void __fastcall AddImages(TCustomImageList* Value);
	void __fastcall AddDisabledImages(TCustomImageList* Value);
	int __fastcall AddMasked(Vcl::Graphics::TBitmap* Image, System::Uitypes::TColor MaskColor);
	void __fastcall Clear();
	void __fastcall Delete(int Index);
	void __fastcall Draw(Vcl::Graphics::TCanvas* Canvas, int X, int Y, int Index, bool Enabled = true)/* overload */;
	void __fastcall Draw(Vcl::Graphics::TCanvas* Canvas, int X, int Y, int Index, TDrawingStyle ADrawingStyle, TImageType AImageType, bool Enabled = true)/* overload */;
	void __fastcall DrawOverlay(Vcl::Graphics::TCanvas* Canvas, int X, int Y, int ImageIndex, TOverlay Overlay, bool Enabled = true)/* overload */;
	void __fastcall DrawOverlay(Vcl::Graphics::TCanvas* Canvas, int X, int Y, int ImageIndex, TOverlay Overlay, TDrawingStyle ADrawingStyle, TImageType AImageType, bool Enabled = true)/* overload */;
	bool __fastcall FileLoad(TResType ResType, const System::UnicodeString Name, System::Uitypes::TColor MaskColor);
	bool __fastcall GetBitmap(int Index, Vcl::Graphics::TBitmap* Image);
	virtual System::Types::TPoint __fastcall GetHotSpot();
	void __fastcall GetIcon(int Index, Vcl::Graphics::TIcon* Image)/* overload */;
	void __fastcall GetIcon(int Index, Vcl::Graphics::TIcon* Image, TDrawingStyle ADrawingStyle, TImageType AImageType)/* overload */;
	HBITMAP __fastcall GetImageBitmap();
	HBITMAP __fastcall GetMaskBitmap();
	bool __fastcall GetResource(TResType ResType, const System::UnicodeString Name, int Width, TLoadResources LoadFlags, System::Uitypes::TColor MaskColor);
	bool __fastcall GetInstRes(NativeUInt Instance, TResType ResType, const System::UnicodeString Name, int Width, TLoadResources LoadFlags, System::Uitypes::TColor MaskColor)/* overload */;
	bool __fastcall GetInstRes(NativeUInt Instance, TResType ResType, unsigned ResID, int Width, TLoadResources LoadFlags, System::Uitypes::TColor MaskColor)/* overload */;
	bool __fastcall HandleAllocated();
	HIDESBASE void __fastcall Insert(int Index, Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	void __fastcall InsertIcon(int Index, Vcl::Graphics::TIcon* Image);
	void __fastcall InsertMasked(int Index, Vcl::Graphics::TBitmap* Image, System::Uitypes::TColor MaskColor);
	void __fastcall Move(int CurIndex, int NewIndex);
	bool __fastcall Overlay(int ImageIndex, TOverlay Overlay);
	void __fastcall RegisterChanges(TChangeLink* Value);
	bool __fastcall ResourceLoad(TResType ResType, const System::UnicodeString Name, System::Uitypes::TColor MaskColor);
	bool __fastcall ResInstLoad(NativeUInt Instance, TResType ResType, const System::UnicodeString Name, System::Uitypes::TColor MaskColor);
	void __fastcall Replace(int Index, Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	void __fastcall ReplaceIcon(int Index, Vcl::Graphics::TIcon* Image);
	void __fastcall ReplaceMasked(int Index, Vcl::Graphics::TBitmap* NewImage, System::Uitypes::TColor MaskColor);
	void __fastcall SetSize(int AWidth, int AHeight);
	void __fastcall UnRegisterChanges(TChangeLink* Value);
	__property TColorDepth ColorDepth = {read=FColorDepth, write=SetColorDepth, default=1};
#ifndef _WIN64
	__property NativeUInt Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	__property bool Scaling = {read=FScaling, nodefault};
	virtual bool __fastcall IsImageNameAvailable();
	virtual bool __fastcall IsScaled();
	virtual System::Uitypes::TImageIndex __fastcall GetIndexByName(const System::Uitypes::TImageName AName);
	virtual System::Uitypes::TImageName __fastcall GetNameByIndex(System::Uitypes::TImageIndex AIndex);
	void __fastcall CheckIndexAndName(System::Uitypes::TImageIndex &AIndex, System::Uitypes::TImageName &AName);
	__property int AllocBy = {read=FAllocBy, write=FAllocBy, default=4};
	__property System::Uitypes::TColor BlendColor = {read=FBlendColor, write=FBlendColor, default=536870911};
	__property System::Byte GrayscaleFactor = {read=FGrayscaleFactor, write=FGrayscaleFactor, default=0};
	__property System::Uitypes::TColor BkColor = {read=GetBkColor, write=SetBkColor, default=536870911};
	__property TDrawingStyle DrawingStyle = {read=FDrawingStyle, write=SetDrawingStyle, default=2};
	__property int Height = {read=FHeight, write=SetHeight, default=16};
	__property TImageType ImageType = {read=FImageType, write=FImageType, default=0};
	__property bool Masked = {read=FMasked, write=FMasked, default=1};
	__property bool ShareImages = {read=FShareImages, write=SetShareImages, default=0};
	__property int Width = {read=FWidth, write=SetWidth, default=16};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE unsigned __fastcall GetRGBFromColor(System::Uitypes::TColor Value);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetColorFromRGB(unsigned Value);
extern DELPHI_PACKAGE TDisabledStyle __fastcall GetImageListDisabledStyle(TCustomImageList* ImageList);
extern DELPHI_PACKAGE void __fastcall SetImageListDisabledStyle(TCustomImageList* ImageList, TDisabledStyle Style);
}	/* namespace Imglist */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMGLIST)
using namespace Vcl::Imglist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ImglistHPP
