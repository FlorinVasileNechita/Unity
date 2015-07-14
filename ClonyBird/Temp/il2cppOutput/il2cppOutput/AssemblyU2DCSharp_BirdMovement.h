#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3;
// UnityEngine.Animator
struct Animator_t4;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BirdMovement
struct  BirdMovement_t5  : public MonoBehaviour_t2
{
	// System.Single BirdMovement::flapSpeed
	float ___flapSpeed_2;
	// System.Single BirdMovement::forwardSpeed
	float ___forwardSpeed_3;
	// System.Single BirdMovement::deathCooldown
	float ___deathCooldown_4;
	// System.Boolean BirdMovement::dead
	bool ___dead_5;
	// UnityEngine.Rigidbody2D BirdMovement::bird
	Rigidbody2D_t3 * ___bird_6;
	// UnityEngine.Animator BirdMovement::animator
	Animator_t4 * ___animator_7;
	// System.Boolean BirdMovement::didFlap
	bool ___didFlap_8;
};
