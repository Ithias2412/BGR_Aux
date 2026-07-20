class CfgAmmo 
{
	class BulletBase;
	class TCP_B_762x51_Ball;
	class BGR_B_762x51_Ball: TCP_B_762x51_Ball
	{
		caliber = 1;
		hit = 10;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
	class BGR_B_762x51_Ball_Suppression: TCP_B_762x51_Ball
	{
		caliber = 1;
		hit = 10;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
	};
	class TCP_B_95x40_Ball;
	class BGR_B_95x40_Ball: TCP_B_95x40_Ball
	{
		caliber = 1;
		hit = 15;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
	class TCP_B_762x51_BTHP;
	class BGR_B_762x51_BTHP: TCP_B_762x51_BTHP
	{
		caliber = 3;
		hit = 30;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
	class TCP_B_5x23_Ball;
	class BGR_B_5x23_Ball: TCP_B_5x23_Ball
	{
		caliber = 1;
		hit = 10;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
	class TCP_B_12Gauge_Pellets_Submunition;
	class BGR_B_12Gauge_Pellets_Submunition: TCP_B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo = "BGR_B_12Gauge_Pellets_Submunition_Deploy";
		submunitionConeAngle = 0.25;
		submunitionConeType[] = {"random",12};
		//triggerTime = 1e-09;
	};
	class TCP_B_12Gauge_Pellets_Submunition_Deploy;
	class BGR_B_12Gauge_Pellets_Submunition_Deploy: TCP_B_12Gauge_Pellets_Submunition_Deploy
	{
		hit = 10;
		caliber = 1;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
	class TCP_B_127x99_Ball;
	class BGR_B_127x99_Ball: TCP_B_127x99_Ball
	{
		caliber = 3;
		hit = 60;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
	class TCP_B_65x48_Ball;
	class BGR_B_65x48_Ball: TCP_B_65x48_Ball
	{
		caliber = 3;
		hit = 20;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
	class TCP_M_102mm_HEAT;
	class BGR_M_102mm_HEAT: TCP_M_102mm_HEAT
	{
		hit = 125; // was 95
	};
};