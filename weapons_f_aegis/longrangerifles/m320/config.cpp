class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_M320
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_LongRangeRifles_M320"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"srifle_LRR_F"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
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
				soundsetshot[]=
				{
					"M320_Shot_SoundSet",
					"M320_Tail_SoundSet",
					"M320_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"M320_silencerShot_SoundSet",
					"M320_silencerTail_SoundSet",
					"M320_silencerInteriorTail_SoundSet"
				};
			};
		};
	};
	class srifle_LRR_F: LRR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_lrr",
					"muzzle_snds_lrr_khk_F",
					"muzzle_snds_lrr_snd_F"
				};
				iconPosition[]={0.050000001,0.38};
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
