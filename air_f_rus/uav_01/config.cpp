class CfgPatches
{
	class A3_Air_F_Rus_UAV_01
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_UAV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_UAV_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_UAV_01_F;
	class I_RU_UAV_01_F: I_UAV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_UAV_01_F.jpg";
		_generalMacro="I_RU_UAV_01_F";
		scope=2;
		displayName="AR-2 Vyshka";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_RU_Soldier_lite_F"
		};
		side=2;
		faction="IND_RU_F";
		accuracy=0.5;
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"I_UAV_01_backpack_rus_F"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Rus\UAV_01\Data\UAV_01_rus_CO.paa"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		DLC="Rus";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890361";
};
