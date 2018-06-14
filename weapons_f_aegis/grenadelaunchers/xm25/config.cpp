class CfgPatches
{
	class A3_Weapons_F_Aegis_GrenadeLaunchers_XM25
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_GL_XM25_F"
		};
		weapons[]=
		{
			"GL_XM25_F"
		};
	};
};
class SlotInfo;
class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class GL_XM25_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="GL_XM25_F";
		baseWeapon="GL_XM25_F";
		scope=2;
		displayName="Punisher 25 mm";
		model="\A3\Weapons_F_Aegis\GrenadeLaunchers\XM25\XM25_F.p3d";
		picture="\A3\Weapons_F_Aegis\GrenadeLaunchers\XM25\Data\UI\gear_XM25_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		weaponInfoType="RscOptics_punisher";
		modelOptics="\A3\Weapons_F\Acc\reticle_cdtes";
		magazines[]=
		{
			"5Rnd_HE_Grenade_mag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\GrenadeLaunchers\XM25\Data\Anim\XM25.rtm"
		};
		reloadAction="GestureReloadKatiba";
		recoil="recoil_default";
		maxZeroing=1000;
		drySound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\dry_XM25",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\reload_XM25",
			1,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\firemode_XM25",
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
			reloadTime=0.25;
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
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\GrenadeLaunchers\XM25\Data\XM25_CO.paa"
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_GL_XM25_Library0";
		};
		initSpeed=210;
		descriptionShort="$STR_A3_CfgWeapons_GL_XM251";
		inertia=0.80000001;
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
			mass=110;
		};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.1875;
		opticsZoomMax=0.0625;
		opticsZoomInit=0.1875;
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=1;
				opticsZoomMin=0.1875;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.1875;
				distanceZoomMin=100;
				distanceZoomMax=100;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={2,3};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.1875,0.0625};
				discreteInitIndex=0;
			};
		};
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_GL_XM25_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Punisher 25 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_GrenadeLaunchers";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_GL_XM25_F
			{
				weapon="GL_XM25_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_5Rnd_HE_Grenade_mag
			{
				magazine="5Rnd_HE_Grenade_mag";
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
