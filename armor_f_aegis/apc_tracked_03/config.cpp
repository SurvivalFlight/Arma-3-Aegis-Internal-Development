class CfgPatches
{
	class A3_Armor_F_Aegis_APC_Tracked_03
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_EPB_APC_Tracked_03"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_APC_tracked_03_cannon_F"
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
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Tracked_03_base_F: Tank_F
	{
		class MFD
		{
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				class Draw
				{
					class Main_Armament_Ammo_Type_1
					{
						text="GPR-T";
					};
				};
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
					};
				};
				weapons[]=
				{
					"autocannon_40mm_CTWS",
					"LMG_coax"
				};
				magazines[]=
				{
					"120Rnd_40mm_GPR_Tracer_Yellow_shells",
					"80Rnd_40mm_APFSDS_Tracer_Yellow_shells",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				weapon="autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				weapon="autocannon_40mm_CTWS";
			};
		};
		animationList[]=
		{
			"showBags",
			0.33000001,
			"showBags2",
			0.33000001,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showTools",
			0.5,
			"showSLATHull",
			0,
			"showSLATTurret",
			0
		};
		class TextureSources
		{
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_ext_CO.paa",
					"\A3\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_ext2_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
		};
	};
	class B_A_APC_tracked_03_base_F: APC_Tracked_03_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_A_APC_tracked_03_base_F";
		crew="B_A_crew_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
		side=1;
		faction="BLU_A_F";
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=24;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_SA80_blk_F
			{
				weapon="arifle_SA80_blk_F";
				count=1;
			};
			class _xx_arifle_SA80_LSW_blk_F
			{
				weapon="arifle_SA80_LSW_blk_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
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
					};
				};
			};
		};
	};
	class B_A_APC_tracked_03_cannon_F: B_A_APC_tracked_03_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_tracked_03_cannon_F.jpg";
		_generalMacro="B_A_APC_tracked_03_cannon_F";
		scope=2;
		DLC="Aegis";
		displayName="$STR_A3_CfgVehicles_I_APC_tracked_03_cannon_F0";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camoNet",
			"camoSlat"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_ext_CO.paa",
			"\A3\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_ext2_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_sand_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
				magazines[]=
				{
					"120Rnd_40mm_GPR_Tracer_Red_shells",
					"80Rnd_40mm_APFSDS_Tracer_Red_shells",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
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
