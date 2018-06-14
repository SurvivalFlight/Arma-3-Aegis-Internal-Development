class CfgPatches
{
	class A3_Air_F_Rus_Plane_Fighter_02
	{
		addonRootClass="A3_Air_F_Rus";
		requiredAddons[]=
		{
			"A3_Air_F_Aegis_Plane_Fighter_02"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Plane_Fighter_02_F",
			"I_RU_Plane_Fighter_02_Stealth_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class Components;
	};
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
		class Components: Components
		{
		};
		class AnimationSources
		{
			class pylon_1_hide;
			class pylon_2_hide;
			class pylon_3_hide;
			class pylon_4_hide;
			class pylon_5_hide;
			class pylon_6_hide;
		};
		class TextureSources
		{
			class Rus
			{
				displayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
					"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rus_CO.paa",
					"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
					"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
					"\A3\Data_F\clear_empty.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
	};
	class I_RU_Plane_Fighter_02_F: Plane_Fighter_02_Base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Plane_Fighter_02_F.jpg";
		_generalMacro="I_RU_Plane_Fighter_02_F";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"I_RU_Fighter_Pilot_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
			"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rus_CO.paa",
			"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
			"\A3\Data_F\clear_empty.paa"
		};
	};
	class I_RU_Plane_Fighter_02_Stealth_F: Plane_Fighter_02_Base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Plane_Fighter_02_Stealth_F.jpg";
		_generalMacro="I_RU_Plane_Fighter_02_Stealth_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_Fighter_02_Stealth_name";
		DLC="Rus";
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"I_RU_Fighter_Pilot_F"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
			"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rus_CO.paa",
			"\A3\Air_F_Rus\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rus_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
			"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
			"\A3\Data_F\clear_empty.paa"
		};
		radarTargetSize=0.60000002;
		class AnimationSources: AnimationSources
		{
			class pylon_1_hide: pylon_1_hide
			{
				initPhase=1;
			};
			class pylon_2_hide: pylon_2_hide
			{
				initPhase=1;
			};
			class pylon_3_hide: pylon_3_hide
			{
				initPhase=1;
			};
			class pylon_4_hide: pylon_4_hide
			{
				initPhase=1;
			};
			class pylon_5_hide: pylon_5_hide
			{
				initPhase=1;
			};
			class pylon_6_hide: pylon_6_hide
			{
				initPhase=1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_CA.paa";
				class pylons
				{
					class pylonDummy1
					{
						attachment="";
						UIposition[]={10,10};
					};
					class pylonDummy2: pylonDummy1
					{
					};
					class pylonDummy3: pylonDummy1
					{
					};
					class pylonDummy4: pylonDummy1
					{
					};
					class pylonDummy5: pylonDummy1
					{
					};
					class pylonDummy6: pylonDummy1
					{
					};
					class pylonBayRight1
					{
						hardpoints[]=
						{
							"O_R73"
						};
						priority=7;
						attachment="PylonMissile_Missile_AA_R73_x1";
						maxweight=300;
						UIposition[]={0.44999999,0.15000001};
						bay=2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[]={0.2,0.15000001};
						mirroredMissilePos=7;
						bay=1;
					};
					class pylonBayRight2
					{
						hardpoints[]=
						{
							"O_R77"
						};
						priority=5;
						attachment="PylonMissile_Missile_AA_R77_x1";
						maxweight=750;
						UIposition[]={0.33000001,0.30000001};
						bay=4;
					};
					class pylonBayLeft2: pylonBayRight2
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=9;
						bay=3;
					};
					class pylonBayCenter1
					{
						hardpoints[]=
						{
							"O_R77_INT"
						};
						priority=2;
						attachment="PylonMissile_Missile_AA_R77_INT_x1";
						maxweight=750;
						UIposition[]={0.33000001,0.44999999};
						bay=5;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						UIposition[]={0.33000001,0.5};
						mirroredMissilePos=11;
					};
					class pylonBayCenter3
					{
						hardpoints[]=
						{
							"O_R77_INT",
							"O_KH25_INT",
							"O_KAB250_BOMB"
						};
						priority=1;
						attachment="PylonMissile_Bomb_KAB250_x1";
						maxweight=1200;
						UIposition[]={0.33000001,0.55000001};
						bay=5;
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=1;
					};
					class BayRight1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=0;
						autoCloseWhenEmptyDelay=1;
					};
					class BayLeft2
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=2;
					};
					class BayRight2
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=1;
					};
					class BayCenter1
					{
						bayOpenTime=0.5;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=2;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_Bomb_KAB250_x1"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_Missile_AA_R77_INT_x1"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_Missile_AGM_KH25_INT_x1"
						};
					};
					class Cluster
					{
						displayName="$STR_A3_CfgVehicles_Pylons_Presets_Cluster0";
						attachment[]=
						{
							"",
							"",
							"",
							"",
							"",
							"",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R73_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_Missile_AA_R77_INT_x1",
							"PylonMissile_1Rnd_BombCluster_02_cap_F"
						};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890361";
};
