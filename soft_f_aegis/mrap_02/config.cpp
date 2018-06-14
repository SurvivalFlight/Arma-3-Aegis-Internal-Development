class CfgPatches
{
	class A3_Soft_F_Aegis_MRAP_02
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_MRAP_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_A_MRAP_02_F",
			"O_A_MRAP_02_gmg_F",
			"O_A_MRAP_02_hmg_F",
			"O_T_MRAP_02_ghex_F",
			"O_T_MRAP_02_gmg_ghex_F",
			"O_T_MRAP_02_hmg_ghex_F"
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
	class MRAP_02_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F
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
		};
	};
	class O_MRAP_02_F;
	class O_T_MRAP_02_ghex_F: MRAP_02_base_F
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_580x42_Mag_F;
			class _xx_75Rnd_580x42_Mag_F
			{
				magazine="75Rnd_580x42_Mag_F";
				count=8;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
		};
	};
	class O_A_MRAP_02_F: O_MRAP_02_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_MRAP_02_F.jpg";
		_generalMacro="O_A_MRAP_02_F";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F",
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_01_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_02_CO.paa"
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
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
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
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
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
	class O_MRAP_02_hmg_F;
	class O_T_MRAP_02_hmg_ghex_F: MRAP_02_hmg_base_F
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_580x42_Mag_F;
			class _xx_75Rnd_580x42_Mag_F
			{
				magazine="75Rnd_580x42_Mag_F";
				count=8;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
		};
	};
	class O_A_MRAP_02_hmg_F: O_MRAP_02_hmg_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_MRAP_02_hmg_F.jpg";
		_generalMacro="O_A_MRAP_02_hmg_F";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F",
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_01_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_02_CO.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa"
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
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
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
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
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
	class O_MRAP_02_gmg_F;
	class O_T_MRAP_02_gmg_ghex_F: MRAP_02_gmg_base_F
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_580x42_Mag_F;
			class _xx_75Rnd_580x42_Mag_F
			{
				magazine="75Rnd_580x42_Mag_F";
				count=8;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
		};
	};
	class O_A_MRAP_02_gmg_F: O_MRAP_02_gmg_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_MRAP_02_gmg_F.jpg";
		_generalMacro="O_A_MRAP_02_gmg_F";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F",
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_01_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_02\Data\MRAP_02_ext_02_CO.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa"
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
				count=10;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
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
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
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
	timepacked="1527942538";
};
