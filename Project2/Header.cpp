#include "Header.h"

void NhapDaThucX(DaThuc & a)
{
	cout << "Nhap bac cua da thuc: ";
	cin >> a.Bac;
	a.HeSo = new int[a.Bac +1 ];
	for (int i = 0; i <= a.Bac; i++)
	{
		cout << "Nhap he so cho X^" << i << ": ";
		cin >> a.HeSo[i];
	}
	cout << endl;
	
}

void XuatDaThucX(DaThuc a)
{
	for (int i = 0; i < a.Bac + 1; i++)
	{
		if (i == 0)
		{
			if (a.HeSo[i] > 0)
				cout << a.HeSo[i];
			else if (a.HeSo[i] < 0)
				cout << " - " << -a.HeSo[i] ;
		}
		else if (i == 1)
		{
			if (a.HeSo[i] > 0)
				cout << " + " << a.HeSo[i] << "X";
			else if (a.HeSo[i] < 0)
				cout << " - " << -a.HeSo[i] << "X";
		}
		else if (i != 0)
		{
			if (a.HeSo[i] > 0)
				cout << " + " << a.HeSo[i] << "X^" << i;
			else if (a.HeSo[i] < 0)
				cout << " - " << -a.HeSo[i] << "X^" << i;
			else
			{
			}
		}
	}
	cout << endl;
}
