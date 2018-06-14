class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Transport_04
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Heli_Heli_Transport_04"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Pod_Heli_Transport_04_ammo_F",
			"Land_Pod_Heli_Transport_04_ammo_ghex_F",
			"Land_Pod_Heli_Transport_04_bench_F",
			"Land_Pod_Heli_Transport_04_bench_ghex_F",
			"Land_Pod_Heli_Transport_04_box_F",
			"Land_Pod_Heli_Transport_04_box_ghex_F",
			"Land_Pod_Heli_Transport_04_covered_F",
			"Land_Pod_Heli_Transport_04_covered_ghex_F",
			"Land_Pod_Heli_Transport_04_fuel_F",
			"Land_Pod_Heli_Transport_04_fuel_ghex_F",
			"Land_Pod_Heli_Transport_04_medevac_F",
			"Land_Pod_Heli_Transport_04_medevac_ghex_F",
			"Land_Pod_Heli_Transport_04_repair_F",
			"Land_Pod_Heli_Transport_04_repair_ghex_F",
			"O_Heli_Transport_04_ammo_F",
			"O_Heli_Transport_04_bench_F",
			"O_Heli_Transport_04_box_F",
			"O_Heli_Transport_04_covered_F",
			"O_Heli_Transport_04_fuel_F",
			"O_Heli_Transport_04_medevac_F",
			"O_Heli_Transport_04_repair_F",
			"O_T_Heli_Transport_04_ammo_ghex_F",
			"O_T_Heli_Transport_04_bench_ghex_F",
			"O_T_Heli_Transport_04_ghex_F",
			"O_T_Heli_Transport_04_box_ghex_F",
			"O_T_Heli_Transport_04_covered_ghex_F",
			"O_T_Heli_Transport_04_fuel_ghex_F",
			"O_T_Heli_Transport_04_medevac_ghex_F",
			"O_T_Heli_Transport_04_repair_ghex_F"
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
		class Turrets: Turrets
		{
			class CopilotTurret;
			class LoadmasterTurret;
		};
		class TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_Heli_Transport_04_F: Heli_Transport_04_base_F
	{
	};
	class O_T_Heli_Transport_04_ghex_F: O_Heli_Transport_04_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class O_Heli_Transport_04_ammo_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_T_Heli_Transport_04_ammo_ghex_F: O_Heli_Transport_04_ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_ammo_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_ammo_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class O_Heli_Transport_04_bench_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Bench_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_T_Heli_Transport_04_bench_ghex_F: O_Heli_Transport_04_bench_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_bench_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_bench_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Bench_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class O_Heli_Transport_04_box_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_T_Heli_Transport_04_box_ghex_F: O_Heli_Transport_04_box_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_box_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_box_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class O_Heli_Transport_04_covered_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_T_Heli_Transport_04_covered_ghex_F: O_Heli_Transport_04_covered_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_covered_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_covered_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class O_Heli_Transport_04_fuel_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_T_Heli_Transport_04_fuel_ghex_F: O_Heli_Transport_04_fuel_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_fuel_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_fuel_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class O_Heli_Transport_04_medevac_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_T_Heli_Transport_04_medevac_ghex_F: O_Heli_Transport_04_medevac_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_medevac_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_medevac_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class O_Heli_Transport_04_repair_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class O_T_Heli_Transport_04_repair_ghex_F: O_Heli_Transport_04_repair_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Heli_Transport_04_repair_ghex_F.jpg";
		_generalMacro="O_T_Heli_Transport_04_repair_ghex_F";
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
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class LoadmasterTurret: LoadmasterTurret
			{
				gunnerType="O_T_Helicrew_F";
			};
		};
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class EventHandlers;
	};
	class Pod_Heli_Transport_04_crewed_base_F: StaticWeapon
	{
		class TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class ReammoBox_F;
	class Slingload_base_F: ReammoBox_F
	{
		class EventHandlers;
	};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_ammo_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_ammo_ghex_F: Land_Pod_Heli_Transport_04_ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_ammo_ghex_F.jpg";
		_generalMacro="Land_Pod_Heli_Transport_04_ammo_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
	};
	class Land_Pod_Heli_Transport_04_bench_F: Pod_Heli_Transport_04_crewed_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Bench_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_bench_ghex_F: Land_Pod_Heli_Transport_04_bench_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_bench_ghex_F.jpg";
		_generalMacro="Land_Pod_Heli_Transport_04_bench_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_bench_ghex_CO.paa"
		};
	};
	class Land_Pod_Heli_Transport_04_box_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_box_ghex_F: Land_Pod_Heli_Transport_04_box_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_box_ghex_F.jpg";
		_generalMacro="Land_Pod_Heli_Transport_04_box_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
	};
	class Land_Pod_Heli_Transport_04_covered_F: Pod_Heli_Transport_04_crewed_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_covered_ghex_F: Land_Pod_Heli_Transport_04_covered_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_covered_ghex_F.jpg";
		_generalMacro="Land_Pod_Heli_Transport_04_covered_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
	};
	class Land_Pod_Heli_Transport_04_fuel_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_fuel_ghex_F: Land_Pod_Heli_Transport_04_fuel_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_fuel_ghex_F.jpg";
		_generalMacro="Land_Pod_Heli_Transport_04_fuel_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_ghex_CO.paa"
		};
	};
	class Land_Pod_Heli_Transport_04_medevac_F: Pod_Heli_Transport_04_crewed_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_medevac_ghex_F: Land_Pod_Heli_Transport_04_medevac_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_medevac_ghex_F.jpg";
		_generalMacro="Land_Pod_Heli_Transport_04_medevac_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
	};
	class Land_Pod_Heli_Transport_04_repair_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources
		{
			class GreenHex
			{
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_repair_ghex_F: Land_Pod_Heli_Transport_04_repair_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Pod_Heli_Transport_04_repair_ghex_F.jpg";
		_generalMacro="Land_Pod_Heli_Transport_04_repair_ghex_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		textureList[]=
		{
			"GreenHex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
