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

	//Decrease Javelin Ammo (rhs_fgm148_magazine_AT) mass from 28.69 lbs to 12 lbs (-60%)
	class rhs_fgm148_magazine_AT: CA_LauncherMagazine {
		mass = 120; //originally 286.88
	};

	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEDP) mass from 12.98 lbs to 11.60 lbs (-10%)
	class rhs_mag_smaw_HEDP: CA_LauncherMagazine {
		mass = 116; //originally 129.8
	};

	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEAA) mass from 13.64 lbs to 12.30 lbs (-10%)
	class rhs_mag_smaw_HEAA: CA_LauncherMagazine {
		mass = 123; //originally 136.4
	};

};

//Magazine Changelog
	//Increase Titan AT Ammo (Titan_AT) mass from 10 lbs to 11 lbs (+10%)
	//Decrease Javelin Ammo (rhs_fgm148_magazine_AT) mass from 28.69 lbs to 12 lbs (-60%)
	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEDP) mass from 12.98 lbs to 11.60 lbs (-10%)
	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEAA) mass from 13.64 lbs to 12.30 lbs (-10%)



