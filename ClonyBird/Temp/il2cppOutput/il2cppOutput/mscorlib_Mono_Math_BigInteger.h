#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t765;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t766;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Math.BigInteger
struct  BigInteger_t960  : public Object_t
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t765* ___data_1;
};
struct BigInteger_t960_StaticFields{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t765* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t766 * ___rng_3;
};
