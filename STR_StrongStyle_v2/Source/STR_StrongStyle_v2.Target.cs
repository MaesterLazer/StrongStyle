// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class STR_StrongStyle_v2Target : TargetRules
{
	public STR_StrongStyle_v2Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "STR_StrongStyle_v2" } );
	}
}
