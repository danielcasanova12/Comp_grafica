// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Graphics.pas' rev: 35.00 (Windows)

#ifndef Vcl_GraphicsHPP
#define Vcl_GraphicsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Wincodec.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
namespace Vcl
{
namespace Graphics
{
using System::Uitypes::TColor;
using System::Uitypes::PColor;
}	/* namespace Graphics */
}	/* namespace Vcl */
namespace Vcl
{
namespace Graphics
{
using System::Uitypes::TFontStyle;
using System::Uitypes::TFontStyles;
using System::Uitypes::TFontName;
using System::Uitypes::TFontCharset;
using System::Uitypes::TFontPitch;
using System::Uitypes::TFontQuality;
}	/* namespace Graphics */
}	/* namespace Vcl */

namespace Vcl
{
namespace Graphics
{
//-- forward type declarations -----------------------------------------------
struct TCursorOrIcon;
struct TIconRec;
class DELPHICLASS EInvalidGraphic;
class DELPHICLASS EInvalidGraphicOperation;
struct TResData;
struct TFontData;
struct TPenData;
struct TBrushData;
struct TResource;
class DELPHICLASS TGraphicsObject;
__interface DELPHIINTERFACE IChangeNotifier;
typedef System::DelphiInterface<IChangeNotifier> _di_IChangeNotifier;
class DELPHICLASS TFont;
class DELPHICLASS TPen;
class DELPHICLASS TBrush;
class DELPHICLASS TFontRecall;
class DELPHICLASS TPenRecall;
class DELPHICLASS TBrushRecall;
struct TTextFormatFlags;
class DELPHICLASS TCustomCanvas;
class DELPHICLASS TCanvas;
class DELPHICLASS TScaledGraphicDrawer;
class DELPHICLASS TGraphic;
struct TFindGraphicClassContext;
class DELPHICLASS TPicture;
class DELPHICLASS TMetafileCanvas;
class DELPHICLASS TSharedImage;
class DELPHICLASS TMetafileImage;
class DELPHICLASS TMetafile;
class DELPHICLASS TBitmapImage;
class DELPHICLASS TBitmap;
class DELPHICLASS TIconImage;
class DELPHICLASS TIcon;
class DELPHICLASS TWICImage;
class DELPHICLASS TWICScaledGraphicDrawer;
class DELPHICLASS TGDIHandleRecall;
//-- type declarations -------------------------------------------------------
typedef TCursorOrIcon *PCursorOrIcon;

struct DECLSPEC_DRECORD TCursorOrIcon
{
public:
	System::Word Reserved;
	System::Word wType;
	System::Word Count;
};


typedef TIconRec *PIconRec;

struct DECLSPEC_DRECORD TIconRec
{
public:
	System::Byte Width;
	System::Byte Height;
	System::Word Colors;
	System::Word Reserved1;
	System::Word Reserved2;
	int DIBSize;
	int DIBOffset;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidGraphic : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidGraphic(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidGraphic(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidGraphic(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidGraphic(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidGraphic(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidGraphic(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidGraphic(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidGraphic(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidGraphic(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidGraphic(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidGraphic(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidGraphic(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidGraphic() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidGraphicOperation : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidGraphicOperation(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidGraphicOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidGraphicOperation(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidGraphicOperation(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidGraphicOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidGraphicOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidGraphicOperation(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidGraphicOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidGraphicOperation(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidGraphicOperation(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidGraphicOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidGraphicOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidGraphicOperation() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TGraphicClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TGraphicClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TScaledGraphicDrawerClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TScaledGraphicDrawerClass);
#endif /* _WIN64 */

struct DECLSPEC_DRECORD TResData
{
public:
	NativeUInt Handle;
};


struct DECLSPEC_DRECORD TFontData
{
public:
	HFONT Handle;
	int Height;
	int Orientation;
	System::Uitypes::TFontPitch Pitch;
	System::Uitypes::TFontStylesBase Style;
	System::Uitypes::TFontCharset Charset;
	System::Uitypes::TFontDataName Name;
	System::Uitypes::TFontQuality Quality;
};


enum DECLSPEC_DENUM TPenStyle : unsigned char { psSolid, psDash, psDot, psDashDot, psDashDotDot, psClear, psInsideFrame, psUserStyle, psAlternate };

enum DECLSPEC_DENUM TPenMode : unsigned char { pmBlack, pmWhite, pmNop, pmNot, pmCopy, pmNotCopy, pmMergePenNot, pmMaskPenNot, pmMergeNotPen, pmMaskNotPen, pmMerge, pmNotMerge, pmMask, pmNotMask, pmXor, pmNotXor };

struct DECLSPEC_DRECORD TPenData
{
public:
	HPEN Handle;
	System::Uitypes::TColor Color;
	int Width;
	TPenStyle Style;
};


enum DECLSPEC_DENUM TBrushStyle : unsigned char { bsSolid, bsClear, bsHorizontal, bsVertical, bsFDiagonal, bsBDiagonal, bsCross, bsDiagCross };

struct DECLSPEC_DRECORD TBrushData
{
public:
	HBRUSH Handle;
	System::Uitypes::TColor Color;
	TBitmap* Bitmap;
	TBrushStyle Style;
	bool OwnsBitmap;
};


typedef TResource *PResource;

struct DECLSPEC_DRECORD TResource
{
public:
	TResource *Next;
	int RefCount;
	NativeUInt Handle;
	System::Word HashCode;
	unsigned Owner;
	
public:
	union
	{
		struct 
		{
			TBrushData Brush;
		};
		struct 
		{
			TPenData Pen;
		};
		struct 
		{
			TFontData Font;
		};
		struct 
		{
			TResData Data;
		};
		
	};
};


class PASCALIMPLEMENTATION TGraphicsObject : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	TResource *FResource;
	_RTL_CRITICAL_SECTION *FOwnerLock;
	
protected:
	virtual void __fastcall Changed();
	void __fastcall Lock();
	void __fastcall Unlock();
	
public:
	bool __fastcall HandleAllocated();
	__property Winapi::Windows::PRTLCriticalSection OwnerCriticalSection = {read=FOwnerLock, write=FOwnerLock};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGraphicsObject() { }
	
public:
	/* TObject.Create */ inline __fastcall TGraphicsObject() : System::Classes::TPersistent() { }
	
};


__interface  INTERFACE_UUID("{1FB62321-44A7-11D0-9E93-0020AF3D82DA}") IChangeNotifier  : public System::IInterface 
{
	virtual void __fastcall Changed() = 0 ;
};

class PASCALIMPLEMENTATION TFont : public TGraphicsObject
{
	typedef TGraphicsObject inherited;
	
private:
	System::Uitypes::TColor FColor;
	int FPixelsPerInch;
	_di_IChangeNotifier FNotify;
	void __fastcall GetData(TFontData &FontData);
	void __fastcall SetData(const TFontData &FontData);
	
protected:
	virtual void __fastcall Changed();
	HFONT __fastcall GetHandle();
	int __fastcall GetHeight();
	System::Uitypes::TFontName __fastcall GetName();
	int __fastcall GetOrientation();
	System::Uitypes::TFontPitch __fastcall GetPitch();
	int __fastcall GetSize();
	System::Uitypes::TFontStyles __fastcall GetStyle();
	System::Uitypes::TFontCharset __fastcall GetCharset();
	System::Uitypes::TFontQuality __fastcall GetQuality();
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetHandle(const HFONT Value);
	void __fastcall SetHeight(const int Value);
	void __fastcall SetOrientation(const int Value);
	void __fastcall SetName(const System::Uitypes::TFontName Value);
	void __fastcall SetPitch(const System::Uitypes::TFontPitch Value);
	void __fastcall SetSize(const int Value);
	void __fastcall SetStyle(const System::Uitypes::TFontStyles Value);
	void __fastcall SetCharset(const System::Uitypes::TFontCharset Value);
	void __fastcall SetQuality(const System::Uitypes::TFontQuality Value);
	
public:
	__fastcall TFont();
	__fastcall virtual ~TFont();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property _di_IChangeNotifier FontAdapter = {read=FNotify, write=FNotify};
#ifndef _WIN64
	__property HFONT Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property HFONT Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	__property int PixelsPerInch = {read=FPixelsPerInch, write=FPixelsPerInch, nodefault};
	
__published:
	__property System::Uitypes::TFontCharset Charset = {read=GetCharset, write=SetCharset, nodefault};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property System::Uitypes::TFontName Name = {read=GetName, write=SetName};
	__property int Orientation = {read=GetOrientation, write=SetOrientation, default=0};
	__property System::Uitypes::TFontPitch Pitch = {read=GetPitch, write=SetPitch, default=0};
	__property int Size = {read=GetSize, write=SetSize, stored=false, nodefault};
	__property System::Uitypes::TFontStyles Style = {read=GetStyle, write=SetStyle, nodefault};
	__property System::Uitypes::TFontQuality Quality = {read=GetQuality, write=SetQuality, default=0};
};


class PASCALIMPLEMENTATION TPen : public TGraphicsObject
{
	typedef TGraphicsObject inherited;
	
private:
	TPenMode FMode;
	void __fastcall GetData(TPenData &PenData);
	void __fastcall SetData(const TPenData &PenData);
	
protected:
	System::Uitypes::TColor __fastcall GetColor();
	void __fastcall SetColor(System::Uitypes::TColor Value);
	HPEN __fastcall GetHandle();
	void __fastcall SetHandle(HPEN Value);
	void __fastcall SetMode(TPenMode Value);
	TPenStyle __fastcall GetStyle();
	void __fastcall SetStyle(TPenStyle Value);
	int __fastcall GetWidth();
	void __fastcall SetWidth(int Value);
	
public:
	__fastcall TPen();
	__fastcall virtual ~TPen();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
#ifndef _WIN64
	__property HPEN Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property HPEN Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	
__published:
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=0};
	__property TPenMode Mode = {read=FMode, write=SetMode, default=4};
	__property TPenStyle Style = {read=GetStyle, write=SetStyle, default=0};
	__property int Width = {read=GetWidth, write=SetWidth, default=1};
};


class PASCALIMPLEMENTATION TBrush : public TGraphicsObject
{
	typedef TGraphicsObject inherited;
	
private:
	void __fastcall GetData(TBrushData &BrushData);
	void __fastcall SetData(const TBrushData &BrushData);
	
protected:
	TBitmap* __fastcall GetBitmap();
	void __fastcall SetBitmap(TBitmap* Value);
	System::Uitypes::TColor __fastcall GetColor();
	void __fastcall SetColor(System::Uitypes::TColor Value);
	HBRUSH __fastcall GetHandle();
	void __fastcall SetHandle(HBRUSH Value);
	TBrushStyle __fastcall GetStyle();
	void __fastcall SetStyle(TBrushStyle Value);
	
public:
	__fastcall TBrush();
	__fastcall virtual ~TBrush();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
#ifndef _WIN64
	__property HBRUSH Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property HBRUSH Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	
__published:
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=16777215};
	__property TBrushStyle Style = {read=GetStyle, write=SetStyle, default=0};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFontRecall : public System::Classes::TRecall
{
	typedef System::Classes::TRecall inherited;
	
public:
	__fastcall TFontRecall(TFont* AFont);
public:
	/* TRecall.Destroy */ inline __fastcall virtual ~TFontRecall() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPenRecall : public System::Classes::TRecall
{
	typedef System::Classes::TRecall inherited;
	
public:
	__fastcall TPenRecall(TPen* APen);
public:
	/* TRecall.Destroy */ inline __fastcall virtual ~TPenRecall() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBrushRecall : public System::Classes::TRecall
{
	typedef System::Classes::TRecall inherited;
	
public:
	__fastcall TBrushRecall(TBrush* ABrush);
public:
	/* TRecall.Destroy */ inline __fastcall virtual ~TBrushRecall() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFillStyle : unsigned char { fsSurface, fsBorder };

enum DECLSPEC_DENUM TFillMode : unsigned char { fmAlternate, fmWinding };

typedef int TCopyMode;

enum DECLSPEC_DENUM TCanvasStates : unsigned char { csHandleValid, csFontValid, csPenValid, csBrushValid };

typedef System::Set<TCanvasStates, TCanvasStates::csHandleValid, TCanvasStates::csBrushValid> TCanvasState;

enum DECLSPEC_DENUM TCanvasOrientation : unsigned char { coLeftToRight, coRightToLeft };

enum DECLSPEC_DENUM TTextFormats : unsigned char { tfBottom, tfCalcRect, tfCenter, tfEditControl, tfEndEllipsis, tfPathEllipsis, tfExpandTabs, tfExternalLeading, tfLeft, tfModifyString, tfNoClip, tfNoPrefix, tfRight, tfRtlReading, tfSingleLine, tfTop, tfVerticalCenter, tfWordBreak, tfHidePrefix, tfNoFullWidthCharBreak, tfPrefixOnly, tfTabStop, tfWordEllipsis, tfComposited };

typedef System::Set<TTextFormats, TTextFormats::tfBottom, TTextFormats::tfComposited> TTextFormat;

typedef unsigned TDrawTextFlags;

struct DECLSPEC_DRECORD TTextFormatFlags
{
private:
	TTextFormat FValue;
	
public:
	static TTextFormatFlags __fastcall _op_Implicit(TTextFormat Value);
	__fastcall operator TTextFormat();
	static TTextFormatFlags __fastcall _op_Implicit(unsigned Value);
	__fastcall operator unsigned();
	
	TTextFormatFlags& operator =(TTextFormat Value) { *this = TTextFormatFlags::_op_Implicit(Value); return *this; }
	TTextFormatFlags& operator =(unsigned Value) { *this = TTextFormatFlags::_op_Implicit(Value); return *this; }
};


class PASCALIMPLEMENTATION TCustomCanvas : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnChanging;
	int FTextFlags;
	_RTL_CRITICAL_SECTION FLock;
	int FLockCount;
	
protected:
	virtual TCanvasOrientation __fastcall GetCanvasOrientation() = 0 ;
	virtual System::Types::TRect __fastcall GetClipRect() = 0 ;
	virtual System::Types::TPoint __fastcall GetPenPos() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetPixel(int X, int Y) = 0 ;
	virtual void __fastcall SetPenPos(const System::Types::TPoint &Value) = 0 ;
	virtual void __fastcall SetPixel(int X, int Y, System::Uitypes::TColor Value) = 0 ;
	virtual void __fastcall Changed();
	virtual void __fastcall Changing();
	virtual void __fastcall RequiredState(TCanvasState ReqState) = 0 ;
	
public:
	virtual void __fastcall Arc(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4) = 0 ;
	virtual void __fastcall ArcTo(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4) = 0 ;
	virtual void __fastcall AngleArc(int X, int Y, unsigned Radius, float StartAngle, float SweepAngle) = 0 ;
	virtual void __fastcall BrushCopy(const System::Types::TRect &Dest, TBitmap* Bitmap, const System::Types::TRect &Source, System::Uitypes::TColor Color) = 0 ;
	virtual void __fastcall Chord(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4) = 0 ;
	virtual void __fastcall Draw(int X, int Y, TGraphic* Graphic) = 0 /* overload */;
	virtual void __fastcall Draw(int X, int Y, TGraphic* Graphic, System::Byte Opacity) = 0 /* overload */;
	virtual void __fastcall DrawFocusRect(const System::Types::TRect &Rect) = 0 ;
	virtual void __fastcall Ellipse(int X1, int Y1, int X2, int Y2) = 0 /* overload */;
	void __fastcall Ellipse(const System::Types::TRect &Rect)/* overload */;
	virtual void __fastcall FillRect(const System::Types::TRect &Rect) = 0 ;
	virtual void __fastcall FloodFill(int X, int Y, System::Uitypes::TColor Color, TFillStyle FillStyle) = 0 ;
	virtual void __fastcall FrameRect(const System::Types::TRect &Rect) = 0 ;
	virtual void __fastcall LineTo(int X, int Y) = 0 ;
	void __fastcall Lock();
	virtual void __fastcall MoveTo(int X, int Y) = 0 ;
	virtual void __fastcall Pie(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4) = 0 ;
	virtual void __fastcall Polygon(const System::Types::TPoint *Points, const int Points_High) = 0 ;
	virtual void __fastcall Polyline(const System::Types::TPoint *Points, const int Points_High) = 0 ;
	virtual void __fastcall PolyBezier(const System::Types::TPoint *Points, const int Points_High) = 0 ;
	virtual void __fastcall PolyBezierTo(const System::Types::TPoint *Points, const int Points_High) = 0 ;
	virtual void __fastcall Rectangle(int X1, int Y1, int X2, int Y2) = 0 /* overload */;
	void __fastcall Rectangle(const System::Types::TRect &Rect)/* overload */;
	virtual void __fastcall Refresh() = 0 ;
	virtual void __fastcall RoundRect(int X1, int Y1, int X2, int Y2, int X3, int Y3) = 0 /* overload */;
	void __fastcall RoundRect(const System::Types::TRect &Rect, int CX, int CY)/* overload */;
	virtual void __fastcall StretchDraw(const System::Types::TRect &Rect, TGraphic* Graphic) = 0 ;
	virtual System::Types::TSize __fastcall TextExtent(const System::UnicodeString Text) = 0 ;
	int __fastcall TextHeight(const System::UnicodeString Text);
	virtual void __fastcall TextOut(int X, int Y, const System::UnicodeString Text) = 0 ;
	virtual void __fastcall TextRect(System::Types::TRect &Rect, System::UnicodeString &Text, TTextFormat TextFormat = TTextFormat() ) = 0 /* overload */;
	virtual void __fastcall TextRect(const System::Types::TRect &Rect, int X, int Y, const System::UnicodeString Text) = 0 /* overload */;
	int __fastcall TextWidth(const System::UnicodeString Text);
	bool __fastcall TryLock();
	void __fastcall Unlock();
	__property System::Types::TRect ClipRect = {read=GetClipRect};
	__property int LockCount = {read=FLockCount, nodefault};
	__property TCanvasOrientation CanvasOrientation = {read=GetCanvasOrientation, nodefault};
	__property System::Types::TPoint PenPos = {read=GetPenPos, write=SetPenPos};
	__property System::Uitypes::TColor Pixels[int X][int Y] = {read=GetPixel, write=SetPixel};
	__property int TextFlags = {read=FTextFlags, write=FTextFlags, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnChanging = {read=FOnChanging, write=FOnChanging};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCustomCanvas() { }
	
public:
	/* TObject.Create */ inline __fastcall TCustomCanvas() : System::Classes::TPersistent() { }
	
};


class PASCALIMPLEMENTATION TCanvas : public TCustomCanvas
{
	typedef TCustomCanvas inherited;
	
private:
	HDC FHandle;
	TCanvasState State;
	TFont* FFont;
	TPen* FPen;
	TBrush* FBrush;
	System::Types::TPoint FPenPos;
	int FCopyMode;
	void __fastcall CreateBrush();
	void __fastcall CreateFont();
	void __fastcall CreatePen();
	void __fastcall BrushChanged(System::TObject* ABrush);
	void __fastcall DeselectHandles();
	void __fastcall FontChanged(System::TObject* AFont);
	void __fastcall PenChanged(System::TObject* APen);
	
protected:
	virtual TCanvasOrientation __fastcall GetCanvasOrientation();
	virtual System::Types::TRect __fastcall GetClipRect();
	virtual System::Types::TPoint __fastcall GetPenPos();
	virtual System::Uitypes::TColor __fastcall GetPixel(int X, int Y);
	HDC __fastcall GetHandle();
	void __fastcall SetBrush(TBrush* Value);
	void __fastcall SetFont(TFont* Value);
	void __fastcall SetHandle(HDC Value);
	void __fastcall SetPen(TPen* Value);
	virtual void __fastcall SetPenPos(const System::Types::TPoint &Value);
	virtual void __fastcall SetPixel(int X, int Y, System::Uitypes::TColor Value);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall RequiredState(TCanvasState ReqState);
	
public:
	__fastcall TCanvas();
	__fastcall virtual ~TCanvas();
	virtual void __fastcall Arc(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void __fastcall ArcTo(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void __fastcall AngleArc(int X, int Y, unsigned Radius, float StartAngle, float SweepAngle);
	virtual void __fastcall BrushCopy(const System::Types::TRect &Dest, TBitmap* Bitmap, const System::Types::TRect &Source, System::Uitypes::TColor Color);
	virtual void __fastcall Chord(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	void __fastcall CopyRect(const System::Types::TRect &Dest, TCanvas* Canvas, const System::Types::TRect &Source);
	virtual void __fastcall Draw(int X, int Y, TGraphic* Graphic)/* overload */;
	virtual void __fastcall Draw(int X, int Y, TGraphic* Graphic, System::Byte Opacity)/* overload */;
	virtual void __fastcall DrawFocusRect(const System::Types::TRect &Rect);
	virtual void __fastcall Ellipse(int X1, int Y1, int X2, int Y2)/* overload */;
	virtual void __fastcall FillRect(const System::Types::TRect &Rect);
	virtual void __fastcall FloodFill(int X, int Y, System::Uitypes::TColor Color, TFillStyle FillStyle);
	virtual void __fastcall FrameRect(const System::Types::TRect &Rect);
	bool __fastcall HandleAllocated();
	virtual void __fastcall LineTo(int X, int Y);
	virtual void __fastcall MoveTo(int X, int Y);
	virtual void __fastcall Pie(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void __fastcall Polygon(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall Polyline(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall PolyBezier(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall PolyBezierTo(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall Rectangle(int X1, int Y1, int X2, int Y2)/* overload */;
	virtual void __fastcall Refresh();
	virtual void __fastcall RoundRect(int X1, int Y1, int X2, int Y2, int X3, int Y3)/* overload */;
	virtual void __fastcall StretchDraw(const System::Types::TRect &Rect, TGraphic* Graphic);
	virtual System::Types::TSize __fastcall TextExtent(const System::UnicodeString Text);
	virtual void __fastcall TextOut(int X, int Y, const System::UnicodeString Text);
	virtual void __fastcall TextRect(System::Types::TRect &Rect, System::UnicodeString &Text, TTextFormat TextFormat = TTextFormat() )/* overload */;
	virtual void __fastcall TextRect(const System::Types::TRect &Rect, int X, int Y, const System::UnicodeString Text)/* overload */;
#ifndef _WIN64
	__property HDC Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property HDC Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	
__published:
	__property TBrush* Brush = {read=FBrush, write=SetBrush};
	__property int CopyMode = {read=FCopyMode, write=FCopyMode, default=13369376};
	__property TFont* Font = {read=FFont, write=SetFont};
	__property TPen* Pen = {read=FPen, write=SetPen};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Ellipse(const System::Types::TRect &Rect){ TCustomCanvas::Ellipse(Rect); }
	inline void __fastcall  Rectangle(const System::Types::TRect &Rect){ TCustomCanvas::Rectangle(Rect); }
	inline void __fastcall  RoundRect(const System::Types::TRect &Rect, int CX, int CY){ TCustomCanvas::RoundRect(Rect, CX, CY); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TScaledGraphicDrawer : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TGraphic* FGraphic;
	
protected:
	virtual bool __fastcall GetInitialized();
	__property TGraphic* Graphic = {read=FGraphic};
	
public:
	__fastcall virtual TScaledGraphicDrawer(TGraphic* AGraphic, bool AInitialize);
	virtual void __fastcall Initialize() = 0 ;
	virtual void __fastcall Draw(TCanvas* ACanvas, const System::Types::TRect &ARect) = 0 /* overload */;
	__property bool Initialized = {read=GetInitialized, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TScaledGraphicDrawer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TProgressStage : unsigned char { psStarting, psRunning, psEnding };

typedef void __fastcall (__closure *TProgressEvent)(System::TObject* Sender, TProgressStage Stage, System::Byte PercentDone, bool RedrawNow, const System::Types::TRect &R, const System::UnicodeString Msg);

class PASCALIMPLEMENTATION TGraphic : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	TProgressEvent FOnProgress;
	bool FModified;
	bool FTransparent;
	bool FPaletteModified;
	TScaledGraphicDrawer* FScaledDrawer;
	void __fastcall SetModified(bool Value);
	
protected:
	virtual void __fastcall Changed(System::TObject* Sender);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall Draw(TCanvas* ACanvas, const System::Types::TRect &Rect) = 0 ;
	virtual void __fastcall DrawTransparent(TCanvas* ACanvas, const System::Types::TRect &Rect, System::Byte Opacity);
	HIDESBASE virtual bool __fastcall Equals(TGraphic* Graphic)/* overload */;
	virtual bool __fastcall GetEmpty() = 0 ;
	virtual int __fastcall GetHeight() = 0 ;
	virtual HPALETTE __fastcall GetPalette();
	virtual bool __fastcall GetTransparent();
	virtual int __fastcall GetWidth() = 0 ;
	DYNAMIC void __fastcall Progress(System::TObject* Sender, TProgressStage Stage, System::Byte PercentDone, bool RedrawNow, const System::Types::TRect &R, const System::UnicodeString Msg);
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall SetHeight(int Value) = 0 ;
	virtual void __fastcall SetPalette(HPALETTE Value);
	virtual void __fastcall SetTransparent(bool Value);
	virtual void __fastcall SetWidth(int Value) = 0 ;
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	virtual bool __fastcall GetSupportsPartialTransparency();
	
public:
	__fastcall virtual TGraphic()/* overload */;
	__fastcall virtual ~TGraphic();
	virtual bool __fastcall Equals(System::TObject* Obj)/* overload */;
	virtual void __fastcall LoadFromFile(const System::UnicodeString Filename);
	virtual void __fastcall SaveToFile(const System::UnicodeString Filename);
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette) = 0 ;
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette) = 0 ;
	virtual void __fastcall SetSize(int AWidth, int AHeight);
	virtual void __fastcall EnableScaledDrawer(TScaledGraphicDrawerClass AGraphicScalerClass, bool AInitialize = true);
	virtual void __fastcall DisableScaledDrawer();
	virtual void __fastcall UpdateScaledDrawer();
	__property bool Empty = {read=GetEmpty, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property bool Modified = {read=FModified, write=SetModified, nodefault};
#ifndef _WIN64
	__property HPALETTE Palette = {read=GetPalette, write=SetPalette, nodefault};
#else /* _WIN64 */
	__property HPALETTE Palette = {read=GetPalette, write=SetPalette};
#endif /* _WIN64 */
	__property bool PaletteModified = {read=FPaletteModified, write=FPaletteModified, nodefault};
	__property bool Transparent = {read=GetTransparent, write=SetTransparent, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property TScaledGraphicDrawer* ScaledDrawer = {read=FScaledDrawer};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property bool SupportsPartialTransparency = {read=GetSupportsPartialTransparency, nodefault};
private:
	void *__IStreamPersist;	// System::Classes::IStreamPersist 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B8CD12A3-267A-11D4-83DA-00C04F60B2DD}
	operator System::Classes::_di_IStreamPersist()
	{
		System::Classes::_di_IStreamPersist intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Classes::IStreamPersist*(void) { return (System::Classes::IStreamPersist*)&__IStreamPersist; }
	#endif
	
};


typedef System::DynamicArray<TGraphic*> TGraphicArray;

enum DECLSPEC_DENUM TFindGraphicClassSource : unsigned char { gsStream, gsFileName, gsClipboard };

struct DECLSPEC_DRECORD TFindGraphicClassContext
{
public:
	TFindGraphicClassSource FSource;
	System::UnicodeString FFileName;
	System::Word FClipboardFormat;
	System::Classes::TStream* FStream;
};


typedef void __fastcall (__closure *TFindGraphicClassEvent)(System::TObject* Sender, const TFindGraphicClassContext &Context, TGraphicClass &GraphicClass);

class PASCALIMPLEMENTATION TPicture : public System::Classes::TInterfacedPersistent
{
	typedef System::Classes::TInterfacedPersistent inherited;
	
	
private:
	__interface DELPHIINTERFACE TLoadProc;
	typedef System::DelphiInterface<TLoadProc> _di_TLoadProc;
	__interface TLoadProc  : public System::IInterface 
	{
		virtual void __fastcall Invoke(TGraphic* Graphic) = 0 ;
	};
	
	
private:
	TGraphic* FGraphic;
	System::Classes::TNotifyEvent FOnChange;
	_di_IChangeNotifier FNotify;
	TProgressEvent FOnProgress;
	TFindGraphicClassEvent FOnFindGraphicClass;
	void __fastcall ForceType(TGraphicClass GraphicType);
	void __fastcall Load(TGraphicClass GraphicClass, _di_TLoadProc LoadProc);
	TBitmap* __fastcall GetBitmap();
	int __fastcall GetHeight();
	TIcon* __fastcall GetIcon();
	TMetafile* __fastcall GetMetafile();
	int __fastcall GetWidth();
	TWICImage* __fastcall GetWICImage();
	void __fastcall ReadData(System::Classes::TStream* Stream);
	void __fastcall SetBitmap(TBitmap* Value);
	void __fastcall SetGraphic(TGraphic* Value);
	void __fastcall SetIcon(TIcon* Value);
	void __fastcall SetMetafile(TMetafile* Value);
	void __fastcall SetWICImage(TWICImage* Value);
	void __fastcall WriteData(System::Classes::TStream* Stream);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	DYNAMIC void __fastcall Changed(System::TObject* Sender);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall Progress(System::TObject* Sender, TProgressStage Stage, System::Byte PercentDone, bool RedrawNow, const System::Types::TRect &R, const System::UnicodeString Msg);
	DYNAMIC void __fastcall FindGraphicClass(const TFindGraphicClassContext &Context, TGraphicClass &GraphicClass);
	
public:
	__fastcall TPicture();
	__fastcall virtual ~TPicture();
	void __fastcall LoadFromFile(const System::UnicodeString Filename);
	void __fastcall SaveToFile(const System::UnicodeString Filename);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	__classmethod bool __fastcall SupportsClipboardFormat(System::Word AFormat);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__classmethod void __fastcall RegisterFileFormat(const System::UnicodeString AExtension, const System::UnicodeString ADescription, TGraphicClass AGraphicClass);
	__classmethod void __fastcall RegisterClipboardFormat(System::Word AFormat, TGraphicClass AGraphicClass);
	__classmethod void __fastcall UnregisterGraphicClass(TGraphicClass AClass);
	__classmethod void __fastcall RegisterFileFormatRes(const System::UnicodeString AExtension, int ADescriptionResID, TGraphicClass AGraphicClass);
	__property TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property TGraphic* Graphic = {read=FGraphic, write=SetGraphic};
	__property _di_IChangeNotifier PictureAdapter = {read=FNotify, write=FNotify};
	__property int Height = {read=GetHeight, nodefault};
	__property TIcon* Icon = {read=GetIcon, write=SetIcon};
	__property TMetafile* Metafile = {read=GetMetafile, write=SetMetafile};
	__property TWICImage* WICImage = {read=GetWICImage, write=SetWICImage};
	__property int Width = {read=GetWidth, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property TFindGraphicClassEvent OnFindGraphicClass = {read=FOnFindGraphicClass, write=FOnFindGraphicClass};
private:
	void *__IStreamPersist;	// System::Classes::IStreamPersist 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B8CD12A3-267A-11D4-83DA-00C04F60B2DD}
	operator System::Classes::_di_IStreamPersist()
	{
		System::Classes::_di_IStreamPersist intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Classes::IStreamPersist*(void) { return (System::Classes::IStreamPersist*)&__IStreamPersist; }
	#endif
	
};


class PASCALIMPLEMENTATION TMetafileCanvas : public TCanvas
{
	typedef TCanvas inherited;
	
private:
	TMetafile* FMetafile;
	
public:
	__fastcall TMetafileCanvas(TMetafile* AMetafile, HDC ReferenceDevice);
	__fastcall TMetafileCanvas(TMetafile* AMetafile, HDC ReferenceDevice, const System::UnicodeString CreatedBy, const System::UnicodeString Description);
	__fastcall virtual ~TMetafileCanvas();
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSharedImage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FRefCount;
	
protected:
	void __fastcall Reference();
	void __fastcall Release();
	virtual void __fastcall FreeHandle() = 0 ;
	__property int RefCount = {read=FRefCount, nodefault};
	
public:
	__fastcall virtual ~TSharedImage();
public:
	/* TObject.Create */ inline __fastcall TSharedImage() : System::TObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMetafileImage : public TSharedImage
{
	typedef TSharedImage inherited;
	
private:
	NativeUInt FHandle;
	int FWidth;
	int FHeight;
	HPALETTE FPalette;
	System::Word FInch;
	int FTempWidth;
	int FTempHeight;
	
protected:
	virtual void __fastcall FreeHandle();
	
public:
	__fastcall virtual ~TMetafileImage();
public:
	/* TObject.Create */ inline __fastcall TMetafileImage() : TSharedImage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TMetafile : public TGraphic
{
	typedef TGraphic inherited;
	
private:
	TMetafileImage* FImage;
	bool FEnhanced;
	System::UnicodeString __fastcall GetAuthor();
	System::UnicodeString __fastcall GetDesc();
	NativeUInt __fastcall GetHandle();
	System::Word __fastcall GetInch();
	int __fastcall GetMMHeight();
	int __fastcall GetMMWidth();
	void __fastcall NewImage();
	void __fastcall SetHandle(NativeUInt Value);
	void __fastcall SetInch(System::Word Value);
	void __fastcall SetMMHeight(int Value);
	void __fastcall SetMMWidth(int Value);
	void __fastcall UniqueImage();
	
protected:
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual HPALETTE __fastcall GetPalette();
	virtual int __fastcall GetWidth();
	virtual void __fastcall Draw(TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	void __fastcall ReadEMFStream(System::Classes::TStream* Stream);
	void __fastcall ReadWMFStream(System::Classes::TStream* Stream, int Length);
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetTransparent(bool Value);
	virtual void __fastcall SetWidth(int Value);
	__classmethod bool __fastcall TestEMF(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	void __fastcall WriteEMFStream(System::Classes::TStream* Stream);
	void __fastcall WriteWMFStream(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TMetafile()/* overload */;
	__fastcall virtual ~TMetafile();
	void __fastcall Clear();
	bool __fastcall HandleAllocated();
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToFile(const System::UnicodeString Filename);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	NativeUInt __fastcall ReleaseHandle();
	virtual void __fastcall SetSize(int AWidth, int AHeight);
	__property System::UnicodeString CreatedBy = {read=GetAuthor};
	__property System::UnicodeString Description = {read=GetDesc};
	__property bool Enhanced = {read=FEnhanced, write=FEnhanced, default=1};
#ifndef _WIN64
	__property NativeUInt Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	__property int MMWidth = {read=GetMMWidth, write=SetMMWidth, nodefault};
	__property int MMHeight = {read=GetMMHeight, write=SetMMHeight, nodefault};
	__property System::Word Inch = {read=GetInch, write=SetInch, nodefault};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBitmapImage : public TSharedImage
{
	typedef TSharedImage inherited;
	
private:
	HBITMAP FHandle;
	HBITMAP FMaskHandle;
	HPALETTE FPalette;
	HBITMAP FDIBHandle;
	System::Classes::TMemoryStream* FSaveStream;
	bool FHalftone;
	bool FOS2Format;
	
protected:
	tagDIBSECTION FDIB;
	virtual void __fastcall FreeHandle();
	
public:
	__fastcall virtual ~TBitmapImage();
public:
	/* TObject.Create */ inline __fastcall TBitmapImage() : TSharedImage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TBitmapHandleType : unsigned char { bmDIB, bmDDB };

enum DECLSPEC_DENUM TPixelFormat : unsigned char { pfDevice, pf1bit, pf4bit, pf8bit, pf15bit, pf16bit, pf24bit, pf32bit, pfCustom };

enum DECLSPEC_DENUM TAlphaFormat : unsigned char { afIgnored, afDefined, afPremultiplied };

enum DECLSPEC_DENUM TTransparentMode : unsigned char { tmAuto, tmFixed };

class PASCALIMPLEMENTATION TBitmap : public TGraphic
{
	typedef TGraphic inherited;
	
private:
	TCanvas* FCanvas;
	bool FIgnorePalette;
	bool FMaskBitsValid;
	bool FMaskValid;
	System::Uitypes::TColor FTransparentColor;
	TTransparentMode FTransparentMode;
	void __fastcall Changing(System::TObject* Sender);
	void __fastcall CopyImage(HBITMAP AHandle, HPALETTE APalette, const tagDIBSECTION &DIB);
	void __fastcall DIBNeeded();
	void __fastcall FreeContext();
	TCanvas* __fastcall GetCanvas();
	virtual HBITMAP __fastcall GetHandle();
	TBitmapHandleType __fastcall GetHandleType();
	virtual HBITMAP __fastcall GetMaskHandle();
	bool __fastcall GetMonochrome();
	TPixelFormat __fastcall GetPixelFormat();
	System::Uitypes::TColor __fastcall GetTransparentColor();
	void __fastcall ReadStream(System::Classes::TStream* Stream, int Size);
	void __fastcall SetHandle(HBITMAP Value);
	virtual void __fastcall SetHandleType(TBitmapHandleType Value);
	void __fastcall SetMaskHandle(HBITMAP Value);
	void __fastcall SetMonochrome(bool Value);
	void __fastcall SetPixelFormat(TPixelFormat Value);
	void __fastcall SetTransparentColor(System::Uitypes::TColor Value);
	void __fastcall SetTransparentMode(TTransparentMode Value);
	bool __fastcall TransparentColorStored();
	void __fastcall WriteStream(System::Classes::TStream* Stream, bool WriteSize);
	void * __fastcall GetScanline(int Row);
	void __fastcall NewImage(HBITMAP NewHandle, HPALETTE NewPalette, const tagDIBSECTION &NewDIB, bool OS2Format, System::Classes::TStream* RLEStream = (System::Classes::TStream*)(0x0));
	void __fastcall ReadDIB(System::Classes::TStream* Stream, unsigned ImageSize, Winapi::Windows::PBitmapFileHeader bmf = (Winapi::Windows::PBitmapFileHeader)(0x0));
	void __fastcall PreMultiplyAlpha();
	void __fastcall UnPreMultiplyAlpha();
	void __fastcall SetAlphaFormat(TAlphaFormat Value);
	
protected:
	TBitmapImage* FImage;
	TAlphaFormat FAlphaFormat;
	virtual bool __fastcall GetSupportsPartialTransparency();
	virtual void __fastcall Changed(System::TObject* Sender);
	virtual void __fastcall Draw(TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual void __fastcall DrawTransparent(TCanvas* ACanvas, const System::Types::TRect &Rect, System::Byte Opacity);
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual HPALETTE __fastcall GetPalette();
	virtual int __fastcall GetWidth();
	void __fastcall HandleNeeded();
	void __fastcall MaskHandleNeeded();
	void __fastcall PaletteNeeded();
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetPalette(HPALETTE Value);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TBitmap()/* overload */;
	__fastcall TBitmap(int AWidth, int AHeight)/* overload */;
	__fastcall virtual ~TBitmap();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Dormant();
	void __fastcall FreeImage();
	bool __fastcall HandleAllocated();
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall Mask(System::Uitypes::TColor TransparentColor);
	HBITMAP __fastcall ReleaseHandle();
	HBITMAP __fastcall ReleaseMaskHandle();
	HPALETTE __fastcall ReleasePalette();
	virtual void __fastcall SaveToClipboardFormat(System::Word &Format, NativeUInt &Data, HPALETTE &APalette);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall SetSize(int AWidth, int AHeight);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString ResName);
	void __fastcall LoadFromResourceID(NativeUInt Instance, int ResID);
	__property TCanvas* Canvas = {read=GetCanvas};
#ifndef _WIN64
	__property HBITMAP Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property HBITMAP Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
	__property TBitmapHandleType HandleType = {read=GetHandleType, write=SetHandleType, nodefault};
	__property bool IgnorePalette = {read=FIgnorePalette, write=FIgnorePalette, nodefault};
#ifndef _WIN64
	__property HBITMAP MaskHandle = {read=GetMaskHandle, write=SetMaskHandle, nodefault};
#else /* _WIN64 */
	__property HBITMAP MaskHandle = {read=GetMaskHandle, write=SetMaskHandle};
#endif /* _WIN64 */
	__property bool Monochrome = {read=GetMonochrome, write=SetMonochrome, nodefault};
	__property TPixelFormat PixelFormat = {read=GetPixelFormat, write=SetPixelFormat, nodefault};
	__property System::Uitypes::TColor TransparentColor = {read=GetTransparentColor, write=SetTransparentColor, stored=TransparentColorStored, nodefault};
	__property TTransparentMode TransparentMode = {read=FTransparentMode, write=SetTransparentMode, default=0};
	__property void * ScanLine[int Row] = {read=GetScanline};
	__property TAlphaFormat AlphaFormat = {read=FAlphaFormat, write=SetAlphaFormat, nodefault};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIconImage : public TSharedImage
{
	typedef TSharedImage inherited;
	
private:
	System::Classes::TCustomMemoryStream* FMemoryImage;
	System::Types::TPoint FSize;
	HICON FHandle;
	
protected:
	virtual void __fastcall FreeHandle();
	
public:
	__fastcall virtual ~TIconImage();
public:
	/* TObject.Create */ inline __fastcall TIconImage() : TSharedImage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TIcon : public TGraphic
{
	typedef TGraphic inherited;
	
private:
	TIconImage* FImage;
	System::Types::TPoint FRequestedSize;
	HICON __fastcall GetHandle();
	void __fastcall HandleNeeded();
	void __fastcall ImageNeeded();
	void __fastcall SetHandle(HICON Value);
	void __fastcall NewImage(HICON NewHandle, System::Classes::TMemoryStream* NewImage);
	
protected:
	virtual void __fastcall Draw(TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetTransparent(bool Value);
	virtual void __fastcall SetWidth(int Value);
	
public:
	__fastcall virtual TIcon()/* overload */;
	__fastcall virtual ~TIcon();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	bool __fastcall HandleAllocated();
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	HICON __fastcall ReleaseHandle();
	virtual void __fastcall SaveToClipboardFormat(System::Word &Format, NativeUInt &Data, HPALETTE &APalette);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall SetSize(int AWidth, int AHeight);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString ResName);
	void __fastcall LoadFromResourceID(NativeUInt Instance, int ResID);
#ifndef _WIN64
	__property HICON Handle = {read=GetHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
	__property HICON Handle = {read=GetHandle, write=SetHandle};
#endif /* _WIN64 */
};


enum DECLSPEC_DENUM TWICImageFormat : unsigned char { wifBmp, wifPng, wifJpeg, wifGif, wifTiff, wifWMPhoto, wifOther };

enum DECLSPEC_DENUM TWICImageInterpolationMode : unsigned char { wipmNone, wipmHighQualityCubic, wipmFant, wipmCubic, wipmLinear, wipmNearestNeighbor };

class PASCALIMPLEMENTATION TWICImage : public TGraphic
{
	typedef TGraphic inherited;
	
private:
	unsigned FWidth;
	unsigned FHeight;
	TBitmap* FBitmap;
	System::Classes::TMemoryStream* FData;
	_di_IWICBitmap FWicBitmap;
	TWICImage* FScaledBuffer;
	unsigned FFrameCount;
	unsigned FFrameIndex;
	TWICImageFormat FImageFormat;
	GUID FEncoderContainerFormat;
	bool FFormatChanged;
	TWICImageInterpolationMode FInterpolationMode;
	void __fastcall SetImageFormat(const TWICImageFormat Value);
	void __fastcall SetInterpolationMode(TWICImageInterpolationMode Value);
	void __fastcall SetEncoderContainerFormat(const GUID &Value);
	void __fastcall CreateWicBitmap();
	_di_IWICBitmap __fastcall GetHandle();
	void __fastcall SetHandle(const _di_IWICBitmap Value);
	static _di_IWICImagingFactory FImagingFactory;
	static _di_IWICImagingFactory __fastcall GetImagingFactory();
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall Draw(TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual bool __fastcall GetEmpty();
	unsigned __fastcall GetFrameCount();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetWidth(int Value);
	void __fastcall RequireBitmap();
	
public:
	__fastcall virtual TWICImage()/* overload */;
	__fastcall virtual ~TWICImage();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	TWICImage* __fastcall CreateScaledCopy(int ANewWidth, int ANewHeight, TWICImageInterpolationMode AInterpolationMode = (TWICImageInterpolationMode)(0x1));
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString ResName);
	__property unsigned FrameCount = {read=GetFrameCount, nodefault};
	__property unsigned FrameIndex = {read=FFrameIndex, write=FFrameIndex, nodefault};
	__property _di_IWICBitmap Handle = {read=GetHandle, write=SetHandle};
	__property TWICImageFormat ImageFormat = {read=FImageFormat, write=SetImageFormat, nodefault};
	__property TWICImageInterpolationMode InterpolationMode = {read=FInterpolationMode, write=SetInterpolationMode, nodefault};
	__property GUID EncoderContainerFormat = {read=FEncoderContainerFormat, write=SetEncoderContainerFormat};
	/* static */ __property _di_IWICImagingFactory ImagingFactory = {read=GetImagingFactory};
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWICScaledGraphicDrawer : public TScaledGraphicDrawer
{
	typedef TScaledGraphicDrawer inherited;
	
private:
	TWICImage* FScaledBuffer;
	TWICImageInterpolationMode FInterpolationMode;
	void __fastcall SetInterpolationMode(TWICImageInterpolationMode AValue);
	
protected:
	virtual bool __fastcall GetInitialized();
	
public:
	__fastcall virtual TWICScaledGraphicDrawer(TGraphic* AGraphic, bool AInitialize);
	__fastcall virtual ~TWICScaledGraphicDrawer();
	virtual void __fastcall Initialize();
	virtual void __fastcall Draw(TCanvas* ACanvas, const System::Types::TRect &ARect)/* overload */;
	__property TWICImageInterpolationMode InterpolationMode = {read=FInterpolationMode, write=SetInterpolationMode, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGDIHandleRecall : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TCanvas* FCanvas;
	HDC FDC;
	HGDIOBJ FGDIObj;
	
public:
	__fastcall TGDIHandleRecall(HDC DC, unsigned GDIObject);
	__fastcall virtual ~TGDIHandleRecall();
	__property TCanvas* Canvas = {read=FCanvas};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef bool __fastcall (*TGraphicIsAnimatingFunc)(TGraphic* AGraphic);

//-- var, const, procedure ---------------------------------------------------
static const unsigned clSystemColor = unsigned(0xff000000);
static const System::Uitypes::TColor clScrollBar = System::Uitypes::TColor(-16777216);
static const System::Uitypes::TColor clBackground = System::Uitypes::TColor(-16777215);
static const System::Uitypes::TColor clActiveCaption = System::Uitypes::TColor(-16777214);
static const System::Uitypes::TColor clInactiveCaption = System::Uitypes::TColor(-16777213);
static const System::Uitypes::TColor clMenu = System::Uitypes::TColor(-16777212);
static const System::Uitypes::TColor clWindow = System::Uitypes::TColor(-16777211);
static const System::Uitypes::TColor clWindowFrame = System::Uitypes::TColor(-16777210);
static const System::Uitypes::TColor clMenuText = System::Uitypes::TColor(-16777209);
static const System::Uitypes::TColor clWindowText = System::Uitypes::TColor(-16777208);
static const System::Uitypes::TColor clCaptionText = System::Uitypes::TColor(-16777207);
static const System::Uitypes::TColor clActiveBorder = System::Uitypes::TColor(-16777206);
static const System::Uitypes::TColor clInactiveBorder = System::Uitypes::TColor(-16777205);
static const System::Uitypes::TColor clAppWorkSpace = System::Uitypes::TColor(-16777204);
static const System::Uitypes::TColor clHighlight = System::Uitypes::TColor(-16777203);
static const System::Uitypes::TColor clHighlightText = System::Uitypes::TColor(-16777202);
static const System::Uitypes::TColor clBtnFace = System::Uitypes::TColor(-16777201);
static const System::Uitypes::TColor clBtnShadow = System::Uitypes::TColor(-16777200);
static const System::Uitypes::TColor clGrayText = System::Uitypes::TColor(-16777199);
static const System::Uitypes::TColor clBtnText = System::Uitypes::TColor(-16777198);
static const System::Uitypes::TColor clInactiveCaptionText = System::Uitypes::TColor(-16777197);
static const System::Uitypes::TColor clBtnHighlight = System::Uitypes::TColor(-16777196);
static const System::Uitypes::TColor cl3DDkShadow = System::Uitypes::TColor(-16777195);
static const System::Uitypes::TColor cl3DLight = System::Uitypes::TColor(-16777194);
static const System::Uitypes::TColor clInfoText = System::Uitypes::TColor(-16777193);
static const System::Uitypes::TColor clInfoBk = System::Uitypes::TColor(-16777192);
static const System::Uitypes::TColor clHotLight = System::Uitypes::TColor(-16777190);
static const System::Uitypes::TColor clGradientActiveCaption = System::Uitypes::TColor(-16777189);
static const System::Uitypes::TColor clGradientInactiveCaption = System::Uitypes::TColor(-16777188);
static const System::Uitypes::TColor clMenuHighlight = System::Uitypes::TColor(-16777187);
static const System::Uitypes::TColor clMenuBar = System::Uitypes::TColor(-16777186);
static const System::Uitypes::TColor clBlack = System::Uitypes::TColor(0);
static const System::Uitypes::TColor clMaroon = System::Uitypes::TColor(128);
static const System::Uitypes::TColor clGreen = System::Uitypes::TColor(32768);
static const System::Uitypes::TColor clOlive = System::Uitypes::TColor(32896);
static const System::Uitypes::TColor clNavy = System::Uitypes::TColor(8388608);
static const System::Uitypes::TColor clPurple = System::Uitypes::TColor(8388736);
static const System::Uitypes::TColor clTeal = System::Uitypes::TColor(8421376);
static const System::Uitypes::TColor clGray = System::Uitypes::TColor(8421504);
static const System::Uitypes::TColor clSilver = System::Uitypes::TColor(12632256);
static const System::Uitypes::TColor clRed = System::Uitypes::TColor(255);
static const System::Uitypes::TColor clLime = System::Uitypes::TColor(65280);
static const System::Uitypes::TColor clYellow = System::Uitypes::TColor(65535);
static const System::Uitypes::TColor clBlue = System::Uitypes::TColor(16711680);
static const System::Uitypes::TColor clFuchsia = System::Uitypes::TColor(16711935);
static const System::Uitypes::TColor clAqua = System::Uitypes::TColor(16776960);
static const System::Uitypes::TColor clLtGray = System::Uitypes::TColor(12632256);
static const System::Uitypes::TColor clDkGray = System::Uitypes::TColor(8421504);
static const System::Uitypes::TColor clWhite = System::Uitypes::TColor(16777215);
static const System::Int8 StandardColorsCount = System::Int8(0x10);
static const System::Uitypes::TColor clMoneyGreen = System::Uitypes::TColor(12639424);
static const System::Uitypes::TColor clSkyBlue = System::Uitypes::TColor(15780518);
static const System::Uitypes::TColor clCream = System::Uitypes::TColor(15793151);
static const System::Uitypes::TColor clMedGray = System::Uitypes::TColor(10789024);
static const System::Int8 ExtendedColorsCount = System::Int8(0x4);
static const System::Uitypes::TColor clNone = System::Uitypes::TColor(536870911);
static const System::Uitypes::TColor clDefault = System::Uitypes::TColor(536870912);
static const System::Uitypes::TColor clWebSnow = System::Uitypes::TColor(16448255);
static const System::Uitypes::TColor clWebFloralWhite = System::Uitypes::TColor(15792895);
static const System::Uitypes::TColor clWebLavenderBlush = System::Uitypes::TColor(16118015);
static const System::Uitypes::TColor clWebOldLace = System::Uitypes::TColor(15136253);
static const System::Uitypes::TColor clWebIvory = System::Uitypes::TColor(15794175);
static const System::Uitypes::TColor clWebCornSilk = System::Uitypes::TColor(14481663);
static const System::Uitypes::TColor clWebBeige = System::Uitypes::TColor(14480885);
static const System::Uitypes::TColor clWebAntiqueWhite = System::Uitypes::TColor(14150650);
static const System::Uitypes::TColor clWebWheat = System::Uitypes::TColor(11788021);
static const System::Uitypes::TColor clWebAliceBlue = System::Uitypes::TColor(16775408);
static const System::Uitypes::TColor clWebGhostWhite = System::Uitypes::TColor(16775416);
static const System::Uitypes::TColor clWebLavender = System::Uitypes::TColor(16443110);
static const System::Uitypes::TColor clWebSeashell = System::Uitypes::TColor(15660543);
static const System::Uitypes::TColor clWebLightYellow = System::Uitypes::TColor(14745599);
static const System::Uitypes::TColor clWebPapayaWhip = System::Uitypes::TColor(14020607);
static const System::Uitypes::TColor clWebNavajoWhite = System::Uitypes::TColor(11394815);
static const System::Uitypes::TColor clWebMoccasin = System::Uitypes::TColor(11920639);
static const System::Uitypes::TColor clWebBurlywood = System::Uitypes::TColor(8894686);
static const System::Uitypes::TColor clWebAzure = System::Uitypes::TColor(16777200);
static const System::Uitypes::TColor clWebMintcream = System::Uitypes::TColor(16449525);
static const System::Uitypes::TColor clWebHoneydew = System::Uitypes::TColor(15794160);
static const System::Uitypes::TColor clWebLinen = System::Uitypes::TColor(15134970);
static const System::Uitypes::TColor clWebLemonChiffon = System::Uitypes::TColor(13499135);
static const System::Uitypes::TColor clWebBlanchedAlmond = System::Uitypes::TColor(13495295);
static const System::Uitypes::TColor clWebBisque = System::Uitypes::TColor(12903679);
static const System::Uitypes::TColor clWebPeachPuff = System::Uitypes::TColor(12180223);
static const System::Uitypes::TColor clWebTan = System::Uitypes::TColor(9221330);
static const System::Uitypes::TColor clWebYellow = System::Uitypes::TColor(65535);
static const System::Uitypes::TColor clWebDarkOrange = System::Uitypes::TColor(36095);
static const System::Uitypes::TColor clWebRed = System::Uitypes::TColor(255);
static const System::Uitypes::TColor clWebDarkRed = System::Uitypes::TColor(139);
static const System::Uitypes::TColor clWebMaroon = System::Uitypes::TColor(128);
static const System::Uitypes::TColor clWebIndianRed = System::Uitypes::TColor(6053069);
static const System::Uitypes::TColor clWebSalmon = System::Uitypes::TColor(7504122);
static const System::Uitypes::TColor clWebCoral = System::Uitypes::TColor(5275647);
static const System::Uitypes::TColor clWebGold = System::Uitypes::TColor(55295);
static const System::Uitypes::TColor clWebTomato = System::Uitypes::TColor(4678655);
static const System::Uitypes::TColor clWebCrimson = System::Uitypes::TColor(3937500);
static const System::Uitypes::TColor clWebBrown = System::Uitypes::TColor(2763429);
static const System::Uitypes::TColor clWebChocolate = System::Uitypes::TColor(1993170);
static const System::Uitypes::TColor clWebSandyBrown = System::Uitypes::TColor(6333684);
static const System::Uitypes::TColor clWebLightSalmon = System::Uitypes::TColor(8036607);
static const System::Uitypes::TColor clWebLightCoral = System::Uitypes::TColor(8421616);
static const System::Uitypes::TColor clWebOrange = System::Uitypes::TColor(42495);
static const System::Uitypes::TColor clWebOrangeRed = System::Uitypes::TColor(17919);
static const System::Uitypes::TColor clWebFirebrick = System::Uitypes::TColor(2237106);
static const System::Uitypes::TColor clWebSaddleBrown = System::Uitypes::TColor(1262987);
static const System::Uitypes::TColor clWebSienna = System::Uitypes::TColor(2970272);
static const System::Uitypes::TColor clWebPeru = System::Uitypes::TColor(4163021);
static const System::Uitypes::TColor clWebDarkSalmon = System::Uitypes::TColor(8034025);
static const System::Uitypes::TColor clWebRosyBrown = System::Uitypes::TColor(9408444);
static const System::Uitypes::TColor clWebPaleGoldenrod = System::Uitypes::TColor(11200750);
static const System::Uitypes::TColor clWebLightGoldenrodYellow = System::Uitypes::TColor(13826810);
static const System::Uitypes::TColor clWebOlive = System::Uitypes::TColor(32896);
static const System::Uitypes::TColor clWebForestGreen = System::Uitypes::TColor(2263842);
static const System::Uitypes::TColor clWebGreenYellow = System::Uitypes::TColor(3145645);
static const System::Uitypes::TColor clWebChartreuse = System::Uitypes::TColor(65407);
static const System::Uitypes::TColor clWebLightGreen = System::Uitypes::TColor(9498256);
static const System::Uitypes::TColor clWebAquamarine = System::Uitypes::TColor(13959039);
static const System::Uitypes::TColor clWebSeaGreen = System::Uitypes::TColor(5737262);
static const System::Uitypes::TColor clWebGoldenRod = System::Uitypes::TColor(2139610);
static const System::Uitypes::TColor clWebKhaki = System::Uitypes::TColor(9234160);
static const System::Uitypes::TColor clWebOliveDrab = System::Uitypes::TColor(2330219);
static const System::Uitypes::TColor clWebGreen = System::Uitypes::TColor(32768);
static const System::Uitypes::TColor clWebYellowGreen = System::Uitypes::TColor(3329434);
static const System::Uitypes::TColor clWebLawnGreen = System::Uitypes::TColor(64636);
static const System::Uitypes::TColor clWebPaleGreen = System::Uitypes::TColor(10025880);
static const System::Uitypes::TColor clWebMediumAquamarine = System::Uitypes::TColor(11193702);
static const System::Uitypes::TColor clWebMediumSeaGreen = System::Uitypes::TColor(7451452);
static const System::Uitypes::TColor clWebDarkGoldenRod = System::Uitypes::TColor(755384);
static const System::Uitypes::TColor clWebDarkKhaki = System::Uitypes::TColor(7059389);
static const System::Uitypes::TColor clWebDarkOliveGreen = System::Uitypes::TColor(3107669);
static const System::Uitypes::TColor clWebDarkgreen = System::Uitypes::TColor(25600);
static const System::Uitypes::TColor clWebLimeGreen = System::Uitypes::TColor(3329330);
static const System::Uitypes::TColor clWebLime = System::Uitypes::TColor(65280);
static const System::Uitypes::TColor clWebSpringGreen = System::Uitypes::TColor(8388352);
static const System::Uitypes::TColor clWebMediumSpringGreen = System::Uitypes::TColor(10156544);
static const System::Uitypes::TColor clWebDarkSeaGreen = System::Uitypes::TColor(9419919);
static const System::Uitypes::TColor clWebLightSeaGreen = System::Uitypes::TColor(11186720);
static const System::Uitypes::TColor clWebPaleTurquoise = System::Uitypes::TColor(15658671);
static const System::Uitypes::TColor clWebLightCyan = System::Uitypes::TColor(16777184);
static const System::Uitypes::TColor clWebLightBlue = System::Uitypes::TColor(15128749);
static const System::Uitypes::TColor clWebLightSkyBlue = System::Uitypes::TColor(16436871);
static const System::Uitypes::TColor clWebCornFlowerBlue = System::Uitypes::TColor(15570276);
static const System::Uitypes::TColor clWebDarkBlue = System::Uitypes::TColor(9109504);
static const System::Uitypes::TColor clWebIndigo = System::Uitypes::TColor(8519755);
static const System::Uitypes::TColor clWebMediumTurquoise = System::Uitypes::TColor(13422920);
static const System::Uitypes::TColor clWebTurquoise = System::Uitypes::TColor(13688896);
static const System::Uitypes::TColor clWebCyan = System::Uitypes::TColor(16776960);
static const System::Uitypes::TColor clWebAqua = System::Uitypes::TColor(16776960);
static const System::Uitypes::TColor clWebPowderBlue = System::Uitypes::TColor(15130800);
static const System::Uitypes::TColor clWebSkyBlue = System::Uitypes::TColor(15453831);
static const System::Uitypes::TColor clWebRoyalBlue = System::Uitypes::TColor(14772545);
static const System::Uitypes::TColor clWebMediumBlue = System::Uitypes::TColor(13434880);
static const System::Uitypes::TColor clWebMidnightBlue = System::Uitypes::TColor(7346457);
static const System::Uitypes::TColor clWebDarkTurquoise = System::Uitypes::TColor(13749760);
static const System::Uitypes::TColor clWebCadetBlue = System::Uitypes::TColor(10526303);
static const System::Uitypes::TColor clWebDarkCyan = System::Uitypes::TColor(9145088);
static const System::Uitypes::TColor clWebTeal = System::Uitypes::TColor(8421376);
static const System::Uitypes::TColor clWebDeepskyBlue = System::Uitypes::TColor(16760576);
static const System::Uitypes::TColor clWebDodgerBlue = System::Uitypes::TColor(16748574);
static const System::Uitypes::TColor clWebBlue = System::Uitypes::TColor(16711680);
static const System::Uitypes::TColor clWebNavy = System::Uitypes::TColor(8388608);
static const System::Uitypes::TColor clWebDarkViolet = System::Uitypes::TColor(13828244);
static const System::Uitypes::TColor clWebDarkOrchid = System::Uitypes::TColor(13382297);
static const System::Uitypes::TColor clWebMagenta = System::Uitypes::TColor(16711935);
static const System::Uitypes::TColor clWebFuchsia = System::Uitypes::TColor(16711935);
static const System::Uitypes::TColor clWebDarkMagenta = System::Uitypes::TColor(9109643);
static const System::Uitypes::TColor clWebMediumVioletRed = System::Uitypes::TColor(8721863);
static const System::Uitypes::TColor clWebPaleVioletRed = System::Uitypes::TColor(9662683);
static const System::Uitypes::TColor clWebBlueViolet = System::Uitypes::TColor(14822282);
static const System::Uitypes::TColor clWebMediumOrchid = System::Uitypes::TColor(13850042);
static const System::Uitypes::TColor clWebMediumPurple = System::Uitypes::TColor(14381203);
static const System::Uitypes::TColor clWebPurple = System::Uitypes::TColor(8388736);
static const System::Uitypes::TColor clWebDeepPink = System::Uitypes::TColor(9639167);
static const System::Uitypes::TColor clWebLightPink = System::Uitypes::TColor(12695295);
static const System::Uitypes::TColor clWebViolet = System::Uitypes::TColor(15631086);
static const System::Uitypes::TColor clWebOrchid = System::Uitypes::TColor(14053594);
static const System::Uitypes::TColor clWebPlum = System::Uitypes::TColor(14524637);
static const System::Uitypes::TColor clWebThistle = System::Uitypes::TColor(14204888);
static const System::Uitypes::TColor clWebHotPink = System::Uitypes::TColor(11823615);
static const System::Uitypes::TColor clWebPink = System::Uitypes::TColor(13353215);
static const System::Uitypes::TColor clWebLightSteelBlue = System::Uitypes::TColor(14599344);
static const System::Uitypes::TColor clWebMediumSlateBlue = System::Uitypes::TColor(15624315);
static const System::Uitypes::TColor clWebLightSlateGray = System::Uitypes::TColor(10061943);
static const System::Uitypes::TColor clWebWhite = System::Uitypes::TColor(16777215);
static const System::Uitypes::TColor clWebLightgrey = System::Uitypes::TColor(13882323);
static const System::Uitypes::TColor clWebGray = System::Uitypes::TColor(8421504);
static const System::Uitypes::TColor clWebSteelBlue = System::Uitypes::TColor(11829830);
static const System::Uitypes::TColor clWebSlateBlue = System::Uitypes::TColor(13458026);
static const System::Uitypes::TColor clWebSlateGray = System::Uitypes::TColor(9470064);
static const System::Uitypes::TColor clWebWhiteSmoke = System::Uitypes::TColor(16119285);
static const System::Uitypes::TColor clWebSilver = System::Uitypes::TColor(12632256);
static const System::Uitypes::TColor clWebDimGray = System::Uitypes::TColor(6908265);
static const System::Uitypes::TColor clWebMistyRose = System::Uitypes::TColor(14804223);
static const System::Uitypes::TColor clWebDarkSlateBlue = System::Uitypes::TColor(9125192);
static const System::Uitypes::TColor clWebDarkSlategray = System::Uitypes::TColor(5197615);
static const System::Uitypes::TColor clWebGainsboro = System::Uitypes::TColor(14474460);
static const System::Uitypes::TColor clWebDarkGray = System::Uitypes::TColor(11119017);
static const System::Uitypes::TColor clWebBlack = System::Uitypes::TColor(0);
static const System::Byte WebColorsCount = System::Byte(0x8c);
static const System::Int8 cmBlackness = System::Int8(0x42);
static const int cmDstInvert = int(0x550009);
static const int cmMergeCopy = int(0xc000ca);
static const int cmMergePaint = int(0xbb0226);
static const int cmNotSrcCopy = int(0x330008);
static const int cmNotSrcErase = int(0x1100a6);
static const int cmPatCopy = int(0xf00021);
static const int cmPatInvert = int(0x5a0049);
static const int cmPatPaint = int(0xfb0a09);
static const int cmSrcAnd = int(0x8800c6);
static const int cmSrcCopy = int(0xcc0020);
static const int cmSrcErase = int(0x440328);
static const int cmSrcInvert = int(0x660046);
static const int cmSrcPaint = int(0xee0086);
static const int cmWhiteness = int(0xff0062);
static const System::Int8 rc3_StockIcon = System::Int8(0x0);
static const System::Int8 rc3_Icon = System::Int8(0x1);
static const System::Int8 rc3_Cursor = System::Int8(0x2);
extern DELPHI_PACKAGE TFontData DefFontData;
extern DELPHI_PACKAGE HPALETTE SystemPalette16;
extern DELPHI_PACKAGE bool DDBsOnly;
extern DELPHI_PACKAGE TGraphicIsAnimatingFunc GraphicIsAnimatingFunc;
extern DELPHI_PACKAGE void __fastcall PaletteChanged(void);
extern DELPHI_PACKAGE int __fastcall ColorToRGB(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColorToString(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall StringToColor(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall GetColorValues(System::Classes::TGetStrProc Proc);
extern DELPHI_PACKAGE bool __fastcall ColorToIdent(int Color, System::UnicodeString &Ident);
extern DELPHI_PACKAGE bool __fastcall IdentToColor(const System::UnicodeString Ident, int &Color);
extern DELPHI_PACKAGE void __fastcall GetCharsetValues(System::Classes::TGetStrProc Proc);
extern DELPHI_PACKAGE bool __fastcall CharsetToIdent(int Charset, System::UnicodeString &Ident);
extern DELPHI_PACKAGE bool __fastcall IdentToCharset(const System::UnicodeString Ident, int &Charset);
extern DELPHI_PACKAGE int __fastcall BytesPerScanline(int PixelsPerScanline, int BitsPerPixel, int Alignment);
extern DELPHI_PACKAGE bool __fastcall TransparentStretchBlt(HDC DstDC, int DstX, int DstY, int DstW, int DstH, HDC SrcDC, int SrcX, int SrcY, int SrcW, int SrcH, HDC MaskDC, int MaskX, int MaskY);
extern DELPHI_PACKAGE void __fastcall GetDIBSizes(HBITMAP Bitmap, unsigned &InfoHeaderSize, unsigned &ImageSize);
extern DELPHI_PACKAGE bool __fastcall GetDIB(HBITMAP Bitmap, HPALETTE Palette, void *BitmapInfo, void *Bits);
extern DELPHI_PACKAGE void __fastcall FreeMemoryContexts(void);
extern DELPHI_PACKAGE HBITMAP __fastcall CreateMappedBmp(HBITMAP Handle, const System::Uitypes::TColor *OldColors, const int OldColors_High, const System::Uitypes::TColor *NewColors, const int NewColors_High);
extern DELPHI_PACKAGE HBITMAP __fastcall CreateMappedRes(NativeUInt Instance, System::WideChar * ResName, const System::Uitypes::TColor *OldColors, const int OldColors_High, const System::Uitypes::TColor *NewColors, const int NewColors_High);
extern DELPHI_PACKAGE HBITMAP __fastcall CreateGrayMappedBmp(HBITMAP Handle);
extern DELPHI_PACKAGE HBITMAP __fastcall CreateGrayMappedRes(NativeUInt Instance, System::WideChar * ResName);
extern DELPHI_PACKAGE HPALETTE __fastcall CopyPalette(HPALETTE Palette);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GraphicFilter(TGraphicClass GraphicClass);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GraphicExtension(TGraphicClass GraphicClass);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GraphicFileMask(TGraphicClass GraphicClass);
extern DELPHI_PACKAGE System::Uitypes::TFontCharset __fastcall GetDefFontCharSet(void);
extern DELPHI_PACKAGE TBitmap* __fastcall AllocPatternBitmap(System::Uitypes::TColor BkColor, System::Uitypes::TColor FgColor);
}	/* namespace Graphics */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_GRAPHICS)
using namespace Vcl::Graphics;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_GraphicsHPP
