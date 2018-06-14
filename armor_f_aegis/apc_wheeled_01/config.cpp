class CfgPatches
{
	class A3_Armor_F_Aegis_APC_Wheeled_01
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Armor_F_Exp_APC_Wheeled_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_APC_Wheeled_01_cannon_F",
			"B_APC_Wheeled_01_medical_F",
			"B_APC_Wheeled_01_unarmed_F",
			"B_T_APC_Wheeled_01_medical_F",
			"B_T_APC_Wheeled_01_unarmed_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
		class MFD
		{
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				class Draw
				{
					class Main_Armament_Ammo_Type_1
					{
						text="MP-T";
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				weapon="autocannon_30mm";
			};
			class muzzle_hide
			{
				weapon="autocannon_30mm";
			};
			class revolving_cannon
			{
				weapon="autocannon_30mm";
			};
			class HideTurret;
		};
	};
	class APC_Wheeled_01_unarmed_base_F: APC_Wheeled_01_base_F
	{
		author="$STR_A3_Night515";
		mapSize=1;
		_generalMacro="APC_Wheeled_01_unarmed_base_F";
		displayName="AMV-7 Marshall (Unarmed)";
		model="\A3\Armor_F_Beta\APC_Wheeled_01\APC_Wheeled_01_cannon_F.p3d";
		picture="\A3\Armor_F_Aegis\APC_Wheeled_01\Data\UI\APC_Wheeled_01_medevac_CA.paa";
		Icon="\A3\Armor_F_Beta\APC_Wheeled_01\Data\UI\Map_AMW_medevac_CA.paa";
		weapons[]=
		{
			"TruckHorn"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camoNet",
			"camoSlat"
		};
		class AnimationSources: AnimationSources
		{
			class HideTurret: HideTurret
			{
				initPhase=1;
			};
		};
		class Turrets
		{
		};
	};
	class APC_Wheeled_01_medical_base_F: APC_Wheeled_01_unarmed_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="APC_Wheeled_01_medical_base_F";
		displayName="AMV-7 Marshall (Medical)";
		attendant=1;
		threat[]={0,0,0};
		class TransportBackpack
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F
	{
	};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
				weapons[]=
				{
					"autocannon_30mm",
					"LMG_coax_body"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Red",
					"60Rnd_30mm_APFSDS_shells_Tracer_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
			};
		};
	};
	class B_APC_Wheeled_01_unarmed_F: APC_Wheeled_01_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_unarmed_F.jpg";
		_generalMacro="B_APC_Wheeled_01_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class B_T_APC_Wheeled_01_unarmed_F: B_APC_Wheeled_01_unarmed_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Wheeled_01_unarmed_F.jpg";
		_generalMacro="B_T_APC_Wheeled_01_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Crew_F";
		typicalCargo[]=
		{
			"B_T_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_base_olive_CO.paa",
			"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
			"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"\A3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
	class B_APC_Wheeled_01_medical_F: APC_Wheeled_01_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_medical_F.jpg";
		_generalMacro="B_APC_Wheeled_01_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class B_T_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_medical_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Wheeled_01_medical_F.jpg";
		_generalMacro="B_T_APC_Wheeled_01_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Crew_F";
		typicalCargo[]=
		{
			"B_T_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_olive_CO.paa",
			"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
			"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"\A3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527944276";
};
