class CfgPatches
{
	class A3_Air_F_Aegis_Plane_Transport_01
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Plane_Transport_01_F",
			"B_Plane_Transport_01_F",
			"B_T_Plane_Transport_01_F",
			"I_Plane_Transport_01_F",
			"O_Plane_Transport_01_F"
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Eventhandlers;
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class NewTurret;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class ViewPilot;
	};
	class PlaneWreck;
	class Plane_Transport_01_Base_F: Plane_Base_F
	{
		scope=1;
		vehicleClass="Air";
		displayName="$STR_A3_CfgVehicles_Plane_Transport_01_Base_F0";
		author="$STR_A3_Night515";
		_generalMacro="Plane_Transport_01_Base_F";
		simulation="airplaneX";
		crewVulnerable=1;
		driverAction="Pilot_Plane_Transport_01";
		driverLeftHandAnimName="Control_wheel_1";
		driverRightHandAnimName="Control_wheel_1";
		driverLeftLegAnimName="Pedals_left_1";
		driverRightLegAnimName="Pedals_right_1";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		getInProxyOrder[]={18,22,5,12,20,3,6,13,21,4,11,19,10,16,25,8,24,14,17,26,9,15,23,7};
		cargoProxyIndexes[]={3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_low01",
			"passenger_generic01_leanright",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic01",
			"passenger_apc_generic04",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic01",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic04",
			"passenger_apc_generic01",
			"passenger_apc_generic03",
			"passenger_generic01_foldhands",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic02",
			"passenger_apc_generic03",
			"passenger_apc_generic04",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic01"
		};
		cargoCompartments[]=
		{
			"Compartment2"
		};
		precisegetinout=0;
		driverCanEject=1;
		cargoCanEject=1;
		ejectDeadGunner=0;
		ejectDeadCargo=0;
		ejectDeadDriver=0;
		disableInventory=0;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		getInRadius=2.5;
		supplyRadius=9;
		transportSoldier=24;
		picture="\A3\Air_F_Aegis\Plane_Transport_01\Data\UI\Plane_Transport_01_CA.paa";
		icon="\A3\Air_F_Aegis\Plane_Transport_01\Data\UI\map_Plane_Transport_01_CA.paa";
		mapSize=25;
		model="\A3\Air_F_Aegis\Plane_Transport_01\Plane_Transport_01_F.p3d";
		animated=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_CO.paa",
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_CO.paa"
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		driveOnComponent[]=
		{
			"wheel_1_1",
			"wheel_2_1",
			"wheel_2_2",
			"wheel_3_1",
			"wheel_3_2"
		};
		cabinOpening=0;
		gearRetracting=1;
		geardowntime=3;
		gearuptime=4.5;
		lightOnGear=1;
		damperSize=0.0099999998;
		damperForce=0.0099999998;
		damperDamping=0;
		canFloat=0;
		formationX=100;
		formationZ=100;
		fuelCapacity=10000;
		availableForSupportTypes[]=
		{
			"Drop"
		};
		armor=70;
		armorStructural=1;
		armorLights=1;
		damageResistance=0.0040000002;
		destrType="DestructDefault";
		epeImpulseDamageCoef=50;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=3;
				explosionShielding=5;
				name="HitHull";
				passThrough=0.5;
				visual="zbytek";
				radius=0.30000001;
				minimalHit=0.02;
				depends="Total";
				material=-1;
			};
			class HitEngine: HitHull
			{
				armor=1.5;
				explosionShielding=2;
				name="HitEngine";
				passThrough=0.5;
				visual="engine_1";
				radius=0.55000001;
				minimalHit=0.1;
			};
			class HitEngine2: HitEngine
			{
				armor=1.5;
				explosionShielding=2;
				name="HitEngine2";
				passThrough=0.5;
				visual="engine_2";
				radius=0.55000001;
				minimalHit=0.1;
			};
			class HitEngine3: HitEngine
			{
				armor=1.5;
				explosionShielding=2;
				name="HitEngine3";
				passThrough=0.5;
				visual="engine_3";
				radius=0.55000001;
				minimalHit=0.1;
			};
			class HitEngine4: HitEngine
			{
				armor=1.5;
				explosionShielding=2;
				name="HitEngine4";
				passThrough=0.5;
				visual="engine_4";
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
			class HitAmmo: HitHull
			{
				armor=3;
				explosionShielding=1;
				name="HitAmmo";
				passThrough=0;
				visual="";
				radius=0.30000001;
			};
			class HitFuel: HitHull
			{
				armor=3;
				explosionShielding=4;
				name="HitFuel";
				passThrough=0.5;
				visual="";
				radius=0.30000001;
				minimalHit=0.1;
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLAileron";
				passThrough=0.1;
				visual="aileron_1_1";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitRAileron: HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRAileron";
				passThrough=0.1;
				visual="aileron_1_2";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitCRudder: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitCRudder";
				passThrough=0.1;
				visual="rudder";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitLCElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCElevator";
				passThrough=0.1;
				visual="elevator_l";
				radius=0.2;
				minimalHit=0.1;
			};
			class HitRElevator: HitLCElevator
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRElevator";
				passThrough=0.1;
				visual="elevator_r";
				radius=0.2;
				minimalHit=0.1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_destruct.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_destruct.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_destruct.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_in.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_in_damage.rvmat",
				"A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_in_damage.rvmat"
			};
		};
		class UserActions
		{
			class Ramp_Open
			{
				userActionID=60;
				displayName="$STR_ACTION_RAMP_OPEN0";
				textToolTip="$STR_ACTION_RAMP_OPEN0";
				displayNameDefault="<img image='\A3\UI_F\Data\IGUI\Cfg\Actions\open_door_CA.paa' size='2.5' />";
				position="";
				condition="this doorPhase ""Door_1_source"" < 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement="this animateDoor ['Door_1_source', 1] && this animateDoor ['ramp_top', 1]";
				priority=1.5;
				radius=15;
				radiusView=0.2;
				showIn3D=17;
				available=1;
				showWindow=0;
				onlyForPlayer=1;
				shortcut="";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID=61;
				displayName="$STR_ACTION_RAMP_CLOSE0";
				textToolTip="$STR_ACTION_RAMP_CLOSE0";
				condition="this doorPhase ""Door_1_source"" > 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement="this animateDoor ['Door_1_source', 0] && this animateDoor ['ramp_top', 0]";
			};
		};
		LockDetectionSystem="8+4";
		incomingMissileDetectionSystem="8+16";
		enableGPS=1;
		radarTargetSize=1.8;
		visualTargetSize=1.6;
		irTargetSize=1.6;
		namesound="Plane";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=4000;
							maxRange=4000;
							viewDistanceLimitCoef=-1;
							objectDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							viewDistanceLimitCoef=-1;
							objectDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=240;
						angleRangeHorizontal=110;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=0;
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
						range[]={4000,2000,16000,8000};
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
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		memoryPointLDust="levy prach";
		memoryPointRDust="pravy prach";
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2",
			"flare_launcher3",
			"flare_launcher4"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir",
			"flare_launcher3_dir",
			"flare_launcher4_dir"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		memoryPointDriverOptics="PilotCamera_pos";
		selectionClan="clan";
		selectionDashboard="display_off";
		selectionFireAnim="zasleh";
		selectionShowDamage="poskozeni";
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=27;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				commanding=-1;
				animationSourceBody="";
				animationSourceGun="";
				body="";
				castGunnerShadow=1;
				gun="";
				gunBeg="";
				gunEnd="";
				gunnerCompartments="Compartment1";
				gunnerForceOptics=0;
				gunnerAction="Pilot_Plane_Transport_01";
				gunnerInAction="Pilot_Plane_Transport_01";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerLeftHandAnimName="Control_wheel_2";
				gunnerRightHandAnimName="Control_wheel_2";
				gunnerLeftLegAnimName="Pedals_left_2";
				gunnerRightLegAnimName="Pedals_right_2";
				gunnerUsePilotView=1;
				gunnerOpticsModel="";
				isCopilot=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				proxyIndex=1;
				class MFD
				{
					class AirplaneHUD
					{
						topLeft="HUD LH2";
						topRight="HUD PH2";
						bottomLeft="HUD LD2";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]={0.15000001,1,0.15000001,1};
						turret[]={-1};
						class Bones
						{
							class HUDCenter
							{
								type="fixed";
								pos[]={0.5,0.5};
							};
							class HorizonBankSource
							{
								type="rotational";
								source="HorizonBank";
								center[]={0.5,0.5};
								min=-6.2831001;
								max=6.2831001;
								minAngle=-360;
								maxAngle=360;
							};
							class HorizonDiveSource
							{
								source="horizonDive";
								type="linear";
								min=-1;
								max=1;
								minPos[]={0.5,2.5};
								maxPos[]={0.5,-1.5};
							};
							class VelocityVector
							{
								type="vector";
								source="velocityToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class ForwardVector
							{
								type="vector";
								source="forward";
								pos0[]={0,0};
								pos10[]={0.234,0.23};
							};
							class ASL_Instrument
							{
								type="rotational";
								source="altitudeASL";
								center[]={0.89999998,0.29487199};
								min=0;
								max=20000;
								minAngle=0;
								maxAngle=72000;
								aspectRatio=0.98290598;
							};
							class Speed_Instrument: ASL_Instrument
							{
								source="speed";
								center[]={0.1,0.29487199};
								max=555.55603;
								maxAngle=7200;
							};
							class WPPoint
							{
								type="vector";
								source="WPPointToView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class Target
							{
								source="targettoview";
								type="vector";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min=-1.5707999;
								max=1.5707999;
								minAngle=90;
								maxAngle=270;
								aspectRatio=1;
							};
							class HorizonBankRotFull
							{
								type="rotational";
								source="horizonBank";
								center[]={0,0};
								min=-3.1415999;
								max=3.1415999;
								minAngle=-180;
								maxAngle=180;
								aspectRatio=1;
							};
							class ThrustVectoringRotation
							{
								type="rotational";
								source="vtolvectoring";
								sourceScale=100;
								center[]={0.07,0.78500003};
								min=0;
								max=100;
								minAngle=-180;
								maxAngle="-180+90";
								aspectRatio=0.98290598;
							};
							class Level0
							{
								pos0[]={0.5,0.5};
								pos10[]={0.83399999,0.82999998};
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
							class LevelP55: Level0
							{
								angle=55;
							};
							class LevelM55: Level0
							{
								angle=-55;
							};
							class LevelP60: Level0
							{
								angle=60;
							};
							class LevelM60: Level0
							{
								angle=-60;
							};
							class LevelP65: Level0
							{
								angle=65;
							};
							class LevelM65: Level0
							{
								angle=-65;
							};
							class LevelP70: Level0
							{
								angle=70;
							};
							class LevelM70: Level0
							{
								angle=-70;
							};
							class LevelP75: Level0
							{
								angle=75;
							};
							class LevelM75: Level0
							{
								angle=-75;
							};
							class LevelP80: Level0
							{
								angle=80;
							};
							class LevelM80: Level0
							{
								angle=-80;
							};
							class LevelP85: Level0
							{
								angle=85;
							};
							class LevelM85: Level0
							{
								angle=-85;
							};
							class LevelP90: Level0
							{
								angle=90;
							};
							class LevelM90: Level0
							{
								angle=-90;
							};
							class Airport1
							{
								type="vector";
								source="airportCorner1toView";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
							};
							class Airport2: Airport1
							{
								source="airportCorner2toView";
							};
							class Airport3: Airport1
							{
								source="airportCorner3toView";
							};
							class Airport4: Airport1
							{
								source="airportCorner4toView";
							};
							class ILS_H
							{
								type="ils";
								pos0[]={0.5,0.5};
								pos3[]={0.57020003,0.5};
							};
							class ILS_W: ILS_H
							{
								pos3[]={0.5,0.56900001};
							};
						};
						class Draw
						{
							alpha=1;
							color[]={0.15000001,1,0.15000001,1};
							condition="(1 - (cameraHeadingDiffY<=-29) + (abs(cameraHeadingDiffX)>=29))*on";
							class VelocityLine
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"VelocityVector",
										{0,-0.0196581},
										1
									},
									
									{
										"VelocityVector",
										{0.0099999998,-0.017023901},
										1
									},
									
									{
										"VelocityVector",
										{0.01732,-0.0098290602},
										1
									},
									
									{
										"VelocityVector",
										{0.02,0},
										1
									},
									
									{
										"VelocityVector",
										{0.01732,0.0098290602},
										1
									},
									
									{
										"VelocityVector",
										{0.0099999998,0.017023901},
										1
									},
									
									{
										"VelocityVector",
										{0,0.0196581},
										1
									},
									
									{
										"VelocityVector",
										{-0.0099999998,0.017023901},
										1
									},
									
									{
										"VelocityVector",
										{-0.01732,0.0098290602},
										1
									},
									
									{
										"VelocityVector",
										{-0.02,0},
										1
									},
									
									{
										"VelocityVector",
										{-0.01732,-0.0098290602},
										1
									},
									
									{
										"VelocityVector",
										{-0.0099999998,-0.017023901},
										1
									},
									
									{
										"VelocityVector",
										{0,-0.0196581},
										1
									},
									{},
									
									{
										"VelocityVector",
										{0.039999999,0},
										1
									},
									
									{
										"VelocityVector",
										{0.02,0},
										1
									},
									{},
									
									{
										"VelocityVector",
										{-0.039999999,0},
										1
									},
									
									{
										"VelocityVector",
										{-0.02,0},
										1
									},
									{},
									
									{
										"VelocityVector",
										{0,-0.0393162},
										1
									},
									
									{
										"VelocityVector",
										{0,-0.0196581},
										1
									},
									{}
								};
							};
							class Static
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"HUDCenter",
										{0.045000002,-0.011},
										1
									},
									
									{
										"HUDCenter",
										{0.02,-0.011},
										1
									},
									
									{
										"HUDCenter",
										{0.0099999998,-0.001},
										1
									},
									
									{
										"HUDCenter",
										{0,-0.011},
										1
									},
									
									{
										"HUDCenter",
										{-0.0099999998,-0.001},
										1
									},
									
									{
										"HUDCenter",
										{-0.02,-0.011},
										1
									},
									
									{
										"HUDCenter",
										{-0.045000002,-0.011},
										1
									},
									{},
									
									{
										{0.092500001,0.385791},
										1
									},
									
									{
										{0.1075,0.385791},
										1
									},
									{},
									
									{
										{0.1,0.37841901},
										1
									},
									
									{
										{0.1,0.39316201},
										1
									},
									{},
									
									{
										{0.14687,0.36842701},
										1
									},
									
									{
										{0.16187,0.36842701},
										1
									},
									{},
									
									{
										{0.15436999,0.36105499},
										1
									},
									
									{
										{0.15436999,0.37579799},
										1
									},
									{},
									
									{
										{0.180473,0.32296699},
										1
									},
									
									{
										{0.195473,0.32296699},
										1
									},
									{},
									
									{
										{0.18797299,0.315595},
										1
									},
									
									{
										{0.18797299,0.33033901},
										1
									},
									{},
									
									{
										{0.180473,0.266776},
										1
									},
									
									{
										{0.195473,0.266776},
										1
									},
									{},
									
									{
										{0.18797299,0.25940499},
										1
									},
									
									{
										{0.18797299,0.27414799},
										1
									},
									{},
									
									{
										{0.14687,0.22131699},
										1
									},
									
									{
										{0.16187,0.22131699},
										1
									},
									{},
									
									{
										{0.15436999,0.213945},
										1
									},
									
									{
										{0.15436999,0.228689},
										1
									},
									{},
									
									{
										{0.092500001,0.203953},
										1
									},
									
									{
										{0.1075,0.203953},
										1
									},
									{},
									
									{
										{0.1,0.19658101},
										1
									},
									
									{
										{0.1,0.211325},
										1
									},
									{},
									
									{
										{0.0381299,0.22131699},
										1
									},
									
									{
										{0.0531299,0.22131699},
										1
									},
									{},
									
									{
										{0.0456299,0.213945},
										1
									},
									
									{
										{0.0456299,0.228689},
										1
									},
									{},
									
									{
										{0.0045272601,0.266776},
										1
									},
									
									{
										{0.019527299,0.266776},
										1
									},
									{},
									
									{
										{0.0120273,0.25940499},
										1
									},
									
									{
										{0.0120273,0.27414799},
										1
									},
									{},
									
									{
										{0.0045272801,0.32296699},
										1
									},
									
									{
										{0.019527299,0.32296699},
										1
									},
									{},
									
									{
										{0.0120273,0.315595},
										1
									},
									
									{
										{0.0120273,0.33033901},
										1
									},
									{},
									
									{
										{0.0381299,0.36842701},
										1
									},
									
									{
										{0.0531299,0.36842701},
										1
									},
									{},
									
									{
										{0.0456299,0.36105499},
										1
									},
									
									{
										{0.0456299,0.37579799},
										1
									},
									{},
									
									{
										"Speed_Instrument",
										{0,0.064999998},
										1
									},
									
									{
										"Speed_Instrument",
										{0,0.085000001},
										1
									},
									{},
									
									{
										{0.86000001,0.30961499},
										1
									},
									
									{
										{0.94,0.30961499},
										1
									},
									
									{
										{0.94,0.280128},
										1
									},
									
									{
										{0.86000001,0.280128},
										1
									},
									
									{
										{0.86000001,0.30961499},
										1
									},
									{},
									
									{
										{0.89249998,0.385791},
										1
									},
									
									{
										{0.90750003,0.385791},
										1
									},
									{},
									
									{
										{0.89999998,0.37841901},
										1
									},
									
									{
										{0.89999998,0.39316201},
										1
									},
									{},
									
									{
										{0.94687003,0.36842701},
										1
									},
									
									{
										{0.96187001,0.36842701},
										1
									},
									{},
									
									{
										{0.95437002,0.36105499},
										1
									},
									
									{
										{0.95437002,0.37579799},
										1
									},
									{},
									
									{
										{0.98047298,0.32296699},
										1
									},
									
									{
										{0.99547303,0.32296699},
										1
									},
									{},
									
									{
										{0.98797297,0.315595},
										1
									},
									
									{
										{0.98797297,0.33033901},
										1
									},
									{},
									
									{
										{0.98047298,0.266776},
										1
									},
									
									{
										{0.99547303,0.266776},
										1
									},
									{},
									
									{
										{0.98797297,0.25940499},
										1
									},
									
									{
										{0.98797297,0.27414799},
										1
									},
									{},
									
									{
										{0.94687003,0.22131699},
										1
									},
									
									{
										{0.96187001,0.22131699},
										1
									},
									{},
									
									{
										{0.95437002,0.213945},
										1
									},
									
									{
										{0.95437002,0.228689},
										1
									},
									{},
									
									{
										{0.89249998,0.203953},
										1
									},
									
									{
										{0.90750003,0.203953},
										1
									},
									{},
									
									{
										{0.89999998,0.19658101},
										1
									},
									
									{
										{0.89999998,0.211325},
										1
									},
									{},
									
									{
										{0.83813,0.22131699},
										1
									},
									
									{
										{0.85312998,0.22131699},
										1
									},
									{},
									
									{
										{0.84562999,0.213945},
										1
									},
									
									{
										{0.84562999,0.228689},
										1
									},
									{},
									
									{
										{0.80452698,0.266776},
										1
									},
									
									{
										{0.81952697,0.266776},
										1
									},
									{},
									
									{
										{0.81202698,0.25940499},
										1
									},
									
									{
										{0.81202698,0.27414799},
										1
									},
									{},
									
									{
										{0.80452698,0.32296699},
										1
									},
									
									{
										{0.81952697,0.32296699},
										1
									},
									{},
									
									{
										{0.81202698,0.315595},
										1
									},
									
									{
										{0.81202698,0.33033901},
										1
									},
									{},
									
									{
										{0.83813,0.36842701},
										1
									},
									
									{
										{0.85312998,0.36842701},
										1
									},
									{},
									
									{
										{0.84562999,0.36105499},
										1
									},
									
									{
										{0.84562999,0.37579799},
										1
									},
									{},
									
									{
										"ASL_Instrument",
										{0,0.064999998},
										1
									},
									
									{
										"ASL_Instrument",
										{0,0.085000001},
										1
									},
									{},
									
									{
										{0.059999999,0.30961499},
										1
									},
									
									{
										{0.14,0.30961499},
										1
									},
									
									{
										{0.14,0.280128},
										1
									},
									
									{
										{0.059999999,0.280128},
										1
									},
									
									{
										{0.059999999,0.30961499},
										1
									},
									{},
									
									{
										{0.80909598,0.581406},
										1
									},
									
									{
										{0.83807403,0.58903801},
										1
									},
									{},
									
									{
										{0.77712798,0.65726501},
										1
									},
									
									{
										{0.80310899,0.67200899},
										1
									},
									{},
									
									{
										{0.72627401,0.72240603},
										1
									},
									
									{
										{0.74748701,0.74325699},
										1
									},
									{},
									
									{
										{0.66000003,0.77239102},
										1
									},
									
									{
										{0.67500001,0.79792798},
										1
									},
									{},
									
									{
										{0.58282202,0.80381298},
										1
									},
									
									{
										{0.59058702,0.832295},
										1
									},
									{},
									
									{
										{0.5,0.81453001},
										1
									},
									
									{
										{0.5,0.84401703},
										1
									},
									{},
									
									{
										{0.417178,0.80381298},
										1
									},
									
									{
										{0.40941301,0.832295},
										1
									},
									{},
									
									{
										{0.34,0.77239102},
										1
									},
									
									{
										{0.32499999,0.79792702},
										1
									},
									{},
									
									{
										{0.27372599,0.72240603},
										1
									},
									
									{
										{0.25251299,0.74325699},
										1
									},
									{},
									
									{
										{0.222872,0.65726501},
										1
									},
									
									{
										{0.19689099,0.67200899},
										1
									},
									{},
									
									{
										{0.19090401,0.581406},
										1
									},
									
									{
										{0.161926,0.58903801},
										1
									},
									{},
									
									{
										{0.078333303,0.76866698},
										1
									},
									
									{
										{0.086666703,0.76866698},
										1
									},
									
									{
										{0.095333301,0.77533299},
										1
									},
									
									{
										{0.139,0.77533299},
										1
									},
									
									{
										{0.147333,0.75599998},
										1
									},
									
									{
										{0.16133299,0.75599998},
										1
									},
									
									{
										{0.16133299,0.78899997},
										1
									},
									
									{
										{0.142667,0.78899997},
										1
									},
									
									{
										{0.104,0.80366701},
										1
									},
									
									{
										{0.028666699,0.80366701},
										1
									},
									
									{
										{0.0196667,0.79466701},
										1
									},
									
									{
										{0.033333302,0.77700001},
										1
									},
									
									{
										{0.060666699,0.76866698},
										1
									},
									{}
								};
							};
							class Horizont
							{
								clipTL[]={0,0.2};
								clipBR[]={1,0.75};
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
								};
								class HideOnTurn
								{
									condition="abs(cameraHeadingDiffX)<=5";
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM5",
													{-0.25,0},
													1
												},
												
												{
													"LevelM5",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM5",
													{0.25,0},
													1
												},
												
												{
													"LevelM5",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM5",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM5",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP5",
													{-0.25,0},
													1
												},
												
												{
													"LevelP5",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP5",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP5",
													{0.25,0},
													1
												},
												
												{
													"LevelP5",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP5",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP5",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM10",
													{-0.25,0},
													1
												},
												
												{
													"LevelM10",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM10",
													{0.25,0},
													1
												},
												
												{
													"LevelM10",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM10",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM10",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP10",
													{-0.25,0},
													1
												},
												
												{
													"LevelP10",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP10",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP10",
													{0.25,0},
													1
												},
												
												{
													"LevelP10",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP10",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP10",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM15",
													{-0.25,0},
													1
												},
												
												{
													"LevelM15",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM15",
													{0.25,0},
													1
												},
												
												{
													"LevelM15",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM15",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM15",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP15",
													{-0.25,0},
													1
												},
												
												{
													"LevelP15",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP15",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP15",
													{0.25,0},
													1
												},
												
												{
													"LevelP15",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP15",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP15",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM20",
													{-0.25,0},
													1
												},
												
												{
													"LevelM20",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM20",
													{0.25,0},
													1
												},
												
												{
													"LevelM20",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM20",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM20",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP20",
													{-0.25,0},
													1
												},
												
												{
													"LevelP20",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP20",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP20",
													{0.25,0},
													1
												},
												
												{
													"LevelP20",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP20",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP20",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM25",
													{-0.25,0},
													1
												},
												
												{
													"LevelM25",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM25",
													{0.25,0},
													1
												},
												
												{
													"LevelM25",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM25",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM25",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP25",
													{-0.25,0},
													1
												},
												
												{
													"LevelP25",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP25",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP25",
													{0.25,0},
													1
												},
												
												{
													"LevelP25",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP25",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP25",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM30",
													{-0.25,0},
													1
												},
												
												{
													"LevelM30",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM30",
													{0.25,0},
													1
												},
												
												{
													"LevelM30",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM30",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM30",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP30",
													{-0.25,0},
													1
												},
												
												{
													"LevelP30",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP30",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP30",
													{0.25,0},
													1
												},
												
												{
													"LevelP30",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP30",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP30",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM35",
													{-0.25,0},
													1
												},
												
												{
													"LevelM35",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM35",
													{0.25,0},
													1
												},
												
												{
													"LevelM35",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM35",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM35",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP35",
													{-0.25,0},
													1
												},
												
												{
													"LevelP35",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP35",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP35",
													{0.25,0},
													1
												},
												
												{
													"LevelP35",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP35",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP35",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM40",
													{-0.25,0},
													1
												},
												
												{
													"LevelM40",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM40",
													{0.25,0},
													1
												},
												
												{
													"LevelM40",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM40",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM40",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP40",
													{-0.25,0},
													1
												},
												
												{
													"LevelP40",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP40",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP40",
													{0.25,0},
													1
												},
												
												{
													"LevelP40",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP40",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP40",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM45",
													{-0.25,0},
													1
												},
												
												{
													"LevelM45",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM45",
													{0.25,0},
													1
												},
												
												{
													"LevelM45",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM45",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM45",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP45",
													{-0.25,0},
													1
												},
												
												{
													"LevelP45",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP45",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP45",
													{0.25,0},
													1
												},
												
												{
													"LevelP45",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP45",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP45",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM50",
													{-0.25,0},
													1
												},
												
												{
													"LevelM50",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM50",
													{0.25,0},
													1
												},
												
												{
													"LevelM50",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM50",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM50",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP50",
													{-0.25,0},
													1
												},
												
												{
													"LevelP50",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP50",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP50",
													{0.25,0},
													1
												},
												
												{
													"LevelP50",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP50",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP50",
												{-0.27000001,0.013},
												1
											};
										};
										class LevelM55: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM55",
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM55",
													{-0.25,0},
													1
												},
												
												{
													"LevelM55",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM55",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM55",
													{0.25,0},
													1
												},
												
												{
													"LevelM55",
													{0.25,0.029999999},
													1
												}
											};
										};
										class VALM_1_55
										{
											type="text";
											source="static";
											text=-55;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM55",
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM55",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM55",
												{-0.27000001,0.037999999},
												1
											};
										};
										class LevelP55: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP55",
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP55",
													{-0.25,0},
													1
												},
												
												{
													"LevelP55",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP55",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP55",
													{0.25,0},
													1
												},
												
												{
													"LevelP55",
													{0.25,-0.029999999},
													1
												}
											};
										};
										class VALP_1_55
										{
											type="text";
											source="static";
											text="55";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP55",
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP55",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP55",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM60",
													{-0.25,0},
													1
												},
												
												{
													"LevelM60",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM60",
													{0.25,0},
													1
												},
												
												{
													"LevelM60",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM60",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM60",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP60",
													{-0.25,0},
													1
												},
												
												{
													"LevelP60",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP60",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP60",
													{0.25,0},
													1
												},
												
												{
													"LevelP60",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP60",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP60",
												{-0.27000001,0.013},
												1
											};
										};
										class LevelM65: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM65",
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM65",
													{-0.25,0},
													1
												},
												
												{
													"LevelM65",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM65",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM65",
													{0.25,0},
													1
												},
												
												{
													"LevelM65",
													{0.25,0.029999999},
													1
												}
											};
										};
										class VALM_1_65
										{
											type="text";
											source="static";
											text=-65;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM65",
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM65",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM65",
												{-0.27000001,0.037999999},
												1
											};
										};
										class LevelP65: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP65",
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP65",
													{-0.25,0},
													1
												},
												
												{
													"LevelP65",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP65",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP65",
													{0.25,0},
													1
												},
												
												{
													"LevelP65",
													{0.25,-0.029999999},
													1
												}
											};
										};
										class VALP_1_65
										{
											type="text";
											source="static";
											text="65";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP65",
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP65",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP65",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM70",
													{-0.25,0},
													1
												},
												
												{
													"LevelM70",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM70",
													{0.25,0},
													1
												},
												
												{
													"LevelM70",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM70",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM70",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP70",
													{-0.25,0},
													1
												},
												
												{
													"LevelP70",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP70",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP70",
													{0.25,0},
													1
												},
												
												{
													"LevelP70",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP70",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP70",
												{-0.27000001,0.013},
												1
											};
										};
										class LevelM75: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM75",
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM75",
													{-0.25,0},
													1
												},
												
												{
													"LevelM75",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM75",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM75",
													{0.25,0},
													1
												},
												
												{
													"LevelM75",
													{0.25,0.029999999},
													1
												}
											};
										};
										class VALM_1_75
										{
											type="text";
											source="static";
											text=-75;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM75",
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM75",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM75",
												{-0.27000001,0.037999999},
												1
											};
										};
										class LevelP75: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP75",
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP75",
													{-0.25,0},
													1
												},
												
												{
													"LevelP75",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP75",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP75",
													{0.25,0},
													1
												},
												
												{
													"LevelP75",
													{0.25,-0.029999999},
													1
												}
											};
										};
										class VALP_1_75
										{
											type="text";
											source="static";
											text="75";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP75",
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP75",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP75",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM80",
													{-0.25,0},
													1
												},
												
												{
													"LevelM80",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM80",
													{0.25,0},
													1
												},
												
												{
													"LevelM80",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM80",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM80",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP80",
													{-0.25,0},
													1
												},
												
												{
													"LevelP80",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP80",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP80",
													{0.25,0},
													1
												},
												
												{
													"LevelP80",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP80",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP80",
												{-0.27000001,0.013},
												1
											};
										};
										class LevelM85: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM85",
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM85",
													{-0.25,0},
													1
												},
												
												{
													"LevelM85",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM85",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM85",
													{0.25,0},
													1
												},
												
												{
													"LevelM85",
													{0.25,0.029999999},
													1
												}
											};
										};
										class VALM_1_85
										{
											type="text";
											source="static";
											text=-85;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM85",
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM85",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM85",
												{-0.27000001,0.037999999},
												1
											};
										};
										class LevelP85: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP85",
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP85",
													{-0.25,0},
													1
												},
												
												{
													"LevelP85",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP85",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP85",
													{0.25,0},
													1
												},
												
												{
													"LevelP85",
													{0.25,-0.029999999},
													1
												}
											};
										};
										class VALP_1_85
										{
											type="text";
											source="static";
											text="85";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP85",
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP85",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP85",
												{-0.27000001,0.013},
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
													{-0.25,0.029999999},
													1
												},
												
												{
													"LevelM90",
													{-0.25,0},
													1
												},
												
												{
													"LevelM90",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{0.079999998,0},
													1
												},
												
												{
													"LevelM90",
													{0.25,0},
													1
												},
												
												{
													"LevelM90",
													{0.25,0.029999999},
													1
												}
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
												{-0.27000001,-0.012},
												1
											};
											right[]=
											{
												"LevelM90",
												{-0.20999999,-0.012},
												1
											};
											down[]=
											{
												"LevelM90",
												{-0.27000001,0.037999999},
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
													{-0.25,-0.029999999},
													1
												},
												
												{
													"LevelP90",
													{-0.25,0},
													1
												},
												
												{
													"LevelP90",
													{-0.079999998,0},
													1
												},
												{},
												
												{
													"LevelP90",
													{0.079999998,0},
													1
												},
												
												{
													"LevelP90",
													{0.25,0},
													1
												},
												
												{
													"LevelP90",
													{0.25,-0.029999999},
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
												{-0.27000001,-0.037},
												1
											};
											right[]=
											{
												"LevelP90",
												{-0.20999999,-0.037},
												1
											};
											down[]=
											{
												"LevelP90",
												{-0.27000001,0.013},
												1
											};
										};
									};
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
									{0.1,0.280128},
									1
								};
								right[]=
								{
									{0.14,0.280128},
									1
								};
								down[]=
								{
									{0.1,0.30961499},
									1
								};
							};
							class AltNumber: SpeedNumber
							{
								source="altitudeASL";
								sourceScale=1;
								pos[]=
								{
									{0.89999998,0.280128},
									1
								};
								right[]=
								{
									{0.94,0.280128},
									1
								};
								down[]=
								{
									{0.89999998,0.30961499},
									1
								};
							};
							class AltNumberAGLStatic
							{
								type="text";
								source="static";
								text="H";
								align="left";
								scale=1;
								pos[]=
								{
									{0.87,0.49636799},
									1
								};
								right[]=
								{
									{0.91000003,0.49636799},
									1
								};
								down[]=
								{
									{0.87,0.525855},
									1
								};
							};
							class AltNumberAGL
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								align="left";
								scale=1;
								pos[]=
								{
									{0.94,0.49636799},
									1
								};
								right[]=
								{
									{0.98000002,0.49636799},
									1
								};
								down[]=
								{
									{0.94,0.525855},
									1
								};
							};
							class CollectiveNumber
							{
								type="text";
								source="throttle";
								sourceScale=100;
								align="left";
								scale=1;
								pos[]=
								{
									{0.090999998,0.69999999},
									1
								};
								right[]=
								{
									{0.141,0.69999999},
									1
								};
								down[]=
								{
									{0.090999998,0.73500001},
									1
								};
							};
							class CollectiveText
							{
								type="text";
								source="static";
								text="%";
								scale=1;
								sourceScale=1;
								align="right";
								pos[]=
								{
									
									{
										"0.11-0.009",
										0.69999999
									},
									1
								};
								right[]=
								{
									{0.146,0.69999999},
									1
								};
								down[]=
								{
									
									{
										"0.11-0.009",
										0.73500001
									},
									1
								};
							};
							class ActiveSensorsOn
							{
								condition="activeSensorsOn";
								class ThrustVectoringText
								{
									type="text";
									source="static";
									text="RDR ON";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{
										{0.972,0.745},
										1
									};
									right[]=
									{
										{1.017,0.745},
										1
									};
									down[]=
									{
										{0.972,0.77999997},
										1
									};
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
									
									{
										"0.80-0.302",
										"0.082-0.043"
									},
									1
								};
								right[]=
								{
									
									{
										"0.84-0.302",
										"0.082-0.043"
									},
									1
								};
								down[]=
								{
									
									{
										"0.80-0.302",
										"0.117-0.043"
									},
									1
								};
							};
							class HeadingRotationArrow
							{
								condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
								class HeadingArrow
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0.51999998,0.079999998},
											1
										},
										
										{
											{0.5,0.11},
											1
										},
										
										{
											{0.47999999,0.079999998},
											1
										},
										
										{
											{0.51999998,0.079999998},
											1
										},
										{}
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
											"0.082-0.002"
										},
										1
									};
									right[]=
									{
										
										{
											"0.83-0.302",
											"0.082-0.002"
										},
										1
									};
									down[]=
									{
										
										{
											"0.80-0.302",
											"0.113-0.002"
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
											{0.47799999,0.075000003},
											1
										},
										
										{
											{0.52200001,0.075000003},
											1
										},
										
										{
											{0.537,0.094999999},
											1
										},
										
										{
											{0.52200001,0.115},
											1
										},
										
										{
											{0.47799999,0.115},
											1
										},
										
										{
											{0.463,0.094999999},
											1
										},
										
										{
											{0.47799999,0.075000003},
											1
										},
										{},
										
										{
											{0.51999998,0.175},
											1
										},
										
										{
											{0.5,0.145},
											1
										},
										
										{
											{0.47999999,0.175},
											1
										},
										
										{
											{0.51999998,0.175},
											1
										},
										{}
									};
								};
							};
							class HeadingLeft
							{
								clipTL[]={0,0};
								clipBR[]={0.47,1};
								class HeadingScale
								{
									type="scale";
									horizontal=1;
									source="heading";
									sourceScale=0.1;
									sourceoffset=0;
									width=3;
									NeverEatSeaWeed=1;
									top=0.15000001;
									center=0.5;
									bottom=0.85000002;
									lineXleft=0.139145;
									lineYright=0.129145;
									lineXleftMajor=0.139145;
									lineYrightMajor=0.119145;
									majorLineEach=2;
									numberEach=6;
									step=0.5;
									stepSize=0.034482799;
									align="center";
									scale=1;
									pos[]={0.2,0.066346198};
									right[]={0.25999999,0.066346198};
									down[]={0.2,0.115491};
								};
							};
							class HeadingCentral: HeadingLeft
							{
								clipTL[]={0.47,0};
								clipBR[]={0.52999997,1};
								class HeadingScale: HeadingScale
								{
									NeverEatSeaWeed=0;
									numberEach=0;
								};
							};
							class HeadingRight: HeadingLeft
							{
								clipTL[]={0.52999997,0};
								clipBR[]={1,1};
								class HeadingScale: HeadingScale
								{
								};
							};
							class HorizonBanking
							{
								type="line";
								width=3;
								clipTL[]={0,0.1};
								clipBR[]={1,0.89999998};
								points[]=
								{
									
									{
										"HorizonBankRot",
										{0,0.31452999},
										1
									},
									
									{
										"HorizonBankRot",
										{0.0099999998,0.29487199},
										1
									},
									
									{
										"HorizonBankRot",
										{-0.0099999998,0.29487199},
										1
									},
									
									{
										"HorizonBankRot",
										{0,0.31452999},
										1
									}
								};
							};
							class CoordXNumber
							{
								type="text";
								source="coordinateX";
								sourceScale=0.0099999998;
								sourceLength=3;
								sourceOffset=-0.5;
								align="right";
								scale=1;
								pos[]=
								{
									{0.87099999,0.87599999},
									1
								};
								right[]=
								{
									{0.921,0.87599999},
									1
								};
								down[]=
								{
									{0.87099999,0.91100001},
									1
								};
							};
							class CoordYNumber: CoordXNumber
							{
								source="coordinateY";
								pos[]=
								{
									{0.92900002,0.87599999},
									1
								};
								right[]=
								{
									{0.97899997,0.87599999},
									1
								};
								down[]=
								{
									{0.92900002,0.91100001},
									1
								};
							};
							class Time: CoordXNumber
							{
								source="time";
								text="%X";
								align="left";
								pos[]=
								{
									{0.97000003,0.84899998},
									1
								};
								right[]=
								{
									{1.02,0.84899998},
									1
								};
								down[]=
								{
									{0.97000003,0.884},
									1
								};
							};
							class LightsGroup
							{
								condition="lights";
								class LightsText
								{
									type="text";
									source="static";
									text="LIGHT";
									align="left";
									scale=1;
									pos[]=
									{
										{0.149,0.96100003},
										1
									};
									right[]=
									{
										{0.199,0.96100003},
										1
									};
									down[]=
									{
										{0.149,0.99599999},
										1
									};
								};
							};
							class CollisionLights
							{
								condition="collisionlights";
								class CollisionLightsText
								{
									type="text";
									source="static";
									text="COLL";
									align="left";
									scale=1;
									pos[]=
									{
										{0.30899999,0.96100003},
										1
									};
									right[]=
									{
										{0.359,0.96100003},
										1
									};
									down[]=
									{
										{0.30899999,0.99599999},
										1
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
										{0.47499999,0.15726499},
										1
									};
									right[]=
									{
										{0.53500003,0.15726499},
										1
									};
									down[]=
									{
										{0.47499999,0.20641001},
										1
									};
								};
							};
							class GearGroup
							{
								type="group";
								condition="ils";
								class GearText
								{
									type="text";
									source="static";
									text="GEAR";
									align="center";
									scale=1;
									pos[]=
									{
										{0.5,0.89444399},
										1
									};
									right[]=
									{
										{0.54000002,0.89444399},
										1
									};
									down[]=
									{
										{0.5,0.92393202},
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
							class ILS
							{
								condition="ils";
								class Glideslope
								{
									clipTL[]={0,0};
									clipBR[]={1,1};
									class ILS
									{
										type="line";
										points[]=
										{
											
											{
												"ILS_W",
												{-0.23999999,0},
												1
											},
											
											{
												"ILS_W",
												{0.23999999,0},
												1
											},
											{},
											
											{
												"ILS_W",
												{-0.23999999,-0.0235897},
												1
											},
											
											{
												"ILS_W",
												{-0.23999999,0.0235897},
												1
											},
											{},
											
											{
												"ILS_W",
												{-0.12,-0.0176923},
												1
											},
											
											{
												"ILS_W",
												{-0.12,0.0176923},
												1
											},
											{},
											
											{
												"ILS_W",
												{0,-0.0235897},
												1
											},
											
											{
												"ILS_W",
												{0,0.0235897},
												1
											},
											{},
											
											{
												"ILS_W",
												{0.12,-0.0176923},
												1
											},
											
											{
												"ILS_W",
												{0.12,0.0176923},
												1
											},
											{},
											
											{
												"ILS_W",
												{0.23999999,-0.0235897},
												1
											},
											
											{
												"ILS_W",
												{0.23999999,0.0235897},
												1
											},
											{},
											
											{
												"ILS_H",
												{0,-0.235897},
												1
											},
											
											{
												"ILS_H",
												{0,0.235897},
												1
											},
											{},
											
											{
												"ILS_H",
												{-0.024,-0.235897},
												1
											},
											
											{
												"ILS_H",
												{0.024,-0.235897},
												1
											},
											{},
											
											{
												"ILS_H",
												{-0.017999999,-0.117949},
												1
											},
											
											{
												"ILS_H",
												{0.017999999,-0.117949},
												1
											},
											{},
											
											{
												"ILS_H",
												{-0.024,0},
												1
											},
											
											{
												"ILS_H",
												{0.024,0},
												1
											},
											{},
											
											{
												"ILS_H",
												{-0.017999999,0.117949},
												1
											},
											
											{
												"ILS_H",
												{0.017999999,0.117949},
												1
											},
											{},
											
											{
												"ILS_H",
												{-0.024,0.235897},
												1
											},
											
											{
												"ILS_H",
												{0.024,0.235897},
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
							class WP
							{
								condition="wpvalid";
								class WPdist
								{
									type="text";
									source="wpdist";
									sourceScale=0.001;
									sourcePrecision=1;
									align="left";
									scale=1;
									pos[]=
									{
										{0.935,0.81089699},
										1
									};
									right[]=
									{
										{0.995,0.81089699},
										1
									};
									down[]=
									{
										{0.935,0.86004299},
										1
									};
								};
								class WPstatic
								{
									type="text";
									source="static";
									text=">";
									align="center";
									scale=2;
									pos[]=
									{
										{0.94999999,0.81089699},
										1
									};
									right[]=
									{
										{0.97000003,0.81089699},
										1
									};
									down[]=
									{
										{0.94999999,0.86004299},
										1
									};
								};
								class WPIndex
								{
									type="text";
									source="wpIndex";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.95999998,0.81089699},
										1
									};
									right[]=
									{
										{1.02,0.81089699},
										1
									};
									down[]=
									{
										{0.95999998,0.86004299},
										1
									};
								};
								class WP
								{
									width=1;
									type="line";
									points[]=
									{
										
										{
											"wppoint",
											1,
											
											{
												"HorizonBankRotFull",
												0.015,
												-0.035
											},
											1
										},
										
										{
											"wppoint",
											1,
											
											{
												"HorizonBankRotFull",
												0,
												0
											},
											1
										},
										
										{
											"wppoint",
											1,
											
											{
												"HorizonBankRotFull",
												-0.015,
												-0.035
											},
											1
										}
									};
								};
							};
							class cmWeapons
							{
								type="text";
								source="cmweapon";
								sourceScale=1;
								align="right";
								scale=0.5;
								pos[]=
								{
									{0.02,0.87},
									1
								};
								right[]=
								{
									{0.059999999,0.87},
									1
								};
								down[]=
								{
									{0.02,0.91000003},
									1
								};
							};
							class cmAmmo
							{
								type="text";
								source="cmammo";
								sourceScale=1;
								align="right";
								scale=0.5;
								pos[]=
								{
									{0.02,0.82999998},
									1
								};
								right[]=
								{
									{0.059999999,0.82999998},
									1
								};
								down[]=
								{
									{0.02,0.87},
									1
								};
							};
							class RadarBoxes
							{
								type="radartoview";
								pos0[]={0.5,0.5};
								pos10[]={0.73400003,0.73000002};
								width=2;
								points[]=
								{
									
									{
										{-0.0020000001,-0.0019658101},
										1
									},
									
									{
										{0.0020000001,-0.0019658101},
										1
									},
									
									{
										{0.0020000001,0.0019658101},
										1
									},
									
									{
										{-0.0020000001,0.0019658101},
										1
									},
									
									{
										{-0.0020000001,-0.0019658101},
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
											{0.02,0.0196581},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.02,0.0196581},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.02,-0.0196581},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.02,-0.0196581},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.02,0.0196581},
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
											{0,-0.0294872},
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
											{0,0.0294872},
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
											{0,-0.0294872},
											1
										}
									};
								};
							};
						};
					};
				};
			};
			class PassengerTurret_01: NewTurret
			{
				animationSourceBody="";
				animationSourceGun="";
				body="";
				castGunnerShadow=1;
				commanding=-2;
				gun="";
				gunBeg="";
				gunEnd="";
				gunnerCompartments="Compartment1";
				gunnerForceOptics=0;
				gunnerAction="Passenger_Plane_Transport_01";
				gunnerInAction="Passenger_Plane_Transport_01";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				memoryPointsGetInGunner="pos driver";
				memoryPointsGetInGunnerDir="pos driver dir";
				gunnerName="Passenger";
				gunnerUsesPilotView=1;
				primaryGunner=0;
				proxyIndex=2;
				startEngine=0;
				inGunnerMayFire=0;
			};
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
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
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
					initFov="(15 / 120)";
					minFov="(15 / 120)";
					maxFov="(15 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1.3;
			maxYRotSpeed=1.3;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		insideSoundCoef=0.30000001;
		attenuationEffectType="PlaneAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\open",
			0.31622776,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\close",
			0.31622776,
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
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_start_int",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_start_ext",
			2.4125376,
			1,
			700
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_stop_int",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_stop_ext",
			2.4125376,
			1,
			700
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",
			0.31622776,
			1
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\VTOL_01\gear_up",
			0.79432797,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\VTOL_01\gear_down",
			0.79432797,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\VTOL_01\Flaps_Up",
			0.63095701,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_Exp\vehicles\air\VTOL_01\Flaps_Down",
			0.63095701,
			1,
			100
		};
		class scrubLandInt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\air\noises\wheelsInt",
				1,
				1,
				100
			};
			frequency=1;
			volume="(scrubLand factor[0.01,0.20])";
		};
		class Sounds
		{
			class EngineMidhExt
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_mid_ext",
					1.7782794,
					1,
					1100
				};
				frequency=1;
				volume="0.7 * machcone*camPos*(rpm factor[0.5, 1])";
			};
			class EngineHighExt
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_high_ext",
					1.7782794,
					1,
					1100
				};
				frequency="1 min (rpm + 0.5)*(rpm factor[0.5, 1.1])";
				volume="0.7 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0, 0.75])";
			};
			class ForsageExt
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_prop_ext",
					1.4125376,
					1.2,
					1100
				};
				frequency=1;
				volume="0.7 * machcone*engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={1.14,3.9200001,2.5,0.40000001};
			};
			class EngineMidhInt
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_mid_int",
					0.77827942,
					1,
					1100
				};
				frequency="1 min (rpm + 0.25)*(rpm factor[0, 1])";
				volume="1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])";
			};
			class EngineHighInt
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_engine_high_int",
					0.77827942,
					1,
					1100
				};
				frequency="1 min (rpm + 0.25)*(rpm factor[0.25, 1.1])";
				volume="1 * engineOn*(1-camPos)*(rpm factor[0, 1])";
			};
			class ForsageInt
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\air\Plane_Transport_01\C192_prop_int",
					0.4125376,
					1.2,
					1100
				};
				frequency="1 min (rpm + 0.5)*(rpm factor[0, 1])";
				volume="1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0])";
				cone[]={1.14,3.9200001,2.5,0.40000001};
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
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
				volume="camPos * rain * (speed factor[50, 0])";
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
				volume="(1-camPos) * rain * (speed factor[50, 0])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.56234133,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					1.9952624,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * (gmeterZ factor[1, 2.5])";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					0.50118721,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[60,80])";
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD LH1";
				topRight="HUD PH1";
				bottomLeft="HUD LD1";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				turret[]={-1};
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class ASL_Instrument
					{
						type="rotational";
						source="altitudeASL";
						center[]={0.89999998,0.29487199};
						min=0;
						max=20000;
						minAngle=0;
						maxAngle=72000;
						aspectRatio=0.98290598;
					};
					class Speed_Instrument: ASL_Instrument
					{
						source="speed";
						center[]={0.1,0.29487199};
						max=555.55603;
						maxAngle=7200;
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min=-1.5707999;
						max=1.5707999;
						minAngle=90;
						maxAngle=270;
						aspectRatio=1;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class ThrustVectoringRotation
					{
						type="rotational";
						source="vtolvectoring";
						sourceScale=100;
						center[]={0.07,0.78500003};
						min=0;
						max=100;
						minAngle=-180;
						maxAngle="-180+90";
						aspectRatio=0.98290598;
					};
					class Level0
					{
						pos0[]={0.5,0.5};
						pos10[]={0.83399999,0.82999998};
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
					class LevelP55: Level0
					{
						angle=55;
					};
					class LevelM55: Level0
					{
						angle=-55;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP65: Level0
					{
						angle=65;
					};
					class LevelM65: Level0
					{
						angle=-65;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP75: Level0
					{
						angle=75;
					};
					class LevelM75: Level0
					{
						angle=-75;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP85: Level0
					{
						angle=85;
					};
					class LevelM85: Level0
					{
						angle=-85;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1toView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2toView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3toView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4toView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0.15000001,1,0.15000001,1};
					condition="(1 - (cameraHeadingDiffY<=-29) + (abs(cameraHeadingDiffX)>=29))*on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"VelocityVector",
								{0,-0.0196581},
								1
							},
							
							{
								"VelocityVector",
								{0.0099999998,-0.017023901},
								1
							},
							
							{
								"VelocityVector",
								{0.01732,-0.0098290602},
								1
							},
							
							{
								"VelocityVector",
								{0.02,0},
								1
							},
							
							{
								"VelocityVector",
								{0.01732,0.0098290602},
								1
							},
							
							{
								"VelocityVector",
								{0.0099999998,0.017023901},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0196581},
								1
							},
							
							{
								"VelocityVector",
								{-0.0099999998,0.017023901},
								1
							},
							
							{
								"VelocityVector",
								{-0.01732,0.0098290602},
								1
							},
							
							{
								"VelocityVector",
								{-0.02,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.01732,-0.0098290602},
								1
							},
							
							{
								"VelocityVector",
								{-0.0099999998,-0.017023901},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0196581},
								1
							},
							{},
							
							{
								"VelocityVector",
								{0.039999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.02,0},
								1
							},
							{},
							
							{
								"VelocityVector",
								{-0.039999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.02,0},
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0393162},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0196581},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"HUDCenter",
								{0.045000002,-0.011},
								1
							},
							
							{
								"HUDCenter",
								{0.02,-0.011},
								1
							},
							
							{
								"HUDCenter",
								{0.0099999998,-0.001},
								1
							},
							
							{
								"HUDCenter",
								{0,-0.011},
								1
							},
							
							{
								"HUDCenter",
								{-0.0099999998,-0.001},
								1
							},
							
							{
								"HUDCenter",
								{-0.02,-0.011},
								1
							},
							
							{
								"HUDCenter",
								{-0.045000002,-0.011},
								1
							},
							{},
							
							{
								{0.092500001,0.385791},
								1
							},
							
							{
								{0.1075,0.385791},
								1
							},
							{},
							
							{
								{0.1,0.37841901},
								1
							},
							
							{
								{0.1,0.39316201},
								1
							},
							{},
							
							{
								{0.14687,0.36842701},
								1
							},
							
							{
								{0.16187,0.36842701},
								1
							},
							{},
							
							{
								{0.15436999,0.36105499},
								1
							},
							
							{
								{0.15436999,0.37579799},
								1
							},
							{},
							
							{
								{0.180473,0.32296699},
								1
							},
							
							{
								{0.195473,0.32296699},
								1
							},
							{},
							
							{
								{0.18797299,0.315595},
								1
							},
							
							{
								{0.18797299,0.33033901},
								1
							},
							{},
							
							{
								{0.180473,0.266776},
								1
							},
							
							{
								{0.195473,0.266776},
								1
							},
							{},
							
							{
								{0.18797299,0.25940499},
								1
							},
							
							{
								{0.18797299,0.27414799},
								1
							},
							{},
							
							{
								{0.14687,0.22131699},
								1
							},
							
							{
								{0.16187,0.22131699},
								1
							},
							{},
							
							{
								{0.15436999,0.213945},
								1
							},
							
							{
								{0.15436999,0.228689},
								1
							},
							{},
							
							{
								{0.092500001,0.203953},
								1
							},
							
							{
								{0.1075,0.203953},
								1
							},
							{},
							
							{
								{0.1,0.19658101},
								1
							},
							
							{
								{0.1,0.211325},
								1
							},
							{},
							
							{
								{0.0381299,0.22131699},
								1
							},
							
							{
								{0.0531299,0.22131699},
								1
							},
							{},
							
							{
								{0.0456299,0.213945},
								1
							},
							
							{
								{0.0456299,0.228689},
								1
							},
							{},
							
							{
								{0.0045272601,0.266776},
								1
							},
							
							{
								{0.019527299,0.266776},
								1
							},
							{},
							
							{
								{0.0120273,0.25940499},
								1
							},
							
							{
								{0.0120273,0.27414799},
								1
							},
							{},
							
							{
								{0.0045272801,0.32296699},
								1
							},
							
							{
								{0.019527299,0.32296699},
								1
							},
							{},
							
							{
								{0.0120273,0.315595},
								1
							},
							
							{
								{0.0120273,0.33033901},
								1
							},
							{},
							
							{
								{0.0381299,0.36842701},
								1
							},
							
							{
								{0.0531299,0.36842701},
								1
							},
							{},
							
							{
								{0.0456299,0.36105499},
								1
							},
							
							{
								{0.0456299,0.37579799},
								1
							},
							{},
							
							{
								"Speed_Instrument",
								{0,0.064999998},
								1
							},
							
							{
								"Speed_Instrument",
								{0,0.085000001},
								1
							},
							{},
							
							{
								{0.86000001,0.30961499},
								1
							},
							
							{
								{0.94,0.30961499},
								1
							},
							
							{
								{0.94,0.280128},
								1
							},
							
							{
								{0.86000001,0.280128},
								1
							},
							
							{
								{0.86000001,0.30961499},
								1
							},
							{},
							
							{
								{0.89249998,0.385791},
								1
							},
							
							{
								{0.90750003,0.385791},
								1
							},
							{},
							
							{
								{0.89999998,0.37841901},
								1
							},
							
							{
								{0.89999998,0.39316201},
								1
							},
							{},
							
							{
								{0.94687003,0.36842701},
								1
							},
							
							{
								{0.96187001,0.36842701},
								1
							},
							{},
							
							{
								{0.95437002,0.36105499},
								1
							},
							
							{
								{0.95437002,0.37579799},
								1
							},
							{},
							
							{
								{0.98047298,0.32296699},
								1
							},
							
							{
								{0.99547303,0.32296699},
								1
							},
							{},
							
							{
								{0.98797297,0.315595},
								1
							},
							
							{
								{0.98797297,0.33033901},
								1
							},
							{},
							
							{
								{0.98047298,0.266776},
								1
							},
							
							{
								{0.99547303,0.266776},
								1
							},
							{},
							
							{
								{0.98797297,0.25940499},
								1
							},
							
							{
								{0.98797297,0.27414799},
								1
							},
							{},
							
							{
								{0.94687003,0.22131699},
								1
							},
							
							{
								{0.96187001,0.22131699},
								1
							},
							{},
							
							{
								{0.95437002,0.213945},
								1
							},
							
							{
								{0.95437002,0.228689},
								1
							},
							{},
							
							{
								{0.89249998,0.203953},
								1
							},
							
							{
								{0.90750003,0.203953},
								1
							},
							{},
							
							{
								{0.89999998,0.19658101},
								1
							},
							
							{
								{0.89999998,0.211325},
								1
							},
							{},
							
							{
								{0.83813,0.22131699},
								1
							},
							
							{
								{0.85312998,0.22131699},
								1
							},
							{},
							
							{
								{0.84562999,0.213945},
								1
							},
							
							{
								{0.84562999,0.228689},
								1
							},
							{},
							
							{
								{0.80452698,0.266776},
								1
							},
							
							{
								{0.81952697,0.266776},
								1
							},
							{},
							
							{
								{0.81202698,0.25940499},
								1
							},
							
							{
								{0.81202698,0.27414799},
								1
							},
							{},
							
							{
								{0.80452698,0.32296699},
								1
							},
							
							{
								{0.81952697,0.32296699},
								1
							},
							{},
							
							{
								{0.81202698,0.315595},
								1
							},
							
							{
								{0.81202698,0.33033901},
								1
							},
							{},
							
							{
								{0.83813,0.36842701},
								1
							},
							
							{
								{0.85312998,0.36842701},
								1
							},
							{},
							
							{
								{0.84562999,0.36105499},
								1
							},
							
							{
								{0.84562999,0.37579799},
								1
							},
							{},
							
							{
								"ASL_Instrument",
								{0,0.064999998},
								1
							},
							
							{
								"ASL_Instrument",
								{0,0.085000001},
								1
							},
							{},
							
							{
								{0.059999999,0.30961499},
								1
							},
							
							{
								{0.14,0.30961499},
								1
							},
							
							{
								{0.14,0.280128},
								1
							},
							
							{
								{0.059999999,0.280128},
								1
							},
							
							{
								{0.059999999,0.30961499},
								1
							},
							{},
							
							{
								{0.80909598,0.581406},
								1
							},
							
							{
								{0.83807403,0.58903801},
								1
							},
							{},
							
							{
								{0.77712798,0.65726501},
								1
							},
							
							{
								{0.80310899,0.67200899},
								1
							},
							{},
							
							{
								{0.72627401,0.72240603},
								1
							},
							
							{
								{0.74748701,0.74325699},
								1
							},
							{},
							
							{
								{0.66000003,0.77239102},
								1
							},
							
							{
								{0.67500001,0.79792798},
								1
							},
							{},
							
							{
								{0.58282202,0.80381298},
								1
							},
							
							{
								{0.59058702,0.832295},
								1
							},
							{},
							
							{
								{0.5,0.81453001},
								1
							},
							
							{
								{0.5,0.84401703},
								1
							},
							{},
							
							{
								{0.417178,0.80381298},
								1
							},
							
							{
								{0.40941301,0.832295},
								1
							},
							{},
							
							{
								{0.34,0.77239102},
								1
							},
							
							{
								{0.32499999,0.79792702},
								1
							},
							{},
							
							{
								{0.27372599,0.72240603},
								1
							},
							
							{
								{0.25251299,0.74325699},
								1
							},
							{},
							
							{
								{0.222872,0.65726501},
								1
							},
							
							{
								{0.19689099,0.67200899},
								1
							},
							{},
							
							{
								{0.19090401,0.581406},
								1
							},
							
							{
								{0.161926,0.58903801},
								1
							},
							{},
							
							{
								{0.078333303,0.76866698},
								1
							},
							
							{
								{0.086666703,0.76866698},
								1
							},
							
							{
								{0.095333301,0.77533299},
								1
							},
							
							{
								{0.139,0.77533299},
								1
							},
							
							{
								{0.147333,0.75599998},
								1
							},
							
							{
								{0.16133299,0.75599998},
								1
							},
							
							{
								{0.16133299,0.78899997},
								1
							},
							
							{
								{0.142667,0.78899997},
								1
							},
							
							{
								{0.104,0.80366701},
								1
							},
							
							{
								{0.028666699,0.80366701},
								1
							},
							
							{
								{0.0196667,0.79466701},
								1
							},
							
							{
								{0.033333302,0.77700001},
								1
							},
							
							{
								{0.060666699,0.76866698},
								1
							},
							{}
						};
					};
					class Horizont
					{
						clipTL[]={0,0.2};
						clipBR[]={1,0.75};
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
						};
						class HideOnTurn
						{
							condition="abs(cameraHeadingDiffX)<=5";
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM5",
											{-0.25,0},
											1
										},
										
										{
											"LevelM5",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM5",
											{0.25,0},
											1
										},
										
										{
											"LevelM5",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP5",
											{-0.25,0},
											1
										},
										
										{
											"LevelP5",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP5",
											{0.25,0},
											1
										},
										
										{
											"LevelP5",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM10",
											{-0.25,0},
											1
										},
										
										{
											"LevelM10",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM10",
											{0.25,0},
											1
										},
										
										{
											"LevelM10",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP10",
											{-0.25,0},
											1
										},
										
										{
											"LevelP10",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP10",
											{0.25,0},
											1
										},
										
										{
											"LevelP10",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM15",
											{-0.25,0},
											1
										},
										
										{
											"LevelM15",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM15",
											{0.25,0},
											1
										},
										
										{
											"LevelM15",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP15",
											{-0.25,0},
											1
										},
										
										{
											"LevelP15",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP15",
											{0.25,0},
											1
										},
										
										{
											"LevelP15",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM20",
											{-0.25,0},
											1
										},
										
										{
											"LevelM20",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM20",
											{0.25,0},
											1
										},
										
										{
											"LevelM20",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP20",
											{-0.25,0},
											1
										},
										
										{
											"LevelP20",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP20",
											{0.25,0},
											1
										},
										
										{
											"LevelP20",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM25",
											{-0.25,0},
											1
										},
										
										{
											"LevelM25",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM25",
											{0.25,0},
											1
										},
										
										{
											"LevelM25",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP25",
											{-0.25,0},
											1
										},
										
										{
											"LevelP25",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP25",
											{0.25,0},
											1
										},
										
										{
											"LevelP25",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM30",
											{-0.25,0},
											1
										},
										
										{
											"LevelM30",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM30",
											{0.25,0},
											1
										},
										
										{
											"LevelM30",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP30",
											{-0.25,0},
											1
										},
										
										{
											"LevelP30",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP30",
											{0.25,0},
											1
										},
										
										{
											"LevelP30",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM35",
											{-0.25,0},
											1
										},
										
										{
											"LevelM35",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM35",
											{0.25,0},
											1
										},
										
										{
											"LevelM35",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP35",
											{-0.25,0},
											1
										},
										
										{
											"LevelP35",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP35",
											{0.25,0},
											1
										},
										
										{
											"LevelP35",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM40",
											{-0.25,0},
											1
										},
										
										{
											"LevelM40",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM40",
											{0.25,0},
											1
										},
										
										{
											"LevelM40",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP40",
											{-0.25,0},
											1
										},
										
										{
											"LevelP40",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP40",
											{0.25,0},
											1
										},
										
										{
											"LevelP40",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM45",
											{-0.25,0},
											1
										},
										
										{
											"LevelM45",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM45",
											{0.25,0},
											1
										},
										
										{
											"LevelM45",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP45",
											{-0.25,0},
											1
										},
										
										{
											"LevelP45",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP45",
											{0.25,0},
											1
										},
										
										{
											"LevelP45",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM50",
											{-0.25,0},
											1
										},
										
										{
											"LevelM50",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM50",
											{0.25,0},
											1
										},
										
										{
											"LevelM50",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP50",
											{-0.25,0},
											1
										},
										
										{
											"LevelP50",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP50",
											{0.25,0},
											1
										},
										
										{
											"LevelP50",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.27000001,0.013},
										1
									};
								};
								class LevelM55: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM55",
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM55",
											{-0.25,0},
											1
										},
										
										{
											"LevelM55",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM55",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM55",
											{0.25,0},
											1
										},
										
										{
											"LevelM55",
											{0.25,0.029999999},
											1
										}
									};
								};
								class VALM_1_55
								{
									type="text";
									source="static";
									text=-55;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM55",
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM55",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM55",
										{-0.27000001,0.037999999},
										1
									};
								};
								class LevelP55: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP55",
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP55",
											{-0.25,0},
											1
										},
										
										{
											"LevelP55",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP55",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP55",
											{0.25,0},
											1
										},
										
										{
											"LevelP55",
											{0.25,-0.029999999},
											1
										}
									};
								};
								class VALP_1_55
								{
									type="text";
									source="static";
									text="55";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP55",
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP55",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP55",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM60",
											{-0.25,0},
											1
										},
										
										{
											"LevelM60",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM60",
											{0.25,0},
											1
										},
										
										{
											"LevelM60",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP60",
											{-0.25,0},
											1
										},
										
										{
											"LevelP60",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP60",
											{0.25,0},
											1
										},
										
										{
											"LevelP60",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.27000001,0.013},
										1
									};
								};
								class LevelM65: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM65",
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM65",
											{-0.25,0},
											1
										},
										
										{
											"LevelM65",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM65",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM65",
											{0.25,0},
											1
										},
										
										{
											"LevelM65",
											{0.25,0.029999999},
											1
										}
									};
								};
								class VALM_1_65
								{
									type="text";
									source="static";
									text=-65;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM65",
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM65",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM65",
										{-0.27000001,0.037999999},
										1
									};
								};
								class LevelP65: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP65",
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP65",
											{-0.25,0},
											1
										},
										
										{
											"LevelP65",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP65",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP65",
											{0.25,0},
											1
										},
										
										{
											"LevelP65",
											{0.25,-0.029999999},
											1
										}
									};
								};
								class VALP_1_65
								{
									type="text";
									source="static";
									text="65";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP65",
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP65",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP65",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM70",
											{-0.25,0},
											1
										},
										
										{
											"LevelM70",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM70",
											{0.25,0},
											1
										},
										
										{
											"LevelM70",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP70",
											{-0.25,0},
											1
										},
										
										{
											"LevelP70",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP70",
											{0.25,0},
											1
										},
										
										{
											"LevelP70",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.27000001,0.013},
										1
									};
								};
								class LevelM75: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM75",
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM75",
											{-0.25,0},
											1
										},
										
										{
											"LevelM75",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM75",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM75",
											{0.25,0},
											1
										},
										
										{
											"LevelM75",
											{0.25,0.029999999},
											1
										}
									};
								};
								class VALM_1_75
								{
									type="text";
									source="static";
									text=-75;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM75",
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM75",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM75",
										{-0.27000001,0.037999999},
										1
									};
								};
								class LevelP75: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP75",
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP75",
											{-0.25,0},
											1
										},
										
										{
											"LevelP75",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP75",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP75",
											{0.25,0},
											1
										},
										
										{
											"LevelP75",
											{0.25,-0.029999999},
											1
										}
									};
								};
								class VALP_1_75
								{
									type="text";
									source="static";
									text="75";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP75",
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP75",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP75",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM80",
											{-0.25,0},
											1
										},
										
										{
											"LevelM80",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM80",
											{0.25,0},
											1
										},
										
										{
											"LevelM80",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP80",
											{-0.25,0},
											1
										},
										
										{
											"LevelP80",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP80",
											{0.25,0},
											1
										},
										
										{
											"LevelP80",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.27000001,0.013},
										1
									};
								};
								class LevelM85: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM85",
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM85",
											{-0.25,0},
											1
										},
										
										{
											"LevelM85",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM85",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM85",
											{0.25,0},
											1
										},
										
										{
											"LevelM85",
											{0.25,0.029999999},
											1
										}
									};
								};
								class VALM_1_85
								{
									type="text";
									source="static";
									text=-85;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM85",
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM85",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM85",
										{-0.27000001,0.037999999},
										1
									};
								};
								class LevelP85: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP85",
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP85",
											{-0.25,0},
											1
										},
										
										{
											"LevelP85",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP85",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP85",
											{0.25,0},
											1
										},
										
										{
											"LevelP85",
											{0.25,-0.029999999},
											1
										}
									};
								};
								class VALP_1_85
								{
									type="text";
									source="static";
									text="85";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP85",
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP85",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP85",
										{-0.27000001,0.013},
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
											{-0.25,0.029999999},
											1
										},
										
										{
											"LevelM90",
											{-0.25,0},
											1
										},
										
										{
											"LevelM90",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.079999998,0},
											1
										},
										
										{
											"LevelM90",
											{0.25,0},
											1
										},
										
										{
											"LevelM90",
											{0.25,0.029999999},
											1
										}
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
										{-0.27000001,-0.012},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.20999999,-0.012},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.27000001,0.037999999},
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
											{-0.25,-0.029999999},
											1
										},
										
										{
											"LevelP90",
											{-0.25,0},
											1
										},
										
										{
											"LevelP90",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.079999998,0},
											1
										},
										
										{
											"LevelP90",
											{0.25,0},
											1
										},
										
										{
											"LevelP90",
											{0.25,-0.029999999},
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
										{-0.27000001,-0.037},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.20999999,-0.037},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.27000001,0.013},
										1
									};
								};
							};
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
							{0.1,0.280128},
							1
						};
						right[]=
						{
							{0.14,0.280128},
							1
						};
						down[]=
						{
							{0.1,0.30961499},
							1
						};
					};
					class AltNumber: SpeedNumber
					{
						source="altitudeASL";
						sourceScale=1;
						pos[]=
						{
							{0.89999998,0.280128},
							1
						};
						right[]=
						{
							{0.94,0.280128},
							1
						};
						down[]=
						{
							{0.89999998,0.30961499},
							1
						};
					};
					class AltNumberAGLStatic
					{
						type="text";
						source="static";
						text="H";
						align="left";
						scale=1;
						pos[]=
						{
							{0.87,0.49636799},
							1
						};
						right[]=
						{
							{0.91000003,0.49636799},
							1
						};
						down[]=
						{
							{0.87,0.525855},
							1
						};
					};
					class AltNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.94,0.49636799},
							1
						};
						right[]=
						{
							{0.98000002,0.49636799},
							1
						};
						down[]=
						{
							{0.94,0.525855},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.090999998,0.69999999},
							1
						};
						right[]=
						{
							{0.141,0.69999999},
							1
						};
						down[]=
						{
							{0.090999998,0.73500001},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							
							{
								"0.11-0.009",
								0.69999999
							},
							1
						};
						right[]=
						{
							{0.146,0.69999999},
							1
						};
						down[]=
						{
							
							{
								"0.11-0.009",
								0.73500001
							},
							1
						};
					};
					class ActiveSensorsOn
					{
						condition="activeSensorsOn";
						class ThrustVectoringText
						{
							type="text";
							source="static";
							text="RDR ON";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								{0.972,0.745},
								1
							};
							right[]=
							{
								{1.017,0.745},
								1
							};
							down[]=
							{
								{0.972,0.77999997},
								1
							};
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
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class HeadingRotationArrow
					{
						condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.51999998,0.079999998},
									1
								},
								
								{
									{0.5,0.11},
									1
								},
								
								{
									{0.47999999,0.079999998},
									1
								},
								
								{
									{0.51999998,0.079999998},
									1
								},
								{}
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
									"0.082-0.002"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082-0.002"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113-0.002"
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
									{0.47799999,0.075000003},
									1
								},
								
								{
									{0.52200001,0.075000003},
									1
								},
								
								{
									{0.537,0.094999999},
									1
								},
								
								{
									{0.52200001,0.115},
									1
								},
								
								{
									{0.47799999,0.115},
									1
								},
								
								{
									{0.463,0.094999999},
									1
								},
								
								{
									{0.47799999,0.075000003},
									1
								},
								{},
								
								{
									{0.51999998,0.175},
									1
								},
								
								{
									{0.5,0.145},
									1
								},
								
								{
									{0.47999999,0.175},
									1
								},
								
								{
									{0.51999998,0.175},
									1
								},
								{}
							};
						};
					};
					class HeadingLeft
					{
						clipTL[]={0,0};
						clipBR[]={0.47,1};
						class HeadingScale
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=0.1;
							sourceoffset=0;
							width=3;
							NeverEatSeaWeed=1;
							top=0.15000001;
							center=0.5;
							bottom=0.85000002;
							lineXleft=0.139145;
							lineYright=0.129145;
							lineXleftMajor=0.139145;
							lineYrightMajor=0.119145;
							majorLineEach=2;
							numberEach=6;
							step=0.5;
							stepSize=0.034482799;
							align="center";
							scale=1;
							pos[]={0.2,0.066346198};
							right[]={0.25999999,0.066346198};
							down[]={0.2,0.115491};
						};
					};
					class HeadingCentral: HeadingLeft
					{
						clipTL[]={0.47,0};
						clipBR[]={0.52999997,1};
						class HeadingScale: HeadingScale
						{
							NeverEatSeaWeed=0;
							numberEach=0;
						};
					};
					class HeadingRight: HeadingLeft
					{
						clipTL[]={0.52999997,0};
						clipBR[]={1,1};
						class HeadingScale: HeadingScale
						{
						};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankRot",
								{0,0.31452999},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.29487199},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.29487199},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.31452999},
								1
							}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.87099999,0.87599999},
							1
						};
						right[]=
						{
							{0.921,0.87599999},
							1
						};
						down[]=
						{
							{0.87099999,0.91100001},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.92900002,0.87599999},
							1
						};
						right[]=
						{
							{0.97899997,0.87599999},
							1
						};
						down[]=
						{
							{0.92900002,0.91100001},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.97000003,0.84899998},
							1
						};
						right[]=
						{
							{1.02,0.84899998},
							1
						};
						down[]=
						{
							{0.97000003,0.884},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
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
								{0.47499999,0.15726499},
								1
							};
							right[]=
							{
								{0.53500003,0.15726499},
								1
							};
							down[]=
							{
								{0.47499999,0.20641001},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.89444399},
								1
							};
							right[]=
							{
								{0.54000002,0.89444399},
								1
							};
							down[]=
							{
								{0.5,0.92393202},
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
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.0235897},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0176923},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0176923},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{0,0.0235897},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0176923},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0176923},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.0235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.235897},
										1
									},
									
									{
										"ILS_H",
										{0,0.235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.235897},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.117949},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.117949},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,0.117949},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.117949},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.235897},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.235897},
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
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.81089699},
								1
							};
							right[]=
							{
								{0.995,0.81089699},
								1
							};
							down[]=
							{
								{0.935,0.86004299},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.81089699},
								1
							};
							right[]=
							{
								{0.97000003,0.81089699},
								1
							};
							down[]=
							{
								{0.94999999,0.86004299},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.81089699},
								1
							};
							right[]=
							{
								{1.02,0.81089699},
								1
							};
							down[]=
							{
								{0.95999998,0.86004299},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class cmWeapons
					{
						type="text";
						source="cmweapon";
						sourceScale=1;
						align="right";
						scale=0.5;
						pos[]=
						{
							{0.02,0.87},
							1
						};
						right[]=
						{
							{0.059999999,0.87},
							1
						};
						down[]=
						{
							{0.02,0.91000003},
							1
						};
					};
					class cmAmmo
					{
						type="text";
						source="cmammo";
						sourceScale=1;
						align="right";
						scale=0.5;
						pos[]=
						{
							{0.02,0.82999998},
							1
						};
						right[]=
						{
							{0.059999999,0.82999998},
							1
						};
						down[]=
						{
							{0.02,0.87},
							1
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
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
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
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
									{0,-0.0294872},
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
									{0,0.0294872},
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
									{0,-0.0294872},
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
			class door_2_2
			{
				source="door";
				initPhase=0;
				animPeriod=1;
			};
			class door_2_1
			{
				source="door";
				initPhase=0;
				animPeriod=1;
			};
			class door_1
			{
				source="door";
				initPhase=0;
				animPeriod=1;
			};
			class Door_1_source
			{
				source="door";
				initPhase=0;
				animPeriod=2.5;
				sound="ServoRampSound";
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
			class Wheel_3_1_source
			{
				source="wheel";
				wheel="Wheel_3_1";
			};
			class Wheel_3_2_source
			{
				source="wheel";
				wheel="Wheel_3_2";
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
				wheel="Wheel_3_1";
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
			class HitEngine2
			{
				source="Hit";
				hitpoint="HitEngine2";
				raw=1;
			};
			class HitEngine3
			{
				source="Hit";
				hitpoint="HitEngine3";
				raw=1;
			};
			class HitEngine4
			{
				source="Hit";
				hitpoint="HitEngine4";
				raw=1;
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
			};
			class PositionWhite2: PositionWhite1
			{
				name="PositionLight_white_2_pos";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
			};
			class PositionWhite3: PositionWhite2
			{
				name="PositionLight_white_3_pos";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=5;
				outerAngle=65;
				coneFadeCoef=10;
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class Right: Left
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Left2: Left
			{
				position="L2 svetlo";
				direction="konec L2 svetla";
				hitpoint="L2 svetlo";
				selection="L2 svetlo";
			};
			class Right2: Left
			{
				position="P2 svetlo";
				direction="konec P2 svetla";
				hitpoint="P2 svetlo";
				selection="P2 svetlo";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2"
			},
			
			{
				"Right",
				"Right2"
			}
		};
		airBrake=0;
		flaps=1;
		brakeDistance=150;
		wheelSteeringSensitivity=2;
		maxSpeed=650;
		altFullForce=7000;
		altNoForce=10000;
		rudderInfluence=0.5;
		flapsFrictionCoef=2;
		aileronSensitivity=0.89999998;
		elevatorSensitivity=1;
		elevatorControlsSensitivityCoef=4;
		aileronControlsSensitivityCoef=2;
		rudderControlsSensitivityCoef=4;
		envelope[]={0,0.1,0.5,1.5,3.0999999,4.3000002,4.9000001,5,4.4000001,2.8,1.6,0.80000001,0};
		thrustCoef[]={1.5,1.2,1.1,1,1,1,1,0.89999998,0.69999999,0.5,0.30000001,0.1,0,0,0,0};
		elevatorCoef[]={};
		aileronCoef[]={};
		rudderCoef[]={};
		angleOfIndicence=0.052359872;
		draconicForceXCoef=2.5;
		draconicForceYCoef=0.5;
		draconicForceZCoef=0.5;
		draconicTorqueXCoef=0.15000001;
		draconicTorqueYCoef=2;
		gunAimDown=0;
		headAimDown=0;
		noseDownCoef=1;
		landingSpeed=200;
		acceleration=200;
		landingAoa="(rad 7)";
		waterLeakiness=300;
		waterResistanceCoef=0.02;
		ejectSpeed[]={0,0,0};
		class TextureSources
		{
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_CO.paa",
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_green_CO.paa",
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_green_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_OPFOR_CO.paa",
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_OPFOR_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Grey
			{
				displayName="$STR_A3_TEXTURESOURCES_GREY0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_grey_CO.paa",
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_grey_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_INDP_CO.paa",
					"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_INDP_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		animationList[]={};
		textureList[]=
		{
			"Blufor",
			1,
			"Green",
			0,
			"Opfor",
			0,
			"Grey",
			0,
			"Indep",
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
				width=0.60000002;
				mass=150;
				MOI=25;
				dampingRate=0.25;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				maxDroop=1;
				sprungMass=20000;
				springStrength=500000;
				springDamperRate=80000;
				longitudinalStiffnessPerUnitGravity=4000;
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
				sprungMass=10000;
				springStrength=250000;
				springDamperRate=40000;
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class Wheel_2_2: Wheel_2_1
			{
				boneName="wheel_2_2";
				side="right";
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
			};
			class Wheel_3_1: Wheel_1_1
			{
				boneName="wheel_3_1";
				steering=0;
				center="wheel_3_1_center";
				boundary="wheel_3_1_bound";
				sprungMass=10000;
				springStrength=250000;
				springDamperRate=40000;
				suspForceAppPointOffset="wheel_3_1_axis";
				tireForceAppPointOffset="wheel_3_1_axis";
			};
			class Wheel_3_2: Wheel_2_1
			{
				boneName="wheel_3_2";
				side="right";
				center="wheel_3_2_center";
				boundary="wheel_3_2_bound";
				suspForceAppPointOffset="wheel_3_2_axis";
				tireForceAppPointOffset="wheel_3_2_axis";
			};
		};
		extCameraPosition[]={0,3,-40};
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
				effect="ExhaustsEffectPlaneBig";
				engineIndex=0;
			};
			class Exhaust_2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectPlaneBig";
				engineIndex=1;
			};
			class Exhaust_3
			{
				position="exhaust3";
				direction="exhaust3_dir";
				effect="ExhaustsEffectPlaneBig";
				engineIndex=2;
			};
			class Exhaust_4
			{
				position="exhaust4";
				direction="exhaust4_dir";
				effect="ExhaustsEffectPlaneBig";
				engineIndex=3;
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported=0;
			};
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VVT_cargo_1",
					"VVT_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=19000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VVT_exit"
				};
				unloadingInterval=2;
				loadingDistance=5;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
		};
		class Library
		{
			libEnable=1;
			libTextDesc="";
		};
	};
	class B_Plane_Transport_01_F: Plane_Transport_01_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_Plane_Transport_01_F";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Transport_01_F.jpg";
		scope=2;
		displayName="$STR_A3_CfgVehicles_Plane_Transport_01_Base_F0";
		radarTargetSize=1.8;
		side=1;
		faction="BLU_F";
		crew="B_Pilot_F";
		typicalCargo[]=
		{
			"B_Pilot_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_CO.paa",
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_CO.paa"
		};
		DLC="Aegis";
	};
	class O_Plane_Transport_01_F: Plane_Transport_01_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_Plane_Transport_01_F";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Plane_Transport_01_F.jpg";
		scope=2;
		displayName="$STR_A3_CfgVehicles_O_Plane_Transport_01_Base_F0";
		radarTargetSize=1.8;
		side=0;
		faction="OPF_F";
		crew="O_pilot_F";
		typicalCargo[]=
		{
			"O_pilot_F"
		};
		textureList[]=
		{
			"Opfor",
			1,
			"Grey",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_OPFOR_CO.paa",
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_OPFOR_CO.paa"
		};
		DLC="Aegis";
	};
	class I_Plane_Transport_01_F: Plane_Transport_01_Base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_Plane_Transport_01_F";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Plane_Transport_01_F.jpg";
		scope=2;
		displayName="$STR_A3_CfgVehicles_Plane_Transport_01_Base_F0";
		radarTargetSize=1.8;
		side=2;
		faction="IND_F";
		crew="I_pilot_F";
		typicalCargo[]=
		{
			"I_pilot_F"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_INDP_CO.paa",
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_INDP_CO.paa"
		};
		DLC="Aegis";
	};
	class B_T_Plane_Transport_01_F: B_Plane_Transport_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Transport_01_F.jpg";
		_generalMacro="B_T_Plane_Transport_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Pilot_F";
		typicalCargo[]=
		{
			"B_T_Pilot_F"
		};
	};
	class B_A_Plane_Transport_01_F: B_Plane_Transport_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Transport_01_F.jpg";
		_generalMacro="B_A_Plane_Transport_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Pilot_F";
		typicalCargo[]=
		{
			"B_A_Pilot_F"
		};
		textureList[]=
		{
			"Green",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_green_CO.paa",
			"\A3\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_green_CO.paa"
		};
	};
	class Plane_Transport_01_Wreck_F: PlaneWreck
	{
		scope=1;
		author="$STR_A3_Night515";
		class Armory
		{
			disabled=1;
		};
		model="\A3\Air_F_Aegis\Plane_Transport_01\Plane_Transport_01_Wreck_F.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=0;
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
