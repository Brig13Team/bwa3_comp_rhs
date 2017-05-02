/*
 *  Author: Dorbedo
 *
 *  Description:
 *      Changes the hitpointvalues to make it less incompatible with rhs
 *      Full compatibility can't be achieved
 *
 */
#include "script_component.hpp"

class CfgVehicles {
    class All {
        class Turrets;
    };

    class AllVehicles: All {
        class ViewCargo;
        class NewTurret {
            class Turrets;
        };
    };

    class Land: AllVehicles {};

    class LandVehicle: Land {
        class CommanderOptics: NewTurret {
            class ViewOptics;
        };
    };

    class Tank: LandVehicle {
        class HitPoints;
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class Tank_F: Tank {
        class ViewOptics;
        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
    };

    class BWA3_Puma_base: Tank_F {
        armor = 260;
        armorStructural = 3;
        class HitPoints : HitPoints {
            class HitHull : HitHull {
                armor = 0.600000;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.080000;
                explosionShielding = 0;
                radius = 0.100000;
            };
            class HitEngine : HitEngine {
                armor = 0.450000;
                material = -1;
                name = "motor";
                passThrough = 0;
                minimalHit = 0.139000;
                explosionShielding = 0.009000;
                radius = 0.170000;
            };
            class HitLTrack : HitLTrack {
                armor = 0.500000;
                material = -1;
                name = "pas_L";
                passThrough = 0;
                minimalHit = 0.150000;
                explosionShielding = 0.350000;
                radius = 0.300000;
            };
            class HitRTrack : HitRTrack {
                armor = 0.500000;
                material = -1;
                name = "pas_P";
                passThrough = 0;
                minimalHit = 0.150000;
                explosionShielding = 0.350000;
                radius = 0.300000;
            };
        };
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        class HitPoints {
                            class HitGun {
                                armor = 0.200000;
                                explosionShielding = 0.400000;
                                material = -1;
                                minimalHit = 0.030000;
                                passThrough = 0;
                                radius = 0.200000;
                            };
                            class HitTurret {
                                armor = 0.200000;
                                explosionShielding = 0.400000;
                                material = -1;
                                minimalHit = 0.030000;
                                passThrough = 0;
                                radius = 0.200000;
                            };

                        };
                    };
                };
                class HitPoints {
                    class HitTurret {
                        armor = 0.500000;
                        material = -1;
                        passThrough = 0;
                        minimalHit = 0.140000;
                        explosionShielding = 0.001000;
                        radius = 0.080000;
                    };
                    class HitGun {
                        armor = 1.200000;
                        material = -1;
                        passThrough = 0;
                        minimalHit = 0.130000;
                        explosionShielding = 0.001000;
                        radius = 0.100000;
                    };
                };
            };
        };
    };

    class BWA3_Puma_Fleck: BWA3_Puma_base {};
    class BWA3_Puma_Tropen: BWA3_Puma_base {};

	/*
	rhs_ammo_3bk18 =  500 + 215

	hull =


	*/

    class BWA3_Leopard_base: Tank_F {
        armor = 650;
        armorStructural = 1.2;
        armorLights = 0.010000;
        class HitPoints : HitPoints {
            class HitHull : HitHull {
                armor = 0.8;
                explosionShielding = 0.1;
                material = -1;
                minimalHit = 0.09;
                passThrough = 1;
                radius = 0.2;
            };
            class HitEngine : HitEngine {
                armor = 0.6;
                explosionShielding = 0.1;
                material = -1;
                minimalHit = 0.2;
                passThrough = 0;
                radius = 0.25;
            };
            class HitLTrack {
                armor = 0.7;
                explosionShielding = 0.4;
                material = -1;
                minimalHit = 0.15;
                passThrough = 0;
                radius = 0.2;
            };
            class HitRTrack {
                armor = 0.7;
                explosionShielding = 0.4;
                material = -1;
                minimalHit = 0.15;
                passThrough = 0;
                radius = 0.2;
            };
        };
        class Turrets: Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics  {
                        class HitPoints {
                            class HitTurret {
                                armor = 0.75;
                                explosionShielding = 0.1;
                                material = -1;
                                minimalHit = 0.14;
                                passThrough = 0;
                                radius = 0.1;
                            };
                            class HitGun {
                                armor = 0.75000;
                                explosionShielding = 0.1;
                                material = -1;
                                minimalHit = 0.14;
                                passThrough = 0;
                                radius = 0.1;
                            };
                        };
                    };
                    class LoaderTurret: NewTurret {
                        class HitGun {
                            armor = 0.75000;
                            explosionShielding = 0.2;
                            material = -1;
                            minimalHit = 0.140000;
                            passThrough = 0;
                            radius = 0.1
                        };
                        class HitTurret {
                            armor = 0.75000;
                            explosionShielding = 0.2;
                            material = -1;
                            minimalHit = 0.140000;
                            passThrough = 0;
                            radius = 0.1;
                        };
                    };
                };
                class HitPoints {
                    class HitGun {
                        armor = 0.85;
                        explosionShielding = 0.1;
                        material = -1;
                        minimalHit = 0.14;
                        passThrough = 0;
                        radius = 0.08;
                    };
                    class HitTurret {
                        armor = 0.85;
                        explosionShielding = 0.1;
                        material = -1;
                        minimalHit = 0.14;
                        passThrough = 0;
                        radius = 0.3;
                    };
                };
            };
        };
    };

    class BWA3_Leopard2A6M_Fleck: BWA3_Leopard_base {};
    class BWA3_Leopard2A6M_Tropen: BWA3_Leopard_base {};
};
