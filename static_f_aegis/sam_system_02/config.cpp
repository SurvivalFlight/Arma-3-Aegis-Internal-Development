class CfgPatches
{
	class A3_Static_F_Aegis_SAM_System_02
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F_Jets_SAM_System_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_SAM_System_02_F",
			"B_T_SAM_System_02_F",
			"I_SAM_System_02_F",
			"O_SAM_System_02_F",
			"O_T_SAM_System_02_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class SAM_System_02_base_F: StaticMGWeapon
	{
		class TextureSources
		{
			class LightGrey
			{
				factions[]=
				{
					"BLU_F",
					"BLU_T_F",
					"BLU_A_F",
					"OPF_F",
					"OPF_T_F",
					"IND_F"
				};
			};
			class Sand
			{
				factions[]=
				{
					"BLU_F",
					"BLU_T_F",
					"BLU_A_F",
					"OPF_F",
					"OPF_T_F",
					"IND_F"
				};
			};
			class Green
			{
				factions[]=
				{
					"BLU_F",
					"BLU_T_F",
					"BLU_A_F",
					"OPF_F",
					"OPF_T_F",
					"IND_F"
				};
			};
		};
	};
	class B_SAM_System_02_F;
	class B_T_SAM_System_02_F: B_SAM_System_02_F
	{
		author="$STR_A3_Night515";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
	};
	class B_A_SAM_System_02_F: B_SAM_System_02_F
	{
		author="$STR_A3_Night515";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
	};
	class O_SAM_System_02_F: SAM_System_02_base_F
	{
		author="$STR_A3_Night515";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
	};
	class O_T_SAM_System_02_F: O_SAM_System_02_F
	{
		author="$STR_A3_Night515";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_T_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
	};
	class I_SAM_System_02_F: SAM_System_02_base_F
	{
		author="$STR_A3_Night515";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_UAV_AI"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614397";
};
