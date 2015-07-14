#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
struct InternalEnumerator_1_t2004;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9343_gshared (InternalEnumerator_1_t2004 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9343(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2004 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9343_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9344_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9344(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9344_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9345_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9345(__this, method) (( void (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9345_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9346_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9346(__this, method) (( bool (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9346_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t679  InternalEnumerator_1_get_Current_m9347_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9347(__this, method) (( DictionaryEntry_t679  (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9347_gshared)(__this, method)
