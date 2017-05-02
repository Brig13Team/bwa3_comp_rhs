/*
 *  Author: Dorbedo
 *
 *  Description:
 *      replacing the ammo to be modified
 *
 */
#include "script_component.hpp"

class CfgMagazines {
    /*extern*/ class 30Rnd_120mm_HE_shells;
    class BWA3_1Rnd_HE_shells: 30Rnd_120mm_HE_shells {
        ammo = "BWA3_Sh_120mm_DM11";
    };
};
