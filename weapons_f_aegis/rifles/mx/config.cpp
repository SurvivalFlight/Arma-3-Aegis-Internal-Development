class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_MX
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rifles_MX",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_MX_ACO_pointer_snds_F",
			"arifle_MX_GL_Holo_pointer_F",
			"arifle_MX_GL_Holo_pointer_snds_F",
			"arifle_MX_GL_khk_ACO_Pointer_F",
			"arifle_MX_GL_khk_Holo_Pointer_F",
			"arifle_MX_khk_TWS_Pointer_Snds_F",
			"arifle_MX_RCO_pointer_snds_F",
			"arifle_MX_SW_khk_Pointer_Bipod_Snds_F",
			"arifle_MX_SW_pointer_snds_F",
			"arifle_MX_TWS_pointer_snds_F",
			"arifle_MXC_ACO_pointer_snds_F",
			"arifle_MXC_Holo_pointer_snds_F",
			"arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F",
			"arifle_MXM_khk_TWSS_Pointer_Bipod_F",
			"arifle_MXM_MOS_LP_BI_F",
			"arifle_MXM_MOS_LP_BI_S_F",
			"arifle_MXM_TWSS_LP_BI_F"
		};
	};
};
class MuzzleSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_H"
				};
			};
		};
		class GL_3GL_F: UGL_F
		{
			magazines[]=
			{
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell",
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell"
			};
		};
	};
	class arifle_MXC_F;
	class arifle_MXC_Holo_pointer_snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_ACO_pointer_snds_F: arifle_MXC_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_F;
	class arifle_MX_ACO_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_RCO_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_TWS_pointer_snds_F: arifle_MX_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_TWS_pointer_snds_F";
		baseWeapon="arifle_MX_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_TWS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_khk_F;
	class arifle_MX_khk_TWS_Pointer_Snds_F: arifle_MX_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_khk_TWS_Pointer_Snds_F";
		baseWeapon="arifle_MX_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_TWS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_GL_F;
	class arifle_MX_GL_Holo_pointer_F: arifle_MX_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_Holo_pointer_F";
		baseWeapon="arifle_MX_GL_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_GL_Holo_pointer_snds_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_GL_khk_F;
	class arifle_MX_GL_khk_ACO_Pointer_F: arifle_MX_GL_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_khk_ACO_Pointer_F";
		baseWeapon="arifle_MX_GL_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_GL_khk_Holo_Pointer_F: arifle_MX_GL_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_khk_Holo_Pointer_F";
		baseWeapon="arifle_MX_GL_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_SW_F;
	class arifle_MX_SW_pointer_snds_F: arifle_MX_SW_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_SW_pointer_snds_F";
		baseWeapon="arifle_MX_SW_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_MX_SW_khk_F;
	class arifle_MX_SW_khk_Pointer_Bipod_Snds_F: arifle_MX_SW_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_SW_khk_Pointer_Bipod_Snds_F";
		baseWeapon="arifle_MX_SW_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_khk_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class arifle_MXM_F;
	class arifle_MXM_MOS_LP_BI_F: arifle_MXM_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_MOS_LP_BI_F";
		baseWeapon="arifle_MXM_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_MXM_MOS_LP_BI_S_F: arifle_MXM_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_MOS_LP_BI_S_F";
		baseWeapon="arifle_MXM_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_snd_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_MXM_TWSS_LP_BI_F: arifle_MXM_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_TWSS_LP_BI_F";
		baseWeapon="arifle_MXM_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_TWS_sniper";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
	};
	class arifle_MXM_khk_F;
	class arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F: arifle_MXM_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F";
		baseWeapon="arifle_MXM_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H_khk_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
	class arifle_MXM_khk_TWSS_Pointer_Bipod_F: arifle_MXM_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_khk_TWSS_Pointer_Bipod_F";
		baseWeapon="arifle_MXM_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_TWS_sniper";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_khk";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
