class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_Pistol_02
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_hgun_Pistol_02_camo_F",
			"Weapon_hgun_Pistol_02_custom_F",
			"Weapon_hgun_Pistol_02_F",
			"Weapon_hgun_Pistol_02_khk_F",
			"Weapon_hgun_Pistol_02_snd_F",
			"Weapon_hgun_Pistol_02_tna_F",
			"Weapon_hgun_Pistol_02_wood_F"
		};
		weapons[]=
		{
			"hgun_Pistol_02_camo_F",
			"hgun_Pistol_02_camo_Snds_F",
			"hgun_Pistol_02_custom_F",
			"hgun_Pistol_02_custom_Snds_F",
			"hgun_Pistol_02_F",
			"hgun_Pistol_02_khk_F",
			"hgun_Pistol_02_khk_Snds_F",
			"hgun_Pistol_02_snd_F",
			"hgun_Pistol_02_snd_Snds_F",
			"hgun_Pistol_02_Snds_F",
			"hgun_Pistol_02_tna_F",
			"hgun_Pistol_02_tna_Snds_F",
			"hgun_Pistol_02_wood_F",
			"hgun_Pistol_02_wood_Snds_F"
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
	class hgun_Pistol_02_F: Pistol_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_F";
		baseWeapon="hgun_Pistol_02_F";
		scope=2;
		DLC="Aegis";
		model="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Pistol_02_F.p3d";
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\gear_Pistol_02_X_CA.paa";
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
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_020";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_CO.paa"
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
		bullet1[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\metal_9mm_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\dirt_9mm_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_01",
			0.22387211,
			1,
			15
		};
		bullet10[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_02",
			0.22387211,
			1,
			15
		};
		bullet11[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_03",
			0.22387211,
			1,
			15
		};
		bullet12[]=
		{
			"A3\Sounds_F\weapons\shells\9mm\grass_9mm_04",
			0.22387211,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
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
					"Pistol_02_Shot_SoundSet",
					"Pistol_02_Tail_SoundSet",
					"Pistol_02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Pistol_02_silencerShot_SoundSet",
					"Pistol_02_silencerTail_SoundSet",
					"Pistol_02_silencerInteriorTail_SoundSet"
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.1;
			dispersion=0.0040600002;
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
			libTextDesc="$STR_A3_CfgWeapons_hgun_Pistol_02_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_hgun_Pistol_021";
		inertia=0.1;
		aimTransitionSpeed=1.6;
		dexterity=1.9;
		initSpeed=381;
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			holsterScale=0.89999998;
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
			class PointerSlot
			{
			};
		};
		class ItemInfo
		{
			priority=2;
		};
	};
	class hgun_Pistol_02_Snds_F: hgun_Pistol_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_Snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_Pistol_02_camo_F: hgun_Pistol_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_camo_F";
		baseWeapon="hgun_Pistol_02_camo_F";
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_camo0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_dazzle_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\gear_Pistol_02_camo_X_CA.paa";
		DLC="Aegis";
	};
	class hgun_Pistol_02_camo_Snds_F: hgun_Pistol_02_camo_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_camo_Snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_Pistol_02_custom_F: hgun_Pistol_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_custom_F";
		baseWeapon="hgun_Pistol_02_custom_F";
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_custom0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_custom_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\gear_Pistol_02_custom_X_CA.paa";
		DLC="Aegis";
	};
	class hgun_Pistol_02_custom_Snds_F: hgun_Pistol_02_custom_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_custom_Snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_Pistol_02_khk_F: hgun_Pistol_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_khk_F";
		baseWeapon="hgun_Pistol_02_khk_F";
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_khk0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_khaki_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\gear_Pistol_02_khk_X_CA.paa";
		DLC="Aegis";
	};
	class hgun_Pistol_02_khk_Snds_F: hgun_Pistol_02_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_khk_Snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_Pistol_02_snd_F: hgun_Pistol_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_snd_F";
		baseWeapon="hgun_Pistol_02_snd_F";
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_snd0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_sand_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\gear_Pistol_02_snd_X_CA.paa";
		DLC="Aegis";
	};
	class hgun_Pistol_02_snd_Snds_F: hgun_Pistol_02_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_snd_Snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_Pistol_02_tna_F: hgun_Pistol_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_tna_F";
		baseWeapon="hgun_Pistol_02_tna_F";
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_tna0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_tropic_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\gear_Pistol_02_tna_X_CA.paa";
		DLC="Aegis";
	};
	class hgun_Pistol_02_tna_Snds_F: hgun_Pistol_02_tna_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_tna_Snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_Pistol_02_wood_F: hgun_Pistol_02_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_wood_F";
		baseWeapon="hgun_Pistol_02_wood_F";
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_wood0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_wood_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\Pistol_02_wood.rvmat"
		};
		picture="\A3\Weapons_F_Aegis\Pistols\Pistol_02\Data\UI\gear_Pistol_02_wood_X_CA.paa";
		DLC="Aegis";
	};
	class hgun_Pistol_02_wood_Snds_F: hgun_Pistol_02_wood_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Pistol_02_wood_Snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_hgun_Pistol_02_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_hgun_Pistol_020";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_02_F
			{
				weapon="hgun_Pistol_02_F";
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
	class Weapon_hgun_Pistol_02_camo_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_camo0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_02_camo_F
			{
				weapon="hgun_Pistol_02_camo_F";
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
	class Weapon_hgun_Pistol_02_custom_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_custom0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_02_custom_F
			{
				weapon="hgun_Pistol_02_custom_F";
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
	class Weapon_hgun_Pistol_02_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_khk0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_02_khk_F
			{
				weapon="hgun_Pistol_02_khk_F";
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
	class Weapon_hgun_Pistol_02_snd_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_snd0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_02_snd_F
			{
				weapon="hgun_Pistol_02_snd_F";
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
	class Weapon_hgun_Pistol_02_tna_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_tna0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_02_tna_F
			{
				weapon="hgun_Pistol_02_tna_F";
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
	class Weapon_hgun_Pistol_02_wood_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayname="$STR_A3_CfgWeapons_hgun_Pistol_02_wood0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Pistol_02_wood_F
			{
				weapon="hgun_Pistol_02_wood_F";
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
