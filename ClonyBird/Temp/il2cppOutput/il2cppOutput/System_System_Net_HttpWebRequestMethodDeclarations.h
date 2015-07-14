#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t542;
// System.Uri
struct Uri_t212;
// System.Net.ServicePoint
struct ServicePoint_t541;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m1687 (HttpWebRequest_t542 * __this, Uri_t212 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m1688 (HttpWebRequest_t542 * __this, SerializationInfo_t337 * ___serializationInfo, StreamingContext_t338  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m1689 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1690 (HttpWebRequest_t542 * __this, SerializationInfo_t337 * ___serializationInfo, StreamingContext_t338  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t212 * HttpWebRequest_get_Address_m1691 (HttpWebRequest_t542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t541 * HttpWebRequest_get_ServicePoint_m1692 (HttpWebRequest_t542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t541 * HttpWebRequest_GetServicePoint_m1693 (HttpWebRequest_t542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m1694 (HttpWebRequest_t542 * __this, SerializationInfo_t337 * ___serializationInfo, StreamingContext_t338  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
