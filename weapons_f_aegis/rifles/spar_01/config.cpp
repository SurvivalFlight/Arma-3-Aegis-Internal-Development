class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_SPAR_01
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Rifles_SPAR_01"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_SPAR_01_blk_ERCO_Pointer_Snds_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_blk_Holo_Pointer_Snds_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_khk_Holo_Pointer_Snds_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F",
			"arifle_SPAR_01_khk_ERCO_Pointer_Snds_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_khk_Holo_Pointer_Snds_F",
			"arifle_SPAR_01_snd_ERCO_Pointer_Snds_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_snd_Holo_Pointer_Snds_F"
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
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		magazines[]+=
		{
			"20Rnd_556x45_Stanag",
			"20Rnd_556x45_Stanag_Tracer_Red",
			"20Rnd_556x45_Stanag_Tracer_Green",
			"20Rnd_556x45_Stanag_Tracer_Yellow",
			"20Rnd_556x45_Stanag_red",
			"20Rnd_556x45_Stanag_green"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\Anim\DMR_02.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]+=
				{
					"muzzle_mzls_M"
				};
			};
		};
	};
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_GL_base_F;
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_CO.paa"
		};
	};
	class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa",
			"\A3\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_CO.paa"
		};
	};
	class arifle_SPAR_01_blk_ERCO_Pointer_Snds_F: arifle_SPAR_01_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_blk_ERCO_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_SPAR_01_blk_Holo_Pointer_Snds_F: arifle_SPAR_01_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_blk_Holo_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_SPAR_01_khk_ERCO_Pointer_Snds_F: arifle_SPAR_01_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_khk_ERCO_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_khk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_khk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_khk_F";
			};
		};
	};
	class arifle_SPAR_01_khk_Holo_Pointer_Snds_F: arifle_SPAR_01_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_khk_Holo_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_khk_F";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_khk_F";
			};
		};
	};
	class arifle_SPAR_01_snd_ERCO_Pointer_Snds_F: arifle_SPAR_01_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_snd_ERCO_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_snd_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_snd_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_snd_F";
			};
		};
	};
	class arifle_SPAR_01_snd_Holo_Pointer_Snds_F: arifle_SPAR_01_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_snd_Holo_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_snd_F";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_snd_F";
			};
		};
	};
	class arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_blk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_GL_blk_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M";
			};
		};
	};
	class arifle_SPAR_01_GL_khk_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_khk_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_GL_khk_Holo_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_GL_khk_F";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_khk_F";
			};
		};
	};
	class arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F: arifle_SPAR_01_GL_snd_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F";
		baseWeapon="arifle_SPAR_01_GL_snd_F";
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
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_M_snd_F";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
