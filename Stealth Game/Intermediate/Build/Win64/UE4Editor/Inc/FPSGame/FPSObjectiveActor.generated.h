// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSObjectiveActor_generated_h
#error "FPSObjectiveActor.generated.h already included, missing '#pragma once' in FPSObjectiveActor.h"
#endif
#define FPSGAME_FPSObjectiveActor_generated_h

#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_RPC_WRAPPERS
#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSObjectiveActor(); \
	friend struct Z_Construct_UClass_AFPSObjectiveActor_Statics; \
public: \
	DECLARE_CLASS(AFPSObjectiveActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSObjectiveActor)


#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSObjectiveActor(); \
	friend struct Z_Construct_UClass_AFPSObjectiveActor_Statics; \
public: \
	DECLARE_CLASS(AFPSObjectiveActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSObjectiveActor)


#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSObjectiveActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSObjectiveActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSObjectiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSObjectiveActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSObjectiveActor(AFPSObjectiveActor&&); \
	NO_API AFPSObjectiveActor(const AFPSObjectiveActor&); \
public:


#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSObjectiveActor(AFPSObjectiveActor&&); \
	NO_API AFPSObjectiveActor(const AFPSObjectiveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSObjectiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSObjectiveActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSObjectiveActor)


#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPSObjectiveActor, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AFPSObjectiveActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__PickupFX() { return STRUCT_OFFSET(AFPSObjectiveActor, PickupFX); }


#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_11_PROLOG
#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_RPC_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_INCLASS \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_INCLASS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSObjectiveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Game_Source_FPSGame_Public_FPSObjectiveActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
