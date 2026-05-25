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
            "BGR_MA37",
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
	class TCP_arifle_MA37;
	class BGR_MA37 : TCP_arifle_MA37
	{
		cursor = "TCP_arifle_MA37";
		cursoraim = "CursorAim";
		author = "Ithias";
		displayName = "[BGR] MA37 ICWS 7.62 mm (RFL)";
		recoil = "TCP_recoil_MA37";
		reloadAction = "GestureReloadARX";
		picture = "\TCP\Weapons\Rifles\MA37\data\ui\icon_arifle_MA37_X_ca.paa";
		baseWeapon = "BGR_MA37";
		magazines[] = 
		{
			"BGR_32Rnd_762x51_Mag",
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
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
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
				soundSetShot[] = {"TCP_MA37_Shot_SoundSet","TCP_MA37_tail_SoundSet","TCP_MA37_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
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
				soundSetShot[] = {"TCP_MA37_Shot_SoundSet","TCP_MA37_tail_SoundSet","TCP_MA37_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
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
					"TCP_optic_EVOSJ",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_muzzle_brake_762_01",
					"TCP_muzzle_snds_762_01",
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_acc_pointer_lam_MA37",
					"TCP_acc_pointer_lam_MA37_IR",
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
			class LinkedItemsAcc
			{
				item = "TCP_acc_pointer_lam_MA37";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "TCP_muzzle_brake_762_01";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "TCP_optic_EVOSJ";
				slot = "CowsSlot";
			};
		};
	};
};