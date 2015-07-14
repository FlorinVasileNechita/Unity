#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t889;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t556;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t130;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m6735 (DSASignatureDeformatter_t889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m3624 (DSASignatureDeformatter_t889 * __this, AsymmetricAlgorithm_t556 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m6736 (DSASignatureDeformatter_t889 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m6737 (DSASignatureDeformatter_t889 * __this, AsymmetricAlgorithm_t556 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m6738 (DSASignatureDeformatter_t889 * __this, ByteU5BU5D_t130* ___rgbHash, ByteU5BU5D_t130* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
