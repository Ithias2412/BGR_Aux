class CfgPatches 
{
	class BGR_Medical_Items 
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
			"BGR_Painkiller_Weap",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

//#include "xtdGear.hpp"
class ace_medical_treatment
{
    class Medication
	{
		class Morphine;
        class BGR_Painkiller: Morphine 
		{
            painReduce = 0.4;
			hrIncreaseLow[] = {0, 0};
			hrIncreaseNormal[] = {0, 0};
			hrIncreaseHigh[] = {0, 0};
            timeInSystem = 900;
            timeTillMaxEffect = 30;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
	};
};

class ace_medical_treatment_actions
{
    class FieldDressing;
	class Morphine;
	class ApplyTourniquet;
	class RemoveTourniquet;
    class PlasmaIV;
	class BGR_Painkiller: Morphine
	{
		displayName="Painkiller";
        displayNameProgress = "Snorting Painkiller";
        allowedSelections[] = {"Head"};
		items[]=
		{
			"BGR_Painkiller_Weap",
		};
		treatmentTime = 6;
	};
};

class cfgWeapons
{
    class ACE_fieldDressing;
    class ACE_morphine;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class ACE_tourniquet;
	class BGR_Painkiller_Weap: ACE_morphine
	{
		scope=2;
		author="Ithias";
		displayName="[BGR] Painkiller";
		class ItemInfo: CBA_MiscItem_ItemInfo 
		{
			mass = 0.5;
        };
	};
};