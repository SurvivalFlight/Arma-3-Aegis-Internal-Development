class CfgPatches
{
	class A3_Air_F_Aegis_Plane_Fighter_01
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Jets_Plane_Fighter_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_Plane_Fighter_01_F",
			"B_Plane_Fighter_01_Stealth_F",
			"B_T_Ejection_Seat_Plane_Fighter_01_F",
			"B_T_Plane_Fighter_01_F",
			"B_T_Plane_Fighter_01_Stealth_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class EjectionSystem;
	};
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F
	{
	};
	class B_T_Plane_Fighter_01_F: B_Plane_Fighter_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Fighter_01_F.jpg";
		_generalMacro="B_T_Plane_Fighter_01_F";
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
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F
	{
	};
	class B_T_Plane_Fighter_01_Stealth_F: B_Plane_Fighter_01_Stealth_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Fighter_01_Stealth_F.jpg";
		_generalMacro="B_T_Plane_Fighter_01_Stealth_F";
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
	class Ejection_Seat_Plane_Fighter_01_base_F;
	class B_T_Ejection_Seat_Plane_Fighter_01_F: Ejection_Seat_Plane_Fighter_01_base_F
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
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
