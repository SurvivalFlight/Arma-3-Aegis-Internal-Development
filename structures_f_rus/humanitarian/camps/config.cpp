class CfgPatches
{
	class A3_Structures_F_Rus_Humanitarian_Camps
	{
		addonRootClass="A3_Structures_F_Rus";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Humanitarian_Camps"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_MedicalTent_01_rus_closed_F",
			"Land_MedicalTent_01_rus_inner_F",
			"Land_MedicalTent_01_rus_med_closed_F",
			"Land_MedicalTent_01_rus_open_F",
			"Land_MedicalTent_01_rus_outer_F"
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
	class Land_MedicalTent_01_rus_med_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_rus_med_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_rus_med_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="Medical Tent [Russia]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Rus\Humanitarian\Camps\Data\MedicalTent_01_rus_F_CO.paa"
		};
	};
	class Land_MedicalTent_01_rus_closed_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_rus_closed_F.jpg";
		_generalMacro="Land_MedicalTent_01_rus_closed_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Closed) [Russia]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Rus\Humanitarian\Camps\Data\MedicalTent_01_rus_F_CO.paa"
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
	class Land_MedicalTent_01_rus_open_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_rus_open_F.jpg";
		_generalMacro="Land_MedicalTent_01_rus_open_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Open) [Russia]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Rus\Humanitarian\Camps\Data\MedicalTent_01_rus_F_CO.paa"
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
	class Land_MedicalTent_01_rus_outer_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_rus_outer_F.jpg";
		_generalMacro="Land_MedicalTent_01_rus_outer_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Outer) [Russia]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Rus\Humanitarian\Camps\Data\MedicalTent_01_rus_F_CO.paa"
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
	class Land_MedicalTent_01_rus_inner_F: Land_MedicalTent_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_MedicalTent_01_rus_inner_F.jpg";
		_generalMacro="Land_MedicalTent_01_rus_inner_F";
		scope=2;
		scopeCurator=2;
		displayName="Tent (Shelter, Inner) [Russia]";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F_Rus\Humanitarian\Camps\Data\MedicalTent_01_rus_F_CO.paa"
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
	timepacked="1525890812";
};
