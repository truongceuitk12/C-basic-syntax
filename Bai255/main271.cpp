#include<iostream>
#include<Windows.h>
using namespace std;

void Menu(int *a, int n);
void NhapMang(int *a, int n);
void XuatMang(int *a, int n);
void XoaPhanTuViTri271(int *a, int &n, int k);
int TimMax(int *a, int n);
void XoaCacMax272(int *a, int &n);
void XoaCacPhanTuAm273(int *a, int &n);
void XoaTatCaPhanTuChan274(int *a, int &n);
int KiemTraSoChinhPhuong(int x);
void XoaPhanTuChinhPhuong275(int *a, int &n);
void XoaCacPhanTuX276(int *a, int &n, int x);
int KiemTraSoNguyenTo(int x);
void XoaCacPhanTuNguyenTo277(int *a, int &n);
int KiemTraXuatHienDung1Lan(int *a, int n, int x);
void XoaCacPhanTuTrungNhau278(int *a, int &n);
void SapXepTang(int *a, int n);
void XoaTatCaCacPhanTuTrungNhau279(int *a, int &n);
void DoiCho(int *a, int n, int ViTri);
void Dua1VeDau280(int *a, int n);
void DoiChoChan(int *a, int n, int ViTri,int GiaTri);
void DoiChoLe(int *a, int n, int ViTri, int GiaTri);
void DoiCho0(int *a, int n, int ViTri);
void DonChanLe281(int *a, int n);
void DoiChoChia3(int *a, int n, int ViTri, int GiaTri);
void DonChiaHet282(int *a, int n);
void DaoNguocMang283(int *a, int n);
void DaoNguocChan284(int *a, int n);
void DaoNguocDuong285(int *a, int n);
void DichTraiXoayVong286(int *a, int n);
void DichPhaiXoayVongKLan287(int *a, int n, int k);
void XuatChanLeTheoMau288(int *a, int n);
void XuatMangTheoYeuCau289(int *a, int n);
void DaoMang290(int *a, int n);
int TimMaxMang(int *a, int n);
int TimMinMang(int *a, int n);
void DaoMangTheoYeuCau291(int *a, int n);
int TimSoGanNhat(float x);
void BienDoiMang292();
void XuatMangDauCuoi(int *a, int d, int c);
void XuatMangCon293(int *a, int n);
void XuatMangCon294(int *a, int n);
int KiemTraMangTang(int *a, int d, int c);
void XuatMangConTang295(int *a, int n);
int KiemTraMax(int *a, int n, int d, int c);
void LietKeDayConCoDieuKien296(int *a, int n);
int TongMangCon(int *a, int d, int c);
void TongCacMangConTang297(int *a, int n);
int DemSoLuongMangConTang298(int *a, int n);
int KiemTraDayConToanDuong(int *a, int d, int c);
void LietKeDayConToanDuong299(int *a, int n);
int KiemTraMangConGiam(int *a, int d, int c);
int DemSoLuongMangConGiam300(int *a, int n);
int KiemTraMangCon(int *a,  int na, int *b, int d);
int KiemTraMangCon301(int *a, int na, int *b, int nb);
int DemSoLanXuatHienMangCon302(int *a, int na, int *b, int nb);
void MangConDuongDaiNhat303(int *a, int n);
int TongMangDauCuoi(int *a, int d, int c);
void TimMangConThoa304(int *a, int n, int M);
void DayConDuongCoTongMax305(int *a, int n);
void DayConCoTongMax306(int *a, int n);
int DemLe(int *a, int n);
void TaoMangLe307(int *a, int n);
void TaoMangAm308(int *a, int n);
void TaoMangLanCan309(int *a, int n);
void TaoMangSoNguyenTo310(int *a, int n);


int main()
{
	int n;
	cout << "nhap so luong n: ";
	cin >> n;
	int *a;
	a = new int[n];

	NhapMang(a, n);
	
	Menu(a,n);

	//cout << KiemTraSoNguyenTo(n);
	delete[]a;
	system("pause");
	return 0;
}

void Menu(int *a, int n)
{
	int ChonLua;
	cout << "(0:		Thoat)(271:	Bai 271)(272:	Bai 272)(273:	Bai 273)(274:	Bai 274)(275:	Bai 275)(276:	Bai 276)(277:	Bai 277)(278:	Bai 278)(279:	Bai 279)(280:	Bai 280)"<<endl;
	cout << "(0:		Thoat)(281:	Bai 281)(282:	Bai 282)(283:	Bai 283)(284:	Bai 284)(285:	Bai 285)(286:	Bai 286)(287:	Bai 287)(288:	Bai 288)(289:	Bai 289)(290:	Bai 290)" << endl;
	cout << "(0:		Thoat)(291:	Bai 291)(292:	Bai 292)(293:	Bai 293)(294:	Bai 294)(275:	Bai 295)(296:	Bai 296)(297:	Bai 297)(278:	Bai 298)(299:	Bai 299)(300:	Bai 300)" << endl;
	cout << "(0:		Thoat)(301:	Bai 301)(302:	Bai 302)(303:	Bai 303)(304:	Bai 304)(305:	Bai 305)(306:	Bai 306)(307:	Bai 307)(308:	Bai 308)(309:	Bai 309)(310:	Bai 310)" << endl;

	cout << "Nhap lua chon cua ban" << endl;
	cin >> ChonLua;
	switch (ChonLua)
	{
	case 271:
	{
		int ViTri;
		cout << "nhap vi tri muon xoa: ";
		cin >> ViTri;
		XoaPhanTuViTri271(a, n, ViTri);
		XuatMang(a, n);
		break;
	}
	case 272:
	{
		XoaCacMax272(a, n);
		cout << "mang sau khi xoa cac phan tu lon nhat: " << endl;
		XuatMang(a, n);
		break;
	}
	case 273:
	{
		XoaCacPhanTuAm273(a, n);
		cout << "Mang sau khi xoa cac phan tu am" << endl;
		XuatMang(a, n);
		break;
	}
	case 274:
	{
		XoaTatCaPhanTuChan274(a, n);
		cout << "Mang sau khi xoa cac so chan" << endl;
		XuatMang(a, n);
		break;
	}
	case 275:
	{
		XoaPhanTuChinhPhuong275(a, n);
		cout << "Mang sau khi xoa cac so chinh phuong" << endl;
		XuatMang(a, n);
		break;
	}
	case 276:
	{
		int x;
		cout << "Nhap gia tri de xoa ";
		cin >> x;
		XoaCacPhanTuX276(a, n, x);
		cout << "Mang sau khi xoa cac gia tri x " << endl;
		XuatMang(a, n);
		break;
	}
	case 277:
	{
		XoaCacPhanTuNguyenTo277(a, n);
		cout << "Mang sau khi xoa cac so nguyen to: " << endl;
		XuatMang(a, n);
		break;
	}
	case 278:
	{
		XoaCacPhanTuTrungNhau278(a, n);
		cout << "Mang sau khi xoa cac phan tu trung nhau: " << endl;
		XuatMang(a, n);
		break;
	}
	case 279:
	{
		XoaTatCaCacPhanTuTrungNhau279(a, n);
		cout << "Mang sau khi xoa tat ca cac phan tu trung nhau: " << endl;
		XuatMang(a, n);
		break;
	}
	case 280:
	{
		Dua1VeDau280(a, n);
		cout << "Mang sau khi dua 1 ve dau: " << endl;
		XuatMang(a, n);
		break;
	}
	case 281:
	{
		DonChanLe281(a, n);
		cout << "Mang sau khi don chan ve dau, le ve cuoi: " << endl;
		XuatMang(a, n);
		break;
	}
	case 282:
	{
		DonChiaHet282(a, n);
		cout << "Mang sau khi don phan tu chia het cho 3 ve dau: " << endl;
		XuatMang(a, n);
		break;
	}
	case 283:
	{
		DaoNguocMang283(a, n);
		cout << "Mang sau khi dao nguoc: " << endl;
		XuatMang(a, n);
		break;
	}
	case 284:
	{
		DaoNguocChan284(a, n);
		cout << "Mang sau khi dao nguoc thu tu cac gia tri chan: " << endl;
		XuatMang(a, n);
		break;
	}
	case 285:
	{
		DaoNguocDuong285(a, n);
		cout << "Mang sau khi dao nguoc vi tri cac phan tu duong: " << endl;
		XuatMang(a, n);
		break;
	}
	case 286:
	{
		DichTraiXoayVong286(a, n);
		cout << "Mang sau khi dich trai xoay vong: " << endl;
		XuatMang(a, n);
		break;
	}
	case 287:
	{
		int k;
		do
		{
			cout << "nhap k: ";
			cin >> k;
		} while (k<0 || k>n);
		DichPhaiXoayVongKLan287(a, n, k);
		cout << "Mang sau khi dich phai " << k << " lan: " << endl;
		XuatMang(a, n);
		break;
	}
	case 288:
	{
		cout << "Xuat mang theo mau: " << endl;
		XuatChanLeTheoMau288(a, n);
		break;
	}
	case 289:
	{
		cout << "\nXuat mang thanh 2 hang: " << endl;
		XuatMangTheoYeuCau289(a, n);
		break;
	}
	case 290:
	{
		cout << "\nXuat mang theo yeu cau: " << endl;
		DaoMang290(a, n);
		XuatMang(a, n);
		break;
	}
	case 291:
	{
		DaoMangTheoYeuCau291(a, n);
		cout << "Mang sau khi hoan vi max va min: " << endl;
		XuatMang(a, n);
		break;
	}
	case 292:
	{
		BienDoiMang292();
		break;
	}
	case 293:
	{
		cout << "Toan bo mang con: " << endl;
		XuatMangCon293(a, n);
		break;
	}
	case 294:
	{
		cout << "Cac mang con co nhieu phan tu: " << endl;
		XuatMangCon294(a, n);
		break;
	}
	case 295:
	{
		cout << "Nhung mang con tang: " << endl;
		XuatMangConTang295(a, n);
		break;
	}
	case 296:
	{
		cout << "Liet ke nhung mang con thoa dieu kien: " << endl;
		LietKeDayConCoDieuKien296(a, n);
		break;
	}

	case 297:
	{
		TongCacMangConTang297(a, n);
		break;
	}
	case 298:
	{
		cout<<"So mang con tang : "<<DemSoLuongMangConTang298(a, n)<<endl;
		break;
	}
	case 299:
	{
		LietKeDayConToanDuong299(a, n);
		break;
	}
	case 300:
	{
		cout << "So luong mang con giam: " << DemSoLuongMangConGiam300(a, n) << endl;
		break;
	}
	case 301:
	{
		cout << "nhap so luong nb: ";
		int nb;
		cin >> nb;
		int *b = new int[nb];
		NhapMang(b, nb);
		if (KiemTraMangCon301(a, n, b, nb) == 1)
			cout << "A la mang con cua B" << endl;
		else
			cout << "A khong la mang con cua B" << endl;
		break;
	}
	case 302:
	{
		cout << "nhap so luong nb: ";
		int nb;
		cin >> nb;
		int *b = new int[nb];
		NhapMang(b, nb);
		cout << "So lan mang A xuat hien trong B: ";
		cout << DemSoLanXuatHienMangCon302(a, n, b, nb) << endl;
		break;
	}
	case 303:
	{
		cout << "Mang con toan duong co do dai lon nhat: " << endl;
		MangConDuongDaiNhat303(a, n);
		break;
	}
	case 304:
	{
		cout << "nhap m muon kiem tra: ";
		int m;
		cin >> m;
		TimMangConThoa304(a, n, m);
		break;
	}
	case 305:
	{
		DayConDuongCoTongMax305(a, n);
		break;
	}
	case 306:
	{
		DayConCoTongMax306(a, n);
		break;
	}
	case 307:
	{
		TaoMangLe307(a, n);
		break;
	}
	case 308:
	{
		TaoMangAm308(a, n);
		break;
	}
	case 309:
	{
		cout << "Mang moi duoc tao  ra tu cac gia tri lan can cua mang a: " << endl;
		TaoMangLanCan309(a, n);
		break;
	}
	case 310:
	{
		TaoMangSoNguyenTo310(a, n);
		break;
	}
	default:
		break;
	}
}

void NhapMang(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void XuatMang(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= " << a[i] << endl;
	}
}

void XoaPhanTuViTri271(int * a, int &n, int k)
{
	for (int i = k; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n -= 1;
}

int TimMax(int * a, int n)
{
	int Max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > Max)
			Max = a[i];
	}
	return Max;
}

void XoaCacMax272(int * a, int &n)
{
	int Max = TimMax(a, n);
	for (int  i = 0; i < n; i++)
	{
		if (a[i] == Max)
		{
			XoaPhanTuViTri271(a, n, i);
			i--;		//xet lai vi tri moi vua xoa xem co bang max hay khong :))
		}	
	}
}

void XoaCacPhanTuAm273(int * a, int & n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			XoaPhanTuViTri271(a, n, i);
			i--;
		}
	}
}

void XoaTatCaPhanTuChan274(int * a, int & n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			XoaPhanTuViTri271(a, n, i);
			i--;
		}
	}
}

int KiemTraSoChinhPhuong(int x)
{
	int Check;
	Check = sqrt(x);
	if (Check*Check == x)
		return 1;
	return 0;
}

void XoaPhanTuChinhPhuong275(int * a, int & n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]) == 1)
		{
			XoaPhanTuViTri271(a, n, i);
			i--;
		}
	}
}

void XoaCacPhanTuX276(int * a, int & n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			XoaPhanTuViTri271(a, n, i);
			i--;
		}
	}
}

int KiemTraSoNguyenTo(int x)
{
	if (x < 2)
		return 0;
	else
	{
		for (int i = 2; i < x/2 +1; i++)
		{
			if (x%i == 0)
				return 0;
		}
	}
	return 1;
}

void XoaCacPhanTuNguyenTo277(int * a, int & n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]) == 1)
		{
			XoaPhanTuViTri271(a, n, i);
			i--;
		}
	}
}

int KiemTraXuatHienDung1Lan(int * a, int n, int x)
{
	int idem = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
			idem++;
	}
	if (idem == 0)
		return 1;
	return 0;
}

void XoaCacPhanTuTrungNhau278(int * a, int & n)
{
	for (int i = n-1; i >=0; i--)
	{
		if (KiemTraXuatHienDung1Lan(a, i, a[i]) == 0)
		{
			XoaPhanTuViTri271(a, n, i);
			i++;
		}
	}
}

void SapXepTang(int * a, int n)
{
	for(int i=0;i<n;i++)
		for (int j = i + 1; j < n - 1; j++)
		{
			if (a[j] < a[i])
				swap(a[i], a[j]);
		}
}

void XoaTatCaCacPhanTuTrungNhau279(int * a, int & n)
{
	SapXepTang(a, n);
	int Temp;
	for (int i = 0; i <n; i++)
	{
		if (a[i]==a[i+1])
		{
			Temp = a[i];
			XoaPhanTuViTri271(a, n, i);
			i--;
		}
		else if (a[i] == Temp)
		{
			Temp = a[i];
			XoaPhanTuViTri271(a, n, i);
			i--;
		}
	}
}

void DoiCho(int * a, int n, int ViTri)
{
	for (int i = ViTri; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = 1;
}

void Dua1VeDau280(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
			DoiCho(a, n, i);
	}
}

void DoiChoChan(int * a, int n, int ViTri, int GiaTri)
{
	for (int i = ViTri; i>0; i--)
		a[i] = a[i - 1];
	a[0] = GiaTri;
}

void DoiChoLe(int * a, int n, int ViTri, int GiaTri)
{
	for (int i = ViTri; i < n-1; i++)
		a[i] = a[i + 1];
	a[n - 1] = GiaTri;
}

void DoiCho0(int * a, int n, int ViTri)
{
	for (int i = ViTri; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = 0;
}

void DonChanLe281(int * a, int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			DoiCho0(a, n, i);
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			DoiChoChan(a, n, i, a[i]);
}

void DoiChoChia3(int * a, int n, int ViTri, int GiaTri)
{
	for (int i = ViTri; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = GiaTri;
}

void DonChiaHet282(int * a, int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 3 == 0)
			DoiChoChia3(a, n, i, a[i]);
}

void DaoNguocMang283(int * a, int n)
{
	for (int i = 0; i < n / 2; i++)
		swap(a[i], a[n - i - 1]);
}

void DaoNguocChan284(int * a, int n)
{
	int ViTri = n-1;
	for (int i = 0; i <= ViTri; i++)
	{
		if (a[i] % 2 == 0)
		{
			while (ViTri >= i)
			{
				if (a[ViTri] % 2 != 0)
					ViTri-=1;
				else if (a[ViTri] % 2 == 0)
					break;
			}
			swap(a[i], a[ViTri]);
			ViTri--;
		}
	}
}

void DaoNguocDuong285(int * a, int n)
{
	int ViTri = n - 1;
	for (int i = 0; i <= ViTri; i++)
	{
		if (a[i] >= 0)
		{
			while (ViTri >= i)
			{
				if (a[ViTri] < 0)
					ViTri -= 1;
				else if (a[ViTri] >= 0)
					break;
			}
			swap(a[i], a[ViTri]);
			ViTri--;
		}
	}
}

void DichTraiXoayVong286(int * a, int n)
{
	int Temp = a[0];
	for (int i = 0; i < n-1; i++)
	{
		a[i] = a[i + 1];
	}
	a[n - 1] = Temp;
}

void DichPhaiXoayVongKLan287(int * a, int n, int k)
{
	for (int j = 0; j < k; j++)
	{
		int Temp = a[n-1];
		for (int i = n - 1; i > 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = Temp;
	}
}

void XuatChanLeTheoMau288(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			system("color 1 7");
			cout <<"a["<<i<<"]= " <<a[i] << endl;
		}
		else if(a[i]%2!=0)
		{
			system("color 1 2");
			cout << "a[" << i << "]= " << a[i] << endl;
		}
	}
}

void XuatMangTheoYeuCau289(int * a, int n)
{
	cout << "cac phan tu chan: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << a[i] << "    ";
	}
	cout << "cac phan tu le: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			cout << a[i] << "    ";
	}
}

void DaoMang290(int * a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				swap(a[i], a[j]);
			}
			else if (a[i] % 2 != 0 && a[j] % 2 != 0)
			{
				swap(a[i], a[j]);
			}
		}
	}
}

int TimMaxMang(int * a, int n)
{
	int Max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > Max)
			Max = a[i];
	}
	return Max;
}

int TimMinMang(int * a, int n)
{
	int Min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < Min)
			Min = a[i];
	}
	return Min;
}

void DaoMangTheoYeuCau291(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			if (a[i] == TimMaxMang(a, n) && a[j] == TimMinMang(a, n))
				swap(a[i], a[j]);
			else if (a[i] == TimMinMang(a, n) && a[j] == TimMaxMang(a, n))
				swap(a[i], a[j]);
		}
	}
}

int TimSoGanNhat(float x)
{
	int Temp = (int)x;
	if (Temp - x != 0)
	{
		if (abs(Temp - x) >= 0.5)
			return Temp + 1;
		else
			return Temp;
	}
	else if (Temp - x == 0)
		return x;
}

void BienDoiMang292()
{
	int n;
	cout << "nhap so luong n: ";
	cin >> n;
	float *a = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = TimSoGanNhat(a[i]);
	}
	cout << "Mang sau khi bien doi theo yeu cau: " << endl;
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "]= " << a[i] << endl;
}

void XuatMangDauCuoi(int * a, int d, int c)
{
	for (int i = d; i < c+1; i++)
		cout << a[i] << "   ";
	cout << endl;
}

void XuatMangCon293(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			XuatMangDauCuoi(a, i, j);
		}
	}
}

void XuatMangCon294(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if(j-i>=1)
				XuatMangDauCuoi(a, i, j);
		}
	}
}

int KiemTraMangTang(int * a, int d, int c)
{
	for (int i = d; i < c; i++)
		if (a[i] > a[i + 1])
			return 0;
	return 1;
}

void XuatMangConTang295(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (j - i >= 1 && KiemTraMangTang(a,i,j)==1)
				XuatMangDauCuoi(a, i, j);
		}
	}
}

int KiemTraMax(int * a, int n, int d, int c)
{
	int Max = TimMax(a, n);
	for (int i = d; i <= c; i++)
		if (a[i] == Max)
			return 1;
	return 0;
}

void LietKeDayConCoDieuKien296(int * a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
		{
			if (j - i >= 1 && KiemTraMangTang(a, i, j) == 1 && KiemTraMax(a, n, i, j) == 1)
				XuatMangDauCuoi(a, i, j);
		}
}

int TongMangCon(int * a, int d, int c)
{
	int Tong = 0;
	for (int i = d; i <= c; i++)
		Tong += a[i];
	return Tong;
}

void TongCacMangConTang297(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (KiemTraMangTang(a, i, j) == 1 && j-i>0)
			{
				XuatMangDauCuoi(a, i, j);
				cout << "Tong mang con tang: " <<TongMangCon(a,i,j)<< endl;
			}
		}
	}
}

int DemSoLuongMangConTang298(int * a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (KiemTraMangTang(a, i, j) == 1 && j - i > 0)
				Dem++;
		}
	}
	return Dem;
}

int KiemTraDayConToanDuong(int * a, int d, int c)
{
	for (int i = d; i <= c; i++)
	{
		if (a[i] < 0)
			return 0;
	}
	return 1;
}

void LietKeDayConToanDuong299(int * a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
		{
			if (KiemTraDayConToanDuong(a, i, j) == 1 && j - i > 0)
			{
				cout << "Day con thoa dieu kien: \n";
				XuatMangDauCuoi(a, i, j);
			}	
		}
}

int KiemTraMangConGiam(int * a, int d, int c)
{
	for (int i = d; i < c; i++)
		if (a[i] < a[i + 1])
			return 0;
	return 1;
}

int DemSoLuongMangConGiam300(int * a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (KiemTraMangConGiam(a, i, j) == 1 && j - i > 0)
				Dem++;
		}
	}
	return Dem;
}

int KiemTraMangCon(int *a, int na, int *b, int d)
{	//kiem tra mang a co phai la mang con cua b khong
	for (int i = 0; i < na; i++)
	{
		if (a[i] != b[i + d])
			return 0;
	}
	return 1;
}

int KiemTraMangCon301(int * a, int na, int * b, int nb)
{
	if (na > nb)
		return 0;
	for (int i = 0; i < nb-na+1; i++)
	{
		if (KiemTraMangCon(a, na, b, i) == 1)
			return 1;
	}
	return 0;
}

int DemSoLanXuatHienMangCon302(int * a, int na, int *b, int nb)
{
	if (na > nb)
		return 0;
	else
	{
		int Dem = 0;
		for (int i = 0; i < nb - na + 1; i++)
		{
			if (KiemTraMangCon(a, na, b, i) == 1)
				Dem++;
		}
		return Dem;
	}
	
}

void MangConDuongDaiNhat303(int * a, int n)
{
	int Max,d,c;
	Max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (KiemTraDayConToanDuong(a, i, j) == 1 && j - i > Max)
			{
				Max = j - i;
				d = i;
				c = j;
			}
		}
	}
	XuatMangDauCuoi(a, d, c);
}

int TongMangDauCuoi(int * a, int d, int c)
{
	int Tong = 0;
	for (int i = d; i <= c; i++)
	{
		Tong += a[i];
	}
	return Tong;
}

void TimMangConThoa304(int * a, int n, int M)
{
	int d, c;
	d = c = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (TongMangCon(a, i, j) == M)
			{
				d = i;
				c = j;
				goto c;
			}
		}
	}
c:;
	if (d == 0 && c == 0)
		cout << "khong co mang con thoa dieu kien: " << endl;
	else
	{
		cout << "Mang thoa dieu kien: " << endl;
		XuatMangDauCuoi(a, d, c);
	}
}

void DayConDuongCoTongMax305(int * a, int n)
{
	int Max,d,c ;
	Max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (KiemTraDayConToanDuong(a, i, j) == 1 && TongMangCon(a,i,j)>Max)
			{
				d = i;
				c = j;
				Max = TongMangCon(a, i, j);
			}
		}
	}
	cout << "Mang con toan duong co tong lon nhat la: ";
	XuatMangDauCuoi(a, d, c);
}

void DayConCoTongMax306(int * a, int n)
{
	int d, c, Max;
	Max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (TongMangCon(a, i, j) > Max)
			{
				d = i;
				c = j;
				Max = TongMangCon(a, i, j);
			}
		}
	}
	cout << "Mang con co tong lon nhat: ";
	XuatMangDauCuoi(a, d, c);
}

int DemLe(int * a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			Dem++;
	}
	return Dem;
}

void TaoMangLe307(int * a, int n)
{
	int nb = DemLe(a, n);
	int *b = new int[nb];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	cout << "mang con le tu mang a: " << endl;
	XuatMang(b, nb);
}

void TaoMangAm308(int * a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			Dem++;
	}
	int *b = new int[Dem];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[j] = a[i];
			j++;
		}
	}
	cout << "Mang co le tao tu mang a: " << endl;
	XuatMang(b, Dem);
}

void TaoMangLanCan309(int * a, int n)
{
	int *b = new int[n];
	b[0] = a[0] + a[1];
	for (int i = 1; i < n-1; i++)
	{
		b[i] = a[i - 1] + a[i + 1];
	}
	b[n - 1] = a[n - 1] + a[n - 2];
	XuatMang(b, n);
}

void TaoMangSoNguyenTo310(int * a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]) == 1)
			Dem++;
	}
	int *b = new int[Dem];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]) == 1)
			b[j++] = a[i];
	}
	cout << "Xuat mang so nguye to tu mang a: " << endl;
	XuatMang(b, Dem);
}


