﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t124;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t396;

// System.Void System.Attribute::.ctor()
extern "C" void Attribute__ctor_m1285 (Attribute_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C" void Attribute_CheckParameters_m3721 (Object_t * __this /* static, unused */, Object_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C" Attribute_t124 * Attribute_GetCustomAttribute_m3722 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" Attribute_t124 * Attribute_GetCustomAttribute_m3723 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C" int32_t Attribute_GetHashCode_m1418 (Attribute_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C" bool Attribute_IsDefined_m3724 (Object_t * __this /* static, unused */, ParameterInfo_t396 * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C" bool Attribute_IsDefined_m3725 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m3726 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m3727 (Object_t * __this /* static, unused */, ParameterInfo_t396 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C" bool Attribute_Equals_m1531 (Attribute_t124 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
