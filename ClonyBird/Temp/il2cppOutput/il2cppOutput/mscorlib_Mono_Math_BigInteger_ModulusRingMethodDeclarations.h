#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t961;
// Mono.Math.BigInteger
struct BigInteger_t960;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4647 (ModulusRing_t961 * __this, BigInteger_t960 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4648 (ModulusRing_t961 * __this, BigInteger_t960 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t960 * ModulusRing_Multiply_m4649 (ModulusRing_t961 * __this, BigInteger_t960 * ___a, BigInteger_t960 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t960 * ModulusRing_Difference_m4650 (ModulusRing_t961 * __this, BigInteger_t960 * ___a, BigInteger_t960 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t960 * ModulusRing_Pow_m4651 (ModulusRing_t961 * __this, BigInteger_t960 * ___a, BigInteger_t960 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t960 * ModulusRing_Pow_m4652 (ModulusRing_t961 * __this, uint32_t ___b, BigInteger_t960 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
