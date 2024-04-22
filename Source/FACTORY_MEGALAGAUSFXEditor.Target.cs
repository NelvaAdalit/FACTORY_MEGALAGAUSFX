// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FACTORY_MEGALAGAUSFXEditorTarget : TargetRules
{
	public FACTORY_MEGALAGAUSFXEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("FACTORY_MEGALAGAUSFX");
	}
}
