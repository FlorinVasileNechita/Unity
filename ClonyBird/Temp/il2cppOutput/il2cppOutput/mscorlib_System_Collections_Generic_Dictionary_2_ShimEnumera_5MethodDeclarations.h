#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2215;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2204;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11995_gshared (ShimEnumerator_t2215 * __this, Dictionary_2_t2204 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11995(__this, ___host, method) (( void (*) (ShimEnumerator_t2215 *, Dictionary_2_t2204 *, const MethodInfo*))ShimEnumerator__ctor_m11995_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11996_gshared (ShimEnumerator_t2215 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11996(__this, method) (( bool (*) (ShimEnumerator_t2215 *, const MethodInfo*))ShimEnumerator_MoveNext_m11996_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m11997_gshared (ShimEnumerator_t2215 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11997(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t2215 *, const MethodInfo*))ShimEnumerator_get_Entry_m11997_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11998_gshared (ShimEnumerator_t2215 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11998(__this, method) (( Object_t * (*) (ShimEnumerator_t2215 *, const MethodInfo*))ShimEnumerator_get_Key_m11998_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11999_gshared (ShimEnumerator_t2215 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11999(__this, method) (( Object_t * (*) (ShimEnumerator_t2215 *, const MethodInfo*))ShimEnumerator_get_Value_m11999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12000_gshared (ShimEnumerator_t2215 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12000(__this, method) (( Object_t * (*) (ShimEnumerator_t2215 *, const MethodInfo*))ShimEnumerator_get_Current_m12000_gshared)(__this, method)
