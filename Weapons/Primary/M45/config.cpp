class CfgPatches 
{
	class BGR_Weapons_M45
	{
		units[] = 
        {
			""
        };
		weapons[] = 
        {
            "BGR_M45",
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
	class Rifle_Base_F;
	class TCP_sgun_M45: Rifle_Base_F
	{
		class InternalMagazine: Rifle_Base_F
		{
			
		};
	};
	class BGR_M45 : TCP_sgun_M45
	{
		cursor = "TCP_sgun_M45";
		cursoraim = "CursorAim";
		author = "Ithias";
		displayName = "[BGR] M45 12G (RFL)";
		recoil = "recoil_huntershotgun_01";
		reloadAction = "GestureReloadDMR05";
		picture = "\TCP\Weapons\Shotguns\M45\data\ui\icon_srifle_M45_X_ca.paa";
		baseWeapon = "BGR_M45";
		magazines[] = 
		{
			"TCP_6Rnd_Internal_Mag",
			"BGR_10Rnd_Internal_Mag",
		};
		magazineWell[] = 
		{
			
		};
		modes[] = 
		{
			"Single",
			"Single_Close_Optics"
		};
		class InternalMagazine: InternalMagazine
		{
			magazines[] = 
			{
				"TCP_1Rnd_12Gauge_Shell_Pellets",
				"BGR_1Rnd_12Gauge_Shell_Pellets",
			};
			magazineWell[] = 
			{
				
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 1;
			dispersion = 0.00145444;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			soundContinuous = 0;
			soundBurst = 0;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_M45_Shot_SoundSet","TCP_M45_tail_SoundSet","TCP_M45_InteriorTail_SoundSet"};
				weaponSoundEffect = "DefaultRifle";
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"TCP_M45Sup_Shot_SoundSet","TCP_M45Sup_tail_SoundSet","TCP_M45Sup_InteriorTail_SoundSet"};
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
					"TCP_optic_M81ERO_Blue",
					"TCP_optic_M81ERO",
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
				compatibleItems[]=
				{
					"TCP_acc_flashlight_M45",
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"TCP_bipod_sideSaddle_M45_Mixed",
					"TCP_bipod_sideSaddle_M45_Pellets",
					"TCP_bipod_sideSaddle_M45_Slugs",
				};
			};
		};
	};
};