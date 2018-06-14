class CfgPatches
{
	class A3_Air_F_Aegis_Plane_CAS_02
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_EPC_Plane_CAS_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_Plane_CAS_02_dynamicLoadout_F",
			"O_T_Ejection_Seat_Plane_CAS_02_F",
			"O_T_Plane_CAS_02_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Ejection_Seat_Plane_CAS_02_base_F;
	class O_T_Ejection_Seat_Plane_CAS_02_F: Ejection_Seat_Plane_CAS_02_base_F
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
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_CO.paa",
					"\A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Grey
			{
				displayName="$STR_A3_TEXTURESOURCES_GREY0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_Grey_CO.paa",
					"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_Grey_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_ghex_CO.paa",
					"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_Blue_CO.paa",
					"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_Blue_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1,
			"Grey",
			0,
			"GreenHex",
			0,
			"Blue",
			0
		};
		class EjectionSystem;
	};
	class Plane_CAS_02_dynamicLoadout_base_F: Plane_CAS_02_base_F
	{
	};
	class O_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F
	{
		displayName="$STR_A3_CfgVehicles_O_Plane_02_F0";
	};
	class O_T_Plane_CAS_02_dynamicLoadout_F: O_Plane_CAS_02_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_CAS_02_dynamicLoadout_F.jpg";
		_generalMacro="O_T_Plane_CAS_02_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Plane_02_F0";
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		textureList[]=
		{
			"Hex",
			0,
			"Grey",
			0,
			"GreenHex",
			1,
			"Blue",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_ghex_CO.paa",
			"\A3\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_ghex_CO.paa"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="O_T_Ejection_Seat_Plane_CAS_02_F";
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
