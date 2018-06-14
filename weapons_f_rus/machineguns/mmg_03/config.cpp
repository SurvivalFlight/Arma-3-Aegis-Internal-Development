class CfgPatches
{
	class A3_Weapons_F_Rus_Machineguns_MMG_03
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rus"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_MMG_03_F"
		};
		weapons[]=
		{
			"MMG_03_F",
			"MMG_03_MRCO_F"
		};
	};
};
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class MMG_03_base_F: Rifle_Long_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_03_base_F";
		baseWeapon="MMG_01_F";
		scope=0;
		model="\A3\Weapons_F_Rus\Machineguns\MMG_03\MMG_03_F.p3d";
		displayName="PKP 7.62 mm";
		descriptionShort="$STR_A3_CfgWeapons_MMG_03_F1";
		picture="\A3\Weapons_F_Rus\Machineguns\MMG_03\Data\UI\gear_MMG_03_X_CA.paa";
		UIPicture="\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Rus\Machineguns\MMG_03\Data\Anim\MMG_03.rtm"
		};
		DLC="Rus";
		magazines[]=
		{
			"200Rnd_762x54_Box",
			"200Rnd_762x54_Box_Tracer"
		};
		reloadAction="GestureReloadMMG01";
		recoil="recoil_mmg_03";
		maxZeroing=1600;
		inertia=1.2;
		aimTransitionSpeed=0.5;
		magazineReloadSwitchPhase=0.40000001;
		cursor="mg";
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				effectName="MachineGunEject1";
				positionName="ejectstart";
				directionName="ejectend";
			};
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_MMG_03_F_Library0";
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
					"muzzle_snds_B_wdm_F",
					"muzzle_mzls_B"
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
			mass=360;
		};
		bullet1[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\metal_762_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\metal_762_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\metal_762_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\metal_762_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\grass_762_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\grass_762_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\grass_762_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"\A3\Sounds_F\weapons\shells\7_62\grass_762_04",
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
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Dry",
			0.44668359,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\firemode_AK107",
			0.31622776,
			1,
			5
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MMG_03_Shot_SoundSet",
					"MMG_03_Tail_SoundSet",
					"MMG_03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"MMG_03_silencerShot_SoundSet",
					"MMG_03_silencerTail_SoundSet",
					"MMG_03_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.00145;
			soundContinuous=0;
			soundBurst=0;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=100;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=5;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=3;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			aiRateOfFireDispersion=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			burst=3;
			aiRateOfFire=9;
			aiRateOfFireDistance=1000;
			aiRateOfFireDispersion=3;
			minRange=800;
			minRangeProbab=0.039999999;
			midRange=1000;
			midRangeProbab=0.5;
			maxRange=1200;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			autoFire=0;
			burst=3;
			aiRateOfFire=12;
			aiRateOfFireDistance=1400;
			aiRateOfFireDispersion=4;
			minRange=1200;
			minRangeProbab=0.050000001;
			midRange=1400;
			midRangeProbab=0.5;
			maxRange=1600;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefY=25;
		aiDispersionCoefX=20;
	};
	class MMG_03_F: MMG_03_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_03_F";
		scope=2;
		displayName="PKP 7.62 mm";
	};
	class MMG_03_MRCO_F: MMG_03_F
	{
		author="$STR_A3_Night515";
		_generalMacro="MMG_03_MRCO_F";
		baseWeapon="MMG_03_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_MMG_03_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="PKP 7.62 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_MMG_03_F
			{
				weapon="MMG_03_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_200Rnd_762x54_Box
			{
				magazine="200Rnd_762x54_Box";
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
