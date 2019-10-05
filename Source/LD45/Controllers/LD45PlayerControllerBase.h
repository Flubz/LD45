#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LD45PlayerControllerBase.generated.h"

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
