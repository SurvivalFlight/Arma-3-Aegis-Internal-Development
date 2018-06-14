class CfgPatches
{
	class A3_Soft_F_Rus_UGV_01
	{
		addonRootClass="A3_Soft_F_Rus";
		requiredAddons[]=
		{
			"A3_Soft_F_Aegis_UGV_01"
		};
		requiredVersion=0.1;
		units[]=
		{
			"I_RU_UGV_01_F",
			"I_RU_UGV_01_rcws_F"
		};
		weapons[]={};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class ViewOptics;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class Components;
	};
	class UGV_01_base_F: Car_F
	{
		class TextureSources
		{
			class Rus
			{
				DisplayName="Russia";
				author="$STR_A3_Night515";
				textures[]=
				{
					"\A3\Soft_F_Rus\UGV_01\Data\UGV_01_ext_rus_CO.paa",
					"\A3\Soft_F_Rus\UGV_01\Data\UGV_01_int_rus_CO.paa",
					"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa"
				};
				factions[]=
				{
					"IND_RU_F"
				};
			};
		};
	};
	class I_UGV_01_F;
	class I_RU_UGV_01_F: I_UGV_01_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_UGV_01_F.jpg";
		_generalMacro="I_RU_UGV_01_F";
		displayName="UGV Mishka";
		faction="IND_RU_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\UGV_01\Data\UGV_01_ext_rus_CO.paa",
			"\A3\Soft_F_Rus\UGV_01\Data\UGV_01_int_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		DLC="Rus";
	};
	class I_UGV_01_rcws_F;
	class I_RU_UGV_01_rcws_F: I_UGV_01_rcws_F
	{
		author="$STR_A3_Night515";
		editorPreview="\A3\EditorPreviews_F_Rus\Data\CfgVehicles\I_RU_UGV_01_rcws_F.jpg";
		_generalMacro="I_RU_UGV_01_rcws_F";
		displayName="UGV Mishka RCWS";
		faction="IND_RU_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Rus\UGV_01\Data\UGV_01_ext_rus_CO.paa",
			"\A3\Soft_F_Rus\UGV_01\Data\UGV_01_int_rus_CO.paa",
			"\A3\Data_F_Rus\Vehicles\Turret_rus_CO.paa"
		};
		textureList[]=
		{
			"Rus",
			1
		};
		DLC="Rus";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527283818";
};
