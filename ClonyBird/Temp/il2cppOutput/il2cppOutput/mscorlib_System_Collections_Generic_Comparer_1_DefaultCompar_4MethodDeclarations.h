#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2306;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12597_gshared (DefaultComparer_t2306 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12597(__this, method) (( void (*) (DefaultComparer_t2306 *, const MethodInfo*))DefaultComparer__ctor_m12597_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12598_gshared (DefaultComparer_t2306 * __this, TimeSpan_t583  ___x, TimeSpan_t583  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12598(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2306 *, TimeSpan_t583 , TimeSpan_t583 , const MethodInfo*))DefaultComparer_Compare_m12598_gshared)(__this, ___x, ___y, method)
