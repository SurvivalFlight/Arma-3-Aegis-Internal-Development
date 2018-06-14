class CfgPatches
{
	class A3_Boat_F_Rus_Boat_Transport_01
	{
		addonRootClass="A3_Boat_F_Rus";
		requiredAddons[]=
		{
			"A3_Boat_F_Aegis_Boat_Transport_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Boat_Transport_01_F",
			"I_RU_Lifeboat"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_Boat_Transport_01_F;
	class I_RU_Boat_Transport_01_F: I_Boat_Transport_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Boat_Transport_01_F.jpg";
		_generalMacro="I_RU_Boat_Transport_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F\Boat_Transport_01\Data\Boat_Transport_01_CO.paa"
		};
	};
	class Rescue_duck_base_F;
	class I_RU_Lifeboat: Rescue_duck_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Lifeboat.jpg";
		_generalMacro="I_RU_Lifeboat";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890422";
};
