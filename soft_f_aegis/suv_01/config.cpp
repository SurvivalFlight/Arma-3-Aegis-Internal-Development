class CfgPatches
{
	class A3_Soft_F_Aegis_SUV_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Gamma_SUV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_ION_SUV_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class SUV_01_base_F;
	class B_ION_SUV_01_F: SUV_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_SUV_01_F.jpg";
		_generalMacro="B_ION_SUV_01_F";
		scope=2;
		crew="B_ION_Soldier_F";
		typicalCargo[]=
		{
			"B_ION_Soldier_F"
		};
		side=1;
		faction="BLU_ION_F";
		accuracy=1.25;
		textureList[]=
		{
			"Black",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
