class CfgPatches
{
	class A3_Weapons_F_Aegis_Pistols_Mk26
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_hgun_Mk26_F"
		};
		weapons[]=
		{
			"hgun_Mk26_F"
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
	class hgun_Mk26_F: Pistol_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="hgun_Mk26_F";
		baseWeapon="hgun_Mk26_F";
		scope=2;
		model="\A3\Weapons_F_Aegis\Pistols\Mk26\Mk26_F.p3d";
		picture="\A3\Weapons_F_Aegis\Pistols\Mk26\Data\UI\gear_Mk26_X_CA.paa";
		magazines[]=
		{
			"6Rnd_45ACP_Cylinder"
		};
		displayname="$STR_A3_CfgWeapons_hgun_Mk26_F0";
		descriptionShort="$STR_A3_CFGWEAPONS_HGUN_ACPC2_F_2";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_Mk26_F_Library0";
		};
		reloadAction="GestureReloadPistolHeavy02";
		recoil="recoil_pistol_mk26";
		DLC="Aegis";
		drySound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\dry_Mk26",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\reload_Mk26",
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
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk26_Shot_SoundSet",
					"Mk26_Tail_SoundSet",
					"Mk26_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.25;
			dispersion=0.0049299998;
			minRange=5;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.30000001;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		bullet1[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet2[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet3[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet4[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet5[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet6[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet7[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet8[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet9[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet10[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet11[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
			1,
			15
		};
		bullet12[]=
		{
			"\A3\Sounds_F\dummysound",
			1,
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
		inertia=0.30000001;
		aimTransitionSpeed=1.6;
		dexterity=1.7;
		initSpeed=455;
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.89999998;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_hgun_Mk26_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_hgun_Mk26_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class _xx_hgun_Mk26_F
			{
				weapon="hgun_Mk26_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_6Rnd_45ACP_Cylinder
			{
				magazine="6Rnd_45ACP_Cylinder";
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
