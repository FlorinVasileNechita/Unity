#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t703;
struct DSAParameters_t703_marshaled;

void DSAParameters_t703_marshal(const DSAParameters_t703& unmarshaled, DSAParameters_t703_marshaled& marshaled);
void DSAParameters_t703_marshal_back(const DSAParameters_t703_marshaled& marshaled, DSAParameters_t703& unmarshaled);
void DSAParameters_t703_marshal_cleanup(DSAParameters_t703_marshaled& marshaled);
