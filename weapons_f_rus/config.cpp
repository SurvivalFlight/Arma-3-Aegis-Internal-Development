class CfgPatches
{
	class A3_Weapons_F_Rus
	{
		author="$STR_A3_Night515";
		name="Arma 3 Russian Army - Weapons and Accessories";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"R_UavTerminal"
		};
	};
};
class CfgAmmo
{
	class IRStrobeBase;
	class R_IRStrobe: IRStrobeBase
	{
		model="\A3\Weapons_F_EPB\Ammo\I_IRstrobe_F.p3d";
		class NVGMarkers
		{
			class Blinking1
			{
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 150Rnd_762x54_Box;
	class 200Rnd_762x54_Box: 150Rnd_762x54_Box
	{
		displayName="7.62 mm 200Rnd Box";
		descriptionShort="Caliber: 7.62x54 mm</ br>Rounds: 200</ br>Used in: PKP";
		ammo="B_762x54_Tracer_Yellow";
		count=200;
		picture="\A3\Weapons_F_Rus\Data\UI\icon_200Rnd_762x54_Box_CA.paa";
		mass=66;
	};
	class 150Rnd_762x54_Box_Tracer;
	class 200Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box_Tracer
	{
		displayName="7.62 mm 200Rnd Tracer (Yellow) Box";
		descriptionShort="Caliber: 7.62x54 mm Tracer - Yellow</ br>Rounds: 200</ br>Used in: PKP";
		ammo="B_762x54_Tracer_Yellow";
		count=200;
		picture="\A3\Weapons_F_Rus\Data\UI\icon_200Rnd_762x54_Box_CA.paa";
		lastRoundsTracer=200;
		mass=66;
	};
	class 45Rnd_545x39_Mag_F: CA_Magazine
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="5.45 mm 45Rnd Reload Tracer (Yellow) Mag";
		descriptionShort="Caliber: 5.45x39 mm</ br>Rounds: 45</ br>Used in: RPK-107";
		ammo="B_545x39_Ball_F";
		count=45;
		initSpeed=735;
		picture="\A3\Weapons_F_Rus\Data\UI\icon_45Rnd_545x39_Mag_F_CA.paa";
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=16;
	};
	class 45Rnd_545x39_Mag_Green_F: 45Rnd_545x39_Mag_F
	{
		author="$STR_A3_Night515";
		displayName="5.45 mm 45Rnd Reload Tracer (Green) Mag";
		ammo="B_545x39_Ball_Green_F";
	};
	class 45Rnd_545x39_Mag_Tracer_F: 45Rnd_545x39_Mag_F
	{
		author="$STR_A3_Night515";
		displayName="5.45 mm 45Rnd Tracer (Yellow) Mag";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Rus\Data\UI\icon_45Rnd_545x39_Mag_Tracer_F_CA.paa";
		tracersEvery=1;
		lastRoundsTracer=45;
	};
	class 45Rnd_545x39_Mag_Tracer_Green_F: 45Rnd_545x39_Mag_Tracer_F
	{
		author="$STR_A3_Night515";
		displayName="5.45 mm 45Rnd Tracer (Green) Mag";
		ammo="B_545x39_Ball_Green_F";
		picture="\A3\Weapons_F_Rus\Data\UI\icon_45Rnd_545x39_Mag_Tracer_Green_F_CA.paa";
	};
	class I_IR_Grenade;
	class R_IR_Grenade: I_IR_Grenade
	{
		author="$STR_A3_Night515";
		ammo="R_IRStrobe";
		displayName="IR Grenade [Russia]";
		descriptionShort="$STR_A3_CfgMagazines_R_IR_Grenade1";
	};
	class placed_I_IR_grenade;
	class placed_R_IR_grenade: placed_I_IR_grenade
	{
		author="$STR_A3_Night515";
		_generalMacro="placed_R_IR_grenade";
		ammo="R_IRStrobe";
		displayName="IR Grenade [Russia]";
	};
};
class CfgRecoils
{
	class recoil_default;
	class recoil_sk12: recoil_default
	{
		muzzleOuter[]={1,3,0.60000002,0.60000002};
		kickBack[]={0.079999998,0.1};
		temporary=0.02;
	};
	class recoil_ak107: recoil_default
	{
		muzzleOuter[]={0.2,0.80000001,0.30000001,0.30000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.0099999998;
	};
	class recoil_ak105: recoil_default
	{
		muzzleOuter[]={0.2,0.69999999,0.30000001,0.30000001};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.0099999998;
	};
	class recoil_rpk: recoil_default
	{
		muzzleOuter[]={0.2,0.80000001,0.30000001,0.2};
		kickBack[]={0.029999999,0.059999999};
		temporary=0.0099999998;
	};
	class recoil_mmg_03: recoil_default
	{
		muzzleOuter[]={0.30000001,1,0.30000001,0.40000001};
		kickBack[]={0.039999999,0.079999998};
		temporary=0.0099999998;
	};
	class recoil_smg_06: recoil_default
	{
		muzzleOuter[]={0.2,0.40000001,0.30000001,0.2};
		kickBack[]={0.02,0.029999999};
		temporary=0.0099999998;
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		class IRGrenade: ThrowMuzzle
		{
			magazines[]+=
			{
				"R_IR_Grenade"
			};
		};
	};
	class ItemCore;
	class UavTerminal_base: ItemCore
	{
		class ItemInfo;
	};
	class R_UavTerminal: UavTerminal_base
	{
		author="$STR_A3_Night515";
		_generalMacro="R_UavTerminal";
		scope=2;
		displayName="UAV Terminal [Russia]";
		model="\A3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_F.p3d";
		picture="\A3\Weapons_F_Aegis\\Items\Data\UI\gear_UAV_controller_rus_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Items\Data\UAV_controller_rus_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			side=2;
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528020994";
};
