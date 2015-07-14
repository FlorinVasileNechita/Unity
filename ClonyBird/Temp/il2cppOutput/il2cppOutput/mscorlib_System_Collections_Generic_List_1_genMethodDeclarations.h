#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t215;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t465;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Object[]
struct ObjectU5BU5D_t29;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1345_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1__ctor_m1345(__this, method) (( void (*) (List_1_t215 *, const MethodInfo*))List_1__ctor_m1345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9078_gshared (List_1_t215 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9078(__this, ___capacity, method) (( void (*) (List_1_t215 *, int32_t, const MethodInfo*))List_1__ctor_m9078_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m9080_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9080(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9080_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1556_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1556(__this, method) (( Object_t* (*) (List_1_t215 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1541_gshared (List_1_t215 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1541(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t215 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1538_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1538(__this, method) (( Object_t * (*) (List_1_t215 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1538_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1544_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1544(__this, ___item, method) (( int32_t (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1546_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1546(__this, ___item, method) (( bool (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1546_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1547_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1547(__this, ___item, method) (( int32_t (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1547_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1548_gshared (List_1_t215 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1548(__this, ___index, ___item, method) (( void (*) (List_1_t215 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1548_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1549_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1549(__this, ___item, method) (( void (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1549_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1551_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1551(__this, method) (( bool (*) (List_1_t215 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1551_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1540_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1540(__this, method) (( Object_t * (*) (List_1_t215 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1540_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1542_gshared (List_1_t215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1542(__this, ___index, method) (( Object_t * (*) (List_1_t215 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1542_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1543_gshared (List_1_t215 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1543(__this, ___index, ___value, method) (( void (*) (List_1_t215 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1543_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1552_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1552(__this, ___item, method) (( void (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_Add_m1552_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9095_gshared (List_1_t215 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9095(__this, ___newCount, method) (( void (*) (List_1_t215 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9095_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1545_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_Clear_m1545(__this, method) (( void (*) (List_1_t215 *, const MethodInfo*))List_1_Clear_m1545_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1553_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1553(__this, ___item, method) (( bool (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_Contains_m1553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1554_gshared (List_1_t215 * __this, ObjectU5BU5D_t29* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1554(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t215 *, ObjectU5BU5D_t29*, int32_t, const MethodInfo*))List_1_CopyTo_m1554_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1978  List_1_GetEnumerator_m9099_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9099(__this, method) (( Enumerator_t1978  (*) (List_1_t215 *, const MethodInfo*))List_1_GetEnumerator_m9099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1557_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1557(__this, ___item, method) (( int32_t (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9102_gshared (List_1_t215 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9102(__this, ___start, ___delta, method) (( void (*) (List_1_t215 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9102_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9104_gshared (List_1_t215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9104(__this, ___index, method) (( void (*) (List_1_t215 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1558_gshared (List_1_t215 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1558(__this, ___index, ___item, method) (( void (*) (List_1_t215 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1558_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1555_gshared (List_1_t215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1555(__this, ___item, method) (( bool (*) (List_1_t215 *, Object_t *, const MethodInfo*))List_1_Remove_m1555_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1550_gshared (List_1_t215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1550(__this, ___index, method) (( void (*) (List_1_t215 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1550_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t29* List_1_ToArray_m9109_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_ToArray_m9109(__this, method) (( ObjectU5BU5D_t29* (*) (List_1_t215 *, const MethodInfo*))List_1_ToArray_m9109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9111_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9111(__this, method) (( int32_t (*) (List_1_t215 *, const MethodInfo*))List_1_get_Capacity_m9111_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9113_gshared (List_1_t215 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9113(__this, ___value, method) (( void (*) (List_1_t215 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1539_gshared (List_1_t215 * __this, const MethodInfo* method);
#define List_1_get_Count_m1539(__this, method) (( int32_t (*) (List_1_t215 *, const MethodInfo*))List_1_get_Count_m1539_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1559_gshared (List_1_t215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1559(__this, ___index, method) (( Object_t * (*) (List_1_t215 *, int32_t, const MethodInfo*))List_1_get_Item_m1559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1560_gshared (List_1_t215 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1560(__this, ___index, ___value, method) (( void (*) (List_1_t215 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1560_gshared)(__this, ___index, ___value, method)
