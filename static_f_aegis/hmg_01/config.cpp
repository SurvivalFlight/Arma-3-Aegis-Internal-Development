class CfgPatches
{
	class A3_Static_F_Aegis_HMG_01
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F",
			"A3_Static_F_Exp_HMG_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_HMG_01_A_F",
			"B_A_HMG_01_F",
			"B_A_HMG_01_high_F",
			"B_HMG_01_A_F",
			"B_HMG_01_F",
			"",
			"B_HMG_01_high_F",
			"B_T_HMG_01_A_F",
			"B_T_HMG_01_high_F",
			"I_HMG_01_A_F",
			"I_HMG_01_F",
			"I_HMG_01_high_F",
			"O_A_HMG_01_A_F",
			"O_A_HMG_01_F",
			"O_A_HMG_01_high_F",
			"O_HMG_01_F",
			"O_HMG_01_high_F",
			"O_T_HMG_01_A_F",
			"O_T_HMG_01_F",
			"O_T_HMG_01_high_F"
		};
		weapons[]={};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class HMG_01_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
				class ViewOptics: ViewOptics
				{
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class B_HMG_01_F: HMG_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
			};
		};
	};
	class B_A_HMG_01_F: B_HMG_01_F
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
					"ammo_belt_rotation",
					0
				},
				
				{
					"barrel_recoil",
					0
				},
				
				{
					"bolt_recoil",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_backside",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"bolt_reload_begin",
					0
				},
				
				{
					"bolt_reload_end",
					0
				},
				
				{
					"charging_handle_reload_begin",
					0
				},
				
				{
					"charging_handle_reload_end",
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
					"zaslehrot",
					0
				},
				
				{
					"addautonomous_unhide",
					0
				},
				
				{
					"bullet001_reload_hide",
					1
				},
				
				{
					"bullet002_reload_hide",
					1
				},
				
				{
					"bullet003_reload_hide",
					1
				},
				
				{
					"bullet004_reload_hide",
					1
				},
				
				{
					"bullet005_reload_hide",
					1
				},
				
				{
					"bullet006_reload_hide",
					1
				},
				
				{
					"bullet007_reload_hide",
					1
				},
				
				{
					"bullet008_reload_hide",
					1
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
			verticalOffset=1.209;
			verticalOffsetWorld=0.077;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_01_F.jpg";
		_generalMacro="B_A_HMG_01_F";
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_HMG_01_Weapon_khk_F",
				"B_HMG_01_support_khk_F"
			};
		};
	};
	class O_HMG_01_F: HMG_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Green",
					"100Rnd_127x99_mag_Tracer_Green"
				};
			};
		};
	};
	class O_T_HMG_01_F: O_HMG_01_F
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
					"ammo_belt_rotation",
					0
				},
				
				{
					"barrel_recoil",
					0
				},
				
				{
					"bolt_recoil",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_backside",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"bolt_reload_begin",
					0
				},
				
				{
					"bolt_reload_end",
					0
				},
				
				{
					"charging_handle_reload_begin",
					0
				},
				
				{
					"charging_handle_reload_end",
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
					"zaslehrot",
					0
				},
				
				{
					"addautonomous_unhide",
					0
				},
				
				{
					"bullet001_reload_hide",
					1
				},
				
				{
					"bullet002_reload_hide",
					1
				},
				
				{
					"bullet003_reload_hide",
					1
				},
				
				{
					"bullet004_reload_hide",
					1
				},
				
				{
					"bullet005_reload_hide",
					1
				},
				
				{
					"bullet006_reload_hide",
					1
				},
				
				{
					"bullet007_reload_hide",
					1
				},
				
				{
					"bullet008_reload_hide",
					1
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
			verticalOffset=1.209;
			verticalOffsetWorld=0.077;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_HMG_01_F.jpg";
		_generalMacro="O_T_HMG_01_F";
		faction="OPF_T_F";
		crew="O_T_Soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_HMG_01_Weapon_grn_F",
				"O_HMG_01_support_grn_F"
			};
		};
	};
	class O_A_HMG_01_F: O_HMG_01_F
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
					"ammo_belt_rotation",
					0
				},
				
				{
					"barrel_recoil",
					0
				},
				
				{
					"bolt_recoil",
					0
				},
				
				{
					"turret_shake",
					0
				},
				
				{
					"turret_shake_backside",
					0
				},
				
				{
					"turret_shake_aside",
					0
				},
				
				{
					"bolt_reload_begin",
					0
				},
				
				{
					"bolt_reload_end",
					0
				},
				
				{
					"charging_handle_reload_begin",
					0
				},
				
				{
					"charging_handle_reload_end",
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
					"zaslehrot",
					0
				},
				
				{
					"addautonomous_unhide",
					0
				},
				
				{
					"bullet001_reload_hide",
					1
				},
				
				{
					"bullet002_reload_hide",
					1
				},
				
				{
					"bullet003_reload_hide",
					1
				},
				
				{
					"bullet004_reload_hide",
					1
				},
				
				{
					"bullet005_reload_hide",
					1
				},
				
				{
					"bullet006_reload_hide",
					1
				},
				
				{
					"bullet007_reload_hide",
					1
				},
				
				{
					"bullet008_reload_hide",
					1
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
			verticalOffset=1.209;
			verticalOffsetWorld=0.077;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_HMG_01_F.jpg";
		_generalMacro="O_A_HMG_01_F";
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_HMG_01_weapon_F",
				"O_HMG_01_support_F"
			};
		};
	};
	class I_HMG_01_F: HMG_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow"
				};
			};
		};
	};
	class HMG_01_high_base_F: HMG_01_base_F
	{
	};
	class B_HMG_01_high_F: HMG_01_high_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
			};
		};
	};
	class B_T_HMG_01_high_F: B_HMG_01_high_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_HMG_01_high_F.jpg";
		_generalMacro="B_T_HMG_01_high_F";
		faction="BLU_T_F";
		crew="B_T_Soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_HMG_01_high_Weapon_grn_F",
				"B_HMG_01_support_high_grn_F"
			};
		};
	};
	class B_A_HMG_01_high_F: B_HMG_01_high_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_01_high_F.jpg";
		_generalMacro="B_A_HMG_01_high_F";
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_HMG_01_high_Weapon_khk_F",
				"B_HMG_01_support_high_khk_F"
			};
		};
	};
	class O_HMG_01_high_F: HMG_01_high_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Green",
					"100Rnd_127x99_mag_Tracer_Green"
				};
			};
		};
	};
	class O_T_HMG_01_high_F: O_HMG_01_high_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_HMG_01_high_F.jpg";
		_generalMacro="O_T_HMG_01_high_F";
		faction="OPF_T_F";
		crew="O_T_Soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_HMG_01_high_Weapon_grn_F",
				"O_HMG_01_support_high_grn_F"
			};
		};
	};
	class O_A_HMG_01_high_F: O_HMG_01_high_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_HMG_01_high_F.jpg";
		_generalMacro="O_A_HMG_01_high_F";
		faction="OPF_A_F";
		crew="O_A_soldier_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_HMG_01_high_weapon_F",
				"O_HMG_01_support_high_F"
			};
		};
	};
	class I_HMG_01_high_F: HMG_01_high_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow"
				};
			};
		};
	};
	class HMG_01_A_base_F: HMG_01_base_F
	{
	};
	class B_HMG_01_A_F: HMG_01_A_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
			};
		};
	};
	class B_T_HMG_01_A_F: B_HMG_01_A_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_HMG_01_A_F.jpg";
		_generalMacro="B_T_HMG_01_A_F";
		faction="BLU_T_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_HMG_01_A_Weapon_grn_F",
				"B_HMG_01_support_grn_F"
			};
		};
	};
	class B_A_HMG_01_A_F: B_HMG_01_A_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_01_A_F.jpg";
		_generalMacro="B_A_HMG_01_A_F";
		faction="BLU_A_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_HMG_01_A_Weapon_khk_F",
				"B_HMG_01_support_khk_F"
			};
		};
	};
	class O_HMG_01_A_F: HMG_01_A_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Green",
					"100Rnd_127x99_mag_Tracer_Green"
				};
			};
		};
	};
	class O_T_HMG_01_A_F: O_HMG_01_A_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_HMG_01_A_F.jpg";
		_generalMacro="O_T_HMG_01_A_F";
		faction="OPF_T_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_HMG_01_A_Weapon_grn_F",
				"O_HMG_01_support_grn_F"
			};
		};
	};
	class I_HMG_01_A_F: HMG_01_A_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow"
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614396";
};
