class CfgPatches
{
	class A3_Armor_F_Aegis_APC_Wheeled_02
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta_APC_Wheeled_02",
			"A3_Armor_F_Exp_APC_Wheeled_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_A_APC_Wheeled_02_medical_F",
			"O_A_APC_Wheeled_02_rcws_v2_F",
			"O_A_APC_Wheeled_02_unarmed_F",
			"O_APC_Wheeled_02_medical_F",
			"O_APC_Wheeled_02_unarmed_F",
			"O_T_APC_Wheeled_02_medical_ghex_F",
			"O_T_APC_Wheeled_02_rcws_v2_ghex_F",
			"O_T_APC_Wheeled_02_unarmed_ghex_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class AnimationSources;
		class CommanderOptics;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"64Rnd_40mm_G_belt",
					"64Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"SmokeLauncherMag"
				};
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideTurret;
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"64Rnd_40mm_G_belt",
					"64Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"SmokeLauncherMag"
				};
			};
		};
		animationList[]=
		{
			"showBags",
			0.33000001,
			"showCanisters",
			0.5,
			"showTools",
			0.5,
			"showCamonetHull",
			0,
			"showSLATHull",
			0
		};
	};
	class APC_Wheeled_02_unarmed_base_F: APC_Wheeled_02_base_v2_F
	{
		displayName="MSE-3 Marid (Unarmed)";
		picture="\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\APC_Wheeled_02_base_CA.paa";
		Icon="\A3\Armor_F_Aegis\APC_Wheeled_02\Data\UI\map_APC_Wheeled_02_base_CA.paa";
		weapons[]=
		{
			"TruckHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
	};
	class APC_Wheeled_02_medical_base_F: APC_Wheeled_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="APC_Wheeled_01_medical_base_F";
		displayName="MSE-3 Marid (Medical)";
		attendant=1;
		threat[]={0,0,0};
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
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_OPFOR_CO.paa",
					"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_OPFOR_CO.paa",
					"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_ghex_CO.paa",
					"\A3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa",
					"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"GreenHex",
			0
		};
	};
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F
	{
	};
	class O_APC_Wheeled_02_rcws_v2_F;
	class O_A_APC_Wheeled_02_rcws_v2_F: O_APC_Wheeled_02_rcws_v2_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_APC_Wheeled_02_rcws_v2_F.jpg";
		_generalMacro="O_A_APC_Wheeled_02_rcws_v2_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=12;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=8;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=8;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=5;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
	};
	class O_APC_Wheeled_02_unarmed_F: APC_Wheeled_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_APC_Wheeled_02_unarmed_F.jpg";
		_generalMacro="O_APC_Wheeled_02_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		textureList[]=
		{
			"GreenHex",
			0,
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_OPFOR_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_OPFOR_CO.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
		};
		forceInGarage=1;
	};
	class O_T_APC_Wheeled_02_unarmed_ghex_F: APC_Wheeled_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_APC_Wheeled_02_unarmed_ghex_F.jpg";
		_generalMacro="O_T_APC_Wheeled_02_unarmed_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Crew_F";
		typicalCargo[]=
		{
			"O_T_Soldier_F"
		};
		textureList[]=
		{
			"GreenHex",
			1,
			"Hex",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa",
			"\A3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa",
			"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
		};
	};
	class O_A_APC_Wheeled_02_unarmed_F: O_APC_Wheeled_02_unarmed_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_APC_Wheeled_02_unarmed_F.jpg";
		_generalMacro="O_A_APC_Wheeled_02_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"GreenHex",
			0,
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_OPFOR_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_OPFOR_CO.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
		};
	};
	class O_APC_Wheeled_02_medical_F: APC_Wheeled_02_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_APC_Wheeled_02_medical_F.jpg";
		_generalMacro="O_APC_Wheeled_02_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		textureList[]=
		{
			"GreenHex",
			0,
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_OPFOR_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_OPFOR_CO.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
		};
		forceInGarage=1;
	};
	class O_T_APC_Wheeled_02_medical_ghex_F: APC_Wheeled_02_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_APC_Wheeled_02_medical_ghex_F.jpg";
		_generalMacro="O_T_APC_Wheeled_02_medical_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_T_Crew_F";
		typicalCargo[]=
		{
			"O_T_Soldier_F"
		};
		textureList[]=
		{
			"GreenHex",
			1,
			"Hex",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_ghex_CO.paa",
			"\A3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa",
			"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
		};
	};
	class O_A_APC_Wheeled_02_medical_F: O_APC_Wheeled_02_medical_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_APC_Wheeled_02_medical_F.jpg";
		_generalMacro="O_A_APC_Wheeled_02_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"GreenHex",
			0,
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_OPFOR_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_OPFOR_CO.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
		};
		forceInGarage=1;
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527944276";
};
