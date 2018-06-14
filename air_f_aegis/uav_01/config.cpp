class CfgPatches
{
	class A3_Air_F_Aegis_UAV_01
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Drones_F_Air_F_Gamma_UAV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_UAV_01_F",
			"B_T_UAV_01_F",
			"O_T_UAV_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_UAV_01_F;
	class B_T_UAV_01_F: B_UAV_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_T_UAV_01_F";
		faction="BLU_T_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		crew="B_UAV_AI_F";
		typicalCargo[]=
		{
			"B_UAV_AI_F"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_UAV_01_backpack_grn_F"
			};
		};
	};
	class B_A_UAV_01_F: B_UAV_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_A_UAV_01_F";
		faction="BLU_A_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		crew="B_UAV_AI_F";
		typicalCargo[]=
		{
			"B_UAV_AI_F"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_UAV_01_backpack_khk_F"
			};
		};
	};
	class O_UAV_01_F;
	class O_T_UAV_01_F: O_UAV_01_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_T_UAV_01_F";
		faction="OPF_T_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"O_UAV_01_backpack_grn_F"
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
