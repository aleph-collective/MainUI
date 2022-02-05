// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsUI.generated.h"

/**
 * 
 */
UCLASS()
class MAINUI_API USettingsUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec, BlueprintCallable, Category="Anti-Aliasing")
		void SetAALow();
	UFUNCTION(Exec, BlueprintCallable, Category="Anti-Aliasing")
		void SetAAMedium();
	UFUNCTION(Exec, BlueprintCallable, Category="Anti-Aliasing")
		void SetAAHigh();

	
	UFUNCTION(Exec, BlueprintCallable, Category="Post-Processing")
		void SetPPLow();
	UFUNCTION(Exec, BlueprintCallable, Category="Post-Processing")
		void SetPPMedium();
	UFUNCTION(Exec, BlueprintCallable, Category="Post-Processing")
		void SetPPHigh();

	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetTextureLow();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetTextureMedium();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetTextureHigh();

	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetDetailLow();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetDetailMedium();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetDetailHigh();

	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetShadowLow();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetShadowMedium();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetShadowHigh();

	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetEffectsLow();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetEffectsMedium();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetEffectsHigh();

	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetFoliageLow();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetFoliageMedium();
	UFUNCTION(Exec, BlueprintCallable, Category="Details")
		void SetFoliageHigh();

	UFUNCTION(Exec, BlueprintCallable, Category="Performance")
		void EnableVSync();
	UFUNCTION(Exec, BlueprintCallable, Category="Performance")
		void DisableVSync();

	UFUNCTION(Exec, BlueprintCallable, Category="Performance")
		void EnableFSR();
	UFUNCTION(Exec, BlueprintCallable, Category="Performance")
		void DisableFSR();
	UFUNCTION(Exec, BlueprintCallable, Category="Performance")
		void SetFSRQuality();
	UFUNCTION(Exec, BlueprintCallable, Category="Performance")
		void SetFSRBalance();
	UFUNCTION(Exec, BlueprintCallable, Category="Performance")
		void SetFSRPerformance();
};
