class CfgPatches
{
	class A3_Weapons_F_Rus_Rifles_RPK
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rus"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_arifle_RPK_F"
		};
		weapons[]=
		{
			"arifle_RPK_ACO_Snds_F",
			"arifle_RPK_F",
			"arifle_RPK_Snds_F"
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_RPK_base_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_RPK_base_F";
		scope=0;
		displayName="RPK-107";
		descriptionShort="$STR_A3_CfgWeapons_arifle_AKS_base_F1";
		model="\A3\Weapons_F_Rus\Rifles\RPK\RPK_F.p3d";
		UIPicture="\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
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
			"45Rnd_545x39_Mag_F",
			"45Rnd_545x39_Mag_Green_F",
			"45Rnd_545x39_Mag_Tracer_F",
			"45Rnd_545x39_Mag_Tracer_Green_F"
		};
		htMin=7;
		htMax=880;
		inertia=0.60000002;
		aimTransitionSpeed=0.69999999;
		dexterity=1.5;
		initSpeed=910;
		recoil="recoil_rpk";
		maxZeroing=1000;
		cursor="mg";
		DLC="Rus";
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
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
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
			libTextDesc="$STR_A3_CfgWeapons_arifle_RPK_base_F0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\Data_F\Proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_545_F"
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
			mass=150;
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
			"Burst",
			"Single",
			"Burst_medium",
			"single_medium_optics1",
			"single_medium_optics2"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AK107_Shot_SoundSet",
					"AK107_Tail_SoundSet",
					"AK107_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK107_silencerShot_SoundSet",
					"AK107_silencerTail_SoundSet",
					"AK107_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.066;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AK107_Shot_SoundSet",
					"AK107_Tail_SoundSet",
					"AK107_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK107_silencerShot_SoundSet",
					"AK107_silencerTail_SoundSet",
					"AK107_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.066;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"AK107_Shot_SoundSet",
					"AK107_Tail_SoundSet",
					"AK107_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK107_silencerShot_SoundSet",
					"AK107_silencerTail_SoundSet",
					"AK107_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.066;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Burst_medium: Burst
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
	class arifle_RPK_F: arifle_RPK_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_RPK_F";
		baseWeapon="arifle_RPK_F";
		scope=2;
		displayName="RPK-107 5.45 mm";
		picture="\A3\Weapons_F_Rus\Rifles\RPK\Data\UI\icon_arifle_RPK_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Rus\Rifles\AK107\Data\AK107_F_1_CO.paa",
			"\A3\Weapons_F_Rus\Rifles\AK107\Data\AK107_F_2_CO.paa",
			"\A3\Weapons_F_Rus\Rifles\AK107\Data\AK107_F_3_CO.paa"
		};
		DLC="Rus";
	};
	class arifle_RPK_Snds_F: arifle_RPK_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_RPK_Snds_F";
		baseWeapon="arifle_RPK_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_545_F";
			};
		};
	};
	class arifle_RPK_ACO_Snds_F: arifle_RPK_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_RPK_ACO_Snds_F";
		baseWeapon="arifle_RPK_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_545_F";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_arifle_RPK_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="RPK-107 5.45 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_RPK_F
			{
				weapon="arifle_RPK_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
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
