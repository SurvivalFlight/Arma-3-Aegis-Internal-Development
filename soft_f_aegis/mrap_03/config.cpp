class CfgPatches
{
	class A3_Soft_F_Aegis_MRAP_03
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Beta_MRAP_03"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_MRAP_03_F",
			"B_A_MRAP_03_hmg_F",
			"B_A_MRAP_03_gmg_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret: MainTurret
			{
			};
		};
		class Reflectors
		{
			class Left
			{
				useFlare=1;
			};
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
	};
	class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"64Rnd_40mm_G_belt",
					"64Rnd_40mm_G_belt"
				};
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
	};
	class B_A_MRAP_03_F: MRAP_03_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_F.jpg";
		_generalMacro="B_A_MRAP_03_F";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_Lite_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\MRAP_03\Data\MRAP_03_ext_CO.paa",
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
		DLC="Aegis";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_blk_F
			{
				weapon="arifle_SA80_blk_F";
				count=2;
			};
		};
	};
	class B_A_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_hmg_F.jpg";
		_generalMacro="B_A_MRAP_03_hmg_F";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_Lite_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\MRAP_03\Data\MRAP_03_ext_CO.paa",
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
		DLC="Aegis";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red"
				};
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_blk_F
			{
				weapon="arifle_SA80_blk_F";
				count=2;
			};
		};
	};
	class B_A_MRAP_03_gmg_F: MRAP_03_gmg_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MRAP_03_gmg_F.jpg";
		_generalMacro="B_A_MRAP_03_gmg_F";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_Lite_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\MRAP_03\Data\MRAP_03_ext_CO.paa",
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
		DLC="Aegis";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=12;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_blk_F
			{
				weapon="arifle_SA80_blk_F";
				count=2;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
