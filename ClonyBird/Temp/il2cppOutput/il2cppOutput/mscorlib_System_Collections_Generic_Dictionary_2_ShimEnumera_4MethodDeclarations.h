#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2166;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2157;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11477_gshared (ShimEnumerator_t2166 * __this, Dictionary_2_t2157 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11477(__this, ___host, method) (( void (*) (ShimEnumerator_t2166 *, Dictionary_2_t2157 *, const MethodInfo*))ShimEnumerator__ctor_m11477_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11478_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11478(__this, method) (( bool (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_MoveNext_m11478_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m11479_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11479(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Entry_m11479_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11480_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11480(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Key_m11480_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11481_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11481(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Value_m11481_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11482_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11482(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Current_m11482_gshared)(__this, method)
