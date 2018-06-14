class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_SPAR_02
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Rifles_SPAR_02"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_blk_Holo_Pointer_Bipod_Snds_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_khk_Holo_Pointer_Bipod_Snds_F",
			"arifle_SPAR_02_snd_F",
			"arifle_SPAR_02_snd_Holo_Pointer_Bipod_Snds_F"
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
	class arifle_SPAR_02_base_F: Rifle_Base_F
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
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
		};
	};
	class arifle_SPAR_02_blk_Holo_Pointer_Bipod_Snds_F: arifle_SPAR_02_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_02_blk_Holo_Pointer_Bipod_Snds_F";
		baseWeapon="arifle_SPAR_02_blk_F";
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
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_SPAR_02_khk_Holo_Pointer_Bipod_Snds_F: arifle_SPAR_02_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_02_khk_Holo_Pointer_Bipod_Snds_F";
		baseWeapon="arifle_SPAR_02_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_khk_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class arifle_SPAR_02_snd_Holo_Pointer_Bipod_Snds_F: arifle_SPAR_02_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_02_snd_Holo_Pointer_Bipod_Snds_F";
		baseWeapon="arifle_SPAR_02_snd_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_snd_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
