class CfgPatches
{
	class A3_Functions_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - Script Functions";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Functions_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions
{
	class A3
	{
		class Environment
		{
			file="A3\Functions_F_Aegis\Environment";
			class initWorldScene
			{
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614286";
};
