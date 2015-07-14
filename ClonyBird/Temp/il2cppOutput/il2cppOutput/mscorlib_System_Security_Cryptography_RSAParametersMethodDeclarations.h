#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t701;
struct RSAParameters_t701_marshaled;

void RSAParameters_t701_marshal(const RSAParameters_t701& unmarshaled, RSAParameters_t701_marshaled& marshaled);
void RSAParameters_t701_marshal_back(const RSAParameters_t701_marshaled& marshaled, RSAParameters_t701& unmarshaled);
void RSAParameters_t701_marshal_cleanup(RSAParameters_t701_marshaled& marshaled);
