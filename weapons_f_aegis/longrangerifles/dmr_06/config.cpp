class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_DMR_06
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark_LongRangeRifles_DMR_06",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_srifle_DMR_06_black_F",
			"Weapon_srifle_DMR_06_wood_F"
		};
		weapons[]=
		{
			"srifle_DMR_06_black_F",
			"srifle_DMR_06_olive_DMS_BI_F",
			"srifle_DMR_06_wood_F",
			"srifle_DMR_06_wood_KHS_F"
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
	class DMR_06_base_F: Rifle_Long_Base_F
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
	class srifle_DMR_06_camo_F;
	class srifle_DMR_06_black_F: srifle_DMR_06_camo_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_06_black_F";
		baseWeapon="srifle_DMR_06_black_F";
		displayName="$STR_A3_cfgWeapons_srifle_DMR_06_black_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_01_black_CO.paa",
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_02_black_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_black_X_CA.paa";
		DLC="Aegis";
	};
	class srifle_DMR_06_wood_F: srifle_DMR_06_camo_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_06_wood_F";
		baseWeapon="srifle_DMR_06_wood_F";
		displayName="$STR_A3_cfgWeapons_srifle_DMR_06_wood_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_01_wood_CO.paa",
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_02_wood_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_01_wood.rvmat",
			"\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_02_wood.rvmat"
		};
		picture="\A3\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\UI\gear_DMR_06_wood_X_CA.paa";
		DLC="Aegis";
	};
	class srifle_DMR_06_olive_F;
	class srifle_DMR_06_olive_DMS_BI_F: srifle_DMR_06_olive_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_06_olive_DMS_BI_F";
		baseWeapon="srifle_DMR_06_olive_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_oli";
			};
		};
	};
	class srifle_DMR_06_wood_KHS_F: srifle_DMR_06_wood_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_DMR_06_wood_KHS_F";
		baseWeapon="srifle_DMR_06_wood_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_KHS_old";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_srifle_DMR_06_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_06_black_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_srifle_DMR_06_black_F
			{
				weapon="srifle_DMR_06_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_srifle_DMR_06_wood_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_DMR_06_wood_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_srifle_DMR_06_wood_F
			{
				weapon="srifle_DMR_06_wood_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
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
