#include<iostream>
#include<conio.h>

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
	int k;
	NhapMangTuDong();
	system("CLS");
	cout << "\n" << n << " so nguyen duong dau tien:\n";
	XuatDaySo();
	cout << endl << "Nhap so lan liet ke cac hoan vi, k = ";
	cin >> k;
	LietKe_HoanVi(n);
	_getch();
}