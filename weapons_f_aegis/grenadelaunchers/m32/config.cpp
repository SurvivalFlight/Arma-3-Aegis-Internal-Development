class CfgPatches
{
	class A3_Weapons_F_Aegis_GrenadeLaunchers_M32
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_GL_M32_F"
		};
		weapons[]=
		{
			"GL_M32_F"
		};
	};
};
class SlotInfo;
class PointerSlot;
class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class GL_M32_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="GL_M32_F";
		baseWeapon="GL_M32_F";
		scope=2;
		displayName="M32 40 mm";
		model="\A3\Weapons_F_Aegis\GrenadeLaunchers\M32\M32_F.p3d";
		picture="\A3\Weapons_F_Aegis\GrenadeLaunchers\M32\Data\UI\gear_M32_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		magazines[]=
		{
			"6Rnd_HE_Grenade_Cylinder"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\GrenadeLaunchers\M32\Data\Anim\M32.rtm"
		};
		recoil="recoil_default";
		maxZeroing=400;
		drySound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\M32\dry_M32",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\M32\reload_M32",
			1,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\M32\firemode_M32",
			0.17782794,
			1,
			5
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
					"GL_Shot_SoundSet",
					"GL_Tail_SoundSet",
					"GL_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.333;
			dispersion=0.00116;
			recoil="M240Recoil";
			recoilProne="M240Recoil";
			minRange=50;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.050000001;
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_GL_M32_F_Library0";
		};
		useModelOptics=0;
		useExternalOptic=0;
		cameraDir="OP_look";
		discreteDistance[]={50,75,100,150,200,250,300,350};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300",
			"OP_eye_350"
		};
		discreteDistanceInitIndex=1;
		initSpeed=75;
		descriptionShort="$STR_A3_CfgWeapons_GL_M32_F1";
		inertia=0.89999998;
		aimTransitionSpeed=0.80000001;
		dexterity=1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderbarrelSlot
			{
			};
			mass=150;
		};
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_GL_M32_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="M32 40 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_GrenadeLaunchers";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_GL_M32_F
			{
				weapon="GL_M32_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_6Rnd_HE_Grenade_Cylinder
			{
				magazine="6Rnd_HE_Grenade_Cylinder";
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
