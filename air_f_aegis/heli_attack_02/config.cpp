class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Attack_02
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Beta_Heli_Attack_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_T_Heli_Attack_02_dynamicLoadout_ghex_F"
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
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"250Rnd_30mm_APDS_shells_Tracer_Green",
					"Laserbatteries"
				};
			};
		};
	};
	class O_Heli_Attack_02_dynamicLoadout_F;
	class O_T_Heli_Attack_02_dynamicLoadout_ghex_F: O_Heli_Attack_02_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Attack_02_dynamicLoadout_ghex_F.jpg";
		_generalMacro="O_T_Heli_Attack_02_dynamicLoadout_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
		};
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_ghex_CO.paa",
			"\A3\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_ghex_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
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
