#pragma once

#include "CoreMinimal.h"
#include <GameFramework/Actor.h>
#include <Engine/StaticMesh.h>
#include "ItemEdibility.h"
#include <Engine/Texture2D.h>
#include "ItemActor.generated.h"

UENUM(BlueprintType)
enum class FItemLocation : uint8
{
	Garage UMETA(DisplayName = "Garage"),
	Bathroom UMETA(DisplayName = "Bathroom"),
	Kitchen UMETA(DisplayName = "Kitchen"),
};

USTRUCT(Blueprintable)
struct FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ItemDescription;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ItemCost;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ItemConsumptionDamage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* ItemMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* ItemIcon;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UItemEdibility* ItemEdibilityType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FItemLocation ItemLocation;
};

UCLASS()
class LD45_API AItemActor : public AActor
{
	GENERATED_BODY()

public:
	AItemActor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FItemData ItemData;
};


