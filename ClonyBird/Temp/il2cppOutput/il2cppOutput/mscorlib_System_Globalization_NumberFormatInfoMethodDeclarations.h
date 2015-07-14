#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1035;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t614;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1451;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
extern "C" void NumberFormatInfo__ctor_m5396 (NumberFormatInfo_t1035 * __this, int32_t ___lcid, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
extern "C" void NumberFormatInfo__ctor_m5397 (NumberFormatInfo_t1035 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
extern "C" void NumberFormatInfo__ctor_m5398 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
extern "C" void NumberFormatInfo__cctor_m5399 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m5400 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m5401 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m5402 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
extern "C" Int32U5BU5D_t614* NumberFormatInfo_get_RawCurrencyGroupSizes_m5403 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyNegativePattern_m5404 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyPositivePattern_m5405 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
extern "C" String_t* NumberFormatInfo_get_CurrencySymbol_m5406 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C" NumberFormatInfo_t1035 * NumberFormatInfo_get_CurrentInfo_m5407 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" NumberFormatInfo_t1035 * NumberFormatInfo_get_InvariantInfo_m5408 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
extern "C" String_t* NumberFormatInfo_get_NaNSymbol_m5409 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m5410 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C" String_t* NumberFormatInfo_get_NegativeSign_m5411 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_NumberDecimalDigits_m5412 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberDecimalSeparator_m5413 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberGroupSeparator_m5414 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
extern "C" Int32U5BU5D_t614* NumberFormatInfo_get_RawNumberGroupSizes_m5415 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
extern "C" int32_t NumberFormatInfo_get_NumberNegativePattern_m5416 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
extern "C" void NumberFormatInfo_set_NumberNegativePattern_m5417 (NumberFormatInfo_t1035 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_PercentDecimalDigits_m5418 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentDecimalSeparator_m5419 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentGroupSeparator_m5420 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
extern "C" Int32U5BU5D_t614* NumberFormatInfo_get_RawPercentGroupSizes_m5421 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
extern "C" int32_t NumberFormatInfo_get_PercentNegativePattern_m5422 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
extern "C" int32_t NumberFormatInfo_get_PercentPositivePattern_m5423 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
extern "C" String_t* NumberFormatInfo_get_PercentSymbol_m5424 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
extern "C" String_t* NumberFormatInfo_get_PerMilleSymbol_m5425 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m5426 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C" String_t* NumberFormatInfo_get_PositiveSign_m5427 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
extern "C" Object_t * NumberFormatInfo_GetFormat_m5428 (NumberFormatInfo_t1035 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
extern "C" Object_t * NumberFormatInfo_Clone_m5429 (NumberFormatInfo_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1035 * NumberFormatInfo_GetInstance_m5430 (Object_t * __this /* static, unused */, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
