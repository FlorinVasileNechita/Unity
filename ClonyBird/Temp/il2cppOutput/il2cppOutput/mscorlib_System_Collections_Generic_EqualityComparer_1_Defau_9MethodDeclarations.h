#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2300;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12568_gshared (DefaultComparer_t2300 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12568(__this, method) (( void (*) (DefaultComparer_t2300 *, const MethodInfo*))DefaultComparer__ctor_m12568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12569_gshared (DefaultComparer_t2300 * __this, DateTimeOffset_t389  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12569(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2300 *, DateTimeOffset_t389 , const MethodInfo*))DefaultComparer_GetHashCode_m12569_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12570_gshared (DefaultComparer_t2300 * __this, DateTimeOffset_t389  ___x, DateTimeOffset_t389  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12570(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2300 *, DateTimeOffset_t389 , DateTimeOffset_t389 , const MethodInfo*))DefaultComparer_Equals_m12570_gshared)(__this, ___x, ___y, method)
