#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t31_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t408_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		RuntimeCompatibilityAttribute_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ExtensionAttribute_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t31 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t31 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t31_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m83(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m84(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t408 * tmp;
		tmp = (ExtensionAttribute_t408 *)il2cpp_codegen_object_new (ExtensionAttribute_t408_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1421(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t34_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m90(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t34_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m91(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var;
void AssetBundle_t36_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m95(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t297 * tmp;
		tmp = (TypeInferenceRuleAttribute_t297 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1252(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var;
void AssetBundle_t36_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m96(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t297 * tmp;
		tmp = (TypeInferenceRuleAttribute_t297 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1252(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void AssetBundle_t36_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m97(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void LayerMask_t39_CustomAttributesCacheGenerator_LayerMask_LayerToName_m100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void LayerMask_t39_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void LayerMask_t39_CustomAttributesCacheGenerator_LayerMask_t39_LayerMask_GetMask_m102_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void SystemInfo_t41_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Coroutine_t46_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m110(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t247_il2cpp_TypeInfo_var;
void ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_t47_ScriptableObject_Internal_CreateScriptableObject_m113_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t247 * tmp;
		tmp = (WritableAttribute_t247 *)il2cpp_codegen_object_new (WritableAttribute_t247_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m127(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Renderer_t61_CustomAttributesCacheGenerator_Renderer_set_enabled_m80(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Screen_t62_CustomAttributesCacheGenerator_Screen_get_width_m209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Screen_t62_CustomAttributesCacheGenerator_Screen_get_height_m210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Texture2D_t64_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t247_il2cpp_TypeInfo_var;
void Texture2D_t64_CustomAttributesCacheGenerator_Texture2D_t64_Texture2D_Internal_Create_m213_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t247 * tmp;
		tmp = (WritableAttribute_t247 *)il2cpp_codegen_object_new (WritableAttribute_t247_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUILayer_t69_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Gradient_t73_CustomAttributesCacheGenerator_Gradient_Init_m219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Gradient_t73_CustomAttributesCacheGenerator_Gradient_Cleanup_m220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void GUI_t82_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void GUI_t82_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void GUI_t82_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUI_t82_CustomAttributesCacheGenerator_GUI_set_changed_m231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUILayoutUtility_t89_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUILayoutUtility_t89_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIUtility_t98_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIUtility_t98_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIUtility_t98_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISettings_t99_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISettings_t99_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISettings_t99_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISettings_t99_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISettings_t99_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t245_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t245 * tmp;
		tmp = (ExecuteInEditMode_t245 *)il2cpp_codegen_object_new (ExecuteInEditMode_t245_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1115(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUISkin_t80_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUIContent_t104_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUIContent_t104_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void GUIContent_t104_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_Init_m351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m352(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_Init_m360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_Cleanup_m361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_left_m362(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_left_m363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_right_m364(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_right_m365(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_top_m366(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_top_m367(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_bottom_m368(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_bottom_m369(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_vertical_m371(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_Init_m376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_name_m378(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_set_name_m379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m381(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m384(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m385(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m386(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m387(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m388(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m389(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m390(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m391(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t107_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m394(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_Init_m397(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_Cleanup_m399(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_get_type_m400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m402(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_get_modifiers_m403(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_get_character_m404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_get_commandName_m405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_get_keyCode_m406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Event_t108_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t411_il2cpp_TypeInfo_var;
void EventModifiers_t112_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(272);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t411 * tmp;
		tmp = (FlagsAttribute_t411 *)il2cpp_codegen_object_new (FlagsAttribute_t411_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1425(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void Vector2_t20_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void Vector3_t19_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void Color_t71_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t237_il2cpp_TypeInfo_var;
void Color32_t113_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t237 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t237 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t237_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1109(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void Quaternion_t25_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Quaternion_t25_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m449(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m525(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m528(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void Vector4_t116_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var;
void Resources_t122_CustomAttributesCacheGenerator_Resources_Load_m569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t297 * tmp;
		tmp = (TypeInferenceRuleAttribute_t297 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1252(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t123_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void SpriteRenderer_t26_CustomAttributesCacheGenerator_SpriteRenderer_GetSprite_INTERNAL_m590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void SpriteRenderer_t26_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void WWW_t127_CustomAttributesCacheGenerator_WWW_DestroyWWW_m595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void WWW_t127_CustomAttributesCacheGenerator_WWW_InitWWW_m596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void WWW_t127_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void WWW_t127_CustomAttributesCacheGenerator_WWW_get_bytes_m602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void WWW_t127_CustomAttributesCacheGenerator_WWW_get_error_m603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void WWW_t127_CustomAttributesCacheGenerator_WWW_get_isDone_m604(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var;
void WWWForm_t131_CustomAttributesCacheGenerator_WWWForm_AddField_m608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t294 * tmp;
		tmp = (ExcludeFromDocsAttribute_t294 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1250(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t293_il2cpp_TypeInfo_var;
void WWWForm_t131_CustomAttributesCacheGenerator_WWWForm_t131_WWWForm_AddField_m609_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t293 * tmp;
		tmp = (DefaultValueAttribute_t293 *)il2cpp_codegen_object_new (DefaultValueAttribute_t293_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1246(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t293_il2cpp_TypeInfo_var;
void WWWTranscoder_t132_CustomAttributesCacheGenerator_WWWTranscoder_t132_WWWTranscoder_QPEncode_m616_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t293 * tmp;
		tmp = (DefaultValueAttribute_t293 *)il2cpp_codegen_object_new (DefaultValueAttribute_t293_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1246(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t293_il2cpp_TypeInfo_var;
void WWWTranscoder_t132_CustomAttributesCacheGenerator_WWWTranscoder_t132_WWWTranscoder_SevenBitClean_m619_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t293 * tmp;
		tmp = (DefaultValueAttribute_t293 *)il2cpp_codegen_object_new (DefaultValueAttribute_t293_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1246(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void CacheIndex_t133_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void UnityString_t134_CustomAttributesCacheGenerator_UnityString_t134_UnityString_Format_m621_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void AsyncOperation_t35_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Application_t136_CustomAttributesCacheGenerator_Application_get_loadedLevel_m50(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Application_t136_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_get_cullingMask_m638(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_get_eventMask_m639(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_get_targetTexture_m642(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_get_clearFlags_m643(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m645(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m646(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_GetAllCameras_m647(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m652(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var;
void CameraCallback_t138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t415 * tmp;
		tmp = (EditorBrowsableAttribute_t415 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1430(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Debug_t139_CustomAttributesCacheGenerator_Debug_Internal_Log_m655(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t247_il2cpp_TypeInfo_var;
void Debug_t139_CustomAttributesCacheGenerator_Debug_t139_Debug_Internal_Log_m655_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t247 * tmp;
		tmp = (WritableAttribute_t247 *)il2cpp_codegen_object_new (WritableAttribute_t247_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1119(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m683(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_SetParamsImpl_m688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m689(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Display_t142_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void MonoBehaviour_t2_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Input_t23_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Input_t23_CustomAttributesCacheGenerator_Input_GetMouseButton_m695(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Input_t23_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m49(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Input_t23_CustomAttributesCacheGenerator_Input_get_mousePosition_m696(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_get_name_m65(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_ToString_m88(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Component_t22_CustomAttributesCacheGenerator_Component_get_transform_m37(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Component_t22_CustomAttributesCacheGenerator_Component_get_gameObject_m41(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Component_t22_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m705(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var;
void Component_t22_CustomAttributesCacheGenerator_Component_GetComponent_m1431(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t416 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t416 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1432(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var;
void Component_t22_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m706(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t297 * tmp;
		tmp = (TypeInferenceRuleAttribute_t297 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1252(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponent_m707(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t297 * tmp;
		tmp = (TypeInferenceRuleAttribute_t297 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1252(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m708(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponent_m1434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t416 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t416 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1432(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m709(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t297 * tmp;
		tmp = (TypeInferenceRuleAttribute_t297 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t297_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1252(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_get_transform_m32(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_SetActive_m42(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_get_tag_m711(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m67(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m31(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_SendMessage_m712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t293_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_t18_GameObject_SendMessage_m712_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t293 * tmp;
		tmp = (DefaultValueAttribute_t293 *)il2cpp_codegen_object_new (DefaultValueAttribute_t293_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1246(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t293_il2cpp_TypeInfo_var;
void GameObject_t18_CustomAttributesCacheGenerator_GameObject_t18_GameObject_SendMessage_m712_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t293 * tmp;
		tmp = (DefaultValueAttribute_t293 *)il2cpp_codegen_object_new (DefaultValueAttribute_t293_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1246(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m716(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_get_childCount_m719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_Find_m40(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_GetChild_m721(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Time_t144_CustomAttributesCacheGenerator_Time_get_deltaTime_m47(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Time_t144_CustomAttributesCacheGenerator_Time_get_timeScale_m82(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Time_t144_CustomAttributesCacheGenerator_Time_set_timeScale_m81(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Random_t145_CustomAttributesCacheGenerator_Random_Range_m34(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Random_t145_CustomAttributesCacheGenerator_Random_RandomRangeInt_m722(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m725(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m76(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t293_il2cpp_TypeInfo_var;
void PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_t147_PlayerPrefs_GetInt_m76_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t293 * tmp;
		tmp = (DefaultValueAttribute_t293 *)il2cpp_codegen_object_new (DefaultValueAttribute_t293_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1246(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m726(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t293_il2cpp_TypeInfo_var;
void PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_t147_PlayerPrefs_GetString_m726_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t293 * tmp;
		tmp = (DefaultValueAttribute_t293 *)il2cpp_codegen_object_new (DefaultValueAttribute_t293_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1246(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var;
void PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t294 * tmp;
		tmp = (ExcludeFromDocsAttribute_t294 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1250(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var;
void Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m54(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t294 * tmp;
		tmp = (ExcludeFromDocsAttribute_t294 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t294_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1250(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void BoxCollider2D_t21_CustomAttributesCacheGenerator_BoxCollider2D_INTERNAL_get_size_m747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void AnimationEvent_t161_CustomAttributesCacheGenerator_AnimationEvent_t161____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void AnimationCurve_t165_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void AnimationCurve_t165_CustomAttributesCacheGenerator_AnimationCurve_t165_AnimationCurve__ctor_m788_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void AnimationCurve_t165_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void AnimationCurve_t165_CustomAttributesCacheGenerator_AnimationCurve_Init_m792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t162_CustomAttributesCacheGenerator_AnimatorStateInfo_t162____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Animator_t4_CustomAttributesCacheGenerator_Animator_StringToHash_m811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Animator_t4_CustomAttributesCacheGenerator_Animator_SetTriggerString_m812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void GUIText_t11_CustomAttributesCacheGenerator_GUIText_set_text_m78(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void CharacterInfo_t174_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void CharacterInfo_t174_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void CharacterInfo_t174_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t413_il2cpp_TypeInfo_var;
void CharacterInfo_t174_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t413 * tmp;
		tmp = (ObsoleteAttribute_t413 *)il2cpp_codegen_object_new (ObsoleteAttribute_t413_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1427(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void Font_t101_CustomAttributesCacheGenerator_Font_get_dynamic_m838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t175_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t415 * tmp;
		tmp = (EditorBrowsableAttribute_t415 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1430(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_Init_m842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m850(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m851(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t236_il2cpp_TypeInfo_var;
void TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t236_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t236 * tmp;
		tmp = (WrapperlessIcall_t236 *)il2cpp_codegen_object_new (WrapperlessIcall_t236_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1108(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Request_t187_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Request_t187_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Request_t187_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Request_t187_CustomAttributesCacheGenerator_Request_get_sourceId_m879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Request_t187_CustomAttributesCacheGenerator_Request_get_appId_m880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Request_t187_CustomAttributesCacheGenerator_Request_get_domain_m881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Response_t189_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Response_t189_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Response_t189_CustomAttributesCacheGenerator_Response_get_success_m890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Response_t189_CustomAttributesCacheGenerator_Response_set_success_m891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Response_t189_CustomAttributesCacheGenerator_Response_get_extendedInfo_m892(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Response_t189_CustomAttributesCacheGenerator_Response_set_extendedInfo_m893(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m899(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m904(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m905(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m906(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m909(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m910(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m911(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m912(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m913(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m914(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m915(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m916(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m917(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m918(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchRequest_t194_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchRequest_t194_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m926(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m927(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m941(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t196_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t196_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t196_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DropConnectionRequest_t197_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DropConnectionRequest_t197_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m950(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m952(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m957(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m965(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_name_m976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_name_m977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchResponse_t203_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchResponse_t203_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ListMatchResponse_t203_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t418_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t204_il2cpp_TypeInfo_var;
void AppID_t204_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		AppID_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t418 * tmp;
		tmp = (DefaultValueAttribute_t418 *)il2cpp_codegen_object_new (DefaultValueAttribute_t418_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1437(tmp, Box(AppID_t204_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t418_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t205_il2cpp_TypeInfo_var;
void SourceID_t205_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		SourceID_t205_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t418 * tmp;
		tmp = (DefaultValueAttribute_t418 *)il2cpp_codegen_object_new (DefaultValueAttribute_t418_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1437(tmp, Box(SourceID_t205_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t418_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t206_il2cpp_TypeInfo_var;
void NetworkID_t206_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		NetworkID_t206_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t418 * tmp;
		tmp = (DefaultValueAttribute_t418 *)il2cpp_codegen_object_new (DefaultValueAttribute_t418_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1437(tmp, Box(NetworkID_t206_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t418_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t207_il2cpp_TypeInfo_var;
void NodeID_t207_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t418_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		NodeID_t207_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t418 * tmp;
		tmp = (DefaultValueAttribute_t418 *)il2cpp_codegen_object_new (DefaultValueAttribute_t418_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1437(tmp, Box(NodeID_t207_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var;
void NetworkMatch_t213_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t419 * tmp;
		tmp = (DebuggerHiddenAttribute_t419 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1439(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t419 * tmp;
		tmp = (DebuggerHiddenAttribute_t419 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1439(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t419 * tmp;
		tmp = (DebuggerHiddenAttribute_t419 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1439(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1448(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t419 * tmp;
		tmp = (DebuggerHiddenAttribute_t419 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t419_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1439(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var;
void JsonArray_t214_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t422 * tmp;
		tmp = (GeneratedCodeAttribute_t422 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1449(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t415 * tmp;
		tmp = (EditorBrowsableAttribute_t415 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1430(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var;
void JsonObject_t217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t422 * tmp;
		tmp = (GeneratedCodeAttribute_t422 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1449(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t415 * tmp;
		tmp = (EditorBrowsableAttribute_t415 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1430(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var;
void SimpleJson_t220_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t422 * tmp;
		tmp = (GeneratedCodeAttribute_t422 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1449(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t423_il2cpp_TypeInfo_var;
void SimpleJson_t220_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t423 * tmp;
		tmp = (SuppressMessageAttribute_t423 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t423_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1450(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1451(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t423_il2cpp_TypeInfo_var;
void SimpleJson_t220_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t423 * tmp;
		tmp = (SuppressMessageAttribute_t423 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t423_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1450(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var;
void SimpleJson_t220_CustomAttributesCacheGenerator_SimpleJson_t220____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t415 * tmp;
		tmp = (EditorBrowsableAttribute_t415 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t415_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1430(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t218_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t422 * tmp;
		tmp = (GeneratedCodeAttribute_t422 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1449(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t423_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t218_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t423 * tmp;
		tmp = (SuppressMessageAttribute_t423 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t423_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1450(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1451(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t219_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t422 * tmp;
		tmp = (GeneratedCodeAttribute_t422 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1449(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t423_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t219_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t423 * tmp;
		tmp = (SuppressMessageAttribute_t423 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t423_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1450(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1451(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t423_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t219_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t423 * tmp;
		tmp = (SuppressMessageAttribute_t423 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t423_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1450(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1451(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var;
void ReflectionUtils_t235_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t422 * tmp;
		tmp = (GeneratedCodeAttribute_t422 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t422_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1449(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void ReflectionUtils_t235_CustomAttributesCacheGenerator_ReflectionUtils_t235_ReflectionUtils_GetConstructorInfo_m1092_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void ReflectionUtils_t235_CustomAttributesCacheGenerator_ReflectionUtils_t235_ReflectionUtils_GetContructor_m1097_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void ReflectionUtils_t235_CustomAttributesCacheGenerator_ReflectionUtils_t235_ReflectionUtils_GetConstructorByReflection_m1099_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t424_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t412 * tmp;
		tmp = (DefaultMemberAttribute_t412 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t412_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1426(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void ConstructorDelegate_t228_CustomAttributesCacheGenerator_ConstructorDelegate_t228_ConstructorDelegate_Invoke_m1077_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t409_il2cpp_TypeInfo_var;
void ConstructorDelegate_t228_CustomAttributesCacheGenerator_ConstructorDelegate_t228_ConstructorDelegate_BeginInvoke_m1078_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t409 * tmp;
		tmp = (ParamArrayAttribute_t409 *)il2cpp_codegen_object_new (ParamArrayAttribute_t409_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1422(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t230_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t231_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t232_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t233_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t234_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t237_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t242_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1477(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void RequireComponent_t243_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1478(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void WritableAttribute_t247_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1478(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t248_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Achievement_t260_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Achievement_t260_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Achievement_t260_CustomAttributesCacheGenerator_Achievement_get_id_m1152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Achievement_t260_CustomAttributesCacheGenerator_Achievement_set_id_m1153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Achievement_t260_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Achievement_t260_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1155(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void AchievementDescription_t261_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void AchievementDescription_t261_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void AchievementDescription_t261_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Score_t262_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Score_t262_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Score_t262_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Score_t262_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Score_t262_CustomAttributesCacheGenerator_Score_get_value_m1174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Score_t262_CustomAttributesCacheGenerator_Score_set_value_m1175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_id_m1183(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_id_m1184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1186(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_range_m1187(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_range_m1188(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1190(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t410 * tmp;
		tmp = (CompilerGeneratedAttribute_t410 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1424(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var;
void StackTraceUtility_t274_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1202(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t416 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t416 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1432(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var;
void StackTraceUtility_t274_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t416 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t416 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1432(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var;
void StackTraceUtility_t274_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t416 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t416 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t416_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1432(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t276_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1478(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void ArgumentCache_t282_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t295 * tmp;
		tmp = (FormerlySerializedAsAttribute_t295 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1251(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void PersistentCall_t285_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t295 * tmp;
		tmp = (FormerlySerializedAsAttribute_t295 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1251(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var;
void PersistentCall_t285_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t295 * tmp;
		tmp = (FormerlySerializedAsAttribute_t295 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1251(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t295 * tmp;
		tmp = (FormerlySerializedAsAttribute_t295 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1251(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var;
void PersistentCallGroup_t287_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t295 * tmp;
		tmp = (FormerlySerializedAsAttribute_t295 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1251(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void UnityEventBase_t290_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t295 * tmp;
		tmp = (FormerlySerializedAsAttribute_t295 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t295_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1251(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t125_il2cpp_TypeInfo_var;
void UnityEventBase_t290_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t125 * tmp;
		tmp = (SerializeField_t125 *)il2cpp_codegen_object_new (SerializeField_t125_il2cpp_TypeInfo_var);
		SerializeField__ctor_m571(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t244_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t292_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t244 * tmp;
		tmp = (AddComponentMenu_t244 *)il2cpp_codegen_object_new (AddComponentMenu_t244_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1114(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t293_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t294_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t295_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1478(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1477(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t426_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t297_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t426 * tmp;
		tmp = (AttributeUsageAttribute_t426 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t426_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1476(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[474] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t34_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m90,
	AssetBundleCreateRequest_t34_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m91,
	AssetBundle_t36_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m95,
	AssetBundle_t36_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m96,
	AssetBundle_t36_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m97,
	LayerMask_t39_CustomAttributesCacheGenerator_LayerMask_LayerToName_m100,
	LayerMask_t39_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m101,
	LayerMask_t39_CustomAttributesCacheGenerator_LayerMask_t39_LayerMask_GetMask_m102_Arg0_ParameterInfo,
	SystemInfo_t41_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m105,
	Coroutine_t46_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m110,
	ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m113,
	ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_t47_ScriptableObject_Internal_CreateScriptableObject_m113_Arg0_ParameterInfo,
	ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m114,
	ScriptableObject_t47_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m116,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m121,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m122,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m123,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m124,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m125,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m126,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m127,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m128,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m129,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m130,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m131,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m132,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m133,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m134,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m135,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m136,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m137,
	GameCenterPlatform_t57_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m141,
	GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m185,
	GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m186,
	GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m187,
	GcLeaderboard_t59_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m188,
	Renderer_t61_CustomAttributesCacheGenerator_Renderer_set_enabled_m80,
	Screen_t62_CustomAttributesCacheGenerator_Screen_get_width_m209,
	Screen_t62_CustomAttributesCacheGenerator_Screen_get_height_m210,
	Texture2D_t64_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m213,
	Texture2D_t64_CustomAttributesCacheGenerator_Texture2D_t64_Texture2D_Internal_Create_m213_Arg0_ParameterInfo,
	GUILayer_t69_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m215,
	Gradient_t73_CustomAttributesCacheGenerator_Gradient_Init_m219,
	Gradient_t73_CustomAttributesCacheGenerator_Gradient_Cleanup_m220,
	GUI_t82_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t82_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t82_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m228,
	GUI_t82_CustomAttributesCacheGenerator_GUI_set_changed_m231,
	GUILayoutUtility_t89_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m244,
	GUILayoutUtility_t89_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m246,
	GUIUtility_t98_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m278,
	GUIUtility_t98_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m280,
	GUIUtility_t98_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m284,
	GUISettings_t99_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t99_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t99_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t99_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t99_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t80_CustomAttributesCacheGenerator,
	GUISkin_t80_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t80_CustomAttributesCacheGenerator_m_box,
	GUISkin_t80_CustomAttributesCacheGenerator_m_button,
	GUISkin_t80_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t80_CustomAttributesCacheGenerator_m_label,
	GUISkin_t80_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t80_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t80_CustomAttributesCacheGenerator_m_window,
	GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t80_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t80_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t80_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t80_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t80_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t80_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t80_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t104_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t104_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t104_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_Init_m351,
	GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m352,
	GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m353,
	GUIStyleState_t105_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m354,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_Init_m360,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_Cleanup_m361,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_left_m362,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_left_m363,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_right_m364,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_right_m365,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_top_m366,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_top_m367,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_bottom_m368,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_set_bottom_m369,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m370,
	RectOffset_t92_CustomAttributesCacheGenerator_RectOffset_get_vertical_m371,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_Init_m376,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m377,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_name_m378,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_set_name_m379,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m381,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m384,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m385,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m386,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m387,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m388,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m389,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m390,
	GUIStyle_t88_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m391,
	TouchScreenKeyboard_t107_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m394,
	Event_t108_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t108_CustomAttributesCacheGenerator_Event_Init_m397,
	Event_t108_CustomAttributesCacheGenerator_Event_Cleanup_m399,
	Event_t108_CustomAttributesCacheGenerator_Event_get_type_m400,
	Event_t108_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m402,
	Event_t108_CustomAttributesCacheGenerator_Event_get_modifiers_m403,
	Event_t108_CustomAttributesCacheGenerator_Event_get_character_m404,
	Event_t108_CustomAttributesCacheGenerator_Event_get_commandName_m405,
	Event_t108_CustomAttributesCacheGenerator_Event_get_keyCode_m406,
	Event_t108_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m408,
	EventModifiers_t112_CustomAttributesCacheGenerator,
	Vector2_t20_CustomAttributesCacheGenerator,
	Vector3_t19_CustomAttributesCacheGenerator,
	Color_t71_CustomAttributesCacheGenerator,
	Color32_t113_CustomAttributesCacheGenerator,
	Quaternion_t25_CustomAttributesCacheGenerator,
	Quaternion_t25_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m449,
	Matrix4x4_t114_CustomAttributesCacheGenerator,
	Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m476,
	Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m478,
	Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m480,
	Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m483,
	Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m496,
	Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m499,
	Matrix4x4_t114_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m500,
	Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m525,
	Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m528,
	Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m531,
	Bounds_t115_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m535,
	Vector4_t116_CustomAttributesCacheGenerator,
	Resources_t122_CustomAttributesCacheGenerator_Resources_Load_m569,
	SerializePrivateVariables_t123_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m574,
	SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m577,
	SphericalHarmonicsL2_t126_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m580,
	SpriteRenderer_t26_CustomAttributesCacheGenerator_SpriteRenderer_GetSprite_INTERNAL_m590,
	SpriteRenderer_t26_CustomAttributesCacheGenerator_SpriteRenderer_SetSprite_INTERNAL_m591,
	WWW_t127_CustomAttributesCacheGenerator_WWW_DestroyWWW_m595,
	WWW_t127_CustomAttributesCacheGenerator_WWW_InitWWW_m596,
	WWW_t127_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m598,
	WWW_t127_CustomAttributesCacheGenerator_WWW_get_bytes_m602,
	WWW_t127_CustomAttributesCacheGenerator_WWW_get_error_m603,
	WWW_t127_CustomAttributesCacheGenerator_WWW_get_isDone_m604,
	WWWForm_t131_CustomAttributesCacheGenerator_WWWForm_AddField_m608,
	WWWForm_t131_CustomAttributesCacheGenerator_WWWForm_t131_WWWForm_AddField_m609_Arg2_ParameterInfo,
	WWWTranscoder_t132_CustomAttributesCacheGenerator_WWWTranscoder_t132_WWWTranscoder_QPEncode_m616_Arg1_ParameterInfo,
	WWWTranscoder_t132_CustomAttributesCacheGenerator_WWWTranscoder_t132_WWWTranscoder_SevenBitClean_m619_Arg1_ParameterInfo,
	CacheIndex_t133_CustomAttributesCacheGenerator,
	UnityString_t134_CustomAttributesCacheGenerator_UnityString_t134_UnityString_Format_m621_Arg1_ParameterInfo,
	AsyncOperation_t35_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m623,
	Application_t136_CustomAttributesCacheGenerator_Application_get_loadedLevel_m50,
	Application_t136_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m629,
	Camera_t137_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m636,
	Camera_t137_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m637,
	Camera_t137_CustomAttributesCacheGenerator_Camera_get_cullingMask_m638,
	Camera_t137_CustomAttributesCacheGenerator_Camera_get_eventMask_m639,
	Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m640,
	Camera_t137_CustomAttributesCacheGenerator_Camera_get_targetTexture_m642,
	Camera_t137_CustomAttributesCacheGenerator_Camera_get_clearFlags_m643,
	Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m645,
	Camera_t137_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m646,
	Camera_t137_CustomAttributesCacheGenerator_Camera_GetAllCameras_m647,
	Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m652,
	Camera_t137_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m654,
	CameraCallback_t138_CustomAttributesCacheGenerator,
	Debug_t139_CustomAttributesCacheGenerator_Debug_Internal_Log_m655,
	Debug_t139_CustomAttributesCacheGenerator_Debug_t139_Debug_Internal_Log_m655_Arg2_ParameterInfo,
	Display_t142_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m683,
	Display_t142_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m684,
	Display_t142_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m685,
	Display_t142_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m686,
	Display_t142_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m687,
	Display_t142_CustomAttributesCacheGenerator_Display_SetParamsImpl_m688,
	Display_t142_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m689,
	Display_t142_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m690,
	MonoBehaviour_t2_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m692,
	Input_t23_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m694,
	Input_t23_CustomAttributesCacheGenerator_Input_GetMouseButton_m695,
	Input_t23_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m49,
	Input_t23_CustomAttributesCacheGenerator_Input_get_mousePosition_m696,
	Object_t28_CustomAttributesCacheGenerator_Object_get_name_m65,
	Object_t28_CustomAttributesCacheGenerator_Object_ToString_m88,
	Component_t22_CustomAttributesCacheGenerator_Component_get_transform_m37,
	Component_t22_CustomAttributesCacheGenerator_Component_get_gameObject_m41,
	Component_t22_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m705,
	Component_t22_CustomAttributesCacheGenerator_Component_GetComponent_m1431,
	Component_t22_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m706,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponent_m707,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m708,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponent_m1434,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m709,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_get_transform_m32,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_SetActive_m42,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m710,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_get_tag_m711,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_FindGameObjectWithTag_m67,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_FindGameObjectsWithTag_m31,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_SendMessage_m712,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_t18_GameObject_SendMessage_m712_Arg1_ParameterInfo,
	GameObject_t18_CustomAttributesCacheGenerator_GameObject_t18_GameObject_SendMessage_m712_Arg2_ParameterInfo,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m716,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m717,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m718,
	Transform_t8_CustomAttributesCacheGenerator_Transform_get_childCount_m719,
	Transform_t8_CustomAttributesCacheGenerator_Transform_Find_m40,
	Transform_t8_CustomAttributesCacheGenerator_Transform_GetChild_m721,
	Time_t144_CustomAttributesCacheGenerator_Time_get_deltaTime_m47,
	Time_t144_CustomAttributesCacheGenerator_Time_get_timeScale_m82,
	Time_t144_CustomAttributesCacheGenerator_Time_set_timeScale_m81,
	Random_t145_CustomAttributesCacheGenerator_Random_Range_m34,
	Random_t145_CustomAttributesCacheGenerator_Random_RandomRangeInt_m722,
	PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m725,
	PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m76,
	PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_t147_PlayerPrefs_GetInt_m76_Arg1_ParameterInfo,
	PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m726,
	PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_t147_PlayerPrefs_GetString_m726_Arg1_ParameterInfo,
	PlayerPrefs_t147_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m727,
	Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_velocity_m744,
	Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m745,
	Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_AddForce_m54,
	Rigidbody2D_t3_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_AddForce_m746,
	BoxCollider2D_t21_CustomAttributesCacheGenerator_BoxCollider2D_INTERNAL_get_size_m747,
	AnimationEvent_t161_CustomAttributesCacheGenerator_AnimationEvent_t161____data_PropertyInfo,
	AnimationCurve_t165_CustomAttributesCacheGenerator,
	AnimationCurve_t165_CustomAttributesCacheGenerator_AnimationCurve_t165_AnimationCurve__ctor_m788_Arg0_ParameterInfo,
	AnimationCurve_t165_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m790,
	AnimationCurve_t165_CustomAttributesCacheGenerator_AnimationCurve_Init_m792,
	AnimatorStateInfo_t162_CustomAttributesCacheGenerator_AnimatorStateInfo_t162____nameHash_PropertyInfo,
	Animator_t4_CustomAttributesCacheGenerator_Animator_StringToHash_m811,
	Animator_t4_CustomAttributesCacheGenerator_Animator_SetTriggerString_m812,
	GUIText_t11_CustomAttributesCacheGenerator_GUIText_set_text_m78,
	CharacterInfo_t174_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t174_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t174_CustomAttributesCacheGenerator_width,
	CharacterInfo_t174_CustomAttributesCacheGenerator_flipped,
	Font_t101_CustomAttributesCacheGenerator_Font_get_dynamic_m838,
	FontTextureRebuildCallback_t175_CustomAttributesCacheGenerator,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_Init_m842,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m843,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m846,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m847,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m848,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m849,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m850,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m851,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m853,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m854,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m855,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m856,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m857,
	TextGenerator_t182_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m858,
	Request_t187_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t187_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t187_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t187_CustomAttributesCacheGenerator_Request_get_sourceId_m879,
	Request_t187_CustomAttributesCacheGenerator_Request_get_appId_m880,
	Request_t187_CustomAttributesCacheGenerator_Request_get_domain_m881,
	Response_t189_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t189_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t189_CustomAttributesCacheGenerator_Response_get_success_m890,
	Response_t189_CustomAttributesCacheGenerator_Response_set_success_m891,
	Response_t189_CustomAttributesCacheGenerator_Response_get_extendedInfo_m892,
	Response_t189_CustomAttributesCacheGenerator_Response_set_extendedInfo_m893,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m898,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m899,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m900,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m901,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m902,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m903,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m904,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m905,
	CreateMatchRequest_t192_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m906,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m909,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m910,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m911,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m912,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m913,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m914,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m915,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m916,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m917,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m918,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m919,
	CreateMatchResponse_t193_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m920,
	JoinMatchRequest_t194_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t194_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m924,
	JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m925,
	JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m926,
	JoinMatchRequest_t194_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m927,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m930,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m931,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m932,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m933,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m934,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m935,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m936,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m937,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m938,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m939,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m940,
	JoinMatchResponse_t195_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m941,
	DestroyMatchRequest_t196_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t196_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m945,
	DestroyMatchRequest_t196_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m946,
	DropConnectionRequest_t197_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t197_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m949,
	DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m950,
	DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m951,
	DropConnectionRequest_t197_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m952,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m955,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m956,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m957,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m958,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m959,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m960,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m961,
	ListMatchRequest_t198_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m962,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m965,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m966,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m967,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m968,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m969,
	MatchDirectConnectInfo_t199_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m970,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m974,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m975,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_name_m976,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_name_m977,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m978,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m979,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m980,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m981,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m982,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m983,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m984,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m985,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m986,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m987,
	MatchDesc_t201_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m988,
	ListMatchResponse_t203_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t203_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m992,
	ListMatchResponse_t203_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m993,
	AppID_t204_CustomAttributesCacheGenerator,
	SourceID_t205_CustomAttributesCacheGenerator,
	NetworkID_t206_CustomAttributesCacheGenerator,
	NodeID_t207_CustomAttributesCacheGenerator,
	NetworkMatch_t213_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1438,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1445,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1446,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t421_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1448,
	JsonArray_t214_CustomAttributesCacheGenerator,
	JsonObject_t217_CustomAttributesCacheGenerator,
	SimpleJson_t220_CustomAttributesCacheGenerator,
	SimpleJson_t220_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1037,
	SimpleJson_t220_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1049,
	SimpleJson_t220_CustomAttributesCacheGenerator_SimpleJson_t220____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t218_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t218_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1452,
	PocoJsonSerializerStrategy_t219_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t219_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1066,
	PocoJsonSerializerStrategy_t219_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1067,
	ReflectionUtils_t235_CustomAttributesCacheGenerator,
	ReflectionUtils_t235_CustomAttributesCacheGenerator_ReflectionUtils_t235_ReflectionUtils_GetConstructorInfo_m1092_Arg1_ParameterInfo,
	ReflectionUtils_t235_CustomAttributesCacheGenerator_ReflectionUtils_t235_ReflectionUtils_GetContructor_m1097_Arg1_ParameterInfo,
	ReflectionUtils_t235_CustomAttributesCacheGenerator_ReflectionUtils_t235_ReflectionUtils_GetConstructorByReflection_m1099_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t424_CustomAttributesCacheGenerator,
	ConstructorDelegate_t228_CustomAttributesCacheGenerator_ConstructorDelegate_t228_ConstructorDelegate_Invoke_m1077_Arg0_ParameterInfo,
	ConstructorDelegate_t228_CustomAttributesCacheGenerator_ConstructorDelegate_t228_ConstructorDelegate_BeginInvoke_m1078_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t230_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t231_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t232_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t233_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t234_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t237_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t242_CustomAttributesCacheGenerator,
	RequireComponent_t243_CustomAttributesCacheGenerator,
	WritableAttribute_t247_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t248_CustomAttributesCacheGenerator,
	Achievement_t260_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t260_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t260_CustomAttributesCacheGenerator_Achievement_get_id_m1152,
	Achievement_t260_CustomAttributesCacheGenerator_Achievement_set_id_m1153,
	Achievement_t260_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1154,
	Achievement_t260_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1155,
	AchievementDescription_t261_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t261_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1162,
	AchievementDescription_t261_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1163,
	Score_t262_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t262_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t262_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1172,
	Score_t262_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1173,
	Score_t262_CustomAttributesCacheGenerator_Score_get_value_m1174,
	Score_t262_CustomAttributesCacheGenerator_Score_set_value_m1175,
	Leaderboard_t58_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t58_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t58_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t58_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_id_m1183,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_id_m1184,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1185,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1186,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_range_m1187,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_range_m1188,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1189,
	Leaderboard_t58_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1190,
	StackTraceUtility_t274_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1202,
	StackTraceUtility_t274_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1205,
	StackTraceUtility_t274_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1207,
	SharedBetweenAnimatorsAttribute_t276_CustomAttributesCacheGenerator,
	ArgumentCache_t282_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t285_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t285_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t287_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t290_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t290_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t292_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t293_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t294_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t295_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t297_CustomAttributesCacheGenerator,
};
