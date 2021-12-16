#include<iostream>
#include<conio.h>
#include<iomanip>

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
	int month, year, day, dayofweek;
	do
	{
		system("cls");
		cout << "\nNhap thang: ";
		cin >> month;
		cout << "\nNhap nam: ";
		cin >> year;
		cout << "\n\n\nLich cua thang " << month << " nam " << year << "\n\n";
		day = TimSoNgay(month, year);
		dayofweek = DoiThu(1, month, year);
		Lich(dayofweek, day);
		_getch();
	} while (month > 0);
}