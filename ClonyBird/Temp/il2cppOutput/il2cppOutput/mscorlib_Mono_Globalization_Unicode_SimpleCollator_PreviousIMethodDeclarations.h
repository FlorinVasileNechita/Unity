#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t946;
struct PreviousInfo_t946_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4562 (PreviousInfo_t946 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t946_marshal(const PreviousInfo_t946& unmarshaled, PreviousInfo_t946_marshaled& marshaled);
void PreviousInfo_t946_marshal_back(const PreviousInfo_t946_marshaled& marshaled, PreviousInfo_t946& unmarshaled);
void PreviousInfo_t946_marshal_cleanup(PreviousInfo_t946_marshaled& marshaled);
