class CfgPatches
{
	class A3_Data_F_Aegis_ParticleEffects
	{
		addonRootClass="A3_Data_F_Aegis";
		requiredAddons[]=
		{
			"A3_Data_F_ParticleEffects"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CannonMissileFired
{
	class CannonFired3
	{
		simulation="particles";
		type="CannonFired3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class CannonFired3Med
	{
		simulation="particles";
		type="CannonFired3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1527889989";
};
