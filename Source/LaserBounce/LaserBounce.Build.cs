// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LaserBounce : ModuleRules
{
	public LaserBounce(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
