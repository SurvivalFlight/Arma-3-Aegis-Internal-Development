class CfgPatches
{
	class A3_Weapons_F_Rus_Shotguns_SK12
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rus"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_sgun_SK12_F"
		};
		weapons[]=
		{
			"sgun_SK12_F"
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
	class sgun_SK12_F: Rifle_Short_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="sgun_SK12_F";
		baseWeapon="sgun_SK12_F";
		scope=2;
		displayName="SK-12 12 Gauge";
		model="\A3\Weapons_F_Rus\Shotguns\SK12\SK12_F.p3d";
		magazines[]=
		{
			"8Rnd_12Gauge_Pellets",
			"8Rnd_12Gauge_Slug"
		};
		maxZeroing=300;
		reloadAction="GestureReloadAKM";
		recoil="recoil_sk12";
		cursor="sgun";
		discreteDistanceInitIndex=0;
		aiDispersionCoefY=8;
		aiDispersionCoefX=6;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\AKM.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
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
		aimTransitionSpeed=1.1;
		dexterity=1.3;
		initSpeed=375;
		picture="\A3\Weapons_F_Rus\Shotguns\SK12\Data\UI\icon_sgun_SK12_F_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort="$STR_A3_CfgWeapons_sgun_SK12_F1";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Rus\Shotguns\SK12\Data\SK12_F_CO.paa"
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_sgun_SK12_F_Library0";
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
			"A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\dry_SK12",
			0.17782794,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",
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
					"SK12_Shot_SoundSet",
					"SK12_Tail_SoundSet",
					"SK12_interiorTail_SoundSet"
				};
			};
			dispersion=0.00116;
			reloadTime=0.2;
			minRange=1;
			minRangeProbab=0.5;
			midRange=60;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
		DLC="Rus";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_sgun_SK12_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="SK-12 12 Gauge";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Shotguns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_sgun_SK12_F
			{
				weapon="sgun_SK12_F";
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
	timepacked="1528020994";
};
