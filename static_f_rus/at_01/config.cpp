class CfgPatches
{
	class A3_Static_F_Rus_AT_01
	{
		addonRootClass="A3_Static_F_Rus";
		requiredAddons[]=
		{
			"A3_Static_F_Aegis_AT_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Static_AT_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_static_AT_F;
	class I_RU_Static_AT_F: I_static_AT_F
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
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Static_AT_F.jpg";
		_generalMacro="I_RU_Static_AT_F";
		displayName="Static Titan Launcher (AT) [Russia]";
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Rus\Launchers\Titan\Data\launch_R_Titan_F_01_CO.paa",
			"\A3\Weapons_F_Rus\Launchers\Titan\Data\launch_R_Titan_short_F_02_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"I_AT_01_Weapon_rus_F",
				"I_HMG_01_support_rus_F"
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526739086";
};
