class CfgPatches
{
	class A3_Props_F_Aegis_Civilian_Camps
	{
		addonRootClass="A3_Props_F_Aegis";
		requiredAddons[]=
		{
			"A3_Props_F_Aegis_Civilian"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_CampingChair_V1_folded_white_F",
			"Land_CampingChair_V1_white_F",
			"Land_FoldingTable_F",
			"Land_FoldingTable_white_F",
			"Land_SmallTable_F",
			"Land_SmallTable_white_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land_CampingChair_V1_F;
	class Land_CampingChair_V1_white_F: Land_CampingChair_V1_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_CampingChair_V1_white_F.jpg";
		_generalMacro="Land_CampingChair_V1_white_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Folding Chair (White)";
		hiddenSelectionsTextures[]=
		{
			"A3\Props_F_Orange\Humanitarian\Camps\Data\campingtable_white_CO.paa"
		};
	};
	class Land_CampingChair_V1_folded_F;
	class Land_CampingChair_V1_folded_white_F: Land_CampingChair_V1_folded_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_CampingChair_V1_folded_white_F.jpg";
		_generalMacro="Land_CampingChair_V1_folded_white_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Folding Chair (Folded, White)";
		hiddenSelectionsTextures[]=
		{
			"A3\Props_F_Orange\Humanitarian\Camps\Data\campingtable_white_CO.paa"
		};
	};
	class ThingX;
	class Land_FoldingTable_F: ThingX
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_FoldingTable_F.jpg";
		_generalMacro="Land_FoldingTable_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Folding Table";
		model="\A3\Props_F_Aegis\Civilian\Camps\FoldingTable_F.p3d";
		icon="iconObject_3x1";
		editorCategory="EdCat_Furniture";
		editorSubcategory="EdSubcat_Camping";
		destrType="DestructNo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Structures_F\Civ\Camping\Data\tablechair_CO.paa"
		};
	};
	class Land_FoldingTable_white_F: Land_FoldingTable_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_FoldingTable_white_F.jpg";
		_generalMacro="Land_FoldingTable_white_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Folding Table (White)";
		hiddenSelectionsTextures[]=
		{
			"A3\Props_F_Orange\Humanitarian\Camps\Data\tablechair_white_CO.paa"
		};
	};
	class Land_SmallTable_F: ThingX
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_SmallTable_F.jpg";
		_generalMacro="Land_SmallTable_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Small Table";
		model="\A3\Props_F_Aegis\Civilian\Camps\SmallTable_F.p3d";
		icon="iconObject_1x2";
		editorCategory="EdCat_Furniture";
		editorSubcategory="EdSubcat_Camping";
		destrType="DestructNo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Props_F_Aegis\Civilian\Camps\Data\smalltable_CO.paa"
		};
	};
	class Land_SmallTable_white_F: Land_SmallTable_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_SmallTable_white_F.jpg";
		_generalMacro="Land_SmallTable_white_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Small Table (White)";
		hiddenSelectionsTextures[]=
		{
			"A3\Props_F_Aegis\Civilian\Camps\Data\smalltable_white_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614329";
};
