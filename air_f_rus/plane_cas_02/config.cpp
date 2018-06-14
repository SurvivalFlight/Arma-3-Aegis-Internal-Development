class CfgPatches
{
	class A3_Air_F_Rus_Plane_CAS_02
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_Plane_CAS_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Plane_CAS_02_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class Rus
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Rus\Plane_CAS_02\Data\Fighter02_ext01_rus_CO.paa",
					"\A3\Air_F_Rus\Plane_CAS_02\Data\Fighter02_ext02_rus_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
	};
	class Plane_CAS_02_dynamicLoadout_base_F;
	class I_RU_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Plane_CAS_02_dynamicLoadout_F.jpg";
		_generalMacro="I_RU_Plane_CAS_02_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_Plane_02_F0";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"I_RU_Fighter_Pilot_F"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Rus\Plane_CAS_02\Data\Fighter02_ext01_rus_CO.paa",
			"\A3\Air_F_Rus\Plane_CAS_02\Data\Fighter02_ext02_rus_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890361";
};
