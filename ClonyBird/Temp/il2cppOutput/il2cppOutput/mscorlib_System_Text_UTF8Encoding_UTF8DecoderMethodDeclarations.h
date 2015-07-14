﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t1335;
// System.Text.DecoderFallback
struct DecoderFallback_t1314;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.Char[]
struct CharU5BU5D_t327;

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
extern "C" void UTF8Decoder__ctor_m7248 (UTF8Decoder_t1335 * __this, DecoderFallback_t1314 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Decoder_GetChars_m7249 (UTF8Decoder_t1335 * __this, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t327* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
