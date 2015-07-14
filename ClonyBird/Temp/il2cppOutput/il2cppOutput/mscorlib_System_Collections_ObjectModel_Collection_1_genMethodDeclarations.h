#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2257;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Object[]
struct ObjectU5BU5D_t29;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t465;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t472;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12309_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12309(__this, method) (( void (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1__ctor_m12309_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12310_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12310(__this, method) (( bool (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12310_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12311_gshared (Collection_1_t2257 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12311(__this, ___array, ___index, method) (( void (*) (Collection_1_t2257 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12311_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12312_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12312(__this, method) (( Object_t * (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12312_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12313_gshared (Collection_1_t2257 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12313(__this, ___value, method) (( int32_t (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12313_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12314_gshared (Collection_1_t2257 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12314(__this, ___value, method) (( bool (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12314_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12315_gshared (Collection_1_t2257 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12315(__this, ___value, method) (( int32_t (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12315_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12316_gshared (Collection_1_t2257 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12316(__this, ___index, ___value, method) (( void (*) (Collection_1_t2257 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12316_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12317_gshared (Collection_1_t2257 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12317(__this, ___value, method) (( void (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12317_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12318_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12318(__this, method) (( Object_t * (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12318_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12319_gshared (Collection_1_t2257 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12319(__this, ___index, method) (( Object_t * (*) (Collection_1_t2257 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12319_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12320_gshared (Collection_1_t2257 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12320(__this, ___index, ___value, method) (( void (*) (Collection_1_t2257 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12320_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12321_gshared (Collection_1_t2257 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12321(__this, ___item, method) (( void (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_Add_m12321_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12322_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12322(__this, method) (( void (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1_Clear_m12322_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12323_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12323(__this, method) (( void (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1_ClearItems_m12323_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12324_gshared (Collection_1_t2257 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12324(__this, ___item, method) (( bool (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12324_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12325_gshared (Collection_1_t2257 * __this, ObjectU5BU5D_t29* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12325(__this, ___array, ___index, method) (( void (*) (Collection_1_t2257 *, ObjectU5BU5D_t29*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12325_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12326_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12326(__this, method) (( Object_t* (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1_GetEnumerator_m12326_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12327_gshared (Collection_1_t2257 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12327(__this, ___item, method) (( int32_t (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12327_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12328_gshared (Collection_1_t2257 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12328(__this, ___index, ___item, method) (( void (*) (Collection_1_t2257 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12328_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12329_gshared (Collection_1_t2257 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12329(__this, ___index, ___item, method) (( void (*) (Collection_1_t2257 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12329_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12330_gshared (Collection_1_t2257 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12330(__this, ___item, method) (( bool (*) (Collection_1_t2257 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12330_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12331_gshared (Collection_1_t2257 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12331(__this, ___index, method) (( void (*) (Collection_1_t2257 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12331_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12332_gshared (Collection_1_t2257 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12332(__this, ___index, method) (( void (*) (Collection_1_t2257 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12332_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12333_gshared (Collection_1_t2257 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12333(__this, method) (( int32_t (*) (Collection_1_t2257 *, const MethodInfo*))Collection_1_get_Count_m12333_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12334_gshared (Collection_1_t2257 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12334(__this, ___index, method) (( Object_t * (*) (Collection_1_t2257 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12334_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12335_gshared (Collection_1_t2257 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12335(__this, ___index, ___value, method) (( void (*) (Collection_1_t2257 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12335_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12336_gshared (Collection_1_t2257 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12336(__this, ___index, ___item, method) (( void (*) (Collection_1_t2257 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12336_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12337_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12337(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12337_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12338_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12338(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12338_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12339_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12339(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12339_gshared)(__this /* static, unused */, ___list, method)
