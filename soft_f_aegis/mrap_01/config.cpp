class CfgPatches
{
	class A3_Soft_F_Aegis_MRAP_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Exp_MRAP_01",
			"A3_Soft_F_MRAP_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_MRAP_01_F",
			"B_A_MRAP_01_gmg_F",
			"B_A_MRAP_01_hmg_F",
			"B_MRAP_01_gmg_F",
			"B_MRAP_01_hmg_F",
			"B_T_MRAP_01_F",
			"B_T_MRAP_01_gmg_F",
			"B_T_MRAP_01_hmg_F",
			"I_R_MRAP_01_F",
			"I_R_MRAP_01_gmg_F",
			"I_R_MRAP_01_hmg_F",
			"O_P_MRAP_01_F",
			"O_P_MRAP_01_gmg_F",
			"O_P_MRAP_01_hmg_F"
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
	class MRAP_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
		class TextureSources
		{
			class Sand
			{
				DisplayName="$STR_A3_TEXTURESOURCES_SAND0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F\MRAP_01\Data\MRAP_01_base_CO.paa",
					"\A3\Soft_F\MRAP_01\Data\MRAP_01_adds_CO.paa",
					""
				};
				factions[]=
				{
					"BLU_F",
					"BLU_A_F"
				};
			};
			class Olive
			{
				DisplayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
					"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
					""
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
			class Desert
			{
				DisplayName="Desert";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_desert_CO.paa",
					"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_desert_CO.paa",
					""
				};
				factions[]=
				{
					"BLU_F",
					"BLU_A_F"
				};
			};
		};
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F
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
		class TextureSources
		{
			class Sand
			{
				DisplayName="$STR_A3_TEXTURESOURCES_SAND0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F\MRAP_01\Data\MRAP_01_base_CO.paa",
					"\A3\Soft_F\MRAP_01\Data\MRAP_01_adds_CO.paa",
					"\A3\Data_F\Vehicles\Turret_CO.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
			class Olive
			{
				DisplayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
					"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
		};
	};
	class MRAP_01_hmg_base_F;
	class B_MRAP_01_F: MRAP_01_base_F
	{
		textureList[]=
		{
			"Sand",
			1
		};
	};
	class B_T_MRAP_01_F: B_MRAP_01_F
	{
		textureList[]=
		{
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
			""
		};
	};
	class B_A_MRAP_01_F: B_MRAP_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_MRAP_01_F.jpg";
		_generalMacro="B_A_MRAP_01_F";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_base_CO.paa",
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_adds_CO.paa",
			""
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
	class O_P_MRAP_01_F: MRAP_01_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.71;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_P_MRAP_01_F.jpg";
		_generalMacro="O_P_MRAP_01_F";
		scope=2;
		crew="O_P_soldier_F";
		typicalCargo[]=
		{
			"O_P_soldier_lite_F"
		};
		side=0;
		faction="OPF_P_F";
		unitInfoType="RscUnitInfoNoWeapon";
		threat[]={0.80000001,0.60000002,0.1};
		class Turrets
		{
		};
		textureList[]=
		{
			"Para",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_para_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_para_CO.paa",
			""
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
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
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_black_F
			{
				weapon="arifle_TRG21_black_F";
				count=2;
			};
		};
	};
	class I_R_MRAP_01_F: MRAP_01_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.71;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_R_MRAP_01_F.jpg";
		_generalMacro="I_R_MRAP_01_F";
		scope=2;
		crew="I_R_soldier_F";
		typicalCargo[]=
		{
			"I_R_soldier_lite_F"
		};
		side=2;
		faction="IND_R_F";
		unitInfoType="RscUnitInfoNoWeapon";
		threat[]={0.80000001,0.60000002,0.1};
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
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_rus_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_rus_CO.paa",
			""
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
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
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_F
			{
				weapon="arifle_TRG21_F";
				count=2;
			};
		};
	};
	class B_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		textureList[]=
		{
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_base_CO.paa",
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_adds_CO.paa",
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
	};
	class B_T_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		textureList[]=
		{
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
		};
	};
	class B_A_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_MRAP_01_gmg_F.jpg";
		_generalMacro="B_A_MRAP_01_gmg_F";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_base_CO.paa",
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_adds_CO.paa",
			"\A3\Data_F\Vehicles\Turret_CO.paa"
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
	class O_P_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.71;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_P_MRAP_01_gmg_F.jpg";
		_generalMacro="O_P_MRAP_01_gmg_F";
		scope=2;
		crew="O_P_soldier_F";
		typicalCargo[]=
		{
			"O_P_soldier_lite_F"
		};
		side=0;
		faction="OPF_P_F";
		textureList[]=
		{
			"Para",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_para_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_para_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_para_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
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
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_black_F
			{
				weapon="arifle_TRG21_black_F";
				count=2;
			};
		};
	};
	class I_R_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.71;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_R_MRAP_01_gmg_F.jpg";
		_generalMacro="I_R_MRAP_01_gmg_F";
		scope=2;
		crew="I_R_soldier_F";
		typicalCargo[]=
		{
			"I_R_soldier_lite_F"
		};
		side=2;
		faction="IND_R_F";
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_rus_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_rus_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_rus_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
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
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_F
			{
				weapon="arifle_TRG21_F";
				count=2;
			};
		};
	};
	class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		textureList[]=
		{
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_base_CO.paa",
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_adds_CO.paa",
			"\A3\Data_F\Vehicles\Turret_CO.paa"
		};
	};
	class B_T_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		textureList[]=
		{
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
		};
	};
	class B_A_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_MRAP_01_hmg_F.jpg";
		_generalMacro="B_A_MRAP_01_hmg_F";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_base_CO.paa",
			"\A3\Soft_F\MRAP_01\Data\MRAP_01_adds_CO.paa",
			"\A3\Data_F\Vehicles\Turret_CO.paa"
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
	class O_P_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.71;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_P_MRAP_01_hmg_F.jpg";
		_generalMacro="O_P_MRAP_01_hmg_F";
		scope=2;
		crew="O_P_soldier_F";
		typicalCargo[]=
		{
			"O_P_soldier_lite_F"
		};
		side=0;
		faction="OPF_P_F";
		textureList[]=
		{
			"Para",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_para_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_para_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_para_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
				count=16;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
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
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=4;
			};
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_black_F
			{
				weapon="arifle_TRG21_black_F";
				count=2;
			};
		};
	};
	class I_R_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		author="$STR_A3_Night515";
		mapSize=6.71;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_R_MRAP_01_hmg_F.jpg";
		_generalMacro="I_R_MRAP_01_hmg_F";
		scope=2;
		crew="I_R_soldier_F";
		typicalCargo[]=
		{
			"I_R_soldier_lite_F"
		};
		side=2;
		faction="IND_R_F";
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_rus_CO.paa",
			"\A3\Soft_F_Aegis\MRAP_01\Data\MRAP_01_adds_rus_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_rus_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
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
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=4;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=4;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=4;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_F
			{
				weapon="arifle_TRG21_F";
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
