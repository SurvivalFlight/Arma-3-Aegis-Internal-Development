class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_C1911
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_hgun_C1911_F"
		};
		weapons[]=
		{
			"hgun_C1911_F"
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
	class hgun_C1911_F: Pistol_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_C1911_F";
		baseWeapon="hgun_C1911_F";
		scope=2;
		model="\A3\Weapons_F_Beta\Pistols\ACPC2\ACPC2_F.p3d";
		picture="\A3\Weapons_F_Aegis\Pistols\C1911\Data\UI\gear_C1911_X_CA.paa";
		magazines[]=
		{
			"7Rnd_45ACP_Mag"
		};
		displayname="$STR_A3_CfgWeapons_hgun_C1911_F0";
		descriptionShort="$STR_A3_CfgWeapons_hgun_ACPC2_F_2";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\C1911\Data\C1911_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\C1911\Data\C1911.rvmat"
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_C1911_Library0";
		};
		drySound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\dry_C1911",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\reload_C1911",
			1,
			1,
			30
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"C1911_Shot_SoundSet",
					"C1911_Tail_SoundSet",
					"C1911_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"C1911_silencerShot_SoundSet",
					"C1911_silencerTail_SoundSet",
					"C1911_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.13;
			dispersion=0.0020300001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.2;
		aimTransitionSpeed=1.6;
		dexterity=1.8;
		initSpeed=250;
		recoil="recoil_pistol_c1911";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			holsterScale=0.94999999;
			class CowsSlot
			{
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_acp",
					"muzzle_mzls_acp"
				};
				iconPosition[]={0.25,0.40000001};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight_pistol"
				};
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_hgun_C1911_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_hgun_C1911_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_C1911_F
			{
				weapon="hgun_C1911_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_7Rnd_45ACP_Mag
			{
				magazine="7Rnd_45ACP_Mag";
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
