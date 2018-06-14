class CfgPatches
{
	class A3_Armor_F_Aegis_LT_01
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Tank_LT_01"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
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
	};
	class LT_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class LT_01_AT_base_F: LT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"HMG_M2_LT",
					"missiles_Firefist",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow",
					"2Rnd_127mm_Firefist_missiles",
					"2Rnd_127mm_Firefist_missiles",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class LT_01_AA_base_F: LT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"HMG_M2_LT",
					"missiles_SAAMI",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow",
					"4Rnd_70mm_SAAMI_missiles",
					"4Rnd_70mm_SAAMI_missiles",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class LT_01_cannon_base_F: LT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"cannon_20mm",
					"LMG_coax",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"60Rnd_20mm_HE_shells",
					"60Rnd_20mm_AP_shells",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"SmokeLauncherMag"
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527944276";
};
