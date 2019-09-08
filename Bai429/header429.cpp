#include "Header429.h"

void menu429(int ** a, int n, float**b)
{
	int chon;
	cout << "429    430    " << endl;
	cout << "431    432    433    434    435    436    437    438    439    440" << endl;
	cout << "441    442    443    444    445    446    447    448    449    450" << endl;
	cout << "451    452    453    454    455    456    457    458    459    460" << endl;
	cout << "461    462    463    464    465    466    467    000    000    000" << endl;

	cout << "0: exit!!" << endl;
	cout << "Nhap lua chon cua ban: ";
	int LuaChon;
	cin >> LuaChon;
	switch (LuaChon)
	{
	case 429:
	{
		cout << "\n\n====NHAP MA TRAN VUONG CAC SO NGUYEN====\n\n";
		NhapMaTranNguyenVuong(a, n);
		break;
	}
	case 430:
	{
		cout << "\n\n====NHAP MA TRAN VUONG CAC SO THUC====\n\n";
		NhapMaTranThucVuong(b, n);
		break;
	}
	case 431:
	{
		cout << "\n]n====MA TRAN VUONG CAC SO NGUYEN====\n\n";
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 432:
	{
		cout << "\n]n====MA TRAN VUONG CAC SO THUC====\n\n";
		XuatMaTranVuongThuc(b, n);
		break;
	}
	case 433:
	{
		cout << "Max cua ma tran vuong thuc: " << TimMaxMaTranThuc433(b, n) << endl;
		break;
	}
	case 434:
	{
		if (KiemTraTonTaiSoNguyenTo434(a, n) == 1)
			cout << "Ma tran ton tai so nguyen to < 2004: " << endl;
		else
			cout << "Ma tran khong ton tai so nguyen to <2004: " << endl;
		break;
	}
	case 435:
	{
		cout << "So luong so nguyen to trong ma tran: ";
		cout << DemSoNguyenTo435(a, n) << endl;
		break;
	}
	case 436:
	{
		cout << "Tong cac so am trong ma tran thuc: ";
		cout << TinhTongAm436(b, n) << endl;
		break;
	}
	case 437:
	{
		cout << "Ma tran vuong sau khi sap xep: " << endl;
		SapXepMaTranVuong437(a, n);
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 438:
	{
		cout << "Tong cua tam gia tren: " << TinhTongTamGiacTren438(a, n) << endl;
		break;
	}
	case 439:
	{
		cout << "Tong cua tam giac duoi: " << TinhTongTamGiacDuoi439(a, n) << endl;
		break;
	}
	case 440:
	{
		cout << "Tong cac phan tu tren duong cheo chinh: ";
		cout << TinhTongDuongCheoChinh440(a, n) << endl;
		break;
	}
	case 441:
	{
		cout << "Tong cac phan tu tren duong cheo phu: ";
		cout << TinhTongDuongCheoPhu441(a, n) << endl;
		break;
	}
	case 442:
	{
		cout << "Tong cac phan tu chan nam o bien ma tran: ";
		cout << TinhTongChanBien442(a, n) << endl;
		break;
	}
	case 443:
	{
		cout << "Phan tu Max tam giac tren: ";
		cout << TimMaxTamGiacTren443(a, n) << endl;
		break;
	}
	case 444:
	{
		cout << "Phan tu Min trong tam giac duoi: ";
		cout << TimMinTamGiacDuoi444(a, n) << endl;
		break;
	}
	case 445:
	{
		cout << "Phan tu Max duong cheo chinh: ";
		cout << TimMaxDuongCheoChinh445(a, n) << endl;
		break;
	}
	case 446:
	{
		cout << "Phan tu Min duong cheo phu: ";
		cout << TimMinDuongCheoPhu446(a, n) << endl;
		break;
	}
	case 447:
	{
		if (TimNguyenToMax447(a, n) == 0)
			cout << "Ma tran khong co so nguyen to: " << endl;
		else
		{
			cout << "So nguyen to Max trong ma tran: ";
			cout << TimNguyenToMax447(a, n) << endl;
		}
		break;
	}
	case 448:
	{
		int x1 = a[0][0];
		int x2 = a[0][1];
		TimHaiGiaTriGanNhauNhat448(a, n, x1, x2);
		cout << "Hai phan tu gan nhau nhat: " << endl;
		cout <<"x1= "<<x1 << "    " <<"x2= "<< x2 << endl;
		cout << "Khoang cach giua chung la: ";
		cout << TimHaiGiaTriGanNhauNhat448(a, n, x1, x2) << endl;
		break;

	}
	case 449:
	{
		TimMaTranConTongMax449(a, n);
		break;
	}
	case 450:
	{
		cout << "So luong phan tu doi nhau qua duong cheo chinh: ";
		cout << DemDoiNhau450(a, n) << endl;
		break;
	}
	case 451:
	{
		cout << "So luong dong giam trong ma tran: ";
		cout<<DemDongGiam451(a, n) << endl;
		break;
	}
	case 452:
	{
		cout << "So luong phan tu cuc dai trong ma tran vuong: ";
		cout << DemSoLuongCucDai452(a, n) << endl;
		break;
	}
	case 453:
	{
		cout << "So luong phan tu duong tren duong cheo chinh: ";
		cout << DemDuongDuongCheoChinh453(a, n) << endl;
		break;
	}
	case 454:
	{
		cout << "So luong phan tu am tren duong cheo phu: ";
		cout << DemAmDuongCheoPhu454(a, n) << endl;
		break;
	}
	case 455:
	{
		cout << "So luong phan tu chan tren tam giac tren: ";
		cout << DemChanTamGiaTren455(a, n) << endl;
		break;
	}
	case 456:
	{
		if (KiemTraTangDanDuongCheoChinh456(a, n) == 1)
			cout << "Duong cheo chinh tang dan: " << endl;
		else
			cout << "Duong cheo chinh khong tang dan : " << endl;
		break;
	}
	case 457:
	{
		if (KiemTraDoiXungQuaDuongCheo457(a, n) == 1)
			cout << "Ma tran doi xung qua duong cheo chinh: " << endl;
		else
			cout << "Ma tran khong doi xung qua duong cheo chinh :" << endl;
		break;
	}
	case 458:
	{
		if (KiemTraDoiXung458(a, n) == 1)
			cout << "Ma tran doi xung qua duong cheo phu: " << endl;
		else
			cout << "Ma tran khong doi xung qua duong cheo phu: " << endl;
		break;
	}
	case 459:
	{
		if (KiemTraMaPhuongLe459(a, n) == 1)
			cout << "Ma phuong: " << endl;
		else
			cout << "Khong phai ma phuong: " << endl;
		break;
	}
	case 460:
	{
		cout << "Sau khi sap xep duong cheo chinh tang: " << endl;
		SapXepDuongCheoChinhTang460(a, n);
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 461:
	{
		cout << "Sau khi sap xep duong cheo phu tang: " << endl;
		SapXepDuongCheoPhuTang461(a, n);
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 462:
	{
		cout << "Nhap 2 dong muon hoan vi:" << endl;
		int dong1, dong2;
		cin >> dong1 >> dong2;
		HoanVi2Dong462(a, n, dong1, dong2);
		cout << "Ma tran sau khi hoan vi 2 dong: " << dong1 << " & " << dong2 << endl;
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 463:
	{
		cout << "Nhap 2 cot muon hoan vi:" << endl;
		int cot1, cot2;
		cin >> cot1 >> cot2;
		HoanVi2Cot463(a, n, cot1, cot2);
		cout << "Ma tran sau khi hoan vi 2 dong: " << cot1 << " & " << cot2 << endl;
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 464:
	{
		cout << "Ma tran sau khi sap xep tang theo tong dong: " << endl;
		SapXepTangTheoTongDong464(a, n);
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 465:
	{
		cout << "Ma tran sau khi dua chan ve dau: " << endl;
		DuaChanVeDauMaChan465(a, n);
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 466:
	{
		cout << "Ma tran sau khi sap xep tang tam giac tren: " << endl;
		SapXepTamGiacTren466(a, n);
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 467:
	{
		cout << "Ma tran sau khi sap xep giam tam giac duoi: " << endl;
		SapXepTamGiacDuoi467(a, n);
		XuatMaTranVuongNguyen(a, n);
		break;
	}
	case 469:
	{
		cout << "Nhap ma tran b: " << endl;
		int **b = new int *[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = new int[n];
		}
		NhapMaTranNguyenVuong(b, n);
		int Select;
		cout << "1: tinh ma tran: " << endl;
		cout << "2: tao ma tran: " << endl;
		cin >> Select;
		if (Select == 1)
		{
			cout << "Tong 2 ma tran: ";
			cout << TinhTong2MaTran469a(a, n, b, n) << endl;
		}
		else if (Select == 2)
		{
			int **Tong = new int*[n];
			for (int i = 0; i < n; i++)
			{
				Tong[i] = new int[n];
			}
			XayDungMaTranTong469b(a, n, b, Tong);
			cout << "Ma tran duoc xay dung tu tong ma tran a + b: " << endl;
			XuatMaTranVuongNguyen(Tong, n);
		}
		break;
	}
	case 470:
	{
		cout << "Nhap ma tran b: " << endl;
		int **b = new int *[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = new int[n];
		}
		NhapMaTranNguyenVuong(b, n);
		int Select;
		cout << "1: tinh ma tran: " << endl;
		cout << "2: tao ma tran: " << endl;
		cin >> Select;
		if (Select == 1)
		{
			cout << "Hieu 2 ma tran: ";
			cout << TinhHieu2MaTran470a(a, n, b, n) << endl;
		}
		else if (Select == 2)
		{
			int **Hieu = new int*[n];
			for (int i = 0; i < n; i++)
			{
				Hieu[i] = new int[n];
			}
			XayDungMaTranHieu470b(a, n, b, Hieu);
			cout << "Ma tran duoc xay dung tu tong ma tran a - b: " << endl;
			XuatMaTranVuongNguyen(Hieu, n);
		}

		break;
	}
	case 471:
	{
		cout << "Nhap ma tran b: " << endl;
		int **b = new int *[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = new int[n];
		}
		NhapMaTranNguyenVuong(b, n);
		int Select;
		cout << "1: tinh ma tran: " << endl;
		cout << "2: tao ma tran: " << endl;
		cin >> Select;
		if (Select == 1)
		{
			cout << "Tich 2 ma tran: ";
			cout << TinhTich2MaTran471a(a, n, b, n) << endl;
		}
		else if (Select == 2)
		{
			int **Tich = new int*[n];
			for (int i = 0; i < n; i++)
			{
				Tich[i] = new int[n];
			}
			XayDungMaTranTich471b(a, n, b, Tich);
			cout << "Ma tran duoc xay dung tu tong ma tran a * b: " << endl;
			XuatMaTranVuongNguyen(Tich, n);
		}

		break;
	}
	default:
		break;
	}
}

void NhapMaTranNguyenVuong(int ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}

void NhapMaTranThucVuong(float ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}

void XuatMaTranVuongNguyen(int ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				cout << " " << a[i][j] << "    ";
			else
				cout << a[i][j] << "    ";
		}
		cout << endl;
	}
}

void XuatMaTranVuongThuc(float ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				cout << " " << a[i][j] << "    ";
			else
				cout << a[i][j] << "    ";
		}
		cout << endl;
	}
}

float TimMaxMaTranThuc433(float ** a, int n)
{
	float Max = 0.0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > Max)
				Max = a[i][j];
		}
	}
	return Max;
}

int KiemTraTonTaiSoNguyenTo434(int ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1 && a[i][j] < 2004)
				return 1;
		}
	}
	return 0;
}

int DemSoNguyenTo435(int ** a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1)
				Dem++;
		}
	}
	return Dem;
}

float TinhTongAm436(float ** a, int n)
{
	float Tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				Tong += a[i][j];
		}
	}
	return Tong;
}

void SapXepMaTranVuong437(int ** a, int n)
{
	int mn = n * n;
	for (int i = 0; i < mn-1; i++)
	{
		for ( int j = i+1; j < mn; j++)
		{
			if (a[i/n][i%n] > a[j/n][j%n])
				swap(a[i / n][i%n] , a[j / n][j%n]);
		}
	}
}

int TinhTongTamGiacTren438(int ** a, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > i )
				Tong += a[i][j];
		}
	}
	return Tong;
}

int TinhTongTamGiacDuoi439(int ** a, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
				Tong += a[i][j];
		}
	}
	return Tong;
}

int TinhTongDuongCheoChinh440(int ** a, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		Tong += a[i][i];
	}
	return Tong;
}

int TinhTongDuongCheoPhu441(int ** a, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		Tong += a[i][n - i - 1];
	}
	return Tong;
}

int TinhTongChanBien442(int ** a, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i == 0 || i == n - 1 || j == 0 || j == n - 1) && a[i][j] % 2 == 0)
				Tong += a[i][j];	
		}
	}
	return Tong;
}

int TimMaxTamGiacTren443(int ** a, int n)
{
	int Max = a[0][1];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > i && a[i][j] > Max)
				Max = a[i][j];
		}
	}
	return Max;
}

int TimMinTamGiacDuoi444(int ** a, int n)
{
	int Min = a[1][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j && a[i][j] < Min)
				Min = a[i][j];
		}
	}
	return Min;
}

int TimMaxDuongCheoChinh445(int ** a, int n)
{
	int Max = a[0][0];
	for (int i = 0; i < n; i++)
	{
		if (a[i][i] > Max)
			Max = a[i][i];
	}
	return Max;
}

int TimMinDuongCheoPhu446(int ** a, int n)
{
	int Min = a[0][n - 1];
	for (int i = 0; i < n; i++)
	{
		if (a[i][n - i - 1] < Min)
			Min = a[i][n - i - 1];
	}
	return Min;
}

int TimNguyenToMax447(int ** a, int n)
{
	int Max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1 && a[i][j] > Max)
				Max = a[i][j];
		}
	}
	return Max;
}

int TimHaiGiaTriGanNhauNhat448(int ** a, int n, int & x1, int & x2)
{
	int HieuMin = abs(x1 - x2);
	int mn = n * n;

	for (int i = 0; i < mn-1; i++)
	{
		for (int j = i+1; j < mn; j++)
		{
			if ((abs(a[i / n][i%n] - a[j / n][j%n])) < HieuMin)
			{
				x1 = a[j / n][j%n];
				x2 = a[i / n][i%n];
				HieuMin = abs(x1 - x2);
			}
		}
	}
	return HieuMin;
}

void XuatMaTranCon(int ** a, int dDau, int dCuoi, int cDau, int cCuoi)
{
	for (int i = dDau; i <= dCuoi; i++)
	{
		for (int j = cDau; j <= cCuoi; j++)
		{
			cout << a[i][j] << "    ";
		}
		cout << endl;
	}
}

void XuatToanBoMaTranCon(int ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (k - i == l - j)
					{
						cout << endl;
						XuatMaTranCon(a, i, k, j, l);
					}
				}
			}
		}
	}
}

int TinhTongMaTranCon(int ** a, int dDau, int dCuoi, int cDau, int cCuoi)
{
	int Tong = 0;
	for (int i = dDau; i <= dCuoi; i++)
	{
		for (int j = cDau; j <= cCuoi; j++)
		{
			Tong+=a[i][j];
		}
	}
	return Tong;
}

void TimMaTranConTongMax449(int ** a, int n)
{
	int dDau, dCuoi, cDau, cCuoi;
	int Max = TinhTongMaTranCon(a, 0, 0, 0, 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (k - i == l - j && TinhTongMaTranCon(a,i,k,j,l)>Max)
					{
						Max = TinhTongMaTranCon(a, i, k, j, l);
						dDau = i;
						dCuoi = k;
						cDau = j;
						cCuoi = l;
					}
				}
			}
		}
	}
	cout << "Ma tran con co tong max: " << endl;
	XuatMaTranCon(a, dDau, dCuoi, cDau, cCuoi);
}

int DemDoiNhau450(int ** a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (a[i][j] == a[j][i])
					Dem++;
			}
		}
	}
	return Dem/2;
}

int KiemTraDongGiam(int ** a, int n, int dong)
{
	for (int i = 0; i < n-1; i++)
	{
		if(a[dong][i] < a[dong][i + 1])
			return 0;
	}
	return 1;
}

int DemDongGiam451(int ** a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraDongGiam(a, n, i) == 1)
			Dem++;
	}
	return Dem;
}

int DemSoLuongCucDai452(int ** a, int n)
{
	int Dem = 0;
	int Max = a[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > Max)
				Max = a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == Max)
				Dem++;
		}
	}
	return Dem;
}

int DemDuongDuongCheoChinh453(int ** a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i][i] > 0)
			Dem++;
	}
	return Dem;
}

int DemAmDuongCheoPhu454(int ** a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i][n - i - 1] < 0)
			Dem++;
	}
	return Dem;
}

int DemChanTamGiaTren455(int ** a, int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j - i > 0 && a[i][j] % 2 == 0)
				Dem++;
		}
	}
	return Dem;
}

int KiemTraTangDanDuongCheoChinh456(int ** a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i][i] > a[i + 1][i + 1])
			return 0;
	}
	return 1;
}

int KiemTraDoiXungQuaDuongCheo457(int ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i][j] != a[j][i])
				return 0;
		}
	}
	return 1;
}

int KiemTraDoiXung458(int ** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i][j] != a[n - j - 1][n-i-1])
				return 0;
		}
	}
	return 1;
}

int KiemTraMaPhuongLe459(int **a, int n)
{
	if (TinhTongDuongCheoChinh440(a, n) != TinhTongDuongCheoPhu441(a, n))
		return 0;
	int TongDong, TongCot;
	TongDong = 0;
	TongCot = 0; 
	for (int i = 0; i < n; i++)
	{
		if (TinhTongDong(a, n, i) != TinhTongCot(a, n, i))
			return 0;
	}
	for (int i = 0; i < n-1; i++)
	{
		if (TinhTongDong(a, n, i) != TinhTongDong(a, n, i + 1))
			return 0;
		if (TinhTongCot(a, n, i) != TinhTongCot(a, n, i + 1))
			return 0;
	}
	if (TinhTongCot(a, n, 0) != TinhTongDuongCheoChinh440(a, n))
		return 0;
	if (TinhTongDong(a, n, 0) != TinhTongDuongCheoChinh440(a, n))
		return 0;
	return 1;
}

void SapXepDuongCheoChinhTang460(int ** a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i][i] > a[j][j])
				swap(a[i][i], a[j][j]);
		}
	}
}

void SapXepDuongCheoPhuTang461(int ** a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i][n - i - 1] > a[j][n - j - 1])
				swap(a[i][n - i - 1], a[j][n - j - 1]);
		}
	}
}

void HoanVi2Dong462(int ** a, int n, int dong1, int dong2)
{
	for (int i = 0; i < n; i++)
	{
		swap(a[dong1][i], a[dong2][i]);
	}
}

void HoanVi2Cot463(int ** a, int n, int cot1, int cot2)
{
	for (int i = 0; i < n; i++)
	{
		swap(a[i][cot1], a[i][cot2]);
	}
}

void SapXepTangTheoTongDong464(int ** a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (TinhTongDong(a, n, i) > TinhTongDong(a, n, j))
				HoanVi2Dong462(a, n, i, j);
		}
	}
}

void DuaChanVeDauMaChan465(int ** a, int n)
{
	int *b = new int[n*n];
	int iDex = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
				b[iDex++] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
				b[iDex++] = a[i][j];
		}
	}
	iDex = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[iDex++];
		}
	}
}

void SapXepTamGiacTren466(int ** a, int n)
{
	int SoLuong = ((n*n) - n) / 2;
	int *b = new int[SoLuong];
	int iDex = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j - i > 0)
				b[iDex++] = a[i][j];
		}
	}
	SapXepMangTang(b, SoLuong);
	iDex = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j - i > 0)
				a[i][j] = b[iDex++];
		}
	}
	delete[]b;
}

void SapXepTamGiacDuoi467(int ** a, int n)
{
	int SoLuong = ((n*n) - n) / 2;
	int *b = new int[SoLuong];
	int iDex = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j - i < 0)
				b[iDex++] = a[i][j];
		}
	}
	SapXepMangGiam(b, SoLuong);
	iDex = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j - i < 0)
				a[i][j] = b[iDex++];
		}
	}
	delete[]b;
}

int TongMaTranVuong(int ** a, int n)
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Tong += a[i][j];
		}
	}
	return Tong;
}

int HieuMaTranVuong(int ** a, int n)
{

	int Hieu = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Hieu -= a[i][j];
		}
	}
	return Hieu;
}

int TichMaTranVuong(int ** a, int n)
{
	int Tich = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Tich *= a[i][j];
		}
	}
	return Tich;
}

int TinhTong2MaTran469a(int ** a, int na, int ** b, int nb)
{
	return TongMaTranVuong(a,na) + TongMaTranVuong(b,nb);
}

int TinhHieu2MaTran470a(int ** a, int na, int ** b, int nb)
{
	return HieuMaTranVuong(a,na) - HieuMaTranVuong(b,nb);
}

int TinhTich2MaTran471a(int ** a, int na, int ** b, int nb)
{
	return TichMaTranVuong(a,na) * TichMaTranVuong(b,nb);
}

void XayDungMaTranTong469b(int ** a, int n, int ** b, int ** &Tong)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Tong[i][j] = a[i][j] + b[i][j];
		}
	}
}

void XayDungMaTranHieu470b(int ** a, int n, int ** b, int **& Hieu)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Hieu[i][j] = a[i][j] - b[i][j];
		}
	}
}

void XayDungMaTranTich471b(int ** a, int n, int ** b, int **& Tich)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int Temp = 0;
			for (int k = 0; k < n; k++)
			{
				Temp =  Temp + (a[i][k] * b[k][j]);
			}
			Tich[i][j] = Temp;
		}
	}
}
