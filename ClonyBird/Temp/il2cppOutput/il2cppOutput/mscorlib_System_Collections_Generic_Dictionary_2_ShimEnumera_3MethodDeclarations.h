#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2121;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2109;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10774_gshared (ShimEnumerator_t2121 * __this, Dictionary_2_t2109 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10774(__this, ___host, method) (( void (*) (ShimEnumerator_t2121 *, Dictionary_2_t2109 *, const MethodInfo*))ShimEnumerator__ctor_m10774_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10775_gshared (ShimEnumerator_t2121 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10775(__this, method) (( bool (*) (ShimEnumerator_t2121 *, const MethodInfo*))ShimEnumerator_MoveNext_m10775_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m10776_gshared (ShimEnumerator_t2121 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10776(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t2121 *, const MethodInfo*))ShimEnumerator_get_Entry_m10776_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10777_gshared (ShimEnumerator_t2121 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10777(__this, method) (( Object_t * (*) (ShimEnumerator_t2121 *, const MethodInfo*))ShimEnumerator_get_Key_m10777_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10778_gshared (ShimEnumerator_t2121 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10778(__this, method) (( Object_t * (*) (ShimEnumerator_t2121 *, const MethodInfo*))ShimEnumerator_get_Value_m10778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10779_gshared (ShimEnumerator_t2121 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10779(__this, method) (( Object_t * (*) (ShimEnumerator_t2121 *, const MethodInfo*))ShimEnumerator_get_Current_m10779_gshared)(__this, method)
