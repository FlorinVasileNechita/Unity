#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2308;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12606_gshared (DefaultComparer_t2308 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12606(__this, method) (( void (*) (DefaultComparer_t2308 *, const MethodInfo*))DefaultComparer__ctor_m12606_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12607_gshared (DefaultComparer_t2308 * __this, TimeSpan_t583  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12607(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2308 *, TimeSpan_t583 , const MethodInfo*))DefaultComparer_GetHashCode_m12607_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12608_gshared (DefaultComparer_t2308 * __this, TimeSpan_t583  ___x, TimeSpan_t583  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12608(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2308 *, TimeSpan_t583 , TimeSpan_t583 , const MethodInfo*))DefaultComparer_Equals_m12608_gshared)(__this, ___x, ___y, method)
