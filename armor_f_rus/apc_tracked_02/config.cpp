class CfgPatches
{
	class A3_Armor_F_Rus_APC_Tracked_02
	{
		addonRootClass="A3_Armor_F_Rus";
		requiredAddons[]=
		{
			"A3_Armor_F_Aegis_APC_Tracked_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_APC_Tracked_02_AA_F",
			"I_RU_APC_Tracked_02_cannon_F"
		};
		weapons[]={};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
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
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class HitPoints;
					};
				};
				class HitPoints;
			};
		};
		class AnimationSources: AnimationSources
		{
		};
	};
	class I_RU_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		author="$STR_A3_Night515";
		_generalMacro="I_RU_APC_Tracked_02_base_F";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Crew_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F"
		};
		class Components;
	};
	class I_RU_APC_Tracked_02_cannon_F: I_RU_APC_Tracked_02_base_F
	{
		author="$STR_A3_Night515";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_APC_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_APC_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_vehicle_APC_s";
		textPlural="$STR_A3_nameSound_veh_vehicle_APC_p";
		nameSound="veh_vehicle_APC_s";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_APC_Tracked_02_cannon_F.jpg";
		_generalMacro="I_RU_APC_Tracked_02_cannon_F";
		scope=2;
		DLC="Rus";
		displayName="$STR_A3_CfgVehicles_APC_Tracked_02_0";
		picture="\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\APC_Tracked_02_cannon_CA.paa";
		Icon="\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\map_APC_Tracked_02_cannon_CA.paa";
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
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O"
				};
			};
		};
		threat[]={1,0.80000001,0.30000001};
		transportSoldier=8;
		class AnimationSources: AnimationSources
		{
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
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class showTracks
			{
				displayName="$STR_A3_animationsources_showtrackshull0";
				author="$STR_A3_Night515";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Night515";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showTracks",
					1
				};
				mass=-50;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagshull0";
				author="$STR_A3_Night515";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showSLATHull
			{
				displayName="$STR_A3_animationsources_showslathull0";
				author="$STR_A3_Night515";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showTracks",
			0,
			"showCamonetHull",
			0,
			"showBags",
			0,
			"showSLATHull",
			0
		};
		selectionFireAnim="";
		class TextureSources
		{
			class Rus_01
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_01_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_02_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\RCWS30_rus_CO.paa",
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
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_01_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_02_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\RCWS30_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Desert_CO.paa",
					"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
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
			"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_01_rus_CO.paa",
			"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_02_rus_CO.paa",
			"\A3\Armor_F_Rus\APC_Tracked_02\Data\RCWS30_rus_CO.paa",
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
	};
	class I_RU_APC_Tracked_02_AA_F: I_RU_APC_Tracked_02_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_APC_Tracked_02_AA_F.jpg";
		_generalMacro="I_RU_APC_Tracked_02_AA_F";
		class MFD
		{
			class MFD_Driver_Heading
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1,0},
							1
						};
						down[]=
						{
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_text
			{
				topLeft="MFD_Driver_1_TL";
				topRight="MFD_Driver_1_TR";
				bottomLeft="MFD_Driver_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Driver_Heading
					{
						type="text";
						source="static";
						text="ÐÐ—Ð˜ÐœÐ£Ð¢";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.02},
							1
						};
						right[]=
						{
							{0.69999999,0.02},
							1
						};
						down[]=
						{
							{0.44999999,0.87},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_second
			{
				topLeft="MFD_Driver_2_TL";
				topRight="MFD_Driver_2_TR";
				bottomLeft="MFD_Driver_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0},
							1
						};
						right[]=
						{
							{0.94999999,0},
							1
						};
						down[]=
						{
							{0.44999999,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoType
			{
				topLeft="MFD_5_TL";
				topRight="MFD_5_TR";
				bottomLeft="MFD_5_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition=1;
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.050000001},
							1
						};
						right[]=
						{
							{1.355,0.050000001},
							1
						};
						down[]=
						{
							{0.45500001,0.75999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator
			{
				topLeft="MFD_3_TL";
				topRight="MFD_3_TR";
				bottomLeft="MFD_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					condition=1;
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1.3,0},
							1
						};
						down[]=
						{
							{0.5,0.30000001},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.30000001},
							1
						};
						right[]=
						{
							{1.3,0.30000001},
							1
						};
						down[]=
						{
							{0.5,0.60000002},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1002;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.60000002},
							1
						};
						right[]=
						{
							{1.3,0.60000002},
							1
						};
						down[]=
						{
							{0.5,0.89999998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Ready_To_Fire
			{
				topLeft="MFD_gun_cli_TL";
				topRight="MFD_gun_cli_TR";
				bottomLeft="MFD_gun_cli_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition=1;
					class Top_text
					{
						type="text";
						source="static";
						text="Ðš Ð¡Ð¢Ð Ð•Ð›Ð¬Ð‘Ð•";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.050000001},
							1
						};
						right[]=
						{
							{0.67000002,0.050000001},
							1
						};
						down[]=
						{
							{0.44999999,0.55000001},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="Ð“ÐžÐ¢ÐžÐ’";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.465,0.44999999},
							1
						};
						right[]=
						{
							{0.685,0.44999999},
							1
						};
						down[]=
						{
							{0.465,0.94999999},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft="MFD_gun_TL";
				topRight="MFD_gun_TR";
				bottomLeft="MFD_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Main_armament
					{
						type="text";
						source="static";
						text="Ð“Ð›ÐÐ’ÐÐžÐ• ÐžÐ Ð£Ð”Ð˜Ð•";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.0049999999},
							1
						};
						right[]=
						{
							{0.075000003,-0.0049999999},
							1
						};
						down[]=
						{
							{0.015,0.072999999},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="Ð¢Ð˜ÐŸ ÐÐœÐ£ÐÐ˜Ð¦Ð˜Ð˜";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.55000001,-0.0044999998},
							1
						};
						right[]=
						{
							{0.61000001,-0.0044999998},
							1
						};
						down[]=
						{
							{0.55000001,0.072999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="Ð”ÐÐ›Ð¬ÐÐžÐ¡Ð¢Ð¬";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.83999997},
							1
						};
						right[]=
						{
							{0.075000003,0.83999997},
							1
						};
						down[]=
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="ÐÐ—Ð˜ÐœÐ£Ð¢";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.91500002},
							1
						};
						right[]=
						{
							{0.075000003,0.91500002},
							1
						};
						down[]=
						{
							{0.015,0.99299997},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="ÐŸÐžÐ’Ð Ð•Ð–Ð”Ð•ÐÐ˜Ð¯";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.38999999},
							1
						};
						right[]=
						{
							{0.075000003,0.38999999},
							1
						};
						down[]=
						{
							{0.015,0.46799999},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.91500002},
							1
						};
						right[]=
						{
							{0.40000001,0.91500002},
							1
						};
						down[]=
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.83999997},
							1
						};
						right[]=
						{
							{0.40000001,0.83999997},
							1
						};
						down[]=
						{
							{0.34,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				topLeft="MFD_gun_TL";
				topRight="MFD_gun_TR";
				bottomLeft="MFD_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.56,0.064999998},
							1
						};
						right[]=
						{
							{0.64999998,0.064999998},
							1
						};
						down[]=
						{
							{0.56,0.185},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				topLeft="MFD_gun_TL";
				topRight="MFD_gun_TR";
				bottomLeft="MFD_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="35-Ð¼Ð¼ ÐžÐ¤Ð—Ð¢";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.064999998},
							1
						};
						right[]=
						{
							{0.075000003,0.064999998},
							1
						};
						down[]=
						{
							{0.015,0.14300001},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.064999998},
							1
						};
						right[]=
						{
							{0.45500001,0.064999998},
							1
						};
						down[]=
						{
							{0.39500001,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="Ð—-Ð’ Ð ÐÐšÐ•Ð¢Ð";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.125},
							1
						};
						right[]=
						{
							{0.075000003,0.125},
							1
						};
						down[]=
						{
							{0.015,0.20299999},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.125},
							1
						};
						right[]=
						{
							{0.45500001,0.125},
							1
						};
						down[]=
						{
							{0.39500001,0.20299999},
							1
						};
					};
				};
			};
			class MFD_Commander_Ready_To_Fire
			{
				topLeft="MFD_com_cli_TL";
				topRight="MFD_com_cli_TR";
				bottomLeft="MFD_com_cli_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition=1;
					class Top_text
					{
						type="text";
						source="static";
						text="Ðš Ð¡Ð¢Ð Ð•Ð›Ð¬Ð‘Ð•";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.54000002,0},
							1
						};
						right[]=
						{
							{0.72000003,0},
							1
						};
						down[]=
						{
							{0.54000002,0.34999999},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="Ð“ÐžÐ¢ÐžÐ’";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.55000001,0.30000001},
							1
						};
						right[]=
						{
							{0.73000002,0.30000001},
							1
						};
						down[]=
						{
							{0.55000001,0.64999998},
							1
						};
					};
				};
			};
			class MFD_Commander_Main_Display
			{
				topLeft="MFD_com_TL";
				topRight="MFD_com_TR";
				bottomLeft="MFD_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Main_armament
					{
						type="text";
						source="static";
						text="Ð“Ð›ÐÐ’ÐÐžÐ• ÐžÐ Ð£Ð”Ð˜Ð•";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.0059000002},
							1
						};
						right[]=
						{
							{0.075000003,-0.0059000002},
							1
						};
						down[]=
						{
							{0.015,0.073899999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="Ð”ÐÐ›Ð¬ÐÐžÐ¡Ð¢Ð¬";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.83999997},
							1
						};
						right[]=
						{
							{0.075000003,0.83999997},
							1
						};
						down[]=
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="ÐÐ—Ð˜ÐœÐ£Ð¢";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.91500002},
							1
						};
						right[]=
						{
							{0.075000003,0.91500002},
							1
						};
						down[]=
						{
							{0.015,0.99299997},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.91500002},
							1
						};
						right[]=
						{
							{0.40000001,0.91500002},
							1
						};
						down[]=
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.83999997},
							1
						};
						right[]=
						{
							{0.40000001,0.83999997},
							1
						};
						down[]=
						{
							{0.34,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Commander_Smoke_Indicator
			{
				topLeft="MFD_com_smoke_TL";
				topRight="MFD_com_smoke_TR";
				bottomLeft="MFD_com_smoke_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,0,0};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0,0,0};
					alpha=1;
					condition=1;
					class Top_text
					{
						type="text";
						source="static";
						text="Ð”Ð«ÐœÐžÐ’ÐÐ¯";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.050000001},
							1
						};
						right[]=
						{
							{0.69999999,0.050000001},
							1
						};
						down[]=
						{
							{0.44999999,0.55000001},
							1
						};
					};
					class Bottom_text
					{
						type="text";
						source="static";
						text="Ð—ÐÐ’Ð•Ð¡Ð";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.38},
							1
						};
						right[]=
						{
							{0.69999999,0.38},
							1
						};
						down[]=
						{
							{0.44999999,0.88},
							1
						};
					};
				};
			};
			class MFD_Commander_AmmoIndicator_Main_Armament
			{
				topLeft="MFD_com_TL";
				topRight="MFD_com_TR";
				bottomLeft="MFD_com_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="35-Ð¼Ð¼ ÐžÐ¤Ð—Ð¢";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.0898},
							1
						};
						right[]=
						{
							{0.075000003,0.0898},
							1
						};
						down[]=
						{
							{0.015,0.15800001},
							1
						};
					};
					class Commander_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1000;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38999999,0.0898},
							1
						};
						right[]=
						{
							{0.44999999,0.0898},
							1
						};
						down[]=
						{
							{0.38999999,0.15800001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="Ð—-Ð’ Ð ÐÐšÐ•Ð¢Ð";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.15000001},
							1
						};
						right[]=
						{
							{0.075000003,0.15000001},
							1
						};
						down[]=
						{
							{0.015,0.228},
							1
						};
					};
					class Commander_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=1001;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.38999999,0.15000001},
							1
						};
						right[]=
						{
							{0.44999999,0.15000001},
							1
						};
						down[]=
						{
							{0.38999999,0.228},
							1
						};
					};
				};
			};
			class MFD_Commander_Second_Display
			{
				topLeft="MFD_7_TL";
				topRight="MFD_7_TR";
				bottomLeft="MFD_7_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="EtelkaMonospacePro";
				turret[]={0,0};
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition=1;
					class Crosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.5,0.42341301},
								1
							},
							
							{
								{0.5,0.34642899},
								1
							},
							{},
							
							{
								{0.5,0.57738101},
								1
							},
							
							{
								{0.5,0.654365},
								1
							},
							{},
							
							{
								{0.55000001,0.50039703},
								1
							},
							
							{
								{0.60000002,0.50039703},
								1
							},
							{},
							
							{
								{0.40000001,0.50039703},
								1
							},
							
							{
								{0.44999999,0.50039703},
								1
							},
							{},
							
							{
								{0.30000001,0.34642899},
								1
							},
							
							{
								{0.30000001,0.26944399},
								1
							},
							{},
							
							{
								{0.30000001,0.26944399},
								1
							},
							
							{
								{0.34999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.34642899},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.64999998,0.26944399},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.654365},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.64999998,0.73134899},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.654365},
								1
							},
							
							{
								{0.30000001,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.73134899},
								1
							},
							
							{
								{0.34999999,0.73134899},
								1
							},
							{}
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.838,0.25},
							1
						};
						right[]=
						{
							{0.88,0.25},
							1
						};
						down[]=
						{
							{0.838,0.33000001},
							1
						};
					};
					class Lased_Range_Background
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.43000001,0.81},
										1
									},
									
									{
										{0.56999999,0.81},
										1
									},
									
									{
										{0.56999999,0.87},
										1
									},
									
									{
										{0.43000001,0.87},
										1
									}
								}
							};
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.49399999,0.80000001},
							1
						};
						right[]=
						{
							{0.54400003,0.80000001},
							1
						};
						down[]=
						{
							{0.49399999,0.88},
							1
						};
					};
				};
			};
		};
		scope=2;
		DLC="Rus";
		displayName="$STR_A3_CfgVehicles_APC_Tracked_02_1";
		model="\A3\Armor_F_Beta\APC_Tracked_02\APC_Tracked_02_AA_F.p3d";
		editorSubcategory="EdSubcat_AAs";
		picture="\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\APC_Tracked_02_AA_CA.paa";
		Icon="\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\map_APC_Tracked_02_AA_CA.paa";
		cost=2000000;
		artilleryScanner=0;
		irScanGround=0;
		irScanRangeMax=10000;
		irScanRangeMin=2000;
		irScanToEyeFactor=2;
		radarType=2;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
			class driver_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
		};
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
				weapon="autocannon_35mm";
			};
			class showTracks
			{
				displayName="$STR_A3_animationsources_showtrackshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showTracks",
					1
				};
				mass=-50;
			};
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showSLATHull
			{
				displayName="$STR_A3_animationsources_showslathull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showTracks",
			0,
			"showCamonetHull",
			0,
			"showCamonetTurret",
			0,
			"showSLATHull",
			0
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=5000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						minSpeedThreshold=30;
						maxSpeedThreshold=90;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={10,15,17};
					ambient[]={0,0,0};
					intensity=1;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
					point="light_interior1";
				};
				class Light2: Light1
				{
					point="light_interior2";
					color[]={10,15,17};
					ambient[]={0,0,0};
					intensity=1;
				};
				class Light3: Light1
				{
					point="light_interior3";
					color[]={10,15,17};
					ambient[]={0,0,0};
					intensity=1;
				};
				class Light4: Light1
				{
					point="light_interior4";
					color[]={10,15,17};
					ambient[]={0,0,0};
					intensity=0.5;
				};
				class Light5: Light1
				{
					point="light_interior5";
					color[]={10,15,17};
					ambient[]={0,0,0};
					intensity=0.5;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGun[]=
				{
					"usti hlavne 1",
					"usti hlavne 2"
				};
				minElev=-10;
				maxElev=80;
				initElev=5;
				weapons[]=
				{
					"autocannon_35mm",
					"missiles_titan_AA"
				};
				magazines[]=
				{
					"500Rnd_35mm_AA_shells_Tracer_Yellow",
					"4Rnd_Titan_long_missiles_O",
					"4Rnd_Titan_long_missiles_O"
				};
				soundServo[]=
				{
					"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.3548134,
					0.80000001,
					30
				};
				soundServoVertical[]=
				{
					"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.3548134,
					0.80000001,
					30
				};
				selectionFireAnim="zasleh";
				forceHideGunner=0;
				gunnerAction="Gunner_APC_tracked_02_aa_F_out";
				gunnerInAction="Gunner_APC_tracked_02_aa_F_in";
				isPersonTurret=0;
				gunnerRightHandAnimName="turret_control";
				gunnerLeftHandAnimName="turret_control";
				usePip=2;
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="main_turret_hit";
						visual="main_turret_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="main_gun_hit";
						visual="main_gun_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.25;
					};
				};
				class OpticsIn: Optics_Gunner_AAA_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_APC_Tracked_01_gunner";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						forceHideGunner=0;
						gunnerAction="Commander_APC_tracked_02_AA_F_out";
						gunnerInAction="Commander_APC_tracked_02_AA_F_in";
						isPersonTurret=0;
						usePip=2;
						turretFollowFreeLook=2;
						gunnerRightHandAnimName="com_turret_control";
						gunnerLeftHandAnimName="";
						class HitPoints: HitPoints
						{
							class HitTurret
							{
								armor=0.2;
								material=-1;
								name="commander_turret_hit";
								visual="commander_turret_hit";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
							class HitGun
							{
								armor=0.2;
								material=-1;
								name="commander_gun_hit";
								visual="commander_gun_hit";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={8000,4000,2000,16000};
										resource="RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay="SensorDisplay";
								class Components: components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={8000,4000,2000,16000};
										resource="RscCustomInfoSensors";
									};
								};
							};
						};
					};
				};
			};
		};
		threat[]={0.5,0.5,1};
		smokeLauncherOnTurret=1;
		class TextureSources
		{
			class Rus_01
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_02_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_rus_CO.paa",
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
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_02_rus_CO.paa",
					"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_rus_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Stripe_Desert_CO.paa",
					"\A3\Armor_F_Rus\Data\cage_rus_CO.paa"
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
			"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_rus_CO.paa",
			"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_ext_02_rus_CO.paa",
			"\A3\Armor_F_Rus\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_rus_CO.paa",
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
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528893642";
};
