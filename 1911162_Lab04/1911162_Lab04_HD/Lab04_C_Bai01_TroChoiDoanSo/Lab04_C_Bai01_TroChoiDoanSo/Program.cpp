#include<iostream>
#include<conio.h>
#include<time.h>
#include<cstdlib>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 1;
}

void ChayChuongTrinh()
{
	char kt;
	int kq, k, soDe;
	do
	{
		system("cls");
		soDe = SinhSoNgauNhien();
		k = ChonMucDoan();
		kq = XuLyTroChoi(k, soDe);
		system("cls");
		cout << "\n TRO CHOI DOAN SO VOI SO LAN DOAN : k = " << k << ":\n";
		ThongBaoKetQua(kq, soDe);
		_getch();
		system("cls");
		cout << "\nChoi nua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}