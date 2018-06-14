class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_CTARS
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Rifles_CTARS"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_CTARS_blk_ACO_Pointer_Snds_F",
			"arifle_CTARS_blk_Pointer_Snds_F",
			"arifle_CTARS_ghex_ARCO_Pointer_Snds_F",
			"arifle_CTARS_hex_ARCO_Pointer_Snds_F"
		};
	};
};
class MuzzleSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		cursor="mg";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_58_F"
				};
			};
		};
	};
	class arifle_CTARS_blk_F;
	class arifle_CTARS_blk_Pointer_Snds_F: arifle_CTARS_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_CTARS_blk_Pointer_Snds_F";
		baseWeapon="arifle_CTARS_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_blk_F";
			};
		};
	};
	class arifle_CTARS_blk_ACO_Pointer_Snds_F: arifle_CTARS_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_CTARS_blk_ACO_Pointer_Snds_F";
		baseWeapon="arifle_CTARS_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_blk_F";
			};
		};
	};
	class arifle_CTARS_hex_F;
	class arifle_CTARS_hex_ARCO_Pointer_Snds_F: arifle_CTARS_hex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_CTARS_hex_ARCO_Pointer_Snds_F";
		baseWeapon="arifle_CTARS_hex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_hex_F";
			};
		};
	};
	class arifle_CTARS_ghex_F;
	class arifle_CTARS_ghex_ARCO_Pointer_Snds_F: arifle_CTARS_ghex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_CTARS_ghex_ARCO_Pointer_Snds_F";
		baseWeapon="arifle_CTARS_ghex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO_ghex_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_58_ghex_F";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
