class CfgPatches
{
	class A3_Structures_F_Aegis_Wrecks
	{
		addonRootClass="A3_Structures_F_Aegis";
		requiredAddons[]=
		{
			"A3_Structures_F_Aegis"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_Wreck_Plane_Transport_01_crashed_F"
		};
	};
};
class CfgVehicles
{
	class Wreck_base_F;
	class Land_Wreck_Plane_Transport_01_crashed_F: Wreck_base_F
	{
		author="$STR_A3_Night515";
		mapSize=30.040001;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Wreck_Plane_Transport_01_crashed_F.jpg";
		_generalMacro="Land_Wreck_Plane_Transport_01_crashed_F";
		scope=2;
		scopeCurator=2;
		displayName="C-192 Wreck (Crashed)";
		model="\A3\Structures_F_Aegis\Wrecks\Wreck_Plane_Transport_01_crashed_F.p3d";
		icon="iconObject_1x2";
		editorSubcategory="EdSubcat_Planes";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1526597989";
};
