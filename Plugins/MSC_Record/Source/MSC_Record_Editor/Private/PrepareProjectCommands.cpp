// Copyright 2022 Michel Brito.

#include "PrepareProjectCommands.h"

#define LOCTEXT_NAMESPACE "FPrepareProjectModule"

void FPrepareProjectCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction,
		"Prepare MSC for packaging",
		"Prepare MSC files and configure settings to prepare project for packaging",
		EUserInterfaceActionType::Button,
		FInputGesture());
}

#undef LOCTEXT_NAMESPACE
