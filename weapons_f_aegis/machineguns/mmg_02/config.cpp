class CfgPatches
{
	class A3_Weapons_F_Aegis_Machineguns_MMG_02
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark_Machineguns_MMG_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_MMG_02_tna_F"
		};
		weapons[]=
		{
			"MMG_02_black_RCO_LP_F",
			"MMG_02_tna_F"
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
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_338"
				};
			};
		};
	};
	class MMG_02_camo_F;
	class MMG_02_tna_F: MMG_02_camo_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_02_tna_F";
		baseWeapon="MMG_02_tna_F";
		displayName="$STR_A3_CfgWeapons_MMG_02_tna_F0";
		picture="\A3\Weapons_F_Aegis\Machineguns\MMG_02\Data\UI\gear_MMG_02_tna_X_CO.paa";
		UIPicture="\A3\Weapons_F\Data\UI\icon_mg_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_01_tna_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_02_tna_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_03_tna_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_01_tna.rvmat",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_02_tna.rvmat",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_03_tna.rvmat"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
		DLC="Aegis";
	};
	class MMG_02_black_F;
	class MMG_02_black_RCO_LP_F: MMG_02_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_02_black_RCO_LP_F";
		baseWeapon="MMG_02_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
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
	class Weapon_MMG_02_tna_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_02_tna_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_MMG_02_tna_F
			{
				weapon="MMG_02_tna_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
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
