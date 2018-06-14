class CfgPatches
{
	class A3_Soft_F_Aegis_UGV_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Drones_F_Soft_F_Gamma_UGV_01",
			"A3_Soft_F_Exp_UGV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_UGV_01_F",
			"B_A_UGV_01_rcws_F",
			"B_T_UGV_01_F",
			"B_T_UGV_01_rcws_F",
			"B_UGV_01_rcws_F",
			"I_UGV_01_rcws_F",
			"O_T_UGV_01_rcws_ghex_F",
			"O_UGV_01_rcws_F"
		};
		weapons[]={};
	};
};
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class UGV_01_base_F: Car_F
	{
		class TextureSources
		{
			class Olive
			{
				DisplayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_olive_CO.paa",
					"\A3\Soft_F_Aegis\UGV_01\Data\UGV_01_int_olive_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
		};
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"64Rnd_40mm_G_belt"
				};
				class ViewOptics: RCWSOptics
				{
					directionStabilized=0;
				};
			};
			class CargoTurret_01;
		};
	};
	class B_UGV_01_F;
	class B_T_UGV_01_F: B_UGV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UGV_01_F.jpg";
		_generalMacro="B_T_UGV_01_F";
		displayName="$STR_A3_CfgVehicles_UGV_01_Base0";
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_T_Soldier_F"
		};
		textureList[]=
		{
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_olive_CO.paa",
			"\A3\Soft_F_Aegis\UGV_01\Data\UGV_01_int_olive_CO.paa"
		};
	};
	class B_A_UGV_01_F: B_UGV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_F.jpg";
		_generalMacro="B_A_UGV_01_F";
		displayName="$STR_A3_CfgVehicles_UGV_01_Base0";
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa"
		};
	};
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_CO.paa"
		};
	};
	class B_T_UGV_01_rcws_F: B_UGV_01_rcws_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UGV_01_rcws_F.jpg";
		_generalMacro="B_T_UGV_01_rcws_F";
		displayName="$STR_A3_CfgVehicles_UGV_01_RCWS_Base0";
		DLC="Aegis";
		side=1;
		faction="BLU_T_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_T_Soldier_F"
		};
		textureList[]=
		{
			"Olive",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_olive_CO.paa",
			"\A3\Soft_F_Aegis\UGV_01\Data\UGV_01_int_olive_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
		};
	};
	class B_A_UGV_01_rcws_F: B_UGV_01_rcws_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_01_rcws_F.jpg";
		_generalMacro="B_A_UGV_01_rcws_F";
		displayName="$STR_A3_CfgVehicles_UGV_01_RCWS_Base0";
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_ext_CO.paa",
			"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
			"\A3\Data_F_Aegis\Vehicles\Turret_CO.paa"
		};
	};
	class O_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"64Rnd_40mm_G_belt"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
	class O_T_UGV_01_rcws_ghex_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"64Rnd_40mm_G_belt"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow",
					"64Rnd_40mm_G_belt"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
