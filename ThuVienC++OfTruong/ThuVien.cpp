#include "ThuVien.h"
#include<iostream>
using namespace std;


ThuVien::ThuVien()
{
}

ThuVien::~ThuVien()
{
}

void ThuVien::SapXepMangTang(int * a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}

void ThuVien::SapXepMangGiam(int * a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
}

int ThuVien::KiemTraSoNguyenTo(int x)
{
	if (x < 2)
		return 0;
	else
	{
		for (int i = 2; i <= x / 2; i++)
			if (x%i == 0)
				return 0;
	}
	return 1;
}

int ThuVien::KiemTraSoChinhPhuong(int x)
{
	int Check;
	Check = sqrt(x);
	if (Check*Check == x)
		return 1;
	return 0;
}

int ThuVien::KiemTraSoHoanThien(int x)
{
	int tong = 0;
	for (int i = 1; i < x; i++)
	{
		if (x%i == 0)
			tong += i;
	}
	if (tong == x)
		return 1;
	return 0;
}
