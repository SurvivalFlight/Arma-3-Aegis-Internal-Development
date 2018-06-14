class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_Rook40
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Pistols_Rook40"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"hgun_Rook40_F"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		magazines[]=
		{
			"17Rnd_9x21_Mag",
			"17Rnd_9x21_red_Mag",
			"17Rnd_9x21_green_Mag",
			"17Rnd_9x21_yellow_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_yellow_Mag"
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
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
