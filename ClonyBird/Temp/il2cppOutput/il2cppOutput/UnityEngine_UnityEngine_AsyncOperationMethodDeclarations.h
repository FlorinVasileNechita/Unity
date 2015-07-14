#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t35;
struct AsyncOperation_t35_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m622 (AsyncOperation_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m623 (AsyncOperation_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m624 (AsyncOperation_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t35_marshal(const AsyncOperation_t35& unmarshaled, AsyncOperation_t35_marshaled& marshaled);
void AsyncOperation_t35_marshal_back(const AsyncOperation_t35_marshaled& marshaled, AsyncOperation_t35& unmarshaled);
void AsyncOperation_t35_marshal_cleanup(AsyncOperation_t35_marshaled& marshaled);
