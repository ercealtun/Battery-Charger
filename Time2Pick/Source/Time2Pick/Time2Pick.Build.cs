// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Time2Pick : ModuleRules
{
	public Time2Pick(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", 
			"HeadMountedDisplay", "EnhancedInput", "UMG" });
	}
}
