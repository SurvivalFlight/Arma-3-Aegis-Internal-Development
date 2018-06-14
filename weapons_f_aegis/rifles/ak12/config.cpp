class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_AK12
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Rifles_AK12"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_AK12_ACO_Flash_F",
			"arifle_AK12_GL_ACO_Flash_F",
			"arifle_AK12_MRCO_Flash_F"
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
	class arifle_AK12_base_F: Rifle_Base_F
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
	class arifle_AK12_F;
	class arifle_AK12_ACO_Flash_F: arifle_AK12_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_ACO_Flash_F";
		baseWeapon="arifle_AK12_F";
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
	class arifle_AK12_MRCO_Flash_F: arifle_AK12_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_MRCO_Flash_F";
		baseWeapon="arifle_AK12_F";
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
	class arifle_AK12_GL_F;
	class arifle_AK12_GL_ACO_Flash_F: arifle_AK12_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_GL_ACO_Flash_F";
		baseWeapon="arifle_AK12_GL_F";
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
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
