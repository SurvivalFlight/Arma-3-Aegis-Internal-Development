class CfgPatches
{
	class A3_Dubbing_Radio_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - Radio Protocol";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Dubbing_Radio_F",
			"A3_Dubbing_Radio_F_EXP"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVoice
{
	voices[]+=
	{
		"Male01ENGB",
		"Male02ENGB",
		"Male03ENGB",
		"Male04ENGB",
		"Male05ENGB"
	};
	class Base;
	class PER: Base
	{
		icon="\A3\UI_F_Aegis\Data\CfgMarkers\iran_CA.paa";
	};
	class CHI: Base
	{
		icon="\A3\UI_F_Aegis\Data\CfgMarkers\china_CA.paa";
	};
	class FRE: Base
	{
		icon="\A3\UI_F\Data\Map\Markers\Flags\france_CA.paa";
	};
};
class CfgVoiceTypes
{
	class Male01_F
	{
		voices[]+=
		{
			"Male01ENGB"
		};
	};
	class Male02_F
	{
		voices[]+=
		{
			"Male02ENGB"
		};
	};
	class Male03_F
	{
		voices[]+=
		{
			"Male03ENGB"
		};
	};
	class Male04_F
	{
		voices[]+=
		{
			"Male04ENGB"
		};
	};
	class Male05_F
	{
		voices[]+=
		{
			"Male05ENGB"
		};
	};
	class Male06_F
	{
		voices[]+=
		{
			"Male01ENGB"
		};
	};
	class Male07_F
	{
		voices[]+=
		{
			"Male02ENGB"
		};
	};
	class Male08_F
	{
		voices[]+=
		{
			"Male03ENGB"
		};
	};
	class Male09_F
	{
		voices[]+=
		{
			"Male04ENGB"
		};
	};
	class Male10_F
	{
		voices[]+=
		{
			"Male05ENGB"
		};
	};
	class Male11_F
	{
		voices[]+=
		{
			"Male01ENGB"
		};
	};
	class Male12_F
	{
		voices[]+=
		{
			"Male02ENGB"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614261";
};
