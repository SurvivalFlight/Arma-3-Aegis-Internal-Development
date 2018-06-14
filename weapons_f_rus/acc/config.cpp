class CfgPatches
{
	class A3_Weapons_F_Rus_Acc
	{
		addonRootClass="A3_Weapons_F_Rus";
		requiredAddons[]=
		{
			"A3_Weapons_F_Aegis_Acc"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Item_muzzle_snds_545_F"
		};
		weapons[]=
		{
			"muzzle_snds_545_F",
			"muzzle_snds_H"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class muzzle_snds_545_F: muzzle_snds_H
	{
		author="$STR_A3_Night515";
		_generalMacro="muzzle_snds_545_F";
		displayName="Sound Suppressor (5.45 mm)";
		model="\A3\Weapons_F_Rus\Acc\acca_snds_545_F.p3d";
		picture="\A3\Weapons_F_Rus\Acc\Data\UI\icon_muzzle_snds_545_F_CA.paa";
		class ItemInfo: ItemInfo
		{
			mass=8;
			class MagazineCoef
			{
				initSpeed=1.05;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.30000001;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.1;
		DLC="Rus";
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Item_muzzle_snds_545_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Sound Suppressor (5.45 mm)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_WeaponAttachments";
		editorSubcategory="EdSubcat_FrontSlot";
		vehicleClass="WeaponAccessories";
		class TransportItems
		{
			class _xx_muzzle_snds_545_F
			{
				name="muzzle_snds_545_F";
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
