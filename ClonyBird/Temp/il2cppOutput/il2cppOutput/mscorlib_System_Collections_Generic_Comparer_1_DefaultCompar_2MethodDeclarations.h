#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2298;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12559_gshared (DefaultComparer_t2298 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12559(__this, method) (( void (*) (DefaultComparer_t2298 *, const MethodInfo*))DefaultComparer__ctor_m12559_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12560_gshared (DefaultComparer_t2298 * __this, DateTimeOffset_t389  ___x, DateTimeOffset_t389  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12560(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2298 *, DateTimeOffset_t389 , DateTimeOffset_t389 , const MethodInfo*))DefaultComparer_Compare_m12560_gshared)(__this, ___x, ___y, method)
