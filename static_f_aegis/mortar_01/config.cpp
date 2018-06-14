class CfgPatches
{
	class A3_Static_F_Aegis_Mortar_01
	{
		addonRootClass="A3_Static_F_Aegis";
		requiredAddons[]=
		{
			"A3_Static_F_Exp_Mortar_01",
			"A3_Static_F_Mortar_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Mortar_01_A_F",
			"B_A_Mortar_01_F",
			"B_Mortar_01_A_F",
			"B_T_Mortar_01_A_F",
			"I_Mortar_01_A_F",
			"O_A_Mortar_01_F",
			"O_Mortar_01_A_F",
			"O_T_Mortar_01_A_F",
			"O_T_Mortar_01_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_Mortar_01_F;
	class B_A_Mortar_01_F: B_Mortar_01_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Mortar_01_F.jpg";
		_generalMacro="B_A_Mortar_01_F";
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
				"B_Mortar_01_Weapon_khk_F",
				"B_Mortar_01_support_khk_F"
			};
		};
	};
	class O_Mortar_01_F;
	class O_T_Mortar_01_F: O_Mortar_01_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Mortar_01_F.jpg";
		_generalMacro="O_T_Mortar_01_F";
		faction="OPF_T_F";
		crew="O_T_Soldier_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F_Aegis\Mortar_01\Data\Mortar_01_ghex_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_Mortar_01_Weapon_grn_F",
				"O_Mortar_01_support_grn_F"
			};
		};
	};
	class O_A_Mortar_01_F: O_Mortar_01_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Mortar_01_F.jpg";
		_generalMacro="O_A_Mortar_01_F";
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
				"O_Mortar_01_weapon_F",
				"O_Mortar_01_support_F"
			};
		};
	};
	class Mortar_01_A_base_F: Mortar_01_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="Mortar_01_A_base_F";
		scope=0;
		displayname="$STR_A3_CfgVehicles_Mortar_01_A_base0";
		isUav=1;
		uavCameraGunnerPos="eye";
		uavCameraGunnerDir="look";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerInAction="Disabled";
				gunnerAction="Disabled";
				gunnerForceOptics=1;
			};
		};
		class AssembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"B_Mortar_01_A_weapon_F",
				"B_Mortar_01_support_F"
			};
			displayName="";
		};
	};
	class B_Mortar_01_A_F: Mortar_01_A_base_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		_generalMacro="B_Mortar_01_A_F";
		scope=2;
		DLC="Aegis";
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		forceInGarage=1;
	};
	class B_T_Mortar_01_A_F: B_Mortar_01_A_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Mortar_01_A_F.jpg";
		_generalMacro="B_T_Mortar_01_A_F";
		faction="BLU_T_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_Mortar_01_A_Weapon_grn_F",
				"B_Mortar_01_support_grn_F"
			};
		};
	};
	class B_A_Mortar_01_A_F: B_Mortar_01_A_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Mortar_01_A_F.jpg";
		_generalMacro="B_A_Mortar_01_A_F";
		faction="BLU_A_F";
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"B_Mortar_01_A_Weapon_khk_F",
				"B_Mortar_01_support_khk_F"
			};
		};
	};
	class O_Mortar_01_A_F: Mortar_01_A_base_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		_generalMacro="O_Mortar_01_A_F";
		scope=2;
		DLC="Aegis";
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F\Mortar_01\Data\Mortar_01_OPFOR_CO.paa"
		};
		class AssembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"O_Mortar_01_A_weapon_F",
				"O_Mortar_01_support_F"
			};
			displayName="";
		};
	};
	class O_T_Mortar_01_A_F: O_Mortar_01_A_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Mortar_01_A_F.jpg";
		_generalMacro="O_T_Mortar_01_A_F";
		faction="OPF_T_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Static_F_Aegis\Mortar_01\Data\Mortar_01_ghex_CO.paa"
		};
		class AssembleInfo
		{
			displayName="";
			assembleTo="";
			base="";
			primary=0;
			dissasembleTo[]=
			{
				"O_Mortar_01_A_Weapon_grn_F",
				"O_Mortar_01_support_grn_F"
			};
		};
	};
	class I_Mortar_01_A_F: Mortar_01_A_base_F
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
					"optics",
					0
				},
				
				{
					"optics_stabilization",
					0
				},
				
				{
					"legs_zeroing",
					0
				},
				
				{
					"uplegs_zeroing",
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
			verticalOffset=0.759;
			verticalOffsetWorld=0.037;
			init="''";
		};
		_generalMacro="I_Mortar_01_A_F";
		scope=2;
		DLC="Aegis";
		crew="I_UAV_AI";
		side=2;
		faction="IND_F";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		class AssembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"I_Mortar_01_A_weapon_F",
				"I_Mortar_01_support_F"
			};
			displayName="";
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614397";
};
