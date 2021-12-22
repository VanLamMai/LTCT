#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int a[MAX], b[MAX], c[MAX];
	int thoat;
	int la, lb, lc;
	SoTuNhienLon m, n, t;
	do
	{
		system("CLS");
		cout << "\nNhap so tu nhien lon m: ";
		cin >> m;
		cout << "\nNhap so tu nhien lon n: ";
		cin >> n;
		cout << "\nNhap so tu nhien lon t: ";
		cin >> t;
		cout << "\nChuoi sang mang: ";
		Chuyen_Chuoi_Sang_Mang(m, a, la);
		Chuyen_Chuoi_Sang_Mang(n, b, lb);

		cout << "\nMang dao nguoc : ";
		DaoNguocMang(a, la);
		DaoNguocMang(b, lb);
		DaoNguocMang(c, lc);

		cout << "\nCong 2 mang: ";
		CongMang(a, la, b, lb, c, lc);

		cout << "\nMang sang chuoi: ";
		ChuyenMang_Sang_Chuoi(c, lc, t);
		cout << endl << "Nua khong ? go ESC neu khong\n";
		thoat = _getch();
	} while (thoat != 27);
	_getch();
}