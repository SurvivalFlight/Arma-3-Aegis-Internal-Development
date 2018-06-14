class CfgPatches
{
	class A3_Air_F_Aegis_Plane_Fighter_05
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Ejection_Seat_Plane_Fighter_05_F",
			"B_A_Plane_Fighter_05_F",
			"B_A_Plane_Fighter_05_Stealth_F",
			"B_Ejection_Seat_Plane_Fighter_05_F",
			"B_Plane_Fighter_05_F",
			"B_Plane_Fighter_05_Stealth_F",
			"B_T_Ejection_Seat_Plane_Fighter_05_F",
			"B_T_Plane_Fighter_05_F",
			"B_T_Plane_Fighter_05_Stealth_F"
		};
		weapons[]={};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Eventhandlers;
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class ViewPilot;
	};
	class Ejection_Seat_Base_F;
	class Plane_Canopy_Base_F;
	class PlaneWreck;
	class Plane_Fighter_05_Base_F: Plane_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Plane_Fighter_05_Base_F";
		scope=0;
		vehicleClass="Air";
		side=1;
		faction="BLU_F";
		displayName="$STR_A3_CfgVehicles_Plane_Fighter_05_Base_F0";
		simulation="airplaneX";
		DLC="Aegis";
		crew="B_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"B_Fighter_Pilot_F"
		};
		crewVulnerable=1;
		driverAction="Pilot_Plane_Fighter_05";
		driverLeftHandAnimName="throttle_pilot";
		driverRightHandAnimName="stick_pilot";
		precisegetinout=0;
		driverCanEject=0;
		cargoCanEject=0;
		ejectDeadGunner=0;
		ejectDeadCargo=0;
		ejectDeadDriver=0;
		disableInventory=1;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		getInRadius=5.5;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
		picture="\A3\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_CA.paa";
		icon="\A3\Air_F_Aegis\Plane_Fighter_05\Data\UI\map_Plane_Fighter_05_CA.paa";
		mapSize=15.5;
		model="\A3\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_F.p3d";
		animated=1;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_CO.paa"
		};
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		driveOnComponent[]={};
		cabinOpening=1;
		gearRetracting=1;
		geardowntime=3;
		gearuptime=4.5;
		lightOnGear=1;
		damperSize=0.0099999998;
		damperForce=0.0099999998;
		damperDamping=0;
		canFloat=0;
		formationX=30;
		formationZ=30;
		fuelCapacity=1500;
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		armor=80;
		armorStructural=1;
		armorLights=1;
		damageResistance=0.01096;
		destrType="DestructWreck";
		epeImpulseDamageCoef=150;
		waterLeakiness=2.5;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=3;
				explosionShielding=5;
				name="HitHull";
				passThrough=1;
				visual="Hit_Hull";
				radius=0.30000001;
				minimalHit=0.02;
				depends=0;
				material=-1;
			};
			class HitEngine: HitHull
			{
				armor=1.5;
				explosionShielding=2;
				name="HitEngine";
				passThrough=0.5;
				visual="Hit_Engine";
				radius=0.55000001;
				minimalHit=0.1;
			};
			class HitAvionics: HitHull
			{
				armor=3;
				explosionShielding=1;
				name="HitAvionics";
				passThrough=0.2;
				visual="";
				radius=0.2;
			};
			class HitFuel: HitHull
			{
				armor=3;
				explosionShielding=4;
				name="HitFuel";
				passThrough=0.5;
				visual="Hit_Hull";
				radius=0.30000001;
				minimalHit=0.1;
			};
			class HitFuel2: HitFuel
			{
				armor=3;
				explosionShielding=4;
				name="HitFuel2";
				passThrough=0.5;
				visual="Hit_Hull";
				radius=0.30000001;
				minimalHit=0.1;
			};
			class HitGlass1: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitGlass1";
				passThrough=0;
				visual="glass1";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitGlass2: HitGlass1
			{
				armor=1.5;
				explosionShielding=3;
				name="HitGlass2";
				passThrough=0;
				visual="glass2";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLAileron";
				passThrough=0.1;
				visual="Hit_AileronL";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitRAileron: HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRAileron";
				passThrough=0.1;
				visual="Hit_AileronR";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitLCRudder: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCRudder";
				passThrough=0.1;
				visual="Hit_RudderL";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitRRudder: HitLCRudder
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRRudder";
				passThrough=0.1;
				visual="Hit_RudderR";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitLCElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCElevator";
				passThrough=0.1;
				visual="Hit_ElevatorL";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitRElevator: HitLCElevator
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRElevator";
				passThrough=0.1;
				visual="Hit_ElevatorR";
				radius=0.2;
				minimalHit=0.1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_destruct.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_glass.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_glass_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_glass_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int_glass.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int_glass_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int_glass_damage.rvmat"
			};
		};
		LockDetectionSystem=8;
		incomingMissileDetectionSystem="8 + 16";
		enableGPS=1;
		radarTarget=1;
		visualTarget=1;
		radarTargetSize=0.80000001;
		visualTargetSize=1;
		irTargetSize=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		namesound="veh_air_plane_s";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=90;
						maxTrackableSpeed=400;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							viewDistanceLimitCoef=-1;
							objectDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							viewDistanceLimitCoef=-1;
							objectDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=45;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.2;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"B_BIM9X"
						};
						attachment="PylonMissile_Missile_BIM9X_x1";
						priority=10;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylons3: pylons2
					{
						hardpoints[]=
						{
							"B_BIM9X",
							"B_AMRAAM_C",
							"B_AMRAAM_D",
							"B_AGM65",
							"B_BOMB_PYLON"
						};
						attachment="PylonMissile_Missile_AGM_02_x1";
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons4
					{
						hardpoints[]=
						{
							"B_BIM9X",
							"B_AMRAAM_C",
							"B_AMRAAM_D",
							"B_AGM65",
							"B_BOMB_PYLON"
						};
						attachment="PylonMissile_Missile_AMRAAM_D_x1";
						priority=7;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=5;
					};
					class pylonBayRight1: pylons1
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_BOMB_PYLON"
						};
						priority=4;
						maxweight=2500;
						attachment="PylonMissile_Missile_AMRAAM_D_INT_x1";
						UIposition[]={0.33000001,0.34999999};
						bay=2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[]={0.33000001,0.15000001};
						mirroredMissilePos=7;
						bay=1;
					};
					class pylonBayRight2: pylonBayRight1
					{
						priority=2;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						UIposition[]={0.33000001,0.30000001};
					};
					class pylonBayLeft2: pylonBayLeft1
					{
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						UIposition[]={0.33000001,0.2};
						mirroredMissilePos=9;
					};
					class pylonCenter1
					{
						hardpoints[]=
						{
							"B_F38_CENTER_PYLON"
						};
						attachment="PylonWeapon_220Rnd_25mm_shells";
						priority=11;
						maxweight=1000;
						UIposition[]={0.33000001,0.25};
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayRight1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AGM_02_x1",
							"PylonMissile_Missile_AGM_02_x1",
							"PylonMissile_Missile_AMRAAM_D_x1",
							"PylonMissile_Missile_AMRAAM_D_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AMRAAM_D_x1",
							"PylonMissile_Missile_AMRAAM_D_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
					class CAS
					{
						displayName="$STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP";
						attachment[]=
						{
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AGM_02_x1",
							"PylonMissile_Missile_AGM_02_x1",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
					class Cluster
					{
						displayName="$STR_A3_CfgVehicles_Pylons_Presets_Cluster0";
						attachment[]=
						{
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_BIM9X_x1",
							"PylonMissile_Missile_AGM_02_x1",
							"PylonMissile_Missile_AGM_02_x1",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_1Rnd_BombCluster_01_F",
							"PylonMissile_1Rnd_BombCluster_01_F",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
				};
			};
		};
		dustEffect="VTOLDust";
		waterEffect="VTOLWater";
		memoryPointLDust="levy prach";
		memoryPointRDust="pravy prach";
		memoryPointLMissile="l strela";
		memoryPointRMissile="p strela";
		memoryPointLRocket="l raketa";
		memoryPointRRocket="p raketa";
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointDriverOptics="PilotCamera_pos";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		selectionClan="clan";
		selectionDashboard="autobacklit";
		selectionShowDamage="poskozeni";
		class TransportItems
		{
		};
		class Turrets
		{
		};
		unitInfoType="RscOptics_CAS_Pilot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(14.4 / 120)";
					minFov="(14.4 / 120)";
					maxFov="(14.4 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(4.8 / 120)";
					minFov="(4.8 / 120)";
					maxFov="(4.8 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class RenderTargets
		{
		};
		attenuationEffectType="PlaneAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\getin",
			1,
			1,
			40
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\getout",
			1,
			1,
			40
		};
		cabinOpenSound[]=
		{
			"A3\Sounds_F\air\noises\Plane_Fighter03_CabinOpen",
			1.7782794,
			1,
			40
		};
		cabinCloseSound[]=
		{
			"A3\Sounds_F\air\noises\Plane_Fighter03_CabinClose",
			1.7782794,
			1,
			40
		};
		cabinOpenSoundInternal[]=
		{
			"A3\Sounds_F\air\noises\Plane_Fighter03_CabinOpen",
			10,
			1,
			40
		};
		cabinCloseSoundInternal[]=
		{
			"A3\Sounds_F\air\noises\Plane_Fighter03_CabinClose",
			10,
			1,
			40
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",
			1.41254,
			1,
			500
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",
			1.41254,
			1,
			500
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			3.1622801,
			1,
			900
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",
			3.1622801,
			1,
			900
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",
			3.1622801,
			1,
			900
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",
			3.1622801,
			1,
			900
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_start_int",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_start_ext",
			1.75,
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_shut_int",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_shut_ext",
			1.75,
			1,
			300
		};
		soundLocked[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",
			1,
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_up",
			2.25,
			1,
			250
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_down",
			2.25,
			1,
			250
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Up",
			1.5,
			1,
			150
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Down",
			1.5,
			1,
			150
		};
		soundSetSonicBoom[]=
		{
			"Plane_Fighter_SonicBoom_SoundSet"
		};
		class Sounds
		{
			soundSets[]=
			{
				"Plane_Fighter_05_EngineLowExt_SoundSet",
				"Plane_Fighter_05_EngineHighExt_SoundSet",
				"Plane_Fighter_05_ForsageExt_SoundSet",
				"Plane_Fighter_05_WindNoiseExt_SoundSet",
				"Plane_Fighter_05_EngineExt_Dist_Front_SoundSet",
				"Plane_Fighter_05_EngineExt_Middle_SoundSet",
				"Plane_Fighter_05_EngineExt_Dist_Rear_SoundSet",
				"Plane_Fighter_05_EngineLowInt_SoundSet",
				"Plane_Fighter_05_EngineHighInt_SoundSet",
				"Plane_Fighter_05_ForsageInt_SoundSet",
				"Plane_Fighter_05_WindNoiseInt_SoundSet",
				"Plane_Fighter_05_VelocityInt_SoundSet"
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1.77828,
					1,
					100
				};
				frequency=1;
				volume="camPos*rain*(speed factor[50,0])";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*rain*(speed factor[50,0])";
			};
		};
		defaultUserMFDvalues[]={0.082000002,0.40799999,0.039000001,0.80000001};
		class MFD
		{
			class F35F_MFD_HORIZON
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0.1;
				borderRight=0.1;
				borderTop=0.1;
				borderBottom=0.1;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.40000001};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.55500001};
						pos10[]={1.5,1.5549999};
					};
					class Velocity
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.40000001};
						pos10[]={0.77399999,0.67000002};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					color[]={0.082000002,0.40799999,0.039000001,1};
					alpha=1;
					condition="on";
					enableParallax=0;
					class Horizont
					{
						clipTL[]={0.255,0.105};
						clipBR[]={0.84500003,0.72500002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.1,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.1,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.22,0},
										1
									},
									
									{
										"LevelM5",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.19,0},
										1
									},
									
									{
										"LevelM5",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.16,0},
										1
									},
									
									{
										"LevelM5",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.13,0},
										1
									},
									
									{
										"LevelM5",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.07,0},
										1
									},
									
									{
										"LevelM5",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM5",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.22,0},
										1
									},
									
									{
										"LevelM5",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.19,0},
										1
									},
									
									{
										"LevelM5",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.16,0},
										1
									},
									
									{
										"LevelM5",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.13,0},
										1
									},
									
									{
										"LevelM5",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									
									{
										"LevelM5",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.07,0},
										1
									},
									
									{
										"LevelM5",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_5_R
							{
								type="text";
								source="static";
								text=-5;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_5_R
							{
								type="text";
								source="static";
								text="5";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.22,0},
										1
									},
									
									{
										"LevelM10",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.19,0},
										1
									},
									
									{
										"LevelM10",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.16,0},
										1
									},
									
									{
										"LevelM10",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.13,0},
										1
									},
									
									{
										"LevelM10",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.07,0},
										1
									},
									
									{
										"LevelM10",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM10",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.22,0},
										1
									},
									
									{
										"LevelM10",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.19,0},
										1
									},
									
									{
										"LevelM10",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.16,0},
										1
									},
									
									{
										"LevelM10",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.13,0},
										1
									},
									
									{
										"LevelM10",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									
									{
										"LevelM10",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.07,0},
										1
									},
									
									{
										"LevelM10",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_10_R
							{
								type="text";
								source="static";
								text=-10;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_10_R
							{
								type="text";
								source="static";
								text="10";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.22,0},
										1
									},
									
									{
										"LevelM15",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.19,0},
										1
									},
									
									{
										"LevelM15",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.16,0},
										1
									},
									
									{
										"LevelM15",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.13,0},
										1
									},
									
									{
										"LevelM15",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.07,0},
										1
									},
									
									{
										"LevelM15",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM15",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.22,0},
										1
									},
									
									{
										"LevelM15",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.19,0},
										1
									},
									
									{
										"LevelM15",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.16,0},
										1
									},
									
									{
										"LevelM15",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.13,0},
										1
									},
									
									{
										"LevelM15",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									
									{
										"LevelM15",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.07,0},
										1
									},
									
									{
										"LevelM15",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_15_R
							{
								type="text";
								source="static";
								text=-15;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_15_R
							{
								type="text";
								source="static";
								text="15";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.22,0},
										1
									},
									
									{
										"LevelM20",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.19,0},
										1
									},
									
									{
										"LevelM20",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.16,0},
										1
									},
									
									{
										"LevelM20",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.13,0},
										1
									},
									
									{
										"LevelM20",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.07,0},
										1
									},
									
									{
										"LevelM20",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM20",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.22,0},
										1
									},
									
									{
										"LevelM20",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.19,0},
										1
									},
									
									{
										"LevelM20",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.16,0},
										1
									},
									
									{
										"LevelM20",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.13,0},
										1
									},
									
									{
										"LevelM20",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									
									{
										"LevelM20",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.07,0},
										1
									},
									
									{
										"LevelM20",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_20_R
							{
								type="text";
								source="static";
								text=-20;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_20_R
							{
								type="text";
								source="static";
								text="20";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.22,0},
										1
									},
									
									{
										"LevelM25",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.19,0},
										1
									},
									
									{
										"LevelM25",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.16,0},
										1
									},
									
									{
										"LevelM25",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.13,0},
										1
									},
									
									{
										"LevelM25",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.07,0},
										1
									},
									
									{
										"LevelM25",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM25",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.22,0},
										1
									},
									
									{
										"LevelM25",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.19,0},
										1
									},
									
									{
										"LevelM25",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.16,0},
										1
									},
									
									{
										"LevelM25",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.13,0},
										1
									},
									
									{
										"LevelM25",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									
									{
										"LevelM25",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.07,0},
										1
									},
									
									{
										"LevelM25",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_25_R
							{
								type="text";
								source="static";
								text=-25;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_25_R
							{
								type="text";
								source="static";
								text="25";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.22,0},
										1
									},
									
									{
										"LevelM30",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.19,0},
										1
									},
									
									{
										"LevelM30",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.16,0},
										1
									},
									
									{
										"LevelM30",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.13,0},
										1
									},
									
									{
										"LevelM30",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.07,0},
										1
									},
									
									{
										"LevelM30",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM30",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.22,0},
										1
									},
									
									{
										"LevelM30",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.19,0},
										1
									},
									
									{
										"LevelM30",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.16,0},
										1
									},
									
									{
										"LevelM30",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.13,0},
										1
									},
									
									{
										"LevelM30",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									
									{
										"LevelM30",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.07,0},
										1
									},
									
									{
										"LevelM30",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_30_R
							{
								type="text";
								source="static";
								text=-30;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_30_R
							{
								type="text";
								source="static";
								text="30";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.22,0},
										1
									},
									
									{
										"LevelM35",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.19,0},
										1
									},
									
									{
										"LevelM35",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.16,0},
										1
									},
									
									{
										"LevelM35",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.13,0},
										1
									},
									
									{
										"LevelM35",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.07,0},
										1
									},
									
									{
										"LevelM35",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM35",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.22,0},
										1
									},
									
									{
										"LevelM35",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.19,0},
										1
									},
									
									{
										"LevelM35",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.16,0},
										1
									},
									
									{
										"LevelM35",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.13,0},
										1
									},
									
									{
										"LevelM35",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									
									{
										"LevelM35",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.07,0},
										1
									},
									
									{
										"LevelM35",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_35_R
							{
								type="text";
								source="static";
								text=-35;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_35_R
							{
								type="text";
								source="static";
								text="35";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.22,0},
										1
									},
									
									{
										"LevelM40",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.19,0},
										1
									},
									
									{
										"LevelM40",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.16,0},
										1
									},
									
									{
										"LevelM40",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.13,0},
										1
									},
									
									{
										"LevelM40",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.07,0},
										1
									},
									
									{
										"LevelM40",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM40",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.22,0},
										1
									},
									
									{
										"LevelM40",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.19,0},
										1
									},
									
									{
										"LevelM40",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.16,0},
										1
									},
									
									{
										"LevelM40",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.13,0},
										1
									},
									
									{
										"LevelM40",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									
									{
										"LevelM40",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.07,0},
										1
									},
									
									{
										"LevelM40",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_40_R
							{
								type="text";
								source="static";
								text=-40;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_40_R
							{
								type="text";
								source="static";
								text="40";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.22,0},
										1
									},
									
									{
										"LevelM45",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.19,0},
										1
									},
									
									{
										"LevelM45",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.16,0},
										1
									},
									
									{
										"LevelM45",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.13,0},
										1
									},
									
									{
										"LevelM45",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.07,0},
										1
									},
									
									{
										"LevelM45",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM45",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.22,0},
										1
									},
									
									{
										"LevelM45",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.19,0},
										1
									},
									
									{
										"LevelM45",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.16,0},
										1
									},
									
									{
										"LevelM45",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.13,0},
										1
									},
									
									{
										"LevelM45",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									
									{
										"LevelM45",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.07,0},
										1
									},
									
									{
										"LevelM45",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_45_R
							{
								type="text";
								source="static";
								text=-45;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_45_R
							{
								type="text";
								source="static";
								text="45";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.22,0},
										1
									},
									
									{
										"LevelM50",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.19,0},
										1
									},
									
									{
										"LevelM50",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.16,0},
										1
									},
									
									{
										"LevelM50",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.13,0},
										1
									},
									
									{
										"LevelM50",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.07,0},
										1
									},
									
									{
										"LevelM50",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM50",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.22,0},
										1
									},
									
									{
										"LevelM50",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.19,0},
										1
									},
									
									{
										"LevelM50",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.16,0},
										1
									},
									
									{
										"LevelM50",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.13,0},
										1
									},
									
									{
										"LevelM50",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									
									{
										"LevelM50",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.07,0},
										1
									},
									
									{
										"LevelM50",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_50_R
							{
								type="text";
								source="static";
								text=-50;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_50_R
							{
								type="text";
								source="static";
								text="50";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM60",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.22,0},
										1
									},
									
									{
										"LevelM60",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.19,0},
										1
									},
									
									{
										"LevelM60",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.16,0},
										1
									},
									
									{
										"LevelM60",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.13,0},
										1
									},
									
									{
										"LevelM60",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.1,0},
										1
									},
									
									{
										"LevelM60",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.07,0},
										1
									},
									
									{
										"LevelM60",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM60",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.22,0},
										1
									},
									
									{
										"LevelM60",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.19,0},
										1
									},
									
									{
										"LevelM60",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.16,0},
										1
									},
									
									{
										"LevelM60",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.13,0},
										1
									},
									
									{
										"LevelM60",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.1,0},
										1
									},
									
									{
										"LevelM60",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.07,0},
										1
									},
									
									{
										"LevelM60",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_60
							{
								type="text";
								source="static";
								text=-60;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_60_R
							{
								type="text";
								source="static";
								text=-60;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP60",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_60
							{
								type="text";
								source="static";
								text="60";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_60_R
							{
								type="text";
								source="static";
								text="60";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM70",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.22,0},
										1
									},
									
									{
										"LevelM70",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.19,0},
										1
									},
									
									{
										"LevelM70",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.16,0},
										1
									},
									
									{
										"LevelM70",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.13,0},
										1
									},
									
									{
										"LevelM70",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.1,0},
										1
									},
									
									{
										"LevelM70",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.07,0},
										1
									},
									
									{
										"LevelM70",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM70",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.22,0},
										1
									},
									
									{
										"LevelM70",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.19,0},
										1
									},
									
									{
										"LevelM70",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.16,0},
										1
									},
									
									{
										"LevelM70",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.13,0},
										1
									},
									
									{
										"LevelM70",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.1,0},
										1
									},
									
									{
										"LevelM70",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.07,0},
										1
									},
									
									{
										"LevelM70",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_70
							{
								type="text";
								source="static";
								text=-70;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_70_R
							{
								type="text";
								source="static";
								text=-70;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP70",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_70
							{
								type="text";
								source="static";
								text="70";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_70_R
							{
								type="text";
								source="static";
								text="70";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM80",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.22,0},
										1
									},
									
									{
										"LevelM80",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.19,0},
										1
									},
									
									{
										"LevelM80",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.16,0},
										1
									},
									
									{
										"LevelM80",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.13,0},
										1
									},
									
									{
										"LevelM80",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.1,0},
										1
									},
									
									{
										"LevelM80",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.07,0},
										1
									},
									
									{
										"LevelM80",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM80",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.22,0},
										1
									},
									
									{
										"LevelM80",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.19,0},
										1
									},
									
									{
										"LevelM80",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.16,0},
										1
									},
									
									{
										"LevelM80",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.13,0},
										1
									},
									
									{
										"LevelM80",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.1,0},
										1
									},
									
									{
										"LevelM80",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.07,0},
										1
									},
									
									{
										"LevelM80",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_80
							{
								type="text";
								source="static";
								text=-80;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_80_R
							{
								type="text";
								source="static";
								text=-80;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP80",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_80
							{
								type="text";
								source="static";
								text="80";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_80_R
							{
								type="text";
								source="static";
								text="80";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM90",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.22,0},
										1
									},
									
									{
										"LevelM90",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.19,0},
										1
									},
									
									{
										"LevelM90",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.16,0},
										1
									},
									
									{
										"LevelM90",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.13,0},
										1
									},
									
									{
										"LevelM90",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.1,0},
										1
									},
									
									{
										"LevelM90",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.07,0},
										1
									},
									
									{
										"LevelM90",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM90",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.22,0},
										1
									},
									
									{
										"LevelM90",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.19,0},
										1
									},
									
									{
										"LevelM90",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.16,0},
										1
									},
									
									{
										"LevelM90",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.13,0},
										1
									},
									
									{
										"LevelM90",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.1,0},
										1
									},
									
									{
										"LevelM90",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.07,0},
										1
									},
									
									{
										"LevelM90",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_90
							{
								type="text";
								source="static";
								text=-90;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_90_R
							{
								type="text";
								source="static";
								text=-90;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP90",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_90
							{
								type="text";
								source="static";
								text="90";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_90_R
							{
								type="text";
								source="static";
								text="90";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{0.25999999,0.033},
									1
								};
							};
						};
					};
				};
			};
			class F35F_MFD_HORIZON_NUMBERS
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
				};
				class Draw
				{
					color[]={0.082000002,0.40799999,0.039000001,1};
					alpha=0.69999999;
					condition="on";
					enableParallax=0;
					class ASNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"-0.375 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.145"
							},
							1
						};
					};
					class ALTNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"0.35 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.145"
							},
							1
						};
					};
				};
			};
			class F35F_MFD_CENTRAL
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0.37,0.37};
					};
				};
				class Draw
				{
					color[]={0,0.12,0};
					alpha=1;
					condition="on";
					class Pylon1
					{
						type="pylonicon";
						pos[]=
						{
							{0.82999998,0.5},
							1
						};
						pylon=1;
						name="Plane_Fighter_01";
					};
					class Pylon2: Pylon1
					{
						pos[]=
						{
							{0.16,0.5},
							1
						};
						pylon=2;
					};
					class Pylon3: Pylon1
					{
						pos[]=
						{
							{0.71499997,0.44},
							1
						};
						pylon=3;
					};
					class Pylon4: Pylon1
					{
						pos[]=
						{
							{0.27500001,0.44},
							1
						};
						pylon=4;
					};
					class Pylon5: Pylon1
					{
						pos[]=
						{
							{0.61500001,0.37},
							1
						};
						pylon=5;
					};
					class Pylon6: Pylon1
					{
						pos[]=
						{
							{0.375,0.37},
							1
						};
						pylon=6;
					};
					class Pylon7: Pylon1
					{
						pos[]=
						{
							{0.66500002,0.57999998},
							1
						};
						pylon=7;
					};
					class Pylon8: Pylon1
					{
						pos[]=
						{
							{0.32499999,0.57999998},
							1
						};
						pylon=8;
					};
					class Pylon9: Pylon1
					{
						pos[]=
						{
							{0.59500003,0.55000001},
							1
						};
						pylon=9;
					};
					class Pylon10: Pylon1
					{
						pos[]=
						{
							{0.39500001,0.55000001},
							1
						};
						pylon=10;
					};
					class Pylon11: Pylon1
					{
						pos[]=
						{
							{0.52999997,0.51999998},
							1
						};
						pylon=11;
					};
					class Pylon12: Pylon1
					{
						pos[]=
						{
							{0.46000001,0.51999998},
							1
						};
						pylon=12;
					};
					class Gatling_Ammo
					{
						type="text";
						source="ammo";
						sourceIndex=0;
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.49000001,0.27000001},
							1
						};
						right[]=
						{
							{0.56,0.27000001},
							1
						};
						down[]=
						{
							{0.49000001,0.331},
							1
						};
					};
					class PylonText1
					{
						type="text";
						source="static";
						text="SELECTED WEAPON";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.66000003
							},
							1
						};
						right[]=
						{
							{0.52499998,0.66000003},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.70499998
							},
							1
						};
					};
					class WeaponText
					{
						type="text";
						source="weapon";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.69999999
							},
							1
						};
						right[]=
						{
							{0.54500002,0.69999999},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.76499999
							},
							1
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.75999999
							},
							1
						};
						right[]=
						{
							{0.54500002,0.75999999},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.82499999
							},
							1
						};
					};
					class CM_Name
					{
						type="text";
						source="CMWeapon";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.285,0.12},
							1
						};
						right[]=
						{
							{0.345,0.12},
							1
						};
						down[]=
						{
							{0.285,0.171},
							1
						};
					};
					class CM_Ammo
					{
						type="text";
						source="CMAmmo";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.285,0.16},
							1
						};
						right[]=
						{
							{0.345,0.16},
							1
						};
						down[]=
						{
							{0.285,0.211},
							1
						};
					};
					class Static
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.11,0.12},
								1
							},
							
							{
								{0.33000001,0.12},
								1
							},
							
							{
								{0.33000001,0.22},
								1
							},
							
							{
								{0.11,0.22},
								1
							},
							
							{
								{0.11,0.12},
								1
							}
						};
					};
				};
			};
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24))*on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class Tailhook
					{
						condition="user4";
						class TailhookText
						{
							type="text";
							source="static";
							text="TAILHOOK";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.88},
								1
							};
							right[]=
							{
								{0.98699999,0.88},
								1
							};
							down[]=
							{
								{0.93199998,0.92500001},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.92000002},
								1
							};
							right[]=
							{
								{0.98699999,0.92000002},
								1
							};
							down[]=
							{
								{0.93199998,0.96499997},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.83999997},
								1
							};
							right[]=
							{
								{0.98699999,0.83999997},
								1
							};
							down[]=
							{
								{0.93199998,0.88499999},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"ILS_W",
										{-0.12,0},
										1
									},
									
									{
										"ILS_W",
										{0.12,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{-0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0,0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,-0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,-0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,-0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0},
										1
									},
									
									{
										"ILS_H",
										{0.012,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,0.118248},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{-0.30000001,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{-0.40000001,-0.2},
							1
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="R";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.505018},
								1
							};
							down[]=
							{
								{0.92400002,0.54246402},
								1
							};
							right[]=
							{
								{0.96399999,0.505018},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.505018},
								1
							};
							right[]=
							{
								{0.917,0.505018},
								1
							};
							down[]=
							{
								{0.87699997,0.54246402},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.875,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.54149997
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.95499998,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.54149997
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5			)"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5			)"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045	)"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)) ";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
		class AnimationSources
		{
			class canopy_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class ejection_seat_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class ejection_seat_motion
			{
				source="user";
				animPeriod=0.25;
				initPhase=0;
			};
			class pylon_1_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class pylon_2_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class pylon_3_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class pylon_4_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class pylon_5_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class pylon_6_hide
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class throttle_pilot
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class HitAvionics
			{
				source="Hit";
				hitpoint="HitAvionics";
				raw=1;
			};
			class HitLCRudder
			{
				source="Hit";
				hitpoint="HitLCRudder";
				raw=1;
			};
			class HitRRudder
			{
				source="Hit";
				hitpoint="HitRRudder";
				raw=1;
			};
			class HitLCElevator
			{
				source="Hit";
				hitpoint="HitLCElevator";
				raw=1;
			};
			class HitRElevator
			{
				source="Hit";
				hitpoint="HitRElevator";
				raw=1;
			};
			class HitEngine
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class Wheel_1_1_source
			{
				source="wheel";
				wheel="Wheel_1_1";
			};
			class Wheel_2_1_source
			{
				source="wheel";
				wheel="Wheel_2_1";
			};
			class Wheel_2_2_source
			{
				source="wheel";
				wheel="Wheel_2_2";
			};
			class Damper_1_1_source
			{
				source="damper";
				wheel="Wheel_1_1";
			};
			class Damper_2_1_source
			{
				source="damper";
				wheel="Wheel_2_1";
			};
			class Damper_2_2_source
			{
				source="damper";
				wheel="Wheel_2_2";
			};
			class PositionWhite1_source
			{
				source="MarkerLight";
				markerLight="PositionWhite1";
			};
			class PositionWhite2_source
			{
				source="MarkerLight";
				markerLight="PositionWhite2";
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="PositionLight_red_1_pos";
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class PositionGreen: PositionRed
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="PositionLight_green_1_pos";
			};
			class PositionWhite1: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_white_1_pos";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
			};
			class PositionWhite2: PositionWhite1
			{
				name="PositionLight_white_2_pos";
			};
		};
		class Reflectors
		{
			class light_1
			{
				position="light_1";
				direction="light_1_end";
				hitpoint="light_1";
				selection="light_1";
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				intensity=25000;
				size=1;
				innerAngle=0;
				outerAngle=90;
				coneFadeCoef=12;
				useFlare=1;
				dayLight=0;
				FlareSize=1;
				flareMaxDistance=30;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=15;
					quadratic=7;
					hardLimitStart=75;
					hardLimitEnd=100;
				};
			};
		};
		airBrake=1;
		airBrakeFrictionCoef=2;
		flaps=1;
		flapsFrictionCoef=0.30000001;
		gearsUpFrictionCoef=0.80000001;
		brakeDistance=150;
		wheelSteeringSensitivity=4;
		maxSpeed=1920;
		altFullForce=5000;
		altNoForce=15000;
		rudderInfluence=0.76599997;
		aileronSensitivity=1;
		elevatorSensitivity=2.3;
		elevatorControlsSensitivityCoef=4;
		aileronControlsSensitivityCoef=3.5;
		rudderControlsSensitivityCoef=4;
		envelope[]={0,0.40000001,1.9,4,6.8000002,8.3000002,8.5,8,7.1999998,5.8000002,4,1.8,0.5,0};
		thrustCoef[]={1.76,1.7,1.62,1.6799999,1.74,1.8099999,1.89,1.95,1.96,1.96,1.92,1.4,0.40000001,0,0,0};
		elevatorCoef[]={0.30000001,0.5,0.66000003,0.51999998,0.49000001,0.46000001,0.43000001,0.40000001,0.34999999,0.30000001,0.25,0.18000001,0.17,0.16,0.15000001,0.15000001};
		aileronCoef[]={0.40000001,0.5,0.80000001,0.94999999,1.02,1.04,1.03,1.01,1,0.69999999,0.60000002,0.55000001,0.5,0.44999999,0.40000001,0.34999999};
		rudderCoef[]={0.5,1.8,2.5999999,2.75,2.8,2.8499999,2.9000001,2.95,2.98,3.01,2.7,1.1,0.89999998,0.69999999,0.5,0.30000001};
		angleOfIndicence="-3 * 3.1415 / 180";
		draconicForceXCoef=7;
		draconicForceYCoef=1.1;
		draconicForceZCoef=1;
		draconicTorqueXCoef=1.2;
		draconicTorqueYCoef=1;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
		gunAimDown=0.07;
		headAimDown=0;
		noseDownCoef=0;
		landingSpeed=220;
		stallSpeed=190;
		stallWarningTreshold=0.1;
		acceleration=200;
		landingAoa="7 * 3.1415 / 180";
		vtol=1;
		VTOLYawInfluence=6;
		VTOLPitchInfluence=3;
		VTOLRollInfluence=10;
		class UserActions
		{
			class Plane_Fighter_05_Eject
			{
				priority=0.050000001;
				shortcut="Eject";
				displayName="$STR_A3_action_eject";
				condition="player in this && {speed this > 1}";
				statement="[this] spawn BIS_fnc_planeEjection";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
		};
		class TextureSources
		{
			class DarkGrey
			{
				displayName="$STR_A3_VirtualGarage_Fighter_01_Camo_01";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class DarkGreyCamo
			{
				displayName="$STR_A3_VirtualGarage_Fighter_01_Camo_02";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_Camo_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Skins\Plane_Fighter_05_White_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
		};
		animationList[]={};
		textureList[]=
		{
			"DarkGrey",
			1,
			"DarkGreyCamo",
			0,
			"White",
			0
		};
		maxOmega=2000;
		class Wheels
		{
			class Wheel_1_1
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_center";
				boundary="wheel_1_1_bound";
				width=0.16;
				mass=150;
				MOI=6;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_center";
				tireForceAppPointOffset="wheel_1_1_center";
				maxCompression=0.1;
				maxDroop=0.15000001;
				sprungMass=4264;
				springStrength=106600;
				springDamperRate=17056;
				longitudinalStiffnessPerUnitGravity=7000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class Wheel_2_1: Wheel_1_1
			{
				boneName="wheel_2_1";
				steering=0;
				center="wheel_2_1_center";
				boundary="wheel_2_1_bound";
				width=0.23999999;
				mass=180;
				MOI=17;
				maxCompression=0.1;
				maxDroop=0.15000001;
				sprungMass=3198;
				springStrength=79950;
				springDamperRate=12792;
				suspForceAppPointOffset="wheel_2_1_center";
				tireForceAppPointOffset="wheel_2_1_center";
			};
			class Wheel_2_2: Wheel_2_1
			{
				boneName="wheel_2_2";
				side="right";
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_center";
				tireForceAppPointOffset="wheel_2_2_center";
			};
		};
		extCameraPosition[]={0,3,-18};
		class ViewPilot: ViewPilot
		{
			initFov=0.89999998;
			initAngleX=0;
			minAngleX=-40;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-130;
			maxAngleY=130;
			minMoveX=-0.1;
			maxMoveX=0.1;
			minMoveY=-0.025;
			maxMoveY=0.050000001;
			minMoveZ=-0.1;
			maxMoveZ=0.1;
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectPlaneHP";
				engineIndex=0;
			};
		};
		class WingVortices
		{
			class BodyLeft
			{
				effectName="FX_FuselageVapour_FighterJet";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="FX_FuselageVapour_FighterJet";
				position="body_vapour_R_S";
			};
			class WingTipLeft
			{
				effectName="FX_WingVortices_FighterJet";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="FX_WingVortices_FighterJet";
				position="body_vapour_R_E";
			};
		};
		class Library
		{
			libEnable=1;
			libTextDesc="";
		};
		class EjectionSystem
		{
			EjectionSeatEnabled=1;
			EjectionDual=0;
			EjectionSeatClass="B_Ejection_Seat_Plane_Fighter_05_F";
			CanopyClass="Plane_Fighter_05_Canopy_F";
			EjectionSeatHideAnim="ejection_seat_hide";
			EjectionSeatRailAnim="ejection_seat_motion";
			CanopyHideAnim="canopy_hide";
			EjectionSeatPos="pos_eject";
			CanopyPos="pos_eject_canopy";
			EjectionSoundExt="Plane_Fighter_01_ejection_ext_sound";
			EjectionSoundInt="Plane_Fighter_01_ejection_in_sound";
			EjectionParachute="Steerable_Parachute_F";
			EjectionSeatForce=50;
			CanopyForce=30;
		};
		class Eventhandlers: Eventhandlers
		{
			hit="_this call BIS_fnc_PlaneAiEject";
		};
	};
	class B_Plane_Fighter_05_F: Plane_Fighter_05_Base_F
	{
		scope=2;
		displayName="$STR_A3_CfgVehicles_Plane_Fighter_05_Base_F0";
		radarTargetSize=0.80000001;
		DLC="Aegis";
	};
	class B_T_Plane_Fighter_05_F: B_Plane_Fighter_05_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Fighter_05_F.jpg";
		_generalMacro="B_T_Plane_Fighter_05_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"B_T_Fighter_Pilot_F"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="B_T_Ejection_Seat_Plane_Fighter_05_F";
		};
	};
	class B_A_Plane_Fighter_05_F: B_Plane_Fighter_05_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_F.jpg";
		_generalMacro="B_A_Plane_Fighter_05_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"B_A_Fighter_Pilot_F"
		};
		class TextureSources
		{
			class DarkGrey
			{
				displayName="$STR_A3_VirtualGarage_Fighter_01_Camo_01";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Skins\Plane_Fighter_05_UK_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
		textureList[]=
		{
			"DarkGrey",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Skins\Plane_Fighter_05_UK_CO.paa"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="B_A_Ejection_Seat_Plane_Fighter_05_F";
		};
	};
	class B_Plane_Fighter_05_Stealth_F: Plane_Fighter_05_Base_F
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="$STR_A3_CfgVehicles_Plane_Fighter_05_Stealth_F0";
		radarTargetSize=0.40000001;
		class AnimationSources: AnimationSources
		{
			class pylon_1_hide: pylon_1_hide
			{
				initPhase=1;
			};
			class pylon_2_hide: pylon_2_hide
			{
				initPhase=1;
			};
			class pylon_3_hide: pylon_3_hide
			{
				initPhase=1;
			};
			class pylon_4_hide: pylon_4_hide
			{
				initPhase=1;
			};
			class pylon_5_hide: pylon_5_hide
			{
				initPhase=1;
			};
			class pylon_6_hide: pylon_6_hide
			{
				initPhase=1;
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=90;
						maxTrackableSpeed=400;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							viewDistanceLimitCoef=-1;
							objectDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							viewDistanceLimitCoef=-1;
							objectDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=45;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.2;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_3DEN_CA.paa";
				class pylons
				{
					class pylonDummy1
					{
						attachment="";
						UIposition[]={10,10};
					};
					class pylonDummy2: pylonDummy1
					{
					};
					class pylonDummy3: pylonDummy1
					{
					};
					class pylonDummy4: pylonDummy1
					{
					};
					class pylonDummy5: pylonDummy1
					{
					};
					class pylonDummy6: pylonDummy1
					{
					};
					class pylonBayRight1
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_INT",
							"B_BOMB_PYLON"
						};
						priority=4;
						maxweight=2500;
						attachment="PylonMissile_Missile_AMRAAM_D_INT_x1";
						UIposition[]={0.33000001,0.34999999};
						bay=2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[]={0.33000001,0.15000001};
						mirroredMissilePos=7;
						bay=1;
					};
					class pylonBayRight2: pylonBayRight1
					{
						priority=2;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						UIposition[]={0.33000001,0.30000001};
					};
					class pylonBayLeft2: pylonBayLeft1
					{
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						UIposition[]={0.33000001,0.2};
						mirroredMissilePos=9;
					};
					class pylonCenter1
					{
						hardpoints[]=
						{
							"B_F38_CENTER_PYLON"
						};
						attachment="PylonWeapon_220Rnd_25mm_shells";
						priority=11;
						maxweight=1000;
						UIposition[]={0.33000001,0.25};
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
					class CAS
					{
						displayName="$STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
					class Cluster
					{
						displayName="$STR_A3_CfgVehicles_Pylons_Presets_Cluster0";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PylonMissile_Missile_AMRAAM_D_INT_x1",
							"PlaceHolderCluster",
							"PlaceHolderCluster",
							"PylonWeapon_220Rnd_25mm_shells"
						};
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
					class BayRight1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=2;
					};
				};
			};
		};
	};
	class B_T_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Fighter_05_Stealth_F.jpg";
		_generalMacro="B_T_Plane_Fighter_05_Stealth_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"B_T_Fighter_Pilot_F"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="B_T_Ejection_Seat_Plane_Fighter_05_F";
		};
	};
	class B_A_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_Stealth_F.jpg";
		_generalMacro="B_A_Plane_Fighter_05_Stealth_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"B_A_Fighter_Pilot_F"
		};
		class TextureSources
		{
			class DarkGrey
			{
				displayName="$STR_A3_VirtualGarage_Fighter_01_Camo_01";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Skins\Plane_Fighter_05_UK_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
		textureList[]=
		{
			"DarkGrey",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Fighter_05\Data\Skins\Plane_Fighter_05_UK_CO.paa"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="B_A_Ejection_Seat_Plane_Fighter_05_F";
		};
	};
	class B_Plane_Fighter_05_wreck_F: PlaneWreck
	{
		scope=1;
		author="$STR_A3_Night515";
		class Armory
		{
			disabled=1;
		};
		model="\A3\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_Wreck_F.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=0;
	};
	class Plane_Fighter_05_Canopy_F: Plane_Canopy_Base_F
	{
		displayName="$STR_A3_Fighter_01_Canopy_name";
		model="\A3\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_Canopy_F.p3d";
		scope=1;
	};
	class Ejection_Seat_Plane_Fighter_05_base_F: Ejection_Seat_Base_F
	{
		author="$STR_A3_Night515";
		scope=0;
		displayName="$STR_A3_Ejection_Seat_01_name";
		model="\A3\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_ejection_seat_F.p3d";
		icon="iconParachute";
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction="Pilot_Plane_Fighter_Ejection";
		cargoAction[]=
		{
			"Pilot_Plane_Fighter_Ejection"
		};
	};
	class B_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		author="$STR_A3_Night515";
		scope=1;
		side=1;
		faction="BLU_F";
		crew="B_Fighter_Pilot_F";
	};
	class B_T_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		author="$STR_A3_Night515";
		scope=1;
		side=1;
		faction="BLU_T_F";
		crew="B_T_Fighter_Pilot_F";
	};
	class B_A_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		author="$STR_A3_Night515";
		scope=1;
		side=1;
		faction="BLU_A_F";
		crew="B_A_Fighter_Pilot_F";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
