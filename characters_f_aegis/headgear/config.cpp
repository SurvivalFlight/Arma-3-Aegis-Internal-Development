class CfgPatches
{
	class A3_Characters_F_Aegis_Headgear
	{
		addonRootClass="A3_Characters_F_Aegis";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Exp_Headgear",
			"A3_Characters_F_Orange_Headgear"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_CO.paa"
		};
		class ItemInfo;
	};
	class H_Helmet_Skate: H_HelmetB
	{
	};
	class H_HelmetB_TI_tna_F: H_HelmetB
	{
		displayName="Stealth Combat Helmet (Tropic)";
	};
	class H_HelmetB_TI_alt_F: H_HelmetB_TI_tna_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_TI_alt_F";
		displayName="Stealth Combat Helmet (Sand)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_TI_alt_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_TI_alt_F_CO.paa"
		};
	};
	class H_HelmetB_GL_blk_F: H_HelmetB_TI_tna_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_GL_blk_F";
		displayName="Special Combat Helmet (Black)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_GL_blk_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_blk_F_CO.paa"
		};
	};
	class H_HelmetB_GL_mtp_F: H_HelmetB_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_GL_mtp_F";
		displayName="Special Combat Helmet (MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_GL_mtp_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_mtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_mtp_F.rvmat"
		};
	};
	class H_HelmetB_GL_oli_F: H_HelmetB_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_GL_oli_F";
		displayName="Special Combat Helmet (Olive)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_GL_oli_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_oli_F_CO.paa"
		};
	};
	class H_HelmetB_GL_tna_F: H_HelmetB_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_GL_tna_F";
		displayName="Special Combat Helmet (Tropic)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_GL_tna_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_mtp_F.rvmat"
		};
	};
	class H_HelmetB_GL_ukmtp_F: H_HelmetB_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_GL_ukmtp_F";
		displayName="Special Combat Helmet (UK MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_GL_ukmtp_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_ukmtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_GL_mtp_F.rvmat"
		};
	};
	class H_HelmetO_ViperSP_hex_F: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_ViperSP_alt_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			subItems[]=
			{
				"Integrated_NVG_TI_0_F"
			};
		};
	};
	class H_HelmetB_black: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_black_CO.paa"
		};
	};
	class H_HelmetB_khaki: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_khaki";
		displayName="Combat Helmet (Khaki)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_khaki_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_khaki_CO.paa"
		};
	};
	class H_HelmetB_green: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_green";
		displayName="Combat Helmet (Green)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\equip1_CO.paa"
		};
	};
	class H_HelmetB_olive: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_olive";
		displayName="Combat Helmet (Olive)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_olive_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_olive_CO.paa"
		};
	};
	class H_HelmetB_mtp: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_mtp";
		displayName="$STR_A3_H_HelmetB_mtp0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_mtp_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_tna_F: H_HelmetB
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_ukmtp_F: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_ukmtp_F";
		displayName="Combat Helmet (UK MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_ukmtp_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_ukmtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetSpecB: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_CO.paa"
		};
		class ItemInfo;
	};
	class H_HelmetSpecB_blk: H_HelmetSpecB
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_black_CO.paa"
		};
	};
	class H_HelmetSpecB_khk: H_HelmetSpecB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecB_khk";
		displayName="Enhanced Combat Helmet (Khaki)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_khk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_khaki_CO.paa"
		};
	};
	class H_HelmetSpecB_grn: H_HelmetSpecB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecB_grn";
		displayName="Enhanced Combat Helmet (Green)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetSpecB_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\equip1_CO.paa"
		};
	};
	class H_HelmetSpecB_oli: H_HelmetSpecB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecB_oli";
		displayName="Enhanced Combat Helmet (Olive)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_oli_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_olive_CO.paa"
		};
	};
	class H_HelmetSpecB_mtp: H_HelmetSpecB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecB_mtp";
		displayName="$STR_A3_H_HelmetSpecB_mtp0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_mtp_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_Enh_ukmtp_F: H_HelmetSpecB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_Enh_ukmtp_F";
		displayName="Enhanced Combat Helmet (UK MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_Enh_ukmtp_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_Enh_ukmtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_Enh_tna_F: H_HelmetSpecB
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_light: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_CO.paa"
		};
	};
	class H_HelmetB_light_black: H_HelmetB_light
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_black_CO.paa"
		};
	};
	class H_HelmetB_light_khaki: H_HelmetB_light
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_light_khaki";
		displayName="Light Combat Helmet (Khaki)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_khaki_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_khaki_CO.paa"
		};
	};
	class H_HelmetB_light_green: H_HelmetB_light
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_light_green";
		displayName="Light Combat Helmet (Green)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\equip1_CO.paa"
		};
	};
	class H_HelmetB_light_olive: H_HelmetB_light
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_light_olive";
		displayName="Light Combat Helmet (Olive)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_olive_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_olive_CO.paa"
		};
	};
	class H_HelmetB_light_mtp: H_HelmetB_light
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_light_mtp";
		displayName="$STR_A3_H_HelmetB_light_mtp0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_mtp_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_Light_ukmtp_F: H_HelmetB_light
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_Light_ukmtp_F";
		displayName="Light Combat Helmet (UK MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_Light_ukmtp_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_Light_ukmtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_Light_tna_F: H_HelmetB_light
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_Light_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_camo: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_CO.paa",
			"\A3\Characters_F\Common\Data\ghillie2_CO.paa"
		};
	};
	class H_HelmetB_Camo_tna_F: H_HelmetB_camo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_Camo_tna_F";
		displayName="Combat Helmet (Tropic, Camo)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_Camo_tna_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_Camo_tna_F_01_CO.paa",
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_Camo_tna_F_02_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat",
			""
		};
	};
	class H_HelmetB_lowprofile: H_HelmetB_light
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile";
		scope=2;
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_CA.paa";
		displayName="Low Profile Helmet";
		model="\A3\Characters_F_Aegis\Headgear\headgear_placeholder.p3d";
		descriptionShort="$STR_A3_SP_AL_I";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\A3\Characters_F_Aegis\Headgear\headgear_placeholder.p3d";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetB_lowprofile_paint1: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_paint1";
		displayName="Low Profile Helmet (Grass)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_grass_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\equip1_grass_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_paint2: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_paint2";
		displayName="Low Profile Helmet (Desert)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_desert_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\equip1_desert_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_blk: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_blk";
		displayName="Low Profile Helmet (Black)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_black_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\equip1_black_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_snakeskin: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_snakeskin";
		displayName="Low Profile Helmet (Snakeskin)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_snakeskin_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\equip1_snake_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_sand: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_sand";
		displayName="Low Profile Helmet (Sand)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_sand_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\equip1_sand_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_khk: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_khk";
		displayName="Low Profile Helmet (Khaki)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_khk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_khaki_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_grn: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_grn";
		displayName="Low Profile Helmet (Green)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetB_light_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\equip1_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_oli: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_oli";
		displayName="Low Profile Helmet (Olive)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_oli_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_olive_CO.paa"
		};
	};
	class H_HelmetB_lowprofile_mtp: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_lowprofile_mtp";
		displayName="Low Profile Helmet (MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_mtp_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_Lowprofile_ukmtp_F: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_Lowprofile_ukmtp_F";
		displayName="Low Profile Helmet (UK MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_Light_ukmtp_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_Light_ukmtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetB_Lowprofile_tna_F: H_HelmetB_lowprofile
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_Lowprofile_tna_F";
		displayName="Low Profile Helmet (Tropic)";
		picture="\A3\Characters_F_Exp\Headgear\Data\UI\icon_H_HelmetB_Light_tna_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_Light_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\equip1_mtp.rvmat"
		};
	};
	class H_HelmetO_ocamo: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_CO.paa"
		};
	};
	class H_HelmetSpecO_ocamo: H_HelmetO_ocamo
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_CO.paa"
		};
	};
	class H_HelmetSpecO_oucamo: H_HelmetSpecO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecO_oucamo";
		displayName="Assassin Helmet (Urban)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetO_oucamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_oucamo_CO.paa"
		};
	};
	class H_HelmetSpecO_sand: H_HelmetSpecO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecO_sand";
		displayName="Assassin Helmet (Sand)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_sand_CO.paa"
		};
	};
	class H_HelmetSpecO_bhex_F: H_HelmetSpecO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecO_bhex_F";
		displayName="Assassin Helmet (Brown Hex)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_alt_CO.paa"
		};
	};
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_CO.paa"
		};
	};
	class H_HelmetLeaderO_blk: H_HelmetLeaderO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetLeaderO_blk";
		displayName="Defender Helmet (Black)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetLeaderO_blk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_rus_CO.paa"
		};
	};
	class H_HelmetLeaderO_sand: H_HelmetLeaderO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetLeaderO_sand";
		displayName="Defender Helmet (Sand)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetLeaderO_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_sand_CO.paa"
		};
	};
	class H_HelmetLeaderO_bhex_F: H_HelmetLeaderO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetLeaderO_bhex_F";
		displayName="Defender Helmet (Brown Hex)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetLeaderO_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_alt_CO.paa"
		};
	};
	class H_HelmetO_blk: H_HelmetO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetO_blk";
		displayName="Protector Helmet (Black)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetO_blk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_rus_CO.paa"
		};
	};
	class H_HelmetO_sand: H_HelmetO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetO_sand";
		displayName="Protector Helmet (Sand)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_sand_CO.paa"
		};
	};
	class H_HelmetO_bhex_F: H_HelmetO_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetO_bhex_F";
		displayName="Protector Helmet (Brown Hex)";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_alt_CO.paa"
		};
	};
	class H_HelmetCrew_B;
	class H_HelmetCrew_B_blk_F: H_HelmetCrew_B
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetCrew_B_blk_F";
		displayName="Crew Helmet (Black) [NATO]";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetCrewB_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\Indep\Data\armor1_blk.paa"
		};
	};
	class H_HelmetCrew_B_oli_F: H_HelmetCrew_B
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetCrew_B_oli_F";
		displayName="Crew Helmet (Olive) [NATO]";
		picture="\A3\Characters_F\Data\UI\icon_H_HelmetCrewB_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\Indep\Data\armor1_oli_CO.paa"
		};
	};
	class H_HelmetCrew_O: H_HelmetCrew_B
	{
		displayName="Crew Helmet (Hex) [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\helmet_crew_ocamo_CO.paa"
		};
	};
	class H_HelmetIA: H_HelmetB
	{
		class ItemInfo;
	};
	class H_HelmetIA_Green: H_HelmetIA
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetIA_Green";
		displayName="Modular Helmet (Green)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetIA_Green_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_helmet_canvas_Green_CO.paa"
		};
	};
	class H_HelmetIA_net: H_HelmetIA
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetIA_net";
		scope=2;
		displayName="Modular Helmet Mk.6";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetIA_net_CA.paa";
		model="\A3\Characters_F_Aegis\Headgear\headgear_helmet_net.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_helmet_net_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\A3\Characters_F_Aegis\Headgear\headgear_helmet_net.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetIA_net_mtp: H_HelmetIA_net
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetIA_net_mtp";
		displayName="Modular Helmet Mk.6 (UK MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetIA_net_mtp_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_helmet_net_mtp_CO.paa"
		};
	};
	class H_HelmetIA_camo: H_HelmetIA
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetIA_camo";
		scope=2;
		displayName="Modular Helmet Mk.7";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetIA_camo_CA.paa";
		model="\A3\Characters_F_Aegis\Headgear\headgear_helmet_camo.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_helmet_camo_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\A3\Characters_F_Aegis\Headgear\headgear_helmet_camo.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetIA_camo_mtp: H_HelmetIA_camo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetIA_camo_mtp";
		displayName="Modular Helmet Mk.7 (UK MTP)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetIA_camo_mtp_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_helmet_camo_mtp_CO.paa"
		};
	};
	class HelmetBase;
	class H_MilCap_ocamo: HelmetBase
	{
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_ocamo_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\cappatrol_ocamo_CO.paa"
		};
	};
	class H_MilCap_mcamo: H_MilCap_ocamo
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\cappatrol_multicam.rvmat"
		};
	};
	class H_MilCap_oucamo: H_MilCap_ocamo
	{
		scope=2;
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_oucamo_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\cappatrol_oucamo_CO.paa"
		};
	};
	class H_MilCap_rucamo: H_MilCap_oucamo
	{
		scope=2;
	};
	class H_MilCap_tan: H_MilCap_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_tan";
		displayName="$STR_A3_H_MilCap_tan0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_tan_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\cappatrol_tan_CO.paa"
		};
	};
	class H_MilCap_blk: H_MilCap_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_blk";
		displayName="$STR_A3_H_MilCap_blk0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_blk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPB\Common\Data\cappatrol_blk_CO.paa"
		};
	};
	class H_MilCap_chck1: H_MilCap_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_chck1";
		displayName="$STR_A3_H_MilCap_chck11";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_chck1_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\cappatrol_check1_CO.paa"
		};
	};
	class H_MilCap_chck2: H_MilCap_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_chck2";
		displayName="$STR_A3_H_MilCap_chck21";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_chck2_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\cappatrol_check2_CO.paa"
		};
	};
	class H_MilCap_chck3: H_MilCap_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_chck3";
		displayName="$STR_A3_H_MilCap_chck31";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_chck3_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\cappatrol_check3_CO.paa"
		};
	};
	class H_MilCap_tna_F: H_MilCap_ocamo
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\cappatrol_multicam.rvmat"
		};
	};
	class H_MilCap_bhex_F: H_MilCap_ocamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_bhex_F";
		displayName="Military Cap (Brown Hex)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\cappatrol_ocamo_CO.paa"
		};
	};
	class H_Booniehat_khk;
	class H_Booniehat_mcamo: H_Booniehat_khk
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\booniehat_mcamo.rvmat"
		};
	};
	class H_Booniehat_ocamo: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_ocamo";
		displayName="$STR_A3_H_Booniehat_ocamo0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_ocamo_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\booniehat_ocamo_CO.paa"
		};
	};
	class H_Booniehat_dirty: H_Booniehat_khk
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\booniehat_desert_CO.paa"
		};
	};
	class H_Booniehat_desert: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_desert";
		displayName="Booniehat (Desert)";
		picture="\A3\Characters_F\Data\UI\icon_H_Booniehat_desert_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\booniehat_desert_CO.paa"
		};
	};
	class H_Booniehat_tna_F: H_Booniehat_khk
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\booniehat_mcamo.rvmat"
		};
	};
	class H_Booniehat_ghex_F: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_ghex_F";
		displayName="Booniehat (Green Hex)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_ghex_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Booniehat_ghex_F_CO.paa"
		};
	};
	class H_Booniehat_bhex_F: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_bhex_F";
		displayName="Booniehat (Brown Hex)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_bhex_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Booniehat_bhex_F_CO.paa"
		};
	};
	class H_Booniehat_CTRG: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_CTRG";
		displayName="Booniehat [CTRG]";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_CTRG_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\booniehat_mtp_CO.paa"
		};
	};
	class H_Booniehat_CTRG_F: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_CTRG_F";
		displayName="Booniehat (Tropic) [CTRG]";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_CTRG_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Booniehat_CTRG_F_CO.paa"
		};
	};
	class H_Beret_blk;
	class H_Beret_blk_POLICE: H_Beret_blk
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_beret01_police_CO.paa"
		};
	};
	class H_Beret_red: H_Beret_blk
	{
		scope=2;
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_red_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_beret01_red_CO.paa"
		};
	};
	class H_Beret_grn: H_Beret_blk
	{
		scope=2;
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_grn_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_beret01_grn_CO.paa"
		};
	};
	class H_Beret_brn_SF: H_Beret_blk
	{
		scope=2;
		displayName="$STR_A3_H_Beret_brn_SF1";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_brn_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_beret01_brn_CO.paa"
		};
	};
	class H_Beret_ocamo: H_Beret_blk
	{
		scope=2;
	};
	class H_Beret_gry: H_Beret_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Beret_gry";
		displayName="Beret (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_H_Beret_blk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_beret01_gry_CO.paa"
		};
	};
	class H_Beret_02;
	class H_Beret_general: H_Beret_02
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Beret_general";
		displayName="$STR_A3_H_Beret_general0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_general_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_beret02_general_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\headgear_beret02_general.rvmat"
		};
	};
	class H_Beret_gen_F: H_Beret_02
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Beret_gen_F.rvmat"
		};
	};
	class H_Cap_red;
	class H_Cap_brn_SERO: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_brn_SERO";
		displayName="$STR_A3_H_Cap_brn_SERO0";
		picture="\A3\Characters_F\Data\UI\icon_H_Cap_brn_SERO_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\capb_SERO_CO.paa"
		};
	};
	class H_Cap_headphones: H_Cap_red
	{
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_Cap_headphones_gry: H_Cap_headphones
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_headphones_gry";
		displayName="Rangemaster Cap (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_H_Cap_headphones_khk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_headphones_gry_CO.paa"
		};
	};
	class H_Cap_headphones_tan: H_Cap_headphones
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_headphones_tan";
		displayName="Rangemaster Cap (Tan)";
		picture="\A3\Characters_F\Data\UI\icon_H_Cap_headphones_khk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_headphones_tan_CO.paa"
		};
	};
	class H_Cap_brn_SPECOPS: H_Cap_red
	{
		displayName="$STR_A3_H_Cap_brn_SPECOPS1";
	};
	class H_Cap_tan_specops_US: H_Cap_red
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_us_CO.paa"
		};
	};
	class H_Cap_mtp: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_mtp";
		displayName="$STR_A3_H_Cap_tan_specops_US1";
		picture="\A3\Characters_F\Data\UI\icon_H_Cap_tan_specops_US_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_mtp_CO.paa"
		};
	};
	class H_Cap_blk_Raven: H_Cap_red
	{
		displayName="$STR_A3_H_Cap_blk_Raven0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_raven_CO.paa"
		};
	};
	class H_Cap_usblack: H_Cap_red
	{
		displayName="$STR_A3_H_Cap_usblack1";
	};
	class H_Cap_khk: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_khk";
		displayName="Cap (Khaki)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_khk_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_khk_CO.paa"
		};
	};
	class H_Cap_dgtl: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_dgtl";
		displayName="$STR_A3_H_Cap_blk_Raven0_boot";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_blk_Raven_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\capb_raven_CO.paa"
		};
	};
	class H_Cap_tna_F: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_tna_F";
		displayName="Cap (Tropic)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_tna_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Cap_tna_F_CO.paa"
		};
	};
	class H_Cap_grpolice: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_grpolice";
		displayName="Cap (Police, Greek)";
		picture="\A3\Characters_F\Data\UI\icon_H_Cap_blu_police_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_police_CO.paa"
		};
	};
	class H_Cap_Lyfe: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_Lyfe";
		displayName="Cap (Lyfe)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_Lyfe_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_Lyfe_CO.paa"
		};
	};
	class H_Cap_MaldenTours: H_Cap_red
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Cap_MaldenTours";
		displayName="Cap (Malden Tours)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_MaldenTours_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_MaldenTours_CO.paa"
		};
	};
	class H_Bandanna_surfer;
	class H_Bandanna_mcamo: H_Bandanna_surfer
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\h_bandana_mcamo.rvmat"
		};
	};
	class H_Bandanna_tna_F: H_Bandanna_surfer
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Bandanna_tna_F";
		displayName="Bandana (Tropic)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Bandanna_tna_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Bandanna_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\h_bandana_mcamo.rvmat"
		};
	};
	class H_Watchcap_blk: HelmetBase
	{
		class ItemInfo;
	};
	class H_Watchcap_cbr: H_Watchcap_blk
	{
	};
	class H_Watchcap_khk: H_Watchcap_blk
	{
	};
	class H_Watchcap_camo: H_Watchcap_blk
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\woolhat_green_CO.paa"
		};
	};
	class H_Watchcap_sgg: H_Watchcap_blk
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\woolhat_blue_CO.paa"
		};
	};
	class H_Watchcap_oli: H_Watchcap_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Watchcap_oli";
		displayName="$STR_A3_H_Watchcap_oli0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_oli_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_green_CO.paa"
		};
	};
	class H_Watchcap_red: H_Watchcap_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Watchcap_red";
		displayName="$STR_A3_H_Watchcap_red0";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_red_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\woolhat_red_CO.paa"
		};
	};
	class H_Watchcap_blk_no_hs: H_Watchcap_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Watchcap_blk_no_hs";
		displayName="Beanie (No Headset)";
		model="\A3\Characters_F\Common\woolhat";
		DLC="Aegis";
		class ItemInfo: HeadgearItem
		{
			uniformModel="\A3\Characters_F\Common\woolhat";
		};
	};
	class H_HeadSet_light: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HeadSet_light";
		displayName="Tactical Headset";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
		model="\A3\Characters_F\Common\headset_light";
		DLC="Aegis";
		descriptionShort="$STR_A3_SP_NoArmor";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\headset_3_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			uniformModel="\A3\Characters_F\Common\headset_light";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,3};
		};
	};
	class H_Headphones: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Headphones";
		displayName="Headphones (Green)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headphones_CA.paa";
		model="\A3\Characters_F_Aegis\Headgear\headphones";
		DLC="Aegis";
		descriptionShort="$STR_A3_SP_NoArmor";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\capb_headphones_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			uniformModel="\A3\Characters_F_Aegis\Headgear\headphones";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,3};
		};
	};
	class H_Headphones_civil: H_Headphones
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Headphones_civil";
		displayName="Headphones (Yellow)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headphones_civil_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Kart\Civil\Data\capb_marshal_CO.paa"
		};
	};
	class H_Headphones_gry: H_Headphones
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Headphones_gry";
		displayName="Headphones (Grey)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headphones_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\capb_headphones_gry_CO.paa"
		};
	};
	class H_BucketHat_tan: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_BucketHat_tan";
		displayName="Bucket Hat (Tan)";
		picture="\A3\Characters_F\Data\UI\icon_H_Booniehat_CA.paa";
		model="\A3\Characters_F\Civil\headgear_booniehat01";
		DLC="Aegis";
		descriptionShort="$STR_A3_SP_NoArmor";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\data\c_cap2_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=8;
			uniformModel="\A3\Characters_F\Civil\headgear_booniehat01";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,3};
		};
	};
	class H_BandCap_oli: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_BandCap_oli";
		displayName="Bandana (Cap, Olive)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_BandCap_oli_CA.paa";
		model="\A3\Characters_F\Civil\headgear_c_capbandana01";
		DLC="Aegis";
		descriptionShort="$STR_A3_SP_NoArmor";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\data\c_cap1_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=8;
			uniformModel="\A3\Characters_F\Civil\headgear_C_CapBandana01";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,3};
		};
	};
	class H_TurbanO_blk: HelmetBase
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_TurbanO_blk1";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_TurbanO_blk_CA.paa";
		model="\A3\Characters_F_Aegis\Headgear\headgear_turban.p3d";
		descriptionShort="$STR_A3_SP_NoArmor";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\turban_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\A3\Characters_F_Aegis\Headgear\headgear_turban.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class H_HelmetB_TI_Plain_tna_F: H_HelmetB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_TI_Plain_tna_F";
		displayName="CTRG Stealth Helmet";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_TI_Plain_tna_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_TI_Plain_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_TI_Plain_tna_F.rvmat"
		};
	};
	class H_HelmetB_TI_Plain_alt_F: H_HelmetB_TI_Plain_tna_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_TI_Plain_alt_F";
		displayName="CTRG Combat Helmet";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_TI_Plain_alt_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_TI_Plain_alt_F_CO.paa"
		};
	};
	class H_HelmetB_TI_Enh_tna_F: H_HelmetSpecB
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_TI_Enh_tna_F";
		displayName="CTRG Enhanced Stealth Helmet";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_TI_Enh_tna_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_TI_Plain_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_TI_Plain_tna_F.rvmat"
		};
	};
	class H_HelmetB_TI_Enh_alt_F: H_HelmetB_TI_Enh_tna_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetB_TI_Enh_alt_F";
		displayName="CTRG Enhanced Combat Helmet";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_TI_Enh_alt_F_CA.paa";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_HelmetB_TI_Plain_alt_F_CO.paa"
		};
	};
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_PilotHelmetHeli_I: H_PilotHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_PilotHelmetHeli_B_visor_up: H_PilotHelmetHeli_B
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PilotHelmetHeli_B_visor_up";
		displayName="Heli Pilot Helmet (Visor-up) [NATO]";
		model="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
	class H_PilotHelmetHeli_O_visor_up: H_PilotHelmetHeli_O
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PilotHelmetHeli_O_visor_up";
		displayName="Heli Pilot Helmet (Visor-up) [CSAT]";
		model="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
	class H_PilotHelmetHeli_I_visor_up: H_PilotHelmetHeli_I
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PilotHelmetHeli_I_visor_up";
		displayName="Heli Pilot Helmet (Visor-up) [AAF]";
		model="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
	class H_DeckCrew_base_F: H_HelmetB
	{
		scope=0;
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="$STR_A3_SP_AL_III";
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			mass=40;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class H_DeckCrew_yellow_F: H_DeckCrew_base_F
	{
		scope=2;
		author="$STR_A3_Night515";
		displayName="Deck Crew Helmet (Yellow)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_DeckCrew_yellow_CO.paa"
		};
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_DeckCrew_yellow_CA.paa";
	};
	class H_DeckCrew_blue_F: H_DeckCrew_base_F
	{
		scope=2;
		author="$STR_A3_Night515";
		displayName="Deck Crew Helmet (Blue)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_DeckCrew_blue_CO.paa"
		};
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_DeckCrew_blue_CA.paa";
	};
	class H_DeckCrew_green_F: H_DeckCrew_base_F
	{
		scope=2;
		author="$STR_A3_Night515";
		displayName="Deck Crew Helmet (Green)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_DeckCrew_green_CO.paa"
		};
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_DeckCrew_green_CA.paa";
	};
	class H_DeckCrew_red_F: H_DeckCrew_base_F
	{
		scope=2;
		author="$STR_A3_Night515";
		displayName="Deck Crew Helmet (Red)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_DeckCrew_red_CO.paa"
		};
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_DeckCrew_red_CA.paa";
	};
	class H_DeckCrew_white_F: H_DeckCrew_base_F
	{
		scope=2;
		author="$STR_A3_Night515";
		displayName="Deck Crew Helmet (White)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_DeckCrew_white_CO.paa"
		};
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_DeckCrew_white_CA.paa";
	};
	class H_DeckCrew_brown_F: H_DeckCrew_base_F
	{
		scope=2;
		author="$STR_A3_Night515";
		displayName="Deck Crew Helmet (Brown)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_DeckCrew_brown_CO.paa"
		};
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_DeckCrew_brown_CA.paa";
	};
	class H_DeckCrew_violet_F: H_DeckCrew_base_F
	{
		scope=2;
		author="$STR_A3_Night515";
		displayName="Deck Crew Helmet (Violet)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_DeckCrew_violet_CO.paa"
		};
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_DeckCrew_violet_CA.paa";
	};
	class H_HeadSet_base_F;
	class H_HeadSet_sand_F: H_HeadSet_base_F
	{
		author="$STR_A3_POLPOX";
		_generalMacro="H_HeadSet_sand_F";
		scope=2;
		displayName="Headset (Sand)";
		picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadSet_yellow_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Construction_Sand_CO.paa"
		};
		DLC="Aegis";
	};
	class H_HeadSet_olive_F: H_HeadSet_base_F
	{
		author="$STR_A3_POLPOX";
		_generalMacro="H_HeadSet_olive_F";
		scope=2;
		displayName="Headset (Olive)";
		picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadSet_yellow_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Construction_Olive_CO.paa"
		};
		DLC="Aegis";
	};
	class H_EarProtectors_base_F;
	class H_EarProtectors_sand_F: H_EarProtectors_base_F
	{
		author="$STR_A3_POLPOX";
		_generalMacro="H_EarProtectors_sand_F";
		scope=2;
		displayName="Ear Protectors (Sand)";
		picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_EarProtectors_yellow_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Construction_Sand_CO.paa"
		};
		DLC="Aegis";
	};
	class H_EarProtectors_olive_F: H_EarProtectors_base_F
	{
		author="$STR_A3_POLPOX";
		_generalMacro="H_EarProtectors_olive_F";
		scope=2;
		displayName="Ear Protectors (Olive)";
		picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_EarProtectors_yellow_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_Construction_Olive_CO.paa"
		};
		DLC="Aegis";
	};
	class H_PASGT_basic_base_F;
	class H_PASGT_basic_sand_F: H_PASGT_basic_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PASGT_basic_sand_F";
		scope=2;
		displayName="Basic Helmet (Sand)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_basic_sand_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"
		};
		DLC="Aegis";
	};
	class H_PASGT_basic_UNO_F: H_PASGT_basic_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PASGT_basic_UNO_F";
		scope=2;
		displayName="Basic Helmet (UNO)";
		picture="\A3\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_basic_UNO_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Headgear\Data\H_PASGT_UNO_CO.paa"
		};
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Headgear_Base_F;
	class Headgear_H_HelmetB_TI_tna_F: Headgear_Base_F
	{
		displayName="Stealth Combat Helmet (Tropic)";
	};
	class Headgear_H_HelmetB_TI_alt_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Stealth Combat Helmet (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_TI_alt_F
			{
				name="H_HelmetB_TI_alt_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_GL_mtp_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Special Combat Helmet (MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_GL_mtp_F
			{
				name="H_HelmetB_GL_mtp_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_GL_tna_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Special Combat Helmet (Tropic)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_GL_tna_F
			{
				name="H_HelmetB_GL_tna_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_GL_ukmtp_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Special Combat Helmet (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_GL_ukmtp_F
			{
				name="H_HelmetB_GL_ukmtp_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_khaki: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Helmet (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_khaki
			{
				name="H_HelmetB_khaki";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_green: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Helmet (Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_green
			{
				name="H_HelmetB_green";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_olive: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Helmet (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_olive
			{
				name="H_HelmetB_olive";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_mtp: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Helmet (MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_mtp
			{
				name="H_HelmetB_mtp";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_ukmtp_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Helmet (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_ukmtp_F
			{
				name="H_HelmetB_ukmtp_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_khk: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Enhanced Combat Helmet (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetSpecB_khk
			{
				name="H_HelmetSpecB_khk";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_grn: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Enhanced Combat Helmet (Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetSpecB_grn
			{
				name="H_HelmetSpecB_grn";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_oli: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Enhanced Combat Helmet (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetSpecB_oli
			{
				name="H_HelmetSpecB_oli";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetSpecB_mtp: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Enhanced Combat Helmet (MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetSpecB_mtp
			{
				name="H_HelmetSpecB_mtp";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_Enh_ukmtp_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Enhanced Combat Helmet (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_Enh_ukmtp_F
			{
				name="H_HelmetB_Enh_ukmtp_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_light_khaki: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Light Combat Helmet (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_light_khaki
			{
				name="H_HelmetB_light_khaki";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_light_green: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Light Combat Helmet (Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_light_green
			{
				name="H_HelmetB_light_green";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_light_olive: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Light Combat Helmet (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_light_olive
			{
				name="H_HelmetB_light_olive";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_light_mtp: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Light Combat Helmet (MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_light_mtp
			{
				name="H_HelmetB_light_mtp";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_Light_ukmtp_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Light Combat Helmet (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_Light_ukmtp_F
			{
				name="H_HelmetB_Light_ukmtp_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_Camo_tna_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Helmet (Tropic, Camo)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_Camo_tna_F
			{
				name="H_HelmetB_Camo_tna_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetSpecO_oucamo: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Assassin Helmet (Urban)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetSpecO_oucamo
			{
				name="H_HelmetSpecO_oucamo";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetSpecO_sand: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Assassin Helmet (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetSpecO_sand
			{
				name="H_HelmetSpecO_sand";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetSpecO_bhex_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Assassin Helmet (Brown Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetSpecO_bhex_F
			{
				name="H_HelmetSpecO_bhex_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetLeaderO_blk: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Defender Helmet (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetLeaderO_blk
			{
				name="H_HelmetLeaderO_blk";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetLeaderO_sand: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Defender Helmet (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetLeaderO_sand
			{
				name="H_HelmetLeaderO_sand";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetLeaderO_bhex_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Defender Helmet (Brown Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetLeaderO_bhex_F
			{
				name="H_HelmetLeaderO_bhex_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetO_blk: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Protector Helmet (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetO_blk
			{
				name="H_HelmetO_blk";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetO_sand: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Protector Helmet (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetO_sand
			{
				name="H_HelmetO_sand";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetO_bhex_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Protector Helmet (Brown Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetO_bhex_F
			{
				name="H_HelmetO_bhex_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetCrew_B_blk_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crew Helmet (Black) [NATO]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetCrew_B_blk_F
			{
				name="H_HelmetCrew_B_blk_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetCrew_B_oli_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crew Helmet (Olive) [NATO]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetCrew_B_oli_F
			{
				name="H_HelmetCrew_B_oli_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetCrew_O: Headgear_Base_F
	{
		displayName="Crew Helmet (Hex) [CSAT]";
	};
	class Headgear_H_HelmetIA_Green: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetIA_Green
			{
				name="H_HelmetIA_Green";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetIA_net: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet Mk.6";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetIA_net
			{
				name="H_HelmetIA_net";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetIA_camo: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet Mk.7";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetIA_camo
			{
				name="H_HelmetIA_camo";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_oucamo: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_MilCap_oucamo0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_oucamo
			{
				name="H_MilCap_oucamo";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_tan: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Military Cap (Tan)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_tan
			{
				name="H_MilCap_tan";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_blk: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Military Cap (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_blk
			{
				name="H_MilCap_blk";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_chck1: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_MilCap_chck11";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_chck1
			{
				name="H_MilCap_chck1";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_chck2: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_MilCap_chck21";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_chck2
			{
				name="H_MilCap_chck2";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_chck3: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_MilCap_chck31";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_chck3
			{
				name="H_MilCap_chck3";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_bhex_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Military Cap (Brown Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_bhex_F
			{
				name="H_MilCap_bhex_F";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_ocamo: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat (Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_ocamo
			{
				name="H_Booniehat_ocamo";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_dirty: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Booniehat_dirty0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_dirty
			{
				name="H_Booniehat_dirty";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_desert: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat (Desert)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_desert
			{
				name="H_Booniehat_desert";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_ghex_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat (Green Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_ghex_F
			{
				name="H_Booniehat_ghex_F";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_bhex_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat (Brown Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_bhex_F
			{
				name="H_Booniehat_bhex_F";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_dazzle: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat [CTRG]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_dazzle
			{
				name="H_Booniehat_dazzle";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_CTRG_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat (Tropic) [CTRG]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_CTRG_F
			{
				name="H_Booniehat_CTRG_F";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_blk_POLICE: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Beret_blk_POLICE0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_blk_POLICE
			{
				name="H_Beret_blk_POLICE";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_red: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Beret_red0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_red
			{
				name="H_Beret_red";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_grn: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Beret_grn0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_grn
			{
				name="H_Beret_grn";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_brn_SF: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Beret_brn_SF1";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_brn_SF
			{
				name="H_Beret_brn_SF";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_ocamo: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Beret_ocamo0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_ocamo
			{
				name="H_Beret_ocamo";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_gry: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Beret (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_gry
			{
				name="H_Beret_gry";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_general: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Beret_general0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_general
			{
				name="H_Beret_general";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_brn_SERO: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Cap_brn_SERO0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_brn_SERO
			{
				name="H_Cap_brn_SERO";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_headphones_gry: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rangemaster Cap (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_headphones_gry
			{
				name="H_Cap_headphones_gry";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_headphones_tan: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rangemaster Cap (Tan)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_headphones_tan
			{
				name="H_Cap_headphones_tan";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_brn_SPECOPS: Headgear_Base_F
	{
		displayName="$STR_A3_H_Cap_brn_SPECOPS1";
	};
	class Headgear_H_Cap_mtp: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Cap_tan_specops_US1";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_mtp
			{
				name="H_Cap_mtp";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_blk_Raven: Headgear_Base_F
	{
		displayName="$STR_A3_H_Cap_blk_Raven0";
	};
	class Headgear_H_Cap_usblack: Headgear_Base_F
	{
		displayName="$STR_A3_H_Cap_usblack1";
	};
	class Headgear_H_Cap_khk: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Cap (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_khk
			{
				name="H_Cap_khk";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_dgtl: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Cap_blk_Raven0_boot";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_dgtl
			{
				name="H_Cap_dgtl";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_tna_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Cap (Tropic)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_tna_F
			{
				name="H_Cap_tna_F";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_grpolice: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Cap (Police, Greek)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_grpolice
			{
				name="H_Cap_grpolice";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_lyfe: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Cap (Lyfe)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_lyfe
			{
				name="H_Cap_lyfe";
				count=1;
			};
		};
	};
	class Headgear_H_Cap_MaldenTours: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Cap (Malden Tours)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Cap_MaldenTours
			{
				name="H_Cap_MaldenTours";
				count=1;
			};
		};
	};
	class Headgear_H_Bandanna_tna_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bandana (Tropic)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Bandanna_tna_F
			{
				name="H_Bandanna_tna_F";
				count=1;
			};
		};
	};
	class Headgear_H_Watchcap_sgg: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Watchcap_sgg0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Watchcap_sgg
			{
				name="H_Watchcap_sgg";
				count=1;
			};
		};
	};
	class Headgear_H_Watchcap_oli: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Watchcap_oli0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Watchcap_oli
			{
				name="H_Watchcap_oli";
				count=1;
			};
		};
	};
	class Headgear_H_Watchcap_red: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_Watchcap_red0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Watchcap_red
			{
				name="H_Watchcap_red";
				count=1;
			};
		};
	};
	class Headgear_H_Watchcap_blk_no_hs: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Beanie (No Headset)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Watchcap_blk_no_hs
			{
				name="H_Watchcap_blk_no_hs";
				count=1;
			};
		};
	};
	class Headgear_H_HeadSet_light: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Tactical Headset";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HeadSet_light
			{
				name="H_HeadSet_light";
				count=1;
			};
		};
	};
	class Headgear_H_Headphones: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Headphones (Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Headphones
			{
				name="H_Headphones";
				count=1;
			};
		};
	};
	class Headgear_H_Headphones_civil: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Headphones (Yellow)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Headphones_civil
			{
				name="H_Headphones_civil";
				count=1;
			};
		};
	};
	class Headgear_H_Headphones_gry: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Headphones (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Headphones_gry
			{
				name="H_Headphones_gry";
				count=1;
			};
		};
	};
	class Headgear_H_BucketHat_tan: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bucket Hat (Tan)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_BucketHat_tan
			{
				name="H_BucketHat_tan";
				count=1;
			};
		};
	};
	class Headgear_H_TurbanO_blk: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_H_TurbanO_blk1";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_TurbanO_blk
			{
				name="H_TurbanO_blk";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_TI_Plain_tna_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CTRG Stealth Helmet";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_TI_Plain_tna_F
			{
				name="H_HelmetB_TI_Plain_tna_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_TI_Plain_alt_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CTRG Combat Helmet";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_TI_Plain_alt_F
			{
				name="H_HelmetB_TI_Plain_alt_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_TI_Enh_tna_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CTRG Enhanced Stealth Helmet";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_TI_Enh_tna_F
			{
				name="H_HelmetB_TI_Enh_tna_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_TI_Enh_alt_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CTRG Enhanced Combat Helmet";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetB_TI_Enh_alt_F
			{
				name="H_HelmetB_TI_Enh_alt_F";
				count=1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_B_visor_up: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Heli Pilot Helmet (Visor-up) [NATO]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_PilotHelmetHeli_B_visor_up
			{
				name="H_PilotHelmetHeli_B_visor_up";
				count=1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_O_visor_up: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Heli Pilot Helmet (Visor-up) [CSAT]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_PilotHelmetHeli_O_visor_up
			{
				name="H_PilotHelmetHeli_O_visor_up";
				count=1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_I_visor_up: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Heli Pilot Helmet (Visor-up) [AAF]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_PilotHelmetHeli_I_visor_up
			{
				name="H_PilotHelmetHeli_I_visor_up";
				count=1;
			};
		};
	};
	class Headgear_H_DeckCrew_yellow_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Deck Crew Helmet (Yellow)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_DeckCrew_yellow_F
			{
				name="H_DeckCrew_yellow_F";
				count=1;
			};
		};
	};
	class Headgear_H_DeckCrew_blue_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Deck Crew Helmet (Blue)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_DeckCrew_blue_F
			{
				name="H_DeckCrew_blue_F";
				count=1;
			};
		};
	};
	class Headgear_H_DeckCrew_green_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Deck Crew Helmet (Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_DeckCrew_green_F
			{
				name="H_DeckCrew_green_F";
				count=1;
			};
		};
	};
	class Headgear_H_DeckCrew_red_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Deck Crew Helmet (Red)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_DeckCrew_red_F
			{
				name="H_DeckCrew_red_F";
				count=1;
			};
		};
	};
	class Headgear_H_DeckCrew_white_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Deck Crew Helmet (White)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_DeckCrew_white_F
			{
				name="H_DeckCrew_white_F";
				count=1;
			};
		};
	};
	class Headgear_H_DeckCrew_brown_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Deck Crew Helmet (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_DeckCrew_brown_F
			{
				name="H_DeckCrew_brown_F";
				count=1;
			};
		};
	};
	class Headgear_H_DeckCrew_violet_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Deck Crew Helmet (Violet)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_DeckCrew_violet_F
			{
				name="H_DeckCrew_violet_F";
				count=1;
			};
		};
	};
	class Headgear_H_HeadSet_sand_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Headset (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HeadSet_sand_F
			{
				name="H_HeadSet_sand_F";
				count=1;
			};
		};
	};
	class Headgear_H_HeadSet_olive_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Headset (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HeadSet_olive_F
			{
				name="H_HeadSet_olive_F";
				count=1;
			};
		};
	};
	class Headgear_H_EarProtectors_sand_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ear Protectors (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_EarProtectors_sand_F
			{
				name="H_EarProtectors_sand_F";
				count=1;
			};
		};
	};
	class Headgear_H_EarProtectors_olive_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ear Protectors (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_EarProtectors_olive_F
			{
				name="H_EarProtectors_olive_F";
				count=1;
			};
		};
	};
	class Headgear_H_PASGT_basic_sand_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Basic Helmet (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_PASGT_basic_sand_F
			{
				name="H_PASGT_basic_sand_F";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528894336";
};
