#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalFunctions.generated.h"

UCLASS()
class LD45_API UGlobalFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static float GetMinimumDeadzone() { return 0.01f; }

	UFUNCTION(BlueprintCallable, Category = Math) static float Remap(float value, float min, float max, float newMin, float newMax)
	{
		return (value - min) / (max - min) * (newMax - newMin) + newMin;
	}

	template <typename T>
	UFUNCTION(BlueprintCallable, Category = Math) static int GetRandomElementFromArray(const TArray<T*> &array_)
	{
		return FMath::RandRange(0, array_.Num() - 1);
	}

	/*UFUNCTION(BlueprintCallable, Category = Math) static bool AttemptToDamage(AActor* other, int damage_)
	{
		UHealthComponent* healthComponent = other->FindComponentByClass<UHealthComponent>();
		if (healthComponent != nullptr)
		{
			healthComponent->Damage(damage_);
			return true;
		}
		else return false;
	}*/
};