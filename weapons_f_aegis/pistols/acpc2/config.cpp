class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_ACPC2
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Pistols_ACPC2"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"hgun_ACPC2_F"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class SlotInfo;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_acp"
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
