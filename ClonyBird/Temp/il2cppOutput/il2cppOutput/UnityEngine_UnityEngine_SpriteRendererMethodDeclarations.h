#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t26;
// UnityEngine.Sprite
struct Sprite_t27;

// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
extern "C" Sprite_t27 * SpriteRenderer_get_sprite_m64 (SpriteRenderer_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C" void SpriteRenderer_set_sprite_m66 (SpriteRenderer_t26 * __this, Sprite_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::GetSprite_INTERNAL()
extern "C" Sprite_t27 * SpriteRenderer_GetSprite_INTERNAL_m590 (SpriteRenderer_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::SetSprite_INTERNAL(UnityEngine.Sprite)
extern "C" void SpriteRenderer_SetSprite_INTERNAL_m591 (SpriteRenderer_t26 * __this, Sprite_t27 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
