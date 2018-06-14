class CfgPatches
{
	class A3_Structures_F_Rus_Military_Flags
	{
		addonRootClass="A3_Structures_F_Rus";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis_Military_Flags"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Flag_Russia_F"
		};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class Flag_Russia_F: FlagCarrier
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\Flag_Russia_F.jpg";
		_generalMacro="Flag_Russia_F";
		scope=2;
		scopeCurator=2;
		displayName="Flag (Russia)";
		DLC="Rus";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A3\Data_F_Rus\Flags\Flag_Russia_CO.paa'";
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890812";
};
