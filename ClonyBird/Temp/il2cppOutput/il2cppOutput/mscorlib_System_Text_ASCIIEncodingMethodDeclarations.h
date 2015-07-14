#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1313;
// System.Char[]
struct CharU5BU5D_t327;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1324;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1315;
// System.Text.Decoder
struct Decoder_t1046;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m7053 (ASCIIEncoding_t1313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7054 (ASCIIEncoding_t1313 * __this, CharU5BU5D_t327* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7055 (ASCIIEncoding_t1313 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7056 (ASCIIEncoding_t1313 * __this, CharU5BU5D_t327* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m7057 (ASCIIEncoding_t1313 * __this, CharU5BU5D_t327* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1324 ** ___buffer, CharU5BU5D_t327** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7058 (ASCIIEncoding_t1313 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m7059 (ASCIIEncoding_t1313 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1324 ** ___buffer, CharU5BU5D_t327** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m7060 (ASCIIEncoding_t1313 * __this, ByteU5BU5D_t130* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m7061 (ASCIIEncoding_t1313 * __this, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t327* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m7062 (ASCIIEncoding_t1313 * __this, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t327* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1315 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m7063 (ASCIIEncoding_t1313 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m7064 (ASCIIEncoding_t1313 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m7065 (ASCIIEncoding_t1313 * __this, ByteU5BU5D_t130* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7066 (ASCIIEncoding_t1313 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7067 (ASCIIEncoding_t1313 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1046 * ASCIIEncoding_GetDecoder_m7068 (ASCIIEncoding_t1313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
