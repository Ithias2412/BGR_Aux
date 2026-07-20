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
    class Bandaging
    {
        class FieldDressing;
        class BGR_Medigel: FieldDressing 
		{
			class Abrasion 
			{
                effectiveness = 4;
                reopeningChance = 0.6;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AbrasionMinor: Abrasion 
			{
                effectiveness = 4;
            };
            class AbrasionMedium: Abrasion 
			{
                effectiveness = 3;
                reopeningChance = 0.9;
            };
            class AbrasionLarge: Abrasion 
			{
                effectiveness = 2.5;
                reopeningChance = 1;
            };

            class Avulsion: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0.7;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion 
			{
                effectiveness = 2;
            };
            class AvulsionMedium: Avulsion 
			{
                effectiveness = 1.4;
            };
            class AvulsionLarge: Avulsion 
			{
                effectiveness = 1;
            };

            class Contusion: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush 
			{
                effectiveness = 2;
                reopeningChance = 0.6;
            };
            class CrushMedium: Crush 
			{
                effectiveness = 1.7;
                reopeningChance = 0.7;
            };
            class CrushLarge: Crush 
			{
                effectiveness = 1.6;
                reopeningChance = 0.8;
            };

            class Cut: Abrasion 
			{
                effectiveness = 5;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut 
			{
                effectiveness = 5;
                reopeningChance = 0.6;
            };
            class CutMedium: Cut 
			{
                effectiveness = 3.5;
                reopeningChance = 0.7;
            };
            class CutLarge: Cut 
			{
                effectiveness = 2;
                reopeningChance = 0.8;
            };

            class Laceration: Abrasion 
			{
                effectiveness = 2;
                reopeningChance = 0.65;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration 
			{
                effectiveness = 2;
                reopeningChance = 0.65;
            };
            class LacerationMedium: Laceration 
			{
                effectiveness = 1.5;
                reopeningChance = 0.8;
            };
            class LacerationLarge: Laceration 
			{
                effectiveness = 1;
                reopeningChance = 0.9;
            };

            class VelocityWound: Abrasion 
			{
                effectiveness = 2.2;
                reopeningChance = 1;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 2000;
            };
            class VelocityWoundMinor: VelocityWound 
			{
                effectiveness = 2.2;
            };
            class VelocityWoundMedium: VelocityWound 
			{
                effectiveness = 1.75;
            };
            class VelocityWoundLarge: VelocityWound 
			{
                effectiveness = 1.5;
            };

            class PunctureWound: Abrasion 
			{
                effectiveness = 2.5;
                reopeningChance = 1;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class PunctureWoundMinor: PunctureWound 
			{
                effectiveness = 2.5;
            };
            class PunctureWoundMedium: PunctureWound 
			{
                effectiveness = 2;
            };
            class PunctureWoundLarge: PunctureWound 
			{
                effectiveness = 1.5;
            };
        };
        class BGR_Biofoam: BGR_Medigel 
		{
            class Abrasion { effectiveness = 8; reopeningChance = 0.6; reopeningMinDelay = 800; reopeningMaxDelay = 1500; };
            class AbrasionMinor: Abrasion { effectiveness = 8; };
            class AbrasionMedium: Abrasion { effectiveness = 6; reopeningChance = 0.9; };
            class AbrasionLarge: Abrasion { effectiveness = 5; reopeningChance = 1; };

            class Avulsion: Abrasion { effectiveness = 4; reopeningChance = 0.7; reopeningMinDelay = 1000; reopeningMaxDelay = 1600; };
            class AvulsionMinor: Avulsion { effectiveness = 4; };
            class AvulsionMedium: Avulsion { effectiveness = 2.8; };
            class AvulsionLarge: Avulsion { effectiveness = 2; };

            class Contusion: Abrasion { effectiveness = 4; reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0; };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion { effectiveness = 4; reopeningChance = 0.5; reopeningMinDelay = 600; reopeningMaxDelay = 1000; };
            class CrushMinor: Crush { effectiveness = 4; reopeningChance = 0.6; };
            class CrushMedium: Crush { effectiveness = 3.4; reopeningChance = 0.7; };
            class CrushLarge: Crush { effectiveness = 3.2; reopeningChance = 0.8; };

            class Cut: Abrasion { effectiveness = 10; reopeningChance = 0.4; reopeningMinDelay = 700; reopeningMaxDelay = 1000; };
            class CutMinor: Cut { effectiveness = 10; reopeningChance = 0.6; };
            class CutMedium: Cut { effectiveness = 7; reopeningChance = 0.7; };
            class CutLarge: Cut { effectiveness = 4; reopeningChance = 0.8; };

            class Laceration: Abrasion { effectiveness = 4; reopeningChance = 0.65; reopeningMinDelay = 500; reopeningMaxDelay = 2000; };
            class LacerationMinor: Laceration { effectiveness = 4; reopeningChance = 0.65; };
            class LacerationMedium: Laceration { effectiveness = 3; reopeningChance = 0.8; };
            class LacerationLarge: Laceration { effectiveness = 2; reopeningChance = 0.9; };

            class VelocityWound: Abrasion { effectiveness = 4.4; reopeningChance = 1; reopeningMinDelay = 800; reopeningMaxDelay = 2000; };
            class VelocityWoundMinor: VelocityWound { effectiveness = 4.4; };
            class VelocityWoundMedium: VelocityWound { effectiveness = 3.5; };
            class VelocityWoundLarge: VelocityWound { effectiveness = 3; };

            class PunctureWound: Abrasion { effectiveness = 5; reopeningChance = 1; reopeningMinDelay = 1000; reopeningMaxDelay = 3000; };
            class PunctureWoundMinor: PunctureWound { effectiveness = 5; };
            class PunctureWoundMedium: PunctureWound { effectiveness = 4; };
            class PunctureWoundLarge: PunctureWound { effectiveness = 3; };
		};
    };
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
	class BGR_Medigel: FieldDressing
	{
		displayName="Medigel";
        displayNameProgress = "Rubbing gel into wound";
		items[]=
		{
			"BGR_Medigel_Weap",
		};
		treatmentTime = 8;
	};
	class BGR_Biofoam: BGR_Medigel
	{
		displayName="Biofoam";
        displayNameProgress = "Spraying foam into wound";
		medicRequired = 1;
		consumeItem = 0;
		items[]=
		{
			"BGR_Biofoam_Weap",
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
	class BGR_Medigel_Weap: ACE_fieldDressing
	{
		scope=2;
		author="Ithias";
		displayName="[BGR] Medigel";
		class ItemInfo: CBA_MiscItem_ItemInfo 
		{
			mass = 0.3;
        };
	};
	class BGR_Biofoam_Weap: BGR_Medigel_Weap
	{
		scope=2;
		author="Ithias";
		displayName="[BGR] Biofoam";
		class ItemInfo: CBA_MiscItem_ItemInfo 
		{
			mass = 15;
        };
	};
};