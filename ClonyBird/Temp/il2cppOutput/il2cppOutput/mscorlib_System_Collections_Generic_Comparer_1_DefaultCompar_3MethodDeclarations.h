#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2302;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12580_gshared (DefaultComparer_t2302 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12580(__this, method) (( void (*) (DefaultComparer_t2302 *, const MethodInfo*))DefaultComparer__ctor_m12580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12581_gshared (DefaultComparer_t2302 * __this, Guid_t390  ___x, Guid_t390  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12581(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2302 *, Guid_t390 , Guid_t390 , const MethodInfo*))DefaultComparer_Compare_m12581_gshared)(__this, ___x, ___y, method)
