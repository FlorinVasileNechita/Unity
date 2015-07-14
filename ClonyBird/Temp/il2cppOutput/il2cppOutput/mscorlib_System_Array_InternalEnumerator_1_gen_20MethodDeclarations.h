#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct InternalEnumerator_1_t2021;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9553_gshared (InternalEnumerator_1_t2021 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9553(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2021 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9553_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9554_gshared (InternalEnumerator_1_t2021 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9554(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2021 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9554_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9555_gshared (InternalEnumerator_1_t2021 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9555(__this, method) (( void (*) (InternalEnumerator_1_t2021 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9555_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9556_gshared (InternalEnumerator_1_t2021 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9556(__this, method) (( bool (*) (InternalEnumerator_1_t2021 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9556_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2020  InternalEnumerator_1_get_Current_m9557_gshared (InternalEnumerator_1_t2021 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9557(__this, method) (( KeyValuePair_2_t2020  (*) (InternalEnumerator_1_t2021 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9557_gshared)(__this, method)
