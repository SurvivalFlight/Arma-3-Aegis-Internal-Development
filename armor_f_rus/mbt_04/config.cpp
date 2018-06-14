class CfgPatches
{
	class A3_Armor_F_Rus_MBT_04
	{
		addonRootClass="A3_Armor_F_Aegis";
		requiredAddons[]=
		{
			"A3_Armor_F_Aegis_MBT_04"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_MBT_04_cannon_F",
			"I_RU_MBT_04_command_F"
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
	};
	class MBT_04_base_F: Tank_F
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
	class MBT_04_cannon_base_F: MBT_04_base_F
	{
	};
	class MBT_04_command_base_F: MBT_04_base_F
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
	class I_RU_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RU_MBT_04_cannon_F.jpg";
		_generalMacro="I_RU_MBT_04_cannon_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_MBT_04_cannon_F0";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
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
			"\A3\Armor_F_Rus\MBT_04\Data\MBT_04_exterior_rus_1_CO.paa",
			"\A3\Armor_F_Rus\MBT_04\Data\MBT_04_exterior_rus_2_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa"
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
							"450Rnd_127x108_Ball",
							"450Rnd_127x108_Ball",
							"SmokeLauncherMag"
						};
					};
				};
				magazines[]=
				{
					"20Rnd_125mm_APFSDS_T_Yellow",
					"12Rnd_125mm_HEAT_T_Yellow",
					"12Rnd_125mm_HE_T_Yellow",
					"1000Rnd_762x51_Belt_Yellow",
					"1000Rnd_762x51_Belt_Yellow",
					"4Rnd_125mm_cannon_missiles"
				};
			};
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
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class I_RU_MBT_04_command_F: MBT_04_command_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RU_MBT_04_command_F.jpg";
		_generalMacro="I_RU_MBT_04_command_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_CfgVehicles_O_MBT_04_command_F0";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
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
			"\A3\Armor_F_Rus\MBT_04\Data\MBT_04_exterior_rus_1_CO.paa",
			"\A3\Armor_F_Rus\MBT_04\Data\MBT_04_exterior_rus_2_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa"
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
							"60Rnd_30mm_MP_shells_Tracer_Yellow",
							"60Rnd_30mm_MP_shells_Tracer_Yellow",
							"SmokeLauncherMag"
						};
					};
				};
			};
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
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528893642";
};
