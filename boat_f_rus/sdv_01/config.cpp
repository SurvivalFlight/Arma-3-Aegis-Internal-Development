class CfgPatches
{
	class A3_Boat_F_Rus_SDV_01
	{
		addonRootClass="A3_Boat_F_Rus";
		requiredAddons[]=
		{
			"A3_Boat_F_Aegis_SDV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_SDV_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_SDV_01_F;
	class I_RU_SDV_01_F: I_SDV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_SDV_01_F.jpg";
		_generalMacro="I_RU_SDV_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Diver_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890422";
};
