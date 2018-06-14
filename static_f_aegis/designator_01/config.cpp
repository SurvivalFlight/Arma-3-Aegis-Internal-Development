class CfgPatches
{
	class A3_Static_F_Aegis_Designator_01
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F_Mark_Designator_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Static_Designator_01_F",
			"B_T_Static_Designator_01_F",
			"I_Static_Designator_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Static_Designator_01_base_F;
	class B_Static_Designator_01_F;
	class B_T_Static_Designator_01_F: B_Static_Designator_01_F
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
			verticalOffset=0.509;
			verticalOffsetWorld=0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Static_Designator_01_F.jpg";
		_generalMacro="B_T_Static_Designator_01_F";
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F_Aegis\Designator_01\Data\LD01_remote_khk_CO.paa",
			"\A3\Weapons_F_Exp\Binocular\Data\Laserdesignator_01_khk_F_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_Static_Designator_01_Weapon_grn_F"
			};
		};
	};
	class B_A_Static_Designator_01_F: B_Static_Designator_01_F
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
			verticalOffset=0.509;
			verticalOffsetWorld=0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_Designator_01_F.jpg";
		_generalMacro="B_A_Static_Designator_01_F";
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F_Aegis\Designator_01\Data\LD01_remote_oli_CO.paa",
			"\A3\Weapons_F_Mark\Binocular\Data\LTLM_oli_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_Static_Designator_01_Weapon_khk_F"
			};
		};
	};
	class I_Static_Designator_01_F: Static_Designator_01_base_F
	{
		author="$STR_A3_Night515";
		mapSize=0.89999998;
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
			verticalOffset=0.509;
			verticalOffsetWorld=0.001;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Static_Designator_01_F.jpg";
		_generalMacro="I_Static_Designator_01_F";
		displayName="Remote Designator [AAF]";
		scope=2;
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F_Aegis\Designator_01\Data\LD01_remote_oli_CO.paa",
			"\A3\Weapons_F_Mark\Binocular\Data\LTLM_oli_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"I_Static_Designator_01_weapon_F"
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614396";
};
