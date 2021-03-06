﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2115;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2109;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10728_gshared (Enumerator_t2115 * __this, Dictionary_2_t2109 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10728(__this, ___dictionary, method) (( void (*) (Enumerator_t2115 *, Dictionary_2_t2109 *, const MethodInfo*))Enumerator__ctor_m10728_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10729_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10729(__this, method) (( Object_t * (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10729_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10730_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10730(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10730_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10731_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10731(__this, method) (( Object_t * (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10731_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10732_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10732(__this, method) (( Object_t * (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10732_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10733_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10733(__this, method) (( bool (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_MoveNext_m10733_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2110  Enumerator_get_Current_m10734_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10734(__this, method) (( KeyValuePair_2_t2110  (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_get_Current_m10734_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10735_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10735(__this, method) (( uint64_t (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_get_CurrentKey_m10735_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10736_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10736(__this, method) (( Object_t * (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_get_CurrentValue_m10736_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10737_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10737(__this, method) (( void (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_VerifyState_m10737_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10738_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10738(__this, method) (( void (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_VerifyCurrent_m10738_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10739_gshared (Enumerator_t2115 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10739(__this, method) (( void (*) (Enumerator_t2115 *, const MethodInfo*))Enumerator_Dispose_m10739_gshared)(__this, method)
