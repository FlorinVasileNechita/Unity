#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t252;
struct GcScoreData_t252_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t262;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t262 * GcScoreData_ToScore_m1125 (GcScoreData_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t252_marshal(const GcScoreData_t252& unmarshaled, GcScoreData_t252_marshaled& marshaled);
void GcScoreData_t252_marshal_back(const GcScoreData_t252_marshaled& marshaled, GcScoreData_t252& unmarshaled);
void GcScoreData_t252_marshal_cleanup(GcScoreData_t252_marshaled& marshaled);
