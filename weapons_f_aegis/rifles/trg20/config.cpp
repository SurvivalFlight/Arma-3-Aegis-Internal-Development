class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_TRG20
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rifles_TRG20",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_arifle_TRG20_black_F",
			"Weapon_arifle_TRG21_black_F",
			"Weapon_arifle_TRG21_GL_black_F"
		};
		weapons[]=
		{
			"arifle_TRG20_ACO_flash_F",
			"arifle_TRG20_black_ACO_F",
			"arifle_TRG20_black_F",
			"arifle_TRG21_ACO_flash_F",
			"arifle_TRG21_black_F",
			"arifle_TRG21_black_MRCO_F",
			"arifle_TRG21_MRCO_flash_F",
			"arifle_TRG21_GL_ACO_flash_F",
			"arifle_TRG21_GL_black_F"
		};
	};
};
class MuzzleSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Tavor_base_F: Rifle_Base_F
	{
		magazines[]+=
		{
			"20Rnd_556x45_Stanag",
			"20Rnd_556x45_Stanag_Tracer_Red",
			"20Rnd_556x45_Stanag_Tracer_Green",
			"20Rnd_556x45_Stanag_Tracer_Yellow",
			"20Rnd_556x45_Stanag_red",
			"20Rnd_556x45_Stanag_green"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_M"
				};
			};
		};
	};
	class arifle_TRG21_F;
	class arifle_TRG21_black_F: arifle_TRG21_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_black_F";
		baseWeapon="arifle_TRG21_black_F";
		displayName="$STR_A3_CfgWeapons_arifle_TRG21_black0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Rifles\TRG20\Data\UI\gear_TRG21_black_X_CA.paa";
		DLC="Aegis";
	};
	class arifle_TRG20_F;
	class arifle_TRG20_black_F: arifle_TRG20_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG20_black_F";
		baseWeapon="arifle_TRG20_black_F";
		displayName="$STR_A3_CfgWeapons_arifle_TRG20_black0";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Rifles\TRG20\Data\UI\gear_TRG20_black_X_CA.paa";
		DLC="Aegis";
	};
	class arifle_TRG21_GL_F;
	class arifle_TRG21_GL_black_F: arifle_TRG21_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_GL_black_F";
		baseWeapon="arifle_TRG21_GL_black_F";
		displayName="$STR_A3_CfgWeapons_arifle_TRG21_GL_black0";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa",
			"\A3\Weapons_F\Rifles\TRG20\Data\TAR21_EGLM_CO.paa",
			"\A3\Weapons_F\Data\GL_holo_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Rifles\TRG20\Data\UI\gear_TRG21_GL_black_X_CA.paa";
		DLC="Aegis";
	};
	class arifle_TRG21_ACO_flash_F: arifle_TRG21_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_ACO_flash_F";
		baseWeapon="arifle_TRG21_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_TRG21_MRCO_flash_F: arifle_TRG21_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_MRCO_flash_F";
		baseWeapon="arifle_TRG21_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_TRG21_ARCO_pointer_snds_F: arifle_TRG21_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_ACO_pointer_snds_F";
		baseWeapon="arifle_TRG21_F";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_TRG21_ACO_pointer_snds_F: arifle_TRG21_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_ACO_pointer_snds_F";
		baseWeapon="arifle_TRG21_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_TRG21_black_MRCO_F: arifle_TRG21_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_black_MRCO_F";
		baseWeapon="arifle_TRG21_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class arifle_TRG20_ACO_flash_F: arifle_TRG20_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG20_ACO_flash_F";
		baseWeapon="arifle_TRG20_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_TRG20_ACO_pointer_snds_F: arifle_TRG20_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG20_ACO_pointer_snds_F";
		baseWeapon="arifle_TRG20_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_TRG20_black_ACO_F: arifle_TRG20_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG20_black_ACO_F";
		baseWeapon="arifle_TRG20_black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class arifle_TRG21_GL_ACO_flash_F: arifle_TRG21_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_GL_ACO_flash_F";
		baseWeapon="arifle_TRG21_GL_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_TRG21_GL_ACO_pointer_snds_F: arifle_TRG21_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_TRG21_GL_ACO_pointer_snds_F";
		baseWeapon="arifle_TRG21_GL_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_arifle_TRG20_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_arifle_TRG20_black0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_TRG20_black_F
			{
				weapon="arifle_TRG20_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=1;
			};
		};
	};
	class Weapon_arifle_TRG21_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_arifle_TRG21_black0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_TRG21_black_F
			{
				weapon="arifle_TRG21_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=1;
			};
		};
	};
	class Weapon_arifle_TRG21_GL_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_arifle_TRG21_GL_black0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_TRG21_GL_black_F
			{
				weapon="arifle_TRG21_GL_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
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
