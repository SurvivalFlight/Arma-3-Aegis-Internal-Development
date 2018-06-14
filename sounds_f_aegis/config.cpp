class CfgPatches
{
	class A3_Sounds_F_Aegis
	{
		author="$STR_A3_Night515";
		name="Arma 3 Aegis - Sound Effects";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Sounds_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgSounds
{
};
class CfgSoundShaders
{
	class GL_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class GL_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class GL_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=400;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class GL_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_distShot_03",
				1
			}
		};
		volume=1;
		range=400;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class GL_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class GL_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class GL_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class GL_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class GL_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class GL_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\GrenadeLaunchers\XM25\XM25_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class GM6Lynx_Barrel_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\weapons\GM6Lynx\GM6_lynx_hlaven",
				1
			}
		};
		range=5;
		volume=0.30000001;
	};
	class M320_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class M320_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class M320_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class M320_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class M320_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class M320_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class WF50_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class WF50_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_closeShot_02",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class WF50_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class WF50_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class WF50_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class WF50_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class WF50_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class WF50_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class WF50_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class WF50_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\LongRangeRifles\WF50\WF50_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class Zafir_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\MachineGuns\Mk200\Mk200_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F\arsenal\weapons\MachineGuns\Mk200\Mk200_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F\arsenal\weapons\MachineGuns\Mk200\Mk200_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class Zafir_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Zafir_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class Zafir_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class Zafir_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Zafir_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class C1911_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_closure_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_closure_03",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class C1911_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class C1911_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class C1911_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class C1911_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class C1911_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class C1911_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class C1911_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class C1911_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class C1911_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class C1911_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class C1911_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class C1911_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class C1911_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class C1911_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class C1911_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\C1911\C1911_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Pistol_02_closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class Pistol_02_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_closeShot_03",
				1
			}
		};
		volume=0.61295402;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class Pistol_02_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class Pistol_02_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class Pistol_02_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_tailDistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class Pistol_02_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_tailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class Pistol_02_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_tailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class Pistol_02_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_tailInterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class Pistol_02_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_tailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class Pistol_02_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_tailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class Pistol_02_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class Pistol_02_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Pistol_02_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class Pistol_02_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class Pistol_02_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Pistol_02_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Pistol_02\Pistol_02_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Mk26_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closure_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closure_03",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class Mk26_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class Mk26_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class Mk26_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class Mk26_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class Mk26_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class Mk26_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class Mk26_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class Mk26_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class Mk26_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\Mk26\Mk26_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class G17_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closure_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closure_03",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class G17_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class G17_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class G17_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class G17_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class G17_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class G17_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class G17_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class G17_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class G17_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class G17_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class G17_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class G17_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class G17_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class G17_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class G17_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Pistols\G17\G17_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class FAL_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_closure_02",
				1
			}
		};
		range=5;
		volume=0.30000001;
	};
	class FAL_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class FAL_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_midShot_03",
				1
			}
		};
		volume=0.5;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class FAL_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class FAL_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class FAL_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class FAL_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class FAL_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class FAL_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class FAL_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class FAL_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerShot_03",
				1
			}
		};
		volume=0.56234133;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class FAL_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class FAL_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class FAL_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class FAL_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class FAL_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\FAL\FAL_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class M8_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_closure_02",
				1
			}
		};
		range=5;
		volume=0.77668762;
	};
	class M8_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_closeShot_03",
				1
			}
		};
		volume=0.8012836;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class M8_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class M8_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class M8_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class M8_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class M8_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class M8_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class M8_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class M8_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class M8_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerShot_03",
				1
			}
		};
		volume=0.56234133;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class M8_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class M8_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class M8_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class M8_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class M8_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\M8\M8_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Mk16_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_closure_02",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class Mk16_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class Mk16_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class Mk16_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class Mk16_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class Mk16_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class Mk16_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class Mk16_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class Mk16_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class Mk16_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class Mk16_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerShot_03",
				1
			}
		};
		volume=0.56234133;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class Mk16_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Mk16_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class Mk16_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class Mk16_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Mk16_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk16_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Mk17_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_closure",
				1
			}
		};
		volume=0.056234129;
		range=5;
	};
	class Mk17_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_closeShot_03",
				1
			}
		};
		volume=1.4;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class Mk17_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_midShot_03",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class Mk17_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_distShot_03",
				1
			}
		};
		volume=1;
		range=1800;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1800,1}
		};
	};
	class Mk17_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_tail_interior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class Mk17_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_tail_trees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1800;
		limitation=1;
	};
	class Mk17_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_tail_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1800;
		limitation=1;
	};
	class Mk17_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_tail_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1800;
		limitation=1;
	};
	class Mk17_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_tail_houses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		limitation=1;
	};
	class Mk17_Shot_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_short_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_short_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_short_03",
				1
			}
		};
		volume=1;
		range=400;
	};
	class Mk17_tailInterior_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_tail_interior",
				1
			}
		};
		volume="interior";
		range=500;
		limitation=0;
	};
	class Mk17_tailTrees_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_tail_trees",
				1
			}
		};
		volume="(1-interior/1.4)*trees";
		range=1800;
		limitation=1;
	};
	class Mk17_tailForest_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_tail_forest",
				1
			}
		};
		volume="(1-interior/1.4)*forest";
		range=1800;
		limitation=1;
	};
	class Mk17_tailMeadows_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_tail_meadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)";
		range=1800;
		limitation=1;
	};
	class Mk17_tailHouses_Silenced_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\Mk17\Silencer_Mk17_tail_houses",
				1
			}
		};
		volume="(1-interior/1.4)*houses";
		range=1200;
		limitation=1;
	};
	class Mk17_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class Mk17_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Mk17_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class Mk17_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class Mk17_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class Mk17_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SCAR\Mk17_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SA80_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_closure_02",
				1
			}
		};
		range=5;
		volume=0.5;
	};
	class SA80_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_closeShot_03",
				1
			}
		};
		volume=0.69999999;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SA80_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_midShot_03",
				1
			}
		};
		volume=0.5;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class SA80_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class SA80_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class SA80_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SA80_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class SA80_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class SA80_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SA80_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class SA80_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerShot_03",
				1
			}
		};
		volume=0.56234133;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class SA80_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SA80_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class SA80_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class SA80_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class SA80_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Rifles\SA80\SA80_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class AA40_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class AA40_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class AA40_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class AA40_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class AA40_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class AA40_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class AA40_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class AA40_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class AA40_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class AA40_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\AA40\AA40_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class KSG_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class KSG_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class KSG_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class KSG_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class KSG_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class KSG_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class KSG_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class KSG_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class KSG_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class KSG_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class KSG_Pump_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\KSG\KSG_pump_01",
				1
			}
		};
		range=5;
		volume=0.5;
	};
	class M4_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closure_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class M4_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class M4_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_midShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_midShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_midShot_03",
				1
			}
		};
		volume=0.70794576;
		range=1200;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{150,0},
			{1200,0}
		};
	};
	class M4_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_distShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_distShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_distShot_03",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{150,1},
			{1200,1}
		};
	};
	class M4_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_taildistant",
				1
			}
		};
		volume=1;
		range=1200;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1200,1}
		};
		limitation=1;
	};
	class M4_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class M4_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001},
			{1200,0}
		};
		limitation=1;
	};
	class M4_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailinterior",
				1
			}
		};
		volume="interior";
		range=250;
		rangeCurve[]=
		{
			{0,1},
			{30,0.40000001},
			{100,0.2},
			{250,0}
		};
		limitation=1;
	};
	class M4_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class M4_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\arsenal\weapons\Shotguns\M4_SSAS\M4_SSAS_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1200;
		rangeCurve[]=
		{
			{0,1},
			{1200,0}
		};
		limitation=1;
	};
	class Cannon105mm_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\weapons\cannons\cannon_9",
				1
			}
		};
	};
	class Cannon120mm_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\weapons\cannons\cannon_9",
				1
			}
		};
	};
	class Cannon125mm_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\weapons\cannons\cannon_11",
				1
			}
		};
	};
	class Cannon155mm_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\weapons\cannons\cannon_8",
				1
			}
		};
	};
	class Plane_Fighter_05_EngineLowExt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_low_ext",
				1
			}
		};
		frequency="0.8 min (rpm + 0.5)*(rpm factor[0, 1])";
		volume="0.7 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0.75, 0])";
		range=1200;
	};
	class Plane_Fighter_05_EngineHighExt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_high_ext",
				1
			}
		};
		frequency="0.8 min (rpm + 0.5)*(rpm factor[0.5, 1.1])";
		volume="0.7 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0, 0.75])";
		range=1300;
	};
	class Plane_Fighter_05_ForsageExt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_forsage_ext",
				1
			}
		};
		frequency=0.89999998;
		volume="0.7 * machcone*engineOn*camPos*(thrust factor[0.6, 1.0])";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{200,0.75},
			{1000,0.25},
			{1500,0}
		};
	};
	class Plane_Fighter_05_WindNoiseExt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_wind_ext",
				1
			}
		};
		frequency="3*(speed factor[1, 200])";
		volume="0.7 * machcone*4*camPos*(speed factor[1, 200])";
		range=200;
	};
	class Plane_Fighter_05_EngineExt_Middle_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_middle",
				1
			}
		};
		frequency=0.80000001;
		volume="0.7 * machcone*camPos*(rpm factor[0.5, 1])";
		range=4000;
		rangeCurve[]=
		{
			{0,1},
			{50,1},
			{4000,1}
		};
	};
	class Plane_Fighter_05_EngineExt_Dist_Front_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_front",
				1
			}
		};
		frequency=0.80000001;
		volume="0.7 * machcone*camPos*(rpm factor[0.5, 1])";
		range=5000;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{5000,1}
		};
	};
	class Plane_Fighter_05_EngineExt_Dist_Rear_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_back",
				1
			}
		};
		frequency=0.80000001;
		volume="0.7 * machcone*camPos*(rpm factor[0.5, 1])";
		range=5000;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{5000,1}
		};
	};
	class Plane_Fighter_05_EngineLowInt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_low_int",
				1
			}
		};
		frequency="1.0 min (rpm + 0.25)*(rpm factor[0, 1])";
		volume="1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])";
	};
	class Plane_Fighter_05_EngineHighInt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_high_int",
				1
			}
		};
		frequency="1.0 min (rpm + 0.25)*(rpm factor[0.25, 1.1])";
		volume="1 * engineOn*(1-camPos)*(rpm factor[0, 1])";
	};
	class Plane_Fighter_05_ForsageInt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Aegis\vehicles\air\Plane_Fighter_05\B_Plane_Fighter_05_engine_forsage_int",
				1
			}
		};
		frequency="1.0 min (rpm + 0.5)*(rpm factor[0, 1])";
		volume="1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0])";
	};
	class Plane_Fighter_05_WindNoiseInt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_wind_int",
				1
			}
		};
		frequency="3*(speed factor[1, 200])";
		volume="1 * 3*(1-camPos)*(speed factor[1, 200])";
	};
	class Plane_Fighter_05_VelocityInt_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_velocity_int",
				1
			}
		};
		frequency="0.75*(speed factor[1, 150])";
		volume="1 * (1-camPos)*(gmeterZ factor[1.5, 6])*(speed factor[1, 50])";
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class Pistol_Shot_Base_SoundSet;
	class Pistol_Tail_Base_SoundSet;
	class Pistol_InteriorTail_Base_SoundSet;
	class Pistol_silencerShot_Base_SoundSet;
	class Pistol_silencerTail_Base_SoundSet;
	class Pistol_silencerInteriorTail_Base_SoundSet;
	class GL_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"GL_Closure_SoundShader",
			"GL_closeShot_SoundShader",
			"GL_midShot_SoundShader",
			"GL_distShot_SoundShader"
		};
	};
	class GL_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"GL_tailDistant_SoundShader",
			"GL_tailForest_SoundShader",
			"GL_tailHouses_SoundShader",
			"GL_tailMeadows_SoundShader",
			"GL_tailTrees_SoundShader"
		};
	};
	class GL_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"GL_tailInterior_SoundShader"
		};
	};
	class M320_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M320_Closure_SoundShader",
			"M320_Bolt_SoundShader",
			"M320_silencerShot_SoundShader"
		};
	};
	class M320_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M320_silencerTailTrees_SoundShader",
			"M320_silencerTailForest_SoundShader",
			"M320_silencerTailMeadows_SoundShader",
			"M320_silencerTailHouses_SoundShader"
		};
	};
	class M320_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M320_silencerTailInterior_SoundShader"
		};
	};
	class GM6Lynx_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]+=
		{
			"GM6Lynx_Barrel_SoundShader"
		};
	};
	class WF50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"WF50_Closure_SoundShader",
			"WF50_closeShot_SoundShader",
			"WF50_midShot_SoundShader",
			"WF50_distShot_SoundShader"
		};
	};
	class WF50_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"WF50_tailDistant_SoundShader",
			"WF50_tailForest_SoundShader",
			"WF50_tailHouses_SoundShader",
			"WF50_tailMeadows_SoundShader",
			"WF50_tailTrees_SoundShader"
		};
	};
	class WF50_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"WF50_tailInterior_SoundShader"
		};
	};
	class Zafir_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Zafir_Closure_SoundShader",
			"Zafir_silencerShot_SoundShader"
		};
	};
	class Zafir_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Zafir_silencerTailTrees_SoundShader",
			"Zafir_silencerTailForest_SoundShader",
			"Zafir_silencerTailMeadows_SoundShader",
			"Zafir_silencerTailHouses_SoundShader"
		};
	};
	class Zafir_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Zafir_silencerTailInterior_SoundShader"
		};
	};
	class C1911_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"C1911_Closure_SoundShader",
			"C1911_closeShot_SoundShader",
			"C1911_midShot_SoundShader",
			"C1911_distShot_SoundShader"
		};
	};
	class C1911_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"C1911_tailDistant_SoundShader",
			"C1911_tailForest_SoundShader",
			"C1911_tailHouses_SoundShader",
			"C1911_tailMeadows_SoundShader",
			"C1911_tailTrees_SoundShader"
		};
	};
	class C1911_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"C1911_tailInterior_SoundShader"
		};
	};
	class C1911_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"C1911_Closure_SoundShader",
			"C1911_silencerShot_SoundShader"
		};
	};
	class C1911_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"C1911_silencerTailTrees_SoundShader",
			"C1911_silencerTailForest_SoundShader",
			"C1911_silencerTailMeadows_SoundShader",
			"C1911_silencerTailHouses_SoundShader"
		};
	};
	class C1911_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"C1911_silencerTailInterior_SoundShader"
		};
	};
	class Pistol_02_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Pistol_02_closure_SoundShader",
			"Pistol_02_closeShot_SoundShader",
			"Pistol_02_midShot_SoundShader",
			"Pistol_02_distShot_SoundShader"
		};
	};
	class Pistol_02_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Pistol_02_tailDistant_SoundShader",
			"Pistol_02_tailForest_SoundShader",
			"Pistol_02_tailHouses_SoundShader",
			"Pistol_02_tailMeadows_SoundShader",
			"Pistol_02_tailTrees_SoundShader"
		};
	};
	class Pistol_02_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Pistol_02_tailInterior_SoundShader"
		};
	};
	class Pistol_02_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Pistol_02_closure_SoundShader",
			"Pistol_02_silencerShot_SoundShader"
		};
	};
	class Pistol_02_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Pistol_02_silencerTailTrees_SoundShader",
			"Pistol_02_silencerTailForest_SoundShader",
			"Pistol_02_silencerTailMeadows_SoundShader",
			"Pistol_02_silencerTailHouses_SoundShader"
		};
	};
	class Pistol_02_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Pistol_02_silencerTailInterior_SoundShader"
		};
	};
	class Mk26_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk26_Closure_SoundShader",
			"Mk26_closeShot_SoundShader",
			"Mk26_midShot_SoundShader",
			"Mk26_distShot_SoundShader"
		};
	};
	class Mk26_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk26_tailDistant_SoundShader",
			"Mk26_tailForest_SoundShader",
			"Mk26_tailHouses_SoundShader",
			"Mk26_tailMeadows_SoundShader",
			"Mk26_tailTrees_SoundShader"
		};
	};
	class Mk26_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk26_tailInterior_SoundShader"
		};
	};
	class G17_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"G17_Closure_SoundShader",
			"G17_closeShot_SoundShader",
			"G17_midShot_SoundShader",
			"G17_distShot_SoundShader"
		};
	};
	class G17_Tail_SoundSet: Pistol_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G17_tailDistant_SoundShader",
			"G17_tailForest_SoundShader",
			"G17_tailHouses_SoundShader",
			"G17_tailMeadows_SoundShader",
			"G17_tailTrees_SoundShader"
		};
	};
	class G17_InteriorTail_SoundSet: Pistol_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G17_tailInterior_SoundShader"
		};
	};
	class G17_silencerShot_SoundSet: Pistol_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"G17_Closure_SoundShader",
			"G17_silencerShot_SoundShader"
		};
	};
	class G17_silencerTail_SoundSet: Pistol_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G17_silencerTailTrees_SoundShader",
			"G17_silencerTailForest_SoundShader",
			"G17_silencerTailMeadows_SoundShader",
			"G17_silencerTailHouses_SoundShader"
		};
	};
	class G17_silencerInteriorTail_SoundSet: Pistol_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G17_silencerTailInterior_SoundShader"
		};
	};
	class FAL_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"FAL_closure_SoundShader",
			"FAL_closeShot_SoundShader",
			"FAL_midShot_SoundShader",
			"FAL_distShot_SoundShader"
		};
	};
	class FAL_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"FAL_tailDistant_SoundShader",
			"FAL_tailForest_SoundShader",
			"FAL_tailHouses_SoundShader",
			"FAL_tailMeadows_SoundShader",
			"FAL_tailTrees_SoundShader"
		};
	};
	class FAL_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"FAL_tailInterior_SoundShader"
		};
	};
	class FAL_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"FAL_closure_SoundShader",
			"FAL_silencerShot_SoundShader"
		};
	};
	class SA80_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SA80_silencerTailTrees_SoundShader",
			"SA80_silencerTailForest_SoundShader",
			"SA80_silencerTailMeadows_SoundShader",
			"SA80_silencerTailHouses_SoundShader"
		};
	};
	class SA80_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SA80_silencerTailInterior_SoundShader"
		};
	};
	class M8_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M8_closure_SoundShader",
			"M8_closeShot_SoundShader",
			"M8_midShot_SoundShader",
			"M8_distShot_SoundShader"
		};
	};
	class M8_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M8_tailDistant_SoundShader",
			"M8_tailForest_SoundShader",
			"M8_tailHouses_SoundShader",
			"M8_tailMeadows_SoundShader",
			"M8_tailTrees_SoundShader"
		};
	};
	class M8_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M8_tailInterior_SoundShader"
		};
	};
	class M8_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M8_closure_SoundShader",
			"M8_silencerShot_SoundShader"
		};
	};
	class M8_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M8_silencerTailTrees_SoundShader",
			"M8_silencerTailForest_SoundShader",
			"M8_silencerTailMeadows_SoundShader",
			"M8_silencerTailHouses_SoundShader"
		};
	};
	class M8_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M8_silencerTailInterior_SoundShader"
		};
	};
	class Mk16_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk16_Closure_SoundShader",
			"Mk16_closeShot_SoundShader",
			"Mk16_midShot_SoundShader",
			"Mk16_distShot_SoundShader"
		};
		volumeFactor=1.9;
	};
	class Mk16_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk16_tailDistant_SoundShader",
			"Mk16_tailForest_SoundShader",
			"Mk16_tailHouses_SoundShader",
			"Mk16_tailMeadows_SoundShader",
			"Mk16_tailTrees_SoundShader"
		};
	};
	class Mk16_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk16_tailInterior_SoundShader"
		};
	};
	class Mk16_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk16_Closure_SoundShader",
			"Mk16_silencerShot_SoundShader"
		};
	};
	class Mk16_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk16_silencerTailTrees_SoundShader",
			"Mk16_silencerTailForest_SoundShader",
			"Mk16_silencerTailMeadows_SoundShader",
			"Mk16_silencerTailHouses_SoundShader"
		};
	};
	class Mk16_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk16_silencerTailInterior_SoundShader"
		};
	};
	class Mk17_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk17_Closure_SoundShader",
			"Mk17_closeShot_SoundShader",
			"Mk17_midShot_SoundShader",
			"Mk17_distShot_SoundShader"
		};
	};
	class Mk17_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk17_tailTrees_SoundShader",
			"Mk17_tailForest_SoundShader",
			"Mk17_tailMeadows_SoundShader",
			"Mk17_tailHouses_SoundShader"
		};
	};
	class Mk17_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk17_tailInterior_SoundShader"
		};
	};
	class Mk17_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk17_Closure_SoundShader",
			"Mk17_silencerShot_SoundShader"
		};
	};
	class Mk17_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk17_silencerTailTrees_SoundShader",
			"Mk17_silencerTailForest_SoundShader",
			"Mk17_silencerTailMeadows_SoundShader",
			"Mk17_silencerTailHouses_SoundShader"
		};
	};
	class Mk17_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Mk17_silencerTailInterior_SoundShader"
		};
	};
	class SA80_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SA80_closure_SoundShader",
			"SA80_closeShot_SoundShader",
			"SA80_midShot_SoundShader",
			"SA80_distShot_SoundShader"
		};
	};
	class SA80_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SA80_tailDistant_SoundShader",
			"SA80_tailForest_SoundShader",
			"SA80_tailHouses_SoundShader",
			"SA80_tailMeadows_SoundShader",
			"SA80_tailTrees_SoundShader"
		};
	};
	class SA80_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SA80_tailInterior_SoundShader"
		};
	};
	class SA80_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SA80_closure_SoundShader",
			"SA80_silencerShot_SoundShader"
		};
	};
	class AA40_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AA40_Closure_SoundShader",
			"AA40_closeShot_SoundShader",
			"AA40_midShot_SoundShader",
			"AA40_distShot_SoundShader"
		};
	};
	class AA40_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AA40_tailDistant_SoundShader",
			"AA40_tailForest_SoundShader",
			"AA40_tailHouses_SoundShader",
			"AA40_tailMeadows_SoundShader",
			"AA40_tailTrees_SoundShader"
		};
	};
	class AA40_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AA40_tailInterior_SoundShader"
		};
	};
	class KSG_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"KSG_Closure_SoundShader",
			"KSG_Pump_SoundShader",
			"KSG_closeShot_SoundShader",
			"KSG_midShot_SoundShader",
			"KSG_distShot_SoundShader"
		};
	};
	class KSG_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"KSG_tailDistant_SoundShader",
			"KSG_tailForest_SoundShader",
			"KSG_tailHouses_SoundShader",
			"KSG_tailMeadows_SoundShader",
			"KSG_tailTrees_SoundShader"
		};
	};
	class KSG_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"KSG_tailInterior_SoundShader"
		};
	};
	class M4_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M4_Closure_SoundShader",
			"M4_closeShot_SoundShader",
			"M4_midShot_SoundShader",
			"M4_distShot_SoundShader"
		};
	};
	class M4_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M4_tailDistant_SoundShader",
			"M4_tailForest_SoundShader",
			"M4_tailHouses_SoundShader",
			"M4_tailMeadows_SoundShader",
			"M4_tailTrees_SoundShader"
		};
	};
	class M4_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M4_tailInterior_SoundShader"
		};
	};
	class Autocannon30mmBody_Shot_SoundSet
	{
		soundShaders[]=
		{
			"Autocannon30mmBody_closeShot_SoundShader",
			"Autocannon30mmBody_midShot_SoundShader",
			"Autocannon30mmBody_distShot_SoundShader"
		};
	};
	class Autocannon40mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"Autocannon40mm_closeShot_SoundShader",
			"Autocannon40mm_midShot_SoundShader",
			"Autocannon40mm_distShot_SoundShader"
		};
	};
	class Plane_Fighter_05_EngineLowExt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_EngineLowExt_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		sound3DProcessingType="JetExt_Close_3DProcessingType";
	};
	class Plane_Fighter_05_EngineHighExt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_EngineHighExt_SoundShader"
		};
		volumeFactor=1.1;
		spatial=1;
		loop=1;
		sound3DProcessingType="JetExt_Close_3DProcessingType";
		occlusionFactor=0.44999999;
		obstructionFactor=0.34999999;
	};
	class Plane_Fighter_05_ForsageExt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_ForsageExt_SoundShader"
		};
		volumeFactor=1.15;
		spatial=1;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="JetExt_Close_3DProcessingType";
		occlusionFactor=0.44999999;
		obstructionFactor=0.34999999;
	};
	class Plane_Fighter_05_WindNoiseExt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_WindNoiseExt_SoundShader"
		};
		volumeFactor=1;
		spatial=1;
		loop=1;
		sound3DProcessingType="JetExt_Close_3DProcessingType";
	};
	class Plane_Fighter_05_EngineExt_Middle_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_EngineExt_Middle_SoundShader"
		};
		volumeFactor=1.4;
		spatial=1;
		loop=1;
		shape="FrontSemispace10";
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="JetExt_Middle_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class Plane_Fighter_05_EngineExt_Dist_Front_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_EngineExt_Dist_Front_SoundShader"
		};
		volumeFactor=1.3;
		spatial=1;
		loop=1;
		volumeCurve="InverseSquare3Curve";
		shape="FrontSemispace60";
		sound3DProcessingType="JetExt_Distant_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class Plane_Fighter_05_EngineExt_Dist_Rear_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_EngineExt_Dist_Rear_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		shape="RearSemispace20";
		sound3DProcessingType="JetExt_Distant_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class Plane_Fighter_05_EngineLowInt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_EngineLowInt_SoundShader"
		};
		volumeFactor=1.5;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
	};
	class Plane_Fighter_05_EngineHighInt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_EngineHighInt_SoundShader"
		};
		volumeFactor=1.2;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
	};
	class Plane_Fighter_05_ForsageInt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_ForsageInt_SoundShader"
		};
		volumeFactor=1.3;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
	};
	class Plane_Fighter_05_WindNoiseInt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_WindNoiseInt_SoundShader"
		};
		volumeFactor=1;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
	class Plane_Fighter_05_VelocityInt_SoundSet
	{
		soundShaders[]=
		{
			"Plane_Fighter_05_VelocityInt_SoundShader"
		};
		volumeFactor=1.45;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	};
};
class CfgVehicles
{
};
class cfgMods
{
	author="Night515";
	timepacked="1527941217";
};
