#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// BGLooper
#include "AssemblyU2DCSharp_BGLooper.h"
#ifndef _MSC_VER
#else
#endif
// BGLooper
#include "AssemblyU2DCSharp_BGLooperMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Single
#include "mscorlib_System_Single.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.BoxCollider2D
#include "UnityEngine_UnityEngine_BoxCollider2D.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.BoxCollider2D
#include "UnityEngine_UnityEngine_BoxCollider2DMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void BGLooper::.ctor()
extern "C" void BGLooper__ctor_m0 (BGLooper_t1 * __this, const MethodInfo* method)
{
	{
		__this->___numBGPanels_2 = 6;
		__this->___pipeMax_3 = (0.52f);
		__this->___pipeMin_4 = (-0.52f);
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BGLooper::Start()
extern "C" void BGLooper_Start_m1 (BGLooper_t1 * __this, const MethodInfo* method)
{
	GameObjectU5BU5D_t17* V_0 = {0};
	GameObject_t18 * V_1 = {0};
	GameObjectU5BU5D_t17* V_2 = {0};
	int32_t V_3 = 0;
	Vector3_t19  V_4 = {0};
	{
		GameObjectU5BU5D_t17* L_0 = GameObject_FindGameObjectsWithTag_m31(NULL /*static, unused*/, (String_t*) &_stringLiteral1, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObjectU5BU5D_t17* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_004e;
	}

IL_0014:
	{
		GameObjectU5BU5D_t17* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(GameObject_t18 **)(GameObject_t18 **)SZArrayLdElema(L_2, L_4));
		GameObject_t18 * L_5 = V_1;
		NullCheck(L_5);
		Transform_t8 * L_6 = GameObject_get_transform_m32(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t19  L_7 = Transform_get_position_m33(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		float L_8 = (__this->___pipeMin_4);
		float L_9 = (__this->___pipeMax_3);
		float L_10 = Random_Range_m34(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		(&V_4)->___y_1 = L_10;
		GameObject_t18 * L_11 = V_1;
		NullCheck(L_11);
		Transform_t8 * L_12 = GameObject_get_transform_m32(L_11, /*hidden argument*/NULL);
		Vector3_t19  L_13 = V_4;
		NullCheck(L_12);
		Transform_set_position_m35(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_15 = V_3;
		GameObjectU5BU5D_t17* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void BGLooper::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* BoxCollider2D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BGLooper_OnTriggerEnter2D_m2 (BGLooper_t1 * __this, Collider2D_t15 * ___collider, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoxCollider2D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t19  V_1 = {0};
	Vector2_t20  V_2 = {0};
	{
		Collider2D_t15 * L_0 = ___collider;
		NullCheck(((BoxCollider2D_t21 *)Castclass(L_0, BoxCollider2D_t21_il2cpp_TypeInfo_var)));
		Vector2_t20  L_1 = BoxCollider2D_get_size_m36(((BoxCollider2D_t21 *)Castclass(L_0, BoxCollider2D_t21_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = ((&V_2)->___x_0);
		V_0 = L_2;
		Collider2D_t15 * L_3 = ___collider;
		NullCheck(L_3);
		Transform_t8 * L_4 = Component_get_transform_m37(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t19  L_5 = Transform_get_position_m33(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t19 * L_6 = (&V_1);
		float L_7 = (L_6->___x_0);
		float L_8 = V_0;
		int32_t L_9 = (__this->___numBGPanels_2);
		float L_10 = V_0;
		L_6->___x_0 = ((float)((float)L_7+(float)((float)((float)((float)((float)L_8*(float)(((float)L_9))))-(float)((float)((float)L_10/(float)(2.0f)))))));
		Collider2D_t15 * L_11 = ___collider;
		NullCheck(L_11);
		String_t* L_12 = Component_get_tag_m38(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m39(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral1, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		Vector3_t19 * L_14 = (&V_1);
		float L_15 = (L_14->___x_0);
		float L_16 = V_0;
		L_14->___x_0 = ((float)((float)L_15+(float)((float)((float)L_16/(float)(2.0f)))));
		float L_17 = (__this->___pipeMin_4);
		float L_18 = (__this->___pipeMax_3);
		float L_19 = Random_Range_m34(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		(&V_1)->___y_1 = L_19;
		Collider2D_t15 * L_20 = ___collider;
		NullCheck(L_20);
		Transform_t8 * L_21 = Component_get_transform_m37(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_t8 * L_22 = Transform_Find_m40(L_21, (String_t*) &_stringLiteral2, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_t18 * L_23 = Component_get_gameObject_m41(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_m42(L_23, 1, /*hidden argument*/NULL);
	}

IL_009c:
	{
		Collider2D_t15 * L_24 = ___collider;
		NullCheck(L_24);
		Transform_t8 * L_25 = Component_get_transform_m37(L_24, /*hidden argument*/NULL);
		Vector3_t19  L_26 = V_1;
		NullCheck(L_25);
		Transform_set_position_m35(L_25, L_26, /*hidden argument*/NULL);
		return;
	}
}
// BirdMovement
#include "AssemblyU2DCSharp_BirdMovement.h"
#ifndef _MSC_VER
#else
#endif
// BirdMovement
#include "AssemblyU2DCSharp_BirdMovementMethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
struct Component_t22;
struct Rigidbody2D_t3;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t22;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m44_gshared (Component_t22 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m44(__this, method) (( Object_t * (*) (Component_t22 *, const MethodInfo*))Component_GetComponent_TisObject_t_m44_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t3_m43(__this, method) (( Rigidbody2D_t3 * (*) (Component_t22 *, const MethodInfo*))Component_GetComponent_TisObject_t_m44_gshared)(__this, method)
struct Component_t22;
struct Animator_t4;
struct Component_t22;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m46_gshared (Component_t22 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m46(__this, method) (( Object_t * (*) (Component_t22 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m46_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
#define Component_GetComponentInChildren_TisAnimator_t4_m45(__this, method) (( Animator_t4 * (*) (Component_t22 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m46_gshared)(__this, method)


// System.Void BirdMovement::.ctor()
extern "C" void BirdMovement__ctor_m3 (BirdMovement_t5 * __this, const MethodInfo* method)
{
	{
		__this->___flapSpeed_2 = (90.0f);
		__this->___forwardSpeed_3 = (1.0f);
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BirdMovement::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t3_m43_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisAnimator_t4_m45_MethodInfo_var;
extern "C" void BirdMovement_Start_m4 (BirdMovement_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody2D_t3_m43_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		Component_GetComponentInChildren_TisAnimator_t4_m45_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t3 * L_0 = Component_GetComponent_TisRigidbody2D_t3_m43(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3_m43_MethodInfo_var);
		__this->___bird_6 = L_0;
		Animator_t4 * L_1 = Component_GetComponentInChildren_TisAnimator_t4_m45(__this, /*hidden argument*/Component_GetComponentInChildren_TisAnimator_t4_m45_MethodInfo_var);
		__this->___animator_7 = L_1;
		return;
	}
}
// System.Void BirdMovement::Update()
extern TypeInfo* Input_t23_il2cpp_TypeInfo_var;
extern "C" void BirdMovement_Update_m5 (BirdMovement_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___dead_5);
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		float L_1 = (__this->___deathCooldown_4);
		float L_2 = Time_get_deltaTime_m47(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___deathCooldown_4 = ((float)((float)L_1-(float)L_2));
		float L_3 = (__this->___deathCooldown_4);
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t23_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m48(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t23_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButtonDown_m49(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}

IL_0044:
	{
		int32_t L_6 = Application_get_loadedLevel_m50(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m51(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_004e:
	{
		goto IL_0071;
	}

IL_0053:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t23_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKeyDown_m48(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t23_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetMouseButtonDown_m49(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0071;
		}
	}

IL_006a:
	{
		__this->___didFlap_8 = 1;
	}

IL_0071:
	{
		return;
	}
}
// System.Void BirdMovement::FixedUpdate()
extern TypeInfo* Mathf_t24_il2cpp_TypeInfo_var;
extern "C" void BirdMovement_FixedUpdate_m6 (BirdMovement_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t20  V_1 = {0};
	Vector2_t20  V_2 = {0};
	Vector2_t20  V_3 = {0};
	{
		bool L_0 = (__this->___dead_5);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Rigidbody2D_t3 * L_1 = (__this->___bird_6);
		Vector2_t20  L_2 = Vector2_get_right_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___forwardSpeed_3);
		Vector2_t20  L_4 = Vector2_op_Multiply_m53(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_AddForce_m54(L_1, L_4, /*hidden argument*/NULL);
		bool L_5 = (__this->___didFlap_8);
		if (!L_5)
		{
			goto IL_0091;
		}
	}
	{
		__this->___didFlap_8 = 0;
		Animator_t4 * L_6 = (__this->___animator_7);
		NullCheck(L_6);
		Animator_SetTrigger_m55(L_6, (String_t*) &_stringLiteral3, /*hidden argument*/NULL);
		Rigidbody2D_t3 * L_7 = (__this->___bird_6);
		NullCheck(L_7);
		Vector2_t20  L_8 = Rigidbody2D_get_velocity_m56(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = ((&V_1)->___y_1);
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		Rigidbody2D_t3 * L_10 = (__this->___bird_6);
		Vector2_t20  L_11 = Vector2_get_right_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_set_velocity_m57(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0076:
	{
		Rigidbody2D_t3 * L_12 = (__this->___bird_6);
		Vector2_t20  L_13 = Vector2_get_up_m58(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = (__this->___flapSpeed_2);
		Vector2_t20  L_15 = Vector2_op_Multiply_m53(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_AddForce_m54(L_12, L_15, /*hidden argument*/NULL);
	}

IL_0091:
	{
		V_0 = (0.0f);
		Rigidbody2D_t3 * L_16 = (__this->___bird_6);
		NullCheck(L_16);
		Vector2_t20  L_17 = Rigidbody2D_get_velocity_m56(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		float L_18 = ((&V_2)->___y_1);
		if ((!(((float)L_18) < ((float)(0.25f)))))
		{
			goto IL_00e4;
		}
	}
	{
		Rigidbody2D_t3 * L_19 = (__this->___bird_6);
		NullCheck(L_19);
		Vector2_t20  L_20 = Rigidbody2D_get_velocity_m56(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		float L_21 = ((&V_3)->___y_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t24_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Lerp_m59(NULL /*static, unused*/, (0.0f), (-90.0f), ((float)((float)((-((float)((float)L_21+(float)(0.25f)))))/(float)(2.0f))), /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_00e4:
	{
		Transform_t8 * L_23 = Component_get_transform_m37(__this, /*hidden argument*/NULL);
		float L_24 = V_0;
		Quaternion_t25  L_25 = Quaternion_Euler_m60(NULL /*static, unused*/, (0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_rotation_m61(L_23, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BirdMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void BirdMovement_OnCollisionEnter2D_m7 (BirdMovement_t5 * __this, Collision2D_t16 * ___collision, const MethodInfo* method)
{
	{
		Animator_t4 * L_0 = (__this->___animator_7);
		NullCheck(L_0);
		Animator_SetTrigger_m55(L_0, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
		__this->___dead_5 = 1;
		__this->___deathCooldown_4 = (0.5f);
		return;
	}
}
// BirdReskin
#include "AssemblyU2DCSharp_BirdReskin.h"
#ifndef _MSC_VER
#else
#endif
// BirdReskin
#include "AssemblyU2DCSharp_BirdReskinMethodDeclarations.h"

// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
struct Component_t22;
struct SpriteRenderer_t26;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t26_m62(__this, method) (( SpriteRenderer_t26 * (*) (Component_t22 *, const MethodInfo*))Component_GetComponent_TisObject_t_m44_gshared)(__this, method)


// System.Void BirdReskin::.ctor()
extern "C" void BirdReskin__ctor_m8 (BirdReskin_t7 * __this, const MethodInfo* method)
{
	{
		__this->___numOfSprites_3 = 3;
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BirdReskin::Start()
extern "C" void BirdReskin_Start_m9 (BirdReskin_t7 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___numOfSprites_3);
		int32_t L_1 = Random_Range_m63(NULL /*static, unused*/, 0, L_0, /*hidden argument*/NULL);
		__this->___spriteIndex_4 = L_1;
		return;
	}
}
// System.Void BirdReskin::LateUpdate()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var;
extern "C" void BirdReskin_LateUpdate_m10 (BirdReskin_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	SpriteRenderer_t26 * V_0 = {0};
	int32_t V_1 = 0;
	{
		SpriteRenderer_t26 * L_0 = Component_GetComponent_TisSpriteRenderer_t26_m62(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0050;
	}

IL_000e:
	{
		SpriteRenderer_t26 * L_1 = V_0;
		NullCheck(L_1);
		Sprite_t27 * L_2 = SpriteRenderer_get_sprite_m64(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m65(L_2, /*hidden argument*/NULL);
		SpriteU5BU5D_t6* L_4 = (__this->___birdSprites_2);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(Sprite_t27 **)(Sprite_t27 **)SZArrayLdElema(L_4, L_6)));
		String_t* L_7 = Object_get_name_m65((*(Sprite_t27 **)(Sprite_t27 **)SZArrayLdElema(L_4, L_6)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m39(NULL /*static, unused*/, L_3, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		SpriteRenderer_t26 * L_9 = V_0;
		SpriteU5BU5D_t6* L_10 = (__this->___birdSprites_2);
		int32_t L_11 = V_1;
		int32_t L_12 = (__this->___spriteIndex_4);
		int32_t L_13 = (__this->___numOfSprites_3);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)((int32_t)((int32_t)L_12*(int32_t)L_13)))));
		int32_t L_14 = ((int32_t)((int32_t)L_11+(int32_t)((int32_t)((int32_t)L_12*(int32_t)L_13))));
		NullCheck(L_9);
		SpriteRenderer_set_sprite_m66(L_9, (*(Sprite_t27 **)(Sprite_t27 **)SZArrayLdElema(L_10, L_14)), /*hidden argument*/NULL);
	}

IL_004c:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// CameraTracksPlayer
#include "AssemblyU2DCSharp_CameraTracksPlayer.h"
#ifndef _MSC_VER
#else
#endif
// CameraTracksPlayer
#include "AssemblyU2DCSharp_CameraTracksPlayerMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"


// System.Void CameraTracksPlayer::.ctor()
extern "C" void CameraTracksPlayer__ctor_m11 (CameraTracksPlayer_t9 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraTracksPlayer::Start()
extern "C" void CameraTracksPlayer_Start_m12 (CameraTracksPlayer_t9 * __this, const MethodInfo* method)
{
	Vector3_t19  V_0 = {0};
	Vector3_t19  V_1 = {0};
	{
		GameObject_t18 * L_0 = GameObject_FindGameObjectWithTag_m67(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t8 * L_1 = GameObject_get_transform_m32(L_0, /*hidden argument*/NULL);
		__this->___player_2 = L_1;
		Transform_t8 * L_2 = Component_get_transform_m37(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t19  L_3 = Transform_get_position_m33(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = ((&V_0)->___x_0);
		Transform_t8 * L_5 = (__this->___player_2);
		NullCheck(L_5);
		Vector3_t19  L_6 = Transform_get_position_m33(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = ((&V_1)->___x_0);
		__this->___offsetX_3 = ((float)((float)L_4-(float)L_7));
		return;
	}
}
// System.Void CameraTracksPlayer::Update()
extern "C" void CameraTracksPlayer_Update_m13 (CameraTracksPlayer_t9 * __this, const MethodInfo* method)
{
	Vector3_t19  V_0 = {0};
	Vector3_t19  V_1 = {0};
	{
		Transform_t8 * L_0 = (__this->___player_2);
		bool L_1 = Object_op_Inequality_m68(NULL /*static, unused*/, L_0, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		Transform_t8 * L_2 = Component_get_transform_m37(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t19  L_3 = Transform_get_position_m33(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Transform_t8 * L_4 = (__this->___player_2);
		NullCheck(L_4);
		Vector3_t19  L_5 = Transform_get_position_m33(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ((&V_1)->___x_0);
		float L_7 = (__this->___offsetX_3);
		(&V_0)->___x_0 = ((float)((float)L_6+(float)L_7));
		Transform_t8 * L_8 = Component_get_transform_m37(__this, /*hidden argument*/NULL);
		Vector3_t19  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_m35(L_8, L_9, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// GroundMover
#include "AssemblyU2DCSharp_GroundMover.h"
#ifndef _MSC_VER
#else
#endif
// GroundMover
#include "AssemblyU2DCSharp_GroundMoverMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
struct GameObject_t18;
struct Rigidbody2D_t3;
struct GameObject_t18;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m70_gshared (GameObject_t18 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m70(__this, method) (( Object_t * (*) (GameObject_t18 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m70_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t3_m69(__this, method) (( Rigidbody2D_t3 * (*) (GameObject_t18 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m70_gshared)(__this, method)


// System.Void GroundMover::.ctor()
extern "C" void GroundMover__ctor_m14 (GroundMover_t10 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GroundMover::Start()
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t3_m69_MethodInfo_var;
extern "C" void GroundMover_Start_m15 (GroundMover_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisRigidbody2D_t3_m69_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t18 * L_0 = GameObject_FindGameObjectWithTag_m67(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_t3 * L_1 = GameObject_GetComponent_TisRigidbody2D_t3_m69(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t3_m69_MethodInfo_var);
		__this->___player_2 = L_1;
		return;
	}
}
// System.Void GroundMover::FixedUpdate()
extern "C" void GroundMover_FixedUpdate_m16 (GroundMover_t10 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector2_t20  V_1 = {0};
	{
		Rigidbody2D_t3 * L_0 = (__this->___player_2);
		NullCheck(L_0);
		Vector2_t20  L_1 = Rigidbody2D_get_velocity_m56(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = ((&V_1)->___x_0);
		V_0 = ((float)((float)L_2*(float)(0.75f)));
		Transform_t8 * L_3 = Component_get_transform_m37(__this, /*hidden argument*/NULL);
		Transform_t8 * L_4 = L_3;
		NullCheck(L_4);
		Vector3_t19  L_5 = Transform_get_position_m33(L_4, /*hidden argument*/NULL);
		Vector3_t19  L_6 = Vector3_get_right_m71(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = V_0;
		Vector3_t19  L_8 = Vector3_op_Multiply_m72(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		float L_9 = Time_get_deltaTime_m47(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t19  L_10 = Vector3_op_Multiply_m72(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t19  L_11 = Vector3_op_Addition_m73(NULL /*static, unused*/, L_5, L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m35(L_4, L_11, /*hidden argument*/NULL);
		return;
	}
}
// Score
#include "AssemblyU2DCSharp_Score.h"
#ifndef _MSC_VER
#else
#endif
// Score
#include "AssemblyU2DCSharp_ScoreMethodDeclarations.h"

// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"
struct Component_t22;
struct GUIText_t11;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUIText>()
#define Component_GetComponent_TisGUIText_t11_m74(__this, method) (( GUIText_t11 * (*) (Component_t22 *, const MethodInfo*))Component_GetComponent_TisObject_t_m44_gshared)(__this, method)
struct GameObject_t18;
struct BirdMovement_t5;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BirdMovement>()
// !!0 UnityEngine.GameObject::GetComponent<BirdMovement>()
#define GameObject_GetComponent_TisBirdMovement_t5_m75(__this, method) (( BirdMovement_t5 * (*) (GameObject_t18 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m70_gshared)(__this, method)


// System.Void Score::.ctor()
extern "C" void Score__ctor_m17 (Score_t12 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::.cctor()
extern "C" void Score__cctor_m18 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Score::Start()
extern TypeInfo* Score_t12_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUIText_t11_m74_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBirdMovement_t5_m75_MethodInfo_var;
extern "C" void Score_Start_m19 (Score_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Component_GetComponent_TisGUIText_t11_m74_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		GameObject_GetComponent_TisBirdMovement_t5_m75_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___score_2 = 0;
		GUIText_t11 * L_0 = Component_GetComponent_TisGUIText_t11_m74(__this, /*hidden argument*/Component_GetComponent_TisGUIText_t11_m74_MethodInfo_var);
		__this->___guitext_5 = L_0;
		int32_t L_1 = PlayerPrefs_GetInt_m76(NULL /*static, unused*/, (String_t*) &_stringLiteral6, 0, /*hidden argument*/NULL);
		((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___highScore_3 = L_1;
		GameObject_t18 * L_2 = GameObject_FindGameObjectWithTag_m67(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		NullCheck(L_2);
		BirdMovement_t5 * L_3 = GameObject_GetComponent_TisBirdMovement_t5_m75(L_2, /*hidden argument*/GameObject_GetComponent_TisBirdMovement_t5_m75_MethodInfo_var);
		((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___bird_4 = L_3;
		return;
	}
}
// System.Void Score::AddPoint()
extern TypeInfo* Score_t12_il2cpp_TypeInfo_var;
extern "C" void Score_AddPoint_m20 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		BirdMovement_t5 * L_0 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___bird_4;
		NullCheck(L_0);
		bool L_1 = (L_0->___dead_5);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___score_2;
		((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___score_2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___score_2;
		int32_t L_4 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___highScore_3;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___score_2;
		G_B5_0 = L_5;
		goto IL_003a;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___highScore_3;
		G_B5_0 = L_6;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___highScore_3 = G_B5_0;
		return;
	}
}
// System.Void Score::Update()
extern TypeInfo* ObjectU5BU5D_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Score_t12_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t30_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Score_Update_m21 (Score_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Score_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Int32_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIText_t11 * L_0 = (__this->___guitext_5);
		ObjectU5BU5D_t29* L_1 = ((ObjectU5BU5D_t29*)SZArrayNew(ObjectU5BU5D_t29_il2cpp_TypeInfo_var, 4));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral7;
		ObjectU5BU5D_t29* L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___score_2;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t30_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t29* L_6 = L_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)(String_t*) &_stringLiteral8;
		ObjectU5BU5D_t29* L_7 = L_6;
		int32_t L_8 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___highScore_3;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t30_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)L_10;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m77(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIText_set_text_m78(L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::OnDestroy()
extern TypeInfo* Score_t12_il2cpp_TypeInfo_var;
extern "C" void Score_OnDestroy_m22 (Score_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Score_t12_StaticFields*)Score_t12_il2cpp_TypeInfo_var->static_fields)->___highScore_3;
		PlayerPrefs_SetInt_m79(NULL /*static, unused*/, (String_t*) &_stringLiteral6, L_0, /*hidden argument*/NULL);
		return;
	}
}
// ScorePoint
#include "AssemblyU2DCSharp_ScorePoint.h"
#ifndef _MSC_VER
#else
#endif
// ScorePoint
#include "AssemblyU2DCSharp_ScorePointMethodDeclarations.h"



// System.Void ScorePoint::.ctor()
extern "C" void ScorePoint__ctor_m23 (ScorePoint_t13 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScorePoint::Start()
extern "C" void ScorePoint_Start_m24 (ScorePoint_t13 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ScorePoint::OnTriggerEnter2D(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Score_t12_il2cpp_TypeInfo_var;
extern "C" void ScorePoint_OnTriggerEnter2D_m25 (ScorePoint_t13 * __this, Collider2D_t15 * ___collider, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Score_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t15 * L_0 = ___collider;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m38(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m39(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Score_t12_il2cpp_TypeInfo_var);
		Score_AddPoint_m20(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t18 * L_3 = Component_get_gameObject_m41(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m42(L_3, 0, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// StartScreen
#include "AssemblyU2DCSharp_StartScreen.h"
#ifndef _MSC_VER
#else
#endif
// StartScreen
#include "AssemblyU2DCSharp_StartScreenMethodDeclarations.h"

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"


// System.Void StartScreen::.ctor()
extern "C" void StartScreen__ctor_m26 (StartScreen_t14 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m30(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartScreen::.cctor()
extern "C" void StartScreen__cctor_m27 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void StartScreen::Start()
extern TypeInfo* StartScreen_t14_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var;
extern "C" void StartScreen_Start_m28 (StartScreen_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StartScreen_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StartScreen_t14_il2cpp_TypeInfo_var);
		bool L_0 = ((StartScreen_t14_StaticFields*)StartScreen_t14_il2cpp_TypeInfo_var->static_fields)->___sawOnce_2;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		SpriteRenderer_t26 * L_1 = Component_GetComponent_TisSpriteRenderer_t26_m62(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var);
		NullCheck(L_1);
		Renderer_set_enabled_m80(L_1, 1, /*hidden argument*/NULL);
		Time_set_timeScale_m81(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StartScreen_t14_il2cpp_TypeInfo_var);
		((StartScreen_t14_StaticFields*)StartScreen_t14_il2cpp_TypeInfo_var->static_fields)->___sawOnce_2 = 1;
	}

IL_0026:
	{
		return;
	}
}
// System.Void StartScreen::Update()
extern TypeInfo* Input_t23_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var;
extern "C" void StartScreen_Update_m29 (StartScreen_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_timeScale_m82(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t23_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m48(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t23_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButtonDown_m49(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}

IL_0026:
	{
		Time_set_timeScale_m81(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_t26 * L_3 = Component_GetComponent_TisSpriteRenderer_t26_m62(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t26_m62_MethodInfo_var);
		NullCheck(L_3);
		Renderer_set_enabled_m80(L_3, 0, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
