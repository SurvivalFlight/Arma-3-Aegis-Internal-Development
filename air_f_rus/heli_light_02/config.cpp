class CfgPatches
{
	class A3_Air_F_Rus_Heli_Light_02
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_Heli_Light_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Heli_Light_02_dynamicLoadout_F",
			"I_RU_Heli_Light_02_unarmed_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Heli_Light_02_base_F;
	class Heli_Light_02_unarmed_base_F;
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
		class Components;
	};
	class I_RU_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Light_02_dynamicLoadout_F.jpg";
		_generalMacro="I_RU_Heli_Light_02_dynamicLoadout_F";
		scope=2;
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Helipilot_F";
		accuracy=1.5;
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport",
			"CAS_Heli"
		};
		cost=2000000;
		threat[]={0.60000002,0.80000001,0.5};
		textureList[]=
		{
			"Black",
			1
		};
		DLC="Rus";
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
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonWeapon_2000Rnd_762x51_Belt_T_Yellow";
						priority=5;
						hardpoints[]=
						{
							"DAGR",
							"DAR",
							"O_S5",
							"I_ORCA_RIGHT_PYLON",
							"20MM_TWIN_CANNON",
							"SCALPEL_1RND_EJECTOR",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_12Rnd_PG_missiles";
						mirroredMissilePos=1;
						hardpoints[]=
						{
							"DAGR",
							"DAR",
							"O_S5",
							"20MM_TWIN_CANNON",
							"SCALPEL_1RND_EJECTOR",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.58999997,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonWeapon_2000Rnd_762x51_Belt_T_Yellow",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
					class CAS
					{
						displayName="$STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP";
						attachment[]=
						{
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
				};
			};
		};
	};
	class I_RU_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Heli_Light_02_unarmed_F.jpg";
		_generalMacro="I_RU_Heli_Light_02_unarmed_F";
		scope=2;
		scopeCurator=2;
		scopeGarage=0;
		displayName="$STR_A3_CfgVehicles_O_Heli_Light_02_Unarmed_F0";
		accuracy=1.5;
		cost=900000;
		threat[]={0.30000001,0.2,0.30000001};
		radarType=8;
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
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
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
