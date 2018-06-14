class CfgPatches
{
	class A3_Armor_F_Aegis_MBT_01
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Exp_MBT_01",
			"A3_Armor_F_Gamma_MBT_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_MBT_01_arty_F",
			"B_MBT_01_cannon_F",
			"B_MBT_01_TUSK_F"
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
	class MBT_01_base_F: Tank_F
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
					"24Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"4Rnd_120mm_cannon_missiles"
				};
			};
		};
	};
	class MBT_01_arty_base_F: MBT_01_base_F
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
							"64Rnd_40mm_G_belt",
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
					};
				};
			};
		};
		animationList[]=
		{
			"showCamonetCannon",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showCamonetTurret",
			0,
			"showCamonetHull",
			0,
			"showCanisters",
			0.17,
			"showAmmobox",
			0.17
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		animationList[]=
		{
			"showCamonetCannon",
			0,
			"showCamonetPlates1",
			0,
			"showCamonetPlates2",
			0,
			"showCamonetTurret",
			0,
			"showCamonetHull",
			0,
			"showBags",
			0.33000001
		};
	};
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F
	{
	};
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Gamma\MBT_01\Data\MBT_01_body_CO.paa",
			"\A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
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
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
					};
				};
				magazines[]=
				{
					"24Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"4Rnd_120mm_cannon_missiles"
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
