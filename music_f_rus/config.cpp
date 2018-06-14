#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3_Music_F_Rus
	{
		author = $STR_A3_Night515;
		name = "Arma 3 Russian Army - Soundtrack";
		url = "https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[] = {A3_Music_F_Aegis};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMusic
{
	class AmbientTrack01_F_Rus
	{
		name = "Polyushka Polye";
		sound[] = {"\A3\Music_F_Rus\Music\AmbientTrack01_F_Rus.ogg",1,1};
		duration = 188;
		musicClass = Calm;
	};
};
