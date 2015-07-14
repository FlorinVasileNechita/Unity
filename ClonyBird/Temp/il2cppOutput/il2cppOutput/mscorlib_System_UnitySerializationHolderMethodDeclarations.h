#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1426;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1369;
// System.Reflection.Module
struct Module_t1091;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m8117 (UnitySerializationHolder_t1426 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m8118 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t337 * ___info, StreamingContext_t338  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m8119 (Object_t * __this /* static, unused */, DBNull_t1369 * ___instance, SerializationInfo_t337 * ___info, StreamingContext_t338  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m8120 (Object_t * __this /* static, unused */, Module_t1091 * ___instance, SerializationInfo_t337 * ___info, StreamingContext_t338  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m8121 (UnitySerializationHolder_t1426 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m8122 (UnitySerializationHolder_t1426 * __this, StreamingContext_t338  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
