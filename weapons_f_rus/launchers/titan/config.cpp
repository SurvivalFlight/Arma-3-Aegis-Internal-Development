class CfgPatches
{
	class A3_Weapons_F_Rus_Launchers_Titan
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis_Launchers_Titan"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Weapon_launch_R_Titan_F",
			"Weapon_launch_R_Titan_short_F"
		};
		weapons[]=
		{
			"launch_R_Titan_F",
			"launch_R_Titan_short_F"
		};
	};
};
class CfgWeapons
{
	class launch_Titan_base;
	class launch_R_Titan_F: launch_Titan_base
	{
		author="$STR_A3_Night515";
		_generalMacro="launch_R_Titan_F";
		scope=2;
		displayName="Titan MPRL (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Rus\Launchers\Titan\Data\launch_R_Titan_F_01_CO.paa",
			"\A3\Weapons_F_Rus\Launchers\Titan\Data\launch_R_Titan_F_02_CO.paa"
		};
	};
	class launch_Titan_short_base;
	class launch_R_Titan_short_F: launch_Titan_short_base
	{
		author="$STR_A3_Night515";
		_generalMacro="launch_R_Titan_short_F";
		scope=2;
		displayName="Titan MPRL Compact (Black)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Rus\Launchers\Titan\Data\launch_R_Titan_F_01_CO.paa",
			"\A3\Weapons_F_Rus\Launchers\Titan\Data\launch_R_Titan_short_F_02_CO.paa"
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class Weapon_launch_R_Titan_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Titan MPRL (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class _xx_launch_R_Titan_F
			{
				weapon="launch_R_Titan_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=1;
			};
		};
	};
	class Weapon_launch_R_Titan_short_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Titan MPRL Compact (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class _xx_launch_R_Titan_short_F
			{
				weapon="launch_R_Titan_short_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528020994";
};
