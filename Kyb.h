#pragma once
#include <vector>
using namespace std;
class Kyb;

class Kyb
{
public:
	double dx;               // �������� ������ ������
	double dy;               // �������� ������� ������
	double dz;               // �������� ������ ������
	double x;                // ���������� ������ ������
	double y;                // ���������� ������ ������
	double z;                // ���������� ������ ������
	double ro;
	double p;
	double u;
	double v;
	double w;
	double Bx;
	double By;
	double Bz;
	double Q;
	double jx;
	double jy;
	double jz;
	bool j_;
	vector <Kyb*> sosed;
	int number;
	static int move_number;
	bool drob;               // ������� ��������� ���������� ��� ������������� � ������ �������� 


	Kyb(double x, double y, double z);      /// ����������� ������

private:
	void initialization(double, double, double, int);
};

