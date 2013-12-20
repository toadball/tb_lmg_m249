class CfgPatches {
	class tb_lmg_m249	{
		units[] = {};
		weapons[] = {"tb_lmg_minimi762"};
		requiredVersion = 0.10;
		requiredAddons[] = {"A3_Weapons_F_beta"};
	};
};


//handanim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
class Mode_FullAuto;
class CfgWeapons {
	class Rifle_Long_Base_F;
	class tb_lmg_minimi_base : Rifle_Long_Base_F {	
		tmr_autorest_deployable = 1;
		aidispersioncoefx = 15;
		aidispersioncoefy = 16;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.794328, 1, 15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.794328, 1, 15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.794328, 1, 15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.794328, 1, 15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.794328, 1, 15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.794328, 1, 15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.794328, 1, 15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.794328, 1, 15};
		cursor = "mg";
		cursoraim = "EmptyCursor";
		descriptionshort = "Light machine gun <br/>Caliber: 7.62x51mm NATO";
		dexterity = 100;
		discretedistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discretedistanceinitindex = 3;
		displayname = "FN Minimi";
		htmax = 600;
		htmin = 1;
		magazines[] = {"150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer","tb_150Rnd_762x51_Box_Tracer_Red"};
		modelOptics = "-";
		
		mfact = 1;
		mfmax = 0;
		model = "\tb_lmg_m249\m249_762";
		modes[] = {"manual", "close", "short", "medium","long"};
		picture = "\tb_lmg_m249\Data\m249_iron_ca.paa";
		reloadaction = "GestureReloadM200";
		reloadmagazinesound[] = {"A3\sounds_f\weapons\zafir\zafir_reload", 0.446684, 1, 20};
		scope = 0;
		tbody = 100;
		type = 1;
		uipicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		weaponinfotype = "RscWeaponZeroing";
		class manual: Mode_FullAuto {
			airateoffire = 0.1;
			airateoffiredistance = 50;
			begin1[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-1", 1.25893, 1, 1200};
			begin2[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-2", 1.25893, 1, 1200};
			begin3[] = {"A3\sounds_f\weapons\mk20\mk20-st-full-3", 1.25893, 1, 1200};
			closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 1.12202, 1, 10};
			closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 1.12202, 1, 10};
			dispersion = 0.0035;
			displayname = "Auto";
			maxrange = "30+ random 20";
			maxrangeprobab = 0.1;
			midrange = 20;
			midrangeprobab = 0.7;
			minrange = 0;
			minrangeprobab = 0.9;
			recoil = "recoil_auto_mk200";
			recoilprone = "recoil_auto_prone_mk200";
			reloadtime = 0.07;
			showtoplayer = 1;
			soundbegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
			soundburst = 0;
			soundcontinuous = 0;
		};
		class close: manual {
			airateoffire = 1;
			airateoffiredistance = 200;
			burst = "6+round random 4";
			maxrange = "100+ random 50";
			maxrangeprobab = 0.1;
			midrange = "50+ random 50";
			midrangeprobab = 0.7;
			minrange = 30;
			minrangeprobab = 0.8;
			showtoplayer = 0;
		};
		class short: close {
			airateoffire = 2;
			airateoffiredistance = 600;
			burst = "4+round random 6";
			maxrange = "300+ random 50";
			maxrangeprobab = 0.1;
			midrange = "100+ random 50";
			midrangeprobab = 0.7;
			minrange = 50;
			minrangeprobab = 0.8;
		};
		class medium: close {
			airateoffire = 2;
			airateoffiredistance = 600;
			burst = "4+round random 4";
			maxrange = "400+ random 50";
			maxrangeprobab = 0.1;
			midrange = "300+ random 50";
			midrangeprobab = 0.7;
			minrange = 100;
			minrangeprobab = 0.8;
		};
		class Library {
			libtextdesc = "The FN Minimi is a fully-automatic, gas-operated, magazine or belt-fed individual weapon. <br/>The FN Minimi provides the section with the accurate and sustained fire required to suppress and destroy enemy targets.";
		};
		class far: close {
			airateoffire = 3;
			airateoffiredistance = 800;
			burst = "2+round random 4";
			maxrange = "600+ random 50";
			maxrangeprobab = 0.1;
			midrange = "500+ random 50";
			midrangeprobab = 0.7;
			minrange = 300;
			minrangeprobab = 0.8;
		};
		class long: far {
			airateoffire = 4;
			airateoffiredistance = 1000;
			burst = "8+round random 6";
			maxrange = 800;
			maxrangeprobab = 0.1;
			midrange = "700+ random 50";
			midrangeprobab = 0.2;
			minrange = 400;
			minrangeprobab = 0.8;
		};
	};
	class tb_lmg_minimi762 : tb_lmg_minimi_base {
		descriptionshort = "Light machine gun <br/>Caliber: 7.62x51mm NATO";
		displayname = "FN Minimi 7.62";
		class manual: Mode_FullAuto {
			airateoffire = 0.1;
			airateoffiredistance = 50;
			begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4", 1.12202, 1, 1200};
			begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5", 1.12202, 1, 1200};
			begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6", 1.12202, 1, 1200};
			closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 1.12202, 1, 10};
			closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 1.12202, 1, 10};
			dispersion = 0.0035;
			displayname = "Auto";
			maxrange = "30+ random 20";
			maxrangeprobab = 0.1;
			midrange = 20;
			midrangeprobab = 0.7;
			minrange = 0;
			minrangeprobab = 0.9;
			recoil = "recoil_auto_mk200";
			recoilprone = "recoil_auto_prone_mk200";
			reloadtime = 0.07;
			showtoplayer = 1;
			soundbegin[] = {"begin1", 0.333, "begin2", 0.333, "begin3", 0.333};
			soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
			soundburst = 0;
			soundcontinuous = 0;
		};
		class close: manual {
			airateoffire = 1;
			airateoffiredistance = 200;
			burst = "6+round random 4";
			maxrange = "100+ random 50";
			maxrangeprobab = 0.1;
			midrange = "50+ random 50";
			midrangeprobab = 0.7;
			minrange = 30;
			minrangeprobab = 0.8;
			showtoplayer = 0;
		};
		class short: close {
			airateoffire = 2;
			airateoffiredistance = 600;
			burst = "4+round random 6";
			maxrange = "300+ random 50";
			maxrangeprobab = 0.1;
			midrange = "100+ random 50";
			midrangeprobab = 0.7;
			minrange = 50;
			minrangeprobab = 0.8;
		};
		class medium: close {
			airateoffire = 2;
			airateoffiredistance = 600;
			burst = "4+round random 4";
			maxrange = "400+ random 50";
			maxrangeprobab = 0.1;
			midrange = "300+ random 50";
			midrangeprobab = 0.7;
			minrange = 100;
			minrangeprobab = 0.8;
		};
		class far: close {
			airateoffire = 3;
			airateoffiredistance = 800;
			burst = "2+round random 4";
			maxrange = "600+ random 50";
			maxrangeprobab = 0.1;
			midrange = "500+ random 50";
			midrangeprobab = 0.7;
			minrange = 300;
			minrangeprobab = 0.8;
		};
		class long: far {
			airateoffire = 4;
			airateoffiredistance = 1000;
			burst = "8+round random 6";
			maxrange = 800;
			maxrangeprobab = 0.1;
			midrange = "700+ random 50";
			midrangeprobab = 0.2;
			minrange = 400;
			minrangeprobab = 0.8;
		};
		scope = 2;
		class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = 4;
			class MuzzleSlot {};
			class PointerSlot {
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
			class CowsSlot {
			    access = 1;
				compatibleitems[] = {"optic_MRCO"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
		}
	};
	class tb_lmg_minimi556 : tb_lmg_minimi_base {	
		descriptionshort = "Light machine gun <br/>Caliber: 5.556x45mm NATO";
		displayname = "FN Minimi";
		magazines[] = {"tb_100Rnd_556x45_box", "tb_100Rnd_556x45_box_tracer_green","tb_100Rnd_556x45_box_tracer_yellow","tb_100Rnd_556x45_box_tracer_red"};
		model = "\tb_lmg_m249\m249_556";
		handAnim[] = {"OFP2_ManSkeleton","\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"};
		scope = 2;
		class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = 4;
			class MuzzleSlot {};
			class PointerSlot {
				access = 1;
				compatibleitems[] = {"acc_flashlight","acc_pointer_IR"};
				displayname = "Pointer Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
			class CowsSlot {
			    access = 1;
				compatibleitems[] = {"optic_MRCO"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
		};	
	};
	
	
	
};







class CfgMagazines {
	class 150Rnd_762x51_Box;
	class 150Rnd_762x51_Box_Tracer;
	class tb_150Rnd_762x51_Box_Tracer_Red: 150Rnd_762x51_Box_Tracer {
		ammo = "B_762x51_Tracer_Red";
		descriptionshort = "Caliber: 7.62x51 mm Tracer - Red<br/>Rounds: 150";
		displayname = "7.62mm 150Rnd Tracer (Red) Box";
		displaynameshort = "Tracer";
		tracersevery = 1;
	};
	
	class tb_100Rnd_556x45_box : 150Rnd_762x51_Box {
		ammo = "B_556x45_Ball";
		count = 100;
		descriptionshort = "Caliber: 5.56x45 mm<br/>Rounds: 100";
		displayname = "5.56mm 100Rnd Box";
		displaynameshort = "5.56mm 100Rnd Box";
		tracersevery = 0;
		lastroundstracer = 4;	
	};
	class tb_100Rnd_556x45_box_tracer_green : tb_100Rnd_556x45_box{
		ammo = "B_556x45_Ball_Tracer_Green";
		descriptionshort = "Caliber: 5.56x45 mm Tracer - Green<br/>Rounds: 100";
		displayname = "5.56mm 100Rnd Tracer (Green) Box";
		displaynameshort = "5.56mm 100Rnd Tracer (Green) Box";
		tracersevery = 1;
	};
	class tb_100Rnd_556x45_box_tracer_yellow : tb_100Rnd_556x45_box_tracer_green {
		ammo = "B_556x45_Ball_Tracer_Yellow";
		descriptionshort = "Caliber: 5.56x45 mm Tracer - Yellow<br/>Rounds: 100";
		displayname = "5.56mm 100Rnd Tracer (Yellow) Box";
		displaynameshort = "Tracer";	
	};
	class tb_100Rnd_556x45_box_tracer_red : tb_100Rnd_556x45_box_tracer_green {
		ammo = "B_556x45_Ball_Tracer_Red";
		descriptionshort = "Caliber: 5.56x45 mm Tracer - Red<br/>Rounds: 100";
		displayname = "5.56mm 100Rnd Tracer (Red) Box";
		displaynameshort = "Tracer";	
	};

	
};