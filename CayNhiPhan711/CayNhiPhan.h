#pragma once
#include<iostream>
using namespace std;

struct node
{
	int data;
	node *pLeft;
	node *pRight;
};
typedef node* Tree;
struct PhanSo
{
	float tu;
	float mau;
};
void NhapPhanSo( PhanSo &p);
void XuatPhanSo(PhanSo p);
struct nodeP
{
	PhanSo data;
	nodeP *pLeft;
	nodeP *pRight;
};
typedef nodeP* TreeP;
struct diem
{
	float ox;
	float oy;
};
void NhapDiem(diem &d);
void XuatDiem(diem d);
struct nodeD
{
	diem data;
	nodeD *pLeft;
	nodeD *pRight;
};
typedef nodeD* TreeD;
// khoi tao cay rong, cay khong co phan tu
void TaoCayRong(Tree &t);
int ThemNode(Tree &t, int x);
void NhapCay(Tree &t);
void menu861(Tree t);
void XuatCay(Tree t);
int DQDemNutLa711(Tree t, int &count);
int TimMaxCay864(Tree t);
int DemAm865(Tree t);
int Tong866(Tree t);
int KiemTra867(Tree t);
void ThemPhanTu868(Tree &t, int x);
int XoaNode869(Tree &t, int x);
void LNR870(Tree t);
void RNL870(Tree t);
void NLR870(Tree t);
void NRL870(Tree t);
void LRN870(Tree t);
void RLN870(Tree t);
void XuatChan871(Tree t);
void XuatDiaChi872(Tree t, int x, int y);
int KiemTraSHT(int x);
void XuatHoanThien873(Tree t);
void XuatNodeTangK874(Tree t, int k);
int ChieuCaoCay(Tree t);
void XuatCayTheoTang875(Tree t);
int DemDungMotCon876(Tree t);
int DemDungHaiCon877(Tree t);
int DemSoLuongNodeChan878(Tree t);
int DemLaChan879(Tree t);
int KiemTraSNT(int x);
int DemConNguyenTo880(Tree t);