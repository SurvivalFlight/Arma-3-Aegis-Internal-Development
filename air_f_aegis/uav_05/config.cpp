class CfgPatches
{
	class A3_Air_F_Aegis_UAV_05
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Jets_UAV_05"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_T_UAV_05_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_UAV_05_F;
	class B_T_UAV_05_F: B_UAV_05_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_05_F.jpg";
		_generalMacro="B_T_UAV_05_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
