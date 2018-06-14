class CfgPatches
{
	class A3_Air_F_Rus_UAV_02
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_UAV_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_UAV_02_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_UAV_02_dynamicLoadout_F;
	class I_RU_UAV_02_dynamicLoadout_F: I_UAV_02_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro="I_RU_UAV_02_dynamicLoadout_F";
		scope=2;
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
		side=2;
		faction="IND_RU_F";
		accuracy=1;
		displayName="Pchela-2T";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Rus\UAV_02\Data\UAV_02_rus_CO.paa"
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
