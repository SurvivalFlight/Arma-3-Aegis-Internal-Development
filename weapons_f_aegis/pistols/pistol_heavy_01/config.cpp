class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_Pistol_Heavy_01
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Pistols_Pistol_Heavy_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_hgun_Pistol_heavy_01_black_F"
		};
		weapons[]=
		{
			"hgun_Pistol_heavy_01_black_F",
			"hgun_Pistol_heavy_01_black_MRD_F",
			"hgun_Pistol_heavy_01_black_MRD_snds_F",
			"hgun_Pistol_heavy_01_F"
		};
	};
};
class MuzzleSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_snds_pistol_heavy_01",
					"muzzle_mzls_acp"
				};
			};
		};
	};
	class hgun_Pistol_heavy_01_black_F: hgun_Pistol_heavy_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_heavy_01_black_F";
		baseWeapon="hgun_Pistol_heavy_01_black_F";
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_black_F0";
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_Heavy_01\Data\UI\gear_Pistol_heavy_01_black_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_Heavy_01\Data\Pistol_heavy_01_black_CO.paa"
		};
		DLC="Aegis";
	};
	class hgun_Pistol_heavy_01_MRD_snds_F: hgun_Pistol_heavy_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_heavy_01_MRD_snds_F";
		baseWeapon="hgun_Pistol_heavy_01_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRD";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class hgun_Pistol_heavy_01_black_MRD_F: hgun_Pistol_heavy_01_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_heavy_01_black_MRD_F";
		baseWeapon="hgun_Pistol_heavy_01_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRD";
			};
		};
	};
	class hgun_Pistol_heavy_01_black_MRD_snds_F: hgun_Pistol_heavy_01_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_heavy_01_black_MRD_snds_F";
		baseWeapon="hgun_Pistol_heavy_01_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRD";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_hgun_Pistol_heavy_01_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_black_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_heavy_01_black_F
			{
				weapon="hgun_Pistol_heavy_01_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_11Rnd_45ACP_Mag
			{
				magazine="11Rnd_45ACP_Mag";
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
