class CfgPatches
{
	class A3_Characters_F_Rus_Headgear
	{
		addonRootClass="A3_Characters_F_Rus";
		requiredAddons[]=
		{
			"A3_Characters_F_Aegis_Headgear"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Headgear_H_Beret_rus_F",
			"Headgear_H_Booniehat_emr_alt_F",
			"Headgear_H_Booniehat_emr_F",
			"Headgear_H_CrewHelmetHeli_R",
			"Headgear_H_HelmetIA_Black",
			"Headgear_H_HelmetIA_Khaki",
			"Headgear_H_HelmetSpecIA_Black",
			"Headgear_H_HelmetSpecIA_Green",
			"Headgear_H_HelmetSpecIA_Sand",
			"Headgear_H_MilCap_emr_alt_F",
			"Headgear_H_MilCap_emr_F",
			"Headgear_H_PilotHelmetFighter_R",
			"Headgear_H_PilotHelmetHeli_R",
			"Headgear_H_Tank_rus_F",
			"Headgear_H_Ushanka_blk",
			"Headgear_H_Ushanka_brn",
			"Headgear_H_Ushanka_grn"
		};
		weapons[]=
		{
			"H_Beret_rus_F",
			"H_Booniehat_emr_alt_F",
			"H_Booniehat_emr_F",
			"H_CrewHelmetHeli_R",
			"H_HelmetIA_Black",
			"H_HelmetIA_Khaki",
			"H_HelmetSpecIA_Black",
			"H_HelmetSpecIA_Green",
			"H_HelmetSpecIA_Sand",
			"H_MilCap_emr_alt_F",
			"H_MilCap_emr_F",
			"H_PilotHelmetFighter_R",
			"H_PilotHelmetHeli_R",
			"H_Tank_rus_F",
			"H_Ushanka_blk",
			"H_Ushanka_brn",
			"H_Ushanka_grn"
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_HelmetIA: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
		};
	};
	class H_HelmetIA_Black: H_HelmetIA
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetIA_Black";
		displayName="Modular Helmet (Black)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_HelmetIA_Black_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\headgear_helmet_canvas_Black_CO.paa"
		};
	};
	class H_HelmetIA_Khaki: H_HelmetIA
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetIA_Khaki";
		displayName="Modular Helmet (Khaki)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_HelmetIA_Khaki_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\headgear_helmet_canvas_Khaki_CO.paa"
		};
	};
	class H_HelmetSpecIA_Green: H_HelmetIA
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecIA_Green";
		displayName="Special Modular Helmet (Green)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_HelmetSpecIA_Green_CA.paa";
		model="\A3\Characters_F_Rus\Headgear\headgear_helmet_spec.p3d";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\headgear_helmet_spec_CO.paa"
		};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: ItemInfo
		{
			mass=50;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Rus\Headgear\headgear_helmet_spec.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetSpecIA_Black: H_HelmetSpecIA_Green
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecIA_Black";
		displayName="Special Modular Helmet (Black)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_HelmetSpecIA_Black_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\headgear_helmet_spec_Black_CO.paa"
		};
	};
	class H_HelmetSpecIA_Sand: H_HelmetSpecIA_Green
	{
		author="$STR_A3_Night515";
		_generalMacro="H_HelmetSpecIA_Sand";
		displayName="Special Modular Helmet (Sand)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_HelmetSpecIA_Sand_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\headgear_helmet_spec_Sand_CO.paa"
		};
	};
	class H_MilCap_oucamo;
	class H_MilCap_emr_F: H_MilCap_oucamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_emr_F";
		displayName="Military Cap (EMR)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_MilCap_emr_F_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\H_MilCap_emr_F_CO.paa"
		};
	};
	class H_MilCap_emr_alt_F: H_MilCap_oucamo
	{
		author="$STR_A3_Night515";
		_generalMacro="H_MilCap_emr_alt_F";
		displayName="Military Cap (Ratnik)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_MilCap_emr_alt_F_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\H_MilCap_emr_alt_F_CO.paa"
		};
	};
	class H_Booniehat_khk;
	class H_Booniehat_emr_F: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_emr_F";
		displayName="Booniehat (EMR)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_Booniehat_emr_F_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\H_Booniehat_emr_F_CO.paa"
		};
	};
	class H_Booniehat_emr_alt_F: H_Booniehat_khk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Booniehat_emr_alt_F";
		displayName="Booniehat (Ratnik)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_Booniehat_emr_alt_F_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\H_Booniehat_emr_alt_F_CO.paa"
		};
	};
	class H_Beret_blk;
	class H_Beret_rus_F: H_Beret_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Beret_rus_F";
		displayName="Beret [Russia]";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_Beret_rus_F_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\H_Beret_rus_F_CO.paa"
		};
	};
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	class H_Ushanka_blk: HelmetBase
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Ushanka_blk";
		scope=2;
		displayName="Ushanka (Black)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_Ushanka_blk_CA.paa";
		model="\A3\Characters_F_Rus\Headgear\C_Ushanka.p3d";
		DLC="Rus";
		descriptionShort="$STR_A3_SP_NoArmor";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\C_Ushanka_blk_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=8;
			uniformModel="\A3\Characters_F_Rus\Headgear\C_Ushanka.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
		};
	};
	class H_Ushanka_brn: H_Ushanka_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Ushanka_brn";
		displayName="Ushanka (Brown)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_Ushanka_brn_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\C_Ushanka_brn_CO.paa"
		};
	};
	class H_Ushanka_grn: H_Ushanka_blk
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Ushanka_grn";
		displayName="Ushanka (Green)";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_Ushanka_grn_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\C_Ushanka_grn_CO.paa"
		};
	};
	class H_Tank_black_F;
	class H_Tank_rus_F: H_Tank_black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="H_Tank_rus_F";
		displayName="Crew Helmet [Russia]";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_Tank_rus_F_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\H_Tank_rus_F_CO.paa"
		};
	};
	class H_PilotHelmetFighter_B;
	class H_PilotHelmetFighter_R: H_PilotHelmetFighter_B
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PilotHelmetFighter_R";
		displayName="Pilot Helmet [Russia]";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_PilotHelmetFighter_R_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\pilot_helmet_rus_CO.paa"
		};
	};
	class H_CrewHelmetHeli_B;
	class H_CrewHelmetHeli_R: H_CrewHelmetHeli_B
	{
		author="$STR_A3_Night515";
		_generalMacro="H_CrewHelmetHeli_R";
		displayName="Heli Crew Helmet [Russia]";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_CrewHelmetHeli_R_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\helmet_heli_rus_CO.paa"
		};
	};
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		class ItemInfo;
	};
	class H_PilotHelmetHeli_R: H_PilotHelmetHeli_B
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PilotHelmetHeli_R";
		displayName="Heli Pilot Helmet [Russia]";
		picture="\A3\Characters_F_Rus\Headgear\Data\UI\icon_H_PilotHelmetHeli_R_CA.paa";
		DLC="Rus";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Headgear\Data\helmet_heli_rus_CO.paa"
		};
	};
	class H_PilotHelmetHeli_R_visor_up: H_PilotHelmetHeli_R
	{
		author="$STR_A3_Night515";
		_generalMacro="H_PilotHelmetHeli_R_visor_up";
		displayName="Heli Pilot Helmet (Visor-up) [Russia]";
		model="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		DLC="Aegis";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
};
class CfgVehicles
{
	class Headgear_Base_F;
	class Headgear_H_HelmetIA_Black: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetIA_Black
			{
				name="H_HelmetIA_Black";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetIA_Khaki: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Modular Helmet (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_HelmetIA_Khaki
			{
				name="H_HelmetIA_Khaki";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_emr_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Military Cap (EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_emr_F
			{
				name="H_MilCap_emr_F";
				count=1;
			};
		};
	};
	class Headgear_H_MilCap_emr_alt_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Military Cap (Ratnik)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_MilCap_emr_alt_F
			{
				name="H_MilCap_emr_alt_F";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_emr_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat (EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_emr_F
			{
				name="H_Booniehat_emr_F";
				count=1;
			};
		};
	};
	class Headgear_H_Booniehat_emr_alt_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Booniehat (Ratnik)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Booniehat_emr_alt_F
			{
				name="H_Booniehat_emr_alt_F";
				count=1;
			};
		};
	};
	class Headgear_H_Beret_rus_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Beret [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Beret_rus_F
			{
				name="H_Beret_rus_F";
				count=1;
			};
		};
	};
	class Headgear_H_Ushanka_blk: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ushanka (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Ushanka_blk
			{
				name="H_Ushanka_blk";
				count=1;
			};
		};
	};
	class Headgear_H_Ushanka_brn: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ushanka (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Ushanka_brn
			{
				name="H_Ushanka_brn";
				count=1;
			};
		};
	};
	class Headgear_H_Ushanka_grn: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ushanka (Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Hats";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Ushanka_grn
			{
				name="H_Ushanka_grn";
				count=1;
			};
		};
	};
	class Headgear_H_Tank_rus_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Crew Helmet [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_Tank_rus_F
			{
				name="H_Tank_rus_F";
				count=1;
			};
		};
	};
	class Headgear_H_PilotHelmetFighter_R: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Pilot Helmet [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_PilotHelmetFighter_R
			{
				name="H_PilotHelmetFighter_R";
				count=1;
			};
		};
	};
	class Headgear_H_CrewHelmetHeli_R: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Heli Crew Helmet [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_CrewHelmetHeli_R
			{
				name="H_CrewHelmetHeli_R";
				count=1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_R: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Heli Pilot Helmet [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_PilotHelmetHeli_R
			{
				name="H_PilotHelmetHeli_R";
				count=1;
			};
		};
	};
	class Headgear_H_PilotHelmetHeli_R_visor_up: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Heli Pilot Helmet (Visor-up) [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		model="\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class _xx_H_PilotHelmetHeli_R_visor_up
			{
				name="H_PilotHelmetHeli_R_visor_up";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528893591";
};
