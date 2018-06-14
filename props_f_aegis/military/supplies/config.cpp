class CfgPatches
{
	class A3_Props_F_Aegis_Military_Supplies
	{
		addonRootClass="A3_Props_F_Aegis";
		requiredAddons[]=
		{
			"A3_Props_F_Aegis_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_ContainerNet_1_F",
			"Land_ContainerNet_3_F",
			"Land_ContainerNet_6_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Land_ContainerNet_1_F: NonStrategic
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_ContainerNet_1_F.jpg";
		_generalMacro="Land_ContainerNet_1_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Cargo Net (Crate)";
		model="\A3\Props_F_Aegis\Military\Supplies\ContainerNet_1_F.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		destrType="DestructNo";
	};
	class Land_ContainerNet_3_F: NonStrategic
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_ContainerNet_3_F.jpg";
		_generalMacro="Land_ContainerNet_3_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Cargo Net (3 Crates)";
		model="\A3\Props_F_Aegis\Military\Supplies\ContainerNet_3_F.p3d";
		icon="iconObject_1x3";
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		destrType="DestructNo";
	};
	class Land_ContainerNet_6_F: NonStrategic
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_ContainerNet_6_F.jpg";
		_generalMacro="Land_ContainerNet_6_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Cargo Net (6 Crates)";
		model="\A3\Props_F_Aegis\Military\Supplies\ContainerNet_6_F.p3d";
		icon="iconObject_2x3";
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		destrType="DestructNo";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614329";
};
