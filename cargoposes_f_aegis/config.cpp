class CfgPatches
{
	class A3_Cargoposes_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - Crew Animations";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Cargoposes_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Driver_Boat_Civil_02="Driver_Boat_Civil_02";
		Passenger_Plane_Transport_01="Passenger_Plane_Transport_01";
		Pilot_Plane_Fighter_05="Pilot_Plane_Fighter_05";
		Pilot_Plane_Transport_01="Pilot_Plane_Transport_01";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_Driver_Boat_Civil_02: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02_KIA.rtm";
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class Driver_Boat_Civil_02: Crew
		{
			file="\A3\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02.rtm";
			interpolateTo[]=
			{
				"Driver_Boat_Civil_02_KIA",
				1
			};
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
		};
		class KIA_Passenger_Plane_Transport_01: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01_KIA.rtm";
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class Passenger_Plane_Transport_01: Crew
		{
			file="\A3\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01.rtm";
			interpolateTo[]=
			{
				"KIA_Passenger_Plane_Transport_01",
				1
			};
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
		};
		class KIA_Pilot_Plane_Fighter_05: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Cargoposes_F_Aegis\Anim\Pilot_Plane_Fighter_05_KIA.rtm";
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class Pilot_Plane_Fighter_05: Crew
		{
			file="\A3\Cargoposes_F_Aegis\Anim\Pilot_Plane_Fighter_05.rtm";
			interpolateTo[]=
			{
				"KIA_Pilot_Plane_Fighter_05",
				1
			};
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
		};
		class KIA_Pilot_Plane_Transport_01: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01_KIA.rtm";
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class Pilot_Plane_Transport_01: Crew
		{
			file="\A3\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01.rtm";
			interpolateTo[]=
			{
				"KIA_Pilot_Plane_Transport_01",
				1
			};
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
		};
	};
};
class cfgMods
{
	author="Night515";
	timepacked="1525614017";
};
