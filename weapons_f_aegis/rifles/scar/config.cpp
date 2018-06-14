class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_SCAR
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_arifle_Mk16_blk_F",
			"Weapon_arifle_Mk16_F",
			"Weapon_arifle_Mk16_GL_blk_F",
			"Weapon_arifle_Mk16_GL_F",
			"Weapon_arifle_Mk16_GL_khk_F",
			"Weapon_arifle_Mk16_khk_F",
			"Weapon_arifle_Mk16_long_blk_F",
			"Weapon_arifle_Mk16_long_F",
			"Weapon_arifle_Mk16_long_khk_F",
			"Weapon_arifle_Mk16_short_blk_F",
			"Weapon_arifle_Mk16_short_F",
			"Weapon_arifle_Mk16_short_khk_F",
			"Weapon_arifle_Mk17_blk_F",
			"Weapon_arifle_Mk17_F",
			"Weapon_arifle_Mk17_GL_blk_F",
			"Weapon_arifle_Mk17_GL_F",
			"Weapon_arifle_Mk17_GL_khk_F",
			"Weapon_arifle_Mk17_khk_F",
			"Weapon_arifle_Mk17_long_blk_F",
			"Weapon_arifle_Mk17_long_F",
			"Weapon_arifle_Mk17_long_khk_F",
			"Weapon_arifle_Mk17_short_blk_F",
			"Weapon_arifle_Mk17_short_F",
			"Weapon_arifle_Mk17_short_khk_F"
		};
		weapons[]=
		{
			"arifle_Mk16_blk_F",
			"arifle_Mk16_F",
			"arifle_Mk16_GL_blk_F",
			"arifle_Mk16_GL_F",
			"arifle_Mk16_GL_khk_F",
			"arifle_Mk16_khk_F",
			"arifle_Mk16_long_blk_F",
			"arifle_Mk16_long_F",
			"arifle_Mk16_long_khk_F",
			"arifle_Mk16_short_blk_F",
			"arifle_Mk16_short_F",
			"arifle_Mk16_short_khk_F",
			"arifle_Mk17_blk_F",
			"arifle_Mk17_F",
			"arifle_Mk17_GL_blk_F",
			"arifle_Mk17_GL_F",
			"arifle_Mk17_GL_khk_F",
			"arifle_Mk17_khk_F",
			"arifle_Mk17_long_blk_F",
			"arifle_Mk17_long_F",
			"arifle_Mk17_long_khk_F",
			"arifle_Mk17_short_blk_F",
			"arifle_Mk17_short_F",
			"arifle_Mk17_short_khk_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
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
	class arifle_Mk16_base_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_base_F";
		scope=0;
		displayName="$STR_A3_CfgWeapons_arifle_Mk160";
		descriptionShort="$STR_A3_CfgWeapons_arifle_Mk161";
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk16_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\Anim\SCAR.rtm"
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
		initSpeed=870;
		recoil="recoil_spar";
		maxZeroing=800;
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
			libTextDesc="$STR_A3_CfgWeapons_arifle_Mk16_Library0";
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
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=100;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\dry_SCAR",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\reload_SCAR",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\firemode_SCAR",
			0.17782794,
			1,
			5
		};
		modes[]=
		{
			"Single",
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
					"Mk16_Shot_SoundSet",
					"Mk16_Tail_SoundSet",
					"Mk16_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk16_silencerShot_SoundSet",
					"Mk16_silencerTail_SoundSet",
					"Mk16_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk16_Shot_SoundSet",
					"Mk16_Tail_SoundSet",
					"Mk16_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk16_silencerShot_SoundSet",
					"Mk16_silencerTail_SoundSet",
					"Mk16_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
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
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class arifle_Mk16_F: arifle_Mk16_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_F";
		baseWeapon="arifle_Mk16_F";
		scope=2;
		displayName="Mk16 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_blk_F: arifle_Mk16_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_blk_F";
		baseWeapon="arifle_Mk16_blk_F";
		scope=2;
		displayName="Mk16 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_khk_F: arifle_Mk16_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_khk_F";
		baseWeapon="arifle_Mk16_khk_F";
		scope=2;
		displayName="Mk16 5.56 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_short_base_F: arifle_Mk16_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_short_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk16_short_F.p3d";
		reloadAction="GestureReloadSPAR_01";
		inertia=0.40000001;
		aimTransitionSpeed=1.1;
		dexterity=1.5;
		initSpeed=790;
		maxZeroing=600;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
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
	class arifle_Mk16_short_F: arifle_Mk16_short_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_short_F";
		baseWeapon="arifle_Mk16_short_F";
		scope=2;
		displayName="Mk16 CQC 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_short_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_short_blk_F: arifle_Mk16_short_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_short_blk_F";
		baseWeapon="arifle_Mk16_short_blk_F";
		scope=2;
		displayName="Mk16 CQC 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_short_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_short_khk_F: arifle_Mk16_short_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_short_khk_F";
		baseWeapon="arifle_Mk16_short_khk_F";
		scope=2;
		displayName="Mk16 CQC 5.56 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_short_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_GL_base_F: arifle_Mk16_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_GL_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk16_GL_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\Anim\SCAR_GL.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
			mass=120;
		};
		class EGLM: UGL_F
		{
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
			reloadAction="GestureReloadTrgUGL";
			reloadMagazineSound[]=
			{
				"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_UGL_reload",
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
	class arifle_Mk16_GL_F: arifle_Mk16_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_GL_F";
		baseWeapon="arifle_Mk16_GL_F";
		scope=2;
		displayName="Mk16 EGLM 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_GL_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\EGLM_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_GL_blk_F: arifle_Mk16_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_GL_blk_F";
		baseWeapon="arifle_Mk16_GL_blk_F";
		scope=2;
		displayName="Mk16 EGLM 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_GL_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\EGLM_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_GL_khk_F: arifle_Mk16_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_GL_khk_F";
		baseWeapon="arifle_Mk16_GL_khk_F";
		scope=2;
		displayName="Mk16 EGLM 5.56 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_GL_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\EGLM_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk16_long_base_F: arifle_Mk16_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_long_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk16_long_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadAction="GestureReloadSPAR_02";
		magazines[]=
		{
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F"
		};
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		dexterity=1.3;
		initSpeed=814;
		recoil="recoil_spar_lsw";
		maxZeroing=1000;
		cursor="mg";
		DLC="Aegis";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_S_reload",
			1,
			1,
			10
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"single_medium_optics1",
			"single_medium_optics2",
			"single_far_optics1",
			"fullauto_medium"
		};
		class Single: Single
		{
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00073000003;
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
	class arifle_Mk16_long_F: arifle_Mk16_long_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_long_F";
		baseWeapon="arifle_Mk16_long_F";
		scope=2;
		displayName="Mk16S 5.56 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_long_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
		DLC="Aegis";
	};
	class arifle_Mk16_long_blk_F: arifle_Mk16_long_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_long_blk_F";
		baseWeapon="arifle_Mk16_long_blk_F";
		scope=2;
		displayName="Mk16S 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_long_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
		DLC="Aegis";
	};
	class arifle_Mk16_long_khk_F: arifle_Mk16_long_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk16_long_khk_F";
		baseWeapon="arifle_Mk16_long_khk_F";
		scope=2;
		displayName="Mk16S 5.56 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk16_long_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_L_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
		DLC="Aegis";
	};
	class arifle_Mk17_base_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_base_F";
		scope=0;
		displayName="$STR_A3_CfgWeapons_arifle_Mk170";
		descriptionShort="$STR_A3_CfgWeapons_arifle_Mk171";
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk17_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\Anim\SCAR.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		magazines[]=
		{
			"20Rnd_762x51_Mag"
		};
		htMin=8;
		htMax=920;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		initSpeed=714;
		recoil="recoil_spar_dmr";
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
			libTextDesc="$STR_A3_CfgWeapons_arifle_Mk17_Library0";
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
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=110;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\dry_SCAR",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\reload_SCAR",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\firemode_SCAR",
			0.17782794,
			1,
			5
		};
		modes[]=
		{
			"Single",
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
					"Mk17_Shot_SoundSet",
					"Mk17_Tail_SoundSet",
					"Mk17_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk17_silencerShot_SoundSet",
					"Mk17_silencerTail_SoundSet",
					"Mk17_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.00116;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mk17_Shot_SoundSet",
					"Mk17_Tail_SoundSet",
					"Mk17_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Mk17_silencerShot_SoundSet",
					"Mk17_silencerTail_SoundSet",
					"Mk17_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.00116;
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
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class arifle_Mk17_F: arifle_Mk17_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_F";
		baseWeapon="arifle_Mk17_F";
		scope=2;
		displayName="Mk17 7.62 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_blk_F: arifle_Mk17_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_blk_F";
		baseWeapon="arifle_Mk17_blk_F";
		scope=2;
		displayName="Mk17 7.62 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_khk_F: arifle_Mk17_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_khk_F";
		baseWeapon="arifle_Mk17_khk_F";
		scope=2;
		displayName="Mk17 7.62 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_short_base_F: arifle_Mk17_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_short_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk17_short_F.p3d";
		reloadAction="GestureReloadSPAR_01";
		inertia=0.5;
		aimTransitionSpeed=1.1;
		dexterity=1.5;
		initSpeed=634;
		maxZeroing=800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
		class Single: Single
		{
			dispersion=0.00145;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00145;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class arifle_Mk17_short_F: arifle_Mk17_short_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_short_F";
		baseWeapon="arifle_Mk17_short_F";
		scope=2;
		displayName="Mk17 CQC 7.62 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_short_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_short_blk_F: arifle_Mk17_short_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_short_blk_F";
		baseWeapon="arifle_Mk17_short_blk_F";
		scope=2;
		displayName="Mk17 CQC 7.62 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_short_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_short_khk_F: arifle_Mk17_short_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_short_khk_F";
		baseWeapon="arifle_Mk17_short_khk_F";
		scope=2;
		displayName="Mk17 CQC 7.62 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_short_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_GL_base_F: arifle_Mk17_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_GL_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk17_GL_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\Anim\SCAR_GL.rtm"
		};
		reloadAction="GestureReloadSPAR_01";
		initSpeed=634;
		maxZeroing=800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
			mass=110;
		};
		class Single: Single
		{
			dispersion=0.00145;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00145;
		};
		class EGLM: UGL_F
		{
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
			reloadAction="GestureReloadTrgUGL";
			reloadMagazineSound[]=
			{
				"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\SCAR_UGL_reload",
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
	class arifle_Mk17_GL_F: arifle_Mk17_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_GL_F";
		baseWeapon="arifle_Mk17_GL_F";
		scope=2;
		displayName="Mk17 EGLM 7.62 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_GL_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\EGLM_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_GL_blk_F: arifle_Mk17_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_GL_blk_F";
		baseWeapon="arifle_Mk17_GL_blk_F";
		scope=2;
		displayName="Mk17 EGLM 7.62 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_GL_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\EGLM_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_GL_khk_F: arifle_Mk17_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_GL_khk_F";
		baseWeapon="arifle_Mk17_GL_khk_F";
		scope=2;
		displayName="Mk17 EGLM 7.62 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_GL_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\EGLM_khk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_long_base_F: arifle_Mk17_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_long_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SCAR\Mk17_long_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadAction="GestureReloadSPAR_01";
		inertia=0.80000001;
		aimTransitionSpeed=0.69999999;
		dexterity=1.3;
		initSpeed=814;
		maxZeroing=1400;
		cursor="srifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
		};
		modes[]=
		{
			"Single",
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
	class arifle_Mk17_long_F: arifle_Mk17_long_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_long_F";
		baseWeapon="arifle_Mk17_long_F";
		scope=2;
		displayName="Mk17 Sniper 7.62 mm";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_long_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_long_blk_F: arifle_Mk17_long_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_long_blk_F";
		baseWeapon="arifle_Mk17_long_blk_F";
		scope=2;
		displayName="Mk17 Sniper 7.62 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_long_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_blk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_blk_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_Mk17_long_khk_F: arifle_Mk17_long_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_Mk17_long_khk_F";
		baseWeapon="arifle_Mk17_long_khk_F";
		scope=2;
		displayName="Mk17 Sniper 7.62 mm (Khaki)";
		picture="\A3\Weapons_F_Aegis\Rifles\SCAR\Data\UI\gear_Mk17_long_khk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_H_khk_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_acc_khk_CO.paa"
		};
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_arifle_Mk16_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_F
			{
				weapon="arifle_Mk16_F";
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
	class Weapon_arifle_Mk16_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_blk_F
			{
				weapon="arifle_Mk16_blk_F";
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
	class Weapon_arifle_Mk16_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 5.56 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_khk_F
			{
				weapon="arifle_Mk16_khk_F";
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
	class Weapon_arifle_Mk16_short_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 CQC 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_short_F
			{
				weapon="arifle_Mk16_short_F";
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
	class Weapon_arifle_Mk16_short_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 CQC 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_short_blk_F
			{
				weapon="arifle_Mk16_short_blk_F";
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
	class Weapon_arifle_Mk16_short_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 CQC 5.56 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_short_khk_F
			{
				weapon="arifle_Mk16_short_khk_F";
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
	class Weapon_arifle_Mk16_GL_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 EGLM 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_GL_F
			{
				weapon="arifle_Mk16_GL_F";
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
	class Weapon_arifle_Mk16_GL_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 EGLM 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_GL_blk_F
			{
				weapon="arifle_Mk16_GL_blk_F";
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
	class Weapon_arifle_Mk16_GL_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16 EGLM 5.56 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_GL_khk_F
			{
				weapon="arifle_Mk16_GL_khk_F";
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
	class Weapon_arifle_Mk16_long_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16S 5.56 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_long_F
			{
				weapon="arifle_Mk16_long_F";
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
	class Weapon_arifle_Mk16_long_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16S 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_MachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_long_blk_F
			{
				weapon="arifle_Mk16_long_blk_F";
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
	class Weapon_arifle_Mk16_long_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk16S 5.56 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk16_long_khk_F
			{
				weapon="arifle_Mk16_long_khk_F";
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
	class Weapon_arifle_Mk17_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 7.62 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_F
			{
				weapon="arifle_Mk17_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 7.62 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_blk_F
			{
				weapon="arifle_Mk17_blk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 7.62 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_khk_F
			{
				weapon="arifle_Mk17_khk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_short_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 CQC 7.62 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_short_F
			{
				weapon="arifle_Mk17_short_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_short_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 CQC 7.62 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_short_blk_F
			{
				weapon="arifle_Mk17_short_blk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_short_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 CQC 7.62 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_short_khk_F
			{
				weapon="arifle_Mk17_short_khk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_GL_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 EGLM 7.62 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_GL_F
			{
				weapon="arifle_Mk17_GL_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_GL_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 EGLM 7.62 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_GL_blk_F
			{
				weapon="arifle_Mk17_GL_blk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_GL_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 EGLM 7.62 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_GL_khk_F
			{
				weapon="arifle_Mk17_GL_khk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_long_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 Sniper 7.62 mm";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_long_F
			{
				weapon="arifle_Mk17_long_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_long_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 Sniper 7.62 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_long_blk_F
			{
				weapon="arifle_Mk17_long_blk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=1;
			};
		};
	};
	class Weapon_arifle_Mk17_long_khk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Mk17 Sniper 7.62 mm (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_Mk17_long_khk_F
			{
				weapon="arifle_Mk17_long_khk_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
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
