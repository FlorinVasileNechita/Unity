﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Monitor
struct Monitor_t1342;
// System.Object
struct Object_t;

// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" void Monitor_Enter_m2500 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" void Monitor_Exit_m2501 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
