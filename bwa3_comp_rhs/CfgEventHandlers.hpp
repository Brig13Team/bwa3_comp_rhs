/*
 *  Author: Dorbedo
 *
 *  Description:
 *      RHS hitpart handler added to the armored vehicles
 *
 */
#include "script_component.hpp"

class Extended_HitPart_EventHandlers {
    class BWA3_Puma_base {
        class ADDON {
            hitPart = "_this call rhs_fnc_hitHandler;";
        };
    };
    class BWA3_Leopard_base {
        class ADDON {
            hitPart = "_this call rhs_fnc_hitHandler;";
        };
    };
};
