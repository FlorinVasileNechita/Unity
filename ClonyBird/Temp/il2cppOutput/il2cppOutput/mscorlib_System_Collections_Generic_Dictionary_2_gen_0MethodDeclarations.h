#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t103;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t322;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t2323;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t88;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t2031;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t350;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1952;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t2324;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t2325;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t2326;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t678;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m9457(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2__ctor_m9458_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m1277(__this, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9459_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9460(__this, ___dictionary, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9461_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m9462(__this, ___capacity, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9463_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9464(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9465_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9466(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2__ctor_m9467_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9468(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9469_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9470(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9472(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9473_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9474(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9475_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9476(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9477_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9478(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9479_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9480(__this, ___key, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9481_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9482(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9483_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9484(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9485_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9486(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2_t2030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9487_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9488(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t2030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9489_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9490(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t2325*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9491_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9492(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t2030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9493_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9494(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9495_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9496(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9497_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9498(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9499_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9500(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9501_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m9502(__this, method) (( int32_t (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Count_m9503_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m9504(__this, ___key, method) (( GUIStyle_t88 * (*) (Dictionary_2_t103 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9505_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9506(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, String_t*, GUIStyle_t88 *, const MethodInfo*))Dictionary_2_set_Item_m9507_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9508(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t103 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9509_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9510(__this, ___size, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9511_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9512(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9513_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9514(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2030  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t88 *, const MethodInfo*))Dictionary_2_make_pair_m9515_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9516(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t88 *, const MethodInfo*))Dictionary_2_pick_key_m9517_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9518(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t88 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t88 *, const MethodInfo*))Dictionary_2_pick_value_m9519_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9520(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t2325*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9521_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m9522(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Resize_m9523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m9524(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, String_t*, GUIStyle_t88 *, const MethodInfo*))Dictionary_2_Add_m9525_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m9526(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Clear_m9527_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9528(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9529_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9530(__this, ___value, method) (( bool (*) (Dictionary_2_t103 *, GUIStyle_t88 *, const MethodInfo*))Dictionary_2_ContainsValue_m9531_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9532(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2_GetObjectData_m9533_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9534(__this, ___sender, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9535_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m9536(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9537_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9538(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t103 *, String_t*, GUIStyle_t88 **, const MethodInfo*))Dictionary_2_TryGetValue_m9539_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m9540(__this, method) (( KeyCollection_t2031 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Keys_m9541_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m1278(__this, method) (( ValueCollection_t350 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Values_m9542_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9543(__this, ___key, method) (( String_t* (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9544_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9545(__this, ___value, method) (( GUIStyle_t88 * (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9546_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9547(__this, ___pair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t2030 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9548_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9549(__this, method) (( Enumerator_t2032  (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9550_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9551(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t88 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9552_gshared)(__this /* static, unused */, ___key, ___value, method)
