#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.Coroutine
struct Coroutine_t46;
struct Coroutine_t46_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t306;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m30 (MonoBehaviour_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t46 * MonoBehaviour_StartCoroutine_m691 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t46 * MonoBehaviour_StartCoroutine_Auto_m692 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
