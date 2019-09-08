//#include<iostream>
//#define MAX 1000000
//using namespace std;
//
//void NhapMang(int *a, int n);
//void KiemTraMangUocBoi(int *a, int n);
//void XuatNghiem(int c);
//int main()
//{
//	/*int  *a;
//	int n;
//	do
//	{
//		cout << "Nhap n: ";
//		cin >> n;
//		if (n < 0 || n>1000000)
//		{
//			cout << "Nhap lai n: ";
//			cin >> n;
//		}
//	} while (n < 0 || n>1000000);
//	a = new int[n];
//	NhapMang(a, n);
//
//	KiemTraMangUocBoi(a, n);*/
//
//	int c;
//	cout << "Nhap c: ";
//	cin >> c;
//	XuatNghiem(c);
//	//delete[]a;
//	system("pause");
//	return 0;
//}
//// 
//void NhapMang(int *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		do
//		{
//			cout << "Nhap a[" << i << "]= ";
//			cin >> a[i];
//			if (a[i] < 0 || a[i] >  1000000000 )
//			{
//				cout << "Nhap lai a[" << i << "] ";
//				cin >> a[i];
//			}
//		} while (a[i]<0 || a[i] >  1000000000);
//		
//	}
//}
//
//void KiemTraMangUocBoi(int *a, int n)
//{
//	int Check = -1;
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i]%a[i-1] != 0 && a[i-1] % a[i] != 0)
//		{
//			Check = a[i];
//			break;
//		}
//	}
//	cout << Check << endl;
//}
//
//void XuatNghiem(int c)
//{
//	int j;
//	for (int i= 1 ; i < 10; i++)
//	{
//		if(i!=0)
//		cout << (1.0 / c) - (1.0 / i) << ";" << i<<endl;
//	}
//}
