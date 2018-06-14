class CfgPatches
{
	class A3_Static_F_Rus_SAM_System_02
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F_Aegis_SAM_System_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_SAM_System_02_F"
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
					"IND_F",
					"IND_RU_F"
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
					"IND_F",
					"IND_RU_F"
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
					"IND_F",
					"IND_RU_F"
				};
			};
		};
	};
	class I_RU_SAM_System_02_F: SAM_System_02_base_F
	{
		author="$STR_A3_Night515";
		scope=2;
		scopeCurator=2;
		side=2;
		faction="IND_RU_F";
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
	timepacked="1526739086";
};
