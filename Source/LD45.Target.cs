using UnrealBuildTool;
using System.Collections.Generic;

public class LD45Target : TargetRules
{
	public LD45Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "LD45" } );
	}
}
