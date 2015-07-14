#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Byte>
struct Action_1_t1969;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t76;
// System.AsyncCallback
struct AsyncCallback_t77;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m9020_gshared (Action_1_t1969 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m9020(__this, ___object, ___method, method) (( void (*) (Action_1_t1969 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9020_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C" void Action_1_Invoke_m9022_gshared (Action_1_t1969 * __this, uint8_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m9022(__this, ___obj, method) (( void (*) (Action_1_t1969 *, uint8_t, const MethodInfo*))Action_1_Invoke_m9022_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m9024_gshared (Action_1_t1969 * __this, uint8_t ___obj, AsyncCallback_t77 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m9024(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1969 *, uint8_t, AsyncCallback_t77 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9024_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m9026_gshared (Action_1_t1969 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m9026(__this, ___result, method) (( void (*) (Action_1_t1969 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9026_gshared)(__this, ___result, method)
