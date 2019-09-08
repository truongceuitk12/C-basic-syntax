#pragma once
#include<iostream>
#include"../Library/Lib.h"

using namespace std;
using namespace Truong;

void menu429(int **a, int n, float **b);
void NhapMaTranNguyenVuong(int **a, int n);
void NhapMaTranThucVuong(float **a, int n);
void XuatMaTranVuongNguyen(int **a, int n);
void XuatMaTranVuongThuc(float **a, int n);
float TimMaxMaTranThuc433(float **a, int n);
int KiemTraTonTaiSoNguyenTo434(int **a, int n);
int DemSoNguyenTo435(int **a, int n);
float TinhTongAm436(float **a, int n);
void SapXepMaTranVuong437(int **a, int n);
int TinhTongTamGiacTren438(int **a, int n);
int TinhTongTamGiacDuoi439(int **a, int n);
int TinhTongDuongCheoChinh440(int **a, int n);
int TinhTongDuongCheoPhu441(int **a, int n);
int TinhTongChanBien442(int **a, int n); 
int TimMaxTamGiacTren443(int **a, int n);
int TimMinTamGiacDuoi444(int **a, int n);
int TimMaxDuongCheoChinh445(int **a, int n);
int TimMinDuongCheoPhu446(int **a, int n);
int TimNguyenToMax447(int **a, int n);
int TimHaiGiaTriGanNhauNhat448(int **a, int n, int &x1, int &x2);
void XuatMaTranCon(int ** a, int dDau, int dCuoi, int cDau, int cCuoi);
void XuatToanBoMaTranCon(int **a, int n);
int TinhTongMaTranCon(int ** a, int dDau, int dCuoi, int cDau, int cCuoi);
void TimMaTranConTongMax449(int **a, int n);
int DemDoiNhau450(int **a,int n);
int KiemTraDongGiam(int **a, int n, int dong);
int DemDongGiam451(int **a, int n);
int DemSoLuongCucDai452(int **a, int n);
int DemDuongDuongCheoChinh453(int **a, int n);
int DemAmDuongCheoPhu454(int **a, int n);
int DemChanTamGiaTren455(int **a, int n);
int KiemTraTangDanDuongCheoChinh456(int **a, int n);
int KiemTraDoiXungQuaDuongCheo457(int **a, int n);
int KiemTraDoiXung458(int **a, int n);
int KiemTraMaPhuongLe459(int **a, int n);
void SapXepDuongCheoChinhTang460(int **a, int n);
void SapXepDuongCheoPhuTang461(int **a, int n);
void HoanVi2Dong462(int **a, int n, int dong1, int dong2);
void HoanVi2Cot463(int **a, int n, int cot1, int cot2);
void SapXepTangTheoTongDong464(int **a, int n);
void DuaChanVeDauMaChan465(int **a, int n);
void SapXepTamGiacTren466(int **a, int n);
void SapXepTamGiacDuoi467(int **a, int n);
int TongMaTranVuong(int **a, int n);
int HieuMaTranVuong(int **a, int n);
int TichMaTranVuong(int **a, int n);
int TinhTong2MaTran469a(int **a, int na, int **b, int nb);
int TinhHieu2MaTran470a(int **a, int na, int **b, int nb);
int TinhTich2MaTran471a(int **a, int na, int **b, int nb);
void XayDungMaTranTong469b(int **a, int n, int **b, int **&Tong);
void XayDungMaTranHieu470b(int **a, int n, int **b, int **&Hieu);
void XayDungMaTranTich471b(int **a, int n, int **b, int **&Tich);


