/*
 *  Author: Dorbedo
 *
 *  Description:
 *      ammo comaptibility
 *
 */
#include "script_component.hpp"

class CfgAmmo {
    // Penetrator Base
    /*extern*/ class rhsusf_ammo_basic_penetrator;

    // 12.7 x 99 mm NATO
    /*extern*/ class BWA3_B_127x99_Ball;
    class BWA3_B_127x99_Ball_Raufoss: BWA3_B_127x99_Ball {
        ais_ce_penetrators[] = { "BWA3_B_127x99_Ball_Raufoss_Penetrator"};
        cratereffects = "ExploAmmoCrater";
        explosioneffects = "ExploAmmoExplosion";
        explosionsoundeffect = "DefaultExplosion";
        explosive = 0.100000;
        hit = 10;
        indirecthit = 12;
        indirecthitrange = 0.3;
    };

    class BWA3_B_127x99_Ball_Raufoss_Penetrator : rhsusf_ammo_basic_penetrator {
        hit = 45;
    };


    /*
     *    Infantry AT-Weapons
     */

    /*extern*/ class R_TBG32V_F;
    class BWA3_R_RGW90_HH : R_TBG32V_F {
        ais_ce_penetrators[] = { "BWA3_R_RGW90_HH_Penetrator" };
        allowAgainstInfantry = 1;
        cost = 350;
        explosive = 0.800000;
        hit = 300;
        indirectHit = 20;
        indirectHitRange = 8;
    };
    class BWA3_R_RGW90_HH_Penetrator : rhsusf_ammo_basic_penetrator {
        hit = 200;
        RHA(500,1000);
    };

    /*extern*/ class R_PG32V_F;
    class BWA3_R_Pzf3_IT: R_PG32V_F {
        ais_ce_penetrators[] = { "BWA3_R_Pzf3_IT_tandem", "BWA3_R_Pzf3_IT_Penetrator"};
        cost = 800;
        indirectHit=11;
        indirectHitRange=1.1;
        explosive = 0.65;
        hit = 250;
    };
    class BWA3_R_Pzf3_IT_tandem : rhsusf_ammo_basic_penetrator {
        hit = 40;
    };
    class BWA3_R_Pzf3_IT_Penetrator : BWA3_R_Pzf3_IT_tandem {
        hit = 380;
        RHA(900/1000);
    };

    /*
     *    Tiger
     */
     class M_Scalpel_AT;
     class BWA3_M_PARS: M_Scalpel_AT {
         hit=400;
         indirectHit=20;
         indirectHitRange=2;
         // using the same penetrator as the hellfire. It's killing everything anyways
         ais_ce_penetrators[] = { "rhs_ammo_Hellfire_AT_penetrator" };
     };

     class RHS_Ammo_DAGR;
     class BWA3_R_FZ: RHS_Ammo_DAGR {
         muzzleEffect = "";
     };

    /*
     *    Puma
     */

    /*extern*/ class M_Titan_AT;
    class BWA3_M_Spike_LR: M_Titan_AT {
        hit = 480;
        indirectHit = 12;
        indirectHitRange = 1.2;
        ais_ce_penetrators[] = { "BWA3_M_Spike_LR_tandem", "BWA3_M_Spike_LR_Penetrator"};
    };
    class BWA3_M_Spike_LR_tandem : rhsusf_ammo_basic_penetrator {
        hit = 50;
    };
    class BWA3_M_Spike_LR_Penetrator : BWA3_M_Spike_LR_tandem {
        hit = 390;
        RHA(700,900);
    };

    /*extern*/ class B_30mm_MP_Tracer_Red;
    class BWA3_B_30mm_HE: B_30mm_MP_Tracer_Red {
        hit = 50;
        indirectHit = 6;
        indirectHitRange = 1;
        explosive = 0.6;
    };
    /*extern*/ class B_30mm_APFSDS_Tracer_Red;
    class BWA3_B_30mm_APFSDS: B_30mm_APFSDS_Tracer_Red {
        hit = 90;
		RHA(95,1420);
		typicalspeed = 1385;
		maxSpeed = 1385;
    };

    /*
     *    Leopard A2M6
     */

    /*extern*/ class 28Rnd_120mm_APFSDS_shells;
    class BWA3_Sh_120mm_KE: Sh_120mm_APFSDS_Tracer_Red {
        // DM63
        hit = 245.87;
        typicalSpeed = 1750;
        RHA(800,1750);
    };

    /*extern*/ class Sh_120mm_HE_Tracer_Red;
    class BWA3_Sh_120mm_MZ : Sh_120mm_HE_Tracer_Red {
        // DM12A1 vgl. rhs_ammo_M830A1
        hit = 250;
        explosive = 0.8;
		indirectHit = 24;
		indirectHitRange = 3.15;
        typicalSpeed = 1180;
		ais_ce_penetrators[] = { "BWA3_Sh_120mm_MZ_Penetrator" };
    };
    class BWA3_Sh_120mm_MZ_Penetrator : rhsusf_ammo_basic_penetrator {
        RHA(600,1180);
    };

    /*extern*/ class rhs_ammo_M1069;
    class BWA3_Sh_120mm_DM11 : rhs_ammo_M1069 {
        // DM11
        typicalSpeed = 980;
        RHA(430,980);
    };

    class BWA3_M_LAHAT: M_Titan_AT {
        ais_ce_penetrators[] = { "rhs_ammo_TOW_AT_penetrator" };
		hit = 480;
		indirectHit = 12;
		indirectHitRange = 1.2;
		cost = 800;
    };

};
