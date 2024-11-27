#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FinalEscortBaseEvent.generated.h"






UCLASS(Blueprintable, Abstract)
class UFinalEscortBaseEvent : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Event")
	FString EventName;

	UFinalEscortBaseEvent() : EventName(TEXT("DefaultEvent")) {}

	UFUNCTION(BlueprintNativeEvent, Category = "Event")
	void TriggerEvent();
	virtual void TriggerEvent_Implementation();
};
