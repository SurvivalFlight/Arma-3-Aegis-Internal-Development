class CfgPatches
{
	class A3_Air_F_Aegis_Plane_Fighter_03
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Gamma_Plane_Fighter_03"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_Plane_Fighter_03_dynamicLoadout_F",
			"O_A_Ejection_Seat_Plane_Fighter_03_F",
			"O_A_Plane_Fighter_03_dynamicLoadout_F",
			"O_Ejection_Seat_Plane_Fighter_03_F",
			"O_Plane_Fighter_03_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Plane;
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
	};
	class Ejection_Seat_Plane_Fighter_03_base_F;
	class O_Ejection_Seat_Plane_Fighter_03_F: Ejection_Seat_Plane_Fighter_03_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		author="$STR_A3_Night515";
		scope=1;
		side=0;
		faction="OPF_F";
		crew="O_Fighter_Pilot_F";
	};
	class O_A_Ejection_Seat_Plane_Fighter_03_F: Ejection_Seat_Plane_Fighter_03_base_F
	{
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.0020000001;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		author="$STR_A3_Night515";
		scope=1;
		side=0;
		faction="OPF_A_F";
		crew="O_A_Fighter_Pilot_F";
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class AnimationSources: AnimationSources
		{
			class AddScalpel;
			class AddAsraam_mid;
			class AddGbu12;
			class AddMk82;
			class AddZephyr;
			class AddAsraam_out;
		};
		class EjectionSystem;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
	};
	class O_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_Plane_Fighter_03_dynamicLoadout_F.jpg";
		_generalMacro="O_Plane_Fighter_03_dynamicLoadout_F";
		scope=2;
		scopeCurator=0;
		displayName="$STR_A3_CfgVehicles_Plane_Fighter_03_base_F0";
		side=0;
		faction="OPF_F";
		crew="O_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_Fighter_Pilot_F"
		};
		cost=3000000;
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_brownhex_CO.paa",
			"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_brownhex_CO.paa"
		};
		textureList[]=
		{
			"Hex",
			1,
			"Grey",
			0
		};
		class AnimationSources: AnimationSources
		{
			class HideWeapons
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"O_MISSILE_PYLON",
							"O_R73"
						};
						attachment="PylonRack_1Rnd_Missile_AA_03_F";
						priority=5;
						maxweight=200;
						UIposition[]={0.34999999,0};
					};
					class pylons2: pylons1
					{
						priority=4;
						attachment="PylonRack_20Rnd_Rocket_03_HE_F";
						maxweight=320;
						UIposition[]={0.345,0.050000001};
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"",
							"O_MISSILE_PYLON",
							"O_BOMB_PYLON",
							"SCALPEL_1RND",
							"UNI_SCALPEL",
							"O_R73",
							"O_R77"
						};
						priority=3;
						attachment="PylonRack_1Rnd_Missile_AGM_01_F";
						maxweight=400;
						UIposition[]={0.34,0.1};
					};
					class pylons4: pylons1
					{
						priority=2;
						attachment="PylonWeapon_300Rnd_20mm_shells";
						maxweight=500;
						UIposition[]={0.30000001,0.2};
						hardpoints[]=
						{
							"B_A143_BUZZARD_CENTER_PYLON"
						};
					};
					class pylons5: pylons3
					{
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=3;
					};
					class pylons6: pylons2
					{
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=2;
					};
					class pylons7: pylons1
					{
						UIposition[]={0.34,0.40000001};
						mirroredMissilePos=1;
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
					class CAS
					{
						displayName="$STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP";
						attachment[]=
						{
							"PylonMissile_1Rnd_LG_scalpel",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonMissile_1Rnd_LG_scalpel"
						};
					};
					class Cluster
					{
						displayName="$STR_A3_CfgVehicles_Pylons_Presets_Cluster0";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_03_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonMissile_1Rnd_BombCluster_02_F",
							"PylonWeapon_300Rnd_20mm_shells",
							"PylonMissile_1Rnd_BombCluster_02_F",
							"PylonRack_20Rnd_Rocket_03_HE_F",
							"PylonRack_1Rnd_Missile_AA_03_F"
						};
					};
				};
			};
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="O_Ejection_Seat_Plane_Fighter_03_F";
		};
		DLC="Aegis";
	};
	class I_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		displayName="$STR_A3_CfgVehicles_Plane_Fighter_03_base_F0";
		textureList[]=
		{
			"Green",
			1
		};
	};
	class O_A_Plane_Fighter_03_dynamicLoadout_F: O_Plane_Fighter_03_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Plane_Fighter_03_dynamicLoadout_F.jpg";
		_generalMacro="O_A_Plane_Fighter_03_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=0;
		faction="OPF_A_F";
		crew="O_A_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_A_Fighter_Pilot_F"
		};
		textureList[]=
		{
			"Hex",
			1,
			"Grey",
			0
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_brownhex_CO.paa",
			"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_brownhex_CO.paa"
		};
		class EjectionSystem: EjectionSystem
		{
			EjectionSeatClass="O_A_Ejection_Seat_Plane_Fighter_03_F";
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
