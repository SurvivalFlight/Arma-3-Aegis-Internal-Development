class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_SDAR
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rifles_SDAR"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CowsSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class SDAR_base_F: Rifle_Base_F
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
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\Data_F\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
