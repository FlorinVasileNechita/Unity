#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t763;
// Mono.Math.BigInteger
struct BigInteger_t762;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2771 (ModulusRing_t763 * __this, BigInteger_t762 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2772 (ModulusRing_t763 * __this, BigInteger_t762 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t762 * ModulusRing_Multiply_m2773 (ModulusRing_t763 * __this, BigInteger_t762 * ___a, BigInteger_t762 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t762 * ModulusRing_Difference_m2774 (ModulusRing_t763 * __this, BigInteger_t762 * ___a, BigInteger_t762 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t762 * ModulusRing_Pow_m2775 (ModulusRing_t763 * __this, BigInteger_t762 * ___a, BigInteger_t762 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t762 * ModulusRing_Pow_m2776 (ModulusRing_t763 * __this, uint32_t ___b, BigInteger_t762 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
