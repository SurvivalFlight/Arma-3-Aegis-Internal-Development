class CfgPatches
{
	class A3_Boat_F_Aegis_Boat_Armed_01
	{
		addonRootClass="A3_Boat_F_Aegis";
		requiredAddons[]=
		{
			"A3_Boat_F_Beta_Boat_Armed_01",
			"A3_Boat_F_Boat_Armed_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Boat_Armed_01_hmg_F",
			"B_A_Boat_Armed_01_minigun_F",
			"B_Boat_Armed_01_hmg_F",
			"B_T_Boat_Armed_01_hmg_F",
			"I_Boat_Armed_01_minigun_F",
			"O_Boat_Armed_01_hmg_F"
		};
		weapons[]={};
	};
};
class DefaultEventHandlers;
class RCWSOptics;
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class NewTurret;
		class Turrets;
		class ViewOptics;
	};
	class Boat_Armed_01_base_F: Boat_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: NewTurret
			{
				magazines[]=
				{
					"64Rnd_40mm_G_belt"
				};
			};
			class RearTurret: FrontTurret
			{
				weapons[]=
				{
					"HMG_static"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\A3\Weapons_F_Gamma\reticle\HMG_01_Optics_Gunner_F.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
			};
			class RearTurret: RearTurret
			{
				magazines[]=
				{
					"1000Rnd_762x51_Belt_T_Red",
					"1000Rnd_762x51_Belt_T_Red"
				};
			};
		};
	};
	class B_Boat_Armed_01_minigun_F;
	class B_A_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Boat_Armed_01_minigun_F.jpg";
		_generalMacro="B_A_Boat_Armed_01_minigun_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F",
			"B_A_Soldier_F"
		};
	};
	class B_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Boat_Armed_01_hmg_F.jpg";
		_generalMacro="B_Boat_Armed_01_hmg_F";
		displayName="$STR_A3_CfgVehicles_Boat_Armed_01_HMG0";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		accuracy=1.5;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F",
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_CO.paa",
			"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_int_CO.paa",
			"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_crows_BLUFOR_CO.paa"
		};
		textureList[]=
		{
			"Blu",
			1
		};
	};
	class B_T_Boat_Armed_01_hmg_F: B_Boat_Armed_01_hmg_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Boat_Armed_01_hmg_F.jpg";
		_generalMacro="B_T_Boat_Armed_01_hmg_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Soldier_F";
		typicalCargo[]=
		{
			"B_T_Soldier_F",
			"B_T_Soldier_F"
		};
	};
	class B_A_Boat_Armed_01_hmg_F: B_Boat_Armed_01_hmg_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Boat_Armed_01_hmg_F.jpg";
		_generalMacro="B_A_Boat_Armed_01_hmg_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F",
			"B_A_Soldier_F"
		};
	};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
			};
			class RearTurret: RearTurret
			{
				magazines[]=
				{
					"1000Rnd_762x51_Belt_T_Yellow",
					"1000Rnd_762x51_Belt_T_Yellow"
				};
			};
		};
	};
	class O_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
				magazines[]=
				{
					"64Rnd_40mm_G_belt"
				};
			};
			class RearTurret: RearTurret
			{
				weapons[]=
				{
					"HMG_static"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Green",
					"100Rnd_127x99_mag_Tracer_Green",
					"100Rnd_127x99_mag_Tracer_Green"
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525613803";
};
