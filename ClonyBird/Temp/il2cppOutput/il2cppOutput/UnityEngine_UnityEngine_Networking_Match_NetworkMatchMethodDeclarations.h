﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t213;
// System.Uri
struct Uri_t212;
// UnityEngine.Coroutine
struct Coroutine_t46;
struct Coroutine_t46_marshaled;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t318;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t192;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t319;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t194;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t320;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t196;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t197;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t321;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t198;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C" void NetworkMatch__ctor_m1003 (NetworkMatch_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t212 * NetworkMatch_get_baseUri_m1004 (NetworkMatch_t213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m1005 (NetworkMatch_t213 * __this, Uri_t212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m1006 (NetworkMatch_t213 * __this, uint64_t ___programAppID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t46 * NetworkMatch_CreateMatch_m1007 (NetworkMatch_t213 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t318 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t46 * NetworkMatch_CreateMatch_m1008 (NetworkMatch_t213 * __this, CreateMatchRequest_t192 * ___req, ResponseDelegate_1_t318 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t46 * NetworkMatch_JoinMatch_m1009 (NetworkMatch_t213 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t319 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t46 * NetworkMatch_JoinMatch_m1010 (NetworkMatch_t213 * __this, JoinMatchRequest_t194 * ___req, ResponseDelegate_1_t319 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t46 * NetworkMatch_DestroyMatch_m1011 (NetworkMatch_t213 * __this, uint64_t ___netId, ResponseDelegate_1_t320 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t46 * NetworkMatch_DestroyMatch_m1012 (NetworkMatch_t213 * __this, DestroyMatchRequest_t196 * ___req, ResponseDelegate_1_t320 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t46 * NetworkMatch_DropConnection_m1013 (NetworkMatch_t213 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t320 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t46 * NetworkMatch_DropConnection_m1014 (NetworkMatch_t213 * __this, DropConnectionRequest_t197 * ___req, ResponseDelegate_1_t320 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t46 * NetworkMatch_ListMatches_m1015 (NetworkMatch_t213 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t321 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t46 * NetworkMatch_ListMatches_m1016 (NetworkMatch_t213 * __this, ListMatchRequest_t198 * ___req, ResponseDelegate_1_t321 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
