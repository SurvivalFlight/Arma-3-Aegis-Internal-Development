class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_M8
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_arifle_M8_short_F",
			"Weapon_arifle_M8_F",
			"Weapon_arifle_M8_GL_F",
			"Weapon_arifle_M8_long_F",
			"Weapon_arifle_M8_SAW_F"
		};
		weapons[]=
		{
			"arifle_M8_short_F",
			"arifle_M8_F",
			"arifle_M8_GL_F",
			"arifle_M8_long_F",
			"arifle_M8_SAW_F"
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
	class arifle_M8_base_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_base_F";
		scope=0;
		displayName="M8 Carbine 5.56 mm";
		descriptionShort="$STR_A3_CfgWeapons_arifle_M81";
		model="\A3\Weapons_F_Aegis\Rifles\M8\M8_F.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\M8\Data\Anim\M8.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green",
			"20Rnd_556x45_Stanag",
			"20Rnd_556x45_Stanag_Tracer_Red",
			"20Rnd_556x45_Stanag_Tracer_Green",
			"20Rnd_556x45_Stanag_Tracer_Yellow",
			"20Rnd_556x45_Stanag_red",
			"20Rnd_556x45_Stanag_green"
		};
		htMin=8;
		htMax=920;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=815;
		recoil="recoil_mk16";
		maxZeroing=1000;
		DLC="Aegis";
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
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_M8_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\Data_F\Proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_M",
					"muzzle_snds_M_khk_F",
					"muzzle_snds_M_snd_F",
					"muzzle_mzls_M"
				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			mass=120;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\dry_M8",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\reload_M8",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\firemode_M8",
			0.17782794,
			1,
			5
		};
		class OpticsModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="opticView";
				visionMode[]={};
			};
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M8_Shot_SoundSet",
					"M8_Tail_SoundSet",
					"M8_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M8_silencerShot_SoundSet",
					"M8_silencerTail_SoundSet",
					"M8_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M8_Shot_SoundSet",
					"M8_Tail_SoundSet",
					"M8_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M8_silencerShot_SoundSet",
					"M8_silencerTail_SoundSet",
					"M8_silencerInteriorTail_SoundSet"
				};
			};
			burst=3;
			reloadTime=0.079999998;
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
					"M8_Shot_SoundSet",
					"M8_Tail_SoundSet",
					"M8_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"M8_silencerShot_SoundSet",
					"M8_silencerTail_SoundSet",
					"M8_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.079999998;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
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
	class arifle_M8_F: arifle_M8_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_F";
		baseWeapon="arifle_M8_F";
		scope=2;
		displayName="M8 Carbine 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\M8\Data\UI\gear_M8_X_CA.paa";
		DLC="Aegis";
	};
	class arifle_M8_short_base_F: arifle_M8_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_short_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\M8\M8_short_F.p3d";
		reloadAction="GestureReloadSPAR_01";
		inertia=0.40000001;
		aimTransitionSpeed=1.1;
		dexterity=1.5;
		initSpeed=735;
		maxZeroing=800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot
			{
			};
			mass=100;
		};
		class Single: Single
		{
			dispersion=0.00116;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00116;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class arifle_M8_short_F: arifle_M8_short_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_short_F";
		baseWeapon="arifle_M8_short_F";
		scope=2;
		displayName="M8 Compact 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\M8\Data\UI\gear_M8_short_X_CA.paa";
		DLC="Aegis";
	};
	class arifle_M8_GL_base_F: arifle_M8_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_GL_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\M8\M8_GL_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_GL_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\M8\Data\Anim\M8_GL.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
		};
		class EGLM: UGL_F
		{
			displayName="$STR_A3_CfgWeapons_arifle_SPAR_01_GL_base_F_EGLM0";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadSPARUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\XM_UGL_reload",
				0.79432821,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		muzzles[]=
		{
			"this",
			"EGLM"
		};
	};
	class arifle_M8_GL_F: arifle_M8_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_GL_F";
		baseWeapon="arifle_M8_GL_F";
		scope=2;
		displayName="M8 GL 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\M8\Data\UI\gear_M8_GL_X_CA.paa";
		DLC="Aegis";
	};
	class arifle_M8_SAW_base_F: arifle_M8_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_SAW_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\M8\M8_SAW_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_mg_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\M8\Data\Anim\M8.rtm"
		};
		reloadAction="GestureReloadSPAR_02";
		magazines[]=
		{
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F"
		};
		inertia=0.69999999;
		aimTransitionSpeed=0.89999998;
		dexterity=1.4;
		initSpeed=916;
		recoil="recoil_spar_lsw";
		maxZeroing=1200;
		cursor="mg";
		DLC="Aegis";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\XM_SAW_reload",
			1,
			1,
			10
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
		};
		modes[]=
		{
			"FullAuto",
			"Burst",
			"Single",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Single
		{
			dispersion=0.00057999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class Burst: Burst
		{
			dispersion=0.00057999999;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00057999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: single_medium_optics1
		{
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics2: single_medium_optics2
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
	};
	class arifle_M8_SAW_F: arifle_M8_SAW_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_SAW_F";
		baseWeapon="arifle_M8_SAW_F";
		scope=2;
		displayName="M8 SAW 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\M8\Data\UI\gear_M8_SAW_X_CA.paa";
		DLC="Aegis";
	};
	class arifle_M8_long_base_F: arifle_M8_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_long_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\M8\M8_long_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\M8\Data\Anim\M8.rtm"
		};
		reloadAction="GestureReloadSPAR_02";
		inertia=0.69999999;
		aimTransitionSpeed=0.89999998;
		dexterity=1.4;
		initSpeed=916;
		recoil="recoil_spar_lsw";
		maxZeroing=1400;
		cursor="srifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"single_far_optics1",
			"fullauto_medium"
		};
		class Single: Single
		{
			dispersion=0.00057999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class Burst: Burst
		{
			dispersion=0.00057999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00057999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: single_medium_optics1
		{
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics2: single_medium_optics2
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
	};
	class arifle_M8_long_F: arifle_M8_long_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_M8_long_F";
		baseWeapon="arifle_M8_long_F";
		scope=2;
		displayName="M8 Sharpshooter 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\M8\Data\UI\gear_M8_long_X_CA.paa";
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_arifle_M8_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="M8 Carbine 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_M8_F
			{
				weapon="arifle_M8_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=1;
			};
		};
	};
	class Weapon_arifle_M8_short_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="M8 Compact 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_M8_short_F
			{
				weapon="arifle_M8_short_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=1;
			};
		};
	};
	class Weapon_arifle_M8_GL_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="M8 GL 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_M8_GL_F
			{
				weapon="arifle_M8_GL_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=1;
			};
		};
	};
	class Weapon_arifle_M8_SAW_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="M8 SAW 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_M8_SAW_F
			{
				weapon="arifle_M8_SAW_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=1;
			};
		};
	};
	class Weapon_arifle_M8_long_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="M8 Sharpshooter 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_M8_long_F
			{
				weapon="arifle_M8_long_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
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
