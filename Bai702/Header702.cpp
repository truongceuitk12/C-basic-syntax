#include "Header702.h"


void NhapMang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Menu702()
{
	int Select;
	cout << "000   702   703   704   705   706   707   708   709   710" << endl;
	cout << "700   000   000   000   000   000   000   718   719   720" << endl;
	cout << "721   722   723   724   725   726   727   728   729   730" << endl;
	cout << "731   732   733   734   735   736   737   738   739   740" << endl;
	cout << "741   742   743   744   745   746   747   748   749   750" << endl;
	cout << "751   752   753   754   755   756   757   758   759   760" << endl;


	cout << "0 return:" << endl;
	cout << "Enter the select: ";
	cin >> Select;
	switch (Select)
	{
	case 702:
	{
		int n;
		cout << "\nNhap n: ";
		cin >> n;
		cout << "The values of sum from 1 to n is: " << RecTinhTong702(n) << endl;
		break;
	}
	case 703:
	{
		int n;
		cout << "\nNhap n: ";
		cin >> n;
		cout << "The values of DQTinhGiaiThua is: " << DQTinhGiaiThua703(n) << endl;
		break;
	}
	case 704:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap a[" << i << "]: ";
			cin >> a[i];
		}
		int Res;
		Res = DQTongNguyen704(a, n);
		cout << "Res = " << Res << endl;
		break;
	}
	case 705:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap a[" << i << "]: ";
			cin >> a[i];
		}
		int Res = DQDemDuong705(a, n);
		cout<<"Res= "<< Res << endl;
		delete[]a;
		break;
	}
	case 707:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			cout << "Fib(" <<i<<")= "<< DQFibonaci707(i) << endl;
		}
		break;
	}
	case 710:
	{
		int x, n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Nhap x: ";
		cin >> x;
		float Res;
		Res = DQTong710(n, x);
		cout << "Res: " << Res << endl;
		break;
	}

	case 718:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap a[" << i << "]: ";
			cin >> a[i];
		}
		cout << "Xuat mang bang de quy: " << endl;
		DQXuatMang718(a, n);
		delete[]a;
		break;
	}
	case 719:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap a[" << i << "]: ";
			cin >> a[i];
		}
		cout << "Xuat mang bang de quy nguoc: " << endl;
		DQXuatMang719(a, n);
		delete[]a;
		break;
	}
	case 720:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap a[" << i << "]: ";
			cin >> a[i];
		}
		int Count = DQDemDuong720(a, n);
		cout << "The cout of positive number of  array: " << Count << endl;
		delete[]a;
		break;
	}
	case 721:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		int Dem = DQDemKhac721(a, n);
		cout << "So phan tu khac trong mang: " << Dem << endl;
		delete[]a;
		break;
	}
	case 722:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		int Dem = DQTinhTong722(a, n);
		cout << "Tong cac phan tu trong mang: " << Dem << endl;
		delete[]a;
		break;
	}
	case 723:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		int Dem = DQTinhTongDuong723(a, n);
		cout << "Tong cac phan tu duong trong mang: " << Dem << endl;
		delete[]a;
		break;
	}
	case 724:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		int Dem = DQTinhTong724(a, n);
		cout << "Tong cac phan tu thoa dk trong mang: " << Dem << endl;
		delete[]a;
		break;
	}
	case 725:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		int Check = DQKiemTraToanAm725(a, n);
		(Check==0)?cout << "Mang khong toan am: " << endl: cout << "Mang toan am: "  << endl;
		delete[]a;
		break;
	}
	case 726:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		int Max = DQTimMax726(a, n);
		cout << "Max of array is: " << Max << endl;
		delete[]a;
		break;
	}
	case 727:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		int Max = DQTimViTriMax727(a, n);
		cout << "Index of max element of array is: " << Max << endl;
		delete[]a;
		break;
	}
	case 728:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		cout << "Mang truoc khi sap xep DQ: " << endl;
		DQXuatMang718(a, n);
		DQSapXepTang728(a, n);
		cout << "Mang sau khi sap xep DQ: " << endl;
		DQXuatMang718(a, n);
		delete[]a;
		break;
	}
	case 729:
	{
		int *a, n;
		cout << "Nhap so luong n: ";
		cin >> n;
		a = new int[n];
		NhapMang(a, n);
		cout << "Mang truoc khi sap xep DQ: " << endl;
		DQXuatMang718(a, n);
		DQSapXep729(a, n);
		cout << "Mang sau khi sap xep cac phan tu chan DQ: " << endl;
		DQXuatMang718(a, n);
		delete[]a;
		break;
	}
	case 730:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1 + 2 + 3 + ... + " << n << " = "<< DQTong730(n) << endl;
		break;
	}
	case 731:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1^2 + 2^2 + 3^2 + ... + " << n <<"^"<< n <<" = " << DQTong731(n) << endl;
		break;
	}
	case 732:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1 + 1/2 + 1/3 + ... + " <<"1/" << n << " = " << DQTong732(n) << endl;
		break;
	}
	case 733:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1/2 + 1/4 + 1/6 + ... + " << "1/" << 2*n << " = " << DQTong733(n) << endl;
		break;
	}
	case 734:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1 + 1/3 + 1/5 + ... + " << "1/" << 2 * n + 1 << " = " << DQTong734(n) << endl;
		break;
	}
	case 735:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1/2 + 1/6 + 1/12 + ... + " << "1/" << n*(n+1) << " = " << DQTong735(n) << endl;
		break;
	}
	case 736:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1/2 + 2/3 + 3/4 + ... + " << n <<"/"<<  (n + 1) << " = " << DQTong736(n) << endl;
		break;
	}
	case 737:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1/2 + 2/3 + 3/4 + ... + " << n*2 + 1<<"/" << (n*2 + 2) << " = " << DQTong737(n) << endl;
		break;
	}
	case 738:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tich 1 * 2 * 3 * ...* " << n << " = " << DQTinh738(n) << endl;
		break;
	}
	case 739:
	{
		float x, n;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap n: ";
		cin >> n;
		cout << x<<"^" << n << " = " << DQTinhLuyThua739(x,  n) << endl;
		break;
	}
	case 740:
	{
		cout << "Nhap n: ";
		int n;
		cin >> n;
		cout << "Tong day 1 + 1*2 + 1*2*3 + ... + " <<"1*2*3*...*n"<< " = " << DQTong740(n) << endl;
		break;
	}
	case 741:
	{
		int x, n;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Tong x + x^2 +...+ x^n= " << DQTong741(x, n) << endl;
		break;
	}
	case 742:
	{
		int x, n;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Tong x^2+ x^4 +...+ x^n*2= " << DQTong742(x, n) << endl;
		break;
	}
	case 743:
	{
		int x, n;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Tong x+ x^3 +...+ x^n*2+1= " << DQTong743(x, n) << endl;
		break;
	}
	case 744:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "1 + 1/(1+2) + 1/(1+2+3) +...+ 1/(1+2+..+n)= " << DQTong744(n);
		break;
	}
	case 745:
	{
		int x, n;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap n: ";
		cin >> n;
		cout << "x + x^x/(2!) + x^3/(3!) +...+ x^n/(n!)= " << DQTong745(x,n);
		break;
	}
	case 746:
	{
		int x, n;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap n: ";
		cin >> n;
		cout << "1 + x^2/(2!) + x^4/(4!) +...+ x^2*n/(2*n!)= " << DQTong746(x, n);
		break;
	}
	case 747:
	{
		int n;
		cout << "Nhap so can tim uoc: ";
		cin >> n;
		cout << "Uoc le lon nhat: " << DQTimUoc747(n) << endl;
		break;
	}
	case 748:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Can bac n lan : " << DQCanBac748(n) << endl;
		break;
	}
	case 749:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Can bac n lan : " << DQCanBac749(n) << endl;
		break;
	}
	case 750:
	{
		int n,s=0;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Can bac n lan : " << DQCanBac750(n,s) << endl;
		break;
	}
	case 751:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Ket qua bai 751= " << DQPhanSo751(n) << endl;
		break;
	}
	case 752:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "So luong chu so: " << DQDemSoLuong752(n) << endl;
		break;
	}
	case 753:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Tong cac chu so: " << DQTongChuSo753(n) << endl;
		break;
	}
	case 754:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Tich cac chu so: " << DQTichChuSo754(n) << endl;
		break;
	}
	case 755:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "So chu so le: " << DQDemChuSoLe755(n) << endl;
		break;
	}
	case 756:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Tong cac chu so chan: " << DQTongChan756(n) << endl;
		break;
	}
	case 757:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Tong cac chu so le: " << DQTongLe757(n) << endl;
		break;
	}
	case 758:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Chu so dau tien: " << DQTimChuSoDauTien758(n) << endl;
		break;
	}
	case 759:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "So dao nguoc vua nhap: " << DQTimSoNguoc759(n) << endl;
		break;
	}
	case 760:
	{
		int n;
		cout << "Nhap vao n: ";
		cin >> n;
		cout << "Chu so lon nhat trong n: " << DQTimChuSoMax760(n) << endl;
		break;
	}
	case 761:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Chu so nho nhat trong so n: " << DQTimChuSoMin761(n) << endl;
		break;
	}
	case 762:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		(DQKiemTraToanLe762(n) == 1) ? cout << "Chu so toan so le!! " << endl : cout << "Chu so khong toan le!!" << endl;
		break;
	}
	case 763:
	{
		int n;
		cout << "Nhap n: ";
		cin >> n;
		(DQKiemTraToanChan763(n) == 1) ? cout << "Chu so toan so chan!! " << endl : cout << "Chu so khong toan chan!!" << endl;
		break;
	}
	default:
		break;
	}
}

int RecTinhTong702(int n)
{
	if (n == 1)
		return 1;
	else
		return (n + RecTinhTong702(n - 1));
}

int DQTinhGiaiThua703(int n)
{
	int Res ;
	cout << "I am caculation Res(" << n << ")" << endl;
	if (n == 0)
		return 1;
	Res = (n*DQTinhGiaiThua703(n - 1));
	cout << "Done!! Res<"<<n<<"> = " << Res << endl;
	return Res;
}

int DQTongNguyen704(int * a, int n)
{
	int Tong = 0;
	if (n == 0)
	{
		if (a[n] % 2 != 0)
			return 0;
		else
			return a[n];
	}
	Tong = a[n] % 2 != 0 ?   DQTongNguyen704(a, n - 1) : a[n] + DQTongNguyen704(a, n - 1);
	return Tong;
}

int DQDemDuong705(int * a, int n)
{
	
	if (n == 0)
	{
		return (a[n] > 0) ? 1 : 0;
	}
	int Dem;
	Dem = (a[n] > 0 ? 1 + DQDemDuong705(a, n - 1) : DQDemDuong705(a, n - 1));
	return Dem;
}

int DQFibonaci707(int n)
{
	int Fib;
	if (n == 0 || n==1)
	{
		return 1;
	}
	Fib = DQFibonaci707(n - 1) + DQFibonaci707(n - 2);
	return Fib;
}

int GiaThua(int n)
{
	int Res = 1;
	for (int i = 1; i <= n; i++)
	{
		Res *= i;
	}
	return Res;
}

float DQTong710(int n, int x)
{
	if (n == 1)
		return x;
	return ((pow(x, n))*1.0 / (GiaThua(n)) + DQTong710(n - 1, x));
}

void DQXuatMang718(int * a, int n)
{
	if (n == 0)
	{
		return;
	}
	DQXuatMang718(a, n - 1);
	cout << a[n - 1] << endl;
	
}

void DQXuatMang719(int * a, int n)
{
	if (n == 0)
		return;
	cout << "a[" << n - 1 << "]= " << a[n - 1]<<endl;
	DQXuatMang719(a, n - 1);
}

int DQDemDuong720(int * a, int n)
{
	if (n == 0)
		return (a[n] > 0) ? 1 : 0;
	return(a[n] > 0) ? 1 + DQDemDuong720(a, n - 1) : DQDemDuong720(a, n - 1);
}

int DQDemKhac721(int * a, int n)
{
	if (n < 1)
		return 0;
	if (n == 1)
		return 1;
	int Dem = DQDemKhac721(a, n - 1);
	int Flag = 1;
	for (int i = 0; (i < n-1 && Flag==1); i++)
	{
		if (a[i] == a[n - 1])
			Flag = 0;
	}
	if (Flag == 1)
		Dem++;
	return Dem ;
}

int DQTinhTong722(int * a, int n)
{
	if (n == 1)
		return a[n-1];
	return a[n-1] + DQTinhTong722(a, n - 1);
}

int DQTinhTongDuong723(int * a, int n)
{
	if (n == 1)
		return (a[n - 1] > 0) ? a[n - 1] : 0;
	return (a[n - 1] > 0) ? a[n - 1] + DQTinhTongDuong723(a, n - 1) : DQTinhTongDuong723(a, n - 1);
}

int DQTinhTong724(int * a, int n)
{
	if (n == 1)
		return a[n - 1];
	return (a[n-1]>a[n-2])?DQTinhTong724(a,n-1)+a[n-1]: DQTinhTong724(a, n - 1);
}

int DQKiemTraToanAm725(int * a, int n)
{
	if (n == 1)
		return(a[n - 1] < 0 ? 1 : 0);
	return (a[n-1]<0)?DQKiemTraToanAm725(a,n-1):0;
}

int DQTimMax726(int * a, int n)
{
	if (n == 1)
		return a[n - 1];
	int Max = DQTimMax726(a, n - 1);
	if (Max < a[n - 1])
		Max = a[n - 1];
	return Max;
}

int DQTimViTriMax727(int * a, int n)
{
	if (n == 1)
		return 0;
	int Index = DQTimViTriMax727(a, n - 1);
	if (a[Index] < a[n - 1])
		Index = n - 1;
	return Index;
}

void DQSapXepTang728(int * a, int n)
{
	if (n == 1)
		return;
	DQSapXepTang728(a, n - 1);
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	}
}

void DQSapXep729(int * a, int n)
{
	if (n == 1)
		return;
	DQSapXep729(a, n - 1);
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[n - 1] % 2 == 0)
			if (a[i] > a[n - 1])
				swap(a[i], a[n - 1]);
	}
}

int DQTong730(int n)
{
	if (n == 1)
		return 1;
	return n+ DQTong730(n-1);
}

int DQTong731(int n)
{
	if (n == 1)
		return 1;
	return n * n + DQTong731(n - 1);
}

float DQTong732(int n)
{
	if (n == 1)
		return 1;
	return 1.0 / n + DQTong732(n - 1);
}

float DQTong733(int n)
{
	if (n == 1)
		return 1.0/2;
	return (1.0)/(2*n) + DQTong733(n-1);
}

float DQTong734(int n)
{
	if (n == 1)
		return 1 + 1.0/3;
	return 1.0 / (n * 2 + 1) + DQTong734(n-1);
}

float DQTong735(int n)
{
	if (n == 1)
		return 1.0 / 2;
	return 1.0 / (n*n - 1) + DQTong735(n - 1);
}

float DQTong736(int n)
{
	if (n == 1)
		return 1.0 / 2;
	return (n*1.0) / (n + 1) + DQTong736(n - 1);
}

float DQTong737(int n)
{
	if (n == 0)
		return 0.5;
	return (2 * n + 1) / (2 * n*1.0 + 2) + DQTong737(n - 1);
}

long DQTinh738(int n)
{
	if (n == 1)
		return 1;
	return n * DQTinh738(n - 1);
}

float DQTinhLuyThua739(float x, int n)
{
	if (n == 1)
		return x;
	if (n == -1)
		return 1.0 / x;
	if(n>0)
		return x * DQTinhLuyThua739(x, n - 1);
	if (n < -1)
		return 1.0 / x * DQTinhLuyThua739(x, n + 1);
}

int DQTong740(int n)
{
	if (n == 1)
		return 1;
	return DQTong740(n - 1) + DQTinh738(n);
}

int DQTong741(int x, int n)
{
	if (n == 1)
		return x;
	return DQTinhLuyThua739(x, n) + DQTong741(x, n - 1);
}

int DQTong742(int x, int n)
{
	if (n == 1)
		return x * x;
	return DQTong742(x, n - 1) + DQTinhLuyThua739(x, 2*n);
}

int DQTong743(int x, int n)
{
	if (n == 0)
		return x;
	return DQTong743(x, n - 1) + DQTinhLuyThua739(x, 2 * n + 1);
}

int TongN(int n)
{
	if (n == 1)
		return 1;
	return n + TongN(n - 1);
}
float DQTong744(int n)
{
	if (n == 1)
		return 1;
	return DQTong744(n-1) + 1.0/(TongN(n));
}

float DQTong745(int x, int n)
{
	if (n == 1)
		return x;
	return DQTong745(x,n-1) + float((DQTinhLuyThua739(x,n))/(GiaThua(n)));
}

float DQTong746(int x, int n)
{
	if (n == 0)
		return 1;
	return (DQTong746(x, n - 1)) + (float)((DQTinhLuyThua739(x, n * 2)) / (GiaThua(2 * n)));
}

int DQTimUoc747(int n)
{
	if (n % 2 == 1)
		return n;
	return DQTimUoc747(n/2);
}

float DQCanBac748(int n)
{
	if (n == 1)
		return sqrt(2);
	return sqrt(2+DQCanBac748(n-1));
}

float DQCanBac749(int n)
{
	if (n == 1)
		return n;
	return sqrt(n+ DQCanBac749(n-1));
}

float DQCanBac750(int n, int s)
{
	s=s+1;
	if (s == n)
		return sqrt(n);
	return sqrt(s + DQCanBac750(n,s));
}

float DQPhanSo751(int n)
{
	if (n == 1)
		return 1 + ( 1.0 / 2);
	return 1+ 1.0/(DQPhanSo751(n-1));
}

int DQDemSoLuong752(int n)
{
	n = abs(n);
	if (n >= 0 && n<10)
		return 1;
	return DQDemSoLuong752(n / 10) + 1;
	
}

int DQTongChuSo753(int n)
{
	if (n >= 0 && n < 10)
		return n;
	return n%10 + DQTongChuSo753(n/10);
}

int DQTichChuSo754(int n)
{
	if (n >= 0 && n < 10)
		return n;
	if (n % 10 == 0)
		return 0;
	return n % 10 * DQTongChuSo753(n / 10);
}

int DQDemChuSoLe755(int n)
{
	if(n < 10 && n >= 0)
		return (n % 2 == 1) ? 1 : 0;
	return ((n % 10) % 2 == 1) ? (DQDemChuSoLe755(n / 10)) + 1:(DQDemChuSoLe755(n / 10));
}

int DQTongChan756(int n)
{
	if (n >= 0 && n < 10)
		return (n % 2 == 0) ? n : 0;
	return ((n % 10) % 2 == 0) ? n%10 + DQTongChan756(n / 10) : DQTongChan756(n / 10);
}

int DQTongLe757(int n)
{
	if (n >= 0 && n < 10)
		return (n % 2 != 0) ? n : 0;
	return ((n % 10) % 2 != 0) ? n % 10 + DQTongLe757(n / 10) : DQTongLe757(n / 10);
}

int DQTimChuSoDauTien758(int n)
{
	if (n >= 0 && n < 10)
		return n;
	return DQTimChuSoDauTien758(n/10);
}

int DQTimSoNguoc759(int n)
{
	if (n >= 0 && n < 10)
		return n;
	return ((n %10) *pow(10, DQDemSoLuong752(n)-1))+ DQTimSoNguoc759(n/10);
}

int DQTimChuSoMax760(int n)
{
	if (n >= 0 && n < 10)
		return n;
	int Max = n % 10;
	if(Max< DQTimChuSoMax760(n/10))
		Max=DQTimChuSoMax760(n/10);
	return Max;
}

int DQTimChuSoMin761(int n)
{
	if (n >= 0 && n < 10)
		return n;
	int Min = n % 10;
	if (DQTimChuSoMin761(n / 10) < Min)
		Min = DQTimChuSoMin761(n / 10);
	return Min;
}

int DQKiemTraToanLe762(int n)
{
	if (n >= 0 && n < 10)
	{
		if (n % 2 == 0)
			return 0;
		return 1;
	}
	return (n % 2 == 0) ? 0 : DQKiemTraToanLe762(n / 10);
}

int DQKiemTraToanChan763(int n)
{
	if (n >= 0 && n < 10)
	{
		if (n % 2 != 0)
			return 0;
		return 1;
	}
	return (n % 2 != 0) ? 0 : DQKiemTraToanChan763(n / 10);
}

void Truong()
{
	cout << "Hello, I'm Truong :))";
	Truong();
}

int FirstRecursion(int x)
{
	if (x == 1)
		return 1;
	else
	{
		return x * FirstRecursion(x - 1);
	}
}

