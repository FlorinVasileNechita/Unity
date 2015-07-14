#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t202;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t201;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDesc>
struct IEnumerator_1_t2359;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t2101;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m10558(__this, method) (( void (*) (List_1_t202 *, const MethodInfo*))List_1__ctor_m1345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor(System.Int32)
#define List_1__ctor_m10559(__this, ___capacity, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1__ctor_m9078_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.cctor()
#define List_1__cctor_m10560(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9080_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10561(__this, method) (( Object_t* (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10562(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t202 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10563(__this, method) (( Object_t * (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1538_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10564(__this, ___item, method) (( int32_t (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10565(__this, ___item, method) (( bool (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1546_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10566(__this, ___item, method) (( int32_t (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1547_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10567(__this, ___index, ___item, method) (( void (*) (List_1_t202 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1548_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10568(__this, ___item, method) (( void (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10569(__this, method) (( bool (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1551_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10570(__this, method) (( Object_t * (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1540_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10571(__this, ___index, method) (( Object_t * (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1542_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10572(__this, ___index, ___value, method) (( void (*) (List_1_t202 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1543_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Add(T)
#define List_1_Add_m10573(__this, ___item, method) (( void (*) (List_1_t202 *, MatchDesc_t201 *, const MethodInfo*))List_1_Add_m1552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10574(__this, ___newCount, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9095_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Clear()
#define List_1_Clear_m10575(__this, method) (( void (*) (List_1_t202 *, const MethodInfo*))List_1_Clear_m1545_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Contains(T)
#define List_1_Contains_m10576(__this, ___item, method) (( bool (*) (List_1_t202 *, MatchDesc_t201 *, const MethodInfo*))List_1_Contains_m1553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10577(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t202 *, MatchDescU5BU5D_t2101*, int32_t, const MethodInfo*))List_1_CopyTo_m1554_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m10578(__this, method) (( Enumerator_t2102  (*) (List_1_t202 *, const MethodInfo*))List_1_GetEnumerator_m9099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::IndexOf(T)
#define List_1_IndexOf_m10579(__this, ___item, method) (( int32_t (*) (List_1_t202 *, MatchDesc_t201 *, const MethodInfo*))List_1_IndexOf_m1557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10580(__this, ___start, ___delta, method) (( void (*) (List_1_t202 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9102_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10581(__this, ___index, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Insert(System.Int32,T)
#define List_1_Insert_m10582(__this, ___index, ___item, method) (( void (*) (List_1_t202 *, int32_t, MatchDesc_t201 *, const MethodInfo*))List_1_Insert_m1558_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::Remove(T)
#define List_1_Remove_m10583(__this, ___item, method) (( bool (*) (List_1_t202 *, MatchDesc_t201 *, const MethodInfo*))List_1_Remove_m1555_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10584(__this, ___index, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1550_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::ToArray()
#define List_1_ToArray_m10585(__this, method) (( MatchDescU5BU5D_t2101* (*) (List_1_t202 *, const MethodInfo*))List_1_ToArray_m9109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Capacity()
#define List_1_get_Capacity_m10586(__this, method) (( int32_t (*) (List_1_t202 *, const MethodInfo*))List_1_get_Capacity_m9111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10587(__this, ___value, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m10588(__this, method) (( int32_t (*) (List_1_t202 *, const MethodInfo*))List_1_get_Count_m1539_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Item(System.Int32)
#define List_1_get_Item_m10589(__this, ___index, method) (( MatchDesc_t201 * (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_get_Item_m1559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::set_Item(System.Int32,T)
#define List_1_set_Item_m10590(__this, ___index, ___value, method) (( void (*) (List_1_t202 *, int32_t, MatchDesc_t201 *, const MethodInfo*))List_1_set_Item_m1560_gshared)(__this, ___index, ___value, method)
