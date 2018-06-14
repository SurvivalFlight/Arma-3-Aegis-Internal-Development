class CfgPatches
{
	class A3_Weapons_F_Aegis_Machineguns_MMG_01
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Mark_Machineguns_MMG_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_MMG_01_black_F",
			"Weapon_MMG_01_ghex_F"
		};
		weapons[]=
		{
			"MMG_01_black_ARCO_LP_F",
			"MMG_01_black_F",
			"MMG_01_ghex_ARCO_LP_F",
			"MMG_01_ghex_F",
			"MMG_01_hex_ARCO_LP_F"
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
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_93mmg"
				};
			};
		};
	};
	class MMG_01_hex_F;
	class MMG_01_black_F: MMG_01_hex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_01_black_F";
		baseWeapon="MMG_01_black_F";
		displayName="$STR_A3_CfgWeapons_MMG_01_black_F0";
		picture="\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\UI\gear_MMG_01_black_X_CO.paa";
		UIPicture="\A3\Weapons_F\Data\UI\icon_mg_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_black_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_black_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_black.rvmat",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_black.rvmat",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_black.rvmat"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
		DLC="Aegis";
	};
	class MMG_01_ghex_F: MMG_01_hex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_01_ghex_F";
		baseWeapon="MMG_01_ghex_F";
		displayName="$STR_A3_CfgWeapons_MMG_01_ghex_F0";
		picture="\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\UI\gear_MMG_01_ghex_X_CO.paa";
		UIPicture="\A3\Weapons_F\Data\UI\icon_mg_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_ghex_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_ghex_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_ghex_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_ghex.rvmat",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_ghex.rvmat",
			"\A3\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_ghex.rvmat"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
		DLC="Aegis";
	};
	class MMG_01_hex_ARCO_LP_F: MMG_01_hex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_01_hex_ARCO_LP_F";
		baseWeapon="MMG_01_hex_F";
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
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_hex";
			};
		};
	};
	class MMG_01_black_ARCO_LP_F: MMG_01_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_01_black_ARCO_LP_F";
		baseWeapon="MMG_01_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
	class MMG_01_ghex_ARCO_LP_F: MMG_01_ghex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_01_ghex_ARCO_LP_F";
		baseWeapon="MMG_01_ghex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_ghex_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_F_blk";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_MMG_01_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_01_black_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_MMG_01_black_F
			{
				weapon="MMG_01_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_150Rnd_93x64_Mag
			{
				magazine="150Rnd_93x64_Mag";
				count=1;
			};
		};
	};
	class Weapon_MMG_01_ghex_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_MMG_01_ghex_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_MMG_01_ghex_F
			{
				weapon="MMG_01_ghex_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_150Rnd_93x64_Mag
			{
				magazine="150Rnd_93x64_Mag";
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
