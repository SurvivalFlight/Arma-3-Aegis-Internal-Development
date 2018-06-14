class CfgPatches
{
	class A3_Air_F_Aegis_Plane_Fighter_04
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Jets_Plane_Fighter_04"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Ejection_Seat_Plane_Fighter_04_F",
			"B_A_Plane_Fighter_04_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
		weapons[]=
		{
			"weapon_Fighter_Gun20mm_AA",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"magazine_Fighter04_Gun20mm_AA_x120",
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class TextureSources
		{
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_01_BLUFOR_CO.paa",
					"\A3\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_02_BLUFOR_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Fighter_04_misc_01_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa",
					"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_08_CA.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		textureList[]+=
		{
			"Blufor",
			0
		};
		class EjectionSystem;
	};
	class B_A_Plane_Fighter_04_F: Plane_Fighter_04_Base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_04_F.jpg";
		_generalMacro="B_A_Plane_Fighter_04_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Fighter_04_name";
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"B_A_Fighter_Pilot_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_01_BLUFOR_CO.paa",
			"\A3\Air_F_Aegis\Plane_Fighter_04\Data\Fighter_04_fuselage_02_BLUFOR_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_04\Data\Fighter_04_misc_01_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa",
			"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa",
			"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_08_CA.paa"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="B_A_Ejection_Seat_Plane_Fighter_04_F";
		};
	};
	class Ejection_Seat_Plane_Fighter_04_base_F;
	class B_A_Ejection_Seat_Plane_Fighter_04_F: Ejection_Seat_Plane_Fighter_04_base_F
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
		side=1;
		faction="BLU_A_F";
		crew="B_A_Fighter_Pilot_F";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
