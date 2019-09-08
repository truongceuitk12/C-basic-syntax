#include<iostream>
#include"D:\\SourseCodeVisuaStudio\\KyThuatLapTrinh\\1000BaiTapLapTrinhCanBan\\ThuVienC++OfTruong\\ThuVien.h"
#include "..\Library\Lib.h"
//cach 1
using namespace std;
using namespace Truong;

// cach 2
// include cái file luôn ch? nãy m include có cái folder không nó không ???c á
// include file .h. b?n ch?t include là copy toàn b? file .h ?ó b? vô
//// M NÓI TI?P ?I m ki?m tra th? ???c ch?a :v
//OK, MÀ SAO M V?N NH? ???C HAY ??Y
// kk h?i t dành c? kì 2 h?c C++ oop mà, h?i th?y visual là nghi?n mà gi? ng??c l?i hoàn toàn huhu
//CUNG MASTER C++ R?I :))
// GOI HAM VAN KHONG DUOC ?? coi th? :v
void menu(int **a, int m, int n);
void NhapMaTranThuc(float ** b, int d, int c);
void XuatMaTranThuc(float **a, int m, int n);
int TimMaxMaTran315(int **a, int m, int n);
int KiemTraMaTran316(int **a, int m, int n);
int DemSoNguyenTo317(int **a, int m, int n);
int TongAmTrongMaTran318(int **a, int m, int n);
void SapXepMaTranDungMangPhu319(int **a, int m, int n, int *b, int mn);
void SapXepMaTranKhongDungMangPhu319(int **a, int m, int n);
int TongCacPhanTuDuongMaTran320(int **a, int m, int n);
int TongCacPhanTuLeMaTran321(int **a, int m, int n);
void TongTungDongTrenMaTran322(int **a, int m, int n);
void TongDuongTheoCotMaTran323(int **a, int m, int n);
void TongDuongTheoDongMaTran324(int **a, int m, int n);
void TinhTichCacSoChanTheoCotMaTran325(int **a, int m, int n);
float TrungBinhCongCacSoDuong326(int **a, int m, int n);
int TongCacPhanTuBien327(int **a, int m, int n);
float TrungBinhNhanCacSoDuong328(int **a, int m, int n);
void BienDoiMaTranThanhDuong329(int **a, int m, int n);
int TimSoGanNhat(float x);
void BienDoiMaTranVoiGiaTriGanNo330(float **a, int m, int n);
void TongDongMaTran331(int **a, int m, int n);
void TongSoLeTheoCotMaTran332(int **a, int m, int n);
int TongCacSoHoanThienMaTran333(int **a, int m, int n);
int DemSoLuongSoDuong334(int **a, int m, int n);
int DemSoNguyenTo335(int **a, int m, int n);
int DemSoLanXuatHienCuaX336(int **a, int m, int n, int x);
int DemSoChuSo(int x);
int DemSoChuSoMaTran337(int **a, int m, int n);
void DemSoDuongTheoHang338(int **a, int m, int n);
void DemSoHoanThienTheoHang339(int **a, int m, int n);
void DemSoAmTheoCot340(int **a, int m, int n);
int DemSoDuongOBien341(int **a, int m, int n);
int KiemTraPhanTuCucDai(int **a, int m, int n, int i, int j, int x);
int DemPhanTuCucDai342(int **a, int m, int n);
int KiemTraPhanTuCucTieu(int **a, int m, int n, int i, int j, int x);
int KiemTraPhanTuCucTri(int **a, int m, int n, int i, int j, int x);
int DemPhanTuCucTri343(int **a, int m, int n);
int DemSoLuongPhanTuTrongMaTran344(int **a, int m, int n);
int TongCucTri345(int **a, int m, int n);
int TimMaxTraiPhai(int **a, int m, int n, int d, int c);
int TimMaxPhaiTrai(int **a, int m, int n, int d, int c);
int DemGiaTriHoangHau346(int **a, int m, int n);
int TimMinCot(int **a, int m, int n, int c);
int KiemTraPhanTuYenNgua(int **a, int m, int n, int i, int j, int x);
int DemPhanTuYenNgua347(int **a, int m, int n);
int KiemTraTonTaiDuong348(int **a, int m, int n);
int KiemTraMaTranCoSoHoanThien349(int **a, int m, int n);
int KiemTraTonTaiLe350(int **a, int m, int n);
int KiemTraHoanToanDuong351(int **a, int m, int n);
int KiemTraTangDanHang352(int **a, int m, int n, int h);
int KiemTraGiamDanCot353(int **a, int m, int n, int c);
int KiemTraGiamDanHang(int **a, int m, int n, int h);
int KiemTra354(int **a, int m, int n);
int KiemTraDongToanAm(int **a, int m, int n, int d);
void LietKeDongToanAm355(int **a, int m, int n);
int KiemTraDongToanChan(int **a, int m, int n, int d);
void LietKeChiSo356(int **a, int m, int n);
int KiemTraDongCoSoNguyenTo(int **a, int m, int n, int d);
void LietKeDongCoSNT357(int **a, int m, int n);
void LietKeDongCoChan358(int **a, int m, int n);
void LietKeDongCoSoAm359(int **a, int m, int n);
void LietKeCotCoSoChinhPhuong360(int **a, int m, int n);
int KiemTraDieuKienAmDuong0(int **a, int m, int n, int d);
void LietKeDongCo0AmDuong361(int **a, int m, int n);
void LietKeDongGiamDan362(int **a, int m, int n);
int KiemTraTangDanCot(int **a, int m, int n, int c);
void LietKeCotTangDan363(int **a, int m, int n);
int TimGiaTriChanDau366(int **a, int m, int n);
int TimMaxMaTran367(int **a, int m, int n);
int TimGiaTriLonNhi368(int **a, int m, int n);
int TimGiaTriDuongDauTien369(int **a, int m, int n);
int TimGiaTriAmLonNhat370(int **a, int m, int n);
int KiemTraDongCoMax(int **a, int m, int n, int d);
void LietKeDongChuaMax371(int **a, int m, int n);
int TimMaxDong372(int **a, int m, int n, int d);
int TimMinCot373(int **a, int m, int n, int c);
int SoNguyenToDauTien374(int **a, int m, int n);
int TimSoChanMax375(int **a, int m, int n);
int TimDuongNhoNhat376(int **a, int m, int n);
int TimSoNguyenToMax377(int **a, int m, int n);
void DemSoCacChuSo(int *a, int x);
int TimChuSoXuatHienNhieuNhat378(int **a, int m, int n);
int TimMinMaTran(int **a, int m, int n);
int DemSoLuongMin379(int **a, int m, int n);
int TimChanMin(int **a, int m, int n);
int DemSoLuongChanMin380(int **a, int m, int n);
int DemSoLanXuatHien(int **a, int m, int n, int x);
int PhanTuXuatHienNhieuNhat381(int **a, int m, int n);
int TimSoChinhPhuongLonNhat382(int **a, int m, int n);
int TimSoHoanThienMin383(int **a, int m, int n);
void CacChuSoXuatHienNhieuNhat384(int **a, int m, int n);
int TongDongMaTran(int **a, int m, int n, int d);
int TongDongMax(int **a, int m, int n);
void NhungDongCoTongMaTranMax385(int **a, int m, int n);
int TongCotMaTran(int **a, int m, int n, int c);
int TongCotMin(int **a, int m, int n);
void LietKeCotCoTongMin386(int **a, int m, int n);
int DemSoLuongSoChanTrenDong(int **a, int m, int n, int d);
int SoLuongSoChanMax(int **a, int m, int n);
void LietKeDongCoSoChanMax387(int **a, int m, int n);
int DemSoNguyenToTrenDong(int **a, int m, int n, int d);
int SoLuongSoNguyenToMax(int **a, int m, int n);
void LietKeDongCoSoNguyenToNhieuNhat388(int **a, int m, int n);
int DemSoHoanThienTrenDong(int **a, int m, int n, int d);
int SoLuongSoHoanThienMax(int **a, int m, int n);
void LietKeDongCoSoHoanThienNhieuNhat389(int **a, int m, int n);
int DemSoCacChuSoTrenDong(int **a, int m, int n, int d);
int SoLuongChuSoNhieuNhatTrenDong(int **a, int m, int n);
void LietKeNhungDongCoNhieuChuSoNhat390(int **a, int m, int n);


int main()
{
	int m, n;	//m: dong  n:cot
	cout << "nhap so dong m: ";
	cin >> m;
	cout << "nhap so cot n: ";
	cin >> n;
	int **a = new int*[m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}
	NhapMaTran(a, m, n);
	
	menu(a, m, n);



	cout << "\n\n========SAID OHHH YEAHHHHH PASS 1/3 WORK :)))========\n\n";
	delete[]a;
	system("pause");
	return 0;
}

void menu(int **a, int m, int n)
{
	cout << "(0: THOAT)(311: BAI 311)(312: BAI 312)(313: BAI 313)(314: BAI 314)(315: BAI 315)" << endl;
	cout << "(0: THOAT)(316: BAI 316)(317: BAI 317)(318: BAI 318)(319: BAI 319)(320: BAI 320)" << endl;
	cout << "(0: THOAT)(321: BAI 321)(322: BAI 322)(323: BAI 323)(324: BAI 324)(325: BAI 325)" << endl;
	cout << "(0: THOAT)(326: BAI 326)(327: BAI 327)(328: BAI 328)(329: BAI 329)(330: BAI 330)" << endl;
	cout << "(0: THOAT)(331: BAI 331)(332: BAI 332)(333: BAI 333)(334: BAI 334)(335: BAI 335)" << endl;
	cout << "(0: THOAT)(336: BAI 336)(337: BAI 337)(338: BAI 338)(339: BAI 339)(340: BAI 340)" << endl;
	cout << "(0: THOAT)(341: BAI 341)(342: BAI 342)(343: BAI 343)(344: BAI 344)(345: BAI 345)" << endl;
	cout << "(0: THOAT)(346: BAI 346)(347: BAI 347)(348: BAI 348)(349: BAI 349)(350: BAI 350)" << endl;
	cout << "(0: THOAT)(351: BAI 351)(352: BAI 352)(353: BAI 353)(354: BAI 354)(355: BAI 355)" << endl;
	cout << "(0: THOAT)(356: BAI 356)(357: BAI 357)(358: BAI 358)(359: BAI 359)(360: BAI 360)" << endl;
	cout << "(0: THOAT)(361: BAI 361)(362: BAI 362)(363: BAI 363)(364: BAI 364)(365: BAI 365)" << endl;
	cout << "(0: THOAT)(366: BAI 366)(367: BAI 367)(368: BAI 368)(369: BAI 369)(370: BAI 370)" << endl;
	cout << "(0: THOAT)(371: BAI 371)(372: BAI 372)(373: BAI 373)(374: BAI 374)(375: BAI 375)" << endl;
	cout << "(0: THOAT)(376: BAI 376)(377: BAI 377)(378: BAI 378)(379: BAI 379)(380: BAI 380)" << endl;
	cout << "(0: THOAT)(381: BAI 381)(382: BAI 382)(383: BAI 383)(384: BAI 384)(385: BAI 385)" << endl;
	cout << "(0: THOAT)(386: BAI 386)(387: BAI 387)(388: BAI 388)(389: BAI 389)(390: BAI 390)" << endl;
	cout << "Nhap lua chon cua ban: ";
	int Chon;
	cin >> Chon;
	switch (Chon)
	{
	case 0:
	{
		return;
		break;
	}
	case 312:
	{
		XuatMaTran(a, m, n);
		break;
	}
	case 315:
	{
		cout << "Max ma tran: " << TimMaxMaTran315(a, m, n) << endl;
		break;
	}
	case 316:
	{
		if (KiemTraMaTran316(a, m, n) == 1)
			cout << "Co" << endl;
		else
			cout << "Khong" << endl;
		break;
	}
	case 317:
	{
		cout << "So luong so nguyen to: " << DemSoNguyenTo317(a, m, n) << endl;
		break;
	}
	case 318:
	{
		cout << "Tong ma cac phan tu am trong ma tran: " << TongAmTrongMaTran318(a, m, n) << endl;
		break;
	}
	case 319:
	{
		int mn = m * n;
		int *b = new int[mn];
		cout << "Ma tran sau khi sap xep: " << endl;
		//SapXepMaTranDungMangPhu319(a, m, n,b,mn);
		SapXepMaTranKhongDungMangPhu319(a, m, n);
		XuatMaTran(a, m, n);
		delete[]b;
		break;
	}
	case 320:
	{
		cout << "Tong cac phan tu duong trong ma tran: " << endl;
		cout << TongCacPhanTuDuongMaTran320(a, m, n);
		break;
	}
	case 321:
	{
		cout << "Tong cac phan tu le trong ma tran: " << endl;
		cout << TongCacPhanTuLeMaTran321(a, m, n);
		break;
	}
	case 322:
	{
		cout << "Tong cac dong trong ma tran: " << endl;
		TongTungDongTrenMaTran322(a, m, n);
		break;
	}
	case 323:
	{
		cout << "Tong cac phan tu duong theo cot: " << endl;
		TongDuongTheoCotMaTran323(a, m, n);
		break;
	}
	case 324:
	{
		cout << "Tong cac phan tu duong cua hang: " << endl;
		TongDuongTheoDongMaTran324(a, m, n);
		break;
	}
	case 325:
	{
		cout << "Tich cac phan tu duong theo cot cua ma tran: " << endl;
		TinhTichCacSoChanTheoCotMaTran325(a, m, n);
		break;
	}
	case 326:
	{
		cout << "Tong trung binh cong cac so duong: " << TrungBinhCongCacSoDuong326(a, m, n) << endl;
		break;
	}
	case 327:
	{
		cout << "Tong cac gia tri bien cua ma tran: " << TongCacPhanTuBien327(a, m, n) << endl;
		break;
	}
	case 328:
	{
		cout << "Trung binh nhan cac so duong trong ma tran: " << TrungBinhNhanCacSoDuong328(a, m, n) << endl;
		break;
	}
	case 329:
	{
		cout << "Bien doi ma tran toan duong: " << endl;
		BienDoiMaTranThanhDuong329(a, m, n);
		XuatMaTran312(a, m, n);
		break;

	}
	case 330:
	{

		int d, c;	//m: dong  n:cot
		cout << "nhap so dong m: ";
		cin >> d;
		cout << "nhap so cot n: ";
		cin >> c;
		float **b = new float*[d];
		for (int i = 0; i < d; i++)
		{
			b[i] = new float[c];
		}
		NhapMaTranThuc(b, d, c);
		BienDoiMaTranVoiGiaTriGanNo330(b, d, c);
		cout << "Xuat ma tran sau khi bien doi: " << endl;
		XuatMaTranThuc(b, d, c);
		break;
	}
	case 331:
	{
		cout << "Tong tung dong cua ma tran: " << endl;
		TongDongMaTran331(a, m, n);
		break;
	}
	case 332:
	{
		cout << "Tong cac so le tinh theo cot cua Ma tran: " << endl;
		TongSoLeTheoCotMaTran332(a, m, n);
		break;
	}
	case 333:
	{
		cout << "Tong cac so hoan thien trong ma tran: " << endl;
		cout << TongCacSoHoanThienMaTran333(a, m, n);
		break;
	}
	case 334:
	{
		cout << "Co " << DemSoLuongSoDuong334(a, m, n) << " so duong trong ma tran: " << endl;
		break;
	}
	case 335:
	{
		cout << "Co " << DemSoNguyenTo335(a, m, n) << " so nguyen to trong ma tran" << endl;
		break;
	}
	case 336:
	{
		cout << "Nhap x muon kiem tra: ";
		int x;
		cin >> x;
		cout << "So lan xuat hien cua " << x << " = " << DemSoLanXuatHienCuaX336(a, m, n, x) << endl;
		break;
	}
	case 337:
	{
		cout << "Tong so cac chu so trong ma tran: " << DemSoChuSoMaTran337(a, m, n) << endl;
		break;
	}
	case 338:
	{
		cout << "So luong cua tung hang: " << endl;
		DemSoDuongTheoHang338(a, m, n);
		break;
	}
	case 339:
	{
		cout << "So luong so hoan thien cua tung dong: " << endl;
		DemSoHoanThienTheoHang339(a, m, n);
		break;
	}
	case 340:
	{
		cout << "So luong so am theo cot trong ma tran: " << endl;
		DemSoAmTheoCot340(a, m, n);
		break;
	}
	case 341:
	{
		cout << "So luong so duong o bien ma tran: " << endl;
		cout << DemSoDuongOBien341(a, m, n) << endl;
		break;
	}
	case 342:
	{
		cout << "So phan tu cac dai trong ma tran: " << endl;
		cout << DemPhanTuCucDai342(a, m, n);
		break;
	}
	case 343:
	{
		cout << "So phan tu cuc tri trong mang: " << endl;
		cout << DemPhanTuCucTri343(a, m, n);
		break;
	}
	case 344:
	{
		cout << "So luong phan tu cua ma tran: " << endl;
		cout << DemSoLuongPhanTuTrongMaTran344(a, m, n) << endl;
		break;
	}
	case 345:
	{
		cout << "Tong cac cuc tri cua ma tran: " << endl;
		cout << TongCucTri345(a, m, n) << endl;
		break;
	}
	case 346:
	{
		cout << "So luong phan tu Hoang Hau trong ma tran: " << endl;
		cout << DemGiaTriHoangHau346(a, m, n);
		break;
	}
	case 347:
	{
		cout << "So luong phan tu yen ngua trong ma tran: " << endl;
		cout << DemPhanTuYenNgua347(a, m, n) << endl;
		break;
	}
	case 348:
	{
		if (KiemTraTonTaiDuong348(a, m, n) == 1)
			cout << "Ma Tran ton tai so duong: " << endl;
		else
			cout << "Ma Tran khong ton tai so duong: " << endl;
		break;
	}
	case 349:
	{
		if (KiemTraMaTranCoSoHoanThien349(a, m, n) == 1)
			cout << "Ma tran co so hoan thien: " << endl;
		else
			cout << "Ma tran khong co so hoan thien: " << endl;
		break;
	}
	case 350:
	{
		if (KiemTraTonTaiLe350(a, m, n) == 1)
			cout << "Mang co so le: " << endl;
		else
			cout << "Mang khong co so le: " << endl;
		break;
	}
	case 351:
	{
		if (KiemTraHoanToanDuong351(a, m, n) == 1)
			cout << "Mang toan duong: " << endl;
		else
			cout << "Mang khong toan duong: " << endl;
		break;
	}
	case 352:
	{
		cout << "Nhap hang h muon kiem tra: ";
		int h;
		cin >> h;
		if (KiemTraTangDanHang352(a, m, n, h) == 1)
			cout << "Hang thu " << h << " tang dan" << endl;
		else
			cout << "Hang thu " << h << " khong tang dan" << endl;
		break;
	}
	case 353:
	{
		cout << "Nhap cot muon kiem tra: ";
		int c;
		cin >> c;
		if (KiemTraGiamDanCot353(a, m, n, c) == 1)
			cout << "Cot thu " << c << " giam dan: " << endl;
		else
			cout << "Cot thu " << c << " khong giam dan: " << endl;
		break;
	}
	case 354:
	{
		if (KiemTra354(a, m, n) == 1)
			cout << "Cac gia tri giam dan theo dong va theo cot: " << endl;
		else
			cout << "Cac gia tri khong giam theo hang hoac khong giam theo cot: " << endl;
		break;
	}
	case 355:
	{
		cout << "Nhung dong toan am trong ma tran: " << endl;
		LietKeDongToanAm355(a, m, n);
		break;
	}
	case 356:
	{
		cout << "Chi so cua nhung dong toan chan: " << endl;
		LietKeChiSo356(a, m, n);
		break;
	}
	case 357:
	{
		cout << "Nhung dong chua so nguyen to: " << endl;
		LietKeDongCoSNT357(a, m, n);
		break;
	}
	case 358:
	{
		cout << "Nhung dong co so chan: " << endl;
		LietKeDongCoChan358(a, m, n);
		break;
	}
	case 359:
	{
		cout << "Nhung dong co so am: " << endl;
		LietKeDongCoSoAm359(a, m, n);
		break;
	}
	case 360:
	{
		cout << "Nhung cot co so chinh phuong la: " << endl;
		LietKeCotCoSoChinhPhuong360(a, m, n);
		break;
	}
	case 361:
	{
		cout << "Nhung dong co so am, so duong, va 0: " << endl;
		LietKeDongCo0AmDuong361(a, m, n);
		break;
	}
	case 362:
	{
		cout << "Nhung dong giam dan: " << endl;
		LietKeDongGiamDan362(a, m, n);
		break;
	}
	case 363:
	{
		cout << "Nhung cot tang dan trong ma tran: " << endl;
		LietKeCotTangDan363(a, m, n);
		break;
	}
	case 366:
	{
		if (TimGiaTriChanDau366(a, m, n) == 1)
			cout << "Mang khong co so chan: " << endl;
		else
			cout << "Gia tri chan dau tien cua mang: " <<TimGiaTriChanDau366(a,m,n)<< endl;
		break;
	}
	case 367:
	{
		cout << "Gia tri lon nhat trong ma tran: " << TimMaxMaTran367(a, m, n) << endl;
		break;
	}
	case 368:
	{
		cout << "Gia tri lon thu 2 trong ma tran: " << endl;
		cout << TimGiaTriLonNhi368(a, m, n);
		break;
	}
	case 369:
	{
		if (TimGiaTriDuongDauTien369(a, m, n) == -1)
			cout << "Ma tran khong co phan tu duong: " << endl;
		else
		{
			cout << "Gia tri duong dau tien trong ma tran: " << endl;
			cout << TimGiaTriDuongDauTien369(a, m, n);
		}
		break;
	}
	case 370:
	{
		if (TimGiaTriAmLonNhat370(a, m, n) == 0)
			cout << "Ma tran khong co phan tu am: " << endl;
		else
			cout << "Gia tri am lon nhat cua ma tran:" <<TimGiaTriAmLonNhat370(a,m,n)<< endl;
		break;
	}
	case 371:
	{
		cout << "Nhung dong co chua phan tu Max: " << endl;
		LietKeDongChuaMax371(a, m, n);
		break;
	}
	case 372:
	{
		cout << "Nhap dong ban muon tim max: ";
		int dong;
		cin >> dong;
		cout << "Max cua dong " << dong << " la: " << TimMaxDong372(a, m, n,dong);
		break;
	}
	case 373:
	{
		cout << "Nhap cot ban muon tim min: ";
		int cot;
		cin >> cot;
		cout << "Min cua cot " << cot << " la: " << TimMinCot373(a, m, n, cot) << endl;
		break;
	}
	case 374:
	{
		if (SoNguyenToDauTien374(a, m, n) == 0)
			cout << "Ma tran khong ton tai so nguyen to" << endl;
		else
			cout << "So nguyen to dau tien trong ma tran: " << SoNguyenToDauTien374(a, m, n) << endl;
		break;
	}
	case 375:
	{
		if (TimSoChanMax375(a, m, n) == 1)
			cout << "Ma tran khong co so chan: " << endl;
		else
			cout << "So chan lon nhat la: " << TimSoChanMax375(a, m, n) << endl;
		break;
	}
	case 376:
	{
		if (TimDuongNhoNhat376(a, m, n) == -1)
			cout << "Ma tran khong co so duong: " << endl;
		else
			cout << "So duong nho nhat trong ma tran: " << TimDuongNhoNhat376(a, m, n) << endl;
		break;
	}
	case 377:
	{
		if (TimSoNguyenToMax377(a, m, n) == 0)
			cout << "Ma tran khong co so nguyen to: " << endl;
		else
			cout << "So nguyen to lon nhat trong ma tran: " << TimSoNguyenToMax377(a, m, n) << endl;
		break;
	}
	case 378:
	{
		cout << "Chu so xuat hien nhieu nhat trong ma tran: ";
		cout << TimChuSoXuatHienNhieuNhat378(a, m, n) << endl;
		break;
	}
	case 379:
	{
		cout << "So luong phan tu min trong ma tran: " << endl;
		cout << DemSoLuongMin379(a, m, n) << endl;
		break;
	}
	case 380:
	{
		cout << "So luong chan min " << DemSoLuongChanMin380(a, m, n) << endl;
		break;
	}
	case 381:
	{
		cout << "Phan tu xuat hien nhieu nhat: " << PhanTuXuatHienNhieuNhat381(a, m, n) << endl;
		break;
	}
	case 382:
	{
		if (TimSoChinhPhuongLonNhat382(a, m, n) == -1)
			cout << "Ma tran khong co so chinh phuong: " << endl;
		else
		{
			cout << "So chinh phuong lon nhat cua ma tran: ";
			cout << TimSoChinhPhuongLonNhat382(a, m, n) << endl;
		}
		break;
	}
	case 383:
	{
		if (TimSoHoanThienMin383(a, m, n) == -1)
			cout << "Ma tran khong co so hoan thien: " << endl;
		else
		{
			cout << "So hoan thien min: " << endl;
			cout << TimSoHoanThienMin383(a, m, n) << endl;
		}
		break;
	}
	case 384:
	{
		cout << "Nhung chu so xuat hien nhieu nhat trong ma tran: " << endl;
		CacChuSoXuatHienNhieuNhat384(a, m, n);
		break;
	}
	case 385:
	{
		cout << "Nhung dong co tong max: " << endl;
		NhungDongCoTongMaTranMax385(a, m, n);
		break;
	}
	case 386:
	{
		cout << "Nhung cot co tong bang min: " << endl;
		LietKeCotCoTongMin386(a, m, n);
		break;
	}
	case 387:
	{
		cout << "Nhung dong co so luong phan tu chan nhieu nhat: "<< endl;

		LietKeDongCoSoChanMax387(a, m, n);
		break;
	}
	case 388:
	{
		cout << "Nhung dong co so luong so nguyen to lon nhat: " << endl;
		LietKeDongCoSoNguyenToNhieuNhat388(a, m, n);
		break;
	}
	case 389:
	{
		cout << "Nhung dong co so luong so hoan thien nhieu nhat: " << endl;
		LietKeDongCoSoHoanThienNhieuNhat389(a, m, n);
		break;
	}
	case 390:
	{
		cout << "Nhung dong co nhieu chu so nhat: " << endl;
		LietKeNhungDongCoNhieuChuSoNhat390(a, m, n);
		break;
	}
	default:
		break;
	}

}

void NhapMaTranThuc(float ** b, int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Nhap b[" << i << "][" << j << "]= ";
			cin >> b[i][j];
		}
	}
}

void XuatMaTranThuc(float ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= " << a[i][j] << "    ";
		}
		cout << "\n";
	}
}

int TimMaxMaTran315(int ** a, int m, int n)
{
	int Max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > Max)
				Max = a[i][j];
		}
	}
	return Max;
}

int KiemTraMaTran316(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0 && a[i][j] < 2004)
				return 1;
		}
	}
	return 0;
}

int DemSoNguyenTo317(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1)
				Dem++;
		}
	}
	return Dem;
}

int TongAmTrongMaTran318(int ** a, int m, int n)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				Tong += a[i][j];
		}
	}
	return Tong;
}

void SapXepMaTranDungMangPhu319(int ** a, int m, int n, int *b, int mn)
{
	//dua  mang 2 chieu ve mang 1 chieu
	int iDex = 0;
	//don lai thanh mang 1 chieu;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[iDex++] = a[i][j];
		}
	}
	//sap xep mang 1 chieu
	for (int i = 0; i < mn - 1; i++)
	{
		for (int j = i + 1; j < mn; j++)
		{
			if (b[j] < b[i])
				swap(b[i], b[j]);
		}
	}
	//dua lai thanh mang 2 chieu
	iDex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[iDex++];
		}
	}
}

void SapXepMaTranKhongDungMangPhu319(int ** a, int m, int n)
{
	//sap xep theo dong
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[i][j] > a[i][k])
					swap(a[i][j], a[i][k]);
			}
		}
	}
	//sap xep theo cot
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			for (int k = j + 1; k < m; k++)
			{
				if (a[j][i] > a[k][i])
					swap(a[j][i], a[k][i]);
			}
		}
	}
}

int TongCacPhanTuDuongMaTran320(int ** a, int m, int n)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				Tong += a[i][j];
		}
	}
	return Tong;
}

int TongCacPhanTuLeMaTran321(int ** a, int m, int n)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
				Tong += a[i][j];
		}
	}
	return Tong;
}

void TongTungDongTrenMaTran322(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int Tong = 0;
		for (int j = 0; j < n; j++)
		{
			Tong += a[i][j];
		}
		cout << "Tong dong thu " << i << ": " << Tong << endl;
	}
}

void TongDuongTheoCotMaTran323(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		int Tong = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] > 0)
				Tong += a[j][i];
		}
		cout << "Tong duong cot thu " << i << ": " << Tong << endl;
	}
}

void TongDuongTheoDongMaTran324(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int Tong = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				Tong += a[i][j];
		}
		cout << "Tong duong cac phan tu cua hang " << i << ": " << Tong << endl;
	}
}

void TinhTichCacSoChanTheoCotMaTran325(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		int Tich = 1;
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] > 0)
				Tich *= a[j][i];
		}
		cout << "Tich cac so duong o cot " << i << ": " << Tich << endl;
	}
}

float TrungBinhCongCacSoDuong326(int ** a, int m, int n)
{
	int Dem = 0, Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				Tong += a[i][j];
				Dem++;
			}
		}
	}
	return (Tong*1.0 / Dem);
}

int TongCacPhanTuBien327(int ** a, int m, int n)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
				Tong += a[i][j];
		}
	}
	return Tong;
}

float TrungBinhNhanCacSoDuong328(int ** a, int m, int n)
{
	int Dem = 0;
	int Tich = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				Tich *= a[i][j];
				Dem++;
			}
		}
	}
	return float(pow(Tich, 1 * 1.0 / Dem));
}

void BienDoiMaTranThanhDuong329(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				a[i][j] = -a[i][j];
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
		return int(x);
}

void BienDoiMaTranVoiGiaTriGanNo330(float ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = TimSoGanNhat(a[i][j]);
		}
	}
}

void TongDongMaTran331(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int TongDong = 0;
		for (int j = 0; j < n; j++)
		{
			TongDong += a[i][j];
		}
		cout << "Tong dong thu " << i << "= " << TongDong << endl;
	}
}

void TongSoLeTheoCotMaTran332(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		int TongDong = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] % 2 != 0)
				TongDong += a[j][i];
		}
		cout << "Tong dong thu " << i << "= " << TongDong << endl;
	}
}

int TongCacSoHoanThienMaTran333(int **a, int m, int n)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoHoanThien(a[i][j]) == 1)
				Tong += a[i][j];
		}
	}
	return Tong;
}

int DemSoLuongSoDuong334(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				Dem++;
		}
	}
	return Dem;
}

int DemSoNguyenTo335(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1)
				Dem++;
		}
	}
	return Dem;
}

int DemSoLanXuatHienCuaX336(int ** a, int m, int n, int x)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
				Dem++;
		}
	}
	return Dem;
}

int DemSoChuSo(int x)
{
	x = abs(x);
	int Dem = 0;
	while (x > 0)
	{
		Dem++;
		x = x / 10;
	}
	return Dem;
}

int DemSoChuSoMaTran337(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Dem += DemSoChuSo(a[i][j]);
		}
	}
	return Dem;
}

void DemSoDuongTheoHang338(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int Dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				Dem++;
		}
		cout << "So luong so duong o hang " << i << " = " << Dem << endl;
	}
}

void DemSoHoanThienTheoHang339(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int Dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoHoanThien(a[i][j]) == 1)
				Dem++;
		}
		cout << "So luong so hoan thien o dong " << i << " = " << Dem << endl;
	}
}

void DemSoAmTheoCot340(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		int Dem = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] < 0)
				Dem++;
		}
		cout << "So Am o cot thu " << i << " = " << Dem << endl;
	}
}

int DemSoDuongOBien341(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
				if (a[i][j] > 0)
					Dem++;
		}
	}
	return Dem;
}

int KiemTraPhanTuCucDai(int ** a, int m, int n, int i, int j, int x)
{	//m: so dong   n: so cot	i: bien chay theo dong	j: bien chay theo cot
	// xet vi tri a[0][0]
	if (i == 0 && j == 0)
	{
		if (a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j])
			return 1;
		return 0;
	}
	//xet vi tri a[0][n-1]
	else if (i == 0 && j == n - 1)
	{
		if (a[i][j] > a[i][j - 1] && a[i][j] > a[i + 1][j])
			return 1;
		return 0;
	}
	//xet vi tri a[m-1][0]
	else if (i == m - 1 && j == 0)
	{
		if (a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1])
			return 1;
		return 0;
	}
	//xet vi tri a[m-1][n-1]
	else if (i == m - 1 && j == n - 1)
	{
		if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j])
			return 1;
		return 0;
	}
	// xet dong dau
	else if (i == 0 && (j != 0 || j != n - 1))
	{
		if (a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j])
			return 1;
		return 0;
	}
	//xet dong cuoi
	else if (i == m - 1 && (j != 0 || j != n - 1))
	{
		if (a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1])
			return 1;
		return 0;
	}
	//xet cot dau
	else if (j == 0 && (i != 0 || i != m - 1))
	{
		if (a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j])
			return 1;
		return 0;
	}
	//xet cot cuoi
	else if (j == n - 1 && (i != 0 || i != m - 1))
	{
		if (a[i][j] > a[i][j - 1] && a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j])
			return 1;
		return 0;
	}
	//cac vi tri con lai khong phai vi tri dac biet
	else
	{
		if (a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j] && a[i][j] > a[i - 1][j])
			return 1;
		return 0;
	}

	return 0;
}

int DemPhanTuCucDai342(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraPhanTuCucDai(a, m, n, i, j, a[i][j]) == 1)
				Dem++;
		}
	}
	return Dem;
}

int KiemTraPhanTuCucTieu(int ** a, int m, int n, int i, int j, int x)
{
	if (i == 0 && j == 0)
	{
		if (a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j])
			return 1;
		return 0;
	}
	//xet vi tri a[0][n-1]
	else if (i == 0 && j == n - 1)
	{
		if (a[i][j] < a[i][j - 1] && a[i][j] < a[i + 1][j])
			return 1;
		return 0;
	}
	//xet vi tri a[m-1][0]
	else if (i == m - 1 && j == 0)
	{
		if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j + 1])
			return 1;
		return 0;
	}
	//xet vi tri a[m-1][n-1]
	else if (i == m - 1 && j == n - 1)
	{
		if (a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j])
			return 1;
		return 0;
	}
	// xet dong dau
	else if (i == 0 && (j != 0 || j != n - 1))
	{
		if (a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j])
			return 1;
		return 0;
	}
	//xet dong cuoi
	else if (i == m - 1 && (j != 0 || j != n - 1))
	{
		if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j + 1] && a[i][j] < a[i][j - 1])
			return 1;
		return 0;
	}
	//xet cot dau
	else if (j == 0 && (i != 0 || i != m - 1))
	{
		if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j])
			return 1;
		return 0;
	}
	//xet cot cuoi
	else if (j == n - 1 && (i != 0 || i != m - 1))
	{
		if (a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j])
			return 1;
		return 0;
	}
	//cac vi tri con lai khong phai vi tri dac biet
	else
	{
		if (a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j] && a[i][j] < a[i - 1][j])
			return 1;
		return 0;
	}
	return 0;
}

int KiemTraPhanTuCucTri(int ** a, int m, int n, int i, int j, int x)
{
	// neu la phan tu cuc dai thi cung la cuc tri 
	if (KiemTraPhanTuCucDai(a, m, n, i, j, x) == 1)
		return 1;
	// neu la phan tu cuc tieu thi cung la cuc tri 
	else if (KiemTraPhanTuCucTieu(a, m, n, i, j, x) == 1)
		return 1;
	//khong phai la cuc tri
	return 0;
}

int DemPhanTuCucTri343(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraPhanTuCucTri(a, m, n, i, j, a[i][j]) == 1)
				Dem++;
		}
	}
	return Dem;
}

//int DemSoLuongPhanTu(int * a, int n)
//{
//	{
//		// cai nay dich thuc la tao thu vien luon 
//		// oh không bi?t có cách nào hay h?n nh?ng mà ch?c v ch?p ?c r?i á
//		// cái using namespace la khai bao de dung duoc nhung cai trong Truong dung ko
//		// oh ?úng r :v
//		// cái này ti?n h?n là ko c?n dùng ??n class ph?i ko
//		// uk
//		// ma cach luc nay á, có cách nào khai báo mot cho, mà code mot cho khong, nh?ng nó v?n hi?u ???c ??y là c?a namespace Truong
//		// là chia .h v?i .cpp á h?? 
//		//? ?úng r?i, cho d? qu?n lí
//		using namespace Truong;
//		SapXepMangTang(a, n); // ??u tiên SapXepMangTang là m?t method trong class mà ?âu ph?i hàm không không ?âu
//		
//	}
//	Truong::SapXepMangTang(a, n);
//	int Dem = n;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] == a[i + 1])
//			Dem--;
//	}
//	return Dem;
//}

int DemSoLuongPhanTuTrongMaTran344(int ** a, int m, int n)
{
	int mn = m * n;
	int *b = new int[mn];
	int iDex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[iDex++] = a[i][j];
		}
	}
	int SoLuong;
	SoLuong = DemSoPhanTuCuaMang(b, mn);
	return SoLuong;
}

int TongCucTri345(int ** a, int m, int n)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraPhanTuCucTri(a, m, n, i, j, a[i][j]) == 1)
				Tong += a[i][j];
		}
	}
	return Tong;
}

int TimMaxTraiPhai(int ** a, int m, int n, int d, int c)
{
	int Max = a[d][c];
	while (d > 0 && c > 0)
	{
		d--;
		c--;
	}
	while (d < m - 1 && c < n - 1)
	{
		if (a[d][c] > Max)
			Max = a[d][c];
		d++;
		c++;
	}
	return Max;
}

int TimMaxPhaiTrai(int ** a, int m, int n, int d, int c)
{
	int Max = a[d][c];
	while (d > 0 && c < n)
	{
		d--;
		c++;
	}
	while (c > 0 && d < m - 1)
	{
		if (a[d][c] > Max)
			Max = a[d][c];
		d++;
		c--;
	}
	return Max;
}

int DemGiaTriHoangHau346(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == TimMaxCot(a, m, n, j) && a[i][j] == TimMaxDong(a, m, n, i))
			{
				if (a[i][j] == TimMaxTraiPhai(a, m, n, i, j) && a[i][j] == TimMaxPhaiTrai(a, m, n, i, j))
					Dem++;
			}
		}
	}
	return Dem;
}

int TimMinCot(int ** a, int m, int n, int c)
{
	int Min = a[0][c];
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] < Min)
			Min = a[i][c];
	}
	return Min;
}

int KiemTraPhanTuYenNgua(int ** a, int m, int n, int i, int j, int x)
{
	if (x == TimMaxDong(a, m, n, i) && x == TimMinCot(a, m, n, j))
		return 1;
	return 0;
}

int DemPhanTuYenNgua347(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraPhanTuYenNgua(a, m, n, i, j, a[i][j]) == 1)
				Dem++;
		}
	}
	return Dem;
}

int KiemTraTonTaiDuong348(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				return 1;
		}
	}
	return 0;
}

int KiemTraMaTranCoSoHoanThien349(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoHoanThien(a[i][j]) == 1)
				return 1;
		}
	}
	return 0;
}

int KiemTraTonTaiLe350(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
				return 1;
		}
	}
	return 0;
}

int KiemTraHoanToanDuong351(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				return 0;
		}
	}
	return 1;
}

int KiemTraTangDanHang352(int ** a, int m, int n, int h)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[h][i] > a[h][i + 1])
			return 0;
	}
	return 1;
}

int KiemTraGiamDanCot353(int ** a, int m, int n, int c)
{
	for (int i = 0; i < m-1; i++)
	{
		if (a[i][c] < a[i][c + 1])
			return 0;
	}
	return 1;
}

int KiemTraGiamDanHang(int ** a, int m, int n, int h)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[h][i] < a[h][i + 1])
			return 0;
	}
	return 1;
}

int KiemTra354(int ** a, int m, int n)
{
	int CheckD, CheckC;
	CheckD = 0;
	CheckC = 0;
	for (int i = 0; i < m; i++)
	{
		if (KiemTraGiamDanHang(a, m, n, i) == 0)
			CheckD++;
	}
	for (int i = 0; i < n; i++)
	{
		if (KiemTraGiamDanCot353(a, m, n, i) == 0)
			CheckC++;
	}
	if (CheckD == 0 && CheckC == 0)
		return 1;
	else
		return 0;
}

int KiemTraDongToanAm(int ** a, int m, int n, int d)
{
	for (int i = 0; i < n; i++)
	{
		if (a[d][i] > 0)
			return 0;
	}
	return 1;
}

void LietKeDongToanAm355(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (KiemTraDongToanAm(a, m, n, i) == 1)
			cout << "Dong toan Am: " << i << endl;
	}
}

int KiemTraDongToanChan(int ** a, int m, int n, int d)
{
	for (int i = 0; i < n; i++)
	{
		if (a[d][i] % 2 != 0)
			return 0;
	}
	return 1;
}

void LietKeChiSo356(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (KiemTraDongToanChan(a, m, n, i) == 1)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "[" << i << "][" << j << "]		";
			}
			cout << endl;
		}
	}
}

int KiemTraDongCoSoNguyenTo(int ** a, int m, int n, int d)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[d][i]) == 1)
			return 1;
	}
	return 0;
}

void LietKeDongCoSNT357(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (KiemTraDongCoSoNguyenTo(a, m, n, i) == 1)
			cout << "Dong co so nguyen to: " << i << endl;
	}
}

void LietKeDongCoChan358(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				cout << "Dong co gia tri chan: " << i << endl;
				break;
			}
		}
	}
}

void LietKeDongCoSoAm359(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
			{
				cout << "Dong co phan tu am: " << i << endl;
				break;
			}
		}
	}
}

void LietKeCotCoSoChinhPhuong360(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (KiemTraSoChinhPhuong(a[j][i]) == 1)
			{
				cout << "Cot co so chinh phuong: " << i << endl;
				break;
			}
		}
	}
}

int KiemTraDieuKienAmDuong0(int ** a, int m, int n, int d)
{
	int CheckAm, CheckDuong, Check0;
	CheckAm = CheckDuong = Check0 = 0;
	//kiem tra dong co so am
	for (int i = 0; i < n; i++)
	{
		if (a[d][i] < 0)
		{
			CheckAm = 1;
		}
		else if (a[d][i] > 0)
		{
			CheckDuong = 1;
		}
		else if (a[d][i] == 0)
		{
			Check0 = 1;
		}
	}
	
	if (CheckAm == 1 && Check0 == 1 && CheckDuong == 1)
		return 1;
	else
		return 0;
}

void LietKeDongCo0AmDuong361(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (KiemTraDieuKienAmDuong0(a, m, n, i) == 1)
			cout << "Dong co am duong 0 : " << i << endl;
	}
}

void LietKeDongGiamDan362(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (KiemTraGiamDanHang(a, m, n, i) == 1)
			cout << "Hang giam dan: " << i << endl;
	}
}

int KiemTraTangDanCot(int ** a, int m, int n, int c)
{
	for (int i = 0; i < m - 1; i++)
	{
		if (a[i][c] > a[i][c + 1])
			return 0;
	}
	return 1;
}

void LietKeCotTangDan363(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraTangDanCot(a, m, n, i) == 1)
			cout << "Cot tang dan: " << i << endl;
	}
}

int TimGiaTriChanDau366(int ** a, int m, int n)
{// neu khong co gia tri chan tra ve 1
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
				return a[i][j];
		}
	}
	return 1;
}

int TimMaxMaTran367(int ** a, int m, int n)
{
	int  Max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > Max)
				Max = a[i][j];
		}
	}
	return Max;
}

int TimGiaTriLonNhi368(int ** a, int m, int n)
{
	int mn = m * n;
	int *b = new int[mn];
	int iDex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[iDex++] = a[i][j];
		}
	}
	SapXepMangGiam(b, mn);
	iDex = b[1];
	delete[]b;
	return iDex;
}

int TimGiaTriDuongDauTien369(int ** a, int m, int n)
{// neu mang khong co phan tu duong tra ve -1
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				return a[i][j];
		}
	}
	return -1;
}

int TimGiaTriAmLonNhat370(int ** a, int m, int n)
{
	int AmDau = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//tim gia tri am dau tien
			if (AmDau == 0)
			{
				if (a[i][j] < 0)
					AmDau = a[i][j];
			}
			// sau khi da tim duoc gia tri am dau tien, tim gia tri am max
			else if (AmDau != 0)
			{
				if (a[i][j]<0 && a[i][j]>AmDau)
					AmDau = a[i][j];
			}
			
		}
	}
	return AmDau;
}

int KiemTraDongCoMax(int ** a, int m, int n, int d)
{
	for (int i = 0; i < n; i++)
	{
		if (a[d][i] == TimMaxMaTran367(a, m, n))
			return 1;
	}
	return 0;
}

void LietKeDongChuaMax371(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (KiemTraDongCoMax(a, m, n, i) == 1)
			cout << "Dong co chua Max: " << i << endl;
	}
}

int TimMaxDong372(int ** a, int m, int n, int d)
{
	return TimMaxDong(a, m, n, d);
}

int TimMinCot373(int ** a, int m, int n, int c)
{
	return TimMinCot(a,m,n,c);
}

int SoNguyenToDauTien374(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1)
				return a[i][j];
		}
	}
	return 0;
}

int TimSoChanMax375(int ** a, int m, int n)
{
	int Max = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{	// tim chan dau tien
			if (Max == 1)
			{
				if (a[i][j] % 2 == 0)
					Max = a[i][j];
			}
			// tim chan lon nhat
			else if (Max != 1)
			{
				if (a[i][j] % 2 == 0 && a[i][j] > Max)
					Max = a[i][j];
			}
		}
	}
	return Max;
}

int TimDuongNhoNhat376(int ** a, int m, int n)
{
	int Min = -1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Min == -1)
			{
				if (a[i][j] > 0)
					Min = a[i][j];
			}
			else if (Min != -1)
			{
				if (a[i][j] > 0 && a[i][j] < Min)
					Min = a[i][j];
			}
		}
	}
	return Min;
}

int TimSoNguyenToMax377(int ** a, int m, int n)
{
	int Max = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Max == 0)
			{
				if (KiemTraSoNguyenTo(a[i][j]) == 1)
					Max = a[i][j];
			}
			else if (Max != 0)
			{
				if (KiemTraSoNguyenTo(a[i][j]) == 1 && a[i][j]>Max)
					Max = a[i][j];
			}
		}
	}
	return Max;
}

void DemSoCacChuSo(int * a, int x)
{
	x = abs(x);
	int i = -1;
	while (x > 0)
	{
		i = x % 10;
		a[i] ++;
		x /= 10;
	}
}

int TimChuSoXuatHienNhieuNhat378(int ** a, int m, int n)
{
	int *b = new int[10];
	for (int i = 0; i < 10; i++)
	{
		b[i] = 0;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			DemSoCacChuSo(b,a[i][j]);
		}
	}
	int Max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (b[i] > b[Max])
			Max = i;
	}
	delete[]b;
	return Max;
}

int TimMinMaTran(int ** a, int m, int n)
{
	int Min = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < Min)
				Min = a[i][j];
		}
	}
	return Min;
}

int DemSoLuongMin379(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == TimMinMaTran(a, m, n))
				Dem++;
		}
	}
	return Dem;
}

int TimChanMin(int ** a, int m, int n)
{
	int Min = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Min == 1)
			{
				if (a[i][j] % 2 == 0)
					Min = a[i][j];
			}
			else if (Min != 1)
			{
				if (a[i][j] % 2 == 0 && a[i][j] < Min)
					Min = a[i][j];
			}
		}
	}
	return Min;
}

int DemSoLuongChanMin380(int ** a, int m, int n)
{
	if (TimChanMin(a, m, n) == 1)
		return 0;
	else
	{
		int Dem = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] == TimChanMin(a, m, n))
					Dem++;
			}
		}
		return Dem;
	}
}

int DemSoLanXuatHien(int ** a, int m, int n, int x)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (x == a[i][j])
				Dem++;
		}
	}
	return Dem;
}

int PhanTuXuatHienNhieuNhat381(int ** a, int m, int n)
{
	int Dem, GiaTri=a[0][0];
	Dem = DemSoLanXuatHien(a, m, n, a[0][0]);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (DemSoLanXuatHien(a, m, n, a[i][j]) > Dem)
			{
				Dem = DemSoLanXuatHien(a, m, n, a[i][j]);
				GiaTri = a[i][j];
			}
		}
	}
	return GiaTri;
}

int TimSoChinhPhuongLonNhat382(int ** a, int m, int n)
{
	int Check = -1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Check == -1)
			{
				if (KiemTraSoChinhPhuong(a[i][j]) == 1)
					Check = a[i][j];
			}
			else if (Check != -1)
			{
				if (KiemTraSoChinhPhuong(a[i][j]) == 1 && a[i][j] > Check)
					Check = a[i][j];
			}
		}
	}
	return Check;
}

int TimSoHoanThienMin383(int ** a, int m, int n)
{
	int Check = -1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Check == -1)
			{
				if (KiemTraSoHoanThien(a[i][j]) == 1)
					Check = a[i][j];
			}
			else if (Check != -1)
			{
				if (KiemTraSoHoanThien(a[i][j]) == 1 && a[i][j] < Check)
					Check = a[i][j];
			}
		}
	}
	return Check;
}

void CacChuSoXuatHienNhieuNhat384(int ** a, int m, int n)
{
	int *b = new int[10];
	for (int i = 0; i < 10; i++)
	{
		b[i] = 0;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			DemSoCacChuSo(b, a[i][j]);
		}
	}
	int Max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (b[i] > b[Max])
			Max = i;
	}
	for (int i = 0; i < 10; i++)
	{
		if (b[i] == b[Max])
			cout << "chu so " << i << " la nhung chu so xuat hien nhieu nhat: " << endl;
	}
	delete[]b;
}

int TongDongMaTran(int ** a, int m, int n, int d)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		Tong += a[d][i];
	}
	return Tong;
}

//tim tong cua dong lon nhat
int TongDongMax(int ** a, int m, int n)
{
	int Max = TongDongMaTran(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (TongDongMaTran(a, m, n, i) > Max)
			Max = TongDongMaTran(a, m, n, i);
	}
	return Max;
}

void NhungDongCoTongMaTranMax385(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (TongDongMaTran(a, m, n, i) == TongDongMax(a, m, n))
			cout << "Dong co tong max: " << i << endl;
	}
		
}

int TongCotMaTran(int ** a, int m, int n, int c)
{
	int Tong = 0;
	for (int i = 0; i < m; i++)
	{
		Tong += a[i][c];
	}
	return Tong;
}

int TongCotMin(int ** a, int m, int n)
{
	int Min = TongCotMaTran(a, m, n, 0);
	for (int i = 0; i < n; i++)
	{
		if (TongCotMaTran(a, m, n, i) < Min)
			Min = TongCotMaTran(a, m, n, i);
	}
	return Min;
}

void LietKeCotCoTongMin386(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (TongCotMaTran(a, m, n, i) == TongCotMin(a, m, n))
			cout << "Cot co tong bang min: " << i << endl;
	}
}

int DemSoLuongSoChanTrenDong(int ** a, int m, int n, int d)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[d][i] % 2 == 0)
			Dem++;
	}
	return Dem;
}

int SoLuongSoChanMax(int ** a, int m, int n)
{
	int Max = DemSoLuongSoChanTrenDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (DemSoLuongSoChanTrenDong(a, m, n, i) > Max)
			Max = DemSoLuongSoChanTrenDong(a, m, n, i);
	}
	return Max;
}

void LietKeDongCoSoChanMax387(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (DemSoLuongSoChanTrenDong(a, m, n, i) == SoLuongSoChanMax(a, m, n))
			cout << "Dong co so luong chan lon nhat: " << i << endl;
	}
}

int DemSoNguyenToTrenDong(int ** a, int m, int n, int d)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[d][i]) == 1)
			Dem++;
	}
	return Dem;
}

int SoLuongSoNguyenToMax(int ** a, int m, int n)
{
	int Max = DemSoNguyenToTrenDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (DemSoNguyenToTrenDong(a, m, n, i) > Max)
			Max = DemSoNguyenToTrenDong(a, m, n, i);
	}
	return Max;
}

void LietKeDongCoSoNguyenToNhieuNhat388(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (DemSoNguyenToTrenDong(a, m, n, i) == SoLuongSoNguyenToMax(a, m, n))
			cout << "Dong co so luong so nguyen to max: " << i << endl;
	}
}

int DemSoHoanThienTrenDong(int ** a, int m, int n, int d)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoHoanThien(a[d][i]) == 1)
			Dem++;
	}
	return Dem;
}

int SoLuongSoHoanThienMax(int ** a, int m, int n)
{

	int Max = DemSoHoanThienTrenDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (DemSoHoanThienTrenDong(a, m, n, i) > Max)
			Max = DemSoHoanThienTrenDong(a, m, n, i);
	}
	return Max;
}

void LietKeDongCoSoHoanThienNhieuNhat389(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (DemSoHoanThienTrenDong(a, m, n, i) == SoLuongSoHoanThienMax(a, m, n))
			cout << "Dong co so luong so hoan thien nhieu nhat: " << i << endl;
	}
}

int DemSoCacChuSoTrenDong(int ** a, int m, int n, int d)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		Dem += DemSoLuongChuSo(a[d][i]);
	}
	return Dem;
}

int SoLuongChuSoNhieuNhatTrenDong(int ** a, int m, int n)
{
	int Max = DemSoCacChuSoTrenDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		if (DemSoLuongSoChanTrenDong(a, m, n, i) > Max)
			Max = DemSoLuongSoChanTrenDong(a, m, n, i);
	}
	return Max;
}

void LietKeNhungDongCoNhieuChuSoNhat390(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if(DemSoCacChuSoTrenDong(a,m,n,i)==SoLuongChuSoNhieuNhatTrenDong(a,m,n))
			cout<<"Dong co so luong chu so nhieu nhat: "<<i<<endl;
	}
}


