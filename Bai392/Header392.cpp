#include "Header392.h"

void menu392(int ** a, int m, int n)
{
	cout << "392    393    394    395    396    397    398    399    400       " << endl;
	cout << "401    402    403    404    405    406    407    408    409    410" << endl;
	cout << "411    412    413    414    415    416    417    418    419    420" << endl;
	cout << "421    422    423    424    425    426    427    428              " << endl;

	int Chon;
	cout << "Nhap lua chon cua ban: ";
	cin >> Chon;
	switch (Chon)
	{
	case 392:
	{
		int d1, d2;
		cout << "Nhap d1, d2 ban muon hoan vi: " << endl;
		cin >> d1 >> d2;
		HoanVi2Dong392(a, m, n,d1,d2);
		cout << "Ma tran sau khi hoan vi dong " << d1 << " va " << d2 << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 393:
	{
		int c1, c2;
		cout << "Nhap c1, c2 ban muon hoan vi: " << endl;
		cin >> c1 >> c2;
		HoanVi2Cot393(a, m, n, c1, c2);
		cout << "Ma tran sau khi hoan vi 2 cot " << c1 << " va " << c2 << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 394:
	{
		DichXuongTheoCot394(a, m, n);
		cout << "\n Ma tran sau khi dich xuong: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 395:
	{
		DichLenTheoCot395(a, m, n);
		cout << "Ma tran sau khi dich len theo cot: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 396:
	{
		DichTraiTheoDong396(a, m, n);
		cout << "Ma tran sau khi dich trai theo dong: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 397:
	{
		DichPhaiTheoDong397(a, m, n);
		cout << "Ma tran sau khi dich phai theo dong: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 398:
	{
		DichPhaiTheoBien398(a, m, n);
		cout << "Ma tran sau khi dich phai theo bien: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 399:
	{
		DichTraiTheoBien399(a, m, n);
		cout << "Ma tran sau khi dich trai theo bien: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 400:
	{
		cout << "Nhap dong muon xoa trong ma tran: " << endl;
		int dong;
		cin >> dong;
		XoaDong400(a, m, n, dong);
		cout << "Ma tran sau khi xoa dong: " << dong << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 401:
	{
		cout << "Nhap cot muon xoa trong ma tran: " << endl;
		int cot;
		cin >> cot;
		XoaCot401(a, m, n, cot);
		cout << "Ma tran sau khi xoa cot: " << cot << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 402:
	{
		cout << "Sau khi xoay ma tran theo kim dong ho goc 90 do: " << endl;
		XoayMaTran90DoTheoKimDongHo402(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 403:
	{
		cout << "Ma tran sau khi xoay 180 do theo chieu kim dong ho: " << endl;
		XoayMaTran180DoTheoKimDongHo403(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 404:
	{
		cout << "Ma tran sau khi xoay 270 do theo chieu kim dong ho: " << endl;
		XoayMaTran270DoTheoKimDongHo404(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 405:
	{
		cout << "Ma tran sau khi chieu guong doc: " << endl;
		ChieuGuongDocMaTran405(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 406:
	{
		cout << "Ma tran sau khi chieu guong ngang: " << endl;
		ChieuGuongNgangMaTran406(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 407:
	{
		cout << "Nhap dong muon sap xep: ";
		int dong;
		cin >> dong;
		SapXepDong407(a, m, n, dong);
		cout << "Ma tran sau khi sap xep dong " << dong << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 408:
	{
		cout << "Nhap dong muon sap xep: ";
		int dong;
		cin >> dong;
		SapXepDong408(a, m, n, dong);
		cout << "Ma tran sau khi sap xep dong: " << dong << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 409:
	{
		cout << "Nhap cot muon sap xep: ";
		int cot;
		cin >> cot;
		SapXepCot409(a, m, n, cot);
		cout << "Ma tran sau khi sap xep cot " << cot << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 410:
	{
		cout << "Nhap cot muon sap xep: ";
		int cot;
		cin >> cot;
		SapXepCot410(a, m, n, cot);
		cout << "Ma tran sau khi sap xep cot " << cot << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 411:
	{
		cout << "Xuat so chan tang dan trong ma tran: " << endl;
		XuatChan411(a, m, n);
		break;
	}
	case 412:
	{
		cout << "So nguyen to tang dan trong ma tran: " << endl;
		XuatNguyenTo412(a, m, n);
		break;
	}
	case 413:
	{
		cout << "Ma tran dong chan tang, dong le giam: " << endl;
		SapXep413(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 414:
	{
		cout << "Ma tran sau khi sap xep theo cot: " << endl;
		SapXep414(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 415:
	{
		cout << " 1: mang phu " << endl;
		cout << " 2: khong mang phu " << endl;
		int chon;
		cout << "Nhap lua chon: ";
		cin >> chon;
		if (chon == 1)
			SapXepDungMangPhu415(a, m, n);
		else if(chon==2)
			SapXepKhongDungMangPhu415(a, m, n);
		cout << "Ma tran sau khi sap xep: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 416:
	{
		cout << " 1: mang phu " << endl;
		cout << " 2: khong mang phu " << endl;
		int chon;
		cout << "Nhap lua chon: ";
		cin >> chon;
		if (chon == 1)
			SapXepSoDuongDungMangPhu416(a, m, n);
		else if (chon == 2)
			SapXepSoDuongKhongDungMangPhu416(a, m, n);
		cout << "Ma tran sau khi sap xep cac so duong: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 417:
	{
		cout << " 1: mang phu " << endl;
		cout << " 2: khong mang phu " << endl;
		int chon;
		cout << "Nhap lua chon: ";
		cin >> chon;
		if (chon == 1)
			SapXepSoChanDungMangPhu417(a, m, n);
		else if (chon == 2)
			SapXepSoChanDungMangPhu417(a, m, n);
		cout << "Ma tran sau khi sap xep cac so chan: " << endl;
		XuatMaTran(a, m, n);
		break;
	}
	case 418:
	{
		cout << "Ma tran sau khi sap xep am tang duong giam: " << endl;
		SapXepAmTangDuongGiam418(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 419:
	{
		cout << "Ma tran sau khi sap xep chan tang le giam: " << endl;
		SapXepChanTangLeGiam419(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 420:
	{
		cout << "Ma tran truoc khi sap xep: " << endl;
		XuatMaTran(a, m, n);
		cout << "Ma tran sau khi sap xep bien tang dan theo kim dong ho: " << endl;
		SapXepBienTang420(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 421:
	{
		cout << "Ma tran truoc khi sap xep: " << endl;
		XuatMaTran(a, m, n);
		cout << "Ma tran sau khi sap xep cac so duong o bien tang theo chieu kim dong ho: " << endl;
		SapXepBienDuongTang421(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 422:
	{
		cout << "The original Matrix: " << endl;
		XuatMaTran(a, m, n);
		cout << "The Matrix after sorting:)) " << endl;
		SapXepTheoTongDong422(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 423:
	{
		cout << "Ma tran truoc khi tao xoan oc: " << endl;
		XuatMaTran(a, m, n);
		cout << "Ma tran sau khi sap xep xoan oc: " << endl;
		SapXepMaTranXoanOc423(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 424:
	{
		cout << "Ma tran truoc khi sap xep ziczac: " << endl;
		XuatMaTran(a, m, n);
		cout << "Ma tran sau khi sap xep ziczac: " << endl;
		SapXepMTranZicZac424(a, m, n);
		XuatMaTran(a, m, n);
		break;
	}
	case 425:
	{
		cout << "Ma tran truoc khi thao tac: " << endl;
		XuatMaTran(a, m, n);
		cout << "Xuat ma tran sau khi thao tac va khong lam thay doi ma tran: " << endl;
		XuatSoAmGiam425(a, m, n);
		break;
	}
	case 426:
	{
		int mb, nb;
		mb = m;
		nb = n;
		int **b = new int*[mb];
		for (int i = 0; i < mb; i++)
		{
			b[i] = new int[nb];
		}
		XayDungMaTranB426(a, m, n, b, mb, nb);
		cout << "Ma tran duoc xay dung tu ma tran A: " << endl;
		XuatMaTran(b, mb, nb);
		delete[]b;
		break;
	}
	case 427:
	{
		int **b = new int*[m];
		for (int i = 0; i < m; i++)
		{
			b[i] = new int[n];
		}
		XayDungMaTranB427(a, m, n, b);
		cout << "Ma tran B duoc xay dung tu lay max dong max cot cua ma tran A: " << endl;
		XuatMaTran(b, m, n);
		delete[]b;
		break;
	}
	case 428:
	{
		int **b = new int *[m];
		for (int i = 0; i < m; i++)
		{
			b[i] = new int[n];
		}
		cout << "Ma tran duoc xay dung bang cach dem so luong phan tu duong xung quanh: " << endl;
		XayDungMaTranB428(a, m, n, b);
		XuatMaTran(b, m, n);
		delete[]b;
		break;
	}
	default:
		break;
	}
}

void HoanVi2Dong392(int ** a, int m, int n, int d1, int d2)
{
	for (int i = 0; i < n; i++)
	{
		swap(a[d1][i], a[d2][i]);
	}
}

void HoanVi2Cot393(int ** a, int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; i++)
	{
		swap(a[i][c1], a[i][c2]);
	}
}

void DichXuongTheoCot(int ** a, int m, int n, int c)
{
	int Temp = a[m-1][c];
	for (int i = m-1; i >0; i--)
	{
		a[i][c] = a[i - 1][c];
	}
	a[0][c] = Temp;
}

void DichXuongTheoCot394(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		DichXuongTheoCot(a, m, n, i);
	}
}

void DichLenTheoCot(int ** a, int m, int n, int c)
{
	int Temp = a[0][c];
	for (int i = 0; i < m-1; i++)
	{
		a[i][c] = a[i + 1][c];
	}
	a[m - 1][c] = Temp;
}

void DichLenTheoCot395(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		DichLenTheoCot(a, m, n, i);
	}
}

void DichTraiTheoDong(int ** a, int m, int n, int d)
{
	int Temp = a[d][0];
	for (int i = 0; i < n-1; i++)
	{
		a[d][i] = a[d][i + 1];
	}
	a[d][n - 1] = Temp;
}

void DichTraiTheoDong396(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		DichTraiTheoDong(a, m, n, i);
	}
}

void DichPhaiTheoDong(int ** a, int m, int n, int d)
{
	int Temp = a[d][n - 1];
	for (int i = n-1; i > 0; i--)
	{
		a[d][i] = a[d][i - 1];
	}
	a[d][0] = Temp;
}

void DichPhaiTheoDong397(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		DichPhaiTheoDong(a, m, n, i);
	}
}

void DichPhaiTheoBien398(int ** a, int m, int n)
{
	int temp1, temp2, temp3, temp4;
	temp1 = a[1][0];
	temp2 = a[0][n - 1];
	temp3 = a[m - 1][n - 1];
	temp4 = a[m - 1][0];
	// xoay dong dau
	for (int i =n-1;i>0 ; i--)
	{
		a[0][i] = a[0][i - 1];
	}
	a[0][0] = temp1;
	// xoay cot cuoi
	for (int i = m - 1; i > 1; i--)
	{
		a[i][n - 1] = a[i - 1][n - 1];
	}
	a[1][n - 1] = temp2;
	//xoay dong cuoi
	for (int i = 0; i < n-1; i++)
	{
		a[m - 1][i] = a[m - 1][i + 1];
	}
	a[m - 1][n-2] = temp3;
	//xoay cot dau
	for (int i = 1; i < m-1; i++)
	{
		a[i][0] = a[i + 1][0];
	}
	a[m - 2][0] = temp4;
}

void DichTraiTheoBien399(int ** a, int m, int n)
{
	int temp1 = a[1][n - 1];
	int temp2 = a[m - 1][n - 2];
	int temp3 = a[m - 2][0];
	int temp4 = a[0][0];
	//xoay trai dong dau
	for (int i = 0; i < n; i++)
	{
		a[0][i] = a[0][i + 1];
	}
	a[0][n - 1] = temp1;
	// xoay trai cot cuoi
	for (int i = 1; i < m-1; i++)
	{
		a[i][n - 1] = a[i + 1][n - 1];
	}
	a[m - 1][n - 1] = temp2;
	//xoay dong cuoi
	for (int i = n-2; i >0; i--)
	{
		a[m - 1][i] = a[m - 1][i - 1];
	}
	a[m - 1][0] = temp3;
	//xoay cot dau
	for (int i = m-2; i >1; i--)
	{
		a[i][0] = a[i - 1][0];
	}
	a[1][0] = temp4;
}

void XoaDong400(int ** a, int &m, int n, int d)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = d; j < m - 1; j++)
		{
			a[j][i] = a[j + 1][i];
		}
	}
	m = m - 1;
}

void XoaCot401(int ** a, int m, int & n, int c)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = c; j < n-1; j++)
		{
			a[i][j] = a[i][j + 1];
		}
	}
	n = n - 1;
}

void XoayMaTran90DoTheoKimDongHo402(int ** &a, int & m, int & n)
{
	//xoay ma tran theo chieu kim dong ho 90'

	int mn = m * n;
	int *b = new int[mn];					// dung mang phu de luu
	int iDex = 0;
	for (int i = 0; i < n; i++)				// gan ma tran vo mang phu
	{
		for (int j = m - 1; j >= 0; j--)
		{
			b[iDex] = a[j][i];
			iDex++;
		}
	}
	delete[]a;
	swap(m, n);
	a = new int*[m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}
	iDex = 0;
	for (int i = 0; i < m; i++)				//gan lai mang phu vao ma tran
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[iDex];
			iDex++;
		}
	}
	//Xuat(a, m, n);
	delete[]b;
}

void XoayMaTran180DoTheoKimDongHo403(int ** a, int m, int n)
{
	int *b = new int[m*n];
	int iDex = 0;
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n-1; j >= 0; j--)
		{
			b[iDex++] = a[i][j];
		}
	}
	iDex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[iDex++];
		}
	}
}

void XoayMaTran270DoTheoKimDongHo404(int **& a, int & m, int & n)
{
	XoayMaTran180DoTheoKimDongHo403(a, m, n);
	XoayMaTran90DoTheoKimDongHo402(a, m, n);
}

void ChieuGuongDocMaTran405(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n/2; j++)
		{
			swap(a[i][j], a[i][n - j - 1]);
		}
	}
}

void ChieuGuongNgangMaTran406(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m/2; j++)
		{
			swap(a[j][i], a[m - j - 1][i]);
		}
	}
}

void SapXepDong407(int ** a, int m, int n, int d)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[d][i] > a[d][j])
				swap(a[d][i], a[d][j]);
		}
	}
}

void SapXepDong408(int ** a, int m, int n, int dong)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[dong][i] < a[dong][j])
				swap(a[dong][i], a[dong][j]);
		}
	}
}

void SapXepCot409(int ** a, int m, int n, int cot)
{
	for (int i = 0; i < m-1; i++)
	{
		for (int j = i+1; j < m; j++)
		{
			if (a[i][cot] > a[j][cot])
				swap(a[i][cot] , a[j][cot]);
		}
	}
}

void SapXepCot410(int ** a, int m, int n, int cot)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i][cot] < a[j][cot])
				swap(a[i][cot], a[j][cot]);
		}
	}
}

void XuatChan411(int ** a, int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((a[i][j]) % 2 == 0)
				Dem++;
		}
	}
	int *b = new int[Dem];
	int iDex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((a[i][j])%2 == 0)
				b[iDex++] = a[i][j];
		}
	}
	SapXepMangTang(b, Dem);
	for (int i = 0; i < Dem; i++)
	{
		cout << b[i] << "    ";
	}
	delete[]b;
}

void XuatNguyenTo412(int ** a, int m, int n)
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
	int *b = new int[Dem];
	int iDex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1)
				b[iDex++] = a[i][j];
		}
	}
	SapXepMangTang(b, Dem);
	for (int i = 0; i < Dem; i++)
	{
		cout << b[i] << "    ";
	}
	delete[]b;
}

void SapXep413(int ** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
			SapXepDong407(a, m, n, i);
		else
			SapXepDong408(a, m, n, i);
	}
}

void SapXep414(int ** a, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			SapXepCot409(a, m, n, i);
		else
			SapXepCot410(a, m, n, i);
	}
}

void SapXepDungMangPhu415(int ** a, int m, int n)
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
	SapXepMangTang(b, mn);
	iDex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j]= b[iDex++];
		}
	}
	delete[]b;
}

void SapXepKhongDungMangPhu415(int ** a, int m, int n)
{	/*
	y tuong:
	khai bao bien bang tich dong*cot cua ma tran
	thay vi dung mang, dung i/(cot) va i%/(cot)
	de lay duoc vi tri cua phan tu trong ma tran
	*/
	int TongSL = m * n;
	for (int i = 0; i < TongSL-1; i++)
	{
		for (int j = i+1; j < TongSL; j++)
		{
			if (a[i / n][i%n] > a[j / n][j%n])
				swap(a[i / n][i%n], a[j / n][j%n]);
		}
	}
}

void SapXepSoDuongDungMangPhu416(int ** a, int m, int n)
{
	int mn = m * n;
	int *b = new int[mn];
	int iDex = 0;
	//gan ma tran vo mang
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[iDex++] = a[i][j];
		}
	}
	// sap xep mang tang dan cua cac so duong
	for (int i = 0; i < mn-1; i++)
	{
		for (int j = i+1; j < mn; j++)
		{	//chi sap xep cac so duong
			if (b[i] > 0 && b[j] > 0)
			{
				if (b[i] > b[j])
					swap(b[i], b[j]);
			}
		}
	}
	iDex = 0;
	//do lai mang vao lai ma tran
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[iDex++];
		}
	}
	delete[]b;
}

void SapXepSoDuongKhongDungMangPhu416(int ** a, int m, int n)
{
	int SoLuong = m * n;
	// duyet tu phan tu dau den phan tu cuoi
	for (int i = 0; i < SoLuong-1; i++)
	{
		for (int j = i+1 ;j < SoLuong; j++)
		{
			//kiem tra 2 phan tu co duong hay khong
			//chi hoan vi khi ca 2 deu duong
			if (a[i / n][i%n] > 0 && a[j / n][j%n] > 0)
			{
				if (a[i / n][i%n] > a[j / n][j%n])
					swap(a[i / n][i%n], a[j / n][j%n]);
			}
		}
	}
}

void SapXepSoChanDungMangPhu417(int ** a, int m, int n)
{
	int mn = m * n;
	int *b = new int[mn];
	int iDex = 0;
	//gan ma tran vo mang
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[iDex++] = a[i][j];
		}
	}
	// sap xep mang giam dan cua cac so chan
	for (int i = 0; i < mn - 1; i++)
	{
		for (int j = i + 1; j < mn; j++)
		{	//chi sap xep cac so chan
			if (b[i] %2 == 0 && b[j] %2 == 0)
			{
				if (b[i] < b[j])
					swap(b[i], b[j]);
			}
		}
	}
	iDex = 0;
	//do lai mang vao lai ma tran
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[iDex++];
		}
	}
	delete[]b;
}

void SapXepSoChanKhongDungMangPhu417(int ** a, int m, int n)
{
	int SoLuong = m * n;
	// duyet tu phan tu dau den phan tu cuoi
	for (int i = 0; i < SoLuong - 1; i++)
	{
		for (int j = i + 1; j < SoLuong; j++)
		{
			//kiem tra 2 phan tu co duong hay khong
			//chi hoan vi khi ca 2 deu duong
			if (a[i / n][i%n] %2 == 0 && a[j / n][j%n] %2 == 0)
			{
				if (a[i / n][i%n] < a[j / n][j%n])
					swap(a[i / n][i%n], a[j / n][j%n]);
			}
		}
	}
}

void SapXepAmTangDuongGiam418(int ** a, int m, int n)
{
	/*
	y tuong:
	khai bao bien bang tich dong*cot cua ma tran
	thay vi dung mang, dung i/(cot) va i%/(cot)
	de lay duoc vi tri cua phan tu trong ma tran
	*/
	int TongSL = m * n;
	for (int i = 0; i < TongSL - 1; i++)
	{
		for (int j = i + 1; j < TongSL; j++)
		{
			//neu ca 2 phan tu cung duong
			if (a[i / n][i%n] > 0 && a[j / n][j%n] > 0)
			{
				//sap xep giam
				if (a[i / n][i%n] < a[j / n][j%n])
					swap(a[i / n][i%n], a[j / n][j%n]);
			}
			//neu ca 2 phan tu cung am
			else if (a[i / n][i%n] < 0 && a[j / n][j%n] < 0)
			{
				//sap xep tang
				if (a[i / n][i%n] > a[j / n][j%n])
					swap(a[i / n][i%n], a[j / n][j%n]);
			}
		}
	}
}

void SapXepChanTangLeGiam419(int ** a, int m, int n)
{
	/*
	y tuong:
	khai bao bien bang tich dong*cot cua ma tran
	thay vi dung mang, dung i/(cot) va i%/(cot)
	de lay duoc vi tri cua phan tu trong ma tran
	*/
	int TongSL = m * n;
	for (int i = 0; i < TongSL - 1; i++)
	{
		for (int j = i + 1; j < TongSL; j++)
		{
			//neu ca 2 phan tu cung chan
			if (a[i / n][i%n] %2 == 0 && a[j / n][j%n] % 2 == 0)
			{
				//sap xep tang
				if (a[i / n][i%n] > a[j / n][j%n])
					swap(a[i / n][i%n], a[j / n][j%n]);
			}
			//neu ca 2 phan tu cung le
			else if (a[i / n][i%n] % 2 != 0 && a[j / n][j%n] % 2 != 0)
			{
				//sap xep giam
				if (a[i / n][i%n] < a[j / n][j%n])
					swap(a[i / n][i%n], a[j / n][j%n]);
			}
		}
	}
}

void SapXepBienTang420(int ** a, int m, int n)
{
	int SoLuong = 2 * m + 2 * n - 4;
	int *b = new int[SoLuong];
	int iDex = 0;
	//lay nhung phan tu o bien ma tran gan vo mang
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
				b[iDex++] = a[i][j];
		}
	}
	//sap xep mang tang dan
	SapXepMangTang(b, SoLuong);
	iDex = 0;
	//gan lai mang vo ma tran
	//gan vo dong dau
	for (int i = 0; i < n; i++)
	{
		a[0][i]= b[iDex++];
	}
	//gan vo cot cuoi
	for (int i = 1; i < m; i++)
	{
		a[i][n - 1] = b[iDex++];
	}
	//gan vo dong cuoi
	for (int i = n-2; i >= 0; i--)
	{
		a[m - 1][i] = b[iDex++];
	}
	//gan vo cot dau tien
	for (int i = m-2; i > 0; i--)
	{
		a[i][0] = b[iDex++];
	}
}

void SapXepBienDuongTang421(int ** a, int m, int n)
{
	int SoLuong = 0;
	//dem so luong phan tu duong o bien ma tran
	//dem so luong phan tu duong o dong day tien
	for (int i = 0; i < n; i++)
	{
		if (a[0][i] > 0)
			SoLuong++;
	}
	//dem so luong phan tu duong o cot cuoi
	for (int i = 1; i < m; i++)
	{
		if (a[i][n - 1] > 0)
			SoLuong++;
	}
	//dem so luong phan tu duong o dong cuoi
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[m-1][i] > 0)
			SoLuong++;
	}
	//dem so luong phan tu duong o cot dau tien
	for (int i = m - 2; i > 0; i--)
	{
		if (a[i][0] > 0)
			SoLuong++;
	}
	int *b = new int[SoLuong];
	int iDex = 0;
	//lay nhung phan tu o bien ma tran gan vo mang
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ( a[i][j] >0 && (i == 0 || j == 0 || i == m - 1 || j == n - 1))
				b[iDex++] = a[i][j];
		}
	}
	//sap xep mang tang dan
	SapXepMangTang(b, SoLuong);
	iDex = 0;
	//gan lai mang vo ma tran
	//gan vo dong dau
	for (int i = 0; i < n; i++)
	{
		if(a[0][i]>0)
			a[0][i] = b[iDex++];
	}
	//gan vo cot cuoi
	for (int i = 1; i < m; i++)
	{
		if(a[i][n - 1]>0)
			a[i][n - 1] = b[iDex++];
	}
	//gan vo dong cuoi
	for (int i = n - 2; i >= 0; i--)
	{
		if(a[m - 1][i]>0)
			a[m - 1][i] = b[iDex++];
	}
	//gan vo cot dau tien
	for (int i = m - 2; i > 0; i--)
	{
		if(a[i][0]>0)
			a[i][0] = b[iDex++];
	}
}

int TongDong(int ** a, int m, int n, int dong)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		Tong += a[dong][i];
	}
	return Tong;
}

void SapXepTheoTongDong422(int ** a, int m, int n)
{
	for (int i = 0; i < m-1; i++)
	{
		for (int j = i+1; j < m; j++)
		{
			if (TongDong(a, m, n, i) > TongDong(a, m, n, j))
				HoanVi2Dong392(a, m, n, i, j);
		}
	}
}

void SapXepMaTranXoanOc423(int ** a, int m, int n)
{
	/*
	y tuong :
	cho chay theo hang, cot, hang, cot
	het hang tren, den cot phai, tiep den hang duoi, tiep den cot trai
	*/
	int Trai = 0, Tren = 0, Phai = n, Duoi = m, mn = m * n, iDem = 0;
	//khai bao mang de luu gia tri cua ma tran
	int *b = new int[mn];
	//dung mang de luu gia tri cua ma tran
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[iDem++] = a[i][j];
		}
	}
	//sap xep mang de chuan bi gan vo ma tran
	SapXepMangGiam(b, mn);
	//gan lai mang vo ma tran theo xoan oc
	iDem = 0;
	while (iDem < mn)
	{
		//gan dong tren
		if (iDem < mn)
		{
			for (int i = Trai; i < Phai; i++)
			{
				a[Tren][i] = b[iDem++];
			}
		}
		//gan cot phai
		if (iDem < mn)
		{
			for (int i = Tren + 1; i < Duoi - 1; i++)
			{
				a[i][Phai - 1] = b[iDem++];
			}
		}
		//gan dong duoi
		if (iDem < mn)
		{
			for (int i = Phai - 1; i >= Trai; i--)
			{
				a[Duoi - 1][i] = b[iDem++];
			}
		}
		//gan cot trai
		if (iDem < mn)
		{
			for (int i = Duoi - 2; i > Tren; i--)
			{
				a[i][Trai] = b[iDem++];
			}
		}
		Tren++;
		Phai--;
		Duoi--;
		Trai++;
	}
	delete[]b;
}

void SapXepMTranZicZac424(int ** a, int m, int n)
{
	int mn = m * n;
	int * b = new int[mn];
	int iDex = 0;
	//gan ma tran vo mang sau do sap xep mang
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[iDex++] = a[i][j];
		}
	}
	//sap xep mang theo trat tu
	SapXepMangTang(b, mn);
	//do lai mang vo ma tran theo ziczac
	iDex = 0;
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = b[iDex++];
			}
		}
		else
		{
			for (int j = n-1; j > -1; j--)
			{
				a[i][j] = b[iDex++];
			}
		}
	}
	delete[]b;
}

void XuatSoAmGiam425(int ** a, int m, int n)
{
	int DemAm = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				DemAm++;
		}
	}
	int *b = new int[DemAm];
	int iDex = 0;
	//luu cac so am trong ma tran vo mang
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				b[iDex++] = a[i][j];
		}
	}
	//sap xep mang giam dan
	SapXepMangGiam(b, DemAm);
	iDex = 0;
	//neu la gia tri am thi xuat gia tri trong mang tuong ung
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				cout << b[iDex++] << "    ";
			else
				cout <<" "<< a[i][j] << "    ";
		}
		cout << "\n";
	}
	delete[]b;
}

void XayDungMaTranB426(int ** a, int ma, int na, int ** b, int mb, int nb)
{
	for (int i = 0; i < ma; i++)
	{
		for (int j = 0; j < na; j++)
		{
			if (a[i][j] < 0)
				b[i][j] = abs(a[i][j]);
			else
				b[i][j] = a[i][j];
		}
	}
}

void XayDungMaTranB427(int ** a, int ma, int na, int ** b)
{
	for (int i = 0; i < ma; i++)
	{
		for (int j = 0; j < na; j++)
		{
			if (TimMaxDong(a, ma, na, i) > TimMaxCot(a, ma, na, j))
				b[i][j] = TimMaxDong(a, ma, na, i);
			else
				b[i][j] = TimMaxCot(a, ma, na, j);
		}
	}
}

int DemDuongXungQuanh(int ** a, int m, int n, int i, int j)
{
	int Dem = 0;
	//dem [0][0]
	if (i == 0 && j == 0)
	{
		if (a[i][j + 1] > 0)
			Dem++;
		if (a[i + 1][j + 1] > 0)
			Dem++;
		if (a[i + 1][j] > 0)
			Dem++;
		return Dem;
	}
	//dem [0][n-1]
	else if (i == 0 && j == n - 1)
	{
		if (a[i][j - 1] > 0)
			Dem++;
		if (a[i + 1][j - 1] > 0)
			Dem++;
		if (a[i + 1][j] > 0)
			Dem++;
		return Dem;
	}
	//dem[m-1][0]
	else if (i == m - 1 && j == 0)
	{
		if (a[i - 1][j] > 0)
			Dem++;
		if (a[i - 1][j + 1] > 0)
			Dem++;
		if (a[i][j + 1] > 0)
			Dem++;
		return Dem;
	}
	//Dem[m-1][n-1]
	else if (i == m - 1 && j == n - 1)
	{
		if (a[i - 1][j] > 0)
			Dem++;
		if (a[i - 1][j - 1] > 0)
			Dem++;
		if (a[i][j - 1] > 0)
			Dem++;
		return Dem;
	}
	//dem dong dau
	else if (i == 0 &&(j!=0 || j!=n-1))
	{
		if (a[i][j - 1] > 0)
			Dem++;
		if (a[i][j + 1] > 0)
			Dem++;
		if (a[i + 1][j + 1] > 0)
			Dem++;
		if (a[i + 1][j] > 0)
			Dem++;
		if (a[i + 1][j - 1] > 0)
			Dem++;
		return Dem;
	}
	//dem cot cuoi
	else if (j == n - 1 &&(i!=0 || i!= m-1))
	{
		if (a[i + 1][j - 1] > 0)
			Dem++;
		if (a[i + 1][j] > 0)
			Dem++;
		if (a[i][j - 1] > 0)
			Dem++;
		if (a[i - 1][j] > 0)
			Dem++;
		if (a[i - 1][j - 1] > 0)
			Dem++;
		return Dem;
	}
	//dem dong cuoi
	else if (i == m - 1 &&(j!=0 || j!=n-1))
	{
		if (a[i - 1][j] > 0)
			Dem++;
		if (a[i - 1][j + 1] > 0)
			Dem++;
		if (a[i - 1][j - 1] > 0)
			Dem++;
		if (a[i][j + 1] > 0)
			Dem++;
		if (a[i][j - 1] > 0)
			Dem++;
		
		return Dem;
	}
	//Dem cot dau
	else if (j == 0 &&(i!=0 || i!=m-1))
	{
		if (a[i - 1][j] > 0)
			Dem++;
		if (a[i - 1][j + 1] > 0)
			Dem++;
		if (a[i][j + 1] > 0)
			Dem++;
		if (a[i + 1][j + 1] > 0)
			Dem++;
		if (a[i + 1][j] > 0)
			Dem++;
		return Dem;
	}
	//dem phan tu o vi tri ko phai bien
	else
	{
		if (a[i][j + 1] > 0)
			Dem++;
		if (a[i][j - 1] > 0)
			Dem++;
		if (a[i - 1][j] > 0)
			Dem++;
		if (a[i - 1][j + 1] > 0)
			Dem++;
		if (a[i - 1][j - 1] > 0)
			Dem++;
		if (a[i + 1][j] > 0)
			Dem++;
		if (a[i + 1][j - 1] > 0)
			Dem++;
		if (a[i + 1][j + 1] > 0)
			Dem++;
		return Dem;
	}

	
}

void XayDungMaTranB428(int ** a, int m, int n, int ** b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = DemDuongXungQuanh(a, m, n, i, j);
		}
	}
}



