// Copyright 2022 Michel Brito.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "PrepareProjectStyle.h"

class FPrepareProjectCommands : public TCommands<FPrepareProjectCommands>
{
public:

	FPrepareProjectCommands()
		: TCommands<FPrepareProjectCommands>(TEXT("PrepareProject"), NSLOCTEXT("Contexts", "PrepareProject", "PrepareProject Plugin"), NAME_None, FPrepareProjectStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
