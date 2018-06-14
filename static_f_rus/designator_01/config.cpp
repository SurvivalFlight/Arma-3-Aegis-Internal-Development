class CfgPatches
{
	class A3_Static_F_Rus_Designator_01
	{
		addonRootClass="A3_Static_F_Rus";
		requiredAddons[]=
		{
			"A3_Static_F_Aegis_Designator_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Static_Designator_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_Static_Designator_01_F;
	class I_RU_Static_Designator_01_F: I_Static_Designator_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Static_Designator_01_F.jpg";
		_generalMacro="I_RU_Static_Designator_01_F";
		displayName="Remote Designator [Russia]";
		side=2;
		faction="IND_RU_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F_Aegis\Designator_01\Data\LD01_remote_oli_CO.paa",
			"\A3\Weapons_F_Mark\Binocular\Data\LTLM_oli_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"I_Static_Designator_01_Weapon_rus_F"
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526739086";
};
