class CfgPatches
{
	class A3_Weapons_F_Aegis_LongRangeRifles_WF50
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_srifle_WF50_F"
		};
		weapons[]=
		{
			"srifle_WF50_F",
			"srifle_WF50_LRPS_F"
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
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class WF50_base_F: Rifle_Long_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="WF50_base_F";
		scope=2;
		magazines[]=
		{
			"5Rnd_127x99_Mag",
			"5Rnd_127x99_SLAP_Mag"
		};
		recoil="recoil_wf50";
		maxZeroing=2200;
		cursor="srifle";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=1.25;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\LongRangeRifles\WF50\Data\Anim\WF50.rtm"
		};
		opticsPPEffects[]={};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		distanceZoomMin=100;
		distanceZoomMax=350;
		drySound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\dry_WF50",
			0.50118721,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\reload_WF50",
			1,
			1,
			10
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
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
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
				soundsetshot[]=
				{
					"WF50_Shot_SoundSet",
					"WF50_Tail_SoundSet",
					"WF50_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			reloadTime=0.25;
			dispersion=0.00044;
			minRange=2;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
	};
	class srifle_WF50_F: WF50_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_WF50_F";
		baseWeapon="srifle_WF50_F";
		scope=2;
		model="\A3\Weapons_F_Aegis\LongRangeRifles\WF50\WF50_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=500;
			class MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.55000001,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.55000001,0.30000001};
				iconScale=0.2;
			};
		};
		inertia=1.5;
		aimTransitionSpeed=0.5;
		dexterity=1.2;
		initSpeed=930;
		class ItemInfo
		{
			priority=1;
		};
		displayName="$STR_A3_CfgWeapons_srifle_WF500";
		picture="\A3\Weapons_F_Aegis\LongRangeRifles\WF50\Data\UI\gear_WF50_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_srifle_WF50_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_srifle_WF501";
		DLC="Aegis";
	};
	class srifle_WF50_LRPS_F: srifle_WF50_F
	{
		author="$STR_A3_Night515";
		_generalMacro="srifle_WF50_LRPS_F";
		baseWeapon="srifle_WF50_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_LRPS";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_srifle_WF50_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_srifle_WF500";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_srifle_WF50_F
			{
				weapon="srifle_WF50_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_5Rnd_127x99_Mag
			{
				magazine="5Rnd_127x99_Mag";
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
