class CfgPatches 
{
	class BGR_Vests_M43
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
	class Default;
	class InventoryItem_Base_F;
	class ItemCore: Default
	{
		
	};
	class VestItem: InventoryItem_Base_F
	{
		
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo: VestItem
		{
			
		};
	};
	class TCP_V_M43A_Light_1_Base: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo
		{
			
		};
	};
	class TCP_V_M43A_Light_1_Brown: TCP_V_M43A_Light_1_Base
	{
		class ItemInfo: ItemInfo
		{
			
		};
	};

//None
	class BGR_Vests_M43A_Desert: TCP_V_M43A_Light_1_Brown
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak
	class BGR_Vests_M43A_Desert_Flak: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","decals","collararmored"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","decals","collararmored"};
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak: BGR_Vests_M43A_Desert_Flak
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak: BGR_Vests_M43A_Desert_Flak
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak: BGR_Vests_M43A_Desert_Flak
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	
//Armored
	class BGR_Vests_M43A_Desert_Armored: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","decals","collarflak"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","decals","collarflak"};
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored: BGR_Vests_M43A_Desert_Armored
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored: BGR_Vests_M43A_Desert_Armored
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored: BGR_Vests_M43A_Desert_Armored
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Pads
	class BGR_Vests_M43A_Desert_None_Pads: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Pads: BGR_Vests_M43A_Desert_None_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Pads: BGR_Vests_M43A_Desert_None_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Pads: BGR_Vests_M43A_Desert_None_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Pads
	class BGR_Vests_M43A_Desert_Flak_Pads: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Pads: BGR_Vests_M43A_Desert_Flak_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Pads: BGR_Vests_M43A_Desert_Flak_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Pads: BGR_Vests_M43A_Desert_Flak_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Pads
	class BGR_Vests_M43A_Desert_Armored_Pads: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Pads: BGR_Vests_M43A_Desert_Armored_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Pads: BGR_Vests_M43A_Desert_Armored_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Pads: BGR_Vests_M43A_Desert_Armored_Pads
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Security
	class BGR_Vests_M43A_Desert_None_Security: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Security: BGR_Vests_M43A_Desert_None_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Security: BGR_Vests_M43A_Desert_None_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Security: BGR_Vests_M43A_Desert_None_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Security
	class BGR_Vests_M43A_Desert_Flak_Security: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Security: BGR_Vests_M43A_Desert_Flak_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Security: BGR_Vests_M43A_Desert_Flak_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Security: BGR_Vests_M43A_Desert_Flak_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Security
	class BGR_Vests_M43A_Desert_Armored_Security: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Security: BGR_Vests_M43A_Desert_Armored_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Security: BGR_Vests_M43A_Desert_Armored_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Security: BGR_Vests_M43A_Desert_Armored_Security
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Gungnir_S
	class BGR_Vests_M43A_Desert_None_Gungnir_S: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Gungnir_S: BGR_Vests_M43A_Desert_None_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Gungnir_S: BGR_Vests_M43A_Desert_None_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Gungnir_S: BGR_Vests_M43A_Desert_None_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Gungnir_S
	class BGR_Vests_M43A_Desert_Flak_Gungnir_S: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Gungnir_S: BGR_Vests_M43A_Desert_Flak_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Gungnir_S: BGR_Vests_M43A_Desert_Flak_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Gungnir_S: BGR_Vests_M43A_Desert_Flak_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Gungnir_S
	class BGR_Vests_M43A_Desert_Armored_Gungnir_S: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Gungnir_S: BGR_Vests_M43A_Desert_Armored_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Gungnir_S: BGR_Vests_M43A_Desert_Armored_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Gungnir_S: BGR_Vests_M43A_Desert_Armored_Gungnir_S
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Gungnir_L
	class BGR_Vests_M43A_Desert_None_Gungnir_L: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Gungnir_L: BGR_Vests_M43A_Desert_None_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Gungnir_L: BGR_Vests_M43A_Desert_None_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Gungnir_L: BGR_Vests_M43A_Desert_None_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Gungnir_L
	class BGR_Vests_M43A_Desert_Flak_Gungnir_L: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Gungnir_L: BGR_Vests_M43A_Desert_Flak_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Gungnir_L: BGR_Vests_M43A_Desert_Flak_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Gungnir_L: BGR_Vests_M43A_Desert_Flak_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Gungnir_L
	class BGR_Vests_M43A_Desert_Armored_Gungnir_L: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_1.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_1.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Gungnir_L: BGR_Vests_M43A_Desert_Armored_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Gungnir_L: BGR_Vests_M43A_Desert_Armored_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Gungnir_L: BGR_Vests_M43A_Desert_Armored_Gungnir_L
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Thighs
	class BGR_Vests_M43A_Desert_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Thighs: BGR_Vests_M43A_Desert_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Thighs: BGR_Vests_M43A_Desert_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Thighs: BGR_Vests_M43A_Desert_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Thighs
	class BGR_Vests_M43A_Desert_Flak_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Thighs: BGR_Vests_M43A_Desert_Flak_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Thighs: BGR_Vests_M43A_Desert_Flak_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Thighs: BGR_Vests_M43A_Desert_Flak_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Thighs
	class BGR_Vests_M43A_Desert_Armored_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_2.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Thighs: BGR_Vests_M43A_Desert_Armored_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Thighs: BGR_Vests_M43A_Desert_Armored_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Thighs: BGR_Vests_M43A_Desert_Armored_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Pads_Thighs
	class BGR_Vests_M43A_Desert_None_Pads_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Pads_Thighs: BGR_Vests_M43A_Desert_None_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Pads_Thighs: BGR_Vests_M43A_Desert_None_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Pads_Thighs: BGR_Vests_M43A_Desert_None_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Pads_Thighs
	class BGR_Vests_M43A_Desert_Flak_Pads_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Pads_Thighs: BGR_Vests_M43A_Desert_Flak_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Pads_Thighs: BGR_Vests_M43A_Desert_Flak_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Pads_Thighs: BGR_Vests_M43A_Desert_Flak_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Pads_Thighs
	class BGR_Vests_M43A_Desert_Armored_Pads_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Pads_Thighs: BGR_Vests_M43A_Desert_Armored_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Pads_Thighs: BGR_Vests_M43A_Desert_Armored_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Pads_Thighs: BGR_Vests_M43A_Desert_Armored_Pads_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Security_Thighs
	class BGR_Vests_M43A_Desert_None_Security_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Security_Thighs: BGR_Vests_M43A_Desert_None_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Security_Thighs: BGR_Vests_M43A_Desert_None_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Security_Thighs: BGR_Vests_M43A_Desert_None_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Security_Thighs
	class BGR_Vests_M43A_Desert_Flak_Security_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Security_Thighs: BGR_Vests_M43A_Desert_Flak_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Security_Thighs: BGR_Vests_M43A_Desert_Flak_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Security_Thighs: BGR_Vests_M43A_Desert_Flak_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};


//Armored_Security_Thighs
	class BGR_Vests_M43A_Desert_Armored_Security_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Security_Thighs: BGR_Vests_M43A_Desert_Armored_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Security_Thighs: BGR_Vests_M43A_Desert_Armored_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Security_Thighs: BGR_Vests_M43A_Desert_Armored_Security_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Gungnir_S_Thighs
	class BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Gungnir_S_Thighs
	class BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Gungnir_S_Thighs
	class BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Gungnir_L_Thighs
	class BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Gungnir_L_Thighs
	class BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Gungnir_L_Thighs
	class BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_2.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//FUCK
//None_Shins
	class BGR_Vests_M43A_Desert_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Shins: BGR_Vests_M43A_Desert_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Shins: BGR_Vests_M43A_Desert_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Shins: BGR_Vests_M43A_Desert_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Shins
	class BGR_Vests_M43A_Desert_Flak_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Shins: BGR_Vests_M43A_Desert_Flak_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Shins: BGR_Vests_M43A_Desert_Flak_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Shins: BGR_Vests_M43A_Desert_Flak_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Shins
	class BGR_Vests_M43A_Desert_Armored_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_3.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Light_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Shins: BGR_Vests_M43A_Desert_Armored_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Shins: BGR_Vests_M43A_Desert_Armored_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Shins: BGR_Vests_M43A_Desert_Armored_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Pads_Shins
	class BGR_Vests_M43A_Desert_None_Pads_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Pads_Shins: BGR_Vests_M43A_Desert_None_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Pads_Shins: BGR_Vests_M43A_Desert_None_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Pads_Shins: BGR_Vests_M43A_Desert_None_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Pads_Shins
	class BGR_Vests_M43A_Desert_Flak_Pads_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Pads_Shins: BGR_Vests_M43A_Desert_Flak_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Pads_Shins: BGR_Vests_M43A_Desert_Flak_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Pads_Shins: BGR_Vests_M43A_Desert_Flak_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Pads_Shins
	class BGR_Vests_M43A_Desert_Armored_Pads_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_Pads_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Pads_Shins: BGR_Vests_M43A_Desert_Armored_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Pads_Shins: BGR_Vests_M43A_Desert_Armored_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Pads_Shins: BGR_Vests_M43A_Desert_Armored_Pads_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Security_Shins
	class BGR_Vests_M43A_Desert_None_Security_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Security_Shins: BGR_Vests_M43A_Desert_None_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Security_Shins: BGR_Vests_M43A_Desert_None_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Security_Shins: BGR_Vests_M43A_Desert_None_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Security_Shins
	class BGR_Vests_M43A_Desert_Flak_Security_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Security_Shins: BGR_Vests_M43A_Desert_Flak_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Security_Shins: BGR_Vests_M43A_Desert_Flak_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Security_Shins: BGR_Vests_M43A_Desert_Flak_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Security_Shins
	class BGR_Vests_M43A_Desert_Armored_Security_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_BaseSec_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Security_Shins: BGR_Vests_M43A_Desert_Armored_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Security_Shins: BGR_Vests_M43A_Desert_Armored_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Security_Shins: BGR_Vests_M43A_Desert_Armored_Security_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_Shoulders_BaseSecurity_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Gungnir_S_Shins
	class BGR_Vests_M43A_Desert_None_Gungnir_S_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Gungnir_S_Shins: BGR_Vests_M43A_Desert_None_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Gungnir_S_Shins: BGR_Vests_M43A_Desert_None_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Gungnir_S_Shins: BGR_Vests_M43A_Desert_None_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Gungnir_S_Shins
	class BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Gungnir_S_Shins
	class BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirS_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//None_Gungnir_L_Shins
	class BGR_Vests_M43A_Desert_None_Gungnir_L_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_None_Gungnir_L_Shins: BGR_Vests_M43A_Desert_None_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_None_Gungnir_L_Shins: BGR_Vests_M43A_Desert_None_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_None_Gungnir_L_Shins: BGR_Vests_M43A_Desert_None_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Flak_Gungnir_L_Shins
	class BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collararmored"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Flak_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Flak_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Flak_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};

//Armored_Gungnir_L_Shins
	class BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins: BGR_Vests_M43A_Desert
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Desert)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
		model = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_3.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals","collarflak"};
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\M43A_GungnirL_3.p3d";
		};
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Desert_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Brown\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Snow_Armored_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Snow_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\White\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};
	class BGR_Vests_M43A_Urban_Armored_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Urban_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
		class TCP_uniformDecals
		{
			decalColor = "white";
			selectionAffiliation = "affiliationLight";
			selectionBloodType = "bloodTypeLight";
			selectionName = "nameM43A";
			selectionRank = "rankM43A";
		};
	};
	class BGR_Vests_M43A_Woodland_Armored_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins
	{
		author="Ithias";
		dlc="BGR Aux";
		displayName="[BGR] M43/A Vest (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_01_CO.paa",
			"\BGR_Aux\Vests\Tex\BGR_Vests_M43A_Woodland_Gungnir.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_02_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Olive\vest_M43A_03_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\black\vest_M43_DecalSheet_CA.paa"
		};
	};




};

class XtdGearModels
{
	class CfgWeapons 
	{
		class BGR_Vests_M43_Extended
		{
			label = "M43 Vests";
			author = "Ithias";
			options[] = 
			{
				"Camo",
				"Collar", 
				"Shoulders", 
				"Legs", 
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
			class Collar
			{
				label = "Collar";
				values[] = 
				{
					"None", 
					"Flak", 
					"Armored", 
				};
				changeingame = 0;
				alwaysSelectable = 1;
				class None
				{
					label = "None";
				};
				class Flak
				{
					label = "Flak";
				};
				class Armored
				{
					label = "Armored";
				};
			};
			class Shoulders
			{
				label = "Shoulders";
				values[] = 
				{
					"None", 
					"Pads", 
					"Security", 
					"Gungnir_S", 
					"Gungnir_L", 
				};
				changeingame = 0;
				alwaysSelectable = 1;
				class None
				{
					label = "None";
				};
				class Pads
				{
					label = "Pads";
				};
				class Security
				{
					label = "Security";
				};
				class Gungnir_S
				{
					label = "Gungnir (S)";
				};
				class Gungnir_L
				{
					label = "Gungnir (L)";
				};
			};
			class Legs
			{
				label = "Legs";
				values[] = 
				{
					"None", 
					"Thighs", 
					"Shins", 
				};
				changeingame = 0;
				alwaysSelectable = 1;
				class None
				{
					label = "None";
				};
				class Thighs
				{
					label = "Thighs";
				};
				class Shins
				{
					label = "Shins";
				};
			};
		};
	}; 
};

class XtdGearInfos
{
	class CfgWeapons 
	{
		class BGR_Vests_M43A_Desert
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "None";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow: BGR_Vests_M43A_Desert
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban: BGR_Vests_M43A_Desert
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland: BGR_Vests_M43A_Desert
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak
		class BGR_Vests_M43A_Desert_Flak
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "None";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Flak: BGR_Vests_M43A_Desert_Flak
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak: BGR_Vests_M43A_Desert_Flak
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak: BGR_Vests_M43A_Desert_Flak
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored
		class BGR_Vests_M43A_Desert_Armored
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "None";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Armored: BGR_Vests_M43A_Desert_Armored
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored: BGR_Vests_M43A_Desert_Armored
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored: BGR_Vests_M43A_Desert_Armored
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Pads
		class BGR_Vests_M43A_Desert_None_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Pads";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_None_Pads: BGR_Vests_M43A_Desert_None_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Pads: BGR_Vests_M43A_Desert_None_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Pads: BGR_Vests_M43A_Desert_None_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Pads
		class BGR_Vests_M43A_Desert_Flak_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Pads";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Flak_Pads: BGR_Vests_M43A_Desert_Flak_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Pads: BGR_Vests_M43A_Desert_Flak_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Pads: BGR_Vests_M43A_Desert_Flak_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};
	
// Armored_Pads
		class BGR_Vests_M43A_Desert_Armored_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Pads";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Armored_Pads: BGR_Vests_M43A_Desert_Armored_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Pads: BGR_Vests_M43A_Desert_Armored_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Pads: BGR_Vests_M43A_Desert_Armored_Pads
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Security
		class BGR_Vests_M43A_Desert_None_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Security";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_None_Security: BGR_Vests_M43A_Desert_None_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Security: BGR_Vests_M43A_Desert_None_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Security: BGR_Vests_M43A_Desert_None_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Security
		class BGR_Vests_M43A_Desert_Flak_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Security";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Flak_Security: BGR_Vests_M43A_Desert_Flak_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Security: BGR_Vests_M43A_Desert_Flak_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Security: BGR_Vests_M43A_Desert_Flak_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Security
		class BGR_Vests_M43A_Desert_Armored_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Security";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Armored_Security: BGR_Vests_M43A_Desert_Armored_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Security: BGR_Vests_M43A_Desert_Armored_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Security: BGR_Vests_M43A_Desert_Armored_Security
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Gungnir_S
		class BGR_Vests_M43A_Desert_None_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Gungnir_S";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_None_Gungnir_S: BGR_Vests_M43A_Desert_None_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Gungnir_S: BGR_Vests_M43A_Desert_None_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Gungnir_S: BGR_Vests_M43A_Desert_None_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Gungnir_S
		class BGR_Vests_M43A_Desert_Flak_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Gungnir_S";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Flak_Gungnir_S: BGR_Vests_M43A_Desert_Flak_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Gungnir_S: BGR_Vests_M43A_Desert_Flak_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Gungnir_S: BGR_Vests_M43A_Desert_Flak_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Gungnir_S
		class BGR_Vests_M43A_Desert_Armored_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Gungnir_S";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Armored_Gungnir_S: BGR_Vests_M43A_Desert_Armored_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Gungnir_S: BGR_Vests_M43A_Desert_Armored_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Gungnir_S: BGR_Vests_M43A_Desert_Armored_Gungnir_S
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Gungnir_L
		class BGR_Vests_M43A_Desert_None_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Gungnir_L";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_None_Gungnir_L: BGR_Vests_M43A_Desert_None_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Gungnir_L: BGR_Vests_M43A_Desert_None_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Gungnir_L: BGR_Vests_M43A_Desert_None_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Gungnir_L
		class BGR_Vests_M43A_Desert_Flak_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Gungnir_L";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Flak_Gungnir_L: BGR_Vests_M43A_Desert_Flak_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Gungnir_L: BGR_Vests_M43A_Desert_Flak_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Gungnir_L: BGR_Vests_M43A_Desert_Flak_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Gungnir_L
		class BGR_Vests_M43A_Desert_Armored_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Gungnir_L";
			Legs = "None";
		};
		class BGR_Vests_M43A_Snow_Armored_Gungnir_L: BGR_Vests_M43A_Desert_Armored_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Gungnir_L: BGR_Vests_M43A_Desert_Armored_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Gungnir_L: BGR_Vests_M43A_Desert_Armored_Gungnir_L
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Thighs
		class BGR_Vests_M43A_Desert_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "None";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Thighs: BGR_Vests_M43A_Desert_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Thighs: BGR_Vests_M43A_Desert_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Thighs: BGR_Vests_M43A_Desert_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Thighs
		class BGR_Vests_M43A_Desert_Flak_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "None";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Flak_Thighs: BGR_Vests_M43A_Desert_Flak_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Thighs: BGR_Vests_M43A_Desert_Flak_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Thighs: BGR_Vests_M43A_Desert_Flak_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Thighs
		class BGR_Vests_M43A_Desert_Armored_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "None";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Armored_Thighs: BGR_Vests_M43A_Desert_Armored_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Thighs: BGR_Vests_M43A_Desert_Armored_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Thighs: BGR_Vests_M43A_Desert_Armored_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Pads_Thighs
		class BGR_Vests_M43A_Desert_None_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Pads";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_None_Pads_Thighs: BGR_Vests_M43A_Desert_None_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Pads_Thighs: BGR_Vests_M43A_Desert_None_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Pads_Thighs: BGR_Vests_M43A_Desert_None_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Pads_Thighs
		class BGR_Vests_M43A_Desert_Flak_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Pads";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Flak_Pads_Thighs: BGR_Vests_M43A_Desert_Flak_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Pads_Thighs: BGR_Vests_M43A_Desert_Flak_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Pads_Thighs: BGR_Vests_M43A_Desert_Flak_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Pads_Thighs
		class BGR_Vests_M43A_Desert_Armored_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Pads";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Armored_Pads_Thighs: BGR_Vests_M43A_Desert_Armored_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Pads_Thighs: BGR_Vests_M43A_Desert_Armored_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Pads_Thighs: BGR_Vests_M43A_Desert_Armored_Pads_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Security_Thighs
		class BGR_Vests_M43A_Desert_None_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Security";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_None_Security_Thighs: BGR_Vests_M43A_Desert_None_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Security_Thighs: BGR_Vests_M43A_Desert_None_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Security_Thighs: BGR_Vests_M43A_Desert_None_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Security_Thighs
		class BGR_Vests_M43A_Desert_Flak_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Security";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Flak_Security_Thighs: BGR_Vests_M43A_Desert_Flak_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Security_Thighs: BGR_Vests_M43A_Desert_Flak_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Security_Thighs: BGR_Vests_M43A_Desert_Flak_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Security_Thighs
		class BGR_Vests_M43A_Desert_Armored_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Security";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Armored_Security_Thighs: BGR_Vests_M43A_Desert_Armored_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Security_Thighs: BGR_Vests_M43A_Desert_Armored_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Security_Thighs: BGR_Vests_M43A_Desert_Armored_Security_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Gungnir_S_Thighs
		class BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Gungnir_S";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_None_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Gungnir_S_Thighs
		class BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Gungnir_S";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Flak_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Gungnir_S_Thighs
		class BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Gungnir_S";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Armored_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Gungnir_S_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Gungnir_L_Thighs
		class BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Gungnir_L";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_None_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_None_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Gungnir_L_Thighs
		class BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Gungnir_L";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Flak_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Gungnir_L_Thighs
		class BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Gungnir_L";
			Legs = "Thighs";
		};
		class BGR_Vests_M43A_Snow_Armored_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Gungnir_L_Thighs: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Thighs
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Shins
		class BGR_Vests_M43A_Desert_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "None";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Shins: BGR_Vests_M43A_Desert_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Shins: BGR_Vests_M43A_Desert_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Shins: BGR_Vests_M43A_Desert_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Shins
		class BGR_Vests_M43A_Desert_Flak_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "None";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Flak_Shins: BGR_Vests_M43A_Desert_Flak_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Shins: BGR_Vests_M43A_Desert_Flak_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Shins: BGR_Vests_M43A_Desert_Flak_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Shins
		class BGR_Vests_M43A_Desert_Armored_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "None";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Armored_Shins: BGR_Vests_M43A_Desert_Armored_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Shins: BGR_Vests_M43A_Desert_Armored_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Shins: BGR_Vests_M43A_Desert_Armored_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Pads_Shins
		class BGR_Vests_M43A_Desert_None_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Pads";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_None_Pads_Shins: BGR_Vests_M43A_Desert_None_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Pads_Shins: BGR_Vests_M43A_Desert_None_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Pads_Shins: BGR_Vests_M43A_Desert_None_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Pads_Shins
		class BGR_Vests_M43A_Desert_Flak_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Pads";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Flak_Pads_Shins: BGR_Vests_M43A_Desert_Flak_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Pads_Shins: BGR_Vests_M43A_Desert_Flak_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Pads_Shins: BGR_Vests_M43A_Desert_Flak_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Pads_Shins
		class BGR_Vests_M43A_Desert_Armored_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Pads";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Armored_Pads_Shins: BGR_Vests_M43A_Desert_Armored_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Pads_Shins: BGR_Vests_M43A_Desert_Armored_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Pads_Shins: BGR_Vests_M43A_Desert_Armored_Pads_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Security_Shins
		class BGR_Vests_M43A_Desert_None_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Security";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_None_Security_Shins: BGR_Vests_M43A_Desert_None_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Security_Shins: BGR_Vests_M43A_Desert_None_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Security_Shins: BGR_Vests_M43A_Desert_None_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Security_Shins
		class BGR_Vests_M43A_Desert_Flak_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Security";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Flak_Security_Shins: BGR_Vests_M43A_Desert_Flak_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Security_Shins: BGR_Vests_M43A_Desert_Flak_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Security_Shins: BGR_Vests_M43A_Desert_Flak_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Security_Shins
		class BGR_Vests_M43A_Desert_Armored_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Security";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Armored_Security_Shins: BGR_Vests_M43A_Desert_Armored_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Security_Shins: BGR_Vests_M43A_Desert_Armored_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Security_Shins: BGR_Vests_M43A_Desert_Armored_Security_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Gungnir_S_Shins
		class BGR_Vests_M43A_Desert_None_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Gungnir_S";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_None_Gungnir_S_Shins: BGR_Vests_M43A_Desert_None_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Gungnir_S_Shins: BGR_Vests_M43A_Desert_None_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Gungnir_S_Shins: BGR_Vests_M43A_Desert_None_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Gungnir_S_Shins
		class BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Gungnir_S";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Flak_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Gungnir_S_Shins
		class BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Gungnir_S";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Armored_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Gungnir_S_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_S_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// None_Gungnir_L_Shins
		class BGR_Vests_M43A_Desert_None_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "None";
			Shoulders = "Gungnir_L";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_None_Gungnir_L_Shins: BGR_Vests_M43A_Desert_None_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_None_Gungnir_L_Shins: BGR_Vests_M43A_Desert_None_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_None_Gungnir_L_Shins: BGR_Vests_M43A_Desert_None_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Flak_Gungnir_L_Shins
		class BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Flak";
			Shoulders = "Gungnir_L";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Flak_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Flak_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Flak_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Flak_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};

// Armored_Gungnir_L_Shins
		class BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Desert";
			Collar = "Armored";
			Shoulders = "Gungnir_L";
			Legs = "Shins";
		};
		class BGR_Vests_M43A_Snow_Armored_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Snow";
		};
		class BGR_Vests_M43A_Urban_Armored_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Urban";
		};
		class BGR_Vests_M43A_Woodland_Armored_Gungnir_L_Shins: BGR_Vests_M43A_Desert_Armored_Gungnir_L_Shins
		{
			model = "BGR_Vests_M43_Extended";
			Camo = "Woodland";
		};


	};
};