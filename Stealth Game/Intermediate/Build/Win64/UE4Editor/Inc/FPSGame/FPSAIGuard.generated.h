// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSGAME_FPSAIGuard_generated_h
#error "FPSAIGuard.generated.h already included, missing '#pragma once' in FPSAIGuard.h"
#endif
#define FPSGAME_FPSAIGuard_generated_h

#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GuardState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GuardState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GuardState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_EVENT_PARMS \
	struct FPSAIGuard_eventOnStateChanged_Parms \
	{ \
		EAIState NewState; \
	};


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_CALLBACK_WRAPPERS
#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend struct Z_Construct_UClass_AFPSAIGuard_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAIGuard(); \
	friend struct Z_Construct_UClass_AFPSAIGuard_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGuard, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGuard) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAIGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAIGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public:


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGuard(AFPSAIGuard&&); \
	NO_API AFPSAIGuard(const AFPSAIGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSAIGuard)


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AFPSAIGuard, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__GuardState() { return STRUCT_OFFSET(AFPSAIGuard, GuardState); }


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_19_PROLOG \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_EVENT_PARMS


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_RPC_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_CALLBACK_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_INCLASS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_CALLBACK_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_INCLASS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSAIGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Game_Source_FPSGame_Public_FPSAIGuard_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) 

enum class EAIState : uint8;
template<> FPSGAME_API UEnum* StaticEnum<EAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
