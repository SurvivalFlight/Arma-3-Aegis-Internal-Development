class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Light_03
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_EPB_Heli_Light_03"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Heli_light_03_dynamicloadout_F",
			"B_A_Heli_light_03_unarmed_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
			};
		};
		class Components;
		class TextureSources
		{
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUFOR0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Heli_Light_03\data\Heli_Light_03_base_BLUFOR_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHIEKER",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON",
							"20MM_CANNON",
							"B_ASRRAM_EJECTOR"
						};
					};
					class PylonRight1: PylonLeft1
					{
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHIEKER",
							"UNI_SCALPEL",
							"20MM_TWIN_CANNON",
							"20MM_CANNON",
							"B_ASRRAM_EJECTOR"
						};
					};
				};
			};
		};
	};
	class B_A_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		mapSize=17.66;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_F.jpg";
		_generalMacro="B_Heli_light_03_F";
		crew="B_A_Helipilot_F";
		typicalCargo[]=
		{
			"B_A_Soldier_lite_F"
		};
		side=1;
		faction="BLU_A_F";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Heli_Light_03\data\Heli_Light_03_base_BLUFOR_CO.paa"
		};
		transportSoldier=4;
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={3,4,5,6};
		getInProxyOrder[]={1,2,3,4,5,6};
		magazines[]=
		{
			"5000Rnd_762x51_Belt",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_C_blk_F
			{
				weapon="arifle_SA80_C_blk_F";
				count=2;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo dir r";
				gunnerName="$STR_A3_TURRETS_DOOR_R";
				proxyIndex=1;
				isPersonTurret=1;
				ejectDeadGunner=1;
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{10.5776,-58.473202},
						{16.443899,33.970001},
						{11.9517,85.806198}
					};
					limitsArrayBottom[]=
					{
						{-11.7914,-67.324799},
						{-33.808899,-27.733},
						{-33.006199,0.77179998},
						{-14.5823,22.671},
						{-10.2873,43.9272},
						{-20.625401,76.586502}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo dir l";
				gunnerName="$STR_A3_TURRETS_DOOR_L";
				proxyIndex=2;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{11.3674,-80.451202},
						{15.3783,-0.1552},
						{4.4902,79.756104}
					};
					limitsArrayBottom[]=
					{
						{-27.698,-74.5466},
						{-15.8271,-46.016899},
						{-19.3941,7.0179},
						{-44.547699,63.132099}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_flatground_generic04",
			"passenger_flatground_generic05",
			"passenger_apc_narrow_generic02"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		DLC="Aegis";
	};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F
	{
	};
	class B_A_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		author="$STR_A3_Night515";
		mapSize=17.66;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_light_03_unarmed_F.jpg";
		_generalMacro="B_A_Heli_light_03_unarmed_F";
		crew="B_A_Helipilot_F";
		typicalCargo[]=
		{
			"B_A_Soldier_lite_F"
		};
		side=1;
		faction="BLU_A_F";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Heli_Light_03\data\Heli_Light_03_base_BLUFOR_CO.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		DLC="Aegis";
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_C_blk_F
			{
				weapon="arifle_SA80_C_blk_F";
				count=2;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
