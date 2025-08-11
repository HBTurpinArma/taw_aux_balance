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

	//////////////////////////////
	//Helicopter Targetting Pods//
	//////////////////////////////
	class Helicopter_Base_H;
	class Plane_Base_F;

	// Addjust Xi'an Angle slightly (it already has a targeting pod, but the angle is slightly off)
	class VTOL_Base_F : Plane_Base_F {
		class pilotCamera;
	};
	class VTOL_02_base_F: VTOL_Base_F {
		class pilotCamera: pilotCamera {
			minTurn = -160;
			minElev = -5;
			maxTurn = 160;
			maxElev = 110;
		};
	};

	// RHS_MELB_AH6M (RHS little bird)
	class RHS_MELB_base: Helicopter_Base_H {
		class MFD;
	};
	class RHS_MELB_AH6M: RHS_MELB_base {
		class MFD: MFD {
			class AirplaneHUD;
		};
	};
	class RHS_MELB_AH6M_MK2: RHS_MELB_AH6M {
		displayName = "AH-6M MELB Mk2";
		laserScanner = 1;
		showAllTargets = 4;
		memoryPointDriverOptics[] = {"commanderview"};
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		magazines[] += {"Laserbatteries"};
		weapons[] += {"Laserdesignator_pilotCamera"};
		class MFD: MFD {
			class AirplaneHUD: AirplaneHUD {};
			class B_Plane_Fighter_01_static_HUD {
				enableParallax = 0;
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {1, 1, 1, 1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0325, 0.0325, 0.1};
				helmetRight[] = {0.065, 0, 0};
				helmetDown[] = {0, -0.065, 0};
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5, 0.5};
					pos10[] = {1.225, 1.1};
				};
				class Bones {	
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
				};
				class Draw {
					alpha = "user3";
					color[] = {"user0", "user1", "user2"};
					condition = "on";
					class TargetingPodGroup
					{
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodDir", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodDir", 1, {0.0208056, -0.00407807}, 1}, {}, {"TargetingPodDir", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodDir", 1, {0.0117854, -0.0173806}, 1}, {}, {"TargetingPodDir", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodDir", 1, {-0.00413849, -0.0205019}, 1}, {}, {"TargetingPodDir", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodDir", 1, {-0.0176381, -0.0116134}, 1}, {}, {"TargetingPodDir", 1, {-0.0208056, -0.00407807}, 1}, {"TargetingPodDir", 1, {-0.0208056, 0.00407808}, 1}, {}, {"TargetingPodDir", 1, {-0.0176381, 0.0116134}, 1}, {"TargetingPodDir", 1, {-0.0117854, 0.0173806}, 1}, {}, {"TargetingPodDir", 1, {-0.00413849, 0.0205019}, 1}, {"TargetingPodDir", 1, {0.00413849, 0.0205019}, 1}, {}, {"TargetingPodDir", 1, {0.0117854, 0.0173806}, 1}, {"TargetingPodDir", 1, {0.0176381, 0.0116134}, 1}, {}, {"TargetingPodDir", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodDir", 1, {0.0208056, -0.00407808}, 1}, {}, {"TargetingPodDir", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodDir", 1, {0.0117854, -0.0173807}, 1}, {}, {"TargetingPodDir", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodDir", 1, {-0.0041385, -0.0205019}, 1}, {}, {"TargetingPodDir", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodDir", 1, {-0.0176381, -0.0116134}, 1}, {}, {}};
						};
					};
				};
			};
		};
		class pilotCamera {
			class OpticsIn {
				class Wide {
					opticsDisplayName = "WFOV";
						initAngleX=0;
						minAngleX=-360;
						maxAngleX=360;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=85;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium {
					opticsDisplayName = "MFOV";
					initFov = "(6 / 120)";
					minFov = "(6 / 120)";
					maxFov = "(6 / 120)";
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
						initAngleX=0;
						minAngleX=-360;
						maxAngleX=360;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=85;
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
				};
				class Narrow {
					opticsDisplayName = "NFOV";
					initFov = "(2 / 120)";
					minFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
						initAngleX=0;
						minAngleX=-360;
						maxAngleX=360;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=85;
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
				};
			};
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			minElev = -90;
			maxElev = 60;
			initElev = 0;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
	};

	// RHS_UH1Y (RHS venom)

	// RHS_UH60M_ESSS (armed RHS black hawk)

	// rhsusf_CH53E_USMC (RHS super stallion)

	// rhs_l159_cdf_b_CDF (RHS L-159 ALCA)

	// RHSGREF_A29B_HIDF (RHS A-29 super tucano)

	// O_Heli_Light_02_dynamicLoadout_F (vanilla Ka-60)

	// I_Heli_light_03_dynamicLoadout_F (vanilla wildcat)

	// B_Heli_Transport_03_F (vanilla chinook)

	// B_Heli_Transport_04_F (TAW AUX taru)

	////	
	class Heli_Transport_01_base_F: Helicopter_Base_H {
		class MFD;
	};
	class Heli_Transport_01_pylons_base_F: Heli_Transport_01_base_F {
		class MFD: MFD {
			class AirplaneHUD;
		};
	};
	class AMP_Heli_Transport_01_pylons_laser_base : Heli_Transport_01_pylons_base_F {
		author = "Ampersand";
		displayName = "UH-80 Ghost Hawk (Stub Wings, Laser)";
		laserScanner = 1;
		showAllTargets = 4;
		memoryPointDriverOptics = "light_l";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		magazines[] += {"Laserbatteries"};
		weapons[] += {"Laserdesignator_pilotCamera"};

		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Transport_01_pylons_F.jpg";
		availableForSupportTypes[] = {"Drop", "Transport"};
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"rotor_destructx", 0}, {"rotor_destructy", 0}, {"mala_vrtule_destructy", 0}, {"mala_vrtule_destructz", 0}, {"damagehide", 0}, {"hrotor", 0}, {"vrotor", 0}, {"lever_pilot", 0}, {"lever_copilot", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"i_compass_pilot", 0}, {"i_compass_copilot", 0}, {"i_compass_middle", 0}, {"display_on", 0}, {"radar_on", 0}, {"radar2_on", 0}, {"i_altitude_100f", 7.14}, {"i_speed", 0}, {"i_speed_02", 0}, {"i_speed_03", 0}, {"i_speed02", 0}, {"i_speed02_02", 0}, {"i_speed02_03", 0}, {"i_vspeed", 0}, {"i_vspeed_02", 0}, {"i_vspeed_03", 0}, {"i_vspeed02", 0}, {"i_vspeed02_02", 0}, {"i_vspeed02_03", 0}, {"i_altitude02_100f", 7.14}, {"dg_pitch", 0}, {"dg_bank", 0}, {"dg_pitch2", 0}, {"dg_bank2", 0}, {"dg_vertspeed", 0}, {"dg_vertspeed2", 0}, {"i_rpm", 0}, {"i_rpm02", 0}, {"i_rpm03", 0}, {"i_rpm04", 0}, {"i_torque01", 0}, {"i_torque02", 0}, {"i_torque03", 0}, {"i_torque04", 0}, {"i_torque01_base", 0}, {"i_torque02_base", 0}, {"i_torque03_base", 0}, {"i_torque04_base", 0}, {"i_fuel", 1}, {"i_fuel_02", 1}, {"i_fuel_03", 1}, {"i_fuel_04", 1}, {"radar", 92.47}, {"radar2", 92.47}, {"positionlights", 0}, {"collisionlight_red_blinking", 0}, {"collisionlight_white_blinking", 0}, {"wheel_rear_damper", 0}, {"wheel_left_damper", 0}, {"wheel_right_damper", 0}, {"reargear", 0}, {"rearrightcover", 0}, {"rearleftcover", 0}, {"rightgear", 0}, {"leftgear", 0}, {"rightgear_hide", 0}, {"leftgear_hide", 0}, {"wheel_1_1", 0}, {"wheel_1_2", 0}, {"wheel_2_1", 0}, {"door_l", 0}, {"door_back_l_lock", 0}, {"door_r", 0}, {"door_back_r_lock", 0}, {"holdster", 1}, {"stick_pilot_dive_01", 0}, {"stick_pilot_dive_02", 0}, {"stick_pilot_dive_03", 0}, {"stick_pilot_dive_04", 0}, {"stick_pilot_dive_05", 0}, {"stick_pilot_bank_01", 0}, {"stick_pilot_bank_02", 0}, {"stick_pilot_bank_03", 0}, {"stick_pilot_bank_04", 0}, {"stick_pilot_bank_05", 0}, {"stick_copilot_dive01", 0}, {"stick_copilot_dive02", 0}, {"stick_copilot_dive03", 0}, {"stick_copilot_dive04", 0}, {"stick_copilot_dive05", 0}, {"stick_copilot_bank01", 0}, {"stick_copilot_bank02", 0}, {"stick_copilot_bank03", 0}, {"stick_copilot_bank04", 0}, {"stick_copilot_bank05", 0}, {"mainturret", 1.57}, {"maingun", -0.26}, {"mainturret2", -1.57}, {"maingun2", -0.26}, {"minigun", 0.33}, {"minigun2", 0.33}};
			hide[] = {"clan", "zasleh", "zasleh_1", "light_l", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.192;
			verticalOffsetWorld = 0.053;
			postinit = "[this, '', []] call bis_fnc_initVehicle";
		};
		class MFD: MFD {
			class AirplaneHUD: AirplaneHUD {};
			class B_Plane_Fighter_01_static_HUD {
				enableParallax = 0;
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {1, 1, 1, 1};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0325, 0.0325, 0.1};
				helmetRight[] = {0.065, 0, 0};
				helmetDown[] = {0, -0.065, 0};
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5, 0.5};
					pos10[] = {1.225, 1.1};
				};
				class Bones {	
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
				};
				class Draw {
					alpha = "user3";
					color[] = {"user0", "user1", "user2"};
					condition = "on";
					class TargetingPodGroup
					{
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodDir", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodDir", 1, {0.0208056, -0.00407807}, 1}, {}, {"TargetingPodDir", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodDir", 1, {0.0117854, -0.0173806}, 1}, {}, {"TargetingPodDir", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodDir", 1, {-0.00413849, -0.0205019}, 1}, {}, {"TargetingPodDir", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodDir", 1, {-0.0176381, -0.0116134}, 1}, {}, {"TargetingPodDir", 1, {-0.0208056, -0.00407807}, 1}, {"TargetingPodDir", 1, {-0.0208056, 0.00407808}, 1}, {}, {"TargetingPodDir", 1, {-0.0176381, 0.0116134}, 1}, {"TargetingPodDir", 1, {-0.0117854, 0.0173806}, 1}, {}, {"TargetingPodDir", 1, {-0.00413849, 0.0205019}, 1}, {"TargetingPodDir", 1, {0.00413849, 0.0205019}, 1}, {}, {"TargetingPodDir", 1, {0.0117854, 0.0173806}, 1}, {"TargetingPodDir", 1, {0.0176381, 0.0116134}, 1}, {}, {"TargetingPodDir", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodDir", 1, {0.0208056, -0.00407808}, 1}, {}, {"TargetingPodDir", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodDir", 1, {0.0117854, -0.0173807}, 1}, {}, {"TargetingPodDir", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodDir", 1, {-0.0041385, -0.0205019}, 1}, {}, {"TargetingPodDir", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodDir", 1, {-0.0176381, -0.0116134}, 1}, {}, {}};
						};
					};
				};
			};
		}; // MFD
		class pilotCamera {
			class OpticsIn {
				class Wide {
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium {
					opticsDisplayName = "MFOV";
					initFov = "(6 / 120)";
					minFov = "(6 / 120)";
					maxFov = "(6 / 120)";
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
				};
				class Narrow {
					opticsDisplayName = "NFOV";
					initFov = "(2 / 120)";
					minFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
				};
			};
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			minElev = -90;
			maxElev = 60;
			initElev = 0;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		}; // pilotCamera
	}; // AMP_Heli_Transport_01_pylons_laser_base

	class AMP_Heli_Transport_01_pylons_laser: AMP_Heli_Transport_01_pylons_laser_base {
		displayName = "UH-80 Ghost Hawk (Stub Wings, Laser)";
		_generalMacro = "AMP_Heli_Transport_01_pylons_laser";
		scope = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		crew = "B_Helipilot_F";
		typicalCargo[] = {"B_Helipilot_F"};
	}; // AMP_Heli_Transport_01_pylons_laser
		


};