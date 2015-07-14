#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t170;
struct HumanBone_t170_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m813 (HumanBone_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m814 (HumanBone_t170 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m815 (HumanBone_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m816 (HumanBone_t170 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t170_marshal(const HumanBone_t170& unmarshaled, HumanBone_t170_marshaled& marshaled);
void HumanBone_t170_marshal_back(const HumanBone_t170_marshaled& marshaled, HumanBone_t170& unmarshaled);
void HumanBone_t170_marshal_cleanup(HumanBone_t170_marshaled& marshaled);
