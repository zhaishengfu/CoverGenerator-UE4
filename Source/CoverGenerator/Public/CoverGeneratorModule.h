// Copyright (c) 2016 Micka�l Fourgeaud

#pragma once

#include "ModuleManager.h"

class FCoverGeneratorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};