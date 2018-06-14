class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Transport_03
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Heli_Heli_Transport_03"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Heli_Transport_03_F",
			"B_A_Heli_Transport_03_unarmed_F",
			"B_T_Heli_Transport_03_F",
			"B_T_Heli_Transport_03_unarmed_F"
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
			class CopilotTurret;
			class MainTurret;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
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
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F
	{
	};
	class B_T_Heli_Transport_03_F: B_Heli_Transport_03_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_03_F.jpg";
		_generalMacro="B_T_Heli_Transport_03_F";
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
	class B_A_Heli_Transport_03_F: B_Heli_Transport_03_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_03_F.jpg";
		_generalMacro="B_A_Heli_Transport_03_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Helipilot_F";
		typicalCargo[]=
		{
			"B_A_Soldier_Lite_F"
		};
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
				gunnerType="B_A_Helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_A_Helicrew_F";
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
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
	class B_Heli_Transport_03_unarmed_F;
	class B_T_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_03_unarmed_F.jpg";
		_generalMacro="B_T_Heli_Transport_03_unarmed_F";
		scope=2;
		scopeCurator=2;
		scopeGarage=0;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Helipilot_F";
		typicalCargo[]=
		{
			"B_T_Soldier_Lite_F"
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
	class B_A_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_03_unarmed_F.jpg";
		_generalMacro="B_A_Heli_Transport_03_unarmed_F";
		scope=2;
		scopeCurator=2;
		scopeGarage=0;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Helipilot_F";
		typicalCargo[]=
		{
			"B_A_Soldier_Lite_F"
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
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
