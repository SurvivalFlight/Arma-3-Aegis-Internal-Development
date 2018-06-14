class CfgPatches
{
	class A3_Air_F_Aegis_VTOL_02
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Exp_VTOL_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_VTOL_02_infantry_dynamicLoadout_F",
			"O_VTOL_02_vehicle_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane_Base_F;
	class VTOL_Base_F: Plane_Base_F
	{
		class NewTurret;
	};
	class VTOL_02_base_F: VTOL_Base_F
	{
		class Turrets
		{
			class GunnerTurret: NewTurret
			{
				magazines[]=
				{
					"magazine_VTOL02_Gun30mm_HE_x350",
					"magazine_VTOL02_Gun30mm_APDS_x350",
					"8Rnd_LG_scalpel",
					"38Rnd_80mm_rockets",
					"Laserbatteries"
				};
				weapons[]=
				{
					"weapon_Fighter_Gun_30mm_VTOL_02",
					"missiles_SCALPEL",
					"rockets_Skyfire",
					"Laserdesignator_mounted"
				};
			};
		};
	};
	class VTOL_02_infantry_base_F: VTOL_02_base_F
	{
	};
	class VTOL_02_infantry_dynamicLoadout_base_F: VTOL_02_infantry_base_F
	{
		class Turrets: Turrets
		{
			class GunnerTurret: GunnerTurret
			{
				magazines[]=
				{
					"magazine_VTOL02_Gun30mm_HE_x350",
					"magazine_VTOL02_Gun30mm_APDS_x350",
					"Laserbatteries"
				};
				weapons[]=
				{
					"weapon_Fighter_Gun_30mm_VTOL_02",
					"Laserdesignator_mounted"
				};
			};
		};
	};
	class VTOL_02_vehicle_base_F: VTOL_02_base_F
	{
	};
	class VTOL_02_vehicle_dynamicLoadout_base_F: VTOL_02_vehicle_base_F
	{
		class Turrets: Turrets
		{
			class GunnerTurret: GunnerTurret
			{
				magazines[]=
				{
					"magazine_VTOL02_Gun30mm_HE_x350",
					"magazine_VTOL02_Gun30mm_APDS_x350",
					"Laserbatteries"
				};
				weapons[]=
				{
					"weapon_Fighter_Gun_30mm_VTOL_02",
					"Laserdesignator_mounted"
				};
			};
		};
	};
	class O_VTOL_02_infantry_dynamicLoadout_F: VTOL_02_infantry_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_VTOL_02_infantry_dynamicLoadout_F.jpg";
		_generalMacro="O_VTOL_02_infantry_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_VTOL_02_infantry_base_F0";
		DLC="Aegis";
		side=0;
		faction="OPF_F";
		crew="O_pilot_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		textureList[]=
		{
			"Hex",
			1,
			"GreenHex",
			0,
			"Grey",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"
		};
	};
	class O_VTOL_02_vehicle_dynamicLoadout_F: VTOL_02_vehicle_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_VTOL_02_vehicle_dynamicLoadout_F.jpg";
		_generalMacro="O_VTOL_02_vehicle_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_VTOL_02_vehicle_base_F0";
		DLC="Aegis";
		side=0;
		faction="OPF_F";
		crew="O_pilot_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		textureList[]=
		{
			"Hex",
			1,
			"GreenHex",
			0,
			"Grey",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa",
			"\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
