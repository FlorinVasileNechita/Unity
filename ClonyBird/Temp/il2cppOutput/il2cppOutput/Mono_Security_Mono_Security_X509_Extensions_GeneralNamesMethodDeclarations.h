#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t798;
// System.String[]
struct StringU5BU5D_t225;
// Mono.Security.ASN1
struct ASN1_t682;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m3065 (GeneralNames_t798 * __this, ASN1_t682 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t225* GeneralNames_get_DNSNames_m3066 (GeneralNames_t798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t225* GeneralNames_get_IPAddresses_m3067 (GeneralNames_t798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m3068 (GeneralNames_t798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
