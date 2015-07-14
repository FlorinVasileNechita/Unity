#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t216;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t322;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t323;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t365;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t366;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1952;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t317;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t324;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t326;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t678;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m1346(__this, method) (( void (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2__ctor_m9458_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10868(__this, ___comparer, method) (( void (*) (Dictionary_2_t216 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9459_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m10869(__this, ___dictionary, method) (( void (*) (Dictionary_2_t216 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9461_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m10870(__this, ___capacity, method) (( void (*) (Dictionary_2_t216 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9463_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10871(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t216 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9465_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m10872(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t216 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2__ctor_m9467_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10873(__this, method) (( Object_t* (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9469_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10874(__this, method) (( Object_t* (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10875(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t216 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9473_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10876(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t216 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9475_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m10877(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t216 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9477_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m10878(__this, ___key, method) (( bool (*) (Dictionary_2_t216 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9479_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m10879(__this, ___key, method) (( void (*) (Dictionary_2_t216 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9481_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10880(__this, method) (( Object_t * (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9483_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10881(__this, method) (( bool (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9485_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10882(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t216 *, KeyValuePair_2_t325 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9487_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10883(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t216 *, KeyValuePair_2_t325 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9489_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10884(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t216 *, KeyValuePair_2U5BU5D_t324*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9491_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10885(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t216 *, KeyValuePair_2_t325 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9493_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10886(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t216 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9495_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10887(__this, method) (( Object_t * (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9497_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10888(__this, method) (( Object_t* (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9499_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10889(__this, method) (( Object_t * (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9501_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m10890(__this, method) (( int32_t (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_get_Count_m9503_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m10891(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t216 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9505_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m10892(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t216 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9507_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m10893(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t216 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9509_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m10894(__this, ___size, method) (( void (*) (Dictionary_2_t216 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9511_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m10895(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t216 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9513_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m10896(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t325  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9515_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m10897(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9517_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m10898(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9519_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m10899(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t216 *, KeyValuePair_2U5BU5D_t324*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9521_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m10900(__this, method) (( void (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_Resize_m9523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m10901(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t216 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m9525_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m10902(__this, method) (( void (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_Clear_m9527_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m10903(__this, ___key, method) (( bool (*) (Dictionary_2_t216 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9529_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m10904(__this, ___value, method) (( bool (*) (Dictionary_2_t216 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9531_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m10905(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t216 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2_GetObjectData_m9533_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m10906(__this, ___sender, method) (( void (*) (Dictionary_2_t216 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9535_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m10907(__this, ___key, method) (( bool (*) (Dictionary_2_t216 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9537_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m10908(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t216 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9539_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m1348(__this, method) (( KeyCollection_t365 * (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_get_Keys_m9541_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m1349(__this, method) (( ValueCollection_t366 * (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_get_Values_m9542_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m10909(__this, ___key, method) (( String_t* (*) (Dictionary_2_t216 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9544_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m10910(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t216 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9546_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m10911(__this, ___pair, method) (( bool (*) (Dictionary_2_t216 *, KeyValuePair_2_t325 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9548_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1347(__this, method) (( Enumerator_t364  (*) (Dictionary_2_t216 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9550_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m10912(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9552_gshared)(__this /* static, unused */, ___key, ___value, method)
