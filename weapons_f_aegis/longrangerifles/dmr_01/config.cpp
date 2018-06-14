class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_DMR_01
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_LongRangeRifles_DMR_01",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_srifle_DMR_01_Black_F"
		};
		weapons[]=
		{
			"srifle_DMR_01_Black_F",
			"srifle_DMR_01_DMS_LP_BI_F",
			"srifle_DMR_01_DMS_LP_BI_S_F",
			"srifle_DMR_01_MOS_LP_BI_F"
		};
	};
};
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class DMR_01_base_F: Rifle_Long_Base_F
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
			class PointerSlot: PointerSlot
			{
				compatibleItems[]+=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};
	};
	class srifle_DMR_01_F;
	class srifle_DMR_01_Black_F: srifle_DMR_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_01_Black_F";
		baseWeapon="srifle_DMR_01_Black_F";
		displayName="$STR_A3_CfgWeapons_srifle_DMR_01_Black_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_black_CO.paa",
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_black_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\UI\gear_DMR_01_Black_X_CA.paa";
		DLC="Aegis";
	};
	class srifle_DMR_01_MOS_LP_BI_F: srifle_DMR_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_01_MOS_LP_BI_F";
		baseWeapon="srifle_DMR_01_F";
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
				item="bipod_02_F_hex";
			};
		};
	};
	class srifle_DMR_01_DMS_LP_BI_F: srifle_DMR_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_01_DMS_LP_BI_F";
		baseWeapon="srifle_DMR_01_F";
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
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_hex";
			};
		};
	};
	class srifle_DMR_01_DMS_LP_BI_S_F: srifle_DMR_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_01_DMS_LP_BI_S_F";
		baseWeapon="srifle_DMR_01_F";
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
				item="bipod_02_F_hex";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_srifle_DMR_01_Black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_01_Black_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_srifle_DMR_01_Black_F
			{
				weapon="srifle_DMR_01_Black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
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
