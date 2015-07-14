#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2024;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2019;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9582_gshared (Enumerator_t2024 * __this, Dictionary_2_t2019 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9582(__this, ___dictionary, method) (( void (*) (Enumerator_t2024 *, Dictionary_2_t2019 *, const MethodInfo*))Enumerator__ctor_m9582_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9583_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9583(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9583_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9584_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9584(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9584_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9585_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9585(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9585_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9586_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9586(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9586_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9587_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9587(__this, method) (( bool (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_MoveNext_m9587_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2020  Enumerator_get_Current_m9588_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9588(__this, method) (( KeyValuePair_2_t2020  (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_get_Current_m9588_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9589_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9589(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_get_CurrentKey_m9589_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9590_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9590(__this, method) (( Object_t * (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_get_CurrentValue_m9590_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9591_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9591(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_VerifyState_m9591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9592_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9592(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_VerifyCurrent_m9592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9593_gshared (Enumerator_t2024 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9593(__this, method) (( void (*) (Enumerator_t2024 *, const MethodInfo*))Enumerator_Dispose_m9593_gshared)(__this, method)
