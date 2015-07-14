﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
struct Enumerator_t2212;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2204;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11978_gshared (Enumerator_t2212 * __this, Dictionary_2_t2204 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m11978(__this, ___host, method) (( void (*) (Enumerator_t2212 *, Dictionary_2_t2204 *, const MethodInfo*))Enumerator__ctor_m11978_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11979_gshared (Enumerator_t2212 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11979(__this, method) (( Object_t * (*) (Enumerator_t2212 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11979_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m11980_gshared (Enumerator_t2212 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11980(__this, method) (( void (*) (Enumerator_t2212 *, const MethodInfo*))Enumerator_Dispose_m11980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11981_gshared (Enumerator_t2212 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11981(__this, method) (( bool (*) (Enumerator_t2212 *, const MethodInfo*))Enumerator_MoveNext_m11981_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m11982_gshared (Enumerator_t2212 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11982(__this, method) (( uint8_t (*) (Enumerator_t2212 *, const MethodInfo*))Enumerator_get_Current_m11982_gshared)(__this, method)
