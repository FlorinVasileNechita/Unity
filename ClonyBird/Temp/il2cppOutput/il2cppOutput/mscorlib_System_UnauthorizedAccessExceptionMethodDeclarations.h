#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t1423;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t337;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" void UnauthorizedAccessException__ctor_m8111 (UnauthorizedAccessException_t1423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" void UnauthorizedAccessException__ctor_m8112 (UnauthorizedAccessException_t1423 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnauthorizedAccessException__ctor_m8113 (UnauthorizedAccessException_t1423 * __this, SerializationInfo_t337 * ___info, StreamingContext_t338  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
