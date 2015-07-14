#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t783;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.Security.Cryptography.RSA
struct RSA_t681;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t781;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m2896 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m2897 (Object_t * __this /* static, unused */, ByteU5BU5D_t130* ___array1, ByteU5BU5D_t130* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t130* PKCS1_I2OSP_m2898 (Object_t * __this /* static, unused */, ByteU5BU5D_t130* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t130* PKCS1_OS2IP_m2899 (Object_t * __this /* static, unused */, ByteU5BU5D_t130* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t130* PKCS1_RSASP1_m2900 (Object_t * __this /* static, unused */, RSA_t681 * ___rsa, ByteU5BU5D_t130* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t130* PKCS1_RSAVP1_m2901 (Object_t * __this /* static, unused */, RSA_t681 * ___rsa, ByteU5BU5D_t130* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t130* PKCS1_Sign_v15_m2902 (Object_t * __this /* static, unused */, RSA_t681 * ___rsa, HashAlgorithm_t781 * ___hash, ByteU5BU5D_t130* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m2903 (Object_t * __this /* static, unused */, RSA_t681 * ___rsa, HashAlgorithm_t781 * ___hash, ByteU5BU5D_t130* ___hashValue, ByteU5BU5D_t130* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m2904 (Object_t * __this /* static, unused */, RSA_t681 * ___rsa, HashAlgorithm_t781 * ___hash, ByteU5BU5D_t130* ___hashValue, ByteU5BU5D_t130* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t130* PKCS1_Encode_v15_m2905 (Object_t * __this /* static, unused */, HashAlgorithm_t781 * ___hash, ByteU5BU5D_t130* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
