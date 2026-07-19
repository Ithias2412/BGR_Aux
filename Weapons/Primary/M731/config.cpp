class CfgPatches 
{
	class BGR_Weapons_M731
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_M731",
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
	class TCP_LMG_M731;
	class BGR_M731 : TCP_LMG_M731
	{
		cursor = "TCP_LMG_M731";
		cursoraim = "CursorAim";
		author = "Ithias";
		displayName = "[BGR] M731 LMG 7.62 mm (AR)";
		recoil = "TCP_recoil_M731";
		reloadAction = "GestureReloadARX";
		picture = "\TCP\Weapons\Machineguns\M731\data\ui\icon_lmg_M731_X_ca.paa";
		baseWeapon = "BGR_M731";
		magazines[] = 
		{
			"BGR_100Rnd_762x51_Mag",
			"BGR_200Rnd_762x51_Mag",
		};
		magazineWell[] = 
		{
			
		};
		modes[] = 
		{
			"FullAuto",
			"FullAuto_Medium",
			"FullAuto_Close_Optics",
			"FullAuto_Far_Optics",
			"FullAutoFast",
			"FullAuto_Close",
			"FullAuto_Short"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.133333;
			dispersion=0.00087;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
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
				soundSetShot[] = {"TCP_M731_Shot_SoundSet","TCP_M731_tail_SoundSet","TCP_M731_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_LMGSup_Shot_SoundSet","TCP_LMGSup_tail_SoundSet","TCP_LMGSup_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class FullAutoFast: FullAuto
		{
			textureType = "fastAuto";
			reloadTime = 0.0666667;
			dispersion=0.00087;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
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
				soundSetShot[] = {"TCP_M731_Shot_SoundSet","TCP_M731_tail_SoundSet","TCP_M731_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_LMGSup_Shot_SoundSet","TCP_LMGSup_tail_SoundSet","TCP_LMGSup_InteriorTail_SoundSet"};
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
					"TCP_optic_EVOSM",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_muzzle_brake_762_02",
					"TCP_muzzle_snds_95_01",
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_acc_carryHandle_M731",
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_bipod_01",
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "TCP_acc_carryHandle_M731";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "TCP_muzzle_brake_762_02";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "TCP_optic_EVOSM";
				slot = "CowsSlot";
			};
		};
	};
};