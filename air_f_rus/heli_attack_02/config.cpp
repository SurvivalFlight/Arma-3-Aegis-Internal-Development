class CfgPatches
{
	class A3_Air_F_Rus_Heli_Attack_02
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_Heli_Attack_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Heli_Attack_02_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Helicopter_Base_F;
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class Turrets;
	};
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class I_RU_Heli_Attack_02_dynamicLoadout_F: Heli_Attack_02_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Attack_02_dynamicLoadout_F.jpg";
		_generalMacro="I_RU_Heli_Attack_02_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		accuracy=1.5;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		typicalCargo[]=
		{
			"I_RU_Helipilot_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa",
			"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"
		};
		availableForSupportTypes[]=
		{
			"CAS_Heli",
			"Transport"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"250Rnd_30mm_HE_shells_Tracer_Yellow",
					"250Rnd_30mm_APDS_shells_Tracer_Yellow"
				};
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
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890361";
};
