#include"CayNhiPhan.h"

void menu861(Tree t)
{
	cout << "864   865   866   867   868   869   870" << endl;
	cout << "871   872   873   874   875   876   877   878   879   880" << endl;
	cout << "881   882   883   884   885   886   887   888   889   890" << endl;
	cout << "891   892   893   894   895   896   897   898   899   900" << endl;

	cout << "0: return " << endl;
	int select;
	cout << "Nhap lua chon cua ban: ";
	cin >> select;
	switch (select)
	{
	case 864:
	{
		cout << endl;
		cout << "Max cua cay: " << TimMaxCay864(t) << endl;
		break;
	}
	case 865:
	{
		cout << "Cay vua nhap: " << endl;
		XuatCay(t);
		cout << endl;
		cout << "So node am cua cay: " << DemAm865(t) << endl;
		break;
	}
	case 866:
	{
		cout << "Cay vua nhap: " << endl;
		XuatCay(t);
		cout << endl;
		cout << "Tong node >=0 && <2004 cua cay: " << Tong866(t) << endl;
		break;
	}
	case 867:
	{
		cout << "Ket qua tim kiem: " << KiemTra867(t) << endl;
		break;
	}
	case 868:
	{
		int x;
		cout << "Nhap x muon them vao cay: ";
		cin >> x;
		ThemPhanTu868(t, x);
		cout << "Sau khi them node: " << endl;
		XuatCay(t);
		break;
	}
	case 869:
	{
		int x;
		cout << "Nhap x muon xoa khoi cay: ";
		cin >> x;
		XoaNode869(t, x);
		cout << "Cay sau khi xoa: " << endl;
		XuatCay(t);
		break;
	}
	case 870:
	{
		cout << "Duyet cay LNR: " << endl;
		LNR870(t);
		cout << endl;
		cout << "Duyet cay RNL: " << endl;
		RNL870(t);
		cout << endl;
		cout << "Duyet cay NLR: " << endl;
		NLR870(t);
		cout << endl;
		cout << "Duyet cay NRL: " << endl;
		NRL870(t);
		cout << endl;
		cout << "Duyet cay LRN: " << endl;
		LNR870(t);
		cout << endl;
		cout << "Duyet cay RLN: " << endl;
		RLN870(t);
		cout << endl;
		break;
	}
	case 871:
	{
		cout << "Cac node chan trong cay: " << endl;
		XuatChan871(t);
		break;
	}
	case 872:
	{
		int x, y;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap y: ";
		cin >> y;
		cout << "Dia chi cac node thoa man yeu cau: " << endl;
		XuatDiaChi872(t, x, y);
		cout << endl;
		break;
	}
	case 873:
	{
		cout << "Nhung so hoan thien trong cay: " << endl;
		XuatHoanThien873(t);
		cout << endl;
		break;
	}
	case 874:
	{
		int k;
		cout << "Nhap tang muon xuat: " << endl;
		cin >> k;
		cout << "Tat ca cac node tren tan K: " << endl;
		XuatNodeTangK874(t, k);
		cout << endl;
		break;
	}
	case 875:
	{
		cout << "Chieu cao cay nhi phan vua nhap: " <<ChieuCaoCay(t)<< endl;
		cout << "\nXuat cay theo tung tang: \n" << endl;
		XuatCayTheoTang875(t);
		break;
	}
	case 876:
	{
		cout << "So node co dung 1 con: " << DemDungMotCon876(t) << endl;
		break;
	}
	case 877:
	{
		cout << "So node co dung 2 con: " << DemDungHaiCon877(t) << endl;
		break;
	}
	case 878:
	{
		cout << "So luong node chan tren cay: " << DemSoLuongNodeChan878(t) << endl;
		break;
	}
	case 879:
	{
		cout << "So luong node la chan: " << DemLaChan879(t) << endl;
		break;
	}
	case 880:
	{
		cout << "So luong node con nguyen to: " << DemConNguyenTo880(t) << endl;
		break;
	}
	default:
		break;
	}
}

void NhapPhanSo(PhanSo &p)
{
	cout << "Nhap tu: ";
	cin >> p.tu;
	cout << "Nhap mau: ";
	cin >> p.mau;
}

void XuatPhanSo(PhanSo p)
{
	cout << p.tu << "/" << p.mau << endl;
}

void NhapDiem(diem & d)
{
	cout << "Nhap ox: ";
	cin >> d.ox;
	cout << "Nhap oy: ";
	cin >> d.oy;
}

void XuatDiem(diem d)
{
	cout << "(" << d.ox << "," << d.oy << ")" << endl;
}

void TaoCayRong(Tree & t)
{
	t = NULL;
}

int ThemNode(Tree & t, int x)
{
	if (t == NULL)					// neu cay dang rong
	{
		node *p = new node;			//tao mot node moi de luu tru gia tri
		if (p == NULL)
			return 0;				// khong du bo nho de cap phat node moi
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;		
		return 1;//node p chinh la node goc cua cay
	}
	else if (t != NULL)             // cay co ton tai phan tu
	{
		if (t->data == x)
			return -1;				// x da ton tai trong cay
		//goi de quy de them node vao cay
		else if (x > t->data)
			ThemNode(t->pRight, x);
		else if (x < t->data)
			ThemNode(t->pLeft, x);
	}						//them node thanh cong
}

void NhapCay(Tree & t)
{
	TaoCayRong(t);
	int n;
	cout << "Nhap so luong node tren cay: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, check=0;
		//neu nhap gia tri da ton tai trong cay thi yeu cau nhap lai
		do
		{
			cout << "Nhap gia tri thu "<<i<<": ";
			cin >> x;
			check=ThemNode(t, x);
			if (check!= 1)
			{
				cout << "Nhap lai gia tri thu "<<i << ": ";
				cin >> x;
				check=ThemNode(t, x);
			}
		} while (check!=1);
	}
}

void XuatCay(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		XuatCay(t->pLeft);
		cout << t->data << "    ";
		XuatCay(t->pRight);
	}
}

int DQDemNutLa711(Tree t, int & count)
{
	if (t != NULL)
	{
		DQDemNutLa711(t->pLeft, count);
		if (t->pLeft == NULL && t->pRight == NULL)
			count++;
		DQDemNutLa711(t->pRight, count);
	}
	return 0;
}

int TimMaxCay864(Tree t)
{
	if (t->pRight == NULL)
		return t->data;
	return TimMaxCay864(t->pRight);
}

int DemAm865(Tree t)
{
	if (t == NULL)
		return 0;
	else if (t != NULL)
	{
		if (t->pLeft == NULL && t->pRight == NULL)
		{
			if (t->data < 0)
				return 1;
			else
				return 0;
		}
		int a = DemAm865(t->pRight);
		int b = DemAm865(t->pLeft);
		if (t->data < 0)
			return a + b + 1;
		else
			return a + b;
	}
}

int Tong866(Tree t)
{
	if (t == NULL)
		return 0;
	else if (t != NULL)
	{
		if (t->pLeft == NULL && t->pRight == NULL)
		{
			if (t->data >=0&&t->data <2004)
				t->data;
			else
				return 0;
		}
		int a = Tong866(t->pRight);
		int b = Tong866(t->pLeft);
		if (t->data >=0&&t->data <2004)
			return a + b + t->data;
		else
			return a + b;
	}
}

int KiemTra867(Tree t)
{
	if(t==NULL )
		return 0;
	else
	{
		int check = 0;
		KiemTra867(t->pLeft);
		KiemTra867(t->pRight);
		if (t->data == 0)
			check = 1;
		return check;
	}
}

void ThemPhanTu868(Tree & t, int x)
{
	ThemNode(t, x);
}

int XoaNode869(Tree & t, int x)
{
	if (t == NULL)
		return 0;
	else if (t->data < x)
		return XoaNode869(t->pRight, x);
	else if (t->data > x)
		return XoaNode869(t->pLeft, x);
	else
	{
		node *p = t;
		if (t->pLeft == NULL)
			t = t->pRight;
		else if (t->pRight == NULL)
			t = t->pLeft;
		else
		{
			node*s = t;
			node*q = s->pLeft;
			while (q->pRight != NULL)
			{
				s = q;
				q = q->pRight;
			}
			p->data = q->data;
			s->pRight = q->pLeft;
			delete q;
		}
	}
	return 1;
}

void LNR870(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		LNR870(t->pLeft);
		cout << t->data << "    ";
		LNR870(t->pRight);
	}
}

void RNL870(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		RNL870(t->pRight);
		cout << t->data << "    ";
		RNL870(t->pLeft);
	}
}

void NLR870(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		cout << t->data << "    ";
		NLR870(t->pLeft);
		NLR870(t->pRight);
	}
}

void NRL870(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		cout << t->data << "    ";
		NRL870(t->pRight);
		NRL870(t->pLeft);
	}
}

void LRN870(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		LRN870(t->pLeft);
		LRN870(t->pRight);
		cout << t->data << "    ";
	}
}

void RLN870(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		RLN870(t->pRight);
		RLN870(t->pLeft);
		cout << t->data << "    ";
	}
}

void XuatChan871(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		XuatChan871(t->pLeft);
		if (t->data % 2 == 0)
			cout << t->data << "    ";
		XuatChan871(t->pRight);
	}
}

void XuatDiaChi872(Tree t, int x, int y)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		XuatDiaChi872(t->pLeft,x,y);
		if (t->data > x && t->data < y)
		{
			cout << &t->data << "    ";
		}
		XuatDiaChi872(t->pRight, x, y);
	}
}

int KiemTraSHT(int x)
{
	int s = 0;
	for (int i = 1; i < x; i++)
	{
		if (x%i == 0)
			s += i;
	}
	if (s == x)
		return 1;
	return 0;
}

void XuatHoanThien873(Tree t)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		XuatHoanThien873(t->pLeft);
		if (KiemTraSHT(t->data) == 1)
			cout << t->data << "    ";
		XuatHoanThien873(t->pRight);
	}
}

void XuatNodeTangK874(Tree t, int k)
{
	if (t == NULL)
		return;
	else if (t != NULL)
	{
		k--;
		XuatNodeTangK874(t->pLeft, k);
		if (k == 0)
			cout << t->data << "    ";
		XuatNodeTangK874(t->pRight, k);
	}
}

int ChieuCaoCay(Tree t)
{
	if (t == NULL)
		return 0;
	else
	{
		int a = ChieuCaoCay(t->pLeft);
		int b = ChieuCaoCay(t->pRight);
		return (a>b)?a + 1:b+1;
	}
}

void XuatCayTheoTang875(Tree t)
{
	int n = ChieuCaoCay(t);
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhung node o tang thu: " << i + 1 << endl;
		XuatNodeTangK874(t, i + 1);
	}
}

int DemDungMotCon876(Tree t)
{
	if (t == NULL)
		return 0;
	else
	{
		int a= DemDungMotCon876(t->pLeft);
		int b= DemDungMotCon876(t->pRight);
		if ((t->pLeft == NULL && t->pRight != NULL) || (t->pLeft != NULL && t->pRight == NULL))
			return a+b+1;
		return a + b;
	}
}

int DemDungHaiCon877(Tree t)
{
	if (t == NULL)
		return 0;
	else
	{
		int a = DemDungHaiCon877(t->pLeft);
		int b = DemDungHaiCon877(t->pRight);
		if (t->pLeft != NULL && t->pRight != NULL)
			return a + b + 1;
		return a + b;
	}
}

int DemSoLuongNodeChan878(Tree t)
{
	if (t == NULL)
		return 0;
	else
	{
		int a = DemSoLuongNodeChan878(t->pLeft);
		int b = DemSoLuongNodeChan878(t->pRight);
		if (t->data % 2 == 0)
			return a + b + 1;
		return a + b;
	}
}

int DemLaChan879(Tree t)
{
	if (t == NULL)
		return 0;
	else
	{
		int a = DemLaChan879(t->pLeft);
		int b = DemLaChan879(t->pRight);
		if (t->pLeft == NULL && t->pRight == NULL & t->data % 2 == 0)
			return a + b + 1;
		return a + b;
	}
}

int KiemTraSNT(int x)
{
	if (x < 2)
		return 0;
	else
	{
		for (int  i = 2; i < x/2+1; i++)
		{
			if (x%i == 0)
				return 0;
		}
	}
	return 1;
}

int DemConNguyenTo880(Tree t)
{
	if (t == NULL)
		return 0;
	else
	{
		int a = DemConNguyenTo880(t->pLeft);
		int b = DemConNguyenTo880(t->pRight);
		if (((t->pLeft == NULL && t->pRight != NULL) || (t->pLeft != NULL && t->pRight == NULL)) && KiemTraSNT(t->data) == 1)
			return a + b + 1;
		return a + b;
	}
}




