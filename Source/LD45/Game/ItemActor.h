#pragma once

#include "CoreMinimal.h"
#include <GameFramework/Actor.h>
#include "Item.h"
#include "ItemActor.generated.h"

UCLASS()
class LD45_API AItemActor : public AActor
{
	GENERATED_BODY()

public:
	AItemActor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UItem* ItemData;
};


