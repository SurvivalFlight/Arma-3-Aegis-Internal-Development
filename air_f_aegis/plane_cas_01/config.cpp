class CfgPatches
{
	class A3_Air_F_Aegis_Plane_CAS_01
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_EPC_Plane_CAS_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_Plane_CAS_01_dynamicLoadout_F",
			"B_T_Ejection_Seat_Plane_CAS_01_F",
			"B_T_Plane_CAS_01_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Ejection_Seat_Plane_CAS_01_base_F;
	class B_T_Ejection_Seat_Plane_CAS_01_F: Ejection_Seat_Plane_CAS_01_base_F
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
		faction="BLU_T_F";
		crew="B_T_Fighter_Pilot_F";
	};
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		magazines[]=
		{
			"1350Rnd_Gatling_30mm_Plane_CAS_01_F",
			"2Rnd_Missile_AA_04_F",
			"6Rnd_Missile_AGM_02_F",
			"4Rnd_Bomb_04_F",
			"7Rnd_Rocket_04_HE_F",
			"7Rnd_Rocket_04_AP_F",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class EjectionSystem;
	};
	class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F
	{
		magazines[]=
		{
			"1350Rnd_Gatling_30mm_Plane_CAS_01_F",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F
	{
		displayName="$STR_A3_CFGVEHICLES_B_PLANE_01_F0";
	};
	class B_T_Plane_CAS_01_dynamicLoadout_F: B_Plane_CAS_01_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_CAS_01_dynamicLoadout_F.jpg";
		_generalMacro="B_T_Plane_CAS_01_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"B_T_Fighter_Pilot_F"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="B_T_Ejection_Seat_Plane_Fighter_05_F";
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
