class CfgPatches
{
	class A3_Static_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - Turrets";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Static_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				ejectDeadGunner=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614397";
};
