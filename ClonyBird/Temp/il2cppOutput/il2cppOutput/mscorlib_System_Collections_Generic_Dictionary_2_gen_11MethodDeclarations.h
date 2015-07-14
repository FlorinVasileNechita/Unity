#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2035;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t323;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2310;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2038;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2042;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2017;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2335;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2336;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2337;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t678;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9683_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9683(__this, method) (( void (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2__ctor_m9683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9685_gshared (Dictionary_2_t2035 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9685(__this, ___comparer, method) (( void (*) (Dictionary_2_t2035 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9685_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9687_gshared (Dictionary_2_t2035 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9687(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2035 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9687_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9688_gshared (Dictionary_2_t2035 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9688(__this, ___capacity, method) (( void (*) (Dictionary_2_t2035 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9688_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9690_gshared (Dictionary_2_t2035 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9690(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2035 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9690_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9692_gshared (Dictionary_2_t2035 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9692(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2035 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2__ctor_m9692_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9694_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9694(__this, method) (( Object_t* (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9694_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9696_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9696(__this, method) (( Object_t* (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9696_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9698_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9698(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9698_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9700_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9700(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2035 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9700_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9702_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9702(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2035 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9702_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9704_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9704(__this, ___key, method) (( bool (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9704_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9706_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9706(__this, ___key, method) (( void (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9706_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9708_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9708(__this, method) (( Object_t * (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9708_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9710_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9710(__this, method) (( bool (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9710_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9712_gshared (Dictionary_2_t2035 * __this, KeyValuePair_2_t2036  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9712(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2035 *, KeyValuePair_2_t2036 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9712_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9714_gshared (Dictionary_2_t2035 * __this, KeyValuePair_2_t2036  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9714(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2035 *, KeyValuePair_2_t2036 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9714_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9716_gshared (Dictionary_2_t2035 * __this, KeyValuePair_2U5BU5D_t2336* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2035 *, KeyValuePair_2U5BU5D_t2336*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9716_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9718_gshared (Dictionary_2_t2035 * __this, KeyValuePair_2_t2036  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9718(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2035 *, KeyValuePair_2_t2036 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9718_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9720_gshared (Dictionary_2_t2035 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9720(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2035 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9720_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9722_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9722(__this, method) (( Object_t * (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9722_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9724_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9724(__this, method) (( Object_t* (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9724_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9726_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9726(__this, method) (( Object_t * (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9726_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9728_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9728(__this, method) (( int32_t (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_get_Count_m9728_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9730_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9730(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9730_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9732_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9732(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2035 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9732_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9734_gshared (Dictionary_2_t2035 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9734(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2035 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9734_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9736_gshared (Dictionary_2_t2035 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9736(__this, ___size, method) (( void (*) (Dictionary_2_t2035 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9736_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9738_gshared (Dictionary_2_t2035 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9738(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2035 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9738_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2036  Dictionary_2_make_pair_m9740_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9740(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2036  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9740_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9742_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9742(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9742_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9744_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9744(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9744_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9746_gshared (Dictionary_2_t2035 * __this, KeyValuePair_2U5BU5D_t2336* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9746(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2035 *, KeyValuePair_2U5BU5D_t2336*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9746_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9748_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9748(__this, method) (( void (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_Resize_m9748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9750_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9750(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2035 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9750_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9752_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9752(__this, method) (( void (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_Clear_m9752_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9754_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9754(__this, ___key, method) (( bool (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9756_gshared (Dictionary_2_t2035 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9756(__this, ___value, method) (( bool (*) (Dictionary_2_t2035 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9756_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9758_gshared (Dictionary_2_t2035 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9758(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2035 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2_GetObjectData_m9758_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9760_gshared (Dictionary_2_t2035 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9760(__this, ___sender, method) (( void (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9760_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9762_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9762(__this, ___key, method) (( bool (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9762_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9764_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9764(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2035 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9764_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2038 * Dictionary_2_get_Keys_m9766_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9766(__this, method) (( KeyCollection_t2038 * (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_get_Keys_m9766_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2042 * Dictionary_2_get_Values_m9768_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9768(__this, method) (( ValueCollection_t2042 * (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_get_Values_m9768_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9770_gshared (Dictionary_2_t2035 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9770(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9770_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9772_gshared (Dictionary_2_t2035 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9772(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2035 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9772_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9774_gshared (Dictionary_2_t2035 * __this, KeyValuePair_2_t2036  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9774(__this, ___pair, method) (( bool (*) (Dictionary_2_t2035 *, KeyValuePair_2_t2036 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9774_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2040  Dictionary_2_GetEnumerator_m9776_gshared (Dictionary_2_t2035 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9776(__this, method) (( Enumerator_t2040  (*) (Dictionary_2_t2035 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9776_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m9778_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9778(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9778_gshared)(__this /* static, unused */, ___key, ___value, method)
