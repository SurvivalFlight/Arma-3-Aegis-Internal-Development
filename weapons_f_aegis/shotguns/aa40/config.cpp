class CfgPatches
{
	class A3_Weapons_F_Aegis_Shotguns_AA40
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_sgun_AA40_F"
		};
		weapons[]=
		{
			"sgun_AA40_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class sgun_AA40_F: Rifle_Short_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="sgun_AA40_F";
		baseWeapon="sgun_AA40_F";
		scope=2;
		displayName="$STR_A3_CfgWeapons_sgun_AA400";
		model="\A3\Weapons_F_Aegis\Shotguns\AA40\AA40_F.p3d";
		magazines[]=
		{
			"20Rnd_12Gauge_Pellets",
			"20Rnd_12Gauge_Slug",
			"20Rnd_12Gauge_HE"
		};
		maxZeroing=100;
		reloadAction="GestureReloadSPAR_02";
		recoil="recoil_aa40";
		cursor="sgun";
		discreteDistanceInitIndex=0;
		aiDispersionCoefY=8;
		aiDispersionCoefX=6;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Shotguns\AA40\Data\Anim\AA40.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class UnderbarrelSlot
			{
			};
		};
		inertia=0.60000002;
		aimTransitionSpeed=1.1;
		dexterity=1.3;
		initSpeed=350;
		picture="\A3\Weapons_F_Aegis\Shotguns\AA40\Data\UI\gear_AA40_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort="$STR_A3_CfgWeapons_sgun_AA401";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_sgun_AA40_Library0";
		};
		bullet1[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\metal_shotgun_01",
			0.79432821,
			1,
			15
		};
		bullet2[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\metal_shotgun_02",
			0.79432821,
			1,
			15
		};
		bullet3[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\metal_shotgun_03",
			0.79432821,
			1,
			15
		};
		bullet4[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\metal_shotgun_04",
			0.79432821,
			1,
			15
		};
		bullet5[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\dirt_shotgun_01",
			0.79432821,
			1,
			15
		};
		bullet6[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\dirt_shotgun_02",
			0.79432821,
			1,
			15
		};
		bullet7[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\dirt_shotgun_03",
			0.79432821,
			1,
			15
		};
		bullet8[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\dirt_shotgun_04",
			0.79432821,
			1,
			15
		};
		bullet9[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\grass_shotgun_01",
			0.79432821,
			1,
			15
		};
		bullet10[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\grass_shotgun_02",
			0.79432821,
			1,
			15
		};
		bullet11[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\grass_shotgun_03",
			0.79432821,
			1,
			15
		};
		bullet12[]=
		{
			"A3\Sounds_F_Aegis\weapons\shells\Shotgun\grass_shotgun_04",
			0.79432821,
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
		distanceZoomMin=100;
		distanceZoomMax=100;
		drySound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\dry_AA40",
			0.69999999,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\reload_AA40",
			1,
			1,
			10
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
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
					"AA40_Shot_SoundSet",
					"AA40_Tail_SoundSet",
					"AA40_interiorTail_SoundSet"
				};
			};
			dispersion=0.00116;
			reloadTime=0.2;
			minRange=0;
			minRangeProbab=0.60000002;
			midRange=40;
			midRangeProbab=0.15000001;
			maxRange=70;
			maxRangeProbab=0.02;
			aiRateOfFire=1e-006;
			aiRateOfFireDistance=50;
		};
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_sgun_AA40_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_sgun_AA400";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Shotguns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_sgun_AA40_F
			{
				weapon="sgun_AA40_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_12Gauge_Pellets
			{
				magazine="20Rnd_12Gauge_Pellets";
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
