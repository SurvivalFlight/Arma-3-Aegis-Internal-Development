class CfgPatches
{
	class A3_Characters_F_Rus_Facewear
	{
		addonRootClass="A3_Characters_F_Rus";
		requiredAddons[]=
		{
			"A3_Characters_F_Aegis_Facewear"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgGlasses
{
	class None;
	class G_Combat: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			50
		};
	};
	class G_Lowprofile: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Shades_Black: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Shades_Blue: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Shades_Green: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Shades_Red: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Shades_Yellowred: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Squares: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Squares_Tinted: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Tactical_Clear: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			50
		};
	};
	class G_Tactical_Black: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			50
		};
	};
	class G_Tactical_Yellow: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			50
		};
	};
	class G_Tactical_Camo: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			50
		};
	};
	class G_Aviator: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			10
		};
	};
	class G_Shooting: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			100
		};
	};
	class G_Shooting_blk: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			100
		};
	};
	class G_Combat_Goggles_tna_F: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			50
		};
	};
	class G_Combat_Goggles_blk_F: None
	{
		identityTypes[]+=
		{
			"G_RUS_default",
			50
		};
	};
	class G_Diving;
	class G_R_Diving: G_Diving
	{
		author="$STR_A3_Night515";
		_generalMacro="G_R_Diving";
		displayname="Diving Goggles [Russia]";
		model="\A3\Characters_F_EPB\Heads\Glasses\G_I_Diving.p3d";
		picture="\A3\Characters_F_Rus\Facewear\Data\UI\icon_G_R_Diving_CA.paa";
		identityTypes[]={};
		DLC="Rus";
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528893591";
};
