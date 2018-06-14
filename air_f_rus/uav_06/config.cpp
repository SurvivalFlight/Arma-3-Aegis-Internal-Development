class CfgPatches
{
	class A3_Air_F_Rus_UAV_06
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_UAV_06"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Box_I_RU_UAV_06_F",
			"Box_I_RU_UAV_06_medical_F",
			"I_RU_UAV_06_F",
			"I_RU_UAV_06_medical_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_UAV_06_F;
	class I_RU_UAV_06_F: I_UAV_06_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_UAV_06_F.jpg";
		_generalMacro="I_RU_UAV_06_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Sheyka";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"I_UAV_06_backpack_rus_F"
			};
		};
	};
	class I_UAV_06_medical_F;
	class I_RU_UAV_06_medical_F: I_UAV_06_medical_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_UAV_06_medical_F.jpg";
		_generalMacro="I_RU_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Sheyka (Medical)";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_medical_CO.paa",
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_medical_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"I_UAV_06_medical_backpack_rus_F"
			};
		};
	};
	class Box_UAV_06_base_F;
	class Box_I_RU_UAV_06_F: Box_UAV_06_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_I_RU_UAV_06_F.jpg";
		_generalMacro="Box_I_RU_UAV_06_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case [Rus]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_CO.paa"
		};
	};
	class Box_UAV_06_medical_base_F;
	class Box_I_RU_UAV_06_medical_F: Box_UAV_06_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_I_RU_UAV_06_medical_F.jpg";
		_generalMacro="Box_I_RU_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case (Medical) [Rus]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_medical_CO.paa",
			"\A3\Air_F_Rus\UAV_06\Data\I_RU_UAV_06_medical_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890361";
};
