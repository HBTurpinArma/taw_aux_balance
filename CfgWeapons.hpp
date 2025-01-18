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
	
	//Decrase Metis (launch_Vorona_base_F) mass from 22.48 lbs to 13.24 lbs (-40%)
	class launch_Vorona_base_F: Launcher_Base_F {
		mass = 132.4;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 132.4; //originally 224.8
		};
	};	

	//Decrease NLAW (launch_NLAW_F) mass from 27.50 lbs to 20 lbs (-28%)
	class launch_NLAW_F: Launcher_Base_F {
		mass = 200;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 200; //originally 275
		};
	};
};

//Weapon Changelog
	//Increase Titan Compact (launch_Titan_short_base) from 8.8 lbs to 10 lbs (+10%)
	//Decrase Metis (launch_Vorona_base_F) from 22.48 lbs to 13.24 lbs (-40%)
	//Decrease NLAW (launch_NLAW_F) from 27.50 lbs to 20 lbs (-28%)

