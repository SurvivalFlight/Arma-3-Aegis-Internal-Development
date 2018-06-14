class CfgPatches
{
	class A3_Air_F_Aegis_UAV_02
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Drones_F_Air_F_Gamma_UAV_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_UAV_02_dynamicLoadout_F",
			"B_T_UAV_02_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_UAV_02_dynamicLoadout_F;
	class B_T_UAV_02_dynamicLoadout_F: B_UAV_02_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro="B_T_UAV_02_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
	};
	class B_A_UAV_02_dynamicLoadout_F: B_UAV_02_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro="B_A_UAV_02_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		class TextureSources
		{
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\UAV_02\Data\UAV_02_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_02\Data\UAV_02_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
