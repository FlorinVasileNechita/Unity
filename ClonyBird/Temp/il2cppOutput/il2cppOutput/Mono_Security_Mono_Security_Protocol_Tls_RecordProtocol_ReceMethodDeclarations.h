#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t835;
// System.IO.Stream
struct Stream_t834;
// System.Byte[]
struct ByteU5BU5D_t130;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t97;
// System.Threading.WaitHandle
struct WaitHandle_t880;
// System.AsyncCallback
struct AsyncCallback_t77;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3258 (ReceiveRecordAsyncResult_t835 * __this, AsyncCallback_t77 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t130* ___initialBuffer, Stream_t834 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t834 * ReceiveRecordAsyncResult_get_Record_m3259 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t130* ReceiveRecordAsyncResult_get_ResultingBuffer_m3260 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t130* ReceiveRecordAsyncResult_get_InitialBuffer_m3261 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3262 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t97 * ReceiveRecordAsyncResult_get_AsyncException_m3263 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3264 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t880 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3265 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3266 (ReceiveRecordAsyncResult_t835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3267 (ReceiveRecordAsyncResult_t835 * __this, Exception_t97 * ___ex, ByteU5BU5D_t130* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3268 (ReceiveRecordAsyncResult_t835 * __this, Exception_t97 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3269 (ReceiveRecordAsyncResult_t835 * __this, ByteU5BU5D_t130* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
