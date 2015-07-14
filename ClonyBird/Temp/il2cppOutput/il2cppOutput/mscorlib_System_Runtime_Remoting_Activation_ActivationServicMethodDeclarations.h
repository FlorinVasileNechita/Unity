﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Activation.ActivationServices
struct ActivationServices_t1161;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1160;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t29;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1185;
// System.String
struct String_t;

// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m6280 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m6281 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t29* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern "C" ConstructionCall_t1185 * ActivationServices_CreateConstructionCall_m6282 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t29* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m6283 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
