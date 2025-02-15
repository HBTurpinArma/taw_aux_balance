class CfgMagazines {
	class CA_Magazine;

	////////////////////
	//GX AMR Magazines//
	////////////////////
	// //Increase GX AMR Mk1 Ammo (GX_AMR_MK1_127_15Rnd_Mag) mass from 1.6 lbs to 3.8 lbs (+137.5%)
	// class GX_AMR_MK1_127_15Rnd_Mag: CA_Magazine {
	// 	mass = 38; //originally 16
	// };
	// //Increase GX AMR Mk1 Ammo (GX_AMR_MK1_127_15Rnd_APDS_Mag) mass from 1.6 lbs to 3.8 lbs (+137.5%)
	// class GX_AMR_MK1_127_15Rnd_APDS_Mag: CA_Magazine {
	// 	mass = 38; //originally 16
	// };
	
	// //Increase GX AMR Mk2 Ammo (GX_AMR_MK2_338_25Rnd_Mag) mass from 1.4 lbs to 3 lbs (+114.3%)
	// class GX_AMR_MK2_338_25Rnd_Mag: CA_Magazine {
	// 	mass = 30; //originally 14
	// };

	// //Increase GX AMR Mk2 Ammo (GX_AMR_MK2_338_25Rnd_API_Mag) mass from 1.4 lbs to 3 lbs (+114.3%)
	// class GX_AMR_MK2_338_25Rnd_API_Mag: CA_Magazine {
	// 	mass = 30; //originally 14
	// };
	

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


	///////////////////////////////
	//M134 Minigun for Littlebird//
	///////////////////////////////
	class VehicleMagazine;
	class rhs_mag_1100Rnd_762x51_M240: VehicleMagazine
	{
		scope = 2;
		ammo = "rhs_ammo_762x51_M80A1EPR_Ball";
		displayname = "7.62x51mm EPR";
		displaynameshort = "M80A1 EPR";
		namesound = "mgun";
		initspeed = 930;
		maxleadspeed = 100;
		count = 1100;
		tracersevery = 5;
	};
	class rhs_mag_762x51_m80a1_4000: rhs_mag_1100Rnd_762x51_M240
	{
		count = 4000;
		weight = 84;
		tracersevery = 2; // Changes the tracer rate
	};
	class rhs_mag_gau19_air_base: VehicleMagazine
	{
		scope				= 0;
		ammo				= rhs_ammo_127x99_SLAP_Tracer_Red;
		count				= 1300;
		displayname			= "GAU-19/A";
		displayNameShort	= "12.7x99mm";
		descriptionShort	= "×1300 12.7×99mm M962 (SLAP-T)";
		initspeed			= 1210;
		maxleadspeed		= 200;
		pylonWeapon			= RHS_weap_gau19;
		muzzlePos			= "muzzlePos";
		muzzleEnd			= "muzzleEnd";
		weight				= 200;
		mass				= 200;
		tracersEvery		= 1;
	};
	class rhsusf_mag_gau19_melb_right: rhs_mag_gau19_air_base
	{
		scope			= 2;
		hardpoints[]	= {"RHS_HP_MELB_R","RHS_HP_MELB_M134"}; // Allows GAU-19 on inner hardpoints
		model			= \rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_R;
	};
	class rhsusf_mag_gau19_melb_left: rhs_mag_gau19_air_base
	{
		scope			= 2;
		hardpoints[]	= {"RHS_HP_MELB_L","RHS_HP_MELB_M134"}; // Allows GAU-19 on inner hardpoints
		model			= \rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_L;
	};
	class rhs_mag_m134_pylon_base: VehicleMagazine
	{
		scope				= 0;
		ammo				= rhs_ammo_762x51_M61_AP;
		displayname			= "M134";
		displayNameShort	= "7.62x51 mm";
		initspeed			= 910;
		pylonWeapon			= RHS_weap_m134_pylon;
		muzzlePos			= "muzzlePos";
		muzzleEnd			= "muzzleEnd";
		weight				= 180;
		mass				= 180;
		tracersEvery		= 3;
		lastRoundsTracer	= 4;

		model				= \rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_m134;
	};
	class rhs_mag_m134_pylon_3000: rhs_mag_m134_pylon_base
	{
		descriptionShort	= "×3000 7.62×51mm M61/M62 (AP/T)";
		scope				= 2;
		hardpoints[]		= {"RHS_HP_MELB_M134","RHS_HP_MELB_R","RHS_HP_MELB_L"}; //Adds the m134 ability to be mounted on all four hardpoints
		count				= 3000;
	};
};

//Magazine Changelog
	//Increase Titan AT Ammo (Titan_AT) mass from 10 lbs to 11 lbs (+10%)
	//Decrease Javelin Ammo (rhs_fgm148_magazine_AT) mass from 28.69 lbs to 14 lbs (-50%)
	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEDP) mass from 12.98 lbs to 8.70 lbs (-33%)
	//Decrease Mk153 SMAW Ammo (rhs_mag_smaw_HEAA) mass from 13.64 lbs to 9.10 lbs (-33%)
	//Increase GX AMR Mk1 Ammo (GX_AMR_MK1_127_15Rnd_Mag) mass from 1.6 lbs to 3.8 lbs (+137.5%)
	//Increase GX AMR Mk1 Ammo (GX_AMR_MK1_127_15Rnd_APDS_Mag) mass from 1.6 lbs to 3.8 lbs (+137.5%)
	//Increase GX AMR Mk2 Ammo (GX_AMR_MK2_338_25Rnd_Mag) mass from 1.4 lbs to 3 lbs (+114.3%)
	//Increase GX AMR Mk2 Ammo (GX_AMR_MK2_338_25Rnd_API_Mag) mass from 1.4 lbs to 3 lbs (+114.3%)


