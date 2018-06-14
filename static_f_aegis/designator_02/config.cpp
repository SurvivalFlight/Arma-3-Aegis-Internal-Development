class CfgPatches
{
	class A3_Static_F_Aegis_Designator_02
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F_Mark_Designator_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_T_Static_Designator_02_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class O_Static_Designator_02_F;
	class O_T_Static_Designator_02_F: O_Static_Designator_02_F
	{
		author="$STR_A3_Night515";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"mainelevation_01",
					0
				},
				
				{
					"mainelevation_02",
					0
				},
				
				{
					"mainelevation_03",
					0
				},
				
				{
					"mainelevation_04",
					0
				},
				
				{
					"mainelevation_05",
					0
				},
				
				{
					"initturret",
					0
				},
				
				{
					"initgun",
					0
				},
				
				{
					"initelevation_01",
					0
				},
				
				{
					"initelevation_02",
					0
				},
				
				{
					"initelevation_03",
					0
				},
				
				{
					"initelevation_04",
					0
				},
				
				{
					"initelevation_05",
					0
				}
			};
			hide[]=
			{
				"light_back",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.47299999;
			verticalOffsetWorld=-0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Static_Designator_02_F.jpg";
		_generalMacro="O_T_Static_Designator_02_F";
		scope=2;
		side=0;
		faction="OPF_T_F";
		crew="O_UAV_AI";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F_Aegis\Designator_02\Data\LD02_remote_ghex_CO.paa",
			"\A3\Weapons_F_Exp\Binocular\Data\Laserdesignator_02_ghex_F_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_Static_Designator_02_Weapon_grn_F"
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614396";
};
