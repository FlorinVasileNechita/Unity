#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2091;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2079;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10454_gshared (ShimEnumerator_t2091 * __this, Dictionary_2_t2079 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10454(__this, ___host, method) (( void (*) (ShimEnumerator_t2091 *, Dictionary_2_t2079 *, const MethodInfo*))ShimEnumerator__ctor_m10454_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10455_gshared (ShimEnumerator_t2091 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10455(__this, method) (( bool (*) (ShimEnumerator_t2091 *, const MethodInfo*))ShimEnumerator_MoveNext_m10455_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t679  ShimEnumerator_get_Entry_m10456_gshared (ShimEnumerator_t2091 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10456(__this, method) (( DictionaryEntry_t679  (*) (ShimEnumerator_t2091 *, const MethodInfo*))ShimEnumerator_get_Entry_m10456_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10457_gshared (ShimEnumerator_t2091 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10457(__this, method) (( Object_t * (*) (ShimEnumerator_t2091 *, const MethodInfo*))ShimEnumerator_get_Key_m10457_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10458_gshared (ShimEnumerator_t2091 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10458(__this, method) (( Object_t * (*) (ShimEnumerator_t2091 *, const MethodInfo*))ShimEnumerator_get_Value_m10458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10459_gshared (ShimEnumerator_t2091 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10459(__this, method) (( Object_t * (*) (ShimEnumerator_t2091 *, const MethodInfo*))ShimEnumerator_get_Current_m10459_gshared)(__this, method)
