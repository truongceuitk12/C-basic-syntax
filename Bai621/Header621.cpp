#include "Header621.h"

void Menu621()
{
	int Select;
	cout << "621   622   623   624   625   626   627   628   629   630" << endl;

	cout << "0 return:" << endl;
	cout << "Enter the select: ";
	cin >> Select;
	switch (Select)
	{
	case 621:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangDiem621(md, n);
		delete[]md;
		break;
	}
	case 622:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangDiem621(md, n);
		cout << "\n======XUAT======\n" << endl;
		XuatMangDiem622(md, n);
		delete[]md;
		break;
	}
	case 623:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangDiem621(md, n);
		int Dem;
		Dem = Dem623(md, n);
		cout << "So luong phan tu co hoanh do duong: " << Dem << endl;
		delete[]md;
		break;
	}
	case 624:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangDiem621(md, n);
		int Dem = 0;
		Dem = Dem624(md, n);
		cout << "So luong phan tu khac: " << Dem << endl;
		delete[]md;
		break;
	}
	case 625:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangDiem621(md, n);
		cout << "Diem co tung do max: " << endl;
		XuatDiem(TimMaxOY625(md, n));
		delete[]md;
		break;
	}
	case 626:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangDiem621(md, n);
		cout << "Diem gan tam O nhat: " << endl;
		XuatDiem(TimGanO626(md, n));
		delete[]md;
		break;
	}
	case 627:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangDiem621(md, n);
		cout << "Diem gan tam O nhat: " << endl;
		XuatDiem(TimXaO627(md, n));
		delete[]md;
		break;
	}
	case 628:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangKhongLap(md, n);
		cout << "2 diem gan nhau nhat trong mang diem: " << endl;
		Diem d1, d2;
		d1 = md[0];
		d2 = md[1];
		Tim2DiemGanNhat628(md, n, d1, d2);
		cout << "diem 1: " << endl;
		XuatDiem(d1);
		cout << "diem 2: " << endl;
		XuatDiem(d2);

		delete[]md;
		break;
	}
	case 629:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangKhongLap(md, n);
		cout << "2 diem xa nhau nhat trong mang diem: " << endl;
		Diem d1, d2;
		d1 = md[0];
		d2 = md[1];
		Tim2DiemXaNhat629(md, n, d1, d2);
		cout << "diem 1: " << endl;
		XuatDiem(d1);
		cout << "diem 2: " << endl;
		XuatDiem(d2);

		delete[]md;
		break;
	}
	case 630:
	{
		cout << "\n======NHAP======\n" << endl;
		Diem *md;
		int n;
		cout << "Nhap so luong phan tu n: ";
		cin >> n;
		md = new Diem[n];
		NhapMangKhongLap(md, n);
		TamGiacDocLap630(md, n);
		delete[]md;
		break;
	}
	default:
		break;
	}
}

void NhapDiem(Diem &d)
{
	cout << "Nhap OX: ";
	cin >> d.OX;
	cout << "Nhap OY: ";
	cin >> d.OY;
}

void XuatDiem(Diem d)
{
	cout << "(" << d.OX << "," << d.OY << ")" << endl;
}

int KiemTra2DiemKhac(Diem d1, Diem d2)
{
	if (d1.OX == d2.OX && d1.OY == d2.OY)
		return 0;
	return 1;
}

void NhapMangDiem621(Diem * md, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap diem thu: " << i << endl;
		NhapDiem(md[i]);
	}
}

void XuatMangDiem622(Diem * md, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDiem thu: " << i << endl;
		XuatDiem(md[i]);
	}
}

int Dem623(Diem * md, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (md[i].OX > 0)
			Dem++;
	}
	return Dem;
}

int Dem624(Diem * md, int n)
{
	int a[100]  ;
	for (int i = 0; i < 100; i++)
	{
		a[i] = 1;
	}
	int Dem = n;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (md[i].OX == md[j].OX && md[i].OY == md[j].OY && a[j] == 1)
			{
				Dem--;
				a[j] = 0;
			}
		}
		
	}
	return Dem;
}

Diem TimMaxOY625(Diem * md, int n)
{
	Diem Max;
	Max = md[1];
	for (int i = 0; i < n; i++)
	{
		if (md[i].OY > Max.OY)
		{
			Max = md[i];
		}
	}
	return Max;
}

float KhoangCach2Diem(Diem x1, Diem x2)
{
	float d, a, b;
	a = (x1.OX - x2.OX)*(x1.OX - x2.OX);
	b = (x1.OY - x2.OY)*(x1.OY - x2.OY);
	d = sqrt(a + b);
	return d;
}

Diem TimGanO626(Diem * md, int n)
{
	Diem Min;
	Diem O;
	O.OX = 0;
	O.OY = 0;
	float fMin;
	Min = md[0];
	fMin = KhoangCach2Diem(O, Min);
	
	for (int i = 0; i < n; i++)
	{
		if (KhoangCach2Diem(O, md[i])<fMin)
		{
			Min = md[i];
			fMin = KhoangCach2Diem(O, md[i]);
		}		
	}
	return Min;
}

Diem TimXaO627(Diem * md, int n)
{
	Diem Max;
	Diem O;
	O.OX = 0;
	O.OY = 0;
	float fMax;
	Max = md[0];
	fMax = KhoangCach2Diem(O, Max);

	for (int i = 0; i < n; i++)
	{
		if (KhoangCach2Diem(O, md[i]) > fMax)
		{
			Max = md[i];
			fMax = KhoangCach2Diem(O, md[i]);
		}
	}
	return Max;
}

int KiemTraDuyNhat(Diem * md, int n, Diem d)
{
	for (int i = 0; i < n; i++)
	{
		if (md[i].OX == d.OX && md[i].OY==d.OY)
			return 0;
	}
	return 1;
}

void NhapMangKhongLap(Diem * md, int n)
{
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "\nNhap diem thu: " << i << endl;
			NhapDiem(md[i]);
			if (KiemTraDuyNhat(md, i, md[i]) == 0)
			{
				cout << "\nNhap lai diem thu: " << i << endl;
				NhapDiem(md[i]);
			}
		} while (KiemTraDuyNhat(md,i,md[i])==0);
		
	}
}

void Tim2DiemGanNhat628(Diem * md, int n, Diem &d1, Diem &d2)
{
	float DisMin;
	DisMin = KhoangCach2Diem(md[0], md[1]);
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (KhoangCach2Diem(md[i], md[j]) < DisMin)
			{
				DisMin = KhoangCach2Diem(md[i], md[j]);
				d1 = md[i];
				d2 = md[j];
			}
		}
	}
}

void Tim2DiemXaNhat629(Diem * md, int n, Diem & d1, Diem & d2)
{
	float DisMax;
	DisMax = KhoangCach2Diem(md[0], md[1]);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (KhoangCach2Diem(md[i], md[j]) > DisMax)
			{
				DisMax = KhoangCach2Diem(md[i], md[j]);
				d1 = md[i];
				d2 = md[j];
			}
		}
	}
}

float TinhDientich3Diem(Diem d1, Diem d2, Diem d3)
{
	float AreaTg;
	AreaTg = (d1.OX*(d2.OY - d3.OY) + d2.OX*(d3.OY - d1.OY) + d3.OX*(d1.OY - d2.OY)) / 2;
	return abs(AreaTg);
}

int KiemTraDiemThuocTamGiac(Diem d1, Diem d2, Diem d3, Diem p)
{
	float AreaTg, Area1, Area2, Area3;
	AreaTg = TinhDientich3Diem(d1, d2, d3);
	Area1 = TinhDientich3Diem(d1, d2, p);
	Area2 = TinhDientich3Diem(d2, d3, p);
	Area3 = TinhDientich3Diem(d3, d1, p);
	return (AreaTg == (Area1 + Area2 + Area3));
}

int KiemTraDocLap630(Diem * md, int n, Diem d1, Diem d2, Diem d3)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTra2DiemKhac(md[i],d1)==1 && KiemTra2DiemKhac(md[i], d2) == 1 && KiemTra2DiemKhac(md[i], d3) == 1 )
		{
			if (KiemTraDiemThuocTamGiac(d1, d2, d3, md[i]) == 1)
				return 0;
		}
	}
	return 1;
}

void TamGiacDocLap630(Diem * md, int n)
{
	for (int i = 0; i < n-2; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				if (KiemTraDocLap630(md,n,md[i],md[j],md[k])==1)
				{
					cout << "Tam giac doc lap khong chua " << n - 3 << " diem duoc tao thanh tu cac diem: " << endl;
					cout << "Diem 1: " << endl;
					XuatDiem(md[i]);
					cout << "Diem 2: " << endl;
					XuatDiem(md[j]);
					cout << "Diem 3: " << endl;
					XuatDiem(md[k]);
					goto c;
				}
			}
		}
	}
c:;
}
