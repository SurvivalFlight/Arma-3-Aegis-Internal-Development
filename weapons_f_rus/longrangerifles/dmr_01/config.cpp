class CfgPatches
{
	class A3_Weapons_F_Rus_LongRangeRifles_DMR_01
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis_LongRangeRifles_DMR_01"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"srifle_DMR_01_Black_DMS_LP_BI_S_F",
			"srifle_DMR_01_Black_MOS_LP_BI_F",
			"srifle_DMR_01_Black_TWSS_LP_BI_F"
		};
	};
};
class CfgWeapons
{
	class srifle_DMR_01_Black_F;
	class srifle_DMR_01_Black_MOS_LP_BI_F: srifle_DMR_01_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_01_Black_MOS_LP_BI_F";
		baseWeapon="srifle_DMR_01_Black_F";
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
	class srifle_DMR_01_Black_DMS_LP_BI_S_F: srifle_DMR_01_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_01_Black_DMS_LP_BI_S_F";
		baseWeapon="srifle_DMR_01_Black_F";
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
	class srifle_DMR_01_Black_TWSS_LP_BI_F: srifle_DMR_01_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_01_Black_TWSS_LP_BI_F";
		baseWeapon="srifle_DMR_01_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_tws_sniper";
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
};
class cfgMods
{
	author="Night515";
	timepacked="1528020994";
};
