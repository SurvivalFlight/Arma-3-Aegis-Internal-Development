class CfgPatches
{
	class A3_Soft_F_Aegis_LSV_02
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Exp_LSV_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_A_LSV_02_armed_F",
			"O_A_LSV_02_AT_F",
			"O_A_LSV_02_light_F",
			"O_A_LSV_02_unarmed_F",
			"O_LSV_02_armed_F",
			"O_LSV_02_armed_specops_F",
			"O_LSV_02_light_F",
			"O_LSV_02_light_recon_F",
			"O_LSV_02_unarmed_specops_F",
			"O_T_LSV_02_armed_F",
			"O_T_LSV_02_armed_specops_F",
			"O_T_LSV_02_light_F",
			"O_T_LSV_02_light_recon_F",
			"O_T_LSV_02_unarmed_F",
			"O_T_LSV_02_unarmed_specops_F",
			"O_V_LSV_02_armed_F",
			"O_V_LSV_02_armed_ghex_F",
			"O_V_LSV_02_AT_F",
			"O_V_LSV_02_AT_ghex_F",
			"O_V_LSV_02_light_F",
			"O_V_LSV_02_light_ghex_F",
			"O_V_LSV_02_unarmed_F",
			"O_V_LSV_02_unarmed_ghex_F"
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
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class LSV_02_base_F: Car_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
		};
		class Turrets: Turrets
		{
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Main_Turret_Hide;
			class Unarmed_Doors_Hide;
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
				magazines[]=
				{
					"1000Rnd_762x51_Belt_T_Green",
					"1000Rnd_762x51_Belt_T_Green"
				};
				stabilizedInAxes=3;
			};
		};
	};
	class LSV_02_unarmed_base_F;
	class LSV_02_AT_base_F;
	class LSV_02_light_base_F: LSV_02_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LSV_02_light_base_F";
		scope=0;
		scopeCurator=0;
		displayName="Qilin (Light)";
		DLC="Aegis";
		animationList[]=
		{
			"Unarmed_Main_Turret_Hide",
			1,
			"Unarmed_Doors_Hide",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Unarmed_Main_Turret_Hide: Unarmed_Main_Turret_Hide
			{
				initPhase=1;
			};
			class Unarmed_Doors_Hide: Unarmed_Doors_Hide
			{
				initPhase=1;
			};
		};
	};
	class O_LSV_02_light_F: LSV_02_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_LSV_02_light_F.jpg";
		_generalMacro="O_LSV_02_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_F";
		crew="O_Soldier_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
	};
	class O_T_LSV_02_armed_F: LSV_02_armed_base_F
	{
		class TransportMagazines
		{
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
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
	class O_T_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		class TransportMagazines
		{
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
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
	class O_T_LSV_02_light_F: LSV_02_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_LSV_02_light_F.jpg";
		_generalMacro="O_T_LSV_02_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Soldier_F";
		typicalCargo[]=
		{
			"O_T_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			1,
			"Arid",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=16;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
	class O_V_LSV_02_armed_F: LSV_02_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_armed_F.jpg";
		_generalMacro="O_V_LSV_02_armed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_hex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_hex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_hex_F
			{
				weapon="arifle_ARX_hex_F";
				count=2;
			};
		};
	};
	class O_V_LSV_02_armed_ghex_F: LSV_02_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_armed_ghex_F.jpg";
		_generalMacro="O_V_LSV_02_armed_ghex_F";
		scope=2;
		scopeCurator=2;
		displayName="Qilin (Minigun, Green Hex)";
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_ghex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_ghex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			1,
			"Arid",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_ghex_F
			{
				weapon="arifle_ARX_ghex_F";
				count=2;
			};
		};
	};
	class O_V_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_unarmed_F.jpg";
		_generalMacro="O_V_LSV_02_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_hex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_hex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_hex_F
			{
				weapon="arifle_ARX_hex_F";
				count=2;
			};
		};
	};
	class O_V_LSV_02_unarmed_ghex_F: LSV_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_unarmed_ghex_F.jpg";
		_generalMacro="O_V_LSV_02_unarmed_ghex_F";
		scope=2;
		scopeCurator=2;
		displayName="Qilin (Unarmed, Green Hex)";
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_ghex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_ghex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			1,
			"Arid",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_ghex_F
			{
				weapon="arifle_ARX_ghex_F";
				count=2;
			};
		};
	};
	class O_V_LSV_02_AT_F: LSV_02_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_AT_F.jpg";
		_generalMacro="O_V_LSV_02_AT_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_hex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_hex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_hex_F
			{
				weapon="arifle_ARX_hex_F";
				count=2;
			};
		};
	};
	class O_V_LSV_02_AT_ghex_F: LSV_02_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_AT_ghex_F.jpg";
		_generalMacro="O_V_LSV_02_AT_ghex_F";
		scope=2;
		scopeCurator=2;
		displayName="Qilin (AT, Green Hex)";
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_ghex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_ghex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			1,
			"Arid",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_ghex_F
			{
				weapon="arifle_ARX_ghex_F";
				count=2;
			};
		};
	};
	class O_V_LSV_02_light_F: LSV_02_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_light_F.jpg";
		_generalMacro="O_V_LSV_02_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_hex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_hex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_hex_F
			{
				weapon="arifle_ARX_hex_F";
				count=2;
			};
		};
	};
	class O_V_LSV_02_light_ghex_F: LSV_02_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_LSV_02_light_ghex_F.jpg";
		_generalMacro="O_V_LSV_02_light_ghex_F";
		scope=2;
		scopeCurator=2;
		displayName="Qilin (Light, Green Hex)";
		DLC="Aegis";
		side=0;
		faction="OPF_V_F";
		crew="O_V_Soldier_ghex_F";
		typicalCargo[]=
		{
			"O_V_Soldier_ghex_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			1,
			"Arid",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=8;
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_arifle_ARX_ghex_F
			{
				weapon="arifle_ARX_ghex_F";
				count=2;
			};
		};
	};
	class O_A_LSV_02_armed_F: LSV_02_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_LSV_02_armed_F.jpg";
		_generalMacro="O_A_LSV_02_armed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=16;
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
	class O_A_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_LSV_02_unarmed_F.jpg";
		_generalMacro="O_A_LSV_02_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=16;
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
	class O_A_LSV_02_AT_F: LSV_02_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_LSV_02_AT_F.jpg";
		_generalMacro="O_A_LSV_02_AT_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=16;
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
	class O_A_LSV_02_light_F: LSV_02_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_LSV_02_light_F.jpg";
		_generalMacro="O_A_LSV_02_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=16;
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
	class O_LSV_02_armed_viper_F;
	class O_LSV_02_armed_specops_F: O_LSV_02_armed_viper_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_LSV_02_armed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="O_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
	};
	class O_T_LSV_02_armed_specops_F: O_LSV_02_armed_viper_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_T_LSV_02_armed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="O_T_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			1,
			"Arid",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
	};
	class O_LSV_02_unarmed_viper_F;
	class O_LSV_02_unarmed_specops_F: O_LSV_02_unarmed_viper_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_LSV_02_unarmed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="O_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			0,
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
	};
	class O_T_LSV_02_unarmed_specops_F: O_LSV_02_unarmed_viper_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_T_LSV_02_unarmed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="O_T_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"GreenHex",
			1,
			"Arid",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
	};
	class O_LSV_02_light_recon_F: O_LSV_02_light_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_LSV_02_light_recon_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="O_Recon_TL_F";
		forceInGarage=0;
	};
	class O_T_LSV_02_light_recon_F: O_T_LSV_02_light_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_T_LSV_02_light_recon_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="O_T_Recon_TL_F";
		forceInGarage=0;
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
