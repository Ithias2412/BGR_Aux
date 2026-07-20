class CfgPatches 
{
	class BGR_Backpacks_Pilots
	{
		units[] = 
        {
            "BGR_Pilot_Backpack",
			""
        };
		weapons[] = 
        {
            "",
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class CfgVehicles
{
	class B_Parachute;

//Base Items


	class BGR_Pilot_Backpack: B_Parachute
	{
		displayName="[BGR] Pilot Parachute";
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
		
	};
};