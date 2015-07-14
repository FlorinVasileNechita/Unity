#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t614;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1987;
// System.String[]
struct StringU5BU5D_t225;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t2033;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t109  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Int32>::table
	Int32U5BU5D_t614* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Int32>::linkSlots
	LinkU5BU5D_t1987* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Int32>::keySlots
	StringU5BU5D_t225* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Int32>::valueSlots
	Int32U5BU5D_t614* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Int32>::serialization_info
	SerializationInfo_t337 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t109_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<>f__am$cacheB
	Transform_1_t2033 * ___U3CU3Ef__amU24cacheB_15;
};
