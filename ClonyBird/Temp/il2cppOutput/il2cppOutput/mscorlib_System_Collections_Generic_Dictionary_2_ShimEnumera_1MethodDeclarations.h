#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2046;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2035;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9854_gshared (ShimEnumerator_t2046 * __this, Dictionary_2_t2035 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9854(__this, ___host, method) (( void (*) (ShimEnumerator_t2046 *, Dictionary_2_t2035 *, const MethodInfo*))ShimEnumerator__ctor_m9854_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9855_gshared (ShimEnumerator_t2046 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9855(__this, method) (( bool (*) (ShimEnumerator_t2046 *, const MethodInfo*))ShimEnumerator_MoveNext_m9855_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m9856_gshared (ShimEnumerator_t2046 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9856(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t2046 *, const MethodInfo*))ShimEnumerator_get_Entry_m9856_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9857_gshared (ShimEnumerator_t2046 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9857(__this, method) (( Object_t * (*) (ShimEnumerator_t2046 *, const MethodInfo*))ShimEnumerator_get_Key_m9857_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9858_gshared (ShimEnumerator_t2046 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9858(__this, method) (( Object_t * (*) (ShimEnumerator_t2046 *, const MethodInfo*))ShimEnumerator_get_Value_m9858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9859_gshared (ShimEnumerator_t2046 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9859(__this, method) (( Object_t * (*) (ShimEnumerator_t2046 *, const MethodInfo*))ShimEnumerator_get_Current_m9859_gshared)(__this, method)
