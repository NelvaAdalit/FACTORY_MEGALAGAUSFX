// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FACTORY_MEGALAGAUSFXTarget : TargetRules
{
	public FACTORY_MEGALAGAUSFXTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("FACTORY_MEGALAGAUSFX");
	}
}
