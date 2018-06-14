class CfgPatches
{
	class A3_Supplies_F_Rus_CargoNets
	{
		addonRootClass="A3_Supplies_F_Rus";
		requiredAddons[]=
		{
			"A3_Supplies_F_Aegis_CargoNets"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_CargoNet_01_ammo_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_CargoNet_01_ammo_F;
	class I_RU_CargoNet_01_ammo_F: I_CargoNet_01_ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_CargoNet_01_ammo_F.jpg";
		_generalMacro="I_RU_CargoNet_01_ammo_F";
		scope=2;
		scopeCurator=2;
		displayName="Cargo Net [Russia]";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa"
		};
		class TransportMagazines
		{
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=48;
			};
			class _xx_75Rnd_545x39_Mag_F
			{
				magazine="75Rnd_545x39_Mag_F";
				count=24;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=14;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=24;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=6;
			};
			class _xx_20Rnd_556x45_Stanag
			{
				magazine="20Rnd_556x45_Stanag";
				count=6;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=40;
			};
			class _xx_30Rnd_545x39_Mag_F
			{
				magazine="30Rnd_545x39_Mag_F";
				count=24;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=14;
			};
			class _xx_5Rnd_127x108_APDS_Mag
			{
				magazine="5Rnd_127x108_APDS_Mag";
				count=4;
			};
			class _xx_5Rnd_127x108_Mag
			{
				magazine="5Rnd_127x108_Mag";
				count=8;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=5;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=5;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
				count=5;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=5;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=5;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=24;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=5;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=24;
			};
			class _xx_R_IR_Grenade
			{
				magazine="R_IR_Grenade";
				count=8;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=8;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=5;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=6;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=6;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=6;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=2;
			};
			class _xx_10Rnd_127x54_Mag
			{
				magazine="10Rnd_127x54_Mag";
				count=12;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=12;
			};
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
				count=12;
			};
			class _xx_8Rnd_12Gauge_Slug
			{
				magazine="8Rnd_12Gauge_Slug";
				count=12;
			};
			class _xx_APERSTripFlare_Wire_Mag
			{
				magazine="APERSTripFlare_Wire_Mag";
				count=5;
			};
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=8;
			};
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=8;
			};
			class _xx_Vorona_HE
			{
				magazine="Vorona_HE";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=12;
			};
			class _xx_arifle_AK12_GL_F
			{
				weapon="arifle_AK12_GL_F";
				count=4;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=2;
			};
			class _xx_hgun_Rook40_F
			{
				weapon="hgun_Rook40_F";
				count=2;
			};
			class _xx_launch_RPG32_black_F
			{
				weapon="launch_RPG32_black_F";
				count=2;
			};
			class _xx_launch_R_Titan_F
			{
				weapon="launch_R_Titan_F";
				count=2;
			};
			class _xx_launch_R_Titan_short_F
			{
				weapon="launch_R_Titan_short_F";
				count=2;
			};
			class _xx_arifle_RPK_F
			{
				weapon="arifle_RPK_F";
				count=2;
			};
			class _xx_SMG_06_F
			{
				weapon="SMG_06_F";
				count=4;
			};
			class _xx_srifle_DMR_01_black_F
			{
				weapon="srifle_DMR_01_black_F";
				count=4;
			};
			class _xx_srifle_GM6_F
			{
				weapon="srifle_GM6_F";
				count=2;
			};
			class _xx_srifle_DMR_04_F
			{
				weapon="srifle_DMR_04_F";
				count=2;
			};
			class _xx_srifle_DMR_05_F
			{
				weapon="srifle_DMR_05_F";
				count=2;
			};
			class _xx_GL_RG6_F
			{
				weapon="GL_RG6_F";
				count=2;
			};
			class _xx_sgun_SK12_F
			{
				weapon="sgun_SK12_F";
				count=4;
			};
			class _xx_arifle_AK105_F
			{
				weapon="arifle_AK105_F";
				count=2;
			};
			class _xx_arifle_AK107_F
			{
				weapon="arifle_AK107_F";
				count=4;
			};
			class _xx_arifle_AK107_GL_F
			{
				weapon="arifle_AK107_GL_F";
				count=2;
			};
			class _xx_launch_RPG7_black_F
			{
				weapon="launch_RPG7_black_F";
				count=2;
			};
			class _xx_launch_O_Vorona_green_F
			{
				weapon="launch_O_Vorona_green_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=5;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=5;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=5;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=5;
			};
			class _xx_Laserdesignator_03
			{
				name="Laserdesignator_03";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_muzzle_snds_L
			{
				name="muzzle_snds_L";
				count=5;
			};
			class _xx_muzzle_snds_545_F
			{
				name="muzzle_snds_545_F";
				count=5;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=5;
			};
			class _xx_muzzle_snds_93mmg
			{
				name="muzzle_snds_93mmg";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
				count=5;
			};
			class _xx_muzzle_mzls_B
			{
				name="muzzle_mzls_B";
				count=5;
			};
			class _xx_muzzle_mzls_93mmg
			{
				name="muzzle_mzls_93mmg";
				count=5;
			};
			class _xx_optic_ACO_grn
			{
				name="optic_ACO_grn";
				count=2;
			};
			class _xx_optic_ACO_smg_grn
			{
				name="optic_ACO_smg_grn";
				count=2;
			};
			class _xx_optic_MRCO
			{
				name="optic_MRCO";
				count=2;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=2;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=2;
			};
			class _xx_optic_NVS
			{
				name="optic_NVS";
				count=2;
			};
			class _xx_optic_SOS
			{
				name="optic_SOS";
				count=2;
			};
			class _xx_optic_TWS
			{
				name="optic_TWS";
				count=2;
			};
			class _xx_optic_TWS_MG
			{
				name="optic_TWS_MG";
				count=2;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=2;
			};
			class _xx_Bipod_03_F_blk
			{
				name="Bipod_03_F_blk";
				count=5;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_vsr_F
			{
				backpack="B_FieldPack_vsr_F";
				count=5;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527875400";
};
