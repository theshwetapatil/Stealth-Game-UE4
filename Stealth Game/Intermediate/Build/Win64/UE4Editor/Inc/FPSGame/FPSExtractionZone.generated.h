// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_FPSExtractionZone_generated_h
#error "FPSExtractionZone.generated.h already included, missing '#pragma once' in FPSExtractionZone.h"
#endif
#define FPSGAME_FPSExtractionZone_generated_h

#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSExtractionZone(); \
	friend struct Z_Construct_UClass_AFPSExtractionZone_Statics; \
public: \
	DECLARE_CLASS(AFPSExtractionZone, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionZone)


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSExtractionZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSExtractionZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public:


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionZone(AFPSExtractionZone&&); \
	NO_API AFPSExtractionZone(const AFPSExtractionZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSExtractionZone)


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(AFPSExtractionZone, OverlapComp); }


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_11_PROLOG
#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_PRIVATE_PROPERTY_OFFSET \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_INCLASS_NO_PURE_DECLS \
	Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSExtractionZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Game_Source_FPSGame_Public_FPSExtractionZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
