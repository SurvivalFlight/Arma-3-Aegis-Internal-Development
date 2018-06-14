class CfgPatches
{
	class A3_Air_F_Aegis_Heli_Transport_02
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Beta_Heli_Transport_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Heli_Transport_02_F",
			"B_A_Heli_Transport_02_medevac_F",
			"B_ION_Heli_Transport_02_F",
			"C_Heli_Transport_02_civil_F",
			"C_Heli_Transport_02_medevac_F",
			"I_Heli_Transport_02_medevac_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class EventHandlers;
		class TextureSources
		{
			class Dahoman
			{
				textures[]=
				{
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Dahoman_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Dahoman_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Dahoman_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_int_02_Dahoman_CO.paa"
				};
			};
			class Vrana
			{
				displayName="$STR_A3_TEXTURESOURCES_VRANA0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Vrana_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Vrana_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Vrana_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_int_02_Dahoman_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Wave
			{
				displayName="$STR_A3_TEXTURESOURCES_WAVE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Wave_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Wave_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Wave_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_int_02_Dahoman_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Black_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Black_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Black_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
		textureList[]=
		{
			"AAF",
			1,
			"ION",
			0,
			"Dahoman",
			0,
			"Vrana",
			0,
			"Black",
			0,
			"Blufor",
			0,
			"IDAP",
			0
		};
	};
	class B_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Heli_Transport_02_F.jpg";
		_generalMacro="B_Heli_Transport_02_F";
		scope=1;
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		side=1;
		faction="BLU_F";
		textureList[]=
		{
			"Blufor",
			1,
			"Black",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cost=800000;
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
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_F
			{
				weapon="arifle_MXC_F";
				count=2;
			};
		};
	};
	class B_ION_Heli_Transport_02_F: Heli_Transport_02_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Heli_Transport_02_F.jpg";
		_generalMacro="B_ION_Heli_Transport_02_F";
		scope=2;
		displayName="$STR_A3_CfgVehicles_C_IDAP_Heli_Transport_02_F0";
		crew="B_ION_helipilot_F";
		typicalCargo[]=
		{
			"B_ION_helipilot_F"
		};
		side=1;
		faction="BLU_ION_F";
		textureList[]=
		{
			"ION",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_ION_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_ION_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_ION_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cost=800000;
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
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_Black_F
			{
				weapon="arifle_MXC_Black_F";
				count=2;
			};
		};
	};
	class B_A_Heli_Transport_02_F: B_Heli_Transport_02_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_F.jpg";
		_generalMacro="B_A_Heli_Transport_02_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Helipilot_F";
		typicalCargo[]=
		{
			"B_A_Helicrew_F"
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
	};
	class Heli_Transport_02_medevac_base_F: Heli_Transport_02_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Heli_Transport_02_medevac_base_F";
		displayName="CH-49 Mohawk (Medical)";
		cost=800000;
		threat[]={0,0,0};
		attendant=1;
		forceInGarage=1;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
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
				count=16;
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
		weapons[]={};
		magazines[]={};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		class TextureSources
		{
			class AAF
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_medevac_INDP_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_medevac_INDP_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_medevac_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_medevac_CO.paa",
					"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
		textureList[]=
		{
			"AAF",
			1,
			"Blufor",
			0
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class B_A_Heli_Transport_02_medevac_F: Heli_Transport_02_medevac_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_medevac_F.jpg";
		_generalMacro="B_A_Heli_Transport_02_medevac_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Helipilot_F";
		typicalCargo[]=
		{
			"B_A_Helicrew_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_medevac_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_medevac_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};
	class I_Heli_Transport_02_medevac_F: Heli_Transport_02_medevac_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Heli_Transport_02_medevac_F.jpg";
		_generalMacro="I_Heli_Transport_02_medevac_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=2;
		faction="IND_F";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_helicrew_F"
		};
		textureList[]=
		{
			"AAF",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_medevac_INDP_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_medevac_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
	};
	class C_Heli_Transport_02_medevac_F: Heli_Transport_02_medevac_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Heli_Transport_02_medevac_F.jpg";
		_generalMacro="C_Heli_Transport_02_medevac_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=3;
		faction="CIV_F";
		crew="C_man_pilot_F";
		typicalCargo[]=
		{
			"C_man_pilot_F"
		};
		textureList[]=
		{
			"Dahoman",
			1,
			"ION",
			1,
			"Vrana",
			1,
			"Wave",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Dahoman_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Dahoman_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Dahoman_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_int_02_Dahoman_CO.paa"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class Heli_Transport_02_civil_base_F: Heli_Transport_02_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Heli_Transport_02_civil_base_F";
		displayName="$STR_A3_CfgVehicles_C_IDAP_Heli_Transport_02_F0";
		cost=800000;
		threat[]={0,0,0};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
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
		};
		weapons[]={};
		magazines[]={};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class C_Heli_Transport_02_civil_F: Heli_Transport_02_civil_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Heli_Transport_02_civil_F.jpg";
		_generalMacro="C_Heli_Transport_02_civil_F";
		scope=2;
		crew="C_man_pilot_F";
		typicalCargo[]=
		{
			"C_man_pilot_F"
		};
		side=3;
		faction="CIV_F";
		textureList[]=
		{
			"Dahoman",
			1,
			"ION",
			1,
			"Vrana",
			1,
			"Wave",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Dahoman_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Dahoman_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Dahoman_CO.paa",
			"A3\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_int_02_Dahoman_CO.paa"
		};
		DLC="Aegis";
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
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
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
