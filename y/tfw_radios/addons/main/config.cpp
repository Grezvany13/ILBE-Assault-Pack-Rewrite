#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            // "task_force_core"                // only works for TFAR 1.0 (beta)
            // "task_force_radio"               // required for TFAR version
            "acre_main"                      // Required for ACRE2 version
        };
        author = "$STR_twf_radios_main_Author";
        url = "$STR_twf_radios_URL";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@TFW_Radios_Rewrite";
        name = "ILBE Assault Pack (ACRE2) - Rewrite";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "$STR_twfrw_radios_URL";
        description = "This work is licensed under ARMA PUBLIC LICENSE SHARE ALIKE (APL-SA)";
    };
};
