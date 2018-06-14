class CfgPatches
{
	class A3_Weapons_F_Aegis_Acc
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Acc",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"muzzle_mzls_338",
			"muzzle_mzls_58_F",
			"muzzle_mzls_93mmg",
			"muzzle_mzls_acp",
			"muzzle_mzls_B",
			"muzzle_mzls_H",
			"muzzle_mzls_L",
			"muzzle_mzls_M",
			"muzzle_mzls_smg_01",
			"muzzle_snds_B_wdm_F",
			"muzzle_snds_lrr",
			"muzzle_snds_LRR_khk_F",
			"muzzle_snds_LRR_snd_F",
			"muzzle_snds_pistol_heavy_01",
			"optic_ACOG",
			"optic_cco",
			"optic_dcl",
			"optic_srs",
			"optic_tws_sniper"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class muzzle_snds_B;
	class muzzle_snds_B_wdm_F: muzzle_snds_B
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_snds_B_wdm_F";
		displayName="Sound Suppressor (7.62 mm, Green Hex)";
		model="\A3\Weapons_F\Acc\acca_snds_58_wdm_F.p3d";
		picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_CA.paa";
		DLC="Aegis";
	};
	class muzzle_snds_acp;
	class muzzle_snds_pistol_heavy_01: muzzle_snds_acp
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_snds_pistol_heavy_01";
		displayName="Osprey Sound Suppressor (.45 ACP)";
		model="\A3\Weapons_F\Acc\acca_snds_osprey_F.p3d";
		picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_H_snd_F_CA.paa";
		DLC="Aegis";
	};
	class muzzle_snds_lrr: muzzle_snds_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_snds_lrr";
		displayName="Sound Suppressor (.408, Black)";
		model="\A3\Weapons_F\Acc\acca_snds_h_F";
		picture="\A3\Weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		class ItemInfo: ItemInfo
		{
			mass=14;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.30000001;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.30000001;
		DLC="Aegis";
	};
	class muzzle_snds_LRR_khk_F: muzzle_snds_lrr
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_snds_LRR_khk_F";
		displayName="Sound Suppressor (.408, Khaki)";
		model="\A3\Weapons_F\Acc\acca_snds_h_khk_F.p3d";
		picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_H_khk_F_CA.paa";
		DLC="Aegis";
	};
	class muzzle_snds_LRR_snd_F: muzzle_snds_lrr
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_snds_LRR_snd_F";
		displayName="Sound Suppressor (.408, Sand)";
		model="\A3\Weapons_F\Acc\acca_snds_h_snd_F.p3d";
		picture="\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_H_snd_F_CA.paa";
		DLC="Aegis";
	};
	class muzzle_mzls_H: ItemCore
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_H";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		displayName="Flash Suppressor (6.5 mm)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=5;
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class muzzle_mzls_L: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_L";
		displayName="Flash Suppressor (9 mm)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_L_F";
		class ItemInfo: ItemInfo
		{
			mass=3;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class muzzle_mzls_M: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_M";
		displayName="Flash Suppressor (5.56 mm)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=4;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class muzzle_mzls_B: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_B";
		displayName="Flash Suppressor (7.62 mm)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=6;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
		DLC="Aegis";
	};
	class muzzle_mzls_acp: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_acp";
		displayName="Flash Suppressor (.45 ACP)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_L_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=3;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class muzzle_mzls_338: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_338";
		displayName="Flash Suppressor (.338)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=8;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
		DLC="Aegis";
	};
	class muzzle_mzls_93mmg: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_93mmg";
		displayName="Flash Suppressor (9.3 mm)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=8;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
		DLC="Aegis";
	};
	class muzzle_mzls_smg_01: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_smg_01";
		displayName="Flash Suppressor (.45 ACP, Vermin SMG)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_snds_H_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_SMG_01_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
		DLC="Aegis";
	};
	class muzzle_mzls_58_F: muzzle_mzls_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_mzls_58_F";
		displayName="Flash Suppressor (5.8 mm)";
		picture="\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
		model="\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=4;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=1;
				visibleFireTime=0.5;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=0;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.9f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class InventoryOpticsItem_Base_F;
	class optic_srs: ItemCore
	{
		author="$STR_A3_Night515";
		_generalMacro="optic_srs";
		scope=2;
		displayName="$STR_A3_cfgWeapons_optic_srs0";
		picture="\A3\Weapons_F\Data\UI\gear_acco_srs_CA.paa";
		model="\A3\Weapons_F\Acc\acco_srs_F";
		descriptionShort="$STR_A3_cfgWeapons_optic_srs1";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_F\Acc\acco_srs_F.p3d";
			class OpticsModes
			{
				class SRS
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
					cameraDir="";
					visionMode[]={};
				};
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class optic_dcl: ItemCore
	{
		author="$STR_A3_Night515";
		_generalMacro="optic_dcl";
		scope=2;
		displayName="$STR_A3_cfgWeapons_optic_dcl0";
		picture="\A3\Weapons_F\Data\UI\gear_acco_dcl_120_CA.paa";
		model="\A3\Weapons_F\Acc\acco_dcl_120_F";
		descriptionShort="$STR_A3_cfgWeapons_optic_dcl1";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=14;
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
			class OpticsModes
			{
				class DCL
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
					cameraDir="";
					visionMode[]={};
				};
			};
		};
		inertia=0.30000001;
		DLC="Aegis";
	};
	class optic_ACOG: ItemCore
	{
		author="$STR_A3_Night515";
		_generalMacro="optic_ACOG";
		scope=2;
		displayName="$STR_A3_cfgWeapons_optic_ACOG0";
		picture="\A3\Weapons_F_Aegis\Acc\Data\UI\gear_acco_acog_CA.paa";
		model="\A3\Weapons_F_Aegis\Acc\acco_ACOG_F.p3d";
		descriptionShort="$STR_A3_cfgWeapons_optic_ACOG1";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_F_Aegis\Acc\reticle_ACOG_F.p3d";
			class OpticsModes
			{
				class Kolimator
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
				};
				class ACOG
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.0623;
					opticsZoomMax=0.0623;
					opticsZoomInit=0.0623;
					memoryPointCamera="opticView";
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class optic_cco: ItemCore
	{
		author="$STR_A3_Night515";
		_generalMacro="optic_cco";
		scope=2;
		displayName="CCO";
		picture="\A3\Weapons_F_Aegis\Data\UI\gear_acco_CCO_CA.paa";
		model="\A3\Weapons_F_Aegis\Acc\acco_CCO_F.p3d";
		descriptionShort="$STR_A3_cfgWeapons_optic_srs1";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			opticType=1;
			optics=1;
			modelOptics="\A3\Weapons_F_Aegis\Acc\acco_CCO_F.p3d";
			class OpticsModes
			{
				class CCO
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
					cameraDir="";
					visionMode[]={};
				};
			};
		};
		inertia=0.1;
		DLC="Aegis";
	};
	class optic_tws_sniper: ItemCore
	{
		author="$STR_A3_Night515";
		_generalMacro="optic_tws_sniper";
		scope=2;
		displayName="$STR_A3_CfgWeapons_optic_tws_sniper0";
		picture="\A3\Weapons_F\Data\UI\gear_acco_tws_CA.paa";
		model="\A3\Weapons_F\Acc\acco_tws_F";
		descriptionShort="$STR_A3_CfgWeapons_optic_tws_sniper1";
		weaponInfoType="RscOptics_tws_sniper";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=16;
			weaponInfoType="RscWeaponRangeZeroingModeFOV";
			optics=1;
			modelOptics="\A3\Data_F_Core\reticle_tws_sniper";
			class OpticsModes
			{
				class TWS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0285;
					opticsZoomMax=0.075999998;
					opticsZoomInit=0.075999998;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=2;
					distanceZoomMin=100;
					distanceZoomMax=1200;
					discretefov[]={0.075999998,0.0285};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Ti",
						"Normal"
					};
					thermalMode[]={0,1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
		inertia=0.2;
		DLC="Aegis";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
