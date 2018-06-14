class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_DMR_07
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_LongRangeRifles_DMR_07"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"srifle_DMR_07_blk_DMS_Snds_F",
			"srifle_DMR_07_ghex_DMS_Snds_F",
			"srifle_DMR_07_hex_DMS_Snds_F"
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
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_H"
				};
			};
		};
	};
	class srifle_DMR_07_blk_F;
	class srifle_DMR_07_blk_DMS_Snds_F: srifle_DMR_07_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_07_blk_DMS_Snds_F";
		baseWeapon="srifle_DMR_07_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_65_TI_blk_F";
			};
		};
	};
	class srifle_DMR_07_hex_F;
	class srifle_DMR_07_hex_DMS_Snds_F: srifle_DMR_07_hex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_07_hex_DMS_Snds_F";
		baseWeapon="srifle_DMR_07_hex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_65_TI_hex_F";
			};
		};
	};
	class srifle_DMR_07_ghex_F;
	class srifle_DMR_07_ghex_DMS_Snds_F: srifle_DMR_07_ghex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_07_ghex_DMS_Snds_F";
		baseWeapon="srifle_DMR_07_ghex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS_ghex_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_65_TI_ghex_F";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
