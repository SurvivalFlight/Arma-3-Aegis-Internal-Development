class CfgPatches
{
	class A3_Armor_F_Rus_APC_Wheeled_02
	{
		addonRootClass="A3_Armor_F_Rus";
		requiredAddons[]=
		{
			"A3_Armor_F_Aegis_APC_Wheeled_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_APC_Wheeled_02_rcws_F",
			"I_RU_APC_Wheeled_02_medical_F",
			"I_RU_APC_Wheeled_02_unarmed_F"
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
				class ViewOptics;
			};
		};
		class AnimationSources;
		class CommanderOptics;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class TextureSources
		{
			class Rus_01
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa",
					"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
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
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Desert_CO.paa",
					"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class APC_Wheeled_02_unarmed_base_F: APC_Wheeled_02_base_v2_F
	{
	};
	class APC_Wheeled_02_medical_base_F: APC_Wheeled_02_unarmed_base_F
	{
		class TextureSources
		{
			class Rus_01
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa",
					"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
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
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Desert_CO.paa",
					"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
	};
	class I_RU_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_APC_Wheeled_02_rcws_v2_F.jpg";
		_generalMacro="I_RU_APC_Wheeled_02_rcws_v2_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Crew_F"
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
			"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_rus_CO.paa",
			"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa",
			"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
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
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine="30Rnd_762x39_Mag_F";
				count=16;
			};
			class _xx_45Rnd_545x39_Mag_F
			{
				magazine="45Rnd_545x39_Mag_F";
				count=8;
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
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
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
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=8;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=5;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"64Rnd_40mm_G_belt",
					"64Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow",
					"SmokeLauncherMag"
				};
			};
			class CommanderOptics;
		};
	};
	class I_RU_APC_Wheeled_02_unarmed_F: APC_Wheeled_02_unarmed_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RU_APC_Wheeled_02_unarmed_F.jpg";
		_generalMacro="I_RU_APC_Wheeled_02_unarmed_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Crew_F"
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
			"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_rus_CO.paa",
			"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa",
			"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
		};
	};
	class I_RU_APC_Wheeled_02_medical_F: APC_Wheeled_02_medical_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_APC_Wheeled_02_medical_F.jpg";
		_generalMacro="I_RU_APC_Wheeled_02_medical_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Crew_F"
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
			"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_medevac_rus_CO.paa",
			"\A3\Armor_F_Rus\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa",
			"\A3\Armor_F\Data\camonet_AAF_Stripe_Green_CO.paa",
			"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528893642";
};
