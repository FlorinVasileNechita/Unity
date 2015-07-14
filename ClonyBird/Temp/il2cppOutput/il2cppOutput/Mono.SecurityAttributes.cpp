#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t722_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t726_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t723_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t728_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t724_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t727_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t31_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t732_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t731_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t718_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		AssemblyDescriptionAttribute_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1142);
		AssemblyProductAttribute_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1139);
		AssemblyTitleAttribute_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1144);
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		AssemblyCompanyAttribute_t724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1140);
		ComVisibleAttribute_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1143);
		RuntimeCompatibilityAttribute_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		AssemblyKeyFileAttribute_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1148);
		AssemblyDelaySignAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1147);
		NeutralResourcesLanguageAttribute_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1134);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t722 * tmp;
		tmp = (AssemblyCopyrightAttribute_t722 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t722_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2652(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t726 * tmp;
		tmp = (AssemblyDescriptionAttribute_t726 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t726_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2656(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t723 * tmp;
		tmp = (AssemblyProductAttribute_t723 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t723_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2653(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t728 * tmp;
		tmp = (AssemblyTitleAttribute_t728 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t728_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2658(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t724 * tmp;
		tmp = (AssemblyCompanyAttribute_t724 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t724_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2654(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t727 * tmp;
		tmp = (ComVisibleAttribute_t727 *)il2cpp_codegen_object_new (ComVisibleAttribute_t727_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2657(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t31 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t31 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t31_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m83(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m84(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t407 * tmp;
		tmp = (InternalsVisibleToAttribute_t407 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t407_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1420(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t732 * tmp;
		tmp = (AssemblyKeyFileAttribute_t732 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t732_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m2662(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t731 * tmp;
		tmp = (AssemblyDelaySignAttribute_t731 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t731_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m2661(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t718 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t718 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t718_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m2648(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger__ctor_m2792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger__ctor_m2794(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger__ctor_m2796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_SetBit_m2803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_SetBit_m2804(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_ToString_m2807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_ToString_m2808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2818(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t719_il2cpp_TypeInfo_var;
void ModulusRing_t763_CustomAttributesCacheGenerator_ModulusRing_Pow_m2776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t719 * tmp;
		tmp = (CLSCompliantAttribute_t719 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t719_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2649(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void ASN1_t682_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t567_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t567_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t567_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void X509CertificateCollection_t707_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t411_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t794_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void X509Crl_t684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void X509Crl_t684_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t710_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t797_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t411_il2cpp_TypeInfo_var;
void KeyUsages_t799_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t411_il2cpp_TypeInfo_var;
void CertTypes_t801_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t412_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t814_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void HttpsClientStream_t832_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t832_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t832_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3256(CustomAttributesCache* cache)
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
void HttpsClientStream_t832_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3257(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t838_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t840_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t411_il2cpp_TypeInfo_var;
void SecurityProtocolType_t843_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t410_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t878_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger__ctor_m2792,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger__ctor_m2794,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger__ctor_m2796,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_SetBit_m2803,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_SetBit_m2804,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_ToString_m2807,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_ToString_m2808,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2818,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2822,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2828,
	BigInteger_t762_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2829,
	ModulusRing_t763_CustomAttributesCacheGenerator_ModulusRing_Pow_m2776,
	ASN1_t682_CustomAttributesCacheGenerator,
	PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t706_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t567_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t567_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t567_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t707_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t794_CustomAttributesCacheGenerator,
	X509Crl_t684_CustomAttributesCacheGenerator,
	X509Crl_t684_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t710_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t797_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t799_CustomAttributesCacheGenerator,
	CertTypes_t801_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t814_CustomAttributesCacheGenerator,
	HttpsClientStream_t832_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t832_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t832_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3256,
	HttpsClientStream_t832_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3257,
	RSASslSignatureDeformatter_t838_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t840_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t843_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t878_CustomAttributesCacheGenerator,
};
