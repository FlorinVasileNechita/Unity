#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t533;
// System.Net.WebRequest
struct WebRequest_t531;
// System.Uri
struct Uri_t212;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1678 (FtpRequestCreator_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t531 * FtpRequestCreator_Create_m1679 (FtpRequestCreator_t533 * __this, Uri_t212 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
