class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Light_02
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Heli_Light_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C_Heli_Light_02_civil_F",
			"I_R_Heli_Light_02_dynamicLoadout_F",
			"I_R_Heli_Light_02_unarmed_F",
			"O_Heli_Light_02_medical_F",
			"O_Heli_Light_02_unarmed_F",
			"O_Heli_Light_02_v2_F",
			"O_T_Heli_Light_02_dynamicLoadout_ghex_F",
			"O_T_Heli_Light_02_medical_ghex_F",
			"O_T_Heli_Light_02_unarmed_ghex_F"
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
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		magazines[]=
		{
			"2000Rnd_762x51_Belt_T_Green",
			"12Rnd_PG_missiles",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Components;
		class TextureSources
		{
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"
				};
				faction[]=
				{
					"IND_F",
					"IND_R_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"
				};
				faction[]=
				{
					"OPF_A_F",
					"OPF_F",
					"OPF_T_F"
				};
			};
		};
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F
	{
		weapons[]={};
		magazines[]={};
	};
	class Heli_Light_02_civil_base_F: Heli_Light_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Heli_Light_02_civil_base_F";
		forceInGarage=0;
		cost=900000;
		threat[]={0,0,0};
		radarType=0;
		delete TransportBackpack;
		delete TransportMagazines;
		delete TransportWeapons;
	};
	class Heli_Light_02_medical_base_F: Heli_Light_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Heli_Light_02_medical_base_F";
		forceInGarage=0;
		cost=800000;
		threat[]={0,0,0};
		attendant=1;
		class TransportBackpack
		{
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
				count=10;
			};
		};
		class TextureSources
		{
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_medevac_OPFOR_CO.paa"
				};
				faction[]=
				{
					"OPF_A_F",
					"OPF_F",
					"OPF_T_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_medevac_ghex_CO.paa"
				};
				faction[]=
				{
					"OPF_A_F",
					"OPF_F",
					"OPF_T_F"
				};
			};
		};
	};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonWeapon_2000Rnd_762x51_Belt_T_Green";
						hardpoints[]=
						{
							"O_SKYFIRE",
							"DAGR",
							"DAR",
							"O_S5",
							"O_ORCA_RIGHT_PYLON",
							"20MM_TWIN_CANNON",
							"SCALPEL_1RND_EJECTOR",
							"B_ASRRAM_EJECTOR"
						};
					};
					class PylonRight1
					{
						hardpoints[]=
						{
							"O_SKYFIRE",
							"DAGR",
							"DAR",
							"O_S5",
							"20MM_TWIN_CANNON",
							"SCALPEL_1RND_EJECTOR",
							"B_ASRRAM_EJECTOR"
						};
					};
				};
			};
		};
	};
	class O_Heli_Light_02_dynamicLoadout_F;
	class O_T_Heli_Light_02_dynamicLoadout_ghex_F: O_Heli_Light_02_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Light_02_dynamicLoadout_ghex_F.jpg";
		_generalMacro="O_T_Heli_Light_02_dynamicLoadout_ghex_F";
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
			"\A3\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"
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
	class I_R_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_R_Heli_Light_02_dynamicLoadout_F.jpg";
		_generalMacro="I_R_Heli_Light_02_dynamicLoadout_F";
		scope=2;
		side=2;
		faction="IND_R_F";
		crew="I_R_Helipilot_F";
		accuracy=1.5;
		icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";
		picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"
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
			"Indep",
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
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG20_F
			{
				weapon="arifle_TRG20_F";
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
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		textureList[]=
		{
			"Opfor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"
		};
	};
	class O_T_Heli_Light_02_unarmed_ghex_F: Heli_Light_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Light_02_unarmed_ghex_F.jpg";
		_generalMacro="O_T_Heli_Light_02_unarmed_ghex_F";
		scope=2;
		scopeCurator=2;
		scopeGarage=0;
		displayName="$STR_A3_CfgVehicles_O_Heli_Light_02_Unarmed_F0";
		accuracy=1.5;
		cost=900000;
		threat[]={0.30000001,0.2,0.30000001};
		radarType=8;
		side=0;
		faction="OPF_T_F";
		crew="O_T_Helipilot_F";
		typicalCargo[]=
		{
			"O_T_Helipilot_F"
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
	class I_R_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_R_Heli_Light_02_unarmed_F.jpg";
		_generalMacro="I_R_Heli_Light_02_unarmed_F";
		displayName="$STR_A3_CfgVehicles_O_Heli_Light_02_Unarmed_F0";
		scope=2;
		scopeGarage=0;
		side=2;
		faction="IND_R_F";
		crew="I_R_Helipilot_F";
		accuracy=1.5;
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"
		};
		cost=900000;
		threat[]={0.30000001,0.2,0.30000001};
		radarType=8;
		textureList[]=
		{
			"Indep",
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
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG20_F
			{
				weapon="arifle_TRG20_F";
				count=2;
			};
		};
	};
	class C_Heli_Light_02_civil_F: Heli_Light_02_civil_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Heli_Light_02_civil_F.jpg";
		_generalMacro="C_Heli_Light_02_civil_F";
		scope=2;
		scopeGarage=0;
		side=3;
		faction="CIV_F";
		crew="C_man_pilot_F";
		accuracy=1.5;
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_civilian_CO.paa"
		};
		textureList[]=
		{
			"Blue",
			1
		};
		DLC="Aegis";
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
				count=2;
			};
		};
	};
	class O_Heli_Light_02_medical_F: Heli_Light_02_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Heli_Light_02_medical_F.jpg";
		_generalMacro="O_Heli_Light_02_medical_F";
		displayName="PO-30 Orca Medical";
		scope=1;
		scopeCurator=0;
		side=0;
		faction="OPF_F";
		crew="O_helipilot_F";
		accuracy=1.5;
		forceInGarage=1;
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_medevac_OPFOR_CO.paa"
		};
		radarType=8;
		textureList[]=
		{
			"Opfor",
			1
		};
		DLC="Aegis";
	};
	class O_T_Heli_Light_02_medical_ghex_F: Heli_Light_02_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Light_02_medical_ghex_F.jpg";
		_generalMacro="O_T_Heli_Light_02_medical_ghex_F";
		scope=1;
		scopeCurator=0;
		displayName="PO-30 Orca Medical";
		accuracy=1.5;
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
			"Black",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_medevac_ghex_CO.paa"
		};
	};
	class O_Heli_Light_02_v2_F: Heli_Light_02_base_F
	{
		magazines[]=
		{
			"2000Rnd_762x51_Belt_T_Green",
			"12Rnd_missiles",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
