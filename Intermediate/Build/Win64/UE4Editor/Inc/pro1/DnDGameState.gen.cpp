// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DnDGameState.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDnDGameState() {}
// Cross Module References
	PRO1_API UClass* Z_Construct_UClass_ADnDGameState_NoRegister();
	PRO1_API UClass* Z_Construct_UClass_ADnDGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_pro1();
	PRO1_API UClass* Z_Construct_UClass_UMyPlayer_NoRegister();
// End Cross Module References
	void ADnDGameState::StaticRegisterNativesADnDGameState()
	{
	}
	UClass* Z_Construct_UClass_ADnDGameState_NoRegister()
	{
		return ADnDGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_ADnDGameState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameState();
			Z_Construct_UPackage__Script_pro1();
			OuterClass = ADnDGameState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;


				UProperty* NewProp_Player1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Player1"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Player1, ADnDGameState), 0x0010000000000004, Z_Construct_UClass_UMyPlayer_NoRegister());
				UProperty* NewProp_Player0 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Player0"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Player0, ADnDGameState), 0x0010000000000004, Z_Construct_UClass_UMyPlayer_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ADnDGameState> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DnDGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/DnDGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_Player1, TEXT("Category"), TEXT("Players"));
				MetaData->SetValue(NewProp_Player1, TEXT("ModuleRelativePath"), TEXT("Public/DnDGameState.h"));
				MetaData->SetValue(NewProp_Player0, TEXT("Category"), TEXT("Players"));
				MetaData->SetValue(NewProp_Player0, TEXT("ModuleRelativePath"), TEXT("Public/DnDGameState.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADnDGameState, 1260811462);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADnDGameState(Z_Construct_UClass_ADnDGameState, &ADnDGameState::StaticClass, TEXT("/Script/pro1"), TEXT("ADnDGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADnDGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
