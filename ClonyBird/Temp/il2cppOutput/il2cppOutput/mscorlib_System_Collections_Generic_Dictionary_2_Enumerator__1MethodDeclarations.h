#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1999;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1992;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9301_gshared (Enumerator_t1999 * __this, Dictionary_2_t1992 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9301(__this, ___dictionary, method) (( void (*) (Enumerator_t1999 *, Dictionary_2_t1992 *, const MethodInfo*))Enumerator__ctor_m9301_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9302_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9302(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9302_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9303_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9303(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9304_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9304(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9304_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9305_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9305(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9305_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9306_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9306(__this, method) (( bool (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_MoveNext_m9306_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1993  Enumerator_get_Current_m9307_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9307(__this, method) (( KeyValuePair_2_t1993  (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_get_Current_m9307_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m9308_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9308(__this, method) (( int32_t (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_get_CurrentKey_m9308_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9309_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9309(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_get_CurrentValue_m9309_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9310_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9310(__this, method) (( void (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_VerifyState_m9310_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9311_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9311(__this, method) (( void (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_VerifyCurrent_m9311_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9312_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9312(__this, method) (( void (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_Dispose_m9312_gshared)(__this, method)
