class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Transport_01
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Beta_Heli_Transport_01",
			"A3_Air_F_Exp_Heli_Transport_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_CTRG_Heli_Transport_01_sand_F",
			"B_CTRG_Heli_Transport_01_tropic_F",
			"B_Heli_Transport_01_camo_F",
			"B_Heli_Transport_01_medevac_F",
			"B_T_Heli_Transport_01_F",
			"B_T_Heli_Transport_01_medevac_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"LMG_Minigun_Transport"
				};
				magazines[]=
				{
					"2000Rnd_762x51_Belt_T_Red"
				};
			};
			class RightDoorGun: MainTurret
			{
				weapons[]=
				{
					"LMG_Minigun_Transport2"
				};
				magazines[]=
				{
					"2000Rnd_762x51_Belt_T_Red"
				};
			};
		};
	};
	class B_Heli_Transport_01_F: Heli_Transport_01_base_F
	{
	};
	class B_Heli_Transport_01_camo_F: B_Heli_Transport_01_F
	{
		scope=1;
		scopeCurator=0;
	};
	class B_T_Heli_Transport_01_F: B_Heli_Transport_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_01_F.jpg";
		_generalMacro="B_T_Heli_Transport_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Helipilot_F";
		typicalCargo[]=
		{
			"B_T_Soldier_Lite_F"
		};
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
				gunnerType="B_T_Helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_T_Helicrew_F";
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_khk_F
			{
				weapon="arifle_MXC_khk_F";
				count=2;
			};
		};
	};
	class B_CTRG_Heli_Transport_01_sand_F: Heli_Transport_01_base_F
	{
		typicalCargo[]=
		{
			"B_CTRG_Soldier_F"
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
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
	};
	class B_CTRG_Heli_Transport_01_tropic_F: Heli_Transport_01_base_F
	{
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
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=4;
			};
		};
	};
	class Heli_Transport_01_medevac_base_F: Heli_Transport_01_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Heli_Transport_01_medevac_base_F";
		displayName="UH-80 Ghost Hawk (Medical)";
		cost=1400000;
		threat[]={0,0,0};
		attendant=1;
		forceInGarage=1;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=1;
			};
		};
		class TextureSources
		{
		};
	};
	class B_Heli_Transport_01_medevac_F: Heli_Transport_01_medevac_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Heli_Transport_01_medevac_F.jpg";
		_generalMacro="B_Heli_Transport_01_medevac_F";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		availableForSupportTypes[]=
		{
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext01_medevac_CO.paa",
			"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa"
		};
	};
	class B_T_Heli_Transport_01_medevac_F: B_Heli_Transport_01_medevac_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_01_medevac_F.jpg";
		_generalMacro="B_T_Heli_Transport_01_medevac_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Helipilot_F";
		typicalCargo[]=
		{
			"B_T_Soldier_Lite_F"
		};
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
				gunnerType="B_T_Helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_T_Helicrew_F";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
