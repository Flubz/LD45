#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemEdibility.generated.h"

UENUM(BlueprintType)
enum class FItemEdiblityType : uint8
{
	Damage0 UMETA(DisplayName = "Damage0"),
	Damage1 UMETA(DisplayName = "Damage1"),
	Damage2 UMETA(DisplayName = "Damage2"),
	Damage3 UMETA(DisplayName = "Damage3"),
	Damage4 UMETA(DisplayName = "Damage4"),
	Damage5 UMETA(DisplayName = "Damage5"),
};

UCLASS(Blueprintable)
class LD45_API UItemEdibility : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FItemEdiblityType EdibilityType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString EdiblityName;
};

