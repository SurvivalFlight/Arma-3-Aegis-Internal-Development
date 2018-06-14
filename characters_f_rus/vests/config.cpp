class CfgPatches
{
	class A3_Characters_F_Rus_Vests
	{
		addonRootClass="A3_Characters_F_Rus";
		requiredAddons[]=
		{
			"A3_Characters_F_Aegis_Vests"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Vest_V_PlateCarrierIA1_blk",
			"Vest_V_PlateCarrierIA2_blk",
			"Vest_V_PlateCarrierIAGL_blk",
			"Vest_V_PlateCarrierRU1_emr_F",
			"Vest_V_PlateCarrierRU1_vsr_alt_F",
			"Vest_V_PlateCarrierRU1_vsr_F",
			"Vest_V_PlateCarrierRU2_emr_F",
			"Vest_V_PlateCarrierRU2_vsr_alt_F",
			"Vest_V_PlateCarrierRU2_vsr_F",
			"Vest_V_PlateCarrierRUGL_emr_F",
			"Vest_V_PlateCarrierRUGL_vsr_alt_F",
			"Vest_V_PlateCarrierRUGL_vsr_F",
			"Vest_V_RebreatherRU"
		};
		weapons[]=
		{
			"V_PlateCarrierIA1_blk",
			"V_PlateCarrierIA2_blk",
			"V_PlateCarrierIAGL_blk",
			"V_PlateCarrierRU1_emr_F",
			"V_PlateCarrierRU1_vsr_F",
			"V_PlateCarrierRU1_vsr_alt_F",
			"V_PlateCarrierRU2_emr_F",
			"V_PlateCarrierRU2_vsr_F",
			"V_PlateCarrierRU2_vsr_alt_F",
			"V_PlateCarrierRUGL_emr_F",
			"V_PlateCarrierRUGL_vsr_F",
			"V_PlateCarrierRUGL_vsr_alt_F",
			"V_RebreatherRU"
		};
	};
};
class CfgWeapons
{
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA1_blk: V_PlateCarrierIA1_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIA1_blk";
		displayName="GA Carrier Lite (Black)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierIA1_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\equip_ia_vest01_blk_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRU1_emr_F: V_PlateCarrierIA1_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRU1_emr_F";
		displayName="GA Carrier Lite (EMR)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRU1_emr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRU1_emr_F_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRU1_vsr_F: V_PlateCarrierIA1_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRU1_vsr_F";
		displayName="GA Carrier Lite (VSR)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRU1_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRU1_vsr_F_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRU1_vsr_alt_F: V_PlateCarrierIA1_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRU1_vsr_alt_F";
		displayName="GA Carrier Lite (VSR Summer)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRU1_vsr_alt_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRU1_vsr_alt_F_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierIA2_dgtl;
	class V_PlateCarrierIA2_blk: V_PlateCarrierIA2_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIA2_blk";
		displayName="GA Carrier Rig (Black)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierIA2_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\equip_ia_vest01_blk_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRU2_emr_F: V_PlateCarrierIA2_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRU2_emr_F";
		displayName="GA Carrier Rig (EMR)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRU2_emr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRU2_emr_F_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRU2_vsr_F: V_PlateCarrierIA2_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRU2_vsr_F";
		displayName="GA Carrier Rig (VSR)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRU2_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRU2_vsr_F_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRU2_vsr_alt_F: V_PlateCarrierIA2_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRU2_vsr_alt_F";
		displayName="GA Carrier Rig (VSR Summer)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRU2_vsr_alt_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRU2_vsr_alt_F_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierIAGL_dgtl;
	class V_PlateCarrierIAGL_blk: V_PlateCarrierIAGL_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierIAGL_blk";
		displayName="GA Carrier GL Rig (Black)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierIAGL_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\equip_ia_vest01_blk_CO.paa",
			"\A3\Characters_F_Rus\Vests\Data\ga_carrier_gl_rig_blk_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRUGL_emr_F: V_PlateCarrierIAGL_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRUGL_emr_F";
		displayName="GA Carrier GL Rig (EMR)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRUGL_emr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRUGL_emr_F_01_CO.paa",
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRUGL_emr_F_02_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRUGL_vsr_F: V_PlateCarrierIAGL_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRUGL_vsr_F";
		displayName="GA Carrier GL Rig (VSR)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRUGL_vsr_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRUGL_vsr_F_01_CO.paa",
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRUGL_vsr_F_02_CO.paa"
		};
		DLC="Rus";
	};
	class V_PlateCarrierRUGL_vsr_alt_F: V_PlateCarrierIAGL_dgtl
	{
		author="$STR_A3_Night515";
		_generalMacro="V_PlateCarrierRUGL_vsr_alt_F";
		displayName="GA Carrier GL Rig (VSR Summer)";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_PlateCarrierRUGL_vsr_alt_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRUGL_vsr_alt_F_01_CO.paa",
			"\A3\Characters_F_Rus\Vests\Data\V_PlateCarrierRUGL_vsr_alt_F_02_CO.paa"
		};
		DLC="Rus";
	};
	class V_RebreatherB;
	class V_RebreatherRU: V_RebreatherB
	{
		author="$STR_A3_Night515";
		_generalMacro="V_RebreatherRU";
		displayName="Rebreather [Russia]";
		picture="\A3\Characters_F_Rus\Vests\Data\UI\icon_V_RebreatherRU_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Rus\Uniforms\Data\diver_equip_rus_CO.paa"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\diver_equip_CO.paa",
			"\A3\Characters_F\Common\Data\diver_equip_CO.paa",
			"\A3\Characters_F\Data\visors_CA.paa"
		};
		DLC="Rus";
	};
};
class CfgVehicles
{
	class Vest_Base_F;
	class Vest_V_PlateCarrierIA1_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier Lite (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIA1_blk
			{
				name="V_PlateCarrierIA1_blk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierRU1_emr_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier Lite (EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierRU1_emr_F
			{
				name="V_PlateCarrierRU1_emr_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIA2_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier Rig (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIA2_blk
			{
				name="V_PlateCarrierIA2_blk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierRU2_emr_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier Rig (EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierRU2_emr_F
			{
				name="V_PlateCarrierRU2_emr_F";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierIAGL_blk: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier GL Rig (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierIAGL_blk
			{
				name="V_PlateCarrierIAGL_blk";
				count=1;
			};
		};
	};
	class Vest_V_PlateCarrierRUGL_emr_F: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="GA Carrier GL Rig (EMR)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_PlateCarrierRUGL_emr_F
			{
				name="V_PlateCarrierRUGL_emr_F";
				count=1;
			};
		};
	};
	class Vest_V_RebreatherRU: Vest_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Rebreather [Russia]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Vests";
		vehicleClass="ItemsVests";
		class TransportItems
		{
			class _xx_V_RebreatherRU
			{
				name="V_RebreatherRU";
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
