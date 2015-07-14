#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t993;
// System.Collections.Stack
struct Stack_t298;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t994  : public SmallXmlParser_t995
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t993 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t993 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t298 * ___stack_15;
};
