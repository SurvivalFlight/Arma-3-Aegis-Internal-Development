class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_DMR_05
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark_LongRangeRifles_DMR_05"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_srifle_DMR_05_ghex_F"
		};
		weapons[]=
		{
			"srifle_DMR_05_ghex_F",
			"srifle_DMR_05_ghex_KHS_LP_BI_F",
			"srifle_DMR_05_hex_KHS_LP_BI_F"
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
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_93mmg"
				};
			};
		};
	};
	class srifle_DMR_05_blk_F;
	class srifle_DMR_05_ghex_F: srifle_DMR_05_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_05_ghex_F";
		baseWeapon="srifle_DMR_05_ghex_F";
		displayName="$STR_A3_CfgWeapons_srifle_DMR_05_ghex_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\DMR_05_01_ghex_CO.paa",
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\DMR_05_02_ghex_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\UI\gear_DMR_05_ghex_X_CA.paa";
		DLC="Aegis";
	};
	class srifle_DMR_05_hex_F;
	class srifle_DMR_05_hex_KHS_LP_BI_F: srifle_DMR_05_hex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_05_hex_KHS_LP_BI_F";
		baseWeapon="srifle_DMR_05_hex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_KHS_hex";
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
	class srifle_DMR_05_ghex_KHS_LP_BI_F: srifle_DMR_05_ghex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_05_ghex_KHS_LP_BI_F";
		baseWeapon="srifle_DMR_05_ghex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_KHS_blk";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_srifle_DMR_05_ghex_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_05_ghex_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_srifle_DMR_05_ghex_F
			{
				weapon="srifle_DMR_05_ghex_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
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
