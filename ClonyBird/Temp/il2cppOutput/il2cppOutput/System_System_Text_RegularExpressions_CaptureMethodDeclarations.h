#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Capture
struct Capture_t602;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Capture::.ctor(System.String)
extern "C" void Capture__ctor_m2021 (Capture_t602 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Capture::.ctor(System.String,System.Int32,System.Int32)
extern "C" void Capture__ctor_m2022 (Capture_t602 * __this, String_t* ___text, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Capture::get_Index()
extern "C" int32_t Capture_get_Index_m2023 (Capture_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern "C" int32_t Capture_get_Length_m2024 (Capture_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Capture::get_Value()
extern "C" String_t* Capture_get_Value_m2025 (Capture_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Capture::ToString()
extern "C" String_t* Capture_ToString_m2026 (Capture_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Capture::get_Text()
extern "C" String_t* Capture_get_Text_m2027 (Capture_t602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
