class CfgPatches
{
	class A3_Weapons_F_Rus_GrenadeLaunchers_RG6
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rus"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_GL_RG6_F"
		};
		weapons[]=
		{
			"GL_RG6_F"
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
	class GL_RG6_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="GL_RG6_F";
		baseWeapon="GL_RG6_F";
		scope=2;
		displayName="RG-6 40 mm";
		model="\A3\Weapons_F_Rus\GrenadeLaunchers\RG6\RG6_F.p3d";
		picture="\A3\Weapons_F_Rus\GrenadeLaunchers\RG6\Data\UI\icon_GL_RG6_F_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_GL_CA.paa";
		magazines[]=
		{
			"6Rnd_HE_Grenade_Cylinder"
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
			libTextDesc="$STR_A3_CfgWeapons_GL_RG6_F_Library0";
		};
		useModelOptics=0;
		useExternalOptic=0;
		cameraDir="OP_look";
		discreteDistance[]={100,150,200,250,300,350,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300",
			"OP_eye_350",
			"OP_eye_400"
		};
		discreteDistanceInitIndex=1;
		initSpeed=75;
		descriptionShort="$STR_A3_CfgWeapons_GL_RG6_F1";
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
			class PointerSlot
			{
			};
			class UnderbarrelSlot
			{
			};
			mass=170;
		};
		DLC="Rus";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_GL_RG6_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="RG-6 40 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_GrenadeLaunchers";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_GL_RG6_F
			{
				weapon="GL_RG6_F";
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
	timepacked="1528020994";
};
