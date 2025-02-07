class Mode_FullAuto;

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

	///////////////////////////////
	//M134 Minigun for Littlebird//
	///////////////////////////////
	class Default;
	class MGun;
	class MGunCore;
	class M134_minigun: MGunCore
	{
		class LowROF;
	};
	class rhs_weap_m134_minigun_1: M134_minigun
	{
		displayName = "M134 Minigun 7.62mm";
		magazines[] = {"rhs_mag_762x51_m80a1_4000"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "muzzle_1";
				directionName = "chamber_1";
			};
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge";
			};
			class RHSUSF_BarrelRefract
			{
				positionName = "muzzle_1";
				directionName = "muzzle_1";
				effectName = "RHSUSF_BarrelRefractHeavy";
			};
		};
	};
	class RHS_weap_m134_pylon: rhs_weap_m134_minigun_1
	{
		scope = 1;
		displayname = "M134D-H";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"rhs_mag_m134_pylon_3000"};
		canLock = 0;
		modes[] = {"LowROF","HighROF","ExtremeROF","close","short","medium","far"};
		weight = 40;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "z_gunR_muzzle";
				directionName = "z_gunR_chamber";
			};
			class SecondEffect
			{
				effectName = "MachineGun1";
				positionName = "z_gunL_muzzle";
				directionName = "z_gunL_chamber";
			};
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge";
			};
			class effect2
			{
				positionName = "machinegun_eject_2_pos";
				directionName = "machinegun_eject_2_dir";
				effectName = "MachineGunCartridge";
			};
			class effect3
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunEject";
			};
			class effect4
			{
				positionName = "machinegun_eject_2_pos";
				directionName = "machinegun_eject_2_dir";
				effectName = "MachineGunEject";
			};
		};
		class LowROF: LowROF
		{
			displayName = "LO";
			textureType = "burst";
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 3;
			aiDispersionCoefY = 3;
			reloadTime = 0.03;
			dispersion = 0.0110; //Double dispersion
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			showToPlayer = 1;
			multiplier = 1;
		};
		class HighROF: LowROF
		{
			displayName = "HI";
			textureType = "fullAuto";
			minRangeProbab = 0.08;
			midRangeProbab = 0.058;
			dispersion = 0.0150; // High dispersion
			reloadTime = 0.007; //High rate of fire
		};
		class ExtremeROF: LowROF
		{
			displayName = "EX";
			textureType = "fullAuto";
			minRangeProbab = 0.08;
			midRangeProbab = 0.058;
			reloadTime = 0.004; //Extreme rate of fire
			dispersion = 0.0250; // Extreme dispersion
		};
		class close: HighROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.3;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.95;
			maxRange = 1000;
			maxRangeProbab = 0.95;
		};
		class short: close
		{
			burst = 25;
			burstRangeMax = 45;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.95;
			midRange = 1000;
			midRangeProbab = 0.9;
			maxRange = 1500;
			maxRangeProbab = 0.85;
		};
		class medium: LowROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 33;
			burstRangeMax = 66;
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.9;
			midRange = 1500;
			midRangeProbab = 0.85;
			maxRange = 2000;
			maxRangeProbab = 0.7;
		};
		class far: medium
		{
			burst = 15;
			burstRangeMax = 35;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.85;
			midRange = 2500;
			midRangeProbab = 0.65;
			maxRange = 3000;
			maxRangeProbab = 0.6;
		};
	};
	class HMG_127;
	class RHS_weap_gau19: HMG_127
	{
		scope = 1;
		displayName = "GAU-19/A";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"rhsusf_mag_gau19_melb_right","rhsusf_mag_gau19_melb_left"};
		canLock = 0;
		modes[] = {"LowROF","HighROF","close","short","medium","far"};
		weight = 60;
		class GunParticles
		{
			class effect1
			{
				effectName = "MachineGunCloud";
				positionName = "z_gauL_muzzle";
				directionName = "z_gauL_chamber";
			};
			class effect2
			{
				positionName = "gauL_eject_pos";
				directionName = "gauL_eject_dir";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "gauL_eject_pos";
				directionName = "gauL_eject_dir";
				effectName = "MachineGunCartridge1";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "GAU/LO";
			textureType = "burst";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_1",2.5,1,2600};
				begin2[] = {"rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_2",2.5,1,2600};
				begin3[] = {"rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_3",2.5,1,2600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			reloadTime = 0.06;
			dispersion = 0.010; // Doubled dispersion
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			showToPlayer = 1;
			multiplier = 1;
		};
		class HighROF: LowROF
		{
			displayName = "GAU/HI";
			textureType = "fullAuto";
			minRangeProbab = 0.08;
			midRangeProbab = 0.058;
			dispersion = 0.020; // Doubled dispersion again
			reloadTime = 0.01; // Upped ROF
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 15;
			burstRangeMax = 25;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 100;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 21;
			burstRangeMax = 31;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			burstRangeMax = 20;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 10;
			burstRangeMax = 20;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 100;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
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