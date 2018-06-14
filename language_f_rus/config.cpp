class CfgPatches
{
	class A3_Language_F_Rus
	{
		author="$STR_A3_Night515";
		name="Arma 3 Russian Army - Texts and Translations";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Language_F_Aegis"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgHints
{
	class WeaponList
	{
		class RG6
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CfgWeapons_RG6_F0"
				},
				
				{
					"STR_A3_CfgWeapons_RG6_F_Library0"
				}
			};
			image="\A3\UI_F\Data\GUI\cfg\hints\UGL_CA.paa";
			weapon="RG6";
			logicalOrder=32;
		};
		class arifle_AK107
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CfgWeapons_arifle_AK107_F0"
				},
				
				{
					"STR_A3_CfgWeapons_arifle_AK107_F_Library0"
				}
			};
			image="\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon="arifle_AK107_F";
			logicalOrder=32;
		};
		class sgun_SK12
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CfgWeapons_sgun_SK12_F0"
				},
				
				{
					"STR_A3_CfgWeapons_sgun_SK12_F_Library0"
				}
			};
			image="\A3\UI_F\Data\GUI\cfg\hints\Shotguns_CA.paa";
			weapon="sgun_SK12_F";
			logicalOrder=32;
		};
		class SMG_06
		{
			displayName="%11";
			description="%12";
			tip="";
			arguments[]=
			{
				
				{
					"STR_A3_CfgWeapons_SMG_06_F0"
				},
				
				{
					"STR_A3_CfgWeapons_SMG_06_F_Library0"
				}
			};
			image="\A3\UI_F\Data\GUI\cfg\hints\Rifle_CA.paa";
			weapon="SMG_06_F";
			logicalOrder=32;
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890735";
};
