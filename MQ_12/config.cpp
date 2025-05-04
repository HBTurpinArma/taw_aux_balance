////////////////////////////////////////////////////////////////////
//DeRap: air_f_exp\UAV_03\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Jul 03 01:09:57 2020 : 'file' last modified on Tue Mar 12 23:21:05 2019
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
	class A3_Air_F_Exp_UAV_03
	{
		addonRootClass = "A3_Air_F_Exp";
		requiredAddons[] = {"A3_Air_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_T_UAV_03_dynamicLoadout_F","B_T_UAV_03_F","B_UAV_03_dynamicLoadout_F"};
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
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class Components;
	};
	class UAV_03_base_F: Helicopter_Base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 5.05;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_air_UAV_s"};
				speechPlural[] = {"veh_air_UAV_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_air_UAV_s";
		textPlural = "$STR_A3_nameSound_veh_air_UAV_p";
		nameSound = "veh_air_UAV_s";
		_generalMacro = "UAV_03_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "$STR_A3_CfgVehicles_UAV_03_base_F0";
		model = "\A3\Air_F_Exp\UAV_03\UAV_03_F.p3d";
		DLC = "Expansion";
		icon = "\A3\Air_F_Exp\UAV_03\Data\UI\Map_UAV_03_CA.paa";
		picture = "\A3\Air_F_Exp\UAV_03\Data\UI\UAV_03_CA.paa";
		overviewPicture = "\A3\Data_F_Exp\Images\VehicleFalcon_ca.paa";
		editorSubcategory = "EdSubcat_Drones";
		vehicleClass = "Autonomous";
		destrType = "DestructDefault";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		unitInfoType = "RscOptics_AV_pilot";
		unitInfoTypeRTD = "RscOptics_AV_pilot";
		fuelExplosionPower = 1;
		fuelCapacity = 100;
		fuelConsumptionRate = 0.0322;
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_UAV_03_base_F_Library0";
		};
		isUav = 1;
		uavCameraDriverPos = "PIP0_pos";
		uavCameraDriverDir = "PIP0_dir";
		uavCameraGunnerPos = "PIP1_pos";
		uavCameraGunnerDir = "PIP1_dir";
		driverCompartments = "Compartment1";
		memoryPointDriverOptics = "PIP0_pos";
		driverOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics = 1;
		accuracy = 2.5;
		armor = 75;
		cost = 20000;
		altFullForce = 4000;
		altNoForce = 8000;
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				visual = "";
				radius = 0.1;
				explosionShielding = 2;
			};
			class HitHull: HitHull
			{
				armor = 999;
				visual = "zbytek";
				depends = "Total";
				radius = 0.01;
			};
			class HitEngine: HitEngine
			{
				visual = "";
				radius = 0.2;
				explosionShielding = 2;
			};
			class HitAvionics: HitAvionics
			{
				armor = 1;
				visual = "";
				radius = 0.5;
				explosionShielding = 2;
			};
			class HitHRotor: HitHRotor
			{
				visual = "Rotor_1_static";
				armor = 3;
				radius = 0.5;
				explosionShielding = 2.5;
			};
			class HitVRotor: HitVRotor
			{
				visual = "Rotor_2_static";
				armor = 2;
				radius = 0.3;
				explosionShielding = 6;
			};
		};
		selectionHRotorMove = "Rotor_1_blur";
		selectionHRotorStill = "Rotor_1_static";
		selectionVRotorMove = "Rotor_2_blur";
		selectionVRotorStill = "Rotor_2_static";
		maxSpeed = 250;
		threat[] = {0.1,0.1,0.1};
		maxMainRotorDive = 7;
		minMainRotorDive = -7;
		neutralMainRotorDive = 0;
		driveOnComponent[] = {"Wheel_1","Wheel_2","Wheel_3"};
		gearRetracting = 1;
		mainRotorSpeed = -1.0;
		backRotorSpeed = 1.0;
		startDuration = 5;
		liftForceCoef = 1.2;
		cyclicAsideForceCoef = 0.6;
		cyclicForwardForceCoef = 0.7;
		bodyFrictionCoef = 0.7;
		backRotorForceCoef = 1.2;
		radarTargetSize = 0.7;
		visualTargetSize = 0.8;
		irTargetSize = 0.8;
		lockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = "8 + 16";
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1.0};
		weapons[] = {"CMFlareLauncher","CMFlareLauncherIllum"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine","AR2_64Rnd_40mm_F_Green_belt"};
		laserScanner = 1;
		showAllTargets = 4;
		enableManualFire = 1;
		memoryPointCM[] = {"Flare_launcher_1_pos","Flare_launcher_2_pos"};
		memoryPointCMDir[] = {"Flare_launcher_1_dir","Flare_launcher_2_dir"};
		memoryPointLRocket = "Rocket_1_pos";
		memoryPointRRocket = "Rocket_2_pos";
		memoryPointLMissile = "Rocket_1_pos";
		memoryPointRMissile = "Rocket_2_pos";
		class AnimationSources: AnimationSources
		{
			class Rockets_source
			{
				source = "revolving";
				weapon = "missiles_DAR";
			};
			class CollisionLightWhite_source
			{
				source = "MarkerLight";
				markerLight = "CollisionLightWhite1";
			};
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
		};
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"\A3\Air_F_Exp\UAV_03\Data\UAV_03_1_CO.paa","\A3\Air_F_Exp\UAV_03\Data\UAV_03_2_CO.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Air_F_Exp\UAV_03\Data\UAV_03_1.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_1_damage.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_1_destruct.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_2.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_2_damage.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_2_destruct.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_2_mat.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_2_damage.rvmat","A3\Air_F_Exp\UAV_03\Data\UAV_03_2_destruct.rvmat"};
		};
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
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 360;
						angleRangeVertical = 90;
						animDirection = "mainGun";
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
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 25;
						angleRangeVertical = 25;
						animDirection = "mainGun";
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
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 6000;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						aimDown = 20;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableATL = 100;
						maxTrackableSpeed = 60;
						angleRangeHorizontal = 90;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
					};
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
						resource = "RscCustomInfoAirborneMiniMap";
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
						resource = "RscCustomInfoAirborneMiniMap";
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				minElev = -85;
				maxElev = 50;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				body = "MainTurret";
				gun = "MainGun";
				weapons[] = {"missiles_SCALPEL","missiles_DAR","Laserdesignator_mounted"};
				magazines[] = {"6Rnd_LG_scalpel","24Rnd_missiles","Laserbatteries"};
				showAllTargets = 4;
				commanding = -1;
				allowTabLock = 1;
				gunnerCompartments = "Compartment2";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				memoryPointGun = "PIP1_pos";
				memoryPointGunnerOptics = "PIP1_pos";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				primaryGunner = 1;
				soundServo[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.099999994,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.099999994,1,10};
				stabilizedInAxes = 3;
				startEngine = 0;
				turretInfoType = "RscOptics_UAV_gunner";
				LODTurnedIn = -1;
				LODTurnedOut = -1;
				class Reflectors
				{
					class Light_1
					{
						color[] = {7000,7500,10000};
						ambient[] = {70,75,500};
						intensity = 3500;
						size = 1;
						innerAngle = 4;
						outerAngle = 12;
						coneFadeCoef = 10;
						position = "PIP1_pos";
						direction = "PIP1_dir";
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
						initFov = 0.75;
						minFov = 0.75;
						maxFov = 0.75;
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
						initFov = 0.075;
						minFov = 0.075;
						maxFov = 0.075;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_wide_F.p3d";
					};					
					class Close: Wide
					{
						opticsDisplayName = "CFOV";
						initFov = 0.025;
						minFov = 0.025;
						maxFov = 0.025;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_medium_F.p3d";
					};
					class Extreme: Wide
					{
						opticsDisplayName = "XFOV";
						initFov = 0.01;
						minFov = 0.01;
						maxFov = 0.01;
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunship_narrow_F.p3d";
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
								resource = "RscCustomInfoAirborneMiniMap";
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
								resource = "RscCustomInfoAirborneMiniMap";
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
		class ViewPilot: ViewOptics
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -125;
			maxAngleY = 125;
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 1.2;
			minFov = 0.1;
			maxFov = 1.2;
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust_1_pos";
				direction = "Exhaust_1_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust_2
			{
				position = "Exhaust_2_pos";
				direction = "Exhaust_2_dir";
				effect = "ExhaustsEffect";
			};
		};
	};
	class UAV_03_dynamicLoadout_base_F: UAV_03_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "UAV_03_dynamicLoadout_base_F";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\UAV_03\Data\UI\Map_UAV_03_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] = {"DAR","DAGR","B_SHIEKER","UNI_SCALPEL","B_GBU12","B_SDB_QUAD_RAIL"};
						attachment = "PylonRack_12Rnd_missiles";
						priority = 5;
						turret[] = {0};
						maxweight = 300;
						UIposition[] = {0.05,0.3};
					};
					class Pylons2: Pylons1
					{
						hardpoints[] = {"DAR","DAGR","B_SHIEKER","UNI_SCALPEL","B_GBU12","B_SDB_QUAD_RAIL"};
						priority = 4;
						attachment = "PylonRack_3Rnd_LG_scalpel";
						maxweight = 300;
						UIposition[] = {0.1,0.38};
					};
					class Pylons3: Pylons2
					{
						UIposition[] = {0.53,0.38};
						mirroredMissilePos = 2;
					};
					class Pylons4: Pylons1
					{
						UIposition[] = {0.58,0.3};
						mirroredMissilePos = 1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonRack_12Rnd_missiles","PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_12Rnd_missiles"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_12Rnd_PG_missiles","PylonRack_3Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_12Rnd_PG_missiles"};
					};
				};
			};
		};
	};
	class B_T_UAV_03_F: UAV_03_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 11.82;
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"rotor_1",1},{"rotor_2",0},{"gear_1",0},{"gear_1_d4_f1",0},{"gear_1_d4_f2",0},{"gear_1_d3",0},{"gear_1_d1_f1",0},{"gear_1_d1_f2",0},{"gear_1_d2",0},{"gear_1_damper_1",-0.08},{"gear_1_damper_2",-0.08},{"gear_1_hatch",0},{"gear_2",0},{"gear_2_d4_f1",0},{"gear_2_d4_f2",0},{"gear_2_d3",0},{"gear_2_d1_f1",0},{"gear_2_d1_f2",0},{"gear_2_d2",0},{"gear_2_damper_1",-0.08},{"gear_2_damper_2",-0.08},{"gear_2_hatch",0},{"gear_3_damper",-0.08},{"gear_3_stabil_1",-0.08},{"gear_3_stabil_2",-0.08},{"mainturret",0},{"maingun",0},{"positionlights",0},{"collisionlight_red_blinking",0},{"rocketa1_hide",1},{"rocketa2_hide",1},{"rocketa3_hide",1},{"rocketa4_hide",1},{"rocketa5_hide",1},{"rocketa6_hide",1},{"rocketa7_hide",1},{"rocketa8_hide",1},{"rocketa9_hide",1},{"rocketa10_hide",1},{"rocketa11_hide",1},{"rocketa12_hide",1},{"rocketb1_hide",1},{"rocketb2_hide",1},{"rocketb3_hide",1},{"rocketb4_hide",1},{"rocketb5_hide",1},{"rocketb6_hide",1},{"rocketb7_hide",1},{"rocketb8_hide",1},{"rocketb9_hide",1},{"rocketb10_hide",1},{"rocketb11_hide",1},{"rocketb12_hide",1},{"damage_hide",0.09}};
			hide[] = {"zasleh","light_r","rotor_2_blur","rotor_1_blur","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.536;
			verticalOffsetWorld = -0.001;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		_generalMacro = "B_T_UAV_03_F";
		scope = 1;
		scopeCurator = 0;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
	};
	class B_T_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 11.82;
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"rotor_1",1},{"rotor_2",0},{"gear_1",0},{"gear_1_d4_f1",0},{"gear_1_d4_f2",0},{"gear_1_d3",0},{"gear_1_d1_f1",0},{"gear_1_d1_f2",0},{"gear_1_d2",0},{"gear_1_damper_1",-0.08},{"gear_1_damper_2",-0.08},{"gear_1_hatch",0},{"gear_2",0},{"gear_2_d4_f1",0},{"gear_2_d4_f2",0},{"gear_2_d3",0},{"gear_2_d1_f1",0},{"gear_2_d1_f2",0},{"gear_2_d2",0},{"gear_2_damper_1",-0.08},{"gear_2_damper_2",-0.08},{"gear_2_hatch",0},{"gear_3_damper",-0.08},{"gear_3_stabil_1",-0.08},{"gear_3_stabil_2",-0.08},{"mainturret",0},{"maingun",0},{"positionlights",0},{"collisionlight_red_blinking",0},{"rocketa1_hide",1},{"rocketa2_hide",1},{"rocketa3_hide",1},{"rocketa4_hide",1},{"rocketa5_hide",1},{"rocketa6_hide",1},{"rocketa7_hide",1},{"rocketa8_hide",1},{"rocketa9_hide",1},{"rocketa10_hide",1},{"rocketa11_hide",1},{"rocketa12_hide",1},{"rocketb1_hide",1},{"rocketb2_hide",1},{"rocketb3_hide",1},{"rocketb4_hide",1},{"rocketb5_hide",1},{"rocketb6_hide",1},{"rocketb7_hide",1},{"rocketb8_hide",1},{"rocketb9_hide",1},{"rocketb10_hide",1},{"rocketb11_hide",1},{"rocketb12_hide",1},{"damage_hide",0}};
			hide[] = {"zasleh","light_r","rotor_2_blur","rotor_1_blur","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.536;
			verticalOffsetWorld = -0.001;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_UAV_03_dynamicLoadout_F.jpg";
		_generalMacro = "B_T_UAV_03_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		availableForSupportTypes[] = {"CAS_Heli"};
	};
	class B_UAV_03_dynamicLoadout_F: UAV_03_dynamicLoadout_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 11.82;
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"rotor_1",1},{"rotor_2",0},{"gear_1",0},{"gear_1_d4_f1",0},{"gear_1_d4_f2",0},{"gear_1_d3",0},{"gear_1_d1_f1",0},{"gear_1_d1_f2",0},{"gear_1_d2",0},{"gear_1_damper_1",-0.08},{"gear_1_damper_2",-0.08},{"gear_1_hatch",0},{"gear_2",0},{"gear_2_d4_f1",0},{"gear_2_d4_f2",0},{"gear_2_d3",0},{"gear_2_d1_f1",0},{"gear_2_d1_f2",0},{"gear_2_d2",0},{"gear_2_damper_1",-0.08},{"gear_2_damper_2",-0.08},{"gear_2_hatch",0},{"gear_3_damper",-0.08},{"gear_3_stabil_1",-0.08},{"gear_3_stabil_2",-0.08},{"mainturret",0},{"maingun",0},{"positionlights",0},{"collisionlight_red_blinking",0},{"rocketa1_hide",1},{"rocketa2_hide",1},{"rocketa3_hide",1},{"rocketa4_hide",1},{"rocketa5_hide",1},{"rocketa6_hide",1},{"rocketa7_hide",1},{"rocketa8_hide",1},{"rocketa9_hide",1},{"rocketa10_hide",1},{"rocketa11_hide",1},{"rocketa12_hide",1},{"rocketb1_hide",1},{"rocketb2_hide",1},{"rocketb3_hide",1},{"rocketb4_hide",1},{"rocketb5_hide",1},{"rocketb6_hide",1},{"rocketb7_hide",1},{"rocketb8_hide",1},{"rocketb9_hide",1},{"rocketb10_hide",1},{"rocketb11_hide",1},{"rocketb12_hide",1},{"damage_hide",0}};
			hide[] = {"zasleh","light_r","rotor_2_blur","rotor_1_blur","zadni svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.536;
			verticalOffsetWorld = -0.001;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_UAV_03_dynamicLoadout_F.jpg";
		_generalMacro = "B_UAV_03_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		availableForSupportTypes[] = {"CAS_Heli"};
	};
};
