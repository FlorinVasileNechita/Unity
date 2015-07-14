#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t1419;
// System.Globalization.DaylightTime
struct DaylightTime_t1040;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m8087 (TimeZone_t1419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m8088 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1419 * TimeZone_get_CurrentTimeZone_m8089 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m8090 (TimeZone_t1419 * __this, DateTime_t83  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m8091 (Object_t * __this /* static, unused */, DateTime_t83  ___time, DaylightTime_t1040 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t83  TimeZone_ToLocalTime_m8092 (TimeZone_t1419 * __this, DateTime_t83  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t83  TimeZone_ToUniversalTime_m8093 (TimeZone_t1419 * __this, DateTime_t83  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t583  TimeZone_GetLocalTimeDiff_m8094 (TimeZone_t1419 * __this, DateTime_t83  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t583  TimeZone_GetLocalTimeDiff_m8095 (TimeZone_t1419 * __this, DateTime_t83  ___time, TimeSpan_t583  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
