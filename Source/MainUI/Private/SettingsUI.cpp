// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsUI.h"
#include "Engine.h"

void USettingsUI::SetAALow()
{
	GEngine->Exec(GetWorld(), TEXT("r.PostProcessAAQuality 2"));
}

void USettingsUI::SetAAMedium()
{
	GEngine->Exec(GetWorld(), TEXT("r.PostProcessAAQuality 4"));
}

void USettingsUI::SetAAHigh()
{
	GEngine->Exec(GetWorld(), TEXT("r.PostProcessAAQuality 6"));
}

void USettingsUI::SetPPLow()
{
	GEngine->Exec(GetWorld(), TEXT("sg.PostProcessQuality 0"));
}

void USettingsUI::SetPPMedium()
{
	GEngine->Exec(GetWorld(), TEXT("sg.PostProcessQuality 2"));
}

void USettingsUI::SetPPHigh()
{
	GEngine->Exec(GetWorld(), TEXT("sg.PostProcessQuality 3"));
}

void USettingsUI::SetTextureLow()
{
	GEngine->Exec(GetWorld(), TEXT("sg.TextureQuality 0"));
}

void USettingsUI::SetTextureMedium()
{
	GEngine->Exec(GetWorld(), TEXT("sg.TextureQuality 2"));
}

void USettingsUI::SetTextureHigh()
{
	GEngine->Exec(GetWorld(), TEXT("sg.TextureQuality 3"));
}

void USettingsUI::SetDetailLow()
{
	GEngine->Exec(GetWorld(), TEXT("r.DetailMode 0"));
}

void USettingsUI::SetDetailMedium()
{
	GEngine->Exec(GetWorld(), TEXT("r.DetailMode 1"));
}

void USettingsUI::SetDetailHigh()
{
	GEngine->Exec(GetWorld(), TEXT("r.DetailMode 2"));
}

void USettingsUI::SetShadowLow()
{
	GEngine->Exec(GetWorld(), TEXT("sg.ShadowQuality 0"));
}

void USettingsUI::SetShadowMedium()
{
	GEngine->Exec(GetWorld(), TEXT("sg.ShadowQuality 2"));
}

void USettingsUI::SetShadowHigh()
{
	GEngine->Exec(GetWorld(), TEXT("sg.ShadowQuality 3"));
}

void USettingsUI::SetFoliageLow()
{
	GEngine->Exec(GetWorld(), TEXT("foliage.DensityScale 0.4"));
	GEngine->Exec(GetWorld(), TEXT("grass.DensityScale 0.4"));
}

void USettingsUI::SetFoliageMedium()
{
	GEngine->Exec(GetWorld(), TEXT("foliage.DensityScale 0.8"));
	GEngine->Exec(GetWorld(), TEXT("grass.DensityScale 0.8"));
}

void USettingsUI::SetFoliageHigh()
{
	GEngine->Exec(GetWorld(), TEXT("foliage.DensityScale 1.0"));
	GEngine->Exec(GetWorld(), TEXT("grass.DensityScale 1.0"));
}
