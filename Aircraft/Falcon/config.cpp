class CfgPatches 
{
	class BGR_Aircraft_Falcon
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
	
};

class cfgVehicles
{
	class OPTRE_UNSC_falcon_armed;
	class BGR_Aircraft_Falcon: OPTRE_UNSC_falcon_armed
	{
		displayName = "[BGR] MH-144 Falcon (DAP)";
		faction = "OPTRE_UNSC";
		transportSoldier = 0;
		hiddenSelectionsTextures[] = 
		{
			"\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
			"\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
			"\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\decal\unsc_var2\falcon_decal_ca.paa"
		};
		magazines[] = 
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		weapons[] = {"CMFlareLauncher","Laserdesignator_pilotCamera"};
		textureList[] = 
		{
			"Standard",
			1
		};
		class textureSources
		{
			class Standard
			{
				author = "Article 2 Studios";
				displayName = "Standard";
				factions[] = 
				{
					"OPTRE_UNSC"
				};
				textures[] = 
				{
					"\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
					"\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
					"\OPTRE_Vehicles_Air\Falcon\data\Falcon_Interior_co.paa"
				};
			};
		};
	};
};