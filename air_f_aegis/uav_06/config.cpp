class CfgPatches
{
	class A3_Air_F_Aegis_UAV_06
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Orange_UAV_06"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_UAV_06_F",
			"B_A_UAV_06_medical_F",
			"B_T_UAV_06_F",
			"B_T_UAV_06_medical_F",
			"Box_B_A_UAV_06_F",
			"Box_B_A_UAV_06_medical_F",
			"Box_B_T_UAV_06_F",
			"Box_B_T_UAV_06_medical_F",
			"Box_O_T_UAV_06_F",
			"Box_O_T_UAV_06_medical_F",
			"O_T_UAV_06_F",
			"O_T_UAV_06_medical_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_UAV_06_F;
	class B_T_UAV_06_F: B_UAV_06_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_06_F.jpg";
		_generalMacro="B_T_UAV_06_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI_F";
		typicalCargo[]=
		{
			"B_UAV_AI_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_UAV_06_backpack_grn_F"
			};
		};
	};
	class B_A_UAV_06_F: B_UAV_06_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_F.jpg";
		_generalMacro="B_A_UAV_06_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI_F";
		typicalCargo[]=
		{
			"B_UAV_AI_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_A_UAV_06_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_UAV_06_backpack_khk_F"
			};
		};
	};
	class O_UAV_06_F;
	class O_T_UAV_06_F: O_UAV_06_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_UAV_06_F.jpg";
		_generalMacro="O_UAV_06_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\O_T_UAV_06_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"O_UAV_06_backpack_grn_F"
			};
		};
	};
	class B_UAV_06_medical_F;
	class B_T_UAV_06_medical_F: B_UAV_06_medical_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_06_medical_F.jpg";
		_generalMacro="B_T_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI_F";
		typicalCargo[]=
		{
			"B_UAV_AI_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa",
			"\A3\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_UAV_06_medical_backpack_grn_F"
			};
		};
	};
	class B_A_UAV_06_medical_F: B_UAV_06_medical_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_medical_F.jpg";
		_generalMacro="B_A_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI_F";
		typicalCargo[]=
		{
			"B_UAV_AI_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_A_UAV_06_medical_CO.paa",
			"\A3\Air_F_Aegis\UAV_06\Data\B_A_UAV_06_medical_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_UAV_06_medical_backpack_khk_F"
			};
		};
	};
	class O_UAV_06_medical_F;
	class O_T_UAV_06_medical_F: O_UAV_06_medical_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_UAV_06_medical_F.jpg";
		_generalMacro="O_T_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_T_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\O_T_UAV_06_medical_CO.paa",
			"\A3\Air_F_Aegis\UAV_06\Data\O_T_UAV_06_medical_CO.paa"
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"O_UAV_06_medical_backpack_grn_F"
			};
		};
	};
	class Box_UAV_06_base_F;
	class Box_B_T_UAV_06_F: Box_UAV_06_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_B_T_UAV_06_F.jpg";
		_generalMacro="Box_B_T_UAV_06_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case [NATO Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_CO.paa"
		};
	};
	class Box_B_A_UAV_06_F: Box_UAV_06_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_B_A_UAV_06_F.jpg";
		_generalMacro="Box_B_A_UAV_06_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case [NATO British]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_A_UAV_06_CO.paa"
		};
	};
	class Box_O_T_UAV_06_F: Box_UAV_06_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_O_T_UAV_06_F.jpg";
		_generalMacro="Box_O_T_UAV_06_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case [CSAT Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\O_T_UAV_06_CO.paa"
		};
	};
	class Box_UAV_06_medical_base_F;
	class Box_B_T_UAV_06_medical_F: Box_UAV_06_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_B_T_UAV_06_medical_F.jpg";
		_generalMacro="Box_B_T_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case (Medical) [NATO Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa",
			"\A3\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa"
		};
	};
	class Box_B_A_UAV_06_medical_F: Box_UAV_06_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_B_A_UAV_06_medical_F.jpg";
		_generalMacro="Box_B_A_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case (Medical) [NATO British]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\B_A_UAV_06_medical_CO.paa",
			"\A3\Air_F_Aegis\UAV_06\Data\B_A_UAV_06_medical_CO.paa"
		};
	};
	class Box_O_T_UAV_06_medical_F: Box_UAV_06_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_O_T_UAV_06_medical_F.jpg";
		_generalMacro="Box_O_T_UAV_06_medical_F";
		scope=2;
		scopeCurator=2;
		displayName="AL-6 Case (Medical) [CSAT Pacific]";
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Aegis\UAV_06\Data\O_T_UAV_06_medical_CO.paa",
			"\A3\Air_F_Aegis\UAV_06\Data\O_T_UAV_06_medical_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
