class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_G17
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_hgun_G17_blk_F",
			"Weapon_hgun_G17_F",
			"Weapon_hgun_G17_khk_F"
		};
		weapons[]=
		{
			"hgun_G17_blk_F",
			"hgun_G17_F",
			"hgun_G17_khk_F"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_G17_F: Pistol_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_G17_F";
		baseWeapon="hgun_G17_F";
		scope=2;
		model="\A3\Weapons_F_Aegis\Pistols\G17\G17_F.p3d";
		picture="\A3\Weapons_F_Aegis\Pistols\G17\Data\UI\gear_G17_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"17Rnd_9x21_Mag",
			"17Rnd_9x21_red_Mag",
			"17Rnd_9x21_green_Mag",
			"17Rnd_9x21_yellow_Mag"
		};
		reloadAction="GestureReloadPistol";
		recoil="recoil_pistol_p07";
		displayname="G17 9 mm";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\G17\Data\G17_CO.paa"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",
			1,
			1,
			10
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
					"G17_Shot_SoundSet",
					"G17_Tail_SoundSet",
					"G17_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"G17_silencerShot_SoundSet",
					"G17_silencerTail_SoundSet",
					"G17_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.13;
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_G17_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_hgun_G171";
		inertia=0.1;
		aimTransitionSpeed=1.6;
		dexterity=1.9;
		initSpeed=375;
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot
			{
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\Data_F\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_L",
					"muzzle_mzls_L"
				};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\Data_F\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight_pistol"
				};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
		};
		class ItemInfo
		{
			priority=2;
		};
	};
	class hgun_G17_khk_F: hgun_G17_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_G17_khk_F";
		baseWeapon="hgun_G17_khk_F";
		displayname="G17 9 mm (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\G17\Data\G17_khk_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\G17\Data\UI\gear_G17_khk_X_CA.paa";
	};
	class hgun_G17_blk_F: hgun_G17_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_G17_blk_F";
		baseWeapon="hgun_G17_blk_F";
		displayName="G17 9 mm (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\G17\Data\G17_blk_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\G17\Data\UI\gear_G17_blk_X_CA.paa";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_hgun_G17_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="G17 9 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_G17_F
			{
				weapon="hgun_G17_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=1;
			};
		};
	};
	class Weapon_hgun_G17_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="G17 9 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_G17_khk_F
			{
				weapon="hgun_G17_khk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=1;
			};
		};
	};
	class Weapon_hgun_G17_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="G17 9 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_G17_blk_F
			{
				weapon="hgun_G17_blk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
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
