#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2001;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1992;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t465;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t306;
// System.Object[]
struct ObjectU5BU5D_t29;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m9317_gshared (ValueCollection_t2001 * __this, Dictionary_2_t1992 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m9317(__this, ___dictionary, method) (( void (*) (ValueCollection_t2001 *, Dictionary_2_t1992 *, const MethodInfo*))ValueCollection__ctor_m9317_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9318_gshared (ValueCollection_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9318(__this, ___item, method) (( void (*) (ValueCollection_t2001 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9318_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9319_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9319(__this, method) (( void (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9319_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9320_gshared (ValueCollection_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9320(__this, ___item, method) (( bool (*) (ValueCollection_t2001 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9320_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9321_gshared (ValueCollection_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9321(__this, ___item, method) (( bool (*) (ValueCollection_t2001 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9321_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9322_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9322(__this, method) (( Object_t* (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9322_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m9323_gshared (ValueCollection_t2001 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m9323(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2001 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m9323_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9324_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9324(__this, method) (( Object_t * (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9324_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9325_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9325(__this, method) (( bool (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9325_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m9326_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m9326(__this, method) (( Object_t * (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m9326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m9327_gshared (ValueCollection_t2001 * __this, ObjectU5BU5D_t29* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m9327(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2001 *, ObjectU5BU5D_t29*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m9327_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2002  ValueCollection_GetEnumerator_m9328_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m9328(__this, method) (( Enumerator_t2002  (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_GetEnumerator_m9328_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m9329_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m9329(__this, method) (( int32_t (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_get_Count_m9329_gshared)(__this, method)
