// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsUI.h"
#include "EngineMinimal.h"
#include "GameFramework/GameUserSettings.h"

void USettingsUI::SetAALow()
{
	GEngine->GameUserSettings->SetAntiAliasingQuality(0);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetAAMedium()
{
	GEngine->GameUserSettings->SetAntiAliasingQuality(2);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetAAHigh()
{
	GEngine->GameUserSettings->SetAntiAliasingQuality(4);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetPPLow()
{
	GEngine->GameUserSettings->SetPostProcessingQuality(0);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetPPMedium()
{
	GEngine->GameUserSettings->SetPostProcessingQuality(2);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetPPHigh()
{
	GEngine->GameUserSettings->SetPostProcessingQuality(3);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetTextureLow()
{
	GEngine->GameUserSettings->SetTextureQuality(0);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetTextureMedium()
{
	GEngine->GameUserSettings->SetTextureQuality(2);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetTextureHigh()
{
	GEngine->GameUserSettings->SetTextureQuality(3);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetDetailLow()
{
	GEngine->Exec(GetWorld(), TEXT("r.DetailMode 0"));
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetDetailMedium()
{
	GEngine->Exec(GetWorld(), TEXT("r.DetailMode 1"));
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetDetailHigh()
{
	GEngine->Exec(GetWorld(), TEXT("r.DetailMode 2"));
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetShadowLow()
{
	GEngine->GameUserSettings->SetShadowQuality(0);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetShadowMedium()
{
	GEngine->GameUserSettings->SetShadowQuality(2);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetShadowHigh()
{
	GEngine->GameUserSettings->SetShadowQuality(3);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetEffectsLow()
{
	GEngine->GameUserSettings->SetVisualEffectQuality(0);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetEffectsMedium()
{
	GEngine->GameUserSettings->SetVisualEffectQuality(2);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetEffectsHigh()
{
	GEngine->GameUserSettings->SetVisualEffectQuality(3);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetFoliageLow()
{
	GEngine->GameUserSettings->SetFoliageQuality(0);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetFoliageMedium()
{
	GEngine->GameUserSettings->SetFoliageQuality(2);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetFoliageHigh()
{
	GEngine->GameUserSettings->SetFoliageQuality(3);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::EnableVSync()
{
	GEngine->GameUserSettings->SetVSyncEnabled(true);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::DisableVSync()
{
	GEngine->GameUserSettings->SetVSyncEnabled(false);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::EnableFSR()
{
	GEngine->Exec(GetWorld(),TEXT("r.FidelityFX.FSR.Enabled 1"));
	UE_LOG(LogTemp, Warning, TEXT("AMD FSR is now enabled."));
}

void USettingsUI::DisableFSR()
{
	GEngine->Exec(GetWorld(),TEXT("r.FidelityFX.FSR.Enabled 0"));
	GEngine->GameUserSettings->SetResolutionScaleValueEx(100);
	GEngine->GameUserSettings->ApplySettings(true);
	UE_LOG(LogTemp, Warning, TEXT("AMD FSR is now disabled."));
}

void USettingsUI::SetFSRQuality()
{
	GEngine->GameUserSettings->SetResolutionScaleValueEx(88);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetFSRBalance()
{
	GEngine->GameUserSettings->SetResolutionScaleValueEx(65);
	GEngine->GameUserSettings->ApplySettings(true);
}

void USettingsUI::SetFSRPerformance()
{
	GEngine->GameUserSettings->SetResolutionScaleValueEx(50);
	GEngine->GameUserSettings->ApplySettings(true);
}
