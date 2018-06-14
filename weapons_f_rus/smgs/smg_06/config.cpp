class CfgPatches
{
	class A3_Weapons_F_Rus_SMGs_SMG_06
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rus"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_SMG_06_F"
		};
		weapons[]=
		{
			"SMG_06_ACO_F",
			"SMG_06_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SMG_06_base_F: Rifle_Short_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_06_base_F";
		scope=0;
		displayName="PP-19V 9 mm";
		descriptionShort="$STR_A3_CfgWeapons_SMG_06_base_F1";
		model="\A3\Weapons_F_Rus\SMGs\SMG_06\SMG_06_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\AKM.rtm"
		};
		reloadAction="GestureReloadAKM";
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green"
		};
		htMin=3;
		htMax=380;
		inertia=0.2;
		aimTransitionSpeed=1.4;
		dexterity=1.8;
		initSpeed=380;
		recoil="recoil_smg_06";
		maxZeroing=200;
		cursor="smg";
		DLC="Rus";
		bullet1[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_04",
			0.25118864,
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
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_SMG_06_base_F0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\Data_F\Proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_L"
				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			mass=70;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\dry_AK107",
			0.17782794,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\reload_AK107",
			1,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\firemode_AK107",
			0.31622776,
			1,
			5
		};
		modes[]=
		{
			"FullAuto",
			"Single"
		};
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
				soundSetShot[]=
				{
					"Rogue9_Shot_SoundSet",
					"SMG_06_Tail_SoundSet",
					"SMG_06_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMG_06_silencerShot_SoundSet",
					"SMG_06_silencerTail_SoundSet",
					"SMG_06_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.00145;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=80;
			midRangeProbab=0.69999999;
			maxRange=120;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SMG_06_Shot_SoundSet",
					"SMG_06_Tail_SoundSet",
					"SMG_06_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMG_06_silencerShot_SoundSet",
					"SMG_06_silencerTail_SoundSet",
					"SMG_06_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.00145;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=12;
			midRangeProbab=0.69999999;
			maxRange=25;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
	};
	class SMG_06_F: SMG_06_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_06_F";
		baseWeapon="SMG_06_F";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Rus\SMGs\SMG_06\Data\SMG_06_F_1_CO.paa",
			"\A3\Weapons_F_Rus\SMGs\SMG_06\Data\SMG_06_F_2_CO.paa",
			"\A3\Weapons_F_Rus\SMGs\SMG_06\Data\SMG_06_F_3_CO.paa"
		};
		DLC="Rus";
	};
	class SMG_06_ACO_F: SMG_06_F
	{
		author="$STR_A3_Night515";
		_generalMacro="SMG_06_ACO_F";
		baseWeapon="SMG_06_F";
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
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_SMG_06_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="PP-19V 9 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SubMachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_SMG_06_F
			{
				weapon="SMG_06_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528020994";
};
