#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1485;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1306;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t2437;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t2291;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12499(__this, method) (( void (*) (List_1_t1485 *, const MethodInfo*))List_1__ctor_m1345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m8190(__this, ___capacity, method) (( void (*) (List_1_t1485 *, int32_t, const MethodInfo*))List_1__ctor_m9078_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m12500(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9080_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12501(__this, method) (( Object_t* (*) (List_1_t1485 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12502(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1485 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12503(__this, method) (( Object_t * (*) (List_1_t1485 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1538_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12504(__this, ___item, method) (( int32_t (*) (List_1_t1485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12505(__this, ___item, method) (( bool (*) (List_1_t1485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1546_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12506(__this, ___item, method) (( int32_t (*) (List_1_t1485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1547_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12507(__this, ___index, ___item, method) (( void (*) (List_1_t1485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1548_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12508(__this, ___item, method) (( void (*) (List_1_t1485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12509(__this, method) (( bool (*) (List_1_t1485 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1551_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12510(__this, method) (( Object_t * (*) (List_1_t1485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1540_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12511(__this, ___index, method) (( Object_t * (*) (List_1_t1485 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1542_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12512(__this, ___index, ___value, method) (( void (*) (List_1_t1485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1543_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m12513(__this, ___item, method) (( void (*) (List_1_t1485 *, StrongName_t1306 *, const MethodInfo*))List_1_Add_m1552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12514(__this, ___newCount, method) (( void (*) (List_1_t1485 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9095_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m12515(__this, method) (( void (*) (List_1_t1485 *, const MethodInfo*))List_1_Clear_m1545_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m12516(__this, ___item, method) (( bool (*) (List_1_t1485 *, StrongName_t1306 *, const MethodInfo*))List_1_Contains_m1553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12517(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1485 *, StrongNameU5BU5D_t2291*, int32_t, const MethodInfo*))List_1_CopyTo_m1554_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m12518(__this, method) (( Enumerator_t2292  (*) (List_1_t1485 *, const MethodInfo*))List_1_GetEnumerator_m9099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m12519(__this, ___item, method) (( int32_t (*) (List_1_t1485 *, StrongName_t1306 *, const MethodInfo*))List_1_IndexOf_m1557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12520(__this, ___start, ___delta, method) (( void (*) (List_1_t1485 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9102_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12521(__this, ___index, method) (( void (*) (List_1_t1485 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m12522(__this, ___index, ___item, method) (( void (*) (List_1_t1485 *, int32_t, StrongName_t1306 *, const MethodInfo*))List_1_Insert_m1558_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m12523(__this, ___item, method) (( bool (*) (List_1_t1485 *, StrongName_t1306 *, const MethodInfo*))List_1_Remove_m1555_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12524(__this, ___index, method) (( void (*) (List_1_t1485 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1550_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m12525(__this, method) (( StrongNameU5BU5D_t2291* (*) (List_1_t1485 *, const MethodInfo*))List_1_ToArray_m9109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m12526(__this, method) (( int32_t (*) (List_1_t1485 *, const MethodInfo*))List_1_get_Capacity_m9111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12527(__this, ___value, method) (( void (*) (List_1_t1485 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m12528(__this, method) (( int32_t (*) (List_1_t1485 *, const MethodInfo*))List_1_get_Count_m1539_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m12529(__this, ___index, method) (( StrongName_t1306 * (*) (List_1_t1485 *, int32_t, const MethodInfo*))List_1_get_Item_m1559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m12530(__this, ___index, ___value, method) (( void (*) (List_1_t1485 *, int32_t, StrongName_t1306 *, const MethodInfo*))List_1_set_Item_m1560_gshared)(__this, ___index, ___value, method)
