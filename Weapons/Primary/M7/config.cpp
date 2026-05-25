class CfgPatches 
{
	class BGR_Weapons_M7
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
	class TCP_SMG_M7;
	class BGR_M7 : TCP_SMG_M7
	{
		cursor = "TCP_SMG_M7";
		cursoraim = "CursorAim";
		author = "Ithias";
		displayName = "[BGR] M7 SMG 5 mm (RFL)";
		recoil = "recoil_smg_05";
		reloadAction = "GestureReloadARX";
		picture = "\TCP\Weapons\SMGs\M7\data\ui\icon_SMG_M7_X_ca.paa";
		baseWeapon = "BGR_M7";
		magazines[] = 
		{
			"BGR_60Rnd_5x23_Mag",
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
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.0666667;
			dispersion=0.00262;
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
				soundSetShot[] = {"TCP_M7_Shot_SoundSet","TCP_M7_tail_SoundSet","TCP_M7_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.0666667;
			dispersion=0.00262;
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
				soundSetShot[] = {"TCP_M7_Shot_SoundSet","TCP_M7_tail_SoundSet","TCP_M7_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
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
					"TCP_optic_M5BSLSV_Blue",
					"TCP_optic_M5BSLSV",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_muzzle_snds_523_01",
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_acc_pointer_lam_M7",
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
			class LinkedItemsOptic
			{
				item = "TCP_optic_M5BSLSV";
				slot = "CowsSlot";
			};
		};
	};
};