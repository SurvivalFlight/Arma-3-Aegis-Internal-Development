class CfgPatches
{
	class A3_Boat_F_Aegis_Boat_Civil_01
	{
		addonRootClass="A3_Boat_F_Aegis";
		requiredAddons[]=
		{
			"A3_Boat_F_Gamma_Boat_Civil_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"C_Boat_Civil_01_police_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Boat_Civil_01_base_F;
	class C_Boat_Civil_01_police_F: Boat_Civil_01_base_F
	{
		crew="C_man_police_F";
		typicalCargo[]=
		{
			"C_man_police_F"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525613803";
};
