#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t251;
struct GcAchievementData_t251_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t260;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t260 * GcAchievementData_ToAchievement_m1124 (GcAchievementData_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t251_marshal(const GcAchievementData_t251& unmarshaled, GcAchievementData_t251_marshaled& marshaled);
void GcAchievementData_t251_marshal_back(const GcAchievementData_t251_marshaled& marshaled, GcAchievementData_t251& unmarshaled);
void GcAchievementData_t251_marshal_cleanup(GcAchievementData_t251_marshaled& marshaled);
