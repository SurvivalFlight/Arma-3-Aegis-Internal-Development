class CfgPatches
{
	class A3_Supplies_F_Aegis_CargoNets
	{
		addonRootClass="A3_Supplies_F_Aegis";
		requiredAddons[]=
		{
			"A3_Supplies_F_Heli_CargoNets"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_CargoNet_01_ammo_F",
			"B_CargoNet_01_ammo_F",
			"B_T_CargoNet_01_ammo_F",
			"I_CargoNet_01_ammo_F",
			"O_CargoNet_01_ammo_F",
			"O_T_CargoNet_01_ammo_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class CargoNet_01_ammo_base_F;
	class B_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_20Rnd_556x45_Stanag_red
			{
				magazine="20Rnd_556x45_Stanag_red";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=36;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=12;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=8;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_LMG_Mk200_plain_F
			{
				weapon="LMG_Mk200_plain_F";
				count=2;
			};
			delete _xx_launch_Titan_F;
			class _xx_launch_B_Titan_F
			{
				weapon="launch_B_Titan_F";
				count=2;
			};
			delete _xx_launch_Titan_short_F;
			class _xx_launch_B_Titan_short_F
			{
				weapon="launch_B_Titan_short_F";
				count=2;
			};
			class _xx_srifle_DMR_03_multicam_F
			{
				weapon="srifle_DMR_03_multicam_F";
				count=2;
			};
			class _xx_srifle_DMR_03_tan_F
			{
				weapon="srifle_DMR_03_tan_F";
				count=2;
			};
			class _xx_LMG_03_F
			{
				weapon="LMG_03_F";
				count=2;
			};
			class _xx_MMG_02_camo_F
			{
				weapon="MMG_02_camo_F";
				count=2;
			};
			class _xx_MMG_02_sand_F
			{
				weapon="MMG_02_sand_F";
				count=2;
			};
			class _xx_GL_XM25_F
			{
				weapon="GL_XM25_F";
				count=2;
			};
			class _xx_sgun_KSG_F
			{
				weapon="sgun_KSG_F";
				count=4;
			};
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon="arifle_SPAR_01_snd_F";
				count=4;
			};
			class _xx_arifle_SPAR_01_GL_snd_F
			{
				weapon="arifle_SPAR_01_GL_snd_F";
				count=2;
			};
			class _xx_arifle_SPAR_02_snd_F
			{
				weapon="arifle_SPAR_02_snd_F";
				count=2;
			};
			class _xx_arifle_SPAR_03_snd_F
			{
				weapon="arifle_SPAR_03_snd_F";
				count=2;
			};
			class _xx_launch_MRAWS_green_F
			{
				weapon="launch_MRAWS_green_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=5;
			};
			delete _xx_muzzle_snds_H_SW;
			class _xx_muzzle_snds_pistol_heavy_01
			{
				name="muzzle_snds_pistol_heavy_01";
				count=5;
			};
			class _xx_muzzle_snds_M_snd_F
			{
				name="muzzle_snds_M_snd_F";
				count=5;
			};
			class _xx_muzzle_snds_H_snd_F
			{
				name="muzzle_snds_H_snd_F";
				count=5;
			};
			class _xx_muzzle_snds_B_snd_F
			{
				name="muzzle_snds_B_snd_F";
				count=5;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=5;
			};
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=5;
			};
			class _xx_muzzle_snds_lrr
			{
				name="muzzle_snds_lrr";
				count=5;
			};
			class _xx_muzzle_snds_LRR_snd_F
			{
				name="muzzle_snds_LRR_snd_F";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
				count=5;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_smg_01
			{
				name="muzzle_mzls_smg_01";
				count=5;
			};
			class _xx_muzzle_mzls_M
			{
				name="muzzle_mzls_M";
				count=5;
			};
			class _xx_muzzle_mzls_H
			{
				name="muzzle_mzls_H";
				count=5;
			};
			class _xx_muzzle_mzls_B
			{
				name="muzzle_mzls_B";
				count=5;
			};
			class _xx_muzzle_mzls_338
			{
				name="muzzle_mzls_338";
				count=5;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=2;
			};
			class _xx_optic_ERCO_snd_F
			{
				name="optic_ERCO_snd_F";
				count=2;
			};
			class _xx_optic_Holosight_smg
			{
				name="optic_Holosight_smg";
				count=2;
			};
			class _xx_optic_AMS_snd
			{
				name="optic_AMS_snd";
				count=2;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=2;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=2;
			};
			class _xx_Bipod_01_F_blk
			{
				name="Bipod_01_F_blk";
				count=5;
			};
			class _xx_Bipod_01_F_mtp
			{
				name="Bipod_01_F_mtp";
				count=5;
			};
			class _xx_Bipod_01_F_sand
			{
				name="Bipod_01_F_sand";
				count=5;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=5;
			};
		};
	};
	class B_T_CargoNet_01_ammo_F: B_CargoNet_01_ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_CargoNet_01_ammo_F.jpg";
		_generalMacro="B_T_CargoNet_01_ammo_F";
		scope=2;
		scopeCurator=2;
		displayName="Cargo Net [NATO Pacific]";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
		};
		class TransportMagazines: TransportMagazines
		{
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_khk_F
			{
				weapon="arifle_MXC_khk_F";
				count=4;
			};
			class _xx_arifle_MXM_khk_F
			{
				weapon="arifle_MXM_khk_F";
				count=2;
			};
			class _xx_arifle_MX_khk_F
			{
				weapon="arifle_MX_khk_F";
				count=8;
			};
			class _xx_arifle_MX_GL_khk_F
			{
				weapon="arifle_MX_GL_khk_F";
				count=4;
			};
			class _xx_arifle_MX_SW_khk_F
			{
				weapon="arifle_MX_SW_khk_F";
				count=4;
			};
			class _xx_LMG_Mk200_khk_F
			{
				weapon="LMG_Mk200_khk_F";
				count=2;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=2;
			};
			class _xx_hgun_P07_khk_F
			{
				weapon="hgun_P07_khk_F";
				count=2;
			};
			class _xx_hgun_Pistol_heavy_01_black_F
			{
				weapon="hgun_Pistol_heavy_01_black_F";
				count=2;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=2;
			};
			class _xx_launch_B_Titan_tna_F
			{
				weapon="launch_B_Titan_tna_F";
				count=2;
			};
			class _xx_launch_B_Titan_short_tna_F
			{
				weapon="launch_B_Titan_short_tna_F";
				count=2;
			};
			class _xx_SMG_01_khk_F
			{
				weapon="SMG_01_khk_F";
				count=4;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=2;
			};
			class _xx_srifle_LRR_tna_F
			{
				weapon="srifle_LRR_tna_F";
				count=2;
			};
			class _xx_srifle_LRR_F
			{
				weapon="srifle_LRR_F";
				count=2;
			};
			class _xx_srifle_DMR_03_khaki_F
			{
				weapon="srifle_DMR_03_khaki_F";
				count=2;
			};
			class _xx_srifle_DMR_03_woodland_F
			{
				weapon="srifle_DMR_03_woodland_F";
				count=2;
			};
			class _xx_LMG_03_F
			{
				weapon="LMG_03_F";
				count=2;
			};
			class _xx_MMG_02_black_F
			{
				weapon="MMG_02_black_F";
				count=2;
			};
			class _xx_MMG_02_tna_F
			{
				weapon="MMG_02_tna_F";
				count=2;
			};
			class _xx_GL_XM25_F
			{
				weapon="GL_XM25_F";
				count=2;
			};
			class _xx_sgun_KSG_F
			{
				weapon="sgun_KSG_F";
				count=4;
			};
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon="arifle_SPAR_01_khk_F";
				count=4;
			};
			class _xx_arifle_SPAR_01_GL_khk_F
			{
				weapon="arifle_SPAR_01_GL_khk_F";
				count=2;
			};
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon="arifle_SPAR_02_khk_F";
				count=2;
			};
			class _xx_arifle_SPAR_03_khk_F
			{
				weapon="arifle_SPAR_03_khk_F";
				count=2;
			};
			class _xx_launch_MRAWS_green_F
			{
				weapon="launch_MRAWS_green_F";
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
			class _xx_Laserdesignator_01_khk_F
			{
				name="Laserdesignator_01_khk_F";
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
			class _xx_muzzle_snds_acp
			{
				name="muzzle_snds_acp";
				count=5;
			};
			class _xx_muzzle_snds_pistol_heavy_01
			{
				name="muzzle_snds_pistol_heavy_01";
				count=5;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=5;
			};
			class _xx_muzzle_snds_M_khk_F
			{
				name="muzzle_snds_M_khk_F";
				count=5;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=5;
			};
			class _xx_muzzle_snds_H_khk_F
			{
				name="muzzle_snds_H_khk_F";
				count=5;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=5;
			};
			class _xx_muzzle_snds_B_khk_F
			{
				name="muzzle_snds_B_khk_F";
				count=5;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=5;
			};
			class _xx_muzzle_snds_338_green
			{
				name="muzzle_snds_338_green";
				count=5;
			};
			class _xx_muzzle_snds_lrr
			{
				name="muzzle_snds_lrr";
				count=5;
			};
			class _xx_muzzle_snds_LRR_khk_F
			{
				name="muzzle_snds_LRR_khk_F";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
				count=5;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_smg_01
			{
				name="muzzle_mzls_smg_01";
				count=5;
			};
			class _xx_muzzle_mzls_M
			{
				name="muzzle_mzls_M";
				count=5;
			};
			class _xx_muzzle_mzls_H
			{
				name="muzzle_mzls_H";
				count=5;
			};
			class _xx_muzzle_mzls_B
			{
				name="muzzle_mzls_B";
				count=5;
			};
			class _xx_muzzle_mzls_338
			{
				name="muzzle_mzls_338";
				count=5;
			};
			class _xx_optic_ACO
			{
				name="optic_ACO";
				count=2;
			};
			class _xx_optic_ACO_smg
			{
				name="optic_ACO_smg";
				count=2;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=2;
			};
			class _xx_optic_Hamr
			{
				name="optic_Hamr";
				count=2;
			};
			class _xx_optic_Hamr_khk_F
			{
				name="optic_Hamr_khk_F";
				count=2;
			};
			class _xx_optic_ERCO_khk_F
			{
				name="optic_ERCO_khk_F";
				count=2;
			};
			class _xx_optic_Holosight_khk_F
			{
				name="optic_Holosight_khk_F";
				count=2;
			};
			class _xx_optic_Holosight_smg_khk_F
			{
				name="optic_Holosight_smg_khk_F";
				count=2;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=2;
			};
			class _xx_optic_AMS_khk
			{
				name="optic_AMS_khk";
				count=2;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=2;
			};
			class _xx_optic_LRPS_tna_F
			{
				name="optic_LRPS_tna_F";
				count=2;
			};
			class _xx_optic_MRD
			{
				name="optic_MRD";
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
			class _xx_optic_SOS_khk_F
			{
				name="optic_SOS_khk_F";
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
			class _xx_Bipod_01_F_blk
			{
				name="Bipod_01_F_blk";
				count=5;
			};
			class _xx_Bipod_01_F_khk
			{
				name="Bipod_01_F_khk";
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
			class _xx_B_Kitbag_tna_F
			{
				backpack="B_Kitbag_tna_F";
				count=5;
			};
		};
	};
	class B_A_CargoNet_01_ammo_F: B_CargoNet_01_ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_CargoNet_01_ammo_F.jpg";
		_generalMacro="B_A_CargoNet_01_ammo_F";
		scope=2;
		scopeCurator=2;
		displayName="Cargo Net [NATO British]";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
		};
		class TransportMagazines
		{
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_11Rnd_45ACP_Mag
			{
				magazine="11Rnd_45ACP_Mag";
				count=14;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
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
			class _xx_20Rnd_556x45_Stanag_red
			{
				magazine="20Rnd_556x45_Stanag_red";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=36;
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
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=14;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=64;
			};
			class _xx_5Rnd_127x99_Mag
			{
				magazine="5Rnd_127x99_Mag";
				count=12;
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
			class _xx_B_IR_Grenade
			{
				magazine="B_IR_Grenade";
				count=8;
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
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=8;
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
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=12;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=12;
			};
			class _xx_APERSTripFlare_Wire_Mag
			{
				magazine="APERSTripFlare_Wire_Mag";
				count=5;
			};
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=8;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_LMG_Mk200_plain_F
			{
				weapon="LMG_Mk200_plain_F";
				count=2;
			};
			class _xx_arifle_SA80_C_blk_F
			{
				weapon="arifle_SA80_C_blk_F";
				count=4;
			};
			class _xx_arifle_SA80_blk_F
			{
				weapon="arifle_SA80_blk_F";
				count=8;
			};
			class _xx_arifle_SA80_GL_blk_F
			{
				weapon="arifle_SA80_GL_blk_F";
				count=4;
			};
			class _xx_arifle_SA80_LSW_blk_F
			{
				weapon="arifle_SA80_LSW_blk_F";
				count=4;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=2;
			};
			class _xx_hgun_P07_F
			{
				weapon="hgun_P07_F";
				count=2;
			};
			class _xx_hgun_Pistol_heavy_01_F
			{
				weapon="hgun_Pistol_heavy_01_F";
				count=2;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=2;
			};
			class _xx_launch_B_Titan_F
			{
				weapon="launch_B_Titan_F";
				count=2;
			};
			class _xx_launch_B_Titan_short_F
			{
				weapon="launch_B_Titan_short_F";
				count=2;
			};
			class _xx_SMG_01_black_F
			{
				weapon="SMG_01_black_F";
				count=4;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=2;
			};
			class _xx_srifle_WF50_F
			{
				weapon="srifle_WF50_F";
				count=2;
			};
			class _xx_srifle_DMR_03_multicam_F
			{
				weapon="srifle_DMR_03_multicam_F";
				count=2;
			};
			class _xx_srifle_DMR_03_tan_F
			{
				weapon="srifle_DMR_03_tan_F";
				count=2;
			};
			class _xx_LMG_03_F
			{
				weapon="LMG_03_F";
				count=2;
			};
			class _xx_MMG_02_camo_F
			{
				weapon="MMG_02_camo_F";
				count=2;
			};
			class _xx_MMG_02_sand_F
			{
				weapon="MMG_02_sand_F";
				count=2;
			};
			class _xx_GL_XM25_F
			{
				weapon="GL_XM25_F";
				count=2;
			};
			class _xx_sgun_M4_F
			{
				weapon="sgun_M4_F";
				count=4;
			};
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon="arifle_SPAR_01_snd_F";
				count=4;
			};
			class _xx_arifle_SPAR_01_GL_snd_F
			{
				weapon="arifle_SPAR_01_GL_snd_F";
				count=2;
			};
			class _xx_arifle_SPAR_02_snd_F
			{
				weapon="arifle_SPAR_02_snd_F";
				count=2;
			};
			class _xx_arifle_SPAR_03_snd_F
			{
				weapon="arifle_SPAR_03_snd_F";
				count=2;
			};
			class _xx_launch_MRAWS_green_F
			{
				weapon="launch_MRAWS_green_F";
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
			class _xx_muzzle_snds_acp
			{
				name="muzzle_snds_acp";
				count=5;
			};
			class _xx_muzzle_snds_pistol_heavy_01
			{
				name="muzzle_snds_pistol_heavy_01";
				count=5;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=5;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=5;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=5;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=5;
			};
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=5;
			};
			class _xx_muzzle_snds_lrr
			{
				name="muzzle_snds_lrr";
				count=5;
			};
			class _xx_muzzle_snds_LRR_snd_F
			{
				name="muzzle_snds_LRR_snd_F";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
				count=5;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_smg_01
			{
				name="muzzle_mzls_smg_01";
				count=5;
			};
			class _xx_muzzle_mzls_M
			{
				name="muzzle_mzls_M";
				count=5;
			};
			class _xx_muzzle_mzls_H
			{
				name="muzzle_mzls_H";
				count=5;
			};
			class _xx_muzzle_mzls_B
			{
				name="muzzle_mzls_B";
				count=5;
			};
			class _xx_muzzle_mzls_338
			{
				name="muzzle_mzls_338";
				count=5;
			};
			class _xx_optic_ACO
			{
				name="optic_ACO";
				count=2;
			};
			class _xx_optic_ACO_smg
			{
				name="optic_ACO_smg";
				count=2;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=2;
			};
			class _xx_optic_Hamr
			{
				name="optic_Hamr";
				count=2;
			};
			class _xx_optic_ERCO_blk_F
			{
				name="optic_ERCO_blk_F";
				count=2;
			};
			class _xx_optic_Holosight_blk_F
			{
				name="optic_Holosight_blk_F";
				count=2;
			};
			class _xx_optic_Holosight_smg_blk_F
			{
				name="optic_Holosight_smg_blk_F";
				count=2;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=2;
			};
			class _xx_optic_AMS_snd
			{
				name="optic_AMS_snd";
				count=2;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=2;
			};
			class _xx_optic_MRD
			{
				name="optic_MRD";
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
			class _xx_Bipod_01_F_blk
			{
				name="Bipod_01_F_blk";
				count=5;
			};
			class _xx_Bipod_01_F_mtp
			{
				name="Bipod_01_F_mtp";
				count=5;
			};
			class _xx_Bipod_01_F_snd
			{
				name="Bipod_01_F_snd";
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
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=5;
			};
		};
	};
	class O_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=14;
			};
			class _xx_20Rnd_556x45_Stanag_green
			{
				magazine="20Rnd_556x45_Stanag_green";
				count=6;
			};
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
				count=24;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=14;
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
			class _xx_150Rnd_93x64_Mag
			{
				magazine="150Rnd_93x64_Mag";
				count=12;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=12;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=12;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=12;
			};
			class _xx_APERSTripFlare_Wire_Mag
			{
				magazine="APERSTripFlare_Wire_Mag";
				count=5;
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
			delete _xx_launch_Titan_F;
			class _xx_launch_O_Titan_F
			{
				weapon="launch_O_Titan_F";
				count=2;
			};
			delete _xx_launch_Titan_short_F;
			class _xx_launch_O_Titan_short_F
			{
				weapon="launch_O_Titan_short_F";
				count=2;
			};
			class _xx_srifle_DMR_04_tan_F
			{
				weapon="srifle_DMR_04_tan_F";
				count=2;
			};
			class _xx_srifle_DMR_04_F
			{
				weapon="srifle_DMR_04_F";
				count=2;
			};
			class _xx_srifle_DMR_05_hex_F
			{
				weapon="srifle_DMR_05_hex_F";
				count=2;
			};
			class _xx_srifle_DMR_05_tan_F
			{
				weapon="srifle_DMR_05_tan_F";
				count=2;
			};
			class _xx_srifle_DMR_05_F
			{
				weapon="srifle_DMR_05_F";
				count=2;
			};
			class _xx_MMG_01_black_F
			{
				weapon="MMG_01_black_F";
				count=2;
			};
			class _xx_MMG_01_hex_F
			{
				weapon="MMG_01_hex_F";
				count=2;
			};
			class _xx_MMG_01_tan_F
			{
				weapon="MMG_01_tan_F";
				count=2;
			};
			class _xx_GL_M32_F
			{
				weapon="GL_M32_F";
				count=2;
			};
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=4;
			};
			class _xx_arifle_TRG20_F
			{
				weapon="arifle_TRG20_F";
				count=2;
			};
			class _xx_arifle_TRG21_F
			{
				weapon="arifle_TRG21_F";
				count=4;
			};
			class _xx_arifle_TRG21_GL_F
			{
				weapon="arifle_TRG21_GL_F";
				count=2;
			};
			class _xx_launch_O_Vorona_brown_F
			{
				weapon="launch_O_Vorona_brown_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=5;
			};
			delete _xx_Laserdesignator;
			class _xx_Laserdesignator_02
			{
				name="Laserdesignator_02";
				count=1;
			};
			delete _xx_muzzle_snds_acp;
			class _xx_muzzle_snds_L
			{
				name="muzzle_snds_L";
				count=5;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
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
			class _xx_muzzle_snds_93mmg_tan
			{
				name="muzzle_snds_93mmg_tan";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
				count=5;
			};
			class _xx_muzzle_mzls_H
			{
				name="muzzle_mzls_H";
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
			class _xx_optic_ARCO_blk_F
			{
				name="optic_ARCO_blk_F";
				count=2;
			};
			class _xx_optic_KHS_hex
			{
				name="optic_KHS_hex";
				count=2;
			};
			class _xx_optic_KHS_tan
			{
				name="optic_KHS_tan";
				count=2;
			};
			class _xx_optic_KHS
			{
				name="optic_KHS";
				count=2;
			};
			delete _xx_optic_MRCO;
			class _xx_optic_SOS
			{
				name="optic_SOS";
				count=2;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=2;
			};
			class _xx_Bipod_02_F_blk
			{
				name="Bipod_02_F_blk";
				count=5;
			};
			class _xx_Bipod_02_F_hex
			{
				name="Bipod_02_F_hex";
				count=5;
			};
			class _xx_Bipod_02_F_tan
			{
				name="Bipod_02_F_tan";
				count=5;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_ocamo
			{
				backpack="B_FieldPack_ocamo";
				count=5;
			};
		};
	};
	class O_T_CargoNet_01_ammo_F: O_CargoNet_01_ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_CargoNet_01_ammo_F.jpg";
		_generalMacro="O_T_CargoNet_01_ammo_F";
		scope=2;
		scopeCurator=2;
		displayName="Cargo Net [CSAT Pacific]";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\ammobox_signs_OPFOR_T_CA.paa"
		};
		class TransportMagazines
		{
			class _xx_20Rnd_650x39_Cased_Mag_F
			{
				magazine="20Rnd_650x39_Cased_Mag_F";
				count=48;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=12;
			};
			class _xx_75Rnd_580x42_Mag_F
			{
				magazine="75Rnd_580x42_Mag_F";
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
			class _xx_20Rnd_556x45_Stanag_green
			{
				magazine="20Rnd_556x45_Stanag_green";
				count=6;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=40;
			};
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
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
			class _xx_6Rnd_45ACP_Cylinder
			{
				magazine="6Rnd_45ACP_Cylinder";
				count=14;
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
			class _xx_O_IR_Grenade
			{
				magazine="O_IR_Grenade";
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
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
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
			class _xx_150Rnd_93x64_Mag
			{
				magazine="150Rnd_93x64_Mag";
				count=12;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=12;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=12;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=12;
			};
			class _xx_APERSTripFlare_Wire_Mag
			{
				magazine="APERSTripFlare_Wire_Mag";
				count=5;
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
			class _xx_LMG_Zafir_ghex_F
			{
				weapon="LMG_Zafir_ghex_F";
				count=2;
			};
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=12;
			};
			class _xx_arifle_CTAR_GL_blk_F
			{
				weapon="arifle_CTAR_GL_blk_F";
				count=4;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=2;
			};
			class _xx_hgun_Pistol_heavy_02_F
			{
				weapon="hgun_Pistol_heavy_02_F";
				count=2;
			};
			class _xx_hgun_Rook40_F
			{
				weapon="hgun_Rook40_F";
				count=2;
			};
			class _xx_launch_RPG32_ghex_F
			{
				weapon="launch_RPG32_ghex_F";
				count=2;
			};
			class _xx_launch_O_Titan_ghex_F
			{
				weapon="launch_O_Titan_ghex_F";
				count=2;
			};
			class _xx_launch_O_Titan_short_ghex_F
			{
				weapon="launch_O_Titan_short_ghex_F";
				count=2;
			};
			class _xx_arifle_CTARS_blk_F
			{
				weapon="arifle_CTARS_blk_F";
				count=2;
			};
			class _xx_SMG_02_F
			{
				weapon="SMG_02_F";
				count=4;
			};
			class _xx_srifle_DMR_07_blk_F
			{
				weapon="srifle_DMR_07_blk_F";
				count=4;
			};
			class _xx_srifle_GM6_ghex_F
			{
				weapon="srifle_GM6_ghex_F";
				count=2;
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
			class _xx_srifle_DMR_05_ghex_F
			{
				weapon="srifle_DMR_05_ghex_F";
				count=2;
			};
			class _xx_srifle_DMR_05_F
			{
				weapon="srifle_DMR_05_F";
				count=2;
			};
			class _xx_MMG_01_black_F
			{
				weapon="MMG_01_black_F";
				count=2;
			};
			class _xx_MMG_01_ghex_F
			{
				weapon="MMG_01_ghex_F";
				count=2;
			};
			class _xx_GL_M32_F
			{
				weapon="GL_M32_F";
				count=2;
			};
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=4;
			};
			class _xx_arifle_TRG20_F
			{
				weapon="arifle_TRG20_F";
				count=2;
			};
			class _xx_arifle_TRG21_F
			{
				weapon="arifle_TRG21_F";
				count=4;
			};
			class _xx_arifle_TRG21_GL_F
			{
				weapon="arifle_TRG21_GL_F";
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
			class _xx_Laserdesignator_02_ghex_F
			{
				name="Laserdesignator_02_ghex_F";
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
			class _xx_muzzle_snds_58_blk_F
			{
				name="muzzle_snds_58_blk_F";
				count=5;
			};
			class _xx_muzzle_snds_58_ghex_F
			{
				name="muzzle_snds_58_ghex_F";
				count=5;
			};
			class _xx_muzzle_snds_65_TI_blk_F
			{
				name="muzzle_snds_65_TI_blk_F";
				count=5;
			};
			class _xx_muzzle_snds_65_TI_ghex_F
			{
				name="muzzle_snds_65_TI_ghex_F";
				count=5;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=5;
			};
			class _xx_muzzle_snds_B_wdm_F
			{
				name="muzzle_snds_B_wdm_F";
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
			class _xx_muzzle_mzls_58_F
			{
				name="muzzle_mzls_58_F";
				count=5;
			};
			class _xx_muzzle_mzls_H
			{
				name="muzzle_mzls_H";
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
			class _xx_optic_ARCO_blk_F
			{
				name="optic_ARCO_blk_F";
				count=2;
			};
			class _xx_optic_ARCO_ghex_F
			{
				name="optic_ARCO_ghex_F";
				count=2;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=2;
			};
			class _xx_optic_DMS_ghex_F
			{
				name="optic_DMS_ghex_F";
				count=2;
			};
			class _xx_optic_KHS
			{
				name="optic_KHS";
				count=2;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=2;
			};
			class _xx_optic_LRPS_ghex_F
			{
				name="optic_LRPS_ghex_F";
				count=2;
			};
			class _xx_optic_Nightstalker
			{
				name="optic_Nightstalker";
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
			class _xx_optic_Yorris
			{
				name="optic_Yorris";
				count=2;
			};
			class _xx_Bipod_02_F_blk
			{
				name="Bipod_02_F_blk";
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
			class _xx_B_FieldPack_ghex_F
			{
				backpack="B_FieldPack_ghex_F";
				count=5;
			};
		};
	};
	class I_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=40;
			};
			class _xx_6Rnd_45ACP_Cylinder
			{
				magazine="6Rnd_45ACP_Cylinder";
				count=14;
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
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=8;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			delete _xx_launch_Titan_F;
			class _xx_launch_I_Titan_F
			{
				weapon="launch_I_Titan_F";
				count=2;
			};
			delete _xx_launch_Titan_short_F;
			class _xx_launch_I_Titan_short_F
			{
				weapon="launch_I_Titan_short_F";
				count=2;
			};
			class _xx_GL_M32_F
			{
				weapon="GL_M32_F";
				count=2;
			};
			class _xx_sgun_M4_F
			{
				weapon="sgun_M4_F";
				count=4;
			};
			class _xx_launch_MRAWS_olive_rail_F
			{
				weapon="launch_MRAWS_olive_rail_F";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=5;
			};
			delete _xx_Laserdesignator;
			class _xx_Laserdesignator_03
			{
				name="Laserdesignator_03";
				count=1;
			};
			delete _xx_muzzle_snds_H_MG;
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
				count=5;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_M
			{
				name="muzzle_mzls_M";
				count=5;
			};
			class _xx_muzzle_mzls_B
			{
				name="muzzle_mzls_B";
				count=5;
			};
			class _xx_optic_ACO_smg_grn
			{
				name="optic_ACO_smg_grn";
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
			class _xx_Bipod_03_F_oli
			{
				name="Bipod_03_F_oli";
				count=5;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_oli
			{
				backpack="B_FieldPack_oli";
				count=5;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942637";
};
