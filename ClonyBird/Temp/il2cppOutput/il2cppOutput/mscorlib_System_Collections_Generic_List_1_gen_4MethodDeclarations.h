#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t179;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2345;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t314;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10128_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1__ctor_m10128(__this, method) (( void (*) (List_1_t179 *, const MethodInfo*))List_1__ctor_m10128_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1317_gshared (List_1_t179 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1317(__this, ___capacity, method) (( void (*) (List_1_t179 *, int32_t, const MethodInfo*))List_1__ctor_m1317_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10129_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10129(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10129_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10130_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10130(__this, method) (( Object_t* (*) (List_1_t179 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10130_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10131_gshared (List_1_t179 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10131(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t179 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10131_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10132_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10132(__this, method) (( Object_t * (*) (List_1_t179 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10132_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10133_gshared (List_1_t179 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10133(__this, ___item, method) (( int32_t (*) (List_1_t179 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10133_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10134_gshared (List_1_t179 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10134(__this, ___item, method) (( bool (*) (List_1_t179 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10134_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10135_gshared (List_1_t179 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10135(__this, ___item, method) (( int32_t (*) (List_1_t179 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10135_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10136_gshared (List_1_t179 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10136(__this, ___index, ___item, method) (( void (*) (List_1_t179 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10136_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10137_gshared (List_1_t179 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10137(__this, ___item, method) (( void (*) (List_1_t179 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10137_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10138_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10138(__this, method) (( bool (*) (List_1_t179 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10138_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10139_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10139(__this, method) (( Object_t * (*) (List_1_t179 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10139_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10140_gshared (List_1_t179 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10140(__this, ___index, method) (( Object_t * (*) (List_1_t179 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10140_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10141_gshared (List_1_t179 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10141(__this, ___index, ___value, method) (( void (*) (List_1_t179 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10141_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10142_gshared (List_1_t179 * __this, UIVertex_t186  ___item, const MethodInfo* method);
#define List_1_Add_m10142(__this, ___item, method) (( void (*) (List_1_t179 *, UIVertex_t186 , const MethodInfo*))List_1_Add_m10142_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10143_gshared (List_1_t179 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10143(__this, ___newCount, method) (( void (*) (List_1_t179 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10143_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10144_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_Clear_m10144(__this, method) (( void (*) (List_1_t179 *, const MethodInfo*))List_1_Clear_m10144_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10145_gshared (List_1_t179 * __this, UIVertex_t186  ___item, const MethodInfo* method);
#define List_1_Contains_m10145(__this, ___item, method) (( bool (*) (List_1_t179 *, UIVertex_t186 , const MethodInfo*))List_1_Contains_m10145_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10146_gshared (List_1_t179 * __this, UIVertexU5BU5D_t314* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10146(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t179 *, UIVertexU5BU5D_t314*, int32_t, const MethodInfo*))List_1_CopyTo_m10146_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2066  List_1_GetEnumerator_m10147_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10147(__this, method) (( Enumerator_t2066  (*) (List_1_t179 *, const MethodInfo*))List_1_GetEnumerator_m10147_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10148_gshared (List_1_t179 * __this, UIVertex_t186  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10148(__this, ___item, method) (( int32_t (*) (List_1_t179 *, UIVertex_t186 , const MethodInfo*))List_1_IndexOf_m10148_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10149_gshared (List_1_t179 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10149(__this, ___start, ___delta, method) (( void (*) (List_1_t179 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10149_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10150_gshared (List_1_t179 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10150(__this, ___index, method) (( void (*) (List_1_t179 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10150_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10151_gshared (List_1_t179 * __this, int32_t ___index, UIVertex_t186  ___item, const MethodInfo* method);
#define List_1_Insert_m10151(__this, ___index, ___item, method) (( void (*) (List_1_t179 *, int32_t, UIVertex_t186 , const MethodInfo*))List_1_Insert_m10151_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10152_gshared (List_1_t179 * __this, UIVertex_t186  ___item, const MethodInfo* method);
#define List_1_Remove_m10152(__this, ___item, method) (( bool (*) (List_1_t179 *, UIVertex_t186 , const MethodInfo*))List_1_Remove_m10152_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10153_gshared (List_1_t179 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10153(__this, ___index, method) (( void (*) (List_1_t179 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10153_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t314* List_1_ToArray_m10154_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_ToArray_m10154(__this, method) (( UIVertexU5BU5D_t314* (*) (List_1_t179 *, const MethodInfo*))List_1_ToArray_m10154_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10155_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10155(__this, method) (( int32_t (*) (List_1_t179 *, const MethodInfo*))List_1_get_Capacity_m10155_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10156_gshared (List_1_t179 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10156(__this, ___value, method) (( void (*) (List_1_t179 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10156_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10157_gshared (List_1_t179 * __this, const MethodInfo* method);
#define List_1_get_Count_m10157(__this, method) (( int32_t (*) (List_1_t179 *, const MethodInfo*))List_1_get_Count_m10157_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t186  List_1_get_Item_m10158_gshared (List_1_t179 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10158(__this, ___index, method) (( UIVertex_t186  (*) (List_1_t179 *, int32_t, const MethodInfo*))List_1_get_Item_m10158_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10159_gshared (List_1_t179 * __this, int32_t ___index, UIVertex_t186  ___value, const MethodInfo* method);
#define List_1_set_Item_m10159(__this, ___index, ___value, method) (( void (*) (List_1_t179 *, int32_t, UIVertex_t186 , const MethodInfo*))List_1_set_Item_m10159_gshared)(__this, ___index, ___value, method)
