class CfgPatches
{
	class A3_Sounds_F_Rus
	{
		author="$STR_A3_Night515";
		name="Arma 3 Russian Army - Sound Effects";
		url="https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[]=
		{
			"A3_Sounds_F_Aegis"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgSoundShaders
{
	class MMG_03_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class MMG_03_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_closeShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_closeShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_closeShot_03",
				1
			}
		};
		volume=0.70794576;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class MMG_03_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_midShot_03",
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
	class MMG_03_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_distShot_03",
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
	class MMG_03_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_taildistant",
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
	class MMG_03_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_tailforest",
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
	class MMG_03_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_tailhouses",
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
	class MMG_03_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_tailinterior",
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
	class MMG_03_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_tailmeadows",
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
	class MMG_03_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_tailtrees",
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
	class MMG_03_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class MMG_03_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerTailForest",
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
	class MMG_03_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerTailHouses",
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
	class MMG_03_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerTailInterior",
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
	class MMG_03_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerTailMeadows",
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
	class MMG_03_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Machineguns\MMG_03\MMG_03_silencerTailTrees",
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
	class AK107_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class AK107_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_closeShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_closeShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_closeShot_03",
				1
			}
		};
		volume=0.70794576;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class AK107_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_midShot_03",
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
	class AK107_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_distShot_03",
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
	class AK107_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_taildistant",
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
	class AK107_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_tailforest",
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
	class AK107_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_tailhouses",
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
	class AK107_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_tailinterior",
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
	class AK107_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_tailmeadows",
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
	class AK107_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_tailtrees",
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
	class AK107_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class AK107_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerTailForest",
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
	class AK107_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerTailHouses",
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
	class AK107_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerTailInterior",
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
	class AK107_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerTailMeadows",
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
	class AK107_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\Rifles\AK107\AK107_silencerTailTrees",
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
	class SK12_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class SK12_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_closeShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_closeShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SK12_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_midShot_03",
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
	class SK12_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_distShot_03",
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
	class SK12_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_taildistant",
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
	class SK12_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_tailforest",
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
	class SK12_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_tailhouses",
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
	class SK12_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_tailinterior",
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
	class SK12_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_tailmeadows",
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
	class SK12_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\Shotguns\SK12\SK12_tailtrees",
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
	class SMG_06_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_closure_02",
				1
			}
		};
		range=5;
		volume=0.22387211;
	};
	class SMG_06_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_closeShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_closeShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class SMG_06_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_midShot_03",
				1
			}
		};
		volume=0.44668359;
		range=1500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
	};
	class SMG_06_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_distShot_03",
				1
			}
		};
		volume=1;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		};
	};
	class SMG_06_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_taildistant",
				1
			}
		};
		volume=1.7782794;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{300,0.69999999},
			{1500,1}
		};
		limitation=1;
	};
	class SMG_06_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class SMG_06_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=800;
		rangeCurve[]=
		{
			{0,1},
			{200,0.30000001},
			{800,0.30000001}
		};
		limitation=1;
	};
	class SMG_06_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_tailinterior",
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
	class SMG_06_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class SMG_06_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{1500,0.30000001}
		};
		limitation=1;
	};
	class SMG_06_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class SMG_06_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerTailForest",
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
	class SMG_06_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerTailHouses",
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
	class SMG_06_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerTailInterior",
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
	class SMG_06_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerTailMeadows",
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
	class SMG_06_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Rus\arsenal\weapons\SMGs\SMG_06\SMG_06_silencerTailTrees",
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
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class MMG_03_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG_03_Closure_SoundShader",
			"MMG_03_closeShot_SoundShader",
			"MMG_03_midShot_SoundShader",
			"MMG_03_distShot_SoundShader"
		};
	};
	class Rifle_Tail_Base_SoundSet;
	class MMG_03_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG_03_tailDistant_SoundShader",
			"MMG_03_tailForest_SoundShader",
			"MMG_03_tailHouses_SoundShader",
			"MMG_03_tailMeadows_SoundShader",
			"MMG_03_tailTrees_SoundShader"
		};
	};
	class Rifle_InteriorTail_Base_SoundSet;
	class MMG_03_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG_03_tailInterior_SoundShader"
		};
	};
	class Rifle_silencerShot_Base_SoundSet;
	class MMG_03_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG_03_Closure_SoundShader",
			"MMG_03_silencerShot_SoundShader"
		};
	};
	class Rifle_silencerTail_Base_SoundSet;
	class MMG_03_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG_03_silencerTailForest_SoundShader",
			"MMG_03_silencerTailHouses_SoundShader",
			"MMG_03_silencerTailMeadows_SoundShader",
			"MMG_03_silencerTailTrees_SoundShader"
		};
	};
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class MMG_03_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG_03_silencerTailInterior_SoundShader"
		};
	};
	class AK107_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK107_Closure_SoundShader",
			"AK107_closeShot_SoundShader",
			"AK107_midShot_SoundShader",
			"AK107_distShot_SoundShader"
		};
	};
	class AK107_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK107_tailDistant_SoundShader",
			"AK107_tailForest_SoundShader",
			"AK107_tailHouses_SoundShader",
			"AK107_tailMeadows_SoundShader",
			"AK107_tailTrees_SoundShader"
		};
	};
	class AK107_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK107_tailInterior_SoundShader"
		};
	};
	class AK107_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK107_Closure_SoundShader",
			"AK107_silencerShot_SoundShader"
		};
	};
	class AK107_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK107_silencerTailForest_SoundShader",
			"AK107_silencerTailHouses_SoundShader",
			"AK107_silencerTailMeadows_SoundShader",
			"AK107_silencerTailTrees_SoundShader"
		};
	};
	class AK107_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK107_silencerTailInterior_SoundShader"
		};
	};
	class SK12_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SK12_Closure_SoundShader",
			"SK12_closeShot_SoundShader",
			"SK12_midShot_SoundShader",
			"SK12_distShot_SoundShader"
		};
	};
	class SK12_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SK12_tailDistant_SoundShader",
			"SK12_tailForest_SoundShader",
			"SK12_tailHouses_SoundShader",
			"SK12_tailMeadows_SoundShader",
			"SK12_tailTrees_SoundShader"
		};
	};
	class SK12_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SK12_tailInterior_SoundShader"
		};
	};
	class SMG_06_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SMG_06_Closure_SoundShader",
			"SMG_06_closeShot_SoundShader",
			"SMG_06_midShot_SoundShader",
			"SMG_06_distShot_SoundShader"
		};
	};
	class SMG_06_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SMG_06_tailDistant_SoundShader",
			"SMG_06_tailForest_SoundShader",
			"SMG_06_tailHouses_SoundShader",
			"SMG_06_tailMeadows_SoundShader",
			"SMG_06_tailTrees_SoundShader"
		};
		volumeFactor=0.60000002;
	};
	class SMG_06_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SMG_06_tailInterior_SoundShader"
		};
		volumeFactor=0.60000002;
	};
	class SMG_06_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SMG_06_Closure_SoundShader",
			"SMG_06_silencerShot_SoundShader"
		};
		volumeFactor=0.69999999;
	};
	class SMG_06_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SMG_06_silencerTailForest_SoundShader",
			"SMG_06_silencerTailHouses_SoundShader",
			"SMG_06_silencerTailMeadows_SoundShader",
			"SMG_06_silencerTailTrees_SoundShader"
		};
		volumeFactor=0.60000002;
	};
	class SMG_06_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SMG_06_silencerTailInterior_SoundShader"
		};
	};
	volumeFactor=0.60000002;
};
class CfgSounds
{
};
class CfgVehicles
{
};
class cfgMods
{
	author="Night515";
	timepacked="1527941625";
};
