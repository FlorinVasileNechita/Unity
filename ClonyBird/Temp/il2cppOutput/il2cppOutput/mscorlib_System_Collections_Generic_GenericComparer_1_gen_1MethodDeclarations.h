#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1490;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m8198_gshared (GenericComparer_1_t1490 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8198(__this, method) (( void (*) (GenericComparer_1_t1490 *, const MethodInfo*))GenericComparer_1__ctor_m8198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12575_gshared (GenericComparer_1_t1490 * __this, Guid_t390  ___x, Guid_t390  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12575(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1490 *, Guid_t390 , Guid_t390 , const MethodInfo*))GenericComparer_1_Compare_m12575_gshared)(__this, ___x, ___y, method)
