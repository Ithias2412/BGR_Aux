class CfgPatches 
{
	class BGR_Weapons_M392
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_M392",
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
	class TCP_srifle_M392;
	class BGR_M392 : TCP_srifle_M392
	{
		cursor = "TCP_srifle_M392";
		cursoraim = "CursorAim";
		author = "Ithias";
		displayName = "[BGR] M392 DMR 7.62 mm (MRK)";
		recoil = "recoil_spar_dmr";
		reloadAction = "GestureReloadARX";
		picture = "\TCP\Weapons\LongRangeRifles\M392\data\ui\icon_srifle_M392_X_ca.paa";
		baseWeapon = "BGR_M392";
		magazines[] = 
		{
			"BGR_15Rnd_762x51_Mag_BTHP",
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
		};
		class FullAuto: Mode_SemiAuto
		{
			reloadTime=0.4;
			dispersion=0.00035;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
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
				soundSetShot[] = {"TCP_M392_Shot_SoundSet","TCP_M392_tail_SoundSet","TCP_M392_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.4;
			dispersion=0.00035;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
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
				soundSetShot[] = {"TCP_M392_Shot_SoundSet","TCP_M392_tail_SoundSet","TCP_M392_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			mass = 77;
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_optic_EVOSD",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_muzzle_flash_762_01",
					"TCP_muzzle_snds_762_01",
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
				item = "TCP_muzzle_flash_762_01";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "TCP_optic_EVOSD";
				slot = "CowsSlot";
			};
		};
	};
};