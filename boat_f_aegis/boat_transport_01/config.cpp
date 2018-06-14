class CfgPatches
{
	class A3_Boat_F_Aegis_Boat_Transport_01
	{
		addonRootClass="A3_Boat_F_Aegis";
		requiredAddons[]=
		{
			"A3_Boat_F_Boat_Transport_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Boat_Transport_01_F",
			"B_A_Lifeboat"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_Boat_Transport_01_F;
	class B_A_Boat_Transport_01_F: B_Boat_Transport_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Transport_01_F.jpg";
		_generalMacro="B_A_Boat_Transport_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F",
			"B_A_Soldier_F"
		};
	};
	class B_Lifeboat;
	class B_A_Lifeboat: B_Lifeboat
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Lifeboat.jpg";
		_generalMacro="B_A_Lifeboat";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F",
			"B_A_Soldier_F"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525613803";
};
