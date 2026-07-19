class CfgPatches 
{
	class BGR_Weapons_MA37
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_VK78",
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
	class TCP_srifle_VK78_Gray;
	class BGR_VK78 : TCP_srifle_VK78_Gray
	{
		author = "Ithias";
		displayName = "[BGR] VK78 6.5 mm (MRK)";
		baseWeapon = "BGR_VK78";
		magazines[] = 
		{
			"BGR_20Rnd_65x48_Mag"
		};
		magazineWell[] = 
		{
			
		};
		modes[] = 
		{
			"FullAuto",
			"FullAuto_Close_Optics",
			"Single",
			"Single_Close_Optics",
			"Single_Medium_Optics",
			"Single_Far_Optics"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.15;
			dispersion = 0.000581776;
			maxRange = 30;
			maxRangeProbab = 0.05;
			midRange = 15;
			midRangeProbab = 0.7;
			minRange = 0;
			minRangeProbab = 0.9;
			soundContinuous = 0;
			soundBurst = 0;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_VK78_Shot_SoundSet","TCP_VK78_tail_SoundSet","TCP_VK78_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_VKSup_Shot_SoundSet","TCP_VKSup_tail_SoundSet","TCP_VKSup_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.15;
			dispersion = 0.000581776;
			maxRange = 450;
			maxRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.2;
			soundContinuous = 0;
			soundBurst = 0;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_VK78_Shot_SoundSet","TCP_VK78_tail_SoundSet","TCP_VK78_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_VKSup_Shot_SoundSet","TCP_VKSup_tail_SoundSet","TCP_VKSup_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			mass = 92;
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_optic_M11VERO_Blue",
					"TCP_optic_M11VERO",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_muzzle_brake_65_01",
					"TCP_muzzle_snds_95_01",
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_rail_ammoCounter_VK78",
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"TCP_bipod_Grip_VK78_Gray",
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "TCP_rail_ammoCounter_VK78";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "TCP_muzzle_brake_65_01";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "TCP_optic_M11VERO_Blue";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "TCP_bipod_Grip_VK78_Gray";
				slot = "UnderBarrelSlot";
			};
		};
	};
};