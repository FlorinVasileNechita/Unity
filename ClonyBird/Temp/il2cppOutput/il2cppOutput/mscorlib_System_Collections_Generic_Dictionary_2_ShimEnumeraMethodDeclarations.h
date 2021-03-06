﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2006;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1992;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9352_gshared (ShimEnumerator_t2006 * __this, Dictionary_2_t1992 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9352(__this, ___host, method) (( void (*) (ShimEnumerator_t2006 *, Dictionary_2_t1992 *, const MethodInfo*))ShimEnumerator__ctor_m9352_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9353_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9353(__this, method) (( bool (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_MoveNext_m9353_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m9354_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9354(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Entry_m9354_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9355_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9355(__this, method) (( Object_t * (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Key_m9355_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9356_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9356(__this, method) (( Object_t * (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Value_m9356_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9357_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9357(__this, method) (( Object_t * (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Current_m9357_gshared)(__this, method)
