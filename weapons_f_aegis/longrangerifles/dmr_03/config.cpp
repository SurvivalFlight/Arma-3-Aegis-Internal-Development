class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_DMR_03
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark_LongRangeRifles_DMR_03",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"srifle_DMR_03_AMS_LP_F",
			"srifle_DMR_03_khaki_AMS_LP_F"
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
	class DMR_03_base_F: Rifle_Long_Base_F
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
	class srifle_DMR_03_F;
	class srifle_DMR_03_AMS_LP_F: srifle_DMR_03_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_03_AMS_LP_F";
		baseWeapon="srifle_DMR_01_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class srifle_DMR_03_khaki_F;
	class srifle_DMR_03_khaki_AMS_LP_F: srifle_DMR_03_khaki_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_03_khaki_AMS_LP_F";
		baseWeapon="srifle_DMR_01_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS_khk";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
