class CfgPatches
{
	class A3_Characters_F_Aegis_Vests
	{
		addonRootClass="A3_Characters_F_Aegis";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Exp_Vests"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class VestItem;
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_Chestrig_khk;
	class V_Chestrig_rgr: V_Chestrig_khk
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_chestrig_rgr_CO.paa",
			"\A3\Characters_F\BLUFOR\Data\armor1_CO.paa"
		};
	};
	class V_Chestrig_cbr: V_Chestrig_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Chestrig_cbr";
		scope=2;
		displayName="Chest Rig (Coyote)";
		picture="\A3\Characters_F\Data\UI\icon_V_Chestrig_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\equip_chestrig_khk_CO.paa",
			"\A3\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Chestrig_brn: V_Chestrig_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Chestrig_brn";
		displayName="Chest Rig (Brown)";
		picture="\A3\Characters_F\Data\UI\icon_V_Chestrig_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_chestrig_cbr_CO.paa",
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Chestrig_sgg: V_Chestrig_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Chestrig_sgg";
		displayName="$STR_A3_V_Chestrig_sgg0";
		picture="\A3\Characters_F\Data\UI\icon_V_Chestrig_rgr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\equip_chestrig_rgr_CO.paa",
			"\A3\Characters_F\BLUFOR\Data\vests_rgr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Chestrig_ghex_F: V_Chestrig_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Chestrig_ghex_F";
		displayName="$STR_A3_V_Chestrig_ghex_F0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_Chestrig_ghex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_Chestrig_ghex_F_CO.paa",
			"\A3\Characters_F_Aegis\Vests\Data\V_BandollierB_ghex_F_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrier1_cbr: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_cbr";
		displayName="$STR_A3_V_PlateCarrier1_cbr0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_brn: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_brn";
		displayName="Carrier Lite (Brown)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_khk: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_khk";
		displayName="Carrier Lite (Khaki)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_oli: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_oli";
		displayName="Carrier Lite (Olive)";
		picture="\A3\Characters_F\Data\UI\icon_V_Plate_Carrier_1_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_gry: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_gry";
		displayName="Carrier Lite (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_V_PlateCarrier1_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_mtp: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_mtp";
		displayName="$STR_A3_V_PlateCarrier1_mtp0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_mtp_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_mtp_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_mtp.rvmat"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_sgg: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_sgg";
		displayName="Carrier Lite (Sage)";
		picture="\A3\Characters_F\Data\UI\icon_V_Plate_Carrier_1_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_rgr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_sand: V_PlateCarrier1_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_sand";
		displayName="Carrier Lite (Sand)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_sand_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier1_blk;
	class V_PlateCarrier1_tna_F: V_PlateCarrier1_blk
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_mtp.rvmat"
		};
	};
	class V_PlateCarrier1_ukmtp_F: V_PlateCarrier1_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier1_ukmtp_F";
		displayName="Carrier Lite (UK MTP)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_ukmtp_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_ukmtp_F_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
	};
	class V_PlateCarrier2_cbr: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_cbr";
		displayName="$STR_A3_V_PlateCarrier2_cbr0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_brn: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_brn";
		displayName="Carrier Rig (Brown)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_khk: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_khk";
		displayName="Carrier Rig (Khaki)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_oli: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_oli";
		displayName="Carrier Rig (Olive)";
		picture="\A3\Characters_F\Data\UI\icon_V_Plate_Carrier_2_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_gry: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_gry";
		displayName="Carrier Rig (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_V_Plate_Carrier_2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_mtp: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_mtp";
		displayName="$STR_A3_V_PlateCarrier2_mtp0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_mtp_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_mtp_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_mtp.rvmat"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_sgg: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_sgg";
		displayName="Carrier Rig (Sage)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_rgr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_sand: V_PlateCarrier2_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_sand";
		displayName="Carrier Rig (Sand)";
		picture="\A3\Characters_F\Data\UI\icon_V_Plate_Carrier_2_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_sand_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier2_blk;
	class V_PlateCarrier2_tna_F: V_PlateCarrier2_blk
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_mtp.rvmat"
		};
	};
	class V_PlateCarrier2_ukmtp_F: V_PlateCarrier2_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrier2_ukmtp_F";
		displayName="Carrier Rig (UK MTP)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_ukmtp_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_ukmtp_F_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrier3_rgr: Vest_NoCamo_Base
	{
		scope=2;
		displayName="Carrier Crew Rig (Green)";
		model="\A3\Weapons_F\Ammoboxes\Bags\backpack_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_F\Ammoboxes\Bags\backpack_vest.p3d";
		};
	};
	class V_PlateCarrierSpec_rgr;
	class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\carrier_gl_rig_blk_CO.paa"
		};
	};
	class V_PlateCarrierSpec_cbr: V_PlateCarrierSpec_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierSpec_cbr";
		displayName="$STR_A3_V_PlateCarrierSpec_cbr0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierSpec_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\carrier_gl_rig_cbr_CO.paa"
		};
	};
	class V_PlateCarrierSpec_khk: V_PlateCarrierSpec_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierSpec_khk";
		displayName="Carrier Special Rig (Khaki)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierSpec_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\carrier_gl_rig_khk_CO.paa"
		};
	};
	class V_PlateCarrierSpec_mtp: V_PlateCarrierSpec_rgr
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_b_carrier_gl_rig_mtp.rvmat"
		};
	};
	class V_PlateCarrierSpec_rgr_noflag_F: V_PlateCarrierSpec_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierSpec_rgr_noflag_F";
		displayName="Carrier Special Rig (Green, No Flag)";
		picture="\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrierGL_rgr_noflag_F_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierSpec_tna_F: V_PlateCarrierSpec_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrierGL_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_b_carrier_gl_rig_mtp.rvmat"
		};
	};
	class V_PlateCarrierSpec_ukmtp_F: V_PlateCarrierSpec_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierSpec_ukmtp_F";
		displayName="Carrier Special Rig (UK MTP)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierSpec_ukmtp_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrierGL_ukmtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_b_carrier_gl_rig_mtp.rvmat"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierGL_rgr;
	class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\carrier_gl_rig_blk_CO.paa"
		};
	};
	class V_PlateCarrierGL_cbr: V_PlateCarrierGL_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierGL_cbr";
		displayName="$STR_A3_V_PlateCarrierGL_cbr0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierGL_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\carrier_gl_rig_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierGL_khk: V_PlateCarrierGL_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierGL_khk";
		displayName="Carrier GL Rig (Khaki)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierGL_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\carrier_gl_rig_khk_CO.paa"
		};
	};
	class V_PlateCarrierGL_mtp: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_b_carrier_gl_rig_mtp.rvmat"
		};
	};
	class V_PlateCarrierGL_rgr_noflag_F: V_PlateCarrierGL_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierGL_rgr_noflag_F";
		displayName="Carrier GL Rig (Green, No Flag)";
		picture="\A3\Characters_F_Mark\Data\UI\icon_carrier_gl_rig_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrierGL_rgr_noflag_F_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierGL_tna_F: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrierGL_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_b_carrier_gl_rig_mtp.rvmat"
		};
	};
	class V_PlateCarrierGL_ukmtp_F: V_PlateCarrierGL_rgr
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierGL_ukmtp_F";
		displayName="Carrier GL Rig (UK MTP)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierGL_ukmtp_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrierGL_ukmtp_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_b_carrier_gl_rig_mtp.rvmat"
		};
		DLC="Aegis";
	};
	class V_HarnessO_brn: Vest_Camo_Base
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class V_HarnessO_gry: V_HarnessO_brn
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_oucamo_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_oucamo_CO.paa"
		};
	};
	class V_HarnessO_blk: V_HarnessO_gry
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessO_blk";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessO_blk_CA.paa";
		displayName="LBV Harness (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_rus_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_rus_CO.paa"
		};
		DLC="Aegis";
	};
	class V_HarnessO_khk: V_HarnessO_gry
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessO_khk";
		picture="\A3\Characters_F\Data\UI\icon_V_HarnessO_brn_CA.paa";
		displayName="LBV Harness (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
			"\A3\Characters_F\OPFOR\Data\tech_CO.paa"
		};
		DLC="Aegis";
	};
	class V_HarnessO_sand: V_HarnessO_gry
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessO_sand";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessO_sand_CA.paa";
		displayName="LBV Harness (Sand)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_sand_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_sand_CO.paa"
		};
		DLC="Aegis";
	};
	class V_HarnessOGL_brn: V_HarnessO_brn
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class V_HarnessOGL_gry: V_HarnessOGL_brn
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_oucamo_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_oucamo_CO.paa"
		};
	};
	class V_HarnessOGL_blk: V_HarnessOGL_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOGL_blk";
		displayName="LBV Grenadier Harness (Black)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOGL_blk_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_rus_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_rus_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class V_HarnessOGL_khk: V_HarnessOGL_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOGL_khk";
		displayName="LBV Grenadier Harness (Khaki)";
		picture="\A3\Characters_F\Data\UI\icon_V_HarnessOGL_brn_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
			"\A3\Characters_F\OPFOR\Data\tech_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class V_HarnessOGL_sand: V_HarnessOGL_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOGL_sand";
		displayName="LBV Grenadier Harness (Sand)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOGL_sand_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_sand_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_sand_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class V_HarnessOSpec_brn: V_HarnessO_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOSpec_brn";
		scope=2;
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_brn_CA.paa";
		model="\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
		displayName="$STR_A3_V_HarnessOSpec_brn0";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		descriptionShort="$STR_A3_SP_AL_I";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
			containerClass="Supply140";
			mass=50;
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class V_HarnessOSpec_gry: V_HarnessOSpec_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOSpec_gry";
		scope=2;
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_gry_CA.paa";
		model="\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
		displayName="$STR_A3_V_HarnessOSpec_gry0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_oucamo_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_oucamo_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
			containerClass="Supply140";
			mass=50;
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class V_HarnessOSpec_blk: V_HarnessOSpec_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOSpec_blk";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_blk_CA.paa";
		displayName="ELBV Harness (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_rus_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_rus_CO.paa"
		};
		DLC="Aegis";
	};
	class V_HarnessOSpec_khk: V_HarnessOSpec_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOSpec_khk";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_khk_CA.paa";
		displayName="ELBV Harness (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_alt_CO.paa"
		};
		DLC="Aegis";
	};
	class V_HarnessOSpec_sand: V_HarnessOSpec_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOSpec_sand";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\V_HarnessOSpec_sand.paa";
		displayName="ELBV Harness (Sand)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_sand_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_sand_CO.paa"
		};
		DLC="Aegis";
	};
	class V_HarnessOSpec_ghex_F: V_HarnessOSpec_brn
	{
		author="$STR_A3_Night515";
		_generalMacro="V_HarnessOSpec_ghex_F";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_HarnessOSpec_ghex_F_CA.paa";
		displayName="ELBV Harness (Green Hex)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_tna_CO.paa",
			"\A3\Characters_F_Aegis\OPFOR\Data\tech_tna_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierIA1_dgtl: Vest_Camo_Base
	{
		displayName="$STR_A3_V_PlateCarrierIA1_dgtl1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_ia_vest01_CO.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrierIA1_khk: V_PlateCarrierIA1_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIA1_khk";
		displayName="GA Carrier Lite (Khaki)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA1_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_ia_vest01_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierIA1_oli: V_PlateCarrierIA1_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIA1_oli";
		displayName="$STR_A3_V_PlateCarrierIA1_oli0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA1_oli_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Mark\Indep\Data\equip_ia_vest01_oli_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
	{
		displayName="$STR_A3_V_PlateCarrierIA2_dgtl1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_ia_vest01_CO.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrierIA2_khk: V_PlateCarrierIA2_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIA2_khk";
		displayName="GA Carrier Rig (Khaki)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA2_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_ia_vest01_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierIA2_oli: V_PlateCarrierIA2_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIA2_oli";
		displayName="$STR_A3_V_PlateCarrierIA2_oli0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIA2_oli_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Mark\Indep\Data\equip_ia_vest01_oli_CO.paa"
		};
		DLC="Aegis";
	};
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl
	{
		displayName="$STR_A3_V_PlateCarrierIAGL_dgtl1";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_ia_vest01_CO.paa",
			"\A3\Characters_F_Aegis\Vests\Data\ga_carrier_gl_rig_digi_CO.paa"
		};
	};
	class V_PlateCarrierIAGL_khk: V_PlateCarrierIAGL_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIAGL_khk";
		displayName="GA Carrier GL Rig (Khaki)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierIAGL_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\equip_ia_vest01_khk_CO.paa",
			"\A3\Characters_F_Aegis\Vests\Data\ga_carrier_gl_rig_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_BandollierB_khk: Vest_Camo_Base
	{
		picture="\A3\Characters_F\Data\UI\icon_V_Bandollier_khk_CA.paa";
	};
	class V_BandollierB_cbr: V_BandollierB_khk
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"
		};
	};
	class V_BandollierB_rgr: V_BandollierB_khk
	{
		picture="\A3\Characters_F\Data\UI\icon_V_BandollierB_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
	};
	class V_BandollierB_brn: V_BandollierB_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_BandollierB_brn";
		displayName="Slash Bandolier (Brown)";
		picture="\A3\Characters_F\Data\UI\icon_V_Bandollier_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_BandollierB_grn: V_BandollierB_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_BandollierB_grn";
		displayName="Slash Bandolier";
		picture="\A3\Characters_F\Data\UI\icon_V_BandollierB_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"
		};
		DLC="Aegis";
	};
	class V_BandollierB_gry: V_BandollierB_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_BandollierB_gry";
		displayName="Slash Bandolier (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_V_Bandollier_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_BandollierB_sgg: V_BandollierB_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_BandollierB_sgg";
		displayName="Slash Bandolier (Sage)";
		picture="\A3\Characters_F\Data\UI\icon_V_BandollierB_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_rgr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_BandollierB_tna_F: V_BandollierB_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_BandollierB_tna_F";
		displayName="$STR_A3_V_BandollierB_tna_F0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_BandollierB_tna_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_mtp.rvmat"
		};
		DLC="Aegis";
	};
	class V_BandollierB_ghex_F: V_BandollierB_khk
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\V_BandollierB_ghex_F_CO.paa"
		};
	};
	class V_TacVest_khk: Vest_Camo_Base
	{
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_TacVest_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\tacticalvest_khaki_CO.paa"
		};
	};
	class V_TacVest_brn: V_TacVest_khk
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\tacticalvest_brown_CO.paa"
		};
	};
	class V_TacVestCamo_khk: Vest_Camo_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="Tactical Vest (Tan)";
		picture="\A3\Characters_F\Data\UI\icon_V_TacVest_khk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\tacticalvest_brown_CO.paa"
		};
	};
	class V_TacVest_grpolice: V_TacVest_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="V_TacVest_grpolice";
		displayName="Tactical Vest (Police, Greek)";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_TacVest_grpolice_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\tacticalvest_police_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_Rangemaster_belt_blk: V_Rangemaster_belt
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Rangemaster_belt_blk";
		displayName="Rangemaster Belt (Black)";
		picture="\A3\Characters_F\Data\UI\icon_V_Belt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Rangemaster_belt_brn: V_Rangemaster_belt
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Rangemaster_belt_brn";
		displayName="Rangemaster Belt (Brown)";
		picture="\A3\Characters_F\Data\UI\icon_V_Belt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Rangemaster_belt_cbr: V_Rangemaster_belt
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Rangemaster_belt_cbr";
		displayName="Rangemaster Belt (Coyote)";
		picture="\A3\Characters_F\Data\UI\icon_V_Belt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Rangemaster_belt_khk: V_Rangemaster_belt
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Rangemaster_belt_khk";
		displayName="Rangemaster Belt (Khaki)";
		picture="\A3\Characters_F\Data\UI\icon_V_Belt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class V_Rangemaster_belt_oli: V_Rangemaster_belt
	{
		author="$STR_A3_Night515";
		_generalMacro="V_Rangemaster_belt_oli";
		displayName="Rangemaster Belt (Olive)";
		picture="\A3\Characters_F\Data\UI\icon_V_Belt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\Indep\Data\vests_oli_CO.paa"
		};
		DLC="Aegis";
	};
	class V_RebreatherB;
	class V_RebreatherO_ghex_F: V_RebreatherB
	{
		author="$STR_A3_Night515";
		_generalMacro="V_RebreatherO_ghex_F";
		displayName="$STR_A3_CfgWeapons_V_RebreatherO_ghex_F0";
		picture="\A3\Characters_F_Aegis\Vests\Data\UI\icon_V_RebreatherO_ghex_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\diver_equip_CO.paa"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\diver_equip_CO.paa",
			"\A3\Characters_F\Common\Data\diver_equip_CO.paa",
			"\A3\Characters_F\Data\visors_CA.paa"
		};
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Vest_Base_F;
	class Vest_V_Chestrig_cbr: Vest_Base_F
	{
		scope=1;
		scopeCurator=0;
		displayName="Chest Rig (Coyote)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Chestrig_cbr
			{
				name="V_Chestrig_cbr";
				count=1;
			};
		};
	};
	class Vest_V_Chestrig_brn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Chest Rig (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Chestrig_brn
			{
				name="V_Chestrig_brn";
				count=1;
			};
		};
	};
	class Vest_V_Chestrig_sgg: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_Chestrig_sgg0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Chestrig_sgg
			{
				name="V_Chestrig_sgg";
				count=1;
			};
		};
	};
	class Vest_V_Chestrig_ghex_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_Chestrig_ghex_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Chestrig_ghex_F
			{
				name="V_Chestrig_ghex_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_cbr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrier1_cbr0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_cbr
			{
				name="V_PlateCarrier1_cbr";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_brn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Lite (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_brn
			{
				name="V_PlateCarrier1_brn";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Lite (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_khk
			{
				name="V_PlateCarrier1_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_oli: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Lite (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_oli
			{
				name="V_PlateCarrier1_oli";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_gry: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Lite (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_gry
			{
				name="V_PlateCarrier1_gry";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_mtp: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrier1_mtp0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_mtp
			{
				name="V_PlateCarrier1_mtp";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_sgg: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Lite (Sage)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_sgg
			{
				name="V_PlateCarrier1_sgg";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier1_ukmtp_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Lite (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier1_ukmtp_F
			{
				name="V_PlateCarrier1_ukmtp_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_cbr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrier2_cbr0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_cbr
			{
				name="V_PlateCarrier2_cbr";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_brn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Rig (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_brn
			{
				name="V_PlateCarrier2_brn";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Rig (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_khk
			{
				name="V_PlateCarrier2_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_oli: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Rig (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_oli
			{
				name="V_PlateCarrier2_oli";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_gry: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Rig (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_gry
			{
				name="V_PlateCarrier2_gry";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_mtp: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrier2_mtp0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_mtp
			{
				name="V_PlateCarrier2_mtp";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_sgg: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Rig (Sage)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_sgg
			{
				name="V_PlateCarrier2_sgg";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier2_ukmtp_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Rig (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier2_ukmtp_F
			{
				name="V_PlateCarrier2_ukmtp_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrier3_rgr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Crew Rig (Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrier3_rgr
			{
				name="V_PlateCarrier3_rgr";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierSpec_cbr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrierSpec_cbr0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierSpec_cbr
			{
				name="V_PlateCarrierSpec_cbr";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierSpec_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Special Rig (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierSpec_khk
			{
				name="V_PlateCarrierSpec_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierSpec_sgg: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Special Rig (Sage)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierSpec_sgg
			{
				name="V_PlateCarrierSpec_sgg";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierSpec_rgr_noflag_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Special Rig (Green, No Flag)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierSpec_rgr_noflag_F
			{
				name="V_PlateCarrierSpec_rgr_noflag_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierSpec_ukmtp_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier Special Rig (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierSpec_ukmtp_F
			{
				name="V_PlateCarrierSpec_ukmtp_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierGL_cbr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrierGL_cbr0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierGL_cbr
			{
				name="V_PlateCarrierGL_cbr";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierGL_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier GL Rig (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierGL_khk
			{
				name="V_PlateCarrierGL_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierGL_sgg: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier GL Rig (Sage)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierGL_sgg
			{
				name="V_PlateCarrierGL_sgg";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierGL_rgr_noflag_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier GL Rig (Green, No Flag)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierGL_rgr_noflag_F
			{
				name="V_PlateCarrierGL_rgr_noflag_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierGL_ukmtp_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Carrier GL Rig (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierGL_ukmtp_F
			{
				name="V_PlateCarrierGL_ukmtp_F";
				count=1;
			};
		};
	};
	class Vest_V_HarnessO_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="LBV Harness (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessO_blk
			{
				name="V_HarnessO_blk";
				count=1;
			};
		};
	};
	class Vest_V_HarnessO_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="LBV Harness (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessO_khk
			{
				name="V_HarnessO_khk";
				count=1;
			};
		};
	};
	class Vest_V_HarnessO_sand: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="LBV Harness (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessO_sand
			{
				name="V_HarnessO_sand";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOGL_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="LBV Grenadier Harness (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOGL_blk
			{
				name="V_HarnessOGL_blk";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOGL_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="LBV Grenadier Harness (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOGL_khk
			{
				name="V_HarnessOGL_khk";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOGL_sand: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="LBV Grenadier Harness (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOGL_sand
			{
				name="V_HarnessOGL_sand";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOSpec_brn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_HarnessOSpec_brn0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOSpec_brn
			{
				name="V_HarnessOSpec_brn";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOSpec_gry: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_HarnessOSpec_gry0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOSpec_gry
			{
				name="V_HarnessOSpec_gry";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOSpec_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ELBV Harness (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOSpec_blk
			{
				name="V_HarnessOSpec_blk";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOSpec_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ELBV Harness (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOSpec_khk
			{
				name="V_HarnessOSpec_khk";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOSpec_sand: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ELBV Harness (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOSpec_sand
			{
				name="V_HarnessOSpec_sand";
				count=1;
			};
		};
	};
	class Vest_V_HarnessOSpec_ghex_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="ELBV Harness (Green Hex)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_HarnessOSpec_ghex_F
			{
				name="V_HarnessOSpec_ghex_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIA1_dgtl: Vest_Base_F
	{
		displayName="$STR_A3_V_PlateCarrierIA1_dgtl1";
	};
	class Vest_V_PlateCarrierIA1_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier Lite (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIA1_khk
			{
				name="V_PlateCarrierIA1_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIA1_oli: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrierIA1_oli0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIA1_oli
			{
				name="V_PlateCarrierIA1_oli";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIA2_dgtl: Vest_Base_F
	{
		displayName="$STR_A3_V_PlateCarrierIA2_dgtl1";
	};
	class Vest_V_PlateCarrierIA2_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier Rig (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIA2_khk
			{
				name="V_PlateCarrierIA2_khk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIA2_oli: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_PlateCarrierIA2_oli0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIA2_oli
			{
				name="V_PlateCarrierIA2_oli";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIAGL_dgtl: Vest_Base_F
	{
		displayName="$STR_A3_V_PlateCarrierIAGL_dgtl1";
	};
	class Vest_V_PlateCarrierIAGL_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier GL Rig (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIAGL_khk
			{
				name="V_PlateCarrierIAGL_khk";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_brn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Slash Bandolier (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_BandollierB_brn
			{
				name="V_BandollierB_brn";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_grn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Slash Bandolier";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_BandollierB_grn
			{
				name="V_BandollierB_grn";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_gry: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Slash Bandolier (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_BandollierB_gry
			{
				name="V_BandollierB_gry";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_sgg: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Slash Bandolier (Sage)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_BandollierB_sgg
			{
				name="V_BandollierB_sgg";
				count=1;
			};
		};
	};
	class Vest_V_BandollierB_tna_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_V_BandollierB_tna_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_BandollierB_tna_F
			{
				name="V_BandollierB_tna_F";
				count=1;
			};
		};
	};
	class Vest_V_TacVestCamo_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Tactical Vest (Tan)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_TacVestCamo_khk
			{
				name="V_TacVestCamo_khk";
				count=1;
			};
		};
	};
	class Vest_V_TacVest_grpolice: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Tactical Vest (Police, Greek)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_TacVest_grpolice
			{
				name="V_TacVest_grpolice";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rangemaster Belt (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Rangemaster_belt_blk
			{
				name="V_Rangemaster_belt_blk";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_brn: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rangemaster Belt (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Rangemaster_belt_brn
			{
				name="V_Rangemaster_belt_brn";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_cbr: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rangemaster Belt (Coyote)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Rangemaster_belt_cbr
			{
				name="V_Rangemaster_belt_cbr";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_khk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rangemaster Belt (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Rangemaster_belt_khk
			{
				name="V_Rangemaster_belt_khk";
				count=1;
			};
		};
	};
	class Vest_V_Rangemaster_belt_oli: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rangemaster Belt (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_Rangemaster_belt_oli
			{
				name="V_Rangemaster_belt_oli";
				count=1;
			};
		};
	};
	class Vest_V_RebreatherO_ghex_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_V_RebreatherO_ghex_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_RebreatherO_ghex_F
			{
				name="V_RebreatherO_ghex_F";
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
