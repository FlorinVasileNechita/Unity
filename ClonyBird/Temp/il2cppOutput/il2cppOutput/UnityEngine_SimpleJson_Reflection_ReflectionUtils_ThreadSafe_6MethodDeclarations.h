#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2135;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t323;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2133;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2155;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2328;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10978_gshared (ThreadSafeDictionary_2_t2135 * __this, ThreadSafeDictionaryValueFactory_2_t2133 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10978(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2135 *, ThreadSafeDictionaryValueFactory_2_t2133 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10978_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10980_gshared (ThreadSafeDictionary_2_t2135 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10980(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2135 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10980_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10982_gshared (ThreadSafeDictionary_2_t2135 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10982(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2135 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10982_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10984_gshared (ThreadSafeDictionary_2_t2135 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10984(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2135 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10984_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10986_gshared (ThreadSafeDictionary_2_t2135 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10986(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2135 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10986_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10988_gshared (ThreadSafeDictionary_2_t2135 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10988(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2135 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10988_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m10990_gshared (ThreadSafeDictionary_2_t2135 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10990(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2135 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m10990_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10992_gshared (ThreadSafeDictionary_2_t2135 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10992(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2135 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10992_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10994_gshared (ThreadSafeDictionary_2_t2135 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10994(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2135 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10994_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10996_gshared (ThreadSafeDictionary_2_t2135 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10996(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2135 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10996_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10998_gshared (ThreadSafeDictionary_2_t2135 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10998(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2135 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10998_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m11000_gshared (ThreadSafeDictionary_2_t2135 * __this, KeyValuePair_2_t2020  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m11000(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2135 *, KeyValuePair_2_t2020 , const MethodInfo*))ThreadSafeDictionary_2_Add_m11000_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m11002_gshared (ThreadSafeDictionary_2_t2135 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m11002(__this, method) (( void (*) (ThreadSafeDictionary_2_t2135 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m11002_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m11004_gshared (ThreadSafeDictionary_2_t2135 * __this, KeyValuePair_2_t2020  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m11004(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2135 *, KeyValuePair_2_t2020 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m11004_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m11006_gshared (ThreadSafeDictionary_2_t2135 * __this, KeyValuePair_2U5BU5D_t2155* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m11006(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2135 *, KeyValuePair_2U5BU5D_t2155*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m11006_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m11008_gshared (ThreadSafeDictionary_2_t2135 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m11008(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2135 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m11008_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m11010_gshared (ThreadSafeDictionary_2_t2135 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m11010(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2135 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m11010_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m11012_gshared (ThreadSafeDictionary_2_t2135 * __this, KeyValuePair_2_t2020  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m11012(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2135 *, KeyValuePair_2_t2020 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m11012_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m11014_gshared (ThreadSafeDictionary_2_t2135 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m11014(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2135 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m11014_gshared)(__this, method)
