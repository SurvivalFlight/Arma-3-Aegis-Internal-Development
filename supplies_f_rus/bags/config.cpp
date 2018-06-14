class CfgPatches
{
	class A3_Supplies_F_Rus_Bags
	{
		addonRootClass="A3_Supplies_F_Rus";
		requiredAddons[]=
		{
			"A3_Supplies_F_Aegis_Bags"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_AssaultPack_vsr_F",
			"B_Bergen_vsr_F",
			"B_Carryall_blk_RUAAA_F",
			"B_Carryall_blk_RUAAT_F",
			"B_Carryall_blk_RUAmmo_F",
			"B_Carryall_blk_RUEng_F",
			"B_Carryall_blk_RUExp_F",
			"B_Carryall_cbr_RUAAA_F",
			"B_Carryall_cbr_RUAAT_F",
			"B_Carryall_cbr_RUAmmo_F",
			"B_Carryall_cbr_RUEng_F",
			"B_Carryall_cbr_RUExp_F",
			"B_Carryall_vsr_F",
			"B_Carryall_vsr_RUAAA_F",
			"B_Carryall_vsr_RUAAT_F",
			"B_Carryall_vsr_RUAHAT_F",
			"B_Carryall_vsr_RUAmmo_F",
			"B_Carryall_vsr_RUEng_F",
			"B_Carryall_vsr_RUExp_F",
			"B_Carryall_vsr_RUMine_F",
			"B_Carryall_vsr_RUReconExp_F",
			"B_FieldPack_blk_RUAA_F",
			"B_FieldPack_blk_RUAT_F",
			"B_FieldPack_blk_RULAT_F",
			"B_FieldPack_blk_RUMedic_F",
			"B_FieldPack_blk_RURepair_F",
			"B_FieldPack_cbr_RUAA_F",
			"B_FieldPack_cbr_RUAT_F",
			"B_FieldPack_cbr_RULAT_F",
			"B_FieldPack_cbr_RUMedic_F",
			"B_FieldPack_cbr_RURepair_F",
			"B_FieldPack_vsr_F",
			"B_FieldPack_vsr_RUAA_F",
			"B_FieldPack_vsr_RUAT_F",
			"B_FieldPack_vsr_RUHAT_F",
			"B_FieldPack_vsr_RULAT2_F",
			"B_FieldPack_vsr_RULAT_F",
			"B_FieldPack_vsr_RUMedic_F",
			"B_FieldPack_vsr_RUReconLAT_F",
			"B_FieldPack_vsr_RUReconMedic_F",
			"B_FieldPack_vsr_RURepair_F",
			"B_FieldPack_vsr_RUSpecopLAT_F",
			"B_FieldPack_vsr_RUSpecopMedic_F",
			"B_Static_Designator_01_weapon_F",
			"B_TacticalPack_blk_RUAAR_F",
			"B_TacticalPack_khk_RUAAR_F",
			"B_TacticalPack_vsr_F",
			"B_TacticalPack_vsr_RUAAR_F",
			"I_AT_01_Weapon_rus_F",
			"I_AT_01_weapon_F",
			"I_GMG_01_A_Weapon_rus_F",
			"I_GMG_01_Weapon_rus_F",
			"I_GMG_01_high_Weapon_rus_F",
			"I_HMG_01_A_Weapon_rus_F",
			"I_HMG_01_Weapon_rus_F",
			"I_HMG_01_high_Weapon_rus_F",
			"I_HMG_01_support_high_rus_F",
			"I_HMG_01_support_rus_F",
			"I_Mortar_01_A_Weapon_rus_F",
			"I_Mortar_01_Weapon_rus_F",
			"I_Mortar_01_support_rus_F",
			"I_Static_Designator_01_weapon_F",
			"I_Static_Designator_01_Weapon_rus_F",
			"I_UAV_01_backpack_rus_F",
			"I_UAV_06_backpack_rus_F",
			"I_UAV_06_medical_backpack_rus_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Bag_Base;
	class B_Bergen_Base_F;
	class B_Bergen_vsr_F: B_Bergen_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Bergen_vsr_F";
		scope=2;
		displayName="Bergen Backpack (VSR Summer)";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_Bergen_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\Bergen_vsr_CO.paa"
		};
		DLC="Rus";
	};
	class B_AssaultPack_Base;
	class B_AssaultPack_vsr_F: B_AssaultPack_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="B_AssaultPack_vsr_F";
		scope=2;
		displayName="Assault Pack (VSR)";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_AssaultPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_AssaultPack_vsr_F_CO.paa"
		};
		DLC="Rus";
	};
	class B_Carryall_Base;
	class B_Carryall_vsr_F: B_Carryall_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_F";
		scope=2;
		displayName="Carryall Backpack (VSR)";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_Carryall_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_Carryall_vsr_F_CO.paa"
		};
		DLC="Rus";
	};
	class B_FieldPack_Base;
	class B_FieldPack_vsr_F: B_FieldPack_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_F";
		scope=2;
		displayName="Field Pack (VSR)";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_FieldPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_FieldPack_vsr_F_CO.paa"
		};
		DLC="Rus";
	};
	class B_TacticalPack_Base;
	class B_TacticalPack_vsr_F: B_TacticalPack_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="B_TacticalPack_vsr_F";
		scope=2;
		displayName="Tactical Backpack (VSR)";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		DLC="Rus";
	};
	class Weapon_Bag_Base: Bag_Base
	{
		class AssembleInfo;
	};
	class I_HMG_01_support_F;
	class I_HMG_01_support_rus_F: I_HMG_01_support_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_HMG_01_support_rus_F";
		scope=2;
		displayName="Folded Tripod [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_HMG_01_support_high_F;
	class I_HMG_01_support_high_rus_F: I_HMG_01_support_high_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_HMG_01_support_high_rus_F";
		scope=2;
		displayName="Folded Tripod (Raised) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_Mortar_01_support_F;
	class I_Mortar_01_support_rus_F: I_Mortar_01_support_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_Mortar_01_support_rus_F";
		scope=2;
		displayName="Folded Mk6 Mortar Bipod [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_GMG_01_weapon_F;
	class I_GMG_01_Weapon_rus_F: I_GMG_01_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_GMG_01_Weapon_rus_F";
		scope=2;
		displayName="Dismantled Mk32 GMG [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_HMG_01_weapon_F;
	class I_HMG_01_Weapon_rus_F: I_HMG_01_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_HMG_01_Weapon_rus_F";
		scope=2;
		displayName="Dismantled Mk30 HMG [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_GMG_01_A_weapon_F;
	class I_GMG_01_A_Weapon_rus_F: I_GMG_01_A_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_GMG_01_A_Weapon_rus_F";
		scope=2;
		displayName="Dismantled Autonomous GMG [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_HMG_01_A_weapon_F;
	class I_HMG_01_A_Weapon_rus_F: I_HMG_01_A_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_HMG_01_A_Weapon_rus_F";
		scope=2;
		displayName="Dismantled Autonomous MG [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_GMG_01_high_weapon_F;
	class I_GMG_01_high_Weapon_rus_F: I_GMG_01_high_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_GMG_01_high_Weapon_rus_F";
		scope=2;
		displayName="Dismantled Mk32 GMG (Raised) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_HMG_01_high_weapon_F;
	class I_HMG_01_high_Weapon_rus_F: I_HMG_01_high_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_HMG_01_high_Weapon_rus_F";
		scope=2;
		displayName="Dismantled Mk30 HMG (Raised) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_Mortar_01_weapon_F;
	class I_Mortar_01_Weapon_rus_F: I_Mortar_01_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_Mortar_01_Weapon_rus_F";
		scope=2;
		displayName="Folded Mk6 Mortar Tube [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
	};
	class I_Mortar_01_A_weapon_F;
	class I_Mortar_01_A_Weapon_rus_F: I_Mortar_01_A_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_Mortar_01_A_Weapon_rus_F";
		scope=2;
		displayName="Folded Autonomous Mortar Tube [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
	};
	class I_AA_01_weapon_F: Weapon_Bag_Base
	{
		class AssembleInfo: AssembleInfo
		{
			base[]+=
			{
				"O_HMG_01_support_rus_F"
			};
		};
	};
	class I_AA_01_Weapon_rus_F: I_AA_01_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_AA_01_Weapon_rus_F";
		scope=2;
		displayName="Static Titan Launcher (AA) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
		class AssembleInfo: AssembleInfo
		{
			assembleTo="I_RU_Static_AA_F";
		};
	};
	class I_AT_01_weapon_F: Weapon_Bag_Base
	{
		class AssembleInfo: AssembleInfo
		{
			base[]+=
			{
				"O_HMG_01_support_rus_F"
			};
		};
	};
	class I_AT_01_Weapon_rus_F: I_AT_01_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_AT_01_Weapon_rus_F";
		scope=2;
		displayName="Static Titan Launcher (AT) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_TacticalPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_TacticalPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
		class AssembleInfo: AssembleInfo
		{
			assembleTo="I_RU_Static_AT_F";
		};
	};
	class B_Static_Designator_01_weapon_F: Weapon_Bag_Base
	{
	};
	class I_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
	{
		class AssembleInfo;
	};
	class I_Static_Designator_01_Weapon_rus_F: I_Static_Designator_01_weapon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_Static_Designator_01_Weapon_rus_F";
		scope=2;
		displayName="Remote Designator Bag [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_B_AssaultPack_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\B_AssaultPack_vsr_F_CO.paa"
		};
		editorSubcategory="EdSubcat_DismantledWeapons";
		class AssembleInfo: AssembleInfo
		{
			assembleTo="I_RU_Static_Designator_01_F";
		};
	};
	class B_UAV_01_backpack_F: Weapon_Bag_Base
	{
	};
	class I_UAV_01_backpack_F: B_UAV_01_backpack_F
	{
	};
	class I_UAV_01_backpack_rus_F: I_UAV_01_backpack_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_UAV_01_backpack_rus_F";
		scope=2;
		displayName="UAV Bag (AR-2) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_I_UAV_01_backpack_rus_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\UAV_backpack_rus_CO.paa"
		};
		class AssembleInfo: AssembleInfo
		{
			assembleTo="I_RU_UAV_01_F";
		};
	};
	class UAV_06_backpack_base_F: Weapon_Bag_Base
	{
	};
	class I_UAV_06_backpack_F: UAV_06_backpack_base_F
	{
	};
	class I_UAV_06_backpack_rus_F: I_UAV_06_backpack_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_UAV_06_backpack_rus_F";
		scope=2;
		displayName="UAV Bag (AL-6) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_I_UAV_06_backpack_rus_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\UAV_backpack_rus_CO.paa",
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_CO.paa"
		};
		class AssembleInfo: AssembleInfo
		{
			assembleTo="I_RU_UAV_06_F";
		};
	};
	class UAV_06_medical_backpack_base_F: UAV_06_backpack_base_F
	{
	};
	class I_UAV_06_medical_backpack_F: UAV_06_medical_backpack_base_F
	{
	};
	class I_UAV_06_medical_backpack_rus_F: I_UAV_06_medical_backpack_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_UAV_06_medical_backpack_rus_F";
		scope=2;
		displayName="UAV Bag (Medical) [Russia]";
		faction="IND_RU_F";
		picture="\A3\Supplies_F_Rus\Bags\Data\UI\icon_I_UAV_06_medical_backpack_rus_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Rus\Bags\Data\UAV_backpack_rus_CO.paa",
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_medical_CO.paa"
		};
		class AssembleInfo: AssembleInfo
		{
			assembleTo="I_RU_UAV_06_medical_F";
		};
	};
	class B_FieldPack_vsr_RUMedic_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUMedic_F";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_FieldPack_vsr_RUReconMedic_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUReconMedic_F";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_FieldPack_vsr_RUSpecopMedic_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUSpecopMedic_F";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_FieldPack_vsr_RUAA_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUAA_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=1;
			};
		};
	};
	class B_FieldPack_vsr_RUAT_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=1;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=1;
			};
		};
	};
	class B_FieldPack_vsr_RURepair_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RURepair_F";
		scope=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class B_FieldPack_vsr_RULAT_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RULAT_F";
		scope=1;
		class TransportMagazines
		{
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
	};
	class B_FieldPack_vsr_RUReconLAT_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUReconLAT_F";
		scope=1;
		class TransportMagazines
		{
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
	};
	class B_FieldPack_vsr_RUSpecopLAT_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUSpecopLAT_F";
		scope=1;
		class TransportMagazines
		{
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
	};
	class B_FieldPack_vsr_RUHAT_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RUHAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=1;
			};
		};
	};
	class B_FieldPack_vsr_RULAT2_F: B_FieldPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_vsr_RULAT2_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG7_F
			{
				magazine="RPG7_F";
				count=5;
			};
		};
	};
	class B_FieldPack_cbr;
	class B_FieldPack_cbr_RUMedic_F: B_FieldPack_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_cbr_RUMedic_F";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_FieldPack_cbr_RUAA_F: B_FieldPack_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_cbr_RUAA_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=1;
			};
		};
	};
	class B_FieldPack_cbr_RUAT_F: B_FieldPack_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_cbr_RUAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=1;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=1;
			};
		};
	};
	class B_FieldPack_cbr_RURepair_F: B_FieldPack_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_cbr_RURepair_F";
		scope=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class B_FieldPack_cbr_RULAT_F: B_FieldPack_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_cbr_RULAT_F";
		scope=1;
		class TransportMagazines
		{
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
	};
	class B_FieldPack_blk;
	class B_FieldPack_blk_RUMedic_F: B_FieldPack_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_blk_RUMedic_F";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class B_FieldPack_blk_RUAA_F: B_FieldPack_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_blk_RUAA_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=1;
			};
		};
	};
	class B_FieldPack_blk_RUAT_F: B_FieldPack_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_blk_RUAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=1;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=1;
			};
		};
	};
	class B_FieldPack_blk_RURepair_F: B_FieldPack_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_blk_RURepair_F";
		scope=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class B_FieldPack_blk_RULAT_F: B_FieldPack_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_FieldPack_blk_RULAT_F";
		scope=1;
		class TransportMagazines
		{
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
	};
	class B_Carryall_vsr_RUAmmo_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUAmmo_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=6;
			};
			class _xx_45Rnd_762x39_Mag_F
			{
				magazine="45Rnd_762x39_Mag_F";
				count=1;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=2;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class B_Carryall_vsr_RUAAA_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUAAA_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=3;
			};
		};
	};
	class B_Carryall_vsr_RUAAT_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUAAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
		};
	};
	class B_Carryall_vsr_RUAHAT_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUAHAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=2;
			};
		};
	};
	class B_Carryall_vsr_RUEng_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUEng_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_Carryall_vsr_RUExp_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUExp_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_Carryall_vsr_RUReconExp_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUReconExp_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_Carryall_vsr_RUMine_F: B_Carryall_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_vsr_RUMine_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=2;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine="APERSMineDispenser_Mag";
				count=2;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
				count=2;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_Carryall_cbr;
	class B_Carryall_cbr_RUAmmo_F: B_Carryall_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_cbr_RUAmmo_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=6;
			};
			class _xx_45Rnd_762x39_Mag_F
			{
				magazine="45Rnd_762x39_Mag_F";
				count=1;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=2;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class B_Carryall_cbr_RUAAA_F: B_Carryall_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_cbr_RUAAA_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=3;
			};
		};
	};
	class B_Carryall_cbr_RUAAT_F: B_Carryall_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_cbr_RUAAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
		};
	};
	class B_Carryall_cbr_RUEng_F: B_Carryall_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_cbr_RUEng_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_Carryall_cbr_RUExp_F: B_Carryall_cbr
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_cbr_RUExp_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_Carryall_blk;
	class B_Carryall_blk_RUAmmo_F: B_Carryall_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_blk_RUAmmo_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=6;
			};
			class _xx_45Rnd_762x39_Mag_F
			{
				magazine="45Rnd_762x39_Mag_F";
				count=1;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=2;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class B_Carryall_blk_RUAAA_F: B_Carryall_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_blk_RUAAA_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=3;
			};
		};
	};
	class B_Carryall_blk_RUAAT_F: B_Carryall_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_blk_RUAAT_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
		};
	};
	class B_Carryall_blk_RUEng_F: B_Carryall_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_blk_RUEng_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_Carryall_blk_RUExp_F: B_Carryall_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Carryall_blk_RUExp_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
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
		};
	};
	class B_TacticalPack_vsr_RUAAR_F: B_TacticalPack_vsr_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_TacticalPack_vsr_RUAAR_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
				count=2;
			};
			class _xx_45Rnd_545x39_Mag_Tracer_F
			{
				magazine="45Rnd_545x39_Mag_Tracer_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=1;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=1;
			};
		};
	};
	class B_TacticalPack_khk;
	class B_TacticalPack_khk_RUAAR_F: B_TacticalPack_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_TacticalPack_khk_RUAAR_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
				count=2;
			};
			class _xx_45Rnd_545x39_Mag_Tracer_F
			{
				magazine="45Rnd_545x39_Mag_Tracer_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=1;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=1;
			};
		};
	};
	class B_TacticalPack_blk;
	class B_TacticalPack_blk_RUAAR_F: B_TacticalPack_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="B_TacticalPack_blk_RUAAR_F";
		scope=1;
		class TransportMagazines
		{
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
				count=2;
			};
			class _xx_45Rnd_545x39_Mag_Tracer_F
			{
				magazine="45Rnd_545x39_Mag_Tracer_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=1;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527875400";
};
