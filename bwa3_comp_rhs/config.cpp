/*
 *  Author: Dorbedo
 *
 *  Description:
 *      main config
 *
 */
#include "script_component.hpp"

class CfgPatches {
    class bwa3_compat_rhs {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "BWA3_Common",
            "BWA3_Eagle",
            "BWA3_Weapons",
            "BWA3_Units",
            "BWA3_Puma",
            "BWA3_Leopard2A6M",
            "BWA3_Tiger",
            "cba_main",
            "cba_xeh",
            "rhsusf_c_heavyweapons",
            "rhsusf_c_weapons",
            "rhsusf_c_airweapons"
        };
    };
};

class CfgMods {
    class bwa3_compat_rhs {
        dir = "@bwa3_comp_rhs";
        name = "BWA3-RHS Compatibility Patch";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "https://github.com/Brig13Team/bwa3_comp_rhs";
        description = "Issue Tracker: https://github.com/Brig13Team/bwa3_comp_rhs";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
