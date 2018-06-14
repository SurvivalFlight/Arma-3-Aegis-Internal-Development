class CfgPatches
{
	class A3_Structures_F_Aegis_Military_Fortifications
	{
		addonRootClass="A3_Structures_F_Aegis";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Military",
			"A3_Structures_F_Argo_Military_Fortifications",
			"A3_Structures_F_Tank_Military_Fortifications"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_BagBunker_Artillery_F",
			"Land_BagBunker_Artillery_green_F",
			"Land_BagBunker_Large_F",
			"Land_BagBunker_Rampart_green_F",
			"Land_BagBunker_Rampart_F",
			"Land_BagBunker_Small_F",
			"Land_CzechHedgehog_01_F"
		};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_CzechHedgehog_01_F: House_F
	{
		scope=2;
		scopeCurator=2;
	};
	class BagBunker_base_F;
	class Land_BagBunker_Large_F: BagBunker_base_F
	{
		model="\A3\Structures_F_Aegis\Military\Fortifications\BagBunker_Large_F.p3d";
	};
	class Land_BagBunker_Small_F: BagBunker_base_F
	{
		model="\A3\Structures_F_Aegis\Military\Fortifications\BagBunker_Small_F.p3d";
	};
	class Land_BagBunker_Artillery_F: BagBunker_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Artillery_F.jpg";
		_generalMacro="Land_BagBunker_Artillery_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Bunker Wall (Artillery)";
		model="\A3\Structures_F_Aegis\Military\Fortifications\BagBunker_Artillery_F.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_Structures_Altis";
	};
	class Land_BagBunker_Artillery_green_F: BagBunker_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Artillery_green_F.jpg";
		_generalMacro="Land_BagBunker_Artillery_green_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Bunker Wall (Artillery, Green)";
		model="\A3\Structures_F_Aegis\Military\Fortifications\BagBunker_Artillery_green_F.p3d";
		icon="iconObject_1x1";
		editorCategory="EdCat_Structures_Tanoa";
	};
	class Land_BagBunker_Rampart_F: BagBunker_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Rampart_F.jpg";
		_generalMacro="Land_BagBunker_Rampart_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Bunker Wall (Rampart)";
		model="\A3\Structures_F_Aegis\Military\Fortifications\BagBunker_Rampart_F.p3d";
		icon="iconObject_1x3";
		editorCategory="EdCat_Structures_Altis";
	};
	class Land_BagBunker_Rampart_green_F: BagBunker_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Rampart_green_F.jpg";
		_generalMacro="Land_BagBunker_Rampart_green_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Bunker Wall (Rampart, Green)";
		model="\A3\Structures_F_Aegis\Military\Fortifications\BagBunker_Rampart_green_F.p3d";
		icon="iconObject_1x3";
		editorCategory="EdCat_Structures_Tanoa";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526597989";
};
