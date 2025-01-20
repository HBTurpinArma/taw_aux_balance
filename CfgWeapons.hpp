class CfgWeapons {
	////////////////////////////
	//Launcher Balance Changes//
	////////////////////////////
	class Launcher;
	class Launcher_Base_F : Launcher {
		class WeaponSlotsInfo;
	};
	class launch_Titan_base: Launcher_Base_F {
		class WeaponSlotsInfo;
	};

	//Increase Titan Compact (launch_Titan_short_base) mass from 8.8 lbs to 10 lbs (+10%)
	class launch_Titan_short_base: launch_Titan_base {
		mass = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100; //originally 88
		};
	};
	
	//Decrease Metis (launch_Vorona_base_F) mass from 22.48 lbs to 13.24 lbs (-40%)
	class launch_Vorona_base_F: Launcher_Base_F {
		mass = 132.4;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 132.4; //originally 224.8
		};
	};	

	//Decrease NLAW (launch_NLAW_F) mass from 27.50 lbs to 18 lbs (-35%)
	class launch_NLAW_F: Launcher_Base_F {
		mass = 180;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 180; //originally 275
		};
	};


	//////////////////
	//Vest Balancing//
	//////////////////
	class ItemCore;
	class Vest_Camo_Base: ItemCore {
		class ItemInfo;
	};

	//Increase the Rebreathers inventory size from 0lbs to 8lbs.
	//Increase the Rebreathers armour slightly to that you can survive small arms.
	class V_RebreatherB: Vest_Camo_Base {
		class ItemInfo: ItemInfo {
			containerClass = "Supply80";
			class HitPointsProtectionInfo {
				class Abdomen {
					armor = 16;
					hitpointName = "HitAbdomen";
					passThrough = 0.4;
				};
				class Body {
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
				class Chest {
					armor = 16;
					hitpointName = "HitChest";
					passThrough = 0.4;
				};
				class Diaphragm {
					armor = 16;
					hitpointName = "HitDiaphragm";
					passThrough = 0.4;
				};
				class Pelvis {
					armor = 12;
					hitpointName = "HitPelvis";
					passThrough = 0.5;
				};
			};
		};
	};


};

//Weapon Changelog
	//Increase Titan Compact (launch_Titan_short_base) mass from 8.8 lbs to 10 lbs (+10%)
	//Decrease Metis (launch_Vorona_base_F) mass from 22.48 lbs to 13.24 lbs (-40%)
	//Decrease NLAW (launch_NLAW_F) mass from 27.50 lbs to 18 lbs (-35%)

//Vest Changelog
	//Increase the Rebreathers (V_RebreatherB) inventory size from 0lbs to 8lbs.
	//Increase the Rebreathers (V_RebreatherB) armour slightly to that you can survive small arms.