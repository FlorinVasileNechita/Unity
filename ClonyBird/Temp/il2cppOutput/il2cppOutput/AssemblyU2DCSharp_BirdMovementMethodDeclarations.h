#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BirdMovement
struct BirdMovement_t5;
// UnityEngine.Collision2D
struct Collision2D_t16;

// System.Void BirdMovement::.ctor()
extern "C" void BirdMovement__ctor_m3 (BirdMovement_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BirdMovement::Start()
extern "C" void BirdMovement_Start_m4 (BirdMovement_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BirdMovement::Update()
extern "C" void BirdMovement_Update_m5 (BirdMovement_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BirdMovement::FixedUpdate()
extern "C" void BirdMovement_FixedUpdate_m6 (BirdMovement_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BirdMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void BirdMovement_OnCollisionEnter2D_m7 (BirdMovement_t5 * __this, Collision2D_t16 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
