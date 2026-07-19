class CfgPatches 
{
	class BGR_Weapons_SRS99
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_SRS99",
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
	class TCP_srifle_SRS99;
	class BGR_SRS99 : TCP_srifle_SRS99
	{
		author = "Ithias";
		displayName = "[BGR] SRS99-AM 12.7 mm (MRK)";
		baseWeapon = "BGR_SRS99";
		magazines[] = 
		{
			"BGR_4Rnd_127x99_Mag"
		};
		magazineWell[] = 
		{
			
		};
		modes[] = 
		{
			"Single",
			"Single_Close_Optics",
			"Single_Medium_Optics",
			"Single_Far_Optics"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.6;
			dispersion = 0.000232711;
			maxRange = 450;
			maxRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			minRange = 2;
			minRangeProbab = 0.5;
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
				soundSetShot[] = {"TCP_SRS99_Shot_SoundSet","TCP_SRS99_tail_SoundSet","TCP_SRS99_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_SRSSup_Shot_SoundSet","TCP_SRSSup_tail_SoundSet","TCP_SRSSup_InteriorTail_SoundSet"};
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
					"TCP_optic_Oracle_N",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_muzzle_brake_127_01",
					"TCP_muzzle_snds_523_01",
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "TCP_muzzle_brake_127_01";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "TCP_optic_Oracle_N";
				slot = "CowsSlot";
			};
		};
	};
};