class CfgPatches
{
	class A3_Soft_F_Aegis_LSV_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Exp_LSV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_LSV_01_armed_F",
			"B_A_LSV_01_armed_specops_F",
			"B_A_LSV_01_AT_F",
			"B_A_LSV_01_light_F",
			"B_A_LSV_01_light_recon_F",
			"B_A_LSV_01_unarmed_F",
			"B_A_LSV_01_unarmed_specops_F",
			"B_CTRG_LSV_01_armed_F",
			"B_CTRG_LSV_01_armed_sand_F",
			"B_CTRG_LSV_01_AT_F",
			"B_CTRG_LSV_01_AT_sand_F",
			"B_CTRG_LSV_01_light_F",
			"B_CTRG_LSV_01_light_sand_F",
			"B_CTRG_LSV_01_unarmed_F",
			"B_CTRG_LSV_01_unarmed_sand_F",
			"B_LSV_01_armed_CTRG_F",
			"B_LSV_01_armed_specops_F",
			"B_LSV_01_light_F",
			"B_LSV_01_light_recon_F",
			"B_LSV_01_unarmed_CTRG_F",
			"B_LSV_01_unarmed_specops_F",
			"B_T_LSV_01_armed_CTRG_F",
			"B_T_LSV_01_armed_specops_F",
			"B_T_LSV_01_light_F",
			"B_T_LSV_01_light_recon_F",
			"B_T_LSV_01_unarmed_CTRG_F",
			"B_T_LSV_01_unarmed_specops_F"
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
	class LSV_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
		};
		class TextureSources
		{
			class Olive
			{
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
			};
			class Dazzle
			{
				displayName="Tropic";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
			};
			class Dazzle_02
			{
				displayName="Sand";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\launcher_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\tubem_CO.paa"
				};
				factions[]=
				{
					"BLU_CTRG_F"
				};
			};
		};
	};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class CargoTurret_02;
			class CargoTurret_03;
			class TopTurret: MainTurret
			{
				stabilizedInAxes=3;
			};
			class CodRiverTurret: MainTurret
			{
			};
		};
	};
	class LSV_01_unarmed_base_F;
	class LSV_01_light_base_F;
	class LSV_01_AT_base_F;
	class B_T_LSV_01_armed_F;
	class B_T_LSV_01_unarmed_F;
	class B_T_LSV_01_light_F: LSV_01_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_LSV_01_light_F.jpg";
		_generalMacro="B_T_LSV_01_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Soldier_F";
		typicalCargo[]=
		{
			"B_T_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			1,
			"Sand",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_khk_F
			{
				weapon="arifle_MX_khk_F";
				count=2;
			};
		};
	};
	class B_LSV_01_light_F: LSV_01_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_LSV_01_light_F.jpg";
		_generalMacro="B_LSV_01_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
	};
	class B_A_LSV_01_armed_F: LSV_01_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_armed_F.jpg";
		_generalMacro="B_A_LSV_01_armed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
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
	class B_A_LSV_01_unarmed_F: LSV_01_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_unarmed_F.jpg";
		_generalMacro="B_A_LSV_01_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
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
	class B_A_LSV_01_light_F: LSV_01_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_light_F.jpg";
		_generalMacro="B_A_LSV_01_light_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
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
	class B_A_LSV_01_AT_F: LSV_01_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_AT_F.jpg";
		_generalMacro="B_A_LSV_01_AT_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\launcher_CO.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\tubem_CO.paa"
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
	class B_CTRG_LSV_01_armed_F: LSV_01_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_LSV_01_armed_F.jpg";
		_generalMacro="B_CTRG_LSV_01_armed_F";
		scope=2;
		scopeCurator=2;
		displayName="Prowler (HMG, Tropic)";
		DLC="Aegis";
		side=1;
		faction="BLU_CTRG_F";
		crew="B_CTRG_Soldier_tna_F";
		typicalCargo[]=
		{
			"B_CTRG_Soldier_tna_F"
		};
		textureList[]=
		{
			"Dazzle",
			1,
			"Dazzle_02",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_CTRG_LSV_01_armed_sand_F: LSV_01_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_LSV_01_armed_sand_F.jpg";
		_generalMacro="B_CTRG_LSV_01_armed_sand_F";
		scope=2;
		scopeCurator=2;
		displayName="Prowler (HMG, Sand)";
		DLC="Aegis";
		side=1;
		faction="BLU_CTRG_F";
		crew="B_CTRG_Soldier_F";
		typicalCargo[]=
		{
			"B_CTRG_Soldier_F"
		};
		textureList[]=
		{
			"Dazzle",
			0,
			"Dazzle_02",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_CTRG_LSV_01_unarmed_F: LSV_01_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_LSV_01_unarmed_F.jpg";
		_generalMacro="B_CTRG_LSV_01_unarmed_F";
		scope=2;
		scopeCurator=2;
		displayName="Prowler (Unarmed, Tropic)";
		DLC="Aegis";
		side=1;
		faction="BLU_CTRG_F";
		crew="B_CTRG_Soldier_tna_F";
		typicalCargo[]=
		{
			"B_CTRG_Soldier_tna_F"
		};
		textureList[]=
		{
			"Dazzle",
			1,
			"Dazzle_02",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_CTRG_LSV_01_unarmed_sand_F: LSV_01_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_LSV_01_unarmed_sand_F.jpg";
		_generalMacro="B_CTRG_LSV_01_unarmed_sand_F";
		scope=2;
		scopeCurator=2;
		displayName="Prowler (Unarmed, Sand)";
		DLC="Aegis";
		side=1;
		faction="BLU_CTRG_F";
		crew="B_CTRG_Soldier_F";
		typicalCargo[]=
		{
			"B_CTRG_Soldier_F"
		};
		textureList[]=
		{
			"Dazzle",
			0,
			"Dazzle_02",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_CTRG_LSV_01_light_F: LSV_01_light_base_F
	{
		displayName="Prowler (Light, Tropic)";
		textureList[]=
		{
			"Dazzle",
			1,
			"Dazzle_02",
			0
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_CTRG_LSV_01_light_sand_F: LSV_01_light_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_LSV_01_light_sand_F.jpg";
		_generalMacro="B_CTRG_LSV_01_light_sand_F";
		scope=2;
		scopeCurator=2;
		displayName="Prowler (Light, Sand)";
		DLC="Aegis";
		side=1;
		faction="BLU_CTRG_F";
		crew="B_CTRG_Soldier_F";
		typicalCargo[]=
		{
			"B_CTRG_Soldier_F"
		};
		textureList[]=
		{
			"Dazzle",
			0,
			"Dazzle_02",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_CTRG_LSV_01_AT_F: LSV_01_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_LSV_01_AT_F.jpg";
		_generalMacro="B_CTRG_LSV_01_AT_F";
		scope=2;
		scopeCurator=2;
		displayName="Prowler (AT, Tropic)";
		DLC="Aegis";
		side=1;
		faction="BLU_CTRG_F";
		crew="B_CTRG_Soldier_tna_F";
		typicalCargo[]=
		{
			"B_CTRG_Soldier_tna_F"
		};
		textureList[]=
		{
			"Dazzle",
			1,
			"Dazzle_02",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_CTRG_LSV_01_AT_sand_F: LSV_01_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_CTRG_LSV_01_AT_sand_F.jpg";
		_generalMacro="B_CTRG_LSV_01_AT_sand_F";
		scope=2;
		scopeCurator=2;
		displayName="Prowler (AT, Sand)";
		DLC="Aegis";
		side=1;
		faction="BLU_CTRG_F";
		crew="B_CTRG_Soldier_tna_F";
		typicalCargo[]=
		{
			"B_CTRG_Soldier_tna_F"
		};
		textureList[]=
		{
			"Dazzle",
			0,
			"Dazzle_02",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
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
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
		};
	};
	class B_T_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_F
	{
		textureList[]=
		{
			"Dazzle",
			1,
			"Dazzle_02",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
	};
	class B_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_LSV_01_armed_CTRG_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_CTRG_Soldier_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Dazzle",
			0,
			"Dazzle_02",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
	};
	class B_T_LSV_01_armed_specops_F: B_T_LSV_01_armed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_T_LSV_01_armed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_T_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			1,
			"Sand",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
	};
	class B_LSV_01_armed_specops_F: B_T_LSV_01_armed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_LSV_01_armed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
	};
	class B_A_LSV_01_armed_specops_F: B_T_LSV_01_armed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_A_LSV_01_armed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_A_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
	};
	class B_T_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_F
	{
		textureList[]=
		{
			"Dazzle",
			1,
			"Dazzle_02",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
	};
	class B_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_LSV_01_unarmed_CTRG_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_CTRG_Soldier_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Dazzle",
			0,
			"Dazzle_02",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
	};
	class B_T_LSV_01_unarmed_specops_F: B_T_LSV_01_unarmed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_T_LSV_01_unarmed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_T_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			1,
			"Sand",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
	};
	class B_LSV_01_unarmed_specops_F: B_T_LSV_01_unarmed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_LSV_01_unarmed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
	};
	class B_A_LSV_01_unarmed_specops_F: B_T_LSV_01_unarmed_CTRG_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_A_LSV_01_unarmed_specops_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_A_Specop_TL_F";
		forceInGarage=0;
		textureList[]=
		{
			"Black",
			0,
			"Olive",
			0,
			"Sand",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
		};
	};
	class B_T_LSV_01_light_recon_F: B_T_LSV_01_light_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_T_LSV_01_light_recon_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_T_Recon_TL_F";
		forceInGarage=0;
	};
	class B_LSV_01_light_recon_F: B_LSV_01_light_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_LSV_01_light_recon_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_recon_TL_F";
		forceInGarage=0;
	};
	class B_A_LSV_01_light_recon_F: B_A_LSV_01_light_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_A_LSV_01_light_recon_F";
		scope=1;
		scopeCurator=0;
		DLC="Aegis";
		crew="B_A_Recon_TL_F";
		forceInGarage=0;
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
