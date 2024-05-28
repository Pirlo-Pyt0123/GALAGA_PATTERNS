// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Sharing_Patterns : ModuleRules
{
	public Sharing_Patterns(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
    }
}
