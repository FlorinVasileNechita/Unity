#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct KeyCollection_t2126;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t210;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Types.NetworkID>
struct IEnumerator_1_t2370;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// UnityEngine.Networking.Types.NetworkID[]
struct NetworkIDU5BU5D_t2103;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13MethodDeclarations.h"
#define KeyCollection__ctor_m10801(__this, ___dictionary, method) (( void (*) (KeyCollection_t2126 *, Dictionary_2_t210 *, const MethodInfo*))KeyCollection__ctor_m10710_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10802(__this, ___item, method) (( void (*) (KeyCollection_t2126 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10711_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10803(__this, method) (( void (*) (KeyCollection_t2126 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10712_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10804(__this, ___item, method) (( bool (*) (KeyCollection_t2126 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10713_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10805(__this, ___item, method) (( bool (*) (KeyCollection_t2126 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10714_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10806(__this, method) (( Object_t* (*) (KeyCollection_t2126 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10715_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m10807(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2126 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m10716_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10808(__this, method) (( Object_t * (*) (KeyCollection_t2126 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10809(__this, method) (( bool (*) (KeyCollection_t2126 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10718_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m10810(__this, method) (( Object_t * (*) (KeyCollection_t2126 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m10719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m10811(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2126 *, NetworkIDU5BU5D_t2103*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m10720_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#define KeyCollection_GetEnumerator_m10812(__this, method) (( Enumerator_t2371  (*) (KeyCollection_t2126 *, const MethodInfo*))KeyCollection_GetEnumerator_m10721_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#define KeyCollection_get_Count_m10813(__this, method) (( int32_t (*) (KeyCollection_t2126 *, const MethodInfo*))KeyCollection_get_Count_m10722_gshared)(__this, method)
