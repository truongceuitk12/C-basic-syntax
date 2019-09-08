#pragma once
#include<iostream>
using namespace std;

class ThuVien
{
public:
	ThuVien();
	~ThuVien();
	static void SapXepMangTang(int *a, int n);
	static void SapXepMangGiam(int *a, int n);
	static int KiemTraSoNguyenTo(int x);
	static int KiemTraSoChinhPhuong(int x);
	static int KiemTraSoHoanThien(int x);

};

