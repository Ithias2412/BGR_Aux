class CfgPatches 
{
	class BGR_Backpacks_Rifleman
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
	class Bag_Base;
	class TCP_B_Rifleman_1_Base: Bag_Base 
	{
		class TCP_equipmentTypes {};
	};
	class TCP_B_Rifleman_1_M43_Medium_Rucksack_Base: TCP_B_Rifleman_1_Base
	{
		
	};
	class TCP_B_Rifleman_1_M43_Medium_Rucksack_Brown: TCP_B_Rifleman_1_M43_Medium_Rucksack_Base
	{
		
	};
	
	class BGR_Backpacks_Rifleman_1_Desert_Tier_1: TCP_B_Rifleman_1_M43_Medium_Rucksack_Brown
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Desert)";
		maximumLoad = 100;
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Backpacks\Rifleman_1\Rifleman_1_M43MR_M43.p3d";
		hiddenSelections[] = {"camo","camo1","pouchbackpackroll","pouchBackpackAssaultSideLeft","pouchBackpackAssaultUpperMiddle","pouchBackpackAssaultLowerMiddle","pouchBackpackAssaultLowerMiddle1","pouchBackpackAssaultLowerMiddle2","pouchBackpackAssaultLowerMiddle3","pouchBackpackAssaultLowerMiddle4","pouchBackpackAssaultSideRight","pouchBackpackEngineerUpperMiddle","pouchBackpackEngineerLowerMiddle","pouchBackpackEngineerSideRight","pouchBackpackFieldSideLeft","pouchBackpackMedicalSideLeft","pouchBackpackMedicalUpperMiddle","pouchBackpackMedicalLowerMiddle","pouchBackpackMedicalSideRight","pouchBackpackPatrolSideLeft","pouchBackpackPatrolUpperMiddle","pouchBackpackPatrolSideRight","pouchButtpackM2","pouchButtpackM35","pouchButtpackEM39","pouchChestLowerMiddleM43A","knifeM43A","knifeM43D"};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Brown\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Brown\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Desert_Tier_1";
		};
	};
	class BGR_Backpacks_Rifleman_1_Snow_Tier_1: BGR_Backpacks_Rifleman_1_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\White\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\White\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Snow_Tier_1";
		};
	};
	class BGR_Backpacks_Rifleman_1_Urban_Tier_1: BGR_Backpacks_Rifleman_1_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Black\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Black\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Urban_Tier_1";
		};
	};
	class BGR_Backpacks_Rifleman_1_Woodland_Tier_1: BGR_Backpacks_Rifleman_1_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Olive\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Olive\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Woodland_Tier_1";
		};
	};
	
	class BGR_Backpacks_Rifleman_1_Desert_Tier_2: BGR_Backpacks_Rifleman_1_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Desert)";
		maximumLoad = 150;
		hiddenSelections[] = {"camo","camo1","pouchbackpackroll","pouchBackpackAssaultSideLeft","pouchBackpackAssaultUpperMiddle","pouchBackpackAssaultLowerMiddle","pouchBackpackAssaultLowerMiddle1","pouchBackpackAssaultLowerMiddle2","pouchBackpackAssaultLowerMiddle3","pouchBackpackAssaultLowerMiddle4","pouchBackpackAssaultSideRight","pouchBackpackEngineerUpperMiddle","pouchBackpackEngineerLowerMiddle","pouchBackpackEngineerSideRight","pouchBackpackFieldSideLeft","pouchBackpackMedicalSideLeft","pouchBackpackMedicalUpperMiddle","pouchBackpackMedicalLowerMiddle","pouchBackpackMedicalSideRight","pouchBackpackPatrolSideLeft","pouchBackpackPatrolUpperMiddle","pouchBackpackPatrolSideRight","pouchButtpackM35","pouchButtpackEM39","pouchChestLowerMiddleM43D","knifeM43A","knifeM43D"};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Brown\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Brown\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Desert_Tier_2";
		};
	};
	class BGR_Backpacks_Rifleman_1_Snow_Tier_2: BGR_Backpacks_Rifleman_1_Desert_Tier_2
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\White\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\White\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Snow_Tier_2";
		};
	};
	class BGR_Backpacks_Rifleman_1_Urban_Tier_2: BGR_Backpacks_Rifleman_1_Desert_Tier_2
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Black\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Black\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Urban_Tier_2";
		};
	};
	class BGR_Backpacks_Rifleman_1_Woodland_Tier_2: BGR_Backpacks_Rifleman_1_Desert_Tier_2
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Olive\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Olive\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Woodland_Tier_2";
		};
	};	
	
	class BGR_Backpacks_Rifleman_1_Desert_Tier_3: BGR_Backpacks_Rifleman_1_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Desert)";
		maximumLoad = 200;
		hiddenSelections[] = {"camo","camo1","pouchbackpackroll","pouchBackpackAssaultSideLeft","pouchBackpackAssaultUpperMiddle","pouchBackpackAssaultLowerMiddle","pouchBackpackAssaultLowerMiddle1","pouchBackpackAssaultLowerMiddle2","pouchBackpackAssaultLowerMiddle3","pouchBackpackAssaultLowerMiddle4","pouchBackpackAssaultSideRight","pouchBackpackEngineerUpperMiddle","pouchBackpackEngineerLowerMiddle","pouchBackpackEngineerSideRight","pouchBackpackFieldSideLeft","pouchBackpackMedicalSideLeft","pouchBackpackMedicalUpperMiddle","pouchBackpackMedicalLowerMiddle","pouchBackpackMedicalSideRight","pouchButtpackM35","pouchButtpackEM39","pouchChestLowerMiddleM43D","knifeM43A","knifeM43D"};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Brown\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Brown\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Desert_Tier_3";
		};
	};
	class BGR_Backpacks_Rifleman_1_Snow_Tier_3: BGR_Backpacks_Rifleman_1_Desert_Tier_3
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\White\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\White\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Snow_Tier_3";
		};
	};
	class BGR_Backpacks_Rifleman_1_Urban_Tier_3: BGR_Backpacks_Rifleman_1_Desert_Tier_3
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Black\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Black\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Urban_Tier_3";
		};
	};
	class BGR_Backpacks_Rifleman_1_Woodland_Tier_3: BGR_Backpacks_Rifleman_1_Desert_Tier_3
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Olive\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Olive\Pouches_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_1_Woodland_Tier_3";
		};
	};
	
	// Variant 2
	
	class BGR_Backpacks_Rifleman_2_Desert_Tier_1: BGR_Backpacks_Rifleman_1_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Desert)";
		maximumLoad = 100;
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Backpacks\Rifleman_2\Rifleman_2_M43MR_M43.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","pouchbackpackroll","pouchBackpackAssaultSideLeft","pouchBackpackAssaultUpperMiddle","pouchBackpackAssaultLowerMiddle","pouchBackpackAssaultLowerMiddle1","pouchBackpackAssaultLowerMiddle2","pouchBackpackAssaultLowerMiddle3","pouchBackpackAssaultLowerMiddle4","pouchBackpackAssaultSideRight","pouchBackpackEngineerUpperMiddle","pouchBackpackEngineerLowerMiddle","pouchBackpackEngineerSideRight","pouchBackpackFieldSideLeft","pouchBackpackMedicalSideLeft","pouchBackpackMedicalUpperMiddle","pouchBackpackMedicalLowerMiddle","pouchBackpackMedicalSideRight","pouchBackpackPatrolSideLeft","pouchBackpackPatrolUpperMiddle","pouchBackpackPatrolSideRight","pouchButtpackM2","pouchButtpackM35","pouchButtpackEM39","pouchThighLeft","knifeM43A","knifeM43D"};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Brown\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Brown\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Desert_Tier_1";
		};
	};
	class BGR_Backpacks_Rifleman_2_Snow_Tier_1: BGR_Backpacks_Rifleman_2_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\White\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\White\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Snow_Tier_1";
		};
	};
	class BGR_Backpacks_Rifleman_2_Urban_Tier_1: BGR_Backpacks_Rifleman_2_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Black\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Black\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Urban_Tier_1";
		};
	};
	class BGR_Backpacks_Rifleman_2_Woodland_Tier_1: BGR_Backpacks_Rifleman_2_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Olive\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Olive\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Woodland_Tier_1";
		};
	};
	
	class BGR_Backpacks_Rifleman_2_Desert_Tier_2: BGR_Backpacks_Rifleman_2_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Desert)";
		maximumLoad = 150;
		hiddenSelections[] = {"camo","camo1","camo2","pouchbackpackroll","pouchBackpackAssaultSideLeft","pouchBackpackAssaultUpperMiddle","pouchBackpackAssaultLowerMiddle","pouchBackpackAssaultLowerMiddle1","pouchBackpackAssaultLowerMiddle2","pouchBackpackAssaultLowerMiddle3","pouchBackpackAssaultLowerMiddle4","pouchBackpackAssaultSideRight","pouchBackpackEngineerUpperMiddle","pouchBackpackEngineerLowerMiddle","pouchBackpackEngineerSideRight","pouchBackpackFieldSideLeft","pouchBackpackMedicalSideLeft","pouchBackpackMedicalUpperMiddle","pouchBackpackMedicalLowerMiddle","pouchBackpackMedicalSideRight","pouchBackpackPatrolSideLeft","pouchBackpackPatrolUpperMiddle","pouchBackpackPatrolSideRight","pouchButtpackM35","pouchButtpackEM39","pouchThighLeft","knifeM43A","knifeM43D"};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Brown\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Brown\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Desert_Tier_2";
		};
	};
	class BGR_Backpacks_Rifleman_2_Snow_Tier_2: BGR_Backpacks_Rifleman_2_Desert_Tier_2
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\White\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\White\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Snow_Tier_2";
		};
	};
	class BGR_Backpacks_Rifleman_2_Urban_Tier_2: BGR_Backpacks_Rifleman_2_Desert_Tier_2
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Black\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Black\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Urban_Tier_2";
		};
	};
	class BGR_Backpacks_Rifleman_2_Woodland_Tier_2: BGR_Backpacks_Rifleman_2_Desert_Tier_2
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Olive\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Olive\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Woodland_Tier_2";
		};
	};	
	
	class BGR_Backpacks_Rifleman_2_Desert_Tier_3: BGR_Backpacks_Rifleman_2_Desert_Tier_1
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Desert)";
		maximumLoad = 200;
		hiddenSelections[] = {"camo","camo1","camo2","pouchbackpackroll","pouchBackpackAssaultSideLeft","pouchBackpackAssaultUpperMiddle","pouchBackpackAssaultLowerMiddle","pouchBackpackAssaultLowerMiddle1","pouchBackpackAssaultLowerMiddle2","pouchBackpackAssaultLowerMiddle3","pouchBackpackAssaultLowerMiddle4","pouchBackpackAssaultSideRight","pouchBackpackEngineerUpperMiddle","pouchBackpackEngineerLowerMiddle","pouchBackpackEngineerSideRight","pouchBackpackFieldSideLeft","pouchBackpackMedicalSideLeft","pouchBackpackMedicalUpperMiddle","pouchBackpackMedicalLowerMiddle","pouchBackpackMedicalSideRight","pouchButtpackM35","pouchButtpackEM39","pouchThighLeft","knifeM43A","knifeM43D"};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Brown\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Brown\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Desert_Tier_3";
		};
	};
	class BGR_Backpacks_Rifleman_2_Snow_Tier_3: BGR_Backpacks_Rifleman_2_Desert_Tier_3
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\White\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\White\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Snow_Tier_3";
		};
	};
	class BGR_Backpacks_Rifleman_2_Urban_Tier_3: BGR_Backpacks_Rifleman_2_Desert_Tier_3
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Black\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Black\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Urban_Tier_3";
		};
	};
	class BGR_Backpacks_Rifleman_2_Woodland_Tier_3: BGR_Backpacks_Rifleman_2_Desert_Tier_3
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43 Rifleman Rucksack (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\M43_Medium_Rucksack\data\camo\Olive\M43_Medium_Rucksack_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Backpacks\Pouches\data\camo\Olive\Pouches_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa"
		};
		class TCP_equipmentTypes: TCP_equipmentTypes
		{
			baseEquipment="BGR_Backpacks_Rifleman_2_Woodland_Tier_3";
		};
	};
};



class XtdGearModels
{
	class cfgVehicles 
	{
		class BGR_Backpacks_Rifleman_Extended
		{
			label = "Rifleman";
			author = "Ithias";
			options[] = 
			{
				"Camo",
				"Variant",
				"Load_Tier",
			};
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
			class Variant
			{
				label = "Variant";
				values[] = 
				{
					"V1", 
					"V2", 
				};
				changeingame = 0;
				alwaysSelectable = 1;
				class V1
				{
					label = "1";
				};
				class V2
				{
					label = "2";
				};
			};
			class Load_Tier
			{
				label = "Load_Tier";
				values[] = 
				{
					"T1", 
					"T2", 
					"T3", 
				};
				changeingame = 0;
				alwaysSelectable = 1;
				class T1
				{
					label = "Tier 1";
				};
				class T2
				{
					label = "Tier 2";
				};
				class T3
				{
					label = "Tier 3";
				};
			};
		};
	};
};

class XtdGearInfos
{
	class cfgVehicles 
	{
		class BGR_Backpacks_Rifleman_1_Desert_Tier_1
		{
			model = "BGR_Backpacks_Rifleman_Extended";
			Camo = "Desert";
			Variant = "V1";
			Load_Tier = "T1";
		};
		class BGR_Backpacks_Rifleman_1_Snow_Tier_1: BGR_Backpacks_Rifleman_1_Desert_Tier_1
		{
			Camo = "Snow";
		};
		class BGR_Backpacks_Rifleman_1_Urban_Tier_1: BGR_Backpacks_Rifleman_1_Desert_Tier_1
		{
			Camo = "Urban";
		};
		class BGR_Backpacks_Rifleman_1_Woodland_Tier_1: BGR_Backpacks_Rifleman_1_Desert_Tier_1
		{
			Camo = "Woodland";
		};
		class BGR_Backpacks_Rifleman_1_Desert_Tier_2
		{
			model = "BGR_Backpacks_Rifleman_Extended";
			Camo = "Desert";
			Variant = "V1";
			Load_Tier = "T2";
		};
		class BGR_Backpacks_Rifleman_1_Snow_Tier_2: BGR_Backpacks_Rifleman_1_Desert_Tier_2
		{
			Camo = "Snow";
		};
		class BGR_Backpacks_Rifleman_1_Urban_Tier_2: BGR_Backpacks_Rifleman_1_Desert_Tier_2
		{
			Camo = "Urban";
		};
		class BGR_Backpacks_Rifleman_1_Woodland_Tier_2: BGR_Backpacks_Rifleman_1_Desert_Tier_2
		{
			Camo = "Woodland";
		};
		class BGR_Backpacks_Rifleman_1_Desert_Tier_3
		{
			model = "BGR_Backpacks_Rifleman_Extended";
			Camo = "Desert";
			Variant = "V1";
			Load_Tier = "T3";
		};
		class BGR_Backpacks_Rifleman_1_Snow_Tier_3: BGR_Backpacks_Rifleman_1_Desert_Tier_3
		{
			Camo = "Snow";
		};
		class BGR_Backpacks_Rifleman_1_Urban_Tier_3: BGR_Backpacks_Rifleman_1_Desert_Tier_3
		{
			Camo = "Urban";
		};
		class BGR_Backpacks_Rifleman_1_Woodland_Tier_3: BGR_Backpacks_Rifleman_1_Desert_Tier_3
		{
			Camo = "Woodland";
		};
		
		// Variant 2
		
		class BGR_Backpacks_Rifleman_2_Desert_Tier_1
		{
			model = "BGR_Backpacks_Rifleman_Extended";
			Camo = "Desert";
			Variant = "V2";
			Load_Tier = "T1";
		};
		class BGR_Backpacks_Rifleman_2_Snow_Tier_1: BGR_Backpacks_Rifleman_2_Desert_Tier_1
		{
			Camo = "Snow";
		};
		class BGR_Backpacks_Rifleman_2_Urban_Tier_1: BGR_Backpacks_Rifleman_2_Desert_Tier_1
		{
			Camo = "Urban";
		};
		class BGR_Backpacks_Rifleman_2_Woodland_Tier_1: BGR_Backpacks_Rifleman_2_Desert_Tier_1
		{
			Camo = "Woodland";
		};
		class BGR_Backpacks_Rifleman_2_Desert_Tier_2
		{
			model = "BGR_Backpacks_Rifleman_Extended";
			Camo = "Desert";
			Variant = "V2";
			Load_Tier = "T2";
		};
		class BGR_Backpacks_Rifleman_2_Snow_Tier_2: BGR_Backpacks_Rifleman_2_Desert_Tier_2
		{
			Camo = "Snow";
		};
		class BGR_Backpacks_Rifleman_2_Urban_Tier_2: BGR_Backpacks_Rifleman_2_Desert_Tier_2
		{
			Camo = "Urban";
		};
		class BGR_Backpacks_Rifleman_2_Woodland_Tier_2: BGR_Backpacks_Rifleman_2_Desert_Tier_2
		{
			Camo = "Woodland";
		};
		class BGR_Backpacks_Rifleman_2_Desert_Tier_3
		{
			model = "BGR_Backpacks_Rifleman_Extended";
			Camo = "Desert";
			Variant = "V2";
			Load_Tier = "T3";
		};
		class BGR_Backpacks_Rifleman_2_Snow_Tier_3: BGR_Backpacks_Rifleman_2_Desert_Tier_3
		{
			Camo = "Snow";
		};
		class BGR_Backpacks_Rifleman_2_Urban_Tier_3: BGR_Backpacks_Rifleman_2_Desert_Tier_3
		{
			Camo = "Urban";
		};
		class BGR_Backpacks_Rifleman_2_Woodland_Tier_3: BGR_Backpacks_Rifleman_2_Desert_Tier_3
		{
			Camo = "Woodland";
		};
	};
};