// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.TimeSpan.pas' rev: 35.00 (Windows)

#ifndef System_TimespanHPP
#define System_TimespanHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Timespan
{
//-- forward type declarations -----------------------------------------------
struct TTimeSpan;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TTimeSpan
{
private:
	__int64 FTicks;
	
private:
	int __fastcall GetDays();
	int __fastcall GetHours();
	int __fastcall GetMinutes();
	int __fastcall GetSeconds();
	int __fastcall GetMilliseconds();
	double __fastcall GetTotalDays();
	double __fastcall GetTotalHours();
	double __fastcall GetTotalMinutes();
	double __fastcall GetTotalSeconds();
	double __fastcall GetTotalMilliseconds();
	static TTimeSpan __fastcall GetScaledInterval(double Value, int Scale);
	// __classmethod void __fastcall Create@();
	static TTimeSpan FMinValue;
	static TTimeSpan FMaxValue;
	static TTimeSpan FZero;
	#define TTimeSpan_MillisecondsPerTick  (1.000000E-04)
	
	#define TTimeSpan_SecondsPerTick  (1.000000E-07)
	
	#define TTimeSpan_MinutesPerTick  (1.666667E-09)
	
	#define TTimeSpan_HoursPerTick  (2.777778E-11)
	
	#define TTimeSpan_DaysPerTick  (1.157407E-12)
	
	static const System::Word MillisPerSecond = System::Word(0x3e8);
	
	static const System::Word MillisPerMinute = System::Word(0xea60);
	
	static const int MillisPerHour = int(0x36ee80);
	
	static const int MillisPerDay = int(0x5265c00);
	
	static const __int64 MaxSeconds = 0x000000d6bf94d5e5LL;
	
	static const __int64 MinSeconds = -0x000000d6bf94d5e5LL;
	
	static const __int64 MaxMilliseconds = 0x000346dc5d638865LL;
	
	static const __int64 MinMilliseconds = -0x000346dc5d638865LL;
	
	
public:
	static const System::Word TicksPerMillisecond = System::Word(0x2710);
	
	static const __int64 TicksPerSecond = 0x0000000000989680LL;
	
	static const __int64 TicksPerMinute = 0x0000000023c34600LL;
	
	static const __int64 TicksPerHour = 0x0000000861c46800LL;
	
	static const __int64 TicksPerDay = 0x000000c92a69c000LL;
	
	__fastcall TTimeSpan(__int64 ATicks)/* overload */;
	__fastcall TTimeSpan(int Hours, int Minutes, int Seconds)/* overload */;
	__fastcall TTimeSpan(int Days, int Hours, int Minutes, int Seconds)/* overload */;
	__fastcall TTimeSpan(int Days, int Hours, int Minutes, int Seconds, int Milliseconds)/* overload */;
	TTimeSpan __fastcall Add(const TTimeSpan &TS)/* overload */;
	TTimeSpan __fastcall Duration();
	TTimeSpan __fastcall Negate();
	TTimeSpan __fastcall Subtract(const TTimeSpan &TS)/* overload */;
	System::UnicodeString __fastcall ToString();
	static TTimeSpan __fastcall FromDays(double Value);
	static TTimeSpan __fastcall FromHours(double Value);
	static TTimeSpan __fastcall FromMinutes(double Value);
	static TTimeSpan __fastcall FromSeconds(double Value);
	static TTimeSpan __fastcall FromMilliseconds(double Value);
	static TTimeSpan __fastcall FromTicks(__int64 Value);
	static TTimeSpan __fastcall Subtract(const System::TDateTime D1, const System::TDateTime D2)/* overload */;
	static TTimeSpan __fastcall Parse(const System::UnicodeString S);
	static bool __fastcall TryParse(const System::UnicodeString S, /* out */ TTimeSpan &Value);
	static TTimeSpan __fastcall _op_Addition(const TTimeSpan &Left, const TTimeSpan &Right);
	static System::TDateTime __fastcall _op_Addition(const TTimeSpan &Left, System::TDateTime Right);
	static System::TDateTime __fastcall _op_Addition(const System::TDateTime Left, const TTimeSpan &Right);
	static TTimeSpan __fastcall _op_Subtraction(const TTimeSpan &Left, const TTimeSpan &Right);
	static System::TDateTime __fastcall _op_Subtraction(const System::TDateTime Left, const TTimeSpan &Right);
	static bool __fastcall _op_Equality(const TTimeSpan &Left, const TTimeSpan &Right);
	static bool __fastcall _op_Inequality(const TTimeSpan &Left, const TTimeSpan &Right);
	static bool __fastcall _op_GreaterThan(const TTimeSpan &Left, const TTimeSpan &Right);
	static bool __fastcall _op_GreaterThanOrEqual(const TTimeSpan &Left, const TTimeSpan &Right);
	static bool __fastcall _op_LessThan(const TTimeSpan &Left, const TTimeSpan &Right);
	static bool __fastcall _op_LessThanOrEqual(const TTimeSpan &Left, const TTimeSpan &Right);
	static TTimeSpan __fastcall _op_UnaryNegation(const TTimeSpan &Value);
	static TTimeSpan __fastcall _op_UnaryPlus(const TTimeSpan &Value);
	__fastcall operator System::UnicodeString();
	// explicit __fastcall operator System::UnicodeString();
	__property __int64 Ticks = {read=FTicks};
	__property int Days = {read=GetDays};
	__property int Hours = {read=GetHours};
	__property int Minutes = {read=GetMinutes};
	__property int Seconds = {read=GetSeconds};
	__property int Milliseconds = {read=GetMilliseconds};
	__property double TotalDays = {read=GetTotalDays};
	__property double TotalHours = {read=GetTotalHours};
	__property double TotalMinutes = {read=GetTotalMinutes};
	__property double TotalSeconds = {read=GetTotalSeconds};
	__property double TotalMilliseconds = {read=GetTotalMilliseconds};
	/* static */ __property TTimeSpan MinValue = {read=FMinValue};
	/* static */ __property TTimeSpan MaxValue = {read=FMaxValue};
	/* static */ __property TTimeSpan Zero = {read=FZero};
	
private:
	// __classmethod void __fastcall Destroy@();
public:
	TTimeSpan() {}
	friend TTimeSpan operator +(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_Addition(Left, Right); }
	friend System::TDateTime operator +(const TTimeSpan &Left, System::TDateTime Right) { return TTimeSpan::_op_Addition(Left, Right); }
	friend System::TDateTime operator +(const System::TDateTime Left, const TTimeSpan &Right) { return TTimeSpan::_op_Addition(Left, Right); }
	friend TTimeSpan operator -(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_Subtraction(Left, Right); }
	friend System::TDateTime operator -(const System::TDateTime Left, const TTimeSpan &Right) { return TTimeSpan::_op_Subtraction(Left, Right); }
	friend bool operator ==(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_Equality(Left, Right); }
	friend bool operator !=(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_Inequality(Left, Right); }
	friend bool operator >(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_GreaterThan(Left, Right); }
	friend bool operator >=(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_GreaterThanOrEqual(Left, Right); }
	friend bool operator <(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_LessThan(Left, Right); }
	friend bool operator <=(const TTimeSpan &Left, const TTimeSpan &Right) { return TTimeSpan::_op_LessThanOrEqual(Left, Right); }
	TTimeSpan operator -() { return TTimeSpan::_op_UnaryNegation(*this); }
	TTimeSpan operator +() { return TTimeSpan::_op_UnaryPlus(*this); }
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Timespan */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_TIMESPAN)
using namespace System::Timespan;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_TimespanHPP
