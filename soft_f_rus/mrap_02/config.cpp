class CfgPatches
{
	class A3_Soft_F_Rus_MRAP_02
	{
		addonRootClass="A3_Soft_F_Rus";
		requiredAddons[]=
		{
			"A3_Soft_F_Aegis_MRAP_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_MRAP_02_F",
			"I_RU_MRAP_02_gmg_F",
			"I_RU_MRAP_02_hmg_F"
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
		class TextureSources
		{
			class Rus
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_01_rus_CO.paa",
					"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_02_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
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
			};
		};
	};
	class I_RU_MRAP_02_F: MRAP_02_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.8200002;
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_MRAP_02_F.jpg";
		_generalMacro="I_RU_MRAP_02_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_O_MRAP_02_F0";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
		class Turrets
		{
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_01_rus_CO.paa",
			"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_02_rus_CO.paa"
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
	class I_RU_MRAP_02_hmg_F: MRAP_02_hmg_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.8200002;
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_MRAP_02_hmg_F.jpg";
		_generalMacro="I_RU_MRAP_02_hmg_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_O_MRAP_02_MG_F0";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"HMG_127"
				};
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow"
				};
			};
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_01_rus_CO.paa",
			"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_02_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa"
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
	class I_RU_MRAP_02_gmg_F: MRAP_02_gmg_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.8200002;
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_MRAP_02_gmg_F.jpg";
		_generalMacro="I_RU_MRAP_02_gmg_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_O_MRAP_02_GMG_F0";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_01_rus_CO.paa",
			"\A3\Soft_F_Rus\MRAP_02\Data\MRAP_02_ext_02_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa"
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
};
class cfgMods
{
	author="Night515";
	timepacked="1527283818";
};
