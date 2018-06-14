class CfgPatches
{
	class A3_Armor_F_Rus_MBT_02
	{
		addonRootClass="A3_Armor_F_Rus";
		requiredAddons[]=
		{
			"A3_Armor_F_Aegis_MBT_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_MBT_02_arty_F",
			"I_RU_MBT_02_cannon_F"
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
		class HitPoints;
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
		class HitPoints: HitPoints
		{
		};
	};
	class MBT_02_base_F: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
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
			};
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F
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
	};
	class I_RU_MBT_02_base_F: MBT_02_base_F
	{
		author="$STR_A3_Night515";
		mapSize=10.31;
		_generalMacro="I_RU_MBT_02_base_F";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
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
							"150Rnd_127x108_Ball",
							"150Rnd_127x108_Ball",
							"SmokeLauncherMag"
						};
					};
				};
				magazines[]=
				{
					"16Rnd_125mm_APFSDS_T_Yellow",
					"12Rnd_125mm_HEAT_T_Yellow",
					"12Rnd_125mm_HE_T_Yellow",
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
					"4Rnd_125mm_cannon_missiles"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camoNet"
		};
		class TextureSources
		{
			class Rus_01
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_body_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_turret_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
			class Rus_02
			{
				displayName="Russia (Desert Camo Net)";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_body_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_turret_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Desert_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
			class Tan
			{
				displayName="Tan";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_body_tan_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_turret_tan_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_tan_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Rus_01",
			1,
			"Rus_02",
			0,
			"Tan",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_body_rus_CO.paa",
			"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_turret_rus_CO.paa",
			"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_rus_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa"
		};
		class HitPoints: HitPoints
		{
			class HitERA_Top_Left_1: HitERA_Front
			{
				name="era_L_T_1_point";
				armorComponent="hit_era_L_T_1";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_L_T_1_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Left_2: HitERA_Front
			{
				name="era_L_T_2_point";
				armorComponent="hit_era_L_T_2";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_L_T_2_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Right_1: HitERA_Front
			{
				name="era_R_T_1_point";
				armorComponent="hit_era_R_T_1";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_R_T_1_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
			class HitERA_Top_Right_2: HitERA_Front
			{
				name="era_R_T_2_point";
				armorComponent="hit_era_R_T_2";
				class DestructionEffects: DestructionEffects
				{
					class Explo: Explo
					{
						position="era_R_T_2_pos";
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.1;
					};
				};
			};
		};
	};
	class I_RU_MBT_02_cannon_F: I_RU_MBT_02_base_F
	{
		author="$STR_A3_Night515";
		mapSize=10.72;
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_MBT_02_cannon_F.jpg";
		_generalMacro="I_RU_MBT_02_cannon_F";
		scope=2;
		DLC="Rus";
		textureList[]=
		{
			"Rus_01",
			1,
			"Rus_02",
			0
		};
		class TransportWeapons
		{
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=4;
			};
		};
	};
	class I_RU_MBT_02_arty_base_F: MBT_02_arty_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_RU_MBT_02_arty_base_F";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
		maxFordingDepth=-1.25;
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
							"64Rnd_40mm_G_belt",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"SmokeLauncherMag"
						};
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camoNet"
		};
		class TextureSources
		{
			class Rus_01
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_body_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_scorcher_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
			class Rus_02
			{
				displayName="Russia (Desert Camo Net)";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_body_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_scorcher_rus_CO.paa",
					"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Desert_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
		textureList[]=
		{
			"Rus_01",
			1,
			"Rus_02",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_body_rus_CO.paa",
			"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_scorcher_rus_CO.paa",
			"\A3\Armor_F_Rus\MBT_02\Data\MBT_02_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa"
		};
	};
	class I_RU_MBT_02_arty_F: I_RU_MBT_02_arty_base_F
	{
		author="$STR_A3_Night515";
		mapSize=12.09;
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_MBT_02_arty_F.jpg";
		_generalMacro="I_RU_MBT_02_arty_F";
		scope=2;
		DLC="Rus";
		textureList[]=
		{
			"Rus_01",
			1,
			"Rus_02",
			0
		};
		class TransportWeapons
		{
			class _xx_arifle_AK12_F
			{
				weapon="arifle_AK12_F";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=2;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=4;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528893642";
};
