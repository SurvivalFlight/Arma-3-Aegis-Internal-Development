class CfgPatches
{
	class A3_Soft_F_Aegis_Tractor_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C_Tractor_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
	};
	class Tractor_01_base_F: Car_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Tractor_01_base_F";
		model="\A3\Soft_F_Aegis\Tractor_01\Tractor_01_F";
		picture="\A3\Soft_F_Aegis\Tractor_01\Data\UI\Tractor_01_CA.paa";
		editorSubcategory="EdSubcat_Cars";
		Icon="\A3\Soft_F_Aegis\Tractor_01\Data\UI\map_Tractor_01_CA.paa";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		unitInfoType="RscUnitInfoNoWeapon";
		displayName="$STR_A3_CfgVehicles_Tractor_base0";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_Tractor_base_F_Library0";
		};
		htMin=600;
		htMax=1800;
		afMax=100;
		mfMax=20;
		mFact=0;
		tBody=0;
		terrainCoef=1;
		turnCoef=2;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=1;
			turnIncreaseLinear=3;
			turnIncreaseTime=0;
			turnDecreaseConst=8;
			turnDecreaseLinear=0;
			turnDecreaseTime=0;
			maxTurnHundred=1;
		};
		fireResistance=5;
		armor=30;
		armorLights=0.0099999998;
		cost=25000;
		transportMaxBackpacks=0;
		transportSoldier=0;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
		class AnimationSources;
		class Turrets
		{
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				name="wheel_1_1_damper";
				visual="wheel_1_1";
				armor=0.125;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				name="wheel_1_2_damper";
				visual="wheel_1_2";
				armor=0.125;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				name="wheel_2_1_damper";
				visual="wheel_2_1";
				armor=0.125;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				name="wheel_2_2_damper";
				visual="wheel_2_2";
				armor=0.125;
				passThrough=0;
			};
			class HitFuel: HitFuel
			{
				name="palivo";
			};
			class HitEngine: HitEngine
			{
				name="engine";
			};
			class HitBody: HitBody
			{
				name="karoserie";
				visual="karoserie";
			};
			class HitGlass1: HitGlass1
			{
				armor=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.25;
			};
		};
		driverAction="driver_tractor";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		memoryPointTrackBLL="Stopa ZLL";
		memoryPointTrackBLR="Stopa ZLP";
		memoryPointTrackBRL="Stopa ZPL";
		memoryPointTrackBRR="Stopa ZPP";
		memoryPointTrackFLL="Stopa PLL";
		memoryPointTrackFLR="Stopa PLP";
		memoryPointTrackFRL="Stopa PPL";
		memoryPointTrackFRR="Stopa PPP";
		dustFrontLeftPos="Stopa PPL";
		dustFrontRightPos="Stopa PLP";
		dustBackLeftPos="Stopa ZLL";
		dustBackRightPos="Stopa ZLP";
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class Mirror1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		thrustDelay=0.2;
		brakeIdleSpeed=1.78;
		maxSpeed=40;
		fuelCapacity=50;
		wheelCircumference=3.7679999;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;
		idleRpm=600;
		redRpm=2500;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.6100001,
				"N",
				0,
				"D1",
				2.27,
				"D2",
				1.86,
				"D3",
				1.21,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				18
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=4;
		differentialType="rear_limited";
		frontRearSplit=0.60000002;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=45;
		enginePower=47;
		maxOmega=261;
		peakTorque=210;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			
			{
				"0/2460",
				"0/210"
			},
			
			{
				"401/2460",
				"157/210"
			},
			
			{
				"704/2460",
				"183/210"
			},
			
			{
				"1154/2460",
				"200/210"
			},
			
			{
				"1501/2460",
				"210/210"
			},
			
			{
				"2199/2460",
				"204/210"
			},
			
			{
				"2283/2460",
				"157/210"
			},
			
			{
				"2809/2460",
				"0/210"
			}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=23;
				MOI=4.0999999;
				dampingRate=0.1;
				maxBrakeTorque=1200;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.23999999;
				mMaxDroop=0.23999999;
				sprungMass=845.5;
				springStrength=42025;
				springDamperRate=5400;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=11.5;
				latStiffY=25;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=2000;
				MOI=3.0999999;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=2000;
				MOI=3.0999999;
			};
		};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_door",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_door",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int_start",
			1.1220185,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext_start",
			1.1220185,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int_stop",
			1.1220185,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext_stop",
			1.1220185,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
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
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
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
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
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
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",
			1.4125376,
			1,
			200
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",
			1.4125376,
			1,
			200
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
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
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext_idle",
					1.1220185,
					1,
					150
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext",
					1.1220185,
					1,
					240
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext",
					1.1220185,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext",
					1.1220185,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_ext",
					1.1220185,
					1,
					420
				};
				frequency="0.95 + ((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*camPos*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_ext_idle",
					1.1220185,
					1,
					280
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_ext",
					1.1220185,
					1,
					250
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_ext",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_ext",
					1.1220185,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_ext",
					1.1220185,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_ext",
					1.1220185,
					1,
					400
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_ext",
					1.1220185,
					1,
					450
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int_idle",
					1.1220185,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int",
					1.1220185,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_engine_int",
					1.1220185,
					1
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_int_idle",
					1.1220185,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_int",
					1.1220185,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_int",
					1.1220185,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_Aegis\vehicles\soft\Tractor_01\Tractor_01_exhaust_int",
					1.1220185,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.56234133,
					1,
					90
				};
				frequency=1;
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.15848932,
					1
				};
				frequency=1;
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class Waternoise_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.50118721,
					1,
					300
				};
				frequency=1;
				volume="(speed factor[0, 10]) * water * camPos + (speed factor[-0.1, -10]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",
					0.3548134,
					1,
					100
				};
				frequency=1;
				volume="(speed factor[0, 10]) * water * (1-camPos)* 0.8 + (speed factor[-0.1, -10]) * water * (1-camPos) *0.8";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
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
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		animationList[]={};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Soft_F_Aegis\Tractor_01\Data\Tractor_01.rvmat",
				"A3\Soft_F_Aegis\Tractor_01\Data\Tractor_01_damage.rvmat",
				"A3\Soft_F_Aegis\Tractor_01\Data\Tractor_01_destruct.rvmat",
				"A3\Soft_F_Aegis\Tractor_01\Data\Tractor_01_glass.rvmat",
				"A3\Soft_F_Aegis\Tractor_01\Data\Tractor_01_glass_damage.rvmat",
				"A3\Soft_F_Aegis\Tractor_01\Data\Tractor_01_glass_damage.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffectTractor";
			};
		};
		class Reflectors
		{
			class LightCarHeadL
			{
				color[]={900,800,800,1};
				ambient[]={100,100,100,1};
				position="LightCarHeadL";
				direction="LightCarHeadL_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				brightness=0.5;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadR: LightCarHeadL
			{
				position="LightCarHeadR";
				direction="LightCarHeadR_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL"
			},
			
			{
				"LightCarHeadR"
			}
		};
	};
	class C_Tractor_01_F: Tractor_01_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="C_Tractor_01_F";
		scope=2;
		crew="C_man_w_farmer_1_F";
		side=3;
		faction="CIV_F";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
