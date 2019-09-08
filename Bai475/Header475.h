#pragma once
#include<iostream>
using namespace std;
#define MAX 100
#define PI 3.14


void menu475();

struct PhanSo
{
	int TuSo;
	int MauSo;
};
void NhapPhanSo(PhanSo &a);
void XuatPhanSo(PhanSo a);
struct HonSo
{
	int Nguyen;
	int TuSo;
	int MauSo;
};
void NhapHonSo(HonSo& a);
void XuatHonSo(HonSo a);
struct Diem
{
	float Ox;
	float Oy;
};
void NhapDiem(Diem&);
void XuatDiem(Diem);
struct Diem3D
{
	float Ox;
	float Oy;
	float Oz;
};
void NhapDiem3D(Diem3D &);
void XuatDiem3D(Diem3D);
struct DonThuc
{
	float HeSo;
	int Mu;
};
void NhapDonThuc(DonThuc &);
void XuatDonThuc(DonThuc);
struct DaThuc
{
	int *HeSo;
	int Bac;
};
void NhapDaThuc(DaThuc &);
void XuatDaThuc(DaThuc );
struct NgayThangNam
{
	int Ngay;
	int Thang;
	int Nam;
};
int KiemTraNamNhuan(int x);
void NhapNgayThangNam(NgayThangNam&);
void XuatNgayThangNam(NgayThangNam);
struct PhuongTrinhDuongThang
{
	int Ax;
	int By;
	int C;
};
void NhapDuongThang(PhuongTrinhDuongThang&);
void XuatDuongThang(PhuongTrinhDuongThang);
struct DuongTron
{
	Diem Tam;
	float BanKinh;
};
void NhapDuongTron(DuongTron &);
void XuatDuongTron(DuongTron);
float TinhChuViDienTich(DuongTron &o);
struct TamGiac
{
	Diem Dinh1;
	Diem Dinh2;
	Diem Dinh3;
};
float TinhKhoangCach2Diem(Diem x1, Diem x2);
int KiemTraDieuKienTamGiac(TamGiac t);
float TinhDienTichTamGiac(TamGiac t);
float TinhChuViTamGiac(TamGiac t);
Diem TimTrongTam(TamGiac t);
void NhapTamGiac(TamGiac &t);
void XuatTamGiac(TamGiac);
DonThuc TichHaiDonThuc486(DonThuc, DonThuc);
DonThuc TinhDaoHamDonThuc487(DonThuc& d);
DonThuc TinhThuong2DonThuc488(DonThuc d1, DonThuc d2);
DonThuc TinhDaoHamCapK489(DonThuc &d, int k);
float TinhLuyThua(float HeSo, int Mu);
float TinhGiaTriDonThuc490(DonThuc d, float x);
DonThuc operator*(DonThuc d1, DonThuc d2);
DonThuc operator/(DonThuc d1, DonThuc d2);
DaThuc TinhHieu2DaThuc493(DaThuc Da1, DaThuc Da2);
DaThuc TinhTong2DaThuc494(DaThuc Da1, DaThuc Da2);
DaThuc TinhTich2DaThuc495(DaThuc Da1, DaThuc Da2);
DaThuc TinhDaoHamDaThuc498(DaThuc &d);
DaThuc TinhDaoHamCapk499(DaThuc &d, int k);
float TinhGiaTriDaThuc500(DaThuc d, float x);
DaThuc operator+(DaThuc Da1, DaThuc Da2);
DaThuc operator-(DaThuc d1, DaThuc d2);
DaThuc operator*(DaThuc d1, DaThuc d2);
int TimUocChungMax(int a, int b);
PhanSo RutGonPhanSo506(PhanSo &p);
PhanSo TinhTongPhanSo507(PhanSo p1, PhanSo p2);
PhanSo TinhHieuPhanSo508(PhanSo p1, PhanSo p2);
PhanSo TinhTichPhanSo509(PhanSo p1, PhanSo p2);
PhanSo TinhThuongPhanSo510(PhanSo p1, PhanSo p2);
int KiemTraPhanSoToiGian511(PhanSo p);
void QuyDongPhanSo512(PhanSo &p1, PhanSo &p2);
int KiemTraPhanSoDuong513(PhanSo p);
int KiemTraPhanSoAm514(PhanSo p);
int SoSanh2PhanSo515(PhanSo p1, PhanSo p2);
PhanSo operator+(PhanSo  p1, PhanSo p2);
PhanSo operator-(PhanSo p1, PhanSo p2);
PhanSo operator*(PhanSo p1, PhanSo p2);
PhanSo operator/(PhanSo p1, PhanSo p2);
PhanSo operator ++(PhanSo &p);
PhanSo operator--(PhanSo &p);
HonSo RutGonHonSo525(HonSo &h);
HonSo Tong2HonSo526(HonSo h1, HonSo h2);
HonSo Hieu2HonSo527(HonSo h1, HonSo h2);
HonSo Tich2HonSo528(HonSo h1, HonSo h2);
HonSo Thuong2HonSo529(HonSo h1, HonSo h2);
int KiemTraHonSoToiGian530(HonSo h);
void QuyDong2HonSo531(HonSo &h1, HonSo &h2);
struct SoPhuc
{
	float Thuc;
	float Ao;
};
void NhapSoPhuc533(SoPhuc &sp);
void XuatSoPhuc534(SoPhuc sp);
SoPhuc Tong2SoPhuc535(SoPhuc sp1, SoPhuc sp2);
SoPhuc Hieu2SoPhuc536(SoPhuc sp1, SoPhuc sp2);
SoPhuc Tich2SoPhuc537(SoPhuc sp1, SoPhuc sp2);
SoPhuc Thuong2SoPhuc538(SoPhuc sp1, SoPhuc sp2);
SoPhuc TichLuyThuaBacN539(SoPhuc sp, int n);
float TinhKhoangCachTheoOX544(Diem d1, Diem d2);
float TinhKhoangCachTheoOY545(Diem d1, Diem d2);
Diem TimDiemDoiXungQuaO546(Diem d);
Diem TimDiemDoiXungQuaOX547(Diem d);
Diem TimDiemDoiXungQuaOY548(Diem d);
Diem TimDiemDoiXungQuaX549(Diem d);
Diem TiemDiemDoiXungQua_X550(Diem d);
int KiemTraThuocPhanTuI551(Diem d);
int KiemTraThuocPhanTuII552(Diem d);
int KiemTraThuocPhanTuIII553(Diem d);
int KiemTraThuocPhanTuIV554(Diem d);
float TinhKhoangCachOXYZ558(Diem3D d1, Diem3D d2);
float TinhKhoangCachTheoOX559(Diem3D d1, Diem3D d2);
float TinhKhoangCachTheoOY560(Diem3D d1, Diem3D d2);
float TinhKhoangCachTheoOZ561(Diem3D d1, Diem3D d2);
Diem3D TimDiemDoiXungQuaO562(Diem3D d);
Diem3D TimDiemDoiXungQuaOXY563(Diem3D d);
Diem3D TimDiemDoiXungQuaOXZ564(Diem3D d);
Diem3D TimDiemDoiXungQuaOYZ565(Diem3D d);
float TinhChuViDuongTron569(DuongTron o);
float TinhDienTichDuongTron570(DuongTron o);
int XetViTriTuongDoi571(DuongTron Dt1, DuongTron Dt2);
int KiemTraDiem572(DuongTron Dt1, Diem d);
struct HinhCau
{
	Diem3D Tam;
	float BanKinh;
};
void NhapHinhCau575(HinhCau &Hc);
void XuatHinhCau576(HinhCau Hc);
float TinhSXungQuanh577(HinhCau Hc);
float TinhVHinhCau578(HinhCau Hc);
int KiemTraViTri2HinhCau579(HinhCau Hc1, HinhCau Hc2);
int KiemTraDiemThuocCau580(HinhCau Hc1, Diem3D d);
