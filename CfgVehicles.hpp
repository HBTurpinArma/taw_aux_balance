class CfgVehicles {

	/////////////////////
	//Mod Compatibility//
	/////////////////////
	#include "Compats\PLA_AVP.hpp"

	//////////////////
	//New Mk2 Drones//
	//////////////////
	class Helicopter_Base_F;
	class UAV;

	//YABHON Mk2
	class UAV_02_base_F: UAV {
		class Turrets;
	};
	class B_UAV_02_dynamicLoadout_F: UAV_02_base_F {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class B_UAV_02_dynamicLoadout_F_mk2: B_UAV_02_dynamicLoadout_F {
		displayName = "YABHON-R3 Mk2";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		
		//driverOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";
		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
				turretInfoType = "Rsc_MELB_Turret_UnitInfo";
				// weapons[] = { "RHS_Laserdesignator_MELB"};
				// magazines[] = { "Laserbatteries" };
				class OpticsIn {
					class Wide {
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						directionStabilized = 1;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
						initFov = 0.3;
						maxFov = 0.3;
						minFov = 0.3;
					};

					class WideT: Wide {
						opticsDisplayName = "wT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";
						initFov = 0.2;
						maxFov = 0.2;
						minFov = 0.2;
					};

					class MediumT: Wide {
						opticsDisplayName = "MT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_m.p3d";
						initFov = 0.1;
						maxFov = 0.1;
						minFov = 0.1;
					};

					class NarrowT: Wide {
						opticsDisplayName = "NT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n.p3d";
						initFov = 0.022;
						maxFov = 0.022;
						minFov = 0.022;
					};

					class NarrowT2: Wide {
						opticsDisplayName = "NT2";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n2.p3d";
						initFov = 0.0092;
						maxFov = 0.0092;
						minFov = 0.0092;
					};
				};
				class OpticsOut;
				class Components;
			};
			
		};
	};
	//UCAV Sentinel Mk2
	class UAV_05_Base_F: UAV {
		class Turrets;
	};
	class B_UAV_05_F : UAV_05_Base_F {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class B_UAV_05_F_mk2: B_UAV_05_F {
		displayName = "UCAV Sentinel Mk2";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
				// weapons[] = { "RHS_Laserdesignator_MELB"};
				// magazines[] = { "Laserbatteries" };
				class OpticsIn {
					class Wide {
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						directionStabilized = 1;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
						initFov = 0.3;
						maxFov = 0.3;
						minFov = 0.3;
					};

					class WideT: Wide {
						opticsDisplayName = "wT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";
						initFov = 0.2;
						maxFov = 0.2;
						minFov = 0.2;
					};

					class MediumT: Wide {
						opticsDisplayName = "MT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_m.p3d";
						initFov = 0.1;
						maxFov = 0.1;
						minFov = 0.1;
					};

					class NarrowT: Wide {
						opticsDisplayName = "NT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n.p3d";
						initFov = 0.022;
						maxFov = 0.022;
						minFov = 0.022;
					};

					class NarrowT2: Wide {
						opticsDisplayName = "NT2";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n2.p3d";
						initFov = 0.0092;
						maxFov = 0.0092;
						minFov = 0.0092;
					};
				};
				class OpticsOut;
				class Components;
			};
			
		};
	};
	//MQ-12 Falcon Mk2
	class UAV_03_base_F: Helicopter_Base_F {
		class Turrets;
	};
	class B_T_UAV_03_dynamicLoadout_F : UAV_03_base_F {
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	class B_T_UAV_03_dynamicLoadout_F_mk2: B_T_UAV_03_dynamicLoadout_F {
		displayName = "MQ-12 Falcon Mk2";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
				// weapons[] = { "RHS_Laserdesignator_MELB"};
				// magazines[] = { "Laserbatteries" };
				class OpticsIn {
					class Wide {
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						directionStabilized = 1;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_wf.p3d";
						initFov = 0.3;
						maxFov = 0.3;
						minFov = 0.3;
					};

					class WideT: Wide {
						opticsDisplayName = "wT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_w2.p3d";
						initFov = 0.2;
						maxFov = 0.2;
						minFov = 0.2;
					};

					class MediumT: Wide {
						opticsDisplayName = "MT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_m.p3d";
						initFov = 0.1;
						maxFov = 0.1;
						minFov = 0.1;
					};

					class NarrowT: Wide {
						opticsDisplayName = "NT";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n.p3d";
						initFov = 0.022;
						maxFov = 0.022;
						minFov = 0.022;
					};

					class NarrowT2: Wide {
						opticsDisplayName = "NT2";
						gunnerOpticsModel = "rhsusf\addons\rhsusf_melb\data\optics\melb_flir_n2.p3d";
						initFov = 0.0092;
						maxFov = 0.0092;
						minFov = 0.0092;
					};
				};
				class OpticsOut;
				class Components;
			};
		};
	};
};