#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t537;
// System.Net.WebRequest
struct WebRequest_t531;
// System.Uri
struct Uri_t212;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1684 (HttpRequestCreator_t537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t531 * HttpRequestCreator_Create_m1685 (HttpRequestCreator_t537 * __this, Uri_t212 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
