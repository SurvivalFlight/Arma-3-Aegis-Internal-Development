class CfgPatches
{
	class A3_Characters_F_Rus_Uniforms
	{
		addonRootClass="A3_Characters_F_Rus";
		requiredAddons[]=
		{
			"A3_Characters_F_Aegis_Uniforms"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Item_U_C_SlavicBody",
			"Item_U_I_RU_Diver_F",
			"Item_U_I_RU_FullGhillie_ard",
			"Item_U_I_RU_FullGhillie_lsh",
			"Item_U_I_RU_FullGhillie_sard",
			"Item_U_I_RU_Helipilot_F",
			"Item_U_I_RU_Officer_F",
			"Item_U_I_RU_Pilot_F",
			"Item_U_I_RU_Sniper_F",
			"Item_U_I_RU_Soldier_2_alt_F",
			"Item_U_I_RU_Soldier_2_F",
			"Item_U_I_RU_Soldier_2_urb_F",
			"Item_U_I_RU_Soldier_alt_F",
			"Item_U_I_RU_Soldier_F",
			"Item_U_I_RU_Soldier_urb_F"
		};
		weapons[]=
		{
			"U_C_SlavicBody",
			"U_I_RU_Diver_F",
			"U_I_RU_FullGhillie_ard",
			"U_I_RU_FullGhillie_lsh",
			"U_I_RU_FullGhillie_sard",
			"U_I_RU_Helipilot_F",
			"U_I_RU_Officer_F",
			"U_I_RU_Pilot_F",
			"U_I_RU_Sniper_F",
			"U_I_RU_Soldier_2_alt_F",
			"U_I_RU_Soldier_2_F",
			"U_I_RU_Soldier_2_urb_F",
			"U_I_RU_Soldier_alt_F",
			"U_I_RU_Soldier_F",
			"U_I_RU_Soldier_urb_F"
		};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Item_U_I_RU_Soldier_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues [Russia] (EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Soldier_F
			{
				name="U_I_RU_Soldier_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Soldier_alt_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues [Russia] (Desert EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Soldier_alt_F
			{
				name="U_I_RU_Soldier_alt_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Soldier_urb_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues [Russia] (Urban EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Soldier_urb_F
			{
				name="U_I_RU_Soldier_urb_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Soldier_2_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues [Russia] (EMR, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Soldier_2_F
			{
				name="U_I_RU_Soldier_2_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Soldier_2_alt_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues [Russia] (Desert EMR, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Soldier_2_alt_F
			{
				name="U_I_RU_Soldier_2_alt_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Soldier_2_urb_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues [Russia] (Urban EMR, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Soldier_2_urb_F
			{
				name="U_I_RU_Soldier_2_urb_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Officer_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Officer Fatigues [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Officer_F
			{
				name="U_I_RU_Officer_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Sniper_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ghillie Suit [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Sniper_F
			{
				name="U_I_RU_Sniper_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Helipilot_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Heli Pilot Coveralls [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Helipilot_F
			{
				name="U_I_RU_Helipilot_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Pilot_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Pilot Coveralls [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Pilot_F
			{
				name="U_I_RU_Pilot_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_Diver_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Wetsuit [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_Diver_F
			{
				name="U_I_RU_Diver_F";
				count=1;
			};
		};
	};
	class Item_U_I_RU_FullGhillie_ard: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Full Ghillie (Arid) [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_FullGhillie_ard
			{
				name="U_I_RU_FullGhillie_ard";
				count=1;
			};
		};
	};
	class Item_U_I_RU_FullGhillie_lsh: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Full Ghillie (Lush) [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_FullGhillie_lsh
			{
				name="U_I_RU_FullGhillie_lsh";
				count=1;
			};
		};
	};
	class Item_U_I_RU_FullGhillie_sard: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Full Ghillie (Semi-Arid) [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_RU_FullGhillie_sard
			{
				name="U_I_RU_FullGhillie_sard";
				count=1;
			};
		};
	};
	class Item_U_C_SlavicBody: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Slavic Clothes";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_SlavicBody
			{
				name="U_C_SlavicBody";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class U_C_SlavicBody: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Slavic Clothes";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_C_SlavicBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\C_slavic_01_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_squatter";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_I_RU_Soldier_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues [Russia] (EMR)";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Soldier_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Soldier_F_emr_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Soldier_alt_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues [Russia] (Ratnik)";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Soldier_alt_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Soldier_F_emr_alt_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Soldier_alt_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Soldier_urb_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues [Russia] (Urban)";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Soldier_urb_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Soldier_F_emr_urb_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Soldier_urb_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Soldier_2_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues [Russia] (EMR, Rolled-up)";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Soldier_2_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Soldier_F_emr_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Soldier_Lite_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Soldier_2_alt_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues [Russia] (Ratnik, Rolled-up)";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Soldier_2_alt_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Soldier_F_emr_alt_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Soldier_2_alt_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Soldier_2_urb_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues [Russia] (Urban, Rolled-up)";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Soldier_2_urb_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Soldier_F_emr_urb_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Soldier_2_urb_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Officer_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Officer Fatigues [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Officer_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Officer_F_emr_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Officer_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Sniper_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Ghillie Suit [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Sniper_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_I_RU_Soldier_F_emr_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Sniper_F";
			containerClass="Supply60";
			mass=60;
		};
	};
	class U_I_RU_Helipilot_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Heli Pilot Coveralls [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Helipilot_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\coveralls_rus_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Helipilot_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_RU_Pilot_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Pilot Coveralls [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Pilot_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\pilot_suit_rus_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Pilot_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	class U_I_RU_Diver_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Wetsuit [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_Diver_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\diver_suit_rus_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Diver_F";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
	class U_I_RU_FullGhillie_ard: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Full Ghillie (Arid) [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_FullGhillie_ard_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\ghillie_coverall_rus_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_ghillie_ard_F";
			containerClass="Supply60";
			mass=120;
		};
	};
	class U_I_RU_FullGhillie_lsh: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Full Ghillie (Lush) [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_FullGhillie_lsh_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\ghillie_coverall_rus_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_ghillie_lsh_F";
			containerClass="Supply60";
			mass=120;
		};
	};
	class U_I_RU_FullGhillie_sard: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Full Ghillie (Semi-Arid) [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_I_RU_FullGhillie_sard_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\ghillie_coverall_rus_CO.paa"
		};
		DLC="Rus";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_ghillie_sard_F";
			containerClass="Supply60";
			mass=120;
		};
	};
	class U_Tank_olive_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="U_Tank_olive_F";
		scope=2;
		displayName="Tanker Coveralls [Russia]";
		picture="\A3\Characters_F_Rus\Uniforms\Data\UI\icon_U_Tank_olive_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\U_Tank_olive_F_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_RU_Crew_F";
			containerClass="Supply30";
			mass=30;
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528893591";
};
