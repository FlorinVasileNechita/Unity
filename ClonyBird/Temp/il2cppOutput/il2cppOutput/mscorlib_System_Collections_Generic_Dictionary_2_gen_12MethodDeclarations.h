#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2079;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t323;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2348;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2083;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2087;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2017;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2352;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2353;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2354;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t678;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m10277_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10277(__this, method) (( void (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2__ctor_m10277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10279_gshared (Dictionary_2_t2079 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10279(__this, ___comparer, method) (( void (*) (Dictionary_2_t2079 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10279_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10281_gshared (Dictionary_2_t2079 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10281(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2079 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10281_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10283_gshared (Dictionary_2_t2079 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10283(__this, ___capacity, method) (( void (*) (Dictionary_2_t2079 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10283_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10285_gshared (Dictionary_2_t2079 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10285(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2079 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10285_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10287_gshared (Dictionary_2_t2079 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10287(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2079 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2__ctor_m10287_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10289_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10289(__this, method) (( Object_t* (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10289_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10291_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10291(__this, method) (( Object_t* (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10293_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10293(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10293_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10295_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10295(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2079 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10295_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10297_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10297(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2079 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10297_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10299_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10299(__this, ___key, method) (( bool (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10299_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10301_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10301(__this, ___key, method) (( void (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10301_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10303_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10303(__this, method) (( Object_t * (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10303_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10305_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10305(__this, method) (( bool (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10305_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10307_gshared (Dictionary_2_t2079 * __this, KeyValuePair_2_t2080  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10307(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2079 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10307_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10309_gshared (Dictionary_2_t2079 * __this, KeyValuePair_2_t2080  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10309(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2079 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10309_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10311_gshared (Dictionary_2_t2079 * __this, KeyValuePair_2U5BU5D_t2353* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10311(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2079 *, KeyValuePair_2U5BU5D_t2353*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10311_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10313_gshared (Dictionary_2_t2079 * __this, KeyValuePair_2_t2080  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10313(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2079 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10313_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10315_gshared (Dictionary_2_t2079 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10315(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2079 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10315_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10317_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10317(__this, method) (( Object_t * (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10317_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10319_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10319(__this, method) (( Object_t* (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10319_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10321_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10321(__this, method) (( Object_t * (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10323_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10323(__this, method) (( int32_t (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_get_Count_m10323_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m10325_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10325(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10325_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10327_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10327(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2079 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m10327_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10329_gshared (Dictionary_2_t2079 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10329(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2079 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10329_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10331_gshared (Dictionary_2_t2079 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10331(__this, ___size, method) (( void (*) (Dictionary_2_t2079 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10331_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10333_gshared (Dictionary_2_t2079 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10333(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2079 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10333_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2080  Dictionary_2_make_pair_m10335_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10335(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2080  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m10335_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10337_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10337(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m10337_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m10339_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10339(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m10339_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10341_gshared (Dictionary_2_t2079 * __this, KeyValuePair_2U5BU5D_t2353* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10341(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2079 *, KeyValuePair_2U5BU5D_t2353*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10341_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m10343_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10343(__this, method) (( void (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_Resize_m10343_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10345_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10345(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2079 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m10345_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m10347_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10347(__this, method) (( void (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_Clear_m10347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10349_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10349(__this, ___key, method) (( bool (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10349_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10351_gshared (Dictionary_2_t2079 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10351(__this, ___value, method) (( bool (*) (Dictionary_2_t2079 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m10351_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10353_gshared (Dictionary_2_t2079 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10353(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2079 *, SerializationInfo_t337 *, StreamingContext_t338 , const MethodInfo*))Dictionary_2_GetObjectData_m10353_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10355_gshared (Dictionary_2_t2079 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10355(__this, ___sender, method) (( void (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10355_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10357_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10357(__this, ___key, method) (( bool (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10357_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10359_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10359(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2079 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m10359_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2083 * Dictionary_2_get_Keys_m10361_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10361(__this, method) (( KeyCollection_t2083 * (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_get_Keys_m10361_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2087 * Dictionary_2_get_Values_m10363_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10363(__this, method) (( ValueCollection_t2087 * (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_get_Values_m10363_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10365_gshared (Dictionary_2_t2079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10365(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10365_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m10367_gshared (Dictionary_2_t2079 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10367(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2079 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10367_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10369_gshared (Dictionary_2_t2079 * __this, KeyValuePair_2_t2080  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10369(__this, ___pair, method) (( bool (*) (Dictionary_2_t2079 *, KeyValuePair_2_t2080 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10369_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2085  Dictionary_2_GetEnumerator_m10371_gshared (Dictionary_2_t2079 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10371(__this, method) (( Enumerator_t2085  (*) (Dictionary_2_t2079 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10371_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t679  Dictionary_2_U3CCopyToU3Em__0_m10373_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10373(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10373_gshared)(__this /* static, unused */, ___key, ___value, method)
