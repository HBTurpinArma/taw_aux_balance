
	class LandVehicle;
	class Tank: LandVehicle {
		class HitPoints;
	};
	class Tank_F: Tank {
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitLTrack;
			class HitRTrack;
		};
	};
	class Car;
	class Car_F: Car {
		class HitPoints;
	};
	class Truck_F: Car_F {
		class HitPoints {
			class HitFuel;
			class HitEngine;
		};
	};

	class Wheeled_Apc_F: Car_F {
		class HitPoints: HitPoints {
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitArmor;
		};
	};

	//AA
	class PGZ09_AA_base: Tank_F {
		armor = 160;
		armorStructural = 1;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor = 0.55;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.65;
				passThrough = 0.4;
			};
			class HitEngine: HitEngine {
				armor = 0.5;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.65;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.5;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.25;
				passThrough = 0.1;
			};
			class HitLTrack: HitLTrack {
				armor = -400;
				explosionShielding = 0.6;
				minimalHit = 0.09;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -400;
				explosionShielding = 0.6;
				minimalHit = 0.09;
				radius = 0.2;
				passThrough = 0;
			};
			class HitArmor {
				armor = 1;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				passThrough = 0.5;
				radius = 0.2;
			};
		};
	};
	
	class HQ6A_base: Truck_F {
		armor = 200;
		armorStructural = 1;
	};



	//Arty
	// O_PLZ05
	// O_PLL09
	// O_ZTL11
	class PLZ05_base: Tank_F {
		armor = 200;
		armorStructural = 2;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 0.4;
				explosionShielding = 0.0;
				minimalHit = 0.08;
				radius = 0.25;
				passThrough = 0;
			};
			class HitEngine: HitEngine {
				armor = 0.45;
				explosionShielding = 0.01;
				minimalHit = 0.1;
				radius = 0.25;
				passThrough = 0.0;
			};
			class HitFuel: HitFuel {
				armor = 0.3;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.1;
			};
			class HitLTrack: HitLTrack {
				armor = -200;
				explosionShielding = 0.4;
				minimalHit = 0.09;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -200;
				explosionShielding = 0.4;
				minimalHit = 0.09;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	class PLL09_base: Wheeled_Apc_F {
		armor = 200;
		armorStructural = 2;
		explosionShielding = 1

		class HitPoints: HitPoints {
			class HitArmor {
				armor = 0.8;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitBody: HitBody {
				armor = 0.4;
				explosionShielding = 0.0;
				minimalHit = 0.08;
				radius = 0.25;
				passThrough = 0;
			};
			class HitEngine: HitEngine {
				armor = 0.45;
				explosionShielding = 0.01;
				minimalHit = 0.1;
				radius = 0.25;
				passThrough = 0.0;
			};
			class HitFuel: HitFuel {
				armor = 0.3;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.1;
			};
		};
	};
	
	// MBT
	// O_ZTD05
	// O_ZTQ15
	// O_ZTQ15B
	// O_ZTZ96A
	// O_ZTZ96B
	// O_ZTZ99
	// O_ZTZ99A
	class ZTD05_base: Tank_F {
		armor = 600;
		armorStructural = 3;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.0;
				explosionShielding = 0.7;
				minimalHit = 0.3;
				radius = 0.2;
				passThrough = 0.6;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.5;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	class ZTQ15_base: Tank_F {
		armor = 600;
		armorStructural = 3;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.7;
				minimalHit = 0.3;
				radius = 0.2;
				passThrough = 0.5;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.5;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	class ZTZ96A_base: Tank_F {
		armor = 500;
		armorStructural = 2;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.2;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.5;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	class ZTZ96B_base: Tank_F {
		armor = 500;
		armorStructural = 2;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.2;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.5;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	class ZTZ99_base: Tank_F {
		armor = 600;
		armorStructural = 3;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.5;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	class ZTZ99A_base: Tank_F {
		armor = 600;
		armorStructural = 3;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.6;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.5;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	// Light Tanks
	// O_ZBD04A
	// O_ZBD05
	// O_ZBL09
	class ZBL09_base: Wheeled_Apc_F {
		armor = 200;
		armorStructural = 2;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 0.7;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitBody: HitBody {
				armor = 0.4;
				explosionShielding = 0.0;
				minimalHit = 0.08;
				radius = 0.25;
				passThrough = 0;
			};
			class HitEngine: HitEngine {
				armor = 0.45;
				explosionShielding = 0.01;
				minimalHit = 0.1;
				radius = 0.25;
				passThrough = 0.0;
			};
			class HitFuel: HitFuel {
				armor = 0.3;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.1;
			};
		};
	};

	class ZTL11_base: Wheeled_Apc_F {
		armor = 200;
		armorStructural = 2;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 0.7;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitBody: HitBody {
				armor = 0.4;
				explosionShielding = 0.0;
				minimalHit = 0.08;
				radius = 0.25;
				passThrough = 0;
			};
			class HitEngine: HitEngine {
				armor = 0.45;
				explosionShielding = 0.01;
				minimalHit = 0.1;
				radius = 0.25;
				passThrough = 0.0;
			};
			class HitFuel: HitFuel {
				armor = 0.3;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.1;
			};
		};
	};

	class ZBD05_base: Tank_F {
		armor = 400;
		armorStructural = 5;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.1;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.4;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.3;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};

	class ZBD04A_base: Tank_F {
		armor = 400;
		armorStructural = 5;
		explosionShielding = 1;
		replaceDamagedLimit = 0.9;
		damageResistance = 0.00547;
		epeImpulseDamageCoef = 18;
		class HitPoints: HitPoints {
			class HitArmor {
				armor = 1.1;
				explosionShielding = 0.6;
				minimalHit = 0.3;
				radius = 0.4;
				passThrough = 0.7;
				isTurret = 0;
				material = -1;
				armorComponent = "hit_Armor";
				name = "hit_Armor_point";
				visual = "Armor";
			};
			class HitHull: HitHull {
				armor = 1.1;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 1;
			};
			class HitEngine: HitEngine {
				armor = 0.4;
				explosionShielding = 0.2;
				minimalHit = 0.2;
				radius = 0.3;
				passThrough = 0.2;
			};
			class HitFuel: HitFuel {
				armor = 0.3;
				explosionShielding = 0.6;
				minimalHit = 0.1;
				radius = 0.3;
				passThrough = 0.3;
			};
			class HitLTrack: HitLTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack {
				armor = -600;
				explosionShielding = 0.8;
				minimalHit = 0.08;
				radius = 0.2;
				passThrough = 0;
			};
		};
	};
