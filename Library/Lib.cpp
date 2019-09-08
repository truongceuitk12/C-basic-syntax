
#include "Lib.h"
// có định nghĩa ở đây mà?

namespace Truong
{

	void SapXepMangTang(int * a, int n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
					swap(a[i], a[j]);
			}
		}
	}

	void SapXepMangGiam(int * a, int n)
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

	int KiemTraSoNguyenTo(int x)
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

	int KiemTraSoChinhPhuong(int x)
	{
		int Check;
		Check = sqrt(x);
		if (Check*Check == x)
			return 1;
		return 0;
	}

	int KiemTraSoHoanThien(int x)
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

	int DemSoPhanTuCuaMang(int *a, int n)
	{
		SapXepMangTang(a, n);
		int Dem = n;
		for (int i = 0; i < n-1; i++)
		{
			if (a[i] == a[i + 1])
				Dem--;
		}
		return Dem;
	}

	int DemSoLuongChuSo(int x)
	{
		int Dem=0;
		x = abs(x);
		while (x > 0)
		{
			Dem++;
			x = x / 10;
		}
		return Dem;
	}

	void NhapMaTran(int ** a, int m, int n)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "Nhap a[" << i << "][" << j << "]= ";
				cin >> a[i][j];
			}
		}
	}

	void XuatMaTran(int ** a, int m, int n)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] < 0)
					cout << a[i][j] << "    ";
				else
					cout <<" "<< a[i][j] << "    ";
			}
			cout << "\n";
		}
	}
	int TimMaxDong(int ** a, int m, int n, int d)
	{
		int Max = a[d][0];
		for (int i = 0; i < n; i++)
		{
			if (a[d][i] > Max)
				Max = a[d][i];
		}
		return Max;
	}

	int TimMaxCot(int ** a, int m, int n, int c)
	{
		int Max = a[0][c];
		for (int i = 0; i < m; i++)
		{
			if (a[i][c] > Max)
				Max = a[i][c];
		}
		return Max;
	}
	int TinhTongDong(int ** a, int n, int dong)
	{
		int Tong = 0;
		for (int i = 0; i < n; i++)
		{
			Tong += a[dong][i];
		}
		return Tong;
	}
	int TinhTongCot(int ** a, int n, int cot)
	{
		int Tong = 0;
		for (int i = 0; i < n; i++)
		{
			Tong += a[i][cot];
		}
		return Tong;
	}
	int DemPhanTuChan(int ** a, int m, int n)
	{
		int Dem = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] % 2 == 0)
					Dem++;
			}
		}
		return Dem;
	}
}