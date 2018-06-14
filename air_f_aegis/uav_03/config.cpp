class CfgPatches
{
	class A3_Air_F_Aegis_UAV_03
	{
		addonRootClass="A3_Air_F_Aegis";
		requiredAddons[]=
		{
			"A3_Air_F_Exp_UAV_03"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_A_UAV_03_dynamicLoadout_F",
			"B_UAV_03_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class UAV_03_base_F: Helicopter_Base_F
	{
		weapons[]=
		{
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"24Rnd_missiles",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"missiles_SCALPEL",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"6Rnd_LG_scalpel",
					"Laserbatteries"
				};
			};
		};
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Air_F_Aegis\UAV_03\Data\UAV_03_1_black_CO.paa",
					"\A3\Air_F_Aegis\UAV_03\Data\UAV_03_2_black_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_Exp\UAV_03\Data\UAV_03_1_CO.paa",
					"\A3\Air_F_Exp\UAV_03\Data\UAV_03_2_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
		};
		textureList[]=
		{
			"Black",
			0,
			"Green",
			1
		};
	};
	class B_T_UAV_03_dynamicLoadout_F;
	class B_UAV_03_dynamicLoadout_F: B_T_UAV_03_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_UAV_03_dynamicLoadout_F.jpg";
		_generalMacro="B_UAV_03_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
	};
	class B_A_UAV_03_dynamicLoadout_F: B_T_UAV_03_dynamicLoadout_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_03_dynamicLoadout_F.jpg";
		_generalMacro="B_A_UAV_03_dynamicLoadout_F";
		scope=2;
		scopeCurator=2;
		DLC="Aegis";
		side=1;
		faction="BLU_A_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527942476";
};
