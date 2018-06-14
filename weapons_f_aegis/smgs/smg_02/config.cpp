class CfgPatches
{
	class A3_Weapons_F_Aegis_SMGs_SMG_02
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_SMGs_SMG_02"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"SMG_02_Holo_F"
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
	class UGL_F;
	class SMG_02_base_F: Rifle_Short_Base_F
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
		};
	};
	class SMG_02_F;
	class SMG_02_Holo_F: SMG_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_02_Holo_F";
		baseWeapon="SMG_02_F";
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
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
