class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_MK20
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rifles_MK20",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_arifle_Mk20_black_F",
			"Weapon_arifle_Mk20_GL_black_F",
			"Weapon_arifle_Mk20_GL_olive_F",
			"Weapon_arifle_Mk20_olive_F",
			"Weapon_arifle_Mk20C_black_F",
			"Weapon_arifle_Mk20C_olive_F"
		};
		weapons[]=
		{
			"arifle_Mk20_ACO_pointer_snds_F",
			"arifle_Mk20_black_F",
			"arifle_Mk20_GL_ACO_pointer_F",
			"arifle_Mk20_GL_ACO_pointer_snds_F",
			"arifle_Mk20_GL_black_F",
			"arifle_Mk20_GL_olive_F",
			"arifle_Mk20_GL_plain_ACO_F",
			"arifle_Mk20_GL_plain_ACO_pointer_F",
			"arifle_Mk20_GL_plain_ARCO_pointer_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_GL_plain_Holo_pointer_F",
			"arifle_Mk20_GL_plain_Holo_pointer_snds_F",
			"arifle_Mk20_plain_ACO_pointer_F",
			"arifle_Mk20_plain_ACO_pointer_snds_F",
			"arifle_Mk20_plain_ARCO_pointer_F",
			"arifle_Mk20_plain_ARCO_pointer_snds_F",
			"arifle_Mk20_plain_Holo_pointer_F",
			"arifle_Mk20_MRCO_pointer_snds_F",
			"arifle_Mk20_olive_F",
			"arifle_Mk20C_ACO_pointer_snds_F",
			"arifle_Mk20C_black_F",
			"arifle_Mk20C_olive_F",
			"arifle_Mk20C_plain_ACO_F",
			"arifle_Mk20C_plain_ACO_pointer_F",
			"arifle_Mk20C_plain_ACO_pointer_snds_F",
			"arifle_Mk20C_plain_Holo_F",
			"arifle_Mk20C_plain_Holo_pointer_F"
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
	class mk20_base_F: Rifle_Base_F
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
	class arifle_Mk20_F;
	class arifle_Mk20_plain_F;
	class arifle_Mk20_black_F: arifle_Mk20_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_black_F";
		baseWeapon="arifle_Mk20_black_F";
		displayName="$STR_A3_CfgWeapons_arifle_Mk20_black0";
		picture="\A3\Weapons_F_Aegis\Rifles\MK20\Data\UI\gear_Mk20_black_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_black_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk20_olive_F: arifle_Mk20_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_olive_F";
		baseWeapon="arifle_Mk20_olive_F";
		displayName="Mk20 5.56 mm (Olive)";
		picture="\A3\Weapons_F_Aegis\Rifles\MK20\Data\UI\gear_Mk20_olive_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_olive_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk20C_F;
	class arifle_Mk20C_plain_F;
	class arifle_Mk20C_black_F: arifle_Mk20C_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_black_F";
		baseWeapon="arifle_Mk20C_black_F";
		displayName="$STR_A3_CfgWeapons_arifle_Mk20C_black0";
		picture="\A3\Weapons_F_Aegis\Rifles\MK20\Data\UI\gear_Mk20_C_black_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_black_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk20C_olive_F: arifle_Mk20C_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_olive_F";
		baseWeapon="arifle_Mk20C_olive_F";
		displayName="Mk20C 5.56 mm (Olive)";
		picture="\A3\Weapons_F_Aegis\Rifles\MK20\Data\UI\gear_Mk20_C_olive_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_olive_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk20_GL_F;
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_utilities_black_CO.paa"
		};
	};
	class arifle_Mk20_GL_black_F: arifle_Mk20_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_black_F";
		baseWeapon="arifle_Mk20_GL_black_F";
		displayName="$STR_A3_CfgWeapons_arifle_Mk20_GL_black0";
		picture="\A3\Weapons_F_Aegis\Rifles\MK20\Data\UI\gear_Mk20_GL_black_X_CA.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_black_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_utilities_black_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk20_GL_olive_F: arifle_Mk20_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_olive_F";
		baseWeapon="arifle_Mk20_GL_olive_F";
		displayName="Mk20 EGLM 5.56 mm (Olive)";
		picture="\A3\Weapons_F_Aegis\Rifles\MK20\Data\UI\gear_Mk20_GL_olive_X_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\MK20\Data\mk20_olive_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk20C_ACO_pointer_snds_F: arifle_Mk20C_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_ACO_pointer_snds_F";
		baseWeapon="arifle_Mk20C_F";
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
	class arifle_Mk20C_plain_ACO_F: arifle_Mk20C_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_plain_ACO_F";
		baseWeapon="arifle_Mk20C_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_Mk20C_plain_ACO_pointer_F: arifle_Mk20C_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_plain_ACO_pointer_F";
		baseWeapon="arifle_Mk20C_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20C_plain_Holo_F: arifle_Mk20C_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_plain_Holo_F";
		baseWeapon="arifle_Mk20C_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
		};
	};
	class arifle_Mk20C_plain_Holo_pointer_F: arifle_Mk20C_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_plain_Holo_pointer_F";
		baseWeapon="arifle_Mk20C_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20C_plain_ACO_pointer_snds_F: arifle_Mk20C_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20C_plain_ACO_pointer_snds_F";
		baseWeapon="arifle_Mk20C_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_snd_F";
			};
		};
	};
	class arifle_Mk20_ACO_pointer_snds_F: arifle_Mk20_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_ACO_pointer_snds_F";
		baseWeapon="arifle_Mk20_F";
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
	class arifle_Mk20_MRCO_pointer_snds_F: arifle_Mk20_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_MRCO_pointer_snds_F";
		baseWeapon="arifle_Mk20_F";
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
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_Mk20_plain_ACO_pointer_F: arifle_Mk20_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_plain_ACO_pointer_F";
		baseWeapon="arifle_Mk20_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_plain_ARCO_pointer_F: arifle_Mk20_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_plain_ARCO_pointer_F";
		baseWeapon="arifle_Mk20_plain_F";
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
		};
	};
	class arifle_Mk20_plain_Holo_pointer_F: arifle_Mk20_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_plain_Holo_pointer_F";
		baseWeapon="arifle_Mk20_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_plain_ACO_pointer_snds_F: arifle_Mk20_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_plain_ACO_pointer_snds_F";
		baseWeapon="arifle_Mk20_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_snd_F";
			};
		};
	};
	class arifle_Mk20_plain_ARCO_pointer_snds_F: arifle_Mk20_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_plain_ARCO_pointer_snds_F";
		baseWeapon="arifle_Mk20_plain_F";
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
				item="muzzle_snds_M_snd_F";
			};
		};
	};
	class arifle_Mk20_GL_ACO_pointer_F: arifle_Mk20_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_ACO_pointer_F";
		baseWeapon="arifle_Mk20_GL_F";
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
		};
	};
	class arifle_Mk20_GL_ACO_pointer_snds_F: arifle_Mk20_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_ACO_pointer_snds_F";
		baseWeapon="arifle_Mk20_GL_F";
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
	class arifle_Mk20_GL_plain_ACO_F: arifle_Mk20_GL_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_plain_ACO_F";
		baseWeapon="arifle_Mk20_GL_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_Mk20_GL_plain_ACO_pointer_F: arifle_Mk20_GL_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_plain_ACO_pointer_F";
		baseWeapon="arifle_Mk20_GL_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_GL_plain_ARCO_pointer_F: arifle_Mk20_GL_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_plain_ARCO_pointer_F";
		baseWeapon="arifle_Mk20_GL_plain_F";
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
		};
	};
	class arifle_Mk20_GL_plain_Holo_pointer_F: arifle_Mk20_GL_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_plain_Holo_pointer_F";
		baseWeapon="arifle_Mk20_GL_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_GL_plain_Holo_pointer_snds_F: arifle_Mk20_GL_plain_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk20_GL_plain_Holo_pointer_snds_F";
		baseWeapon="arifle_Mk20_GL_plain_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_snd_F";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_arifle_Mk20_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_arifle_Mk20_black0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk20_black_F
			{
				weapon="arifle_Mk20_black_F";
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
	class Weapon_arifle_Mk20_olive_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk20 5.56 mm (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk20_olive_F
			{
				weapon="arifle_Mk20_olive_F";
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
	class Weapon_arifle_Mk20C_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_arifle_Mk20C_black0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_black_F
			{
				weapon="arifle_Mk20C_black_F";
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
	class Weapon_arifle_Mk20C_olive_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk20C 5.56 mm (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_olive_F
			{
				weapon="arifle_Mk20C_olive_F";
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
	class Weapon_arifle_Mk20_GL_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_arifle_Mk20_GL_black0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk20_GL_black_F
			{
				weapon="arifle_Mk20_GL_black_F";
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
	class Weapon_arifle_Mk20_GL_olive_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk20 EGLM 5.56 mm (Olive)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk20_GL_olive_F
			{
				weapon="arifle_Mk20_GL_olive_F";
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
