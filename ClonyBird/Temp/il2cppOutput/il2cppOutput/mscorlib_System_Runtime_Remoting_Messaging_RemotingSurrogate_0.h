#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t1198;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t1197;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1199;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct  RemotingSurrogateSelector_t1200  : public Object_t
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_next
	Object_t * ____next_3;
};
struct RemotingSurrogateSelector_t1200_StaticFields{
	// System.Type System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::s_cachedTypeObjRef
	Type_t * ___s_cachedTypeObjRef_0;
	// System.Runtime.Remoting.Messaging.ObjRefSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRefSurrogate
	ObjRefSurrogate_t1198 * ____objRefSurrogate_1;
	// System.Runtime.Remoting.Messaging.RemotingSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRemotingSurrogate
	RemotingSurrogate_t1197 * ____objRemotingSurrogate_2;
};
