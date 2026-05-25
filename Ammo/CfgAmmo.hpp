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
		hit = 7;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
	};
};