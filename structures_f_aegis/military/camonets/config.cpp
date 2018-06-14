class CfgPatches
{
	class A3_Structures_F_Aegis_Military_Camonets
	{
		addonRootClass="A3_Structures_F_Aegis";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"CamoNet_sand_big_Curator_F",
			"CamoNet_sand_big_F",
			"CamoNet_sand_Curator_F",
			"CamoNet_sand_F",
			"CamoNet_sand_open_Curator_F",
			"CamoNet_sand_open_F",
			"CamoNet_tna_big_Curator_F",
			"CamoNet_tna_big_F",
			"CamoNet_tna_Curator_F",
			"CamoNet_tna_F",
			"CamoNet_tna_open_Curator_F",
			"CamoNet_tna_open_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class CamoNet_BLUFOR_F;
	class CamoNet_sand_F: CamoNet_BLUFOR_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_sand_F.jpg";
		_generalMacro="CamoNet_sand_F";
		scope=2;
		scopeCurator=0;
		displayName="Camouflage Net (Sand)";
		DLC="Aegis";
		editorCategory="EdCat_Structures_Altis";
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Aegis\Military\Camonets\Data\CamoNet_sand_CA.paa"
		};
	};
	class CamoNet_tna_F: CamoNet_BLUFOR_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_tna_F.jpg";
		_generalMacro="CamoNet_tna_F";
		scope=2;
		scopeCurator=0;
		displayName="Camouflage Net (Tropic)";
		DLC="Aegis";
		editorCategory="EdCat_Structures_Tanoa";
		faction="BLU_T_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Aegis\Military\Camonets\Data\CamoNet_tna_CA.paa"
		};
	};
	class CamoNet_sand_open_F: CamoNet_sand_F
	{
		author="$STR_A3_Night515";
		mapSize=21.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_sand_open_F.jpg";
		_generalMacro="CamoNet_sand_open_F";
		displayName="Camouflage Net (Open, Sand)";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
		DLC="Aegis";
	};
	class CamoNet_tna_open_F: CamoNet_tna_F
	{
		author="$STR_A3_Night515";
		mapSize=21.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_tna_open_F.jpg";
		_generalMacro="CamoNet_tna_open_F";
		displayName="Camouflage Net (Open, Tropic)";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
		DLC="Aegis";
	};
	class CamoNet_sand_big_F: CamoNet_sand_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_sand_big_F.jpg";
		_generalMacro="CamoNet_sand_big_F";
		displayName="Camouflage Vehicle Cover (Sand)";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		DLC="Aegis";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_tna_big_F: CamoNet_tna_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_tna_big_F.jpg";
		_generalMacro="CamoNet_tna_big_F";
		displayName="Camouflage Vehicle Cover (Tropic)";
		model="\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		DLC="Aegis";
		icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_Big_CA.paa";
	};
	class CamoNet_sand_Curator_F: CamoNet_sand_F
	{
		author="$STR_A3_Night515";
		_generalMacro="CamoNet_sand_Curator_F";
		scope=1;
		scopeCurator=2;
		DLC="Aegis";
		faction="Default";
	};
	class CamoNet_tna_Curator_F: CamoNet_tna_F
	{
		author="$STR_A3_Night515";
		_generalMacro="CamoNet_tna_Curator_F";
		scope=1;
		scopeCurator=2;
		DLC="Aegis";
		faction="Default";
	};
	class CamoNet_sand_open_Curator_F: CamoNet_sand_open_F
	{
		author="$STR_A3_Night515";
		_generalMacro="CamoNet_sand_open_Curator_F";
		scope=1;
		scopeCurator=2;
		DLC="Aegis";
		faction="Default";
	};
	class CamoNet_tna_open_Curator_F: CamoNet_tna_open_F
	{
		author="$STR_A3_Night515";
		_generalMacro="CamoNet_tna_open_Curator_F";
		scope=1;
		scopeCurator=2;
		DLC="Aegis";
		faction="Default";
	};
	class CamoNet_sand_big_Curator_F: CamoNet_sand_big_F
	{
		author="$STR_A3_Night515";
		_generalMacro="CamoNet_sand_big_Curator_F";
		scope=1;
		scopeCurator=2;
		DLC="Aegis";
		faction="Default";
	};
	class CamoNet_tna_big_Curator_F: CamoNet_tna_big_F
	{
		author="$STR_A3_Night515";
		_generalMacro="CamoNet_tna_big_Curator_F";
		scope=1;
		scopeCurator=2;
		DLC="Aegis";
		faction="Default";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526597989";
};
