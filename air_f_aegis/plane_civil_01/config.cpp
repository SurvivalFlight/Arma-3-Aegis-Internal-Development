class CfgPatches
{
	class A3_Air_F_Aegis_Plane_Civil_01
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Exp_Plane_Civil_01"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class Plane_Civil_01_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class BlackWhite_1
			{
				displayName="Black-White";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Plane_Civil_01\Data\BTT_ext_01_Police_CO.paa",
					"A3\Air_F_Aegis\Plane_Civil_01\Data\BTT_ext_02_Police_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_01_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_02_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class BlackWhite_2
			{
				displayName="Black-White (Tan Interior)";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Aegis\Plane_Civil_01\Data\BTT_ext_01_Police_CO.paa",
					"A3\Air_F_Aegis\Plane_Civil_01\Data\BTT_ext_02_Police_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_01_tan_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_02_tan_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class White_1
			{
				displayName="White";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_01_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_02_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_01_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_02_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class White_2
			{
				displayName="White (Tan Interior)";
				author="$STR_A3_Night515";
				textures[]=
				{
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_01_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_ext_02_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_01_tan_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\BTT_int_02_tan_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
		textureList[]+=
		{
			"BlackWhite_1",
			1,
			"BlackWhite_2",
			1,
			"White_1",
			1,
			"White_2",
			1
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
