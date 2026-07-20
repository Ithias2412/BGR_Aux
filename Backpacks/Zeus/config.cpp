class CfgPatches 
{
	class BGR_Backpacks_Zeus
	{
		units[] = 
        {
            "BGR_Zeus_Backpack",
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
	class TCP_B_ANPRC171_Brown;

//Base Items


	class BGR_Zeus_Backpack: TCP_B_ANPRC171_Brown
	{
		displayName="[BGR] Zeus Radio Pack";
		model = "\A3\Weapons_F\DummyBag\dummy.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class TCP_equipmentTypes
		{
			
		};
	};
};