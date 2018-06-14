class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_EBR
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_LongRangeRifles_EBR",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_srifle_EBR_grey_F"
		};
		weapons[]=
		{
			"srifle_EBR_DMS_LP_BI_S_F",
			"srifle_EBR_grey_F",
			"srifle_EBR_MOS_FL_BI_F",
			"srifle_EBR_MOS_LP_BI_F",
			"srifle_EBR_MOS_LP_BI_S_F"
		};
	};
};
class MuzzleSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_snds_B_wdm_F",
					"muzzle_mzls_B"
				};
			};
		};
	};
	class srifle_EBR_F;
	class srifle_EBR_grey_F: srifle_EBR_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_EBR_grey_F";
		baseWeapon="srifle_EBR_grey_F";
		displayName="Mk18 ABR 7.62 mm (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\LongRangeRifles\EBR\Data\M14_EBR01_grey_CO.paa",
			"\A3\Weapons_F_Aegis\LongRangeRifles\EBR\Data\M14_EBR02_grey_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\LongRangeRifles\EBR\Data\UI\gear_EBR_grey_X_CA.paa";
		DLC="Aegis";
	};
	class srifle_EBR_MOS_LP_BI_F: srifle_EBR_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_EBR_MOS_LP_BI_F";
		baseWeapon="srifle_EBR_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_blk";
			};
		};
	};
	class srifle_EBR_MOS_FL_BI_F: srifle_EBR_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_EBR_MOS_FL_BI_F";
		baseWeapon="srifle_EBR_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_blk";
			};
		};
	};
	class srifle_EBR_MOS_LP_BI_S_F: srifle_EBR_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_EBR_MOS_LP_BI_S_F";
		baseWeapon="srifle_EBR_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_blk";
			};
		};
	};
	class srifle_EBR_DMS_LP_BI_S_F: srifle_EBR_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_EBR_DMS_LP_BI_S_F";
		baseWeapon="srifle_EBR_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_srifle_EBR_grey_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk18 ABR 7.62 mm (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_srifle_EBR_grey_F
			{
				weapon="srifle_EBR_grey_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
