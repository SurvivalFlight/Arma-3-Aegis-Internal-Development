class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_FAL
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_arifle_FAL_GL_F",
			"Weapon_arifle_FAL_F"
		};
		weapons[]=
		{
			"arifle_FAL_GL_F",
			"arifle_FAL_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_FAL_base_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_FAL_base_F";
		scope=0;
		displayName="$STR_A3_CfgWeapons_arifle_FAL_F0";
		descriptionShort="$STR_A3_CfgWeapons_arifle_FAL_F1";
		model="\A3\Weapons_F_Aegis\Rifles\FAL\FAL_F.p3d";
		magazines[]=
		{
			"20Rnd_762x51_Mag"
		};
		htMin=8;
		htMax=920;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		initSpeed=840;
		recoil="recoil_mk17";
		maxZeroing=1000;
		DLC="Aegis";
		bullet1[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\metal_762_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\dirt_762_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\Sounds_F\weapons\shells\7_62\grass_762_04",
			0.56234133,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
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
			libTextDesc="$STR_A3_CfgWeapons_arifle_FAL_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\Data_F\Proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_B",
					"muzzle_snds_B_khk_F",
					"muzzle_snds_B_snd_F",
					"muzzle_snds_B_wdm_F"
				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=130;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\dry_FAL",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\reload_FAL",
			1,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\firemode_FAL",
			0.17782794,
			1,
			5
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"FAL_Shot_SoundSet",
					"FAL_Tail_SoundSet",
					"FAL_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"FAL_silencerShot_SoundSet",
					"FAL_silencerTail_SoundSet",
					"FAL_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.086000003;
			dispersion=0.0073000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"FAL_Shot_SoundSet",
					"FAL_Tail_SoundSet",
					"FAL_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"FAL_silencerShot_SoundSet",
					"FAL_silencerTail_SoundSet",
					"FAL_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.086000003;
			dispersion=0.0073000002;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
	};
	class arifle_FAL_F: arifle_FAL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_FAL_F";
		baseWeapon="arifle_FAL_F";
		scope=2;
		displayName="FAL 7.62 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\FAL\Data\UI\gear_FAL_X_CA.paa";
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_arifle_FAL_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="FAL 7.62 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_FAL_F
			{
				weapon="arifle_FAL_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
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
