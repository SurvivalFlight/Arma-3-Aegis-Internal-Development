class CfgPatches
{
	class A3_Weapons_F_Aegis_SMGs_SMG_05
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Exp_SMGs_SMG_05"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"SMG_05_ACO_F"
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
	class SMG_05_base_F: Rifle_Short_Base_F
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
	class SMG_05_F;
	class SMG_05_ACO_F: SMG_05_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_05_ACO_F";
		baseWeapon="SMG_05_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_smg";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
