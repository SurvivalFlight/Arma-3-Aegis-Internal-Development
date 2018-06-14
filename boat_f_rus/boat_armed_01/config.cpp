class CfgPatches
{
	class A3_Boat_F_Rus_Boat_Armed_01
	{
		addonRootClass="A3_Boat_F_Rus";
		requiredAddons[]=
		{
			"A3_Boat_F_Aegis_Boat_Armed_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_Boat_Armed_01_hmg_F"
		};
		weapons[]={};
	};
};
class DefaultEventHandlers;
class RCWSOptics;
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class NewTurret;
		class Turrets;
		class ViewOptics;
	};
	class Boat_Armed_01_base_F: Boat_F
	{
		class Turrets: Turrets
		{
			class FrontTurret;
			class RearTurret: FrontTurret
			{
			};
		};
		class TextureSources
		{
			class Rus
			{
				displayName="Grey";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Boat_F_Rus\Boat_Armed_01\Data\Boat_Armed_01_ext_rus_CO.paa",
					"\A3\Boat_F_Rus\Boat_Armed_01\Data\Boat_Armed_01_int_rus_CO.paa",
					"\A3\Boat_F_Rus\Boat_Armed_01\Data\Boat_Armed_01_crows_rus_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
	};
	class I_RU_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_Boat_Armed_01_hmg_F.jpg";
		_generalMacro="I_RU_Boat_Armed_01_hmg_F";
		displayName="$STR_A3_CfgVehicles_Boat_Armed_01_HMG0";
		scope=2;
		scopeCurator=2;
		DLC="Rus";
		accuracy=1.5;
		side=2;
		faction="IND_RU_F";
		crew="I_RU_Soldier_F";
		typicalCargo[]=
		{
			"I_RU_Soldier_F",
			"I_RU_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Boat_F_Rus\Boat_Armed_01\Data\Boat_Armed_01_ext_rus_CO.paa",
			"\A3\Boat_F_Rus\Boat_Armed_01\Data\Boat_Armed_01_int_rus_CO.paa",
			"\A3\Boat_F_Rus\Boat_Armed_01\Data\Boat_Armed_01_crows_rus_CO.paa"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret
			{
				weapons[]=
				{
					"GMG_40mm"
				};
				magazines[]=
				{
					"64Rnd_40mm_G_belt"
				};
			};
			class RearTurret: RearTurret
			{
				weapons[]=
				{
					"HMG_static"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow",
					"100Rnd_127x99_mag_Tracer_Yellow"
				};
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525890422";
};
