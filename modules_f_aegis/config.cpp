class CfgPatches
{
	class A3_Modules_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - Scripted Modules";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Modules_F",
			"A3_Modules_F_Curator_Effects"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
		};
	};
	class ModulePostprocess_F: Module_F
	{
		class Arguments
		{
			class Template
			{
				class Values
				{
					class Limnos
					{
						name="Limnos";
						value="Limnos";
						default=0;
					};
					class Magnitude
					{
						name="Magnitude";
						value="Magnitude";
						default=0;
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614311";
};
