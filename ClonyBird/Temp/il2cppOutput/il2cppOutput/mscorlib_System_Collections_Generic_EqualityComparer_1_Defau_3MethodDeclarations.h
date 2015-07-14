#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2076;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m10273_gshared (DefaultComparer_t2076 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10273(__this, method) (( void (*) (DefaultComparer_t2076 *, const MethodInfo*))DefaultComparer__ctor_m10273_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10274_gshared (DefaultComparer_t2076 * __this, UILineInfo_t178  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10274(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2076 *, UILineInfo_t178 , const MethodInfo*))DefaultComparer_GetHashCode_m10274_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10275_gshared (DefaultComparer_t2076 * __this, UILineInfo_t178  ___x, UILineInfo_t178  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10275(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2076 *, UILineInfo_t178 , UILineInfo_t178 , const MethodInfo*))DefaultComparer_Equals_m10275_gshared)(__this, ___x, ___y, method)
