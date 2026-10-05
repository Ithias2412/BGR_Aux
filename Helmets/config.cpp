class CfgPatches 
{
	class BGR_Helmets_Ranger
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_Helmets_ECH35J_Desert",
            "BGR_Helmets_ECH35J_Snow",
            "BGR_Helmets_ECH35J_Urban",
            "BGR_Helmets_ECH35J_Woodland",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
//#include "xtdGear.hpp"
class cfgWeapons 
{
	class TCP_H_Helmet_ECH35J_Brown_Blue;
	class BGR_Helmets_ECH35J_Desert: TCP_H_Helmet_ECH35J_Brown_Blue
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Desert";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Desert)";
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Desert",
			"BGR_Helmets_ECH35J_Desert_DP"
		};
	};
	class BGR_Helmets_ECH35J_Desert_DP: BGR_Helmets_ECH35J_Desert
	{
		scope = 1;
	};
	class BGR_Helmets_ECH35J_Snow: BGR_Helmets_ECH35J_Desert
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Snow";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\White\helmet_ECH35J_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Blue\helmet_ECH35J_Visor_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Snow",
			"BGR_Helmets_ECH35J_Snow_DP"
		};
	};
	class BGR_Helmets_ECH35J_Snow_DP: BGR_Helmets_ECH35J_Snow
	{
		scope = 1;
	};
	class BGR_Helmets_ECH35J_Urban: BGR_Helmets_ECH35J_Desert
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Urban";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Black\helmet_ECH35J_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Blue\helmet_ECH35J_Visor_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Urban",
			"BGR_Helmets_ECH35J_Urban_DP"
		};
	};
	class BGR_Helmets_ECH35J_Urban_DP: BGR_Helmets_ECH35J_Urban
	{
		scope = 1;
	};
	class BGR_Helmets_ECH35J_Woodland: BGR_Helmets_ECH35J_Desert
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Woodland";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Olive\helmet_ECH35J_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Blue\helmet_ECH35J_Visor_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Woodland",
			"BGR_Helmets_ECH35J_Woodland_DP"
		};
	};
	class BGR_Helmets_ECH35J_Woodland_DP: BGR_Helmets_ECH35J_Woodland
	{
		scope = 1;
	};	
	// Medical
	class BGR_Helmets_ECH35J_Desert_Medic: TCP_H_Helmet_ECH35J_Brown_Blue
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Desert_Medic";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Desert / Medic)";
		hiddenSelectionsTextures[] = 
		{
			"A:\BGR_Aux\Helmets\Tex\BGR_Helmets_ECH35J_Desert_Medic.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Blue\helmet_ECH35J_Visor_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Desert_Medic",
			"BGR_Helmets_ECH35J_Desert_Medic_DP"
		};
	};
	class BGR_Helmets_ECH35J_Desert_Medic_DP: BGR_Helmets_ECH35J_Desert_Medic
	{
		scope = 1;
	};
	class BGR_Helmets_ECH35J_Snow_Medic: BGR_Helmets_ECH35J_Desert
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Snow_Medic";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Snow / Medic)";
		hiddenSelectionsTextures[] = 
		{
			"A:\BGR_Aux\Helmets\Tex\BGR_Helmets_ECH35J_Snow_Medic.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Blue\helmet_ECH35J_Visor_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Snow_Medic",
			"BGR_Helmets_ECH35J_Snow_Medic_DP"
		};
	};
	class BGR_Helmets_ECH35J_Snow_Medic_DP: BGR_Helmets_ECH35J_Snow_Medic
	{
		scope = 1;
	};
	class BGR_Helmets_ECH35J_Urban_Medic: BGR_Helmets_ECH35J_Desert
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Urban_Medic";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Urban / Medic)";
		hiddenSelectionsTextures[] = 
		{
			"A:\BGR_Aux\Helmets\Tex\BGR_Helmets_ECH35J_Urban_Medic.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Blue\helmet_ECH35J_Visor_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Urban_Medic",
			"BGR_Helmets_ECH35J_Urban_Medic_DP"
		};
	};
	class BGR_Helmets_ECH35J_Urban_Medic_DP: BGR_Helmets_ECH35J_Urban_Medic
	{
		scope = 1;
	};
	class BGR_Helmets_ECH35J_Woodland_Medic: BGR_Helmets_ECH35J_Desert
	{
		ace_arsenal_uniqueBase = "BGR_Helmets_ECH35J_Woodland_Medic";
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] ECH35/J Helmet (Woodland / Medic)";
		hiddenSelectionsTextures[] = 
		{
			"A:\BGR_Aux\Helmets\Tex\BGR_Helmets_ECH35J_Woodland_Medic.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Headgear\helmet_ECH35J\data\camo\Blue\helmet_ECH35J_Visor_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
		TCP_visrClasses[] = 
		{
			"BGR_Helmets_ECH35J_Woodland_Medic",
			"BGR_Helmets_ECH35J_Woodland_Medic_DP"
		};
	};
	class BGR_Helmets_ECH35J_Woodland_Medic_DP: BGR_Helmets_ECH35J_Woodland_Medic
	{
		scope = 1;
	};
};

class XtdGearModels
{
    class CfgWeapons 
    {
        class BGR_Helmets_Ranger_Extended
        {
            label = "Ranger Helmets";
            author = "Ithias";
			options[] = { "Camo", "Visor", "Medic",};
            class Camo
            {
                label = "Camo";
				values[] = { "Desert", "Snow", "Urban", "Woodland",};
                changeingame = 1;
                alwaysSelectable = 1;
                class Desert
                {
                    label = "Desert";
					//description = "XX";
                    image = "\TCP\Compat_ACEAX\GearInfo\data\camo\brown\metal.paa";
                };
				class Snow
                {
                    label = "Snow";
					//description = "XX";
                    image = "\TCP\Compat_ACEAX\GearInfo\data\camo\white\metal.paa";
                };
                class Urban
                {
                    label = "Urban";
					//description = "XX";
                    image = "\TCP\Compat_ACEAX\GearInfo\data\camo\black\metal.paa";
                };
                class Woodland
                {
                    label = "Woodland";
					//description = "XX";
                    image = "\TCP\Compat_ACEAX\GearInfo\data\camo\olive\metal.paa";
                };
            };
            class Visor
            {
                label = "Visor";
				values[] = 
				{
					"Blue", 
				};
                changeingame = 0;
                alwaysSelectable = 1;
				class Blue
                {
                    label = "Blue";
					//description = "XX";
                    image = "\TCP\Compat_ACEAX\GearInfo\data\camo\blue\glass.paa";
                };
            };
            class Medic
            {
                label = "Medic";
				values[] = 
				{
					"Default", 
					"Medic", 
				};
                changeingame = 0;
                alwaysSelectable = 1;
				class Default
                {
                    label = "Default";
					//description = "XX";
					//image = "\TCP\Compat_ACEAX\GearInfo\data\camo\blue\glass.paa";
                };
				class Medic
                {
                    label = "Medic";
					//description = "XX";
                    //image = "\TCP\Compat_ACEAX\GearInfo\data\camo\blue\glass.paa";
                };
            };
        };
    }; 
};

class XtdGearInfos
{
    class CfgWeapons 
    {
        class BGR_Helmets_ECH35J_Desert
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Desert";
            Visor = "Blue";
            Medic = "Default";
        };
        class BGR_Helmets_ECH35J_Snow
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Snow";
            Visor = "Blue";
            Medic = "Default";
        };
        class BGR_Helmets_ECH35J_Urban
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Urban";
            Visor = "Blue";
            Medic = "Default";
        };
        class BGR_Helmets_ECH35J_Woodland
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Woodland";
            Visor = "Blue";
            Medic = "Default";
        };
		// Medical
        class BGR_Helmets_ECH35J_Desert_Medic
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Desert";
            Visor = "Blue";
            Medic = "Medic";
        };
        class BGR_Helmets_ECH35J_Snow_Medic
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Snow";
            Visor = "Blue";
            Medic = "Medic";
        };
        class BGR_Helmets_ECH35J_Urban_Medic
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Urban";
            Visor = "Blue";
            Medic = "Medic";
        };
        class BGR_Helmets_ECH35J_Woodland_Medic
        {
            model = "BGR_Helmets_Ranger_Extended";
            Camo = "Woodland";
            Visor = "Blue";
            Medic = "Medic";
        };
	};
};