class CfgPatches
{
	class A3_Weapons_F_Aegis_Launchers_RPG32
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Launchers_RPG32"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_launch_RPG32_black_F"
		};
		weapons[]=
		{
			"launch_RPG32_black_F"
		};
	};
};
class CfgWeapons
{
	class launch_RPG32_F;
	class launch_RPG32_black_F: launch_RPG32_F
	{
		author="$STR_A3_Night515";
		_generalMacro="launch_RPG32_black_F";
		baseWeapon="launch_RPG32_black_F";
		displayName="RPG-42 Alamut (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Launchers\RPG32\Data\RPG_32_body_black_CO.paa",
			"\A3\Weapons_F\Launchers\RPG32\Data\RPG_32_optics_CO.paa"
		};
		picture="\A3\Weapons_F_Aegis\Launchers\RPG32\Data\UI\gear_RPG32_black_X_CA.paa";
		DLC="Aegis";
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_launch_RPG32_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="RPG-42 Alamut (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class _xx_launch_RPG32_black_F
			{
				weapon="launch_RPG32_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
