#include<iostream>
#include "..\CayNhiPhan711\CayNhiPhan.h"
using namespace std;

void nhap(int *a, int n);
void xuat(int *a, int n);
int kiemtrakhacvoimang(int *a, int n, int x);
void sapxep(int *a, int n);
int dem229(int *a, int n);
void dem230(int *a, int n);
void lietkeduynhat231(int *a, int n);
void lietkenhieulan232(int *a, int n);
void lietketansuat233(int *a, int n);
int kiemtraxuathien1lan(int *a, int n, int x);
int dem234(int *a, int na, int *b, int nb);
void lietke235(int*a, int na, int *b, int nb);
int demsolanxuathien(int *a, int n, int x);
int xuathiennhieunhat237(int *a, int n);
void lietke238(int *a, int n);
int kiemtrasonguyento(int x);
int demsonguyento239(int *a, int n);
int kiemtratontai240(int *a, int n);
int kiemtralientiep241(int *a, int n);
int kiemtrachan242(int *a, int n);
int kiemtratontaisnt243(int *a, int n);
int kiemtrasohoanthien(int x);
int kiemtramang244(int *a, int n);
int kiemtratoanchan245(int *a, int n);
int kiemtramangdoixung246(int*a, int n);
int kiemtratinhchanle247(int *a, int n);
int kiemtratang248(int *a, int n);
int kiemtragiam249(int *a, int n);
int kiemtracapsocong250(int *a, int n, int &congsai);
int KiemTraBangNhau251(int *a, int n);
int KiemTraDangSong252(int *a, int n);
int KiemTraThuocMang(int *a, int n, int x);
int KiemTraThuoc253(int *a, int na, int *b, int nb);
int KiemTraLonHon(int *a, int n, int x);
int KiemTra254(int *a, int n);
void SapXep255(int *a, int n);
void SapXep256(int *a, int n);
void SapXep257(int *a, int n);
int KiemTraSNT(int x);
void SapXep258(int *a, int n);
int KiemTraSoHoanThien(int x);
void  SapXep259(int *a, int n);
int KiemTraHoanVi260(int *a, int na, int *b, int nb);
void SapXep261(int *a, int n);
void SapXep262(int *a, int n);
void SapXep263(int *a, int n);
void SapXepTron264(int *a, int na, int *b, int nb);
void SapXepTron265(int *a, int na, int *b, int nb);
void ThemPhanTu266(int *a, int &n, int x, int k);
int TimViTriChen(int *a, int &n, int x);
void ChenPhanTu(int *a, int n, int x, int k);
void NhapGiam267(int *a, int n);
void TaoMangChanLe268(int *a, int *b, int n);
void ChenThem269(int *a, int &n, int x);
void NhapTang270(int *a, int n);


int main()
{
	int isoluong=0;
	cout << "nhap so luong: ";
	cin >> isoluong;
	int *a = new int[isoluong];

	nhap(a, isoluong);

	cout << "So luong phan tu trong mang: " << endl;
	cout << dem229(a, isoluong) << endl;
	xuat(a, isoluong);

	delete[]a;

	//system("pause");
	return 0;
}

void nhap(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap a[" << i  << "] = ";
		cin >> a[i];
	}
}

void xuat(int * a, int n)
{
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "]= " << a[i] << endl;
}

int kiemtrakhacvoimang(int * a, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			return 0;		//tra ve 0 neu nhu trung phan tu trong mang
	}
	return 1;				//tra ve 1 neu khong trung voi phan tu trong mang			
}

void sapxep(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}

int dem229(int * a, int n)
{
	sapxep(a, n);
	int idem = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] != a[i + 1])
		{
			//cout << "phan tu khac: " << a[i] << endl;
			idem++;
		}
	}
	return idem;
}

void dem230(int * a, int n)
{
	int idem = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			idem++;
		}
		else
		{
			cout << "so lan xuat hien cua " << a[i]<<"  = "<< idem << endl;
			idem = 1;
		}	
	}
}

void lietkeduynhat231(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1] && a[i] != a[i-1])
		{
			cout << "phan tu xuat hien dung 1 lan: " << a[i] << endl;
		}
	}

}

void lietkenhieulan232(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1] && a[i] != a[i - 1])
			cout << "gia tri xuat hien nhieu lan: " << a[i] << endl;
	}
}

void lietketansuat233(int * a, int n)
{
	dem230(a, n);
}

int kiemtraxuathien1lan(int * a, int n, int x)
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

int dem234(int * a, int na, int * b, int nb)
{
	int ntong = na + nb;
	//khai bao mang moi co do lon bang tong 2 mang da cho
	int *c = new int[ntong];

	// gan mang dau tien vao mang moi
	for (int i = 0; i < na; i++)
		c[i] = a[i];

	//gan mang thu 2 vao mang moi
	for (int i = na; i < ntong; i++)
		c[i] = b[i-na];

	sapxep(c, ntong);	//sap xep lai mang moi theo tang dan
	int idem = 0;		//bien dem so luong gia tri xuat hien 1 lan

	//ham dem so luong xuat hien 1 lan
	for (int i = 0; i < ntong; i++)
	{
		if (a[i] != a[i + 1] && kiemtraxuathien1lan(c, ntong, a[i]) == 1)
			idem++;
	}
	return idem;
}

void lietke235(int * a, int na, int * b, int nb)
{
	int ntong = na + nb;
	//khai bao mang moi co do lon bang tong 2 mang da cho
	int *c = new int[ntong];
	// gan mang dau tien vao mang moi
	for (int i = 0; i < na; i++)
		c[i] = a[i];
	//gan mang thu 2 vao mang moi
	for (int i = na; i < ntong; i++)
		c[i] = b[i - na];
	sapxep(c, ntong);	//sap xep lai mang moi theo tang dan
	//xuat(c, ntong);
	//ham dem so luong xuat hien 1 lan
	for (int i = 0; i < ntong; i++)
	{
		if ((c[i] != c[i + 1]) && (kiemtraxuathien1lan(c, i, c[i]) == 1))
			cout << "phan tu xuat hien 1 trong 2 mang: " << c[i] << endl;
	}
}

int demsolanxuathien(int * a, int n, int x)
{
	int idem = 0;
	for (int i = 0; i < n; i++)
		if (x == a[i])
			idem++;
	return idem;
}

int xuathiennhieunhat237(int * a, int n)
{
	int idem = demsolanxuathien(a,n,a[0]);
	int phantu = a[0];
	for (int i = 1; i < n; i++)
	{
		if (kiemtraxuathien1lan(a, i, a[i]) == 1 && demsolanxuathien(a, n, a[i]) > idem)
		{
			idem = demsolanxuathien(a, n, a[i]);
			phantu = a[i];
		}
	}
	return phantu;
}

void lietke238(int * a, int n)
{
	int idem = demsolanxuathien(a, n, a[0]);
	int phantu = a[0];
	for (int i = 1; i < n; i++)
	{
		if (kiemtraxuathien1lan(a, i, a[i]) == 1 && demsolanxuathien(a, n, a[i]) > idem)
		{
			idem = demsolanxuathien(a, n, a[i]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (kiemtraxuathien1lan(a, i, a[i]) == 1 && demsolanxuathien(a, n, a[i]) == idem)
			cout << "nhung phan tu xuat hien nhieu nhat: " << a[i] << endl;
	}

}

int kiemtrasonguyento(int x)
{
	if (x < 2)
		return 0;
	else
	{
		for (int i = 2; i <= x/2; i++)
			if (x%i == 0)
				return 0;
	}
	return 1;
}

int demsonguyento239(int * a, int n)
{
	int idem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemtraxuathien1lan(a, i, a[i]) == 1 && kiemtrasonguyento(a[i]) == 1)
			idem++;
	}
	return idem;
}

int kiemtratontai240(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			return 1;
	}
	return 0;
}

int kiemtralientiep241(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == (a[i + 1] + 1) || a[i] == (a[i + 1] - 1))
			return 1;
	}
	return 0;
}

int kiemtrachan242(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return 1;
	}
	return 0;
}

int kiemtratontaisnt243(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasonguyento(a[i]) == 1)
			return 1;
	}
	return 0;
}

int kiemtrasohoanthien(int x)
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

int kiemtramang244(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasohoanthien(a[i]) == 1 && a[i] < 256)
			return 1;
	}
	return 0;
}

int kiemtratoanchan245(int * a, int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			flag = 0;
	return flag;
}

int kiemtramangdoixung246(int * a, int n)
{
	int flag = 1;
	for (int i = 0; i < n / 2 ; i++)
		if (a[i] != a[n - i - 1])
			flag = 0;
	return flag;
}

int kiemtratinhchanle247(int * a, int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if ((a[i] + a[i + 1]) % 2 == 0)
			flag = 0;
	}
	return flag;
}

int kiemtratang248(int * a, int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1] && i!=n-1)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int kiemtragiam249(int *a, int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[i + 1] && i != n - 1)
			flag = 0;
	}
	return flag;
}

int kiemtracapsocong250(int * a, int n, int &congsai)
{
	int flag = 1;
	if (n > 2)
	{
		congsai = a[1] - a[0];
		for (int i = 0; i < n; i++)
		{
			if (a[i + 1] - a[i] != congsai && i != n - 1)
				flag = 0;
		}
	}
	return flag;
}

int KiemTraBangNhau251(int * a, int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1] && i != n - 1)
			flag = 0;
	}
	return flag;
}

int KiemTraDangSong252(int * a, int n)
{
	int flag = 1;
	for (int i = 1; i < n; i++)
	{
		if (i != n - 1 && (a[i] > a[i + 1] && a[i] < a[i - 1]) || (a[i] < a[i + 1] && a[i] > a[i - 1]))
			flag = 0;
	}
	return flag;
}

int KiemTraThuocMang(int * a, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
			return 1;
	}
	return 0;
}

int KiemTraThuoc253(int * a, int na, int * b, int nb)
{
	if (na > nb)
		return 0;
	else
	{
		for (int i = 0; i < na; i++)
		{
			if (KiemTraThuocMang(b, nb, a[i]) == 0)
				return 0;
		}
	}
	return 1;
}

int KiemTraLonHon(int * a, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x <= a[i])
			return 0;
	}
	return 1;
}

int KiemTra254(int * a, int n)
{
	int iDem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraLonHon(a, i, a[i]) == 1)
			iDem++;
	}
	return iDem;
}

void SapXep255(int * a, int n)
{
	cout << "===== MANG SAU KHI SAP XEP=====\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] <= a[i])
				swap(a[j], a[i]);
		}
	}
}

void SapXep256(int * a, int n)
{

	cout << "===== MANG SAU KHI SAP XEP=====\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] >= a[i])
				swap(a[j], a[i]);
		}
	}
}

void SapXep257(int * a, int n)
{
	cout << "===== MANG SAU KHI SAP XEP=====\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] <= a[i] && i % 2 != 0)
				swap(a[j], a[i]);
		}
	}

}

int KiemTraSNT(int x)
{
	if (x < 2)
		return 0;
	else
	{
		for (int i = 2; i < x / 2 + 1; i++)
		{
			if (x%i == 0)
				return 0;
		}
	}
	return 1;
}


void SapXep258(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] <= a[i] && KiemTraSNT(a[i]) == 1)
				swap(a[j], a[i]);
		}
	}
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

int TongCacSoHoanThienMaTran333(int ** a, int m, int n)
{
	return 0;
}


void SapXep259(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (a[i] < a[j] && KiemTraSoHoanThien(a[i]) == 1)
				swap(a[i], a[j]);
		}
	}

}

int KiemTraHoanVi260(int * a, int na, int * b, int nb)
{
	if (na != nb)
		return 0;
	SapXep255(a, na);
	SapXep255(b, nb);
	for (int i = 0; i < na; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}

void SapXep261(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			if (a[i] > a[j] && a[i] >= 0)
				swap(a[i], a[j]);
		}
	}
}

void SapXep262(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (a[i] > a[j] && a[i] % 2 == 0)
				swap(a[i], a[j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (a[i] > a[j] && a[i] % 2 != 0)
				swap(a[i], a[j]);
		}
	}
}

void SapXep263(int * a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				swap(a[i], a[j]);
			else if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
}

void SapXepTron264(int * a, int na, int * b, int nb)
{
	int nc = na + nb;
	int *c = new int[nc];
	int ViTriA =0, ViTriB = 0;
	SapXep255(a,na);
	SapXep255(b, nb);
	for (int i = 0; i < nc; i++)
	{
		if (ViTriA < na && ViTriB < nb)
		{
			if (a[ViTriA] <= b[ViTriB])
				c[i] = a[ViTriA++];
			else
				c[i] = b[ViTriB++];
		}
		else if (ViTriA == na)
			c[i] = a[ViTriA++];
		else
			c[i] = b[ViTriB++];
	}

}

void SapXepTron265(int * a, int na, int * b, int nb)
{
	int nc = na + nb;
	int *c = new int[nc];
	int ViTriA = 0, ViTriB = 0;
	SapXep256(a, na);
	SapXep256(b, nb);
	for (int i = 0; i < nc; i++)
	{
		if (ViTriA < na && ViTriB < nb)
		{
			if (a[ViTriA] >= b[ViTriB])
				c[i] = a[ViTriA++];
			else
				c[i] = b[ViTriB++];
		}
		else if (ViTriA == na)
			c[i] = a[ViTriA++];
		else
			c[i] = b[ViTriB++];
	}
}

void ThemPhanTu266(int * a, int &n,int x, int k)
{
	n = n + 1;
	for (int i = n - 1; i > k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
}

int TimViTriChen(int * a, int & n, int x)
{
	int i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			if (x > a[i])
				return 0;
		}
		else if (x >= a[i + 1] && x <= a[i - 1])
			return i + 1;
		i = i + 1;
	}
	return 0;
}

void ChenPhanTu(int * a, int n, int x,int k)
{
	for (int i = n - 1; i > k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
}

void NhapGiam267(int * a, int n)
{
	for (int i = 1; i < n; i++)
	{
		cout << "nhap a[" << i << "]= ";
		cin >> a[i];
		ChenPhanTu(a, n, a[i], TimViTriChen(a, n, a[i]));
	}
}

void TaoMangChanLe268(int * a, int * b, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			b[i] = 1;		// 1: chan
		else
			b[i] = 0;		// 0: le
	}
}

void ChenThem269(int * a, int &n, int x)
{
	int ViTri = 0;
	int i = 0;
	//tim vi tri chen
	while (i < n)
	{
		if (i == 0)
		{
			if (x < a[i])
			{
				ViTri = 0;
				break;
			}
		}
		else if (x <= a[i] && x >= a[i - 1])
		{
			ViTri = i;// 1 3 4 
			break;
		}
		i = i + 1;
	}
	n = n + 1;
	for (int i = n - 1; i > ViTri; i--)
	{
		a[i] = a[i - 1];
	}
	a[ViTri] = x;
}

void NhapTang270(int * a, int n)
{
}
