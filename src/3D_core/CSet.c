#include "CSet.h"
#include "Math.h"


double rxx=1, rxy=0, rxz=0;	// View에서 사용하는 matrix
double ryx=0, ryy=1, ryz=0;
double rzx=0, rzy=0, rzz=1;
double rxo=0, ryo=0, rzo=0;


double rxyz[4][3] =
{
	1,0,0,
	0,1,0,
	0,0,1,
	0,0,0
};

void Set_rxrot(double theta)
{
	double ct,st;
	double Nyx,Nyy,Nyz,Nyo;
	double Nzx,Nzy,Nzz,Nzo;

	theta *= (PI / 180);
	ct = cos(theta);
	st = sin(theta);
	
	Nyx = (ryx * ct + rzx * st);
	Nyy = (ryy * ct + rzy * st);
	Nyz = (ryz * ct + rzz * st);
	Nyo = (ryo * ct + rzo * st);

	Nzx = (rzx * ct - ryx * st);
	Nzy = (rzy * ct - ryy * st);
	Nzz = (rzz * ct - ryz * st);
	Nzo = (rzo * ct - ryo * st);

	ryo = Nyo; 	ryx = Nyx;  ryy = Nyy;	ryz = Nyz;
	rzo = Nzo;  rzx = Nzx;  rzy = Nzy;  rzz = Nzz;

}

void Set_ryrot(double theta)
{
	double ct,st;
	double Nxx,Nxy,Nxz,Nxo;
	double Nzx,Nzy,Nzz,Nzo;

	theta *= (PI / 180);
	ct = cos(theta);
	st = sin(theta);

	Nxx = (rxx * ct + rzx * st);
	Nxy = (rxy * ct + rzy * st);
	Nxz = (rxz * ct + rzz * st);
	Nxo = (rxo * ct + rzo * st);
	Nzx = (rzx * ct - rxx * st);
	Nzy = (rzy * ct - rxy * st);
	Nzz = (rzz * ct - rxz * st);
	Nzo = (rzo * ct - rxo * st);

	rxo = Nxo;	rxx = Nxx;	rxy = Nxy;	rxz = Nxz;
	rzo = Nzo;	rzx = Nzx;	rzy = Nzy;	rzz = Nzz;

}

void Set_rzrot(double theta)
{
	double ct,st;
	double Nyx,Nyy,Nyz,Nyo;
	double Nxx,Nxy,Nxz,Nxo;

	theta *= (PI / 180);
	ct = cos(theta);
	st = sin(theta);

	Nyx = (ryx * ct + rxx * st);
	Nyy = (ryy * ct + rxy * st);
	Nyz = (ryz * ct + rxz * st);
	Nyo = (ryo * ct + rxo * st);
	Nxx = (rxx * ct - ryx * st);
	Nxy = (rxy * ct - ryy * st);
	Nxz = (rxz * ct - ryz * st);
	Nxo = (rxo * ct - ryo * st);

	ryo = Nyo;
	ryx = Nyx;
	ryy = Nyy;
	ryz = Nyz;
	rxo = Nxo;
	rxx = Nxx;
	rxy = Nxy;
	rxz = Nxz;
}