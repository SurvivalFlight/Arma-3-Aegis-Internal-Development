class CfgPatches
{
	class A3_Structures_F_Rus_Signs_Warnings
	{
		addonRootClass="A3_Structures_F_Rus";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Signs_Warnings"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Sign_WarningCheckpoint_RU_F"
		};
	};
};
class CfgVehicles
{
	class Land_Sign_WarningCheckpoint_NATO_F;
	class Land_Sign_WarningCheckpoint_RU_F: Land_Sign_WarningCheckpoint_NATO_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Russia\Data\CfgVehicles\Land_Sign_WarningCheckpoint_RU_F.jpg";
		_generalMacro="Land_Sign_WarningCheckpoint_RU_F";
		scope=2;
		scopeCurator=2;
		displayName="Sign (Checkpoint) [Russia]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Russia\Signs\Warnings\Data\SignCP_RU_CO.paa"
		};
		DLC="Rus";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890812";
};
