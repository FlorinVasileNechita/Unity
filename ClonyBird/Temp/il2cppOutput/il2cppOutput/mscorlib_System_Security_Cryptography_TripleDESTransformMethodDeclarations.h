#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t1300;
// System.Security.Cryptography.TripleDES
struct TripleDES_t895;
// System.Byte[]
struct ByteU5BU5D_t130;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C" void TripleDESTransform__ctor_m6988 (TripleDESTransform_t1300 * __this, TripleDES_t895 * ___algo, bool ___encryption, ByteU5BU5D_t130* ___key, ByteU5BU5D_t130* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void TripleDESTransform_ECB_m6989 (TripleDESTransform_t1300 * __this, ByteU5BU5D_t130* ___input, ByteU5BU5D_t130* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t130* TripleDESTransform_GetStrongKey_m6990 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
