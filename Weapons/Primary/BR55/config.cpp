class CfgPatches 
{
	class BGR_Weapons_BR55
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_BR55",
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
	class TCP_arifle_BR55;
	class BGR_BR55 : TCP_arifle_BR55
	{
		cursor = "TCP_arifle_BR55";
		cursoraim = "CursorAim";
		author = "Ithias";
		displayName = "[BGR] BR55 SR 9.5 mm (RFL)";
		recoil = "TCP_recoil_BR55";
		reloadAction = "GestureReloadARX";
		picture = "\TCP\Weapons_Ins\Rifles\BR55\data\ui\icon_arifle_BR55_X_ca.paa";
		baseWeapon = "BGR_BR55";
		magazines[] = 
		{
			"BGR_36Rnd_95x40_Mag",
		};
		magazineWell[] = 
		{
			
		};
		modes[] = 
		{
			"Burst",
			"Burst_Close_Optics",
			//"FullAuto",
			//"FullAuto_Close_Optics",
			"Single",
			"Single_Close_Optics",
			"Single_Medium_Optics",
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.0666667;
			dispersion=0.00087;
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
				soundSetShot[] = {"TCP_BR55_Shot_SoundSet","TCP_BR55_tail_SoundSet","TCP_BR55_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.0666667;
			dispersion=0.00087;
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
				soundSetShot[] = {"TCP_BR55_Shot_SoundSet","TCP_BR55_tail_SoundSet","TCP_BR55_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
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
					"TCP_optic_M27RCO",
					"TCP_optic_M43RCO",
					"TCP_optic_M43RCO_CRS",
					"TCP_optic_M43RCO_CRS_CUP",
					"TCP_optic_M43RCO_CUP",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_muzzle_flash_95_02",
					"TCP_muzzle_snds_95_02",
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
				item = "TCP_muzzle_flash_95_02";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "TCP_optic_M27RCO";
				slot = "CowsSlot";
			};
		};
	};
};