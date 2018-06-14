class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_DMR_02
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark_LongRangeRifles_DMR_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_srifle_DMR_02_tna_F"
		};
		weapons[]=
		{
			"srifle_DMR_02_AMS_LP_S_F",
			"srifle_DMR_02_tna_F",
			"srifle_DMR_02_tna_AMS_LP_F"
		};
	};
};
class CfgWeapons
{
	class srifle_DMR_02_F;
	class srifle_DMR_02_tna_F: srifle_DMR_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_02_tna_F";
		displayName="$STR_A3_CfgWeapons_srifle_DMR_02_tna_F0";
		picture="\A3\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_tna_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_01_tna_CO.paa",
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_02_tna_CO.paa"
		};
		DLC="Aegis";
	};
	class srifle_DMR_02_AMS_LP_S_F: srifle_DMR_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_02_AMS_LP_S_F";
		baseWeapon="srifle_DMR_02_F";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_338_black";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class srifle_DMR_02_tna_AMS_LP_F: srifle_DMR_02_tna_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_02_tna_AMS_LP_F";
		baseWeapon="srifle_DMR_02_tna_F";
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
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_srifle_DMR_02_tna_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_02_tna_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_srifle_DMR_02_tna_F
			{
				weapon="srifle_DMR_02_tna_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_10Rnd_338_Mag
			{
				magazine="10Rnd_338_Mag";
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
