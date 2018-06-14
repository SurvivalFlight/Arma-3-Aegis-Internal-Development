class CfgPatches
{
	class A3_Static_F_Aegis_AA_01
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F_Exp_AA_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Static_AA_F",
			"B_T_Static_AA_F",
			"O_A_Static_AA_F",
			"O_T_Static_AA_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_static_AA_F;
	class B_T_Static_AA_F: B_static_AA_F
	{
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_AA_01_weapon_grn_F",
				"B_HMG_01_support_grn_F"
			};
		};
	};
	class B_A_Static_AA_F: B_static_AA_F
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
					"mainturret_destructx",
					0
				},
				
				{
					"mainturret_destructy",
					0
				},
				
				{
					"mainturret_destructz",
					0
				},
				
				{
					"maingun_destructx",
					0
				},
				
				{
					"maingun_destructy",
					0
				},
				
				{
					"maingun_destructz",
					0
				},
				
				{
					"magazine_destruct",
					0
				},
				
				{
					"ammo_belt_destruct",
					0
				},
				
				{
					"bolt_destruct",
					0
				},
				
				{
					"charging_handle_destruct",
					0
				},
				
				{
					"damagehidevez_destruct",
					0
				},
				
				{
					"damagehidehlaven_destruct",
					0
				},
				
				{
					"damagehiderecoil_destruct",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"magazine_hide",
					0
				},
				
				{
					"ammo_belt_hide",
					0
				},
				
				{
					"muzzleflash",
					0
				},
				
				{
					"addautonomous_unhide",
					0
				},
				
				{
					"bullet001_reload_hide",
					0
				},
				
				{
					"bullet002_reload_hide",
					0
				},
				
				{
					"bullet003_reload_hide",
					0
				},
				
				{
					"bullet004_reload_hide",
					0
				},
				
				{
					"bullet005_reload_hide",
					0
				},
				
				{
					"bullet006_reload_hide",
					0
				},
				
				{
					"bullet007_reload_hide",
					0
				},
				
				{
					"bullet008_reload_hide",
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
			verticalOffset=0.98799998;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_AA_F.jpg";
		_generalMacro="B_A_Static_AA_F";
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_AA_01_weapon_khk_F",
				"B_HMG_01_support_khk_F"
			};
		};
	};
	class O_static_AA_F;
	class O_T_Static_AA_F: O_static_AA_F
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
					"mainturret_destructx",
					0
				},
				
				{
					"mainturret_destructy",
					0
				},
				
				{
					"mainturret_destructz",
					0
				},
				
				{
					"maingun_destructx",
					0
				},
				
				{
					"maingun_destructy",
					0
				},
				
				{
					"maingun_destructz",
					0
				},
				
				{
					"magazine_destruct",
					0
				},
				
				{
					"ammo_belt_destruct",
					0
				},
				
				{
					"bolt_destruct",
					0
				},
				
				{
					"charging_handle_destruct",
					0
				},
				
				{
					"damagehidevez_destruct",
					0
				},
				
				{
					"damagehidehlaven_destruct",
					0
				},
				
				{
					"damagehiderecoil_destruct",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"magazine_hide",
					0
				},
				
				{
					"ammo_belt_hide",
					0
				},
				
				{
					"muzzleflash",
					0
				},
				
				{
					"addautonomous_unhide",
					0
				},
				
				{
					"bullet001_reload_hide",
					0
				},
				
				{
					"bullet002_reload_hide",
					0
				},
				
				{
					"bullet003_reload_hide",
					0
				},
				
				{
					"bullet004_reload_hide",
					0
				},
				
				{
					"bullet005_reload_hide",
					0
				},
				
				{
					"bullet006_reload_hide",
					0
				},
				
				{
					"bullet007_reload_hide",
					0
				},
				
				{
					"bullet008_reload_hide",
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
			verticalOffset=0.98799998;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Static_AA_F.jpg";
		_generalMacro="O_T_Static_AA_F";
		faction="OPF_T_F";
		crew="O_T_Soldier_F";
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_01_CO.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_02_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_AA_01_weapon_grn_F",
				"O_HMG_01_support_grn_F"
			};
		};
	};
	class O_A_Static_AA_F: O_static_AA_F
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
					"mainturret_destructx",
					0
				},
				
				{
					"mainturret_destructy",
					0
				},
				
				{
					"mainturret_destructz",
					0
				},
				
				{
					"maingun_destructx",
					0
				},
				
				{
					"maingun_destructy",
					0
				},
				
				{
					"maingun_destructz",
					0
				},
				
				{
					"magazine_destruct",
					0
				},
				
				{
					"ammo_belt_destruct",
					0
				},
				
				{
					"bolt_destruct",
					0
				},
				
				{
					"charging_handle_destruct",
					0
				},
				
				{
					"damagehidevez_destruct",
					0
				},
				
				{
					"damagehidehlaven_destruct",
					0
				},
				
				{
					"damagehiderecoil_destruct",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"magazine_hide",
					0
				},
				
				{
					"ammo_belt_hide",
					0
				},
				
				{
					"muzzleflash",
					0
				},
				
				{
					"addautonomous_unhide",
					0
				},
				
				{
					"bullet001_reload_hide",
					0
				},
				
				{
					"bullet002_reload_hide",
					0
				},
				
				{
					"bullet003_reload_hide",
					0
				},
				
				{
					"bullet004_reload_hide",
					0
				},
				
				{
					"bullet005_reload_hide",
					0
				},
				
				{
					"bullet006_reload_hide",
					0
				},
				
				{
					"bullet007_reload_hide",
					0
				},
				
				{
					"bullet008_reload_hide",
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
			verticalOffset=0.98799998;
			verticalOffsetWorld=0.0049999999;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Static_AA_F.jpg";
		_generalMacro="O_A_Static_AA_F";
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_OPFOR_CO.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_OPFOR_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_AA_01_weapon_F",
				"O_HMG_01_support_F"
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614396";
};
