class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_P07
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Pistols_P07"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_hgun_P07_blk_F"
		};
		weapons[]=
		{
			"hgun_P07_blk_F",
			"hgun_P07_F"
		};
	};
};
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_L"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight_pistol"
				};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
		};
	};
	class hgun_P07_blk_F: hgun_P07_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_P07_blk_F";
		baseWeapon="hgun_P07_blk_F";
		displayName="P07 9 mm (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\P07\Data\hgun_P07_blk_F.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\P07\Data\UI\icon_hgun_P07_blk_F_X_CA.paa";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_hgun_P07_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="P07 9 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_P07_blk_F
			{
				weapon="hgun_P07_blk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
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
