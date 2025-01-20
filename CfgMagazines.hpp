class CfgMagazines {
	/////////////////////////////////
	//Launcher Ammo Balance Changes//
	/////////////////////////////////

	class CA_LauncherMagazine;
	class Titan_AA;

	//Increase Titan AT Ammo (Titan_AT) mass from 10 lbs to 11 lbs (+10%)
	class Titan_AT: Titan_AA {
		mass = 110; //originally 100
	};

	//Decrease Javelin Ammo (rhs_fgm148_magazine_AT) mass from 28.69 lbs to 14 lbs (-50%)
	class rhs_fgm148_magazine_AT: CA_LauncherMagazine {
		mass = 140; //originally 286.88
	};

	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEDP) mass from 12.98 lbs to 8.70 lbs (-10%)
	class rhs_mag_smaw_HEDP: CA_LauncherMagazine {
		mass = 87; //originally 129.8
	};

	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEAA) mass from 13.64 lbs to 9.10 lbs (-10%)
	class rhs_mag_smaw_HEAA: CA_LauncherMagazine {
		mass = 91; //originally 136.4
	};

};

//Magazine Changelog
	//Increase Titan AT Ammo (Titan_AT) mass from 10 lbs to 11 lbs (+10%)
	//Decrease Javelin Ammo (rhs_fgm148_magazine_AT) mass from 28.69 lbs to 14 lbs (-50%)
	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEDP) mass from 12.98 lbs to 8.70 lbs (-33%)
	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEAA) mass from 13.64 lbs to 9.10 lbs (-33%)



