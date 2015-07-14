#pragma once
#include <stdint.h>
// BirdMovement
struct BirdMovement_t5;
// UnityEngine.GUIText
struct GUIText_t11;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Score
struct  Score_t12  : public MonoBehaviour_t2
{
	// UnityEngine.GUIText Score::guitext
	GUIText_t11 * ___guitext_5;
};
struct Score_t12_StaticFields{
	// System.Int32 Score::score
	int32_t ___score_2;
	// System.Int32 Score::highScore
	int32_t ___highScore_3;
	// BirdMovement Score::bird
	BirdMovement_t5 * ___bird_4;
};
