using UnrealBuildTool;

public class STR_StrongStyle_v2Target : TargetRules
{
	public STR_StrongStyle_v2Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("STR_StrongStyle_v2");
	}
}
