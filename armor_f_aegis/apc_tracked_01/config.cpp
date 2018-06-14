class CfgPatches
{
	class A3_Armor_F_Aegis_APC_Tracked_01
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta_APC_Tracked_01",
			"A3_Armor_F_Exp_APC_Tracked_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_APC_Tracked_01_AA_F",
			"B_APC_Tracked_01_CRV_F",
			"B_APC_Tracked_01_rcws_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class CommanderOptics;
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
		class AnimationSources;
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class AnimationSources: AnimationSources
		{
		};
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
			"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class AnimationSources: AnimationSources
		{
		};
	};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"64Rnd_40mm_G_belt",
					"64Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red"
				};
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red"
				};
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showWheels",
			0.5
		};
	};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
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
				magazines[]=
				{
					"500Rnd_35mm_AA_shells_Tracer_Green",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles"
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
