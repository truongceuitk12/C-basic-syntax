#pragma once
#include<iostream>
using namespace std;

void NhapMang(int *a, int n);
void Truong();
int FirstRecursion(int x);
void Menu702();
int RecTinhTong702(int n);
int DQTinhGiaiThua703(int n);
int DQTongNguyen704(int *a, int n);
int DQDemDuong705(int *a, int n);
int DQFibonaci707(int n);
struct NodeLink
{
	int info;
	NodeLink *pNext;
	NodeLink *pPrev;
};
struct listLink
{
	NodeLink pHead;
	NodeLink pTail;
};

int GiaThua(int n);
float DQTong710(int n, int x);
void DQXuatMang718(int *a, int n);
void DQXuatMang719(int *a, int n);
int DQDemDuong720(int *a, int n);
int DQDemKhac721(int *a, int n);
int DQTinhTong722(int *a, int n);
int DQTinhTongDuong723(int *a, int n);
int DQTinhTong724(int *a, int n);
int DQKiemTraToanAm725(int *a, int n);
int DQTimMax726(int *a, int n);
int DQTimViTriMax727(int *a, int n);
void DQSapXepTang728(int *a, int n);
void DQSapXep729(int *a, int n);
int DQTong730(int n);
int DQTong731(int n);
float DQTong732(int n);
float DQTong733(int n);
float DQTong734(int n);
float DQTong735(int n);
float DQTong736(int n);
float DQTong737(int n);
long DQTinh738(int n);
float DQTinhLuyThua739(float x, int n);
int DQTong740(int n);
int DQTong741(int x, int n);
int DQTong742(int x, int n);
int DQTong743(int x, int n);
int TongN(int n);
float DQTong744(int n);
float DQTong745(int x, int n);
float DQTong746(int x, int n);
int DQTimUoc747(int n);
float DQCanBac748(int n);
float DQCanBac749(int n);
float DQCanBac750(int n, int s);
float DQPhanSo751(int n);
int DQDemSoLuong752(int n);
int DQTongChuSo753(int n);
int DQTichChuSo754(int n);
int DQDemChuSoLe755(int n);
int DQTongChan756(int n);
int DQTongLe757(int n);
int DQTimChuSoDauTien758(int n);
int DQTimSoNguoc759(int n);
int DQTimChuSoMax760(int n);
int DQTimChuSoMin761(int n);
int DQKiemTraToanLe762(int n);
int DQKiemTraToanChan763(int n);