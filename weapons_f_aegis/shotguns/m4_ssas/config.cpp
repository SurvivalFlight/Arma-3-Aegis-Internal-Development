class CfgPatches
{
	class A3_Weapons_F_Aegis_Shotguns_M4_SSAS
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_sgun_M4_F"
		};
		weapons[]=
		{
			"sgun_M4_ACO_F",
			"sgun_M4_F",
			"sgun_M4_Holo_F"
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
	class sgun_M4_F: Rifle_Short_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="sgun_M4_F";
		baseWeapon="sgun_M4_F";
		scope=2;
		displayName="$STR_A3_CfgWeapons_sgun_M4SSAS0";
		model="\A3\Weapons_F_Aegis\Shotguns\M4_SSAS\M4_F.p3d";
		magazines[]=
		{
			"8Rnd_12Gauge_Pellets",
			"8Rnd_12Gauge_Slug"
		};
		maxZeroing=100;
		reloadAction="GestureReloadM4SSAS";
		recoil="recoil_m4";
		cursor="sgun";
		discreteDistanceInitIndex=0;
		aiDispersionCoefY=8;
		aiDispersionCoefX=6;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\Anim\M4.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot
			{
			};
			class UnderbarrelSlot
			{
			};
		};
		inertia=0.60000002;
		aimTransitionSpeed=1;
		dexterity=1.3;
		initSpeed=350;
		picture="\A3\Weapons_F_Aegis\Shotguns\M4_SSAS\Data\UI\gear_M4_SSAS_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort="$STR_A3_CfgWeapons_sgun_M4SSAS1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_sgun_M4SSAS_Library0";
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
			"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\dry_M4_SSAS",
			0.69999999,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\reload_M4_SSAS",
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
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M4_Shot_SoundSet",
					"M4_Tail_SoundSet",
					"M4_interiorTail_SoundSet"
				};
			};
			dispersion=0.00086999999;
			reloadTime=0.1;
			minRange=1;
			minRangeProbab=0.5;
			midRange=60;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
		DLC="Aegis";
	};
	class sgun_M4_Holo_F: sgun_M4_F
	{
		author="$STR_A3_Night515";
		_generalMacro="sgun_M4_Holo_F";
		baseWeapon="sgun_M4_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg";
			};
		};
	};
	class sgun_M4_ACO_F: sgun_M4_F
	{
		author="$STR_A3_Night515";
		_generalMacro="sgun_M4_ACO_F";
		baseWeapon="sgun_M4_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_smg_grn";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_sgun_M4_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_sgun_M4SSAS0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Shotguns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_sgun_M4_F
			{
				weapon="sgun_M4_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_8Rnd_12Gauge_Pellets
			{
				magazine="8Rnd_12Gauge_Pellets";
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
