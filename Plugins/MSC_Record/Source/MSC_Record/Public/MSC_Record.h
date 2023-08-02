// Copyright 2022 Michel Brito.

#pragma once
#pragma warning(disable:4005)
#define WIN32_LEAN_AND_MEAN

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMscScreenRecorder, Log, All)

class FMSC_RecordModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
