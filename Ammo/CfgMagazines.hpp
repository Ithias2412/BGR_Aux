class CfgMagazines 
{
	class TCP_32Rnd_762x51_Mag;
	class BGR_32Rnd_762x51_Mag : TCP_32Rnd_762x51_Mag
	{
		ammo = "BGR_B_762x51_Ball";
	};
	class TCP_36Rnd_95x40_Mag;
	class BGR_36Rnd_95x40_Mag : TCP_36Rnd_95x40_Mag
	{
		ammo = "BGR_B_95x40_Ball";
	};
	class TCP_15Rnd_762x51_Mag_BTHP;
	class BGR_15Rnd_762x51_Mag_BTHP : TCP_15Rnd_762x51_Mag_BTHP
	{
		ammo = "BGR_B_762x51_BTHP";
	};
	class TCP_60Rnd_5x23_Mag;
	class BGR_60Rnd_5x23_Mag : TCP_60Rnd_5x23_Mag
	{
		ammo = "BGR_B_5x23_Ball";
	};
	class TCP_6Rnd_Internal_Mag;
	class BGR_10Rnd_Internal_Mag: TCP_6Rnd_Internal_Mag
	{
		//ammo = "TCP_B_12Gauge_Slug";
		ammo = "BGR_B_12Gauge_Pellets_Submunition";
		count = 10;
	};
	class TCP_1Rnd_12Gauge_Shell_Pellets;
	class BGR_1Rnd_12Gauge_Shell_Pellets: TCP_1Rnd_12Gauge_Shell_Pellets
	{
		ammo = "BGR_B_12Gauge_Pellets_Submunition";
	};
};