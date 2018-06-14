class CfgPatches
{
	class A3_Structures_F_Aegis_Humanitarian_Camps
	{
		addonRootClass="A3_Structures_F_Aegis";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Humanitarian",
			"A3_Structures_F_Orange_Humanitarian_Camps"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_MedicalTent_01_MTP_closed_F",
			"Land_MedicalTent_01_MTP_inner_F",
			"Land_MedicalTent_01_MTP_med_closed_F",
			"Land_MedicalTent_01_MTP_open_F",
			"Land_MedicalTent_01_MTP_outer_F",
			"Land_MedicalTent_01_brownhex_closed_F",
			"Land_MedicalTent_01_brownhex_inner_F",
			"Land_MedicalTent_01_brownhex_med_closed_F",
			"Land_MedicalTent_01_brownhex_open_F",
			"Land_MedicalTent_01_brownhex_outer_F",
			"Land_MedicalTent_01_digital_closed_F",
			"Land_MedicalTent_01_digital_inner_F",
			"Land_MedicalTent_01_digital_med_closed_F",
			"Land_MedicalTent_01_digital_open_F",
			"Land_MedicalTent_01_digital_outer_F",
			"Land_MedicalTent_01_greenhex_closed_F",
			"Land_MedicalTent_01_greenhex_inner_F",
			"Land_MedicalTent_01_greenhex_med_closed_F",
			"Land_MedicalTent_01_greenhex_open_F",
			"Land_MedicalTent_01_greenhex_outer_F",
			"Land_MedicalTent_01_tropic_closed_F",
			"Land_MedicalTent_01_tropic_inner_F",
			"Land_MedicalTent_01_tropic_med_closed_F",
			"Land_MedicalTent_01_tropic_open_F",
			"Land_MedicalTent_01_tropic_outer_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Camping_base_F;
	class Land_MedicalTent_01_base_F: Camping_base_F
	{
		class AnimationSources
		{
			class Door_Hide;
			class InnerTent_Hide;
			class OuterTent_Hide;
			class MedSign_Hide;
			class SolarPanel1_Hide;
			class SolarPanel2_Hide;
		};
	};
	class Land_MedicalTent_01_tropic_med_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_tropic_med_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_tropic_med_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_MedicalTent_01_tropic_closed_F0";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"
		};
	};
	class Land_MedicalTent_01_MTP_med_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_MTP_med_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_MTP_med_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_MedicalTent_01_MTP_closed_F0";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa"
		};
	};
	class Land_MedicalTent_01_greenhex_med_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_greenhex_med_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_greenhex_med_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_MedicalTent_01_greenhex_closed_F0";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa"
		};
	};
	class Land_MedicalTent_01_brownhex_med_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_brownhex_med_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_brownhex_med_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_MedicalTent_01_brownhex_closed_F0";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa"
		};
	};
	class Land_MedicalTent_01_digital_med_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_digital_med_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_digital_med_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_Land_MedicalTent_01_digital_closed_F0";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"
		};
	};
	class Land_MedicalTent_01_tropic_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_tropic_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_tropic_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Closed) [NATO Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_MTP_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_MTP_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_MTP_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Closed) [NATO]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_greenhex_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_greenhex_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_greenhex_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Closed) [CSAT Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_brownhex_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_brownhex_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_brownhex_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Closed) [CSAT]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_digital_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_digital_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_digital_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Closed) [AAF]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_tropic_open_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_tropic_open_F.jpg";
		_generalMacro="Land_MedicalTent_01_tropic_open_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Open) [NATO Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_MTP_open_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_MTP_open_F.jpg";
		_generalMacro="Land_MedicalTent_01_MTP_open_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Open) [NATO]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_greenhex_open_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_greenhex_open_F.jpg";
		_generalMacro="Land_MedicalTent_01_greenhex_open_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Open) [CSAT Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_brownhex_open_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_brownhex_open_F.jpg";
		_generalMacro="Land_MedicalTent_01_brownhex_open_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Open) [CSAT]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_digital_open_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_digital_open_F.jpg";
		_generalMacro="Land_MedicalTent_01_digital_open_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Open) [AAF]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_tropic_outer_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_tropic_outer_F.jpg";
		_generalMacro="Land_MedicalTent_01_tropic_outer_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Outer) [NATO Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_MTP_outer_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_MTP_outer_F.jpg";
		_generalMacro="Land_MedicalTent_01_MTP_outer_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Outer) [NATO]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_greenhex_outer_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_greenhex_outer_F.jpg";
		_generalMacro="Land_MedicalTent_01_greenhex_outer_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Outer) [CSAT Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_brownhex_outer_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_brownhex_outer_F.jpg";
		_generalMacro="Land_MedicalTent_01_brownhex_outer_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Outer) [CSAT]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_digital_outer_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_digital_outer_F.jpg";
		_generalMacro="Land_MedicalTent_01_digital_outer_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Outer) [AAF]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_tropic_inner_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_tropic_inner_F.jpg";
		_generalMacro="Land_MedicalTent_01_tropic_inner_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Inner) [NATO Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_tropic_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class OuterTent_Hide: OuterTent_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_MTP_inner_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_MTP_inner_F.jpg";
		_generalMacro="Land_MedicalTent_01_MTP_inner_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Inner) [NATO]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_MTP_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class OuterTent_Hide: OuterTent_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_greenhex_inner_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_greenhex_inner_F.jpg";
		_generalMacro="Land_MedicalTent_01_greenhex_inner_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Inner) [CSAT Pacific]";
		editorCategory="EdCat_Structures_Tanoa";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_greenhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class OuterTent_Hide: OuterTent_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_brownhex_inner_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_brownhex_inner_F.jpg";
		_generalMacro="Land_MedicalTent_01_brownhex_inner_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Inner) [CSAT]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_brownhex_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class OuterTent_Hide: OuterTent_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
	class Land_MedicalTent_01_digital_inner_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_digital_inner_F.jpg";
		_generalMacro="Land_MedicalTent_01_digital_inner_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Inner) [AAF]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01_digital_F_CO.paa"
		};
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase=1;
			};
			class OuterTent_Hide: OuterTent_Hide
			{
				initPhase=1;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase=1;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
			class SolarPanel2_Hide: SolarPanel1_Hide
			{
				initPhase=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526597989";
};
