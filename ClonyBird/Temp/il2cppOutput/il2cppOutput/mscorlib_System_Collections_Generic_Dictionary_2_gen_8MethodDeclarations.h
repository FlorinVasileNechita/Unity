#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t109;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t322;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2310;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t2048;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2049;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1952;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t2332;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2333;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t2334;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t678;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
#define Dictionary_2__ctor_m9682(__this, method) (( void (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2__ctor_m9683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9684(__this, ___comparer, method) (( void (*) (Dictionary_2_t109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9685_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9686(__this, ___dictionary, method) (( void (*) (Dictionary_2_t109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9687_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2528(__this, ___capacity, method) (( void (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9688_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9689(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t109 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9690_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9691(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t109 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2__ctor_m9692_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9693(__this, method) (( Object_t* (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9694_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9695(__this, method) (( Object_t* (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9696_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9697(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9698_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9700_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9701(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9702_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9703(__this, ___key, method) (( bool (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9704_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9705(__this, ___key, method) (( void (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9706_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9707(__this, method) (( Object_t * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9708_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9709(__this, method) (( bool (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9710_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9711(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t109 *, KeyValuePair_2_t2047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9712_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9713(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t109 *, KeyValuePair_2_t2047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9714_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9715(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, KeyValuePair_2U5BU5D_t2333*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9716_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9717(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t109 *, KeyValuePair_2_t2047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9718_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9719(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9720_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9721(__this, method) (( Object_t * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9722_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9723(__this, method) (( Object_t* (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9724_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9725(__this, method) (( Object_t * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9726_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m9727(__this, method) (( int32_t (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_get_Count_m9728_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m9729(__this, ___key, method) (( int32_t (*) (Dictionary_2_t109 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9730_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9731(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9732_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9733(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t109 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9734_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9735(__this, ___size, method) (( void (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9736_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9737(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9738_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9739(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2047  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9740_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9741(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9742_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9743(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9744_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9745(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, KeyValuePair_2U5BU5D_t2333*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9746_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m9747(__this, method) (( void (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_Resize_m9748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m9749(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m9750_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m9751(__this, method) (( void (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_Clear_m9752_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9753(__this, ___key, method) (( bool (*) (Dictionary_2_t109 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9755(__this, ___value, method) (( bool (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9756_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9757(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t109 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2_GetObjectData_m9758_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9759(__this, ___sender, method) (( void (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9760_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m9761(__this, ___key, method) (( bool (*) (Dictionary_2_t109 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9762_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9763(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t109 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9764_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m9765(__this, method) (( KeyCollection_t2048 * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_get_Keys_m9766_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m9767(__this, method) (( ValueCollection_t2049 * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_get_Values_m9768_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9769(__this, ___key, method) (( String_t* (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9770_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9771(__this, ___value, method) (( int32_t (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9772_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9773(__this, ___pair, method) (( bool (*) (Dictionary_2_t109 *, KeyValuePair_2_t2047 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9774_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9775(__this, method) (( Enumerator_t2050  (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9776_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9777(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9778_gshared)(__this /* static, unused */, ___key, ___value, method)
