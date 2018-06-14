class CfgPatches
{
	class A3_Boat_F_Aegis_SDV_01
	{
		addonRootClass="A3_Boat_F_Aegis";
		requiredAddons[]=
		{
			"A3_Boat_F_Beta_SDV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_SDV_01_F",
			"B_T_SDV_01_F",
			"O_T_SDV_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_SDV_01_F;
	class B_T_SDV_01_F: B_SDV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_SDV_01_F.jpg";
		_generalMacro="B_T_SDV_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Diver_F";
		typicalCargo[]=
		{
			"B_T_Soldier_F",
			"B_T_Soldier_F"
		};
	};
	class B_A_SDV_01_F: B_SDV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_SDV_01_F.jpg";
		_generalMacro="B_A_SDV_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Diver_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F",
			"B_A_Soldier_F"
		};
	};
	class O_SDV_01_F;
	class O_T_SDV_01_F: O_SDV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_SDV_01_F.jpg";
		_generalMacro="O_T_SDV_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Diver_F";
		typicalCargo[]=
		{
			"O_T_Soldier_F",
			"O_T_Soldier_F"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525613803";
};
