class CfgPatches
{
	class A3_UI_F_Rus
	{
		author="$STR_A3_Night515";
		name="Arma 3 Russian Army - User Interface";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_UI_F_Aegis"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgUnitInsignia
{
	class RussianArmy
	{
		displayName="Russian Army";
		texture="\A3\UI_F_Rus\Data\CfgUnitInsignia\RussianArmy_CA.paa";
		author="$STR_A3_Night515";
	};
};
class CfgMarkers
{
	class flag_NATO;
	class flag_Russia: flag_NATO
	{
		name="Russia";
		icon="\A3\UI_F_Rus\Data\CfgMarkers\Russia_CA.paa";
		texture="\A3\UI_F_Rus\Data\CfgMarkers\Russia_CA.paa";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528816527";
};
