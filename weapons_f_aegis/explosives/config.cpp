class CfgPatches
{
	class A3_Weapons_F_Aegis_Explosives
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Explosives"
		};
		requiredVersion=0.1;
		units[]=
		{
			"TripFlare"
		};
		weapons[]={};
	};
};
class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"FlareWireMuzzle"
		};
		class ClassicMineRangeMuzzle;
		class FlareWireMuzzle: ClassicMineRangeMuzzle
		{
			magazines[]=
			{
				"TripFlare_Wire_Mag"
			};
			displayName="Tripwire Flare";
		};
	};
};
class CfgVehicles
{
	class MineGeneric;
	class MineBase;
	class TripFlare: MineBase
	{
		author="$STR_A3_Night515";
		mapSize=3.0599999;
		editorPreview="\A3\EditorPreviews_F_Aegis\Data\CfgVehicles\TripFlare.jpg";
		_generalMacro="TripFlare";
		scope=2;
		ammo="TripFlare_Wire_Ammo";
		displayName="Tripwire Flare";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		model="\A3\Weapons_F\Explosives\Flare_tripwire.p3d";
		descriptionShort="Type: Tripwire flare&lt;br /&gt;Rounds: 1&lt;br /&gt;Used on: Ground";
		class Library
		{
			libTextDesc="Tripwire flares consist of a dug-in flare and a 5m wire. They are very hard to spot, and are used to secure an area and to guard against infiltration.";
		};
	};
};
class CfgAmmo
{
	class DirectionalBombBase;
	class TripFlare_Wire_Ammo: DirectionalBombBase
	{
		defaultMagazine="TripFlare_Wire_Mag";
		explosionEffects="CounterMeasureFlare";
		craterEffects="";
		directionalExplosion=0;
		hit=0;
		indirectHit=0;
		indirectHitRange=1;
		triggerWhenDestroyed=0;
		model="\A3\Weapons_F\Explosives\Flare_tripwire.p3d";
		mineModelDisabled="\A3\Weapons_F\Explosives\Flare_tripwire_d.p3d";
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\flare_gun\flaregun_1",
			1,
			1,
			700
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\flare_gun\flaregun_2",
			1,
			1,
			700
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
		soundTrigger[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Trigger_01",
			1,
			1,
			20
		};
		soundActivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Placement_01",
			1.7782794,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Deactivate_01",
			1.9952624,
			1,
			20
		};
		submunitionAmmo="TripFlare_Wire_Ammo_Deploy";
		submunitionInitSpeed=0;
		mineTrigger="WireTrigger";
		mineInconspicuousness=30;
	};
	class FlareBase;
	class TripFlare_Wire_Ammo_Deploy: FlareBase
	{
		model="\A3\Weapons_F\Ammo\flare_red";
		lightColor[]={0.5,0.25,0.25,0};
		useFlare=1;
		flareSize=3;
		deflecting=0;
		smokeColor[]={1,1,1,0.5};
		effectFlare="CounterMeasureFlare";
		brightness=8;
		size=1;
		triggerTime=0;
		triggerSpeedCoef=1;
	};
};
class CfgMagazines
{
	class ATMine_Range_Mag;
	class TripFlare_Wire_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Night515";
		mass=20;
		ammo="TripFlare_Wire_Ammo";
		displayName="Tripwire Flare";
		picture="\A3\Weapons_F\Data\UI\gear_Flare_tripwire_CA.paa";
		model="\A3\Weapons_F\Explosives\Flare_tripwire_i.p3d";
		descriptionShort="Type: Tripwire flare&lt;br /&gt;Rounds: 1&lt;br /&gt;Used on: Ground";
		class Library
		{
			libTextDesc="Tripwire flares consist of a dug-in flare and a 5m wire. They are very hard to spot, and are used to secure an area and to guard against infiltration.";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
