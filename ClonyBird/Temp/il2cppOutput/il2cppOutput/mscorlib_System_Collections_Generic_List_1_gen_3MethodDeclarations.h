#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t128;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t2344;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t892;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1306(__this, method) (( void (*) (List_1_t128 *, const MethodInfo*))List_1__ctor_m1345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m10051(__this, ___capacity, method) (( void (*) (List_1_t128 *, int32_t, const MethodInfo*))List_1__ctor_m9078_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m10052(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9080_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10053(__this, method) (( Object_t* (*) (List_1_t128 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10054(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t128 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10055(__this, method) (( Object_t * (*) (List_1_t128 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1538_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10056(__this, ___item, method) (( int32_t (*) (List_1_t128 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10057(__this, ___item, method) (( bool (*) (List_1_t128 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1546_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10058(__this, ___item, method) (( int32_t (*) (List_1_t128 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1547_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10059(__this, ___index, ___item, method) (( void (*) (List_1_t128 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1548_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10060(__this, ___item, method) (( void (*) (List_1_t128 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10061(__this, method) (( bool (*) (List_1_t128 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1551_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10062(__this, method) (( Object_t * (*) (List_1_t128 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1540_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10063(__this, ___index, method) (( Object_t * (*) (List_1_t128 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1542_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10064(__this, ___index, ___value, method) (( void (*) (List_1_t128 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1543_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m10065(__this, ___item, method) (( void (*) (List_1_t128 *, ByteU5BU5D_t130*, const MethodInfo*))List_1_Add_m1552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10066(__this, ___newCount, method) (( void (*) (List_1_t128 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9095_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m10067(__this, method) (( void (*) (List_1_t128 *, const MethodInfo*))List_1_Clear_m1545_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m10068(__this, ___item, method) (( bool (*) (List_1_t128 *, ByteU5BU5D_t130*, const MethodInfo*))List_1_Contains_m1553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10069(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t128 *, ByteU5BU5DU5BU5D_t892*, int32_t, const MethodInfo*))List_1_CopyTo_m1554_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m10070(__this, method) (( Enumerator_t2058  (*) (List_1_t128 *, const MethodInfo*))List_1_GetEnumerator_m9099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m10071(__this, ___item, method) (( int32_t (*) (List_1_t128 *, ByteU5BU5D_t130*, const MethodInfo*))List_1_IndexOf_m1557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10072(__this, ___start, ___delta, method) (( void (*) (List_1_t128 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9102_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10073(__this, ___index, method) (( void (*) (List_1_t128 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m10074(__this, ___index, ___item, method) (( void (*) (List_1_t128 *, int32_t, ByteU5BU5D_t130*, const MethodInfo*))List_1_Insert_m1558_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m10075(__this, ___item, method) (( bool (*) (List_1_t128 *, ByteU5BU5D_t130*, const MethodInfo*))List_1_Remove_m1555_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10076(__this, ___index, method) (( void (*) (List_1_t128 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1550_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m10077(__this, method) (( ByteU5BU5DU5BU5D_t892* (*) (List_1_t128 *, const MethodInfo*))List_1_ToArray_m9109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m10078(__this, method) (( int32_t (*) (List_1_t128 *, const MethodInfo*))List_1_get_Capacity_m9111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10079(__this, ___value, method) (( void (*) (List_1_t128 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m10080(__this, method) (( int32_t (*) (List_1_t128 *, const MethodInfo*))List_1_get_Count_m1539_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m10081(__this, ___index, method) (( ByteU5BU5D_t130* (*) (List_1_t128 *, int32_t, const MethodInfo*))List_1_get_Item_m1559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m10082(__this, ___index, ___value, method) (( void (*) (List_1_t128 *, int32_t, ByteU5BU5D_t130*, const MethodInfo*))List_1_set_Item_m1560_gshared)(__this, ___index, ___value, method)
