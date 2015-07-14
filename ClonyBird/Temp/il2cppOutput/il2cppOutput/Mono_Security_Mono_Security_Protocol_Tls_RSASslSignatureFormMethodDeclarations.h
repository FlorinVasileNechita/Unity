#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t840;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t556;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter__ctor_m3313 (RSASslSignatureFormatter_t840 * __this, AsymmetricAlgorithm_t556 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t130* RSASslSignatureFormatter_CreateSignature_m3314 (RSASslSignatureFormatter_t840 * __this, ByteU5BU5D_t130* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSASslSignatureFormatter_SetHashAlgorithm_m3315 (RSASslSignatureFormatter_t840 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSASslSignatureFormatter_SetKey_m3316 (RSASslSignatureFormatter_t840 * __this, AsymmetricAlgorithm_t556 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
