﻿#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t212;
// System.Collections.ArrayList
struct ArrayList_t517;
// System.Net.ICredentials
struct ICredentials_t552;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.WebProxy
struct  WebProxy_t553  : public Object_t
{
	// System.Uri System.Net.WebProxy::address
	Uri_t212 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t517 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	Object_t * ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;
};
