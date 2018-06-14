class CfgPatches
{
	class A3_Soft_F_Aegis_Van_02
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Orange_Van_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_ION_Van_02_transport_F",
			"B_ION_Van_02_vehicle_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Truck_F;
	class Van_02_base_F: Truck_F
	{
		class TextureSources
		{
			class Candy
			{
				displayName="Candy";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Van_02\Data\Van_body_candy_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_glass_CA.paa",
					"\A3\Soft_F_Aegis\Van_02\Data\Van_body_candy_CO.paa"
				};
				materials[]=
				{
					"\A3\Soft_F_Orange\Van_02\Data\Van_body.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel.rvmat",
					"",
					"\A3\Data_F\Lights\Car_Beacon_Orange_emit.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
	};
	class Van_02_transport_base_F: Van_02_base_F
	{
		class TextureSources
		{
			class Candy
			{
				displayName="Candy";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Van_02\Data\Van_body_candy_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_glass_CA.paa",
					"\A3\Soft_F_Aegis\Van_02\Data\Van_body_candy_CO.paa"
				};
				materials[]=
				{
					"\A3\Soft_F_Orange\Van_02\Data\Van_body.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel.rvmat",
					"",
					"\A3\Data_F\Lights\Car_Beacon_Orange_emit.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
	};
	class Van_02_vehicle_base_F: Van_02_base_F
	{
		textureList[]+=
		{
			"Candy",
			0
		};
		class TextureSources
		{
			class Candy
			{
				displayName="Candy";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\Van_02\Data\Van_body_candy_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_glass_CA.paa",
					"\A3\Soft_F_Aegis\Van_02\Data\Van_body_candy_CO.paa"
				};
				materials[]=
				{
					"\A3\Soft_F_Orange\Van_02\Data\Van_body.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel.rvmat",
					"",
					"\A3\Data_F\Lights\Car_Beacon_Orange_emit.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
		};
	};
	class B_ION_Van_02_transport_F: Van_02_transport_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Van_02_transport_F.jpg";
		_generalMacro="B_ION_Van_02_transport_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_ION_F";
		crew="B_ION_Soldier_F";
		typicalCargo[]=
		{
			"B_ION_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class B_ION_Van_02_vehicle_F: Van_02_vehicle_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Van_02_vehicle_F.jpg";
		_generalMacro="B_ION_Van_02_vehicle_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_ION_F";
		crew="B_ION_Soldier_F";
		typicalCargo[]=
		{
			"B_ION_Soldier_F"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
