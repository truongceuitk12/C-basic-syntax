#include "Header581.h"

void Menu581()
{
	int Select;
	cout << "000    000    583    584    000    000    000    588    589    590" << endl;
	cout << "591    592    593    594    595    596    597    598    599    000" << endl;
	cout << "601    602    603    604    605    606    607    608    609    610" << endl;
	cout << "611    612    613    614    615    616    617    618    619    620" << endl;
	cout << "621    622    623    624    625    626    627    628    629    630" << endl;

	cout << "0: return: " << endl;
	cout << "\nEnter the Seclect of you: " << endl;
	cin >> Select;
	switch (Select)
	{
	case 583:
	{
		TamGiac t;
		cout << "\nNhap tam giac: " << endl;
		NhapTamGiac(t);
		cout << "\nTam giac vua nhap: " << endl;
		XuatTamGiac(t);
		cout << endl;
		break;
	}
	case 584:
	{
		TamGiac t;
		cout << "\nNhap tam giac: " << endl;
		NhapTamGiac(t);
		if (KiemTraTamGiac584(t) == 1)
			cout << "\nTam giac vua nhap hop le: " << endl;
		else
			cout << "\nTam giac vua nhap khong hop le: " << endl;
		break;
	}
	case 588:
	{
		cout << "\nNhap tam giac tinh toan: " << endl;
		TamGiac t;
		NhapTamGiac(t);
		cout << "\nHoanh do max trong tam giac thuoc dinh: " << endl;
		XuatDiem(TimHoanhDoMax588(t));
		cout << endl;
		break;
	}
	case 589:
	{
		cout << "\nNhap tam giac tinh toan: " << endl;
		TamGiac t;
		NhapTamGiac(t);
		cout << "\Tung do min trong tam giac thuoc dinh: " << endl;
		XuatDiem(TimTungDoMin589(t));
		cout << endl;
		break;
	}
	case 590:
	{
		TamGiac t;
		Diem d;
		cout << "\nNhap tam giac tinh toan: " << endl;
		NhapTamGiac(t);
		cout << "\nNhap diem tinh toan: " << endl;
		NhapDiem(d);
		cout << "\nTong khoang cach: " << endl;
		cout << TinhTongKhoangCach590(t, d) << endl;
		break;
	}
	case 591:
	{
		Diem d1, d2, d3, p;
		cout << "Nhap diem d1: " << endl;
		NhapDiem(d1);
		cout << "Nhap diem d2: " << endl;
		NhapDiem(d2);
		cout << "Nhap diem d3: " << endl;
		NhapDiem(d3);
		cout << "Nhap diem p: " << endl;
		NhapDiem(p);
		if (KiemTraDiemThuocTamGiac591(d1, d2, d3, p) == 1)
			cout << "Diem p thuoc tam giac d1, d2, d3: " << endl;
		else
			cout << "Diem p khong thuoc tam giac d1, d2, d3: " << endl;
		break;
	}
	case 592:
	{
		cout << "\nNhap tam giac de kiem tra: " << endl;
		TamGiac t;
		NhapTamGiac(t);
		int Check = DangTamGiac592(t);
		if (Check == 1)
			cout << "\nTam giac deu: " << endl;
		else if (Check == 2)
			cout << "\nTam giac vuong: " << endl;
		else if (Check == 3)
			cout << "\nTam giac vuong can: " << endl;
		else if (Check == 4)
			cout << "\nTam giac can: " << endl;
		else
			cout << "\nTam giac thuong: " << endl;
		break;

	}
	case 595:
	{
		NgayThangNam date;
		cout << "\nEnter your date: " << endl;
		NhapNgayThangNam(date);
		cout << "\nDate you already enter: " << endl;
		XuatNgayThangNam(date);
		break;
	}
	case 596:
	{
		NgayThangNam date;
		cout << "\nEnter your date: " << endl;
		NhapNgayThangNam(date);
		if (KiemTraNamNhuan(date.Nam) == 1)
			cout << "\nLeap year! " << endl;
		else
			cout << "\nNot leap year! " << endl;
		break;
	}
	case 597:
	{
		NgayThangNam date;
		cout << "\nEnter your date: " << endl;
		NhapNgayThangNam(date);
		cout << "\nThe number of date in year: " << endl;
		cout << ThuTuTrongNam597(date) << endl;
		break;
	}
	case 598:
	{
		NgayThangNam date;
		cout << "\nEnter your date: " << endl;
		NhapNgayThangNam(date);
		cout << "\nThe number of date from 1-1-1: " << endl;
		cout << ThuTuTrongNam598(date) << endl;
		break;
	}
	case 599:
	{
		int Year, OrdinalNumber;
		cout << "\nEnter your year: " << endl;
		cin >> Year;
		cout << "\nEnter your ordinal number: " << endl;
		cin >> OrdinalNumber;
		NgayThangNam Check;
		Check = TimNgay599(Year, OrdinalNumber);
		cout << "\nDate month year from you enter: " << endl;
		XuatNgayThangNam(Check);
		cout << endl;
		break;
	}
	case 600:
	{
		int SoThuTu;
		cout << "\nNhap so thu tu tu ngay 1-1-1: " << endl;
		cin >> SoThuTu;
		cout << "\nNgay cua so thu tu vua nhap: " << endl;
		XuatNgayThangNam(TimNgay600(SoThuTu));
		cout << endl;
		break;
	}
	case 601:
	{
		NgayThangNam Date;
		cout << "\nNhap ngay thang nam de tinh toan: " << endl;
		NhapNgayThangNam(Date);
		cout << "\nNgay ke tiep la: " << endl;
		XuatNgayThangNam(TimNgayKeTiep601(Date));
		cout << endl;
		break;
	}
	case 602:
	{
		NgayThangNam Date;
		cout << "\nNhap ngay thang nam de tinh toan: " << endl;
		NhapNgayThangNam(Date);
		cout << "\nNgay ke hom qua la: " << endl;
		XuatNgayThangNam(TimNgayTruocDo602(Date));
		cout << endl;
		break;
	}
	case 603:
	{
		NgayThangNam Date;
		cout << "\nNhap ngay thang nam de tinh toan: " << endl;
		NhapNgayThangNam(Date);
		int k;
		cout << "\nNhap k: " << endl;
		cin >> k;
		cout << "\nNgay ke tiep " << k << " ngay: " << endl;
		XuatNgayThangNam(TimNgayKeTiepKNgay603(Date, k));
		cout << endl;
		break;
	}
	case 604:
	{
		NgayThangNam Date;
		cout << "\nNhap ngay thang nam de tinh toan: " << endl;
		NhapNgayThangNam(Date);
		int k;
		cout << "\nNhap k: " << endl;
		cin >> k;
		cout << "\nNgay truoc do " << k << " ngay: " << endl;
		XuatNgayThangNam(TimNgayTruocDoKNgay604(Date, k));
		cout << endl;
		break;
	}
	case 605:
	{
		NgayThangNam Date1, Date2;
		cout << "\nNhap ngay thang nam Date1: " << endl;
		NhapNgayThangNam(Date1);
		cout << "\nNhap ngay thang nam Date2: " << endl;
		NhapNgayThangNam(Date2);
		int Dis = 0;
		Dis = KhoangCachGiua2Ngay605(Date1, Date2);
		cout << "\nKhoang cach giua 2 ngay Date1 va Date2: " << Dis << endl;
		break;
	}
	case 606:
	{
		NgayThangNam Date1, Date2;
		cout << "\nNhap ngay thang nam Date1: " << endl;
		NhapNgayThangNam(Date1);
		cout << "\nNhap ngay thang nam Date2: " << endl;
		NhapNgayThangNam(Date2);
		if (SoSanh2Ngay606(Date1, Date2) == 1)
			cout << "\nDate1 > Date2: " << endl;
		else
			cout << "\nDate1 < Date2: " << endl;
		break;
	}
	case 607:
	{
		Tinh t;
		NhapTinh607(t);
		XuatTinh607(t);
		break;
	}
	case 608:
	{
		HopSua *ds = new HopSua[3];
		for (int i = 0; i < 3; i++)
		{
			cout << "\nNhap thong tin hop sua: " << endl;
			NhapHopSua608(ds[i]);
		}
		cout << "\n\n=====XUAT THONG TIN VUA NHAP=====\n\n";
		for (int i = 0; i < 3; i++)
		{
			cout << "\nThong tin hop sua vua nhap: " << endl;
			XuatHopSua608(ds[i]);
		}
		delete[]ds;
		break;
	}
	case 609:
	{
		Ve v;
		cout << "\n\n===NHAP THONG TIN VE===\n\n";
		NhapVe609(v);
		cout << "\n\n===THONG TIN VE===\n\n";
		XuatVe609(v);
		break;
	}
	case 610:
	{
		cout << "\n\nNHAP THONG TIN MAT HANG\n\n";
		MatHang mh;
		NhapMatHang610(mh);
		cout << "\n\nTHONG TIN MAT HANG\n\n";
		XuatMatHang610(mh);
		break;
	}
	case 611:
	{
		ChuyenBay cb;
		cout << "\n\nNHAP THONG TIN CHUYEN BAY \n\n";
		NhapChuyenBay611(cb);
		cout << "\n\nTHONG TIN CHUYEN BAY\n\n";
		XuatChuyenBay611(cb);
		break;
	}
	case 612:
	{
		CauThu ct;
		cout << "\n\nNHAP THONG TIN CAU THU\n\n";
		NhapCauThu612(ct);
		cout << "\n\nTHONG TIN CAU THU VUA NHAP\n\n";
		XuatCauThu612(ct);
		break;
	}
	case 613:
	{
		DoiBong db;
		cout << "\n\n=====NHAP THONG TIN DOI BONG=====\n\n";
		NhapDoiBong613(db);
		cout << "\n\n======THONG TIN DOI BONG VUA NHAP=====\n\n";
		XuatDoiBong613(db);
		break;
		
	}
	case 614:
	{
		cout << "\n\nNHAP THONG TIN NHAN VIEN\n\n";
		NhanVien nv;
		NhapNhanVien614(nv);
		cout << "\n\nTHONG TIN NHAN VIEN VUA NHAP\n\n";
		XuatNhanVien614(nv);
		cout << endl;
		break;
	}
	case 615:
	{
		cout << "\n\nNHAP THONG TIN THI SINH\n\n";
		ThiSinh ts;
		NhapThiSinh615(ts);
		cout << "\n\nTHONG TIN THI SINH VUA NHAP\n\n";
		XuatThiSinh615(ts);
		break;
	}
	case 616:
	{
		cout << "\n\nNHAP THONG TIN LUAN VAN\n\n";
		LuanVan lv;
		NhapLuanVan616(lv);
		cout << "\n\nTHONG TIN LUAN VAN VUA NHAP\n\n";
		XuatLuanVan616(lv);
		cout << endl;
		break;
	}
	case 617:
	{
		cout << "\n\nNHAP THONG TIN HOC SINH\n\n";
		HocSinh hs;
		NhapHocSinh617(hs);
		cout << "\n\nXUAT THONG TIN HOC SINH VUA NHAP\n\n";
		XuatHocSinh617(hs);
		break;
	}
	case 618:
	{
		LopHoc lh;
		cout << "\n\nNHAP THONG TIN LOP HOC\n\n";
		NhapLopHoc618(lh);
		cout << "\n\nTHONG TIN LOP HOC VUA NHAP\n\n";
		XuatLopHoc618(lh);
		break;
	}
	case 619:
	{
		cout << "\n\nNHAP THONG TIN SO TIET KIEM\n\n";
		SoTietKiem stk;
		NhapSoTK619(stk);
		cout << "\n\nTHONG TIN SO TIET KIEM VUA NHAP\n\n";
		XuatSoTK619(stk);
		break;
	}
	case 620:
	{
		cout << "\n\nNHAP THONG TIN DAI LI\n\n";
		DaiLy dl;
		NhapDaiLy620(dl);
		cout << "\n\nTHONG TIN DAI LY VUA NHAP\n\n";
		XuatDaiLy620(dl);
		break;
	}
	default:
		break;
	}
}

void NhapDiem(Diem &d)
{
	cout << "Nhap ox: ";
	cin >> d.ox;
	cout << "Nhap oy: ";
	cin >> d.oy;
}

void XuatDiem(Diem d)
{
	cout << "(" << d.ox << " ; " << d.oy << ")" << endl;
}

float TinhKhoangCach2Diem(Diem x1, Diem x2)
{
	float d, a, b;
	a = (x1.ox - x2.ox)*(x1.ox - x2.ox);
	b = (x1.oy - x2.oy)*(x1.oy - x2.oy);
	d = sqrt(a + b);
	return d;
}

int KiemTraDieuKienTamGiac(TamGiac t)
{
	float d12, d13, d23;
	d12 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh2);
	d13 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh3);
	d23 = TinhKhoangCach2Diem(t.Dinh2, t.Dinh3);
	if ((d12 + d13 < d23) || (d13 + d23 < d12) || (d12 + d13 < d13))
		return 0;
	else if (KiemTra2DiemBangNhau(t.Dinh1, t.Dinh2) == 1)
		return 0;
	else if (KiemTra2DiemBangNhau(t.Dinh1, t.Dinh3) == 1)
		return 0;
	else if (KiemTra2DiemBangNhau(t.Dinh3, t.Dinh2) == 1)
		return 0;
	else
		return 1;
}

void NhapTamGiac(TamGiac &t)
{
	cout << "\nNhap dinh 1: " <<endl ;
	NhapDiem(t.Dinh1);
	cout << "\nNhap dinh 2: " << endl;
	NhapDiem(t.Dinh2);
	do
	{
		cout << "\nNhap dinh 3: " << endl;
		NhapDiem(t.Dinh3);
		if (KiemTraDieuKienTamGiac(t) == 0)
		{
			cout << "Nhap dinh 3: " << endl;
			NhapDiem(t.Dinh3);
		}
	} while (KiemTraDieuKienTamGiac(t) == 0);

}

void XuatTamGiac(TamGiac t)
{
	cout << "((" << t.Dinh1.ox << "," << t.Dinh1.oy << ")(" << t.Dinh2.ox << ", " << t.Dinh2.oy << ")(" << t.Dinh3.ox << "," << t.Dinh3.oy << "))" << endl;
}

int KiemTra2DiemBangNhau(Diem d1, Diem d2)
{
	if (d1.ox == d2.ox && d1.oy == d2.oy)
		return 1;
	else 
		return 0;
}

int KiemTraTamGiac584(TamGiac t)
{
	int Check;
	Check = KiemTraDieuKienTamGiac(t);
	return Check;
}

Diem TimHoanhDoMax588(TamGiac t)
{
	if (t.Dinh1.ox > t.Dinh2.ox &&t.Dinh1.ox > t.Dinh3.ox)
		return t.Dinh1;
	else if (t.Dinh2.ox > t.Dinh1.ox &&t.Dinh2.ox > t.Dinh3.ox)
		return t.Dinh2;
	else
		return t.Dinh3;
}

Diem TimTungDoMin589(TamGiac t)
{
	if (t.Dinh1.oy < t.Dinh2.oy &&t.Dinh1.oy < t.Dinh3.oy)
		return t.Dinh1;
	else if (t.Dinh2.oy < t.Dinh1.oy &&t.Dinh2.oy < t.Dinh3.oy)
		return t.Dinh2;
	else
		return t.Dinh3;
}

float TinhTongKhoangCach590(TamGiac t, Diem d)
{
	float SumDis, d1,d2,d3;
	d1 = TinhKhoangCach2Diem(d, t.Dinh1);
	d2 = TinhKhoangCach2Diem(d, t.Dinh2);
	d3 = TinhKhoangCach2Diem(d, t.Dinh3);
	SumDis = d1 + d2 + d3;
	return SumDis;
}

float GocGiua3Diem(Diem d1, Diem d2, Diem d3)
{
	Diem d21, d23;
	d21.ox = d1.ox - d2.ox;
	d21.oy = d1.oy - d2.oy;
	d23.ox = d3.ox - d2.ox;
	d23.oy = d3.oy - d2.oy;
	float Tu, Mau;
	Mau = sqrt(d21.oy*d21.oy + d21.ox*d21.ox)*sqrt(d23.oy*d23.oy + d23.ox*d23.ox);
	Tu = d21.ox *d23.ox + d21.oy*d23.oy;
	return (Tu/Mau);
}

float TinhDientich3Diem(Diem d1, Diem d2, Diem d3)
{
	float AreaTg;
	AreaTg = (d1.ox*(d2.oy - d3.oy) + d2.ox*(d3.oy - d1.oy) + d3.ox*(d1.oy - d2.oy)) / 2;
	return abs(AreaTg);
}

int KiemTraDiemThuocTamGiac591(Diem d1, Diem d2, Diem d3, Diem p)
{
	float AreaTg , Area1 , Area2, Area3 ;
	AreaTg = TinhDientich3Diem(d1, d2, d3);
	Area1 = TinhDientich3Diem(d1, d2, p);
	Area2 = TinhDientich3Diem(d2, d3, p);
	Area3 = TinhDientich3Diem(d3, d1, p);
	return (AreaTg == (Area1 + Area2 + Area3));
}

int DangTamGiac592(TamGiac t)
{
	float d12, d13, d23;
	d12 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh2);
	d13 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh3);
	d23 = TinhKhoangCach2Diem(t.Dinh2, t.Dinh3);
	//tam giac deu
	if (d12 == d23 && d13 == d23 && d12 == d13)
		return 1;
	//tam giac vuong
	else if (d12*d12 == d13 * d13 + d23 * d23 || d13 * d13 == d12 * d12 + d23 * d23 || d23 * d23 == d13 * d13 + d12 * d12)
		return 2;
	//tam giac vuong can
	else if (d12*d12 == d13 * d13 + d23 * d23 || d13 * d13 == d12 * d12 + d23 * d23 || d23 * d23 == d13 * d13 + d12 * d12)
	{
		if (d12 == d23 || d23 == d13 || d12 == d13)
			return 3;
	}
	//tam giac can
	else if (d12 == d23 || d23 == d13 || d12 == d13)
		return 4;
	else
		return 5;
}

int KiemTraNamNhuan(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 100 == 0 && x % 400 == 0))
		return 1;
	return 0;
}

void NhapNgayThangNam(NgayThangNam & a)
{
	cout << "Nhap nam: ";
	cin >> a.Nam;
	do
	{
		cout << "Nhap thang: ";
		cin >> a.Thang;
		if (a.Thang < 1 || a.Thang >12)
		{
			cout << "Nhap thang: ";
			cin >> a.Thang;
		}
	} while (a.Thang > 12 || a.Thang < 1);
	do
	{
		cout << "Nhap ngay: ";
		cin >> a.Ngay;
		if (a.Thang == 1 || a.Thang == 3 || a.Thang == 5 || a.Thang == 7 || a.Thang == 8 || a.Thang == 10 || a.Thang == 12)
		{
			if (a.Ngay < 1 || a.Ngay>31)
			{
				cout << "Nhap ngay: ";
				cin >> a.Ngay;
			}
		}
		else if (a.Thang == 4 || a.Thang == 6 || a.Thang == 9 || a.Thang == 11)
		{
			if (a.Ngay < 1 || a.Ngay>30)
			{
				cout << "Nhap ngay: ";
				cin >> a.Ngay;
			}
		}
		else if (a.Thang == 2)
		{
			if (KiemTraNamNhuan(a.Nam) == 1)
			{
				if (a.Ngay < 1 || a.Ngay>29)
				{
					cout << "Nhap ngay: ";
					cin >> a.Ngay;
				}
			}
			else
			{
				if (a.Ngay < 1 || a.Ngay>28)
				{
					cout << "Nhap ngay: ";
					cin >> a.Ngay;
				}
			}
		}
	} while ((a.Ngay < 1 || (a.Ngay > 31) && (a.Thang == 1 || a.Thang == 3 || a.Thang == 5 || a.Thang == 7 || a.Thang == 8 || a.Thang == 10 || a.Thang == 12)) || (a.Ngay > 30 && (a.Thang == 4 || a.Thang == 6 || a.Thang == 9 || a.Thang == 11)) || (a.Ngay > 28 && (a.Thang == 2 && KiemTraNamNhuan(a.Nam) == 0)) || (a.Ngay > 29 && (a.Thang == 2 && KiemTraNamNhuan(a.Nam) == 1)));
}

void XuatNgayThangNam(NgayThangNam a)
{
	cout << a.Ngay << " - " << a.Thang << " - " << a.Nam << endl;
}

int ThuTuTrongNam597(NgayThangNam n)
{
	int Count = 0;
	switch (n.Thang)
	{
	case 1:
	{
		Count = n.Ngay;
		break;
	}
	case 2:
	{
		Count = 31 + n.Ngay;
		break;
	}
	case 3:
	{
		Count = 60 + n.Ngay;
		break;
	}
	case 4:
	{
		Count = 91 + n.Ngay;
		break;
	}
	case 5:
	{
		Count = 121 + n.Ngay;
		break;
	}
	case 6: 
	{
		Count = 152 + n.Ngay;
		break;
	}
	case 7:
	{
		Count = 182 + n.Ngay;
		break;
	}
	case 8:
	{
		Count = 213 + n.Ngay;
		break;
	}
	case 9:
	{
		Count = 244 + n.Ngay;
		break;
	}
	case 10:
	{
		Count = 274 + n.Ngay;
		break;
	}
	case 11:
	{
		Count = 305 + n.Ngay;
		break;
	}
	case 12:
	{
		Count = 335 + n.Ngay;
		break;
	}
	default:
		break;
	}
	if (n.Thang > 2 && KiemTraNamNhuan(n.Nam) != 1)
		Count = Count - 1;
	return Count;
}

double ThuTuTrongNam598(NgayThangNam n)
{
	if (n.Nam > 0)
	{
		double Count = 0;
		int Times = 0;
		Times = n.Nam / 4;
		if (n.Thang > 2)
		{
			Count = Times + (n.Nam - 1) * 365 + ThuTuTrongNam597(n)-2;
		}
		else
			Count = Times + (n.Nam - 1) * 365 + ThuTuTrongNam597(n) - 1;
		return Count;
	}
	else
		return 0;
}

NgayThangNam TimNgay599(int Year, int OrdinalNumber)
{
	NgayThangNam Temp;
	//leap year
	if (KiemTraNamNhuan(Year) == 1)
	{
		if (OrdinalNumber > 0 && OrdinalNumber <= 31)
		{
			Temp.Thang = 1;
			Temp.Ngay = OrdinalNumber;
		}
		else if (OrdinalNumber <= 60)
		{
			Temp.Thang = 2;
			Temp.Ngay = OrdinalNumber-31;
		}
		else if (OrdinalNumber <= 91)
		{
			Temp.Thang = 3;
			Temp.Ngay = OrdinalNumber - 60;
		}
		else if (OrdinalNumber <= 121)
		{
			Temp.Thang = 4;
			Temp.Ngay = OrdinalNumber - 91;
		}
		else if (OrdinalNumber <= 152)
		{
			Temp.Thang = 5;
			Temp.Ngay = OrdinalNumber - 121;
		}
		else if (OrdinalNumber <= 182)
		{
			Temp.Thang = 6;
			Temp.Ngay = OrdinalNumber - 152;
		}
		else if (OrdinalNumber <= 213)
		{
			Temp.Thang = 7;
			Temp.Ngay = OrdinalNumber - 152;
		}
		else if (OrdinalNumber <= 244)
		{
			Temp.Thang = 8;
			Temp.Ngay = OrdinalNumber - 213;
		}
		else if (OrdinalNumber <= 274)
		{
			Temp.Thang = 9;
			Temp.Ngay = OrdinalNumber - 244;
		}
		else if (OrdinalNumber <= 305)
		{
			Temp.Thang = 10;
			Temp.Ngay = OrdinalNumber - 244;
		}
		else if (OrdinalNumber <= 60)
		{
			Temp.Thang = 11;
			Temp.Ngay = OrdinalNumber - 305;
		}
		else 
		{
			Temp.Thang = 12;
			Temp.Ngay = OrdinalNumber - 335;
		}
	}
	//not leap year
	else
	{
		if (OrdinalNumber > 0 && OrdinalNumber <= 31)
		{
			Temp.Thang = 1;
			Temp.Ngay = OrdinalNumber;
		}
		else if (OrdinalNumber <= 59)
		{
			Temp.Thang = 2;
			Temp.Ngay = OrdinalNumber - 31;
		}
		else if (OrdinalNumber <= 90)
		{
			Temp.Thang = 3;
			Temp.Ngay = OrdinalNumber - 59;
		}
		else if (OrdinalNumber <= 120)
		{
			Temp.Thang = 4;
			Temp.Ngay = OrdinalNumber - 90;
		}
		else if (OrdinalNumber <= 151)
		{
			Temp.Thang = 5;
			Temp.Ngay = OrdinalNumber - 120;
		}
		else if (OrdinalNumber <= 181)
		{
			Temp.Thang = 6;
			Temp.Ngay = OrdinalNumber - 151;
		}
		else if (OrdinalNumber <= 212)
		{
			Temp.Thang = 7;
			Temp.Ngay = OrdinalNumber - 181;
		}
		else if (OrdinalNumber <= 243)
		{
			Temp.Thang = 8;
			Temp.Ngay = OrdinalNumber - 212;
		}
		else if (OrdinalNumber <= 273)
		{
			Temp.Thang = 9;
			Temp.Ngay = OrdinalNumber - 243;
		}
		else if (OrdinalNumber <= 304)
		{
			Temp.Thang = 10;
			Temp.Ngay = OrdinalNumber - 273;
		}
		else if (OrdinalNumber <= 334)
		{
			Temp.Thang = 11;
			Temp.Ngay = OrdinalNumber - 304;
		}
		else
		{
			Temp.Thang = 12;
			Temp.Ngay = OrdinalNumber - 334;
		}
	}
	Temp.Nam = Year;
	return Temp;
}

NgayThangNam TimNgay600(int OrdinalNukmber)
{
	int Check = 0;
	NgayThangNam Date;
	Date.Nam = 1;
	Date.Thang = 1;
	Date.Ngay = 1;
	while(Check < OrdinalNukmber-1)
	{
		TimNgayKeTiep601(Date);
		Check++;
	}
	return Date;
}

NgayThangNam TimNgayKeTiep601(NgayThangNam &Date)
{
	
	if (Date.Thang == 12 && Date.Ngay == 31)
	{
		Date.Nam = Date.Nam + 1;
		Date.Ngay = 1;
		Date.Thang = 1;
	}
	else
	{
		int ThuTu;
		ThuTu = ThuTuTrongNam597(Date) + 1;
		Date = TimNgay599(Date.Nam, ThuTu);
	}
	return Date;
}

NgayThangNam TimNgayTruocDo602(NgayThangNam & Date)
{
	if (Date.Thang == 1 && Date.Ngay == 1)
	{
		Date.Nam = Date.Nam - 1;
		Date.Ngay = 31;
		Date.Thang = 12;
	}
	else
	{
		int ThuTu;
		ThuTu = ThuTuTrongNam597(Date) - 1;
		Date = TimNgay599(Date.Nam, ThuTu);
	}
	return Date;
}

NgayThangNam TimNgayKeTiepKNgay603(NgayThangNam & Date, int k)
{
	while (k > 0)
	{
		TimNgayKeTiep601(Date);
		k--;
	}
	return Date;
}

NgayThangNam TimNgayTruocDoKNgay604(NgayThangNam & Date, int k)
{
	while (k > 0)
	{
		TimNgayTruocDo602(Date);
		k--;
	}
	return Date;
}

int KhoangCachGiua2Ngay605(NgayThangNam N1, NgayThangNam N2)
{
	int Res;
	Res = abs(ThuTuTrongNam597(N1) - ThuTuTrongNam597(N2));
	return Res;
}

int SoSanh2Ngay606(NgayThangNam N1, NgayThangNam N2)
{
	double Var1, Var2;
	Var1 = ThuTuTrongNam598(N1);
	Var2 = ThuTuTrongNam598(N2);
	if (Var1 > Var2)
		return 1;
	else
		return -1;
}

void NhapTinh607(Tinh & t)
{
	cout << "\nNhap ma tinh: " << endl;
	cin >> t.MaTinh;
	cout << "\nNhap ten tinh: " << endl;
	cin.ignore(1);
	gets_s(t.TenTinh);
	cout << "\nNhap dan so: " << endl;
	cin >> t.DanSo;
	cout << "\nNhap dien tich: " << endl;
	cin >> t.DienTich;
}

void XuatTinh607(Tinh t)
{
	cout << "\nMa tinh: " << t.MaTinh << endl;
	cout << "Ten tinh: " << t.TenTinh << endl;
	cout << "Dan so: " << t.DanSo << endl;
	cout << "Dien tich: " << t.DienTich << endl;
}

void NhapHopSua608(HopSua & hs)
{
	cin.ignore(1);
	cout << "Nhap nhan hieu: ";
	gets_s(hs.NhanHieu);
	cout << "Nhap trong luong: ";
	cin >> hs.TrongLuong;
	cout << "Nhap han su dung: " << endl;
	NhapNgayThangNam(hs.HSD);
}

void XuatHopSua608(HopSua hs)
{
	cout << "Nhan hieu: " << hs.NhanHieu << endl;
	cout << "Trong luong: " << hs.TrongLuong << endl;
	cout << "Han su dung: ";
	XuatNgayThangNam(hs.HSD);
	cout << endl;
}

void NhapThoiGian(ThoiGian & t)
{
	do
	{
		cout << "Nhap gio: ";
		cin >> t.Gio;
		if (t.Gio < 0 || t.Gio>23)
		{
			cout << "Nhap lai gio: ";
			cin >> t.Gio;
		}
	} while (t.Gio<0 ||t.Gio>24);
	do
	{
		cout << "Nhap phut: ";
		cin >> t.Phut;
		if (t.Phut < 0 || t.Phut>59)
		{
			cout << "Nhap lai Phut: ";
			cin >> t.Phut;
		}
	} while (t.Phut < 0 || t.Phut>59);
	do
	{
		cout << "Nhap giay: ";
		cin >> t.Giay;
		if (t.Giay < 0 || t.Giay>59)
		{
			cout << "Nhap lai Giay: ";
			cin >> t.Giay;
		}
	} while (t.Giay < 0 || t.Giay>59);
}

void XuatThoiGian(ThoiGian t)
{
	cout << t.Gio << "h" << t.Phut << "'" << t.Giay << "''" << endl;
}

void NhapVe609(Ve & v)
{
	cin.ignore(1);
	cout << "Nhap ten phim: ";
	gets_s(v.TenPhim);
	cout << "Nhap gia ve: ";
	cin >> v.GiaVe;
	cout << "Nhap xuat chieu: " << endl;
	NhapThoiGian(v.XuatChieu);
	cout << "Nhap ngay chieu: " << endl;
	NhapNgayThangNam(v.NgayXem);	
}

void XuatVe609(Ve v)
{
	cout << "Ten phim: " << v.TenPhim << endl;
	cout << "Gia ve: " << v.GiaVe << endl;
	cout << "Xuat chieu: ";
	XuatThoiGian(v.XuatChieu);
	cout << "Ngay xem: ";
	XuatNgayThangNam(v.NgayXem);
}

void NhapMatHang610(MatHang & mh)
{
	cin.ignore(1);
	cout << "Nhap ten mat hang: ";
	gets_s(mh.TenMatHang);
	cout << "Nhap don gian: ";
	cin >> mh.DonGian;
	cout << "Nhap so luong ton: ";
	cin >> mh.SoLuongTon;
}

void XuatMatHang610(MatHang mh)
{
	cout << "Ten mat hang: " << mh.TenMatHang << endl;
	cout << "Don gian: " << mh.DonGian << endl;
	cout << "So luong ton kho: " << mh.SoLuongTon << endl;
}

void NhapChuyenBay611(ChuyenBay & cb)
{
	cin.ignore(1);
	cout << "Nhap ma chuyen bay (char): ";
	gets_s(cb.Ma);
	cout << "Nhap noi di (char): ";
	gets_s(cb.NoiDi);
	cout << "Nhap noi den (char): ";
	gets_s(cb.NoiDen);
	cout << "Nhap ngay bay: "<<endl;
	NhapNgayThangNam(cb.NgayBay);
	cout << "Nhap gio bay: " << endl;
	NhapThoiGian(cb.GioBay);
	
}

void XuatChuyenBay611(ChuyenBay cb)
{
	cout << "Ma chuyen bay: " << cb.Ma << endl;
	cout << "Ngay bay: " << endl;
	XuatNgayThangNam(cb.NgayBay);
	cout << "Gio bay: " << endl;
	XuatThoiGian(cb.GioBay);
	cout << "Noi di: " << cb.NoiDi << endl;
	cout << "Noi den: " << cb.NoiDen << endl;
}

void NhapCauThu612(CauThu & ct)
{
	cout << "Nhap ma cau thu: ";
	cin.ignore(1);
	gets_s(ct.Ma);
	cout << "Nhap ten cau thu: ";
	gets_s(ct.Ten);
	cout << "Nhap ngay sinh: " << endl;
	NhapNgayThangNam(ct.NgaySinh);
}

void XuatCauThu612(CauThu ct)
{
	cout << "Ma cau thu: " << ct.Ma << endl;
	cout << "Ten cau thu: " << ct.Ten << endl;
	cout << "Ngay sinh: ";
	XuatNgayThangNam(ct.NgaySinh);
	cout << endl;
}

void NhapDoiBong613(DoiBong & db)
{
	do
	{
		cout << "Nhap so luong cau thu: ";
		cin >> db.SoLuong;
		if (db.SoLuong < 1 || db.SoLuong>30)
		{
			cout << "Nhap lai so luong cau thu: ";
			cin >> db.SoLuong;
		}
	} while (db.SoLuong<1 || db.SoLuong>30);
	cin.ignore(1);
	cout << "Nhap ma doi bong: ";
	gets_s(db.Ma);
	cout << "Nhap ten doi bong: ";
	gets_s(db.Ten);
	db.DanhSach = new CauThu[db.SoLuong];
	for (int i = 0; i < db.SoLuong; i++)
	{
		cout << "Nhap cau thu thu " << i << endl;
		NhapCauThu612(db.DanhSach[i]);
	}
	
}

void XuatDoiBong613(DoiBong db)
{
	cout << "Ma doi bong: " << db.Ma << endl;
	cout << "Ten doi bong: " << db.Ten << endl;
	cout << "So luong cau thu: " << db.SoLuong << endl;
	for (int i = 0; i < db.SoLuong; i++)
	{
		cout << "\n\n==Cau thu thu " << i << "==\n\n";
		XuatCauThu612(db.DanhSach[i]);
	}
}

void NhapNhanVien614(NhanVien & nv)
{
	cin.ignore(1);
	cout << "Nhap ma nhan vien: ";
	gets_s(nv.Ma);
	cout << "Nhap ten nhan vien: ";
	gets_s(nv.Ten);
	cout << "Nhap luong nhan vien: ";
	cin >> nv.Luong;
}

void XuatNhanVien614(NhanVien nv)
{
	cout << "Ma nhan vien: " << nv.Ma << endl;
	cout << "Ten nhan vien: " << nv.Ten << endl;
	cout << setprecision(9)<< showpoint;
	cout << "Luong nhan vien: " << nv.Luong << endl;
}

void NhapThiSinh615(ThiSinh & ts)
{
	cin.ignore(1);
	cout << "Nhap ma:";
	gets_s(ts.Ma);
	cout << "Nhap ho ten: ";
	gets_s(ts.HoTen);
	cout << "Nhap diem toan: ";
	cin >> ts.DiemToan;
	cout << "Nhap diem ly: ";
	cin >> ts.DiemLy;
	cout << "Nhap diem hoa: ";
	cin >> ts.DiemHoa;
	ts.DiemTong = ts.DiemHoa + ts.DiemLy + ts.DiemToan;
}

void XuatThiSinh615(ThiSinh ts)
{
	cout << "Ma: " << ts.Ma << endl;
	cout << "Ho Ten:" << ts.HoTen << endl;
	cout << "Diem toan: " << ts.DiemToan << endl;
	cout << "Diem ly: " << ts.DiemLy << endl;
	cout << "Diem hoa: " << ts.DiemHoa << endl;
	cout << "Diem tong: " << ts.DiemTong << endl;
}

void NhapLuanVan616(LuanVan & lv)
{
	cin.ignore(1);
	cout << "Nhap ma luan van: ";
	gets_s(lv.Ma);
	cout << "Nhap ten luan van: ";
	gets_s(lv.TenLuanVan);
	cout << "Nhap ten thi sinh: ";
	gets_s(lv.TenThiSinh);
	cout << "Nhap ten giang vien hd : ";
	gets_s(lv.TenGiaoVien);
	cout << "Nhap nam thuc hien: ";
	cin >> lv.NamThucHien;
}

void XuatLuanVan616(LuanVan lv)
{
	cout << "Ma luan van: " << lv.Ma << endl;
	cout << "Ten luan van: " << lv.TenLuanVan << endl;
	cout << "Ten thi sinh: " << lv.TenThiSinh << endl;
	cout << "Ten giang vien hd: " << lv.TenGiaoVien << endl;
	cout << "Nam thuc hien: " << lv.NamThucHien << endl;
}

void NhapHocSinh617(HocSinh & hs)
{
	cin.ignore(1);
	cout << "Nhap ten: ";
	gets_s(hs.Ten);
	cout << "Nhap diem toan: ";
	cin >> hs.DiemToan;
	cout << "Nhap diem van: ";
	cin >> hs.DiemVan;
	hs.DiemTB = (float)(hs.DiemToan+ hs.DiemVan) / 2;
}

void XuatHocSinh617(HocSinh hs)
{
	cout << "Ten: " << hs.Ten << endl;
	cout << "Diem toan: " << hs.DiemToan << endl;
	cout << "Diem van: " << hs.DiemVan << endl;
	cout << "Diem TB: " << hs.DiemTB << endl;
}

void NhapLopHoc618(LopHoc & lh)
{
	do
	{
		cout << "Nhap so luong: ";
		cin >> lh.SoLuong;
		if (lh.SoLuong < 0 || lh.SoLuong>50)
		{
			cout << "Nhap lai so luong: ";
			cin >> lh.SoLuong;
		}
	} while (lh.SoLuong<0 || lh.SoLuong>50);
	lh.DanhSach = new HocSinh[lh.SoLuong];
	for (int i = 0; i < lh.SoLuong; i++)
	{
		cout << "\nNhap thong tin hoc sinh " << i + 1 << endl;
		NhapHocSinh617(lh.DanhSach[i]);
	}
}

void XuatLopHoc618(LopHoc lh)
{
	for (int i = 0; i < lh.SoLuong; i++)
	{
		cout << "\nThong tin hoc sinh thu: " << i + 1 << endl;
		XuatHocSinh617(lh.DanhSach[i]);
		cout << endl;
	}
}

void NhapSoTK619(SoTietKiem & stk)
{
	cin.ignore(1);
	cout << "Nhap ma stk: ";
	gets_s(stk.Ma);
	cout << "Nhap loai stk: ";
	gets_s(stk.Loai);
	cout << "Nhap ten khach hang: ";
	gets_s(stk.TenKH);
	cout << "Nhap so CMND: ";
	cin >> stk.CMND;
	cout << "Nhap ngay mo stk: " << endl;
	NhapNgayThangNam(stk.NgayMoSo);
	cout << "Nhap so tien: ";
	cin >> stk.SoTien;

}

void XuatSoTK619(SoTietKiem stk)
{
	cout << "Ma stk: " << stk.Ma << endl;
	cout << "Loai stk: " << stk.Loai << endl;
	cout << "Ten khach hang: " << stk.TenKH << endl;
	cout << "So CMND: " << stk.CMND << endl;
	cout << "Ngay mo stk: " << endl;
	XuatNgayThangNam(stk.NgayMoSo);
	cout << "So tien: " << stk.SoTien << endl;
}

void NhapDaiLy620(DaiLy & dl)
{
	cin.ignore(1);
	cout << "Nhap ma dl: ";
	gets_s(dl.Ma);
	cout <<"Nhap ten: ";
	gets_s(dl.Ten);
	cout << "Nhap dia chi: ";
	gets_s(dl.DiaChi);
	cout << "Nhap Email: ";
	gets_s(dl.Email);
	cout << "Nhap sdt: ";
	cin >> dl.DienThoai;
	cout << "Nhap ngay tiep nhan: " << endl;
	NhapNgayThangNam(dl.NgayTiepNhan);
}

void XuatDaiLy620(DaiLy dl)
{
	cout << "Ma dl: " << dl.Ma << endl;
	cout << "Ten dl: " << dl.Ten << endl;
	cout << "Dia chi dl: " << dl.DiaChi << endl;
	cout << "Email dl: " << dl.Email << endl;
	cout << "So dien thoai dl: " << dl.DienThoai << endl;
	cout << "Ngay tiep nhan: " << endl;
	XuatNgayThangNam(dl.NgayTiepNhan);
}

