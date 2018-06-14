class CfgPatches
{
	class A3_Weapons_F_Aegis_Machineguns_LMG_03
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Machineguns_LMG_03"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"LMG_03_F",
			"LMG_03_Holo_Pointer_Snds_F",
			"LMG_03_Pointer_F",
			"LMG_03_Pointer_Snds_F"
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
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_M"
				};
			};
		};
	};
	class LMG_03_F: LMG_03_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_body_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\LMG_03\Data\LMG_03_F_acc_CO.paa",
			"\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"
		};
	};
	class LMG_03_Pointer_F: LMG_03_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_03_Pointer_F";
		baseWeapon="LMG_03_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class LMG_03_Pointer_Snds_F: LMG_03_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_03_Pointer_Snds_F";
		baseWeapon="LMG_03_F";
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
				item="muzzle_snds_M";
			};
		};
	};
	class LMG_03_Holo_Pointer_Snds_F: LMG_03_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_03_Holo_Pointer_Snds_F";
		baseWeapon="LMG_03_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
