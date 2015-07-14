#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Thread
struct Thread_t1176;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1174;
// System.Globalization.CultureInfo
struct CultureInfo_t368;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Thread::.cctor()
extern "C" void Thread__cctor_m7317 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t1174 * Thread_get_CurrentContext_m7318 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t1176 * Thread_CurrentThread_internal_m7319 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" Thread_t1176 * Thread_get_CurrentThread_m7320 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m7321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t368 * Thread_GetCachedCurrentCulture_m7322 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t130* Thread_GetSerializedCurrentCulture_m7323 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m7324 (Thread_t1176 * __this, CultureInfo_t368 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t368 * Thread_GetCachedCurrentUICulture_m7325 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t130* Thread_GetSerializedCurrentUICulture_m7326 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m7327 (Thread_t1176 * __this, CultureInfo_t368 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" CultureInfo_t368 * Thread_get_CurrentCulture_m7328 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C" CultureInfo_t368 * Thread_get_CurrentUICulture_m7329 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m7330 (Thread_t1176 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m7331 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C" int32_t Thread_GetNewManagedId_m7332 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m7333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" int32_t Thread_get_ManagedThreadId_m7334 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m7335 (Thread_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
