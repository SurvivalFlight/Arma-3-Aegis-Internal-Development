class CfgPatches
{
	class A3_Weapons_F_Rus_LongRangeRifles_DMR_04
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark_LongRangeRifles_DMR_04"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"srifle_DMR_04_TWSS_LP_BI_F"
		};
	};
};
class CfgWeapons
{
	class srifle_DMR_04_F;
	class srifle_DMR_04_TWSS_LP_BI_F: srifle_DMR_04_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_04_TWSS_LP_BI_F";
		baseWeapon="srifle_DMR_04_F";
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
