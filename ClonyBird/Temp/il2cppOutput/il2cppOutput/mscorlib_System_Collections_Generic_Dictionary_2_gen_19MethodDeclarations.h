﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2204;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t323;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t2426;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2207;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2211;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2017;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t2427;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2429;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t678;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m11824_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11824(__this, method) (( void (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2__ctor_m11824_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11825_gshared (Dictionary_2_t2204 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11825(__this, ___comparer, method) (( void (*) (Dictionary_2_t2204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11825_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11827_gshared (Dictionary_2_t2204 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11827(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11827_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11829_gshared (Dictionary_2_t2204 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11829(__this, ___capacity, method) (( void (*) (Dictionary_2_t2204 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11829_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11831_gshared (Dictionary_2_t2204 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11831(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2204 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11831_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11833_gshared (Dictionary_2_t2204 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11833(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2204 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2__ctor_m11833_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11835_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11835(__this, method) (( Object_t* (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11835_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11837_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11837(__this, method) (( Object_t* (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11837_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11839_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11839(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11839_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11841_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11841(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11841_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11843_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11843(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11843_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11845_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11845(__this, ___key, method) (( bool (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11845_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11847_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11847(__this, ___key, method) (( void (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11847_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11849_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11849(__this, method) (( Object_t * (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11849_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11851_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11851(__this, method) (( bool (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11851_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11853_gshared (Dictionary_2_t2204 * __this, KeyValuePair_2_t2205  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11853(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2204 *, KeyValuePair_2_t2205 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11853_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11855_gshared (Dictionary_2_t2204 * __this, KeyValuePair_2_t2205  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11855(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2204 *, KeyValuePair_2_t2205 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11855_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11857_gshared (Dictionary_2_t2204 * __this, KeyValuePair_2U5BU5D_t2428* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11857(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2204 *, KeyValuePair_2U5BU5D_t2428*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11857_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11859_gshared (Dictionary_2_t2204 * __this, KeyValuePair_2_t2205  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11859(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2204 *, KeyValuePair_2_t2205 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11859_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11861_gshared (Dictionary_2_t2204 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11861(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11861_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11863_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11863(__this, method) (( Object_t * (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11863_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11865_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11865(__this, method) (( Object_t* (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11865_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11867_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11867(__this, method) (( Object_t * (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11867_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11869_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11869(__this, method) (( int32_t (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_get_Count_m11869_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m11871_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11871(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11871_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11873_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2204 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m11873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11875_gshared (Dictionary_2_t2204 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11875(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2204 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11875_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11877_gshared (Dictionary_2_t2204 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11877(__this, ___size, method) (( void (*) (Dictionary_2_t2204 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11877_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11879_gshared (Dictionary_2_t2204 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11879(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11879_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2205  Dictionary_2_make_pair_m11881_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11881(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2205  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m11881_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11883_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11883(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m11883_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m11885_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11885(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m11885_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11887_gshared (Dictionary_2_t2204 * __this, KeyValuePair_2U5BU5D_t2428* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11887(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2204 *, KeyValuePair_2U5BU5D_t2428*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11887_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m11889_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11889(__this, method) (( void (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_Resize_m11889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11891_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11891(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2204 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m11891_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m11893_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11893(__this, method) (( void (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_Clear_m11893_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11895_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11895(__this, ___key, method) (( bool (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11895_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11897_gshared (Dictionary_2_t2204 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11897(__this, ___value, method) (( bool (*) (Dictionary_2_t2204 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m11897_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11899_gshared (Dictionary_2_t2204 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11899(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2204 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2_GetObjectData_m11899_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11901_gshared (Dictionary_2_t2204 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11901(__this, ___sender, method) (( void (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11901_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11903_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11903(__this, ___key, method) (( bool (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11903_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11905_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11905(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2204 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11905_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2207 * Dictionary_2_get_Keys_m11907_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11907(__this, method) (( KeyCollection_t2207 * (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_get_Keys_m11907_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2211 * Dictionary_2_get_Values_m11909_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11909(__this, method) (( ValueCollection_t2211 * (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_get_Values_m11909_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11911_gshared (Dictionary_2_t2204 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11911(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11911_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m11913_gshared (Dictionary_2_t2204 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11913(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11913_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11915_gshared (Dictionary_2_t2204 * __this, KeyValuePair_2_t2205  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11915(__this, ___pair, method) (( bool (*) (Dictionary_2_t2204 *, KeyValuePair_2_t2205 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11915_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2209  Dictionary_2_GetEnumerator_m11917_gshared (Dictionary_2_t2204 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11917(__this, method) (( Enumerator_t2209  (*) (Dictionary_2_t2204 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11917_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m11919_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11919(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11919_gshared)(__this /* static, unused */, ___key, ___value, method)
