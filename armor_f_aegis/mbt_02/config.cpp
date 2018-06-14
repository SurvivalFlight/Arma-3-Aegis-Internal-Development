class CfgPatches
{
	class A3_Armor_F_Aegis_MBT_02
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Gamma_MBT_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_A_MBT_02_arty_F",
			"O_A_MBT_02_cannon_F"
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
	class MBT_02_base_F: Tank_F
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
							"150Rnd_127x108_Ball",
							"150Rnd_127x108_Ball",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"cannon_125mm",
					"LMG_coax"
				};
				magazines[]=
				{
					"16Rnd_125mm_APFSDS_T_Green",
					"12Rnd_125mm_HEAT_T_Green",
					"12Rnd_125mm_HE_T_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"200Rnd_762x51_Belt_Green",
					"4Rnd_125mm_cannon_missiles"
				};
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetCannon",
			0,
			"showCamonetTurret",
			0,
			"showLog",
			0.33000001
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F
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
							"200Rnd_127x99_mag_Tracer_Green",
							"200Rnd_127x99_mag_Tracer_Green",
							"SmokeLauncherMag"
						};
					};
				};
			};
		};
	};
	class O_MBT_02_cannon_F;
	class O_A_MBT_02_cannon_F: O_MBT_02_cannon_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_MBT_02_cannon_F.jpg";
		_generalMacro="O_A_MBT_02_cannon_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F",
			"O_A_soldier_F",
			"O_A_soldier_F"
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
		};
	};
	class O_MBT_02_arty_F;
	class O_A_MBT_02_arty_F: O_MBT_02_arty_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_MBT_02_arty_F.jpg";
		_generalMacro="O_A_MBT_02_arty_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F",
			"O_A_soldier_F",
			"O_A_soldier_F"
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527944276";
};
