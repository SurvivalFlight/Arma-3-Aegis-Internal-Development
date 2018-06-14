class CfgPatches
{
	class A3_Armor_F_Aegis_MBT_03
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_EPB_MBT_03"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_MBT_03_cannon_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	class MBT_03_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"200Rnd_127x99_mag_Tracer_Yellow",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"SmokeLauncherMag"
						};
					};
				};
				magazines[]=
				{
					"20Rnd_120mm_APFSDS_shells_Tracer_Yellow",
					"12Rnd_120mm_HE_shells_Tracer_Yellow",
					"12Rnd_120mm_HEAT_MP_T_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"4Rnd_120mm_cannon_missiles"
				};
			};
		};
		class TextureSources
		{
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_CO.paa",
					"\A3\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_CO.paa",
					"\A3\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
		animationList[]=
		{
			"HideTurret",
			0.17,
			"HideHull",
			0.17,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showCamonetCannon",
			0,
			"showCamonetCannon1",
			0
		};
	};
	class B_A_MBT_03_base_F: MBT_03_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_A_MBT_03_base_F";
		crew="B_A_Crew_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		side=1;
		faction="BLU_A_F";
	};
	class B_A_MBT_03_cannon_F: B_A_MBT_03_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_MBT_03_cannon_F.jpg";
		_generalMacro="B_A_MBT_03_cannon_F";
		scope=2;
		displayName="FV-52 Cerberus";
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_CO.paa",
			"\A3\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_CO.paa",
			"\A3\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=6;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_C_blk_F
			{
				weapon="arifle_SA80_C_blk_F";
				count=2;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
					};
				};
				magazines[]=
				{
					"20Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"4Rnd_120mm_cannon_missiles"
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527944276";
};
