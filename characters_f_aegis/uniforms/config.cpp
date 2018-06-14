class CfgPatches
{
	class A3_Characters_F_Aegis_Uniforms
	{
		addonRootClass="A3_Characters_F_Aegis";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Exp",
			"A3_Characters_F_Orange_Uniforms"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class U_B_CombatUniform_wdl: Uniform_Base
	{
		scope=2;
		displayName="$STR_A3_U_B_CombatUniform_wdl0";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_wdl_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_wdl_CO.paa"
		};
	};
	class U_B_CombatUniform_sgg: Uniform_Base
	{
		scope=2;
		displayName="$STR_A3_U_B_CombatUniform_sgg0";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_sgg_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_sage_CO.paa"
		};
	};
	class U_B_CombatUniform_desert: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (Desert)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_desert_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_desert_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_SoldierD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_mcam_worn: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_soldier_dirty_F";
		};
	};
	class U_B_CombatUniform_mcam_tshirt: Uniform_Base
	{
		displayName="$STR_A3_combat_fatigues_tee0";
	};
	class U_B_CombatUniform_wdl_tshirt: Uniform_Base
	{
		scope=2;
		displayName="$STR_A3_U_B_CombatUniform_wdl_tshirt0";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_wdl_tshirt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_wdl_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="B_SoldierW_AR_F";
		};
	};
	class U_B_CombatUniform_sgg_tshirt: Uniform_Base
	{
		scope=2;
		displayName="$STR_A3_U_B_CombatUniform_sgg_tshirt0";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_sgg_tshirt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_sage_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="B_SoldierS_AR_F";
		};
	};
	class U_B_CombatUniform_desert_tshirt: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (Desert, Tee)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_desert_tshirt_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_desert_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_SoldierD_AR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_mcam_vest: Uniform_Base
	{
		displayName="$STR_A3_recon_fatigues0";
	};
	class U_B_CombatUniform_wdl_vest: Uniform_Base
	{
		scope=2;
		displayName="$STR_A3_U_B_CombatUniform_wdl_vest0";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_wdl_vest_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_wdl_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="B_SoldierW_SL_F";
		};
	};
	class U_B_CombatUniform_sgg_vest: Uniform_Base
	{
		scope=2;
		displayName="$STR_A3_U_B_CombatUniform_sgg_vest0";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_sgg_vest_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_sage_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="B_SoldierS_SL_F";
		};
	};
	class U_B_CombatUniform_desert_vest: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (Desert, Rolled-up)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CombatUniform_desert_vest_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\clothing_desert_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_SoldierD_SL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_MillerBody: Uniform_Base
	{
		scope=2;
		picture="\A3\Characters_F\Data\UI\icon_U_C_Miller_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="I_G_Story_SF_Captain_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_KerryBody: Uniform_Base
	{
		scope=2;
		picture="\A3\Characters_F\Data\UI\icon_U_B_CombatUniform_mcam_tshirt_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_BLUFOR_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="B_Story_Protagonist_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_Tank_sand_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="U_Tank_sand_F";
		scope=2;
		displayName="Tanker Coveralls [NATO]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Tank_sand_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_Tank_sand_F_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_crew_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_B_A_Soldier_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (UK MTP)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_ukmtp_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_dpm_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (DPM)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_dpm_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_dpm_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_dpm_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_ddpm_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (DDPM)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_ddpm_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_ddpm_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_ddpm_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_AR_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (UK MTP, Tee)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_AR_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_ukmtp_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_AR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_AR_dpm_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (DPM, Tee)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_AR_dpm_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_dpm_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_AR_dpm_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_AR_ddpm_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (DDPM, Tee)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_AR_ddpm_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_ddpm_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_AR_ddpm_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_SL_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (UK MTP, Rolled-up)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_SL_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_ukmtp_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_SL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_SL_dpm_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (DPM, Rolled-up)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_SL_dpm_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_dpm_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_SL_dpm_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Soldier_SL_ddpm_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Fatigues (DDPM, Rolled-up)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Soldier_SL_ddpm_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_ddpm_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Soldier_SL_ddpm_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_A_Sniper_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Ghillie Suit (UK MTP) [NATO]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_Sniper_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_BA_Soldier_F_ukmtp_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Sniper_F";
			containerClass="Supply60";
			mass=60;
		};
	};
	class U_Tank_ukmtp_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="U_Tank_ukmtp_F";
		scope=2;
		displayName="Tanker Coveralls (UK) [NATO]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Tank_ukmtp_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_Tank_ukmtp_F_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_A_Crew_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_B_T_Soldier_SL_F: Uniform_Base
	{
		displayName="$STR_A3_CfgWeapons_U_B_T_Soldier_SL_F1";
	};
	class U_C_Commoner1_1: Uniform_Base
	{
		scope=2;
		displayName="Civilian Clothes (Polo, Pattern)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Cloth3_CO.paa"
		};
	};
	class U_C_Commoner1_2: Uniform_Base
	{
		scope=2;
		displayName="Civilian Clothes (Polo, Purple)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Cloth3_v2_CO.paa"
		};
	};
	class U_C_Commoner1_3: Uniform_Base
	{
		scope=2;
		displayName="Civilian Clothes (Polo, Green)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Cloth3_v3_CO.paa"
		};
	};
	class U_C_Commoner1_4: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Polo, White)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Cloth3_v4_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_1_4_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Commoner1_5: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Polo, Brown)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Cloth3_v5_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_1_5_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Commoner1_6: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Polo, Salmon)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Cloth3_bandit_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_1_6_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Commoner1_7: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Polo, Orange)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Cloth3_kabeiroi_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_1_7_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Commoner2_1: Uniform_Base
	{
		scope=2;
		displayName="Civilian Clothes (Jacket, Red)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_CO.paa"
		};
	};
	class U_C_Commoner2_2: Uniform_Base
	{
		scope=2;
		displayName="Civilian Clothes (Jacket, Tan)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_v2_CO.paa"
		};
	};
	class U_C_Commoner2_3: Uniform_Base
	{
		scope=2;
		displayName="Civilian Clothes (Jacket, Blue)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_v3_CO.paa"
		};
	};
	class U_C_Commoner2_4: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Jacket, Brown)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_bandit_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_2_4_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner2_5: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Jacket, Green)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_kabeiroi_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_2_5_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner3_1: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Vest, White-Yellow)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_3_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner3_2: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Vest, Turquoise)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth2_v2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_3_2_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner3_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Vest, Pink)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth2_v3_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_3_3_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner3_4: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Vest, Brown)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth2_bandit_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_3_4_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner3_5: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Vest, Blue)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth2_kabeiroi_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_3_5_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner4_1: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Tee, Blue)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_Miller_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_4_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner4_2: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Tee, Brown)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_Miller_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_cloth4_v2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_4_2_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Commoner4_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Civilian Clothes (Tee, Black-Orange)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_Miller_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth4_v3_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_4_3_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Man_casual_7_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Casual Clothes (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\IG_poloshirt_1_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_Man_casual_7_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Man_casual_8_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Casual Clothes (Brown)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\IG_poloshirt_2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_Man_casual_8_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Man_casual_9_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Casual Clothes (Larkin)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_C_Man_casual_9_F_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_Man_casual_9_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Poor_1: Uniform_Base
	{
		displayName="Worn Clothes (Blue)";
		hiddenSelectionsTextures[]=
		{
			"A3\Characters_F_Aegis\Uniforms\Data\C_Cloth1_CO.paa"
		};
	};
	class U_C_Poor_2: Uniform_Base
	{
		scope=2;
		displayName="Worn Clothes (Yellow)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Poor_2_CA.paa";
	};
	class U_C_Poor_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Worn Clothes (Orange)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Poor_3_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth1_v3_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_Man_Messenger_01_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_HunterBody_grn: Uniform_Base
	{
		displayName="Hunter Clothes (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_HunterBody_grn_CA.paa";
	};
	class U_C_HunterBody_brn: Uniform_Base
	{
		displayName="Hunter Clothes (Brown)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Gamma\Guerrilla\Data\IG_Guerrilla3_1_CO.paa"
		};
	};
	class U_C_Scavenger_1: Uniform_Base
	{
		scope=2;
		displayName="Scavenger Clothes (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\poor_CO.paa"
		};
	};
	class U_C_Scavenger_2: Uniform_Base
	{
		scope=2;
		displayName="Scavenger Clothes (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\poor_v2_CO.paa"
		};
	};
	class U_C_Scavenger_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Scavenger Clothes (Yellow)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\poor_v3_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_p_scavenger_3_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Farmer: Uniform_Base
	{
		scope=2;
		displayName="Worker Clothes (Blue)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth1_v2_CO.paa"
		};
	};
	class U_C_WorkerOveralls: Uniform_Base
	{
		scope=2;
		displayName="Worker Clothes (Black)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth1_v3_CO.paa"
		};
	};
	class U_C_FishermanOveralls: Uniform_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Overalls_CO.paa"
		};
	};
	class U_C_WorkerCoveralls: Uniform_Base
	{
		displayName="Worker Clothes (Red)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\C_Cloth1_CO.paa"
		};
	};
	class U_C_Worker_1: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Worker Coveralls (Black)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_WorkerCoveralls_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\coveralls_black_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_w_coveralls_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Worker_2: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Worker Coveralls (Dirty)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_WorkerCoveralls_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\coveralls_dirty_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_w_coveralls_2_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Worker_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Worker Coveralls (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_WorkerCoveralls_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\coveralls_grey_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_w_coveralls_3_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Worker_4: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Worker Coveralls (Red)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_WorkerCoveralls_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\coveralls_bandit_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_w_coveralls_4_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Worker_5: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Worker Coveralls (Urban)";
		picture="\A3\Characters_F\Data\UI\icon_U_C_WorkerCoveralls_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\coveralls_urbancamo_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_w_coveralls_5_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_PoliceBody: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Police Uniform";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_poloshirtpants_3_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_police_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_PriestBody: Uniform_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\priest_CO.paa"
		};
	};
	class U_C_Functionary_1: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Functionary Clothes (Black)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Functionary_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_functionary_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Functionary_2: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Functionary Clothes (Brown)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Functionary_v2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_functionary_2_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Functionary_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Functionary Clothes (Grey)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\C_Functionary_v3_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_functionary_3_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Man_poor_1_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Worn Clothes (Tank Top, Black)";
		picture="\A3\Characters_F\Data\UI\icon_U_Citizen_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_C_Man_poor_1_F_1_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_Man_poor_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_NikosBody: Uniform_Base
	{
		scope=2;
	};
	class U_NikosAgedBody: Uniform_Base
	{
		scope=2;
		displayName="Nikos Clothes (Aged)";
	};
	class U_I_OfficerUniform: Uniform_Base
	{
		displayName="Officer Fatigues [AAF]";
	};
	class U_I_pilotCoveralls: Uniform_Base
	{
		picture="\A3\Characters_F\Data\UI\icon_U_IR_PilotCoveralls_CA.paa";
	};
	class U_BG_Guerilla1_1: Uniform_Base
	{
		picture="\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_Guerrilla1_1_CA.paa";
	};
	class U_IG_Guerilla1_1: Uniform_Base
	{
		picture="\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
	};
	class U_OG_Guerilla1_1: Uniform_Base
	{
		picture="\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
	};
	class U_IG_Guerilla1_2_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=1;
		displayName="$STR_A3_CfgWeapons_U_BG_Guerilla1_2_F0";
		picture="\A3\Characters_F_Orange\Uniforms\Data\UI\icon_U_G_guerrilla1_2_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Orange\Uniforms\Data\C_Cloth1_olive_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_G_Soldier_A_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_OG_Guerilla1_2_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=1;
		displayName="$STR_A3_CfgWeapons_U_BG_Guerilla1_2_F0";
		picture="\A3\Characters_F_Orange\Uniforms\Data\UI\icon_U_G_guerrilla1_2_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Orange\Uniforms\Data\C_Cloth1_olive_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_G_Soldier_A_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerilla1_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Guerilla Garment (Khaki)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_U_G_Guerrilla1_1_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\C_cloth1_kabeiroi_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_G_Soldier_lite_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_IG_Guerilla1_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=1;
		displayName="Guerilla Garment (Khaki)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_U_G_Guerrilla1_1_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_G_Soldier_lite_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_OG_Guerilla1_3: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=1;
		displayName="Guerilla Garment (Khaki)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_G_Soldier_lite_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerilla3_1: Uniform_Base
	{
		displayName="Guerilla Smocks (Brown)";
	};
	class U_IG_Guerilla3_1: Uniform_Base
	{
		displayName="Guerilla Smocks (Brown)";
	};
	class U_OG_Guerilla3_1: Uniform_Base
	{
		displayName="Guerilla Smocks (Brown)";
	};
	class U_BG_Guerilla3_2: Uniform_Base
	{
		scope=2;
		displayName="Guerilla Smocks (Sand)";
		class ItemInfo: UniformItem
		{
			uniformClass="B_G_Sharpshooter_F";
		};
	};
	class U_IG_Guerilla3_2: Uniform_Base
	{
		displayName="Guerilla Smocks (Sand)";
		class ItemInfo: UniformItem
		{
			uniformClass="I_G_Sharpshooter_F";
		};
	};
	class U_OG_Guerilla3_2: Uniform_Base
	{
		displayName="Guerilla Smocks (Sand)";
		class ItemInfo: UniformItem
		{
			uniformClass="O_G_Sharpshooter_F";
		};
	};
	class U_O_ParamilitaryBody: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Paramilitary Smocks";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_ParamilitaryBody_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\paramilitary_body_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_P_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_SpecopsUniform_blk: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Black) [CSAT]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_SpecopsUniform_blk_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\clothing_blk_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="O_soldier_blk_F";
		};
	};
	class U_O_SpecopsUniform_ocamo: Uniform_Base
	{
		scope=1;
	};
	class U_O_soldier_alt_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Fatigues (Brown Hex) [CSAT]";
		picture="\A3\Characters_F\Data\UI\icon_U_OI_CombatUniform_ocamo_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_soldier_alt_F";
			containerClass="Supply40";
			mass=80;
		};
	};
	class U_O_officer_noInsignia_hex_F: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\officer_noinsignia_hex_CO.paa"
		};
	};
	class U_O_officer_noInsignia_urb_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Light Fatigues (Urban)";
		picture="\A3\Characters_F\Data\UI\icon_U_OI_Officer_ocamo_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\officer_noinsignia_urb_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_officer_U_noinsignia_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	class U_O_officer_noInsignia_alt_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Light Fatigues (Brown Hex)";
		picture="\A3\Characters_F\Data\UI\icon_U_OI_Officer_ocamo_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\officer_hex_noinsignia_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_officer_A_noinsignia_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	class U_OI_Scientist: Uniform_Base
	{
		scope=2;
		displayName="Scientist Clothes [CSAT]";
		picture="\A3\Characters_F_EPC\Data\UI\icon_U_Scientist_CA.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="O_scientist_F";
		};
	};
	class U_Tank_hex_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="U_Tank_hex_F";
		scope=2;
		displayName="Tanker Coveralls [CSAT]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Tank_hex_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_Tank_hex_F_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_crew_F";
			containerClass="Supply30";
			mass=50;
		};
	};
	class U_O_T_Pilot_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Pilot Coveralls (Green Hex) [CSAT]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_T_Pilot_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\pilot_suit_tna_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_Pilot_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	class U_O_T_Diver_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Wetsuit (Green Hex) [CSAT]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_diver_tna_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\diver_suit_tna_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_Diver_F";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
	class U_O_T_officer_noInsignia_ghex_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Light Fatigues (Green Hex)";
		picture="\A3\Characters_F_Exp\Data\UI\icon_U_OT_officer_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\officer_noinsignia_tna_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_officer_noinsignia_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	class U_Tank_ghex_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		_generalMacro="U_Tank_hex_F";
		scope=2;
		displayName="Tanker Coveralls (Green Hex) [CSAT]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Tank_ghex_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_Tank_ghex_F_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_T_Crew_F";
			containerClass="Supply30";
			mass=50;
		};
	};
	class U_IR_CombatUniform_rucamo: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Fatigues (Digi) [Raven]";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_IR_CombatUniform_rucamo_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\OPFOR\Data\clothing_rus_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_R_Soldier_F";
			containerClass="Supply40";
			mass=80;
		};
	};
	class U_IR_OfficerUniform: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Officer Fatigues [Raven]";
		picture="\A3\Characters_F\Data\UI\icon_U_IR_Officer_spc_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\OPFOR\Data\officer_rus_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_R_Officer_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	class U_IR_pilotCoveralls: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Pilot Coveralls [Raven]";
		picture="\A3\Characters_F\Data\UI\icon_U_IR_pilotCoveralls_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\pilot_suit_rus_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_R_helipilot_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	class U_IR_Wetsuit: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Wetsuit [Raven]";
		picture="\A3\Characters_F_Beta\Data\UI\icon_U_IR_Wetsuit_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\diver_suit_rus_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_R_diver_F";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
	class U_I_C_Soldier_Camo_1_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Uniform [Syndikat] (Camo)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_C_Soldier_Camo_1_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_I_C_Soldier_Para_1_F_2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_C_Soldier_Camo_1_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_C_Soldier_Camo_2_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Uniform [Syndikat] (Camo, Rolled-up)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_C_Soldier_Camo_2_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_I_C_Soldier_Para_1_F_2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_C_Soldier_Camo_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_C_Soldier_Brown_1_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Uniform [Syndikat] (Brown)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_C_Soldier_Brown_1_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_I_C_Soldier_Para_4_F_2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_C_Soldier_Brown_1_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_C_Soldier_Brown_2_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Combat Uniform [Syndikat] (Brown, Rolled-up)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_C_Soldier_Brown_2_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_I_C_Soldier_Para_4_F_2_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="I_C_Soldier_Brown_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_1: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_F";
		};
	};
	class U_B_CTRG_2: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_AR_F";
		};
	};
	class U_B_CTRG_3: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_TL_F";
		};
	};
	class U_B_CTRG_Soldier_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_tna_1_F";
		};
	};
	class U_B_CTRG_Soldier_2_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_tna_2_F";
		};
	};
	class U_B_CTRG_Soldier_3_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_tna_3_F";
		};
	};
	class U_B_CTRG_Soldier_urb_1_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_urb_1_F";
		};
	};
	class U_B_CTRG_Soldier_urb_2_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_urb_2_F";
		};
	};
	class U_B_CTRG_Soldier_urb_3_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_CTRG_Soldier_urb_3_F";
		};
	};
	class U_B_CTRG_Soldier_alt_1_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="CTRG Recon Uniform";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CTRG_Soldier_02_alt_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_F_alt_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_alt_1_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_alt_2_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="CTRG Recon Uniform (Tee)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CTRG_Soldier_01_alt_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_F_alt_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_alt_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_alt_3_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="CTRG Recon Uniform (Rolled-up)";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CTRG_Soldier_03_alt_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_F_alt_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_alt_3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_GEN_Soldier_2_F: Uniform_Base
	{
		author="$STR_A3_Night515";
		scope=2;
		displayName="Gendarmerie Combat Uniform";
		picture="\A3\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_GEN_Soldier_2_F_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Aegis\Uniforms\Data\U_B_GEN_Soldier_F_02_CO.paa"
		};
		DLC="Aegis";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_GEN_Soldier_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Item_U_B_CombatUniform_wdl: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CombatUniform_wdl0";
	};
	class Item_U_B_CombatUniform_sgg: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CombatUniform_sgg0";
	};
	class Item_U_B_A_Soldier_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (UK MTP)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_F
			{
				name="U_B_A_Soldier_F";
				count=1;
			};
		};
	};
	class Item_U_B_A_Soldier_dpm_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (DPM)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_dpm_F
			{
				name="U_B_A_Soldier_dpm_F";
				count=1;
			};
		};
	};
	class Item_U_B_A_Soldier_ddpm_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (DDPM)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_ddpm_F
			{
				name="U_B_A_Soldier_ddpm_F";
				count=1;
			};
		};
	};
	class Item_U_B_CombatUniform_mcam_tshirt: Item_Base_F
	{
		displayName="$STR_A3_combat_fatigues_tee0";
	};
	class Item_U_B_CombatUniform_wdl_tshirt: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CombatUniform_wdl_tshirt0";
	};
	class Item_U_B_CombatUniform_sgg_tshirt: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CombatUniform_sgg_tshirt0";
	};
	class Item_U_B_A_Soldier_AR_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (UK MTP, Tee)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_AR_F
			{
				name="U_B_A_Soldier_AR_F";
				count=1;
			};
		};
	};
	class Item_U_B_A_Soldier_AR_dpm_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (DPM, Tee)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_AR_dpm_F
			{
				name="U_B_A_Soldier_AR_dpm_F";
				count=1;
			};
		};
	};
	class Item_U_B_A_Soldier_AR_ddpm_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (DDPM, Tee)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_AR_ddpm_F
			{
				name="U_B_A_Soldier_AR_ddpm_F";
				count=1;
			};
		};
	};
	class Item_U_B_CombatUniform_mcam_vest: Item_Base_F
	{
		displayName="$STR_A3_recon_fatigues0";
	};
	class Item_U_B_CombatUniform_wdl_vest: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CombatUniform_wdl_vest0";
	};
	class Item_U_B_CombatUniform_sgg_vest: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CombatUniform_sgg_vest0";
	};
	class Item_U_B_T_Soldier_SL_F: Item_Base_F
	{
		displayName="$STR_A3_CfgWeapons_U_B_T_Soldier_SL_F1";
	};
	class Item_U_B_A_Soldier_SL_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (UK MTP, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_SL_F
			{
				name="U_B_A_Soldier_SL_F";
				count=1;
			};
		};
	};
	class Item_U_B_A_Soldier_SL_dpm_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (DPM, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_SL_dpm_F
			{
				name="U_B_A_Soldier_SL_dpm_F";
				count=1;
			};
		};
	};
	class Item_U_B_A_Soldier_SL_ddpm_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Fatigues (DDPM, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Soldier_SL_ddpm_F
			{
				name="U_B_A_Soldier_SL_ddpm_F";
				count=1;
			};
		};
	};
	class Item_U_B_A_Sniper_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Ghillie Suit (UK MTP) [NATO]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_A_Sniper_F
			{
				name="U_B_A_Sniper_F";
				count=1;
			};
		};
	};
	class Item_U_B_T_FullGhillie_tna_F: Item_Base_F
	{
		displayName="Full Ghillie (Tropic) [NATO]";
	};
	class Item_U_B_T_FullGhillie_jng_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_FullGhillie_tna_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_T_FullGhillie_jng_F
			{
				name="U_B_T_FullGhillie_jng_F";
				count=1;
			};
		};
	};
	class Item_U_BG_Guerilla1_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Guerilla Garment (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_BG_Guerilla1_3
			{
				name="U_BG_Guerilla1_3";
				count=1;
			};
		};
	};
	class Item_U_BG_Guerilla3_1: Item_Base_F
	{
		displayName="Guerilla Smocks (Brown)";
	};
	class Item_U_BG_Guerilla3_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Guerilla Smocks (Sand)";
	};
	class Item_U_O_SpecopsUniform_blk: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Fatigues (Black) [CSAT]";
	};
	class Item_U_O_SpecopsUniform_ocamo: Item_Base_F
	{
		scope=1;
		scopeCurator=0;
	};
	class Item_U_O_T_Pilot_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Pilot Coveralls (Green Hex) [CSAT]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_O_T_Pilot_F
			{
				name="U_O_T_Pilot_F";
				count=1;
			};
		};
	};
	class Item_U_O_T_Diver_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Wetsuit (Green Hex) [CSAT]";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_O_T_Diver_F
			{
				name="U_O_T_Diver_F";
				count=1;
			};
		};
	};
	class Item_U_O_T_FullGhillie_tna_F: Item_Base_F
	{
		displayName="Full Ghillie (Tropic) [CSAT]";
	};
	class Item_U_O_T_FullGhillie_jng_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_O_FullGhillie_ghex_F0";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_O_T_FullGhillie_jng_F
			{
				name="U_O_T_FullGhillie_jng_F";
				count=1;
			};
		};
	};
	class Item_U_I_OfficerUniform: Item_Base_F
	{
		displayName="Officer Fatigues [AAF]";
	};
	class Item_U_I_C_Soldier_Camo_1_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Uniform [Syndikat] (Camo)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_C_Soldier_Camo_1_F
			{
				name="U_I_C_Soldier_Camo_1_F";
				count=1;
			};
		};
	};
	class Item_U_I_C_Soldier_Camo_2_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Uniform [Syndikat] (Camo, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_C_Soldier_Camo_2_F
			{
				name="U_I_C_Soldier_Camo_2_F";
				count=1;
			};
		};
	};
	class Item_U_I_C_Soldier_Brown_1_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Uniform [Syndikat] (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_C_Soldier_Brown_1_F
			{
				name="U_I_C_Soldier_Brown_1_F";
				count=1;
			};
		};
	};
	class Item_U_I_C_Soldier_Brown_2_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Combat Uniform [Syndikat] (Brown, Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_I_C_Soldier_Brown_2_F
			{
				name="U_I_C_Soldier_Brown_2_F";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner1_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Polo, Pattern)";
	};
	class Item_U_C_Commoner1_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Polo, Purple)";
	};
	class Item_U_C_Commoner1_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Polo, Green)";
	};
	class Item_U_C_Commoner1_4: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Polo, Salmon)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner1_4
			{
				name="U_C_Commoner1_4";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner1_5: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Polo, Orange)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner1_5
			{
				name="U_C_Commoner1_5";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner2_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Jacket, Red)";
	};
	class Item_U_C_Commoner2_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Jacket, Tan)";
	};
	class Item_U_C_Commoner2_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Jacket, Blue)";
	};
	class Item_U_C_Commoner2_4: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Jacket, Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner2_4
			{
				name="U_C_Commoner2_4";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner2_5: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Jacket, Green)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner2_5
			{
				name="U_C_Commoner2_5";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner3_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Vest, White-Yellow)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner3_1
			{
				name="U_C_Commoner3_1";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner3_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Vest, Turquoise)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner3_2
			{
				name="U_C_Commoner3_2";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner3_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Vest, Pink)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner3_3
			{
				name="U_C_Commoner3_3";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner3_4: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Vest, Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner3_4
			{
				name="U_C_Commoner3_4";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner3_5: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Vest, Blue)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner3_5
			{
				name="U_C_Commoner3_5";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner4_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Tee, Blue)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner4_1
			{
				name="U_C_Commoner4_1";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner4_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Tee, Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner4_2
			{
				name="U_C_Commoner4_2";
				count=1;
			};
		};
	};
	class Item_U_C_Commoner4_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Civilian Clothes (Tee, Black-Orange)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Commoner4_3
			{
				name="U_C_Commoner4_3";
				count=1;
			};
		};
	};
	class Item_U_C_Man_casual_7_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Casual Clothes (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Man_casual_7_F
			{
				name="U_C_Man_casual_7_F";
				count=1;
			};
		};
	};
	class Item_U_C_Man_casual_8_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Casual Clothes (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Man_casual_8_F
			{
				name="U_C_Man_casual_8_F";
				count=1;
			};
		};
	};
	class Item_U_C_Poor_1: Item_Base_F
	{
		displayName="Worn Clothes (Blue)";
	};
	class Item_U_C_Poor_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worn Clothes (Yellow)";
	};
	class Item_U_C_Poor_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worn Clothes (Orange)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Poor_3
			{
				name="U_C_Poor_3";
				count=1;
			};
		};
	};
	class Item_U_C_HunterBody_grn: Item_Base_F
	{
		displayName="Hunter Clothes (Grey)";
	};
	class Item_U_C_HunterBody_brn: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Hunter Clothes (Brown)";
	};
	class Item_U_C_Scavenger_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Scavenger Clothes (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Scavenger_1
			{
				name="U_C_Scavenger_1";
				count=1;
			};
		};
	};
	class Item_U_C_Scavenger_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Scavenger Clothes (Khaki)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Scavenger_2
			{
				name="U_C_Scavenger_2";
				count=1;
			};
		};
	};
	class Item_U_C_Scavenger_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Scavenger Clothes (Yellow)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Scavenger_3
			{
				name="U_C_Scavenger_3";
				count=1;
			};
		};
	};
	class Item_U_C_Farmer: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worker Clothes (Blue)";
	};
	class Item_U_C_WorkerOveralls: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worker Clothes (Black)";
	};
	class Item_U_C_FishermanOveralls: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_fishing_overalls";
	};
	class Item_U_C_WorkerCoveralls: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worker Clothes (Red)";
	};
	class Item_U_C_Worker_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worker Coveralls (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Worker_1
			{
				name="U_C_Worker_1";
				count=1;
			};
		};
	};
	class Item_U_C_Worker_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worker Coveralls (Dirty)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Worker_2
			{
				name="U_C_Worker_2";
				count=1;
			};
		};
	};
	class Item_U_C_Worker_3: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worker Coveralls (Grey)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Worker_3
			{
				name="U_C_Worker_3";
				count=1;
			};
		};
	};
	class Item_U_C_Worker_4: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Worker Coveralls (Red)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Worker_4
			{
				name="U_C_Worker_4";
				count=1;
			};
		};
	};
	class Item_U_C_PoliceBody: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Police Uniform";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_PoliceBody
			{
				name="U_C_PoliceBody";
				count=1;
			};
		};
	};
	class Item_U_C_PriestBody: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_clerical_robes";
	};
	class Item_U_C_Functionary_1: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Functionary Clothes (Black)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Functionary_1
			{
				name="U_C_Functionary_1";
				count=1;
			};
		};
	};
	class Item_U_C_Functionary_2: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Functionary Clothes (Brown)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_C_Functionary_2
			{
				name="U_C_Functionary_2";
				count=1;
			};
		};
	};
	class Item_U_B_GEN_Soldier_2_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Gendarmerie Combat Uniform";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_GEN_Soldier_2_F
			{
				name="U_B_GEN_Soldier_2_F";
				count=1;
			};
		};
	};
	class Item_U_NikosBody: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_NIKOS_CLOTHES_0";
	};
	class Item_U_MillerBody: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_COMBAT_FATIGUES_MILLER_0";
	};
	class Item_U_KerryBody: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_COMBAT_FATIGUES_KERRY_0";
	};
	class Item_U_NikosAgedBody: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Nikos Clothes (Formal)";
	};
	class Item_U_B_CTRG_Soldier_alt_1_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CTRG Recon Uniform";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_CTRG_Soldier_alt_1_F
			{
				name="U_B_CTRG_Soldier_alt_1_F";
				count=1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_alt_2_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CTRG Recon Uniform (Tee)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_CTRG_Soldier_alt_2_F
			{
				name="U_B_CTRG_Soldier_alt_2_F";
				count=1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_alt_3_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="CTRG Recon Uniform (Rolled-up)";
		author="$STR_A3_Night515";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_F\dummyweapon.p3d";
		class TransportItems
		{
			class _xx_U_B_CTRG_Soldier_alt_3_F
			{
				name="U_B_CTRG_Soldier_alt_3_F";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1528894336";
};
