class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Attack_01
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Beta_Heli_Attack_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Heli_Attack_01_dynamicLoadout_F",
			"B_Heli_Attack_01_dynamicLoadout_F",
			"B_T_Heli_Attack_01_dynamicLoadout_F"
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
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_CO.paa"
		};
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"gatling_20mm",
					"missiles_DAGR",
					"missiles_ASRAAM",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"500Rnd_20mm_shells",
					"4Rnd_AAA_missiles",
					"24Rnd_PG_missiles",
					"Laserbatteries"
				};
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F",
					"BLU_A_F"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_black_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F",
					"BLU_A_F"
				};
			};
		};
		textureList[]=
		{
			"Green",
			1,
			"Black",
			0
		};
	};
	class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"500Rnd_20mm_shells",
					"Laserbatteries"
				};
			};
		};
	};
	class B_Heli_Attack_01_dynamicLoadout_F;
	class B_T_Heli_Attack_01_dynamicLoadout_F: B_Heli_Attack_01_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Attack_01_dynamicLoadout_F.jpg";
		_generalMacro="B_T_Heli_Attack_01_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_T_Helipilot_F";
		typicalCargo[]=
		{
			"B_T_Helipilot_F"
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
	class B_A_Heli_Attack_01_dynamicLoadout_F: B_Heli_Attack_01_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Attack_01_dynamicLoadout_F.jpg";
		_generalMacro="B_A_Heli_Attack_01_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Helipilot_F";
		typicalCargo[]=
		{
			"B_A_Helipilot_F"
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
