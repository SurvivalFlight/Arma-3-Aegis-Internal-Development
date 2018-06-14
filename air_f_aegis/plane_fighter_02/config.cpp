class CfgPatches
{
	class A3_Air_F_Aegis_Plane_Fighter_02
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Jets_Plane_Fighter_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_T_Ejection_Seat_Plane_Fighter_02_F",
			"O_T_Plane_Fighter_02_F",
			"O_T_Plane_Fighter_02_Stealth_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
		class TextureSources
		{
			class CamoGreenHex
			{
				displayName="Green Hex [Camo]";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
					"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
					"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
		textureList[]+=
		{
			"CamoGreenHex",
			0
		};
		class EjectionSystem;
	};
	class O_Plane_Fighter_02_F: Plane_Fighter_02_Base_F
	{
	};
	class O_T_Plane_Fighter_02_F: O_Plane_Fighter_02_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Fighter_02_F.jpg";
		_generalMacro="O_T_Plane_Fighter_02_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
		textureList[]=
		{
			"CamoAridHex",
			0,
			"CamoGreyHex",
			0,
			"CamoGreenHex",
			1,
			"CamoBlue",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
			"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
			"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
			"\A3\Data_F\clear_empty.paa"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="O_T_Ejection_Seat_Plane_Fighter_02_F";
		};
	};
	class O_Plane_Fighter_02_Stealth_F: Plane_Fighter_02_Base_F
	{
	};
	class O_T_Plane_Fighter_02_Stealth_F: O_Plane_Fighter_02_Stealth_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Fighter_02_Stealth_F.jpg";
		_generalMacro="O_T_Plane_Fighter_02_Stealth_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
		textureList[]=
		{
			"CamoAridHex",
			0,
			"CamoGreyHex",
			0,
			"CamoGreenHex",
			1,
			"CamoBlue",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
			"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
			"\A3\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
			"\A3\Data_F\clear_empty.paa"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="O_T_Ejection_Seat_Plane_Fighter_02_F";
		};
	};
	class Ejection_Seat_Plane_Fighter_02_base_F;
	class O_T_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		author="$STR_A3_Night515";
		scope=1;
		side=0;
		faction="OPF_T_F";
		crew="O_T_Fighter_Pilot_F";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
