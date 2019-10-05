#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <Engine/StaticMesh.h>
#include "Item.generated.h"

UENUM(BlueprintType)
enum class FItemLocation : uint8
{
	Garage UMETA(DisplayName = "Garage"),
	Bathroom UMETA(DisplayName = "Bathroom"),
	Kitchen UMETA(DisplayName = "Kitchen"),
};

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

UCLASS()
class LD45_API UItemEdibility : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FItemEdiblityType EdibilityType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString EdiblityName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ConsumptionDamage;
};

UCLASS()
class LD45_API UItem : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ItemDescription;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ItemCost;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* ItemMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture* ItemIcon;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UItemEdibility* ItemEdibilityType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FItemLocation ItemLocation;
};


