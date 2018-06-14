class CfgPatches
{
	class A3_Weapons_F_Rus_Rifles_AK12
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis_Rifles_AK12"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_AK12_ACO_F",
			"arifle_AK12_ACO_Pointer_F",
			"arifle_AK12_ACO_Pointer_Snds_F",
			"arifle_AK12_GL_ACO_Pointer_F",
			"arifle_AK12_GL_ACO_Pointer_Snds_F",
			"arifle_AK12_GL_MRCO_Pointer_F",
			"arifle_AK12_MRCO_Pointer_F",
			"arifle_AK12_MRCO_Pointer_Snds_F"
		};
	};
};
class CfgWeapons
{
	class arifle_AK12_F;
	class arifle_AK12_ACO_Pointer_F: arifle_AK12_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_ACO_Pointer_F";
		baseWeapon="arifle_AK12_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_AK12_ACO_F: arifle_AK12_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_ACO_F";
		baseWeapon="arifle_AK12_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class arifle_AK12_ACO_Pointer_Snds_F: arifle_AK12_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_ACO_Pointer_Snds_F";
		baseWeapon="arifle_AK12_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
		};
	};
	class arifle_AK12_MRCO_Pointer_F: arifle_AK12_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_MRCO_Pointer_F";
		baseWeapon="arifle_AK12_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_AK12_MRCO_Pointer_snds_F: arifle_AK12_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_MRCO_Pointer_snds_F";
		baseWeapon="arifle_AK12_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
		};
	};
	class arifle_AK12_GL_F;
	class arifle_AK12_GL_ACO_Pointer_F: arifle_AK12_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_GL_ACO_Pointer_F";
		baseWeapon="arifle_AK12_GL_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_AK12_GL_ACO_Pointer_Snds_F: arifle_AK12_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_GL_ACO_Pointer_Snds_F";
		baseWeapon="arifle_AK12_GL_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
		};
	};
	class arifle_AK12_GL_MRCO_Pointer_F: arifle_AK12_GL_F
	{
		author="$STR_A3_Night515";
		_generalMacro="arifle_AK12_GL_MRCO_Pointer_F";
		baseWeapon="arifle_AK12_GL_F";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528020994";
};
