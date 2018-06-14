class CfgPatches
{
	class A3_Soft_F_Rus_LSV_02
	{
		addonRootClass="A3_Soft_F_Rus";
		requiredAddons[]=
		{
			"A3_Soft_F_Aegis_LSV_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_LSV_02_armed_F",
			"I_RU_LSV_02_AT_F",
			"I_RU_LSV_02_light_F",
			"I_RU_LSV_02_unarmed_F"
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
	class LSV_02_base_F: Car_F
	{
		class Turrets: Turrets
		{
		};
	};
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		class Turrets: Turrets
		{
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class MainTurret: MainTurret
			{
			};
		};
	};
	class I_RU_LSV_02_armed_F: LSV_02_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RU_LSV_02_armed_F.jpg";
		_generalMacro="I_RU_LSV_02_armed_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_01_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_02_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_03_rus_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"1000Rnd_762x51_Belt_T_Yellow",
					"1000Rnd_762x51_Belt_T_Yellow"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=16;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
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
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
		};
	};
	class LSV_02_unarmed_base_F;
	class I_RU_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RU_LSV_02_unarmed_F.jpg";
		_generalMacro="I_RU_LSV_02_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_01_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_02_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_03_rus_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=16;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
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
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
		};
	};
	class LSV_02_AT_base_F;
	class I_RU_LSV_02_AT_F: LSV_02_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RU_LSV_02_AT_F.jpg";
		_generalMacro="I_RU_LSV_02_AT_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_01_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_02_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_03_rus_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=16;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
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
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
		};
	};
	class LSV_02_light_base_F;
	class I_RU_LSV_02_light_F: LSV_02_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RU_LSV_02_light_F.jpg";
		_generalMacro="I_RU_LSV_02_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_01_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_02_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_03_rus_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=16;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
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
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
		};
	};
	class O_LSV_02_armed_viper_F;
	class I_RU_LSV_02_armed_specops_F: O_LSV_02_armed_viper_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_RU_LSV_02_armed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="I_RU_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_01_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_02_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_03_rus_CO.paa"
		};
	};
	class O_LSV_02_unarmed_viper_F;
	class I_RU_LSV_02_unarmed_specops_F: O_LSV_02_unarmed_viper_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_RU_LSV_02_unarmed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="I_RU_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_01_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_02_rus_CO.paa",
			"\A3\Soft_F_Rus\LSV_02\Data\CSAT_LSV_03_rus_CO.paa"
		};
	};
	class I_RU_LSV_02_light_recon_F: I_RU_LSV_02_light_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_RU_LSV_02_light_recon_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="I_RU_Recon_TL_F";
		forceInGarage=0;
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527283818";
};
