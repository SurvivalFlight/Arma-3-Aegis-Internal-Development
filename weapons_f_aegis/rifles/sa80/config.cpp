class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_SA80
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_arifle_SA80_C_blk_F",
			"Weapon_arifle_SA80_C_snd_F",
			"Weapon_arifle_SA80_blk_F",
			"Weapon_arifle_SA80_GL_blk_F",
			"Weapon_arifle_SA80_GL_snd_F",
			"Weapon_arifle_SA80_LSW_blk_F",
			"Weapon_arifle_SA80_LSW_snd_F",
			"Weapon_arifle_SA80_snd_F"
		};
		weapons[]=
		{
			"arifle_SA80_C_snd_F",
			"arifle_SA80_blk_ACO_pointer_F",
			"arifle_SA80_blk_ACO_pointer_snds_F",
			"arifle_SA80_blk_ERCO_pointer_F",
			"arifle_SA80_blk_ERCO_pointer_snds_F",
			"arifle_SA80_blk_F",
			"arifle_SA80_C_blk_ACO_F",
			"arifle_SA80_C_blk_ACO_pointer_F",
			"arifle_SA80_C_blk_ACO_pointer_snds_F",
			"arifle_SA80_C_blk_F",
			"arifle_SA80_C_blk_Holo_F",
			"arifle_SA80_C_blk_Holo_pointer_F",
			"arifle_SA80_GL_blk_ACO_pointer_F",
			"arifle_SA80_GL_blk_ERCO_pointer_F",
			"arifle_SA80_GL_blk_F",
			"arifle_SA80_GL_blk_Holo_pointer_F",
			"arifle_SA80_GL_blk_Holo_pointer_snds_F",
			"arifle_SA80_GL_snd_F",
			"arifle_SA80_LSW_blk_F",
			"arifle_SA80_LSW_blk_pointer_F",
			"arifle_SA80_LSW_blk_pointer_snds_F",
			"arifle_SA80_LSW_snd_F",
			"arifle_SA80_snd_F"
		};
	};
};
class Mode_SemiAuto;
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
	class arifle_SA80_base_F: Rifle_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_base_F";
		scope=0;
		displayName="$STR_A3_CfgWeapons_arifle_SA80_F0";
		descriptionShort="$STR_A3_CfgWeapons_arifle_SA80_F1";
		model="\A3\Weapons_F_Aegis\Rifles\SA80\SA80_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		reloadAction="GestureReloadTRG";
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
		aimTransitionSpeed=0.89999998;
		dexterity=1.6;
		initSpeed=940;
		recoil="recoil_spar";
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
			libTextDesc="$STR_A3_CfgWeapons_arifle_SA80_F_Library0";
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
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			mass=140;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		drySound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\dry_SA80",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\reload_SA80",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\firemode_SA80",
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
					"SA80_Shot_SoundSet",
					"SA80_Tail_SoundSet",
					"SA80_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SA80_silencerShot_SoundSet",
					"SA80_silencerTail_SoundSet",
					"SA80_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.092;
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
					"SA80_Shot_SoundSet",
					"SA80_Tail_SoundSet",
					"SA80_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SA80_silencerShot_SoundSet",
					"SA80_silencerTail_SoundSet",
					"SA80_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.092;
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
	};
	class arifle_SA80_blk_F: arifle_SA80_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_blk_F";
		baseWeapon="arifle_SA80_blk_F";
		scope=2;
		displayName="L85 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_2_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_SA80_snd_F: arifle_SA80_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_snd_F";
		baseWeapon="arifle_SA80_snd_F";
		scope=2;
		displayName="L85 5.56 mm (Sand)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_snd_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_snd_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_2_snd_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_SA80_C_base_F: arifle_SA80_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SA80\SA80_C_F.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TAR_21.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		reloadAction="GestureReloadTRG";
		inertia=0.40000001;
		aimTransitionSpeed=1;
		initSpeed=780;
		maxZeroing=600;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
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
	class arifle_SA80_C_blk_F: arifle_SA80_C_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_blk_F";
		baseWeapon="arifle_SA80_C_blk_F";
		scope=2;
		displayName="L22 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_C_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_2_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_SA80_C_snd_F: arifle_SA80_C_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_snd_F";
		baseWeapon="arifle_SA80_C_snd_F";
		scope=2;
		displayName="L22 5.56 mm (Sand)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_C_snd_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_snd_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_2_snd_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_SA80_GL_base_F: arifle_SA80_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_GL_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SA80\SA80_GL_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_GL_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21G.rtm"
		};
		reloadAction="GestureReloadTRG";
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
			mass=160;
		};
		class EGLM: UGL_F
		{
			displayName="GLM";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
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
				"\A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_UGL_reload",
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
	class arifle_SA80_GL_blk_F: arifle_SA80_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_GL_blk_F";
		baseWeapon="arifle_SA80_GL_blk_F";
		scope=2;
		displayName="L85 GL 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_GL_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_GL_F_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_SA80_GL_snd_F: arifle_SA80_GL_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_GL_snd_F";
		baseWeapon="arifle_SA80_GL_snd_F";
		scope=2;
		displayName="L85 GL 5.56 mm (Sand)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_GL_snd_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_snd_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_GL_F_snd_CO.paa"
		};
		DLC="Aegis";
	};
	class arifle_SA80_LSW_base_F: arifle_SA80_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_LSW_base_F";
		scope=0;
		model="\A3\Weapons_F_Aegis\Rifles\SA80\SA80_LSW_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
		magazines[]=
		{
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		dexterity=1.6;
		initSpeed=970;
		recoil="recoil_spar_lsw";
		maxZeroing=1200;
		cursor="mg";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=160;
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Single
		{
			reloadTime=0.079999998;
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
			reloadTime=0.079999998;
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
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
			requiredOpticType=1;
			showToPlayer=0;
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
			requiredOpticType=2;
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
	class arifle_SA80_LSW_blk_F: arifle_SA80_LSW_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_LSW_blk_F";
		baseWeapon="arifle_SA80_LSW_blk_F";
		scope=2;
		displayName="L86 LSW 5.56 mm (Black)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_LSW_blk_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_2_CO.paa"
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
	class arifle_SA80_LSW_snd_F: arifle_SA80_LSW_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_LSW_snd_F";
		baseWeapon="arifle_SA80_LSW_snd_F";
		scope=2;
		displayName="L86 LSW 5.56 mm (Sand)";
		picture="\A3\Weapons_F_Aegis\Rifles\SA80\Data\UI\gear_SA80_LSW_snd_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_1_snd_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_2_snd_CO.paa"
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
	class arifle_SA80_blk_ACO_pointer_F: arifle_SA80_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_blk_ACO_pointer_F";
		baseWeapon="arifle_SA80_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_blk_ACO_pointer_snds_F: arifle_SA80_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_blk_ACO_pointer_snds_F";
		baseWeapon="arifle_SA80_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_SA80_blk_ERCO_pointer_F: arifle_SA80_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_blk_ERCO_pointer_F";
		baseWeapon="arifle_SA80_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_blk_ERCO_pointer_snds_F: arifle_SA80_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_blk_ERCO_pointer_snds_F";
		baseWeapon="arifle_SA80_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_SA80_C_blk_ACO_pointer_F: arifle_SA80_C_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_blk_ACO_pointer_F";
		baseWeapon="arifle_SA80_C_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_C_blk_ACO_pointer_snds_F: arifle_SA80_C_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_blk_ACO_pointer_snds_F";
		baseWeapon="arifle_SA80_C_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_SA80_C_blk_ACO_F: arifle_SA80_C_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_blk_ACO_F";
		baseWeapon="arifle_SA80_C_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_SA80_C_blk_Holo_F: arifle_SA80_C_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_blk_Holo_F";
		baseWeapon="arifle_SA80_C_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
		};
	};
	class arifle_SA80_C_blk_Holo_pointer_F: arifle_SA80_C_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_C_blk_Holo_pointer_F";
		baseWeapon="arifle_SA80_C_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_GL_blk_ACO_pointer_F: arifle_SA80_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_GL_blk_ACO_pointer_F";
		baseWeapon="arifle_SA80_GL_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_GL_blk_Holo_pointer_F: arifle_SA80_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_GL_blk_Holo_pointer_F";
		baseWeapon="arifle_SA80_GL_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_GL_blk_Holo_pointer_snds_F: arifle_SA80_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_GL_blk_Holo_pointer_snds_F";
		baseWeapon="arifle_SA80_GL_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_SA80_GL_blk_ERCO_pointer_F: arifle_SA80_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_GL_blk_ERCO_pointer_F";
		baseWeapon="arifle_SA80_GL_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_LSW_blk_pointer_F: arifle_SA80_LSW_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_LSW_blk_pointer_F";
		baseWeapon="arifle_SA80_LSW_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_SA80_LSW_blk_pointer_snds_F: arifle_SA80_LSW_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SA80_LSW_blk_pointer_snds_F";
		baseWeapon="arifle_SA80_LSW_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_arifle_SA80_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L85 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_blk_F
			{
				weapon="arifle_SA80_blk_F";
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
	class Weapon_arifle_SA80_snd_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L85 5.56 mm (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_snd_F
			{
				weapon="arifle_SA80_snd_F";
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
	class Weapon_arifle_SA80_C_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L22 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_C_blk_F
			{
				weapon="arifle_SA80_C_blk_F";
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
	class Weapon_arifle_SA80_C_snd_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L22 5.56 mm (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_C_snd_F
			{
				weapon="arifle_SA80_C_snd_F";
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
	class Weapon_arifle_SA80_GL_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L85 GL 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_GL_blk_F
			{
				weapon="arifle_SA80_GL_blk_F";
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
	class Weapon_arifle_SA80_GL_snd_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L85 GL 5.56 mm (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_GL_snd_F
			{
				weapon="arifle_SA80_GL_snd_F";
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
	class Weapon_arifle_SA80_LSW_blk_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L86 LSW 5.56 mm (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Machineguns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_LSW_blk_F
			{
				weapon="arifle_SA80_LSW_blk_F";
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
	class Weapon_arifle_SA80_LSW_snd_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="L86 LSW 5.56 mm (Sand)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Machineguns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class _xx_arifle_SA80_LSW_snd_F
			{
				weapon="arifle_SA80_LSW_snd_F";
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
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
