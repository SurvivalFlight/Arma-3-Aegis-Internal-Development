class CfgPatches
{
	class A3_Weapons_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - Weapons and Accessories";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Mark",
			"A3_Weapons_F_Jets",
			"A3_Weapons_F_Orange",
			"A3_Weapons_F_Tank"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Item_Laserdesignator_04",
			"Item_O_NVGoggles_blk_F"
		};
		weapons[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class ShotgunCore;
	class ShotgunBase: ShotgunCore
	{
		hit=6;
		indirectHit=0;
		indirectHitRange=0;
		caliber=0.5;
		cartridge="FxCartridge_slug";
		cost=1;
		timeToLive=6;
		deflecting=30;
		tracerStartTime=-1;
		muzzleEffect="";
		effectFly="AmmoClassic";
		soundImpactDefault1[]=
		{
			"A3\Sounds_F\weapons\Grenades\Grenade_Roll",
			2.5118864,
			1,
			200
		};
		impactGroundSoft[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGroundHard[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMan[]=
		{
			"soundImpactDefault1",
			1
		};
		impactIron[]=
		{
			"soundImpactDefault1",
			1
		};
		impactArmor[]=
		{
			"soundImpactDefault1",
			1
		};
		impactBuilding[]=
		{
			"soundImpactDefault1",
			1
		};
		impactFoliage[]=
		{
			"soundImpactDefault1",
			1
		};
		impactWood[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGlass[]=
		{
			"soundImpactDefault1",
			1
		};
		impactGlassArmored[]=
		{
			"soundImpactDefault1",
			1
		};
		impactConcrete[]=
		{
			"soundImpactDefault1",
			1
		};
		impactRubber[]=
		{
			"soundImpactDefault1",
			1
		};
		impactPlastic[]=
		{
			"soundImpactDefault1",
			1
		};
		impactDefault[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMetal[]=
		{
			"soundImpactDefault1",
			1
		};
		impactMetalplate[]=
		{
			"soundImpactDefault1",
			1
		};
		impactWater[]=
		{
			"soundImpactDefault1",
			1
		};
		soundDefault1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1.9952624,
			1,
			60
		};
		soundDefault2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",
			1.9952624,
			1,
			60
		};
		soundDefault3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",
			1.9952624,
			1,
			60
		};
		soundDefault4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",
			1.9952624,
			1,
			60
		};
		soundDefault5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",
			1.9952624,
			1,
			60
		};
		soundDefault6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",
			1.9952624,
			1,
			60
		};
		soundDefault7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",
			1.9952624,
			1,
			60
		};
		soundDefault8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",
			1.9952624,
			1,
			60
		};
		soundGroundSoft1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01",
			1.9952624,
			1,
			60
		};
		soundGroundSoft2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02",
			1.9952624,
			1,
			60
		};
		soundGroundSoft3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03",
			1.9952624,
			1,
			60
		};
		soundGroundSoft4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04",
			1.9952624,
			1,
			60
		};
		soundGroundSoft5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05",
			1.9952624,
			1,
			60
		};
		soundGroundSoft6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06",
			1.9952624,
			1,
			60
		};
		soundGroundSoft7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07",
			1.9952624,
			1,
			60
		};
		soundGroundSoft8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08",
			1.9952624,
			1,
			60
		};
		soundGroundHard1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",
			1.4125376,
			1,
			80
		};
		soundGroundHard2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02",
			1.4125376,
			1,
			80
		};
		soundGroundHard3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03",
			1.4125376,
			1,
			80
		};
		soundGroundHard4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04",
			1.4125376,
			1,
			80
		};
		soundGroundHard5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05",
			1.4125376,
			1,
			80
		};
		soundGroundHard6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06",
			1.4125376,
			1,
			80
		};
		soundGroundHard7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07",
			1.4125376,
			1,
			80
		};
		soundGroundHard8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08",
			1.4125376,
			1,
			80
		};
		soundGlass1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",
			1.2589254,
			1,
			100
		};
		soundGlass2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",
			1.2589254,
			1,
			100
		};
		soundGlass3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",
			1.2589254,
			1,
			100
		};
		soundGlass4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",
			1.2589254,
			1,
			100
		};
		soundGlass5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",
			1.2589254,
			1,
			100
		};
		soundGlass6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",
			1.2589254,
			1,
			100
		};
		soundGlass7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",
			1.2589254,
			1,
			100
		};
		soundGlass8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",
			1.2589254,
			1,
			100
		};
		soundGlassArmored1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01",
			1.5848932,
			1,
			60
		};
		soundGlassArmored2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02",
			1.5848932,
			1,
			60
		};
		soundGlassArmored3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03",
			1.5848932,
			1,
			60
		};
		soundGlassArmored4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04",
			1.5848932,
			1,
			60
		};
		soundGlassArmored5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05",
			1.5848932,
			1,
			60
		};
		soundGlassArmored6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06",
			1.5848932,
			1,
			60
		};
		soundGlassArmored7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07",
			1.5848932,
			1,
			60
		};
		soundGlassArmored8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08",
			1.5848932,
			1,
			60
		};
		soundMetal1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01",
			1.5848932,
			1,
			80
		};
		soundMetal2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02",
			1.5848932,
			1,
			80
		};
		soundMetal3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03",
			1.5848932,
			1,
			80
		};
		soundMetal4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04",
			1.5848932,
			1,
			80
		};
		soundMetal5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05",
			1.5848932,
			1,
			80
		};
		soundMetal6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06",
			1.5848932,
			1,
			80
		};
		soundMetal7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07",
			1.5848932,
			1,
			80
		};
		soundMetal8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07",
			1.5848932,
			1,
			80
		};
		soundVehiclePlate8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08",
			1.5848932,
			1,
			80
		};
		soundWood1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01",
			1.9952624,
			1,
			60
		};
		soundWood2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02",
			1.9952624,
			1,
			60
		};
		soundWood3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03",
			1.9952624,
			1,
			60
		};
		soundWood4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04",
			1.9952624,
			1,
			60
		};
		soundWood5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05",
			1.9952624,
			1,
			60
		};
		soundWood6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06",
			1.9952624,
			1,
			60
		};
		soundWood7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07",
			1.9952624,
			1,
			60
		};
		soundWood8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08",
			1.9952624,
			1,
			60
		};
		soundHitBody1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",
			1.5848932,
			1,
			10
		};
		soundHitBody2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",
			1.5848932,
			1,
			10
		};
		soundHitBody3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",
			1.5848932,
			1,
			10
		};
		soundHitBody4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",
			1.5848932,
			1,
			10
		};
		soundHitBody5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",
			1.5848932,
			1,
			10
		};
		soundHitBody6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",
			1.5848932,
			1,
			10
		};
		soundHitBody7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",
			1.5848932,
			1,
			10
		};
		soundHitBody8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",
			1.5848932,
			1,
			10
		};
		soundHitBuilding1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01",
			2.2387211,
			1,
			50
		};
		soundHitBuilding2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02",
			2.2387211,
			1,
			50
		};
		soundHitBuilding3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03",
			2.2387211,
			1,
			50
		};
		soundHitBuilding4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04",
			2.2387211,
			1,
			50
		};
		soundHitBuilding5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05",
			2.2387211,
			1,
			50
		};
		soundHitBuilding6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06",
			2.2387211,
			1,
			50
		};
		soundHitBuilding7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07",
			2.2387211,
			1,
			50
		};
		soundHitBuilding8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08",
			2.2387211,
			1,
			50
		};
		soundHitFoliage1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01",
			0.70794576,
			1,
			20
		};
		soundHitFoliage2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02",
			0.70794576,
			1,
			20
		};
		soundHitFoliage3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03",
			0.70794576,
			1,
			20
		};
		soundHitFoliage4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04",
			0.70794576,
			1,
			20
		};
		soundHitFoliage5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05",
			0.70794576,
			1,
			20
		};
		soundHitFoliage6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06",
			0.70794576,
			1,
			20
		};
		soundHitFoliage7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07",
			0.70794576,
			1,
			20
		};
		soundHitFoliage8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08",
			0.70794576,
			1,
			20
		};
		soundPlastic1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01",
			1,
			1,
			70
		};
		soundPlastic2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02",
			1,
			1,
			70
		};
		soundPlastic3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03",
			1,
			1,
			70
		};
		soundPlastic4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04",
			1,
			1,
			70
		};
		soundPlastic5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05",
			1,
			1,
			70
		};
		soundPlastic6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06",
			1,
			1,
			70
		};
		soundPlastic7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07",
			1,
			1,
			70
		};
		soundPlastic8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08",
			1,
			1,
			70
		};
		soundConcrete1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",
			1.4125376,
			1,
			70
		};
		soundConcrete2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",
			1.4125376,
			1,
			70
		};
		soundConcrete3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",
			1.4125376,
			1,
			70
		};
		soundConcrete4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",
			1.4125376,
			1,
			70
		};
		soundConcrete5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",
			1.4125376,
			1,
			70
		};
		soundConcrete6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",
			1.4125376,
			1,
			70
		};
		soundConcrete7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",
			1.4125376,
			1,
			70
		};
		soundConcrete8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",
			1.4125376,
			1,
			70
		};
		soundRubber1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01",
			0.89125091,
			1,
			50
		};
		soundRubber2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02",
			0.89125091,
			1,
			50
		};
		soundRubber3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03",
			0.89125091,
			1,
			50
		};
		soundRubber4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04",
			0.89125091,
			1,
			50
		};
		soundRubber5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05",
			0.89125091,
			1,
			50
		};
		soundRubber6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06",
			0.89125091,
			1,
			50
		};
		soundRubber7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07",
			0.89125091,
			1,
			50
		};
		soundRubber8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08",
			0.89125091,
			1,
			50
		};
		soundWater1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01",
			1,
			1,
			40
		};
		soundWater2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02",
			1,
			1,
			40
		};
		soundWater3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03",
			1,
			1,
			40
		};
		soundWater4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04",
			1,
			1,
			40
		};
		soundWater5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05",
			1,
			1,
			40
		};
		soundWater6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06",
			1,
			1,
			40
		};
		soundWater7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07",
			1,
			1,
			40
		};
		soundWater8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08",
			1,
			1,
			40
		};
		soundMetalInt1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01",
			1.5848932,
			1,
			80
		};
		soundMetalInt2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02",
			1.5848932,
			1,
			80
		};
		soundMetalInt3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03",
			1.5848932,
			1,
			80
		};
		soundMetalInt4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04",
			1.5848932,
			1,
			80
		};
		soundMetalInt5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05",
			1.5848932,
			1,
			80
		};
		soundMetalInt6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt1[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt2[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt3[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt4[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt5[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt6[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt7[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt8[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt9[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt10[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt11[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt12[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt13[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt14[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14",
			1.5848932,
			1,
			80
		};
		soundVehiclePlateInt15[]=
		{
			"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15",
			1.5848932,
			1,
			80
		};
		hitArmorInt[]=
		{
			"soundVehiclePlateInt1",
			0.066,
			"soundVehiclePlateInt2",
			0.066,
			"soundVehiclePlateInt3",
			0.066,
			"soundVehiclePlateInt4",
			0.066,
			"soundVehiclePlateInt5",
			0.066,
			"soundVehiclePlateInt6",
			0.066,
			"soundVehiclePlateInt7",
			0.066,
			"soundVehiclePlateInt8",
			0.066,
			"soundVehiclePlateInt9",
			0.066,
			"soundVehiclePlateInt10",
			0.066,
			"soundVehiclePlateInt11",
			0.066,
			"soundVehiclePlateInt12",
			0.066,
			"soundVehiclePlateInt13",
			0.066,
			"soundVehiclePlateInt14",
			0.066,
			"soundVehiclePlateInt15",
			0.066
		};
		hitMetalInt[]=
		{
			"soundMetalInt1",
			0.16599999,
			"soundMetalInt2",
			0.16599999,
			"soundMetalInt3",
			0.16599999,
			"soundMetalInt4",
			0.16599999,
			"soundMetalInt5",
			0.16599999,
			"soundMetalInt6",
			0.16599999
		};
		hitGroundSoft[]=
		{
			"soundGroundSoft1",
			0.2,
			"soundGroundSoft2",
			0.2,
			"soundGroundSoft3",
			0.1,
			"soundGroundSoft4",
			0.1,
			"soundGroundSoft5",
			0.1,
			"soundGroundSoft6",
			0.1,
			"soundGroundSoft7",
			0.1,
			"soundGroundSoft8",
			0.1
		};
		hitGroundHard[]=
		{
			"soundGroundHard1",
			0.2,
			"soundGroundHard2",
			0.2,
			"soundGroundHard3",
			0.1,
			"soundGroundHard4",
			0.1,
			"soundGroundHard5",
			0.1,
			"soundGroundHard6",
			0.1,
			"soundGroundHard7",
			0.1,
			"soundGroundHard8",
			0.1
		};
		hitMan[]=
		{
			"soundHitBody1",
			0.125,
			"soundHitBody2",
			0.125,
			"soundHitBody3",
			0.125,
			"soundHitBody4",
			0.125,
			"soundHitBody5",
			0.125,
			"soundHitBody6",
			0.125,
			"soundHitBody7",
			0.125,
			"soundHitBody8",
			0.125
		};
		hitArmor[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.2,
			"soundHitBuilding2",
			0.2,
			"soundHitBuilding3",
			0.1,
			"soundHitBuilding4",
			0.1,
			"soundHitBuilding5",
			0.1,
			"soundHitBuilding6",
			0.1,
			"soundHitBuilding7",
			0.1,
			"soundHitBuilding8",
			0.1
		};
		hitFoliage[]=
		{
			"soundHitFoliage1",
			0.125,
			"soundHitFoliage2",
			0.125,
			"soundHitFoliage3",
			0.125,
			"soundHitFoliage4",
			0.125,
			"soundHitFoliage5",
			0.125,
			"soundHitFoliage6",
			0.125,
			"soundHitFoliage7",
			0.125,
			"soundHitFoliage8",
			0.125
		};
		hitWood[]=
		{
			"soundWood1",
			0.125,
			"soundWood2",
			0.125,
			"soundWood3",
			0.125,
			"soundWood4",
			0.125,
			"soundWood5",
			0.125,
			"soundWood6",
			0.125,
			"soundWood7",
			0.125,
			"soundWood8",
			0.125
		};
		hitGlass[]=
		{
			"soundGlass1",
			0.125,
			"soundGlass2",
			0.125,
			"soundGlass3",
			0.125,
			"soundGlass4",
			0.125,
			"soundGlass5",
			0.125,
			"soundGlass6",
			0.125,
			"soundGlass7",
			0.125,
			"soundGlass8",
			0.125
		};
		hitGlassArmored[]=
		{
			"soundGlassArmored1",
			0.125,
			"soundGlassArmored2",
			0.125,
			"soundGlassArmored3",
			0.125,
			"soundGlassArmored4",
			0.125,
			"soundGlassArmored5",
			0.125,
			"soundGlassArmored6",
			0.125,
			"soundGlassArmored7",
			0.125,
			"soundGlassArmored8",
			0.125
		};
		hitConcrete[]=
		{
			"soundConcrete1",
			0.125,
			"soundConcrete2",
			0.125,
			"soundConcrete3",
			0.125,
			"soundConcrete4",
			0.125,
			"soundConcrete5",
			0.125,
			"soundConcrete6",
			0.125,
			"soundConcrete7",
			0.125,
			"soundConcrete8",
			0.125
		};
		hitRubber[]=
		{
			"soundRubber1",
			0.125,
			"soundRubber2",
			0.125,
			"soundRubber3",
			0.125,
			"soundRubber4",
			0.125,
			"soundRubber5",
			0.125,
			"soundRubber6",
			0.125,
			"soundRubber7",
			0.125,
			"soundRubber8",
			0.125
		};
		hitPlastic[]=
		{
			"soundPlastic1",
			0.125,
			"soundPlastic2",
			0.125,
			"soundPlastic3",
			0.125,
			"soundPlastic4",
			0.125,
			"soundPlastic5",
			0.125,
			"soundPlastic6",
			0.125,
			"soundPlastic7",
			0.125,
			"soundPlastic8",
			0.125
		};
		hitDefault[]=
		{
			"soundDefault1",
			0.2,
			"soundDefault2",
			0.2,
			"soundDefault3",
			0.1,
			"soundDefault4",
			0.1,
			"soundDefault5",
			0.1,
			"soundDefault6",
			0.1,
			"soundDefault7",
			0.1,
			"soundDefault8",
			0.1
		};
		hitMetal[]=
		{
			"soundMetal1",
			0.125,
			"soundMetal2",
			0.125,
			"soundMetal3",
			0.125,
			"soundMetal4",
			0.125,
			"soundMetal5",
			0.125,
			"soundMetal6",
			0.125,
			"soundMetal7",
			0.125,
			"soundMetal8",
			0.125
		};
		hitMetalplate[]=
		{
			"soundVehiclePlate1",
			0.125,
			"soundVehiclePlate2",
			0.125,
			"soundVehiclePlate3",
			0.125,
			"soundVehiclePlate4",
			0.125,
			"soundVehiclePlate5",
			0.125,
			"soundVehiclePlate6",
			0.125,
			"soundVehiclePlate7",
			0.125,
			"soundVehiclePlate8",
			0.125
		};
		hitWater[]=
		{
			"soundWater1",
			0.125,
			"soundWater2",
			0.125,
			"soundWater3",
			0.125,
			"soundWater4",
			0.125,
			"soundWater5",
			0.125,
			"soundWater6",
			0.125,
			"soundWater7",
			0.125,
			"soundWater8",
			0.125
		};
		bulletFly1[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",
			1.5848932,
			1,
			30
		};
		bulletFly2[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",
			1.5848932,
			1,
			30
		};
		bulletFly3[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",
			1.5848932,
			1,
			30
		};
		bulletFly4[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",
			1.5848932,
			1,
			30
		};
		bulletFly5[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",
			1.5848932,
			1,
			30
		};
		bulletFly6[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",
			1.5848932,
			1,
			30
		};
		bulletFly7[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",
			1.5848932,
			1,
			30
		};
		bulletFly8[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",
			1.5848932,
			1,
			30
		};
		bulletFly9[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",
			1.5848932,
			1,
			30
		};
		bulletFly10[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",
			1.5848932,
			1,
			30
		};
		bulletFly11[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",
			1.5848932,
			1,
			30
		};
		bulletFly12[]=
		{
			"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",
			1.5848932,
			1,
			30
		};
		bulletFly[]=
		{
			"bulletFly1",
			0.082999997,
			"bulletFly2",
			0.082999997,
			"bulletFly3",
			0.082999997,
			"bulletFly4",
			0.082999997,
			"bulletFly5",
			0.082999997,
			"bulletFly6",
			0.082999997,
			"bulletFly7",
			0.082999997,
			"bulletFly8",
			0.082999997,
			"bulletFly9",
			0.082999997,
			"bulletFly10",
			0.082999997,
			"bulletFly11",
			0.082999997,
			"bulletFly12",
			0.082999997
		};
		supersonicCrackNear[]=
		{
			"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",
			3.1622777,
			1,
			200
		};
		supersonicCrackFar[]=
		{
			"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",
			3.1622777,
			1,
			200
		};
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="ImpactPlaster";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitConcrete="ImpactConcrete";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
		};
		class CamShakeExplode
		{
			power="(3^0.5)";
			duration="((round (3^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((3^0.5)*3)";
		};
		class CamShakeHit
		{
			power=3;
			duration="((round (3^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
	class BulletBase;
	class B_12Gauge_Slug: BulletBase
	{
		hit=12;
	};
	class B_12Gauge_Pellets: ShotgunBase
	{
		hit=6;
		indirectHit=0;
		indirectHitRange=0;
		simulation="shotSpread";
		delete CamShakeFire;
		delete CamShakePlayerFire;
	};
	class B_12Gauge_HE: BulletBase
	{
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		explosionSoundEffect="DefaultExplosion";
		hit=20;
		indirectHit=12;
		indirectHitRange=4;
		explosive=0.69999999;
		cartridge="FxCartridge_slug";
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		cost=5;
		typicalSpeed=500;
		visibleFire=18;
		audibleFire=18;
		airFriction=-0.0080000004;
		caliber=2;
		deflecting=30;
		class CamShakeHit
		{
			power=10;
			duration=1;
			frequency=20;
		};
	};
	class B_127x108_Ball: BulletBase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white.p3d";
	};
	class B_25mm: BulletBase
	{
		nvgOnly=0;
	};
	class R_80mm_HE;
	class R_50mm_HE: R_80mm_HE
	{
		model="\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit=150;
		indirectHit=40;
		indirectHitRange=12;
		cost=200;
		maxSpeed=580;
		thrustTime=1.1;
		thrust=450;
		sideAirFriction=0.15000001;
		fuseDistance=40;
		timeToLive=20;
		whistleDist=24;
		class CamShakeExplode
		{
			power=12;
			duration=1.6;
			frequency=20;
			distance=141.968;
		};
		class CamShakeHit
		{
			power=57;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class G_40mm_HE;
	class G_25mm_HE: G_40mm_HE
	{
		simulation="shotShell";
		hit=60;
		indirectHit=7;
		indirectHitRange=5;
		whistleDist=18;
		caliber=1;
		SoundSetExplosion[]=
		{
			"MiniGrenade_Exp_SoundSet",
			"MiniGrenade_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		class CamShakeExplode
		{
			power=6;
			duration=1;
			frequency=20;
			distance=75.7771;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 30Rnd_556x45_Stanag;
	class 20Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author="$STR_A3_Night515";
		displayName="5.56 mm 20rnd STANAG Reload Tracer (Yellow) Mag";
		picture="\A3\Weapons_F\Data\UI\M_20stanag_CA.paa";
		count=20;
		mass=6;
		descriptionShort="Caliber: 5.56x45 mm STANAG<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
	};
	class 20Rnd_556x45_Stanag_green: 20Rnd_556x45_Stanag
	{
		author="$STR_A3_Night515";
		displayName="5.56 mm 20rnd STANAG Reload Tracer (Green) Mag";
		ammo="B_556x45_Ball_Tracer_Green";
	};
	class 20Rnd_556x45_Stanag_red: 20Rnd_556x45_Stanag
	{
		author="$STR_A3_Night515";
		displayName="5.56 mm 20rnd STANAG Reload Tracer (Red) Mag";
		ammo="B_556x45_Ball_Tracer_Red";
	};
	class 20Rnd_556x45_Stanag_Tracer_Red: 20Rnd_556x45_Stanag
	{
		author="$STR_A3_Night515";
		displayName="5.56 mm 20rnd Tracer (Red) Mag";
		picture="\A3\Weapons_F\Data\UI\M_20stanag_red_CA.paa";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		descriptionShort="Caliber: 5.56x45 mm STANAG Tracers - Red<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 20Rnd_556x45_Stanag_Tracer_Green: 20Rnd_556x45_Stanag
	{
		author="$STR_A3_Night515";
		displayName="5.56 mm 20rnd Tracer (Green) Mag";
		picture="\A3\Weapons_F\Data\UI\M_20stanag_green_CA.paa";
		ammo="B_556x45_Ball_Tracer_Green";
		tracersEvery=1;
		descriptionShort="Caliber: 5.56x45 mm STANAG Tracers - Green<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 20Rnd_556x45_Stanag_Tracer_Yellow: 20Rnd_556x45_Stanag
	{
		author="$STR_A3_Night515";
		displayName="5.56 mm 20rnd Tracer (Yellow) Mag";
		picture="\A3\Weapons_F\Data\UI\M_20stanag_yellow_CA.paa";
		ammo="B_556x45_Ball_Tracer_Yellow";
		tracersEvery=1;
		descriptionShort="Caliber: 5.56x45 mm STANAG Tracers - Yellow<br />Rounds: 30<br />Used in: TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 5Rnd_127x99_Mag: CA_Magazine
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="12.7 mm BMG 5Rnd Mag";
		picture="\A3\Weapons_F_Aegis\Data\UI\M_5rnd_127x99_CA.paa";
		count=5;
		ammo="B_127x99_Ball";
		initSpeed=880;
		descriptionShort="Caliber: 12.7x99 mm NATO<br />Rounds: 5<br />Used in: Warfare-50";
		mass=15;
	};
	class 5Rnd_127x99_SLAP_Mag: 5Rnd_127x99_Mag
	{
		author="$STR_A3_Night515";
		picture="\A3\Weapons_F_Aegis\Data\UI\M_5rnd_127x99_CA.paa";
		displayName="12.7 mm BMG 5Rnd SLAP Mag";
		displayNameShort="SLAP";
		initSpeed=1215;
		ammo="B_127x99_SLAP";
		descriptionShort="Caliber: 12.7x99 mm SLAP<br />Rounds: 5<br />Used in: Warfare-50";
	};
	class 100Rnd_65x39_caseless_mag;
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		displayName="6.5 mm 200Rnd Reload Tracer (Yellow) Belt";
	};
	class 200Rnd_65x39_cased_Box_green: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Night515";
		displayName="6.5 mm 200Rnd Reload Tracer (Green) Belt";
		ammo="B_65x39_Caseless_green";
	};
	class 200Rnd_65x39_cased_Box_red: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Night515";
		displayName="6.5 mm 200Rnd Reload Tracer (Red) Belt";
		ammo="B_65x39_Caseless";
	};
	class 200Rnd_65x39_cased_Box_Tracer_Green: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Green0";
		picture="\A3\Weapons_F\data\UI\m_200rnd_65x39_green_CA.paa";
		ammo="B_65x39_Caseless_green";
		lastRoundsTracer=200;
		tracersEvery=1;
		descriptionShort="Caliber: 6.5x39 mm Tracer - Green<br />Rounds: 200<br />Used in: Mk200";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_65x39_cased_Box_Tracer_Red: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Red0";
		picture="\A3\Weapons_F\data\UI\m_200rnd_65x39_red_CA.paa";
		ammo="B_65x39_Caseless";
		lastRoundsTracer=200;
		tracersEvery=1;
		descriptionShort="Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 200<br />Used in: Mk200";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 30Rnd_9x21_Mag;
	class 17Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_9x19_MP443_170";
		picture="\A3\Weapons_F_Aegis\Data\UI\M_17Rnd_9x21_CA.paa";
		count=17;
		descriptionShort="$STR_A3_CfgMagazines_9x19_MP443_171";
		mass=6;
		initSpeed=450;
	};
	class 17Rnd_9x21_red_Mag: 17Rnd_9x21_Mag
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_9x19_MP443_17_Red0";
		ammo="B_9x21_Ball_Tracer_Red";
		lastRoundsTracer=4;
	};
	class 17Rnd_9x21_green_Mag: 17Rnd_9x21_Mag
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_9x19_MP443_17_Green0";
		ammo="B_9x21_Ball_Tracer_Green";
		lastRoundsTracer=4;
	};
	class 17Rnd_9x21_yellow_Mag: 17Rnd_9x21_Mag
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_9x19_MP443_17_Yellow0";
		ammo="B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer=4;
	};
	class 8Rnd_12Gauge_Pellets: CA_Magazine
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="$STR_A3_CfgMagazines_8Rnd_12Gauge_Pellets0";
		displayNameShort="$STR_A3_CFGMAGAZINES_8RND_12GAUGE_PELLETS_DNS";
		picture="\A3\Weapons_F\Data\UI\M_12Gauge_CA.paa";
		ammo="B_12Gauge_Pellets";
		count=8;
		initSpeed=390;
		descriptionShort="$STR_A3_CfgMagazines_8Rnd_12Gauge_Pellets1";
		mass=4;
	};
	class 8Rnd_12Gauge_Slug: 8Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_8Rnd_12Gauge_Slug0";
		displayNameShort="$STR_A3_CFGMAGAZINES_8RND_12GAUGE_SLUGS_DNS";
		descriptionShort="$STR_A3_CfgMagazines_8Rnd_12Gauge_Slug1";
		picture="\A3\Weapons_F\Data\UI\M_12Gauge_Slugs_CA.paa";
		ammo="B_12Gauge_Slug";
		initSpeed=900;
	};
	class 20Rnd_12Gauge_Pellets: 8Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_20Rnd_AA40_Pellets0";
		picture="\A3\Weapons_F_Aegis\Data\UI\M_20Rnd_12Gauge_CA.paa";
		count=20;
		mass=16;
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_AA40_Pellets1";
	};
	class 20Rnd_12Gauge_Slug: 20Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_20Rnd_AA40_Slug0";
		picture="\A3\Weapons_F_Aegis\Data\UI\M_20Rnd_12Gauge_Slug_CA.paa";
		ammo="B_12Gauge_Slug";
		displayNameShort="$STR_A3_slug_dns";
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_AA40_Slug1";
	};
	class 20Rnd_12Gauge_HE: 20Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Night515";
		picture="\A3\Weapons_F_Aegis\Data\UI\M_20Rnd_12Gauge_HE_CA.paa";
		ammo="B_12Gauge_HE";
		displayName="$STR_A3_CfgMagazines_20Rnd_AA40_HE0";
		displayNameShort="$STR_A3_HE_dns";
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_AA40_HE1";
	};
	class 9Rnd_45ACP_Mag;
	class 7Rnd_45ACP_Mag: 9Rnd_45ACP_Mag
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_Weapons_F_Beta_CfgMagazines_7Rnd_45ACP_Mag0";
		descriptionShort="Caliber: .45 ACP< br/>Rounds: 7<br />Used in: C-1911";
		count=7;
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		displayName="$STR_A3_CfgMagazines_15Rnd_45ACP_Mag0";
		count=15;
		descriptionShort="Caliber: .45 ACP< br/>Rounds: 15<br />Used in: 4-five";
	};
	class 130Rnd_338_Mag: CA_Magazine
	{
		displayName=".338 NM 100Rnd Belt";
		count=100;
		descriptionShort="Caliber: .338 Norma Magnum<br />Rounds: 100<br />Used in: SPMG";
		mass=54;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		displayName="9.3mm 120Rnd Belt";
		count=120;
		descriptionShort="Caliber: 9.3x64mm<br />Rounds: 120<br />Used in: Navid";
		mass=64;
	};
	class 30Rnd_580x42_Mag_F;
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		displayName="$STR_A3_CfgMagazines_75Rnd_580x42_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_75Rnd_580x42_Mag_F1";
		count=75;
		mass=20;
	};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F
	{
		displayName="$STR_A3_CfgMagazines_75Rnd_580x42_Mag_Tracer_F0";
		lastRoundsTracer=75;
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		displayName="$STR_A3_CfgMagazines_10Rnd_650x39_Cased_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_650x39_Cased_Mag_F1";
		count=10;
		mass=7;
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		displayName="$STR_A3_CfgMagazines_100Rnd_556x45_Drum_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_556x45_Drum_Mag_F1";
		count=100;
		mass=30;
	};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName="$STR_A3_CfgMagazines_100Rnd_556x45_Drum_Mag_Tracer_F0";
		lastRoundsTracer=100;
	};
	class 5Rnd_HE_Grenade_mag: CA_Magazine
	{
		author="$STR_A3_Night515";
		scope=2;
		type=256;
		displayName="25 mm 5Rnd HE Grenade Mag";
		displayNameShort="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_slug_CA.paa";
		ammo="G_25mm_HE";
		initSpeed=210;
		count=5;
		nameSound="";
		descriptionShort="Caliber: 25 mm<br />Rounds: 5 <br />Used in: Punisher";
		mass=30;
	};
	class 6Rnd_HE_Grenade_Cylinder: CA_Magazine
	{
		author="$STR_A3_Night515";
		scope=2;
		type=256;
		displayName="40 mm 6Rnd HE Grenade Cylinder";
		displayNameShort="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_slug_CA.paa";
		ammo="G_40mm_HE";
		initSpeed=76;
		count=6;
		nameSound="";
		descriptionShort="Caliber: 40 mm<br />Rounds: 6 <br />Used in: MGL, RG-6";
		mass=30;
	};
	class VehicleMagazine;
	class 36Rnd_25mm_G_belt: VehicleMagazine
	{
		author="$STR_A3_Night515";
		scope=2;
		ammo="G_25mm_HE";
		initSpeed=400;
		maxLeadSpeed=400;
		nameSound="";
		count=36;
		displayName="$STR_A3_CfgMagazines_36Rnd_25mm_G_belt0";
		displayNameShort="$STR_A3_CfgMagazines_36Rnd_25mm_G_belt_dns";
		descriptionShort="$STR_A3_CfgMagazines_36Rnd_25mm_G_belt1";
	};
	class 300Rnd_20mm_shells;
	class 500Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count=500;
		ammo="B_20mm_Tracer_Red";
		weight=126;
	};
	class 250Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count=250;
		ammo="B_20mm";
	};
	class 300Rnd_25mm_shells;
	class 220Rnd_25mm_shells: 300Rnd_25mm_shells
	{
		author="$STR_A3_Night515";
		count=220;
	};
	class 250Rnd_30mm_HE_shells;
	class 250Rnd_30mm_HE_shells_Tracer_Yellow: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="30 mm HE Tracer (Yellow) Shells";
		ammo="B_30mm_HE_Tracer_Yellow";
		tracersEvery=1;
	};
	class 140Rnd_30mm_MP_shells;
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
	{
		displayNameMFDFormat="MP-T";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells
	{
		displayNameMFDFormat="ÐžÐ¤";
	};
	class 60Rnd_30mm_APFSDS_shells;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
	{
		displayNameMFDFormat="APFSDS-T";
	};
	class 1200Rnd_30mm_MP_shells: 140Rnd_30mm_MP_shells
	{
		author="$STR_A3_Night515";
		ammo="B_30mm_MP";
		count=1200;
	};
	class 1200Rnd_30mm_MP_shells_Tracer_Red: 1200Rnd_30mm_MP_shells
	{
		author="$STR_A3_Night515";
		ammo="B_30mm_MP_Tracer_Red";
		count=1200;
	};
	class 1200Rnd_30mm_MP_shells_Tracer_Green: 1200Rnd_30mm_MP_shells
	{
		author="$STR_A3_Night515";
		ammo="B_30mm_MP_Tracer_Green";
	};
	class 1200Rnd_30mm_MP_shells_Tracer_Yellow: 1200Rnd_30mm_MP_shells
	{
		author="$STR_A3_Night515";
		ammo="B_30mm_MP_Tracer_Yellow";
	};
	class 60Rnd_40mm_GPR_shells;
	class 120Rnd_40mm_GPR_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPR";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPR";
		ammo="B_40mm_GPR";
		initSpeed=1035;
		count=120;
	};
	class 120Rnd_40mm_GPR_Tracer_Red_shells: 120Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPRT";
		ammo="B_40mm_GPR_Tracer_Red";
		displayNameMFDFormat="GPR-T";
	};
	class 120Rnd_40mm_GPR_Tracer_Green_shells: 120Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPRT";
		ammo="B_40mm_GPR_Tracer_Green";
	};
	class 120Rnd_40mm_GPR_Tracer_Yellow_shells: 120Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPRT";
		ammo="B_40mm_GPR_Tracer_Yellow";
		displayNameMFDFormat="GPR-T";
	};
	class 80Rnd_40mm_APFSDS_shells: 120Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CFGMAGAZINES_40MM_APFSD";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD0";
		ammo="B_40mm_APFSDS";
		initSpeed=1600;
		count=80;
	};
	class 80Rnd_40mm_APFSDS_Tracer_Red_shells: 80Rnd_40mm_APFSDS_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_40Rnd_40mm_APFSDS_Tracer_Red_shells0";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo="B_40mm_APFSDS_Tracer_Red";
		count=80;
		displayNameMFDFormat="APFSDS-T";
	};
	class 80Rnd_40mm_APFSDS_Tracer_Green_shells: 80Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author="$STR_A3_Night515";
		ammo="B_40mm_APFSDS_Tracer_Green";
	};
	class 80Rnd_40mm_APFSDS_Tracer_Yellow_shells: 80Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author="$STR_A3_Night515";
		ammo="B_40mm_APFSDS_Tracer_Yellow";
		displayNameMFDFormat="APFSDS-T";
	};
	class 14Rnd_50mm_rockets: VehicleMagazine
	{
		author="$STR_A3_Night515";
		displayName="S-5";
		ammo="R_50mm_HE";
		initSpeed=44;
	};
	class 680Rnd_35mm_AA_shells;
	class 500Rnd_35mm_AA_shells: 680Rnd_35mm_AA_shells
	{
		author="$STR_A3_Night515";
		displayName="$STR_A3_CfgMagazines_680Rnd_35mm_AA_shells0";
		displayNameShort="$STR_A3_CfgMagazines_680Rnd_35mm_AA_shells_dns";
		ammo="B_35mm_AA";
		initSpeed=1440;
		count=500;
	};
	class 500Rnd_35mm_AA_shells_Tracer_Red: 500Rnd_35mm_AA_shells
	{
		author="$STR_A3_Night515";
		ammo="B_35mm_AA_Tracer_Red";
		displayNameMFDFormat="AA SHELLS";
	};
	class 500Rnd_35mm_AA_shells_Tracer_Green: 500Rnd_35mm_AA_shells
	{
		author="$STR_A3_Night515";
		ammo="B_35mm_AA_Tracer_Green";
		displayNameMFDFormat="ÐžÐ¤Ð—Ð¢";
	};
	class 500Rnd_35mm_AA_shells_Tracer_Yellow: 500Rnd_35mm_AA_shells
	{
		author="$STR_A3_Night515";
		ammo="B_35mm_AA_Tracer_Yellow";
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class 1350Rnd_Gatling_30mm_Plane_CAS_01_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author="$STR_A3_Night515";
		count=1350;
	};
	class magazine_Fighter02_Gun30mm_AA_x180;
	class magazine_VTOL02_Gun30mm_APDS_x350: magazine_Fighter02_Gun30mm_AA_x180
	{
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells0";
		displayNameShort="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_dns";
		ammo="B_30mm_AP";
		count=350;
	};
	class magazine_VTOL02_Gun30mm_HE_x350: magazine_Fighter02_Gun30mm_AA_x180
	{
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells0";
		displayNameShort="$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_dns";
		ammo="B_30mm_HE";
		count=350;
	};
	class magazine_Fighter04_Gun20mm_AA_x120: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x150_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x150_magazine_description";
		ammo="ammo_Fighter04_Gun20mm_AA";
		count=120;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow;
	class 60Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Yellow
	{
		author="$STR_A3_Night515";
		count=60;
	};
	class PylonRack_7Rnd_Rocket_50mm: 14Rnd_50mm_rockets
	{
		displayName="S-5";
		count=7;
		model="\A3\Weapons_F_Aegis\DynamicLoadout\PylonPod_Rocket_50mm.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_MISSILE_PYLON",
			"O_S5"
		};
		pylonWeapon="rockets_50mm";
		mass=208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative > 0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="\A3\Weapons_F_Aegis\MFD\UI\icon_Place_CAS_02_Rocket_50mm_CA.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative) / 2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative > 0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								
								{
									"R1",
									{0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{0.024,0},
									1
								},
								
								{
									"R1",
									{0.020784,0.015},
									1
								},
								
								{
									"R1",
									{0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{0,0.029999999},
									1
								},
								
								{
									"R1",
									{-0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{-0.020784,0.015},
									1
								},
								
								{
									"R1",
									{-0.024,0},
									1
								},
								
								{
									"R1",
									{-0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{-0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
						class PylonAmmo1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0,0},
								1
							};
							right[]=
							{
								{0.027000001,0},
								1
							};
							down[]=
							{
								{0,0.028000001},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected + PylonAmmoRelative) / 2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonAmmo1: PylonAmmo1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{0.024,1.31134e-009},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-2.0981501e-009,0.029999999},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-0.024,-3.57746e-010},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{4.19629e-009,-0.029999999},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									}
								}
							};
						};
					};
				};
			};
		};
	};
	class 2000Rnd_65x39_Belt_Tracer_Green_Splash;
	class PylonWeapon_2000Rnd_65x39_belt: 2000Rnd_65x39_Belt_Tracer_Green_Splash
	{
		scope=1;
	};
	class 2000Rnd_762x51_Belt_T_Green;
	class PylonWeapon_2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_T_Green
	{
		displayName="$STR_A3_LMG_Minigun1";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
		muzzlePos="machinegun_beg";
		muzzleEnd="machinegun_end";
		hardpoints[]=
		{
			"O_ORCA_RIGHT_PYLON"
		};
		pylonWeapon="LMG_Minigun_heli";
		mass=200;
	};
	class 2000Rnd_762x51_Belt_T_Yellow;
	class PylonWeapon_2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_T_Yellow
	{
		displayName="$STR_A3_LMG_Minigun1";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
		muzzlePos="machinegun_beg";
		muzzleEnd="machinegun_end";
		hardpoints[]=
		{
			"I_ORCA_RIGHT_PYLON"
		};
		pylonWeapon="LMG_Minigun_heli";
		mass=200;
	};
	class 2000Rnd_762x51_Belt_T_Red;
	class PylonWeapon_2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_T_Red
	{
		displayName="$STR_A3_LMG_Minigun1";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
		muzzlePos="machinegun_beg";
		muzzleEnd="machinegun_end";
		hardpoints[]=
		{
			"B_ORCA_RIGHT_PYLON"
		};
		pylonWeapon="LMG_Minigun_heli";
		mass=200;
	};
	class PylonWeapon_220Rnd_25mm_shells: 220Rnd_25mm_shells
	{
		displayName="$STR_A3_gatling_25mm0";
		model="\A3\Weapons_F_Aegis\DynamicLoadout\PylonPod_GAU12_Cannon_25mm.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"B_F38_CENTER_PYLON"
		};
		pylonWeapon="gatling_25mm";
		mass=260;
	};
	class PylonWeapon_250Rnd_20mm_shells: 250Rnd_20mm_shells
	{
		displayName="Cannon 20 mm";
		model="\A3\Weapons_F_Aegis\DynamicLoadout\PylonPod_Cannon_20mm.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"20MM_CANNON"
		};
		pylonWeapon="cannon_20mm";
		mass=250;
	};
};
class CfgRecoils
{
	class recoil_default;
	class recoil_aa40: recoil_default
	{
		muzzleOuter[]={0.40000001,1.5,0.60000002,0.40000001};
		kickBack[]={0.050000001,0.079999998};
		temporary=0.0099999998;
	};
	class recoil_m4: recoil_default
	{
		muzzleOuter[]={0.5,2,0.60000002,0.40000001};
		kickBack[]={0.050000001,0.07};
		temporary=0.015;
	};
	class recoil_ksg: recoil_default
	{
		muzzleOuter[]={0.40000001,1.5,0.60000002,0.40000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.02;
	};
	class recoil_mk16: recoil_default
	{
		muzzleOuter[]={0.2,1,0.30000001,0.2};
		kickBack[]={0.02,0.050000001};
		temporary=0.015;
	};
	class recoil_mk16_lmg: recoil_default
	{
		muzzleOuter[]={0.2,1,0.30000001,0.2};
		kickBack[]={0.02,0.050000001};
		temporary=0.015;
	};
	class recoil_mk17: recoil_default
	{
		muzzleOuter[]={0.40000001,1,0.30000001,0.2};
		kickBack[]={0.029999999,0.050000001};
		temporary=0.015;
	};
	class recoil_mk17_dmr: recoil_default
	{
		muzzleOuter[]={0.40000001,1,0.30000001,0.2};
		kickBack[]={0.029999999,0.050000001};
		temporary=0.015;
	};
	class recoil_pistol_p99: recoil_default
	{
		muzzleOuter[]={0.2,1,0.2,0.30000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.029999999;
	};
	class recoil_pistol_c1911: recoil_default
	{
		muzzleOuter[]={0.2,1.5,0.2,0.30000001};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.039999999;
	};
	class recoil_pistol_mk26: recoil_default
	{
		muzzleOuter[]={0.2,1.5,0.2,0.30000001};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.07;
	};
	class recoil_wf50: recoil_default
	{
		muzzleOuter[]={1.4,3.5,0.69999999,0.80000001};
		kickBack[]={0.1,0.12};
		temporary=0.02;
	};
};
class SlotInfo;
class CowsSlot: SlotInfo
{
	compatibleItems[]+=
	{
		"optic_tws_sniper",
		"optic_srs",
		"optic_dcl",
		"optic_ACOG",
		"optic_cco"
	};
};
class UnderBarrelSlot;
class PointerSlot;
class CfgVehicles
{
	class Item_Base_F;
	class Item_Laserdesignator_04: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Laser Designator (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		vehicleClass="Items";
		model="\A3\Weapons_F\DummyBinoc.p3d";
		class TransportItems
		{
			class _xx_Laserdesignator_04
			{
				name="Laserdesignator_04";
				count=1;
			};
		};
	};
	class Item_O_NVGoggles_blk_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgWeapons_O_NVGoggles_blk_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		vehicleClass="Items";
		model="\A3\Weapons_F\DummyNVG.p3d";
		class TransportItems
		{
			class _xx_O_NVGoggles_blk_F
			{
				name="O_NVGoggles_blk_F";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class RifleCore;
	class Rifle: RifleCore
	{
		zeroingSound[]=
		{
			"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",
			1,
			1,
			5
		};
	};
	class Binocular;
	class Laserdesignator;
	class Laserdesignator_04: Laserdesignator
	{
		author="$STR_A3_Night515";
		_generalMacro="Laserdesignator_04";
		displayName="Laser Designator (Grey)";
		descriptionShort="$STR_A3_cfgWeapons_Laserdesignator_031";
		model="\A3\Weapons_F_Beta\Binocular\LTLM.p3d";
		DLC="Aegis";
		picture="\A3\Weapons_F\Data\UI\gear_Lasermarker_CA.paa";
	};
	class TIGoggles: Binocular
	{
		author="$STR_A3_Night515";
		_generalMacro="TIGoggles";
		displayName="TI Goggles (Brown)";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\A3\Weapons_F\reticle\optics_night.p3d";
		model="\A3\Weapons_F\Binocular\NVG_proxy.p3d";
		picture="\A3\Weapons_F\Data\UI\gear_NVG_CA.paa";
		descriptionUse="$STR_A3_CfgWeapons_Default_TIGoggles1";
		visionMode[]=
		{
			"Normal",
			"Ti"
		};
		thermalMode[]={0,1};
		class Library
		{
			libTextDesc="$STR_LIB_TI_GOGGLES";
		};
		descriptionShort="$STR_DSS_TI_GOGGLES";
		class ItemInfo
		{
			type=616;
			uniformModel="A3\Weapons_F\Binocular\NVG_proxy.p3d";
			modelOff="A3\Weapons_F\Binocular\NVG_proxy_off.p3d";
			mass=20;
		};
	};
	class TIGoggles_OPFOR: TIGoggles
	{
		author="$STR_A3_Night515";
		_generalMacro="TIGoggles_OPFOR";
		modelOptics="\A3\Weapons_F\reticle\optics_night.p3d";
		model="\A3\Weapons_F\Binocular\NVG_proxy_OPFOR.p3d";
		picture="\A3\Weapons_F\Data\UI\gear_NVG_OPFOR_CA.paa";
		displayName="TI Goggles (Black)";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Weapons_F\Binocular\NVG_proxy_OPFOR.p3d";
			modelOff="A3\Weapons_F\Binocular\NVG_proxy_off_OPFOR.p3d";
		};
	};
	class TIGoggles_INDEP: TIGoggles
	{
		author="$STR_A3_Night515";
		_generalMacro="TIGoggles_INDEP";
		modelOptics="\A3\Weapons_F\reticle\optics_night.p3d";
		model="\A3\Weapons_f\binocular\NVG_proxy_INDEP.p3d";
		picture="\A3\Weapons_F\Data\UI\gear_NVG_indep_CA.paa";
		displayName="TI Goggles (Green)";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Weapons_F\Binocular\NVG_proxy_INDEP.p3d";
			modelOff="A3\Weapons_F\Binocular\NVG_proxy_off_INDEP.p3d";
		};
	};
	class TIGoggles_tna_F: TIGoggles
	{
		author="$STR_A3_Night515";
		_generalMacro="TIGoggles_tna_F";
		modelOptics="\A3\Weapons_F\reticle\optics_night.p3d";
		model="\A3\Weapons_F_Exp\Binocular\NVG_tna_proxy_F.p3d";
		picture="\A3\Weapons_F_Exp\Binocular\Data\UI\icon_NVGoggles_tna_F_CA.paa";
		displayName="TI Goggles (Tropic)";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_F_Exp\Binocular\NVG_tna_proxy_F.p3d";
			modelOff="\A3\Weapons_F_Exp\Binocular\NVG_tna_proxy_off_F.p3d";
		};
	};
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class Integrated_NVG_TI_0_F: NVGoggles
	{
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2,3};
	};
	class Integrated_NVG_TI_1_F: NVGoggles
	{
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={4,5};
	};
	class O_NVGoggles_blk_F: NVGoggles
	{
		author="$STR_A3_Night515";
		_generalMacro="O_NVGoggles_blk_F";
		displayName="$STR_A3_CfgWeapons_O_NVGoggles_blk_F0";
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
		model="\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
		picture="\A3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_blk_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
			modelOff="\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_off_F.p3d";
		};
	};
	class O_NVGoggles_hex_F: O_NVGoggles_blk_F
	{
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
	};
	class O_NVGoggles_urb_F: O_NVGoggles_blk_F
	{
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
	};
	class O_NVGoggles_ghex_F: O_NVGoggles_blk_F
	{
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
	};
	class NVGogglesB_blk_F: NVGoggles
	{
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
		thermalMode[]={0,1};
	};
	class NVGogglesB_grn_F: NVGogglesB_blk_F
	{
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
		thermalMode[]={0,1};
	};
	class NVGogglesB_gry_F: NVGogglesB_blk_F
	{
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
		thermalMode[]={0,1};
	};
	class Goggles_01: Binocular
	{
		author="$STR_A3_Night515";
		_generalMacro="Goggles_01";
		displayName="Goggles";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\A3\Weapons_F\reticle\optics_empty.p3d";
		model="\A3\Characters_F_Aegis\Common\G_Goggles_01.p3d";
		picture="\A3\Characters_F\Data\UI\icon_G_Combat_CA.paa";
		descriptionUse="$STR_A3_CfgWeapons_Default_TIGoggles1";
		visionMode[]=
		{
			"Normal"
		};
		descriptionShort="$STR_DSS_TI_GOGGLES";
		DLC="Aegis";
		class ItemInfo
		{
			type=616;
			uniformModel="\A3\Characters_F_Aegis\Common\G_Goggles_01.p3d";
			modelOff="\A3\Characters_F_Aegis\Common\G_Goggles_01.p3d";
			mass=6;
		};
	};
	class MGunCore;
	class MGun;
	class CannonCore;
	class RocketPods;
	class GBU12BombLauncher;
	class MissileLauncher;
	class GrenadeLauncher;
	class LMG_RCWS;
	class LMG_Minigun: LMG_RCWS
	{
		displayName="$STR_A3_LMG_Minigun1";
		class gunParticles
		{
			class effect1
			{
				effectName="MachineGunCartridge";
			};
			class effect2;
		};
		magazines[]+=
		{
			"200Rnd_65x39_Belt",
			"1000Rnd_65x39_Belt",
			"2000Rnd_65x39_Belt",
			"2000Rnd_65x39_Belt_Green",
			"2000Rnd_65x39_Belt_Yellow",
			"1000Rnd_65x39_Belt_Green",
			"1000Rnd_65x39_Belt_Yellow",
			"200Rnd_65x39_Belt_Tracer_Red",
			"200Rnd_65x39_Belt_Tracer_Green",
			"200Rnd_65x39_Belt_Tracer_Yellow",
			"1000Rnd_65x39_Belt_Tracer_Red",
			"1000Rnd_65x39_Belt_Tracer_Green",
			"1000Rnd_65x39_Belt_Tracer_Yellow",
			"2000Rnd_65x39_Belt_Tracer_Red",
			"2000Rnd_65x39_Belt_Tracer_Green",
			"2000Rnd_65x39_Belt_Tracer_Yellow",
			"2000Rnd_65x39_Belt_Tracer_Green_Splash",
			"2000Rnd_65x39_Belt_Tracer_Yellow_Splash",
			"200Rnd_762x51_Belt",
			"500Rnd_762x51_Belt",
			"1000Rnd_762x51_Belt",
			"2000Rnd_762x51_Belt",
			"5000Rnd_762x51_Belt",
			"200Rnd_762x51_Belt_Red",
			"200Rnd_762x51_Belt_Green",
			"200Rnd_762x51_Belt_Yellow",
			"500Rnd_762x51_Belt_Red",
			"500Rnd_762x51_Belt_Green",
			"500Rnd_762x51_Belt_Yellow",
			"1000Rnd_762x51_Belt_Red",
			"1000Rnd_762x51_Belt_Green",
			"1000Rnd_762x51_Belt_Yellow",
			"2000Rnd_762x51_Belt_Red",
			"2000Rnd_762x51_Belt_Green",
			"2000Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_T_Red",
			"200Rnd_762x51_Belt_T_Green",
			"200Rnd_762x51_Belt_T_Yellow",
			"500Rnd_762x51_Belt_T_Red",
			"500Rnd_762x51_Belt_T_Green",
			"500Rnd_762x51_Belt_T_Yellow",
			"1000Rnd_762x51_Belt_T_Red",
			"1000Rnd_762x51_Belt_T_Green",
			"1000Rnd_762x51_Belt_T_Yellow",
			"2000Rnd_762x51_Belt_T_Red",
			"2000Rnd_762x51_Belt_T_Green",
			"2000Rnd_762x51_Belt_T_Yellow",
			"5000Rnd_762x51_Yellow_Belt",
			"PylonWeapon_2000Rnd_762x51_Belt_T_Red",
			"PylonWeapon_2000Rnd_762x51_Belt_T_Green",
			"PylonWeapon_2000Rnd_762x51_Belt_T_Yellow"
		};
		modes[]=
		{
			"HighROF",
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: MGun
		{
			displayName="$STR_A3_LMG_Minigun1";
			multiplier=1;
		};
		class HighROF: manual
		{
			textureType="fastAuto";
			multiplier=3;
		};
	};
	class LMG_Minigun_heli: LMG_Minigun
	{
		class gunParticles
		{
			class effect1
			{
				effectName="MachineGunCartridge";
			};
			class effect2;
		};
		class manual: manual
		{
			displayName="$STR_A3_LMG_Minigun1";
		};
	};
	class HMG_127: LMG_RCWS
	{
		magazines[]+=
		{
			"100Rnd_127x99_mag",
			"100Rnd_127x99_mag_Tracer_Red",
			"100Rnd_127x99_mag_Tracer_Green",
			"100Rnd_127x99_mag_Tracer_Yellow"
		};
	};
	class HMG_01: HMG_127
	{
		class GunParticles
		{
			class effect1;
			class effect2;
			class effect3
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunEject";
			};
		};
	};
	class HMG_static: HMG_01
	{
	};
	class HMG_M2: HMG_01
	{
		magazines[]=
		{
			"100Rnd_127x99_mag",
			"100Rnd_127x99_mag_Tracer_Red",
			"100Rnd_127x99_mag_Tracer_Green",
			"100Rnd_127x99_mag_Tracer_Yellow",
			"200Rnd_127x99_mag",
			"200Rnd_127x99_mag_Tracer_Red",
			"200Rnd_127x99_mag_Tracer_Green",
			"200Rnd_127x99_mag_Tracer_Yellow"
		};
	};
	class HMG_M2_LT: HMG_M2
	{
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGunCloud";
			};
			delete effect2;
			delete effect3;
		};
	};
	class M134_minigun: MGunCore
	{
		class LowROF: Mode_FullAuto
		{
			showToPlayer=1;
		};
		class HighROF: LowROF
		{
			textureType="fastAuto";
		};
	};
	class GMG_F: MGun
	{
	};
	class GMG_25mm: GMG_F
	{
		scope=1;
		displayName="$STR_A3_GMG_25mm0";
		magazines[]=
		{
			"36Rnd_25mm_G_belt"
		};
		drySound[]=
		{
			"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_static_dry",
			1,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_static_reload",
			1,
			1,
			10
		};
		class GunClouds
		{
		};
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="GrenadeLauncherCloud";
			};
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: GMG_F
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"GMG20mm_Shot_SoundSet",
					"GMG20mm_Tail_SoundSet"
				};
			};
			displayName="$STR_A3_GMG_25mm0";
			aiRateOfFire=1;
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime=0.23999999;
			soundContinuous=0;
			soundBurst=0;
		};
		class close: manual
		{
			burst=6;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
			minRange=8;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class short: close
		{
			burst=5;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.1;
		};
		class medium: close
		{
			burst=4;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=3;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.40000001;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
		};
	};
	class autocannon_Base_F: CannonCore
	{
	};
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			magazines[]+=
			{
				"120Rnd_40mm_GPR_shells",
				"120Rnd_40mm_GPR_Tracer_Red_shells",
				"120Rnd_40mm_GPR_Tracer_Green_shells",
				"120Rnd_40mm_GPR_Tracer_Yellow_shells"
			};
		};
		class AP: autocannon_Base_F
		{
			magazines[]+=
			{
				"80Rnd_40mm_APFSDS_shells",
				"80Rnd_40mm_APFSDS_Tracer_Red_shells",
				"80Rnd_40mm_APFSDS_Tracer_Green_shells",
				"80Rnd_40mm_APFSDS_Tracer_Yellow_shells"
			};
		};
	};
	class gatling_20mm: CannonCore
	{
		magazines[]+=
		{
			"500Rnd_20mm_shells",
			"PylonWeapon_250Rnd_20mm_shells"
		};
	};
	class gatling_30mm_base: CannonCore
	{
		magazines[]+=
		{
			"250Rnd_30mm_HE_shells_Tracer_Green",
			"250Rnd_30mm_HE_shells_Tracer_Yellow"
		};
	};
	class gatling_30mm: gatling_30mm_base
	{
		class HE: gatling_30mm_base
		{
			magazines[]=
			{
				"250Rnd_30mm_HE_shells_Tracer_Green",
				"250Rnd_30mm_HE_shells_Tracer_Yellow",
				"250Rnd_30mm_HE_shells_Tracer_Green",
				"250Rnd_30mm_HE_shells_Tracer_Yellow"
			};
		};
	};
	class rockets_50mm: RocketPods
	{
		displayName="S-5";
		magazines[]=
		{
			"14Rnd_50mm_rockets",
			"PylonRack_7Rnd_Rocket_50mm"
		};
		ballisticsComputer=8;
		modes[]=
		{
			"Far_AI",
			"Burst"
		};
		canLock=0;
		weaponLockDelay=0;
		class Far_AI: RocketPods
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"RocketsMedium_Shot_SoundSet"
				};
			};
			weaponLockDelay=0;
			showToPlayer=0;
			minRange=50;
			minRangeProbab=0.15000001;
			midRange=600;
			midRangeProbab=0.25;
			maxRange=2500;
			maxRangeProbab=0.050000001;
			displayName="S-5";
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",
				1,
				1.1,
				700
			};
			burst=1;
			reloadTime=0.079999998;
			autoFire=0;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class Burst: RocketPods
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"RocketsMedium_Shot_SoundSet"
				};
			};
			displayName="S-5";
			burst=1;
			reloadTime=0.079999998;
			soundFly[]=
			{
				"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",
				1,
				1.9,
				700
			};
			autoFire=1;
			soundContinuous=0;
			minRange=250;
			minRangeProbab=0.25;
			midRange=400;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.1;
			textureType="fullAuto";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
	};
	class LMG_Minigun2: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				effectName="MachineGunCartridge";
			};
			class effect2;
		};
	};
	class LMG_Minigun_Transport: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				effectName="MachineGunCartridge";
			};
			class effect2;
		};
	};
	class LMG_Minigun_Transport2: LMG_Minigun_Transport
	{
		class GunParticles
		{
			class effect1
			{
				effectName="MachineGunCartridge";
			};
			class effect2;
		};
	};
	class gatling_25mm: CannonCore
	{
		magazines[]+=
		{
			"PylonWeapon_220Rnd_25mm_shells"
		};
		ballisticsComputer="4 + 8";
		showAimCursorInternal=0;
		class manual: CannonCore
		{
			class StandardSound
			{
				begin1[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_1",
					2,
					1,
					3000
				};
				begin2[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_2",
					2,
					1,
					3000
				};
				begin3[]=
				{
					"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_3",
					2,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
			};
			autoFire=1;
			burst=1;
		};
	};
	class autocannon_35mm: CannonCore
	{
		magazines[]+=
		{
			"500Rnd_35mm_AA_shells",
			"500Rnd_35mm_AA_shells_Tracer_Red",
			"500Rnd_35mm_AA_shells_Tracer_Green",
			"500Rnd_35mm_AA_shells_Tracer_Yellow"
		};
		class manual: CannonCore
		{
			reloadTime=0.10909091;
		};
	};
	class LMG_coax;
	class LMG_coax_body: LMG_coax
	{
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne2";
				directionName="konec hlavne2";
				effectName="MachineGunCloud";
			};
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		magazines[]+=
		{
			"1350Rnd_Gatling_30mm_Plane_CAS_01_F"
		};
	};
	class Rocket_04_HE_Plane_CAS_01_F: RocketPods
	{
		class Burst: RocketPods
		{
			autoFire=1;
		};
	};
	class HMG_127_MBT: HMG_static
	{
	};
	class weapon_Fighter_Gun_30mm;
	class weapon_Fighter_Gun_30mm_VTOL_02_base: weapon_Fighter_Gun_30mm
	{
		muzzleEnd="Cannon_barrel_beg";
		muzzlePos="Cannon_barrel_end";
		selectionFireAnim="Cannon_muzzleflash";
		class GunParticles
		{
			class Effect
			{
				directionName="Cannon_barrel_beg";
				effectName="MachineGun2";
				positionName="Cannon_barrel_end";
			};
		};
	};
	class weapon_Fighter_Gun_30mm_VTOL_02: weapon_Fighter_Gun_30mm_VTOL_02_base
	{
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: weapon_Fighter_Gun_30mm_VTOL_02_base
		{
			magazines[]+=
			{
				"magazine_VTOL02_Gun30mm_HE_x350"
			};
		};
		class AP: weapon_Fighter_Gun_30mm_VTOL_02_base
		{
			magazines[]+=
			{
				"magazine_VTOL02_Gun30mm_APDS_x350"
			};
		};
	};
	class weapon_Fighter_Gun20mm_AA: CannonCore
	{
		magazines[]+=
		{
			"magazine_Fighter04_Gun20mm_AA_x120"
		};
	};
	class autocannon_30mm_Heli_Attack_03: CannonCore
	{
		scope=1;
		displayName="$STR_A3_CfgWeapons_Cannon_30mm";
		magazines[]=
		{
			"1200Rnd_30mm_MP_shells",
			"1200Rnd_30mm_MP_shells_Tracer_Red",
			"1200Rnd_30mm_MP_shells_Tracer_Green",
			"1200Rnd_30mm_MP_shells_Tracer_Yellow"
		};
		ballisticsComputer="4 + 8";
		shotFromTurret=1;
		canLock=0;
		cursor="EmptyCursor";
		cursorAim="mg";
		showAimCursorInternal=0;
		modes[]=
		{
			"LowROF",
			"close",
			"near",
			"short",
			"medium",
			"far"
		};
		nameSound="cannon";
		selectionFireAnim="zasleh";
		autoFire=0;
		burst=5;
		reloadTime=0.096000001;
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun2";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName="$STR_A3_CfgWeapons_Cannon_30mm";
			reloadTime=0.096000001;
			burst=5;
			sounds[]=
			{
				"StandardSound"
			};
			aiRateOfFire=0.25;
			class StandardSound
			{
				soundSetShot[]=
				{
					"Autocannon30mmBody_Shot_SoundSet",
					"Autocannon30mmBody_tail_SoundSet"
				};
			};
			soundContinuous=0;
			flash="gunfire";
			flashSize=1;
			recoil="Empty";
			aiDispersionCoefX=6;
			aiDispersionCoefY=6;
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			minRange=1;
			minRangeProbab=0.059999999;
			midRange=2;
			midRangeProbab=0.059999999;
			maxRange=3;
			maxRangeProbab=0.0040000002;
			dispersion=0.00050000002;
			showToPlayer=1;
		};
		class close: LowROF
		{
			showToPlayer=0;
			burst=15;
			aiBurstTerminable=1;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=200;
			midRangeProbab=0.88;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class near: close
		{
			showToPlayer=0;
			burst=5;
			aiBurstTerminable=1;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=150;
			midRangeProbab=0.88;
			maxRange=300;
			maxRangeProbab=0.30000001;
		};
		class short: close
		{
			burst=13;
			aiBurstTerminable=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.88;
			maxRange=600;
			maxRangeProbab=0.30000001;
		};
		class medium: close
		{
			burst=9;
			aiBurstTerminable=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.30000001;
			midRange=700;
			midRangeProbab=0.77999997;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=5;
			aiBurstTerminable=1;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.60000002;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
	};
	class autocannon_30mm_RCWS: autocannon_Base_F
	{
		magazines[]+=
		{
			"60Rnd_30mm_MP_shells_Tracer_Yellow"
		};
	};
	class HMG_127_AFV: HMG_M2_LT
	{
	};
	class LMG_coax_AFV: LMG_coax
	{
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_2_beg";
				directionName="muzzle_2_end";
				effectName="MachineGunCloud";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
