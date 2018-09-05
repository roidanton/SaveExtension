// Copyright 2015-2018 Piperift. All Rights Reserved.

#pragma once

#include "ModuleManager.h"

#include "AssetTypeCategories.h"


class ISaveExtensionEditor : public IModuleInterface
{
public:

	EAssetTypeCategories::Type AssetCategory;

	static inline ISaveExtensionEditor &Get() {
		return FModuleManager::LoadModuleChecked<ISaveExtensionEditor>("SaveExtensionEditor");
	}

	static inline bool IsAvailable() {
		return FModuleManager::Get().IsModuleLoaded("SaveExtensionEditor");
	}
};
