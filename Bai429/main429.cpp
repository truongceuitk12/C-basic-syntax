#include<iostream>
#include"Header429.h"
using namespace std;

int main()
{
	int n;
	cout << "Nhap kich thuoc ma tran vuong: " ;
	cin >> n;
	int **a = new int *[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}
	float **b = new float*[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = new float[n];
	}
	int Chon;
	cout << "1: Ma tran so nguyen: " << endl;
	cout << "#1: Ma tran so thuc: " << endl;
	cin >> Chon;
	switch (Chon)
	{
	case 1:
	{
		NhapMaTranNguyenVuong(a, n);
		break;
	}
	default:
		NhapMaTranThucVuong(b, n);
		break;
	}
	
	menu429(a, n, b);

	delete[]a;
	system("pause");
	return 0;
}