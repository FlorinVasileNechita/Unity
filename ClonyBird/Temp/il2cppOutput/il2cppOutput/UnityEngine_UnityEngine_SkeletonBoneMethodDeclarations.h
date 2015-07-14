#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t168;
struct SkeletonBone_t168_marshaled;

void SkeletonBone_t168_marshal(const SkeletonBone_t168& unmarshaled, SkeletonBone_t168_marshaled& marshaled);
void SkeletonBone_t168_marshal_back(const SkeletonBone_t168_marshaled& marshaled, SkeletonBone_t168& unmarshaled);
void SkeletonBone_t168_marshal_cleanup(SkeletonBone_t168_marshaled& marshaled);
