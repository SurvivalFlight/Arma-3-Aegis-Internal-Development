class CfgPatches
{
	class A3_Soft_F_Aegis_Quadbike_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Quadbike_01",
			"A3_Soft_F_Exp_Quadbike_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Quadbike_01_F",
			"B_T_Quadbike_01_F",
			"I_C_Quadbike_01_F",
			"I_G_Quadbike_01_F",
			"O_A_Quadbike_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class Reflectors
		{
			class Left
			{
				useFlare=1;
			};
		};
		class TextureSources
		{
			class Olive
			{
				DisplayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
					"\A3\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
			class Guerrilla_03
			{
				displayName="FIA 3";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Gamma\Quadbike_01\Data\Quadbike_01_IG_CO.paa",
					"\A3\Soft_F_Gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"
				};
				factions[]=
				{
					"BLU_G_F",
					"IND_G_F",
					"OPF_G_F"
				};
			};
		};
	};
	class I_G_Quadbike_01_F: Quadbike_01_base_F
	{
		textureList[]+=
		{
			"Guerrilla_03",
			1
		};
	};
	class B_T_Quadbike_01_F: Quadbike_01_base_F
	{
		textureList[]=
		{
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
		};
	};
	class B_A_Quadbike_01_F: Quadbike_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Quadbike_01_F.jpg";
		_generalMacro="B_A_Quadbike_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_CO.paa",
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_CO.paa"
		};
	};
	class I_C_Quadbike_01_F: Quadbike_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Quadbike_01_F.jpg";
		_generalMacro="I_C_Quadbike_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=2;
		faction="IND_C_F";
		crew="I_C_Soldier_Bandit_5_F";
		typicalCargo[]=
		{
			"I_C_Soldier_Bandit_5_F"
		};
		textureList[]=
		{
			"Black",
			1,
			"Guerrilla_02",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa",
			"\A3\Soft_F_Gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"
		};
	};
	class O_A_Quadbike_01_F: Quadbike_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_A_Quadbike_01_F.jpg";
		_generalMacro="O_A_Quadbike_01_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa",
			"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
