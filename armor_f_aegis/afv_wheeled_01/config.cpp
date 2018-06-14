class CfgPatches
{
	class A3_Armor_F_Aegis_AFV_Wheeled_01
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Tank_AFV_Wheeled_01"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"12Rnd_120mm_APFSDS_shells_Tracer_Red",
					"8Rnd_120mm_HE_shells_Tracer_Red",
					"8Rnd_120mm_HEAT_MP_T_Red",
					"200Rnd_338_Mag",
					"200Rnd_338_Mag",
					"200Rnd_338_Mag",
					"200Rnd_338_Mag",
					"200Rnd_338_Mag",
					"4Rnd_120mm_LG_cannon_missiles"
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527944276";
};
