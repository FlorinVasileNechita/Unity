#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoEnumInfo
struct MonoEnumInfo_t1384;
// System.Collections.Hashtable
struct Hashtable_t507;
// System.Type
struct Type_t;
// System.MonoEnumInfo
#include "mscorlib_System_MonoEnumInfo.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C" void MonoEnumInfo__ctor_m7755 (MonoEnumInfo_t1384 * __this, MonoEnumInfo_t1384  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
extern "C" void MonoEnumInfo__cctor_m7756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_get_enum_info_m7757 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1384 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern "C" Hashtable_t507 * MonoEnumInfo_get_Cache_m7758 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern "C" void MonoEnumInfo_GetInfo_m7759 (Object_t * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1384 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
