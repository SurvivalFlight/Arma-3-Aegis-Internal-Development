#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3_Music_F_Aegis
	{
		author = $STR_A3_Night515;
		name = "Arma 3 Aegis - Soundtrack";
		url = "https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[] =
		{
			A3_Music_F,
			A3_Music_F_Argo,
			A3_Music_F_EPA,
			A3_Music_F_EPB,
			A3_Music_F_EPC,
			A3_Music_F_Exp,
			A3_Music_F_Orange,
			A3_Music_F_Jets,
			A3_Music_F_Tacops,
			A3_Music_F_Tank
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMusic
{
	class LeadTrack01c_F
	{
		musicClass = Lead;
	};
	class LeadTrack04a_F
	{
		musicClass = Action;
	};
	class LeadTrack06_F
	{
		musicClass = Action;
	};
	class AmbientTrack01a_F
	{
		musicClass = Stealth;
	};
	class AmbientTrack01b_F
	{
		musicClass = Stealth;
	};
	class AmbientTrack03_F
	{
		theme = calm;
		musicClass = Safe;
	};
	class AmbientTrack04a_F
	{
		musicClass = Stealth;
	};
	class AmbientTrack04_F
	{
		musicClass = Stealth;
	};
	class AmbientTrack04b_F
	{
		name = $STR_A3_CfgMusic_AmbientTrack04b_F;
		sound[] = {"\A3\Music_F_Aegis\Music\AmbientTrack04b_F.ogg",1,1};
		duration = 218;
		theme = stealth;
		musicClass = Stealth;
	};
	class BackgroundTrack03_F
	{
		musicClass = Action;
	};
	class BackgroundTrack01_F
	{
		musicClass = Calm;
	};
	class BackgroundTrack01a_F
	{
		musicClass = Calm;
	};
	class BackgroundTrack02_F
	{
		musicClass = Calm;
	};
	class LeadTrack02a_F_EPA
	{
		musicClass = Action;
	};
	class LeadTrack02b_F_EPA
	{
		musicClass = Action;
	};
	class LeadTrack03_F_EPA
	{
		musicClass = Action;
	};
	class LeadTrack03a_F_EPA
	{
		musicClass = Action;
	};
	class LeadTrack04_F_EPA
	{
		name = $STR_A3_CfgMusic_LeadTrack04_F_EPA;
		sound[] = {"\A3\Music_F_Aegis\Music\LeadTrack04_F_EPA.ogg",1,1};
		duration = 161;
		musicClass = Calm;
	};
	class EventTrack01_F_EPA
	{
		musicClass = Action;
	};
	class EventTrack01a_F_EPA
	{
		musicClass = Action;
	};
	class EventTrack02_F_EPA
	{
		musicClass = Calm;
	};
	class EventTrack02a_F_EPA
	{
		musicClass = Calm;
	};
	class EventTrack03_F_EPA
	{
		musicClass = Action;
	};
	class EventTrack03a_F_EPA
	{
		musicClass = Action;
	};
	class Fallout
	{
		name = "Fallout";
		musicClass = Stealth;
	};
	class Defcon
	{
		name = "Defcon";
		musicClass = Stealth;
	};
	class Wasteland
	{
		name = "Wasteland";
		musicClass = Stealth;
	};
	class SkyNet
	{
		name = "Sky Net";
		musicClass = Stealth;
	};
	class MAD
	{
		name = "Mutually Assured Destruction";
		musicClass = Stealth;
	};
	class LeadTrack01a_F_EPB
	{
		musicClass = Action;
	};
	class LeadTrack02a_F_EPB
	{
		musicClass = Action;
	};
	class LeadTrack02b_F_EPB
	{
		musicClass = Action;
	};
	class LeadTrack03a_F_EPB
	{
		musicClass = Stealth;
	};
	class EventTrack01a_F_EPB
	{
		musicClass = Stealth;
	};
	class EventTrack02a_F_EPB
	{
		musicClass = Stealth;
	};
	class EventTrack04a_F_EPB
	{
		musicClass = Stealth;
	};
	class EventTrack03a_F_EPB
	{
		musicClass = Stealth;
	};
	class LeadTrack02a_F_EXP
	{
		name = $STR_A3_CfgMusic_LeadTrack02a_F_EXP;
		sound[] = {"\A3\Music_F_Aegis\Music\LeadTrack02a_F_EXP.ogg",1,1};
		duration = 155;
		musicClass = Action;
	};
	class LeadTrack05_F_EXP
	{
		name = $STR_A3_CfgMusic_LeadTrack05_F_EXP;
		sound[] = {"\A3\Music_F_Aegis\Music\LeadTrack05_F_EXP.ogg",1,1};
		duration = 60;
		musicClass = Action;
	};
	class AmbientTrack03_F_EXP
	{
		name = $STR_A3_CfgMusic_AmbientTrack03_F_EXP;
		sound[] = {"\A3\Music_F_Aegis\Music\AmbientTrack03_F_EXP.ogg",1,1};
		duration = 95;
		musicClass = Calm;
	};
	class AmbientTrack04_F_EXP
	{
		name = "Eau de Combat";
		sound[] = {"\A3\Music_F_Aegis\Music\AmbientTrack04_F_EXP.ogg",1,1};
		duration = 40;
		musicClass = Calm;
	};
	class LeadTrack01a_F_Jets
	{
		name = "Fighter Jets (Alternative 1)";
		sound[] = {"\A3\Music_F_Aegis\Music\LeadTrack01a_F_Jets.ogg",1,1};
		duration = 184;
		musicClass = Lead;
	};
	class LeadTrack03_F_Jets
	{
		name = "Reunion";
		sound[] = {"\A3\Music_F_Aegis\Music\LeadTrack03_F_Jets.ogg",1,1};
		duration = 113;
		musicClass = Lead;
	};
	class LeadTrack03_F_Malden
	{
		name = "This Is War (Malden Remix)";
		sound[] = {"\A3\Music_F_Aegis\Music\LeadTrack03_F_Malden.ogg",1,1};
		duration = 138;
		musicClass = Lead;
	};
	class LeadTrack02_F_Orange
	{
		name = "Laws of War DLC: Actions Have Consequences";
		sound[] = {"\A3\Music_F_Aegis\Music\LeadTrack02_F_Orange.ogg",1,1};
		duration = 149;
		musicClass = Calm;
	};
/*
	class buildup_clouds
	{
		name = "Clouds Build Up";
		sound[] = {"\A3\Music_F_Aegis\Music\buildup_clouds.ogg",1,1};
		duration = 61;
		musicClass = Action;
	};
	class buildup_flames
	{
		name = "Flames Build Up";
		sound[] = {"\A3\Music_F_Aegis\Music\buildup_flames.ogg",1,1};
		duration = 58;
		musicClass = Action;
	};
	class main_theme
	{
		name = "Argo";
		sound[] = {"\A3\Music_F_Aegis\Music\main_theme.ogg",1,1};
		duration = 137;
		musicClass = Lead;
	};
	class match_lose
	{
		name = "Match Lose";
		sound[] = {"\A3\Music_F_Aegis\Music\match_lose.ogg",1,1};
		duration = 38;
		musicClass = Calm;
	};
	class match_win
	{
		name = "Match Win";
		sound[] = {"\A3\Music_F_Aegis\Music\match_win.ogg",1,1};
		duration = 30;
		musicClass = Calm;
	};
	class round_close
	{
		name = "Round Close";
		sound[] = {"\A3\Music_F_Aegis\Music\round_close.ogg",1,1};
		duration = 26;
		musicClass = Calm;
	};
	class round_lose
	{
		name = "Round Lose";
		sound[] = {"\A3\Music_F_Aegis\Music\round_lose.ogg",1,1};
		duration = 14;
		musicClass = Calm;
	};
	class round_win
	{
		name = "Round Win";
		sound[] = {"\A3\Music_F_Aegis\Music\round_win.ogg",1,1};
		duration = 14;
		musicClass = Calm;
	};
*/
};
