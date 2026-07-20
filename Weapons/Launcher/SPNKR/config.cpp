class CfgPatches 
{
	class BGR_Weapons_SPNKR
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_SPNKR",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};

//#include "xtdGear.hpp"
class WeaponSlotsInfo;
class CowsSlot;
class asdg_FrontSideRail;
class UnderBarrelSlot;
class MuzzleSlot;
class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;

class cfgWeapons 
{
	class TCP_launch_M41;
	class BGR_SPNKR : TCP_launch_M41
	{
		author = "Ithias";
		displayName = "[BGR] SPNKR SR 9.5 mm (AT)";
		baseWeapon = "BGR_SPNKR";
		magazines[] = 
		{
			"BGR_2Rnd_102mm_Mag_HEAT",
		};
		magazineWell[] = {};
	};
};