class CfgPatches
{
	class A3_Supplies_F_Aegis_Ammoboxes
	{
		addonRootClass="A3_Supplies_F_Aegis";
		requiredAddons[]=
		{
			"A3_Supplies_F_Exp_Ammoboxes",
			"A3_Weapons_F_Ammoboxes"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class NATO_Box_Base;
	class Box_NATO_Wps_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=2;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=1;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon="arifle_SPAR_01_snd_F";
				count=1;
			};
			class _xx_arifle_SPAR_01_GL_snd_F
			{
				weapon="arifle_SPAR_01_GL_snd_F";
				count=1;
			};
			class _xx_arifle_SPAR_02_snd_F
			{
				weapon="arifle_SPAR_02_snd_F";
				count=1;
			};
			class _xx_LMG_03_F
			{
				weapon="LMG_03_F";
				count=1;
			};
		};
	};
	class Box_NATO_WpsSpecial_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=18;
			};
			delete _xx_30Rnd_556x45_Stanag_red;
			class _xx_20Rnd_556x45_Stanag_red
			{
				magazine="20Rnd_556x45_Stanag_red";
				count=3;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Slug
			{
				magazine="8Rnd_12Gauge_Slug";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SPAR_03_snd_F
			{
				weapon="arifle_SPAR_03_snd_F";
				count=1;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=1;
			};
			delete _xx_srifle_LRR_F;
			class _xx_srifle_LRR_camo_F
			{
				weapon="srifle_LRR_camo_F";
				count=1;
			};
			class _xx_LMG_Mk200_plain_F
			{
				weapon="LMG_Mk200_plain_F";
				count=1;
			};
			delete _xx_srifle_DMR_03_F;
			class _xx_srifle_DMR_03_tan_F
			{
				weapon="srifle_DMR_03_tan_F";
				count=1;
			};
			delete _xx_srifle_DMR_02_F;
			delete _xx_MMG_02_black_F;
			class _xx_MMG_02_sand_F
			{
				weapon="MMG_02_sand_F";
				count=1;
			};
			class _xx_sgun_KSG_F
			{
				weapon="sgun_KSG_F";
				count=1;
			};
			class _xx_GL_XM25_F
			{
				weapon="GL_XM25_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_Holosight_smg
			{
				name="optic_Holosight_smg";
				count=1;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=1;
			};
			delete _xx_optic_AMS_khk;
		};
	};
	class Box_NATO_Ammo_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=18;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=6;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
		};
	};
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=5;
			};
			class _xx_muzzle_snds_acp_pistol_heavy_01
			{
				name="muzzle_snds_acp_pistol_heavy_01";
				count=5;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
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
			class _xx_muzzle_snds_b_snd_F
			{
				name="muzzle_snds_b_snd_F";
				count=5;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=2;
			};
			delete _xx_muzzle_snds_338_green;
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=2;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_acp_smg_01
			{
				name="muzzle_mzls_acp_smg_01";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
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
			class _xx_muzzle_mzls_b
			{
				name="muzzle_mzls_b";
				count=5;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=2;
			};
			class _xx_bipod_01_F_mtp
			{
				name="bipod_01_F_mtp";
				count=2;
			};
			class _xx_bipod_01_F_snd
			{
				name="bipod_01_F_snd";
				count=2;
			};
			delete _xx_muzzle_snds_H_khk_F;
			delete _xx_bipod_01_F_khk;
			class _xx_NVGoggles
			{
				name="NVGoggles";
				count=2;
			};
			delete _xx_NVGoggles_tna_F;
			class _xx_NVGogglesB_blk_F
			{
				name="NVGogglesB_blk_F";
				count=2;
			};
			delete _xx_NVGogglesB_grn_F;
			class _xx_NVGogglesB_gry_F
			{
				name="NVGogglesB_gry_F";
				count=2;
			};
		};
	};
	class Box_NATO_WpsLaunch_F: NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_launch_Titan_F;
			class _xx_launch_B_Titan_F
			{
				weapon="launch_B_Titan_F";
				count=1;
			};
			delete _xx_launch_Titan_short_F;
			class _xx_launch_B_Titan_short_F
			{
				weapon="launch_B_Titan_short_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			delete _xx_B_Kitbag_rgr;
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=3;
			};
		};
	};
	class Box_NATO_AmmoVeh_F;
	class B_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=24;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=6;
			};
			class _xx_15Rnd_45ACP_Mag
			{
				magazine="15Rnd_45ACP_Mag";
				count=6;
			};
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=6;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=1;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=6;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			delete _xx_bipod_01_F_blk;
		};
	};
	class Box_NATO_Equip_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_V_Rangemaster_belt
			{
				name="V_Rangemaster_belt";
				count=2;
			};
			class _xx_V_BandollierB_blk
			{
				name="V_BandollierB_blk";
				count=2;
			};
			class _xx_V_BandollierB_rgr
			{
				name="V_BandollierB_rgr";
				count=2;
			};
			class _xx_V_Chestrig_blk
			{
				name="V_Chestrig_blk";
				count=2;
			};
			class _xx_V_Chestrig_rgr
			{
				name="V_Chestrig_rgr";
				count=2;
			};
			class _xx_V_TacVest_blk
			{
				name="V_TacVest_blk";
				count=2;
			};
			class _xx_V_TacVest_oli
			{
				name="V_TacVest_oli";
				count=2;
			};
			class _xx_V_PlateCarrier1_blk
			{
				name="V_PlateCarrier1_blk";
				count=2;
			};
			class _xx_V_PlateCarrier1_rgr
			{
				name="V_PlateCarrier1_rgr";
				count=2;
			};
			class _xx_V_PlateCarrier1_mtp
			{
				name="V_PlateCarrier1_mtp";
				count=2;
			};
			class _xx_V_PlateCarrier2_blk
			{
				name="V_PlateCarrier2_blk";
				count=2;
			};
			class _xx_V_PlateCarrier2_rgr
			{
				name="V_PlateCarrier2_rgr";
				count=2;
			};
			class _xx_V_PlateCarrier2_mtp
			{
				name="V_PlateCarrier2_mtp";
				count=2;
			};
			class _xx_V_PlateCarrierGL_blk
			{
				name="V_PlateCarrierGL_blk";
				count=2;
			};
			class _xx_V_PlateCarrierGL_rgr
			{
				name="V_PlateCarrierGL_rgr";
				count=2;
			};
			class _xx_V_PlateCarrierGL_mtp
			{
				name="V_PlateCarrierGL_mtp";
				count=2;
			};
			class _xx_V_PlateCarrierSpec_blk
			{
				name="V_PlateCarrierSpec_blk";
				count=2;
			};
			class _xx_V_PlateCarrierSpec_rgr
			{
				name="V_PlateCarrierSpec_rgr";
				count=2;
			};
			class _xx_V_PlateCarrierSpec_mtp
			{
				name="V_PlateCarrierSpec_mtp";
				count=2;
			};
			class _xx_V_RebreatherB
			{
				name="V_RebreatherB";
				count=2;
			};
			class _xx_H_Cap_tan_specops_US
			{
				name="H_Cap_tan_specops_US";
				count=2;
			};
			class _xx_H_MilCap_mcamo
			{
				name="H_MilCap_mcamo";
				count=2;
			};
			class _xx_H_Booniehat_mcamo
			{
				name="H_Booniehat_mcamo";
				count=2;
			};
			delete _xx_H_Booniehat_tan;
			class _xx_H_Beret_02
			{
				name="H_Beret_02";
				count=2;
			};
			class _xx_H_HelmetB_light
			{
				name="H_HelmetB_light";
				count=2;
			};
			class _xx_H_HelmetB_light_black
			{
				name="H_HelmetB_light_black";
				count=2;
			};
			class _xx_H_HelmetB_light_desert
			{
				name="H_HelmetB_light_desert";
				count=2;
			};
			class _xx_H_HelmetB_light_grass
			{
				name="H_HelmetB_light_grass";
				count=2;
			};
			class _xx_H_HelmetB_light_sand
			{
				name="H_HelmetB_light_sand";
				count=2;
			};
			class _xx_H_HelmetB_light_snakeskin
			{
				name="H_HelmetB_light_snakeskin";
				count=2;
			};
			class _xx_H_HelmetB_light_mtp
			{
				name="H_HelmetB_light_mtp";
				count=2;
			};
			class _xx_H_HelmetB_light_green
			{
				name="H_HelmetB_light_green";
				count=2;
			};
			class _xx_H_HelmetB
			{
				name="H_HelmetB";
				count=2;
			};
			class _xx_H_HelmetB_black
			{
				name="H_HelmetB_black";
				count=2;
			};
			class _xx_H_HelmetB_camo
			{
				name="H_HelmetB_camo";
				count=2;
			};
			class _xx_H_HelmetB_desert
			{
				name="H_HelmetB_desert";
				count=2;
			};
			class _xx_H_HelmetB_grass
			{
				name="H_HelmetB_grass";
				count=2;
			};
			class _xx_H_HelmetB_sand
			{
				name="H_HelmetB_sand";
				count=2;
			};
			class _xx_H_HelmetB_snakeskin
			{
				name="H_HelmetB_snakeskin";
				count=2;
			};
			class _xx_H_HelmetB_mtp
			{
				name="H_HelmetB_mtp";
				count=2;
			};
			class _xx_H_HelmetB_green
			{
				name="H_HelmetB_green";
				count=2;
			};
			class _xx_H_HelmetSpecB
			{
				name="H_HelmetSpecB";
				count=2;
			};
			class _xx_H_HelmetSpecB_blk
			{
				name="H_HelmetSpecB_blk";
				count=2;
			};
			class _xx_H_HelmetSpecB_paint2
			{
				name="H_HelmetSpecB_paint2";
				count=2;
			};
			class _xx_H_HelmetSpecB_paint1
			{
				name="H_HelmetSpecB_paint1";
				count=2;
			};
			class _xx_H_HelmetSpecB_sand
			{
				name="H_HelmetSpecB_sand";
				count=2;
			};
			class _xx_H_HelmetSpecB_snakeskin
			{
				name="H_HelmetSpecB_snakeskin";
				count=2;
			};
			class _xx_H_HelmetSpecB_mtp
			{
				name="H_HelmetSpecB_mtp";
				count=2;
			};
			class _xx_H_HelmetSpecB_grn
			{
				name="H_HelmetSpecB_grn";
				count=2;
			};
			class _xx_H_HelmetCrew_B
			{
				name="H_HelmetCrew_B";
				count=2;
			};
			class _xx_H_PilotHelmetFighter_B
			{
				name="H_PilotHelmetFighter_B";
				count=2;
			};
			class _xx_H_PilotHelmetHeli_B
			{
				name="H_PilotHelmetHeli_B";
				count=2;
			};
			class _xx_H_CrewHelmetHeli_B
			{
				name="H_CrewHelmetHeli_B";
				count=2;
			};
			class _xx_V_TacChestrig_grn_F
			{
				name="V_TacChestrig_grn_F";
				count=2;
			};
			delete _xx_V_PlateCarrier1_tna_F;
			delete _xx_V_PlateCarrier2_tna_F;
			delete _xx_V_PlateCarrierSpec_tna_F;
			delete _xx_V_PlateCarrierGL_tna_F;
			delete _xx_V_BandollierB_ghex_F;
			delete _xx_V_PlateCarrier1_rgr_noflag_F;
			delete _xx_V_PlateCarrier2_rgr_noflag_F;
			delete _xx_H_HelmetB_TI_tna_F;
			delete _xx_H_HelmetB_tna_F;
			delete _xx_H_HelmetB_Enh_tna_F;
			delete _xx_H_HelmetB_Light_tna_F;
			delete _xx_H_Booniehat_tna_F;
		};
		class TransportBackpacks
		{
			class _xx_B_AssaultPack_mcamo
			{
				backpack="B_AssaultPack_mcamo";
				count=2;
			};
			class _xx_B_AssaultPack_rgr
			{
				backpack="B_AssaultPack_rgr";
				count=2;
			};
			class _xx_B_AssaultPack_sgg
			{
				backpack="B_AssaultPack_sgg";
				count=2;
			};
			class _xx_B_Bergen_mcamo_F
			{
				backpack="B_Bergen_mcamo_F";
				count=2;
			};
			class _xx_B_Bergen_sgg_F
			{
				backpack="B_Bergen_sgg_F";
				count=2;
			};
			class _xx_B_Carryall_cbr
			{
				backpack="B_Carryall_cbr";
				count=2;
			};
			class _xx_B_Carryall_khk
			{
				backpack="B_Carryall_khk";
				count=2;
			};
			class _xx_B_Carryall_mcamo
			{
				backpack="B_Carryall_mcamo";
				count=2;
			};
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=2;
			};
			class _xx_B_Kitbag_rgr
			{
				backpack="B_Kitbag_rgr";
				count=2;
			};
			class _xx_B_Kitbag_sgg
			{
				backpack="B_Kitbag_sgg";
				count=2;
			};
			class _xx_B_TacticalPack_mcamo
			{
				backpack="B_TacticalPack_mcamo";
				count=2;
			};
			class _xx_B_TacticalPack_rgr
			{
				backpack="B_TacticalPack_rgr";
				count=2;
			};
		};
	};
	class Box_NATO_Uniforms_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_U_B_CombatUniform_wdl
			{
				name="U_B_CombatUniform_wdl";
				count=4;
			};
			class _xx_U_B_CombatUniform_wdl_tshirt
			{
				name="U_B_CombatUniform_wdl_tshirt";
				count=4;
			};
			class _xx_U_B_CombatUniform_wdl_vest
			{
				name="U_B_CombatUniform_wdl_vest";
				count=4;
			};
			class _xx_U_B_CombatUniform_sgg
			{
				name="U_B_CombatUniform_sgg";
				count=4;
			};
			class _xx_U_B_CombatUniform_sgg_tshirt
			{
				name="U_B_CombatUniform_sgg_tshirt";
				count=4;
			};
			class _xx_U_B_CombatUniform_sgg_vest
			{
				name="U_B_CombatUniform_sgg_vest";
				count=4;
			};
			delete _xx_U_B_CTRG_1;
			delete _xx_U_B_CTRG_3;
			delete _xx_U_B_CTRG_2;
			delete _xx_U_B_T_Soldier_F;
			delete _xx_U_B_T_Soldier_AR_F;
			delete _xx_U_B_T_Soldier_SL_F;
			delete _xx_U_B_T_Sniper_F;
			delete _xx_U_B_T_FullGhillie_tna_F;
			delete _xx_U_B_CTRG_Soldier_F;
			delete _xx_U_B_CTRG_Soldier_2_F;
			delete _xx_U_B_CTRG_Soldier_3_F;
		};
	};
	class IND_Box_Base;
	class Box_IND_WpsSpecial_F: IND_Box_Base
	{
		class TransportMagazines
		{
			class _xx_5Rnd_127x108_Mag
			{
				magazine="5Rnd_127x108_Mag";
				count=8;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=6;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=3;
			};
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_20Rnd_556x45_Stanag
			{
				magazine="20Rnd_556x45_Stanag";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Slug
			{
				magazine="8Rnd_12Gauge_Slug";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_srifle_GM6_F
			{
				weapon="srifle_GM6_F";
				count=1;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=1;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=1;
			};
			class _xx_sgun_M4_F
			{
				weapon="sgun_M4_F";
				count=1;
			};
			class _xx_GL_03_F
			{
				weapon="GL_03_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_ACO_grn
			{
				name="optic_ACO_grn";
				count=1;
			};
			class _xx_optic_ACO_grn_smg
			{
				name="optic_ACO_grn_smg";
				count=1;
			};
			class _xx_optic_MRCO
			{
				name="optic_MRCO";
				count=1;
			};
			class _xx_optic_SOS
			{
				name="optic_SOS";
				count=1;
			};
			class _xx_optic_Holosight
			{
				name="optic_Holosight";
				count=1;
			};
			class _xx_optic_Holosight_smg
			{
				name="optic_Holosight_smg";
				count=1;
			};
			class _xx_optic_NVS
			{
				name="optic_NVS";
				count=1;
			};
			class _xx_optic_TWS
			{
				name="optic_TWS";
				count=1;
			};
			class _xx_optic_TWS_MG
			{
				name="optic_TWS_MG";
				count=1;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=1;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=1;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=1;
			};
		};
	};
	class Box_IND_WpsLaunch_F: IND_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_launch_Titan_F;
			class _xx_launch_I_Titan_F
			{
				weapon="launch_I_Titan_F";
				count=1;
			};
			delete _xx_launch_Titan_short_F;
			class _xx_launch_I_Titan_short_F
			{
				weapon="launch_I_Titan_short_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
	};
	class Box_IND_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=5;
			};
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
			class _xx_muzzle_snds_acp
			{
				name="muzzle_snds_acp";
				count=5;
			};
			class _xx_muzzle_snds_L
			{
				name="muzzle_snds_L";
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
			class _xx_muzzle_snds_b
			{
				name="muzzle_snds_b";
				count=5;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
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
			class _xx_muzzle_mzls_b
			{
				name="muzzle_mzls_b";
				count=5;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=1;
			};
			class _xx_Laserdesignator_03
			{
				name="Laserdesignator_03";
				count=1;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=2;
			};
			class _xx_bipod_03_F_oli
			{
				name="bipod_03_F_oli";
				count=2;
			};
		};
	};
	class I_supplyCrate_F: B_supplyCrate_F
	{
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator_03
			{
				name="Laserdesignator_03";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			delete _xx_bipod_03_F_blk;
		};
	};
	class Box_AAF_Equip_F: Box_NATO_Equip_F
	{
		class TransportItems
		{
			class _xx_V_Rangemaster_belt
			{
				name="V_Rangemaster_belt";
				count=2;
			};
			class _xx_V_BandollierB_oli
			{
				name="V_BandollierB_oli";
				count=2;
			};
			delete _xx_V_BandollierB_blk;
			class _xx_V_Chestrig_oli
			{
				name="V_Chestrig_oli";
				count=2;
			};
			class _xx_V_TacChestrig_oli_F
			{
				name="V_TacChestrig_oli_F";
				count=2;
			};
			class _xx_V_TacVest_oli
			{
				name="V_TacVest_oli";
				count=2;
			};
			delete _xx_V_TacVest_camo;
			class _xx_V_PlateCarrierIA1_dgtl
			{
				name="V_PlateCarrierIA1_dgtl";
				count=2;
			};
			class _xx_V_PlateCarrierIA1_oli
			{
				name="V_PlateCarrierIA1_oli";
				count=2;
			};
			class _xx_V_PlateCarrierIA2_dgtl
			{
				name="V_PlateCarrierIA2_dgtl";
				count=2;
			};
			class _xx_V_PlateCarrierIA2_oli
			{
				name="V_PlateCarrierIA2_oli";
				count=2;
			};
			class _xx_V_PlateCarrierIAGL_dgtl
			{
				name="V_PlateCarrierIAGL_dgtl";
				count=2;
			};
			class _xx_V_PlateCarrierIAGL_oli
			{
				name="V_PlateCarrierIAGL_oli";
				count=2;
			};
			class _xx_V_RebreatherIA
			{
				name="V_RebreatherIA";
				count=2;
			};
			delete _xx_H_Booniehat_oli;
			class _xx_H_Booniehat_dgtl
			{
				name="H_Booniehat_dgtl";
				count=2;
			};
			delete _xx_H_Cap_blk_Raven;
			class _xx_H_Cap_grn_INDP
			{
				name="H_Cap_grn_INDP";
				count=2;
			};
			class _xx_H_MilCap_dgtl
			{
				name="H_MilCap_dgtl";
				count=2;
			};
			delete _xx_H_Shemag_olive;
			class _xx_H_Beret_grn
			{
				name="H_Beret_grn";
				count=2;
			};
			class _xx_H_HelmetIA
			{
				name="H_HelmetIA";
				count=2;
			};
			class _xx_H_HelmetIA_woodland
			{
				name="H_HelmetIA_woodland";
				count=2;
			};
			class _xx_H_HelmetIA_camo
			{
				name="H_HelmetIA_camo";
				count=2;
			};
			class _xx_H_HelmetIA_camo_woodland
			{
				name="H_HelmetIA_camo_woodland";
				count=2;
			};
			class _xx_H_HelmetIA_net
			{
				name="H_HelmetIA_net";
				count=2;
			};
			class _xx_H_HelmetIA_net_woodland
			{
				name="H_HelmetIA_net_woodland";
				count=2;
			};
			class _xx_H_HelmetCrew_I
			{
				name="H_HelmetCrew_I";
				count=2;
			};
			class _xx_H_PilotHelmetFighter_I
			{
				name="H_PilotHelmetFighter_I";
				count=2;
			};
			class _xx_H_PilotHelmetHeli_I
			{
				name="H_PilotHelmetHeli_I";
				count=2;
			};
			class _xx_H_CrewHelmetHeli_I
			{
				name="H_CrewHelmetHeli_I";
				count=2;
			};
		};
	};
	class IG_supplyCrate_F: ReammoBox_F
	{
		class TransportItems
		{
			class _xx_V_Chestrig_oli
			{
				name="V_Chestrig_oli";
				count=4;
			};
			class _xx_V_TacVest_blk
			{
				name="V_TacVest_blk";
				count=4;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			delete _xx_Rangefinder;
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			delete _xx_bipod_03_F_oli;
		};
	};
	class EAST_Box_Base;
	class Box_East_Wps_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=8;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=1;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=1;
			};
			class _xx_6Rnd_45ACP_Cylinder
			{
				magazine="6Rnd_45ACP_Cylinder";
				count=1;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Katiba_F
			{
				weapon="arifle_Katiba_F";
				count=4;
			};
			class _xx_arifle_Katiba_C_F
			{
				weapon="arifle_Katiba_C_F";
				count=2;
			};
			class _xx_arifle_Katiba_GL_F
			{
				weapon="arifle_Katiba_GL_F";
				count=2;
			};
			class _xx_LMG_Zafir_F
			{
				weapon="LMG_Zafir_F";
				count=2;
			};
			class _xx_SMG_02_F
			{
				weapon="SMG_02_F";
				count=1;
			};
			class _xx_hgun_Rook40_F
			{
				weapon="hgun_Rook40_F";
				count=1;
			};
			class _xx_hgun_Pistol_heavy_02_F
			{
				weapon="hgun_Pistol_heavy_02_F";
				count=1;
			};
		};
	};
	class Box_East_WpsSpecial_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_5Rnd_127x108_Mag
			{
				magazine="5Rnd_127x108_Mag";
				count=4;
			};
			class _xx_5Rnd_127x108_APDS_Mag
			{
				magazine="5Rnd_127x108_APDS_Mag";
				count=4;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=8;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=3;
			};
			delete _xx_30Rnd_556x45_Stanag_green;
			class _xx_20Rnd_556x45_Stanag_green
			{
				magazine="20Rnd_556x45_Stanag_green";
				count=3;
			};
			class _xx_10Rnd_127x54_Mag
			{
				magazine="10Rnd_127x54_Mag";
				count=8;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=8;
			};
			delete _xx_150Rnd_93x64_Mag;
			class _xx_120Rnd_93x64_Mag
			{
				magazine="120Rnd_93x64_Mag";
				count=3;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=3;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_srifle_GM6_F
			{
				weapon="srifle_GM6_F";
				count=1;
			};
			class _xx_srifle_GM6_camo_F
			{
				weapon="srifle_GM6_camo_F";
				count=1;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=1;
			};
			class _xx_srifle_DMR_01_F
			{
				weapon="srifle_DMR_01_F";
				count=1;
			};
			class _xx_srifle_DMR_04_F
			{
				weapon="srifle_DMR_04_F";
				count=1;
			};
			class _xx_srifle_DMR_05_hex_F
			{
				weapon="srifle_DMR_05_hex_F";
				count=1;
			};
			class _xx_MMG_01_hex_F
			{
				weapon="MMG_01_hex_F";
				count=1;
			};
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=1;
			};
			class _xx_GL_02_F
			{
				weapon="GL_02_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_ACO_grn
			{
				name="optic_ACO_grn";
				count=1;
			};
			class _xx_optic_ACO_grn_smg
			{
				name="optic_ACO_grn_smg";
				count=1;
			};
			delete _xx_optic_MRCO;
			class _xx_optic_ARCO
			{
				name="optic_ARCO";
				count=1;
			};
			class _xx_optic_Arco_blk_F
			{
				name="optic_Arco_blk_F";
				count=1;
			};
			delete _xx_optic_SOS;
			class _xx_optic_Nightstalker
			{
				name="optic_Nightstalker";
				count=1;
			};
			class _xx_optic_TWS
			{
				name="optic_TWS";
				count=1;
			};
			class _xx_optic_TWS_MG
			{
				name="optic_TWS_MG";
				count=1;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=1;
			};
			class _xx_optic_Yorris
			{
				name="optic_Yorris";
				count=1;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=1;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=1;
			};
			class _xx_optic_KHS_blk
			{
				name="optic_KHS_blk";
				count=1;
			};
			class _xx_optic_KHS_hex
			{
				name="optic_KHS_hex";
				count=1;
			};
			class _xx_optic_KHS_tan
			{
				name="optic_KHS_tan";
				count=1;
			};
		};
	};
	class Box_East_Ammo_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=24;
			};
			class _xx_6Rnd_45ACP_Cylinder
			{
				magazine="6Rnd_45ACP_Cylinder";
				count=6;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=8;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
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
		};
	};
	class Box_East_AmmoOrd_F;
	class Box_East_Grenades_F;
	class Box_East_Support_F: EAST_Box_Base
	{
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=5;
			};
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
			class _xx_muzzle_snds_b
			{
				name="muzzle_snds_b";
				count=5;
			};
			class _xx_muzzle_snds_93mmg
			{
				name="muzzle_snds_93mmg";
				count=2;
			};
			class _xx_muzzle_snds_93mmg_tan
			{
				name="muzzle_snds_93mmg_tan";
				count=2;
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
			class _xx_muzzle_mzls_b
			{
				name="muzzle_mzls_b";
				count=5;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=1;
			};
			class _xx_Laserdesignator_02
			{
				name="Laserdesignator_02";
				count=1;
			};
			class _xx_bipod_02_F_blk
			{
				name="bipod_02_F_blk";
				count=2;
			};
			class _xx_bipod_02_F_hex
			{
				name="bipod_02_F_hex";
				count=2;
			};
			class _xx_bipod_02_F_tan
			{
				name="bipod_02_F_tan";
				count=2;
			};
			delete _xx_muzzle_snds_58_blk_F;
			delete _xx_muzzle_snds_58_ghex_F;
			delete _xx_muzzle_snds_65_TI_blk_F;
			delete _xx_muzzle_snds_65_TI_hex_F;
			delete _xx_muzzle_snds_65_TI_ghex_F;
			class _xx_NVGoggles_OPFOR
			{
				name="NVGoggles_OPFOR";
				count=2;
			};
			class _xx_O_NVGoggles_hex_F
			{
				name="O_NVGoggles_hex_F";
				count=2;
			};
			class _xx_O_NVGoggles_urb_F
			{
				name="O_NVGoggles_urb_F";
				count=2;
			};
			class _xx_O_NVGoggles_blk_F
			{
				name="O_NVGoggles_blk_F";
				count=2;
			};
			delete _xx_O_NVGoggles_ghex_F;
		};
	};
	class Box_East_WpsLaunch_F: EAST_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_launch_Titan_F;
			class _xx_launch_O_Titan_F
			{
				weapon="launch_O_Titan_F";
				count=1;
			};
			delete _xx_launch_Titan_short_F;
			class _xx_launch_O_Titan_short_F
			{
				weapon="launch_O_Titan_short_F";
				count=1;
			};
			class _xx_launch_RPG32_F
			{
				weapon="launch_RPG32_F";
				count=1;
			};
		};
	};
	class Box_East_AmmoVeh_F;
	class O_supplyCrate_F: B_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=24;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=8;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_red
			{
				magazine="chemlight_red";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator_02
			{
				name="Laserdesignator_02";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			delete _xx_bipod_02_F_blk;
		};
	};
	class Box_CSAT_Equip_F: Box_NATO_Equip_F
	{
		class TransportItems
		{
			class _xx_V_Rangemaster_belt
			{
				name="V_Rangemaster_belt";
				count=2;
			};
			delete _xx_V_BandollierB_cbr;
			class _xx_V_BandollierB_brn
			{
				name="V_BandollierB_brn";
				count=2;
			};
			class _xx_V_BandollierB_khk
			{
				name="V_BandollierB_khk";
				count=2;
			};
			class _xx_V_Chestrig_brn
			{
				name="V_Chestrig_brn";
				count=2;
			};
			class _xx_V_Chestrig_khk
			{
				name="V_Chestrig_khk";
				count=2;
			};
			class _xx_V_HarnessO_brn
			{
				name="V_HarnessO_brn";
				count=2;
			};
			class _xx_V_HarnessO_gry
			{
				name="V_HarnessO_gry";
				count=2;
			};
			class _xx_V_HarnessOGL_brn
			{
				name="V_HarnessOGL_brn";
				count=2;
			};
			class _xx_V_HarnessOGL_gry
			{
				name="V_HarnessOGL_gry";
				count=2;
			};
			class _xx_V_HarnessOSpec_brn
			{
				name="V_HarnessOSpec_brn";
				count=2;
			};
			class _xx_V_HarnessOSpec_gry
			{
				name="V_HarnessOSpec_gry";
				count=2;
			};
			delete _xx_V_TacVest_khk;
			class _xx_V_TacVest_brn
			{
				name="V_TacVest_brn";
				count=2;
			};
			class _xx_V_TacVest_blk
			{
				name="V_TacVest_blk";
				count=2;
			};
			class _xx_V_RebreatherIR
			{
				name="V_RebreatherIR";
				count=2;
			};
			class _xx_H_HelmetSpecO_blk
			{
				name="H_HelmetSpecO_blk";
				count=2;
			};
			class _xx_H_HelmetSpecO_ocamo
			{
				name="H_HelmetSpecO_ocamo";
				count=2;
			};
			class _xx_H_HelmetSpecO_oucamo
			{
				name="H_HelmetSpecO_oucamo";
				count=2;
			};
			class _xx_H_HelmetSpecO_sard
			{
				name="H_HelmetSpecO_sard";
				count=2;
			};
			class _xx_H_HelmetSpecO_bhex_F
			{
				name="H_HelmetSpecO_bhex_F";
				count=2;
			};
			delete _xx_H_Booniehat_khk;
			class _xx_H_Booniehat_ocamo
			{
				name="H_Booniehat_ocamo";
				count=2;
			};
			class _xx_H_Cap_brn_SPECOPS
			{
				name="H_Cap_brn_SPECOPS";
				count=2;
			};
			class _xx_H_MilCap_ocamo
			{
				name="H_MilCap_ocamo";
				count=2;
			};
			class _xx_H_MilCap_oucamo
			{
				name="H_MilCap_oucamo";
				count=2;
			};
			delete _xx_H_ShemagOpen_tan;
			delete _xx_H_ShemagOpen_khk;
			class _xx_H_Beret_ocamo
			{
				name="H_Beret_ocamo";
				count=2;
			};
			class _xx_H_HelmetLeaderO_blk
			{
				name="H_HelmetLeaderO_blk";
				count=2;
			};
			class _xx_H_HelmetLeaderO_ocamo
			{
				name="H_HelmetLeaderO_ocamo";
				count=2;
			};
			class _xx_H_HelmetLeaderO_oucamo
			{
				name="H_HelmetLeaderO_oucamo";
				count=2;
			};
			class _xx_H_HelmetLeaderO_sard
			{
				name="H_HelmetLeaderO_sard";
				count=2;
			};
			class _xx_H_HelmetLeaderO_bhex_F
			{
				name="H_HelmetLeaderO_bhex_F";
				count=2;
			};
			class _xx_H_HelmetO_blk
			{
				name="H_HelmetO_blk";
				count=2;
			};
			class _xx_H_HelmetO_ocamo
			{
				name="H_HelmetO_ocamo";
				count=2;
			};
			class _xx_H_HelmetO_oucamo
			{
				name="H_HelmetO_oucamo";
				count=2;
			};
			class _xx_H_HelmetO_sard
			{
				name="H_HelmetO_sard";
				count=2;
			};
			class _xx_H_HelmetO_bhex_F
			{
				name="H_HelmetO_bhex_F";
				count=2;
			};
			class _xx_H_HelmetCrew_O
			{
				name="H_HelmetCrew_O";
				count=2;
			};
			class _xx_H_PilotHelmetFighter_O
			{
				name="H_PilotHelmetFighter_O";
				count=2;
			};
			class _xx_H_PilotHelmetHeli_O
			{
				name="H_PilotHelmetHeli_O";
				count=2;
			};
			class _xx_H_CrewHelmetHeli_O
			{
				name="H_CrewHelmetHeli_O";
				count=2;
			};
			class _xx_V_TacChestrig_cbr_F
			{
				name="V_TacChestrig_cbr_F";
				count=2;
			};
			delete _xx_V_HarnessO_ghex_F;
			delete _xx_V_HarnessOGL_ghex_F;
			delete _xx_V_BandollierB_ghex_F;
			delete _xx_H_HelmetO_ViperSP_hex_F;
			delete _xx_H_HelmetO_ViperSP_ghex_F;
			delete _xx_H_HelmetSpecO_ghex_F;
			delete _xx_H_HelmetLeaderO_ghex_F;
			delete _xx_H_HelmetO_ghex_F;
			delete _xx_H_HelmetCrew_O_ghex_F;
			delete _xx_H_MilCap_ghex_F;
		};
	};
	class Box_CSAT_Uniforms_F: Box_NATO_Uniforms_F
	{
		class TransportItems
		{
			class _xx_U_O_CombatUniform_ocamo
			{
				name="U_O_CombatUniform_ocamo";
				count=4;
			};
			class _xx_U_O_CombatUniform_oucamo
			{
				name="U_O_CombatUniform_oucamo";
				count=4;
			};
			class _xx_U_O_soldier_alt_F
			{
				name="U_O_soldier_alt_F";
				count=4;
			};
			class _xx_U_O_OfficerUniform_ocamo
			{
				name="U_O_OfficerUniform_ocamo";
				count=4;
			};
			class _xx_U_O_SpecopsUniform_blk
			{
				name="U_O_SpecopsUniform_blk";
				count=4;
			};
			class _xx_U_O_SpecopsUniform_ocamo
			{
				name="U_O_SpecopsUniform_ocamo";
				count=4;
			};
			class _xx_U_O_PilotCoveralls
			{
				name="U_O_PilotCoveralls";
				count=4;
			};
			class _xx_U_O_GhillieSuit
			{
				name="U_O_GhillieSuit";
				count=4;
			};
			class _xx_U_O_FullGhillie_ard
			{
				name="U_O_FullGhillie_ard";
				count=4;
			};
			class _xx_U_O_FullGhillie_lsh
			{
				name="U_O_FullGhillie_lsh";
				count=4;
			};
			class _xx_U_O_FullGhillie_sard
			{
				name="U_O_FullGhillie_sard";
				count=4;
			};
			class _xx_U_O_Wetsuit
			{
				name="U_O_Wetsuit";
				count=4;
			};
			class _xx_U_O_officer_noInsignia_hex_F
			{
				name="U_O_officer_noInsignia_hex_F";
				count=4;
			};
			class _xx_U_O_officer_noInsignia_urb_F
			{
				name="U_O_officer_noInsignia_urb_F";
				count=4;
			};
			class _xx_U_O_officer_noInsignia_bhex_F
			{
				name="U_O_officer_noInsignia_bhex_F";
				count=4;
			};
			delete _xx_U_O_T_Soldier_F;
			delete _xx_U_O_T_Officer_F;
			delete _xx_U_O_T_Sniper_F;
			delete _xx_U_O_T_FullGhillie_tna_F;
			delete _xx_U_O_V_Soldier_Viper_F;
			delete _xx_U_O_V_Soldier_Viper_hex_F;
		};
	};
	class Box_A_CSAT_Wps_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.23;
		class SimpleObject
		{
			animate[]={};
			hide[]={};
			verticalOffset=0.07;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_CSAT_Wps_F.jpg";
		_generalMacro="Box_A_CSAT_Wps_F";
		scope=2;
		displayName="Basic Weapons [CSAT African]";
		model="\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
		icon="iconCrateWpns";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=4;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
			class _xx_arifle_CTAR_GL_blk_F
			{
				weapon="arifle_CTAR_GL_blk_F";
				count=2;
			};
			class _xx_arifle_CTARS_blk_F
			{
				weapon="arifle_CTARS_blk_F";
				count=1;
			};
		};
		class TransportItems
		{
		};
	};
	class Box_A_CSAT_Ammo_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		class SimpleObject
		{
			animate[]={};
			hide[]={};
			verticalOffset=0.20999999;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_CSAT_Ammo_F.jpg";
		_generalMacro="Box_A_CSAT_Ammo_F";
		scope=2;
		displayName="Basic Ammo [CSAT African]";
		model="\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
		icon="iconCrateAmmo";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		maximumLoad=1000;
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=10;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=2;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Box_A_CSAT_WpsLaunch_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.76;
		class SimpleObject
		{
			animate[]={};
			hide[]={};
			verticalOffset=0.18000001;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_CSAT_WpsLaunch_F.jpg";
		_generalMacro="Box_A_CSAT_Ammo_F";
		scope=2;
		displayName="Launchers [CSAT African]";
		model="\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
		icon="iconCrateLong";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_F
			{
				weapon="launch_RPG32_F";
				count=3;
			};
		};
		class TransportItems
		{
		};
	};
	class O_A_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_supplyCrate_F.jpg";
		_generalMacro="O_A_supplyCrate_F";
		scope=2;
		displayName="Supply Box [CSAT African]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=24;
			};
			class _xx_10Rnd_650x39_Cased_Mag_F
			{
				magazine="10Rnd_650x39_Cased_Mag_F";
				count=8;
			};
			class _xx_1000Rnd_580x42_Mag_F
			{
				magazine="1000Rnd_580x42_Mag_F";
				count=8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_red
			{
				magazine="chemlight_red";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Binoculars
			{
				name="Binoculars";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
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
			class _xx_arifle_CTAR_GL_blk_F
			{
				weapon="arifle_CTAR_GL_blk_F";
				count=1;
			};
			class _xx_arifle_CTARS_blk_F
			{
				weapon="arifle_CTARS_blk_F";
				count=1;
			};
			class _xx_srifle_DMR_07_blk_F
			{
				weapon="srifle_DMR_07_blk_F";
				count=1;
			};
			class _xx_launch_RPG32_F
			{
				weapon="launch_RPG32_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Tacticalpack_ocamo
			{
				backpack="B_Tacticalpack_ocamo";
				count=2;
			};
		};
	};
	class C_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_100Rnd_556x45_Drum_Mag_F
			{
				magazine="100Rnd_556x45_Drum_Mag_F";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=6;
			};
			delete _xx_7Rnd_408_mag;
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=1;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=6;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Slug
			{
				magazine="8Rnd_12Gauge_Slug";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			delete _xx_Binocular;
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=1;
			};
			delete _xx_optic_Holosight;
			delete _xx_optic_Hamr;
			delete _xx_optic_SOS;
			delete _xx_optic_NVS;
			delete _xx_optic_TWS;
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			delete _xx_Medikit;
			delete _xx_ToolKit;
			delete _xx_MineDetector;
			delete _xx_bipod_01_F_blk;
			delete _xx_bipod_01_F_mtp;
			delete _xx_bipod_01_F_snd;
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
			delete _xx_arifle_MX_GL_F;
			class _xx_arifle_SPAR_01_GL_blk_F
			{
				weapon="arifle_SPAR_01_GL_blk_F";
				count=1;
			};
			delete _xx_arifle_MX_SW_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon="arifle_SPAR_02_blk_F";
				count=1;
			};
			class _xx_arifle_SPAR_03_blk_F
			{
				weapon="arifle_SPAR_03_blk_F";
				count=1;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=1;
			};
			delete _xx_srifle_LRR_F;
			delete _xx_srifle_DMR_02_F;
			class _xx_srifle_DMR_02_camo_F
			{
				weapon="srifle_DMR_02_camo_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
			class _xx_sgun_KSG_Black_F
			{
				weapon="sgun_KSG_Black_F";
				count=1;
			};
		};
	};
	class C_T_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_556x45_Drum_Mag_F
			{
				magazine="100Rnd_556x45_Drum_Mag_F";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=6;
			};
			delete _xx_7Rnd_408_mag;
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=6;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=1;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=6;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Slug
			{
				magazine="8Rnd_12Gauge_Slug";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			delete _xx_Binocular;
			delete _xx_LaserDesignator;
			class _xx_Laserdesignator_01_khk_F
			{
				name="Laserdesignator_01_khk_F";
				count=1;
			};
			delete _xx_optic_Holosight;
			delete _xx_optic_ERCO_blk_F;
			delete _xx_optic_SOS;
			delete _xx_optic_NVS;
			delete _xx_optic_TWS;
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			delete _xx_Medikit;
			delete _xx_ToolKit;
			delete _xx_MineDetector;
			delete _xx_bipod_01_F_blk;
			delete _xx_bipod_01_F_mtp;
			delete _xx_bipod_01_F_snd;
		};
		class TransportWeapons
		{
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon="arifle_SPAR_01_blk_F";
				count=2;
			};
			class _xx_arifle_SPAR_01_GL_blk_F
			{
				weapon="arifle_SPAR_01_GL_blk_F";
				count=1;
			};
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon="arifle_SPAR_02_blk_F";
				count=1;
			};
			class _xx_arifle_SPAR_03_blk_F
			{
				weapon="arifle_SPAR_03_blk_F";
				count=1;
			};
			delete _xx_srifle_LRR_tna_F;
			delete _xx_srifle_DMR_02_F;
			class _xx_srifle_DMR_02_tna_F
			{
				weapon="srifle_DMR_02_tna_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
			class _xx_sgun_KSG_Black_F
			{
				weapon="sgun_KSG_Black_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			delete _xx_B_AssaultPack_tna_F;
			class _xx_B_Kitbag_rgr
			{
				backpack="B_Kitbag_rgr";
				count=2;
			};
		};
	};
	class V_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.89200002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\V_supplyCrate_F.jpg";
		_generalMacro="V_supplyCrate_F";
		scope=2;
		displayName="Supply Box [Viper]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F\Ammoboxes\Data\supplydrop_CO.paa"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=6;
			};
			class _xx_20Rnd_650x39_Cased_Mag_F
			{
				magazine="20Rnd_650x39_Cased_Mag_F";
				count=6;
			};
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=24;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_red
			{
				magazine="chemlight_red";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=2;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=3;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_ARX_hex_F
			{
				weapon="arifle_ARX_hex_F";
				count=2;
			};
			class _xx_arifle_CTARS_hex_F
			{
				weapon="arifle_CTARS_hex_F";
				count=1;
			};
			class _xx_srifle_DMR_07_hex_F
			{
				weapon="srifle_DMR_07_hex_F";
				count=1;
			};
			class _xx_launch_RPG32_F
			{
				weapon="launch_RPG32_F";
				count=1;
			};
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator_02
			{
				name="Laserdesignator_02";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			class _xx_bipod_02_F_hex
			{
				name="bipod_02_F_hex";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_ViperHarness_hex_F
			{
				backpack="B_ViperHarness_hex_F";
				count=2;
			};
		};
	};
	class V_T_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.89200002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\V_T_supplyCrate_F.jpg";
		_generalMacro="V_T_supplyCrate_F";
		scope=2;
		displayName="Supply Box [Viper Pacific]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F\Ammoboxes\Data\supplydrop_CO.paa"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine="10Rnd_50BW_Mag_F";
				count=6;
			};
			class _xx_20Rnd_650x39_Cased_Mag_F
			{
				magazine="20Rnd_650x39_Cased_Mag_F";
				count=6;
			};
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=24;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_red
			{
				magazine="chemlight_red";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=2;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=3;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_ARX_ghex_F
			{
				weapon="arifle_ARX_ghex_F";
				count=2;
			};
			class _xx_arifle_CTARS_ghex_F
			{
				weapon="arifle_CTARS_ghex_F";
				count=1;
			};
			class _xx_srifle_DMR_07_ghex_F
			{
				weapon="srifle_DMR_07_ghex_F";
				count=1;
			};
			class _xx_launch_RPG32_ghex_F
			{
				weapon="launch_RPG32_ghex_F";
				count=1;
			};
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator_02_ghex_F
			{
				name="Laserdesignator_02_ghex_F";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			class _xx_bipod_02_F_blk
			{
				name="bipod_02_F_blk";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_ViperHarness_ghex_F
			{
				backpack="B_ViperHarness_ghex_F";
				count=2;
			};
		};
	};
	class Box_GEN_Equip_F: Box_NATO_Equip_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=24;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=24;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_7Rnd_45ACP_Mag
			{
				magazine="7Rnd_45ACP_Mag";
				count=18;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=6;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
		};
		class TransportWeapons
		{
			class _xx_SMG_05_F
			{
				weapon="SMG_05_F";
				count=6;
			};
			class _xx_arifle_MXC_Black_F
			{
				weapon="arifle_MXC_Black_F";
				count=6;
			};
			delete _xx_hgun_P07_F;
			class _xx_hgun_C1911_F
			{
				weapon="hgun_C1911_F";
				count=6;
			};
		};
		class TransportItems
		{
			class _xx_U_B_GEN_Commander_F
			{
				name="U_B_GEN_Commander_F";
				count=3;
			};
			class _xx_U_B_GEN_Soldier_F
			{
				name="U_B_GEN_Soldier_F";
				count=3;
			};
			class _xx_U_B_GEN_Marshal_F
			{
				name="U_B_GEN_Marshal_F";
				count=3;
			};
			class _xx_V_TacVest_gen_F
			{
				name="V_TacVest_gen_F";
				count=3;
			};
			class _xx_H_MilCap_gen_F
			{
				name="H_MilCap_gen_F";
				count=3;
			};
			class _xx_H_Beret_gen_F
			{
				name="H_Beret_gen_F";
				count=3;
			};
			class _xx_H_PASGT_basic_black_F
			{
				name="H_PASGT_basic_black_F";
				count=3;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=6;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			delete _xx_muzzle_snds_L;
		};
	};
	class Box_Para_Wps_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.23;
		class SimpleObject
		{
			animate[]={};
			hide[]={};
			verticalOffset=0.07;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_Para_Wps_F.jpg";
		_generalMacro="Box_Para_Wps_F";
		scope=2;
		displayName="Basic Weapons [Paramilitary]";
		model="\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
		icon="iconCrateWpns";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
				count=4;
			};
			class _xx_200Rnd_556x45_Box_Green_F
			{
				magazine="200Rnd_556x45_Box_Green_F";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG20_black_F
			{
				weapon="arifle_TRG20_black_F";
				count=2;
			};
			class _xx_arifle_TRG21_black_F
			{
				weapon="arifle_TRG21_black_F";
				count=2;
			};
			class _xx_arifle_TRG21_GL_black_F
			{
				weapon="arifle_TRG21_GL_black_F";
				count=2;
			};
			class _xx_arifle_Mk20_plain_F
			{
				weapon="arifle_Mk20_plain_F";
				count=2;
			};
			class _xx_arifle_Mk20_GL_plain_F
			{
				weapon="arifle_Mk20_GL_plain_F";
				count=2;
			};
			class _xx_arifle_Mk20C_plain_F
			{
				weapon="arifle_Mk20C_plain_F";
				count=2;
			};
			class _xx_LMG_03_F
			{
				weapon="LMG_03_F";
				count=1;
			};
		};
		class TransportItems
		{
		};
	};
	class Box_Para_Ammo_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		class SimpleObject
		{
			animate[]={};
			hide[]={};
			verticalOffset=0.20999999;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_Para_Ammo_F.jpg";
		_generalMacro="Box_Para_Ammo_F";
		scope=2;
		displayName="Basic Ammo [Paramilitary]";
		model="\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
		icon="iconCrateAmmo";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		maximumLoad=1000;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
				count=10;
			};
			class _xx_200Rnd_556x45_Box_Green_F
			{
				magazine="200Rnd_556x45_Box_Green_F";
				count=2;
			};
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class Box_Para_WpsLaunch_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.76;
		class SimpleObject
		{
			animate[]={};
			hide[]={};
			verticalOffset=0.18000001;
			verticalOffsetWorld=0;
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_Para_WpsLaunch_F.jpg";
		_generalMacro="Box_Para_Ammo_F";
		scope=2;
		displayName="Launchers [Paramilitary]";
		model="\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
		icon="iconCrateLong";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		class TransportMagazines
		{
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=6;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG7_F
			{
				weapon="launch_RPG7_F";
				count=3;
			};
		};
		class TransportItems
		{
		};
	};
	class P_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\P_supplyCrate_F.jpg";
		_generalMacro="P_supplyCrate_F";
		scope=2;
		displayName="Supply Box [Paramilitary]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_30Rnd_556x45_Stanag_green
			{
				magazine="30Rnd_556x45_Stanag_green";
				count=24;
			};
			class _xx_200Rnd_556x45_Box_Green_F
			{
				magazine="200Rnd_556x45_Box_Green_F";
				count=3;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_yellow
			{
				magazine="chemlight_yellow";
				count=6;
			};
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Binoculars
			{
				name="Binoculars";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG20_black_F
			{
				weapon="arifle_TRG20_black_F";
				count=2;
			};
			class _xx_arifle_TRG21_black_F
			{
				weapon="arifle_TRG21_black_F";
				count=2;
			};
			class _xx_arifle_TRG21_GL_black_F
			{
				weapon="arifle_TRG21_GL_black_F";
				count=2;
			};
			class _xx_arifle_Mk20_plain_F
			{
				weapon="arifle_Mk20_plain_F";
				count=2;
			};
			class _xx_arifle_Mk20_GL_plain_F
			{
				weapon="arifle_Mk20_GL_plain_F";
				count=2;
			};
			class _xx_arifle_Mk20C_plain_F
			{
				weapon="arifle_Mk20C_plain_F";
				count=2;
			};
			class _xx_LMG_03_F
			{
				weapon="LMG_03_F";
				count=2;
			};
			class _xx_launch_RPG7_F
			{
				weapon="launch_RPG7_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Tacticalpack_khk
			{
				backpack="B_Tacticalpack_khk";
				count=2;
			};
		};
	};
	class IR_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.89200002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\IR_supplyCrate_F.jpg";
		_generalMacro="IR_supplyCrate_F";
		scope=2;
		displayName="Supply Box [Raven]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F\Ammoboxes\Data\supplydrop_CO.paa"
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=6;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=24;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_yellow
			{
				magazine="chemlight_yellow";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=3;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG20_F
			{
				weapon="arifle_TRG20_F";
				count=2;
			};
			class _xx_arifle_TRG21_F
			{
				weapon="arifle_TRG21_F";
				count=2;
			};
			class _xx_arifle_TRG21_GL_F
			{
				weapon="arifle_TRG21_GL_F";
				count=2;
			};
			class _xx_LMG_Mk200_F
			{
				weapon="LMG_Mk200_F";
				count=1;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=1;
			};
			class _xx_launch_RPG32_black_F
			{
				weapon="launch_RPG32_black_F";
				count=1;
			};
			class _xx_sgun_KSG_black_F
			{
				weapon="sgun_KSG_black_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_dgtl
			{
				backpack="B_Kitbag_dgtl";
				count=2;
			};
		};
	};
	class Box_T_NATO_Equip_F: Box_NATO_Equip_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Equip_F.jpg";
		_generalMacro="Box_T_NATO_Equip_F";
		displayName="Equipment Box [NATO Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_BLUFOR_T_CO.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_V_Rangemaster_belt
			{
				name="V_Rangemaster_belt";
				count=2;
			};
			class _xx_V_BandollierB_blk
			{
				name="V_BandollierB_blk";
				count=2;
			};
			class _xx_V_BandollierB_tna_F
			{
				name="V_BandollierB_tna_F";
				count=2;
			};
			class _xx_V_Chestrig_blk
			{
				name="V_Chestrig_blk";
				count=2;
			};
			class _xx_V_Chestrig_sgg
			{
				name="V_Chestrig_sgg";
				count=2;
			};
			class _xx_V_TacVest_blk
			{
				name="V_TacVest_blk";
				count=2;
			};
			class _xx_V_TacVest_oli
			{
				name="V_TacVest_oli";
				count=2;
			};
			class _xx_V_PlateCarrier1_blk
			{
				name="V_PlateCarrier1_blk";
				count=2;
			};
			class _xx_V_PlateCarrier1_tna_F
			{
				name="V_PlateCarrier1_tna_F";
				count=2;
			};
			class _xx_V_PlateCarrier2_blk
			{
				name="V_PlateCarrier2_blk";
				count=2;
			};
			class _xx_V_PlateCarrier2_tna_F
			{
				name="V_PlateCarrier2_tna_F";
				count=2;
			};
			class _xx_V_PlateCarrierGL_blk
			{
				name="V_PlateCarrierGL_blk";
				count=2;
			};
			class _xx_V_PlateCarrierGL_tna_F
			{
				name="V_PlateCarrierGL_tna_F";
				count=2;
			};
			class _xx_V_PlateCarrierSpec_blk
			{
				name="V_PlateCarrierSpec_blk";
				count=2;
			};
			class _xx_V_PlateCarrierSpec_tna_F
			{
				name="V_PlateCarrierSpec_tna_F";
				count=2;
			};
			class _xx_V_RebreatherB
			{
				name="V_RebreatherB";
				count=2;
			};
			class _xx_H_Cap_tna_F
			{
				name="H_Cap_tna_F";
				count=2;
			};
			class _xx_H_MilCap_tna_F
			{
				name="H_MilCap_tna_F";
				count=2;
			};
			class _xx_H_Booniehat_tna_F
			{
				name="H_Booniehat_tna_F";
				count=2;
			};
			class _xx_H_Beret_02
			{
				name="H_Beret_02";
				count=2;
			};
			class _xx_H_HelmetB_Light_tna_F
			{
				name="H_HelmetB_Light_tna_F";
				count=2;
			};
			class _xx_H_HelmetB_tna_F
			{
				name="H_HelmetB_tna_F";
				count=2;
			};
			class _xx_H_HelmetB_Camo_tna_F
			{
				name="H_HelmetB_Camo_tna_F";
				count=2;
			};
			class _xx_H_HelmetB_Enh_tna_F
			{
				name="H_HelmetB_Enh_tna_F";
				count=2;
			};
			class _xx_H_HelmetCrew_B
			{
				name="H_HelmetCrew_B";
				count=2;
			};
			class _xx_H_PilotHelmetFighter_B
			{
				name="H_PilotHelmetFighter_B";
				count=2;
			};
			class _xx_H_PilotHelmetHeli_B
			{
				name="H_PilotHelmetHeli_B";
				count=2;
			};
			class _xx_H_CrewHelmetHeli_B
			{
				name="H_CrewHelmetHeli_B";
				count=2;
			};
			class _xx_V_TacChestrig_grn_F
			{
				name="V_TacChestrig_grn_F";
				count=2;
			};
		};
	};
	class Box_T_CSAT_Equip_F: Box_NATO_Equip_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_CSAT_Equip_F.jpg";
		_generalMacro="Box_T_CSAT_Equip_F";
		displayName="Equipment Box [CSAT Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_OPFOR_T_CO.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_OPFOR_T_CA.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_V_Rangemaster_belt
			{
				name="V_Rangemaster_belt";
				count=2;
			};
			class _xx_V_BandollierB_khk
			{
				name="V_BandollierB_khk";
				count=2;
			};
			class _xx_V_BandollierB_ghex_F
			{
				name="V_BandollierB_ghex_F";
				count=2;
			};
			class _xx_V_Chestrig_khk
			{
				name="V_Chestrig_khk";
				count=2;
			};
			class _xx_V_Chestrig_ghex_F
			{
				name="V_Chestrig_ghex_F";
				count=2;
			};
			class _xx_V_HarnessO_gry
			{
				name="V_HarnessO_gry";
				count=2;
			};
			class _xx_V_HarnessO_ghex_F
			{
				name="V_HarnessO_ghex_F";
				count=2;
			};
			class _xx_V_HarnessOGL_gry
			{
				name="V_HarnessOGL_gry";
				count=2;
			};
			class _xx_V_HarnessOGL_ghex_F
			{
				name="V_HarnessOGL_ghex_F";
				count=2;
			};
			class _xx_V_HarnessOSpec_gry
			{
				name="V_HarnessOSpec_gry";
				count=2;
			};
			class _xx_V_HarnessOSpec_ghex_F
			{
				name="V_HarnessOSpec_ghex_F";
				count=2;
			};
			class _xx_V_TacVestCamo_khk
			{
				name="V_TacVestCamo_khk";
				count=2;
			};
			class _xx_V_TacVest_blk
			{
				name="V_TacVest_blk";
				count=2;
			};
			class _xx_V_TacVest_oli
			{
				name="V_TacVest_oli";
				count=2;
			};
			class _xx_V_RebreatherO_ghex_F
			{
				name="V_RebreatherO_ghex_F";
				count=2;
			};
			class _xx_H_HelmetSpecO_blk
			{
				name="H_HelmetSpecO_blk";
				count=2;
			};
			class _xx_H_HelmetSpecO_oucamo
			{
				name="H_HelmetSpecO_oucamo";
				count=2;
			};
			class _xx_H_HelmetSpecO_ghex_F
			{
				name="H_HelmetSpecO_ghex_F";
				count=2;
			};
			class _xx_H_Booniehat_ghex_F
			{
				name="H_Booniehat_ghex_F";
				count=2;
			};
			class _xx_H_Cap_oli
			{
				name="H_Cap_oli";
				count=2;
			};
			class _xx_H_MilCap_oucamo
			{
				name="H_MilCap_oucamo";
				count=2;
			};
			class _xx_H_MilCap_ghex_F
			{
				name="H_MilCap_ghex_F";
				count=2;
			};
			class _xx_H_Beret_ocamo
			{
				name="H_Beret_ocamo";
				count=2;
			};
			class _xx_H_HelmetLeaderO_blk
			{
				name="H_HelmetLeaderO_blk";
				count=2;
			};
			class _xx_H_HelmetLeaderO_oucamo
			{
				name="H_HelmetLeaderO_oucamo";
				count=2;
			};
			class _xx_H_HelmetLeaderO_ghex_F
			{
				name="H_HelmetLeaderO_ghex_F";
				count=2;
			};
			class _xx_H_HelmetO_blk
			{
				name="H_HelmetO_blk";
				count=2;
			};
			class _xx_H_HelmetO_oucamo
			{
				name="H_HelmetO_oucamo";
				count=2;
			};
			class _xx_H_HelmetO_ghex_F
			{
				name="H_HelmetO_ghex_F";
				count=2;
			};
			class _xx_H_HelmetCrew_O_ghex_F
			{
				name="H_HelmetCrew_O_ghex_F";
				count=2;
			};
			class _xx_H_PilotHelmetFighter_O
			{
				name="H_PilotHelmetFighter_O";
				count=2;
			};
			class _xx_H_PilotHelmetHeli_O
			{
				name="H_PilotHelmetHeli_O";
				count=2;
			};
			class _xx_H_CrewHelmetHeli_O
			{
				name="H_CrewHelmetHeli_O";
				count=2;
			};
			class _xx_V_TacChestrig_oli_F
			{
				name="V_TacChestrig_oli_F";
				count=2;
			};
		};
	};
	class Box_A_NATO_Equip_F: Box_NATO_Equip_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_F.jpg";
		_generalMacro="Box_A_NATO_Equip_F";
		displayName="Equipment Box [NATO British]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_BLUFOR_A_CO.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_V_Rangemaster_belt
			{
				name="V_Rangemaster_belt";
				count=2;
			};
			class _xx_V_BandollierB_cbr
			{
				name="V_BandollierB_cbr";
				count=2;
			};
			class _xx_V_Chestrig_cbr
			{
				name="V_Chestrig_cbr";
				count=2;
			};
			class _xx_V_TacVest_blk
			{
				name="V_TacVest_blk";
				count=2;
			};
			class _xx_V_TacVest_cbr
			{
				name="V_TacVest_cbr";
				count=2;
			};
			class _xx_V_PlateCarrier1_cbr
			{
				name="V_PlateCarrier1_cbr";
				count=2;
			};
			class _xx_V_PlateCarrier1_ubacs_F
			{
				name="V_PlateCarrier1_ubacs_F";
				count=2;
			};
			class _xx_V_PlateCarrier2_cbr
			{
				name="V_PlateCarrier2_cbr";
				count=2;
			};
			class _xx_V_PlateCarrier2_ubacs_F
			{
				name="V_PlateCarrier2_ubacs_F";
				count=2;
			};
			class _xx_V_PlateCarrierGL_cbr
			{
				name="V_PlateCarrierGL_cbr";
				count=2;
			};
			class _xx_V_PlateCarrierGL_ubacs_F
			{
				name="V_PlateCarrierGL_ubacs_F";
				count=2;
			};
			class _xx_V_PlateCarrierSpec_cbr
			{
				name="V_PlateCarrierSpec_cbr";
				count=2;
			};
			class _xx_V_PlateCarrierSpec_ubacs_F
			{
				name="V_PlateCarrierSpec_ubacs_F";
				count=2;
			};
			class _xx_V_RebreatherB
			{
				name="V_RebreatherB";
				count=2;
			};
			class _xx_H_Cap_khaki_specops_UK
			{
				name="H_Cap_khaki_specops_UK";
				count=2;
			};
			class _xx_H_Beret_red
			{
				name="H_Beret_red";
				count=2;
			};
			class _xx_H_Booniehat_ubacs_F
			{
				name="H_Booniehat_ubacs_F";
				count=2;
			};
			class _xx_H_MilCap_tan
			{
				name="H_MilCap_tan";
				count=2;
			};
			class _xx_H_HelmetB_light
			{
				name="H_HelmetB_light";
				count=2;
			};
			class _xx_H_HelmetB_light_black
			{
				name="H_HelmetB_light_black";
				count=2;
			};
			class _xx_H_HelmetB_light_desert
			{
				name="H_HelmetB_light_desert";
				count=2;
			};
			class _xx_H_HelmetB_light_grass
			{
				name="H_HelmetB_light_grass";
				count=2;
			};
			class _xx_H_HelmetB_light_sand
			{
				name="H_HelmetB_light_sand";
				count=2;
			};
			class _xx_H_HelmetB_light_snakeskin
			{
				name="H_HelmetB_light_snakeskin";
				count=2;
			};
			class _xx_H_HelmetB_Light_ubacs_F
			{
				name="H_HelmetB_Light_ubacs_F";
				count=2;
			};
			class _xx_H_HelmetB_light_green
			{
				name="H_HelmetB_light_green";
				count=2;
			};
			class _xx_H_HelmetB
			{
				name="H_HelmetB";
				count=2;
			};
			class _xx_H_HelmetB_black
			{
				name="H_HelmetB_black";
				count=2;
			};
			class _xx_H_HelmetB_camo
			{
				name="H_HelmetB_camo";
				count=2;
			};
			class _xx_H_HelmetB_desert
			{
				name="H_HelmetB_desert";
				count=2;
			};
			class _xx_H_HelmetB_grass
			{
				name="H_HelmetB_grass";
				count=2;
			};
			class _xx_H_HelmetB_sand
			{
				name="H_HelmetB_sand";
				count=2;
			};
			class _xx_H_HelmetB_snakeskin
			{
				name="H_HelmetB_snakeskin";
				count=2;
			};
			class _xx_H_HelmetB_ubacs_F
			{
				name="H_HelmetB_ubacs_F";
				count=2;
			};
			class _xx_H_HelmetB_green
			{
				name="H_HelmetB_green";
				count=2;
			};
			class _xx_H_HelmetSpecB
			{
				name="H_HelmetSpecB";
				count=2;
			};
			class _xx_H_HelmetSpecB_blk
			{
				name="H_HelmetSpecB_blk";
				count=2;
			};
			class _xx_H_HelmetSpecB_paint2
			{
				name="H_HelmetSpecB_paint2";
				count=2;
			};
			class _xx_H_HelmetSpecB_paint1
			{
				name="H_HelmetSpecB_paint1";
				count=2;
			};
			class _xx_H_HelmetSpecB_sand
			{
				name="H_HelmetSpecB_sand";
				count=2;
			};
			class _xx_H_HelmetSpecB_snakeskin
			{
				name="H_HelmetSpecB_snakeskin";
				count=2;
			};
			class _xx_H_HelmetB_Enh_ubacs_F
			{
				name="H_HelmetB_Enh_ubacs_F";
				count=2;
			};
			class _xx_H_HelmetSpecB_grn
			{
				name="H_HelmetSpecB_grn";
				count=2;
			};
			class _xx_H_HelmetCrew_B
			{
				name="H_HelmetCrew_B";
				count=2;
			};
			class _xx_H_PilotHelmetFighter_B
			{
				name="H_PilotHelmetFighter_B";
				count=2;
			};
			class _xx_H_PilotHelmetHeli_B
			{
				name="H_PilotHelmetHeli_B";
				count=2;
			};
			class _xx_H_CrewHelmetHeli_B
			{
				name="H_CrewHelmetHeli_B";
				count=2;
			};
			class _xx_V_TacChestrig_cbr_F
			{
				name="V_TacChestrig_cbr_F";
				count=2;
			};
		};
	};
	class Box_T_NATO_Uniforms_F: Box_NATO_Uniforms_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Uniforms_F.jpg";
		_generalMacro="Box_T_NATO_Uniforms_F";
		displayName="Uniforms Box [NATO Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_BLUFOR_T_CO.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_U_B_T_Soldier_F
			{
				name="U_B_T_Soldier_F";
				count=4;
			};
			class _xx_U_B_T_Soldier_AR_F
			{
				name="U_B_T_Soldier_AR_F";
				count=4;
			};
			class _xx_U_B_T_Soldier_SL_F
			{
				name="U_B_T_Soldier_SL_F";
				count=4;
			};
			class _xx_U_B_HeliPilotCoveralls
			{
				name="U_B_HeliPilotCoveralls";
				count=4;
			};
			class _xx_U_B_PilotCoveralls
			{
				name="U_B_PilotCoveralls";
				count=4;
			};
			class _xx_U_B_T_Sniper_F
			{
				name="U_B_T_Sniper_F";
				count=4;
			};
			class _xx_U_B_T_FullGhillie_tna_F
			{
				name="U_B_T_FullGhillie_tna_F";
				count=4;
			};
			class _xx_U_B_T_FullGhillie_jng_F
			{
				name="U_B_T_FullGhillie_jng_F";
				count=4;
			};
			class _xx_U_B_Wetsuit
			{
				name="U_B_Wetsuit";
				count=4;
			};
		};
	};
	class Box_T_CSAT_Uniforms_F: Box_NATO_Uniforms_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_CSAT_Uniforms_F.jpg";
		_generalMacro="Box_T_CSAT_Uniforms_F";
		displayName="Uniforms Box [CSAT Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_OPFOR_T_CO.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_OPFOR_T_CA.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_U_O_T_Soldier_F
			{
				name="U_O_T_Soldier_F";
				count=4;
			};
			class _xx_U_O_CombatUniform_oucamo
			{
				name="U_O_CombatUniform_oucamo";
				count=4;
			};
			class _xx_U_O_T_Officer_F
			{
				name="U_O_T_Officer_F";
				count=4;
			};
			class _xx_U_O_SpecopsUniform_blk
			{
				name="U_O_SpecopsUniform_blk";
				count=4;
			};
			class _xx_U_O_T_Pilot_F
			{
				name="U_O_T_Pilot_F";
				count=4;
			};
			class _xx_U_O_T_Sniper_F
			{
				name="U_O_T_Sniper_F";
				count=4;
			};
			class _xx_U_O_T_FullGhillie_tna_F
			{
				name="U_O_T_FullGhillie_tna_F";
				count=4;
			};
			class _xx_U_O_T_FullGhillie_jng_F
			{
				name="U_O_T_FullGhillie_jng_F";
				count=4;
			};
			class _xx_U_O_T_Diver_F
			{
				name="U_O_T_Diver_F";
				count=4;
			};
			class _xx_U_O_T_officer_noInsignia_ghex_F
			{
				name="U_O_T_officer_noInsignia_ghex_F";
				count=4;
			};
			class _xx_U_O_officer_noInsignia_urb_F
			{
				name="U_O_officer_noInsignia_urb_F";
				count=4;
			};
		};
	};
	class Box_A_NATO_Uniforms_F: Box_NATO_Uniforms_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_F.jpg";
		_generalMacro="Box_A_NATO_Uniforms_F";
		displayName="Uniforms Box [NATO British]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_BLUFOR_A_CO.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_U_B_A_Soldier_F
			{
				name="U_B_A_Soldier_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_AR_F
			{
				name="U_B_A_Soldier_AR_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_SL_F
			{
				name="U_B_A_Soldier_SL_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_ddpm_F
			{
				name="U_B_A_Soldier_ddpm_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_AR_ddpm_F
			{
				name="U_B_A_Soldier_AR_ddpm_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_SL_ddpm_F
			{
				name="U_B_A_Soldier_SL_ddpm_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_dpm_F
			{
				name="U_B_A_Soldier_dpm_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_AR_dpm_F
			{
				name="U_B_A_Soldier_AR_dpm_F";
				count=4;
			};
			class _xx_U_B_A_Soldier_SL_dpm_F
			{
				name="U_B_A_Soldier_SL_dpm_F";
				count=4;
			};
			class _xx_U_B_HeliPilotCoveralls
			{
				name="U_B_HeliPilotCoveralls";
				count=4;
			};
			class _xx_U_B_PilotCoveralls
			{
				name="U_B_PilotCoveralls";
				count=4;
			};
			class _xx_U_B_A_Sniper_F
			{
				name="U_B_A_Sniper_F";
				count=4;
			};
			class _xx_U_B_FullGhillie_ard
			{
				name="U_B_FullGhillie_ard";
				count=4;
			};
			class _xx_U_B_FullGhillie_lsh
			{
				name="U_B_FullGhillie_lsh";
				count=4;
			};
			class _xx_U_B_FullGhillie_sard
			{
				name="U_B_FullGhillie_sard";
				count=4;
			};
			class _xx_U_B_Wetsuit
			{
				name="U_B_Wetsuit";
				count=4;
			};
		};
	};
	class Box_T_NATO_Wps_F: Box_NATO_Wps_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=3;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=8;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=1;
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_15Rnd_45ACP_Mag
			{
				magazine="15Rnd_45ACP_Mag";
				count=1;
			};
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=1;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=2;
			};
			class _xx_100Rnd_556x45_Drum_Mag_F
			{
				magazine="100Rnd_556x45_Drum_Mag_F";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_khk_F
			{
				weapon="arifle_MX_khk_F";
				count=4;
			};
			class _xx_arifle_MX_GL_khk_F
			{
				weapon="arifle_MX_GL_khk_F";
				count=2;
			};
			class _xx_arifle_MX_SW_khk_F
			{
				weapon="arifle_MX_SW_khk_F";
				count=2;
			};
			class _xx_arifle_MXC_khk_F
			{
				weapon="arifle_MXC_khk_F";
				count=4;
			};
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon="arifle_SPAR_01_khk_F";
				count=1;
			};
			class _xx_arifle_SPAR_01_GL_khk_F
			{
				weapon="arifle_SPAR_01_GL_khk_F";
				count=1;
			};
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon="arifle_SPAR_02_khk_F";
				count=1;
			};
			delete _xx_SMG_01_F;
			class _xx_SMG_01_khk_F
			{
				weapon="SMG_01_khk_F";
				count=1;
			};
			class _xx_hgun_P07_khk_F
			{
				weapon="hgun_P07_khk_F";
				count=1;
			};
			delete _xx_hgun_Pistol_heavy_01_F;
			class _xx_hgun_Pistol_heavy_01_Black_F
			{
				weapon="hgun_Pistol_heavy_01_Black_F";
				count=1;
			};
		};
	};
	class Box_T_NATO_Ammo_F: Box_NATO_Ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Ammo_F.jpg";
		_generalMacro="Box_T_NATO_Ammo_F";
		scope=2;
		displayName="Basic Ammo [NATO Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
		};
	};
	class Box_T_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_7Rnd_408_mag
			{
				magazine="7Rnd_408_mag";
				count=8;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=18;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=3;
			};
			class _xx_20Rnd_556x45_Stanag_red
			{
				magazine="20Rnd_556x45_Stanag_red";
				count=3;
			};
			delete _xx_30Rnd_556x45_Stanag_red;
			delete _xx_10Rnd_338_Mag;
			delete _xx_130Rnd_338_Mag;
			class _xx_100Rnd_338_Mag
			{
				magazine="100Rnd_338_Mag";
				count=3;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Slug
			{
				magazine="8Rnd_12Gauge_Slug";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=1;
			};
			class _xx_arifle_MXM_khk_F
			{
				weapon="arifle_MXM_khk_F";
				count=1;
			};
			class _xx_srifle_LRR_F
			{
				weapon="srifle_LRR_F";
				count=1;
			};
			class _xx_srifle_LRR_tna_F
			{
				weapon="srifle_LRR_tna_F";
				count=1;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=1;
			};
			delete _xx_srifle_DMR_03_woodland_F;
			class _xx_srifle_DMR_03_khaki_F
			{
				weapon="srifle_DMR_03_khaki_F";
				count=1;
			};
			delete _xx_srifle_DMR_02_camo_F;
			class _xx_arifle_SPAR_03_khk_F
			{
				weapon="arifle_SPAR_03_khk_F";
				count=1;
			};
			class _xx_MMG_02_black_F
			{
				weapon="MMG_02_black_F";
				count=1;
			};
			class _xx_LMG_Mk200_khk_F
			{
				weapon="LMG_Mk200_khk_F";
				count=1;
			};
			class _xx_sgun_KSG_F
			{
				weapon="sgun_KSG_F";
				count=1;
			};
			class _xx_GL_XM25_F
			{
				weapon="GL_XM25_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_ACO
			{
				name="optic_ACO";
				count=1;
			};
			class _xx_optic_ACO_smg
			{
				name="optic_ACO_smg";
				count=1;
			};
			class _xx_optic_Hamr
			{
				name="optic_Hamr";
				count=1;
			};
			class _xx_optic_Hamr_khk_F
			{
				name="optic_Hamr_khk_F";
				count=1;
			};
			class _xx_optic_SOS
			{
				name="optic_SOS";
				count=1;
			};
			class _xx_optic_SOS_khk_F
			{
				name="optic_SOS_khk_F";
				count=1;
			};
			class _xx_optic_Holosight_khk_F
			{
				name="optic_Holosight_khk_F";
				count=1;
			};
			class _xx_optic_Holosight_smg_khk_F
			{
				name="optic_Holosight_smg_khk_F";
				count=1;
			};
			class _xx_optic_NVS
			{
				name="optic_NVS";
				count=1;
			};
			class _xx_optic_TWS
			{
				name="optic_TWS";
				count=1;
			};
			class _xx_optic_TWS_MG
			{
				name="optic_TWS_MG";
				count=1;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=1;
			};
			class _xx_optic_MRD
			{
				name="optic_MRD";
				count=1;
			};
			delete _xx_optic_DMS;
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=1;
			};
			class _xx_optic_LRPS_tna_F
			{
				name="optic_LRPS_tna_F";
				count=1;
			};
			delete _xx_optic_AMS;
			class _xx_optic_AMS_khk
			{
				name="optic_AMS_khk";
				count=1;
			};
			delete _xx_optic_AMS_snd;
		};
	};
	class Box_T_NATO_AmmoOrd_F: Box_NATO_AmmoOrd_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_AmmoOrd_F.jpg";
		_generalMacro="Box_T_NATO_AmmoOrd_F";
		scope=2;
		displayName="Explosives [NATO Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
		};
	};
	class Box_T_NATO_Grenades_F: Box_NATO_Grenades_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Grenades_F.jpg";
		_generalMacro="Box_T_NATO_Grenades_F";
		scope=2;
		displayName="Grenades [NATO Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
		};
	};
	class Box_T_NATO_Support_F: Box_NATO_Support_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Support_F.jpg";
		_generalMacro="Box_T_NATO_Support_F";
		scope=2;
		displayName="Support [NATO Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=5;
			};
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
			class _xx_muzzle_snds_acp
			{
				name="muzzle_snds_acp";
				count=5;
			};
			class _xx_muzzle_snds_L
			{
				name="muzzle_snds_L";
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
			class _xx_muzzle_snds_b
			{
				name="muzzle_snds_b";
				count=5;
			};
			class _xx_muzzle_snds_b_khk_F
			{
				name="muzzle_snds_b_khk_F";
				count=5;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=2;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
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
			class _xx_muzzle_mzls_b
			{
				name="muzzle_mzls_b";
				count=5;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=1;
			};
			class _xx_Laserdesignator_01_khk_F
			{
				name="Laserdesignator_01_khk_F";
				count=1;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=2;
			};
			class _xx_bipod_01_F_khk
			{
				name="bipod_01_F_khk";
				count=2;
			};
			class _xx_NVGoggles_tna_F
			{
				name="NVGoggles_tna_F";
				count=2;
			};
		};
	};
	class Box_T_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_WpsLaunch_F.jpg";
		_generalMacro="Box_T_NATO_WpsLaunch_F";
		scope=2;
		displayName="Launchers [NATO Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
		};
		class TransportWeapons
		{
			class _xx_launch_B_Titan_tna_F
			{
				weapon="launch_B_Titan_tna_F";
				count=1;
			};
			class _xx_launch_B_Titan_short_tna_F
			{
				weapon="launch_B_Titan_short_tna_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_tna_F
			{
				backpack="B_Kitbag_tna_F";
				count=3;
			};
		};
	};
	class Box_T_NATO_AmmoVeh_F: Box_NATO_AmmoVeh_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_AmmoVeh_F.jpg";
		_generalMacro="Box_T_NATO_AmmoVeh_F";
		scope=2;
		displayName="Vehicle Ammo [NATO Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoVeh_BLUFOR_T_CO.paa"
		};
	};
	class Box_T_East_Wps_F: Box_East_Wps_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=6;
			};
			delete _xx_100Rnd_580x42_Mag_F;
			class _xx_75Rnd_580x42_Mag_F
			{
				magazine="75Rnd_580x42_Mag_F";
				count=2;
			};
			delete _xx_20Rnd_650x39_Cased_Mag_F;
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=1;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=1;
			};
			class _xx_6Rnd_45ACP_Cylinder
			{
				magazine="6Rnd_45ACP_Cylinder";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=4;
			};
			class _xx_arifle_CTAR_GL_blk_F
			{
				weapon="arifle_CTAR_GL_blk_F";
				count=2;
			};
			class _xx_arifle_CTARS_blk_F
			{
				weapon="arifle_CTARS_blk_F";
				count=2;
			};
			delete _xx_srifle_DMR_07_blk_F;
			class _xx_SMG_02_F
			{
				weapon="SMG_02_F";
				count=1;
			};
			class _xx_hgun_Rook40_F
			{
				weapon="hgun_Rook40_F";
				count=1;
			};
			class _xx_hgun_Pistol_heavy_02_F
			{
				weapon="hgun_Pistol_heavy_02_F";
				count=1;
			};
		};
	};
	class Box_T_East_Ammo_F: Box_East_Ammo_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=24;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=24;
			};
			delete _xx_100Rnd_580x42_Mag_F;
			class _xx_75Rnd_580x42_Mag_F
			{
				magazine="75Rnd_580x42_Mag_F";
				count=6;
			};
			delete _xx_20Rnd_650x39_Cased_Mag_F;
			class _xx_10Rnd_650x39_Cased_Mag_F
			{
				magazine="10Rnd_650x39_Cased_Mag_F";
				count=8;
			};
			delete _xx_10Rnd_50BW_Mag_F;
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_6Rnd_45ACP_Cylinder
			{
				magazine="6Rnd_45ACP_Cylinder";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
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
		};
	};
	class Box_T_East_WpsSpecial_F: Box_East_WpsSpecial_F
	{
		class TransportMagazines
		{
			class _xx_5Rnd_127x108_Mag
			{
				magazine="5Rnd_127x108_Mag";
				count=4;
			};
			class _xx_5Rnd_127x108_APDS_Mag
			{
				magazine="5Rnd_127x108_APDS_Mag";
				count=4;
			};
			delete _xx_20Rnd_650x39_Cased_Mag_F;
			class _xx_10Rnd_650x39_Cased_Mag_F
			{
				magazine="10Rnd_650x39_Cased_Mag_F";
				count=8;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=3;
			};
			delete _xx_30Rnd_556x45_Stanag_green;
			class _xx_20Rnd_556x45_Stanag_green
			{
				magazine="20Rnd_556x45_Stanag_green";
				count=3;
			};
			class _xx_10Rnd_127x54_Mag
			{
				magazine="10Rnd_127x54_Mag";
				count=8;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=8;
			};
			delete _xx_150Rnd_93x64_Mag;
			class _xx_120Rnd_93x64_Mag
			{
				magazine="120Rnd_93x64_Mag";
				count=3;
			};
			delete _xx_10Rnd_50BW_Mag_F;
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=2;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=3;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_srifle_GM6_F
			{
				weapon="srifle_GM6_F";
				count=1;
			};
			class _xx_srifle_GM6_ghex_F
			{
				weapon="srifle_GM6_ghex_F";
				count=1;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=1;
			};
			class _xx_srifle_DMR_07_blk_F
			{
				weapon="srifle_DMR_07_blk_F";
				count=1;
			};
			class _xx_srifle_DMR_04_F
			{
				weapon="srifle_DMR_04_F";
				count=1;
			};
			delete _xx_srifle_DMR_05_hex_F;
			class _xx_srifle_DMR_05_ghex_F
			{
				weapon="srifle_DMR_05_ghex_F";
				count=1;
			};
			delete _xx_MMG_01_hex_F;
			class _xx_MMG_01_ghex_F
			{
				weapon="MMG_01_ghex_F";
				count=1;
			};
			delete _xx_arifle_ARX_blk_F;
			class _xx_LMG_Zafir_ghex_F
			{
				weapon="LMG_Zafir_ghex_F";
				count=1;
			};
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_ACO_grn
			{
				name="optic_ACO_grn";
				count=1;
			};
			class _xx_optic_ACO_grn_smg
			{
				name="optic_ACO_grn_smg";
				count=1;
			};
			delete _xx_optic_MRCO;
			class _xx_optic_Arco_blk_F
			{
				name="optic_Arco_blk_F";
				count=1;
			};
			class _xx_optic_Arco_ghex_F
			{
				name="optic_Arco_ghex_F";
				count=1;
			};
			delete _xx_optic_SOS;
			class _xx_optic_Nightstalker
			{
				name="optic_Nightstalker";
				count=1;
			};
			class _xx_optic_TWS
			{
				name="optic_TWS";
				count=1;
			};
			class _xx_optic_TWS_MG
			{
				name="optic_TWS_MG";
				count=1;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=1;
			};
			class _xx_optic_Yorris
			{
				name="optic_Yorris";
				count=1;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=1;
			};
			class _xx_optic_DMS_ghex_F
			{
				name="optic_DMS_ghex_F";
				count=1;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=1;
			};
			class _xx_optic_LRPS_ghex_F
			{
				name="optic_LRPS_ghex_F";
				count=1;
			};
			class _xx_optic_KHS_blk
			{
				name="optic_KHS_blk";
				count=1;
			};
			delete _xx_optic_KHS_hex;
			delete _xx_optic_KHS_tan;
		};
	};
	class Box_T_East_AmmoOrd_F: Box_East_AmmoOrd_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_AmmoOrd_F.jpg";
		_generalMacro="Box_T_East_AmmoOrd_F";
		scope=2;
		displayName="Explosives [CSAT Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_T_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
		};
	};
	class Box_T_East_Grenades_F: Box_East_Grenades_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_Grenades_F.jpg";
		_generalMacro="Box_T_East_Grenades_F";
		scope=2;
		displayName="Grenades [CSAT Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_T_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
		};
	};
	class Box_T_East_Support_F: Box_East_Support_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_Support_F.jpg";
		_generalMacro="Box_T_East_Support_F";
		scope=2;
		displayName="Support [CSAT Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_T_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=5;
			};
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
			class _xx_muzzle_snds_b
			{
				name="muzzle_snds_b";
				count=5;
			};
			class _xx_muzzle_snds_b_ghex_F
			{
				name="muzzle_snds_b_ghex_F";
				count=5;
			};
			class _xx_muzzle_snds_93mmg
			{
				name="muzzle_snds_93mmg";
				count=2;
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
			class _xx_muzzle_mzls_b
			{
				name="muzzle_mzls_b";
				count=5;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=1;
			};
			class _xx_Laserdesignator_02_ghex_F
			{
				name="Laserdesignator_02_ghex_F";
				count=1;
			};
			class _xx_bipod_02_F_blk
			{
				name="bipod_02_F_blk";
				count=2;
			};
			class _xx_NVGoggles_OPFOR
			{
				name="NVGoggles_OPFOR";
				count=2;
			};
			class _xx_O_NVGoggles_ghex_F
			{
				name="O_NVGoggles_ghex_F";
				count=2;
			};
			class _xx_O_NVGoggles_blk_F
			{
				name="O_NVGoggles_blk_F";
				count=2;
			};
		};
	};
	class Box_T_East_WpsLaunch_F: Box_East_WpsLaunch_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_WpsLaunch_F.jpg";
		_generalMacro="Box_T_East_WpsLaunch_F";
		scope=2;
		displayName="Launchers [CSAT Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_T_CA.paa",
			"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa"
		};
		class TransportWeapons
		{
			class _xx_launch_O_Titan_ghex_F
			{
				weapon="launch_O_Titan_ghex_F";
				count=1;
			};
			class _xx_launch_O_Titan_short_ghex_F
			{
				weapon="launch_O_Titan_short_ghex_F";
				count=1;
			};
			class _xx_launch_RPG32_ghex_F
			{
				weapon="launch_RPG32_ghex_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Fieldpack_ghex_F
			{
				backpack="B_Fieldpack_ghex_F";
				count=3;
			};
		};
	};
	class Box_T_East_AmmoVeh_F: Box_East_AmmoVeh_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_East_AmmoVeh_F.jpg";
		_generalMacro="Box_T_East_AmmoVeh_F";
		scope=2;
		displayName="Vehicle Ammo [CSAT Pacific]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_T_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoVeh_OPFOR_T_CO.paa"
		};
	};
	class Box_A_NATO_Wps_F: Box_NATO_Wps_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_F.jpg";
		_generalMacro="Box_A_NATO_Wps_F";
		scope=2;
		displayName="Basic Weapons [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=9;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=1;
			};
			class _xx_15Rnd_45ACP_Mag
			{
				magazine="15Rnd_45ACP_Mag";
				count=1;
			};
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=1;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=2;
			};
			class _xx_100Rnd_556x45_Drum_Mag_F
			{
				magazine="100Rnd_556x45_Drum_Mag_F";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_blk_F
			{
				weapon="arifle_SA80_blk_F";
				count=4;
			};
			class _xx_arifle_SA80_C_blk_F
			{
				weapon="arifle_SA80_C_blk_F";
				count=2;
			};
			class _xx_arifle_SA80_GL_blk_F
			{
				weapon="arifle_SA80_GL_blk_F";
				count=2;
			};
			class _xx_arifle_SA80_LSW_blk_F
			{
				weapon="arifle_SA80_LSW_blk_F";
				count=1;
			};
			class _xx_LMG_Mk200_plain_F
			{
				weapon="LMG_Mk200_plain_F";
				count=2;
			};
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon="arifle_SPAR_01_snd_F";
				count=1;
			};
			class _xx_arifle_SPAR_01_GL_snd_F
			{
				weapon="arifle_SPAR_01_GL_snd_F";
				count=1;
			};
			class _xx_arifle_SPAR_02_snd_F
			{
				weapon="arifle_SPAR_02_snd_F";
				count=1;
			};
			class _xx_SMG_01_F
			{
				weapon="SMG_01_F";
				count=1;
			};
			class _xx_hgun_P07_F
			{
				weapon="hgun_P07_F";
				count=1;
			};
			class _xx_hgun_Pistol_heavy_01_F
			{
				weapon="hgun_Pistol_heavy_01_F";
				count=1;
			};
		};
	};
	class Box_A_NATO_Ammo_F: Box_NATO_Ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_F.jpg";
		_generalMacro="Box_A_NATO_Ammo_F";
		scope=2;
		displayName="Basic Ammo [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=6;
			};
			class _xx_15Rnd_45ACP_Mag
			{
				magazine="15Rnd_45ACP_Mag";
				count=6;
			};
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=30;
			};
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine="200Rnd_556x45_Box_Red_F";
				count=3;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=1;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=1;
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
		};
	};
	class Box_A_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_F.jpg";
		_generalMacro="Box_A_NATO_WpsSpecial_F";
		scope=2;
		displayName="Special Weapons [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_5Rnd_127x99_Mag
			{
				magazine="5Rnd_127x99_Mag";
				count=8;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=18;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=3;
			};
			class _xx_20Rnd_556x45_Stanag_red
			{
				magazine="20Rnd_556x45_Stanag_red";
				count=3;
			};
			class _xx_100Rnd_338_Mag
			{
				magazine="100Rnd_338_Mag";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_8Rnd_12Gauge_Slug
			{
				magazine="8Rnd_12Gauge_Slug";
				count=3;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=1;
			};
			class _xx_srifle_WF50_F
			{
				weapon="srifle_WF50_F";
				count=1;
			};
			class _xx_srifle_EBR_F
			{
				weapon="srifle_EBR_F";
				count=1;
			};
			class _xx_srifle_DMR_03_tan_F
			{
				weapon="srifle_DMR_03_tan_F";
				count=1;
			};
			class _xx_MMG_02_sand_F
			{
				weapon="MMG_02_sand_F";
				count=1;
			};
			class _xx_arifle_SPAR_03_snd_F
			{
				weapon="arifle_SPAR_03_snd_F";
				count=1;
			};
			class _xx_sgun_M4_F
			{
				weapon="sgun_M4_F";
				count=1;
			};
			class _xx_GL_M32_F
			{
				weapon="GL_M32_F";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_optic_ACO
			{
				name="optic_ACO";
				count=1;
			};
			class _xx_optic_ACO_smg
			{
				name="optic_ACO_smg";
				count=1;
			};
			class _xx_optic_Hamr
			{
				name="optic_Hamr";
				count=1;
			};
			class _xx_optic_SOS
			{
				name="optic_SOS";
				count=1;
			};
			class _xx_optic_Holosight
			{
				name="optic_Holosight";
				count=1;
			};
			class _xx_optic_Holosight_smg
			{
				name="optic_Holosight_smg";
				count=1;
			};
			class _xx_optic_NVS
			{
				name="optic_NVS";
				count=1;
			};
			class _xx_optic_TWS
			{
				name="optic_TWS";
				count=1;
			};
			class _xx_optic_TWS_MG
			{
				name="optic_TWS_MG";
				count=1;
			};
			class _xx_optic_TWS_Sniper
			{
				name="optic_TWS_Sniper";
				count=1;
			};
			class _xx_optic_MRD
			{
				name="optic_MRD";
				count=1;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=1;
			};
			class _xx_optic_AMS
			{
				name="optic_AMS";
				count=1;
			};
			class _xx_optic_AMS_snd
			{
				name="optic_AMS_snd";
				count=1;
			};
		};
	};
	class Box_A_NATO_AmmoOrd_F: Box_NATO_AmmoOrd_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_AmmoOrd_F.jpg";
		_generalMacro="Box_A_NATO_AmmoOrd_F";
		scope=2;
		displayName="Explosives [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa"
		};
	};
	class Box_A_NATO_Grenades_F: Box_NATO_Grenades_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Grenades_F.jpg";
		_generalMacro="Box_A_NATO_Grenades_F";
		scope=2;
		displayName="Grenades [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa"
		};
	};
	class Box_A_NATO_Support_F: Box_NATO_Support_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Support_F.jpg";
		_generalMacro="Box_A_NATO_Support_F";
		scope=2;
		displayName="Support [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=5;
			};
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
			class _xx_muzzle_snds_acp
			{
				name="muzzle_snds_acp";
				count=5;
			};
			class _xx_muzzle_snds_L
			{
				name="muzzle_snds_L";
				count=5;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=5;
			};
			class _xx_muzzle_snds_M_snd_F
			{
				name="muzzle_snds_M_snd_F";
				count=5;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=5;
			};
			class _xx_muzzle_snds_H_snd_F
			{
				name="muzzle_snds_H_snd_F";
				count=5;
			};
			class _xx_muzzle_snds_b
			{
				name="muzzle_snds_b";
				count=5;
			};
			class _xx_muzzle_snds_b_snd_F
			{
				name="muzzle_snds_b_snd_F";
				count=5;
			};
			class _xx_muzzle_snds_338_black
			{
				name="muzzle_snds_338_black";
				count=2;
			};
			class _xx_muzzle_snds_338_green
			{
				name="muzzle_snds_338_green";
				count=2;
			};
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=2;
			};
			class _xx_muzzle_mzls_acp
			{
				name="muzzle_mzls_acp";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
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
			class _xx_muzzle_mzls_b
			{
				name="muzzle_mzls_b";
				count=5;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=1;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=1;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=2;
			};
			class _xx_bipod_01_F_mtp
			{
				name="bipod_01_F_mtp";
				count=2;
			};
			class _xx_bipod_01_F_snd
			{
				name="bipod_01_F_snd";
				count=2;
			};
			class _xx_NVGoggles
			{
				name="NVGoggles";
				count=2;
			};
		};
	};
	class Box_A_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsLaunch_F.jpg";
		_generalMacro="Box_A_NATO_WpsLaunch_F";
		scope=2;
		displayName="Launchers [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_BLUFOR_A_CO.paa"
		};
	};
	class Box_A_NATO_AmmoVeh_F: Box_NATO_AmmoVeh_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_AmmoVeh_F.jpg";
		_generalMacro="Box_A_NATO_AmmoVeh_F";
		scope=2;
		displayName="Vehicle Ammo [NATO British]";
		DLC="Aegis";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
			"\A3\Supplies_F_Aegis\Ammoboxes\Data\AmmoVeh_BLUFOR_A_CO.paa"
		};
	};
	class Box_Syndicate_Wps_F: ReammoBox_F
	{
		class TransportItems
		{
			delete _xx_V_BandollierB_cbr;
			class _xx_V_BandollierB_brn
			{
				name="V_BandollierB_brn";
				count=6;
			};
		};
	};
	class B_T_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_supplyCrate_F.jpg";
		_generalMacro="B_T_supplyCrate_F";
		scope=2;
		displayName="Supply Box [NATO Pacific]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=24;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=6;
			};
			class _xx_15Rnd_45ACP_Mag
			{
				magazine="15Rnd_45ACP_Mag";
				count=6;
			};
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=6;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=1;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=6;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator_01_khk_F
			{
				name="Laserdesignator_01_khk_F";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_khk_F
			{
				weapon="arifle_MX_khk_F";
				count=2;
			};
			class _xx_arifle_MX_SW_khk_F
			{
				weapon="arifle_MX_SW_khk_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_tna_F
			{
				backpack="B_Kitbag_tna_F";
				count=2;
			};
		};
	};
	class O_T_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_supplyCrate_F.jpg";
		_generalMacro="O_T_supplyCrate_F";
		scope=2;
		displayName="Supply Box [CSAT Pacific]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=24;
			};
			class _xx_10Rnd_650x39_Cased_Mag_F
			{
				magazine="10Rnd_650x39_Cased_Mag_F";
				count=8;
			};
			class _xx_75Rnd_580x42_Mag_F
			{
				magazine="75Rnd_580x42_Mag_F";
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
				count=2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_red
			{
				magazine="chemlight_red";
				count=6;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=3;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=1;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator_02_ghex_F
			{
				name="Laserdesignator_02_ghex_F";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
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
			class _xx_arifle_CTARS_blk_F
			{
				weapon="arifle_CTARS_blk_F";
				count=1;
			};
			class _xx_launch_RPG32_ghex_F
			{
				weapon="launch_RPG32_ghex_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Fieldpack_ghex_F
			{
				backpack="B_Fieldpack_ghex_F";
				count=2;
			};
		};
	};
	class B_A_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_F.jpg";
		_generalMacro="B_A_supplyCrate_F";
		scope=2;
		displayName="Supply Box [NATO British]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=6;
			};
			class _xx_15Rnd_45ACP_Mag
			{
				magazine="15Rnd_45ACP_Mag";
				count=6;
			};
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=30;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=1;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_green
			{
				magazine="chemlight_green";
				count=6;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_F
			{
				weapon="arifle_SA80_F";
				count=2;
			};
			class _xx_LMG_Mk200_plain_F
			{
				weapon="LMG_Mk200_plain_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_mcamo
			{
				backpack="B_Kitbag_mcamo";
				count=2;
			};
		};
	};
	class ION_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\ION_supplyCrate_F.jpg";
		_generalMacro="ION_supplyCrate_F";
		scope=2;
		displayName="Supply Box [ION]";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=4000;
		transportMaxWeapons=12;
		transportMaxMagazines=96;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=24;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=6;
			};
			class _xx_15Rnd_45ACP_Mag
			{
				magazine="15Rnd_45ACP_Mag";
				count=6;
			};
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=6;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=1;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=2;
			};
			class _xx_chemlight_blue
			{
				magazine="chemlight_blue";
				count=6;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=3;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=2;
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
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=2;
			};
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
				count=3;
			};
			class _xx_20Rnd_12Gauge_Slug
			{
				magazine="20Rnd_12Gauge_Slug";
				count=3;
			};
			class _xx_20Rnd_12Gauge_HE
			{
				magazine="20Rnd_12Gauge_HE";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=1;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=2;
			};
			class _xx_acc_flashlight_pistol
			{
				name="acc_flashlight_pistol";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_Black_F
			{
				weapon="arifle_MX_Black_F";
				count=2;
			};
			class _xx_arifle_MX_GL_Black_F
			{
				weapon="arifle_MX_GL_Black_F";
				count=1;
			};
			class _xx_arifle_MX_SW_Black_F
			{
				weapon="arifle_MX_SW_Black_F";
				count=1;
			};
			class _xx_arifle_MXC_Black_F
			{
				weapon="arifle_MXC_Black_F";
				count=1;
			};
			class _xx_arifle_MXM_Black_F
			{
				weapon="arifle_MXM_Black_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_rgr
			{
				backpack="B_Kitbag_rgr";
				count=2;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942637";
};
