// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GPR300_FinalProject : ModuleRules
{
	public GPR300_FinalProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
