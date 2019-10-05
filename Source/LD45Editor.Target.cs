using UnrealBuildTool;
using System.Collections.Generic;

public class LD45EditorTarget : TargetRules
{
	public LD45EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "LD45" } );
	}
}
