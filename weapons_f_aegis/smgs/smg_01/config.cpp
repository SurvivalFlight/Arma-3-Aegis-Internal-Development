class CfgPatches
{
	class A3_Weapons_F_Aegis_SMGs_SMG_01
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_SMGs_SMG_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_SMG_01_black_F",
			"Weapon_SMG_01_khk_F"
		};
		weapons[]=
		{
			"SMG_01_black_F",
			"SMG_01_black_Holo_F",
			"SMG_01_khk_F",
			"SMG_01_khk_Holo_F"
		};
	};
};
class MuzzleSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_acp",
					"muzzle_mzls_smg_01"
				};
			};
		};
	};
	class SMG_01_F;
	class SMG_01_black_F: SMG_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_01_black_F";
		baseWeapon="SMG_01_black_F";
		displayName="$STR_A3_CfgWeapons_SMG_01_black0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_black_CO.paa",
			"\A3\Weapons_F_Aegis\SMGs\SMG_01\Data\Vectoratt_black_CO.paa",
			"\A3\Weapons_F\acc\Data\battlesight_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\SMGs\SMG_01\Data\UI\gear_SMG_01_black_X_CA.paa";
		DLC="Aegis";
	};
	class SMG_01_khk_F: SMG_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_01_khk_F";
		baseWeapon="SMG_01_khk_F";
		displayName="Vermin SMG .45 ACP (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_khk_CO.paa",
			"\A3\Weapons_F_Aegis\SMGs\SMG_01\Data\Vectoratt_khk_CO.paa",
			"\A3\Weapons_F\acc\Data\battlesight_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\SMGs\SMG_01\Data\UI\gear_SMG_01_khk_X_CA.paa";
		DLC="Aegis";
	};
	class SMG_01_black_ACO_F: SMG_01_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_01_black_ACO_F";
		baseWeapon="SMG_01_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
		};
	};
	class SMG_01_black_Holo_F: SMG_01_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_01_black_Holo_F";
		baseWeapon="SMG_01_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg_blk_F";
			};
		};
	};
	class SMG_01_khk_Holo_F: SMG_01_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_01_khk_Holo_F";
		baseWeapon="SMG_01_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg_khk_F";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_SMG_01_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_SMG_01_black0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SubMachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_SMG_01_black_F
			{
				weapon="SMG_01_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
				count=1;
			};
		};
	};
	class Weapon_SMG_01_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Vermin SMG .45 ACP (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SubMachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_SMG_01_khk_F
			{
				weapon="SMG_01_khk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine="30Rnd_45ACP_Mag_SMG_01";
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
