#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t681;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t766;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t899  : public AsymmetricKeyExchangeFormatter_t1261
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t681 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t766 * ___random_1;
};
