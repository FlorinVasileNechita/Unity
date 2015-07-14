#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t79;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1453;
// System.Delegate
struct Delegate_t358;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m1519 (MulticastDelegate_t79 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m1517 (MulticastDelegate_t79 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m1518 (MulticastDelegate_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1453* MulticastDelegate_GetInvocationList_m1521 (MulticastDelegate_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t358 * MulticastDelegate_CombineImpl_m1522 (MulticastDelegate_t79 * __this, Delegate_t358 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4268 (MulticastDelegate_t79 * __this, MulticastDelegate_t79 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t79 * MulticastDelegate_KPM_m4269 (Object_t * __this /* static, unused */, MulticastDelegate_t79 * ___needle, MulticastDelegate_t79 * ___haystack, MulticastDelegate_t79 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t358 * MulticastDelegate_RemoveImpl_m1523 (MulticastDelegate_t79 * __this, Delegate_t358 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
