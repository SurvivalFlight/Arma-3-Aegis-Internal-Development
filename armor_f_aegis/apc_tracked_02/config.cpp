class CfgPatches
{
	class A3_Armor_F_Aegis_APC_Tracked_02
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta_APC_Tracked_02",
			"A3_Armor_F_Exp_APC_Tracked_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_A_APC_Tracked_02_AA_F",
			"O_A_APC_Tracked_02_cannon_F",
			"O_APC_Tracked_02_AA_F",
			"O_APC_Tracked_02_cannon_F"
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
	class APC_Tracked_02_base_F: Tank_F
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
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
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
					"140Rnd_30mm_MP_shells_Tracer_Green",
					"60Rnd_30mm_APFSDS_shells_Tracer_Green",
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
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O"
				};
			};
		};
		animationList[]=
		{
			"showTracks",
			0.5,
			"showCamonetHull",
			0,
			"showBags",
			0.33000001,
			"showSLATHull",
			0
		};
	};
	class O_A_APC_Tracked_02_cannon_F: O_APC_Tracked_02_cannon_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_APC_Tracked_02_cannon_F.jpg";
		_generalMacro="O_A_APC_Tracked_02_cannon_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
			class _xx_arifle_CTARS_blk_F
			{
				weapon="arifle_CTARS_blk_F";
				count=2;
			};
			class _xx_launch_RPG32_F
			{
				weapon="launch_RPG32_F";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=12;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=8;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=8;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=5;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"500Rnd_35mm_AA_shells_Tracer_Green",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles"
				};
			};
		};
		animationList[]=
		{
			"showTracks",
			0.5,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showSLATHull",
			0
		};
	};
	class O_A_APC_Tracked_02_AA_F: O_APC_Tracked_02_AA_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_APC_Tracked_02_AA_F.jpg";
		_generalMacro="O_A_APC_Tracked_02_AA_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
			class _xx_arifle_CTARS_blk_F
			{
				weapon="arifle_CTARS_blk_F";
				count=2;
			};
			class _xx_launch_RPG32_F
			{
				weapon="launch_RPG32_F";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=12;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=8;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=8;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=5;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
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
