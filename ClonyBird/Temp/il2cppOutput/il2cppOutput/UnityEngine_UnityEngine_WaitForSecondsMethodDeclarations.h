#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t42;
struct WaitForSeconds_t42_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m106 (WaitForSeconds_t42 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t42_marshal(const WaitForSeconds_t42& unmarshaled, WaitForSeconds_t42_marshaled& marshaled);
void WaitForSeconds_t42_marshal_back(const WaitForSeconds_t42_marshaled& marshaled, WaitForSeconds_t42& unmarshaled);
void WaitForSeconds_t42_marshal_cleanup(WaitForSeconds_t42_marshaled& marshaled);
