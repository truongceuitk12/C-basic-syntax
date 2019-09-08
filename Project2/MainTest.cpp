//#include<iostream>
//#include"Header.h"
//using namespace std;
//struct PhanSo
//{
//	int TuSo;
//	int MauSo;
//};
//void NhapPhanSo(PhanSo &a);
//void XuatPhanSo(PhanSo a);
//int TimUocChungMax(int a, int b);
//PhanSo RutGonPhanSo506(PhanSo &p);
//
//int main()
//{
//	char str1[6] = {'H','e','l','l','o'};
//	char str2[6] = {'H','e','l','l','o'};
//	cout << "str1: " << &str1 << endl;
//	cout << "str2: " << &str2 << endl;
//	if (strcmp(str1,str2)==1)
//		cout << "Equal" << endl;
//	else
//		cout << "Unequal" << endl;
//	system("pause");
//	return 0;
//}
//void NhapPhanSo(PhanSo & a)
//{
//	cout << "Nhap tu: ";
//	cin >> a.TuSo;
//	do
//	{
//		cout << "Nhap mau: ";
//		cin >> a.MauSo;
//		if (a.MauSo == 0)
//		{
//			cout << "Nhap mau: ";
//			cin >> a.MauSo;
//		}
//
//	} while (a.MauSo == 0);
//}
//
//void XuatPhanSo(PhanSo a)
//{
//	cout << a.TuSo << "/" << a.MauSo << endl;
//}
//
//int TimUocChungMax(int a, int b)
//{
//	if (a == 0 || b == 0)
//		return a + b;
//	a = abs(a);
//	b = abs(b);
//	while (a != b)
//	{
//		if (a > b)
//			a = a - b;
//		else if (b > a)
//			b = b - a;
//	}
//	return a;
//}
//
//PhanSo RutGonPhanSo506(PhanSo & p)
//{
//	int a;
//	a = TimUocChungMax(p.MauSo, p.TuSo);
//	if (a != 0)
//	{
//		p.MauSo /= a;
//		p.TuSo /= a;
//	}
//	return p;
//}
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 1) return 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";

		for (int j = 1; j <= i; j++)
			cout << j;

		for (int j = i - 1; j >= 1; j--)
			cout << j;

		for (int j = 1; j <= n - i; j++)
			cout << " ";

		cout << endl;
	}
}

