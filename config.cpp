class CfgPatches {
	class tb_lmg_m249 {
		units[] = {};
		weapons[] = {"tb_lmg_m249_p","tb_lmg_m249"};
		requiredVersion = 0.10;
		requiredAddons[] = {"A3_Weapons_F_beta","tb_alfr_mk23"};
	};
};

class CfgWeapons {
	class tb_lmg_mk23;
	class tb_lmg_m249_p : tb_lmg_mk23 {
		displayname = "M249";
		model = "\tb_lmg_m249\m249_556";
		picture = "\tb_lmg_m249\Data\w_m249p_ca.paa";
		class Library {
			libtextdesc = "The M249 Squad Automatic Weapon is a fully-automatic, gas-operated, magazine or belt-fed individual weapon.<br/>It is the standard US Army light machine gun based on the Belgian FN Minimi, featuring a 200 round plastic magazine box. The bipod can be collapsed and the weapon can be fired from the hands.<br/>The M249 SAW provides the squad with the accurate and sustained fire required to suppress and destroy enemy targets.";
		};
	};
	class tb_lmg_m249 : tb_lmg_m249_p {
		picture = "\tb_lmg_m249\Data\w_m249_ca.paa";
		model = "\tb_lmg_m249\m249_200";
		handAnim[] = {"OFP2_ManSkeleton","tb_alfr_mk23\data\anim\Mk48.rtm"};
	};
};