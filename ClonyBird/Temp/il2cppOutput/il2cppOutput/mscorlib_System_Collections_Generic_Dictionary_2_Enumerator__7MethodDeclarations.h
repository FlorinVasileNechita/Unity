#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2085;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2079;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10408_gshared (Enumerator_t2085 * __this, Dictionary_2_t2079 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10408(__this, ___dictionary, method) (( void (*) (Enumerator_t2085 *, Dictionary_2_t2079 *, const MethodInfo*))Enumerator__ctor_m10408_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10409_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10409(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10409_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t679  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10410_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10410(__this, method) (( DictionaryEntry_t679  (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10410_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10411_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10411(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10412_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10412(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10412_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10413_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10413(__this, method) (( bool (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_MoveNext_m10413_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2080  Enumerator_get_Current_m10414_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10414(__this, method) (( KeyValuePair_2_t2080  (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_get_Current_m10414_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10415_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10415(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_get_CurrentKey_m10415_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m10416_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10416(__this, method) (( int64_t (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_get_CurrentValue_m10416_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m10417_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10417(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_VerifyState_m10417_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10418_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10418(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_VerifyCurrent_m10418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10419_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10419(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_Dispose_m10419_gshared)(__this, method)
