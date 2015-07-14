#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t73;
struct Gradient_t73_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m218 (Gradient_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m219 (Gradient_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m220 (Gradient_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m221 (Gradient_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t73_marshal(const Gradient_t73& unmarshaled, Gradient_t73_marshaled& marshaled);
void Gradient_t73_marshal_back(const Gradient_t73_marshaled& marshaled, Gradient_t73& unmarshaled);
void Gradient_t73_marshal_cleanup(Gradient_t73_marshaled& marshaled);
