class CfgPatches
{
	class A3_Static_F_Rus_AAA_System_01
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F_Aegis_AAA_System_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_AAA_System_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class StaticMGWeapon;
	class AAA_System_01_base_F: StaticMGWeapon
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
	class I_RU_AAA_System_01_F: AAA_System_01_base_F
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
