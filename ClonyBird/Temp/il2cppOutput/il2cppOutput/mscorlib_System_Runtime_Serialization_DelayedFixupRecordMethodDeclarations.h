﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t1248;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1243;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1236;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m6626 (DelayedFixupRecord_t1248 * __this, ObjectRecord_t1243 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t1243 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m6627 (DelayedFixupRecord_t1248 * __this, ObjectManager_t1236 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
