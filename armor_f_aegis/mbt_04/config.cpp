class CfgPatches
{
	class A3_Armor_F_Aegis_MBT_04
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Tank_MBT_04"
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
	class MBT_04_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"HMG_NSVT",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"450Rnd_127x108_Ball",
							"450Rnd_127x108_Ball",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_125mm_advanced",
					"LMG_coax"
				};
				magazines[]=
				{
					"20Rnd_125mm_APFSDS_T_Green",
					"12Rnd_125mm_HEAT_T_Green",
					"12Rnd_125mm_HE_T_Green",
					"1000Rnd_762x51_Belt_Green",
					"1000Rnd_762x51_Belt_Green",
					"4Rnd_125mm_cannon_missiles"
				};
			};
		};
	};
	class MBT_04_command_base_F: MBT_04_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"60Rnd_30mm_MP_shells_Tracer_Green",
							"SmokeLauncherMag"
						};
					};
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
