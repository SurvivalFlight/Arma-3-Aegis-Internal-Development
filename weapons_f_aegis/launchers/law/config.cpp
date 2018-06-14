class CfgPatches
{
	class A3_Weapons_F_Aegis_Launchers_LAW
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Launchers_LAW"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_launch_LAW_F"
		};
		weapons[]=
		{
			"launch_LAW_F"
		};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_LAW_F: Launcher_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="launch_LAW_F";
		scope=2;
		displayName="$STR_A3_CfgWeapons_launch_LAW0";
		descriptionShort="$STR_A3_CfgWeapons_launch_LAW1";
		model="\A3\Weapons_F_Aegis\Launchers\LAW\LAW_F.p3d";
		picture="\A3\Weapons_F_Aegis\Launchers\LAW\Data\UI\gear_LAW_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_AT_CA.paa";
		magazines[]=
		{
			"LAW_F"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Launchers\LAW\Data\LAW_CO.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Launchers\LAW\Data\Anim\LAW.rtm"
		};
		reloadAction="GestureReloadRPG";
		recoil="recoil_law";
		maxZeroing=500;
		weaponInfoType="RscWeaponZeroing";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_LAW_Library0";
		};
		modelOptics="-";
		class OpticsModes
		{
			class irons
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]={};
				opticsZoomMin=0.375;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=200;
				distanceZoomMax=500;
				cameraDir="look";
				discreteDistance[]={50,100,150,200,250,300,350};
				discreteDistanceInitIndex=0;
				discreteDistanceCameraPoint[]=
				{
					"eye_50",
					"eye_100",
					"eye_150",
					"eye_200",
					"eye_250",
					"eye_300",
					"eye_350"
				};
			};
		};
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
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
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=150;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.80000001;
			maxRange=250;
			maxRangeProbab=0.1;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			1,
			1,
			10
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.80000001;
		aimTransitionSpeed=0.60000002;
		dexterity=1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=40;
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_launch_LAW_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_launch_LAW0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class _xx_launch_LAW_F
			{
				weapon="launch_LAW_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_LAW_F
			{
				magazine="LAW_F";
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
