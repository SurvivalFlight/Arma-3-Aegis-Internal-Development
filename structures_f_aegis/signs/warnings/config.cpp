class CfgPatches
{
	class A3_Structures_F_Aegis_Signs_Warnings
	{
		addonRootClass="A3_Structures_F_Aegis";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Signs"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Sign_ImprovisedWarning_F",
			"Land_Sign_ImprovisedNoEntry_F",
			"Land_Sign_WarningCheckpoint_AAF_F",
			"Land_Sign_WarningCheckpoint_East_F",
			"Land_Sign_WarningCheckpoint_NATO_F",
			"Land_Sign_WarningMilAreaSpecial_F",
			"Land_Sign_WarningNoEntry_F",
			"Land_Sign_WarningNoPhoto_F",
			"Land_Sign_WarningProhibitedArea_F"
		};
	};
};
class CfgVehicles
{
	class ThingX;
	class House_Small_F;
	class Land_Sign_WarningNoPhoto_F: House_Small_F
	{
		author="$STR_A3_Night515";
		mapSize=1.28;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Sign_WarningNoPhoto_F.jpg";
		_generalMacro="Land_Sign_WarningNoPhoto_F";
		scope=2;
		scopeCurator=2;
		displayName="Sign (No Photography)";
		model="\A3\Structures_F_Aegis\Signs\Warnings\SignM_NoPhoto_F.p3d";
		DLC="Aegis";
		icon="iconObject_10x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_WarningSigns";
		vehicleClass="Signs";
		destrType="DestructTree";
		keepHorizontalPlacement=1;
		class DestructionEffects
		{
		};
	};
	class Land_Sign_WarningProhibitedArea_F: House_Small_F
	{
		author="$STR_A3_Night515";
		mapSize=1.28;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Sign_WarningProhibitedArea_F.jpg";
		_generalMacro="Land_Sign_WarningProhibitedArea_F";
		scope=2;
		scopeCurator=2;
		displayName="Sign (Prohibited Area)";
		model="\A3\Structures_F_Aegis\Signs\Warnings\SignM_ProhibitedArea_F.p3d";
		DLC="Aegis";
		icon="iconObject_10x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_WarningSigns";
		vehicleClass="Signs";
		destrType="DestructTree";
		keepHorizontalPlacement=1;
		class DestructionEffects
		{
		};
	};
	class Land_Sign_WarningCheckpoint_NATO_F: ThingX
	{
		author="$STR_A3_Night515";
		mapSize=0.69999999;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Sign_WarningCheckpoint_NATO_F.jpg";
		_generalMacro="Land_Sign_WarningCheckpoint_NATO_F";
		scope=2;
		scopeCurator=2;
		displayName="Sign (Checkpoint) [NATO]";
		model="\A3\Structures_F_Aegis\Signs\Warnings\SignCP_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Aegis\Signs\Warnings\Data\SignCP_NATO_CO.paa"
		};
		icon="iconObject_1x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_WarningSigns";
		vehicleClass="Signs";
		DLC="Aegis";
	};
	class Land_Sign_WarningCheckpoint_East_F: Land_Sign_WarningCheckpoint_NATO_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Sign_WarningCheckpoint_East_F.jpg";
		_generalMacro="Land_Sign_WarningCheckpoint_East_F";
		scope=2;
		scopeCurator=2;
		displayName="Sign (Checkpoint) [CSAT]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Aegis\Signs\Warnings\Data\SignCP_CSAT_CO.paa"
		};
		DLC="Aegis";
	};
	class Land_Sign_WarningCheckpoint_AAF_F: Land_Sign_WarningCheckpoint_NATO_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Sign_WarningCheckpoint_AAF_F.jpg";
		_generalMacro="Land_Sign_WarningCheckpoint_AAF_F";
		scope=2;
		scopeCurator=2;
		displayName="Sign (Checkpoint) [AAF]";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Aegis\Signs\Warnings\Data\SignCP_AAF_CO.paa"
		};
		DLC="Aegis";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526597989";
};
