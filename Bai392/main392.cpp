#include<iostream>
#include"../Library/Lib.h"
#include"Header392.h"
using namespace std;
using namespace Truong;

int  main()
{
	int m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	int **a = new int*[m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}
	NhapMaTran(a, m, n);
	
	menu392(a, m, n);

	delete[]a;
	system("pause");
	return 0;
}