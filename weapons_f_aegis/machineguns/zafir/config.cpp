class CfgPatches
{
	class A3_Weapons_F_Aegis_Machineguns_Zafir
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Machineguns_Zafir",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_LMG_Zafir_black_F",
			"Weapon_LMG_Zafir_ghex_F"
		};
		weapons[]=
		{
			"LMG_Zafir_ACO_pointer_snds_F",
			"LMG_Zafir_black_F",
			"LMG_Zafir_pointer_snds_F",
			"LMG_Zafir_ghex_F",
			"LMG_Zafir_ghex_pointer_F",
			"LMG_Zafir_ghex_ACO_pointer_snds_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_snds_B",
					"muzzle_snds_B_khk_F",
					"muzzle_snds_B_snd_F",
					"muzzle_snds_B_wdm_F",
					"muzzle_mzls_B"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Zafir_Shot_SoundSet",
					"Zafir_Tail_SoundSet",
					"Zafir_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Zafir_silencerShot_SoundSet",
					"Zafir_silencerTail_SoundSet",
					"Zafir_silencerInteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Zafir_Shot_SoundSet",
					"Zafir_Tail_SoundSet",
					"Zafir_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Zafir_silencerShot_SoundSet",
					"Zafir_silencerTail_SoundSet",
					"Zafir_silencerInteriorTail_SoundSet"
				};
			};
		};
	};
	class LMG_Zafir_black_F: LMG_Zafir_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Zafir_black_F";
		baseWeapon="LMG_Zafir_black_F";
		displayName="$STR_A3_CfgWeapons_LMG_Zafir_black_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\Zafir\Data\zafir01_black_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\Zafir\Data\zafir02_black_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Machineguns\Zafir\Data\UI\gear_Zafir_black_X_CA.paa";
		DLC="Aegis";
	};
	class LMG_Zafir_ghex_F: LMG_Zafir_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Zafir_ghex_F";
		baseWeapon="LMG_Zafir_ghex_F";
		displayName="$STR_A3_CfgWeapons_LMG_Zafir_ghex_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Machineguns\Zafir\Data\zafir01_ghex_CO.paa",
			"\A3\Weapons_F_Aegis\Machineguns\Zafir\Data\zafir02_ghex_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Machineguns\Zafir\Data\UI\gear_Zafir_ghex_X_CA.paa";
		DLC="Aegis";
	};
	class LMG_Zafir_pointer_snds_F: LMG_Zafir_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Zafir_pointer_snds_F";
		baseWeapon="LMG_Zafir_F";
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
				item="muzzle_snds_B";
			};
		};
	};
	class LMG_Zafir_ACO_pointer_snds_F: LMG_Zafir_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Zafir_ACO_pointer_snds_F";
		baseWeapon="LMG_Zafir_F";
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
				item="muzzle_snds_B";
			};
		};
	};
	class LMG_Zafir_ghex_pointer_F: LMG_Zafir_ghex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Zafir_ghex_pointer_F";
		baseWeapon="LMG_Zafir_ghex_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class LMG_Zafir_ghex_ACO_pointer_snds_F: LMG_Zafir_ghex_F
	{
		author="$STR_A3_Night515";
		_generalMacro="LMG_Zafir_ghex_ACO_pointer_snds_F";
		baseWeapon="LMG_Zafir_ghex_F";
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
				item="muzzle_snds_B_wdm_F";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_LMG_Zafir_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_LMG_Zafir_black_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_LMG_Zafir_black_F
			{
				weapon="LMG_Zafir_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=1;
			};
		};
	};
	class Weapon_LMG_Zafir_ghex_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_LMG_Zafir_ghex_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_LMG_Zafir_ghex_F
			{
				weapon="LMG_Zafir_ghex_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
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
