class CfgPatches
{
	class A3_Structures_F_Aegis_Military_Flags
	{
		addonRootClass="A3_Structures_F_Aegis";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Military"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Flag_China_F",
			"Flag_gr_F",
			"Flag_grArmy_F",
			"Flag_grChurch_F",
			"Flag_grUCPT_F",
			"Flag_Iran_F",
			"Flag_IranArmy_F",
			"Flag_Paramilitary_F",
			"Flag_USArmy_F"
		};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrier_Asym;
	class Flag_gr_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_gr_F.jpg";
		_generalMacro="Flag_gr_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Greece)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_gr_CO.paa'";
		};
	};
	class Flag_grArmy_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_grArmy_F.jpg";
		_generalMacro="Flag_grArmy_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (HAF)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_grArmy_CO.paa'";
		};
	};
	class Flag_grChurch_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_grChurch_F.jpg";
		_generalMacro="Flag_grChurch_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Eastern Orthodox)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_grChurch_CO.paa'";
		};
	};
	class Flag_grUCPT_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_grUCPT_F.jpg";
		_generalMacro="Flag_grUCPT_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (UCPT)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_grUCPT_CO.paa'";
		};
	};
	class Flag_Iran_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_Iran_F.jpg";
		_generalMacro="Flag_Iran_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Iran)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_Iran_CO.paa'";
		};
	};
	class Flag_IranArmy_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_IranArmy_F.jpg";
		_generalMacro="Flag_IranArmy_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (IAF)";
		DLC="Aegis";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_IranArmy_CO.paa'";
		};
	};
	class Flag_USArmy_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_USArmy_F.jpg";
		_generalMacro="Flag_USArmy_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (US Army)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_USArmy_CO.paa'";
		};
	};
	class Flag_Paramilitary_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_Paramilitary_F.jpg";
		_generalMacro="Flag_Paramilitary_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Paramilitary)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_Paramilitary_CO.paa'";
		};
	};
	class Flag_China_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_China_F.jpg";
		_generalMacro="Flag_China_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (China)";
		DLC="Aegis";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Aegis\Flags\Flag_China_CO.paa'";
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526597989";
};
