class CfgPatches
{
	class A3_Armor_F_Aegis_APC_Wheeled_03
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_APC_Wheeled_03",
			"A3_Data_F_Tacops"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_APC_Wheeled_03_cannon_F",
			"B_A_APC_Wheeled_03_medical_F",
			"B_A_APC_Wheeled_03_unarmed_F",
			"B_G_APC_Wheeled_03_cannon_F",
			"I_APC_Wheeled_03_cannon_F",
			"I_APC_Wheeled_03_medical_F",
			"I_APC_Wheeled_03_unarmed_F",
			"I_G_APC_Wheeled_03_cannon_F",
			"O_G_APC_Wheeled_03_cannon_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
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
		class EventHandlers;
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
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
		class AnimationSources: AnimationSources
		{
			class HideTurret;
		};
		class TextureSources
		{
			class Blufor
			{
				DisplayName="$STR_A3_TEXTURESOURCES_BLUFOR0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showBags",
			0.33000001,
			"showBags2",
			0.33000001,
			"showTools",
			0.5,
			"showSLATHull",
			0
		};
		class EventHandlers: EventHandlers
		{
		};
	};
	class APC_Wheeled_03_unarmed_base_F: APC_Wheeled_03_base_F
	{
		author="$STR_A3_Night515";
		mapSize=1;
		_generalMacro="APC_Wheeled_03_unarmed_base_F";
		displayName="AFV-4 Gorgon (Unarmed)";
		model="\A3\Armor_F_Gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		picture="\A3\Armor_F_Aegis\APC_Wheeled_03\Data\UI\APC_Wheeled_03_medevac_CA.paa";
		Icon="\A3\Armor_F_Aegis\APC_Wheeled_03\Data\UI\Map_APC_Wheeled_03_medevac_CA.paa";
		weapons[]=
		{
			"TruckHorn",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camoNet",
			"camoSlat"
		};
		class AnimationSources: AnimationSources
		{
			class HideTurret: HideTurret
			{
				initPhase=1;
			};
		};
		class Turrets
		{
		};
	};
	class APC_Wheeled_03_medical_base_F: APC_Wheeled_03_unarmed_base_F
	{
		author="$STR_A3_Night515";
		displayName="AFV-4 Gorgon (Medical)";
		attendant=1;
		threat[]={0,0,0};
		class TransportBackpack
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TextureSources
		{
			class Blufor
			{
				DisplayName="$STR_A3_TEXTURESOURCES_BLUFOR0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_medevac_CO.paa",
					"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_medevac_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_A_F"
				};
			};
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_medevac_INDP_CO.paa",
					"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_medevac_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_INDP_CO.paa",
					"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"\A3\Armor_F\Data\cage_AAF_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		textureList[]=
		{
			"Blufor",
			0,
			"Indep",
			1
		};
	};
	class B_A_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_A_APC_Wheeled_03_base_F";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Crew_F";
		typicalCargo[]=
		{
			"B_A_Soldier_F"
		};
	};
	class I_G_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_G_APC_Wheeled_03_base_F";
		side=2;
		faction="IND_G_F";
		crew="I_G_Soldier_F";
		typicalCargo[]=
		{
			"I_G_Soldier_F"
		};
	};
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
	{
	};
	class B_A_APC_Wheeled_03_cannon_F: B_A_APC_Wheeled_03_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_Wheeled_03_cannon_F.jpg";
		_generalMacro="B_A_APC_Wheeled_03_cannon_F";
		scope=2;
		DLC="Aegis";
		accuracy=0.30000001;
		displayName="$STR_A3_CFGVEHICLES_APC_WHEELED_03_WAPC0";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0";
		};
		model="\A3\Armor_F_Gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		picture="\A3\Armor_F_Gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		Icon="\A3\Armor_F_Gamma\APC_Wheeled_03\Data\UI\Map_APC_Wheeled_03_CA.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		unitInfoType="RscUnitInfoTank";
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"autocannon_30mm_CTWS",
					"LMG_coax",
					"missiles_titan"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Red",
					"60Rnd_30mm_APFSDS_shells_Tracer_Red",
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
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.39810717,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
			};
		};
		threat[]={1,1,0.30000001};
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_30mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_30mm_CTWS";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camoNet",
			"camoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_sand_CO.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=12;
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
				count=2;
			};
		};
	};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
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
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
			};
		};
	};
	class I_G_APC_Wheeled_03_cannon_F: I_G_APC_Wheeled_03_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_G_APC_Wheeled_03_cannon_F.jpg";
		_generalMacro="I_G_APC_Wheeled_03_cannon_F";
		scope=2;
		DLC="Aegis";
		accuracy=0.30000001;
		displayName="$STR_A3_CFGVEHICLES_APC_WHEELED_03_WAPC0";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_APC_Wheeled_03_WAPC_Library0";
		};
		model="\A3\Armor_F_Gamma\APC_Wheeled_03\APC_Wheeled_03_cannon_F.p3d";
		picture="\A3\Armor_F_Gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		Icon="\A3\Armor_F_Gamma\APC_Wheeled_03\Data\UI\Map_APC_Wheeled_03_CA.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		unitInfoType="RscUnitInfoTank";
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"autocannon_30mm_CTWS",
					"LMG_coax",
					"missiles_titan"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
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
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.39810717,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
			};
		};
		threat[]={1,1,0.30000001};
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_30mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_30mm_CTWS";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camoNet",
			"camoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Data_F_Tacops\Data\APC_Wheeled_03_ext_IG_01_CO.paa",
			"\A3\Data_F_Tacops\Data\APC_Wheeled_03_ext2_IG_01_CO.paa",
			"\A3\Data_F_Tacops\Data\RCWS30_IG_01_CO.paa",
			"\A3\Data_F_Tacops\Data\APC_Wheeled_03_ext_alpha_IG_01_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa",
			"\A3\Armor_F\Data\cage_G1_CO.paa"
		};
		textureList[]=
		{
			"Guerrilla_01",
			1,
			"Guerrilla_02",
			1,
			"Guerrilla_03",
			1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	class B_G_APC_Wheeled_03_cannon_F: I_G_APC_Wheeled_03_cannon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="B_G_APC_Wheeled_03_cannon_F";
		side=1;
		faction="BLU_G_F";
		crew="B_G_Soldier_F";
		typicalCargo[]=
		{
			"B_G_Soldier_F"
		};
	};
	class O_G_APC_Wheeled_03_cannon_F: I_G_APC_Wheeled_03_cannon_F
	{
		author="$STR_A3_Night515";
		_generalMacro="O_G_APC_Wheeled_03_cannon_F";
		side=0;
		faction="OPF_G_F";
		crew="O_G_Soldier_F";
		typicalCargo[]=
		{
			"O_G_Soldier_F"
		};
	};
	class B_A_APC_Wheeled_03_unarmed_F: APC_Wheeled_03_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_Wheeled_03_unarmed_F.jpg";
		_generalMacro="B_A_APC_Wheeled_03_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Crew_F";
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
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class I_APC_Wheeled_03_unarmed_F: APC_Wheeled_03_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_APC_Wheeled_03_unarmed_F.jpg";
		_generalMacro="I_APC_Wheeled_03_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=2;
		faction="IND_F";
		crew="I_crew_F";
		typicalCargo[]=
		{
			"I_soldier_F"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_INDP_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_INDP_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_INDP_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"\A3\Armor_F\Data\cage_AAF_CO.paa"
		};
		forceInGarage=1;
	};
	class B_A_APC_Wheeled_03_medical_F: APC_Wheeled_03_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_Wheeled_03_medical_F.jpg";
		_generalMacro="B_A_APC_Wheeled_03_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_A_Crew_F";
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
			"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_medevac_CO.paa",
			"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_medevac_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class I_APC_Wheeled_03_medical_F: APC_Wheeled_03_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_APC_Wheeled_03_medical_F.jpg";
		_generalMacro="I_APC_Wheeled_03_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=2;
		faction="IND_F";
		crew="I_crew_F";
		typicalCargo[]=
		{
			"I_soldier_F"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_medevac_INDP_CO.paa",
			"\A3\Armor_F_Aegis\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_medevac_INDP_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_INDP_CO.paa",
			"\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"\A3\Armor_F\Data\cage_AAF_CO.paa"
		};
		forceInGarage=1;
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527944276";
};
