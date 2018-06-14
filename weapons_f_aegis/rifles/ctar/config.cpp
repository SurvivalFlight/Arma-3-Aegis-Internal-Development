class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_CTAR
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Rifles_CTAR"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_CTAR_GL_blk_ACO_pointer_F",
			"arifle_CTAR_GL_blk_flash_F"
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
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_58_F"
				};
			};
		};
	};
	class arifle_CTAR_GL_blk_F;
	class arifle_CTAR_GL_blk_ACO_pointer_F: arifle_CTAR_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_CTAR_GL_blk_ACO_pointer_F";
		baseWeapon="arifle_CTAR_GL_blk_F";
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
	class arifle_CTAR_GL_blk_flash_F: arifle_CTAR_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_CTAR_GL_blk_flash_F";
		baseWeapon="arifle_CTAR_GL_blk_F";
		scope=1;
		class LinkedItems
		{
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
