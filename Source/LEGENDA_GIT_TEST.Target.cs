// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class LEGENDA_GIT_TESTTarget : TargetRules
{
	public LEGENDA_GIT_TESTTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "LEGENDA_GIT_TEST" } );
	}
}
