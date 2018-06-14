class CfgPatches
{
	class A3_Weapons_F_Aegis_Rifles_MX_Black
	{
		addonRootClass="A3_Weapons_F_Aegis";
		requiredAddons[]=
		{
			"A3_Weapons_F_Rifles_MX_Black",
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_MX_Black_ACO_flash_F",
			"arifle_MX_Black_ACO_pointer_F",
			"arifle_MX_Black_ACO_pointer_snds_F",
			"arifle_MX_Black_Hamr_flash_F",
			"arifle_MX_Black_Holo_pointer_F",
			"arifle_MX_Black_Hamr_pointer_snds_F",
			"arifle_MX_GL_Black_ACO_flash_F",
			"arifle_MX_GL_Black_ACO_pointer_F",
			"arifle_MX_GL_Black_ACO_pointer_snds_F",
			"arifle_MX_GL_Black_Holo_pointer_F",
			"arifle_MX_GL_Black_Holo_pointer_snds_F",
			"arifle_MX_SW_Black_flash_F",
			"arifle_MX_SW_Black_pointer_F",
			"arifle_MX_SW_Black_pointer_snds_F",
			"arifle_MXC_Black_ACO_F",
			"arifle_MXC_Black_ACO_pointer_F",
			"arifle_MXC_Black_ACO_pointer_snds_F",
			"arifle_MXC_Black_Hamr_pointer_F",
			"arifle_MXC_Black_Holo_F",
			"arifle_MXC_Black_Holo_flash_F",
			"arifle_MXC_Black_Holo_pointer_F",
			"arifle_MXC_Black_Holo_pointer_snds_F",
			"arifle_MXM_Black_MOS_FL_BI_F",
			"arifle_MXM_Black_MOS_LP_BI_F",
			"arifle_MXM_Black_MOS_LP_BI_S_F",
			"arifle_MXM_Black_TWSS_LP_BI_F"
		};
	};
};
class CfgWeapons
{
	class arifle_MXC_Black_F;
	class arifle_MXC_Black_ACO_pointer_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_ACO_pointer_F";
		baseWeapon="arifle_MXC_Black_F";
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
	class arifle_MXC_Black_ACO_pointer_snds_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_ACO_pointer_snds_F";
		baseWeapon="arifle_MXC_Black_F";
		scope=1;
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
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_Black_ACO_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_ACO_F";
		baseWeapon="arifle_MXC_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_MXC_Black_Hamr_pointer_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_Hamr_pointer_F";
		baseWeapon="arifle_MXC_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_Black_Holo_pointer_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_Holo_pointer_F";
		baseWeapon="arifle_MXC_Black_F";
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
		};
	};
	class arifle_MXC_Black_Holo_pointer_snds_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_Holo_pointer_snds_F";
		baseWeapon="arifle_MXC_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_Black_Holo_flash_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_Holo_flash_F";
		baseWeapon="arifle_MXC_Black_F";
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
				item="acc_flashlight";
			};
		};
	};
	class arifle_MXC_Black_Holo_F: arifle_MXC_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXC_Black_Holo_F";
		baseWeapon="arifle_MXC_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
		};
	};
	class arifle_MX_Black_F;
	class arifle_MX_Black_ACO_pointer_F: arifle_MX_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_Black_ACO_pointer_F";
		baseWeapon="arifle_MX_Black_F";
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
	class arifle_MX_Black_ACO_pointer_snds_F: arifle_MX_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_Black_ACO_pointer_snds_F";
		baseWeapon="arifle_MX_Black_F";
		scope=1;
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
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_Black_ACO_flash_F: arifle_MX_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_Black_ACO_flash_F";
		baseWeapon="arifle_MX_Black_F";
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
				item="acc_flashlight";
			};
		};
	};
	class arifle_MX_Black_Hamr_pointer_snds_F: arifle_MX_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_Black_Hamr_pointer_snds_F";
		baseWeapon="arifle_MX_Black_F";
		scope=1;
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
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_Black_Hamr_flash_F: arifle_MX_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_Black_Hamr_flash_F";
		baseWeapon="arifle_MX_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_MX_Black_Holo_pointer_F: arifle_MX_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_Black_Holo_pointer_F";
		baseWeapon="arifle_MX_Black_F";
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
		};
	};
	class arifle_MX_GL_Black_F;
	class arifle_MX_GL_Black_ACO_pointer_F: arifle_MX_GL_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_Black_ACO_pointer_F";
		baseWeapon="arifle_MX_GL_Black_F";
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
	class arifle_MX_GL_Black_ACO_pointer_snds_F: arifle_MX_GL_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_Black_ACO_pointer_snds_F";
		baseWeapon="arifle_MX_GL_Black_F";
		scope=1;
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
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_GL_Black_ACO_flash_F: arifle_MX_GL_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_Black_ACO_flash_F";
		baseWeapon="arifle_MX_GL_Black_F";
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
				item="acc_flashlight";
			};
		};
	};
	class arifle_MX_GL_Black_Holo_pointer_F: arifle_MX_GL_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_Black_Holo_pointer_F";
		baseWeapon="arifle_MX_GL_Black_F";
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
		};
	};
	class arifle_MX_GL_Black_Holo_pointer_snds_F: arifle_MX_GL_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_GL_Black_Holo_pointer_snds_F";
		baseWeapon="arifle_MX_GL_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_SW_Black_F;
	class arifle_MX_SW_Black_pointer_F: arifle_MX_SW_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_SW_Black_pointer_F";
		baseWeapon="arifle_MX_SW_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MX_SW_Black_pointer_snds_F: arifle_MX_SW_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_SW_Black_pointer_snds_F";
		baseWeapon="arifle_MX_SW_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MX_SW_Black_flash_F: arifle_MX_SW_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MX_SW_Black_flash_F";
		baseWeapon="arifle_MX_SW_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MXM_Black_F;
	class arifle_MXM_Black_MOS_LP_BI_F: arifle_MXM_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_Black_MOS_LP_BI_F";
		baseWeapon="arifle_MXM_Black_F";
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
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MXM_Black_MOS_LP_BI_S_F: arifle_MXM_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_Black_MOS_LP_BI_S_F";
		baseWeapon="arifle_MXM_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MXM_Black_MOS_FL_BI_F: arifle_MXM_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_Black_MOS_FL_BI_F";
		baseWeapon="arifle_MXM_Black_F";
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
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MXM_Black_TWSS_LP_BI_F: arifle_MXM_Black_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_MXM_Black_TWSS_LP_BI_F";
		baseWeapon="arifle_MXM_Black_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_tws_sniper";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528895047";
};
