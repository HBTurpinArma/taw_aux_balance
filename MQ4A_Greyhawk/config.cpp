////////////////////////////////////////////////////////////////////
//DeRap: drones_f\Air_F_Gamma\UAV_02\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Tue Mar 02 03:13:24 2021 : 'file' last modified on Thu Aug 29 03:42:26 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Drones_F_Air_F_Gamma_UAV_02
	{
		addonRootClass = "A3_Drones_F";
		requiredAddons[] = {"A3_Drones_F"};
		requiredVersion = 0.1;
		units[] = {"B_UAV_02_CAS_F","B_UAV_02_dynamicLoadout_F","B_UAV_02_F","I_UAV_02_CAS_F","I_UAV_02_dynamicLoadout_F","I_UAV_02_F","O_UAV_02_CAS_F","O_UAV_02_dynamicLoadout_F","O_UAV_02_F"};
		weapons[] = {};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Plane;
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class AnimationSources;
		class Components;
	};
	class UAV_02_base_F: UAV
	{
		features = "Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: None";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "UAV_02_base_F";
		displayName = "$STR_A3_CfgVehicles_UAV_02_base0";
		editorSubcategory = "EdSubcat_Drones";
		icon = "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\Map_UAV_02_CA.paa";
		picture = "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\UAV_02_base_F.paa";
		unitInfoType = "RscOptics_AV_airplane_pilot";
		attenuationEffectType = "OpenHeliAttenuation";
		soundGetIn[] = {"",0.56234133,1};
		soundGetOut[] = {"",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_5",0.39810717,1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_start_ext",0.70794576,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_start_int",0.70794576,1.0,400};
		soundEngineOffInt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_stop_int",0.70794576,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\air\UAV_02\UAV_02_stop_ext",0.70794576,1.0,400};
		soundGearUp[] = {"A3\Sounds_F\vehicles\air\noises\drone_gear_up",1.0,1.0,120};
		soundGearDown[] = {"A3\Sounds_F\vehicles\air\noises\drone_gear_down",1.0,1.0,120};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.63095737,1.0,100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.63095737,1.0,100};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,900};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,900};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,900};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,900};
		soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_low_ext",0.70794576,1.0,450};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_high_ext",1.0,1.0,650};
				frequency = "(rpm factor[0.5, 1.0])";
				volume = "camPos*(rpm factor[0.2, 1.0])";
			};
			class ForsageOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_forsage_ext",1.1220185,1.0,900};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2.0,0.5};
			};
			class WindNoiseOut
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\noise",0.31622776,1.0,150};
				frequency = "(0.3+(1.005*(speed factor[1, 50])))";
				volume = "camPos*(speed factor[1,  50])";
			};
			class EngineLowIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_low_int",1.0,1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_high_int",1.0,1.0};
				frequency = "(rpm factor[0.5, 1.0])";
				volume = "(1-camPos)*(rpm factor[0.2, 1.0])";
			};
			class ForsageIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\UAV_02_forsage_int",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(thrust factor[0.6, 1.0])";
			};
			class WindNoiseIn
			{
				sound[] = {"A3\Sounds_F\air\UAV_02\noise",0.25118864,1.0};
				frequency = "(0.3+(1.005*(speed factor[1, 50])))";
				volume = "(1-camPos)*(speed factor[1, 50])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		formationX = 30;
		formationZ = 30;
		class HitPoints
		{
			class HitHull
			{
				armor = 3;
				explosionShielding = 5;
				name = "HitHull";
				passThrough = 0.5;
				visual = "Hit_Hull";
				radius = 0.25;
				minimalHit = 0.02;
				depends = "Total";
				material = -1;
			};
			class HitEngine: HitHull
			{
				armor = 1.5;
				explosionShielding = 2;
				name = "HitEngine";
				passThrough = 0.5;
				visual = "Hit_Engine";
				radius = 0.25;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitFuel: HitHull
			{
				armor = 3;
				explosionShielding = 4;
				name = "HitFuel";
				passThrough = 0.5;
				visual = "Hit_Fuel";
				radius = 0.3;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLAileron: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLAileron";
				passThrough = 0.1;
				visual = "Hit_AileronL";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRAileron: HitLAileron
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRAileron";
				passThrough = 0.1;
				visual = "Hit_AileronR";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCRudder: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLCRudder";
				passThrough = 0.1;
				visual = "Hit_RudderL";
				radius = 0.15;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRRudder: HitLCRudder
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRRudder";
				passThrough = 0.1;
				visual = "Hit_RudderR";
				radius = 0.15;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCElevator: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitLCElevator";
				passThrough = 0.1;
				visual = "Hit_ElevatorL";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRElevator: HitLCElevator
			{
				armor = 1.5;
				explosionShielding = 3;
				name = "HitRElevator";
				passThrough = 0.1;
				visual = "Hit_ElevatorR";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
		};
		class Exhausts
		{
			class Exhaust_center
			{
				position = "pos_Exhausts_start_center";
				direction = "pos_Exhausts_end_center";
				effect = "ExhaustsEffectHeliComHP";
			};
		};
		class Armory
		{
			description = "$STR_A3_CfgVehicles_UAV_02_base_Armory0";
		};
		model = "\A3\Drones_F\Air_F_Gamma\UAV_02\UAV_02_F.p3d";
		driveOnComponent[] = {};
		maximumLoad = 250;
		class TransportItems{};
		uavCameraDriverPos = "PiP0_pos";
		uavCameraDriverDir = "PiP0_dir";
		uavCameraGunnerPos = "laserstart";
		uavCameraGunnerDir = "commanderview";
		LODTurnedIn = -1;
		LODTurnedOut = -1;
		memoryPointLDust = "DustLeft";
		memoryPointRDust = "DustRight";
		memoryPointDriverOptics = "PiP0_pos";
		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics = 1;
		getInRadius = 0;
		class WingVortices{};
		class ViewPilot: ViewPilot
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class AnimationSources: AnimationSources
		{
			class Bombs
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class AT_missiles
			{
				source = "user";
				animPeriod = 0.99;
				initPhase = 1;
			};
			class Damper_1_source
			{
				source = "damper";
				wheel = "Wheel_1";
			};
			class Damper_2_source
			{
				source = "damper";
				wheel = "Wheel_2";
			};
			class Damper_3_source
			{
				source = "damper";
				wheel = "Wheel_3";
			};
			class Wheel_1_source
			{
				source = "wheel";
				wheel = "Wheel_1";
			};
			class Wheel_2_source
			{
				source = "wheel";
				wheel = "Wheel_2";
			};
			class Wheel_3_source
			{
				source = "wheel";
				wheel = "Wheel_3";
			};
		};
		class camShakeGForce
		{
			distance = 0;
			frequency = 2;
			minSpeed = 1;
			power = 0.1;
		};
		maxSpeed = 400;
		landingAoa = 0.1309;
		landingSpeed = 140;
		stallSpeed = 100;
		stallWarningTreshold = 0.07;
		wheelSteeringSensitivity = 1.3;
		airBrake = 1;
		airBrakeFrictionCoef = 2;
		flaps = 1;
		flapsFrictionCoef = 0.2;
		gearsUpFrictionCoef = 0.35;
		airFrictionCoefs0[] = {0.0,0.0,0.0};
		airFrictionCoefs1[] = {0.1,0.7,0.005};
		airFrictionCoefs2[] = {0.001,0.0075,6e-005};
		angleOfIndicence = 0;
		envelope[] = {0.0,0.07,0.26,0.59,1.04,1.63,1.98,2.7,3.2,4.05,4.68,5.49,6.19,7.04,7.53,7.9,8.2,8.4,8.5,8.2,7.0};
		altNoForce = 13000;
		altFullForce = 2000;
		thrustCoef[] = {1.36,1.25,1.14,1.04,0.95,0.86,0.78,0.7,0.61,0.3,0.0,0.0,0.0};
		aileronSensitivity = 0.6;
		aileronCoef[] = {0.0,0.12,0.46,0.65,0.75,0.82,0.88,0.92,0.95,0.97,0.99,1.0,1.01};
		elevatorSensitivity = 0.7;
		elevatorCoef[] = {0.0,0.2,0.7,0.47,0.38,0.32,0.28,0.25,0.22,0.19,0.17,0.15,0.13};
		rudderInfluence = 0.9397;
		rudderCoef[] = {0.0,0.6,1.2,1.5,1.7,1.8,1.9,1.9,2.0,2.0,2.0,1.8,1.4};
		aileronControlsSensitivityCoef = 3.0;
		elevatorControlsSensitivityCoef = 3.0;
		rudderControlsSensitivityCoef = 3.0;
		draconicForceXCoef = 8.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {2.0,2.5,3.1,3.7,4.4,5.1,5.9,6.5,7.0,7.5,7.9,8.3,8.5};
		draconicTorqueYCoef[] = {12.0,8.0,3.0,0.5,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
		maxOmega = 3000;
		engineMoi = 0.1;
		dampingRateFullThrottle = 0.03;
		dampingRateZeroThrottleClutchEngaged = 0.03;
		dampingRateZeroThrottleClutchDisengaged = 0.03;
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				boneName = "Wheel_1";
				steering = 1;
				side = "left";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				width = 0.16;
				mass = 10;
				MOI = 0.207057;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 0;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
				maxCompression = 0.1;
				maxDroop = 0.1;
				sprungMass = 1200;
				springStrength = 50000;
				springDamperRate = 16000;
				longitudinalStiffnessPerUnitGravity = 400;
				latStiffX = 2;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{0,0.4},{0.2,0.7},{0.5,0.5}};
			};
			class Wheel_2: Wheel_1
			{
				boneName = "Wheel_2";
				steering = 0;
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				width = 0.28;
				sprungMass = 900;
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
				maxCompression = 0.05;
				maxDroop = 0.05;
				maxBrakeTorque = 500;
			};
			class Wheel_3: Wheel_2
			{
				boneName = "Wheel_3";
				side = "right";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};
		killFriendlyExpCoef = 0.1;
		driverCompartments = "Compartment3";
		cargoCompartments[] = {"Compartment2"};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02.rvmat","A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_damage.rvmat","A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_destruct.rvmat"};
		};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_CO.paa"};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
		radarTargetSize = 0.5;
		visualTargetSize = 0.7;
		irTargetSize = 0.5;
		lockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		laserscanner = 1;
		showAllTargets = 4;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 51;
						angleRangeVertical = 37;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 51;
						angleRangeVertical = 37;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,1000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,1000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				isCopilot = 0;
				minElev = -85;
				maxElev = 10;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				maxHorizontalRotSpeed = 10.0;
				maxVerticalRotSpeed = 10.0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = -1;
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				memoryPointGun = "laserstart";
				memoryPointGunnerOptics = "commanderview";
				gunBeg = "commanderview";
				gunEnd = "laserstart";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics = 1;
				turretInfoType = "RscOptics_UAV_gunner";
				stabilizedInAxes = 3;
				enableManualFire = 0;
				showAllTargets = 4;
				weapons[] = {"missiles_SCALPEL","Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries","6Rnd_LG_scalpel"};
				soundServo[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.05623413,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.05623413,1,10};
				GunnerCompartments = "Compartment1";
				startEngine = 0;
				aggregateReflectors[] = {"Light_1"};
				class Reflectors
				{
					class Light_1
					{
						color[] = {10000,10000,9000};
						ambient[] = {5000,5000,4900};
						intensity = 50000;
						size = 1;
						innerAngle = 0.1;
						outerAngle = 5;
						coneFadeCoef = 1;
						position = "pos_pip1";
						direction = "pos_pip1_dir";
						hitpoint = "HitHull";
						selection = "Light_1";
						useFlare = 1;
						flareSize = 5;
						flareMaxDistance = 5000;
						dayLight = 1;
						class Attenuation
						{
							start = 1;
							constant = 0;
							linear = 0;
							quadratic = 0.25;
							hardLimitStart = 3500;
							hardLimitEnd = 5000;
						};
					};
				};
				LODTurnedIn = -1;
				LODTurnedOut = -1;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 0;
						minAngleX = -35;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -130;
						maxAngleY = 130;
						initFov = 0.5;
						minFov = 0.5;
						maxFov = 0.5;
						directionStabilized = 1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "MFOV";
						initFov = 0.25;
						minFov = 0.25;
						maxFov = 0.25;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_wide_F.p3d";
					};					
					class Close: Wide
					{
						opticsDisplayName = "CFOV";
						initFov = 0.05;
						minFov = 0.05;
						maxFov = 0.05;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_medium_F.p3d";						
					};					
					class Tight: Wide
					{
						opticsDisplayName = "TFOV";
						initFov = 0.025;
						minFov = 0.025;
						maxFov = 0.025;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_narrow_F.p3d";
					};
					class Extreme: Wide
					{
						opticsDisplayName = "XFOV";
						initFov = 0.005;
						minFov = 0.005;
						maxFov = 0.005;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,2000,1000,8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,2000,1000,8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class TextureSources
		{
			class Indep
			{
				displayName = "$STR_A3_TEXTURESOURCES_INDEP0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_INDP_CO.paa"};
				factions[] = {"IND_F"};
			};
			class Opfor
			{
				displayName = "$STR_A3_TEXTURESOURCES_OPFOR0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_OPFOR_CO.paa"};
				factions[] = {"OPF_F"};
			};
			class Blufor
			{
				displayName = "$STR_A3_TEXTURESOURCES_BLU0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_CO.paa"};
				factions[] = {"BLU_F"};
			};
		};
	};
	class UAV_02_CAS_base_F: UAV_02_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "UAV_02_CAS_base_F";
		displayName = "$STR_A3_CfgVehicles_UAV_02_CAS_base_F0";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
		class AnimationSources: AnimationSources
		{
			class Bombs
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class AT_missiles
			{
				source = "user";
				animPeriod = 0.99;
				initPhase = 0;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Laserdesignator_mounted","GBU12BombLauncher"};
				magazines[] = {"Laserbatteries","2Rnd_GBU12_LGB"};
			};
		};
	};
	class B_UAV_02_F: UAV_02_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",0},{"missileb",0},{"missilea1",1},{"missilea2",1},{"missilea3",1},{"missileb1",1},{"missileb2",1},{"missileb3",1},{"positionlights",0},{"hideweapons",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "''";
		};
		_generalMacro = "B_UAV_02_F";
		scope = 1;
		scopeCurator = 0;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		accuracy = 1;
		textureList[] = {"Blufor",1};
	};
	class O_UAV_02_F: UAV_02_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",0},{"missileb",0},{"missilea1",1},{"missilea2",1},{"missilea3",1},{"missileb1",1},{"missileb2",1},{"missileb3",1},{"positionlights",0},{"hideweapons",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "''";
		};
		_generalMacro = "O_UAV_02_F";
		scope = 1;
		scopeCurator = 0;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 1;
		displayName = "$STR_A3_CfgVehicles_O_UAV_02";
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_OPFOR_CO.paa"};
		textureList[] = {"Opfor",1};
	};
	class I_UAV_02_F: UAV_02_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",0},{"missileb",0},{"missilea1",1},{"missilea2",1},{"missilea3",1},{"missileb1",1},{"missileb2",1},{"missileb3",1},{"positionlights",0},{"hideweapons",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "''";
		};
		_generalMacro = "I_UAV_02_F";
		scope = 1;
		scopeCurator = 0;
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		side = 2;
		faction = "IND_F";
		accuracy = 1;
		displayName = "$STR_A3_CfgVehicles_O_UAV_02";
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_INDP_CO.paa"};
		textureList[] = {"Indep",1};
	};
	class B_UAV_02_CAS_F: UAV_02_CAS_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",1},{"missileb",1},{"missilea1",0},{"missilea2",0},{"missilea3",0},{"missileb1",0},{"missileb2",0},{"missileb3",0},{"positionlights",0},{"hideweapons",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "''";
		};
		_generalMacro = "B_UAV_02_CAS_F";
		scope = 1;
		scopeCurator = 0;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		accuracy = 1;
		textureList[] = {"Blufor",1};
	};
	class O_UAV_02_CAS_F: UAV_02_CAS_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",1},{"missileb",1},{"missilea1",0},{"missilea2",0},{"missilea3",0},{"missileb1",0},{"missileb2",0},{"missileb3",0},{"positionlights",0},{"hideweapons",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "''";
		};
		_generalMacro = "O_UAV_02_CAS_F";
		scope = 1;
		scopeCurator = 0;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 1;
		displayName = "$STR_A3_CfgVehicles_O_UAV_02_CAS_F0";
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_OPFOR_CO.paa"};
		textureList[] = {"Opfor",1};
	};
	class I_UAV_02_CAS_F: UAV_02_CAS_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",1},{"missileb",1},{"missilea1",0},{"missilea2",0},{"missilea3",0},{"missileb1",0},{"missileb2",0},{"missileb3",0},{"positionlights",0},{"hideweapons",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "''";
		};
		_generalMacro = "I_UAV_02_CAS_F";
		scope = 1;
		scopeCurator = 0;
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		side = 2;
		faction = "IND_F";
		accuracy = 1;
		displayName = "$STR_A3_CfgVehicles_O_UAV_02_CAS_F0";
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_INDP_CO.paa"};
		textureList[] = {"Indep",1};
	};
	class UAV_02_dynamicLoadout_base_F: UAV_02_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "UAV_02_dynamicLoadout_base_F";
		class AnimationSources: AnimationSources
		{
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"B_BOMB_PYLON","B_MISSILE_PYLON","B_GBU12","B_AGM65_DUAL","B_HARM_INT","DAR","DAGR","B_SHIEKER","UNI_SCALPEL","B_SDB_QUAD_RAIL"};
						attachment = "PylonRack_3Rnd_LG_scalpel";
						priority = 5;
						turret[] = {0};
						maxweight = 345;
						UIposition[] = {0.33,0.4};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.33,0.15};
						mirroredMissilePos = 1;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class default
					{
						displayName = "Default";
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F"};
					};
				};
			};
		};
	};
	class B_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",0},{"missileb",0},{"missilea1",1},{"missilea2",1},{"missilea3",1},{"missileb1",1},{"missileb2",1},{"missileb3",1},{"positionlights",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro = "B_UAV_02_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		displayName = "$STR_A3_CfgVehicles_UAV_02_base0";
		accuracy = 1;
		textureList[] = {"Blufor",1};
		availableForSupportTypes[] = {"CAS_Bombing"};
	};
	class O_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",0},{"missileb",0},{"missilea1",1},{"missilea2",1},{"missilea3",1},{"missileb1",1},{"missileb2",1},{"missileb3",1},{"positionlights",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.593;
			verticalOffsetWorld = 0.025;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro = "O_UAV_02_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 1;
		displayName = "$STR_A3_CfgVehicles_O_UAV_02";
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_OPFOR_CO.paa"};
		textureList[] = {"Opfor",1};
		availableForSupportTypes[] = {"CAS_Bombing"};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				UIPicture = "\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";
				class pylons: pylons
				{
					class pylons1: pylons1
					{
						hardpoints[] = {"O_BOMB_PYLON","O_MISSILE_PYLON","UNI_SCALPEL"};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.33,0.15};
						mirroredMissilePos = 1;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class default
					{
						displayName = "Default";
						attachment[] = {"PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonMissile_1Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F"};
					};
				};
			};
		};
	};
	class I_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"propeller",0},{"propellerstatic",0},{"propellerblurred",0},{"mainturret",0},{"maingun",0},{"flap_1_1",0},{"flap_2_1",0},{"aileron_1_1",0},{"aileron_2_1",0},{"rudder_1_1",0},{"rudder_2_1",0},{"frontgear_1",0},{"frontgear_1_support",0},{"frontgear_1_door_l",0},{"frontgear_1_door_r",0},{"backgear_1_door_l",0},{"backgear_1_door_r",0},{"frontgearsteering",0},{"frontgeardamper",0},{"maingear_2_1",0},{"maingear_2_1_support",0},{"maingear_2_2_support",0},{"maingear_2_2",0},{"maingear_2_1_suspension",0},{"maingear_2_2_suspension",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_2_2",0},{"damagehide",0},{"missilea",0},{"missileb",0},{"missilea1",1},{"missilea2",1},{"missilea3",1},{"missileb1",1},{"missileb2",1},{"missileb3",1},{"positionlights",0}};
			hide[] = {"zasleh","l svetlo","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.594;
			verticalOffsetWorld = 0.025;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_02_dynamicLoadout_F.jpg";
		_generalMacro = "I_UAV_02_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		side = 2;
		faction = "IND_F";
		accuracy = 1;
		displayName = "$STR_A3_CfgVehicles_O_UAV_02";
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_02\Data\UAV_02_INDP_CO.paa"};
		textureList[] = {"Indep",1};
		availableForSupportTypes[] = {"CAS_Bombing"};
	};
};
