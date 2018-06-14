class CfgPatches
{
	class A3_Weapons_F_Aegis_Machineguns_M200
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Machineguns_M200",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_LMG_Mk200_khk_F",
			"Weapon_LMG_Mk200_plain_F"
		};
		weapons[]=
		{
			"LMG_Mk200_F",
			"LMG_Mk200_FL_BI_F",
			"LMG_Mk200_khk_F",
			"LMG_Mk200_khk_Pointer_Bipod_F",
			"LMG_Mk200_LP_BI_S_F",
			"LMG_Mk200_plain_F",
			"LMG_Mk200_plain_LP_BI_F"
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
		class GunParticles;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		magazines[]+=
		{
			"200Rnd_65x39_cased_Box_green",
			"200Rnd_65x39_cased_Box_red",
			"200Rnd_65x39_cased_Box_Tracer_Green",
			"200Rnd_65x39_cased_Box_Tracer_Red"
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_H"
				};
			};
		};
	};
	class LMG_Mk200_plain_F: LMG_Mk200_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Mk200_plain_F";
		baseWeapon="LMG_Mk200_plain_F";
		displayName="$STR_A3_CfgWeapons_LMG_Mk200_plain0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\M200\Data\1st_person_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\M200\Data\body_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\M200\Data\grip_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Machineguns\M200\Data\UI\gear_M200_plain_X_CA.paa";
		DLC="Aegis";
	};
	class LMG_Mk200_khk_F: LMG_Mk200_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Mk200_khk_F";
		baseWeapon="LMG_Mk200_khk_F";
		displayName="Mk200 6.5 mm (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\M200\Data\1st_person_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\M200\Data\body_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\M200\Data\grip_khk_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Machineguns\M200\Data\UI\gear_M200_khk_X_CA.paa";
		DLC="Aegis";
	};
	class LMG_Mk200_LP_BI_S_F: LMG_Mk200_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Mk200_LP_BI_S_F";
		baseWeapon="LMG_Mk200_F";
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
				item="muzzle_snds_H";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_blk";
			};
		};
	};
	class LMG_Mk200_FL_BI_F: LMG_Mk200_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Mk200_FL_BI_F";
		baseWeapon="LMG_Mk200_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_03_F_blk";
			};
		};
	};
	class LMG_Mk200_plain_LP_BI_F: LMG_Mk200_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Mk200_plain_LP_BI_F";
		baseWeapon="LMG_Mk200_plain_F";
		scope=1;
		class LinkedItems
		{
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
	class LMG_Mk200_khk_Pointer_Bipod_F: LMG_Mk200_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Mk200_khk_Pointer_Bipod_F";
		baseWeapon="LMG_Mk200_khk_F";
		scope=1;
		class LinkedItems
		{
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
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_LMG_Mk200_plain_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_LMG_Mk200_plain0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_LMG_Mk200_plain_F
			{
				weapon="LMG_Mk200_plain_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=1;
			};
		};
	};
	class Weapon_LMG_Mk200_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk200 6.5 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_LMG_Mk200_khk_F
			{
				weapon="LMG_Mk200_khk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
