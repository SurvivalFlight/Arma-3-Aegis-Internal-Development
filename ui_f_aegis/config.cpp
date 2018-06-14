class CfgPatches
{
	class A3_UI_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - User Interface";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_UI_F_Curator"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgUIColors
{
	class GUI
	{
		class Presets
		{
			class PresetApex
			{
				default=0;
			};
			class PresetAegis
			{
				displayName="Arma 3 Aegis";
				default=1;
				class Variables
				{
					BCG_RGB[]={0.57999998,0.81999999,0.88999999,0.80000001};
					TITLETEXT_RGB[]={1,1,1,1};
				};
			};
		};
	};
};
class CfgUnitInsignia
{
	class 19thPB
	{
		displayName="19th Paratrooper Battalion";
		texture="\A3\UI_F_Aegis\Data\CfgUnitInsignia\19thPB_CA.paa";
		materials[]=
		{
			"\A3\UI_F_Aegis\Data\CfgUnitInsignia\19thPB.rvmat"
		};
		author="$STR_A3_Night515";
	};
	class SwordfishRegiment
	{
		displayName="Swordfish Regiment";
		texture="\A3\UI_F_Aegis\Data\CfgUnitInsignia\SwordfishRegiment_CA.paa";
		materials[]=
		{
			"\A3\UI_F_Aegis\Data\CfgUnitInsignia\SwordfishRegiment.rvmat"
		};
		author="$STR_A3_Night515";
	};
	class BD
	{
		displayName="BD";
		texture="\A3\UI_F_Aegis\Data\CfgUnitInsignia\BD_CA.paa";
		materials[]=
		{
			"\A3\UI_F_Aegis\Data\CfgUnitInsignia\BD.rvmat"
		};
		author="$STR_A3_Night515";
	};
};
class CfgMarkers
{
	class flag_NATO;
	class flag_Catalonia: flag_NATO
	{
		scope=2;
	};
	class flag_Iran: flag_NATO
	{
		name="Iran";
		icon="\A3\UI_F_Aegis\Data\CfgMarkers\iran_CA.paa";
		texture="\A3\UI_F_Aegis\Data\CfgMarkers\iran_CA.paa";
	};
	class flag_IranArmy: flag_NATO
	{
		name="IAF";
		icon="\A3\UI_F_Aegis\Data\CfgMarkers\iranarmy_CA.paa";
		texture="\A3\UI_F_Aegis\Data\CfgMarkers\iranarmy_CA.paa";
	};
	class flag_China: flag_NATO
	{
		name="China";
		icon="\A3\UI_F_Aegis\Data\CfgMarkers\china_CA.paa";
		texture="\A3\UI_F_Aegis\Data\CfgMarkers\china_CA.paa";
	};
	class flag_ION: flag_NATO
	{
		name="ION";
		icon="\A3\UI_F_Aegis\Data\CfgMarkers\ion_CA.paa";
		texture="\A3\UI_F_Aegis\Data\CfgMarkers\ion_CA.paa";
	};
};
class CfgPostProcessTemplates
{
	class Limnos
	{
		displayName="Limnos";
		colorCorrections[]=
		{
			1,
			1,
			-0.0020000001,
			{0,0.2,1,0.0041999999},
			{0.66000003,0.94,0.93000001,0.89999998},
			{1,1,1,0}
		};
	};
	class Magnitude
	{
		displayName="Magnitude";
		colorCorrections[]=
		{
			0.94999999,
			1.05,
			-0.050000001,
			{0,0.46000001,0.25999999,0.02},
			{0.75999999,0.94,0.92000002,0.89999998},
			{0.73000002,1.6799999,0.58999997,0}
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614552";
};
