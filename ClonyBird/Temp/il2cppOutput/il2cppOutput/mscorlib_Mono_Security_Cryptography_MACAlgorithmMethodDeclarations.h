#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t969;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t788;
// System.Byte[]
struct ByteU5BU5D_t130;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m4784 (MACAlgorithm_t969 * __this, SymmetricAlgorithm_t788 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m4785 (MACAlgorithm_t969 * __this, ByteU5BU5D_t130* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m4786 (MACAlgorithm_t969 * __this, ByteU5BU5D_t130* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t130* MACAlgorithm_Final_m4787 (MACAlgorithm_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
