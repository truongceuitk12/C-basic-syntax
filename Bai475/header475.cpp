#include"Header475.h"

void menu475()
{
	int Select;
	cout << "475    476    477    478    479    480" << endl;
	cout << "481    482    483    484    485    486    487    488    489    490" << endl;
	cout << "491    492    493    494    495    000    000    498    499    500" << endl;
	cout << "501    502    503    504    505    506    507    508    509    510" << endl;
	cout << "511    512    513    514    515    516    517    518    519    520" << endl;
	cout << "521    522    523    524    525    526    527    528    529    530" << endl;
	cout << "531    532    533    534    535    536    537    538    539    540" << endl;
	cout << "541    542    543    544    545    546    547    548    549    550" << endl;
	cout << "551    552    553    554    000    000    000    558    559    560" << endl;
	cout << "561    562    563    564    565    000    000    000    569    570" << endl;
	cout << "571    572    000    000    000   576    577    578    579    580" << endl;

	cout << "0: thoat " << endl;
	cout << "Nhap lua chon cua ban: " << endl;
	cin >> Select;
	switch (Select)
	{
	case 0:
	{
		break;
	}
	case 475:
	{
		PhanSo Example;
		NhapPhanSo(Example);
		cout << "Phan so vua nhap: ";
		XuatPhanSo(Example);
		break;
	}
	case 476:
	{
		HonSo Example;
		NhapHonSo(Example);
		cout << "Hon so vua nhap: ";
		XuatHonSo(Example);
		break;
	}
	case 477:
	{
		Diem Example;
		cout << "Nhap Diem: " << endl;
		NhapDiem(Example);
		cout << "Diem vua nhap: " << endl;
		XuatDiem(Example);
		break;
	}
	case 478:
	{
		cout << "Nhap diem 3D: " << endl;
		Diem3D Example;
		NhapDiem3D(Example);
		cout << "Diem 3D vua moi nhap: " << endl;
		XuatDiem3D(Example);
		break;
	}
	case 479:
	{
		cout << "Nhap don thuc: " << endl;
		DonThuc Example;
		NhapDonThuc(Example);
		cout << "Don thuc vua moi nhap: " << endl;
		XuatDonThuc(Example);
		break;
	}
	case 480:
	{
		cout << "Nhap da thuc: " << endl;
		DaThuc Example;
		NhapDaThuc(Example);
		cout << "Da thuc vua nhap: " << endl;
		XuatDaThuc(Example);
		delete[]Example.HeSo;
		break;
	}
	case 481:
	{
		cout << "Nhap ngay thang nam: " << endl;
		NgayThangNam Example;
		NhapNgayThangNam(Example);
		cout << "Ngay thang nam vua nhap: " << endl;
		XuatNgayThangNam(Example);
		break;
	}
	case 482:
	{
		cout << "Nhap phuong trinh duong thang: " << endl;
		PhuongTrinhDuongThang Example;
		NhapDuongThang(Example);
		cout << "Phuong trinh duong thang vua nhap: " << endl;
		XuatDuongThang(Example);
		break;
	}
	case 483:
	{
		cout << "Nhap duong tron: " << endl;
		DuongTron Example;
		NhapDuongTron(Example);
		cout << "Duong tron vua moi nhap: " << endl;
		XuatDuongTron(Example);
		break;
	}
	case 484:
	{
		cout << "Tinh chu vi dien tich duong tron: " << endl;
		DuongTron Example;
		TinhChuViDienTich(Example);
		break;
	}
	case 485:
	{
		cout << "Nhap tam giac: " << endl;
		TamGiac Ex;
		NhapTamGiac(Ex);
		cout << "\nTam giac vua nhap: " << endl;
		XuatTamGiac(Ex);

		cout << "\nDien tich tam giac vua nhap: ";
		cout << TinhDienTichTamGiac(Ex);

		cout << "\nChu vi tam giac vua nhap: ";
		cout << TinhChuViTamGiac(Ex);

		cout << "\nTrong tam tam giac vua nhap: ";
		Diem GG;
		GG = TimTrongTam(Ex);
		XuatDiem(GG);
		break;
	}
	case 486:
	{
		DonThuc x1, x2;
		cout << "\nNhap don thuc 1: " << endl;
		NhapDonThuc(x1);
		cout << "\nNhap don thuc 2: " << endl;
		NhapDonThuc(x2);
		cout << "\nTich 2 don thuc x1*x2= ";
		XuatDonThuc(TichHaiDonThuc486(x1, x2));
		break;
	}
	case 487:
	{
		cout << "\nNhap don thu de tinh dao ham: " << endl;
		DonThuc Example;
		NhapDonThuc(Example);
		Example = TinhDaoHamDonThuc487(Example);
		cout << "\nDon thuc sau khi tinh dao ham: " << endl;
		XuatDonThuc(Example);
		break;
	}
	case 488:
	{
		DonThuc d1, d2;
		cout << "\nNhap don thuc d1: " << endl;
		NhapDonThuc(d1);
		cout << "\nNhap don thuc d2: " << endl;
		NhapDonThuc(d2);
		DonThuc Thuong;
		Thuong = TinhThuong2DonThuc488(d1, d2);
		cout << "\nd1/d2= ";
		XuatDonThuc(Thuong);
		break;
	}
	case 489:
	{
		DonThuc d;
		int Bac;
		cout << "\nNhap don thuc muon dao ham: " << endl;
		NhapDonThuc(d);
		cout << "\nNhap cap muon dao ham don thu: " << endl;
		cin >> Bac;
		DonThuc Temp;
		Temp = TinhDaoHamCapK489(d, Bac);
		cout << "\nDon thuc sau khi dao ham " << Bac << " lan: " << endl;
		XuatDonThuc(Temp);
		break;
	}
	case 490:
	{
		cout << "\nNhap don thuc muon tinh toan: " << endl;
		DonThuc d;
		NhapDonThuc(d);
		cout << "\nNhap x muon tinh: " << endl;
		int x;
		cin >> x;
		cout << "Gia tri cua don thuc voi x= " << x << ": ";
		float Values=0;
		Values = (float)(TinhGiaTriDonThuc490(d, x));
		cout << Values << endl;
		break;
	}
	case 491:
	{
		cout << "\nTinh toan 2 don thuc: " << endl;
		DonThuc d1, d2;
		cout << "\nNhap don thuc d1: " << endl;
		NhapDonThuc(d1);
		cout << "\nNhap don thuc d2: " << endl;
		NhapDonThuc(d2);
		DonThuc Tich;
		Tich = d1 * d2;
		cout << "\nTich cua hai don thuc d1 * d2 = " << endl;
		XuatDonThuc(Tich);
		break;
	}
	case 492:
	{
		cout << "\nTinh toan hai don thuc: " << endl;
		DonThuc d1, d2;
		cout << "\nNhap don thuc d1: " << endl;
		NhapDonThuc(d1);
		cout << "\nNhap don thuc d2: " << endl;
		NhapDonThuc(d2);
		DonThuc Thuong;
		Thuong = d1 / d2;
		cout << "\nThuong don thuc d1 / d2 = " << endl;
		XuatDonThuc(Thuong);
		break;
	}
	case 493:
	{
		cout << "\nTinh toan 2 da thuc: " << endl;
		DaThuc Da1, Da2;
		cout << "\nNhap da thuc Da1: " << endl;
		NhapDaThuc(Da1);
		cout << "\nNhap da thuc Da2: " << endl;
		NhapDaThuc(Da2);
		DaThuc Hieu;
		Hieu = TinhHieu2DaThuc493(Da1, Da2);
		cout << "\nHieu 2 da thuc Da1 - Da2: " << endl;
		XuatDaThuc(Hieu);
		break;
	}
	case 494:
	{
		cout << "\nTinh toan 2 da thuc: " << endl;
		DaThuc Da1, Da2;
		cout << "\nNhap da thuc Da1: " << endl;
		NhapDaThuc(Da1);
		cout << "\nNhap da thuc Da2: " << endl;
		NhapDaThuc(Da2);
		DaThuc Tong;
		Tong = TinhTong2DaThuc494(Da1, Da2);
		cout << "\nTong 2 da thuc Da1 - Da2: " << endl;
		XuatDaThuc(Tong);
		break;
	}
	case 495:
	{
		cout << "\nTinh toan 2 da thuc: " << endl;
		DaThuc Da1, Da2;
		cout << "\nNhap da thuc Da1: " << endl;
		NhapDaThuc(Da1);
		cout << "\nNhap da thuc Da2: " << endl;
		NhapDaThuc(Da2);
		DaThuc Tich;
		Tich = TinhTich2DaThuc495(Da1, Da2);
		cout << "\nTich 2 da thuc Da1 * Da2: " << endl;
		XuatDaThuc(Tich);
		break;
	}
	case 498:
	{
		cout << "\nTinh dao ham da thuc: " << endl;
		cout << "\nNhap da thuc tinh dao ham: " << endl;
		DaThuc d;
		NhapDaThuc(d);
		cout << "\nDa thuc sau khi dao ham: " << endl;
		TinhDaoHamDaThuc498(d);
		XuatDaThuc(d);
		break;
	}
	case 499:
	{
		cout << "\nTinh dao ham cap k cua da thu: " << endl;
		cout << "\nNhap da thuc can tinh: " << endl;
		DaThuc d;
		int k;
		NhapDaThuc(d);
		cout << "\nNhap so lan muon dao ham: " << endl;
		cin >> k;
		TinhDaoHamCapk499(d, k);
		cout << "\nDa thuc sau khi dao ham " << k << " lan: " << endl;
		XuatDaThuc(d);
		delete[]d.HeSo;
		break;
	}
	case 500:
	{
		cout << "\nTinh gia tri da thuc: " << endl;
		cout << "\nNhap da thuc de tinh gia tri: " << endl;
		DaThuc d;
		NhapDaThuc(d);
		float x;
		cout << "\nNhap gia tri cua x: " << endl;
		cin >> x;
		cout << "Gia tri cua da thuc voi x= " << x << endl;
		cout << TinhGiaTriDaThuc500(d, x);
		delete[]d.HeSo;
		break;
	}
	case 501:
	{
		cout << "\nTinh toan da thuc: " << endl;
		DaThuc d1, d2;
		cout << "\nNhap da thuc d1: " << endl;
		NhapDaThuc(d1);
		cout << "\nNhap da thuc d2: " << endl;
		NhapDaThuc(d2);
		DaThuc Tong;
		Tong = d1 + d2;
		cout << "\nTong da thuc d1 + d2: " << endl;
		XuatDaThuc(Tong);
		break;
	}
	case 502:
	{
		cout << "\nTinh toan da thuc: " << endl;
		DaThuc d1, d2;
		cout << "\nNhap da thuc d1: " << endl;
		NhapDaThuc(d1);
		cout << "\nNhap da thuc d2: " << endl;
		NhapDaThuc(d2);
		DaThuc Hieu;
		Hieu = d1 - d2;
		cout << "\nHieu da thuc d1 - d2: " << endl;
		XuatDaThuc(Hieu);
		break;
	}
	case 503:
	{
		cout << "\nTinh toan da thuc: " << endl;
		DaThuc d1, d2;
		cout << "\nNhap da thuc d1: " << endl;
		NhapDaThuc(d1);
		cout << "\nNhap da thuc d2: " << endl;
		NhapDaThuc(d2);
		DaThuc Tich;
		Tich = d1 * d2;
		cout << "\nTich da thuc d1 * d2: " << endl;
		XuatDaThuc(Tich);
		break;
	}
	case 506:
	{
		PhanSo p1;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		RutGonPhanSo506(p1);
		cout << "\nPhan so p1 sau khi rut gon: " << endl;
		XuatPhanSo(p1);
		break;

	}
	case 507:
	{
		cout << "\nTinh toan phan so: " << endl;
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		cout << "\nTong hai phan so p1 + p2 = " << endl;
		XuatPhanSo(TinhTongPhanSo507(p1, p2));
		break;
	}
	case 508:
	{
		cout << "\nTinh toan phan so: " << endl;
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		cout << "\nHieu hai phan so p1 - p2 = " << endl;
		XuatPhanSo(TinhHieuPhanSo508(p1, p2));
		break;
	}
	case 509:
	{
		cout << "\nTinh toan phan so: " << endl;
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		cout << "\nTich hai phan so p1 * p2 = " << endl;
		PhanSo Tich;
		Tich = TinhTichPhanSo509(p1, p2);
		XuatPhanSo(Tich);
		break;
	}
	case 510:
	{
		cout << "\nTinh toan phan so: " << endl;
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		cout << "\nThuong hai phan so p1 / p2 = " << endl;
		XuatPhanSo(TinhThuongPhanSo510(p1, p2));
		break;
	}
	case 511:
	{
		PhanSo p;
		cout << "\nNhap phan so p: " << endl;
		NhapPhanSo(p);
		if (KiemTraPhanSoToiGian511(p) == 1)
			cout << "P la phan so toi gian: " << endl;
		else
			cout << "P chua toi gian: " << endl;
		break;
	}
	case 512:
	{
		PhanSo p1, p2;
		cout << "\nNhap p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap p2: " << endl;
		NhapPhanSo(p2);
		cout << "\nPhan so truoc khi quy dong: " << endl;
		cout << "\np1= " << endl;
		XuatPhanSo(p1);
		cout << "\np2 = " << endl;
		XuatPhanSo(p2);
		cout << "\nPhan so sau khi quy dong: " << endl;
		QuyDongPhanSo512(p1, p2);
		cout << "\np1= " << endl;
		XuatPhanSo(p1);
		cout << "\np2 = " << endl;
		XuatPhanSo(p2);
		break;
	}
	case 513:
	{
		cout << "\nNhap phan so de kiem tra: " << endl;
		PhanSo p;
		NhapPhanSo(p);
		KiemTraPhanSoDuong513(p);
		if (KiemTraPhanSoDuong513(p) == 1)
			cout << "\nPhan so duong: " << endl;
		else cout << "\nPhan so am: " << endl;
		break;
	}
	case 514:
	{
		cout << "\nNhap phan so de kiem tra: " << endl;
		PhanSo p;
		NhapPhanSo(p);
		KiemTraPhanSoAm514(p);
		if (KiemTraPhanSoAm514(p) == 1)
			cout << "\nPhan so am: " << endl;
		else cout << "\nPhan so duong: " << endl;
		break;
	}
	case 515:
	{
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		int Check = SoSanh2PhanSo515(p1, p2);
		if (Check == 1)
			cout << "\nP1 > P2" << endl;
		else if (Check == -1)
			cout << "\nP2 > P1" << endl;
		else
			cout << "\nP1 = P2" << endl;
		break;
	}
	case 516:
	{
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		PhanSo Cal;
		Cal = p1 + p2;
		cout << "\ntong p1 + p2 = " << endl;
		XuatPhanSo(Cal);
		break;
	}
	case 517:
	{
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		PhanSo Cal;
		Cal = p1 - p2;
		cout << "\nHieu p1 - p2 = " << endl;
		XuatPhanSo(Cal);
		break;
	}
	case 518:
	{
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		PhanSo Cal;
		Cal = p1 * p2;
		cout << "\nTich p1 * p2 = " << endl;
		XuatPhanSo(Cal);
		break;
	}
	case 519:
	{
		PhanSo p1, p2;
		cout << "\nNhap phan so p1: " << endl;
		NhapPhanSo(p1);
		cout << "\nNhap phan so p2: " << endl;
		NhapPhanSo(p2);
		PhanSo Cal;
		Cal = p1 / p2;
		cout << "\nThuong p1 / p2 = " << endl;
		XuatPhanSo(Cal);
		break;
	}
	case 520:
	{
		cout << "\nNhap phan so: " << endl;
		PhanSo Exa;
		NhapPhanSo(Exa);
		cout << "\nPhan so ++Exa: " << endl;
		++Exa;
		XuatPhanSo(Exa);
		break;
	}
	case 521:
	{
		cout << "\nNhap phan so: " << endl;
		PhanSo Exa;
		NhapPhanSo(Exa);
		cout << "\nPhan so --Exa: " << endl;
		--Exa;
		XuatPhanSo(Exa);
		break;
	}
	case 525:
	{
		cout << "\nNhap hon so: " << endl;
		HonSo Exa;
		NhapHonSo(Exa);
		RutGonHonSo525(Exa);
		cout << "\nHon so sau khi rut gon: " << endl;
		XuatHonSo(Exa);
		break;
	}
	case 526:
	{
		HonSo h1, h2;
		cout << "\nNhap hon so h1: " << endl;
		NhapHonSo(h1);
		cout << "\nNhap hon so h2: " << endl;
		NhapHonSo(h2);
		HonSo Res;
		Res = Tong2HonSo526(h1, h2);
		cout << "\nTong 2 hon so h1 + h2: " << endl;
		XuatHonSo(Res);
		break;
	}
	case 527:
	{
		HonSo h1, h2;
		cout << "\nNhap hon so h1: " << endl;
		NhapHonSo(h1);
		cout << "\nNhap hon so h2: " << endl;
		NhapHonSo(h2);
		HonSo Res;
		Res = Hieu2HonSo527(h1, h2);
		cout << "\nHieu 2 hon so h1 - h2: " << endl;
		XuatHonSo(Res);
		break;
	}
	case 528:
	{
		HonSo h1, h2;
		cout << "\nNhap hon so h1: " << endl;
		NhapHonSo(h1);
		cout << "\nNhap hon so h2: " << endl;
		NhapHonSo(h2);
		HonSo Res;
		Res = Tich2HonSo528(h1, h2);
		cout << "\nTich 2 hon so h1 * h2: " << endl;
		XuatHonSo(Res);
		break;
	}
	case 529:
	{
		HonSo h1, h2;
		cout << "\nNhap hon so h1: " << endl;
		NhapHonSo(h1);
		cout << "\nNhap hon so h2: " << endl;
		NhapHonSo(h2);
		HonSo Res;
		Res = Thuong2HonSo529(h1, h2);
		cout << "\nThuong 2 hon so h1 / h2: " << endl;
		XuatHonSo(Res);
		break;
	}
	case 530:
	{
		cout << "\nNhap hon so de kiem tra: " << endl;
		HonSo Ex;
		NhapHonSo(Ex);
		if (KiemTraHonSoToiGian530(Ex) == 1)
			cout << "\nHon so toi gian: " << endl;
		else
			cout << "\nHon so chua toi gian: " << endl;
	}
	case 531:
	{
		HonSo h1, h2;
		cout << "\nNhap hon so h1: " << endl;
		NhapHonSo(h1);
		cout << "\nNhap hon so h2: " << endl;
		NhapHonSo(h2);
		QuyDong2HonSo531(h1, h2);
		cout << "\nHon so h1 sau khi quy dong: " << endl;
		XuatHonSo(h1);
		cout << "\nHon so h2 sau khi quy dong: " << endl;
		XuatHonSo(h2);
		break;
	}
	case 534:
	{
		SoPhuc Ex;
		cout << "\nNhap so phuc: " << endl;
		NhapSoPhuc533(Ex);
		cout << "\nSo phuc vua nhap: " << endl;
		XuatSoPhuc534(Ex);
		break;
	}
	case 535:
	{
		SoPhuc sp1, sp2;
		cout << "\nNhap so phuc sp1: " << endl;
		NhapSoPhuc533(sp1);
		cout << "\nNhap so phuc sp2: " << endl;
		NhapSoPhuc533(sp2);
		SoPhuc Res;
		Res = Tong2SoPhuc535(sp1, sp2);
		cout << "\nTong sp1 + sp2 = " << endl;
		XuatSoPhuc534(Res);
		break;
	}
	case 536:
	{
		SoPhuc sp1, sp2;
		cout << "\nNhap so phuc sp1: " << endl;
		NhapSoPhuc533(sp1);
		cout << "\nNhap so phuc sp2: " << endl;
		NhapSoPhuc533(sp2);
		SoPhuc Res;
		Res = Hieu2SoPhuc536(sp1, sp2);
		cout << "\nHieu sp1 - sp2 = " << endl;
		XuatSoPhuc534(Res);
		break;
	}
	case 537:
	{
		SoPhuc sp1, sp2;
		cout << "\nNhap so phuc sp1: " << endl;
		NhapSoPhuc533(sp1);
		cout << "\nNhap so phuc sp2: " << endl;
		NhapSoPhuc533(sp2);
		SoPhuc Res;
		Res = Tich2SoPhuc537(sp1, sp2);
		cout << "\nTich sp1 * sp2 = " << endl;
		XuatSoPhuc534(Res);
		break;
	}
	case 538:
	{
		SoPhuc sp1, sp2;
		cout << "\nNhap so phuc sp1: " << endl;
		NhapSoPhuc533(sp1);
		cout << "\nNhap so phuc sp2: " << endl;
		NhapSoPhuc533(sp2);
		SoPhuc Res;
		Res = Thuong2SoPhuc538(sp1, sp2);
		cout << "\nThuong sp1 / sp2 = " << endl;
		XuatSoPhuc534(Res);
		break;
	}
	case 539:
	{
		SoPhuc sp1;
		int n;
		cout << "\nNhap so phuc sp1: " << endl;
		NhapSoPhuc533(sp1);
		cout << "\nNhap bac muon tinh luy thua: " << endl;
		cin >> n;
		SoPhuc Res;
		Res = TichLuyThuaBacN539(sp1, n);
		cout << "\nLuy thua bac " << n << " cua so phuc: " << endl;
		XuatSoPhuc534(Res);
		break;

	}
	case 544:
	{
		Diem d1, d2;
		cout << "\nNhap diem d1: " << endl;
		NhapDiem(d1);
		cout << "\nNhap diem d2: " << endl;
		NhapDiem(d2);
		cout << "\nKhoang cach d1 - d2 theo OX: " << endl;
		cout << TinhKhoangCachTheoOX544(d1, d2) << endl;
		break;
	}
	case 545:
	{
		Diem d1, d2;
		cout << "\nNhap diem d1: " << endl;
		NhapDiem(d1);
		cout << "\nNhap diem d2: " << endl;
		NhapDiem(d2);
		cout << "\nKhoang cach d1 - d2 theo OX: " << endl;
		cout << TinhKhoangCachTheoOY545(d1, d2) << endl;
		break;
	}
	case 546:
	{
		cout << "\nNhap diem tinh doi xung: " << endl;
		Diem d;
		NhapDiem(d);
		cout << "\nDiem doi xung qua O: " << endl;
		Diem Temp = TimDiemDoiXungQuaO546(d);
		XuatDiem(Temp);
		break;

	}
	case 547:
	{
		Diem d;
		cout << "\nNhap diem d2: " << endl;
		NhapDiem(d);
		Diem Temp;
		Temp = TimDiemDoiXungQuaOX547(d);
		cout << "\nDiem doi xung qua OX: " << endl;
		XuatDiem(Temp);
		break;
	}
	case 548:
	{
		Diem d;
		cout << "\nNhap diem d2: " << endl;
		NhapDiem(d);
		Diem Temp;
		Temp = TimDiemDoiXungQuaOY548(d);
		cout << "\nDiem doi xung qua OY: " << endl;
		XuatDiem(Temp);
		break;
	}
	case 549:
	{
		cout << "\nNhap diem tinh doi xung qua y=x: " << endl;
		Diem d;
		NhapDiem(d);
		Diem Temp;
		Temp = TimDiemDoiXungQuaX549(d);
		cout << "\nDiem doi xung qua y=x: " << endl;
		XuatDiem(Temp);
		break;
	}
	case 550:
	{
		cout << "\nNhap diem tinh doi xung qua y=x: " << endl;
		Diem d;
		NhapDiem(d);
		Diem Temp;
		Temp = TiemDiemDoiXungQua_X550(d);
		cout << "\nDiem doi xung qua y=x: " << endl;
		XuatDiem(Temp);
		break;
	}
	case 551:
	{
		cout << "\nNhap diem de kiem tra thuoc goc phan tu thu I: " << endl;
		Diem d;
		NhapDiem(d);
		if (KiemTraThuocPhanTuI551(d) == 1)
			cout << "\nThuoc goc phan tu thu nhat: " << endl;
		else
			cout << "\nKhong thoc goc phan tu thu nhat: " << endl;
		break;
	}
	case 552:
	{
		cout << "\nNhap diem de kiem tra thuoc goc phan tu thu II: " << endl;
		Diem d;
		NhapDiem(d);
		if (KiemTraThuocPhanTuII552(d) == 1)
			cout << "\nThuoc goc phan tu thu hai: " << endl;
		else
			cout << "\nKhong thoc goc phan tu thu hai: " << endl;
		break;
	}
	case 553:
	{
		cout << "\nNhap diem de kiem tra thuoc goc phan tu thu III: " << endl;
		Diem d;
		NhapDiem(d);
		if (KiemTraThuocPhanTuIII553(d) == 1)
			cout << "\nThuoc goc phan tu thu ba: " << endl;
		else
			cout << "\nKhong thoc goc phan tu thu ba: " << endl;
		break;
	}
	case 554:
	{
		cout << "\nNhap diem de kiem tra thuoc goc phan tu thu IV: " << endl;
		Diem d;
		NhapDiem(d);
		if (KiemTraThuocPhanTuIV554(d) == 1)
			cout << "\nThuoc goc phan tu thu tu: " << endl;
		else
			cout << "\nKhong thoc goc phan tu thu tu: " << endl;
		break;
	}
	case 558:
	{
		Diem3D d1, d2;
		cout << "\nNhap diem d1: " << endl;
		NhapDiem3D(d1);
		cout << "\nNhap diem d2: " << endl;
		NhapDiem3D(d2);
		cout << "\nKhoang cach d1, d2 = " << endl;
		cout << TinhKhoangCachOXYZ558(d1, d2) << endl;
		break;

	}
	case 559:
	{
		Diem3D d1, d2;
		cout << "\nNhap diem d1: " << endl;
		NhapDiem3D(d1);
		cout << "\nNhap diem d2: " << endl;
		NhapDiem3D(d2);
		cout << "\nKhoang cach d1, d2  theo OX = " << endl;
		cout << TinhKhoangCachTheoOX559(d1, d2) << endl;
		break;
	}
	case 560:
	{
		Diem3D d1, d2;
		cout << "\nNhap diem d1: " << endl;
		NhapDiem3D(d1);
		cout << "\nNhap diem d2: " << endl;
		NhapDiem3D(d2);
		cout << "\nKhoang cach d1, d2  theo OX = " << endl;
		cout << TinhKhoangCachTheoOY560(d1, d2) << endl;
		break;
	}
	case 561:
	{
		Diem3D d1, d2;
		cout << "\nNhap diem d1: " << endl;
		NhapDiem3D(d1);
		cout << "\nNhap diem d2: " << endl;
		NhapDiem3D(d2);
		cout << "\nKhoang cach d1, d2  theo OX = " << endl;
		cout << TinhKhoangCachTheoOZ561(d1, d2) << endl;
		break;
	}
	case 562:
	{
		Diem3D d1;
		cout << "\nNhap diem d1: " << endl;
		NhapDiem3D(d1);
		cout << "\nDiem doi xung qua goc toa do: " << endl;
		XuatDiem3D(TimDiemDoiXungQuaO562(d1));
		cout << endl;
		break;
	}
	case 563:
	{
		cout << "\nNhap diem: " << endl;
		Diem3D d;
		NhapDiem3D(d);
		cout << "\nDiem doi xung qua mat phang OXY: " << endl;
		XuatDiem3D(TimDiemDoiXungQuaOXY563(d));
		cout << endl;
		break;
	}
	case 564:
	{
		cout << "\nNhap diem: " << endl;
		Diem3D d;
		NhapDiem3D(d);
		cout << "\nDiem doi xung qua mat phang OXZ: " << endl;
		XuatDiem3D(TimDiemDoiXungQuaOXZ564(d));
		cout << endl;
		break;
	}
	case 565:
	{
		cout << "\nNhap diem: " << endl;
		Diem3D d;
		NhapDiem3D(d);
		cout << "\nDiem doi xung qua mat phang OYZ: " << endl;
		XuatDiem3D(TimDiemDoiXungQuaOYZ565(d));
		cout << endl;
		break;
	}
	case 569:
	{
		DuongTron o;
		cout << "\nNhap duong tron: " << endl;
		NhapDuongTron(o);
		cout << "\nChu vi duong tron: " << endl;
		cout << TinhChuViDuongTron569(o) << endl;
		break;
	}
	case 570:
	{
		DuongTron o;
		cout << "\nNhap duong tron: " << endl;
		NhapDuongTron(o);
		cout << "\nDien tich duong tron: " << endl;
		cout << TinhDienTichDuongTron570(o) << endl;
		break;
	}
	case 571:
	{
		DuongTron Dt1, Dt2;
		cout << "\nNhap duong tron Dt1: " << endl;
		NhapDuongTron(Dt1);
		cout << "\nNhap duong tron Dt2: " << endl;
		NhapDuongTron(Dt2);
		if (XetViTriTuongDoi571(Dt1, Dt2) == 1)
			cout << "\n2 duong tron khong cat nhau: " << endl;
		else if (XetViTriTuongDoi571(Dt1, Dt2) == 0)
			cout << "\n2 duong tron giau nhau: " << endl;
		else
			cout << "\n2 duong tron cat nhau: " << endl;
		break;
	}
	case 572:
	{
		DuongTron Dt;
		Diem d;
		cout << "\nNhap duong tron dt: " << endl;
		NhapDuongTron(Dt);
		cout << "\nNhap diem d: " << endl;
		NhapDiem(d);
		if (KiemTraDiem572(Dt, d) == 1)
			cout << "\nd thuoc duong tron Dt: " << endl;
		else
			cout << "\nd khong thuoc duong tron Dt: " << endl;
		break;
	}
	case 576:
	{
		cout << "\nNhap hinh cau: " << endl;
		HinhCau Hc;
		NhapHinhCau575(Hc);
		cout << "\nHinh cau vua nhap: " << endl;
		XuatHinhCau576(Hc);
		cout << endl;
		break;
	}
	case 577:
	{
		cout << "\nNhap hinh cau de tinh: " << endl;
		HinhCau H;
		NhapHinhCau575(H);
		float Area;
		Area = TinhSXungQuanh577(H);
		cout << "\nArea = " << Area << endl;
		break;
	}
	case 578:
	{
		cout << "\nNhap hinh cau de tinh: " << endl;
		HinhCau H;
		NhapHinhCau575(H);
		float Volume;
		Volume = TinhVHinhCau578(H);
		cout << "\nVolume = " << Volume << endl;
		break;
	}
	case 579:
	{
		HinhCau Hc1, Hc2;
		cout << "\nNhap hinh cau Hc1: " << endl;
		NhapHinhCau575(Hc1);
		cout << "\nNhap hinh cau Hc2: " << endl;
		NhapHinhCau575(Hc2);
		if (KiemTraViTri2HinhCau579(Hc1, Hc2) == 1)
			cout << "\n2 hinh cau khong cat nhau: " << endl;
		else if (KiemTraViTri2HinhCau579(Hc1, Hc2) == 0)
			cout << "\n2 hinh cau tiep xuc nhau: " << endl;
		else
			cout << "\n2 hinh cau cat nhau: " << endl;
		break;
	}
	case 580:
	{
		HinhCau Hc;
		Diem3D d;
		cout << "\nNhap hinh cau Hc: " << endl;
		NhapHinhCau575(Hc);
		cout << "\nNhap diem d: " << endl;
		NhapDiem3D(d);
		if (KiemTraDiemThuocCau580(Hc, d) == 1)
			cout << "\nDiem d thuoc Hinh cau Hc: " << endl;
		else
			cout << "\nDiem d khong thuoc Hinh cau Hc:c " << endl;
		break;
	}
	
	default:
		break;
	}
}



void NhapPhanSo(PhanSo & a)
{
	cout << "Nhap tu: ";
	cin >> a.TuSo;
	do
	{
		cout << "Nhap mau: ";
		cin >> a.MauSo;
		if (a.MauSo == 0)
		{
			cout << "Nhap mau: ";
			cin >> a.MauSo;
		}

	} while (a.MauSo == 0);
}

void XuatPhanSo(PhanSo a)
{
	if (a.TuSo == 0)
	{
		cout << 0 << endl;
	}
	else
		cout << a.TuSo << "/" << a.MauSo << endl;
}

void NhapHonSo(HonSo& a)
{
	cout << "Nhap phan nguyen: ";
	cin >> a.Nguyen;
	cout << "Nhap tu: ";
	cin >> a.TuSo;
	do
	{
		cout << "Nhap mau: ";
		cin >> a.MauSo;
		if (a.MauSo == 0)
		{
			cout << "Nhap mau: ";
			cin >> a.MauSo;
		}

	} while (a.MauSo == 0);
}

void XuatHonSo(HonSo a)
{
	if (a.TuSo == 0)
	{
		cout << a.Nguyen << endl;
	}
	else
	cout << a.Nguyen << "(" << a.TuSo << "/" << a.MauSo << ")" << endl;
}

void NhapDiem(Diem& a)
{
	cout << "Nhap Ox: ";
	cin >> a.Ox;
	cout << "Nhap Oy: ";
	cin >> a.Oy;
}

void XuatDiem(Diem a)
{
	cout << "(" << a.Ox << " ; " << a.Oy << ")" << endl;
}

void NhapDiem3D(Diem3D & a)
{
	cout << "Nhap Ox: ";
	cin >> a.Ox;
	cout << "Nhap Oy: ";
	cin >> a.Oy;
	cout << "Nhap Oz: ";
	cin >> a.Oz;
}

void XuatDiem3D(Diem3D a)
{
	cout << "(" << a.Ox << "," << a.Oy << "," << a.Oz << ")" << endl;
}

void NhapDonThuc(DonThuc & a)
{
	cout << "Nhap phan he so: ";
	cin >> a.HeSo;
	cout << "Nhap phan mu: ";
	cin >> a.Mu;
}

void XuatDonThuc(DonThuc a)
{
	if (a.HeSo == 0)
		cout << 0 << endl;
	else if (a.Mu == 0)
		cout << 1 << endl;
	else if (a.Mu == 1)
		cout << "X" << endl;
	else
		cout << a.HeSo << "X^" << a.Mu << endl;
}

void NhapDaThuc(DaThuc & a)
{
	cout << "Nhap bac cua da thuc: ";
	cin >> a.Bac;
	a.HeSo = new int[a.Bac+1];
	for (int i = 0; i <= a.Bac; i++)
	{
		cout << "Nhap he so cho X^" << i << ": ";
		cin >> a.HeSo[i];
	}
	cout << endl;
}

void XuatDaThuc(DaThuc a)
{
	for (int i = 0; i < a.Bac + 1; i++)
	{
		if (i == 0)
		{
			if (a.HeSo[i] > 0)
				cout << a.HeSo[i];
			else if (a.HeSo[i] < 0)
				cout << " - " << -a.HeSo[i];
			else if (a.HeSo[i] == 0 && a.Bac == 0)
				cout << 0 << endl;
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

int KiemTraNamNhuan(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) ||(x%100 ==0 && x%400 ==0))
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

void XuatNgayThangNam(NgayThangNam a )
{
	cout << a.Ngay << " - " << a.Thang << " - " << a.Nam << endl;
}

void NhapDuongThang(PhuongTrinhDuongThang & a)
{
	cout << "Nhap he so cua x: ";
	cin >> a.Ax;
	cout << "Nhap he so cua y: ";
	cin >> a.By;
	cout << "Nhap he so tu do c: ";
	cin >> a.C;
}

void XuatDuongThang(PhuongTrinhDuongThang a)
{
	cout << a.Ax << "X";
	if (a.By > 0)
	{
		cout << " + " << a.By<<"Y";
	}
	else
		cout << " - " << -a.By<<"Y";
	if (a.C > 0)
	{
		cout << " + " << a.C<<" = 0:";
	}
	else
		cout << " - " << -a.C<<" = 0:";
	cout << endl;
}

void NhapDuongTron(DuongTron & a)
{
	cout << "Nhap toa do tam I: " << endl;
	NhapDiem(a.Tam);
	cout << "Nhap ban kinh: ";
	cin >> a.BanKinh;
}

void XuatDuongTron(DuongTron d)
{
	cout << "O(" <<"("<<d.Tam.Ox<<","<<d.Tam.Oy<< ")," << d.BanKinh << ")" << endl;
}

float TinhChuViDienTich(DuongTron &o)
{
	cout << "Nhap thong tin duong tron O: " << endl;
	NhapDuongTron(o);
	cout << "Duong tron vua nhap: ";
	XuatDuongTron(o);
	float DienTich = 0;
	DienTich = (float)(o.BanKinh*o.BanKinh*3.14);
	cout << "Dien Tich S= " << DienTich << endl;
	float ChuVi = 0;
	ChuVi = (float)(o.BanKinh * 2 * 3.14);
	cout << "Chu Vi C= " << ChuVi << endl;
	return ChuVi;
}

float TinhKhoangCach2Diem(Diem x1, Diem x2)
{
	float d, a, b;
	a = (x1.Ox - x2.Ox)*(x1.Ox - x2.Ox);
	b = (x1.Oy - x2.Oy)*(x1.Oy - x2.Oy);
	d = sqrt(a + b);
	return d;
}

int KiemTraDieuKienTamGiac(TamGiac t)
{
	float d12, d13, d23;
	d12 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh2);
	d13 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh3);
	d23 = TinhKhoangCach2Diem(t.Dinh2, t.Dinh3);
	if ((d12 + d13 < d23)||(d13+d23<d12)||(d12+d13<d13))
		return 0;
	return 1;
}

float TinhDienTichTamGiac(TamGiac t)
{
	float p, d12, d13, d23;
	d12 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh2);
	d13 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh3);
	d23 = TinhKhoangCach2Diem(t.Dinh2, t.Dinh3);
	p = (d12 + d13 + d23) / 2;
	float DienTich;
	DienTich = sqrt(p*(p - d12)*(p - d13)*(p - d23));
	return DienTich;
}

float TinhChuViTamGiac(TamGiac t)
{
	float d12, d13, d23;
	d12 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh2);
	d13 = TinhKhoangCach2Diem(t.Dinh1, t.Dinh3);
	d23 = TinhKhoangCach2Diem(t.Dinh2, t.Dinh3);
	return d12+d23+d13;
}

Diem TimTrongTam(TamGiac t)
{
	Diem TrongTam;
	TrongTam.Ox = (float)(t.Dinh1.Ox + t.Dinh2.Ox + t.Dinh3.Ox) / 3;
	TrongTam.Oy = (float)(t.Dinh1.Oy + t.Dinh2.Oy + t.Dinh3.Oy) / 3;
	return TrongTam;
}

void NhapTamGiac(TamGiac & t)
{
	cout << "Nhap dinh 1: " << endl;
	NhapDiem(t.Dinh1);
	cout << "Nhap dinh 2: " << endl;
	NhapDiem(t.Dinh2);
	do
	{
		cout << "Nhap dinh 3: " << endl;
		NhapDiem(t.Dinh3);
		if (KiemTraDieuKienTamGiac(t) == 0)
		{
			cout << "Nhap dinh 3: " << endl;
			NhapDiem(t.Dinh3);
		}
		
	} while (KiemTraDieuKienTamGiac(t)==0);
}

void XuatTamGiac(TamGiac t)
{
	XuatDiem(t.Dinh1);
	XuatDiem(t.Dinh2);
	XuatDiem(t.Dinh3);
}

DonThuc TichHaiDonThuc486(DonThuc a, DonThuc b)
{
	DonThuc Tich;
	Tich.HeSo = a.HeSo*b.HeSo;
	Tich.Mu = a.Mu + b.Mu;
	return Tich;
}

DonThuc TinhDaoHamDonThuc487(DonThuc & d)
{
	d.HeSo = d.HeSo*d.Mu;
	d.Mu -= 1;
	return d;
}

DonThuc TinhThuong2DonThuc488(DonThuc  d1, DonThuc d2)
{
	DonThuc Thuong;
	Thuong.HeSo = d1.HeSo / d2.HeSo;
	Thuong.Mu = d1.Mu - d2.Mu;
	return Thuong;
}

DonThuc TinhDaoHamCapK489(DonThuc & d, int k)
{
	for (int i = 0; i < k; i++)
	{
		d = TinhDaoHamDonThuc487(d);
	}
	return d;
}

float TinhLuyThua(float HeSo, int Mu)
{
	float Temp=1;
	for (int i = 0; i < Mu; i++)
	{
		Temp *= HeSo;
	}
	return Temp;
}

float TinhGiaTriDonThuc490(DonThuc d, float x)
{
	float Temp;
	Temp = (TinhLuyThua(x, d.Mu));
	return d.HeSo*Temp;
}

//cau 491
DonThuc operator*(DonThuc d1, DonThuc d2)
{
	DonThuc Tich;
	Tich.HeSo = d1.HeSo*d2.HeSo;
	Tich.Mu = d1.Mu + d2.Mu;
	return Tich;
}

DonThuc operator/(DonThuc d1, DonThuc d2)
{
	DonThuc Thuong;
	Thuong.HeSo = (float)(d1.HeSo) / d2.HeSo;
	Thuong.Mu = d1.Mu - d2.Mu;
	return Thuong;
}

DaThuc TinhHieu2DaThuc493(DaThuc Da1, DaThuc Da2)
{
	DaThuc Hieu;
	Hieu.Bac = ((Da1.Bac > Da2.Bac) ? Da1.Bac : Da2.Bac);
	Hieu.HeSo = new int[Hieu.Bac + 1];
	for (int i = 0; i <=Hieu.Bac; i++)
	{
		if (Da1.Bac >= i && Da2.Bac >= i)
			Hieu.HeSo[i] = Da1.HeSo[i] - Da2.HeSo[i];
		else if (Da1.Bac >= i && Da2.Bac < i)
			Hieu.HeSo[i] = Da1.HeSo[i];
		else if (Da2.Bac >= i && Da1.Bac < i)
			Hieu.HeSo[i] = -Da2.HeSo[i];
	}
	return Hieu;
}

DaThuc TinhTong2DaThuc494(DaThuc Da1, DaThuc Da2)
{
	DaThuc Tong;
	Tong.Bac = ((Da1.Bac > Da2.Bac) ? Da1.Bac : Da2.Bac);
	Tong.HeSo = new int[Tong.Bac + 1];
	for (int i = 0; i <= Tong.Bac; i++)
	{
		if (Da1.Bac >= i && Da2.Bac >= i)
			Tong.HeSo[i] = Da1.HeSo[i] + Da2.HeSo[i];
		else if (Da1.Bac >= i && Da2.Bac < i)
			Tong.HeSo[i] = Da1.HeSo[i];
		else if (Da2.Bac >= i && Da1.Bac < i)
			Tong.HeSo[i] = Da2.HeSo[i];
	}
	return Tong;
}

DaThuc TinhTich2DaThuc495(DaThuc Da1, DaThuc Da2)
{
	DaThuc Tich;
	Tich.Bac = Da1.Bac + Da2.Bac;
	Tich.HeSo = new int[Tich.Bac + 1];
	for (int i = 0; i <= Tich.Bac; i++)
	{
		Tich.HeSo[i] = 0;
	}
	for (int i = 0; i <= Da1.Bac; i++)
	{
		for (int j = 0; j <= Da2.Bac; j++)
		{
			Tich.HeSo[i + j] += Da1.HeSo[i] * Da2.HeSo[j];
		}
	}
	return Tich;
}

DaThuc TinhDaoHamDaThuc498(DaThuc &d)
{
	for (int i = 0; i < d.Bac; i++)
	{
		d.HeSo[i] = d.HeSo[i + 1] * (i + 1);
	}
	d.Bac -= 1;
	return d;
}

DaThuc TinhDaoHamCapk499(DaThuc & d, int k)
{
	if (k <= d.Bac)
	{
		for (int i = 0; i < k; i++)
		{
			TinhDaoHamDaThuc498(d);
		}
	}
	else if (k > d.Bac)
	{
		d.Bac = 0;
		d.HeSo[0] = 0;
	}
	return d;
}

float TinhGiaTriDaThuc500(DaThuc d, float x)
{
	float Values = 0;
	for (int i = 0; i <= d.Bac; i++)
	{
		Values += d.HeSo[i] * TinhLuyThua(x, i);
	}
	return Values;
}

DaThuc operator+(DaThuc Da1, DaThuc Da2)
{
	DaThuc Tong;
	Tong = TinhTong2DaThuc494(Da1, Da2);
	return Tong;
}

DaThuc operator-(DaThuc d1, DaThuc d2)
{
	DaThuc Hieu;
	Hieu = TinhHieu2DaThuc493(d1, d2);
	return Hieu;
}

DaThuc operator*(DaThuc d1, DaThuc d2)
{
	DaThuc Tich;
	Tich = TinhTich2DaThuc495(d1, d2);
	return Tich;
}

int TimUocChungMax(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else if (b > a)
			b = b - a;
	}
	return a;
}

PhanSo RutGonPhanSo506(PhanSo & p)
{
	int a;
	a = TimUocChungMax(p.MauSo, p.TuSo);
	if (a != 0)
	{
		p.MauSo /= a;
		p.TuSo /= a;
	}
	return p;
}

PhanSo TinhTongPhanSo507(PhanSo p1, PhanSo p2)
{
	PhanSo Tong;
	Tong.MauSo = p1.MauSo*p2.MauSo;
	Tong.TuSo = p1.TuSo*p2.MauSo + p2.TuSo*p1.MauSo;
	Tong = RutGonPhanSo506(Tong);
	return Tong;
}

PhanSo TinhHieuPhanSo508(PhanSo p1, PhanSo p2)
{
	PhanSo Hieu;
	Hieu.MauSo = p1.MauSo*p2.MauSo;
	Hieu.TuSo = p1.TuSo*p2.MauSo - p2.TuSo*p1.MauSo;
	Hieu = RutGonPhanSo506(Hieu);
	return Hieu;
}

PhanSo TinhTichPhanSo509(PhanSo p1, PhanSo p2)
{
	PhanSo Tich;
	Tich.TuSo = p1.TuSo*p2.TuSo;
	Tich.MauSo = p1.MauSo*p2.MauSo;
	Tich = RutGonPhanSo506(Tich);
	return Tich;
}

PhanSo TinhThuongPhanSo510(PhanSo p1, PhanSo p2)
{
	PhanSo Thuong;
	Thuong.TuSo = p1.TuSo*p2.MauSo;
	Thuong.MauSo = p1.MauSo*p2.TuSo;
	Thuong = RutGonPhanSo506(Thuong);
	if (Thuong.MauSo == 0)
	{
		Thuong.TuSo = 0;
		Thuong.MauSo = 1;
	}
	return Thuong;
}

int KiemTraPhanSoToiGian511(PhanSo p)
{
	PhanSo Temp;
	Temp = p;
	p = RutGonPhanSo506(p);
	if(p.TuSo==Temp.TuSo &&  p.MauSo==Temp.MauSo)
		return 1;
	return 0;
}

void QuyDongPhanSo512(PhanSo & p1, PhanSo & p2)
{
	p1.TuSo *= p2.MauSo;
	p2.TuSo *= p1.MauSo;
	p1.MauSo = p2.MauSo = p1.MauSo*p2.MauSo;
}

int KiemTraPhanSoDuong513(PhanSo p)
{
	if (p.MauSo * p.TuSo > 0)
		return 1;
	return 0;
}

int KiemTraPhanSoAm514(PhanSo p)
{
	if (p.MauSo * p.TuSo < 0)
		return 1;
	return 0;
}

int SoSanh2PhanSo515(PhanSo p1, PhanSo p2)
{
	QuyDongPhanSo512(p1, p2);
	//p1 > p2
	if (p1.TuSo > p2.TuSo)
		return 1;
	//p2 > p1
	else if (p1.TuSo < p2.TuSo)
		return -1;
	//p1 =p2
	else
	return 0;
}

PhanSo operator+(PhanSo p1, PhanSo p2)
{
	QuyDongPhanSo512(p1, p2);
	PhanSo Tong;
	Tong.TuSo = p1.TuSo + p2.TuSo;
	Tong.MauSo = p1.MauSo;
	RutGonPhanSo506(Tong);
	return Tong;
}

PhanSo operator-(PhanSo p1, PhanSo p2)
{
	QuyDongPhanSo512(p1, p2);
	PhanSo Hieu;
	Hieu.TuSo = p1.TuSo - p2.TuSo;
	Hieu.MauSo = p1.MauSo;
	RutGonPhanSo506(Hieu);
	return Hieu;
}

PhanSo operator*(PhanSo p1, PhanSo p2)
{
	PhanSo Res;
	Res.TuSo = p1.TuSo*p2.TuSo;
	Res.MauSo = p1.MauSo*p2.MauSo;
	RutGonPhanSo506(Res);
	return Res;
}

PhanSo operator/(PhanSo p1, PhanSo p2)
{
	PhanSo Res;
	Res.TuSo = p1.TuSo*p2.MauSo;
	Res.MauSo = p1.MauSo*p2.TuSo;
	if (Res.MauSo == 0)
	{
		Res.TuSo = 0;
		Res.MauSo = 1;
	}
	return PhanSo();
}

PhanSo operator++(PhanSo & p)
{
	p.TuSo += p.MauSo;
	return p;
}

PhanSo operator--(PhanSo & p)
{
	p.TuSo -= p.MauSo;
	return p;
}

HonSo RutGonHonSo525(HonSo & h)
{
	if (h.TuSo > h.MauSo)
	{
		h.Nguyen += h.TuSo / h.MauSo;
		h.TuSo = h.TuSo%h.MauSo;
	}
	return h;
}

HonSo Tong2HonSo526(HonSo h1, HonSo h2)
{
	PhanSo Temp1, Temp2;
	Temp1.TuSo = h1.Nguyen*h1.MauSo + h1.TuSo;
	Temp1.MauSo = h1.MauSo;
	Temp2.TuSo= h2.Nguyen*h2.MauSo + h2.TuSo;
	Temp2.MauSo = h2.MauSo;
	QuyDongPhanSo512(Temp1, Temp2);
	HonSo Res;
	Res.Nguyen = (Temp1.TuSo + Temp2.TuSo) / Temp1.MauSo;
	Res.TuSo= (Temp1.TuSo + Temp2.TuSo) % Temp1.MauSo;
	Res.MauSo = Temp1.MauSo;
	RutGonHonSo525(Res);
	return Res;
}

HonSo Hieu2HonSo527(HonSo h1, HonSo h2)
{
	PhanSo Temp1, Temp2;
	Temp1.TuSo = h1.Nguyen*h1.MauSo + h1.TuSo;
	Temp1.MauSo = h1.MauSo;
	Temp2.TuSo = h2.Nguyen*h2.MauSo + h2.TuSo;
	Temp2.MauSo = h2.MauSo;
	QuyDongPhanSo512(Temp1, Temp2);
	HonSo Res;
	Res.Nguyen = (Temp1.TuSo - Temp2.TuSo) / Temp1.MauSo;
	Res.TuSo = (Temp1.TuSo - Temp2.TuSo) % Temp1.MauSo;
	Res.MauSo = Temp1.MauSo;
	RutGonHonSo525(Res);
	return Res;
}

HonSo Tich2HonSo528(HonSo h1, HonSo h2)
{
	PhanSo Temp1, Temp2;
	Temp1.TuSo = h1.Nguyen*h1.MauSo + h1.TuSo;
	Temp1.MauSo = h1.MauSo;
	Temp2.TuSo = h2.Nguyen*h2.MauSo + h2.TuSo;
	Temp2.MauSo = h2.MauSo;
	HonSo Res;
	Res.Nguyen = (Temp1.TuSo * Temp2.TuSo) / (Temp1.MauSo *  Temp2.MauSo);
	Res.TuSo = (Temp1.TuSo * Temp2.TuSo) % (Temp1.MauSo *  Temp2.MauSo);
	Res.MauSo = (Temp1.MauSo *  Temp2.MauSo);
	RutGonHonSo525(Res);
	return Res;
}

HonSo Thuong2HonSo529(HonSo h1, HonSo h2)
{
	PhanSo Temp1, Temp2;
	Temp1.TuSo = h1.Nguyen*h1.MauSo + h1.TuSo;
	Temp1.MauSo = h1.MauSo;
	Temp2.TuSo = h2.Nguyen*h2.MauSo + h2.TuSo;
	Temp2.MauSo = h2.MauSo;
	HonSo Res;
	Res.Nguyen = (Temp1.TuSo * Temp2.MauSo) / (Temp1.MauSo *  Temp2.TuSo);
	Res.TuSo = (Temp1.TuSo * Temp2.MauSo) % (Temp1.MauSo *  Temp2.TuSo);
	Res.MauSo = (Temp1.MauSo *  Temp2.TuSo);
	RutGonHonSo525(Res);
	return Res;
}

int KiemTraHonSoToiGian530(HonSo h)
{
	if(h.TuSo <= h.MauSo)
		return 1;
	return 0;
}

void QuyDong2HonSo531(HonSo & h1, HonSo & h2)
{
	PhanSo Temp1, Temp2;
	Temp1.TuSo = h1.Nguyen*h1.MauSo + h1.TuSo;
	Temp1.MauSo = h1.MauSo;
	Temp2.TuSo = h2.Nguyen*h2.MauSo + h2.TuSo;
	Temp2.MauSo = h2.MauSo;
	QuyDongPhanSo512(Temp1, Temp2);
	h1.Nguyen = Temp1.TuSo / Temp1.MauSo;
	h1.TuSo = Temp1.TuSo % Temp1.MauSo;
	h1.MauSo = Temp1.MauSo;
	h2.Nguyen = Temp2.TuSo / Temp2.MauSo;
	h2.TuSo = Temp2.TuSo % Temp2.MauSo;
	h2.MauSo = Temp2.MauSo;
}

void NhapSoPhuc533(SoPhuc & sp)
{
	cout << "Nhap phan thuc: ";
	cin >> sp.Thuc;
	cout << "Nhap phan ao: ";
	cin >> sp.Ao;
}

void XuatSoPhuc534(SoPhuc sp)
{
	if(sp.Ao<0)
		cout << sp.Thuc<< sp.Ao << "i" << endl;
	else
		cout << sp.Thuc << "+" << sp.Ao << "i" << endl;
}

SoPhuc Tong2SoPhuc535(SoPhuc sp1, SoPhuc sp2)
{
	SoPhuc Res;
	Res.Thuc = sp1.Thuc + sp2.Thuc;
	Res.Ao = sp1.Ao + sp2.Ao;
	return Res;
}

SoPhuc Hieu2SoPhuc536(SoPhuc sp1, SoPhuc sp2)
{
	SoPhuc Res;
	Res.Thuc = sp1.Thuc - sp2.Thuc;
	Res.Ao = sp1.Ao - sp2.Ao;
	return Res;
}

SoPhuc Tich2SoPhuc537(SoPhuc sp1, SoPhuc sp2)
{
	SoPhuc Res;
	Res.Thuc = sp1.Thuc*sp2.Thuc - sp1.Ao*sp2.Ao;
	Res.Ao = sp1.Thuc*sp2.Ao + sp1.Ao*sp2.Thuc;
	return Res;
}

SoPhuc Thuong2SoPhuc538(SoPhuc sp1, SoPhuc sp2)
{
	SoPhuc Res;
	Res.Thuc = (float)(sp1.Thuc*sp2.Thuc + sp1.Ao*sp2.Ao)/(sp1.Thuc *sp1.Thuc + sp2.Thuc*sp2.Thuc);
	Res.Ao = (float)(sp1.Thuc*sp2.Ao - sp1.Ao*sp2.Thuc) / (sp1.Thuc *sp1.Thuc + sp2.Thuc*sp2.Thuc);
	return Res;
}

SoPhuc TichLuyThuaBacN539(SoPhuc sp, int n)
{
	SoPhuc Res=sp;
	for (int i = 1; i < n; i++)
	{
		Res = Tich2SoPhuc537(Res, sp);
	}
	return Res;
}

float TinhKhoangCachTheoOX544(Diem d1, Diem d2)
{
	return abs(d1.Ox - d2.Ox);
}

float TinhKhoangCachTheoOY545(Diem d1, Diem d2)
{
	return abs(d1.Oy -d2.Oy);
}

Diem TimDiemDoiXungQuaO546(Diem d)
{
	Diem Temp;
	Temp.Ox = -d.Ox;
	Temp.Oy = -d.Oy;
	return Temp;
}

Diem TimDiemDoiXungQuaOX547(Diem d)
{
	Diem Temp;
	Temp.Ox = d.Ox;
	Temp.Oy = -d.Oy;
	return Temp;
}

Diem TimDiemDoiXungQuaOY548(Diem d)
{
	Diem Temp;
	Temp.Ox = -d.Ox;
	Temp.Oy = d.Oy;
	return Temp;
}

Diem TimDiemDoiXungQuaX549(Diem d)
{
	Diem Temp;
	Temp = d;
	swap(Temp.Ox, Temp.Oy);
	return Temp;
}

Diem TiemDiemDoiXungQua_X550(Diem d)
{
	Diem Temp;
	Temp.Ox = -d.Ox;
	Temp.Oy = -d.Oy;
	swap(Temp.Ox, Temp.Oy);
	return Temp;
}

int KiemTraThuocPhanTuI551(Diem d)
{
	if (d.Ox >= 0 && d.Oy >= 0)
		return 1;
	return 0;
}

int KiemTraThuocPhanTuII552(Diem d)
{
	if (d.Ox <= 0 && d.Oy >= 0)
		return 1;
	return 0;
}

int KiemTraThuocPhanTuIII553(Diem d)
{
	if (d.Ox <= 0 && d.Oy <= 0)
		return 1;
	return 0;
}

int KiemTraThuocPhanTuIV554(Diem d)
{
	if (d.Ox >= 0 && d.Oy <= 0)
		return 1;
	return 0;
}

float TinhKhoangCachOXYZ558(Diem3D d1, Diem3D d2)
{
	float a, b, c;
	a = TinhLuyThua(d1.Ox - d2.Ox, 2);
	b = TinhLuyThua(d1.Oy - d2.Oy, 2);
	c = TinhLuyThua(d1.Oz - d2.Oz, 2);
	return sqrt(a + b + c);
}

float TinhKhoangCachTheoOX559(Diem3D d1, Diem3D d2)
{
	return abs((float)(d1.Ox-d2.Ox));
}

float TinhKhoangCachTheoOY560(Diem3D d1, Diem3D d2)
{
	return abs((float)(d1.Oy - d2.Oy));
}

float TinhKhoangCachTheoOZ561(Diem3D d1, Diem3D d2)
{
	return abs((float)(d1.Oz - d2.Oz));
}

Diem3D TimDiemDoiXungQuaO562(Diem3D d)
{
	Diem3D Temp;
	Temp.Ox = -d.Ox;
	Temp.Oy = -d.Oy;
	Temp.Oz = -d.Oz;
	return Temp;
}

Diem3D TimDiemDoiXungQuaOXY563(Diem3D d)
{
	Diem3D Temp;
	Temp.Ox = d.Ox;
	Temp.Oy = d.Oy;
	Temp.Oz = -d.Oz;
	return Temp;
}

Diem3D TimDiemDoiXungQuaOXZ564(Diem3D d)
{
	Diem3D Temp;
	Temp.Ox = d.Ox;
	Temp.Oy = -d.Oy;
	Temp.Oz = d.Oz;
	return Temp;
}

Diem3D TimDiemDoiXungQuaOYZ565(Diem3D d)
{
	Diem3D Temp;
	Temp.Ox = -d.Ox;
	Temp.Oy = d.Oy;
	Temp.Oz = d.Oz;
	return Temp;
}

float TinhChuViDuongTron569(DuongTron o)
{
	return (float)(2 * PI*o.BanKinh);
}

float TinhDienTichDuongTron570(DuongTron o)
{
	return (float)(TinhLuyThua(o.BanKinh, 2)*PI);
}

int XetViTriTuongDoi571(DuongTron Dt1, DuongTron Dt2)
{
	float KhoangCach2Tam;
	KhoangCach2Tam = TinhKhoangCach2Diem(Dt1.Tam, Dt2.Tam);
	// 1: h duong trong khong cat nhau
	if (KhoangCach2Tam > Dt1.BanKinh + Dt2.BanKinh)
		return 1;
	//0: 2 duong tron tiep xuc nhau
	else if (KhoangCach2Tam == Dt1.BanKinh + Dt2.BanKinh)
		return 0;
	//-1: 2 duong tron cat nhau
	else
		return -1;
}

int KiemTraDiem572(DuongTron Dt1, Diem d)
{
	float Kc=0;
	Kc = TinhKhoangCach2Diem(Dt1.Tam, d);
	if (Kc < Dt1.BanKinh)
		return 1;
	return 0;
}

void NhapHinhCau575(HinhCau &Hc)
{
	cout << "Nhap tam HC: " << endl;
	NhapDiem3D(Hc.Tam);
	cout << "Nhap ban kinh: " << endl;
	cin >> Hc.BanKinh;
}

void XuatHinhCau576(HinhCau Hc)
{
	cout << "((" << Hc.Tam.Ox << "," << Hc.Tam.Oy << "," << Hc.Tam.Oz << "),";
	cout << Hc.BanKinh << ")" << endl;
}

float TinhSXungQuanh577(HinhCau Hc)
{
	float Area = 0.0;
	Area = (float)(4 * PI*TinhLuyThua(Hc.BanKinh, 2));
	return Area;
}

float TinhVHinhCau578(HinhCau Hc)
{
	float Volume = 0.0;
	Volume = (float)(4/3 * PI*TinhLuyThua(Hc.BanKinh, 3));
	return Volume;
}

int KiemTraViTri2HinhCau579(HinhCau Hc1, HinhCau Hc2)
{
	float KhoangCach2Tam;
	KhoangCach2Tam = TinhKhoangCachOXYZ558(Hc1.Tam, Hc2.Tam);
	// 1: h duong trong khong cat nhau
	if (KhoangCach2Tam > Hc1.BanKinh + Hc2.BanKinh)
		return 1;
	//0: 2 duong tron tiep xuc nhau
	else if (KhoangCach2Tam == Hc1.BanKinh + Hc2.BanKinh)
		return 0;
	//-1: 2 duong tron cat nhau
	else
		return -1;
}

int KiemTraDiemThuocCau580(HinhCau Hc1, Diem3D d)
{

	float Distance = 0;
	Distance = TinhKhoangCachOXYZ558(Hc1.Tam, d);
	if (Distance > Hc1.BanKinh)
		return 0;
	else
		return 1;
}


