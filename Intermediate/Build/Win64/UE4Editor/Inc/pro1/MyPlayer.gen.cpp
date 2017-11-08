// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MyPlayer.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}
// Cross Module References
	PRO1_API UClass* Z_Construct_UClass_UMyPlayer_NoRegister();
	PRO1_API UClass* Z_Construct_UClass_UMyPlayer();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	UPackage* Z_Construct_UPackage__Script_pro1();
// End Cross Module References
	void UMyPlayer::StaticRegisterNativesUMyPlayer()
	{
	}
	UClass* Z_Construct_UClass_UMyPlayer_NoRegister()
	{
		return UMyPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyPlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPlayer();
			Z_Construct_UPackage__Script_pro1();
			OuterClass = UMyPlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2010008Cu;


				UProperty* NewProp_Antagonist = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Antagonist"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Antagonist, UMyPlayer), 0x0010000000000014, Z_Construct_UClass_UMyPlayer_NoRegister());
				UProperty* NewProp_Protagonist = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Protagonist"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Protagonist, UMyPlayer), 0x0010000000000014, Z_Construct_UClass_UMyPlayer_NoRegister());
				UProperty* NewProp_HP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HP"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(HP, UMyPlayer), 0x0010000000000005);
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UMyPlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MyPlayer.h"));
				MetaData->SetValue(NewProp_Antagonist, TEXT("Category"), TEXT("Players"));
				MetaData->SetValue(NewProp_Antagonist, TEXT("ModuleRelativePath"), TEXT("Public/MyPlayer.h"));
				MetaData->SetValue(NewProp_Protagonist, TEXT("Category"), TEXT("Players"));
				MetaData->SetValue(NewProp_Protagonist, TEXT("ModuleRelativePath"), TEXT("Public/MyPlayer.h"));
				MetaData->SetValue(NewProp_HP, TEXT("Category"), TEXT("Stats"));
				MetaData->SetValue(NewProp_HP, TEXT("ModuleRelativePath"), TEXT("Public/MyPlayer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyPlayer, 718836911);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyPlayer(Z_Construct_UClass_UMyPlayer, &UMyPlayer::StaticClass, TEXT("/Script/pro1"), TEXT("UMyPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
