class CfgPatches
{
	class A3_Weapons_F_Aegis_Launchers_MRAWS
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Tank_Launchers_MRAWS"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_launch_MRAWS_black_F",
			"Weapon_launch_MRAWS_black_rail_F"
		};
		weapons[]=
		{
			"launch_MRAWS_black_F",
			"launch_MRAWS_black_rail_F"
		};
	};
};
class CfgWeapons
{
	class launch_MRAWS_base_F;
	class launch_MRAWS_black_F: launch_MRAWS_base_F
	{
		author="$STR_A3_POLPOX";
		_generalMacro="launch_MRAWS_black_F";
		baseWeapon="launch_MRAWS_black_F";
		scope=2;
		displayName="MAAWS Mk4 Mod 1 (Black)";
		picture="\A3\Weapons_F_Aegis\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_black_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Launchers\MRAWS\Data\launch_MRAWS_black_01_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_CO.paa"
		};
	};
	class launch_MRAWS_olive_rail_F;
	class launch_MRAWS_black_rail_F: launch_MRAWS_olive_rail_F
	{
		author="$STR_A3_POLPOX";
		_generalMacro="launch_MRAWS_black_rail_F";
		baseWeapon="launch_MRAWS_black_rail_F";
		scope=2;
		displayName="MAAWS Mk4 Mod 0 (Black)";
		picture="\A3\Weapons_F_Aegis\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_black_rail_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Launchers\MRAWS\Data\launch_MRAWS_black_01_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_CO.paa"
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_launch_MRAWS_black_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="MAAWS Mk4 Mod 1 (Black)";
		author="$STR_A3_POLPOX";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class _xx_launch_MRAWS_black_F
			{
				weapon="launch_MRAWS_black_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=1;
			};
		};
	};
	class Weapon_launch_MRAWS_black_rail_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="MAAWS Mk4 Mod 0 (Black)";
		author="$STR_A3_POLPOX";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class _xx_launch_MRAWS_black_rail_F
			{
				weapon="launch_MRAWS_black_rail_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
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
