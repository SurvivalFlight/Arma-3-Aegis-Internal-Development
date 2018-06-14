class CfgPatches
{
	class A3_Props_F_Aegis_Items_Military
	{
		addonRootClass="A3_Props_F_Aegis";
		requiredAddons[]=
		{
			"A3_Props_F_Aegis_Items"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Magazine_caseless_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Items_base_F;
	class Land_Magazine_caseless_F: Items_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Magazine_caseless_F.jpg";
		_generalMacro="Land_Magazine_caseless_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Magazine (Caseless)";
		model="\A3\Weapons_F\Ammo\mag_mxrifle.p3d";
		icon="iconObject_2x3";
		editorSubcategory="EdSubcat_Military";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614329";
};
