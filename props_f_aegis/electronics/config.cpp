class CfgPatches
{
	class A3_Props_F_Aegis_Electronics
	{
		addonRootClass="A3_Props_F_Aegis";
		requiredAddons[]=
		{
			"A3_Props_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Fridge_02_F",
			"Land_Stove_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Land_Fridge_02_F: NonStrategic
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Fridge_02_F.jpg";
		_generalMacro="Land_FoldingTable_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Refrigerator (Tall)";
		model="\A3\Props_F_Aegis\Electronics\Fridge_02_F.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		destrType="DestructNo";
	};
	class Land_Stove_01_F: NonStrategic
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Stove_01_F.jpg";
		_generalMacro="Land_Stove_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Electric Stove";
		model="\A3\Props_F_Aegis\Electronics\Stove_01_F.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_Things";
		editorSubcategory="EdSubcat_Electronics";
		destrType="DestructNo";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614329";
};
