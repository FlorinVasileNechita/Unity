#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
extern TypeInfo BGLooper_t1_il2cpp_TypeInfo;
// BGLooper
#include "AssemblyU2DCSharp_BGLooper.h"
extern TypeInfo BirdMovement_t5_il2cpp_TypeInfo;
// BirdMovement
#include "AssemblyU2DCSharp_BirdMovement.h"
extern TypeInfo BirdReskin_t7_il2cpp_TypeInfo;
// BirdReskin
#include "AssemblyU2DCSharp_BirdReskin.h"
extern TypeInfo CameraTracksPlayer_t9_il2cpp_TypeInfo;
// CameraTracksPlayer
#include "AssemblyU2DCSharp_CameraTracksPlayer.h"
extern TypeInfo GroundMover_t10_il2cpp_TypeInfo;
// GroundMover
#include "AssemblyU2DCSharp_GroundMover.h"
extern TypeInfo Score_t12_il2cpp_TypeInfo;
// Score
#include "AssemblyU2DCSharp_Score.h"
extern TypeInfo ScorePoint_t13_il2cpp_TypeInfo;
// ScorePoint
#include "AssemblyU2DCSharp_ScorePoint.h"
extern TypeInfo StartScreen_t14_il2cpp_TypeInfo;
// StartScreen
#include "AssemblyU2DCSharp_StartScreen.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DCSharp_Assembly_Types[10] = 
{
	&U3CModuleU3E_t0_il2cpp_TypeInfo,
	&BGLooper_t1_il2cpp_TypeInfo,
	&BirdMovement_t5_il2cpp_TypeInfo,
	&BirdReskin_t7_il2cpp_TypeInfo,
	&CameraTracksPlayer_t9_il2cpp_TypeInfo,
	&GroundMover_t10_il2cpp_TypeInfo,
	&Score_t12_il2cpp_TypeInfo,
	&ScorePoint_t13_il2cpp_TypeInfo,
	&StartScreen_t14_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
Il2CppAssembly g_AssemblyU2DCSharp_Assembly = 
{
	{ "Assembly-CSharp", NULL, NULL, NULL, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DCSharp_dll_Image,
	1,
};
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_Assembly_AttributeGenerators[2];
static const char* s_StringTable[19] = 
{
	"numBGPanels",
	"pipeMax",
	"pipeMin",
	"flapSpeed",
	"forwardSpeed",
	"deathCooldown",
	"dead",
	"bird",
	"animator",
	"didFlap",
	"birdSprites",
	"numOfSprites",
	"spriteIndex",
	"player",
	"offsetX",
	"score",
	"highScore",
	"guitext",
	"sawOnce",
};
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
static const Il2CppFieldDefinition s_FieldTable[21] = 
{
	{ 0, 19, offsetof(BGLooper_t1, ___numBGPanels_2), 0 } ,
	{ 1, 20, offsetof(BGLooper_t1, ___pipeMax_3), 0 } ,
	{ 2, 20, offsetof(BGLooper_t1, ___pipeMin_4), 0 } ,
	{ 3, 20, offsetof(BirdMovement_t5, ___flapSpeed_2), 0 } ,
	{ 4, 20, offsetof(BirdMovement_t5, ___forwardSpeed_3), 0 } ,
	{ 5, 20, offsetof(BirdMovement_t5, ___deathCooldown_4), 0 } ,
	{ 6, 25, offsetof(BirdMovement_t5, ___dead_5), 0 } ,
	{ 7, 26, offsetof(BirdMovement_t5, ___bird_6), 0 } ,
	{ 8, 27, offsetof(BirdMovement_t5, ___animator_7), 0 } ,
	{ 9, 28, offsetof(BirdMovement_t5, ___didFlap_8), 0 } ,
	{ 10, 30, offsetof(BirdReskin_t7, ___birdSprites_2), 0 } ,
	{ 11, 19, offsetof(BirdReskin_t7, ___numOfSprites_3), 0 } ,
	{ 12, 19, offsetof(BirdReskin_t7, ___spriteIndex_4), 0 } ,
	{ 13, 34, offsetof(CameraTracksPlayer_t9, ___player_2), 0 } ,
	{ 14, 20, offsetof(CameraTracksPlayer_t9, ___offsetX_3), 0 } ,
	{ 13, 26, offsetof(GroundMover_t10, ___player_2), 0 } ,
	{ 15, 39, offsetof(Score_t12_StaticFields, ___score_2), 0 } ,
	{ 16, 39, offsetof(Score_t12_StaticFields, ___highScore_3), 0 } ,
	{ 7, 40, offsetof(Score_t12_StaticFields, ___bird_4), 0 } ,
	{ 17, 41, offsetof(Score_t12, ___guitext_5), 0 } ,
	{ 18, 45, offsetof(StartScreen_t14_StaticFields, ___sawOnce_2), 0 } ,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
Il2CppImage g_AssemblyU2DCSharp_dll_Image = 
{
	 "Assembly-CSharp.dll" ,
	&g_AssemblyU2DCSharp_Assembly,
	g_AssemblyU2DCSharp_Assembly_Types,
	9,
	NULL,
	s_StringTable,
	19,
	s_FieldTable,
	21,
	NULL,
	0,
	NULL,
	0,
	2,
	NULL,
	g_AssemblyU2DCSharp_Assembly_AttributeGenerators,
};
