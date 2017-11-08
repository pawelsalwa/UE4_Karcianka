// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Card/Card.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}
// Cross Module References
	PRO1_API UFunction* Z_Construct_UFunction_ACard_Play();
	PRO1_API UClass* Z_Construct_UClass_ACard();
	PRO1_API UClass* Z_Construct_UClass_ACard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_pro1();
// End Cross Module References
	static FName NAME_ACard_Play = FName(TEXT("Play"));
	void ACard::Play()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACard_Play),NULL);
	}
	void ACard::StaticRegisterNativesACard()
	{
	}
	UFunction* Z_Construct_UFunction_ACard_Play()
	{
		UObject* Outer = Z_Construct_UClass_ACard();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Card"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Card/Card.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACard_NoRegister()
	{
		return ACard::StaticClass();
	}
	UClass* Z_Construct_UClass_ACard()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_pro1();
			OuterClass = ACard::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ACard_Play());

				UProperty* NewProp_ManaCost = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ManaCost"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ManaCost, ACard), 0x0010000000000005);
				UProperty* NewProp_Description = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Description"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(Description, ACard), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACard_Play(), "Play"); // 1901929290
				static TCppClassTypeInfo<TCppClassTypeTraits<ACard> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Card/Card.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Card/Card.h"));
				MetaData->SetValue(NewProp_ManaCost, TEXT("Category"), TEXT("Card"));
				MetaData->SetValue(NewProp_ManaCost, TEXT("ModuleRelativePath"), TEXT("Public/Card/Card.h"));
				MetaData->SetValue(NewProp_Description, TEXT("Category"), TEXT("Card"));
				MetaData->SetValue(NewProp_Description, TEXT("ModuleRelativePath"), TEXT("Public/Card/Card.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACard, 2273116638);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACard(Z_Construct_UClass_ACard, &ACard::StaticClass, TEXT("/Script/pro1"), TEXT("ACard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
