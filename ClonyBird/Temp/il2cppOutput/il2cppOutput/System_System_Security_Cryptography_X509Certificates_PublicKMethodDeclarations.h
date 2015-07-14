#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t559;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t557;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t556;
// System.Security.Cryptography.Oid
struct Oid_t558;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t567;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.Security.Cryptography.DSA
struct DSA_t680;
// System.Security.Cryptography.RSA
struct RSA_t681;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1793 (PublicKey_t559 * __this, X509Certificate_t567 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t557 * PublicKey_get_EncodedKeyValue_m1794 (PublicKey_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t557 * PublicKey_get_EncodedParameters_m1795 (PublicKey_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t556 * PublicKey_get_Key_m1796 (PublicKey_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t558 * PublicKey_get_Oid_m1797 (PublicKey_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t130* PublicKey_GetUnsignedBigInteger_m1798 (Object_t * __this /* static, unused */, ByteU5BU5D_t130* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t680 * PublicKey_DecodeDSA_m1799 (Object_t * __this /* static, unused */, ByteU5BU5D_t130* ___rawPublicKey, ByteU5BU5D_t130* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t681 * PublicKey_DecodeRSA_m1800 (Object_t * __this /* static, unused */, ByteU5BU5D_t130* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
