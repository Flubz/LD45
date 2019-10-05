#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include <Engine/DataTable.h>
#include <Image.h>
#include <Engine/StaticMesh.h>
#include "LD45PlayerControllerBase.generated.h"

UENUM(BlueprintType)
enum class FItemLocation : uint8
{
	Garage UMETA(DisplayName = "Garage"),
	Bathroom UMETA(DisplayName = "Bathroom"),
	Kitchen UMETA(DisplayName = "Kitchen"),
};

USTRUCT(BlueprintType)
struct FItemEdibilityType : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString EdibilityType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 EdibilityDamage;
};

USTRUCT(BlueprintType)
struct FItem : public FTableRowBase
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
	FItemEdibilityType ItemEdibilityType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemCount;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* ItemMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UImage* ItemIcon;
};

USTRUCT(BlueprintType)
struct FInventory : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FItem> Items;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FItemLocation ItemLocation;
};

UCLASS()
class LD45_API ALD45PlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	ALD45PlayerControllerBase();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
};
