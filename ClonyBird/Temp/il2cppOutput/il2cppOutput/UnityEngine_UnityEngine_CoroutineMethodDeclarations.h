#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t46;
struct Coroutine_t46_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m109 (Coroutine_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m110 (Coroutine_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m111 (Coroutine_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t46_marshal(const Coroutine_t46& unmarshaled, Coroutine_t46_marshaled& marshaled);
void Coroutine_t46_marshal_back(const Coroutine_t46_marshaled& marshaled, Coroutine_t46& unmarshaled);
void Coroutine_t46_marshal_cleanup(Coroutine_t46_marshaled& marshaled);
