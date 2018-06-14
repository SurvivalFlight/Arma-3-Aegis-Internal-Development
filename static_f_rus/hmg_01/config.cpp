class CfgPatches
{
	class A3_Static_F_Rus_HMG_01
	{
		addonRootClass="A3_Static_F_Rus";
		requiredAddons[]=
		{
			"A3_Static_F_Aegis_HMG_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_HMG_01_A_F",
			"I_RU_HMG_01_high_F",
			"I_RU_HMG_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_HMG_01_F;
	class I_RU_HMG_01_F: I_HMG_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_HMG_01_F.jpg";
		_generalMacro="I_RU_HMG_01_F";
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"I_HMG_01_Weapon_rus_F",
				"I_HMG_01_support_rus_F"
			};
		};
	};
	class I_HMG_01_high_F;
	class I_RU_HMG_01_high_F: I_HMG_01_high_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_HMG_01_high_F.jpg";
		_generalMacro="I_RU_HMG_01_high_F";
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"I_HMG_01_high_Weapon_rus_F",
				"I_HMG_01_support_rus_F"
			};
		};
	};
	class I_HMG_01_A_F;
	class I_RU_HMG_01_A_F: I_HMG_01_A_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_HMG_01_A_F.jpg";
		_generalMacro="I_RU_HMG_01_A_F";
		faction="IND_RU_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"I_HMG_01_A_Weapon_rus_F",
				"I_HMG_01_support_rus_F"
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526739086";
};
