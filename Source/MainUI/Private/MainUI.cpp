// Copyright Epic Games, Inc. All Rights Reserved.

#include "MainUI.h"

#define LOCTEXT_NAMESPACE "FMainUIModule"

void FMainUIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FMainUIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMainUIModule, MainUI)