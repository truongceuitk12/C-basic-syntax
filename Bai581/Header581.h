#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;

void Menu581();
struct Diem
{
	float ox;
	float oy;
};
void NhapDiem(Diem &d);
void XuatDiem(Diem d);
struct TamGiac
{
	Diem Dinh1;
	Diem Dinh2;
	Diem Dinh3;
};
float TinhKhoangCach2Diem(Diem x1, Diem x2);
int KiemTraDieuKienTamGiac(TamGiac t);
void NhapTamGiac(TamGiac &t);
void XuatTamGiac(TamGiac t);
int KiemTra2DiemBangNhau(Diem d1, Diem d2);
int KiemTraTamGiac584(TamGiac t);
Diem TimHoanhDoMax588(TamGiac t);
Diem TimTungDoMin589(TamGiac t);
float TinhTongKhoangCach590(TamGiac t, Diem d);
float GocGiua3Diem(Diem d1, Diem d2, Diem d3);
float TinhDientich3Diem(Diem d1, Diem d2, Diem d3);
int KiemTraDiemThuocTamGiac591(Diem d1, Diem d2, Diem d3, Diem p);
int DangTamGiac592(TamGiac t);
struct NgayThangNam
{
	int Ngay;
	int Thang;
	int Nam;
};
int KiemTraNamNhuan(int x);
void NhapNgayThangNam(NgayThangNam&);
void XuatNgayThangNam(NgayThangNam);
int ThuTuTrongNam597(NgayThangNam n);
double ThuTuTrongNam598(NgayThangNam n);
NgayThangNam TimNgay599(int Year, int OrdinalNumber);
NgayThangNam TimNgay600(int OrdinalNumber);
NgayThangNam TimNgayKeTiep601(NgayThangNam &Date);
NgayThangNam TimNgayTruocDo602(NgayThangNam &Date);
NgayThangNam TimNgayKeTiepKNgay603(NgayThangNam &Date, int k);
NgayThangNam TimNgayTruocDoKNgay604(NgayThangNam &Date, int k);
int KhoangCachGiua2Ngay605(NgayThangNam N1, NgayThangNam N2);
int SoSanh2Ngay606(NgayThangNam N1, NgayThangNam N2);
struct Tinh
{
	int MaTinh;
	char TenTinh[30] ;
	long DanSo;
	float DienTich;
};
void NhapTinh607(Tinh& t);
void XuatTinh607(Tinh t);
struct HopSua
{
	char NhanHieu[20];
	float TrongLuong;
	NgayThangNam HSD;
};
void NhapHopSua608(HopSua &hs);
void XuatHopSua608(HopSua hs);
struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
void NhapThoiGian(ThoiGian & t);
void XuatThoiGian(ThoiGian t);
struct Ve
{
	char TenPhim[20];
	long GiaVe;
	ThoiGian XuatChieu;
	NgayThangNam NgayXem;
};
void NhapVe609(Ve &v);
void XuatVe609(Ve v);
struct MatHang
{
	char TenMatHang[20];
	long DonGian;
	long SoLuongTon;
};
void NhapMatHang610(MatHang &mh);
void XuatMatHang610(MatHang mh);
struct ChuyenBay
{
	char Ma[5];
	NgayThangNam NgayBay;
	ThoiGian GioBay;
	char NoiDi[20];
	char NoiDen[20];
};
void NhapChuyenBay611(ChuyenBay &cb);
void XuatChuyenBay611(ChuyenBay  cb);
struct CauThu
{
	char Ma[10];
	char Ten[30];
	NgayThangNam NgaySinh;
};
void NhapCauThu612(CauThu &ct);
void XuatCauThu612(CauThu ct);
struct DoiBong
{
	int SoLuong;
	char Ma[5];
	char Ten[30];
	CauThu *DanhSach;
};
void NhapDoiBong613(DoiBong &db);
void XuatDoiBong613(DoiBong db);
struct NhanVien
{
	char Ma[5];
	char Ten[30];
	double Luong;
};
void NhapNhanVien614(NhanVien &nv);
void XuatNhanVien614(NhanVien nv);
struct ThiSinh
{
	char Ma[30];
	char HoTen[30];
	float DiemToan;
	float DiemLy;
	float DiemHoa;
	float DiemTong;
};
void NhapThiSinh615(ThiSinh &ts);
void XuatThiSinh615(ThiSinh ts);
struct LuanVan
{
	char Ma[10];
	char TenLuanVan[100];
	char TenThiSinh[30];
	char TenGiaoVien[30];
	int NamThucHien;
};
void NhapLuanVan616(LuanVan &lv);
void XuatLuanVan616(LuanVan lv);
struct HocSinh
{
	char Ten[30];
	int DiemToan;
	int DiemVan;
	float DiemTB;
};
void NhapHocSinh617(HocSinh &hs);
void XuatHocSinh617(HocSinh hs);
struct LopHoc
{
	int SoLuong;
	char TenLop[30];
	int SiSo;
	HocSinh *DanhSach;
};
void NhapLopHoc618(LopHoc &lh);
void XuatLopHoc618(LopHoc lh);
struct SoTietKiem
{
	char Ma[7];
	char Loai[10];
	char TenKH[30];
	long CMND;
	NgayThangNam NgayMoSo;
	float SoTien;
};
void NhapSoTK619(SoTietKiem &stk);
void XuatSoTK619(SoTietKiem stk);
struct DaiLy
{
	char Ma[5];
	char Ten[30];
	long DienThoai;
	NgayThangNam NgayTiepNhan;
	char DiaChi[50];
	char Email[50];
};
void NhapDaiLy620(DaiLy &dl);
void XuatDaiLy620(DaiLy dl);