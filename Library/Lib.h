#pragma once

#include<iostream>
using namespace std;
namespace Truong
{

	void SapXepMangTang(int *a, int n);
	void SapXepMangGiam(int *a, int n);
	int KiemTraSoNguyenTo(int x);
	int KiemTraSoChinhPhuong(int x);
	int KiemTraSoHoanThien(int x);
	int DemSoPhanTuCuaMang(int *a, int n);
	int DemSoLuongChuSo(int x);
	void NhapMaTran(int **a, int m, int n);
	void XuatMaTran(int **a, int m, int n);
	int TimMaxDong(int **a, int m, int n, int d);
	int TimMaxCot(int **a, int m, int n, int c);
	int TinhTongDong(int **a, int n, int dong);
	int TinhTongCot(int **a, int n, int cot);
	int DemPhanTuChan(int **a, int m, int n);
}