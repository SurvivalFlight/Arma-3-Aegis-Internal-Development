class CfgPatches
{
	class A3_Supplies_F_Rus_Ammoboxes
	{
		addonRootClass="A3_Supplies_F_Rus";
		requiredAddons[]=
		{
			"A3_Supplies_F_Aegis_Ammoboxes"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Box_RU_AmmoOrd_F",
			"Box_RU_AmmoVeh_F",
			"Box_RU_Ammo_F",
			"Box_RU_Equip_F",
			"Box_RU_Grenades_F",
			"Box_RU_Support_F",
			"Box_RU_Uniforms_F",
			"Box_RU_WpsLaunch_F",
			"Box_RU_WpsSpecial_F",
			"Box_RU_Wps_F",
			"R_supplyCrate_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Box_AAF_Equip_F;
	class Box_RU_Equip_F: Box_AAF_Equip_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_Equip_F.jpg";
		_generalMacro="Box_RU_Equip_F";
		displayName="Equipment Box [Russia]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\equipment_box_rus_CO.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\equipment_box_rus_CA.paa"
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
			class _xx_V_BandollierB_rgr
			{
				name="V_BandollierB_rgr";
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
			class _xx_V_PlateCarrierIA1_blk
			{
				name="V_PlateCarrierIA1_blk";
				count=2;
			};
			class _xx_V_PlateCarrierRU1_emr_F
			{
				name="V_PlateCarrierRU1_emr_F";
				count=2;
			};
			class _xx_V_PlateCarrierRU1_vsr_F
			{
				name="V_PlateCarrierRU1_vsr_F";
				count=2;
			};
			class _xx_V_PlateCarrierRU1_vsr_alt_F
			{
				name="V_PlateCarrierRU1_vsr_alt_F";
				count=2;
			};
			class _xx_V_PlateCarrierIA2_blk
			{
				name="V_PlateCarrierIA2_blk";
				count=2;
			};
			class _xx_V_PlateCarrierRU2_emr_F
			{
				name="V_PlateCarrierRU2_emr_F";
				count=2;
			};
			class _xx_V_PlateCarrierRU2_vsr_F
			{
				name="V_PlateCarrierRU2_vsr_F";
				count=2;
			};
			class _xx_V_PlateCarrierRU2_vsr_alt_F
			{
				name="V_PlateCarrierRU2_vsr_alt_F";
				count=2;
			};
			class _xx_V_PlateCarrierIAGL_blk
			{
				name="V_PlateCarrierIAGL_blk";
				count=2;
			};
			class _xx_V_PlateCarrierRUGL_emr_F
			{
				name="V_PlateCarrierRUGL_emr_F";
				count=2;
			};
			class _xx_V_PlateCarrierRUGL_vsr_F
			{
				name="V_PlateCarrierRUGL_vsr_F";
				count=2;
			};
			class _xx_V_PlateCarrierRUGL_vsr_alt_F
			{
				name="V_PlateCarrierRUGL_vsr_alt_F";
				count=2;
			};
			class _xx_V_RebreatherRU
			{
				name="V_RebreatherRU";
				count=2;
			};
			class _xx_H_Cap_oli
			{
				name="H_Cap_oli";
				count=2;
			};
			class _xx_H_MilCap_emr_F
			{
				name="H_MilCap_emr_F";
				count=2;
			};
			class _xx_H_MilCap_emr_alt_F
			{
				name="H_MilCap_emr_alt_F";
				count=2;
			};
			class _xx_H_Booniehat_emr_F
			{
				name="H_Booniehat_emr_F";
				count=2;
			};
			class _xx_H_Booniehat_emr_alt_F
			{
				name="H_Booniehat_emr_alt_F";
				count=2;
			};
			class _xx_H_Beret_rus_F
			{
				name="H_Beret_rus_F";
				count=2;
			};
			class _xx_H_HelmetIA_Black
			{
				name="H_HelmetIA_Black";
				count=2;
			};
			class _xx_H_HelmetIA_Green
			{
				name="H_HelmetIA_Green";
				count=2;
			};
			class _xx_H_HelmetIA_Khaki
			{
				name="H_HelmetIA_Khaki";
				count=2;
			};
			class _xx_H_HelmetSpecIA_Black
			{
				name="H_HelmetSpecIA_Black";
				count=2;
			};
			class _xx_H_HelmetSpecIA_Green
			{
				name="H_HelmetSpecIA_Green";
				count=2;
			};
			class _xx_H_HelmetSpecIA_Sand
			{
				name="H_HelmetSpecIA_Sand";
				count=2;
			};
			class _xx_H_HelmetCrew_RU
			{
				name="H_HelmetCrew_RU";
				count=2;
			};
			class _xx_H_PilotHelmetFighter_RU
			{
				name="H_PilotHelmetFighter_RU";
				count=2;
			};
			class _xx_H_PilotHelmetHeli_RU
			{
				name="H_PilotHelmetHeli_RU";
				count=2;
			};
			class _xx_H_CrewHelmetHeli_RU
			{
				name="H_CrewHelmetHeli_RU";
				count=2;
			};
			class _xx_V_TacChestrig_grn_F
			{
				name="V_TacChestrig_grn_F";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_AssaultPack_vsr_F
			{
				backpack="B_AssaultPack_vsr_F";
				count=2;
			};
			class _xx_B_Bergen_vsr_F
			{
				backpack="B_Bergen_vsr_F";
				count=2;
			};
			class _xx_B_Carryall_vsr_F
			{
				backpack="B_Carryall_vsr_F";
				count=2;
			};
			class _xx_B_FieldPack_vsr_F
			{
				backpack="B_FieldPack_vsr_F";
				count=2;
			};
			class _xx_B_TacticalPack_vsr_F
			{
				backpack="B_TacticalPack_vsr_F";
				count=2;
			};
		};
	};
	class Box_AAF_Uniforms_F;
	class Box_RU_Uniforms_F: Box_AAF_Uniforms_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_Uniforms_F.jpg";
		_generalMacro="Box_RU_Uniforms_F";
		displayName="Uniforms Box [Russia]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\uniforms_box_rus_CO.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\equipment_box_rus_CA.paa"
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_U_I_RU_Soldier_F
			{
				name="U_I_RU_Soldier_F";
				count=4;
			};
			class _xx_U_I_RU_Soldier_2_F
			{
				name="U_I_RU_Soldier_2_F";
				count=4;
			};
			class _xx_U_I_RU_Soldier_alt_F
			{
				name="U_I_RU_Soldier_alt_F";
				count=4;
			};
			class _xx_U_I_RU_Soldier_2_alt_F
			{
				name="U_I_RU_Soldier_2_alt_F";
				count=4;
			};
			class _xx_U_I_RU_Soldier_urb_F
			{
				name="U_I_RU_Soldier_urb_F";
				count=4;
			};
			class _xx_U_I_RU_Soldier_2_urb_F
			{
				name="U_I_RU_Soldier_2_urb_F";
				count=4;
			};
			class _xx_U_I_RU_Officer_F
			{
				name="U_I_RU_Officer_F";
				count=4;
			};
			class _xx_U_I_RU_Helipilot_F
			{
				name="U_I_RU_Helipilot_F";
				count=4;
			};
			class _xx_U_I_RU_Pilot_F
			{
				name="U_I_RU_Pilot_F";
				count=4;
			};
			class _xx_U_I_RU_Sniper_F
			{
				name="U_I_RU_Sniper_F";
				count=4;
			};
			class _xx_U_I_RU_FullGhillie_ard
			{
				name="U_I_RU_FullGhillie_ard";
				count=4;
			};
			class _xx_U_I_RU_FullGhillie_lsh
			{
				name="U_I_RU_FullGhillie_lsh";
				count=4;
			};
			class _xx_U_I_RU_FullGhillie_sard
			{
				name="U_I_RU_FullGhillie_sard";
				count=4;
			};
			class _xx_U_I_RU_Diver_F
			{
				name="U_I_RU_Diver_F";
				count=4;
			};
		};
	};
	class Box_NATO_Wps_F;
	class Box_RU_Wps_F: Box_NATO_Wps_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_Wps_F.jpg";
		_generalMacro="Box_RU_Wps_F";
		scope=2;
		displayName="Basic Weapons [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_Mag_F
			{
				magazine="30Rnd_545x39_Mag_F";
				count=3;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=6;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=1;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=1;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=4;
			};
			class _xx_arifle_AK12_GL_F
			{
				weapon="arifle_AK12_GL_F";
				count=2;
			};
			class _xx_arifle_RPK_F
			{
				weapon="arifle_RPK_F";
				count=2;
			};
			class _xx_arifle_AK107_F
			{
				weapon="arifle_AK107_F";
				count=1;
			};
			class _xx_arifle_AK107_GL_F
			{
				weapon="arifle_AK107_GL_F";
				count=1;
			};
			class _xx_arifle_AK105_F
			{
				weapon="arifle_AK105_F";
				count=1;
			};
			class _xx_SMG_06_F
			{
				weapon="SMG_06_F";
				count=1;
			};
			class _xx_hgun_Rook40_F
			{
				weapon="hgun_Rook40_F";
				count=1;
			};
		};
	};
	class Box_NATO_Ammo_F;
	class Box_RU_Ammo_F: Box_NATO_Ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_Ammo_F.jpg";
		_generalMacro="Box_RU_Ammo_F";
		scope=2;
		displayName="Basic Ammo [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=24;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_30Rnd_545x39_Mag_F
			{
				magazine="30Rnd_545x39_Mag_F";
				count=24;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=6;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
				count=3;
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
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
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
	class Box_NATO_WpsSpecial_F;
	class Box_RU_WpsSpecial_F: Box_NATO_WpsSpecial_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_WpsSpecial_F.jpg";
		_generalMacro="Box_RU_WpsSpecial_F";
		scope=2;
		displayName="Special Weapons [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa"
		};
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
				count=6;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=3;
			};
			class _xx_20Rnd_556x45_Stanag
			{
				magazine="20Rnd_556x45_Stanag";
				count=3;
			};
			class _xx_10Rnd_127x54_Mag
			{
				magazine="10Rnd_127x54_Mag";
				count=6;
			};
			class _xx_10Rnd_93x64_Mag_DMR_05
			{
				magazine="10Rnd_93x64_Mag_DMR_05";
				count=6;
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
			class _xx_arifle_DMR_01_black_F
			{
				weapon="arifle_DMR_01_black_F";
				count=1;
			};
			class _xx_srifle_GM6_F
			{
				weapon="srifle_GM6_F";
				count=1;
			};
			class _xx_srifle_DMR_04_F
			{
				weapon="srifle_DMR_04_F";
				count=1;
			};
			class _xx_srifle_DMR_05_F
			{
				weapon="srifle_DMR_05_F";
				count=1;
			};
			class _xx_sgun_SK12_F
			{
				weapon="sgun_SK12_F";
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
			class _xx_optic_ACO_smg_grn
			{
				name="optic_ACO_smg_grn";
				count=1;
			};
			class _xx_optic_MRCO
			{
				name="optic_MRCO";
				count=1;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=1;
			};
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
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=1;
			};
		};
	};
	class Box_NATO_AmmoOrd_F;
	class Box_RU_AmmoOrd_F: Box_NATO_AmmoOrd_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_AmmoOrd_F.jpg";
		_generalMacro="Box_RU_AmmoOrd_F";
		scope=2;
		displayName="Explosives [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa"
		};
	};
	class Box_NATO_Grenades_F;
	class Box_RU_Grenades_F: Box_NATO_Grenades_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_Grenades_F.jpg";
		_generalMacro="Box_RU_Grenades_F";
		scope=2;
		displayName="Grenades [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa"
		};
	};
	class Box_NATO_Support_F;
	class Box_RU_Support_F: Box_NATO_Support_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_Support_F.jpg";
		_generalMacro="Box_RU_Support_F";
		scope=2;
		displayName="Support [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa"
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
			class _xx_muzzle_snds_b
			{
				name="muzzle_snds_b";
				count=5;
			};
			class _xx_muzzle_snds_545_F
			{
				name="muzzle_snds_545_F";
				count=5;
			};
			class _xx_muzzle_mzls_L
			{
				name="muzzle_mzls_L";
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
			class _xx_NVGoggles_INDEP
			{
				name="NVGoggles_INDEP";
				count=2;
			};
		};
	};
	class Box_NATO_WpsLaunch_F;
	class Box_RU_WpsLaunch_F: Box_NATO_WpsLaunch_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_WpsLaunch_F.jpg";
		_generalMacro="Box_RU_WpsLaunch_F";
		scope=2;
		displayName="Launchers [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_rus_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=3;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=3;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
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
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_R_Titan
			{
				weapon="launch_R_Titan";
				count=1;
			};
			class _xx_launch_R_Titan_short
			{
				weapon="launch_R_Titan_short";
				count=1;
			};
			class _xx_launch_RPG32_black_F
			{
				weapon="launch_RPG32_black_F";
				count=1;
			};
			class _xx_launch_RPG7_F
			{
				weapon="launch_RPG7_F";
				count=1;
			};
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_vsr_F
			{
				backpack="B_FieldPack_vsr_F";
				count=3;
			};
		};
	};
	class Box_NATO_AmmoVeh_F;
	class Box_RU_AmmoVeh_F: Box_NATO_AmmoVeh_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Box_RU_AmmoVeh_F.jpg";
		_generalMacro="Box_RU_AmmoVeh_F";
		scope=2;
		displayName="Vehicle Ammo [Russia]";
		DLC="Rus";
		editorCategory="EdCat_Supplies";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoBox_signs_rus_CA.paa",
			"\A3\Supplies_F_Rus\Ammoboxes\Data\AmmoVeh_rus_CO.paa"
		};
	};
	class ReammoBox_F;
	class R_supplyCrate_F: ReammoBox_F
	{
		author="$STR_A3_Night515";
		mapSize=1.58;
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\R_supplyCrate_F.jpg";
		_generalMacro="R_supplyCrate_F";
		scope=2;
		displayName="Supply Box [Russia]";
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
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=24;
			};
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=6;
			};
			class _xx_30Rnd_545x39_Mag_F
			{
				magazine="30Rnd_545x39_Mag_F";
				count=6;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=6;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=30;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
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
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
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
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=2;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
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
		};
		class TransportWeapons
		{
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
			class _xx_arifle_RPK_F
			{
				weapon="arifle_RPK_F";
				count=1;
			};
			class _xx_launch_RPG32_black_F
			{
				weapon="launch_RPG32_black_F";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_FieldPack_vsr_F
			{
				backpack="B_FieldPack_vsr_F";
				count=2;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527875400";
};
