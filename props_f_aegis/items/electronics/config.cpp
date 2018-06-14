class CfgPatches
{
	class A3_Props_F_Aegis_Items_Electronics
	{
		addonRootClass="A3_Props_F_Aegis";
		requiredAddons[]=
		{
			"A3_Props_F_Aegis_Items",
			"A3_Structures_F_EPC_Items_Electronics"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Device_assembled_F",
			"Land_Device_disassembled_F",
			"Land_RuggedRadio_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Strategic;
	class Land_Device_assembled_F: Strategic
	{
		sound="Device_assembled_loop";
	};
	class Land_Device_disassembled_F: Land_Device_assembled_F
	{
		sound="Device_disassembled_loop";
	};
	class Items_base_F;
	class Land_RuggedRadio_F: Items_base_F
	{
		author="$STR_A3_Night515";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.011;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_RuggedRadio_F.jpg";
		_generalMacro="Land_RuggedRadio_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		displayName="Rugged Radio";
		model="\A3\Characters_F\BLUFOR\Radio_B.p3d";
		icon="iconObject_1x3";
		editorSubcategory="EdSubcat_Electronics";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614329";
};
