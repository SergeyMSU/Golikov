#pragma once
#include <vector>
#include "Kyb.h"
#include "Cell.h"
using namespace std;
struct Cell;

class Konstruktor
{
public:
	vector <Kyb*> all_Kyb;
	int N;
	int M;
	int K;
	double x_min;
	double x_max;
	double y_min;
	double y_max;
	double z_min;
	double z_max;
	Kyb* G1;
	Kyb* G2;
	Kyb* G3;
	Kyb* G4;
	Kyb* G5;
	Kyb* G6;
	vector <Kyb*> Sosed_1;  // ��� ������� ����� �� ����� ��������� ����� - ��� ������ �������� ������
	vector <Kyb*> Sosed_2;
	vector <Kyb*> Sosed_3;
	vector <Kyb*> Sosed_4;
	vector <Kyb*> Sosed_5;
	vector <Kyb*> Sosed_6;


	Konstruktor(int, int, int, double, double, double, double, double, double);      /// ����������� ������
	Konstruktor(string name, bool binar = false);
	virtual ~Konstruktor();

	void print_konectiviti(void);
	void print_konectiviti_short(void);
	void print_konectiviti2(void);
	void print_my(int num);
	void print_my(int num, int num2);

	void count_j(void); // ������ ����� (���������� �������� � ����� �������-�����


	int get_size_conektiv(void);

	void save_Setka(string name = "null");
	void binary_save_Setka(string name = "null");
	void download_Setka(string name);
	void binary_download_Setka(string name);

	void generate_Cuda_massiv(Cell* C, int* s);
	// ��������� ������� ������� �� ����� ��� ������� �� Cuda

	void read_Cuda_massiv(double* ro, double* p, double* u, double* v, double* w, double* bx, double* by, double* bz, double* QQ);
	// ��������� ��, ��� ��������� Cuda

	void print_Tecplot_x(double x, double T, string nam = "g");
	void print_Tecplot_y(double y, double T, string nam = "g");
	void print_Tecplot_z(double z, double T, string nam = "g");
	void print_some_point();
	void print_3D(string nam);

	void print_Tecplot_y_20(double y, double T, string nam = "g", const double& Time = 0.0);
	void print_Tecplot_z_20(double z, double T, string nam = "g", const double& Time = 0.0);
	void print_Tecplot_x_20(double x, double T, string nam = "g", const double& Time = 0.0);
	void print_Tecplot_z_j(double z, double T, string nam = "j");
	void print_Tecplot_y_j(double z, double T, string nam = "j");
	void print_3D_20(string nam = "j");

	void filling(void);
	void filling_mini(void);
	// ���������� ���������������� ���������� � �����

	void get_inner(void);

	void filling_G_D(void);


	// ������� ��� ����
	void droblenie(Kyb* A, int NN);
	void droblenie_fast(Kyb* A, int NN);
	void droblenie2_hand(Kyb* A);           // ����� ������� ������� ��������� �� 2 (�������, ������ ��� ������ ����������)
	
	void Drobim(double x1, double x2, double y1, double y2, double z1, double z2, int NN); // � ���������������
	void Drobim(double x0, double y0, double z0, double r1, double r2, int NN, bool ff);  // ����� �������
	void Drobim(double x1, double x2, double r, int NN);  // � �������� �� ��� x
	void Drobim_z(double z1, double z2, double r, int NN);  // � �������� �� ��� z
	void Drobim_x(double x1, double x2, double r, int NN);  // � �������� �� ��� z


	// ���� ������ ������������ �� ����
	void droblenie3(Kyb* A);
	void Delenie(double r1, double r2);
	void Delenie(double x1, double x2, double y1, double y2, double z1, double z2);
	void konect(double R);

	void Generate_sosed_for_TVD(int* s1, int* s2);

	void find_sosed(Kyb* A);

	void number(void);

	bool sosed_or_not(Kyb* A, Kyb* B);
	bool get_square(Kyb* A, Kyb* B);
	double polar_angle(double x, double y);
	void spherical_skorost(double x, double y, double z, double Vx, double Vy, double Vz, double& Vr, double& Vphi, double& Vtheta);
	void dekard_skorost(double x, double y, double z, double Vr, double Vphi, double Vtheta, double& Vx, double& Vy, double& Vz);



private:
	void initialization(int, int, int, double, double, double, double, double, double);
	void New_design(void);
	void konectiviti(void);
};

