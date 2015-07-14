#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t165;
struct AnimationCurve_t165_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t310;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m788 (AnimationCurve_t165 * __this, KeyframeU5BU5D_t310* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m789 (AnimationCurve_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m790 (AnimationCurve_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m791 (AnimationCurve_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m792 (AnimationCurve_t165 * __this, KeyframeU5BU5D_t310* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t165_marshal(const AnimationCurve_t165& unmarshaled, AnimationCurve_t165_marshaled& marshaled);
void AnimationCurve_t165_marshal_back(const AnimationCurve_t165_marshaled& marshaled, AnimationCurve_t165& unmarshaled);
void AnimationCurve_t165_marshal_cleanup(AnimationCurve_t165_marshaled& marshaled);
