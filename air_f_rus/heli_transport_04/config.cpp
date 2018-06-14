class CfgPatches
{
	class A3_Air_F_Rus_Heli_Transport_04
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_Heli_Transport_04"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Heli_Transport_04_ammo_F",
			"I_RU_Heli_Transport_04_bench_F",
			"I_RU_Heli_Transport_04_F",
			"I_RU_Heli_Transport_04_box_F",
			"I_RU_Heli_Transport_04_covered_F",
			"I_RU_Heli_Transport_04_fuel_F",
			"I_RU_Heli_Transport_04_medevac_F",
			"I_RU_Heli_Transport_04_repair_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
			class HitTransmission;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
			};
		};
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		class AnimationSources: AnimationSources
		{
			class Door_1_source;
		};
		class UserActions
		{
			class OpenDoor_1;
			class CloseDoor_1;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: MainTurret
			{
			};
		};
		class TextureSources
		{
			class Black;
		};
	};
	class I_RU_Heli_Transport_04_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"
		};
		supplyRadius=2;
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.49000001;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		slingLoadMaxCargoMass=13500;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
		};
		memoryPointDriverOptics="Slingload_cam";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=0;
		};
	};
	class I_RU_Heli_Transport_04_ammo_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_ammo_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_ammo_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Heli_Transport_04_ammo_F0";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_ammo_F.p3d";
		DLC="Rus";
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_ammo_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_ammo_CA.paa";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		supplyRadius=10;
		transportAmmo=1000000000000;
		slingLoadMemoryPoint="";
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.73500001;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class I_RU_Heli_Transport_04_bench_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_bench_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_bench_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Heli_Transport_04_bench_F0";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_bench_F.p3d";
		DLC="Rus";
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_bench_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_bench_CA.paa";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		supplyRadius=2;
		availableForSupportTypes[]=
		{
			"Transport"
		};
		slingLoadMemoryPoint="";
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.49000001;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		transportSoldier=0;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="Cargo_R1_pos";
				memoryPointsGetInGunnerDir="Cargo_R1_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R1";
				proxyIndex=1;
				maxElev=20;
				minElev=-45;
				maxTurn=55;
				minTurn=-65;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
					CargoTurret_03[]={-75,95};
					CargoTurret_04[]={-80,95};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=2;
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="Cargo_R2_pos";
				memoryPointsGetInGunnerDir="Cargo_R2_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_03[]={-65,95};
					CargoTurret_04[]={-75,95};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=3;
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="Cargo_R3_pos";
				memoryPointsGetInGunnerDir="Cargo_R3_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R3";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,75};
					CargoTurret_02[]={-95,65};
					CargoTurret_04[]={-65,95};
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=4;
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="Cargo_R4_pos";
				memoryPointsGetInGunnerDir="Cargo_R4_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_R4";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,80};
					CargoTurret_02[]={-95,75};
					CargoTurret_03[]={-95,65};
				};
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerCompartments="Compartment6";
				memoryPointsGetInGunner="Cargo_L4_pos";
				memoryPointsGetInGunnerDir="Cargo_L4_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L4";
				proxyIndex=5;
				class dynamicViewLimits
				{
					CargoTurret_06[]={-65,95};
					CargoTurret_07[]={-75,95};
					CargoTurret_08[]={-80,95};
				};
			};
			class CargoTurret_06: CargoTurret_05
			{
				proxyIndex=6;
				gunnerCompartments="Compartment7";
				memoryPointsGetInGunner="Cargo_L3_pos";
				memoryPointsGetInGunnerDir="Cargo_L3_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L3";
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,65};
					CargoTurret_07[]={-65,95};
					CargoTurret_08[]={-75,95};
				};
			};
			class CargoTurret_07: CargoTurret_05
			{
				proxyIndex=7;
				gunnerCompartments="Compartment8";
				memoryPointsGetInGunner="Cargo_L2_pos";
				memoryPointsGetInGunnerDir="Cargo_L2_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L2";
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,75};
					CargoTurret_06[]={-95,65};
					CargoTurret_08[]={-65,95};
				};
			};
			class CargoTurret_08: CargoTurret_05
			{
				proxyIndex=8;
				gunnerCompartments="Compartment9";
				memoryPointsGetInGunner="Cargo_L1_pos";
				memoryPointsGetInGunnerDir="Cargo_L1_dir";
				gunnerName="$STR_A3_Turrets_CargoTurret_L1";
				class dynamicViewLimits
				{
					CargoTurret_05[]={-95,80};
					CargoTurret_06[]={-95,75};
					CargoTurret_07[]={-95,65};
				};
			};
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic03"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_Black_CO.paa"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_Black_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Bench_default_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class Bench_black_source: Bench_default_source
			{
				initPhase=1;
			};
		};
	};
	class I_RU_Heli_Transport_04_box_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_box_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_box_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Heli_Transport_04_box_F0";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_box_F.p3d";
		DLC="Rus";
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_box_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_box_CA.paa";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		supplyRadius=5;
		slingLoadMemoryPoint="";
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.73500001;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
		class TransportMagazines
		{
			class _xx_17Rnd_9x21_Mag
			{
				magazine="17Rnd_9x21_Mag";
				count=12;
			};
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine="30Rnd_9x21_Mag_SMG_02";
				count=12;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=48;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=24;
			};
			class _xx_75Rnd_762x39_Drum_Mag_F
			{
				magazine="75Rnd_762x39_Drum_Mag_F";
				count=16;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=12;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=4;
			};
			class _xx_chemlight_red
			{
				magazine="chemlight_red";
				count=12;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=6;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=4;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=12;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=12;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=4;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine="UGL_FlareYellow_F";
				count=4;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine="UGL_FlareRed_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_Black_F
			{
				weapon="launch_RPG32_Black_F";
				count=2;
			};
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=4;
			};
			class _xx_arifle_RPK_F
			{
				weapon="arifle_RPK_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=25;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=2;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=4;
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
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=3;
			};
			class _xx_B_FieldPack_rucamo
			{
				backpack="B_FieldPack_rucamo";
				count=4;
			};
		};
	};
	class I_RU_Heli_Transport_04_covered_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_covered_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_covered_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Heli_Transport_04_covered_F0";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_covered_F.p3d";
		DLC="Rus";
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_covered_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_covered_CA.paa";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		supplyRadius=5;
		transportSoldier=14;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		slingLoadMemoryPoint="";
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_covered.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.57499999;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		maxSpeed=250;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="Cargo_R_pos";
				memoryPointsGetInGunnerDir="Cargo_R_dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex=15;
				isPersonTurret=1;
				enabledByAnimationSource="Door_6_source";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationRamp";
				disableSoundAttenuation=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{2.3004,-99.719803},
						{4.9784999,-86.818703},
						{5.6223001,-80.066597},
						{2.4619999,-66.781799}
					};
					limitsArrayBottom[]=
					{
						{-32.9916,-98.944901},
						{-34.2187,-70.423798},
						{-34.274101,-65.303497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				memoryPointsGetInGunner="Cargo_L_pos";
				memoryPointsGetInGunnerDir="Cargo_L_dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				proxyIndex=16;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-34.4785,-59.8451},
						{-36.522999,65.375397},
						{0.3459,71.621597},
						{2.1489999,79.6409},
						{2.0386,87.165802},
						{-0.0147,95}
					};
					limitsArrayBottom[]=
					{
						{-45,65.375397},
						{-36.927502,72.666496},
						{-37.094002,95}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		cargoAction[]=
		{
			"passenger_apc_generic04",
			"passenger_apc_generic02",
			"passenger_apc_generic03",
			"passenger_apc_generic04",
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_foldhands",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic01",
			"passenger_apc_generic01",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright",
			"passenger_low01"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Door_4_source: Door_1_source
			{
				animPeriod=2;
				soundPosition="Door_4_trigger";
			};
			class Door_5_source: Door_1_source
			{
				animPeriod=2;
				soundPosition="Door_5_trigger";
			};
			class Door_6_source: Door_1_source
			{
				animPeriod=2;
				soundPosition="Door_6_trigger";
			};
		};
		class UserActions: UserActions
		{
			class OpenDoor_4: OpenDoor_1
			{
				position="Door_4_trigger";
				condition="((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') < 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_4_source', 1])";
			};
			class CloseDoor_4: CloseDoor_1
			{
				position="Door_4_trigger";
				condition="((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') >= 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_4_source', 0])";
			};
			class OpenDoor_5: OpenDoor_1
			{
				position="Door_5_trigger";
				condition="((this getVariable ['bis_disabled_Door_5',1]) isEqualTo 0) && {((this animationPhase 'Door_5_move_1') < 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_5_source', 1])";
			};
			class CloseDoor_5: CloseDoor_1
			{
				position="Door_5_trigger";
				condition="((this getVariable ['bis_disabled_Door_5',1]) isEqualTo 0) && {((this animationPhase 'Door_5_move_1') >= 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_5_source', 0])";
			};
			class OpenDoor_6: OpenDoor_1
			{
				position="Door_6_trigger";
				condition="((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') < 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_6_source', 1])";
			};
			class CloseDoor_6: CloseDoor_1
			{
				position="Door_6_trigger";
				condition="((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') >= 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_6_source', 0])";
			};
			class Ramp_Open: OpenDoor_6
			{
				userActionID=60;
				displayName="$STR_ACTION_RAMP_OPEN0";
				textToolTip="$STR_ACTION_RAMP_OPEN0";
				position="";
				showWindow=0;
				condition="this doorPhase 'Door_6_source' < 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2], this turretUnit [3]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)} ";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			};
			class Ramp_Close: CloseDoor_6
			{
				userActionID=61;
				displayName="$STR_ACTION_RAMP_CLOSE0";
				textToolTip="$STR_ACTION_RAMP_CLOSE0";
				position="";
				showWindow=0;
				condition="this doorPhase 'Door_6_source' > 0.5 AND Alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [1], this turretUnit [2], this turretUnit [3]])} && {((this getVariable ['bis_disabled_Ramp',0]) isEqualTo 0)} ";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			};
		};
		class HitPoints: HitPoints
		{
			class Glass_Pod_01_hitpoint
			{
				name="Glass_Pod_01_hit";
				visual="Glass_Pod_01";
				convexComponent="Glass_Pod_01";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_02_hitpoint
			{
				name="Glass_Pod_02_hit";
				visual="Glass_Pod_02";
				convexComponent="Glass_Pod_02";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_03_hitpoint
			{
				name="Glass_Pod_03_hit";
				visual="Glass_Pod_03";
				convexComponent="Glass_Pod_03";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_04_hitpoint
			{
				name="Glass_Pod_04_hit";
				visual="Glass_Pod_04";
				convexComponent="Glass_Pod_04";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_05_hitpoint
			{
				name="Glass_Pod_05_hit";
				visual="Glass_Pod_05";
				convexComponent="Glass_Pod_05";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_06_hitpoint
			{
				name="Glass_Pod_06_hit";
				visual="Glass_Pod_06";
				convexComponent="Glass_Pod_06";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_07_hitpoint
			{
				name="Glass_Pod_07_hit";
				visual="Glass_Pod_07";
				convexComponent="Glass_Pod_07";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_08_hitpoint
			{
				name="Glass_Pod_08_hit";
				visual="Glass_Pod_08";
				convexComponent="Glass_Pod_08";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_09_hitpoint
			{
				name="Glass_Pod_09_hit";
				visual="Glass_Pod_09";
				convexComponent="Glass_Pod_09";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=19;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=9;
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
	};
	class I_RU_Heli_Transport_04_fuel_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_fuel_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_fuel_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Heli_Transport_04_fuel_F0";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_fuel_F.p3d";
		DLC="Rus";
		side=2;
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_fuel_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_fuel_CA.paa";
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		supplyRadius=10;
		transportFuel=1000000000000;
		slingLoadMemoryPoint="";
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.73500001;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class I_RU_Heli_Transport_04_medevac_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_medevac_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_medevac_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Heli_Transport_04_medevac_F0";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_medevac_F.p3d";
		DLC="Rus";
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_medevac_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_medevac_CA.paa";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		transportSoldier=4;
		supplyRadius=5;
		attendant=1;
		slingLoadMemoryPoint="";
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_covered.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.57499999;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
		};
		cargoAction[]=
		{
			"passenger_injured_medevac_truck03",
			"passenger_injured_medevac_truck02",
			"passenger_injured_medevac_truck01",
			"passenger_low01"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
		class AnimationSources: AnimationSources
		{
			class Door_4_source: Door_1_source
			{
				animPeriod=2;
				soundPosition="Door_4_trigger";
			};
			class Door_6_source: Door_1_source
			{
				animPeriod=2;
				soundPosition="Door_6_trigger";
			};
		};
		class UserActions: UserActions
		{
			class OpenDoor_4: OpenDoor_1
			{
				position="Door_4_trigger";
				condition="((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') < 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_4_source', 1])";
			};
			class CloseDoor_4: CloseDoor_1
			{
				position="Door_4_trigger";
				condition="((this getVariable ['bis_disabled_Door_4',1]) isEqualTo 0) && {((this animationPhase 'Door_4_move_1') >= 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_4_source', 0])";
			};
			class OpenDoor_6: OpenDoor_1
			{
				position="Door_6_trigger";
				condition="((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') < 0.5) &&  (alive this)}";
				statement="(this animateDoor ['Door_6_source', 1])";
			};
			class CloseDoor_6: CloseDoor_1
			{
				position="Door_6_trigger";
				condition="((this getVariable ['bis_disabled_Door_6',1]) isEqualTo 0) && {((this animationPhase 'Door_6_rot') >= 0.5) && (alive this)}";
				statement="(this animateDoor ['Door_6_source', 0])";
			};
		};
		class HitPoints: HitPoints
		{
			class Glass_Pod_01_hitpoint
			{
				name="Glass_Pod_01_hit";
				visual="Glass_Pod_01";
				convexComponent="Glass_Pod_01";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_02_hitpoint
			{
				name="Glass_Pod_02_hit";
				visual="Glass_Pod_02";
				convexComponent="Glass_Pod_02";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_03_hitpoint
			{
				name="Glass_Pod_03_hit";
				visual="Glass_Pod_03";
				convexComponent="Glass_Pod_03";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_04_hitpoint
			{
				name="Glass_Pod_04_hit";
				visual="Glass_Pod_04";
				convexComponent="Glass_Pod_04";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_05_hitpoint
			{
				name="Glass_Pod_05_hit";
				visual="Glass_Pod_05";
				convexComponent="Glass_Pod_05";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
			class Glass_Pod_06_hitpoint
			{
				name="Glass_Pod_06_hit";
				visual="Glass_Pod_06";
				convexComponent="Glass_Pod_06";
				armor=2;
				passThrough=0;
				material=-1;
				radius=0.1;
				class DestructionEffects
				{
				};
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=15;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
		};
	};
	class I_RU_Heli_Transport_04_repair_F: Heli_Transport_04_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Transport_04_repair_F.jpg";
		_generalMacro="I_RU_Heli_Transport_04_repair_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Heli_Transport_04_repair_F0";
		model="\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_repair_F.p3d";
		DLC="Rus";
		icon="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_repair_CA.paa";
		picture="\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_repair_CA.paa";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_Lite_F"
		};
		supplyRadius=10;
		transportRepair=1000000000000;
		slingLoadMemoryPoint="";
		class RotorLibHelicopterProperties
		{
			RTDconfig="\A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04_support.xml";
			autoHoverCorrection[]={4,0,0};
			defaultCollective=0.73500001;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			stressDamagePerSec=0.0099999998;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxTorque=12000;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
			retreatBladeStallWarningSpeed=83;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="I_RU_Helicrew_F";
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
			"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
		};
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				textures[]=
				{
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
					"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=2;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890361";
};
