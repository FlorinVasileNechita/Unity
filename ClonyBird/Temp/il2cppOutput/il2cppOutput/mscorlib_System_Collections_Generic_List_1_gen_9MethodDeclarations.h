#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t401;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t2410;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Type[]
struct TypeU5BU5D_t224;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1394(__this, method) (( void (*) (List_1_t401 *, const MethodInfo*))List_1__ctor_m1345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m11599(__this, ___capacity, method) (( void (*) (List_1_t401 *, int32_t, const MethodInfo*))List_1__ctor_m9078_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m11600(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9080_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11601(__this, method) (( Object_t* (*) (List_1_t401 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11602(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t401 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11603(__this, method) (( Object_t * (*) (List_1_t401 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1538_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11604(__this, ___item, method) (( int32_t (*) (List_1_t401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11605(__this, ___item, method) (( bool (*) (List_1_t401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1546_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11606(__this, ___item, method) (( int32_t (*) (List_1_t401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1547_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11607(__this, ___index, ___item, method) (( void (*) (List_1_t401 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1548_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11608(__this, ___item, method) (( void (*) (List_1_t401 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11609(__this, method) (( bool (*) (List_1_t401 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1551_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11610(__this, method) (( Object_t * (*) (List_1_t401 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1540_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11611(__this, ___index, method) (( Object_t * (*) (List_1_t401 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1542_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11612(__this, ___index, ___value, method) (( void (*) (List_1_t401 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1543_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m11613(__this, ___item, method) (( void (*) (List_1_t401 *, Type_t *, const MethodInfo*))List_1_Add_m1552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11614(__this, ___newCount, method) (( void (*) (List_1_t401 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9095_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m11615(__this, method) (( void (*) (List_1_t401 *, const MethodInfo*))List_1_Clear_m1545_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m11616(__this, ___item, method) (( bool (*) (List_1_t401 *, Type_t *, const MethodInfo*))List_1_Contains_m1553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11617(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t401 *, TypeU5BU5D_t224*, int32_t, const MethodInfo*))List_1_CopyTo_m1554_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m11618(__this, method) (( Enumerator_t2183  (*) (List_1_t401 *, const MethodInfo*))List_1_GetEnumerator_m9099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m11619(__this, ___item, method) (( int32_t (*) (List_1_t401 *, Type_t *, const MethodInfo*))List_1_IndexOf_m1557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11620(__this, ___start, ___delta, method) (( void (*) (List_1_t401 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9102_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11621(__this, ___index, method) (( void (*) (List_1_t401 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m11622(__this, ___index, ___item, method) (( void (*) (List_1_t401 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m1558_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m11623(__this, ___item, method) (( bool (*) (List_1_t401 *, Type_t *, const MethodInfo*))List_1_Remove_m1555_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11624(__this, ___index, method) (( void (*) (List_1_t401 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1550_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1395(__this, method) (( TypeU5BU5D_t224* (*) (List_1_t401 *, const MethodInfo*))List_1_ToArray_m9109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m11625(__this, method) (( int32_t (*) (List_1_t401 *, const MethodInfo*))List_1_get_Capacity_m9111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11626(__this, ___value, method) (( void (*) (List_1_t401 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m11627(__this, method) (( int32_t (*) (List_1_t401 *, const MethodInfo*))List_1_get_Count_m1539_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m11628(__this, ___index, method) (( Type_t * (*) (List_1_t401 *, int32_t, const MethodInfo*))List_1_get_Item_m1559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m11629(__this, ___index, ___value, method) (( void (*) (List_1_t401 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m1560_gshared)(__this, ___index, ___value, method)
