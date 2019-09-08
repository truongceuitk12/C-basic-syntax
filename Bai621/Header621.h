#pragma once
#include<iostream>
using namespace std;

void Menu621();
struct Diem
{
	float OX;
	float OY;
};
void NhapDiem(Diem &d);
void XuatDiem(Diem d);
int KiemTra2DiemKhac(Diem d1, Diem d2);
void NhapMangDiem621(Diem *md, int n);
void XuatMangDiem622(Diem *md, int n);
int Dem623(Diem *md, int n);
int Dem624(Diem *md, int n);
Diem TimMaxOY625(Diem *md, int n);
float KhoangCach2Diem(Diem x1, Diem x2);
Diem TimGanO626(Diem *md, int n);
Diem TimXaO627(Diem *md, int n);
int KiemTraDuyNhat(Diem *md, int n, Diem d);
void NhapMangKhongLap(Diem *md, int n);
void Tim2DiemGanNhat628(Diem *md, int n, Diem &d1, Diem &d2);
void Tim2DiemXaNhat629(Diem *md, int n, Diem &d1, Diem &d2);
float TinhDientich3Diem(Diem d1, Diem d2, Diem d3);
int KiemTraDiemThuocTamGiac(Diem d1, Diem d2, Diem d3, Diem p);
int KiemTraDocLap630(Diem *md, int n, Diem d1, Diem d2, Diem d3);
void TamGiacDocLap630(Diem *md, int n);