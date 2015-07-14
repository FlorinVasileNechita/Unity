#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t133;
struct CacheIndex_t133_marshaled;

void CacheIndex_t133_marshal(const CacheIndex_t133& unmarshaled, CacheIndex_t133_marshaled& marshaled);
void CacheIndex_t133_marshal_back(const CacheIndex_t133_marshaled& marshaled, CacheIndex_t133& unmarshaled);
void CacheIndex_t133_marshal_cleanup(CacheIndex_t133_marshaled& marshaled);
