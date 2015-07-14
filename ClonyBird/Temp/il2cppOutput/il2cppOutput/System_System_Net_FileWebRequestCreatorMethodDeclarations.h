#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t532;
// System.Net.WebRequest
struct WebRequest_t531;
// System.Uri
struct Uri_t212;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1676 (FileWebRequestCreator_t532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t531 * FileWebRequestCreator_Create_m1677 (FileWebRequestCreator_t532 * __this, Uri_t212 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
