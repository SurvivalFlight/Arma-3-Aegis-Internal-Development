class CfgPatches
{
	class A3_Weapons_F_Aegis_SMGs_PDW2000
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_SMGs_PDW2000"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"hgun_PDW2000_ACO_F"
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
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag"
		};
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
	class hgun_PDW2000_ACO_F: pdw2000_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_PDW2000_ACO_F";
		baseWeapon="hgun_PDW2000_F";
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
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
