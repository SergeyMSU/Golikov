#pragma once
#ifndef CELL_H
#define CELL_H
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <math.h>

#define M_inf  0.0// 3.0 // 0.25 // 0.7 // 0.4 // 0.8
#define M_infty  M_inf
#define phi_0  1.6 // 31.0 // 17.0 // 4.878 //1.627
#define alpha  45.0
#define M_alf  3.0 // 12.0
#define epsilon_ (1.0/M_alf)
#define step  70000
#define omega 0.0 //6 //1600
#define M_0  10.0

#define kk_ 196.0
#define betta 0.0 //4.2426
#define chi phi_0
#define rr_0  0.07

#define ddist 0.85  // 0.5
#define ddist2 0.0   // �� ������ ������� ������ � ����������� ��?

#define kurant  0.9

#define a_2 0.1307345665  // 0.102578  // 0.10263
#define Kn_  0.44 // 0.4326569808 // 0.4326569808 // 0.4326569808 // 6.0			
//#define Kn_  0.2	                                            // ����� ��������
//#define a_2 0.102578  // 0.10263
#define n_p_LISM_ (1.5) 
#define n_H_LISM_ (1.0)
#define sigma(x) (kv(1.0 - a_2 * log(x)))               // ���������������� ������� �����������

//#define Max_E  6.0
//#define M_A  12.87
//#define M_infty  1.97
//#define kappa_  5.3743
//#define rr_0  0.00208527 // 0.00329761
//#define mu 0.2837

#define ga (5.0/3.0)          // ���������� ��������
#define ggg (5.0/3.0)
#define kv(x) ( (x)*(x) )
#define kvv(x,y,z)  (kv(x) + kv(y) + kv(z))

//#define U8(ro, p, u, v, w, bx, by, bz)  ( (p) / (ggg - 1.0) + 0.5 * (ro) * kvv(u,v,w) + kvv(bx,by,bz))
#define U8(ro, p, u, v, w, bx, by, bz)  ( (p) / (ggg - 1.0) + 0.5 * (ro) * kvv(u,v,w) + kvv(bx,by,bz) / 25.13274122871834590768)
#define skk(u,v,w,bx,by,bz) ( (u)*(bx) + (v)*(by) + (w)*(bz) )
#define g1 (ga - 1.0)
#define gg1 (ga - 1.0)
#define g2 (ga + 1.0)
#define gg2 (ga + 1.0)
#define gp ((g2/ga)/2.0)
#define gm ((g1/ga)/2.0)
#define gga ga
#define Omega 0.0


#define eps 10e-10
#define eps8 10e-8
#define pi 3.14159265358979323846
#define PI 3.14159265358979323846
#define cpi4 12.56637061435917295384
#define cpi8 25.13274122871834590768
#define spi4 ( 3.544907701811032 )
#define epsb 1e-6
#define eps_p 1e-6
#define eps_d 1e-3


struct Cell // ����� ������
{
	double ro[2];
	double p[2];
	double u[2];
	double v[2];
	double w[2];
	double Bx[2];
	double By[2];
	double Bz[2];
	double dx;               // �������� ������ ������
	double dy;               // �������� ������� ������
	double dz;               // �������� ������ ������
	double x;                // ���������� ������ ������
	double y;                // ���������� ������ ������
	double z;                // ���������� ������ ������
	int l;
	int r;
};



#endif // APPROXIMATION_H