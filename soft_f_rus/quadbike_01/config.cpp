class CfgPatches
{
	class A3_Soft_F_Rus_Quadbike_01
	{
		addonRootClass="A3_Soft_F_Rus";
		requiredAddons[]=
		{
			"A3_Soft_F_Aegis_Quadbike_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Quadbike_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class TextureSources
		{
			class Rus
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Rus\Quadbike_01\Data\Quadbike_01_rus_CO.paa",
					"\A3\Soft_F_Rus\Quadbike_01\Data\Quadbike_01_wheel_rus_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
	};
	class I_RU_Quadbike_01_F: Quadbike_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Quadbike_01_F.jpg";
		_generalMacro="I_RU_Quadbike_01_F";
		scope=2;
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\Quadbike_01\Data\Quadbike_01_rus_CO.paa",
			"\A3\Soft_F_Rus\Quadbike_01\Data\Quadbike_01_wheel_rus_CO.paa"
		};
		DLC="Rus";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527283818";
};
