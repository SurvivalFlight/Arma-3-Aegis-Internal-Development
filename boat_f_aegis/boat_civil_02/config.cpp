class CfgPatches
{
	class A3_Boat_F_Aegis_Boat_Civil_02
	{
		addonRootClass="A3_Boat_F_Aegis";
		requiredAddons[]=
		{
			"A3_Boat_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C_Boat_Civil_02_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class EventHandlers;
	};
	class Boat_Civil_02_base_F: Boat_F
	{
		author="$STR_A3_Night515";
		mapSize=5;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_ship_boat_s"
				};
				speechPlural[]=
				{
					"veh_ship_boat_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_ship_boat_s";
		textPlural="$STR_A3_nameSound_veh_ship_boat_p";
		nameSound="veh_ship_boat_s";
		_generalMacro="Boat_Civil_02_base_F";
		displayName="$STR_A3_CfgVehicles_Boat_Civil_02_base_F0";
		DLC="Aegis";
		accuracy=0.5;
		model="\A3\Boat_F_Aegis\Boat_Civil_02\Boat_Civil_02_F.p3d";
		editorSubcategory="EdSubcat_Boats";
		picture="\A3\Boat_F_Aegis\Boat_Civil_02\Data\UI\Boat_Civil_02_CA.paa";
		Icon="\A3\Boat_F_Aegis\Boat_Civil_02\Data\UI\map_Boat_Civil_02_CA.paa";
		cost=10000;
		threat[]={0,0,0};
		unitInfoType="RscUnitInfoNoWeapon";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_001_CO.paa"
		};
		memoryPointTaskMarker="TaskMarker_1_pos";
		leftEngineEffect="LEngEffectsSmall";
		rightEngineEffect="REngEffectsSmall";
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		armor=10;
		damageResistance=0.0088200001;
		class HitPoints
		{
			class HitBody
			{
				armor=0.60000002;
				material=50;
				name="hull";
				visual="motor";
				passThrough=1;
			};
			class HitEngine
			{
				armor=1.2;
				material=-1;
				name="Engine";
				visual="";
				passThrough=1;
			};
		};
		class Turrets
		{
		};
		attenuationEffectType="OpenCarAttenuation";
		insideSoundCoef=0.5;
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-start-03",
			0.17782794,
			1,
			200
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-start-03",
			0.17782794,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-stop-03",
			0.17782794,
			1,
			200
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-stop-03",
			0.17782794,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_01",
			1.7782794,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_02",
			1.7782794,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_building_03",
			1.7782794,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.33000001,
			"buildCrash1",
			0.33000001,
			"buildCrash2",
			0.34
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_01",
			1.7782794,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_02",
			1.7782794,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_wood_03",
			1.7782794,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.33000001,
			"woodCrash1",
			0.33000001,
			"woodCrash2",
			0.34
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_01",
			3.1622777,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_02",
			3.1622777,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_03",
			3.1622777,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.33000001,
			"ArmorCrash1",
			0.33000001,
			"ArmorCrash2",
			0.34
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_01",
			1.7782794,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_02",
			1.7782794,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\Vehicles\boat\noises\Light_metal_boat_crash_armor_03",
			1.7782794,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.34
		};
		class Sounds
		{
			class IdleOut
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-idle-04",
					0.44668359,
					1,
					150
				};
				frequency="0.95	+	((rpm/	1200) factor[(100/	1200),(200/	1200)])*0.15";
				volume="engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-low-04",
					0.63095737,
					1.2,
					300
				};
				frequency="0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume="engineOn*(((rpm/	1200) factor[(200/	1200),(300/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-hi-03",
					0.89125091,
					0.60000002,
					400
				};
				frequency="0.95	+	((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume="engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1200/	1200),(900/	1200)]))";
			};
			class EngineMaxOut
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\boat\Boat_Civil_02\ext-slowboat-engine-hi-03",
					1.2589254,
					1,
					500
				};
				frequency="0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.3";
				volume="engineOn*((rpm/	1200) factor[(600/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency=1;
				volume="(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					1,
					150
				};
				frequency=1;
				volume="((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					1,
					300
				};
				frequency=1;
				volume="(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					1,
					1,
					100
				};
				frequency=1;
				volume="(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					1,
					0.89999998,
					150
				};
				frequency=1;
				volume="((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					1,
					0.89999998,
					300
				};
				frequency=1;
				volume="(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
					1.7782794,
					1,
					100
				};
				frequency=1;
				volume="(scrubLand factor[0.01, 0.20])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		driverRightHandAnimName="kormidlo";
		driverAction="Driver_Boat_Civil_02";
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
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		castDriverShadow=1;
		castCargoShadow=1;
		ejectDeadDriver=1;
		ejectDeadCargo=0;
		maxSpeed=25;
		simulation="shipX";
		overSpeedBrakeCoef=0.80000001;
		enginePower=18.5;
		engineShiftY=0;
		waterLeakiness=0.5;
		waterResistanceCoef=0.0099999998;
		thrustDelay=2;
		waterLinearDampingCoefY=5;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=1.2;
		rudderForceCoef=0.079999998;
		rudderForceCoefAtMaxSpeed=0.001;
		supplyRadius=3;
		fuelExplosionPower=0;
		transportSoldier=5;
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_Boat_civil_02_base_Library0";
		};
		extCameraPosition[]={0,4,-14};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02.rvmat",
				"A3\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_damage.rvmat",
				"A3\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_damage.rvmat"
			};
		};
		class AnimationSources
		{
			class HideCanopy
			{
				displayName="Hide Canopy";
				author="$STR_A3_Night515";
				source="Proxy";
				animPeriod=0.001;
				initPhase=0;
			};
		};
		animationList[]=
		{
			"HideCanopy",
			0.5
		};
		class TextureSources
		{
			class Red
			{
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_001_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_002_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		textureList[]=
		{
			"Red",
			1,
			"Blue",
			1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class C_Boat_Civil_02_F: Boat_Civil_02_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Boat_Civil_02_F.jpg";
		_generalMacro="C_Boat_Civil_02_F";
		scope=2;
		crew="C_Man_Fisherman_01_F";
		side=3;
		faction="CIV_F";
		typicalCargo[]=
		{
			"C_Man_Fisherman_01_F"
		};
		textureList[]=
		{
			"Red",
			1,
			"Blue",
			1
		};
		DLC="Aegis";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525613803";
};
