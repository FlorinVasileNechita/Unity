#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2304;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12589_gshared (DefaultComparer_t2304 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12589(__this, method) (( void (*) (DefaultComparer_t2304 *, const MethodInfo*))DefaultComparer__ctor_m12589_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12590_gshared (DefaultComparer_t2304 * __this, Guid_t390  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12590(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2304 *, Guid_t390 , const MethodInfo*))DefaultComparer_GetHashCode_m12590_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12591_gshared (DefaultComparer_t2304 * __this, Guid_t390  ___x, Guid_t390  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12591(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2304 *, Guid_t390 , Guid_t390 , const MethodInfo*))DefaultComparer_Equals_m12591_gshared)(__this, ___x, ___y, method)
