class CfgPatches
{
	class A3_Soft_F_Aegis_Offroad_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Exp_Offroad_01",
			"A3_Soft_F_Offroad_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_GEN_Offroad_01_gen_F",
			"C_Offroad_01_police_F",
			"I_C_Offroad_01_armed_F",
			"I_C_Offroad_01_AT_F",
			"I_C_Offroad_01_F",
			"O_P_Offroad_01_armed_F",
			"O_P_Offroad_01_AT_F",
			"O_P_Offroad_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class Offroad_01_base_F: Car_F
	{
		class EventHandlers;
	};
	class Offroad_01_civil_base_F: Offroad_01_base_F
	{
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_black_CO.paa",
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_black_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Police
			{
				displayName="Police";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_police_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		textureList[]+=
		{
			"Black",
			1
		};
	};
	class Offroad_01_repair_base_F;
	class Offroad_01_repair_military_base_F: Offroad_01_repair_base_F
	{
		class TextureSources
		{
			class Guerrilla_13
			{
				displayName="Guerrilla 13";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa",
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa"
				};
				factions[]=
				{
					"BLU_G_F",
					"IND_G_F",
					"OPF_G_F"
				};
			};
		};
		textureList[]+=
		{
			"Guerrilla_13",
			1
		};
	};
	class Offroad_01_military_base_F: Offroad_01_base_F
	{
		class TextureSources
		{
			class Brown
			{
				displayName="$STR_A3_TEXTURESOURCES_BROWN0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
				};
				materials[]=
				{
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat",
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Olive
			{
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_oli_CO.paa",
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_oli_CO.paa"
				};
				materials[]=
				{
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat",
					"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Guerrilla_13
			{
				displayName="Guerrilla 13";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa",
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa"
				};
				factions[]=
				{
					"BLU_G_F",
					"IND_G_F",
					"OPF_G_F"
				};
			};
		};
		textureList[]+=
		{
			"Guerrilla_13",
			1
		};
	};
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow"
				};
				stabilizedInAxes=3;
			};
		};
	};
	class Offroad_01_AT_base_F: Offroad_01_military_base_F
	{
	};
	class C_Offroad_01_police_F: Offroad_01_civil_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Offroad_01_police_F.jpg";
		_generalMacro="C_Offroad_01_police_F";
		scope=2;
		scopeCurator=2;
		displayName="Offroad (Police)";
		DLC="Aegis";
		icon="\A3\Soft_F_Exp\Offroad_01\Data\UI\map_Offroad_01_gen_CA.paa";
		picture="\A3\Soft_F_Exp\Offroad_01\Data\UI\Offroad_01_gen_CA.paa";
		side=3;
		faction="CIV_F";
		crew="C_man_police_F";
		typicalCargo[]=
		{
			"C_man_police_F"
		};
		weapons[]=
		{
			"AmbulanceHorn"
		};
		textureList[]=
		{
			"Police",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_police_CO.paa"
		};
		animationList[]=
		{
			"HidePolice",
			0,
			"HideBumper1",
			0,
			"HideBumper2",
			0,
			"HideConstruction",
			0,
			"HideBackpacks",
			1
		};
	};
	class O_P_Offroad_01_F: Offroad_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_P_Offroad_01_F.jpg";
		_generalMacro="O_P_Offroad_01_F";
		scope=2;
		DLC="Aegis";
		side=0;
		faction="OPF_P_F";
		crew="O_P_Soldier_F";
		typicalCargo[]=
		{
			"O_P_Soldier_F"
		};
		textureList[]=
		{
			"Para",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_para_CO.paa",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_para_CO.paa"
		};
		transportSoldier=1;
		cargoProxyIndexes[]={1};
		getInProxyOrder[]={1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_3";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R2";
				gunnerCompartments="Compartment2";
				proxyIndex=2;
				isPersonTurret=1;
				canHideGunner=0;
				allowLauncherIn=0;
				allowLauncherOut=0;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,75};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_flatground_2";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L2";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=3;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{37.1488,-71.900299},
						{36.4967,92.275703}
					};
					limitsArrayBottom[]=
					{
						{-22.183201,-70.0989},
						{-13.9068,-22.810699},
						{-7.1236,75.684898},
						{-7.8564,102.5826}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,65};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos cargo RF";
				memoryPointsGetInGunnerDir="pos cargo RF dir";
				proxyIndex=4;
				forceHideGunner=0;
				canHideGunner=1;
				isPersonTurret=2;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				animationSourceHatch="gunner_rf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.089901,0.4614}
					};
					limitsArrayBottom[]=
					{
						{-5.6160998,-103.2468},
						{-6.3358998,-86.666603},
						{-4.5173001,-52.222401},
						{-2.1726999,-26.9412},
						{-2.7195001,17.171101},
						{-8.6473999,52.254501},
						{-9.5586996,116.7031}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{38.5373,-12.3438}
					};
					limitsArrayBottom[]=
					{
						{-55.813202,-78.700996},
						{-55.695,-42.974899},
						{-20.534901,-8.1766005},
						{-18.5114,7.3281999},
						{-19.9175,18.901199},
						{-20.0625,26.805099},
						{-19.9485,37.776798},
						{-34.081501,67.225403},
						{-48.6922,80.034798},
						{-47.633099,90.4505}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={5,75};
					CargoTurret_02[]={-15,75};
					CargoTurret_04[]={-75,75};
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L1";
				memoryPointsGetInGunner="pos cargo LF";
				memoryPointsGetInGunnerDir="pos cargo LF dir";
				proxyIndex=5;
				animationSourceHatch="gunner_lf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{32.724899,-3.3246}
					};
					limitsArrayBottom[]=
					{
						{-13.8937,-116.0915},
						{-15.9318,-73.923203},
						{-7.7740998,-33.610401},
						{-2.2081001,-11.6789},
						{-2.175,33.696899},
						{-4.7947998,64.996803},
						{-6.1245999,108.4244}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{60.203899,-100.4401}
					};
					limitsArrayBottom[]=
					{
						{-39.821899,-73.344398},
						{-35.159698,-60.962002},
						{-28.0802,-54.4944},
						{-18.1518,-30.9259},
						{-20.7152,12.1939},
						{-36.766602,33.6105},
						{-39.774799,75.873199}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,15};
					CargoTurret_02[]={-75,-5};
					CargoTurret_03[]={-75,75};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
			killed="_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
	class I_C_Offroad_01_F: Offroad_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Offroad_01_F.jpg";
		_generalMacro="I_C_Offroad_01_F";
		scope=2;
		DLC="Aegis";
		side=2;
		faction="IND_C_F";
		crew="I_C_Soldier_Bandit_7_F";
		typicalCargo[]=
		{
			"I_C_Soldier_Bandit_7_F"
		};
		textureList[]=
		{
			"Brown",
			1,
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat"
		};
		transportSoldier=1;
		cargoProxyIndexes[]={1};
		getInProxyOrder[]={1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_3";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R2";
				gunnerCompartments="Compartment2";
				proxyIndex=2;
				isPersonTurret=1;
				canHideGunner=0;
				allowLauncherIn=0;
				allowLauncherOut=0;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,75};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_flatground_2";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L2";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=3;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{37.1488,-71.900299},
						{36.4967,92.275703}
					};
					limitsArrayBottom[]=
					{
						{-22.183201,-70.0989},
						{-13.9068,-22.810699},
						{-7.1236,75.684898},
						{-7.8564,102.5826}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,65};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos cargo RF";
				memoryPointsGetInGunnerDir="pos cargo RF dir";
				proxyIndex=4;
				forceHideGunner=0;
				canHideGunner=1;
				isPersonTurret=2;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				animationSourceHatch="gunner_rf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.089901,0.4614}
					};
					limitsArrayBottom[]=
					{
						{-5.6160998,-103.2468},
						{-6.3358998,-86.666603},
						{-4.5173001,-52.222401},
						{-2.1726999,-26.9412},
						{-2.7195001,17.171101},
						{-8.6473999,52.254501},
						{-9.5586996,116.7031}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{38.5373,-12.3438}
					};
					limitsArrayBottom[]=
					{
						{-55.813202,-78.700996},
						{-55.695,-42.974899},
						{-20.534901,-8.1766005},
						{-18.5114,7.3281999},
						{-19.9175,18.901199},
						{-20.0625,26.805099},
						{-19.9485,37.776798},
						{-34.081501,67.225403},
						{-48.6922,80.034798},
						{-47.633099,90.4505}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={5,75};
					CargoTurret_02[]={-15,75};
					CargoTurret_04[]={-75,75};
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L1";
				memoryPointsGetInGunner="pos cargo LF";
				memoryPointsGetInGunnerDir="pos cargo LF dir";
				proxyIndex=5;
				animationSourceHatch="gunner_lf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{32.724899,-3.3246}
					};
					limitsArrayBottom[]=
					{
						{-13.8937,-116.0915},
						{-15.9318,-73.923203},
						{-7.7740998,-33.610401},
						{-2.2081001,-11.6789},
						{-2.175,33.696899},
						{-4.7947998,64.996803},
						{-6.1245999,108.4244}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{60.203899,-100.4401}
					};
					limitsArrayBottom[]=
					{
						{-39.821899,-73.344398},
						{-35.159698,-60.962002},
						{-28.0802,-54.4944},
						{-18.1518,-30.9259},
						{-20.7152,12.1939},
						{-36.766602,33.6105},
						{-39.774799,75.873199}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,15};
					CargoTurret_02[]={-75,-5};
					CargoTurret_03[]={-75,75};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
			killed="_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
	class I_C_Offroad_01_AT_F: Offroad_01_AT_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Offroad_01_AT_F.jpg";
		_generalMacro="I_C_Offroad_01_AT_F";
		scope=2;
		DLC="Aegis";
		side=2;
		faction="IND_C_F";
		crew="I_C_Soldier_Bandit_7_F";
		typicalCargo[]=
		{
			"I_C_Soldier_Bandit_7_F"
		};
		textureList[]=
		{
			"Brown",
			1,
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
			killed="_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
	class I_C_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Offroad_01_armed_F.jpg";
		_generalMacro="I_C_Offroad_01_armed_F";
		scope=2;
		DLC="Aegis";
		side=2;
		faction="IND_C_F";
		crew="I_C_Soldier_Bandit_7_F";
		typicalCargo[]=
		{
			"I_C_Soldier_Bandit_7_F"
		};
		textureList[]=
		{
			"Brown",
			1,
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat",
			"\A3\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext.rvmat"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
			killed="_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
