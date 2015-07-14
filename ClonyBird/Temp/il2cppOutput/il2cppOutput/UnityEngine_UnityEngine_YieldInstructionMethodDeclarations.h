#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t43;
struct YieldInstruction_t43_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m723 (YieldInstruction_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t43_marshal(const YieldInstruction_t43& unmarshaled, YieldInstruction_t43_marshaled& marshaled);
void YieldInstruction_t43_marshal_back(const YieldInstruction_t43_marshaled& marshaled, YieldInstruction_t43& unmarshaled);
void YieldInstruction_t43_marshal_cleanup(YieldInstruction_t43_marshaled& marshaled);
