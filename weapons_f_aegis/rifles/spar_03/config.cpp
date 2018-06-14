class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_SPAR_03
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Rifles_SPAR_03"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F",
			"arifle_SPAR_03_khk_MOS_Pointer_Bipod_Snds_F",
			"arifle_SPAR_03_snd_MOS_Pointer_Bipod_F",
			"arifle_SPAR_03_snd_MOS_Pointer_Bipod_Snds_F",
			"arifle_SPAR_03_snd_TWSS_Pointer_Bipod_F"
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
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\Anim\DMR_02.rtm"
		};
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
	class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_02_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_02_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa"
		};
	};
	class arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F: arifle_SPAR_03_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F";
		baseWeapon="arifle_SPAR_03_blk_F";
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
	class arifle_SPAR_03_khk_MOS_Pointer_Bipod_Snds_F: arifle_SPAR_03_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_03_khk_MOS_Pointer_Bipod_Snds_F";
		baseWeapon="arifle_SPAR_03_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B_khk_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class arifle_SPAR_03_snd_MOS_Pointer_Bipod_F: arifle_SPAR_03_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_03_snd_MOS_Pointer_Bipod_F";
		baseWeapon="arifle_SPAR_03_snd_F";
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
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_SPAR_03_snd_MOS_Pointer_Bipod_Snds_F: arifle_SPAR_03_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_03_snd_MOS_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_03_snd_F";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B_snd_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_SPAR_03_snd_TWSS_Pointer_Bipod_F: arifle_SPAR_03_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_03_snd_TWSS_Pointer_Bipod_F";
		baseWeapon="arifle_SPAR_03_snd_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_TWS_Sniper";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
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
