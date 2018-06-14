class CfgPatches
{
	class A3_Soft_F_Aegis_Truck_01
	{
		addonRootClass="A3_Soft_F_Aegis";
		requiredAddons[]=
		{
			"A3_Soft_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_Truck_01_ammo_F",
			"B_A_Truck_01_box_F",
			"B_A_Truck_01_covered_F",
			"B_A_Truck_01_fuel_F",
			"B_A_Truck_01_medical_F",
			"B_A_Truck_01_mover_F",
			"B_A_Truck_01_Repair_F",
			"B_A_Truck_01_transport_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_Truck_01_mover_F;
	class B_T_Truck_01_mover_F: B_Truck_01_mover_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_mprimer_olive_CO.paa"
		};
	};
	class B_A_Truck_01_mover_F: B_Truck_01_mover_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_mover_F.jpg";
		_generalMacro="B_A_Truck_01_mover_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_mprimer_CO.paa"
		};
	};
	class B_Truck_01_ammo_F;
	class B_T_Truck_01_ammo_F: B_Truck_01_ammo_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ammo_olive_CO.paa"
		};
	};
	class B_A_Truck_01_ammo_F: B_Truck_01_ammo_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_ammo_F.jpg";
		_generalMacro="B_A_Truck_01_ammo_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_ammo_CO.paa"
		};
	};
	class B_Truck_01_box_F;
	class B_T_Truck_01_box_F: B_Truck_01_box_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ammo_olive_CO.paa"
		};
	};
	class B_A_Truck_01_box_F: B_Truck_01_box_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_box_F.jpg";
		_generalMacro="B_A_Truck_01_box_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_ammo_CO.paa"
		};
	};
	class B_Truck_01_fuel_F;
	class B_T_Truck_01_fuel_F: B_Truck_01_fuel_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_fuel_olive_CO.paa"
		};
	};
	class B_A_Truck_01_fuel_F: B_Truck_01_fuel_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_fuel_F.jpg";
		_generalMacro="B_A_Truck_01_fuel_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_fuel_CO.paa"
		};
	};
	class B_Truck_01_medical_F;
	class B_T_Truck_01_medical_F: B_Truck_01_medical_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa"
		};
	};
	class B_A_Truck_01_medical_F: B_Truck_01_medical_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_medical_F.jpg";
		_generalMacro="B_A_Truck_01_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa"
		};
	};
	class B_Truck_01_Repair_F;
	class B_T_Truck_01_Repair_F: B_Truck_01_Repair_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ammo_olive_CO.paa"
		};
	};
	class B_A_Truck_01_Repair_F: B_Truck_01_Repair_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_Repair_F.jpg";
		_generalMacro="B_A_Truck_01_Repair_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_ammo_CO.paa"
		};
	};
	class B_Truck_01_transport_F;
	class B_T_Truck_01_transport_F: B_Truck_01_transport_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa"
		};
	};
	class B_A_Truck_01_transport_F: B_Truck_01_transport_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_transport_F.jpg";
		_generalMacro="B_A_Truck_01_transport_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa"
		};
	};
	class B_Truck_01_covered_F;
	class B_T_Truck_01_covered_F: B_Truck_01_covered_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
			"\A3\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_olive_CO.paa"
		};
	};
	class B_A_Truck_01_covered_F: B_Truck_01_covered_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_covered_F.jpg";
		_generalMacro="B_A_Truck_01_covered_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Soldier_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
			"\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942538";
};
